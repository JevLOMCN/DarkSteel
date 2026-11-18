// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 176

// StaticStruct @ 1474210b0

UScriptStruct * __cdecl FAnimInstanceProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimInstanceProxy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimInstanceProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceProxy,(UObject *)pUVar1,
                         L"AnimInstanceProxy");
  }
  return Z_Registration_Info_UScriptStruct_FAnimInstanceProxy.OuterSingleton;
}

// FAnimInstanceProxy @ 1474318a0

/* WARNING: Type propagation algorithm not settling */

FAnimInstanceProxy * __thiscall
FAnimInstanceProxy::FAnimInstanceProxy(FAnimInstanceProxy *this,FAnimInstanceProxy *param_1)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FAnimSync *pFVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
  *this_01;
  TMap<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
  *pTVar6;
  TArray<FMontageActiveSlotTracker,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> *pTVar9;
  TMap<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
  *this_02;
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FNativeTransitionBinding,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_> *pTVar13;
  TMap<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
  *this_03;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  int iVar16;
  FQueuedDrawDebugItem *pFVar17;
  FAnimTickRecord *pFVar18;
  FScriptContainerElement *pFVar19;
  FAnimNotifyEventReference *pFVar20;
  ulong64 uVar21;
  TReferenceControllerBase<1> *pTVar22;
  FMontageEvaluationState *pFVar23;
  FNativeTransitionBinding *pFVar24;
  FNativeStateBinding *pFVar25;
  FPoseSnapshot *pFVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  short sVar36;
  short sVar37;
  undefined4 uVar38;
  byte bVar39;
  int *piVar40;
  
  pTVar1 = &this->QueuedDrawDebugItems;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined ***)this = &___7FAnimInstanceProxy__6B_;
  iVar16 = (param_1->QueuedDrawDebugItems).ArrayNum;
  piVar40 = &(this->QueuedDrawDebugItems).ArrayMax;
  pFVar17 = (FQueuedDrawDebugItem *)(param_1->QueuedDrawDebugItems).AllocatorInstance.Data;
  (this->QueuedDrawDebugItems).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,iVar16,0,&pTVar1->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FQueuedDrawDebugItem,FQueuedDrawDebugItem,int>
              ((pTVar1->AllocatorInstance).Data,pFVar17,iVar16);
  }
  dVar35 = (param_1->ComponentTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentTransform).Translation.XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentRelativeTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentRelativeTransform).Translation.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Translation.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentRelativeTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ActorTransform).Rotation.XY.m128d_f64[1];
  (this->ActorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ActorTransform).Rotation.XY.m128d_f64[0];
  (this->ActorTransform).Rotation.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ActorTransform).Rotation.ZW.m128d_f64[1];
  (this->ActorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ActorTransform).Rotation.ZW.m128d_f64[0];
  (this->ActorTransform).Rotation.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ActorTransform).Translation.XY.m128d_f64[1];
  (this->ActorTransform).Translation.XY.m128d_f64[0] =
       (param_1->ActorTransform).Translation.XY.m128d_f64[0];
  (this->ActorTransform).Translation.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ActorTransform).Translation.ZW.m128d_f64[1];
  (this->ActorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ActorTransform).Translation.ZW.m128d_f64[0];
  (this->ActorTransform).Translation.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ActorTransform).Scale3D.XY.m128d_f64[1];
  (this->ActorTransform).Scale3D.XY.m128d_f64[0] = (param_1->ActorTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->ActorTransform).Scale3D.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ActorTransform).Scale3D.ZW.m128d_f64[1];
  (this->ActorTransform).Scale3D.ZW.m128d_f64[0] = (param_1->ActorTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->ActorTransform).Scale3D.ZW.m128d_f64[1] = dVar35;
  this->AnimInstanceObject = param_1->AnimInstanceObject;
  this->AnimClassInterface = param_1->AnimClassInterface;
  this->Skeleton = param_1->Skeleton;
  this->SkeletalMeshComponent = param_1->SkeletalMeshComponent;
  this->MainInstanceProxy = param_1->MainInstanceProxy;
  this->CurrentDeltaSeconds = param_1->CurrentDeltaSeconds;
  this->CurrentTimeDilation = param_1->CurrentTimeDilation;
  ::FString::FString(&this->ActorName,&param_1->ActorName);
  this_00 = &this->SavedPoseQueueMap;
  this->RootNode = param_1->RootNode;
  this->DefaultLinkedInstanceInputNode = param_1->DefaultLinkedInstanceInputNode;
  puVar2 = &(this->SavedPoseQueueMap).field_0x48;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x20 = 0;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x34 = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_00 != &param_1->SavedPoseQueueMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->SavedPoseQueueMap).field_0x38,(int *)puVar2,
               (ForElementType<FSetElementId> *)&(param_1->SavedPoseQueueMap).field_0x38,
               *(int *)&(param_1->SavedPoseQueueMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SavedPoseQueueMap);
  }
  pFVar4 = &this->Sync;
  pFVar4->UngroupedActivePlayerArrays[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->Sync).UngroupedActivePlayerArrays[0].ArrayMax;
  iVar16 = (param_1->Sync).UngroupedActivePlayerArrays[0].ArrayNum;
  pFVar18 = (FAnimTickRecord *)(param_1->Sync).UngroupedActivePlayerArrays[0].AllocatorInstance.Data
  ;
  (this->Sync).UngroupedActivePlayerArrays[0].ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar16,0,(ForAnyElementType *)pFVar4,iVar16,piVar40);
    ConstructItems<FAnimTickRecord,FAnimTickRecord,int>
              (pFVar4->UngroupedActivePlayerArrays[0].AllocatorInstance.Data,pFVar18,iVar16);
  }
  (this->Sync).UngroupedActivePlayerArrays[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pTVar3 = (this->Sync).UngroupedActivePlayerArrays + 1;
  iVar16 = (param_1->Sync).UngroupedActivePlayerArrays[1].ArrayNum;
  piVar40 = &(this->Sync).UngroupedActivePlayerArrays[1].ArrayMax;
  pFVar18 = (FAnimTickRecord *)(param_1->Sync).UngroupedActivePlayerArrays[1].AllocatorInstance.Data
  ;
  (this->Sync).UngroupedActivePlayerArrays[1].ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar16,0,&pTVar3->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FAnimTickRecord,FAnimTickRecord,int>
              ((pTVar3->AllocatorInstance).Data,pFVar18,iVar16);
  }
  *(undefined8 *)(this->Sync).SyncGroupMaps = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x8 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x20 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x28 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x2c = 0x80;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x34 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x40 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x48 = 0;
  TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
               *)(this->Sync).SyncGroupMaps,
              (TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
               *)(param_1->Sync).SyncGroupMaps);
  *(undefined8 *)((this->Sync).SyncGroupMaps + 1) = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x8 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x20 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x28 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x2c = 0x80;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x34 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x40 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x48 = 0;
  TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
               *)((this->Sync).SyncGroupMaps + 1),
              (TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
               *)((param_1->Sync).SyncGroupMaps + 1));
  pTVar5 = this->MachineWeightArrays;
  (this->Sync).MirrorDataTable = (param_1->Sync).MirrorDataTable;
  (this->Sync).SyncGroupWriteIndex = (param_1->Sync).SyncGroupWriteIndex;
  piVar40 = &this->MachineWeightArrays[0].ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar16 = param_1->MachineWeightArrays[0].ArrayNum;
  pFVar19 = param_1->MachineWeightArrays[0].AllocatorInstance.Data;
  this->MachineWeightArrays[0].ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar16,0,&pTVar5->AllocatorInstance,iVar16,piVar40);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar19,(longlong)iVar16 << 2);
  }
  this->MachineWeightArrays[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar16 = param_1->MachineWeightArrays[1].ArrayNum;
  pFVar19 = param_1->MachineWeightArrays[1].AllocatorInstance.Data;
  this->MachineWeightArrays[1].ArrayNum = iVar16;
  piVar40 = &this->MachineWeightArrays[1].ArrayMax;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar16,0,&this->MachineWeightArrays[1].AllocatorInstance,iVar16,piVar40);
    memcpy(this->MachineWeightArrays[1].AllocatorInstance.Data,pFVar19,(longlong)iVar16 << 2);
  }
  pTVar5 = this->StateWeightArrays;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &this->StateWeightArrays[0].ArrayMax;
  iVar16 = param_1->StateWeightArrays[0].ArrayNum;
  pFVar19 = param_1->StateWeightArrays[0].AllocatorInstance.Data;
  this->StateWeightArrays[0].ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar16,0,&pTVar5->AllocatorInstance,iVar16,piVar40);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar19,(longlong)iVar16 << 2);
  }
  this->StateWeightArrays[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar16 = param_1->StateWeightArrays[1].ArrayNum;
  pFVar19 = param_1->StateWeightArrays[1].AllocatorInstance.Data;
  this->StateWeightArrays[1].ArrayNum = iVar16;
  piVar40 = &this->StateWeightArrays[1].ArrayMax;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar16,0,&this->StateWeightArrays[1].AllocatorInstance,iVar16,piVar40);
    memcpy(this->StateWeightArrays[1].AllocatorInstance.Data,pFVar19,(longlong)iVar16 << 2);
  }
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x0 = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x8 = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x20 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x28 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x34 = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x40 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->StateMachineClassIndexToWeightOffset,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->StateMachineClassIndexToWeightOffset);
  pTVar8 = &(this->NotifyQueue).AnimNotifies;
  this->BufferWriteIndex = param_1->BufferWriteIndex;
  (this->NotifyQueue).PredictedLODLevel = (param_1->NotifyQueue).PredictedLODLevel;
  (this->NotifyQueue).RandomStream = (param_1->NotifyQueue).RandomStream;
  piVar40 = &(this->NotifyQueue).AnimNotifies.ArrayMax;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar16 = (param_1->NotifyQueue).AnimNotifies.ArrayNum;
  pFVar20 = (FAnimNotifyEventReference *)(param_1->NotifyQueue).AnimNotifies.AllocatorInstance.Data;
  (this->NotifyQueue).AnimNotifies.ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar16,0,&pTVar8->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FAnimNotifyEventReference,FAnimNotifyEventReference,int>
              ((pTVar8->AllocatorInstance).Data,pFVar20,iVar16);
  }
  this_01 = &(this->NotifyQueue).UnfilteredMontageAnimNotifies;
  *(undefined8 *)this_01 = 0;
  pTVar6 = &(param_1->NotifyQueue).UnfilteredMontageAnimNotifies;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x8 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x20 = 0;
  puVar2 = &(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x28 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x2c = 0x80;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x34 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_01 != pTVar6) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x38,(int *)puVar2,
               (ForElementType<FSetElementId> *)
               &(param_1->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x38,
               *(int *)&(param_1->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_01,
                (TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar6);
  }
  (this->NotifyQueue).World.WeakPtr = (param_1->NotifyQueue).World.WeakPtr;
  this->RootMotionMode = param_1->RootMotionMode;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x0 = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x34 = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x48 = 0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->SlotNameToTrackerIndex,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&param_1->SlotNameToTrackerIndex);
  pTVar7 = this->SlotWeightTracker;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &this->SlotWeightTracker[0].ArrayMax;
  iVar16 = param_1->SlotWeightTracker[0].ArrayNum;
  pFVar19 = param_1->SlotWeightTracker[0].AllocatorInstance.Data;
  this->SlotWeightTracker[0].ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar16,0,&pTVar7->AllocatorInstance,iVar16,piVar40);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar19,(longlong)iVar16 * 0xc);
  }
  this->SlotWeightTracker[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar16 = param_1->SlotWeightTracker[1].ArrayNum;
  pFVar19 = param_1->SlotWeightTracker[1].AllocatorInstance.Data;
  this->SlotWeightTracker[1].ArrayNum = iVar16;
  piVar40 = &this->SlotWeightTracker[1].ArrayMax;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar16,0,&this->SlotWeightTracker[1].AllocatorInstance,iVar16,piVar40);
    memcpy(this->SlotWeightTracker[1].AllocatorInstance.Data,pFVar19,(longlong)iVar16 * 0xc);
  }
  *(undefined8 *)&this->AnimationCurves[0].field_0x0 = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[0].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x48 = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)this->AnimationCurves,
            (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)param_1->AnimationCurves);
  *(undefined8 *)(this->AnimationCurves + 1) = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[1].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x48 = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)(this->AnimationCurves + 1),
            (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)(param_1->AnimationCurves + 1));
  *(undefined8 *)
   &((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *)
    (this->AnimationCurves + 2))->Elements = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[2].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x48 = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)(this->AnimationCurves + 2),
            (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)(param_1->AnimationCurves + 2));
  *(undefined8 *)&(this->MaterialParametersToClear).Elements = 0;
  *(undefined8 *)&(this->MaterialParametersToClear).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MaterialParametersToClear).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x34 = 0;
  (this->MaterialParametersToClear).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MaterialParametersToClear).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->MaterialParametersToClear,&param_1->MaterialParametersToClear);
  pTVar8 = &this->ActiveAnimNotifiesSinceLastTick;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->ActiveAnimNotifiesSinceLastTick).ArrayMax;
  iVar16 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar20 = (FAnimNotifyEventReference *)
            (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  (this->ActiveAnimNotifiesSinceLastTick).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar16,0,&pTVar8->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FAnimNotifyEventReference,FAnimNotifyEventReference,int>
              ((pTVar8->AllocatorInstance).Data,pFVar20,iVar16);
  }
  sVar36 = (param_1->InitializationCounter).Counter;
  sVar37 = (param_1->InitializationCounter).SkipFrames;
  uVar38 = *(undefined4 *)&(param_1->InitializationCounter).field_0xc;
  (this->InitializationCounter).LastSyncronizedFrame =
       (param_1->InitializationCounter).LastSyncronizedFrame;
  (this->InitializationCounter).Counter = sVar36;
  (this->InitializationCounter).SkipFrames = sVar37;
  *(undefined4 *)&(this->InitializationCounter).field_0xc = uVar38;
  sVar36 = (param_1->CachedBonesCounter).Counter;
  sVar37 = (param_1->CachedBonesCounter).SkipFrames;
  uVar38 = *(undefined4 *)&(param_1->CachedBonesCounter).field_0xc;
  (this->CachedBonesCounter).LastSyncronizedFrame =
       (param_1->CachedBonesCounter).LastSyncronizedFrame;
  (this->CachedBonesCounter).Counter = sVar36;
  (this->CachedBonesCounter).SkipFrames = sVar37;
  *(undefined4 *)&(this->CachedBonesCounter).field_0xc = uVar38;
  sVar36 = (param_1->UpdateCounter).Counter;
  sVar37 = (param_1->UpdateCounter).SkipFrames;
  uVar38 = *(undefined4 *)&(param_1->UpdateCounter).field_0xc;
  (this->UpdateCounter).LastSyncronizedFrame = (param_1->UpdateCounter).LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar36;
  (this->UpdateCounter).SkipFrames = sVar37;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar38;
  sVar36 = (param_1->EvaluationCounter).Counter;
  sVar37 = (param_1->EvaluationCounter).SkipFrames;
  uVar38 = *(undefined4 *)&(param_1->EvaluationCounter).field_0xc;
  (this->EvaluationCounter).LastSyncronizedFrame = (param_1->EvaluationCounter).LastSyncronizedFrame
  ;
  (this->EvaluationCounter).Counter = sVar36;
  (this->EvaluationCounter).SkipFrames = sVar37;
  *(undefined4 *)&(this->EvaluationCounter).field_0xc = uVar38;
  sVar36 = (param_1->SlotNodeInitializationCounter).Counter;
  sVar37 = (param_1->SlotNodeInitializationCounter).SkipFrames;
  uVar38 = *(undefined4 *)&(param_1->SlotNodeInitializationCounter).field_0xc;
  (this->SlotNodeInitializationCounter).LastSyncronizedFrame =
       (param_1->SlotNodeInitializationCounter).LastSyncronizedFrame;
  (this->SlotNodeInitializationCounter).Counter = sVar36;
  (this->SlotNodeInitializationCounter).SkipFrames = sVar37;
  *(undefined4 *)&(this->SlotNodeInitializationCounter).field_0xc = uVar38;
  this->FrameCounterForUpdate = param_1->FrameCounterForUpdate;
  uVar21 = param_1->FrameCounterForNodeUpdate;
  (this->InterpolationOverride).bIsSet = false;
  this->FrameCounterForNodeUpdate = uVar21;
  bVar15 = (param_1->InterpolationOverride).bIsSet;
  (this->InterpolationOverride).bIsSet = bVar15;
  if (bVar15 != false) {
    (this->InterpolationOverride).TypedValue = (param_1->InterpolationOverride).TypedValue;
  }
  (this->ExtractedRootMotion).bHasRootMotion = (param_1->ExtractedRootMotion).bHasRootMotion;
  (this->ExtractedRootMotion).BlendWeight = (param_1->ExtractedRootMotion).BlendWeight;
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar28 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar29._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar29._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar29._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64 =
       auVar29;
  auVar30._8_4_ = SUB84((double)fVar28,0);
  auVar30._0_8_ = (double)fVar27;
  auVar30._12_4_ = (int)((ulonglong)(double)fVar28 >> 0x20);
  *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64 =
       auVar30;
  fVar27 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar28 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar31._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar31._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar31._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64 =
       auVar31;
  auVar32._8_4_ = SUB84((double)fVar28,0);
  auVar32._0_8_ = (double)fVar27;
  auVar32._12_4_ = (int)((ulonglong)(double)fVar28 >> 0x20);
  *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64 =
       auVar32;
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar28 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar33._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar33._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar33._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64 =
       auVar33;
  auVar34._8_4_ = SUB84((double)fVar28,0);
  auVar34._0_8_ = (double)fVar27;
  auVar34._12_4_ = (int)((ulonglong)(double)fVar28 >> 0x20);
  *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64 =
       auVar34;
  dVar35 = (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = dVar35;
  dVar35 = (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = dVar35;
  (this->RequiredBones).Object = (param_1->RequiredBones).Object;
  pTVar22 = (param_1->RequiredBones).SharedReferenceCount.ReferenceController;
  (this->RequiredBones).SharedReferenceCount.ReferenceController = pTVar22;
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = &this->MontageEvaluationData;
  this->LODLevel = param_1->LODLevel;
  this->CacheBonesRecursionCounter = param_1->CacheBonesRecursionCounter;
  this->NumUroSkippedFrames_Update = param_1->NumUroSkippedFrames_Update;
  this->NumUroSkippedFrames_Eval = param_1->NumUroSkippedFrames_Eval;
  piVar40 = &(this->MontageEvaluationData).ArrayMax;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar16 = (param_1->MontageEvaluationData).ArrayNum;
  pFVar23 = (FMontageEvaluationState *)(param_1->MontageEvaluationData).AllocatorInstance.Data;
  (this->MontageEvaluationData).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar16,0,&pTVar9->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FMontageEvaluationState,FMontageEvaluationState,int>
              ((pTVar9->AllocatorInstance).Data,pFVar23,iVar16);
  }
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x0 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x48 = 0;
  TSet<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>,FDefaultSetAllocator>
               *)&this->SlotGroupInertializationRequestMap,
              (TSet<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>,FDefaultSetAllocator>
               *)&param_1->SlotGroupInertializationRequestMap);
  this_02 = &this->SlotGroupInertializationRequestDataMap;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x20 = 0;
  puVar2 = &(this->SlotGroupInertializationRequestDataMap).field_0x48;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_02 != &param_1->SlotGroupInertializationRequestDataMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->SlotGroupInertializationRequestDataMap).field_0x38,(int *)puVar2,
               (ForElementType<FSetElementId> *)
               &(param_1->SlotGroupInertializationRequestDataMap).field_0x38,
               *(int *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_02,
                (TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SlotGroupInertializationRequestDataMap);
  }
  pTVar10 = &this->GameThreadPreUpdateNodes;
  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->GameThreadPreUpdateNodes).ArrayMax;
  iVar16 = (param_1->GameThreadPreUpdateNodes).ArrayNum;
  pFVar19 = (param_1->GameThreadPreUpdateNodes).AllocatorInstance.Data;
  (this->GameThreadPreUpdateNodes).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar16,0,&pTVar10->AllocatorInstance,iVar16,piVar40);
    memcpy((pTVar10->AllocatorInstance).Data,pFVar19,(longlong)iVar16 << 3);
  }
  pTVar10 = &this->LODDisabledGameThreadPreUpdateNodes;
  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->LODDisabledGameThreadPreUpdateNodes).ArrayMax;
  iVar16 = (param_1->LODDisabledGameThreadPreUpdateNodes).ArrayNum;
  pFVar19 = (param_1->LODDisabledGameThreadPreUpdateNodes).AllocatorInstance.Data;
  (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar16,0,&pTVar10->AllocatorInstance,iVar16,piVar40);
    memcpy((pTVar10->AllocatorInstance).Data,pFVar19,(longlong)iVar16 << 3);
  }
  pTVar10 = &this->DynamicResetNodes;
  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->DynamicResetNodes).ArrayMax;
  iVar16 = (param_1->DynamicResetNodes).ArrayNum;
  pFVar19 = (param_1->DynamicResetNodes).AllocatorInstance.Data;
  (this->DynamicResetNodes).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar16,0,&pTVar10->AllocatorInstance,iVar16,piVar40);
    memcpy((pTVar10->AllocatorInstance).Data,pFVar19,(longlong)iVar16 << 3);
  }
  pTVar11 = &this->NativeTransitionBindings;
  (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->NativeTransitionBindings).ArrayMax;
  iVar16 = (param_1->NativeTransitionBindings).ArrayNum;
  pFVar24 = (FNativeTransitionBinding *)(param_1->NativeTransitionBindings).AllocatorInstance.Data;
  (this->NativeTransitionBindings).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar16,0,&pTVar11->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FNativeTransitionBinding,FNativeTransitionBinding,int>
              ((pTVar11->AllocatorInstance).Data,pFVar24,iVar16);
  }
  pTVar12 = &this->NativeStateEntryBindings;
  (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->NativeStateEntryBindings).ArrayMax;
  iVar16 = (param_1->NativeStateEntryBindings).ArrayNum;
  pFVar25 = (FNativeStateBinding *)(param_1->NativeStateEntryBindings).AllocatorInstance.Data;
  (this->NativeStateEntryBindings).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar16,0,&pTVar12->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FNativeStateBinding,FNativeStateBinding,int>
              ((pTVar12->AllocatorInstance).Data,pFVar25,iVar16);
  }
  pTVar12 = &this->NativeStateExitBindings;
  (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->NativeStateExitBindings).ArrayMax;
  iVar16 = (param_1->NativeStateExitBindings).ArrayNum;
  pFVar25 = (FNativeStateBinding *)(param_1->NativeStateExitBindings).AllocatorInstance.Data;
  (this->NativeStateExitBindings).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar16,0,&pTVar12->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FNativeStateBinding,FNativeStateBinding,int>
              ((pTVar12->AllocatorInstance).Data,pFVar25,iVar16);
  }
  pTVar13 = &this->PoseSnapshots;
  (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->PoseSnapshots).ArrayMax;
  iVar16 = (param_1->PoseSnapshots).ArrayNum;
  pFVar26 = (FPoseSnapshot *)(param_1->PoseSnapshots).AllocatorInstance.Data;
  (this->PoseSnapshots).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar16,0,&pTVar13->AllocatorInstance,iVar16,piVar40);
    ConstructItems<FPoseSnapshot,FPoseSnapshot,int>
              ((pTVar13->AllocatorInstance).Data,pFVar26,iVar16);
  }
  this_03 = &this->LoggedMessagesMap;
  *(undefined8 *)this_03 = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x8 = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x20 = 0;
  puVar2 = &(this->LoggedMessagesMap).field_0x48;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x28 = 0;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x34 = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_03 != &param_1->LoggedMessagesMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->LoggedMessagesMap).field_0x38,(int *)puVar2,
               (ForElementType<FSetElementId> *)&(param_1->LoggedMessagesMap).field_0x38,
               *(int *)&(param_1->LoggedMessagesMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_03,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->LoggedMessagesMap);
  }
  pTVar14 = &this->PreviouslyLoggedMessages;
  (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar40 = &(this->PreviouslyLoggedMessages).ArrayMax;
  iVar16 = (param_1->PreviouslyLoggedMessages).ArrayNum;
  pFVar19 = (param_1->PreviouslyLoggedMessages).AllocatorInstance.Data;
  (this->PreviouslyLoggedMessages).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar16,0,&pTVar14->AllocatorInstance,iVar16,piVar40);
    memcpy((pTVar14->AllocatorInstance).Data,pFVar19,(longlong)iVar16 << 4);
  }
  this->bUpdatingRoot = param_1->bUpdatingRoot;
  bVar39 = (this->bBoneCachesInvalidated ^ param_1->bBoneCachesInvalidated) & 1 ^ this->field_0x801;
  this->field_0x801 = bVar39;
  bVar39 = (bVar39 ^ param_1->field_0x801) & 2 ^ bVar39;
  this->field_0x801 = bVar39;
  bVar39 = (bVar39 ^ param_1->field_0x801) & 4 ^ bVar39;
  this->field_0x801 = bVar39;
  bVar39 = (bVar39 ^ param_1->field_0x801) & 8 ^ bVar39;
  this->field_0x801 = bVar39;
  this->field_0x801 = (bVar39 ^ param_1->field_0x801) & 0x10 ^ bVar39;
  return this;
}

// FAnimInstanceProxy @ 1474327c0

/* WARNING: Type propagation algorithm not settling */

FAnimInstanceProxy * __thiscall
FAnimInstanceProxy::FAnimInstanceProxy(FAnimInstanceProxy *this,UAnimInstance *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  IAnimClassInterface *pIVar6;
  TSharedRef<FBoneContainer,1> *pTVar7;
  TSharedRef<FBoneContainer,1> local_18;
  
  (this->QueuedDrawDebugItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedDrawDebugItems).ArrayNum = 0;
  (this->QueuedDrawDebugItems).ArrayMax = 0;
  *(undefined ***)this = &___7FAnimInstanceProxy__6B_;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ActorTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ActorTransform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ActorTransform).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ActorTransform).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ActorTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ActorTransform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ActorTransform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ActorTransform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ActorTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ActorTransform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ActorTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ActorTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  this->AnimInstanceObject = (UObject *)param_1;
  pIVar6 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->field_0x10);
  this->AnimClassInterface = pIVar6;
  this->Skeleton = (USkeleton *)0x0;
  this->SkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  this->MainInstanceProxy = (FAnimInstanceProxy *)0x0;
  this->CurrentDeltaSeconds = 0.0;
  this->CurrentTimeDilation = 1.0;
  (this->ActorName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorName).Data.ArrayNum = 0;
  (this->ActorName).Data.ArrayMax = 0;
  this->RootNode = (FAnimNode_Base *)0x0;
  this->DefaultLinkedInstanceInputNode = (FAnimNode_LinkedInputPose *)0x0;
  *(undefined8 *)&this->SavedPoseQueueMap = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x20 = 0;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x34 = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x40 = 0;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x48 = 0;
  (this->Sync).UngroupedActivePlayerArrays[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Sync).UngroupedActivePlayerArrays[0].ArrayNum = 0;
  (this->Sync).UngroupedActivePlayerArrays[0].ArrayMax = 0;
  (this->Sync).UngroupedActivePlayerArrays[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Sync).UngroupedActivePlayerArrays[1].ArrayNum = 0;
  (this->Sync).UngroupedActivePlayerArrays[1].ArrayMax = 0;
  *(undefined8 *)(this->Sync).SyncGroupMaps = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x8 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x20 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x28 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x2c = 0x80;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x34 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x40 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x48 = 0;
  *(undefined8 *)((this->Sync).SyncGroupMaps + 1) = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x8 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x20 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x28 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x2c = 0x80;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x34 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x40 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x48 = 0;
  (this->Sync).MirrorDataTable = (UMirrorDataTable *)0x0;
  (this->Sync).SyncGroupWriteIndex = 0;
  this->MachineWeightArrays[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MachineWeightArrays[0].ArrayNum = 0;
  this->MachineWeightArrays[0].ArrayMax = 0;
  this->MachineWeightArrays[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MachineWeightArrays[1].ArrayNum = 0;
  this->MachineWeightArrays[1].ArrayMax = 0;
  this->StateWeightArrays[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StateWeightArrays[0].ArrayNum = 0;
  this->StateWeightArrays[0].ArrayMax = 0;
  this->StateWeightArrays[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StateWeightArrays[1].ArrayNum = 0;
  this->StateWeightArrays[1].ArrayMax = 0;
  *(undefined8 *)&this->StateMachineClassIndexToWeightOffset = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x8 = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x20 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x28 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x34 = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x40 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 = 0;
  (this->NotifyQueue).PredictedLODLevel = -1;
  (this->NotifyQueue).AnimNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NotifyQueue).AnimNotifies.ArrayNum = 0;
  (this->NotifyQueue).AnimNotifies.ArrayMax = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x8 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x20 = 0;
  this->BufferWriteIndex = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x28 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x2c = 0x80;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x34 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x40 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48 = 0;
  (this->NotifyQueue).World.WeakPtr = (FWeakObjectPtr)0x0;
  (this->NotifyQueue).RandomStream.InitialSeed = 0x5629063;
  (this->NotifyQueue).RandomStream.Seed = 0x5629063;
  this->RootMotionMode = NoRootMotionExtraction;
  *(undefined8 *)&this->SlotNameToTrackerIndex = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x34 = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x48 = 0;
  this->SlotWeightTracker[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SlotWeightTracker[0].ArrayNum = 0;
  this->SlotWeightTracker[0].ArrayMax = 0;
  this->SlotWeightTracker[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SlotWeightTracker[1].ArrayNum = 0;
  this->SlotWeightTracker[1].ArrayMax = 0;
  *(undefined8 *)this->AnimationCurves = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[0].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x48 = 0;
  *(undefined8 *)(this->AnimationCurves + 1) = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[1].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x48 = 0;
  *(undefined8 *)(this->AnimationCurves + 2) = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[2].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x48 = 0;
  *(undefined8 *)&(this->MaterialParametersToClear).Elements = 0;
  *(undefined8 *)&(this->MaterialParametersToClear).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MaterialParametersToClear).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x34 = 0;
  (this->MaterialParametersToClear).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MaterialParametersToClear).HashSize = 0;
  (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimNotifiesSinceLastTick).ArrayNum = 0;
  (this->ActiveAnimNotifiesSinceLastTick).ArrayMax = 0;
  (this->InitializationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->InitializationCounter).Counter = -1;
  (this->InitializationCounter).SkipFrames = 0;
  (this->CachedBonesCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->CachedBonesCounter).Counter = -1;
  (this->CachedBonesCounter).SkipFrames = 0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  (this->EvaluationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->EvaluationCounter).Counter = -1;
  (this->EvaluationCounter).SkipFrames = 0;
  (this->SlotNodeInitializationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->SlotNodeInitializationCounter).Counter = -1;
  (this->SlotNodeInitializationCounter).SkipFrames = 0;
  this->FrameCounterForUpdate = 0;
  this->FrameCounterForNodeUpdate = 0;
  (this->InterpolationOverride).bIsSet = false;
  (this->ExtractedRootMotion).bHasRootMotion = false;
  (this->ExtractedRootMotion).BlendWeight = 0.0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  pTVar7 = MakeShared<FBoneContainer,1>(&local_18);
  (this->RequiredBones).Object = pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  (this->RequiredBones).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  (this->MontageEvaluationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MontageEvaluationData).ArrayNum = 0;
  (this->MontageEvaluationData).ArrayMax = 0;
  *(undefined8 *)&this->SlotGroupInertializationRequestMap = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x20 = 0;
  this->LODLevel = 0;
  this->CacheBonesRecursionCounter = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x48 = 0;
  *(undefined8 *)&this->SlotGroupInertializationRequestDataMap = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x48 = 0;
  (this->GameThreadPreUpdateNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadPreUpdateNodes).ArrayNum = 0;
  (this->GameThreadPreUpdateNodes).ArrayMax = 0;
  (this->LODDisabledGameThreadPreUpdateNodes).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum = 0;
  (this->LODDisabledGameThreadPreUpdateNodes).ArrayMax = 0;
  (this->DynamicResetNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicResetNodes).ArrayNum = 0;
  (this->DynamicResetNodes).ArrayMax = 0;
  (this->NativeTransitionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeTransitionBindings).ArrayNum = 0;
  (this->NativeTransitionBindings).ArrayMax = 0;
  (this->NativeStateEntryBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeStateEntryBindings).ArrayNum = 0;
  (this->NativeStateEntryBindings).ArrayMax = 0;
  (this->NativeStateExitBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeStateExitBindings).ArrayNum = 0;
  (this->NativeStateExitBindings).ArrayMax = 0;
  (this->PoseSnapshots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseSnapshots).ArrayNum = 0;
  (this->PoseSnapshots).ArrayMax = 0;
  *(undefined8 *)&this->LoggedMessagesMap = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x8 = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x20 = 0;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x28 = 0;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x34 = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x40 = 0;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x48 = 0;
  this->bBoneCachesInvalidated = '\0';
  this->bUseMainInstanceMontageEvaluationData = '\0';
  this->bInitializeSubsystems = '\0';
  this->bDeferRootNodeInitialization = '\0';
  this->bShouldExtractRootMotion = '\0';
  (this->PreviouslyLoggedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviouslyLoggedMessages).ArrayNum = 0;
  (this->PreviouslyLoggedMessages).ArrayMax = 0;
  this->bUpdatingRoot = false;
  return this;
}

// FAnimInstanceProxy @ 147432ee0

/* WARNING: Type propagation algorithm not settling */

FAnimInstanceProxy * __thiscall FAnimInstanceProxy::FAnimInstanceProxy(FAnimInstanceProxy *this)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TSharedRef<FBoneContainer,1> *pTVar6;
  TSharedRef<FBoneContainer,1> local_18;
  
  (this->QueuedDrawDebugItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedDrawDebugItems).ArrayNum = 0;
  (this->QueuedDrawDebugItems).ArrayMax = 0;
  *(undefined ***)this = &___7FAnimInstanceProxy__6B_;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ActorTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ActorTransform).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ActorTransform).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ActorTransform).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ActorTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ActorTransform).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ActorTransform).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ActorTransform).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ActorTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ActorTransform).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ActorTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ActorTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  this->AnimInstanceObject = (UObject *)0x0;
  this->AnimClassInterface = (IAnimClassInterface *)0x0;
  this->Skeleton = (USkeleton *)0x0;
  this->SkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  this->MainInstanceProxy = (FAnimInstanceProxy *)0x0;
  this->CurrentDeltaSeconds = 0.0;
  this->CurrentTimeDilation = 1.0;
  (this->ActorName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorName).Data.ArrayNum = 0;
  (this->ActorName).Data.ArrayMax = 0;
  this->RootNode = (FAnimNode_Base *)0x0;
  this->DefaultLinkedInstanceInputNode = (FAnimNode_LinkedInputPose *)0x0;
  *(undefined8 *)&this->SavedPoseQueueMap = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x20 = 0;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x34 = 0;
  *(undefined8 *)&(this->SavedPoseQueueMap).field_0x40 = 0;
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x48 = 0;
  (this->Sync).UngroupedActivePlayerArrays[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Sync).UngroupedActivePlayerArrays[0].ArrayNum = 0;
  (this->Sync).UngroupedActivePlayerArrays[0].ArrayMax = 0;
  (this->Sync).UngroupedActivePlayerArrays[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Sync).UngroupedActivePlayerArrays[1].ArrayNum = 0;
  (this->Sync).UngroupedActivePlayerArrays[1].ArrayMax = 0;
  *(undefined8 *)(this->Sync).SyncGroupMaps = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x8 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x20 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x28 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x2c = 0x80;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x34 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[0].field_0x40 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[0].field_0x48 = 0;
  *(undefined8 *)((this->Sync).SyncGroupMaps + 1) = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x8 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x20 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x28 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x2c = 0x80;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x34 = 0;
  *(undefined8 *)&(this->Sync).SyncGroupMaps[1].field_0x40 = 0;
  *(undefined4 *)&(this->Sync).SyncGroupMaps[1].field_0x48 = 0;
  (this->Sync).MirrorDataTable = (UMirrorDataTable *)0x0;
  (this->Sync).SyncGroupWriteIndex = 0;
  this->MachineWeightArrays[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MachineWeightArrays[0].ArrayNum = 0;
  this->MachineWeightArrays[0].ArrayMax = 0;
  this->MachineWeightArrays[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MachineWeightArrays[1].ArrayNum = 0;
  this->MachineWeightArrays[1].ArrayMax = 0;
  this->StateWeightArrays[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StateWeightArrays[0].ArrayNum = 0;
  this->StateWeightArrays[0].ArrayMax = 0;
  this->StateWeightArrays[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StateWeightArrays[1].ArrayNum = 0;
  this->StateWeightArrays[1].ArrayMax = 0;
  *(undefined8 *)&this->StateMachineClassIndexToWeightOffset = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x8 = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x20 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x28 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x34 = 0;
  *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x40 = 0;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 = 0;
  (this->NotifyQueue).PredictedLODLevel = -1;
  (this->NotifyQueue).AnimNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NotifyQueue).AnimNotifies.ArrayNum = 0;
  (this->NotifyQueue).AnimNotifies.ArrayMax = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x8 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x20 = 0;
  this->BufferWriteIndex = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x28 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x2c = 0x80;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x34 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x40 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48 = 0;
  (this->NotifyQueue).World.WeakPtr = (FWeakObjectPtr)0x0;
  (this->NotifyQueue).RandomStream.InitialSeed = 0x5629063;
  (this->NotifyQueue).RandomStream.Seed = 0x5629063;
  this->RootMotionMode = NoRootMotionExtraction;
  *(undefined8 *)&this->SlotNameToTrackerIndex = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x34 = 0;
  *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x48 = 0;
  this->SlotWeightTracker[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SlotWeightTracker[0].ArrayNum = 0;
  this->SlotWeightTracker[0].ArrayMax = 0;
  this->SlotWeightTracker[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SlotWeightTracker[1].ArrayNum = 0;
  this->SlotWeightTracker[1].ArrayMax = 0;
  *(undefined8 *)this->AnimationCurves = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[0].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[0].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[0].field_0x48 = 0;
  *(undefined8 *)(this->AnimationCurves + 1) = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[1].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[1].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[1].field_0x48 = 0;
  *(undefined8 *)(this->AnimationCurves + 2) = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x8 = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x20 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x28 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x2c = 0x80;
  *(undefined4 *)&this->AnimationCurves[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->AnimationCurves[2].field_0x34 = 0;
  *(undefined8 *)&this->AnimationCurves[2].field_0x40 = 0;
  *(undefined4 *)&this->AnimationCurves[2].field_0x48 = 0;
  *(undefined8 *)&(this->MaterialParametersToClear).Elements = 0;
  *(undefined8 *)&(this->MaterialParametersToClear).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MaterialParametersToClear).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x34 = 0;
  (this->MaterialParametersToClear).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MaterialParametersToClear).HashSize = 0;
  (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimNotifiesSinceLastTick).ArrayNum = 0;
  (this->ActiveAnimNotifiesSinceLastTick).ArrayMax = 0;
  (this->InitializationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->InitializationCounter).Counter = -1;
  (this->InitializationCounter).SkipFrames = 0;
  (this->CachedBonesCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->CachedBonesCounter).Counter = -1;
  (this->CachedBonesCounter).SkipFrames = 0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  (this->EvaluationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->EvaluationCounter).Counter = -1;
  (this->EvaluationCounter).SkipFrames = 0;
  (this->SlotNodeInitializationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->SlotNodeInitializationCounter).Counter = -1;
  (this->SlotNodeInitializationCounter).SkipFrames = 0;
  this->FrameCounterForUpdate = 0;
  this->FrameCounterForNodeUpdate = 0;
  (this->InterpolationOverride).bIsSet = false;
  (this->ExtractedRootMotion).bHasRootMotion = false;
  (this->ExtractedRootMotion).BlendWeight = 0.0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  pTVar6 = MakeShared<FBoneContainer,1>(&local_18);
  (this->RequiredBones).Object = pTVar6->Object;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (this->RequiredBones).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  (this->MontageEvaluationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MontageEvaluationData).ArrayNum = 0;
  (this->MontageEvaluationData).ArrayMax = 0;
  *(undefined8 *)&this->SlotGroupInertializationRequestMap = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x20 = 0;
  this->LODLevel = 0;
  this->CacheBonesRecursionCounter = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x48 = 0;
  *(undefined8 *)&this->SlotGroupInertializationRequestDataMap = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x48 = 0;
  (this->GameThreadPreUpdateNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadPreUpdateNodes).ArrayNum = 0;
  (this->GameThreadPreUpdateNodes).ArrayMax = 0;
  (this->LODDisabledGameThreadPreUpdateNodes).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum = 0;
  (this->LODDisabledGameThreadPreUpdateNodes).ArrayMax = 0;
  (this->DynamicResetNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicResetNodes).ArrayNum = 0;
  (this->DynamicResetNodes).ArrayMax = 0;
  (this->NativeTransitionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeTransitionBindings).ArrayNum = 0;
  (this->NativeTransitionBindings).ArrayMax = 0;
  (this->NativeStateEntryBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeStateEntryBindings).ArrayNum = 0;
  (this->NativeStateEntryBindings).ArrayMax = 0;
  (this->NativeStateExitBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeStateExitBindings).ArrayNum = 0;
  (this->NativeStateExitBindings).ArrayMax = 0;
  (this->PoseSnapshots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseSnapshots).ArrayNum = 0;
  (this->PoseSnapshots).ArrayMax = 0;
  *(undefined8 *)&this->LoggedMessagesMap = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x8 = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x20 = 0;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x28 = 0;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x34 = 0;
  *(undefined8 *)&(this->LoggedMessagesMap).field_0x40 = 0;
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x48 = 0;
  this->bBoneCachesInvalidated = '\0';
  this->bUseMainInstanceMontageEvaluationData = '\0';
  this->bInitializeSubsystems = '\0';
  this->bDeferRootNodeInitialization = '\0';
  this->bShouldExtractRootMotion = '\0';
  (this->PreviouslyLoggedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviouslyLoggedMessages).ArrayNum = 0;
  (this->PreviouslyLoggedMessages).ArrayMax = 0;
  this->bUpdatingRoot = false;
  return this;
}

// ~FAnimInstanceProxy @ 147436300

void __thiscall FAnimInstanceProxy::~FAnimInstanceProxy(FAnimInstanceProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  undefined1 *puVar4;
  UMirrorDataTable **ppUVar5;
  longlong lVar6;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_00;
  longlong lVar7;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_01;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  
  *(undefined ***)this = &___7FAnimInstanceProxy__6B_;
  pFVar1 = (this->PreviouslyLoggedMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->LoggedMessagesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LoggedMessagesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoggedMessagesMap);
  DestructItems<FPoseSnapshot,int>
            ((FPoseSnapshot *)(this->PoseSnapshots).AllocatorInstance.Data,
             (this->PoseSnapshots).ArrayNum);
  pFVar1 = (this->PoseSnapshots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNativeStateBinding,int>
            ((FNativeStateBinding *)(this->NativeStateExitBindings).AllocatorInstance.Data,
             (this->NativeStateExitBindings).ArrayNum);
  pFVar1 = (this->NativeStateExitBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNativeStateBinding,int>
            ((FNativeStateBinding *)(this->NativeStateEntryBindings).AllocatorInstance.Data,
             (this->NativeStateEntryBindings).ArrayNum);
  pFVar1 = (this->NativeStateEntryBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNativeTransitionBinding,int>
            ((FNativeTransitionBinding *)(this->NativeTransitionBindings).AllocatorInstance.Data,
             (this->NativeTransitionBindings).ArrayNum);
  pFVar1 = (this->NativeTransitionBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicResetNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LODDisabledGameThreadPreUpdateNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameThreadPreUpdateNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SlotGroupInertializationRequestDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SlotGroupInertializationRequestDataMap);
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SlotGroupInertializationRequestMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SlotGroupInertializationRequestMap);
  pFVar1 = (this->MontageEvaluationData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RequiredBones).SharedReferenceCount.ReferenceController);
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)
             (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data,
             (this->ActiveAnimNotifiesSinceLastTick).ArrayNum);
  pFVar1 = (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->MaterialParametersToClear).HashSize = 0;
  FVar3 = (this->MaterialParametersToClear).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MaterialParametersToClear).Elements);
  *(undefined4 *)&this->AnimationCurves[2].field_0x48 = 0;
  pvVar2 = *(void **)&this->AnimationCurves[2].field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->AnimationCurves + 2));
  *(undefined4 *)&this->AnimationCurves[1].field_0x48 = 0;
  pvVar2 = *(void **)&this->AnimationCurves[1].field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->AnimationCurves + 1));
  *(undefined4 *)&this->AnimationCurves[0].field_0x48 = 0;
  pvVar2 = *(void **)&this->AnimationCurves[0].field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this_00 = this->AnimationCurves;
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  lVar6 = 2;
  lVar7 = 2;
  do {
    puVar4 = (undefined1 *)(this_00 + -1);
    this_00 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
              ((longlong)(this_00 + -1) + 0x40);
    lVar7 = lVar7 + -1;
    if (*(void **)((longlong)puVar4 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)puVar4 + 0x40));
    }
  } while (lVar7 != 0);
  *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SlotNameToTrackerIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SlotNameToTrackerIndex);
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48 = 0;
  pvVar2 = *(void **)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies);
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)(this->NotifyQueue).AnimNotifies.AllocatorInstance.Data,
             (this->NotifyQueue).AnimNotifies.ArrayNum);
  pFVar1 = (this->NotifyQueue).AnimNotifies.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_01 = &this->StateMachineClassIndexToWeightOffset;
  *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StateMachineClassIndexToWeightOffset).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_01);
  lVar7 = 2;
  do {
    ppUVar5 = (UMirrorDataTable **)(this_01 + -1);
    this_01 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
              ((longlong)(this_01 + -1) + 0x40);
    lVar7 = lVar7 + -1;
    if (ppUVar5[8] != (void *)0x0) {
      FMemory::Free(ppUVar5[8]);
    }
  } while (lVar7 != 0);
  pTVar8 = this->StateWeightArrays;
  do {
    pFVar1 = pTVar8[-1].AllocatorInstance.Data;
    pTVar8 = pTVar8 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  UE::Anim::FAnimSync::~FAnimSync(&this->Sync);
  *(undefined4 *)&(this->SavedPoseQueueMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SavedPoseQueueMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SavedPoseQueueMap);
  pFVar1 = (this->ActorName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FQueuedDrawDebugItem,int>
            ((FQueuedDrawDebugItem *)(this->QueuedDrawDebugItems).AllocatorInstance.Data,
             (this->QueuedDrawDebugItems).ArrayNum);
  pFVar1 = (this->QueuedDrawDebugItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 147438100

/* WARNING: Type propagation algorithm not settling */

FAnimInstanceProxy * __thiscall
FAnimInstanceProxy::operator=(FAnimInstanceProxy *this,FAnimInstanceProxy *param_1)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TMap<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar8;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar9;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar10;
  TArray<FMontageActiveSlotTracker,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FMontageActiveSlotTracker,TSizedDefaultAllocator<32>_> *pTVar12;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar13;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar14;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar15;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar16;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> *pTVar20;
  TMap<FName,TTuple<float,UBlendProfile_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>_>
  *pTVar21;
  TMap<FName,TTuple<float,UBlendProfile_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>_>
  *pTVar22;
  TMap<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
  *pTVar23;
  TMap<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
  *this_01;
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_> *pTVar24;
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_> *pTVar25;
  TArray<FNativeTransitionBinding,TSizedDefaultAllocator<32>_> *pTVar26;
  TArray<FNativeTransitionBinding,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_> *pTVar28;
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_> *pTVar29;
  TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_> *pTVar30;
  TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_> *pTVar31;
  TMap<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar32;
  TMap<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
  *this_02;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar33;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar34;
  FScriptContainerElement *pFVar35;
  void *pvVar36;
  ForElementType<FSetElementId> FVar37;
  double dVar38;
  short sVar39;
  short sVar40;
  undefined4 uVar41;
  byte bVar42;
  
  pTVar1 = &param_1->QueuedDrawDebugItems;
  pTVar2 = &this->QueuedDrawDebugItems;
  if (pTVar2 != pTVar1) {
    DestructItems<FQueuedDrawDebugItem,int>
              ((FQueuedDrawDebugItem *)(pTVar2->AllocatorInstance).Data,
               (this->QueuedDrawDebugItems).ArrayNum);
    pFVar35 = (pTVar2->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->QueuedDrawDebugItems).ArrayNum = (param_1->QueuedDrawDebugItems).ArrayNum;
    (this->QueuedDrawDebugItems).ArrayMax = (param_1->QueuedDrawDebugItems).ArrayMax;
    (param_1->QueuedDrawDebugItems).ArrayNum = 0;
    (param_1->QueuedDrawDebugItems).ArrayMax = 0;
  }
  dVar38 = (param_1->ComponentTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentTransform).Translation.XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentRelativeTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentRelativeTransform).Translation.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Translation.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentRelativeTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ActorTransform).Rotation.XY.m128d_f64[1];
  (this->ActorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ActorTransform).Rotation.XY.m128d_f64[0];
  (this->ActorTransform).Rotation.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ActorTransform).Rotation.ZW.m128d_f64[1];
  (this->ActorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ActorTransform).Rotation.ZW.m128d_f64[0];
  (this->ActorTransform).Rotation.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ActorTransform).Translation.XY.m128d_f64[1];
  (this->ActorTransform).Translation.XY.m128d_f64[0] =
       (param_1->ActorTransform).Translation.XY.m128d_f64[0];
  (this->ActorTransform).Translation.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ActorTransform).Translation.ZW.m128d_f64[1];
  (this->ActorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ActorTransform).Translation.ZW.m128d_f64[0];
  (this->ActorTransform).Translation.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ActorTransform).Scale3D.XY.m128d_f64[1];
  (this->ActorTransform).Scale3D.XY.m128d_f64[0] = (param_1->ActorTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->ActorTransform).Scale3D.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ActorTransform).Scale3D.ZW.m128d_f64[1];
  (this->ActorTransform).Scale3D.ZW.m128d_f64[0] = (param_1->ActorTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->ActorTransform).Scale3D.ZW.m128d_f64[1] = dVar38;
  this->AnimInstanceObject = param_1->AnimInstanceObject;
  this->AnimClassInterface = param_1->AnimClassInterface;
  this->Skeleton = param_1->Skeleton;
  this->SkeletalMeshComponent = param_1->SkeletalMeshComponent;
  this->MainInstanceProxy = param_1->MainInstanceProxy;
  this->CurrentDeltaSeconds = param_1->CurrentDeltaSeconds;
  this->CurrentTimeDilation = param_1->CurrentTimeDilation;
  ::FString::operator=(&this->ActorName,&param_1->ActorName);
  this->RootNode = param_1->RootNode;
  this_00 = &this->SavedPoseQueueMap;
  this->DefaultLinkedInstanceInputNode = param_1->DefaultLinkedInstanceInputNode;
  if (this_00 != &param_1->SavedPoseQueueMap) {
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->SavedPoseQueueMap).field_0x8);
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    operator=((TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
               *)this_00,
              (TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
               *)&param_1->SavedPoseQueueMap);
    puVar3 = &(param_1->SavedPoseQueueMap).field_0x10;
    puVar4 = &(this->SavedPoseQueueMap).field_0x10;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->SavedPoseQueueMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&(this->SavedPoseQueueMap).field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&(this->SavedPoseQueueMap).field_0x20 =
           *(undefined8 *)&(param_1->SavedPoseQueueMap).field_0x20;
      *(undefined8 *)&(param_1->SavedPoseQueueMap).field_0x20 = 0;
      *(undefined4 *)&(this->SavedPoseQueueMap).field_0x28 =
           *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x28;
      *(undefined4 *)&(this->SavedPoseQueueMap).field_0x2c =
           *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x2c;
      *(undefined8 *)&(param_1->SavedPoseQueueMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->SavedPoseQueueMap).field_0x30 =
         *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x30;
    *(undefined4 *)&(this->SavedPoseQueueMap).field_0x34 =
         *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x34;
    *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->SavedPoseQueueMap).field_0x40 == 0) {
      *(undefined4 *)&(this->SavedPoseQueueMap).field_0x38 =
           *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x38;
    }
    pvVar36 = *(void **)&(this->SavedPoseQueueMap).field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&(this->SavedPoseQueueMap).field_0x40 =
         *(undefined8 *)&(param_1->SavedPoseQueueMap).field_0x40;
    *(undefined8 *)&(param_1->SavedPoseQueueMap).field_0x40 = 0;
    *(undefined4 *)&(this->SavedPoseQueueMap).field_0x48 =
         *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x48;
    *(undefined4 *)&(param_1->SavedPoseQueueMap).field_0x48 = 0;
  }
  UE::Anim::FAnimSync::operator=(&this->Sync,&param_1->Sync);
  pTVar5 = param_1->MachineWeightArrays;
  pTVar6 = this->MachineWeightArrays;
  if (pTVar6 != pTVar5) {
    pFVar35 = (pTVar6->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->MachineWeightArrays[0].ArrayNum = param_1->MachineWeightArrays[0].ArrayNum;
    this->MachineWeightArrays[0].ArrayMax = param_1->MachineWeightArrays[0].ArrayMax;
    param_1->MachineWeightArrays[0].ArrayNum = 0;
    param_1->MachineWeightArrays[0].ArrayMax = 0;
  }
  pTVar5 = param_1->MachineWeightArrays + 1;
  pTVar6 = this->MachineWeightArrays + 1;
  if (pTVar6 != pTVar5) {
    pFVar35 = (pTVar6->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->MachineWeightArrays[1].ArrayNum = param_1->MachineWeightArrays[1].ArrayNum;
    this->MachineWeightArrays[1].ArrayMax = param_1->MachineWeightArrays[1].ArrayMax;
    param_1->MachineWeightArrays[1].ArrayNum = 0;
    param_1->MachineWeightArrays[1].ArrayMax = 0;
  }
  pTVar5 = param_1->StateWeightArrays;
  pTVar6 = this->StateWeightArrays;
  if (pTVar6 != pTVar5) {
    pFVar35 = (pTVar6->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->StateWeightArrays[0].ArrayNum = param_1->StateWeightArrays[0].ArrayNum;
    this->StateWeightArrays[0].ArrayMax = param_1->StateWeightArrays[0].ArrayMax;
    param_1->StateWeightArrays[0].ArrayNum = 0;
    param_1->StateWeightArrays[0].ArrayMax = 0;
  }
  pTVar5 = param_1->StateWeightArrays + 1;
  pTVar6 = this->StateWeightArrays + 1;
  if (pTVar6 != pTVar5) {
    pFVar35 = (pTVar6->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->StateWeightArrays[1].ArrayNum = param_1->StateWeightArrays[1].ArrayNum;
    this->StateWeightArrays[1].ArrayMax = param_1->StateWeightArrays[1].ArrayMax;
    param_1->StateWeightArrays[1].ArrayNum = 0;
    param_1->StateWeightArrays[1].ArrayMax = 0;
  }
  pTVar7 = &param_1->StateMachineClassIndexToWeightOffset;
  pTVar8 = &this->StateMachineClassIndexToWeightOffset;
  if (pTVar8 != pTVar7) {
    if (*(void **)pTVar8 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar8);
    }
    puVar3 = &(param_1->StateMachineClassIndexToWeightOffset).field_0x10;
    *(undefined8 *)pTVar8 = *(undefined8 *)pTVar7;
    puVar4 = &(this->StateMachineClassIndexToWeightOffset).field_0x10;
    *(undefined8 *)pTVar7 = 0;
    *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x8 =
         *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x8;
    *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0xc =
         *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0xc;
    *(undefined8 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&(this->StateMachineClassIndexToWeightOffset).field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x20 =
           *(undefined8 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x20;
      *(undefined8 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x20 = 0;
      *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x28 =
           *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x28;
      *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x2c =
           *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x2c;
      *(undefined8 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x28 = 0;
    }
    *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x30 =
         *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x30;
    *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x34 =
         *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x34;
    *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x34 = 0;
    if (*(longlong *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x40 == 0) {
      *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x38 =
           *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x38;
    }
    pvVar36 = *(void **)&(this->StateMachineClassIndexToWeightOffset).field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&(this->StateMachineClassIndexToWeightOffset).field_0x40 =
         *(undefined8 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x40;
    *(undefined8 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x40 = 0;
    *(undefined4 *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 =
         *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x48;
    *(undefined4 *)&(param_1->StateMachineClassIndexToWeightOffset).field_0x48 = 0;
  }
  this->BufferWriteIndex = param_1->BufferWriteIndex;
  FAnimNotifyQueue::operator=(&this->NotifyQueue,&param_1->NotifyQueue);
  pTVar9 = &param_1->SlotNameToTrackerIndex;
  pTVar10 = &this->SlotNameToTrackerIndex;
  this->RootMotionMode = param_1->RootMotionMode;
  if (pTVar10 != pTVar9) {
    if (*(void **)pTVar10 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar10);
    }
    puVar3 = &(param_1->SlotNameToTrackerIndex).field_0x10;
    *(undefined8 *)pTVar10 = *(undefined8 *)pTVar9;
    puVar4 = &(this->SlotNameToTrackerIndex).field_0x10;
    *(undefined8 *)pTVar9 = 0;
    *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x8 =
         *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x8;
    *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0xc =
         *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0xc;
    *(undefined8 *)&(param_1->SlotNameToTrackerIndex).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->SlotNameToTrackerIndex).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&(this->SlotNameToTrackerIndex).field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x20 =
           *(undefined8 *)&(param_1->SlotNameToTrackerIndex).field_0x20;
      *(undefined8 *)&(param_1->SlotNameToTrackerIndex).field_0x20 = 0;
      *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x28 =
           *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x28;
      *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x2c =
           *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x2c;
      *(undefined8 *)&(param_1->SlotNameToTrackerIndex).field_0x28 = 0;
    }
    *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x30 =
         *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x30;
    *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x34 =
         *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x34;
    *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x34 = 0;
    if (*(longlong *)&(param_1->SlotNameToTrackerIndex).field_0x40 == 0) {
      *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x38 =
           *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x38;
    }
    pvVar36 = *(void **)&(this->SlotNameToTrackerIndex).field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&(this->SlotNameToTrackerIndex).field_0x40 =
         *(undefined8 *)&(param_1->SlotNameToTrackerIndex).field_0x40;
    *(undefined8 *)&(param_1->SlotNameToTrackerIndex).field_0x40 = 0;
    *(undefined4 *)&(this->SlotNameToTrackerIndex).field_0x48 =
         *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x48;
    *(undefined4 *)&(param_1->SlotNameToTrackerIndex).field_0x48 = 0;
  }
  pTVar11 = param_1->SlotWeightTracker;
  pTVar12 = this->SlotWeightTracker;
  if (pTVar12 != pTVar11) {
    pFVar35 = (pTVar12->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->SlotWeightTracker[0].ArrayNum = param_1->SlotWeightTracker[0].ArrayNum;
    this->SlotWeightTracker[0].ArrayMax = param_1->SlotWeightTracker[0].ArrayMax;
    param_1->SlotWeightTracker[0].ArrayNum = 0;
    param_1->SlotWeightTracker[0].ArrayMax = 0;
  }
  pTVar11 = param_1->SlotWeightTracker + 1;
  pTVar12 = this->SlotWeightTracker + 1;
  if (pTVar12 != pTVar11) {
    pFVar35 = (pTVar12->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->SlotWeightTracker[1].ArrayNum = param_1->SlotWeightTracker[1].ArrayNum;
    this->SlotWeightTracker[1].ArrayMax = param_1->SlotWeightTracker[1].ArrayMax;
    param_1->SlotWeightTracker[1].ArrayNum = 0;
    param_1->SlotWeightTracker[1].ArrayMax = 0;
  }
  pTVar13 = param_1->AnimationCurves;
  pTVar14 = this->AnimationCurves;
  if (pTVar14 != pTVar13) {
    if (*(void **)pTVar14 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar14);
    }
    puVar3 = &param_1->AnimationCurves[0].field_0x10;
    *(undefined8 *)pTVar14 = *(undefined8 *)pTVar13;
    puVar4 = &this->AnimationCurves[0].field_0x10;
    *(undefined8 *)pTVar13 = 0;
    *(undefined4 *)&this->AnimationCurves[0].field_0x8 =
         *(undefined4 *)&param_1->AnimationCurves[0].field_0x8;
    *(undefined4 *)&this->AnimationCurves[0].field_0xc =
         *(undefined4 *)&param_1->AnimationCurves[0].field_0xc;
    *(undefined8 *)&param_1->AnimationCurves[0].field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&param_1->AnimationCurves[0].field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&this->AnimationCurves[0].field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&this->AnimationCurves[0].field_0x20 =
           *(undefined8 *)&param_1->AnimationCurves[0].field_0x20;
      *(undefined8 *)&param_1->AnimationCurves[0].field_0x20 = 0;
      *(undefined4 *)&this->AnimationCurves[0].field_0x28 =
           *(undefined4 *)&param_1->AnimationCurves[0].field_0x28;
      *(undefined4 *)&this->AnimationCurves[0].field_0x2c =
           *(undefined4 *)&param_1->AnimationCurves[0].field_0x2c;
      *(undefined8 *)&param_1->AnimationCurves[0].field_0x28 = 0;
    }
    *(undefined4 *)&this->AnimationCurves[0].field_0x30 =
         *(undefined4 *)&param_1->AnimationCurves[0].field_0x30;
    *(undefined4 *)&this->AnimationCurves[0].field_0x34 =
         *(undefined4 *)&param_1->AnimationCurves[0].field_0x34;
    *(undefined4 *)&param_1->AnimationCurves[0].field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->AnimationCurves[0].field_0x34 = 0;
    if (*(longlong *)&param_1->AnimationCurves[0].field_0x40 == 0) {
      *(undefined4 *)&this->AnimationCurves[0].field_0x38 =
           *(undefined4 *)&param_1->AnimationCurves[0].field_0x38;
    }
    pvVar36 = *(void **)&this->AnimationCurves[0].field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&this->AnimationCurves[0].field_0x40 =
         *(undefined8 *)&param_1->AnimationCurves[0].field_0x40;
    *(undefined8 *)&param_1->AnimationCurves[0].field_0x40 = 0;
    *(undefined4 *)&this->AnimationCurves[0].field_0x48 =
         *(undefined4 *)&param_1->AnimationCurves[0].field_0x48;
    *(undefined4 *)&param_1->AnimationCurves[0].field_0x48 = 0;
  }
  pTVar13 = param_1->AnimationCurves + 1;
  pTVar14 = this->AnimationCurves + 1;
  if (pTVar14 != pTVar13) {
    if (*(void **)pTVar14 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar14);
    }
    puVar3 = &param_1->AnimationCurves[1].field_0x10;
    *(undefined8 *)pTVar14 = *(undefined8 *)pTVar13;
    puVar4 = &this->AnimationCurves[1].field_0x10;
    *(undefined8 *)pTVar13 = 0;
    *(undefined4 *)&this->AnimationCurves[1].field_0x8 =
         *(undefined4 *)&param_1->AnimationCurves[1].field_0x8;
    *(undefined4 *)&this->AnimationCurves[1].field_0xc =
         *(undefined4 *)&param_1->AnimationCurves[1].field_0xc;
    *(undefined8 *)&param_1->AnimationCurves[1].field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&param_1->AnimationCurves[1].field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&this->AnimationCurves[1].field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&this->AnimationCurves[1].field_0x20 =
           *(undefined8 *)&param_1->AnimationCurves[1].field_0x20;
      *(undefined8 *)&param_1->AnimationCurves[1].field_0x20 = 0;
      *(undefined4 *)&this->AnimationCurves[1].field_0x28 =
           *(undefined4 *)&param_1->AnimationCurves[1].field_0x28;
      *(undefined4 *)&this->AnimationCurves[1].field_0x2c =
           *(undefined4 *)&param_1->AnimationCurves[1].field_0x2c;
      *(undefined8 *)&param_1->AnimationCurves[1].field_0x28 = 0;
    }
    *(undefined4 *)&this->AnimationCurves[1].field_0x30 =
         *(undefined4 *)&param_1->AnimationCurves[1].field_0x30;
    *(undefined4 *)&this->AnimationCurves[1].field_0x34 =
         *(undefined4 *)&param_1->AnimationCurves[1].field_0x34;
    *(undefined4 *)&param_1->AnimationCurves[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->AnimationCurves[1].field_0x34 = 0;
    if (*(longlong *)&param_1->AnimationCurves[1].field_0x40 == 0) {
      *(undefined4 *)&this->AnimationCurves[1].field_0x38 =
           *(undefined4 *)&param_1->AnimationCurves[1].field_0x38;
    }
    pvVar36 = *(void **)&this->AnimationCurves[1].field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&this->AnimationCurves[1].field_0x40 =
         *(undefined8 *)&param_1->AnimationCurves[1].field_0x40;
    *(undefined8 *)&param_1->AnimationCurves[1].field_0x40 = 0;
    *(undefined4 *)&this->AnimationCurves[1].field_0x48 =
         *(undefined4 *)&param_1->AnimationCurves[1].field_0x48;
    *(undefined4 *)&param_1->AnimationCurves[1].field_0x48 = 0;
  }
  pTVar13 = param_1->AnimationCurves + 2;
  pTVar14 = this->AnimationCurves + 2;
  if (pTVar14 != pTVar13) {
    if (*(void **)pTVar14 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar14);
    }
    puVar3 = &param_1->AnimationCurves[2].field_0x10;
    *(undefined8 *)pTVar14 = *(undefined8 *)pTVar13;
    puVar4 = &this->AnimationCurves[2].field_0x10;
    *(undefined8 *)pTVar13 = 0;
    *(undefined4 *)&this->AnimationCurves[2].field_0x8 =
         *(undefined4 *)&param_1->AnimationCurves[2].field_0x8;
    *(undefined4 *)&this->AnimationCurves[2].field_0xc =
         *(undefined4 *)&param_1->AnimationCurves[2].field_0xc;
    *(undefined8 *)&param_1->AnimationCurves[2].field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&param_1->AnimationCurves[2].field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&this->AnimationCurves[2].field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&this->AnimationCurves[2].field_0x20 =
           *(undefined8 *)&param_1->AnimationCurves[2].field_0x20;
      *(undefined8 *)&param_1->AnimationCurves[2].field_0x20 = 0;
      *(undefined4 *)&this->AnimationCurves[2].field_0x28 =
           *(undefined4 *)&param_1->AnimationCurves[2].field_0x28;
      *(undefined4 *)&this->AnimationCurves[2].field_0x2c =
           *(undefined4 *)&param_1->AnimationCurves[2].field_0x2c;
      *(undefined8 *)&param_1->AnimationCurves[2].field_0x28 = 0;
    }
    *(undefined4 *)&this->AnimationCurves[2].field_0x30 =
         *(undefined4 *)&param_1->AnimationCurves[2].field_0x30;
    *(undefined4 *)&this->AnimationCurves[2].field_0x34 =
         *(undefined4 *)&param_1->AnimationCurves[2].field_0x34;
    *(undefined4 *)&param_1->AnimationCurves[2].field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->AnimationCurves[2].field_0x34 = 0;
    if (*(longlong *)&param_1->AnimationCurves[2].field_0x40 == 0) {
      *(undefined4 *)&this->AnimationCurves[2].field_0x38 =
           *(undefined4 *)&param_1->AnimationCurves[2].field_0x38;
    }
    pvVar36 = *(void **)&this->AnimationCurves[2].field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&this->AnimationCurves[2].field_0x40 =
         *(undefined8 *)&param_1->AnimationCurves[2].field_0x40;
    *(undefined8 *)&param_1->AnimationCurves[2].field_0x40 = 0;
    *(undefined4 *)&this->AnimationCurves[2].field_0x48 =
         *(undefined4 *)&param_1->AnimationCurves[2].field_0x48;
    *(undefined4 *)&param_1->AnimationCurves[2].field_0x48 = 0;
  }
  pTVar15 = &param_1->MaterialParametersToClear;
  pTVar16 = &this->MaterialParametersToClear;
  if (pTVar16 != pTVar15) {
    if (*(void **)&pTVar16->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar16->Elements);
    }
    puVar3 = &(param_1->MaterialParametersToClear).Elements.field_0x10;
    *(undefined8 *)&pTVar16->Elements = *(undefined8 *)&pTVar15->Elements;
    puVar4 = &(this->MaterialParametersToClear).Elements.field_0x10;
    *(undefined8 *)&pTVar15->Elements = 0;
    *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x8 =
         *(undefined4 *)&(param_1->MaterialParametersToClear).Elements.field_0x8;
    *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0xc =
         *(undefined4 *)&(param_1->MaterialParametersToClear).Elements.field_0xc;
    *(undefined8 *)&(param_1->MaterialParametersToClear).Elements.field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->MaterialParametersToClear).Elements.field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&(this->MaterialParametersToClear).Elements.field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&(this->MaterialParametersToClear).Elements.field_0x20 =
           *(undefined8 *)&(param_1->MaterialParametersToClear).Elements.field_0x20;
      *(undefined8 *)&(param_1->MaterialParametersToClear).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x28 =
           *(undefined4 *)&(param_1->MaterialParametersToClear).Elements.field_0x28;
      *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x2c =
           *(undefined4 *)&(param_1->MaterialParametersToClear).Elements.field_0x2c;
      *(undefined8 *)&(param_1->MaterialParametersToClear).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x30 =
         *(undefined4 *)&(param_1->MaterialParametersToClear).Elements.field_0x30;
    *(undefined4 *)&(this->MaterialParametersToClear).Elements.field_0x34 =
         *(undefined4 *)&(param_1->MaterialParametersToClear).Elements.field_0x34;
    *(undefined4 *)&(param_1->MaterialParametersToClear).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->MaterialParametersToClear).Elements.field_0x34 = 0;
    if ((param_1->MaterialParametersToClear).Hash.SecondaryData ==
        (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->MaterialParametersToClear).Hash.InlineData =
           *(undefined4 *)(param_1->MaterialParametersToClear).Hash.InlineData;
    }
    FVar37 = (this->MaterialParametersToClear).Hash.SecondaryData;
    if (FVar37 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar37);
    }
    (this->MaterialParametersToClear).Hash.SecondaryData =
         (param_1->MaterialParametersToClear).Hash.SecondaryData;
    (param_1->MaterialParametersToClear).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->MaterialParametersToClear).HashSize = (param_1->MaterialParametersToClear).HashSize;
    (param_1->MaterialParametersToClear).HashSize = 0;
  }
  pTVar17 = &param_1->ActiveAnimNotifiesSinceLastTick;
  pTVar18 = &this->ActiveAnimNotifiesSinceLastTick;
  if (pTVar18 != pTVar17) {
    DestructItems<FAnimNotifyEventReference,int>
              ((FAnimNotifyEventReference *)(pTVar18->AllocatorInstance).Data,
               (this->ActiveAnimNotifiesSinceLastTick).ArrayNum);
    pFVar35 = (pTVar18->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar18->AllocatorInstance).Data = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ActiveAnimNotifiesSinceLastTick).ArrayNum =
         (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
    (this->ActiveAnimNotifiesSinceLastTick).ArrayMax =
         (param_1->ActiveAnimNotifiesSinceLastTick).ArrayMax;
    (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum = 0;
    (param_1->ActiveAnimNotifiesSinceLastTick).ArrayMax = 0;
  }
  sVar39 = (param_1->InitializationCounter).Counter;
  sVar40 = (param_1->InitializationCounter).SkipFrames;
  uVar41 = *(undefined4 *)&(param_1->InitializationCounter).field_0xc;
  (this->InitializationCounter).LastSyncronizedFrame =
       (param_1->InitializationCounter).LastSyncronizedFrame;
  (this->InitializationCounter).Counter = sVar39;
  (this->InitializationCounter).SkipFrames = sVar40;
  *(undefined4 *)&(this->InitializationCounter).field_0xc = uVar41;
  sVar39 = (param_1->CachedBonesCounter).Counter;
  sVar40 = (param_1->CachedBonesCounter).SkipFrames;
  uVar41 = *(undefined4 *)&(param_1->CachedBonesCounter).field_0xc;
  (this->CachedBonesCounter).LastSyncronizedFrame =
       (param_1->CachedBonesCounter).LastSyncronizedFrame;
  (this->CachedBonesCounter).Counter = sVar39;
  (this->CachedBonesCounter).SkipFrames = sVar40;
  *(undefined4 *)&(this->CachedBonesCounter).field_0xc = uVar41;
  sVar39 = (param_1->UpdateCounter).Counter;
  sVar40 = (param_1->UpdateCounter).SkipFrames;
  uVar41 = *(undefined4 *)&(param_1->UpdateCounter).field_0xc;
  (this->UpdateCounter).LastSyncronizedFrame = (param_1->UpdateCounter).LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar39;
  (this->UpdateCounter).SkipFrames = sVar40;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar41;
  sVar39 = (param_1->EvaluationCounter).Counter;
  sVar40 = (param_1->EvaluationCounter).SkipFrames;
  uVar41 = *(undefined4 *)&(param_1->EvaluationCounter).field_0xc;
  (this->EvaluationCounter).LastSyncronizedFrame = (param_1->EvaluationCounter).LastSyncronizedFrame
  ;
  (this->EvaluationCounter).Counter = sVar39;
  (this->EvaluationCounter).SkipFrames = sVar40;
  *(undefined4 *)&(this->EvaluationCounter).field_0xc = uVar41;
  sVar39 = (param_1->SlotNodeInitializationCounter).Counter;
  sVar40 = (param_1->SlotNodeInitializationCounter).SkipFrames;
  uVar41 = *(undefined4 *)&(param_1->SlotNodeInitializationCounter).field_0xc;
  (this->SlotNodeInitializationCounter).LastSyncronizedFrame =
       (param_1->SlotNodeInitializationCounter).LastSyncronizedFrame;
  (this->SlotNodeInitializationCounter).Counter = sVar39;
  (this->SlotNodeInitializationCounter).SkipFrames = sVar40;
  *(undefined4 *)&(this->SlotNodeInitializationCounter).field_0xc = uVar41;
  this->FrameCounterForUpdate = param_1->FrameCounterForUpdate;
  this->FrameCounterForNodeUpdate = param_1->FrameCounterForNodeUpdate;
  if (&param_1->InterpolationOverride != &this->InterpolationOverride) {
    if ((param_1->InterpolationOverride).bIsSet == false) {
      if ((this->InterpolationOverride).bIsSet != false) {
        (this->InterpolationOverride).bIsSet = false;
      }
    }
    else {
      (this->InterpolationOverride).TypedValue = (param_1->InterpolationOverride).TypedValue;
      (this->InterpolationOverride).bIsSet = true;
    }
  }
  (this->ExtractedRootMotion).bHasRootMotion = (param_1->ExtractedRootMotion).bHasRootMotion;
  (this->ExtractedRootMotion).BlendWeight = (param_1->ExtractedRootMotion).BlendWeight;
  dVar38 = (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = dVar38;
  dVar38 = (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = dVar38;
  TSharedPtr<FBoneContainer,1>::operator=(&this->RequiredBones,&param_1->RequiredBones);
  pTVar19 = &param_1->MontageEvaluationData;
  this->LODLevel = param_1->LODLevel;
  pTVar20 = &this->MontageEvaluationData;
  this->CacheBonesRecursionCounter = param_1->CacheBonesRecursionCounter;
  this->NumUroSkippedFrames_Update = param_1->NumUroSkippedFrames_Update;
  this->NumUroSkippedFrames_Eval = param_1->NumUroSkippedFrames_Eval;
  if (pTVar20 != pTVar19) {
    pFVar35 = (pTVar20->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar20->AllocatorInstance).Data = (pTVar19->AllocatorInstance).Data;
    (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MontageEvaluationData).ArrayNum = (param_1->MontageEvaluationData).ArrayNum;
    (this->MontageEvaluationData).ArrayMax = (param_1->MontageEvaluationData).ArrayMax;
    (param_1->MontageEvaluationData).ArrayNum = 0;
    (param_1->MontageEvaluationData).ArrayMax = 0;
  }
  pTVar21 = &param_1->SlotGroupInertializationRequestMap;
  pTVar22 = &this->SlotGroupInertializationRequestMap;
  if (pTVar22 != pTVar21) {
    if (*(void **)pTVar22 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar22);
    }
    puVar3 = &(param_1->SlotGroupInertializationRequestMap).field_0x10;
    *(undefined8 *)pTVar22 = *(undefined8 *)pTVar21;
    puVar4 = &(this->SlotGroupInertializationRequestMap).field_0x10;
    *(undefined8 *)pTVar21 = 0;
    *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x8 =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x8;
    *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0xc =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0xc;
    *(undefined8 *)&(param_1->SlotGroupInertializationRequestMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->SlotGroupInertializationRequestMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&(this->SlotGroupInertializationRequestMap).field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x20 =
           *(undefined8 *)&(param_1->SlotGroupInertializationRequestMap).field_0x20;
      *(undefined8 *)&(param_1->SlotGroupInertializationRequestMap).field_0x20 = 0;
      *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x28 =
           *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x28;
      *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x2c =
           *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x2c;
      *(undefined8 *)&(param_1->SlotGroupInertializationRequestMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x30 =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x30;
    *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x34 =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x34;
    *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->SlotGroupInertializationRequestMap).field_0x40 == 0) {
      *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x38 =
           *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x38;
    }
    pvVar36 = *(void **)&(this->SlotGroupInertializationRequestMap).field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x40 =
         *(undefined8 *)&(param_1->SlotGroupInertializationRequestMap).field_0x40;
    *(undefined8 *)&(param_1->SlotGroupInertializationRequestMap).field_0x40 = 0;
    *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x48 =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x48;
    *(undefined4 *)&(param_1->SlotGroupInertializationRequestMap).field_0x48 = 0;
  }
  pTVar23 = &param_1->SlotGroupInertializationRequestDataMap;
  this_01 = &this->SlotGroupInertializationRequestDataMap;
  if (this_01 != pTVar23) {
    TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->SlotGroupInertializationRequestDataMap).field_0x8
                     );
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    puVar3 = &(param_1->SlotGroupInertializationRequestDataMap).field_0x10;
    *(undefined8 *)this_01 = *(undefined8 *)pTVar23;
    puVar4 = &(this->SlotGroupInertializationRequestDataMap).field_0x10;
    *(undefined8 *)pTVar23 = 0;
    *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x8 =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x8;
    *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0xc =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0xc;
    *(undefined8 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&(this->SlotGroupInertializationRequestDataMap).field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x20 =
           *(undefined8 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x20;
      *(undefined8 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x20 = 0;
      *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x28 =
           *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x28;
      *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x2c =
           *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x2c;
      *(undefined8 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x30 =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x30;
    *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x34 =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x34;
    *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x40 == 0) {
      *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x38 =
           *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x38;
    }
    pvVar36 = *(void **)&(this->SlotGroupInertializationRequestDataMap).field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x40 =
         *(undefined8 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x40;
    *(undefined8 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x40 = 0;
    *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x48 =
         *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x48;
    *(undefined4 *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x48 = 0;
  }
  pTVar24 = &param_1->GameThreadPreUpdateNodes;
  pTVar25 = &this->GameThreadPreUpdateNodes;
  if (pTVar25 != pTVar24) {
    pFVar35 = (pTVar25->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar25->AllocatorInstance).Data = (pTVar24->AllocatorInstance).Data;
    (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->GameThreadPreUpdateNodes).ArrayNum = (param_1->GameThreadPreUpdateNodes).ArrayNum;
    (this->GameThreadPreUpdateNodes).ArrayMax = (param_1->GameThreadPreUpdateNodes).ArrayMax;
    (param_1->GameThreadPreUpdateNodes).ArrayNum = 0;
    (param_1->GameThreadPreUpdateNodes).ArrayMax = 0;
  }
  pTVar24 = &param_1->LODDisabledGameThreadPreUpdateNodes;
  pTVar25 = &this->LODDisabledGameThreadPreUpdateNodes;
  if (pTVar25 != pTVar24) {
    pFVar35 = (pTVar25->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar25->AllocatorInstance).Data = (pTVar24->AllocatorInstance).Data;
    (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum =
         (param_1->LODDisabledGameThreadPreUpdateNodes).ArrayNum;
    (this->LODDisabledGameThreadPreUpdateNodes).ArrayMax =
         (param_1->LODDisabledGameThreadPreUpdateNodes).ArrayMax;
    (param_1->LODDisabledGameThreadPreUpdateNodes).ArrayNum = 0;
    (param_1->LODDisabledGameThreadPreUpdateNodes).ArrayMax = 0;
  }
  pTVar24 = &param_1->DynamicResetNodes;
  pTVar25 = &this->DynamicResetNodes;
  if (pTVar25 != pTVar24) {
    pFVar35 = (pTVar25->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar25->AllocatorInstance).Data = (pTVar24->AllocatorInstance).Data;
    (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DynamicResetNodes).ArrayNum = (param_1->DynamicResetNodes).ArrayNum;
    (this->DynamicResetNodes).ArrayMax = (param_1->DynamicResetNodes).ArrayMax;
    (param_1->DynamicResetNodes).ArrayNum = 0;
    (param_1->DynamicResetNodes).ArrayMax = 0;
  }
  pTVar26 = &param_1->NativeTransitionBindings;
  pTVar27 = &this->NativeTransitionBindings;
  if (pTVar27 != pTVar26) {
    DestructItems<FNativeTransitionBinding,int>
              ((FNativeTransitionBinding *)(pTVar27->AllocatorInstance).Data,
               (this->NativeTransitionBindings).ArrayNum);
    pFVar35 = (pTVar27->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar27->AllocatorInstance).Data = (pTVar26->AllocatorInstance).Data;
    (pTVar26->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NativeTransitionBindings).ArrayNum = (param_1->NativeTransitionBindings).ArrayNum;
    (this->NativeTransitionBindings).ArrayMax = (param_1->NativeTransitionBindings).ArrayMax;
    (param_1->NativeTransitionBindings).ArrayNum = 0;
    (param_1->NativeTransitionBindings).ArrayMax = 0;
  }
  pTVar28 = &param_1->NativeStateEntryBindings;
  pTVar29 = &this->NativeStateEntryBindings;
  if (pTVar29 != pTVar28) {
    DestructItems<FNativeStateBinding,int>
              ((FNativeStateBinding *)(pTVar29->AllocatorInstance).Data,
               (this->NativeStateEntryBindings).ArrayNum);
    pFVar35 = (pTVar29->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar29->AllocatorInstance).Data = (pTVar28->AllocatorInstance).Data;
    (pTVar28->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NativeStateEntryBindings).ArrayNum = (param_1->NativeStateEntryBindings).ArrayNum;
    (this->NativeStateEntryBindings).ArrayMax = (param_1->NativeStateEntryBindings).ArrayMax;
    (param_1->NativeStateEntryBindings).ArrayNum = 0;
    (param_1->NativeStateEntryBindings).ArrayMax = 0;
  }
  pTVar28 = &param_1->NativeStateExitBindings;
  pTVar29 = &this->NativeStateExitBindings;
  if (pTVar29 != pTVar28) {
    DestructItems<FNativeStateBinding,int>
              ((FNativeStateBinding *)(pTVar29->AllocatorInstance).Data,
               (this->NativeStateExitBindings).ArrayNum);
    pFVar35 = (pTVar29->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar29->AllocatorInstance).Data = (pTVar28->AllocatorInstance).Data;
    (pTVar28->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NativeStateExitBindings).ArrayNum = (param_1->NativeStateExitBindings).ArrayNum;
    (this->NativeStateExitBindings).ArrayMax = (param_1->NativeStateExitBindings).ArrayMax;
    (param_1->NativeStateExitBindings).ArrayNum = 0;
    (param_1->NativeStateExitBindings).ArrayMax = 0;
  }
  pTVar30 = &param_1->PoseSnapshots;
  pTVar31 = &this->PoseSnapshots;
  if (pTVar31 != pTVar30) {
    DestructItems<FPoseSnapshot,int>
              ((FPoseSnapshot *)(pTVar31->AllocatorInstance).Data,(this->PoseSnapshots).ArrayNum);
    pFVar35 = (pTVar31->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar31->AllocatorInstance).Data = (pTVar30->AllocatorInstance).Data;
    (pTVar30->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PoseSnapshots).ArrayNum = (param_1->PoseSnapshots).ArrayNum;
    (this->PoseSnapshots).ArrayMax = (param_1->PoseSnapshots).ArrayMax;
    (param_1->PoseSnapshots).ArrayNum = 0;
    (param_1->PoseSnapshots).ArrayMax = 0;
  }
  pTVar32 = &param_1->LoggedMessagesMap;
  this_02 = &this->LoggedMessagesMap;
  if (this_02 != pTVar32) {
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_02,0,*(int *)&(this->LoggedMessagesMap).field_0x8);
    if (*(void **)this_02 != (void *)0x0) {
      FMemory::Free(*(void **)this_02);
    }
    puVar3 = &(param_1->LoggedMessagesMap).field_0x10;
    *(undefined8 *)this_02 = *(undefined8 *)pTVar32;
    puVar4 = &(this->LoggedMessagesMap).field_0x10;
    *(undefined8 *)pTVar32 = 0;
    *(undefined4 *)&(this->LoggedMessagesMap).field_0x8 =
         *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x8;
    *(undefined4 *)&(this->LoggedMessagesMap).field_0xc =
         *(undefined4 *)&(param_1->LoggedMessagesMap).field_0xc;
    *(undefined8 *)&(param_1->LoggedMessagesMap).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->LoggedMessagesMap).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar36 = *(void **)&(this->LoggedMessagesMap).field_0x20;
      if (pvVar36 != (void *)0x0) {
        FMemory::Free(pvVar36);
      }
      *(undefined8 *)&(this->LoggedMessagesMap).field_0x20 =
           *(undefined8 *)&(param_1->LoggedMessagesMap).field_0x20;
      *(undefined8 *)&(param_1->LoggedMessagesMap).field_0x20 = 0;
      *(undefined4 *)&(this->LoggedMessagesMap).field_0x28 =
           *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x28;
      *(undefined4 *)&(this->LoggedMessagesMap).field_0x2c =
           *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x2c;
      *(undefined8 *)&(param_1->LoggedMessagesMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->LoggedMessagesMap).field_0x30 =
         *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x30;
    *(undefined4 *)&(this->LoggedMessagesMap).field_0x34 =
         *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x34;
    *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->LoggedMessagesMap).field_0x40 == 0) {
      *(undefined4 *)&(this->LoggedMessagesMap).field_0x38 =
           *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x38;
    }
    pvVar36 = *(void **)&(this->LoggedMessagesMap).field_0x40;
    if (pvVar36 != (void *)0x0) {
      FMemory::Free(pvVar36);
    }
    *(undefined8 *)&(this->LoggedMessagesMap).field_0x40 =
         *(undefined8 *)&(param_1->LoggedMessagesMap).field_0x40;
    *(undefined8 *)&(param_1->LoggedMessagesMap).field_0x40 = 0;
    *(undefined4 *)&(this->LoggedMessagesMap).field_0x48 =
         *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x48;
    *(undefined4 *)&(param_1->LoggedMessagesMap).field_0x48 = 0;
  }
  pTVar33 = &param_1->PreviouslyLoggedMessages;
  pTVar34 = &this->PreviouslyLoggedMessages;
  if (pTVar34 != pTVar33) {
    pFVar35 = (pTVar34->AllocatorInstance).Data;
    if (pFVar35 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar35);
    }
    (pTVar34->AllocatorInstance).Data = (pTVar33->AllocatorInstance).Data;
    (pTVar33->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PreviouslyLoggedMessages).ArrayNum = (param_1->PreviouslyLoggedMessages).ArrayNum;
    (this->PreviouslyLoggedMessages).ArrayMax = (param_1->PreviouslyLoggedMessages).ArrayMax;
    (param_1->PreviouslyLoggedMessages).ArrayNum = 0;
    (param_1->PreviouslyLoggedMessages).ArrayMax = 0;
  }
  this->bUpdatingRoot = param_1->bUpdatingRoot;
  bVar42 = (this->bBoneCachesInvalidated ^ param_1->bBoneCachesInvalidated) & 1 ^ this->field_0x801;
  this->field_0x801 = bVar42;
  bVar42 = (bVar42 ^ param_1->field_0x801) & 2 ^ bVar42;
  this->field_0x801 = bVar42;
  bVar42 = (bVar42 ^ param_1->field_0x801) & 4 ^ bVar42;
  this->field_0x801 = bVar42;
  bVar42 = (bVar42 ^ param_1->field_0x801) & 8 ^ bVar42;
  this->field_0x801 = bVar42;
  this->field_0x801 = (bVar42 ^ param_1->field_0x801) & 0x10 ^ bVar42;
  return this;
}

// operator= @ 147439160

/* WARNING: Type propagation algorithm not settling */

FAnimInstanceProxy * __thiscall
FAnimInstanceProxy::operator=(FAnimInstanceProxy *this,FAnimInstanceProxy *param_1)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar3;
  FAnimSync *pFVar4;
  FAnimSync *pFVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  TMap<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
  *pTVar7;
  TMap<FName,FAnimNotifyArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>_>
  *this_00;
  TArray<FMontageActiveSlotTracker,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FNativeTransitionBinding,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  int iVar15;
  FQueuedDrawDebugItem *pFVar16;
  FAnimTickRecord *pFVar17;
  FScriptContainerElement *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  FBoneContainer *pFVar20;
  FMontageEvaluationState *pFVar21;
  FNativeTransitionBinding *pFVar22;
  FPoseSnapshot *pFVar23;
  double dVar24;
  TReferenceControllerBase<1> *pTVar25;
  short sVar26;
  short sVar27;
  undefined4 uVar28;
  byte bVar29;
  longlong lVar30;
  TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_02
  ;
  
  pTVar1 = &this->QueuedDrawDebugItems;
  if (pTVar1 != &param_1->QueuedDrawDebugItems) {
    DestructItems<FQueuedDrawDebugItem,int>
              ((FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data,
               (this->QueuedDrawDebugItems).ArrayNum);
    iVar14 = (param_1->QueuedDrawDebugItems).ArrayNum;
    piVar2 = &(this->QueuedDrawDebugItems).ArrayMax;
    pFVar16 = (FQueuedDrawDebugItem *)(param_1->QueuedDrawDebugItems).AllocatorInstance.Data;
    (this->QueuedDrawDebugItems).ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,iVar14,*piVar2,&pTVar1->AllocatorInstance,iVar14,piVar2);
      ConstructItems<FQueuedDrawDebugItem,FQueuedDrawDebugItem,int>
                ((pTVar1->AllocatorInstance).Data,pFVar16,iVar14);
    }
  }
  dVar24 = (param_1->ComponentTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentTransform).Translation.XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Translation.XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ComponentTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ComponentTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentRelativeTransform).Rotation.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Rotation.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentRelativeTransform).Translation.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Translation.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentRelativeTransform).Translation.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Translation.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ActorTransform).Rotation.XY.m128d_f64[1];
  (this->ActorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ActorTransform).Rotation.XY.m128d_f64[0];
  (this->ActorTransform).Rotation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ActorTransform).Rotation.ZW.m128d_f64[1];
  (this->ActorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ActorTransform).Rotation.ZW.m128d_f64[0];
  (this->ActorTransform).Rotation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ActorTransform).Translation.XY.m128d_f64[1];
  (this->ActorTransform).Translation.XY.m128d_f64[0] =
       (param_1->ActorTransform).Translation.XY.m128d_f64[0];
  (this->ActorTransform).Translation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ActorTransform).Translation.ZW.m128d_f64[1];
  (this->ActorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ActorTransform).Translation.ZW.m128d_f64[0];
  (this->ActorTransform).Translation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ActorTransform).Scale3D.XY.m128d_f64[1];
  (this->ActorTransform).Scale3D.XY.m128d_f64[0] = (param_1->ActorTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->ActorTransform).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ActorTransform).Scale3D.ZW.m128d_f64[1];
  (this->ActorTransform).Scale3D.ZW.m128d_f64[0] = (param_1->ActorTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->ActorTransform).Scale3D.ZW.m128d_f64[1] = dVar24;
  this->AnimInstanceObject = param_1->AnimInstanceObject;
  this->AnimClassInterface = param_1->AnimClassInterface;
  this->Skeleton = param_1->Skeleton;
  this->SkeletalMeshComponent = param_1->SkeletalMeshComponent;
  this->MainInstanceProxy = param_1->MainInstanceProxy;
  this->CurrentDeltaSeconds = param_1->CurrentDeltaSeconds;
  this->CurrentTimeDilation = param_1->CurrentTimeDilation;
  ::FString::operator=(&this->ActorName,&param_1->ActorName);
  this->RootNode = param_1->RootNode;
  this->DefaultLinkedInstanceInputNode = param_1->DefaultLinkedInstanceInputNode;
  if (&this->SavedPoseQueueMap != &param_1->SavedPoseQueueMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->SavedPoseQueueMap).field_0x38,
               (int *)&(this->SavedPoseQueueMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->SavedPoseQueueMap).field_0x38,
               *(int *)&(param_1->SavedPoseQueueMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->SavedPoseQueueMap,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SavedPoseQueueMap);
  }
  pFVar4 = &param_1->Sync;
  pFVar5 = &this->Sync;
  if (pFVar5 != pFVar4) {
    DestructItems<FAnimTickRecord,int>
              ((FAnimTickRecord *)pFVar5->UngroupedActivePlayerArrays[0].AllocatorInstance.Data,
               (this->Sync).UngroupedActivePlayerArrays[0].ArrayNum);
    iVar14 = (param_1->Sync).UngroupedActivePlayerArrays[0].ArrayNum;
    piVar2 = &(this->Sync).UngroupedActivePlayerArrays[0].ArrayMax;
    pFVar17 = (FAnimTickRecord *)pFVar4->UngroupedActivePlayerArrays[0].AllocatorInstance.Data;
    iVar15 = *piVar2;
    (this->Sync).UngroupedActivePlayerArrays[0].ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar15 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,iVar14,iVar15,(ForAnyElementType *)pFVar5,iVar14,piVar2);
      ConstructItems<FAnimTickRecord,FAnimTickRecord,int>
                (pFVar5->UngroupedActivePlayerArrays[0].AllocatorInstance.Data,pFVar17,iVar14);
    }
  }
  pTVar13 = (param_1->Sync).UngroupedActivePlayerArrays + 1;
  pTVar3 = (this->Sync).UngroupedActivePlayerArrays + 1;
  if (pTVar3 != pTVar13) {
    DestructItems<FAnimTickRecord,int>
              ((FAnimTickRecord *)(pTVar3->AllocatorInstance).Data,
               (this->Sync).UngroupedActivePlayerArrays[1].ArrayNum);
    iVar14 = (param_1->Sync).UngroupedActivePlayerArrays[1].ArrayNum;
    piVar2 = &(this->Sync).UngroupedActivePlayerArrays[1].ArrayMax;
    iVar15 = *piVar2;
    pFVar17 = (FAnimTickRecord *)(pTVar13->AllocatorInstance).Data;
    (this->Sync).UngroupedActivePlayerArrays[1].ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar15 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,iVar14,iVar15,&pTVar3->AllocatorInstance,iVar14,piVar2);
      ConstructItems<FAnimTickRecord,FAnimTickRecord,int>
                ((pTVar3->AllocatorInstance).Data,pFVar17,iVar14);
    }
  }
  this_01 = (TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
             *)(this->Sync).SyncGroupMaps;
  lVar30 = 2;
  do {
    TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
    ::operator=(this_01,(TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
                         *)(((longlong)pFVar4 - (longlong)pFVar5) + (longlong)this_01));
    this_01 = this_01 + 1;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  (this->Sync).MirrorDataTable = (param_1->Sync).MirrorDataTable;
  (this->Sync).SyncGroupWriteIndex = (param_1->Sync).SyncGroupWriteIndex;
  pTVar6 = this->MachineWeightArrays;
  if (pTVar6 != param_1->MachineWeightArrays) {
    iVar14 = param_1->MachineWeightArrays[0].ArrayNum;
    piVar2 = &this->MachineWeightArrays[0].ArrayMax;
    pFVar18 = param_1->MachineWeightArrays[0].AllocatorInstance.Data;
    this->MachineWeightArrays[0].ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar14,*piVar2,&pTVar6->AllocatorInstance,iVar14,piVar2);
      if (iVar14 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar18,(longlong)iVar14 << 2);
      }
    }
  }
  pTVar6 = this->MachineWeightArrays + 1;
  if (pTVar6 != param_1->MachineWeightArrays + 1) {
    iVar14 = param_1->MachineWeightArrays[1].ArrayNum;
    piVar2 = &this->MachineWeightArrays[1].ArrayMax;
    iVar15 = *piVar2;
    pFVar18 = param_1->MachineWeightArrays[1].AllocatorInstance.Data;
    this->MachineWeightArrays[1].ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar15 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar14,iVar15,&pTVar6->AllocatorInstance,iVar14,piVar2);
      if (iVar14 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar18,(longlong)iVar14 << 2);
      }
    }
  }
  pTVar6 = this->StateWeightArrays;
  if (pTVar6 != param_1->StateWeightArrays) {
    iVar14 = param_1->StateWeightArrays[0].ArrayNum;
    piVar2 = &this->StateWeightArrays[0].ArrayMax;
    pFVar18 = param_1->StateWeightArrays[0].AllocatorInstance.Data;
    this->StateWeightArrays[0].ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar14,*piVar2,&pTVar6->AllocatorInstance,iVar14,piVar2);
      if (iVar14 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar18,(longlong)iVar14 << 2);
      }
    }
  }
  pTVar6 = this->StateWeightArrays + 1;
  if (pTVar6 != param_1->StateWeightArrays + 1) {
    iVar14 = param_1->StateWeightArrays[1].ArrayNum;
    piVar2 = &this->StateWeightArrays[1].ArrayMax;
    iVar15 = *piVar2;
    pFVar18 = param_1->StateWeightArrays[1].AllocatorInstance.Data;
    this->StateWeightArrays[1].ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar15 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar14,iVar15,&pTVar6->AllocatorInstance,iVar14,piVar2);
      if (iVar14 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar18,(longlong)iVar14 << 2);
      }
    }
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->StateMachineClassIndexToWeightOffset,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->StateMachineClassIndexToWeightOffset);
  this->BufferWriteIndex = param_1->BufferWriteIndex;
  (this->NotifyQueue).PredictedLODLevel = (param_1->NotifyQueue).PredictedLODLevel;
  (this->NotifyQueue).RandomStream = (param_1->NotifyQueue).RandomStream;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::operator=
            (&(this->NotifyQueue).AnimNotifies,&(param_1->NotifyQueue).AnimNotifies);
  pTVar7 = &(param_1->NotifyQueue).UnfilteredMontageAnimNotifies;
  this_00 = &(this->NotifyQueue).UnfilteredMontageAnimNotifies;
  if (this_00 != pTVar7) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x38,
               (int *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x38,
               *(int *)&(param_1->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar7);
  }
  (this->NotifyQueue).World.WeakPtr = (param_1->NotifyQueue).World.WeakPtr;
  this->RootMotionMode = param_1->RootMotionMode;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->SlotNameToTrackerIndex,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&param_1->SlotNameToTrackerIndex);
  pTVar8 = this->SlotWeightTracker;
  if (pTVar8 != param_1->SlotWeightTracker) {
    iVar14 = param_1->SlotWeightTracker[0].ArrayNum;
    piVar2 = &this->SlotWeightTracker[0].ArrayMax;
    pFVar18 = param_1->SlotWeightTracker[0].AllocatorInstance.Data;
    this->SlotWeightTracker[0].ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar14,*piVar2,&pTVar8->AllocatorInstance,iVar14,piVar2);
      if (iVar14 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar18,(longlong)iVar14 * 0xc);
      }
    }
  }
  pTVar8 = this->SlotWeightTracker + 1;
  if (pTVar8 != param_1->SlotWeightTracker + 1) {
    iVar14 = param_1->SlotWeightTracker[1].ArrayNum;
    piVar2 = &this->SlotWeightTracker[1].ArrayMax;
    iVar15 = *piVar2;
    pFVar18 = param_1->SlotWeightTracker[1].AllocatorInstance.Data;
    this->SlotWeightTracker[1].ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar15 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar14,iVar15,&pTVar8->AllocatorInstance,iVar14,piVar2);
      if (iVar14 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar18,(longlong)iVar14 * 0xc);
      }
    }
  }
  this_02 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)this->AnimationCurves;
  lVar30 = 3;
  do {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    operator=(this_02,(TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                       *)(((longlong)param_1 - (longlong)this) + (longlong)this_02));
    this_02 = this_02 + 1;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->MaterialParametersToClear,&param_1->MaterialParametersToClear);
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->ActiveAnimNotifiesSinceLastTick,&param_1->ActiveAnimNotifiesSinceLastTick);
  sVar26 = (param_1->InitializationCounter).Counter;
  sVar27 = (param_1->InitializationCounter).SkipFrames;
  uVar28 = *(undefined4 *)&(param_1->InitializationCounter).field_0xc;
  (this->InitializationCounter).LastSyncronizedFrame =
       (param_1->InitializationCounter).LastSyncronizedFrame;
  (this->InitializationCounter).Counter = sVar26;
  (this->InitializationCounter).SkipFrames = sVar27;
  *(undefined4 *)&(this->InitializationCounter).field_0xc = uVar28;
  sVar26 = (param_1->CachedBonesCounter).Counter;
  sVar27 = (param_1->CachedBonesCounter).SkipFrames;
  uVar28 = *(undefined4 *)&(param_1->CachedBonesCounter).field_0xc;
  (this->CachedBonesCounter).LastSyncronizedFrame =
       (param_1->CachedBonesCounter).LastSyncronizedFrame;
  (this->CachedBonesCounter).Counter = sVar26;
  (this->CachedBonesCounter).SkipFrames = sVar27;
  *(undefined4 *)&(this->CachedBonesCounter).field_0xc = uVar28;
  sVar26 = (param_1->UpdateCounter).Counter;
  sVar27 = (param_1->UpdateCounter).SkipFrames;
  uVar28 = *(undefined4 *)&(param_1->UpdateCounter).field_0xc;
  (this->UpdateCounter).LastSyncronizedFrame = (param_1->UpdateCounter).LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar26;
  (this->UpdateCounter).SkipFrames = sVar27;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar28;
  sVar26 = (param_1->EvaluationCounter).Counter;
  sVar27 = (param_1->EvaluationCounter).SkipFrames;
  uVar28 = *(undefined4 *)&(param_1->EvaluationCounter).field_0xc;
  (this->EvaluationCounter).LastSyncronizedFrame = (param_1->EvaluationCounter).LastSyncronizedFrame
  ;
  (this->EvaluationCounter).Counter = sVar26;
  (this->EvaluationCounter).SkipFrames = sVar27;
  *(undefined4 *)&(this->EvaluationCounter).field_0xc = uVar28;
  sVar26 = (param_1->SlotNodeInitializationCounter).Counter;
  sVar27 = (param_1->SlotNodeInitializationCounter).SkipFrames;
  uVar28 = *(undefined4 *)&(param_1->SlotNodeInitializationCounter).field_0xc;
  (this->SlotNodeInitializationCounter).LastSyncronizedFrame =
       (param_1->SlotNodeInitializationCounter).LastSyncronizedFrame;
  (this->SlotNodeInitializationCounter).Counter = sVar26;
  (this->SlotNodeInitializationCounter).SkipFrames = sVar27;
  *(undefined4 *)&(this->SlotNodeInitializationCounter).field_0xc = uVar28;
  this->FrameCounterForUpdate = param_1->FrameCounterForUpdate;
  this->FrameCounterForNodeUpdate = param_1->FrameCounterForNodeUpdate;
  if (&param_1->InterpolationOverride != &this->InterpolationOverride) {
    if ((param_1->InterpolationOverride).bIsSet == false) {
      if ((this->InterpolationOverride).bIsSet != false) {
        (this->InterpolationOverride).bIsSet = false;
      }
    }
    else {
      (this->InterpolationOverride).TypedValue = (param_1->InterpolationOverride).TypedValue;
      (this->InterpolationOverride).bIsSet = true;
    }
  }
  (this->ExtractedRootMotion).bHasRootMotion = (param_1->ExtractedRootMotion).bHasRootMotion;
  (this->ExtractedRootMotion).BlendWeight = (param_1->ExtractedRootMotion).BlendWeight;
  dVar24 = (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = dVar24;
  pTVar19 = (param_1->RequiredBones).SharedReferenceCount.ReferenceController;
  pFVar20 = (param_1->RequiredBones).Object;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar25 = (this->RequiredBones).SharedReferenceCount.ReferenceController;
  (this->RequiredBones).Object = pFVar20;
  (this->RequiredBones).SharedReferenceCount.ReferenceController = pTVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  this->LODLevel = param_1->LODLevel;
  pTVar9 = &this->MontageEvaluationData;
  this->CacheBonesRecursionCounter = param_1->CacheBonesRecursionCounter;
  this->NumUroSkippedFrames_Update = param_1->NumUroSkippedFrames_Update;
  this->NumUroSkippedFrames_Eval = param_1->NumUroSkippedFrames_Eval;
  if (pTVar9 != &param_1->MontageEvaluationData) {
    iVar14 = (param_1->MontageEvaluationData).ArrayNum;
    piVar2 = &(this->MontageEvaluationData).ArrayMax;
    pFVar21 = (FMontageEvaluationState *)(param_1->MontageEvaluationData).AllocatorInstance.Data;
    (this->MontageEvaluationData).ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar14,*piVar2,&pTVar9->AllocatorInstance,iVar14,piVar2);
      ConstructItems<FMontageEvaluationState,FMontageEvaluationState,int>
                ((pTVar9->AllocatorInstance).Data,pFVar21,iVar14);
    }
  }
  TSet<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>,FDefaultSetAllocator>
               *)&this->SlotGroupInertializationRequestMap,
              (TSet<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>,FDefaultSetAllocator>
               *)&param_1->SlotGroupInertializationRequestMap);
  if (&this->SlotGroupInertializationRequestDataMap !=
      &param_1->SlotGroupInertializationRequestDataMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->SlotGroupInertializationRequestDataMap).field_0x38,
               (int *)&(this->SlotGroupInertializationRequestDataMap).field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->SlotGroupInertializationRequestDataMap).field_0x38,
               *(int *)&(param_1->SlotGroupInertializationRequestDataMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->SlotGroupInertializationRequestDataMap,
                (TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SlotGroupInertializationRequestDataMap);
  }
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->GameThreadPreUpdateNodes,&param_1->GameThreadPreUpdateNodes);
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->LODDisabledGameThreadPreUpdateNodes,
             &param_1->LODDisabledGameThreadPreUpdateNodes);
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->DynamicResetNodes,&param_1->DynamicResetNodes);
  pTVar10 = &this->NativeTransitionBindings;
  if (pTVar10 != &param_1->NativeTransitionBindings) {
    DestructItems<FNativeTransitionBinding,int>
              ((FNativeTransitionBinding *)(pTVar10->AllocatorInstance).Data,
               (this->NativeTransitionBindings).ArrayNum);
    iVar14 = (param_1->NativeTransitionBindings).ArrayNum;
    piVar2 = &(this->NativeTransitionBindings).ArrayMax;
    pFVar22 = (FNativeTransitionBinding *)(param_1->NativeTransitionBindings).AllocatorInstance.Data
    ;
    (this->NativeTransitionBindings).ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar14,*piVar2,&pTVar10->AllocatorInstance,iVar14,piVar2);
      ConstructItems<FNativeTransitionBinding,FNativeTransitionBinding,int>
                ((pTVar10->AllocatorInstance).Data,pFVar22,iVar14);
    }
  }
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_>::operator=
            (&this->NativeStateEntryBindings,&param_1->NativeStateEntryBindings);
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_>::operator=
            (&this->NativeStateExitBindings,&param_1->NativeStateExitBindings);
  pTVar11 = &this->PoseSnapshots;
  if (pTVar11 != &param_1->PoseSnapshots) {
    DestructItems<FPoseSnapshot,int>
              ((FPoseSnapshot *)(pTVar11->AllocatorInstance).Data,(this->PoseSnapshots).ArrayNum);
    iVar14 = (param_1->PoseSnapshots).ArrayNum;
    piVar2 = &(this->PoseSnapshots).ArrayMax;
    pFVar23 = (FPoseSnapshot *)(param_1->PoseSnapshots).AllocatorInstance.Data;
    (this->PoseSnapshots).ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar14,*piVar2,&pTVar11->AllocatorInstance,iVar14,piVar2);
      ConstructItems<FPoseSnapshot,FPoseSnapshot,int>
                ((pTVar11->AllocatorInstance).Data,pFVar23,iVar14);
    }
  }
  if (&this->LoggedMessagesMap != &param_1->LoggedMessagesMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->LoggedMessagesMap).field_0x38,
               (int *)&(this->LoggedMessagesMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->LoggedMessagesMap).field_0x38,
               *(int *)&(param_1->LoggedMessagesMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->LoggedMessagesMap,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->LoggedMessagesMap);
  }
  pTVar12 = &this->PreviouslyLoggedMessages;
  if (pTVar12 != &param_1->PreviouslyLoggedMessages) {
    iVar14 = (param_1->PreviouslyLoggedMessages).ArrayNum;
    piVar2 = &(this->PreviouslyLoggedMessages).ArrayMax;
    pFVar18 = (param_1->PreviouslyLoggedMessages).AllocatorInstance.Data;
    (this->PreviouslyLoggedMessages).ArrayNum = iVar14;
    if ((iVar14 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar14,*piVar2,&pTVar12->AllocatorInstance,iVar14,piVar2);
      if (iVar14 != 0) {
        memcpy((pTVar12->AllocatorInstance).Data,pFVar18,(longlong)iVar14 << 4);
      }
    }
  }
  this->bUpdatingRoot = param_1->bUpdatingRoot;
  bVar29 = (this->bBoneCachesInvalidated ^ param_1->bBoneCachesInvalidated) & 1 ^ this->field_0x801;
  this->field_0x801 = bVar29;
  bVar29 = (bVar29 ^ param_1->field_0x801) & 2 ^ bVar29;
  this->field_0x801 = bVar29;
  bVar29 = (bVar29 ^ param_1->field_0x801) & 4 ^ bVar29;
  this->field_0x801 = bVar29;
  bVar29 = (bVar29 ^ param_1->field_0x801) & 8 ^ bVar29;
  this->field_0x801 = bVar29;
  this->field_0x801 = (bVar29 ^ param_1->field_0x801) & 0x10 ^ bVar29;
  return this;
}

// operator() @ 14743be50

void __thiscall
`FAnimInstanceProxy::BindNativeDelegates'::__l12::<lambda_2>::operator()
          (void *this,FAnimNode_StateMachine *param_1,FBakedAnimationState *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  UObject *pUVar3;
  FProperty *this_00;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  UScriptStruct *pUVar10;
  void *pvVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [16];
  
  pFVar15 = (param_2->Transitions).AllocatorInstance.Data;
  uVar1 = (param_2->Transitions).ArrayNum;
  uVar12 = (ulonglong)(int)uVar1;
  pFVar16 = pFVar15 + uVar12 * 0x30;
  do {
    if ((param_2->Transitions).ArrayNum != (int)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FBakedStateExitTransition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar16) {
      return;
    }
    if (*(int *)pFVar15 != -1) {
      plVar8 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x148) + 0x10))();
      iVar2 = param_1->StateMachineIndexInClass;
      if ((iVar2 < 0) || ((int)plVar8[1] <= iVar2)) {
        lVar14 = 0;
      }
      else {
        if ((iVar2 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar14 = (longlong)iVar2 * 0x38 + *plVar8;
      }
      uVar7 = *(uint *)(pFVar15 + 8);
      uVar13 = 0;
      if ((int)uVar7 < *(int *)(lVar14 + 0x28)) {
        uVar13 = ~uVar7 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = *(uint *)((longlong)(int)uVar7 * 0x38 + 0x1c + *(longlong *)(lVar14 + 0x20));
      uVar13 = 0;
      if ((int)uVar7 < *(int *)(lVar14 + 0x18)) {
        uVar13 = ~uVar7 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30 + (longlong)(int)uVar7 * 0x50) ==
          *(longlong *)(*(longlong *)((longlong)this + 8) + 0x10)) {
        iVar2 = *(int *)pFVar15;
        pUVar3 = *(UObject **)(*(longlong *)this + 0x140);
        if (iVar2 != -1) {
          plVar8 = *(longlong **)(*(longlong *)this + 0x148);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
          lVar14 = (**(code **)(*plVar8 + 0x20))(plVar8);
          uVar13 = (*(int *)(lVar14 + 8) - iVar2) - 1;
          uVar7 = 0;
          if ((int)uVar13 < (int)plVar9[1]) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = *(FProperty **)(*plVar9 + (longlong)(int)uVar13 * 8);
          pUVar10 = FAnimNode_TransitionResult::StaticStruct();
          pUVar4 = (UScriptStruct *)this_00[1]._padding_;
          if (pUVar4 == (UScriptStruct *)0x0) {
            bVar6 = pUVar10 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar4 == pUVar10;
          }
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NodeProperty->Struct == NodeType::StaticStruct()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBlueprintGeneratedClass.h"
                                 ,0x297,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pvVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar3,0);
          if (pvVar11 != (void *)0x0) {
            TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                       ((longlong)pvVar11 + 0x18),
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                       (*(longlong *)((longlong)this + 8) + 0x18));
          }
        }
      }
    }
    uVar12 = (ulonglong)uVar1;
    pFVar15 = pFVar15 + 0x30;
  } while( true );
}

// operator() @ 14743c1a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FAnimInstanceProxy::BindNativeDelegates'::__l16::<lambda_3>::operator()
          (void *this,FAnimNode_StateMachine *param_1,FBakedAnimationState *param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1->OnGraphStatesEntered).ArrayNum;
  if (iVar5 < param_3 + 1) {
    iVar5 = param_3 + 1;
  }
  TArray<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  ::SetNum(&param_1->OnGraphStatesEntered,iVar5,Default);
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_3 < (param_1->OnGraphStatesEntered).ArrayNum) {
    uVar4 = (uint)~param_3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)((param_1->OnGraphStatesEntered).AllocatorInstance.Data + (longlong)param_3 * 0x18),
             (TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)(lVar1 + 0x10));
  return;
}

// operator() @ 14743c250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FAnimInstanceProxy::BindNativeDelegates'::__l20::<lambda_4>::operator()
          (void *this,FAnimNode_StateMachine *param_1,FBakedAnimationState *param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1->OnGraphStatesExited).ArrayNum;
  if (iVar5 < param_3 + 1) {
    iVar5 = param_3 + 1;
  }
  TArray<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  ::SetNum(&param_1->OnGraphStatesExited,iVar5,Default);
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_3 < (param_1->OnGraphStatesExited).ArrayNum) {
    uVar4 = (uint)~param_3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)((param_1->OnGraphStatesExited).AllocatorInstance.Data + (longlong)param_3 * 0x18),
             (TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)(lVar1 + 0x10));
  return;
}

// AddAnimNotifies @ 14743cfc0

void __thiscall
FAnimInstanceProxy::AddAnimNotifies
          (FAnimInstanceProxy *this,
          TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  FAnimNotifyQueue::AddAnimNotifies(&this->NotifyQueue,true,param_1,param_2);
  return;
}

// AddAnimNotifyFromGeneratedClass @ 14743cfe0

void __thiscall
FAnimInstanceProxy::AddAnimNotifyFromGeneratedClass(FAnimInstanceProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  UClass *pUVar5;
  uint uVar6;
  
  if ((param_1 != -1) && (this->AnimClassInterface != (IAnimClassInterface *)0x0)) {
    lVar3 = (**(code **)((longlong)*this->AnimClassInterface + 0x18))();
    if ((param_1 < 0) || (*(int *)(lVar3 + 8) <= param_1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimClassInterface->GetAnimNotifies().IsValidIndex(NotifyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                         ,0x3b3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    plVar4 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x18))();
    uVar6 = 0;
    if (param_1 < (int)plVar4[1]) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar3 = *plVar4;
    pUVar5 = IAnimClassInterface::GetActualAnimClass(this->AnimClassInterface);
    FAnimNotifyQueue::AddAnimNotify
              (&this->NotifyQueue,(FAnimNotifyEvent *)((longlong)param_1 * 0xb8 + lVar3),
               (UObject *)pUVar5);
  }
  return;
}

// AddCurveValue @ 14743d1c0

void __thiscall
FAnimInstanceProxy::AddCurveValue
          (FAnimInstanceProxy *this,FName *param_1,float param_2,bool param_3,bool param_4)

{
  FName FVar1;
  uint uVar2;
  TTuple<FName,float> *pTVar3;
  float *pfVar4;
  float *pfVar5;
  FName local_res8 [2];
  float local_res18 [4];
  FName *local_38;
  float *local_30;
  
  local_res18[0] = param_2;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::AddCurveValue");
  pTVar3 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)this->AnimationCurves,*param_1);
  pfVar5 = (float *)0x0;
  pfVar4 = (float *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,float> *)0x0) {
    pfVar4 = pfVar5;
  }
  if (pfVar4 == (float *)0x0) {
    local_30 = local_res18;
    local_38 = param_1;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_const_&>_>
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)this->AnimationCurves,
               (TPairInitializer<FName_const_&,float_const_&> *)(local_res18 + 2),(bool *)&local_38)
    ;
  }
  else {
    *pfVar4 = local_res18[0];
  }
  if (param_3) {
    pTVar3 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)(this->AnimationCurves + 2),*param_1);
    pfVar4 = (float *)&pTVar3->field_0x8;
    if (pTVar3 == (TTuple<FName,float> *)0x0) {
      pfVar4 = pfVar5;
    }
    if (pfVar4 == (float *)0x0) {
      local_30 = local_res18;
      local_38 = param_1;
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                  *)(this->AnimationCurves + 2),
                 (TPairInitializer<FName_const_&,float_const_&> *)(local_res18 + 2),
                 (bool *)&local_38);
    }
    else {
      *pfVar4 = local_res18[0];
    }
  }
  if (param_4 != false) {
    FVar1 = *param_1;
    local_res8[0] = FVar1;
    if (*(int *)&(this->MaterialParametersToClear).Elements.field_0x8 !=
        *(int *)&(this->MaterialParametersToClear).Elements.field_0x34) {
      uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::RemoveImpl<FName>
                (&this->MaterialParametersToClear,FVar1.Number + uVar2,local_res8);
    }
    pTVar3 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)(this->AnimationCurves + 1),*param_1);
    pfVar4 = (float *)&pTVar3->field_0x8;
    if (pTVar3 == (TTuple<FName,float> *)0x0) {
      pfVar4 = pfVar5;
    }
    if (pfVar4 != (float *)0x0) {
      *pfVar4 = local_res18[0];
      FStatsHierarchical::EndMeasurement();
      return;
    }
    local_30 = local_res18;
    local_38 = param_1;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_const_&>_>
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)(this->AnimationCurves + 1),
               (TPairInitializer<FName_const_&,float_const_&> *)&param_4,(bool *)&local_38);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// AddNativeStateEntryBinding @ 14743d600

void __thiscall
FAnimInstanceProxy::AddNativeStateEntryBinding
          (FAnimInstanceProxy *this,FName *param_1,FName *param_2,
          TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
          *param_3,FName *param_4)

{
  int *piVar1;
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDestructionSentinel local_48;
  FName local_30;
  FName local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  local_30 = *param_1;
  pTVar2 = &this->NativeStateEntryBindings;
  local_28 = *param_2;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)local_20,param_3);
  pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_30) &&
     (&local_30 < pFVar3 + (longlong)(this->NativeStateEntryBindings).ArrayMax * 5)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NativeStateEntryBindings).ArrayNum;
  piVar1 = &(this->NativeStateEntryBindings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NativeStateEntryBindings).ArrayNum = iVar6 + 1;
  pFVar3 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
  *pFVar3 = local_30;
  pFVar3[1] = local_28;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar3 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  return;
}

// AddNativeStateExitBinding @ 14743d920

void __thiscall
FAnimInstanceProxy::AddNativeStateExitBinding
          (FAnimInstanceProxy *this,FName *param_1,FName *param_2,
          TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
          *param_3,FName *param_4)

{
  int *piVar1;
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDestructionSentinel local_48;
  FName local_30;
  FName local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  local_30 = *param_1;
  pTVar2 = &this->NativeStateExitBindings;
  local_28 = *param_2;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)local_20,param_3);
  pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_30) &&
     (&local_30 < pFVar3 + (longlong)(this->NativeStateExitBindings).ArrayMax * 5)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NativeStateExitBindings).ArrayNum;
  piVar1 = &(this->NativeStateExitBindings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NativeStateExitBindings).ArrayNum = iVar6 + 1;
  pFVar3 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
  *pFVar3 = local_30;
  pFVar3[1] = local_28;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar3 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  return;
}

// AddNativeTransitionBinding @ 14743dc40

void __thiscall
FAnimInstanceProxy::AddNativeTransitionBinding
          (FAnimInstanceProxy *this,FName *param_1,FName *param_2,FName *param_3,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_4,FName *param_5)

{
  int *piVar1;
  TArray<FNativeTransitionBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FDestructionSentinel local_58;
  FName local_40;
  FName local_38;
  FName local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  local_40 = *param_1;
  pTVar2 = &this->NativeTransitionBindings;
  local_38 = *param_2;
  local_30 = *param_3;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,param_4);
  pFVar6 = (FName *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar6 <= &local_40) &&
     (&local_40 < pFVar6 + (longlong)(this->NativeTransitionBindings).ArrayMax * 6)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->NativeTransitionBindings).ArrayNum;
  piVar1 = &(this->NativeTransitionBindings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NativeTransitionBindings).ArrayNum = iVar5 + 1;
  pFVar6 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
  *pFVar6 = local_40;
  pFVar6[1] = local_38;
  pFVar6[2] = local_30;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar6 + 3),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// AddPoseSnapshot @ 14743df80

FPoseSnapshot * __thiscall
FAnimInstanceProxy::AddPoseSnapshot(FAnimInstanceProxy *this,FName param_1)

{
  int *piVar1;
  TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPoseSnapshot *pFVar8;
  FPoseSnapshot *pFVar9;
  uint uVar10;
  
  pTVar2 = &this->PoseSnapshots;
  pFVar8 = (FPoseSnapshot *)(pTVar2->AllocatorInstance).Data;
  iVar7 = (this->PoseSnapshots).ArrayNum;
  pFVar9 = pFVar8 + iVar7;
  do {
    if (pFVar8 == pFVar9) {
LAB_14743dfc3:
      piVar1 = &(this->PoseSnapshots).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar2->AllocatorInstance,piVar1);
        (this->PoseSnapshots).ArrayNum = iVar7;
      }
      uVar3 = (this->PoseSnapshots).ArrayNum;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      (this->PoseSnapshots).ArrayNum = uVar3 + 1;
      DefaultConstructItems<FPoseSnapshot,int>(pFVar4 + (longlong)(int)uVar3 * 0x38,1);
      uVar10 = 0;
      if ((int)uVar3 < (this->PoseSnapshots).ArrayNum) {
        uVar10 = ~uVar3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FPoseSnapshot *)(*pcVar5)();
        return pFVar8;
      }
      pFVar8 = (FPoseSnapshot *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x38);
      pFVar8->SnapshotName = param_1;
      return pFVar8;
    }
    if (pFVar8->SnapshotName == param_1) {
      if (pFVar8 != (FPoseSnapshot *)0x0) {
        (pFVar8->LocalTransforms).ArrayNum = 0;
        if ((pFVar8->LocalTransforms).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,0,(ForAnyElementType *)pFVar8,0,&(pFVar8->LocalTransforms).ArrayMax);
        }
        (pFVar8->BoneNames).ArrayNum = 0;
        if ((pFVar8->BoneNames).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&(pFVar8->BoneNames).AllocatorInstance,0,&(pFVar8->BoneNames).ArrayMax);
        }
        pFVar8->bIsValid = false;
        (pFVar8->SkeletalMeshName).ComparisonIndex = 0;
        (pFVar8->SkeletalMeshName).Number = 0;
        pFVar8->SnapshotName = param_1;
        return pFVar8;
      }
      goto LAB_14743dfc3;
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// AddReferencedObjects @ 14743e130

void __thiscall
FAnimInstanceProxy::AddReferencedObjects
          (FAnimInstanceProxy *this,UAnimInstance *param_1,FReferenceCollector *param_2)

{
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::AddReferencedObjects");
  UE::Anim::FAnimSync::AddReferencedObjects(&this->Sync,param_1,param_2);
  FStatsHierarchical::EndMeasurement();
  return;
}

// AnimDrawDebugCapsule @ 14743e960

void __thiscall
FAnimInstanceProxy::AnimDrawDebugCapsule
          (FAnimInstanceProxy *this,TVector<double> *param_1,float param_2,float param_3,
          TRotator<double> *param_4,FColor *param_5,bool param_6,float param_7,float param_8,
          ESceneDepthPriorityGroup param_9)

{
  int *piVar1;
  FQueuedDrawDebugItem *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FQueuedDrawDebugItem local_b8;
  
  local_b8.Segments = 0;
  local_b8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Message.Data.ArrayNum = 0;
  local_b8.Message.Data.ArrayMax = 0;
  local_b8.field1_0x8._8_8_ = 0;
  local_b8.field1_0x8._16_8_ = 0;
  local_b8.Center.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_b8.Center.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_b8.ItemType.Value = '\t';
  local_b8.field2_0x20._0_8_ = 0;
  local_b8.field2_0x20._8_8_ = 0;
  local_b8.Center.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pFVar2 = (FQueuedDrawDebugItem *)(this->QueuedDrawDebugItems).AllocatorInstance.Data;
  local_b8.Rotation.Pitch = param_4->Pitch;
  local_b8.Rotation.Yaw = param_4->Yaw;
  local_b8.Rotation.Roll = param_4->Roll;
  local_b8.Color.field0_0x0._s_0 = param_5->field0_0x0;
  local_b8.bPersistentLines = param_6;
  local_b8.DepthPriority.Value = (undefined1)param_9;
  local_b8.field1_0x8._0_8_ = 0;
  local_b8.field2_0x20._16_8_ = 0;
  local_b8.LifeTime = param_7;
  local_b8.Thickness = param_8;
  local_b8.TextScale.field0_0x0._s_0.X = 0.0;
  local_b8.TextScale.field0_0x0._s_0.Y = 0.0;
  local_b8.Radius = param_3;
  local_b8.Size = param_2;
  if ((pFVar2 <= &local_b8) && (&local_b8 < pFVar2 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar1 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&(this->QueuedDrawDebugItems).AllocatorInstance,piVar1);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar5 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)
             ((this->QueuedDrawDebugItems).AllocatorInstance.Data + (longlong)iVar5 * 0xb0),
             &local_b8);
  if (local_b8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugCircle @ 14743ead0

void __thiscall
FAnimInstanceProxy::AnimDrawDebugCircle
          (FAnimInstanceProxy *this,TVector<double> *param_1,float param_2,int param_3,
          FColor *param_4,TVector<double> *param_5,bool param_6,float param_7,
          ESceneDepthPriorityGroup param_8,float param_9)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FQueuedDrawDebugItem *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  double dVar11;
  FQueuedDrawDebugItem local_e8;
  double local_28;
  
  local_e8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.field1_0x8._8_8_ = 0;
  local_e8.field1_0x8._16_8_ = 0;
  local_e8.Center.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_e8.Center.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_e8.Message.Data.ArrayNum = 0;
  local_e8.Message.Data.ArrayMax = 0;
  local_e8.Rotation.Pitch = 0.0;
  local_e8.Rotation.Yaw = 0.0;
  local_e8.Center.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_e8.Size = 0.0;
  local_e8.Color.field0_0x0._s_0 = param_4->field0_0x0;
  local_e8.field1_0x8._0_8_ = 0;
  dVar2 = (param_5->field0_0x0)._s_0.X;
  dVar3 = (param_5->field0_0x0)._s_0.Y;
  dVar4 = (param_5->field0_0x0)._s_0.Z;
  local_e8.ItemType.Value = '\x06';
  local_e8.Rotation.Roll = 0.0;
  local_e8.TextScale.field0_0x0._s_0.X = 0.0;
  local_e8.TextScale.field0_0x0._s_0.Y = 0.0;
  dVar11 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
  if (dVar11 == __real_3ff0000000000000) {
    uVar7 = *(double *)((longlong)&param_5->field0_0x0 + 8);
    local_e8.field2_0x20._16_8_ = (param_5->field0_0x0)._s_0.Z;
    uVar8 = (param_5->field0_0x0)._s_0.X;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    local_e8.field2_0x20._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      local_28 = dVar4 * dVar11;
      uVar7 = dVar3 * dVar11;
      local_e8.field2_0x20._16_8_ = local_28;
      uVar8 = dVar2 * dVar11;
    }
  }
  pFVar5 = (FQueuedDrawDebugItem *)(this->QueuedDrawDebugItems).AllocatorInstance.Data;
  local_e8.bPersistentLines = param_6;
  local_e8.field2_0x20._8_4_ = (int)uVar7;
  local_e8.field2_0x20._0_8_ = uVar8;
  local_e8.field2_0x20._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  local_e8.DepthPriority.Value = (undefined1)param_8;
  local_e8.LifeTime = param_7;
  local_e8.Thickness = param_9;
  local_e8.Radius = param_2;
  local_e8.Segments = param_3;
  if (((pFVar5 <= &local_e8) && (&local_e8 < pFVar5 + (this->QueuedDrawDebugItems).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar1 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b0,&(this->QueuedDrawDebugItems).AllocatorInstance,piVar1);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar10 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)
             ((this->QueuedDrawDebugItems).AllocatorInstance.Data + (longlong)iVar10 * 0xb0),
             &local_e8);
  if (local_e8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugCone @ 14743ece0

void __thiscall
FAnimInstanceProxy::AnimDrawDebugCone
          (FAnimInstanceProxy *this,TVector<double> *param_1,float param_2,TVector<double> *param_3,
          float param_4,float param_5,int param_6,FColor *param_7,bool param_8,float param_9,
          ESceneDepthPriorityGroup param_10,float param_11)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FQueuedDrawDebugItem *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  double dVar11;
  FQueuedDrawDebugItem local_e8;
  double local_28;
  
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  local_e8.field1_0x8._16_8_ = 0;
  local_e8.Center.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_e8.Center.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_e8.Radius = 0.0;
  local_e8.Size = 0.0;
  local_e8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Rotation.Pitch = 0.0;
  local_e8.Rotation.Yaw = 0.0;
  local_e8.Center.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_e8.field1_0x8._s_1.AngleWidth = param_4;
  local_e8.Message.Data.ArrayNum = 0;
  local_e8.Message.Data.ArrayMax = 0;
  local_e8.field1_0x8._12_4_ = 0;
  local_e8.field1_0x8._s_1.AngleHeight = param_5;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  local_e8.ItemType.Value = '\a';
  local_e8.Rotation.Roll = 0.0;
  local_e8.TextScale.field0_0x0._s_0.X = 0.0;
  local_e8.TextScale.field0_0x0._s_0.Y = 0.0;
  dVar11 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
  if (dVar11 == __real_3ff0000000000000) {
    uVar7 = *(double *)((longlong)&param_3->field0_0x0 + 8);
    local_e8.field2_0x20._16_8_ = (param_3->field0_0x0)._s_0.Z;
    uVar8 = (param_3->field0_0x0)._s_0.X;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    local_e8.field2_0x20._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      local_28 = dVar3 * dVar11;
      uVar7 = dVar4 * dVar11;
      local_e8.field2_0x20._16_8_ = local_28;
      uVar8 = dVar2 * dVar11;
    }
  }
  local_e8.Segments = param_6;
  local_e8.field2_0x20._8_4_ = (int)uVar7;
  local_e8.field2_0x20._0_8_ = uVar8;
  local_e8.field2_0x20._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  local_e8.LifeTime = param_9;
  local_e8.Color.field0_0x0._s_0 = param_7->field0_0x0;
  local_e8.bPersistentLines = param_8;
  local_e8.DepthPriority.Value = (undefined1)param_10;
  pFVar5 = (FQueuedDrawDebugItem *)(this->QueuedDrawDebugItems).AllocatorInstance.Data;
  local_e8.Thickness = param_11;
  local_e8.field1_0x8._s_1.Length = param_2;
  if (((pFVar5 <= &local_e8) && (&local_e8 < pFVar5 + (this->QueuedDrawDebugItems).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar1 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b0,&(this->QueuedDrawDebugItems).AllocatorInstance,piVar1);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar10 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)
             ((this->QueuedDrawDebugItems).AllocatorInstance.Data + (longlong)iVar10 * 0xb0),
             &local_e8);
  if (local_e8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugCoordinateSystem @ 14743ef10

void __thiscall
FAnimInstanceProxy::AnimDrawDebugCoordinateSystem
          (FAnimInstanceProxy *this,TVector<double> *param_1,TRotator<double> *param_2,float param_3
          ,bool param_4,float param_5,float param_6,ESceneDepthPriorityGroup param_7)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FQueuedDrawDebugItem *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FQueuedDrawDebugItem local_b8;
  
  local_b8.Segments = 0;
  local_b8.Color.field0_0x0 = (FColor_u_0)0x0;
  local_b8.field2_0x20._0_8_ = 0;
  local_b8.field2_0x20._8_8_ = 0;
  local_b8.Center.field0_0x0._s_0.Y = 0.0;
  local_b8.Center.field0_0x0._s_0.Z = 0.0;
  pTVar1 = &this->QueuedDrawDebugItems;
  local_b8.TextScale.field0_0x0._s_0.X = 0.0;
  local_b8.TextScale.field0_0x0._s_0.Y = 0.0;
  local_b8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.field1_0x8._0_8_ = (param_1->field0_0x0)._s_0.X;
  local_b8.field1_0x8._8_8_ = (param_1->field0_0x0)._s_0.Y;
  local_b8.Message.Data.ArrayNum = 0;
  local_b8.Message.Data.ArrayMax = 0;
  local_b8.field2_0x20._16_8_ = 0;
  local_b8.Center.field0_0x0._s_0.X = 0.0;
  local_b8.field1_0x8._16_8_ = (param_1->field0_0x0)._s_0.Z;
  pFVar3 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  local_b8.bPersistentLines = param_4;
  local_b8.Rotation.Pitch = param_2->Pitch;
  local_b8.Rotation.Yaw = param_2->Yaw;
  local_b8.Rotation.Roll = param_2->Roll;
  local_b8.DepthPriority.Value = (undefined1)param_7;
  local_b8.LifeTime = param_5;
  local_b8.Thickness = param_6;
  local_b8.Radius = 0.0;
  local_b8.ItemType.Value = '\x04';
  local_b8.Size = param_3;
  if ((pFVar3 <= &local_b8) && (&local_b8 < pFVar3 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar2 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar6 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0xb0),
             &local_b8);
  if (local_b8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugDirectionalArrow @ 14743f070

void __thiscall
FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
          (FAnimInstanceProxy *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FColor *param_4,bool param_5,float param_6,float param_7,ESceneDepthPriorityGroup param_8)

{
  int *piVar1;
  FQueuedDrawDebugItem *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FQueuedDrawDebugItem local_b8;
  
  local_b8.Segments = 0;
  local_b8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Message.Data.ArrayNum = 0;
  local_b8.Message.Data.ArrayMax = 0;
  local_b8.ItemType.Value = '\0';
  local_b8.Center.field0_0x0._s_0.Y = 0.0;
  local_b8.Center.field0_0x0._s_0.Z = 0.0;
  local_b8.field1_0x8._0_8_ = (param_1->field0_0x0)._s_0.X;
  local_b8.field1_0x8._8_8_ = (param_1->field0_0x0)._s_0.Y;
  local_b8.Radius = 0.0;
  local_b8.Color.field0_0x0._s_0 = param_4->field0_0x0;
  local_b8.Rotation.Pitch = 0.0;
  local_b8.Rotation.Yaw = 0.0;
  local_b8.field1_0x8._16_8_ = (param_1->field0_0x0)._s_0.Z;
  pFVar2 = (FQueuedDrawDebugItem *)(this->QueuedDrawDebugItems).AllocatorInstance.Data;
  local_b8.bPersistentLines = param_5;
  local_b8.field2_0x20._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_b8.field2_0x20._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_b8.field2_0x20._16_8_ = (param_2->field0_0x0)._s_0.Z;
  local_b8.DepthPriority.Value = (undefined1)param_8;
  local_b8.Center.field0_0x0._s_0.X = 0.0;
  local_b8.Rotation.Roll = 0.0;
  local_b8.LifeTime = param_6;
  local_b8.Thickness = param_7;
  local_b8.TextScale.field0_0x0._s_0.X = 0.0;
  local_b8.TextScale.field0_0x0._s_0.Y = 0.0;
  local_b8.Size = param_3;
  if ((pFVar2 <= &local_b8) && (&local_b8 < pFVar2 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar1 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&(this->QueuedDrawDebugItems).AllocatorInstance,piVar1);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar5 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)
             ((this->QueuedDrawDebugItems).AllocatorInstance.Data + (longlong)iVar5 * 0xb0),
             &local_b8);
  if (local_b8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugInWorldMessage @ 14743f1e0

void __thiscall
FAnimInstanceProxy::AnimDrawDebugInWorldMessage
          (FAnimInstanceProxy *this,FString *param_1,TVector<double> *param_2,FColor *param_3,
          float param_4)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  FQueuedDrawDebugItem *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FQueuedDrawDebugItem local_c8;
  
  local_c8.Segments = 0;
  local_c8.Color.field0_0x0 = (FColor_u_0)0x0;
  local_c8.bPersistentLines = false;
  local_c8.LifeTime = 0.0;
  local_c8.Thickness = 0.0;
  local_c8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Message.Data.ArrayNum = 0;
  local_c8.Message.Data.ArrayMax = 0;
  local_c8.DepthPriority.Value = '\0';
  local_c8.field1_0x8._0_8_ = 0;
  local_c8.Rotation.Roll = 0.0;
  local_c8.field1_0x8._8_8_ = 0;
  local_c8.field1_0x8._16_8_ = 0;
  local_c8.field2_0x20._0_8_ = 0;
  local_c8.field2_0x20._8_8_ = 0;
  local_c8.field2_0x20._16_8_ = 0;
  local_c8.Center.field0_0x0._s_0.X = 0.0;
  local_c8.Center.field0_0x0._s_0.Y = 0.0;
  local_c8.Center.field0_0x0._s_0.Z = 0.0;
  local_c8.Rotation.Pitch = 0.0;
  local_c8.Rotation.Yaw = 0.0;
  local_c8.Radius = 0.0;
  local_c8.Size = 0.0;
  local_c8.ItemType.Value = '\b';
  local_c8.TextScale.field0_0x0._s_0.X = 0.0;
  local_c8.TextScale.field0_0x0._s_0.Y = 0.0;
  if (&local_c8.Message != param_1) {
    uVar3 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_c8.Message.Data.ArrayMax = 0;
    local_c8.Message.Data.ArrayNum = uVar3;
    if (uVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,0,(ForAnyElementType *)&local_c8.Message,uVar3,
                 &local_c8.Message.Data.ArrayMax);
      memcpy(local_c8.Message.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar3 * 2);
    }
  }
  local_c8.field1_0x8._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_c8.field1_0x8._8_8_ = (param_2->field0_0x0)._s_0.Y;
  pTVar1 = &this->QueuedDrawDebugItems;
  local_c8.field1_0x8._16_8_ = (param_2->field0_0x0)._s_0.Z;
  pFVar4 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  local_c8.Color.field0_0x0 = (FColor_u_0)(param_3->field0_0x0).Bits;
  local_c8.TextScale.field0_0x0._s_0.X = (double)param_4;
  if (((pFVar4 <= &local_c8) && (&local_c8 < pFVar4 + (this->QueuedDrawDebugItems).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar2 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar7 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0xb0),
             &local_c8);
  if (local_c8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugLine @ 14743f3d0

void __thiscall
FAnimInstanceProxy::AnimDrawDebugLine
          (FAnimInstanceProxy *this,TVector<double> *param_1,TVector<double> *param_2,
          FColor *param_3,bool param_4,float param_5,float param_6,ESceneDepthPriorityGroup param_7)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FQueuedDrawDebugItem *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FQueuedDrawDebugItem local_b8;
  
  local_b8.Radius = 0.0;
  local_b8.Size = 0.0;
  local_b8.Segments = 0;
  local_b8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->QueuedDrawDebugItems;
  local_b8.Message.Data.ArrayNum = 0;
  local_b8.Message.Data.ArrayMax = 0;
  local_b8.Color.field0_0x0._s_0 = param_3->field0_0x0;
  local_b8.Center.field0_0x0._s_0.Y = 0.0;
  local_b8.Center.field0_0x0._s_0.Z = 0.0;
  local_b8.field1_0x8._0_8_ = (param_1->field0_0x0)._s_0.X;
  local_b8.field1_0x8._8_8_ = (param_1->field0_0x0)._s_0.Y;
  local_b8.Rotation.Pitch = 0.0;
  local_b8.Rotation.Yaw = 0.0;
  local_b8.field1_0x8._16_8_ = (param_1->field0_0x0)._s_0.Z;
  pFVar3 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  local_b8.bPersistentLines = param_4;
  local_b8.field2_0x20._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_b8.field2_0x20._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_b8.field2_0x20._16_8_ = (param_2->field0_0x0)._s_0.Z;
  local_b8.DepthPriority.Value = (undefined1)param_7;
  local_b8.LifeTime = param_5;
  local_b8.Center.field0_0x0._s_0.X = 0.0;
  local_b8.Rotation.Roll = 0.0;
  local_b8.Thickness = param_6;
  local_b8.ItemType.Value = '\x02';
  local_b8.TextScale.field0_0x0._s_0.X = 0.0;
  local_b8.TextScale.field0_0x0._s_0.Y = 0.0;
  if ((pFVar3 <= &local_b8) && (&local_b8 < pFVar3 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar2 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar6 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0xb0),
             &local_b8);
  if (local_b8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugOnScreenMessage @ 14743f540

void __thiscall
FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
          (FAnimInstanceProxy *this,FString *param_1,FColor *param_2,TVector2<double> *param_3,
          ESceneDepthPriorityGroup param_4)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  FQueuedDrawDebugItem *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FQueuedDrawDebugItem local_c8;
  
  local_c8.Segments = 0;
  local_c8.Color.field0_0x0 = (FColor_u_0)0x0;
  local_c8.bPersistentLines = false;
  local_c8.LifeTime = 0.0;
  local_c8.Thickness = 0.0;
  local_c8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Message.Data.ArrayNum = 0;
  local_c8.Message.Data.ArrayMax = 0;
  local_c8.DepthPriority.Value = '\0';
  local_c8.field1_0x8._0_8_ = 0;
  local_c8.Rotation.Roll = 0.0;
  local_c8.field1_0x8._8_8_ = 0;
  local_c8.field1_0x8._16_8_ = 0;
  local_c8.field2_0x20._0_8_ = 0;
  local_c8.field2_0x20._8_8_ = 0;
  local_c8.field2_0x20._16_8_ = 0;
  local_c8.Center.field0_0x0._s_0.X = 0.0;
  local_c8.Center.field0_0x0._s_0.Y = 0.0;
  local_c8.Center.field0_0x0._s_0.Z = 0.0;
  local_c8.Rotation.Pitch = 0.0;
  local_c8.Rotation.Yaw = 0.0;
  local_c8.Radius = 0.0;
  local_c8.Size = 0.0;
  local_c8.ItemType.Value = '\x03';
  local_c8.TextScale.field0_0x0._s_0.X = 0.0;
  local_c8.TextScale.field0_0x0._s_0.Y = 0.0;
  if (&local_c8.Message != param_1) {
    uVar3 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_c8.Message.Data.ArrayMax = 0;
    local_c8.Message.Data.ArrayNum = uVar3;
    if (uVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,0,(ForAnyElementType *)&local_c8.Message,uVar3,
                 &local_c8.Message.Data.ArrayMax);
      memcpy(local_c8.Message.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar3 * 2);
    }
  }
  pTVar1 = &this->QueuedDrawDebugItems;
  local_c8.TextScale.field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_c8.TextScale.field0_0x0._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  pFVar4 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  local_c8.Color.field0_0x0 = (FColor_u_0)(param_2->field0_0x0).Bits;
  local_c8.DepthPriority.Value = (undefined1)param_4;
  if (((pFVar4 <= &local_c8) && (&local_c8 < pFVar4 + (this->QueuedDrawDebugItems).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar2 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar7 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0xb0),
             &local_c8);
  if (local_c8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugPlane @ 14743f720

void __thiscall
FAnimInstanceProxy::AnimDrawDebugPlane
          (FAnimInstanceProxy *this,TTransform<double> *param_1,float param_2,FColor *param_3,
          bool param_4,float param_5,float param_6,ESceneDepthPriorityGroup param_7)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  FQueuedDrawDebugItem *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  int iVar23;
  TVector<double> *pTVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  FQueuedDrawDebugItem local_338;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  undefined1 local_228 [16];
  double local_218;
  TVector<double>_u_0 local_208;
  undefined1 local_1e8 [16];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 local_1b0 [16];
  double local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 local_180 [16];
  double local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined1 local_150 [16];
  double local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined1 local_108 [16];
  double local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  TVector<double> local_c0;
  TVector<double> local_a8;
  TVector<double> local_90 [5];
  
  dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
  local_338.Center.field0_0x0._s_0.Y = 0.0;
  local_338.Center.field0_0x0._s_0.Z = 0.0;
  local_338.LifeTime = param_5;
  dVar14 = (param_1->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar18 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  local_338.Radius = 0.0;
  local_338.Size = 0.0;
  local_338.Segments = 0;
  local_338.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_338.Message.Data.ArrayNum = 0;
  local_338.Message.Data.ArrayMax = 0;
  local_338.Color.field0_0x0._s_0 = param_3->field0_0x0;
  local_338.bPersistentLines = param_4;
  local_338.Rotation.Pitch = 0.0;
  local_338.Rotation.Yaw = 0.0;
  dVar20 = (double)(float)((uint)param_2 ^ __xmm_80000000800000008000000080000000);
  uVar89 = SUB84(dVar20,0);
  uVar92 = (undefined4)((ulonglong)dVar20 >> 0x20);
  local_338.ItemType.Value = '\x02';
  local_338.DepthPriority.Value = (undefined1)param_7;
  auVar25 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  local_338.Thickness = param_6;
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar44 = blendpd(auVar25,auVar32,2);
  local_1c8._8_4_ = uVar89;
  local_1c8._0_8_ = dVar20;
  local_1c8._12_4_ = uVar92;
  dVar7 = dVar20 * (param_1->Scale3D).XY.m128d_f64[0];
  dVar8 = dVar20 * (param_1->Scale3D).XY.m128d_f64[1];
  uVar69 = (undefined4)((ulonglong)dVar8 >> 0x20);
  local_338.Center.field0_0x0._s_0.X = 0.0;
  auVar71._8_4_ = SUB84(dVar8,0);
  auVar71._0_8_ = dVar7;
  auVar71._12_4_ = uVar69;
  local_338.Rotation.Roll = 0.0;
  dVar5 = auVar32._0_8_;
  local_1b8 = 0;
  auVar72._0_8_ = auVar71._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar7;
  auVar72._8_8_ = dVar14 * auVar25._8_8_ - dVar5 * dVar8;
  auVar46._8_4_ = SUB84(dVar8,0);
  auVar46._0_8_ = dVar7;
  auVar46._12_4_ = uVar69;
  auVar25._8_4_ = SUB84(dVar18,0);
  auVar25._0_8_ = dVar14;
  auVar25._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar25 = blendpd(auVar46,auVar25,2);
  dVar4 = auVar32._8_8_;
  auVar26._0_8_ = auVar25._0_8_ * dVar5 - auVar44._0_8_ * dVar14;
  auVar26._8_8_ = auVar25._8_8_ * dVar4 - auVar44._8_8_ * dVar18;
  auVar25 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar44 = blendpd(auVar72,auVar26,2);
  dVar18 = auVar72._8_8_ + auVar72._8_8_;
  dVar6 = auVar26._0_8_ + auVar26._0_8_;
  uVar69 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar73._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar73._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar57._8_4_ = SUB84(dVar6,0);
  auVar57._0_8_ = dVar18;
  auVar57._12_4_ = uVar69;
  auVar45._8_4_ = SUB84(dVar6,0);
  auVar45._0_8_ = dVar18;
  auVar45._12_4_ = uVar69;
  auVar46 = blendpd(auVar45,auVar73,2);
  auVar44 = blendpd(auVar25,auVar32,2);
  local_338.TextScale.field0_0x0._s_0.X = 0.0;
  local_338.TextScale.field0_0x0._s_0.Y = 0.0;
  auVar47._0_8_ = auVar46._0_8_ * dVar5 - auVar44._0_8_ * auVar73._0_8_;
  auVar47._8_8_ = auVar46._8_8_ * dVar4 - auVar44._8_8_ * auVar73._8_8_;
  auVar58._0_8_ = auVar57._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar18;
  auVar58._8_8_ = auVar73._0_8_ * auVar25._8_8_ - dVar5 * dVar6;
  pTVar1 = &this->QueuedDrawDebugItems;
  auVar27._8_4_ = SUB84(auVar58._8_8_,0);
  auVar27._0_8_ = auVar58._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
  local_188 = 0;
  local_208._0_16_ = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar18 = dVar18 * dVar9 + dVar7 + auVar27._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  dVar6 = dVar6 * dVar9 + dVar8 + auVar47._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  uVar69 = SUB84(dVar6,0);
  uVar70 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar15 = (param_1->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar25 = blendpd(auVar58,auVar47,2);
  local_1b0._8_4_ = uVar69;
  local_1b0._0_8_ = dVar18;
  local_1b0._12_4_ = uVar70;
  local_338.field1_0x8._16_8_ =
       auVar73._0_8_ * dVar9 + dVar14 + auVar25._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  local_338.field1_0x8._8_4_ = uVar69;
  local_338.field1_0x8._0_8_ = dVar18;
  local_338.field1_0x8._12_4_ = uVar70;
  auVar46 = blendpd(local_208._0_16_,auVar32,2);
  dVar14 = (double)param_2;
  uVar90 = SUB84(dVar14,0);
  uVar91 = (undefined4)((ulonglong)dVar14 >> 0x20);
  local_198._8_4_ = uVar90;
  local_198._0_8_ = dVar20;
  local_198._12_4_ = uVar91;
  dVar7 = dVar20 * (param_1->Scale3D).XY.m128d_f64[0];
  dVar8 = dVar14 * (param_1->Scale3D).XY.m128d_f64[1];
  uVar69 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar74._8_4_ = SUB84(dVar8,0);
  auVar74._0_8_ = dVar7;
  auVar74._12_4_ = uVar69;
  auVar75._0_8_ = auVar74._8_8_ * local_208._0_8_ - local_208._8_8_ * dVar7;
  auVar75._8_8_ = dVar15 * local_208._8_8_ - dVar5 * dVar8;
  auVar28._8_4_ = SUB84(dVar8,0);
  auVar28._0_8_ = dVar7;
  auVar28._12_4_ = uVar69;
  auVar44._8_4_ = SUB84(dVar6,0);
  auVar44._0_8_ = dVar15;
  auVar44._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar25 = blendpd(auVar28,auVar44,2);
  auVar29._0_8_ = auVar25._0_8_ * dVar5 - auVar46._0_8_ * dVar15;
  auVar29._8_8_ = auVar25._8_8_ * dVar4 - auVar46._8_8_ * dVar6;
  auVar25 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar44 = blendpd(auVar75,auVar29,2);
  dVar18 = auVar75._8_8_ + auVar75._8_8_;
  dVar6 = auVar29._0_8_ + auVar29._0_8_;
  uVar69 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar76._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar76._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar59._8_4_ = SUB84(dVar6,0);
  auVar59._0_8_ = dVar18;
  auVar59._12_4_ = uVar69;
  auVar48._8_4_ = SUB84(dVar6,0);
  auVar48._0_8_ = dVar18;
  auVar48._12_4_ = uVar69;
  auVar44 = blendpd(auVar48,auVar76,2);
  auVar60._0_8_ = auVar59._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar18;
  auVar60._8_8_ = auVar76._0_8_ * auVar25._8_8_ - dVar5 * dVar6;
  auVar30._8_4_ = SUB84(auVar60._8_8_,0);
  auVar30._0_8_ = auVar60._0_8_;
  auVar30._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
  auVar25 = blendpd(auVar25,auVar32,2);
  auVar32._0_8_ = auVar44._0_8_ * dVar5 - auVar25._0_8_ * auVar76._0_8_;
  auVar32._8_8_ = auVar44._8_8_ * dVar4 - auVar25._8_8_ * auVar76._8_8_;
  auVar25 = blendpd(auVar60,auVar32,2);
  dVar5 = dVar18 * dVar4 + dVar7 + auVar30._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  dVar18 = dVar6 * dVar4 + dVar8 + auVar32._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  uVar69 = SUB84(dVar18,0);
  uVar70 = (undefined4)((ulonglong)dVar18 >> 0x20);
  local_338.field2_0x20._16_8_ =
       auVar76._0_8_ * dVar4 + dVar15 + auVar25._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  pFVar2 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  local_338.field2_0x20._8_4_ = uVar69;
  local_338.field2_0x20._0_8_ = dVar5;
  local_338.field2_0x20._12_4_ = uVar70;
  local_180._8_4_ = uVar69;
  local_180._0_8_ = dVar5;
  local_180._12_4_ = uVar70;
  local_1a0 = (double)local_338.field1_0x8._16_8_;
  local_170 = (double)local_338.field2_0x20._16_8_;
  if ((pFVar2 <= &local_338) && (&local_338 < pFVar2 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar22) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar23 = (this->QueuedDrawDebugItems).ArrayNum;
  if (iVar23 == (this->QueuedDrawDebugItems).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b0,&pTVar1->AllocatorInstance,&(this->QueuedDrawDebugItems).ArrayMax);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar23 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0xb0),
             &local_338);
  auVar25 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar16 = (param_1->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar18 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar21 = (param_1->Rotation).ZW.m128d_f64[1];
  local_168._8_4_ = uVar89;
  local_168._0_8_ = dVar20;
  local_168._12_4_ = uVar92;
  dVar7 = dVar20 * (param_1->Scale3D).XY.m128d_f64[0];
  dVar15 = dVar20 * (param_1->Scale3D).XY.m128d_f64[1];
  uVar69 = (undefined4)((ulonglong)dVar15 >> 0x20);
  auVar44 = blendpd(auVar32,auVar25,2);
  auVar77._8_4_ = SUB84(dVar15,0);
  auVar77._0_8_ = dVar7;
  auVar77._12_4_ = uVar69;
  dVar5 = auVar25._0_8_;
  local_158 = 0;
  auVar78._0_8_ = auVar77._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar7;
  auVar78._8_8_ = dVar16 * auVar32._8_8_ - dVar5 * dVar15;
  auVar31._8_4_ = SUB84(dVar15,0);
  auVar31._0_8_ = dVar7;
  auVar31._12_4_ = uVar69;
  local_128 = 0;
  auVar10._8_4_ = SUB84(dVar18,0);
  auVar10._0_8_ = dVar16;
  auVar10._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar32 = blendpd(auVar31,auVar10,2);
  dVar4 = auVar25._8_8_;
  auVar33._0_8_ = auVar32._0_8_ * dVar5 - auVar44._0_8_ * dVar16;
  auVar33._8_8_ = auVar32._8_8_ * dVar4 - auVar44._8_8_ * dVar18;
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar44 = blendpd(auVar78,auVar33,2);
  auVar79._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar79._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  dVar18 = auVar78._8_8_ + auVar78._8_8_;
  dVar6 = auVar33._0_8_ + auVar33._0_8_;
  uVar69 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar61._8_4_ = SUB84(dVar6,0);
  auVar61._0_8_ = dVar18;
  auVar61._12_4_ = uVar69;
  auVar49._8_4_ = SUB84(dVar6,0);
  auVar49._0_8_ = dVar18;
  auVar49._12_4_ = uVar69;
  auVar44 = blendpd(auVar49,auVar79,2);
  auVar62._0_8_ = auVar61._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar18;
  auVar62._8_8_ = auVar79._0_8_ * auVar32._8_8_ - dVar5 * dVar6;
  auVar32 = blendpd(auVar32,auVar25,2);
  auVar34._8_4_ = SUB84(auVar62._8_8_,0);
  auVar34._0_8_ = auVar62._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
  dVar17 = (param_1->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar19 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  local_138._8_4_ = uVar89;
  local_138._0_8_ = dVar14;
  local_138._12_4_ = uVar92;
  dVar8 = dVar14 * (param_1->Scale3D).XY.m128d_f64[0];
  dVar9 = dVar20 * (param_1->Scale3D).XY.m128d_f64[1];
  uVar89 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar50._0_8_ = auVar44._0_8_ * dVar5 - auVar32._0_8_ * auVar79._0_8_;
  auVar50._8_8_ = auVar44._8_8_ * dVar4 - auVar32._8_8_ * auVar79._8_8_;
  local_1e8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar18 = dVar18 * dVar21 + dVar7 + auVar34._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  dVar6 = dVar6 * dVar21 + dVar15 + auVar50._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  uVar69 = SUB84(dVar6,0);
  uVar70 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar32 = blendpd(auVar62,auVar50,2);
  local_150._8_4_ = uVar69;
  local_150._0_8_ = dVar18;
  local_150._12_4_ = uVar70;
  local_338.field1_0x8._16_8_ =
       auVar79._0_8_ * dVar21 + dVar16 + auVar32._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  local_338.field1_0x8._8_4_ = uVar69;
  local_338.field1_0x8._0_8_ = dVar18;
  local_338.field1_0x8._12_4_ = uVar70;
  auVar80._8_4_ = SUB84(dVar9,0);
  auVar80._0_8_ = dVar8;
  auVar80._12_4_ = uVar89;
  pFVar2 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  auVar44 = blendpd(local_1e8,auVar25,2);
  auVar81._0_8_ = auVar80._8_8_ * local_1e8._0_8_ - local_1e8._8_8_ * dVar8;
  auVar81._8_8_ = dVar17 * local_1e8._8_8_ - dVar5 * dVar9;
  auVar35._8_4_ = SUB84(dVar9,0);
  auVar35._0_8_ = dVar8;
  auVar35._12_4_ = uVar89;
  auVar11._8_4_ = SUB84(dVar19,0);
  auVar11._0_8_ = dVar17;
  auVar11._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  auVar32 = blendpd(auVar35,auVar11,2);
  auVar36._0_8_ = auVar32._0_8_ * dVar5 - auVar44._0_8_ * dVar17;
  auVar36._8_8_ = auVar32._8_8_ * dVar4 - auVar44._8_8_ * dVar19;
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar44 = blendpd(auVar81,auVar36,2);
  dVar18 = auVar81._8_8_ + auVar81._8_8_;
  dVar6 = auVar36._0_8_ + auVar36._0_8_;
  uVar69 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar82._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar82._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar63._8_4_ = SUB84(dVar6,0);
  auVar63._0_8_ = dVar18;
  auVar63._12_4_ = uVar69;
  auVar51._8_4_ = SUB84(dVar6,0);
  auVar51._0_8_ = dVar18;
  auVar51._12_4_ = uVar69;
  auVar44 = blendpd(auVar51,auVar82,2);
  auVar64._0_8_ = auVar63._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar18;
  auVar64._8_8_ = auVar82._0_8_ * auVar32._8_8_ - dVar5 * dVar6;
  auVar37._8_4_ = SUB84(auVar64._8_8_,0);
  auVar37._0_8_ = auVar64._0_8_;
  auVar37._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
  auVar25 = blendpd(auVar32,auVar25,2);
  auVar52._0_8_ = auVar44._0_8_ * dVar5 - auVar25._0_8_ * auVar82._0_8_;
  auVar52._8_8_ = auVar44._8_8_ * dVar4 - auVar25._8_8_ * auVar82._8_8_;
  auVar25 = blendpd(auVar64,auVar52,2);
  dVar5 = dVar18 * dVar4 + dVar8 + auVar37._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  dVar18 = dVar6 * dVar4 + dVar9 + auVar52._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  uVar69 = SUB84(dVar18,0);
  uVar70 = (undefined4)((ulonglong)dVar18 >> 0x20);
  local_338.field2_0x20._16_8_ =
       auVar82._0_8_ * dVar4 + dVar17 + auVar25._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  local_338.field2_0x20._8_4_ = uVar69;
  local_338.field2_0x20._0_8_ = dVar5;
  local_338.field2_0x20._12_4_ = uVar70;
  local_228._8_4_ = uVar69;
  local_228._0_8_ = dVar5;
  local_228._12_4_ = uVar70;
  local_218 = (double)local_338.field2_0x20._16_8_;
  local_140 = (double)local_338.field1_0x8._16_8_;
  if ((pFVar2 <= &local_338) && (&local_338 < pFVar2 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar22) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar23 = (this->QueuedDrawDebugItems).ArrayNum;
  if (iVar23 == (this->QueuedDrawDebugItems).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b0,&pTVar1->AllocatorInstance,&(this->QueuedDrawDebugItems).ArrayMax);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar23 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0xb0),
             &local_338);
  auVar25 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar16 = (param_1->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar18 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar21 = (param_1->Rotation).ZW.m128d_f64[1];
  local_120._8_4_ = uVar90;
  local_120._0_8_ = dVar20;
  local_120._12_4_ = uVar91;
  dVar7 = dVar20 * (param_1->Scale3D).XY.m128d_f64[0];
  dVar15 = dVar14 * (param_1->Scale3D).XY.m128d_f64[1];
  uVar69 = (undefined4)((ulonglong)dVar15 >> 0x20);
  auVar44 = blendpd(auVar32,auVar25,2);
  auVar83._8_4_ = SUB84(dVar15,0);
  auVar83._0_8_ = dVar7;
  auVar83._12_4_ = uVar69;
  dVar5 = auVar25._0_8_;
  local_110 = 0;
  auVar84._0_8_ = auVar83._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar7;
  auVar84._8_8_ = dVar16 * auVar32._8_8_ - dVar5 * dVar15;
  auVar38._8_4_ = SUB84(dVar15,0);
  auVar38._0_8_ = dVar7;
  auVar38._12_4_ = uVar69;
  local_e0 = 0;
  auVar12._8_4_ = SUB84(dVar18,0);
  auVar12._0_8_ = dVar16;
  auVar12._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar32 = blendpd(auVar38,auVar12,2);
  dVar4 = auVar25._8_8_;
  auVar39._0_8_ = auVar32._0_8_ * dVar5 - auVar44._0_8_ * dVar16;
  auVar39._8_8_ = auVar32._8_8_ * dVar4 - auVar44._8_8_ * dVar18;
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar44 = blendpd(auVar84,auVar39,2);
  auVar85._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar85._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  dVar18 = auVar84._8_8_ + auVar84._8_8_;
  dVar6 = auVar39._0_8_ + auVar39._0_8_;
  uVar69 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar65._8_4_ = SUB84(dVar6,0);
  auVar65._0_8_ = dVar18;
  auVar65._12_4_ = uVar69;
  auVar53._8_4_ = SUB84(dVar6,0);
  auVar53._0_8_ = dVar18;
  auVar53._12_4_ = uVar69;
  auVar44 = blendpd(auVar53,auVar85,2);
  auVar66._0_8_ = auVar65._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar18;
  auVar66._8_8_ = auVar85._0_8_ * auVar32._8_8_ - dVar5 * dVar6;
  auVar32 = blendpd(auVar32,auVar25,2);
  auVar40._8_4_ = SUB84(auVar66._8_8_,0);
  auVar40._0_8_ = auVar66._0_8_;
  auVar40._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
  dVar17 = (param_1->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar19 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  local_f0._8_4_ = uVar90;
  local_f0._0_8_ = dVar20;
  local_f0._12_4_ = uVar91;
  dVar8 = dVar20 * (param_1->Scale3D).XY.m128d_f64[0];
  dVar9 = dVar14 * (param_1->Scale3D).XY.m128d_f64[1];
  uVar89 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar54._0_8_ = auVar44._0_8_ * dVar5 - auVar32._0_8_ * auVar85._0_8_;
  auVar54._8_8_ = auVar44._8_8_ * dVar4 - auVar32._8_8_ * auVar85._8_8_;
  local_1e8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar18 = dVar18 * dVar21 + dVar7 + auVar40._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  dVar6 = dVar6 * dVar21 + dVar15 + auVar54._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  uVar69 = SUB84(dVar6,0);
  uVar70 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar32 = blendpd(auVar66,auVar54,2);
  local_108._8_4_ = uVar69;
  local_108._0_8_ = dVar18;
  local_108._12_4_ = uVar70;
  local_338.field1_0x8._16_8_ =
       auVar85._0_8_ * dVar21 + dVar16 + auVar32._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  local_338.field1_0x8._8_4_ = uVar69;
  local_338.field1_0x8._0_8_ = dVar18;
  local_338.field1_0x8._12_4_ = uVar70;
  auVar86._8_4_ = SUB84(dVar9,0);
  auVar86._0_8_ = dVar8;
  auVar86._12_4_ = uVar89;
  pFVar2 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  auVar44 = blendpd(local_1e8,auVar25,2);
  auVar87._0_8_ = auVar86._8_8_ * local_1e8._0_8_ - local_1e8._8_8_ * dVar8;
  auVar87._8_8_ = dVar17 * local_1e8._8_8_ - dVar5 * dVar9;
  auVar41._8_4_ = SUB84(dVar9,0);
  auVar41._0_8_ = dVar8;
  auVar41._12_4_ = uVar89;
  auVar13._8_4_ = SUB84(dVar19,0);
  auVar13._0_8_ = dVar17;
  auVar13._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  auVar32 = blendpd(auVar41,auVar13,2);
  auVar42._0_8_ = auVar32._0_8_ * dVar5 - auVar44._0_8_ * dVar17;
  auVar42._8_8_ = auVar32._8_8_ * dVar4 - auVar44._8_8_ * dVar19;
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar44 = blendpd(auVar87,auVar42,2);
  dVar18 = auVar87._8_8_ + auVar87._8_8_;
  dVar6 = auVar42._0_8_ + auVar42._0_8_;
  uVar69 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar88._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar88._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar67._8_4_ = SUB84(dVar6,0);
  auVar67._0_8_ = dVar18;
  auVar67._12_4_ = uVar69;
  auVar55._8_4_ = SUB84(dVar6,0);
  auVar55._0_8_ = dVar18;
  auVar55._12_4_ = uVar69;
  auVar44 = blendpd(auVar55,auVar88,2);
  auVar68._0_8_ = auVar67._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar18;
  auVar68._8_8_ = auVar88._0_8_ * auVar32._8_8_ - dVar5 * dVar6;
  auVar43._8_4_ = SUB84(auVar68._8_8_,0);
  auVar43._0_8_ = auVar68._0_8_;
  auVar43._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
  auVar25 = blendpd(auVar32,auVar25,2);
  auVar56._0_8_ = auVar44._0_8_ * dVar5 - auVar25._0_8_ * auVar88._0_8_;
  auVar56._8_8_ = auVar44._8_8_ * dVar4 - auVar25._8_8_ * auVar88._8_8_;
  auVar25 = blendpd(auVar68,auVar56,2);
  dVar5 = dVar18 * dVar4 + dVar8 + auVar43._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  dVar18 = dVar6 * dVar4 + dVar9 + auVar56._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  uVar69 = SUB84(dVar18,0);
  uVar70 = (undefined4)((ulonglong)dVar18 >> 0x20);
  local_338.field2_0x20._16_8_ =
       auVar88._0_8_ * dVar4 + dVar17 + auVar25._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  local_338.field2_0x20._8_4_ = uVar69;
  local_338.field2_0x20._0_8_ = dVar5;
  local_338.field2_0x20._12_4_ = uVar70;
  local_d8._8_4_ = uVar69;
  local_d8._0_8_ = dVar5;
  local_d8._12_4_ = uVar70;
  local_f8 = (double)local_338.field1_0x8._16_8_;
  local_c8 = (double)local_338.field2_0x20._16_8_;
  if ((pFVar2 <= &local_338) && (&local_338 < pFVar2 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar22) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar23 = (this->QueuedDrawDebugItems).ArrayNum;
  if (iVar23 == (this->QueuedDrawDebugItems).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b0,&pTVar1->AllocatorInstance,&(this->QueuedDrawDebugItems).ArrayMax);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar23 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0xb0),
             &local_338);
  local_288._s_0.Z = 0.0;
  local_288._8_4_ = uVar90;
  local_288._0_8_ = dVar14;
  local_288._12_4_ = uVar91;
  pTVar24 = UE::Math::TTransform<double>::TransformPosition
                      (param_1,&local_c0,(TVector<double> *)&local_288._s_0);
  local_270._s_0.Z = 0.0;
  local_338.field1_0x8._0_16_ = *(undefined1 (*) [16])&pTVar24->field0_0x0;
  local_338.field1_0x8._16_8_ = (pTVar24->field0_0x0)._s_0.Z;
  local_270._s_0.X = dVar20;
  local_270._s_0.Y = dVar14;
  pTVar24 = UE::Math::TTransform<double>::TransformPosition
                      (param_1,&local_a8,(TVector<double> *)&local_270._s_0);
  pFVar2 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  local_338.field2_0x20._0_16_ = *(undefined1 (*) [16])&pTVar24->field0_0x0;
  local_338.field2_0x20._16_8_ = (pTVar24->field0_0x0)._s_0.Z;
  if ((pFVar2 <= &local_338) && (&local_338 < pFVar2 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar22) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar23 = (this->QueuedDrawDebugItems).ArrayNum;
  if (iVar23 == (this->QueuedDrawDebugItems).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b0,&pTVar1->AllocatorInstance,&(this->QueuedDrawDebugItems).ArrayMax);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar23 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0xb0),
             &local_338);
  local_258._s_0.Z = 0.0;
  local_258._8_4_ = uVar90;
  local_258._0_8_ = dVar14;
  local_258._12_4_ = uVar91;
  pTVar24 = UE::Math::TTransform<double>::TransformPosition
                      (param_1,local_90,(TVector<double> *)&local_258._s_0);
  local_240._s_0.Z = 0.0;
  local_338.field1_0x8._0_16_ = *(undefined1 (*) [16])&pTVar24->field0_0x0;
  local_338.field1_0x8._16_8_ = (pTVar24->field0_0x0)._s_0.Z;
  local_240._s_0.X = dVar14;
  local_240._s_0.Y = dVar20;
  pTVar24 = UE::Math::TTransform<double>::TransformPosition
                      (param_1,(TVector<double> *)&local_208._s_0,(TVector<double> *)&local_240._s_0
                      );
  pFVar2 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  local_338.field2_0x20._0_16_ = *(undefined1 (*) [16])&pTVar24->field0_0x0;
  local_338.field2_0x20._16_8_ = (pTVar24->field0_0x0)._s_0.Z;
  if ((pFVar2 <= &local_338) && (&local_338 < pFVar2 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar22) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar23 = (this->QueuedDrawDebugItems).ArrayNum;
  if (iVar23 == (this->QueuedDrawDebugItems).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b0,&pTVar1->AllocatorInstance,&(this->QueuedDrawDebugItems).ArrayMax);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar23 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0xb0),
             &local_338);
  if (local_338.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugPoint @ 1474402e0

void __thiscall
FAnimInstanceProxy::AnimDrawDebugPoint
          (FAnimInstanceProxy *this,TVector<double> *param_1,float param_2,FColor *param_3,
          bool param_4,float param_5,ESceneDepthPriorityGroup param_6)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FQueuedDrawDebugItem *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FQueuedDrawDebugItem local_b8;
  
  local_b8.Segments = 0;
  pTVar1 = &this->QueuedDrawDebugItems;
  local_b8.Thickness = 0.0;
  local_b8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Message.Data.ArrayNum = 0;
  local_b8.Message.Data.ArrayMax = 0;
  local_b8.Color.field0_0x0._s_0 = param_3->field0_0x0;
  local_b8.field2_0x20._0_8_ = 0;
  local_b8.field2_0x20._8_8_ = 0;
  local_b8.Center.field0_0x0._s_0.Y = 0.0;
  local_b8.Center.field0_0x0._s_0.Z = 0.0;
  local_b8.field1_0x8._0_8_ = (param_1->field0_0x0)._s_0.X;
  local_b8.field1_0x8._8_8_ = (param_1->field0_0x0)._s_0.Y;
  local_b8.bPersistentLines = param_4;
  local_b8.field2_0x20._16_8_ = 0;
  local_b8.Center.field0_0x0._s_0.X = 0.0;
  local_b8.Rotation.Pitch = 0.0;
  local_b8.Rotation.Yaw = 0.0;
  local_b8.field1_0x8._16_8_ = (param_1->field0_0x0)._s_0.Z;
  pFVar3 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  local_b8.DepthPriority.Value = (undefined1)param_6;
  local_b8.Rotation.Roll = 0.0;
  local_b8.Radius = 0.0;
  local_b8.ItemType.Value = '\x05';
  local_b8.LifeTime = param_5;
  local_b8.TextScale.field0_0x0._s_0.X = 0.0;
  local_b8.TextScale.field0_0x0._s_0.Y = 0.0;
  local_b8.Size = param_2;
  if ((pFVar3 <= &local_b8) && (&local_b8 < pFVar3 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar2 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar6 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0xb0),
             &local_b8);
  if (local_b8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// AnimDrawDebugSphere @ 147440430

void __thiscall
FAnimInstanceProxy::AnimDrawDebugSphere
          (FAnimInstanceProxy *this,TVector<double> *param_1,float param_2,int param_3,
          FColor *param_4,bool param_5,float param_6,float param_7,ESceneDepthPriorityGroup param_8)

{
  int *piVar1;
  FQueuedDrawDebugItem *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FQueuedDrawDebugItem local_b8;
  
  local_b8.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Message.Data.ArrayNum = 0;
  local_b8.Message.Data.ArrayMax = 0;
  local_b8.field1_0x8._8_8_ = 0;
  local_b8.field1_0x8._16_8_ = 0;
  local_b8.Rotation.Pitch = 0.0;
  local_b8.Rotation.Yaw = 0.0;
  local_b8.Center.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_b8.Center.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_b8.Color.field0_0x0._s_0 = param_4->field0_0x0;
  local_b8.bPersistentLines = param_5;
  local_b8.field2_0x20._0_8_ = 0;
  local_b8.field2_0x20._8_8_ = 0;
  local_b8.Center.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pFVar2 = (FQueuedDrawDebugItem *)(this->QueuedDrawDebugItems).AllocatorInstance.Data;
  local_b8.DepthPriority.Value = (undefined1)param_8;
  local_b8.field1_0x8._0_8_ = 0;
  local_b8.field2_0x20._16_8_ = 0;
  local_b8.Rotation.Roll = 0.0;
  local_b8.Thickness = param_7;
  local_b8.Size = 0.0;
  local_b8.ItemType.Value = '\x01';
  local_b8.LifeTime = param_6;
  local_b8.TextScale.field0_0x0._s_0.X = 0.0;
  local_b8.TextScale.field0_0x0._s_0.Y = 0.0;
  local_b8.Radius = param_2;
  local_b8.Segments = param_3;
  if ((pFVar2 <= &local_b8) && (&local_b8 < pFVar2 + (this->QueuedDrawDebugItems).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->QueuedDrawDebugItems).ArrayNum;
  piVar1 = &(this->QueuedDrawDebugItems).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&(this->QueuedDrawDebugItems).AllocatorInstance,piVar1);
  }
  (this->QueuedDrawDebugItems).ArrayNum = iVar5 + 1;
  FQueuedDrawDebugItem::FQueuedDrawDebugItem
            ((FQueuedDrawDebugItem *)
             ((this->QueuedDrawDebugItems).AllocatorInstance.Data + (longlong)iVar5 * 0xb0),
             &local_b8);
  if (local_b8.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Message.Data.AllocatorInstance.Data);
  }
  return;
}

// BindNativeDelegates @ 147440f60

void __thiscall FAnimInstanceProxy::BindNativeDelegates(FAnimInstanceProxy *this)

{
  FName FVar1;
  undefined8 *puVar2;
  int iVar3;
  IAnimClassInterface *pIVar4;
  FProperty *pFVar5;
  longlong lVar6;
  bool bVar7;
  FAnimInstanceProxy *pFVar8;
  UScriptStruct *pUVar9;
  FAnimNode_StateMachine *pFVar10;
  FBakedAnimationStateMachine *pFVar11;
  FAnimNode_StateMachine *pFVar12;
  FAnimInstanceProxy *pFVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  FName FVar16;
  FBakedAnimationState *pFVar17;
  int iVar18;
  FBakedAnimationState *pFVar19;
  int local_res10 [2];
  uint local_res18;
  uint local_res20;
  FAnimNode_StateMachine *local_70;
  FAnimInstanceProxy *local_68;
  FAnimNode_StateMachine *local_60;
  FAnimInstanceProxy *local_58;
  FAnimNode_StateMachine *local_50;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::BindNativeDelegates");
  if ((this->RootNode != (FAnimNode_Base *)0x0) &&
     (this->AnimClassInterface != (IAnimClassInterface *)0x0)) {
    local_res20 = (this->NativeTransitionBindings).ArrayNum;
    uVar14 = (ulonglong)(int)local_res20;
    pFVar12 = (FAnimNode_StateMachine *)(this->NativeTransitionBindings).AllocatorInstance.Data;
    local_60 = (FAnimNode_StateMachine *)(&pFVar12->_padding_ + uVar14 * 6);
    while( true ) {
      pFVar10 = local_60;
      if ((this->NativeTransitionBindings).ArrayNum != (int)uVar14) {
        `TCheckedPointerIterator<FNativeTransitionBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar12 == pFVar10) break;
      pIVar4 = this->AnimClassInterface;
      local_58 = this;
      local_50 = pFVar12;
      local_68 = (FAnimInstanceProxy *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
      local_res18 = (uint)*(longlong *)&local_68->field_0x8;
      uVar14 = (ulonglong)(int)local_res18;
      FVar16 = *(FName *)local_68;
      FVar1 = (FName)((longlong)FVar16 + uVar14 * 8);
      while( true ) {
        if ((int)*(longlong *)&local_68->field_0x8 != (int)uVar14) {
          `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar16 == FVar1) break;
        pFVar5 = *(FProperty **)FVar16;
        if (pFVar5 != (FProperty *)0x0) {
          lVar6 = pFVar5[1]._padding_;
          pUVar9 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar9 != (UScriptStruct *)0x0) {
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar6 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((((bVar7) &&
                 (pFVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                      (pFVar5,this->AnimInstanceObject,0),
                 pFVar10 != (FAnimNode_StateMachine *)0x0)) &&
                (pFVar11 = GetMachineDescription(pIVar4,pFVar10),
                pFVar11 != (FBakedAnimationStateMachine *)0x0)) &&
               ((FName)pFVar12->_padding_ == pFVar11->MachineName)) {
              iVar3 = (pFVar11->States).ArrayNum;
              iVar18 = 0;
              pFVar17 = (FBakedAnimationState *)(pFVar11->States).AllocatorInstance.Data;
              pFVar19 = pFVar17 + iVar3;
              while( true ) {
                if ((pFVar11->States).ArrayNum != iVar3) {
                  `TCheckedPointerIterator<FBakedAnimationState_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res10);
                }
                if (pFVar17 == pFVar19) break;
                if (pFVar17->StateName == (FName)pFVar12->_padding_) {
                  local_res10[0] = iVar18;
                  local_70 = pFVar10;
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnimInstanceProxy::BindNativeDelegates'::__l12::<lambda_2>,void,FAnimNode_StateMachine_*,FBakedAnimationState_const_&,int>
                  ::Call(&local_58,&local_70,pFVar17,local_res10);
                }
                iVar18 = iVar18 + 1;
                pFVar17 = pFVar17 + 1;
              }
            }
          }
        }
        FVar16 = (FName)((longlong)FVar16 + 8);
        uVar14 = (ulonglong)local_res18;
      }
      pFVar12 = (FAnimNode_StateMachine *)&pFVar12->PRIVATE_MachineDescription;
      uVar14 = (ulonglong)local_res20;
    }
    local_res20 = (this->NativeStateEntryBindings).ArrayNum;
    uVar14 = (ulonglong)(int)local_res20;
    pFVar13 = (FAnimInstanceProxy *)(this->NativeStateEntryBindings).AllocatorInstance.Data;
    local_58 = (FAnimInstanceProxy *)
               ((longlong)&(pFVar13->ComponentTransform).Rotation + uVar14 * 0x28 + -0x20);
    while( true ) {
      pFVar8 = local_58;
      if ((this->NativeStateEntryBindings).ArrayNum != (int)uVar14) {
        `TCheckedPointerIterator<FNativeStateBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar13 == pFVar8) break;
      pIVar4 = this->AnimClassInterface;
      local_68 = pFVar13;
      local_70 = (FAnimNode_StateMachine *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
      local_res18 = (uint)local_70->_padding_;
      uVar14 = (ulonglong)(int)local_res18;
      puVar15 = (undefined8 *)local_70->_padding_;
      puVar2 = puVar15 + uVar14;
      while( true ) {
        if ((int)local_70->_padding_ != (int)uVar14) {
          `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (puVar15 == puVar2) break;
        pFVar5 = (FProperty *)*puVar15;
        if (pFVar5 != (FProperty *)0x0) {
          lVar6 = pFVar5[1]._padding_;
          pUVar9 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar9 != (UScriptStruct *)0x0) {
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar6 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (((bVar7) &&
                (pFVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (pFVar5,this->AnimInstanceObject,0),
                pFVar12 != (FAnimNode_StateMachine *)0x0)) &&
               ((pFVar11 = GetMachineDescription(pIVar4,pFVar12),
                pFVar11 != (FBakedAnimationStateMachine *)0x0 &&
                (FVar1.ComparisonIndex.Value = *(uint *)&pFVar13->field_0x0,
                FVar1.Number = *(uint *)&pFVar13->field_0x4, FVar1 == pFVar11->MachineName)))) {
              iVar3 = (pFVar11->States).ArrayNum;
              iVar18 = 0;
              pFVar17 = (FBakedAnimationState *)(pFVar11->States).AllocatorInstance.Data;
              pFVar19 = pFVar17 + iVar3;
              while( true ) {
                if ((pFVar11->States).ArrayNum != iVar3) {
                  `TCheckedPointerIterator<FBakedAnimationState_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res10);
                }
                if (pFVar17 == pFVar19) break;
                if (pFVar17->StateName == *(FName *)&pFVar13->field_0x8) {
                  local_res10[0] = iVar18;
                  local_60 = pFVar12;
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnimInstanceProxy::BindNativeDelegates'::__l16::<lambda_3>,void,FAnimNode_StateMachine_*,FBakedAnimationState_const_&,int>
                  ::Call(&local_68,&local_60,pFVar17,local_res10);
                }
                iVar18 = iVar18 + 1;
                pFVar17 = pFVar17 + 1;
              }
            }
          }
        }
        puVar15 = puVar15 + 1;
        uVar14 = (ulonglong)local_res18;
      }
      uVar14 = (ulonglong)local_res20;
      pFVar13 = (FAnimInstanceProxy *)((pFVar13->ComponentTransform).Rotation.XY.m128d_f64 + 1);
    }
    local_res20 = (this->NativeStateExitBindings).ArrayNum;
    uVar14 = (ulonglong)(int)local_res20;
    pFVar12 = (FAnimNode_StateMachine *)(this->NativeStateExitBindings).AllocatorInstance.Data;
    local_70 = (FAnimNode_StateMachine *)(&pFVar12->_padding_ + uVar14 * 5);
    while( true ) {
      pFVar10 = local_70;
      if ((this->NativeStateExitBindings).ArrayNum != (int)uVar14) {
        `TCheckedPointerIterator<FNativeStateBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar12 == pFVar10) break;
      pIVar4 = this->AnimClassInterface;
      local_60 = pFVar12;
      local_68 = (FAnimInstanceProxy *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
      local_res18 = (uint)*(longlong *)&local_68->field_0x8;
      uVar14 = (ulonglong)(int)local_res18;
      FVar16 = *(FName *)local_68;
      FVar1 = (FName)((longlong)FVar16 + uVar14 * 8);
      while( true ) {
        if ((int)*(longlong *)&local_68->field_0x8 != (int)uVar14) {
          `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar16 == FVar1) break;
        pFVar5 = *(FProperty **)FVar16;
        if (pFVar5 != (FProperty *)0x0) {
          lVar6 = pFVar5[1]._padding_;
          pUVar9 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar9 != (UScriptStruct *)0x0) {
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar6 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((((bVar7) &&
                 (pFVar13 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                      (pFVar5,this->AnimInstanceObject,0),
                 pFVar13 != (FAnimInstanceProxy *)0x0)) &&
                (pFVar11 = GetMachineDescription(pIVar4,(FAnimNode_StateMachine *)pFVar13),
                pFVar11 != (FBakedAnimationStateMachine *)0x0)) &&
               ((FName)pFVar12->_padding_ == pFVar11->MachineName)) {
              iVar3 = (pFVar11->States).ArrayNum;
              iVar18 = 0;
              pFVar17 = (FBakedAnimationState *)(pFVar11->States).AllocatorInstance.Data;
              pFVar19 = pFVar17 + iVar3;
              while( true ) {
                if ((pFVar11->States).ArrayNum != iVar3) {
                  `TCheckedPointerIterator<FBakedAnimationState_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res10);
                }
                if (pFVar17 == pFVar19) break;
                if (pFVar17->StateName == (FName)pFVar12->_padding_) {
                  local_res10[0] = iVar18;
                  local_58 = pFVar13;
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnimInstanceProxy::BindNativeDelegates'::__l20::<lambda_4>,void,FAnimNode_StateMachine_*,FBakedAnimationState_const_&,int>
                  ::Call(&local_60,(FAnimNode_StateMachine **)&local_58,pFVar17,local_res10);
                }
                iVar18 = iVar18 + 1;
                pFVar17 = pFVar17 + 1;
              }
            }
          }
        }
        FVar16 = (FName)((longlong)FVar16 + 8);
        uVar14 = (ulonglong)local_res18;
      }
      uVar14 = (ulonglong)local_res20;
      pFVar12 = (FAnimNode_StateMachine *)&pFVar12->ElapsedTime;
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// BlendSpaceAdvanceImmediate @ 1474414b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimInstanceProxy::BlendSpaceAdvanceImmediate
          (FAnimInstanceProxy *this,UBlendSpace *param_1,TVector<double> *param_2,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_3,FBlendFilter *param_4,
          bool param_5,float param_6,float param_7,float *param_8,FMarkerTickRecord *param_9)

{
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 local_190;
  UBlendSpace *local_188;
  float *local_180;
  float local_178;
  undefined4 local_174;
  undefined4 local_170;
  bool local_16c;
  undefined1 local_16b;
  undefined4 local_16a;
  undefined8 local_160;
  undefined8 local_158;
  TReferenceControllerBase<1> *pTStack_150;
  FBlendFilter *local_148;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *local_140;
  float local_134;
  float local_130;
  undefined1 local_12c;
  undefined8 *local_128;
  FMarkerTickRecord *local_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  Type local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_58;
  float local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_170 = 0x3f800000;
  local_16a = 0x1000000;
  local_160 = 0;
  local_158 = 0;
  pTStack_150 = (TReferenceControllerBase<1> *)0x0;
  local_118 = 0;
  local_114 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_134 = (float)(param_2->field0_0x0)._s_0.X;
  local_148 = param_4;
  local_180 = param_8;
  local_120 = param_9;
  local_178 = param_6;
  local_130 = (float)(param_2->field0_0x0)._s_0.Y;
  local_16c = param_5;
  local_128 = &local_198;
  local_98 = this->RootMotionMode;
  local_12c = 0;
  local_174 = 0x3f800000;
  local_16b = 0;
  local_198 = 0;
  local_190 = 0;
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108[0] = 0;
  local_104 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = &FMarkerTickContext::DefaultMarkerNames;
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_4c = 0;
  local_44 = 0;
  local_40 = 0x10100;
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_50 = param_7;
  local_188 = param_1;
  local_140 = param_3;
  (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&local_188,&this->NotifyQueue,local_108);
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_150);
  return;
}

// CacheBones @ 147443370

void __thiscall FAnimInstanceProxy::CacheBones(FAnimInstanceProxy *this)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  FScopedAnimGraphTrace local_48;
  FAnimationBaseContext local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name1428,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name1428,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name1428,true);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::CacheBones");
  if ((this->bBoneCachesInvalidated != 0) && (this->RootNode != (FAnimNode_Base *)0x0)) {
    this->CacheBonesRecursionCounter = this->CacheBonesRecursionCounter + 1;
    psVar1 = &(this->CachedBonesCounter).Counter;
    *psVar1 = *psVar1 + 1;
    (this->CachedBonesCounter).LastSyncronizedFrame = GFrameCounter;
    if ((this->CachedBonesCounter).Counter == -1) {
      (this->CachedBonesCounter).Counter = 0;
    }
    FAnimationBaseContext::FAnimationBaseContext
              (&local_30,this,(FAnimationUpdateSharedContext *)0x0);
    FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace
              (&local_48,(FAnimationCacheBonesContext *)&local_30);
    (**(code **)(this->RootNode->_padding_ + 8))(this->RootNode,&local_30);
    piVar2 = &this->CacheBonesRecursionCounter;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheBonesRecursionCounter >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                         ,0x5a6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this->CacheBonesRecursionCounter == 0) {
      this->bBoneCachesInvalidated = '\0';
    }
    FAnimTrace::FScopedAnimGraphTrace::~FScopedAnimGraphTrace(&local_48);
  }
  FStatsHierarchical::EndMeasurement();
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CacheBonesInputProxy @ 147443520

void __cdecl FAnimInstanceProxy::CacheBonesInputProxy(FAnimInstanceProxy *param_1)

{
  if (param_1 != (FAnimInstanceProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147443528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x50))();
    return;
  }
  return;
}

// CacheBones_WithRoot @ 147443540

void __thiscall
FAnimInstanceProxy::CacheBones_WithRoot(FAnimInstanceProxy *this,FAnimNode_Base *param_1)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FAnimationBaseContext local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name1457,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name1457,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name1457,true);
  if ((this->bBoneCachesInvalidated != 0) && (param_1 != (FAnimNode_Base *)0x0)) {
    this->CacheBonesRecursionCounter = this->CacheBonesRecursionCounter + 1;
    if (param_1 == this->RootNode) {
      psVar1 = &(this->CachedBonesCounter).Counter;
      *psVar1 = *psVar1 + 1;
      (this->CachedBonesCounter).LastSyncronizedFrame = GFrameCounter;
      if ((this->CachedBonesCounter).Counter == -1) {
        (this->CachedBonesCounter).Counter = 0;
      }
    }
    FAnimationBaseContext::FAnimationBaseContext
              (&local_28,this,(FAnimationUpdateSharedContext *)0x0);
    (**(code **)(param_1->_padding_ + 8))(param_1,&local_28);
    piVar2 = &this->CacheBonesRecursionCounter;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheBonesRecursionCounter >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                         ,0x5c1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this->CacheBonesRecursionCounter == 0) {
      this->bBoneCachesInvalidated = '\0';
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CalcSlotMontageLocalWeight @ 147443710

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FAnimInstanceProxy::CalcSlotMontageLocalWeight(FAnimInstanceProxy *this,FName *param_1)

{
  int iVar1;
  bool bVar2;
  UAnimMontage *this_00;
  UObject *pUVar3;
  FWeakObjectPtr *this_01;
  FAnimInstanceProxy *pFVar4;
  FWeakObjectPtr *pFVar5;
  float fVar6;
  FName local_res8;
  FString local_68 [4];
  
  fVar6 = 0.0;
  if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
     (pFVar4 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    pFVar4 = this;
  }
  iVar1 = (pFVar4->MontageEvaluationData).ArrayNum;
  this_01 = (FWeakObjectPtr *)(pFVar4->MontageEvaluationData).AllocatorInstance.Data;
  pFVar5 = this_01 + (longlong)iVar1 * 0xb;
  while( true ) {
    if ((pFVar4->MontageEvaluationData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMontageEvaluationState_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (this_01 == pFVar5) break;
    bVar2 = FWeakObjectPtr::IsValid(this_01);
    if (bVar2) {
      this_00 = (UAnimMontage *)FWeakObjectPtr::Get(this_01);
      bVar2 = UAnimMontage::IsValidSlot(this_00,*param_1);
      if (bVar2) {
        fVar6 = fVar6 + (float)this_01[4].ObjectIndex;
        UAnimMontage::IsValidAdditiveSlot(this_00,param_1);
        if (5 < (byte)LogAnimation._0_1_) {
          pUVar3 = FWeakObjectPtr::Get(this_01);
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
          local_res8.Number = *(uint *)&pUVar3->field_0x1c;
          ::FName::ToString(&local_res8,local_68);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
        }
      }
    }
    this_01 = this_01 + 0xb;
  }
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  return fVar6;
}

// ClearAllTransitionEvents @ 1474442b0

void __thiscall FAnimInstanceProxy::ClearAllTransitionEvents(FAnimInstanceProxy *this)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimInstanceProxy::ClearAllTransitionEvents'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
             ::Call;
  ForEachStateMachine(this,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_18);
  return;
}

// ClearObjects @ 1474445c0

void __thiscall FAnimInstanceProxy::ClearObjects(FAnimInstanceProxy *this)

{
  this->SkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  this->MainInstanceProxy = (FAnimInstanceProxy *)0x0;
  this->Skeleton = (USkeleton *)0x0;
  return;
}

// ClearSlotNodeWeights @ 147444740

void __thiscall FAnimInstanceProxy::ClearSlotNodeWeights(FAnimInstanceProxy *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint local_20;
  
  iVar2 = this->BufferWriteIndex;
  uVar8 = 0;
  iVar7 = this->SlotWeightTracker[iVar2].ArrayNum;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      local_20 = local_20 & 0xffff0000;
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = this->SlotWeightTracker[iVar2].AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar9) = 0;
      *(uint *)(pFVar3 + lVar9 + 8) = local_20;
      uVar6 = 0;
      if ((int)uVar8 < this->SlotWeightTracker[1 - iVar2].ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar1 = this->SlotWeightTracker[1 - iVar2].AllocatorInstance.Data[lVar9 + 8];
      uVar6 = 0;
      if ((int)uVar8 < this->SlotWeightTracker[iVar2].ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar8 + 1;
      this->SlotWeightTracker[iVar2].AllocatorInstance.Data[lVar9 + 9] = FVar1;
      lVar9 = lVar9 + 0xc;
      iVar7 = this->SlotWeightTracker[iVar2].ArrayNum;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// ClearTransitionEvents @ 1474448f0

void __thiscall FAnimInstanceProxy::ClearTransitionEvents(FAnimInstanceProxy *this,FName *param_1)

{
  FName local_res10 [3];
  code *local_18;
  FName *local_10;
  
  local_res10[0] = *param_1;
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimInstanceProxy::ClearTransitionEvents'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
             ::Call;
  ForEachStateMachine(this,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_18);
  return;
}

// CreateUninitializedTickRecord @ 147445460

FAnimTickRecord * __thiscall
FAnimInstanceProxy::CreateUninitializedTickRecord
          (FAnimInstanceProxy *this,FAnimGroupInstance **param_1,FName param_2)

{
  FAnimTickRecord *pFVar1;
  
  pFVar1 = UE::Anim::FAnimSync::CreateUninitializedTickRecord(&this->Sync,param_1,param_2);
  return pFVar1;
}

// CreateUninitializedTickRecord @ 147445480

FAnimTickRecord * __thiscall
FAnimInstanceProxy::CreateUninitializedTickRecord
          (FAnimInstanceProxy *this,int param_1,FAnimGroupInstance **param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FAnimTickRecord *pFVar4;
  uint uVar5;
  FName FVar6;
  
  if (param_1 < 0) {
    FVar6.ComparisonIndex.Value = 0;
    FVar6.Number = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x70))();
    uVar5 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAnimTickRecord *)(*pcVar1)();
        return pFVar4;
      }
    }
    FVar6 = *(FName *)(*plVar3 + (longlong)param_1 * 8);
  }
  pFVar4 = UE::Anim::FAnimSync::CreateUninitializedTickRecord(&this->Sync,param_2,FVar6);
  return pFVar4;
}

// CreateUninitializedTickRecordInScope @ 147445530

FAnimTickRecord * __thiscall
FAnimInstanceProxy::CreateUninitializedTickRecordInScope
          (FAnimInstanceProxy *this,FAnimGroupInstance **param_1,FName param_2,
          EAnimSyncGroupScope param_3)

{
  FAnimTickRecord *pFVar1;
  
  pFVar1 = UE::Anim::FAnimSync::CreateUninitializedTickRecordInScope
                     (&this->Sync,this,param_1,param_2,param_3);
  return pFVar1;
}

// CreateUninitializedTickRecordInScope @ 147445560

FAnimTickRecord * __thiscall
FAnimInstanceProxy::CreateUninitializedTickRecordInScope
          (FAnimInstanceProxy *this,int param_1,EAnimSyncGroupScope param_2,
          FAnimGroupInstance **param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FAnimTickRecord *pFVar4;
  uint uVar5;
  FName FVar6;
  
  if (param_1 < 0) {
    FVar6.ComparisonIndex.Value = 0;
    FVar6.Number = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x70))();
    uVar5 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAnimTickRecord *)(*pcVar1)();
        return pFVar4;
      }
    }
    FVar6 = *(FName *)(*plVar3 + (longlong)param_1 * 8);
  }
  pFVar4 = UE::Anim::FAnimSync::CreateUninitializedTickRecordInScope
                     (&this->Sync,this,param_3,FVar6,param_2);
  return pFVar4;
}

// Evaluate @ 147449350

bool __thiscall FAnimInstanceProxy::Evaluate(FAnimInstanceProxy *this,FPoseContext *param_1)

{
  return false;
}

// EvaluateAnimation @ 147449680

void __thiscall
FAnimInstanceProxy::EvaluateAnimation(FAnimInstanceProxy *this,FPoseContext *param_1)

{
  EvaluateAnimation_WithRoot(this,param_1,this->RootNode);
  return;
}

// EvaluateAnimationNode @ 1474496a0

void __thiscall
FAnimInstanceProxy::EvaluateAnimationNode(FAnimInstanceProxy *this,FPoseContext *param_1)

{
  EvaluateAnimationNode_WithRoot(this,param_1,this->RootNode);
  return;
}

// EvaluateAnimationNode_WithRoot @ 1474496c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::EvaluateAnimationNode_WithRoot
          (FAnimInstanceProxy *this,FPoseContext *param_1,FAnimNode_Base *param_2)

{
  int *piVar1;
  short *psVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph> FVar11;
  longlong lVar12;
  longlong *plVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph_WorkerThread> *this_02;
  FName FVar14;
  FNameEntryId FVar15;
  wchar_t *pwVar16;
  FLLMScope local_res18 [2];
  FColor_u_0 local_res20 [2];
  FName local_78;
  LARGE_INTEGER local_70;
  FScopedAnimNodeTrace local_68;
  FMemScope local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name1489,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name1489,false,None,Default,true);
  FMemScope::FMemScope(&local_60,&LLMScope_Name1489,true);
  if (param_2 == (FAnimNode_Base *)0x0) {
    if (param_1->bExpectsAdditivePose == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
                 *(FBoneContainer **)&(param_1->Pose).field_0x10);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
    }
    goto LAB_147449af8;
  }
  bVar7 = IsInGameThread();
  if (bVar7) {
    FVar11 = StatPtr_STAT_EvaluateAnimGraph;
    if (StatPtr_STAT_EvaluateAnimGraph == (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph>)0x0)
    {
      pFVar10 = ::FName::FName(&local_50,"STAT_EvaluateAnimGraph");
      pwVar16 = L"EvaluateAnimGraph";
      this_02 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph_WorkerThread> *)
                &StatPtr_STAT_EvaluateAnimGraph;
      goto LAB_14744983f;
    }
  }
  else {
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph>)
             StatPtr_STAT_EvaluateAnimGraph_WorkerThread;
    if (StatPtr_STAT_EvaluateAnimGraph_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph_WorkerThread>)0x0) {
      pFVar10 = ::FName::FName(&local_58,"STAT_EvaluateAnimGraph_WorkerThread");
      pwVar16 = L"EvaluateAnimGraph_WorkerThread";
      this_02 = &StatPtr_STAT_EvaluateAnimGraph_WorkerThread;
LAB_14744983f:
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimGraph>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_02,*pFVar10,pwVar16,"STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar14 = *(FName *)FVar11;
  bVar7 = false;
  bVar6 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Value == 0) && (uVar9 == 0)) {
LAB_147449906:
    bVar5 = false;
    FVar14 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar15.Value;
        local_78.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                   ,0x5d5);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147449906;
    local_70.s.LowPart = FVar15.Value;
    local_70.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
  }
  if (param_2 == this->RootNode) {
    psVar2 = &(this->EvaluationCounter).Counter;
    *psVar2 = *psVar2 + 1;
    (this->EvaluationCounter).LastSyncronizedFrame = GFrameCounter;
    if ((this->EvaluationCounter).Counter == -1) {
      (this->EvaluationCounter).Counter = 0;
    }
    if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
      lVar12 = (**(code **)((longlong)*this->AnimClassInterface + 0x80))();
      if (0 < *(int *)(lVar12 + 8)) {
        *(undefined4 *)&param_1->_padding_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0xffffffff;
        plVar13 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x80))();
        if ((int)plVar13[1] < 1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar3 = *(undefined4 *)(*plVar13 + 0x10);
        *(undefined4 *)&param_1->_padding_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = uVar3;
      }
    }
  }
  FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace(&local_68,param_1);
  (**(code **)(param_2->_padding_ + 0x18))(param_2,param_1);
  FAnimTrace::FScopedAnimNodeTrace::~FScopedAnimNodeTrace(&local_68);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_147449af8:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// EvaluateAnimation_WithRoot @ 147449b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::EvaluateAnimation_WithRoot
          (FAnimInstanceProxy *this,FPoseContext *param_1,FAnimNode_Base *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance_WorkerThread> *this_02;
  FName FVar9;
  FNameEntryId FVar10;
  FNameEntryId FVar11;
  wchar_t *pwVar12;
  LARGE_INTEGER local_res8;
  FStatMessage local_58;
  FScopedAnimGraphTrace local_48;
  
  FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace(&local_48,param_1);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::EvaluateAnimation_WithRoot");
  bVar4 = IsInGameThread();
  FVar10.Value = 0;
  if (bVar4) {
    FVar8 = StatPtr_STAT_EvaluateAnimInstance;
    if (StatPtr_STAT_EvaluateAnimInstance ==
        (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance>)0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_EvaluateAnimInstance");
      pwVar12 = L"EvaluateAnimInstance";
      this_02 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance_WorkerThread> *)
                &StatPtr_STAT_EvaluateAnimInstance;
      goto LAB_147449c88;
    }
  }
  else {
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance>)
            StatPtr_STAT_EvaluateAnimInstance_WorkerThread;
    if (StatPtr_STAT_EvaluateAnimInstance_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance_WorkerThread>)0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_EvaluateAnimInstance_WorkerThread");
      pwVar12 = L"EvaluateAnimInstance_WorkerThread";
      this_02 = &StatPtr_STAT_EvaluateAnimInstance_WorkerThread;
LAB_147449c88:
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_EvaluateAnimInstance>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)this_02,*pFVar7,pwVar12,"STATGROUP_Anim",
                         "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar9 = *(FName *)FVar8;
  bVar4 = false;
  bVar3 = false;
  FVar11 = FVar9.ComparisonIndex.Value;
  uVar6 = FVar9.Number;
  if ((FVar11.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                   ,0x57f);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar2 = true;
      FVar10.Value = FVar11.Value;
      goto LAB_147449d6b;
    }
  }
  bVar2 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_147449d6b:
  if (param_2 == this->RootNode) {
    (**(code **)(*(longlong *)this + 0x50))();
  }
  else {
    (**(code **)(*(longlong *)this + 0x58))(this,param_2);
  }
  cVar5 = (**(code **)(*(longlong *)this + 0x68))(this,param_1);
  if (cVar5 == '\0') {
    EvaluateAnimationNode_WithRoot(this,param_1,param_2);
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  FAnimTrace::FScopedAnimGraphTrace::~FScopedAnimGraphTrace(&local_48);
  return;
}

// EvaluateInputProxy @ 14744a450

void __cdecl
FAnimInstanceProxy::EvaluateInputProxy(FAnimInstanceProxy *param_1,FPoseContext *param_2)

{
  char cVar1;
  
  if ((param_1 != (FAnimInstanceProxy *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)param_1 + 0x60))(), cVar1 == '\0')) {
    if (param_2->bExpectsAdditivePose != false) {
      FCompactPose::ResetToAdditiveIdentity(&param_2->Pose);
      return;
    }
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_2->Pose,
               *(FBoneContainer **)&(param_2->Pose).field_0x10);
  }
  return;
}

// FlushQueuedDebugDrawItems @ 14744b260

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
FAnimInstanceProxy::FlushQueuedDebugDrawItems
          (FAnimInstanceProxy *this,AActor *param_1,UWorld *param_2)

{
  TArray<FQueuedDrawDebugItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement FVar6;
  uint uVar7;
  int iVar8;
  FQueuedDrawDebugItem *pFVar9;
  ENetMode EVar10;
  TQuat<double> *pTVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  AActor *local_res10;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  TMatrix<double> local_d8;
  
  pTVar1 = &this->QueuedDrawDebugItems;
  local_res10 = param_1;
  EVar10 = UEngine::GetNetMode(GEngine,param_2);
  if (EVar10 != NM_DedicatedServer) {
    uVar7 = (this->QueuedDrawDebugItems).ArrayNum;
    uVar12 = (ulonglong)(int)uVar7;
    pFVar14 = (pTVar1->AllocatorInstance).Data;
    pFVar15 = pFVar14 + 0x88;
    pFVar13 = pFVar14 + uVar12 * 0xb0;
    pFVar17 = pFVar14 + 0x74;
    pFVar16 = pFVar14 + 8;
    while( true ) {
      if ((this->QueuedDrawDebugItems).ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<FQueuedDrawDebugItem,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar14 == pFVar13) break;
      switch(*pFVar14) {
      case (FScriptContainerElement)0x0:
        DrawDebugDirectionalArrow
                  (param_2,(TVector<double> *)(pFVar15 + -0x80),(TVector<double> *)(pFVar15 + -0x68)
                   ,*(float *)(pFVar15 + -0x1c),(FColor *)(pFVar15 + -0x14),(bool)pFVar15[-0x10],
                   *(float *)(pFVar15 + -0xc),(uchar)pFVar15[0x20],*(float *)(pFVar15 + -8));
        break;
      case (FScriptContainerElement)0x1:
        DrawDebugSphere(param_2,(TVector<double> *)(pFVar15 + -0x50),*(float *)(pFVar15 + -0x20),
                        *(int *)(pFVar15 + -0x18),(FColor *)(pFVar15 + -0x14),(bool)pFVar15[-0x10],
                        *(float *)(pFVar15 + -0xc),(uchar)pFVar15[0x20],*(float *)(pFVar15 + -8));
        break;
      case (FScriptContainerElement)0x2:
        DrawDebugLine(param_2,(TVector<double> *)(pFVar15 + -0x80),
                      (TVector<double> *)(pFVar15 + -0x68),(FColor *)(pFVar15 + -0x14),
                      (bool)pFVar15[-0x10],*(float *)(pFVar15 + -0xc),(uchar)pFVar15[0x20],
                      *(float *)(pFVar15 + -8));
        break;
      case (FScriptContainerElement)0x3:
        UEngine::AddOnScreenDebugMessage
                  (GEngine,-1,0.0,(FColor)((FColor_u_0 *)(pFVar15 + -0x14))->_s_0,(FString *)pFVar15
                   ,false,(TVector2<double> *)(pFVar15 + 0x10));
        break;
      case (FScriptContainerElement)0x4:
        DrawDebugCoordinateSystem
                  (param_2,(TVector<double> *)(pFVar15 + -0x80),
                   (TRotator<double> *)(pFVar15 + -0x38),*(float *)(pFVar15 + -0x1c),
                   (bool)pFVar15[-0x10],*(float *)(pFVar15 + -0xc),(uchar)pFVar15[0x20],
                   *(float *)(pFVar15 + -8));
        break;
      case (FScriptContainerElement)0x5:
        DrawDebugPoint(param_2,(TVector<double> *)(pFVar15 + -0x80),*(float *)(pFVar15 + -0x1c),
                       (FColor *)(pFVar15 + -0x14),(bool)pFVar15[-0x10],*(float *)(pFVar15 + -0xc),
                       (uchar)pFVar15[0x20]);
        break;
      case (FScriptContainerElement)0x6:
        UE::Math::TRotationMatrix<double>::MakeFromZ(&local_d8,(TVector<double> *)(pFVar15 + -0x68))
        ;
        local_138._s_0.X = local_d8.M[1][0];
        local_138._s_0.Y = local_d8.M[1][1];
        local_138._s_0.Z = local_d8.M[1][2];
        local_f8._s_0.X = (double)*(undefined8 *)(pFVar15 + -0x50);
        local_f8._s_0.Y = (double)*(undefined8 *)(pFVar15 + -0x48);
        local_118._s_0.X = local_d8.M[0][0];
        local_118._s_0.Y = local_d8.M[0][1];
        local_118._s_0.Z = local_d8.M[0][2];
        local_f8._s_0.Z = (double)*(undefined8 *)(pFVar15 + -0x40);
        DrawDebugCircle(param_2,(TVector<double> *)&local_f8._s_0,
                        (double)*(float *)(pFVar15 + -0x20),*(int *)(pFVar15 + -0x18),
                        (FColor *)(pFVar15 + -0x14),(bool)pFVar15[-0x10],*(float *)(pFVar15 + -0xc),
                        (uchar)pFVar15[0x20],*(float *)(pFVar15 + -8),
                        (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_138._s_0,false)
        ;
        break;
      case (FScriptContainerElement)0x7:
        DrawDebugCone(param_2,(TVector<double> *)(pFVar15 + -0x50),
                      (TVector<double> *)(pFVar15 + -0x68),*(float *)(pFVar15 + -0x80),
                      *(float *)(pFVar15 + -0x7c),*(float *)(pFVar15 + -0x78),
                      *(int *)(pFVar15 + -0x18),(FColor *)(pFVar15 + -0x14),(bool)pFVar15[-0x10],
                      *(float *)(pFVar15 + -0xc),(uchar)pFVar15[0x20],*(float *)(pFVar15 + -8));
        break;
      case (FScriptContainerElement)0x8:
        DrawDebugString(param_2,(TVector<double> *)pFVar16,(FString *)pFVar15,param_1,
                        (FColor *)pFVar17,*(float *)(pFVar15 + -0xc),false,
                        (float)*(double *)(pFVar15 + 0x10));
        break;
      case (FScriptContainerElement)0x9:
        fVar3 = *(float *)(pFVar15 + -8);
        FVar5 = pFVar15[0x20];
        fVar4 = *(float *)(pFVar15 + -0xc);
        FVar6 = pFVar15[-0x10];
        pTVar11 = UE::Math::TRotator<double>::Quaternion
                            ((TRotator<double> *)(pFVar15 + -0x38),(TQuat<double> *)&local_f8._s_0);
        DrawDebugCapsule(param_2,(TVector<double> *)(pFVar15 + -0x50),*(float *)(pFVar15 + -0x1c),
                         *(float *)(pFVar15 + -0x20),pTVar11,(FColor *)(pFVar15 + -0x14),(bool)FVar6
                         ,fVar4,(uchar)FVar5,fVar3);
        param_1 = local_res10;
      }
      uVar12 = (ulonglong)uVar7;
      pFVar14 = pFVar14 + 0xb0;
      pFVar15 = pFVar15 + 0xb0;
      pFVar17 = pFVar17 + 0xb0;
      pFVar16 = pFVar16 + 0xb0;
    }
  }
  piVar2 = &(this->QueuedDrawDebugItems).ArrayMax;
  pFVar9 = (FQueuedDrawDebugItem *)(pTVar1->AllocatorInstance).Data;
  iVar8 = (this->QueuedDrawDebugItems).ArrayNum;
  if ((this->QueuedDrawDebugItems).ArrayMax < 0) {
    DestructItems<FQueuedDrawDebugItem,int>(pFVar9,iVar8);
    (this->QueuedDrawDebugItems).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    return;
  }
  DestructItems<FQueuedDrawDebugItem,int>(pFVar9,iVar8);
  (this->QueuedDrawDebugItems).ArrayNum = 0;
  return;
}

// ForEachStateMachine @ 14744b9a0

void __thiscall
FAnimInstanceProxy::ForEachStateMachine
          (FAnimInstanceProxy *this,TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *param_1)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  UScriptStruct *pUVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar5 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    uVar10 = 0;
    iVar8 = (int)plVar5[1];
    if (0 < iVar8) {
      do {
        uVar9 = ~uVar10 + iVar8;
        uVar4 = 0;
        if ((int)uVar9 < iVar8) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(FProperty **)(*plVar5 + (longlong)(int)uVar9 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar6 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar6 != (UScriptStruct *)0x0) {
            iVar8 = (int)pUVar6->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar6->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) &&
               (pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                   (this_00,this->AnimInstanceObject,0), pvVar7 != (void *)0x0)) {
              (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pvVar7);
            }
          }
        }
        iVar8 = (int)plVar5[1];
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar8);
    }
  }
  return;
}

// GatherDebugData @ 14744bae0

void __thiscall
FAnimInstanceProxy::GatherDebugData(FAnimInstanceProxy *this,FNodeDebugData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAnimNode_Base *pFVar3;
  FName FVar4;
  TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [16];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  FVar4 = NAME_AnimGraph;
  pFVar3 = this->RootNode;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name2200,L"Animation/Graph");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name2200,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name2200,true);
  if (pFVar3 != (FAnimNode_Base *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,param_1);
  }
  pTVar5 = TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->SavedPoseQueueMap,FVar4);
  if (pTVar5 != (TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    iVar2 = pTVar5->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar5->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAnimNode_SaveCachedPose_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar6 + 0x28))(*(longlong **)pFVar6,param_1);
      pFVar6 = pFVar6 + 8;
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// GatherDebugData_WithRoot @ 14744bc50

void __thiscall
FAnimInstanceProxy::GatherDebugData_WithRoot
          (FAnimInstanceProxy *this,FNodeDebugData *param_1,FAnimNode_Base *param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FLLMScope local_res18 [2];
  FMemScope local_28 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name2200,L"Animation/Graph");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name2200,false,None,Default,true);
  FMemScope::FMemScope(local_28,&LLMScope_Name2200,true);
  if (param_2 != (FAnimNode_Base *)0x0) {
    (**(code **)(param_2->_padding_ + 0x28))(param_2,param_1);
  }
  pTVar3 = TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->SavedPoseQueueMap,param_3);
  if (pTVar3 != (TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAnimNode_SaveCachedPose_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar4 + 0x28))(*(longlong **)pFVar4,param_1);
      pFVar4 = pFVar4 + 8;
    }
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// GatherInputProxyDebugData @ 14744bd90

void __cdecl
FAnimInstanceProxy::GatherInputProxyDebugData(FAnimInstanceProxy *param_1,FNodeDebugData *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAnimNode_Base *pFVar3;
  FName FVar4;
  TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [2];
  FMemScope FStackX_20;
  
  FVar4 = NAME_AnimGraph;
  if (param_1 != (FAnimInstanceProxy *)0x0) {
    pFVar3 = param_1->RootNode;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name2200,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(aFStackX_18,LLMScope_Name2200,false,None,Default,true);
    FMemScope::FMemScope(&FStackX_20,&LLMScope_Name2200,true);
    if (pFVar3 != (FAnimNode_Base *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,param_2);
    }
    pTVar5 = TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&param_1->SavedPoseQueueMap,FVar4);
    if (pTVar5 != (TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar6 = (pTVar5->AllocatorInstance).Data;
      iVar2 = pTVar5->ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      while( true ) {
        if (pTVar5->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FAnimNode_SaveCachedPose_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(auStackX_8);
        }
        if (pFVar6 == pFVar1) break;
        (**(code **)(**(longlong **)pFVar6 + 0x28))(*(longlong **)pFVar6,param_2);
        pFVar6 = pFVar6 + 8;
      }
    }
    FMemScope::~FMemScope(&FStackX_20);
    FLLMScope::~FLLMScope(aFStackX_18);
    return;
  }
  return;
}

// GetActiveMontageEvaluationState @ 14744c040

FMontageEvaluationState * __thiscall
FAnimInstanceProxy::GetActiveMontageEvaluationState(FAnimInstanceProxy *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMontageEvaluationState *pFVar4;
  uint uVar5;
  FAnimInstanceProxy *pFVar6;
  longlong lVar7;
  
  if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
     (pFVar6 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    pFVar6 = this;
  }
  uVar5 = (pFVar6->MontageEvaluationData).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar7 = (longlong)(int)uVar5 * 0x58;
    do {
      if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
         (pFVar6 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
        pFVar6 = this;
      }
      uVar3 = 0;
      if ((int)uVar5 < (pFVar6->MontageEvaluationData).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMontageEvaluationState *)(*pcVar1)();
        return pFVar4;
      }
      pFVar4 = (FMontageEvaluationState *)
               ((pFVar6->MontageEvaluationData).AllocatorInstance.Data + lVar7);
      if (pFVar4->bIsActive != false) {
        return pFVar4;
      }
      lVar7 = lVar7 + -0x58;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return (FMontageEvaluationState *)0x0;
}

// GetAnimBlueprintDebugData @ 14744c220

FAnimBlueprintDebugData * __thiscall
FAnimInstanceProxy::GetAnimBlueprintDebugData(FAnimInstanceProxy *this)

{
  return (FAnimBlueprintDebugData *)0x0;
}

// GetCheckedMutableNodeFromIndexUntyped @ 1474544a0

FAnimNode_Base * __thiscall
FAnimInstanceProxy::GetCheckedMutableNodeFromIndexUntyped
          (FAnimInstanceProxy *this,int param_1,UScriptStruct *param_2)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FAnimNode_Base *pFVar5;
  int iVar6;
  
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return (FAnimNode_Base *)0x0;
  }
  plVar4 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
  iVar6 = ~param_1 + (int)plVar4[1];
  if ((-1 < iVar6) && (iVar6 < (int)plVar4[1])) {
    if ((iVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnimNode_Base *)(*pcVar2)();
      return pFVar5;
    }
    this_00 = *(FProperty **)(*plVar4 + (longlong)iVar6 * 8);
    if (param_2 != (UScriptStruct *)0x0) {
      lVar1 = this_00[1]._padding_;
      iVar6 = (int)param_2->_padding_;
      if ((*(int *)(lVar1 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar6 * 8) !=
          &param_2->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pFVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (this_00,this->AnimInstanceObject,0);
        return pFVar5;
      }
    }
  }
  return (FAnimNode_Base *)0x0;
}

// GetCheckedNodeFromIndexUntyped @ 1474545a0

FAnimNode_Base * __thiscall
FAnimInstanceProxy::GetCheckedNodeFromIndexUntyped
          (FAnimInstanceProxy *this,int param_1,UScriptStruct *param_2)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FAnimNode_Base *pFVar5;
  int iVar6;
  
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return (FAnimNode_Base *)0x0;
  }
  plVar4 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
  iVar6 = ~param_1 + (int)plVar4[1];
  if ((-1 < iVar6) && (iVar6 < (int)plVar4[1])) {
    if ((iVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnimNode_Base *)(*pcVar2)();
      return pFVar5;
    }
    this_00 = *(FProperty **)(*plVar4 + (longlong)iVar6 * 8);
    if (param_2 != (UScriptStruct *)0x0) {
      lVar1 = this_00[1]._padding_;
      iVar6 = (int)param_2->_padding_;
      if ((*(int *)(lVar1 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar6 * 8) !=
          &param_2->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pFVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (this_00,this->AnimInstanceObject,0);
        return pFVar5;
      }
    }
  }
  return (FAnimNode_Base *)0x0;
}

// GetInstanceAssetPlayerIndex @ 147454ed0

int __thiscall
FAnimInstanceProxy::GetInstanceAssetPlayerIndex
          (FAnimInstanceProxy *this,FName param_1,FName param_2,FName param_3)

{
  FProperty *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FBakedAnimationStateMachine *pFVar5;
  longlong *plVar6;
  UScriptStruct *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint local_48;
  longlong local_38;
  
  if ((this->AnimClassInterface != (IAnimClassInterface *)0x0) &&
     (pFVar5 = GetStateMachineInstanceDesc(this,param_1),
     pFVar5 != (FBakedAnimationStateMachine *)0x0)) {
    plVar6 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    local_48 = 0;
    if (0 < (pFVar5->States).ArrayNum) {
      local_38 = 0;
      do {
        uVar12 = 0;
        uVar3 = 0;
        if ((int)local_48 < (pFVar5->States).ArrayNum) {
          uVar3 = ~local_48 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        pFVar14 = (pFVar5->States).AllocatorInstance.Data + local_38;
        if ((*(FName *)(pFVar14 + 0x30) == param_2) &&
           (iVar4 = *(int *)(pFVar14 + 8), uVar13 = uVar12, 0 < iVar4)) {
          do {
            uVar11 = (uint)uVar12;
            uVar3 = 0;
            if ((int)uVar11 < iVar4) {
              uVar3 = ~uVar11 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              iVar4 = (*pcVar1)();
              return iVar4;
            }
            uVar10 = ~*(uint *)(uVar13 + *(longlong *)pFVar14) + (int)plVar6[1];
            uVar3 = 0;
            if ((int)uVar10 < (int)plVar6[1]) {
              uVar3 = ~uVar10 >> 0x1f;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              iVar4 = (*pcVar1)();
              return iVar4;
            }
            this_00 = *(FProperty **)(*plVar6 + (longlong)(int)uVar10 * 8);
            if (this_00 != (FProperty *)0x0) {
              lVar9 = this_00[1]._padding_;
              pUVar7 = FAnimNode_AssetPlayerBase::StaticStruct();
              if (pUVar7 != (UScriptStruct *)0x0) {
                iVar4 = (int)pUVar7->_padding_;
                if ((*(int *)(lVar9 + 0x38) < iVar4) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar4 * 8)
                    != &pUVar7->_padding_)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (((bVar2) &&
                    (plVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                        (this_00,this->AnimInstanceObject,0),
                    plVar8 != (longlong *)0x0)) &&
                   ((param_3 == (FName)0x0 ||
                    (lVar9 = (**(code **)(*plVar8 + 0xa0))(plVar8),
                    *(FName *)(lVar9 + 0x18) == param_3)))) {
                  uVar3 = 0;
                  if ((int)uVar11 < *(int *)(pFVar14 + 8)) {
                    uVar3 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar3 == 0) &&
                     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar2)) {
                    pcVar1 = (code *)swi(3);
                    iVar4 = (*pcVar1)();
                    return iVar4;
                  }
                  return *(int *)(*(longlong *)pFVar14 + (longlong)(int)uVar11 * 4);
                }
              }
            }
            iVar4 = *(int *)(pFVar14 + 8);
            uVar12 = (ulonglong)(uVar11 + 1);
            uVar13 = uVar13 + 4;
          } while ((int)(uVar11 + 1) < iVar4);
        }
        local_48 = local_48 + 1;
        local_38 = local_38 + 0x50;
      } while ((int)local_48 < (pFVar5->States).ArrayNum);
    }
  }
  return -1;
}

// GetInstanceAssetPlayerLength @ 147455210

float __thiscall
FAnimInstanceProxy::GetInstanceAssetPlayerLength(FAnimInstanceProxy *this,int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UScriptStruct *pUVar1;
  FAnimNode_Base *pFVar2;
  float fVar3;
  
  pUVar1 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar2 = GetNodeFromIndexUntyped(this,param_1,pUVar1);
  if (pFVar2 != (FAnimNode_Base *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00014745524d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
    return fVar3;
  }
  return 0.0;
}

// GetInstanceAssetPlayerTime @ 1474552d0

float __thiscall
FAnimInstanceProxy::GetInstanceAssetPlayerTime(FAnimInstanceProxy *this,int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UScriptStruct *pUVar1;
  FAnimNode_Base *pFVar2;
  float fVar3;
  
  pUVar1 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar2 = GetNodeFromIndexUntyped(this,param_1,pUVar1);
  if (pFVar2 != (FAnimNode_Base *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014745530d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
    return fVar3;
  }
  return 0.0;
}

// GetInstanceAssetPlayerTimeFraction @ 147455390

float __thiscall
FAnimInstanceProxy::GetInstanceAssetPlayerTimeFraction(FAnimInstanceProxy *this,int param_1)

{
  UScriptStruct *pUVar1;
  FAnimNode_Base *pFVar2;
  float fVar3;
  float fVar4;
  
  pUVar1 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar2 = GetNodeFromIndexUntyped(this,param_1,pUVar1);
  if (pFVar2 != (FAnimNode_Base *)0x0) {
    fVar3 = (float)(**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2);
    if (0.0 < fVar3) {
      fVar4 = (float)(**(code **)(pFVar2->_padding_ + 200))(pFVar2);
      return fVar4 / fVar3;
    }
  }
  return 0.0;
}

// GetInstanceAssetPlayerTimeFromEnd @ 1474554c0

float __thiscall
FAnimInstanceProxy::GetInstanceAssetPlayerTimeFromEnd(FAnimInstanceProxy *this,int param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  FAnimNode_Base *pFVar3;
  float fVar4;
  float fVar5;
  
  pUVar2 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar3 = GetNodeFromIndexUntyped(this,param_1,pUVar2);
  if (pFVar3 != (FAnimNode_Base *)0x0) {
    pcVar1 = *(code **)(pFVar3->_padding_ + 200);
    fVar4 = (float)(**(code **)(pFVar3->_padding_ + 0xb8))(pFVar3);
    fVar5 = (float)(*pcVar1)(pFVar3);
    return fVar4 - fVar5;
  }
  return __real_7f7fffff;
}

// GetInstanceAssetPlayerTimeFromEndFraction @ 1474555d0

float __thiscall
FAnimInstanceProxy::GetInstanceAssetPlayerTimeFromEndFraction(FAnimInstanceProxy *this,int param_1)

{
  UScriptStruct *pUVar1;
  FAnimNode_Base *pFVar2;
  float fVar3;
  float fVar4;
  
  pUVar1 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar2 = GetNodeFromIndexUntyped(this,param_1,pUVar1);
  if (pFVar2 != (FAnimNode_Base *)0x0) {
    fVar3 = (float)(**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2);
    if (0.0 < fVar3) {
      fVar4 = (float)(**(code **)(pFVar2->_padding_ + 200))(pFVar2);
      return (fVar3 - fVar4) / fVar3;
    }
  }
  return __real_3f800000;
}

// GetInstanceAssetPlayers @ 147455700

TArray<FAnimNode_AssetPlayerBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FAnimInstanceProxy::GetInstanceAssetPlayers
          (FAnimInstanceProxy *this,
          TArray<FAnimNode_AssetPlayerBase_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *this_00;
  FGraphAssetPlayerInformation *pFVar7;
  UScriptStruct *pUVar8;
  TArray<FAnimNode_AssetPlayerBase_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FAnimNode_Base *local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = (TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
             *)(**(code **)((longlong)*this->AnimClassInterface + 0x88))();
  pFVar7 = TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
           ::Find(this_00,*param_1);
  if (pFVar7 != (FGraphAssetPlayerInformation *)0x0) {
    iVar2 = (pFVar7->PlayerNodeIndices).ArrayNum;
    pFVar10 = (pFVar7->PlayerNodeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar7->PlayerNodeIndices).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar1) break;
      iVar6 = *(int *)pFVar10;
      pUVar8 = FAnimNode_AssetPlayerBase::StaticStruct();
      local_38[0] = GetNodeFromIndexUntyped(this,iVar6,pUVar8);
      if (local_38[0] != (FAnimNode_Base *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FAnimNode_AssetPlayerBase_const_*,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar9;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FAnimNode_Base **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_38[0];
      }
      pFVar10 = pFVar10 + 4;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetInstanceCurrentStateElapsedTime @ 147455a70

float __thiscall
FAnimInstanceProxy::GetInstanceCurrentStateElapsedTime(FAnimInstanceProxy *this,int param_1)

{
  FAnimNode_StateMachine *pFVar1;
  
  pFVar1 = GetStateMachineInstance(this,param_1);
  if (pFVar1 != (FAnimNode_StateMachine *)0x0) {
    return pFVar1->ElapsedTime;
  }
  return 0.0;
}

// GetInstanceMachineWeight @ 147455b70

float __thiscall FAnimInstanceProxy::GetInstanceMachineWeight(FAnimInstanceProxy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FAnimNode_StateMachine *pFVar6;
  float fVar7;
  
  pFVar6 = GetStateMachineInstance(this,param_1);
  if (pFVar6 == (FAnimNode_StateMachine *)0x0) {
    return 0.0;
  }
  uVar1 = pFVar6->StateMachineIndexInClass;
  iVar4 = 1 - this->BufferWriteIndex;
  uVar5 = 0;
  if ((int)uVar1 < this->MachineWeightArrays[iVar4].ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  return *(float *)(this->MachineWeightArrays[iVar4].AllocatorInstance.Data +
                   (longlong)(int)uVar1 * 4);
}

// GetInstanceRelevantAssetPlayers @ 147455ce0

TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FAnimInstanceProxy::GetInstanceRelevantAssetPlayers
          (FAnimInstanceProxy *this,
          TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *this_00;
  FGraphAssetPlayerInformation *pFVar7;
  UScriptStruct *pUVar8;
  TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FAnimNode_Base *local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = (TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
             *)(**(code **)((longlong)*this->AnimClassInterface + 0x88))();
  pFVar7 = TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
           ::Find(this_00,*param_1);
  if (pFVar7 != (FGraphAssetPlayerInformation *)0x0) {
    iVar2 = (pFVar7->PlayerNodeIndices).ArrayNum;
    pFVar10 = (pFVar7->PlayerNodeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar7->PlayerNodeIndices).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar1) break;
      iVar6 = *(int *)pFVar10;
      pUVar8 = FAnimNode_AssetPlayerRelevancyBase::StaticStruct();
      local_38[0] = GetNodeFromIndexUntyped(this,iVar6,pUVar8);
      if (local_38[0] != (FAnimNode_Base *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_>
                      *)(*pcVar4)();
            return pTVar9;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FAnimNode_Base **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_38[0];
      }
      pFVar10 = pFVar10 + 4;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetInstanceStateWeight @ 147456050

float __thiscall
FAnimInstanceProxy::GetInstanceStateWeight(FAnimInstanceProxy *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FAnimNode_StateMachine *pFVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  float fVar10;
  
  pFVar5 = GetStateMachineInstance(this,param_1);
  if ((pFVar5 != (FAnimNode_StateMachine *)0x0) &&
     (*(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x8 !=
      *(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x34)) {
    puVar8 = *(undefined1 **)&(this->StateMachineClassIndexToWeightOffset).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->StateMachineClassIndexToWeightOffset).field_0x38;
    }
    uVar3 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 -
                                1U & pFVar5->StateMachineIndexInClass) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar3 * 0x10 +
                         *(longlong *)&this->StateMachineClassIndexToWeightOffset);
        if (*puVar7 == pFVar5->StateMachineIndexInClass) {
          puVar6 = puVar7 + 1;
          if (puVar7 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 == (uint *)0x0) {
            return 0.0;
          }
          uVar9 = param_2 + *puVar6;
          iVar4 = 1 - this->BufferWriteIndex;
          uVar3 = 0;
          if ((int)uVar9 < this->StateWeightArrays[iVar4].ArrayNum) {
            uVar3 = ~uVar9 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            fVar10 = (float)(*pcVar1)();
            return fVar10;
          }
          return *(float *)(this->StateWeightArrays[iVar4].AllocatorInstance.Data +
                           (longlong)(int)uVar9 * 4);
        }
        uVar3 = puVar7[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  return 0.0;
}

// GetInstanceTransitionCrossfadeDuration @ 1474562b0

float __thiscall
FAnimInstanceProxy::GetInstanceTransitionCrossfadeDuration
          (FAnimInstanceProxy *this,int param_1,int param_2)

{
  bool bVar1;
  FAnimNode_StateMachine *this_00;
  FAnimationTransitionBetweenStates *pFVar2;
  
  this_00 = GetStateMachineInstance(this,param_1);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    bVar1 = FAnimNode_StateMachine::IsValidTransitionIndex(this_00,param_2);
    if (bVar1) {
      pFVar2 = FAnimNode_StateMachine::GetTransitionInfo(this_00,param_2);
      return pFVar2->CrossfadeDuration;
    }
  }
  return 0.0;
}

// GetInstanceTransitionTimeElapsed @ 147456380

float __thiscall
FAnimInstanceProxy::GetInstanceTransitionTimeElapsed
          (FAnimInstanceProxy *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FAnimNode_StateMachine *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res20 [8];
  
  this_00 = GetStateMachineInstance(this,param_1);
  if ((this_00 != (FAnimNode_StateMachine *)0x0) &&
     (bVar3 = FAnimNode_StateMachine::IsValidTransitionIndex(this_00,param_2), bVar3)) {
    pFVar6 = (this_00->ActiveTransitionArray).AllocatorInstance.Data;
    iVar2 = (this_00->ActiveTransitionArray).ArrayNum;
    pFVar5 = pFVar6 + 0x80;
    pFVar7 = pFVar6 + (longlong)iVar2 * 200;
    while( true ) {
      if ((this_00->ActiveTransitionArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAnimationActiveTransitionEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar6 == pFVar7) break;
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + -8);
      if (pFVar4 == (FScriptContainerElement *)0x0) {
        pFVar4 = pFVar5 + -0x18;
      }
      pFVar1 = pFVar4 + (longlong)*(int *)pFVar5 * 4;
      for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 4) {
        if (*(int *)pFVar4 == param_2) {
          return *(float *)pFVar6;
        }
      }
      pFVar6 = pFVar6 + 200;
      pFVar5 = pFVar5 + 200;
    }
  }
  return 0.0;
}

// GetInstanceTransitionTimeElapsedFraction @ 147456530

float __thiscall
FAnimInstanceProxy::GetInstanceTransitionTimeElapsedFraction
          (FAnimInstanceProxy *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FAnimNode_StateMachine *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res20 [8];
  
  this_00 = GetStateMachineInstance(this,param_1);
  if ((this_00 != (FAnimNode_StateMachine *)0x0) &&
     (bVar3 = FAnimNode_StateMachine::IsValidTransitionIndex(this_00,param_2), bVar3)) {
    pFVar6 = (this_00->ActiveTransitionArray).AllocatorInstance.Data;
    iVar2 = (this_00->ActiveTransitionArray).ArrayNum;
    pFVar5 = pFVar6 + 0x80;
    pFVar7 = pFVar6 + (longlong)iVar2 * 200;
    while( true ) {
      if ((this_00->ActiveTransitionArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAnimationActiveTransitionEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar6 == pFVar7) break;
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + -8);
      if (pFVar4 == (FScriptContainerElement *)0x0) {
        pFVar4 = pFVar5 + -0x18;
      }
      pFVar1 = pFVar4 + (longlong)(int)*(float *)pFVar5 * 4;
      for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 4) {
        if (*(float *)pFVar4 == (float)param_2) {
          return *(float *)pFVar6 / *(float *)(pFVar6 + 8);
        }
      }
      pFVar6 = pFVar6 + 200;
      pFVar5 = pFVar5 + 200;
    }
  }
  return 0.0;
}

// GetInterpolationOverride @ 1474566e0

TOptional<EAnimInterpolationType> __thiscall
FAnimInstanceProxy::GetInterpolationOverride(FAnimInstanceProxy *this)

{
  bool bVar1;
  EAnimInterpolationType *in_RDX;
  
  in_RDX[1] = Linear;
  bVar1 = (this->InterpolationOverride).bIsSet;
  in_RDX[1] = bVar1;
  if (bVar1 != false) {
    *in_RDX = (this->InterpolationOverride).TypedValue;
  }
  return SUB82(in_RDX,0);
}

// GetMachineDescription @ 1474585e0

FBakedAnimationStateMachine * __cdecl
FAnimInstanceProxy::GetMachineDescription
          (IAnimClassInterface *param_1,FAnimNode_StateMachine *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FBakedAnimationStateMachine *pFVar5;
  
  plVar4 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))();
  iVar1 = param_2->StateMachineIndexInClass;
  if ((-1 < iVar1) && (iVar1 < (int)plVar4[1])) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FBakedAnimationStateMachine *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FBakedAnimationStateMachine *)((longlong)iVar1 * 0x38 + *plVar4);
  }
  return (FBakedAnimationStateMachine *)0x0;
}

// GetMontageEvaluationData @ 1474586c0

TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> * __thiscall
FAnimInstanceProxy::GetMontageEvaluationData(FAnimInstanceProxy *this)

{
  TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = &this->MontageEvaluationData;
  if ((this->bUseMainInstanceMontageEvaluationData != '\0') &&
     (this->MainInstanceProxy != (FAnimInstanceProxy *)0x0)) {
    pTVar1 = &this->MainInstanceProxy->MontageEvaluationData;
  }
  return pTVar1;
}

// GetMontageEvaluationData @ 1474586f0

TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> * __thiscall
FAnimInstanceProxy::GetMontageEvaluationData(FAnimInstanceProxy *this)

{
  TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = &this->MontageEvaluationData;
  if ((this->bUseMainInstanceMontageEvaluationData != '\0') &&
     (this->MainInstanceProxy != (FAnimInstanceProxy *)0x0)) {
    pTVar1 = &this->MainInstanceProxy->MontageEvaluationData;
  }
  return pTVar1;
}

// GetMutableInstanceAssetPlayers @ 147458800

TArray<FAnimNode_AssetPlayerBase_*,TSizedDefaultAllocator<32>_> * __thiscall
FAnimInstanceProxy::GetMutableInstanceAssetPlayers
          (FAnimInstanceProxy *this,
          TArray<FAnimNode_AssetPlayerBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *this_00;
  FGraphAssetPlayerInformation *pFVar7;
  UScriptStruct *pUVar8;
  TArray<FAnimNode_AssetPlayerBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FAnimNode_Base *local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = (TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
             *)(**(code **)((longlong)*this->AnimClassInterface + 0x88))();
  pFVar7 = TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
           ::Find(this_00,*param_1);
  if (pFVar7 != (FGraphAssetPlayerInformation *)0x0) {
    iVar2 = (pFVar7->PlayerNodeIndices).ArrayNum;
    pFVar10 = (pFVar7->PlayerNodeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar7->PlayerNodeIndices).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar1) break;
      iVar6 = *(int *)pFVar10;
      pUVar8 = FAnimNode_AssetPlayerBase::StaticStruct();
      local_38[0] = GetNodeFromIndexUntyped(this,iVar6,pUVar8);
      if (local_38[0] != (FAnimNode_Base *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FAnimNode_AssetPlayerBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FAnimNode_Base **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_38[0];
      }
      pFVar10 = pFVar10 + 4;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetMutableInstanceRelevantAssetPlayers @ 147458b70

TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_> * __thiscall
FAnimInstanceProxy::GetMutableInstanceRelevantAssetPlayers
          (FAnimInstanceProxy *this,
          TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *this_00;
  FGraphAssetPlayerInformation *pFVar7;
  UScriptStruct *pUVar8;
  TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FAnimNode_Base *local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = (TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
             *)(**(code **)((longlong)*this->AnimClassInterface + 0x88))();
  pFVar7 = TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
           ::Find(this_00,*param_1);
  if (pFVar7 != (FGraphAssetPlayerInformation *)0x0) {
    iVar2 = (pFVar7->PlayerNodeIndices).ArrayNum;
    pFVar10 = (pFVar7->PlayerNodeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar7->PlayerNodeIndices).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar1) break;
      iVar6 = *(int *)pFVar10;
      pUVar8 = FAnimNode_AssetPlayerRelevancyBase::StaticStruct();
      local_38[0] = GetNodeFromIndexUntyped(this,iVar6,pUVar8);
      if (local_38[0] != (FAnimNode_Base *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar9;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FAnimNode_Base **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_38[0];
      }
      pFVar10 = pFVar10 + 4;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetMutableNodeFromIndexUntyped @ 147458ee0

FAnimNode_Base * __thiscall
FAnimInstanceProxy::GetMutableNodeFromIndexUntyped
          (FAnimInstanceProxy *this,int param_1,UScriptStruct *param_2)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FAnimNode_Base *pFVar5;
  int iVar6;
  
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return (FAnimNode_Base *)0x0;
  }
  plVar4 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
  iVar6 = ~param_1 + (int)plVar4[1];
  if ((-1 < iVar6) && (iVar6 < (int)plVar4[1])) {
    if ((iVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnimNode_Base *)(*pcVar2)();
      return pFVar5;
    }
    this_00 = *(FProperty **)(*plVar4 + (longlong)iVar6 * 8);
    if (param_2 != (UScriptStruct *)0x0) {
      lVar1 = this_00[1]._padding_;
      iVar6 = (int)param_2->_padding_;
      if ((*(int *)(lVar1 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar6 * 8) !=
          &param_2->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pFVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (this_00,this->AnimInstanceObject,0);
        return pFVar5;
      }
    }
  }
  return (FAnimNode_Base *)0x0;
}

// GetNodeFromIndexUntyped @ 147459000

FAnimNode_Base * __thiscall
FAnimInstanceProxy::GetNodeFromIndexUntyped
          (FAnimInstanceProxy *this,int param_1,UScriptStruct *param_2)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FAnimNode_Base *pFVar5;
  int iVar6;
  
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return (FAnimNode_Base *)0x0;
  }
  plVar4 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
  iVar6 = ~param_1 + (int)plVar4[1];
  if ((-1 < iVar6) && (iVar6 < (int)plVar4[1])) {
    if ((iVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnimNode_Base *)(*pcVar2)();
      return pFVar5;
    }
    this_00 = *(FProperty **)(*plVar4 + (longlong)iVar6 * 8);
    if (param_2 != (UScriptStruct *)0x0) {
      lVar1 = this_00[1]._padding_;
      iVar6 = (int)param_2->_padding_;
      if ((*(int *)(lVar1 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar6 * 8) !=
          &param_2->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pFVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (this_00,this->AnimInstanceObject,0);
        return pFVar5;
      }
    }
  }
  return (FAnimNode_Base *)0x0;
}

// GetPoseSnapshot @ 14745e6c0

FPoseSnapshot * __thiscall
FAnimInstanceProxy::GetPoseSnapshot(FAnimInstanceProxy *this,FName param_1)

{
  FPoseSnapshot *pFVar1;
  FPoseSnapshot *pFVar2;
  
  pFVar1 = (FPoseSnapshot *)(this->PoseSnapshots).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->PoseSnapshots).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FPoseSnapshot *)0x0;
    }
    if (pFVar1->SnapshotName == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// GetRecordedMachineWeight @ 1474627b0

float __thiscall FAnimInstanceProxy::GetRecordedMachineWeight(FAnimInstanceProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  iVar3 = 1 - this->BufferWriteIndex;
  uVar4 = 0;
  if (param_1 < this->MachineWeightArrays[iVar3].ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  return *(float *)(this->MachineWeightArrays[iVar3].AllocatorInstance.Data + (longlong)param_1 * 4)
  ;
}

// GetRecordedStateWeight @ 147462840

float __thiscall
FAnimInstanceProxy::GetRecordedStateWeight(FAnimInstanceProxy *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  float fVar9;
  
  if (*(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x8 !=
      *(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x34) {
    puVar8 = *(undefined1 **)&(this->StateMachineClassIndexToWeightOffset).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->StateMachineClassIndexToWeightOffset).field_0x38;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 - 1U
                              & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 +
                        *(longlong *)&this->StateMachineClassIndexToWeightOffset);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 1;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 == (int *)0x0) {
            return 0.0;
          }
          iVar3 = 1 - this->BufferWriteIndex;
          uVar7 = *piVar4 + param_2;
          uVar6 = 0;
          if ((int)uVar7 < this->StateWeightArrays[iVar3].ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            fVar9 = (float)(*pcVar1)();
            return fVar9;
          }
          return *(float *)(this->StateWeightArrays[iVar3].AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 4);
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  return 0.0;
}

// GetRelevantAnimLength @ 147462960

float __thiscall
FAnimInstanceProxy::GetRelevantAnimLength(FAnimInstanceProxy *this,int param_1,int param_2)

{
  FAnimNode_StateMachine *this_00;
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  longlong lVar3;
  float fVar4;
  
  this_00 = GetStateMachineInstance(this,param_1);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    pFVar1 = FAnimNode_StateMachine::GetStateInfo(this_00,param_2);
    pFVar2 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState(this_00,this,pFVar1);
    if (pFVar2 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) {
      lVar3 = (**(code **)(*(longlong *)pFVar2 + 0xa0))(pFVar2);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001474629d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar4 = (float)(**(code **)(*(longlong *)pFVar2 + 0xb8))
                                 (pFVar2,*(code **)(*(longlong *)pFVar2 + 0xb8));
        return fVar4;
      }
    }
  }
  return 0.0;
}

// GetRelevantAnimTime @ 147462a90

float __thiscall
FAnimInstanceProxy::GetRelevantAnimTime(FAnimInstanceProxy *this,int param_1,int param_2)

{
  FAnimNode_StateMachine *this_00;
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  float fVar3;
  
  this_00 = GetStateMachineInstance(this,param_1);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    pFVar1 = FAnimNode_StateMachine::GetStateInfo(this_00,param_2);
    pFVar2 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState(this_00,this,pFVar1);
    if (pFVar2 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147462aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(**(code **)(*(longlong *)pFVar2 + 200))
                               (pFVar2,*(code **)(*(longlong *)pFVar2 + 200));
      return fVar3;
    }
  }
  return 0.0;
}

// GetRelevantAnimTimeFraction @ 147462ba0

float __thiscall
FAnimInstanceProxy::GetRelevantAnimTimeFraction(FAnimInstanceProxy *this,int param_1,int param_2)

{
  FAnimNode_StateMachine *this_00;
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  float fVar3;
  float fVar4;
  
  this_00 = GetStateMachineInstance(this,param_1);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    pFVar1 = FAnimNode_StateMachine::GetStateInfo(this_00,param_2);
    pFVar2 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState(this_00,this,pFVar1);
    if ((pFVar2 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) &&
       (fVar3 = (float)(**(code **)(*(longlong *)pFVar2 + 0xb8))(pFVar2), 0.0 < fVar3)) {
      fVar4 = (float)(**(code **)(*(longlong *)pFVar2 + 200))(pFVar2);
      return fVar4 / fVar3;
    }
  }
  return 0.0;
}

// GetRelevantAnimTimeRemaining @ 147462cf0

float __thiscall
FAnimInstanceProxy::GetRelevantAnimTimeRemaining(FAnimInstanceProxy *this,int param_1,int param_2)

{
  FAnimNode_StateMachine *this_00;
  float fVar1;
  
  this_00 = GetStateMachineInstance(this,param_1);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    fVar1 = FAnimNode_StateMachine::GetRelevantAnimTimeRemaining(this_00,this,param_2);
    return fVar1;
  }
  return __real_7f7fffff;
}

// GetRelevantAnimTimeRemainingFraction @ 147462db0

float __thiscall
FAnimInstanceProxy::GetRelevantAnimTimeRemainingFraction
          (FAnimInstanceProxy *this,int param_1,int param_2)

{
  FAnimNode_StateMachine *this_00;
  float fVar1;
  
  this_00 = GetStateMachineInstance(this,param_1);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    fVar1 = FAnimNode_StateMachine::GetRelevantAnimTimeRemainingFraction(this_00,this,param_2);
    return fVar1;
  }
  return __real_3f800000;
}

// GetRelevantAssetPlayerInterfaceFromState @ 147462e70

FAnimNode_AssetPlayerRelevancyBase * __thiscall
FAnimInstanceProxy::GetRelevantAssetPlayerInterfaceFromState
          (FAnimInstanceProxy *this,int param_1,int param_2)

{
  FAnimNode_StateMachine *this_00;
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  
  this_00 = GetStateMachineInstance(this,param_1);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    pFVar1 = FAnimNode_StateMachine::GetStateInfo(this_00,param_2);
    pFVar2 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState(this_00,this,pFVar1);
    return pFVar2;
  }
  return (FAnimNode_AssetPlayerRelevancyBase *)0x0;
}

// GetSlotGroupInertializationRequestDataMap @ 147463560

TMap<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
* __thiscall FAnimInstanceProxy::GetSlotGroupInertializationRequestDataMap(FAnimInstanceProxy *this)

{
  TMap<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
  *pTVar1;
  
  pTVar1 = &this->SlotGroupInertializationRequestDataMap;
  if ((this->bUseMainInstanceMontageEvaluationData != '\0') &&
     (this->MainInstanceProxy != (FAnimInstanceProxy *)0x0)) {
    pTVar1 = &this->MainInstanceProxy->SlotGroupInertializationRequestDataMap;
  }
  return pTVar1;
}

// GetSlotGroupInertializationRequestMap @ 147463590

TMap<FName,TTuple<float,UBlendProfile_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>_>
* __thiscall FAnimInstanceProxy::GetSlotGroupInertializationRequestMap(FAnimInstanceProxy *this)

{
  TMap<FName,TTuple<float,UBlendProfile_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<float,UBlendProfile_const_*>,0>_>
  *pTVar1;
  
  pTVar1 = &this->SlotGroupInertializationRequestMap;
  if ((this->bUseMainInstanceMontageEvaluationData != '\0') &&
     (this->MainInstanceProxy != (FAnimInstanceProxy *)0x0)) {
    pTVar1 = &this->MainInstanceProxy->SlotGroupInertializationRequestMap;
  }
  return pTVar1;
}

// GetSlotInertializationRequest @ 1474635c0

bool __thiscall
FAnimInstanceProxy::GetSlotInertializationRequest
          (FAnimInstanceProxy *this,FName *param_1,TTuple<float,UBlendProfile_const_*> *param_2)

{
  return false;
}

// GetSlotInertializationRequestData @ 1474635d0

bool __thiscall
FAnimInstanceProxy::GetSlotInertializationRequestData
          (FAnimInstanceProxy *this,FName *param_1,FInertializationRequest *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  FInertializationRequest *pFVar7;
  FAnimInstanceProxy *pFVar8;
  FName local_res8;
  undefined8 local_28 [2];
  
  if (this->Skeleton == (USkeleton *)0x0) {
    local_28[0] = 0;
    FVar4 = (FName)local_28;
  }
  else {
    FVar4 = USkeleton::GetSlotGroupName(this->Skeleton,&local_res8);
  }
  lVar1 = *(longlong *)FVar4;
  if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
     (pFVar8 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    pFVar8 = this;
  }
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(pFVar8->SlotGroupInertializationRequestDataMap).field_0x8 !=
      *(int *)&(pFVar8->SlotGroupInertializationRequestDataMap).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar8->SlotGroupInertializationRequestDataMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar8->SlotGroupInertializationRequestDataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(pFVar8->SlotGroupInertializationRequestDataMap).field_0x48
                               - 1U & (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)
                 ((longlong)iVar3 * 0x68 +
                 *(longlong *)&pFVar8->SlotGroupInertializationRequestDataMap);
        if (*plVar5 == lVar1) {
          pFVar7 = (FInertializationRequest *)(plVar5 + 1);
          if (plVar5 == (longlong *)0x0) {
            pFVar7 = (FInertializationRequest *)0x0;
          }
          if (pFVar7 == (FInertializationRequest *)0x0) {
            return false;
          }
          FInertializationRequest::operator=(param_2,pFVar7);
          return true;
        }
        iVar3 = (int)plVar5[0xc];
      } while (iVar3 != -1);
    }
  }
  return false;
}

// GetSlotMontageGlobalWeight @ 1474636d0

float __thiscall
FAnimInstanceProxy::GetSlotMontageGlobalWeight(FAnimInstanceProxy *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  float fVar8;
  
  puVar6 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->SlotNameToTrackerIndex,*param_1);
  if (puVar6 == (uint *)0x0) {
    return 0.0;
  }
  iVar7 = 1 - this->BufferWriteIndex;
  uVar1 = *puVar6;
  uVar5 = 0;
  if ((int)uVar1 < this->SlotWeightTracker[iVar7].ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar8 = (float)(*pcVar3)();
      return fVar8;
    }
  }
  pFVar2 = this->SlotWeightTracker[iVar7].AllocatorInstance.Data;
  return *(float *)(pFVar2 + (longlong)(int)uVar1 * 0xc + 4) *
         *(float *)(pFVar2 + (longlong)(int)uVar1 * 0xc);
}

// GetSlotMontageLocalWeight @ 147463860

float __thiscall
FAnimInstanceProxy::GetSlotMontageLocalWeight(FAnimInstanceProxy *this,FName *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  
  puVar5 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->SlotNameToTrackerIndex,*param_1);
  if (puVar5 == (uint *)0x0) {
    return 0.0;
  }
  iVar6 = 1 - this->BufferWriteIndex;
  uVar1 = *puVar5;
  uVar4 = 0;
  if ((int)uVar1 < this->SlotWeightTracker[iVar6].ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  return *(float *)(this->SlotWeightTracker[iVar6].AllocatorInstance.Data +
                   (longlong)(int)uVar1 * 0xc);
}

// GetSlotNodeGlobalWeight @ 147463950

float __thiscall
FAnimInstanceProxy::GetSlotNodeGlobalWeight(FAnimInstanceProxy *this,FName *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  
  puVar5 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->SlotNameToTrackerIndex,*param_1);
  if (puVar5 == (uint *)0x0) {
    return 0.0;
  }
  iVar6 = 1 - this->BufferWriteIndex;
  uVar1 = *puVar5;
  uVar4 = 0;
  if ((int)uVar1 < this->SlotWeightTracker[iVar6].ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  return *(float *)(this->SlotWeightTracker[iVar6].AllocatorInstance.Data +
                   (longlong)(int)uVar1 * 0xc + 4);
}

// GetSlotWeight @ 147463ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::GetSlotWeight
          (FAnimInstanceProxy *this,FName *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  UAnimMontage *this_00;
  UObject *pUVar4;
  FWeakObjectPtr *this_01;
  FAnimInstanceProxy *pFVar5;
  FWeakObjectPtr *pFVar6;
  float fVar7;
  float fVar8;
  FName local_res8;
  FString local_88 [5];
  
  fVar7 = 0.0;
  fVar8 = 0.0;
  if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
     (pFVar5 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    pFVar5 = this;
  }
  iVar2 = (pFVar5->MontageEvaluationData).ArrayNum;
  this_01 = (FWeakObjectPtr *)(pFVar5->MontageEvaluationData).AllocatorInstance.Data;
  pFVar6 = this_01 + (longlong)iVar2 * 0xb;
  while( true ) {
    if ((pFVar5->MontageEvaluationData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMontageEvaluationState_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    fVar1 = __real_3f800000;
    if (this_01 == pFVar6) break;
    bVar3 = FWeakObjectPtr::IsValid(this_01);
    if (bVar3) {
      this_00 = (UAnimMontage *)FWeakObjectPtr::Get(this_01);
      bVar3 = UAnimMontage::IsValidSlot(this_00,*param_1);
      if (bVar3) {
        fVar1 = (float)this_01[4].ObjectIndex;
        fVar8 = fVar8 + fVar1;
        bVar3 = UAnimMontage::IsValidAdditiveSlot(this_00,param_1);
        if (!bVar3) {
          fVar7 = fVar7 + fVar1;
        }
        if (5 < (byte)LogAnimation._0_1_) {
          pUVar4 = FWeakObjectPtr::Get(this_01);
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
          local_res8.Number = *(uint *)&pUVar4->field_0x1c;
          ::FName::ToString(&local_res8,local_88);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
          }
        }
      }
    }
    this_01 = this_01 + 0xb;
  }
  *param_4 = fVar8;
  if (fVar1 < fVar8) {
    fVar7 = fVar7 / fVar8;
    fVar8 = fVar1;
  }
  *param_2 = fVar8;
  *param_3 = fVar1 - fVar7;
  return;
}

// GetStateMachineIndex @ 147463d10

int __thiscall
FAnimInstanceProxy::GetStateMachineIndex(FAnimInstanceProxy *this,FAnimNode_StateMachine *param_1)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  UScriptStruct *pUVar7;
  FAnimNode_StateMachine *pFVar8;
  uint uVar9;
  uint uVar10;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    uVar9 = 0;
    iVar5 = (int)plVar6[1];
    if (0 < iVar5) {
      do {
        uVar10 = ~uVar9 + iVar5;
        uVar4 = 0;
        if ((int)uVar10 < iVar5) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        this_00 = *(FProperty **)(*plVar6 + (longlong)(int)uVar10 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar7 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar7 != (UScriptStruct *)0x0) {
            iVar5 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar5) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar7->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) &&
               (pFVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                   (this_00,this->AnimInstanceObject,0), pFVar8 == param_1)) {
              return uVar9;
            }
          }
        }
        iVar5 = (int)plVar6[1];
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar5);
    }
  }
  return -1;
}

// GetStateMachineIndex @ 147463e30

int __thiscall FAnimInstanceProxy::GetStateMachineIndex(FAnimInstanceProxy *this,FName param_1)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  UScriptStruct *pUVar7;
  FAnimNode_StateMachine *pFVar8;
  FBakedAnimationStateMachine *pFVar9;
  uint uVar10;
  uint uVar11;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    uVar11 = 0;
    iVar5 = (int)plVar6[1];
    if (0 < iVar5) {
      do {
        uVar10 = ~uVar11 + iVar5;
        uVar4 = 0;
        if ((int)uVar10 < iVar5) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        this_00 = *(FProperty **)(*plVar6 + (longlong)(int)uVar10 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar7 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar7 != (UScriptStruct *)0x0) {
            iVar5 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar5) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar7->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((((bVar3) &&
                 (pFVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_00,this->AnimInstanceObject,0),
                 pFVar8 != (FAnimNode_StateMachine *)0x0)) &&
                (pFVar9 = GetMachineDescription(this->AnimClassInterface,pFVar8),
                pFVar9 != (FBakedAnimationStateMachine *)0x0)) && (pFVar9->MachineName == param_1))
            {
              return uVar11;
            }
          }
        }
        iVar5 = (int)plVar6[1];
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar5);
    }
  }
  return -1;
}

// GetStateMachineIndexAndDescription @ 1474640c0

void __thiscall
FAnimInstanceProxy::GetStateMachineIndexAndDescription
          (FAnimInstanceProxy *this,FName param_1,int *param_2,FBakedAnimationStateMachine **param_3
          )

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  UScriptStruct *pUVar6;
  FAnimNode_StateMachine *pFVar7;
  FBakedAnimationStateMachine *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar5 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    uVar10 = 0;
    iVar9 = (int)plVar5[1];
    if (0 < iVar9) {
      do {
        uVar11 = ~uVar10 + iVar9;
        uVar4 = 0;
        if ((int)uVar11 < iVar9) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(FProperty **)(*plVar5 + (longlong)(int)uVar11 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar6 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar6 != (UScriptStruct *)0x0) {
            iVar9 = (int)pUVar6->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar9) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar6->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((((bVar3) &&
                 (pFVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_00,this->AnimInstanceObject,0),
                 pFVar7 != (FAnimNode_StateMachine *)0x0)) &&
                (pFVar8 = GetMachineDescription(this->AnimClassInterface,pFVar7),
                pFVar8 != (FBakedAnimationStateMachine *)0x0)) && (pFVar8->MachineName == param_1))
            {
              *param_2 = uVar10;
              if (param_3 == (FBakedAnimationStateMachine **)0x0) {
                return;
              }
              *param_3 = pFVar8;
              return;
            }
          }
        }
        iVar9 = (int)plVar5[1];
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar9);
    }
  }
  *param_2 = -1;
  if (param_3 != (FBakedAnimationStateMachine **)0x0) {
    *param_3 = (FBakedAnimationStateMachine *)0x0;
  }
  return;
}

// GetStateMachineInstance @ 1474643a0

FAnimNode_StateMachine * __thiscall
FAnimInstanceProxy::GetStateMachineInstance(FAnimInstanceProxy *this,int param_1)

{
  int iVar1;
  FProperty *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  FAnimNode_StateMachine *pFVar7;
  UScriptStruct *pUVar8;
  uint uVar9;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    if (-1 < param_1) {
      iVar1 = (int)plVar6[1];
      if (param_1 < iVar1) {
        uVar9 = ~param_1 + iVar1;
        uVar5 = 0;
        if ((int)uVar9 < iVar1) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FAnimNode_StateMachine *)(*pcVar3)();
            return pFVar7;
          }
        }
        this_00 = *(FProperty **)(*plVar6 + (longlong)(int)uVar9 * 8);
        lVar2 = this_00[1]._padding_;
        pUVar8 = FAnimNode_StateMachine::StaticStruct();
        if (pUVar8 != (UScriptStruct *)0x0) {
          iVar1 = (int)pUVar8->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar8->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            pFVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                               (this_00,this->AnimInstanceObject,0);
            return pFVar7;
          }
        }
      }
    }
  }
  return (FAnimNode_StateMachine *)0x0;
}

// GetStateMachineInstanceDesc @ 1474644d0

FBakedAnimationStateMachine * __thiscall
FAnimInstanceProxy::GetStateMachineInstanceDesc(FAnimInstanceProxy *this,FName param_1)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  FBakedAnimationStateMachine *pFVar6;
  UScriptStruct *pUVar7;
  FAnimNode_StateMachine *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar5 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    uVar10 = 0;
    iVar9 = (int)plVar5[1];
    if (0 < iVar9) {
      do {
        uVar11 = ~uVar10 + iVar9;
        uVar4 = 0;
        if ((int)uVar11 < iVar9) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FBakedAnimationStateMachine *)(*pcVar2)();
          return pFVar6;
        }
        this_00 = *(FProperty **)(*plVar5 + (longlong)(int)uVar11 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar7 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar7 != (UScriptStruct *)0x0) {
            iVar9 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar9) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar7->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((((bVar3) &&
                 (pFVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_00,this->AnimInstanceObject,0),
                 pFVar8 != (FAnimNode_StateMachine *)0x0)) &&
                (pFVar6 = GetMachineDescription(this->AnimClassInterface,pFVar8),
                pFVar6 != (FBakedAnimationStateMachine *)0x0)) && (pFVar6->MachineName == param_1))
            {
              return pFVar6;
            }
          }
        }
        iVar9 = (int)plVar5[1];
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar9);
    }
  }
  return (FBakedAnimationStateMachine *)0x0;
}

// GetStateMachineInstanceFromName @ 147464640

FAnimNode_StateMachine * __thiscall
FAnimInstanceProxy::GetStateMachineInstanceFromName(FAnimInstanceProxy *this,FName param_1)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  FAnimNode_StateMachine *pFVar6;
  UScriptStruct *pUVar7;
  FBakedAnimationStateMachine *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar5 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    uVar10 = 0;
    iVar9 = (int)plVar5[1];
    if (0 < iVar9) {
      do {
        uVar11 = ~uVar10 + iVar9;
        uVar4 = 0;
        if ((int)uVar11 < iVar9) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FAnimNode_StateMachine *)(*pcVar2)();
          return pFVar6;
        }
        this_00 = *(FProperty **)(*plVar5 + (longlong)(int)uVar11 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar7 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar7 != (UScriptStruct *)0x0) {
            iVar9 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar9) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar7->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((((bVar3) &&
                 (pFVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_00,this->AnimInstanceObject,0),
                 pFVar6 != (FAnimNode_StateMachine *)0x0)) &&
                (pFVar8 = GetMachineDescription(this->AnimClassInterface,pFVar6),
                pFVar8 != (FBakedAnimationStateMachine *)0x0)) && (pFVar8->MachineName == param_1))
            {
              return pFVar6;
            }
          }
        }
        iVar9 = (int)plVar5[1];
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar9);
    }
  }
  return (FAnimNode_StateMachine *)0x0;
}

// GetSyncGroupIndexFromName @ 1474648d0

int __thiscall FAnimInstanceProxy::GetSyncGroupIndexFromName(FAnimInstanceProxy *this,FName param_1)

{
  int iVar1;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474648df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((longlong)*this->AnimClassInterface + 0xa0))();
    return iVar1;
  }
  return -1;
}

// GetSyncGroupPosition @ 147464980

FMarkerSyncAnimPosition * __thiscall
FAnimInstanceProxy::GetSyncGroupPosition
          (FAnimInstanceProxy *this,FMarkerSyncAnimPosition *__return_storage_ptr__,FName param_1)

{
  UE::Anim::FAnimSync::GetSyncGroupPosition(&this->Sync,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTargetLogNameForCurrentWorldType @ 1474649f0

FName __thiscall FAnimInstanceProxy::GetTargetLogNameForCurrentWorldType(FAnimInstanceProxy *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = NAME_AnimBlueprintLog;
  return in_RDX;
}

// GetTimeToClosestMarker @ 147464b10

bool __thiscall
FAnimInstanceProxy::GetTimeToClosestMarker
          (FAnimInstanceProxy *this,FName param_1,FName param_2,float *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Anim::FAnimSync::GetTimeToClosestMarker(&this->Sync,param_1,param_2,param_3);
  return bVar1;
}

// HasActiveCurves @ 147464f50

bool __thiscall FAnimInstanceProxy::HasActiveCurves(FAnimInstanceProxy *this)

{
  int *piVar1;
  int *piVar2;
  
  if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this->AnimationCurves !=
      &this->MaterialParametersToClear) {
    piVar2 = (int *)&this->AnimationCurves[0].field_0x8;
    do {
      if (0 < *piVar2 - piVar2[0xb]) {
        return true;
      }
      piVar1 = piVar2 + 0x12;
      piVar2 = piVar2 + 0x14;
    } while ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)piVar1 !=
             &this->MaterialParametersToClear);
  }
  return false;
}

// HasMarkerBeenHitThisFrame @ 147464ff0

bool __thiscall
FAnimInstanceProxy::HasMarkerBeenHitThisFrame(FAnimInstanceProxy *this,FName param_1,FName param_2)

{
  bool bVar1;
  
  bVar1 = UE::Anim::FAnimSync::HasMarkerBeenHitThisFrame(&this->Sync,param_1,param_2);
  return bVar1;
}

// HasNativeStateEntryBinding @ 147465080

bool __thiscall
FAnimInstanceProxy::HasNativeStateEntryBinding
          (FAnimInstanceProxy *this,FName *param_1,FName *param_2,FName *param_3)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->NativeStateEntryBindings).ArrayNum;
  pFVar3 = (FName *)(this->NativeStateEntryBindings).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->NativeStateEntryBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNativeStateBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*pFVar3 == *param_1) && (pFVar3[1] == *param_2)) {
      param_3->ComparisonIndex = 0;
      param_3->Number = 0;
      return true;
    }
    pFVar3 = pFVar3 + 5;
  }
  return false;
}

// HasNativeStateExitBinding @ 1474651d0

bool __thiscall
FAnimInstanceProxy::HasNativeStateExitBinding
          (FAnimInstanceProxy *this,FName *param_1,FName *param_2,FName *param_3)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->NativeStateExitBindings).ArrayNum;
  pFVar3 = (FName *)(this->NativeStateExitBindings).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->NativeStateExitBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNativeStateBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*pFVar3 == *param_1) && (pFVar3[1] == *param_2)) {
      param_3->ComparisonIndex = 0;
      param_3->Number = 0;
      return true;
    }
    pFVar3 = pFVar3 + 5;
  }
  return false;
}

// HasNativeTransitionBinding @ 147465320

bool __thiscall
FAnimInstanceProxy::HasNativeTransitionBinding
          (FAnimInstanceProxy *this,FName *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->NativeTransitionBindings).ArrayNum;
  pFVar2 = (FName *)(this->NativeTransitionBindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 6;
  while( true ) {
    if ((this->NativeTransitionBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNativeTransitionBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((*pFVar2 == *param_1) && (pFVar2[1] == *param_2)) && (pFVar2[2] == *param_3)) {
      param_4->ComparisonIndex = 0;
      param_4->Number = 0;
      return true;
    }
    pFVar2 = pFVar2 + 6;
  }
  return false;
}

// Initialize @ 147465530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAnimInstanceProxy::Initialize(FAnimInstanceProxy *this,UAnimInstance *param_1)

{
  int *piVar1;
  FString *pFVar2;
  short *psVar3;
  int *piVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  USkeletalMeshComponent *this_00;
  code *pcVar7;
  double dVar8;
  TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  IAnimClassInterface *pIVar14;
  longlong lVar15;
  longlong *plVar16;
  FAnimNode_Base *pFVar17;
  USkeleton *pUVar18;
  USkeletalMeshComponent *pUVar19;
  TTransform<double> *pTVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  uint uVar26;
  int *piVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_208 [32];
  uint local_1b8;
  undefined1 local_1b4;
  undefined1 local_1b3 [3];
  uint local_1b0;
  uint local_1ac;
  void *local_1a8;
  FString local_1a0;
  TKeyInitializer<FName_const_&> local_190;
  UAnimInstance *local_188;
  int local_180;
  int local_17c;
  TPairInitializer<int_const_&,int_const_&> local_178;
  longlong local_168;
  TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_160;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  longlong *local_150;
  FAnimInstanceProxy *local_148;
  FName local_140;
  longlong *local_138;
  int iStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  uint *local_d8;
  uint *local_d0;
  undefined4 local_ac;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_188 = param_1;
  local_148 = this;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::Initialize");
  this->AnimInstanceObject = (UObject *)param_1;
  pIVar14 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->field_0x10);
  this->AnimClassInterface = pIVar14;
  (**(code **)(*(longlong *)this + 0x80))(this,param_1);
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    pFVar17 = (FAnimNode_Base *)(**(code **)(*(longlong *)this + 0x40))(this);
    this->RootNode = pFVar17;
  }
  else {
    local_178.Value = (int *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    this->RootNode = (FAnimNode_Base *)0x0;
    lVar15 = (**(code **)((longlong)*this->AnimClassInterface + 0x80))();
    iVar23 = 0;
    if (0 < *(int *)(lVar15 + 8)) {
      plVar16 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x80))();
      if (((int)plVar16[1] < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(FProperty **)(*plVar16 + 0x38) != (FProperty *)0x0) {
        pFVar17 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            (*(FProperty **)(*plVar16 + 0x38),(UObject *)param_1,0);
        this->RootNode = pFVar17;
      }
    }
    plVar16 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x78))();
    local_160 = (TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)&this->SavedPoseQueueMap;
    local_150 = plVar16;
    TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset(local_160);
    iVar12 = (int)plVar16[5];
    pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
    uStack_12c = 1;
    local_118 = 0;
    iStack_11c = local_118;
    if (iVar12 != 0) {
      pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar24 = pTVar25;
      }
      uVar22 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
      local_118 = 0;
      iVar23 = 0;
      while (uVar22 == 0) {
        lVar15 = (longlong)iVar23;
        local_118 = local_118 + 0x20;
        iVar23 = iVar23 + 1;
        iStack_11c = iVar12;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_1474656ed;
        uVar22 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uStack_12c = -uVar22 & uVar22;
      uVar5 = (ulonglong)uStack_12c * 2 + 1;
      lVar15 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_180 = (int)lVar15;
      iStack_11c = local_118 + -1 + local_180;
      if (iVar12 < iStack_11c) {
        iStack_11c = iVar12;
      }
    }
LAB_1474656ed:
    uVar22 = *(uint *)(plVar16 + 5);
    uStack_114 = local_ac;
    uVar26 = uVar22 & 0xffffffe0;
    iStack_110 = (int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34);
    uStack_120 = 0xffffffff;
    TStack_100._padding_ = CONCAT44(uStack_12c,iVar23);
    TStack_100.CurrentBitIndex = iStack_11c;
    TStack_100.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar22 >> 5;
    TStack_100._28_4_ = local_ac;
    TStack_100.BaseBitIndex = local_118;
    uStack_e0 = CONCAT44(uStack_10c,iStack_110);
    local_1b0 = uVar22;
    local_158 = pTVar25;
    local_138 = plVar16;
    iStack_130 = iVar23;
    local_128 = pTVar25;
    local_108 = plVar16;
    TStack_100.Array = pTVar25;
    if ((((int)uVar22 < 0) || (iVar12 < (int)uVar22)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar1 = local_178.Value;
    uVar13 = *(uint *)(plVar16 + 5);
    if (uVar22 != uVar13) {
      pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar24 = pTVar25;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) &
               *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
      while (uVar22 == 0) {
        lVar15 = (longlong)iVar21;
        uVar26 = uVar26 + 0x20;
        iVar21 = iVar21 + 1;
        uVar22 = uVar13;
        local_1b0 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_147465810;
        uVar22 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_17c = (int)lVar15;
      uVar22 = local_17c + -1 + uVar26;
      local_1b0 = uVar22;
      if ((int)uVar13 < (int)uVar22) {
        uVar22 = uVar13;
        local_1b0 = uVar13;
      }
    }
LAB_147465810:
    while( true ) {
      plVar10 = local_108;
      if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
        local_1b4 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FCachedPoseIndices>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b4);
      }
      this = local_148;
      pTVar9 = local_160;
      if (((TStack_100.CurrentBitIndex == uVar22) && (TStack_100.Array == pTVar25)) &&
         (plVar10 == plVar16)) break;
      lVar28 = (longlong)TStack_100.CurrentBitIndex * 0x20 + *plVar10;
      local_168 = lVar28;
      TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>(local_160,&local_190,(bool *)&local_168);
      piVar27 = *(int **)(lVar28 + 8);
      iVar23 = *(int *)(lVar28 + 0x10);
      lVar15 = *(longlong *)&pTVar9->Elements + (longlong)(int)local_190.Key * 0x20;
      piVar4 = piVar27 + iVar23;
      while( true ) {
        if (*(int *)(lVar28 + 0x10) != iVar23) {
          local_1b3[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b3);
        }
        if (piVar27 == piVar4) break;
        iVar12 = (int)*(longlong *)((longlong)piVar1 + 8);
        uVar26 = (iVar12 - *piVar27) - 1;
        uVar22 = 0;
        if ((int)uVar26 < iVar12) {
          uVar22 = ~uVar26 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_1a8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                              (*(FProperty **)(*(longlong *)piVar1 + (longlong)(int)uVar26 * 8),
                               (UObject *)local_188,0);
        if (((*(void ***)(lVar15 + 8) <= &local_1a8) &&
            (&local_1a8 < *(void ***)(lVar15 + 8) + *(int *)(lVar15 + 0x14))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = *(int *)(lVar15 + 0x10);
        if (iVar12 == *(int *)(lVar15 + 0x14)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(lVar15 + 8),(int *)(lVar15 + 0x14));
        }
        piVar27 = piVar27 + 1;
        *(int *)(lVar15 + 0x10) = iVar12 + 1;
        *(void **)(*(longlong *)(lVar15 + 8) + (longlong)iVar12 * 8) = local_1a8;
      }
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      plVar16 = local_150;
      pTVar25 = local_158;
      uVar22 = local_1b0;
    }
    if (local_148->Skeleton == (USkeleton *)0x0) {
      pUVar18 = (USkeleton *)(**(code **)((longlong)*local_148->AnimClassInterface + 0x98))();
      this->Skeleton = pUVar18;
    }
    local_1b8 = 0;
    plVar16 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x10))();
    local_1ac = 0;
    uVar22 = *(uint *)(plVar16 + 1);
    if (0 < (int)uVar22) {
      do {
        uVar26 = local_1ac;
        uVar13 = 0;
        if ((int)local_1ac < (int)plVar16[1]) {
          uVar13 = ~local_1ac >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_d8 = &local_1ac;
        lVar15 = *plVar16;
        local_d0 = &local_1b8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&this->StateMachineClassIndexToWeightOffset,&local_178,(bool *)&local_d8);
        local_1b8 = local_1b8 + *(int *)((longlong)(int)uVar26 * 0x38 + lVar15 + 0x18);
        local_1ac = local_1ac + 1;
      } while ((int)local_1ac < (int)uVar22);
    }
    if ((int)local_1b8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1b8);
    }
    piVar1 = &this->StateWeightArrays[0].ArrayMax;
    piVar4 = &this->StateWeightArrays[0].ArrayNum;
    *piVar4 = 0;
    if (*piVar1 < (int)local_1b8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1b8,&this->StateWeightArrays[0].AllocatorInstance,0,piVar1);
    }
    uVar26 = local_1b8;
    iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,local_1b8,&this->StateWeightArrays[0].AllocatorInstance,piVar4,piVar1);
    memset(this->StateWeightArrays[0].AllocatorInstance.Data + (longlong)iVar23 * 4,0,
           (longlong)(int)uVar26 << 2);
    if ((int)local_1b8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1b8);
    }
    piVar1 = &this->StateWeightArrays[1].ArrayMax;
    iVar23 = *piVar1;
    piVar4 = &this->StateWeightArrays[1].ArrayNum;
    *piVar4 = 0;
    if (iVar23 < (int)local_1b8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1b8,&this->StateWeightArrays[1].AllocatorInstance,0,piVar1);
    }
    uVar26 = local_1b8;
    iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,local_1b8,&this->StateWeightArrays[1].AllocatorInstance,piVar4,piVar1);
    memset(this->StateWeightArrays[1].AllocatorInstance.Data + (longlong)iVar23 * 4,0,
           (longlong)(int)uVar26 << 2);
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    piVar1 = &this->MachineWeightArrays[0].ArrayMax;
    piVar4 = &this->MachineWeightArrays[0].ArrayNum;
    *piVar4 = 0;
    if (*piVar1 < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,&this->MachineWeightArrays[0].AllocatorInstance,0,piVar1);
    }
    iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar22,&this->MachineWeightArrays[0].AllocatorInstance,piVar4,piVar1);
    memset(this->MachineWeightArrays[0].AllocatorInstance.Data + (longlong)iVar23 * 4,0,
           (longlong)(int)uVar22 << 2);
    piVar1 = &this->MachineWeightArrays[1].ArrayMax;
    iVar23 = *piVar1;
    piVar4 = &this->MachineWeightArrays[1].ArrayNum;
    *piVar4 = 0;
    if (iVar23 < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,&this->MachineWeightArrays[1].AllocatorInstance,0,piVar1);
    }
    iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar22,&this->MachineWeightArrays[1].AllocatorInstance,piVar4,piVar1);
    memset(this->MachineWeightArrays[1].AllocatorInstance.Data + (longlong)iVar23 * 4,0,
           (longlong)(int)uVar22 << 2);
    param_1 = local_188;
  }
  pUVar19 = UAnimInstance::GetSkelMeshComponent(param_1);
  if (pUVar19->_padding_ == 0) {
    ::FString::FString(&local_1a0,L"None");
  }
  else {
    local_140 = *(FName *)(pUVar19->_padding_ + 0x18);
    ::FName::ToString(&local_140,&local_1a0);
  }
  pFVar2 = &this->ActorName;
  if (pFVar2 != &local_1a0) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
    (this->ActorName).Data.ArrayNum = local_1a0.Data.ArrayNum;
    (this->ActorName).Data.ArrayMax = local_1a0.Data.ArrayMax;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->SlotNameToTrackerIndex);
  this->SlotWeightTracker[0].ArrayNum = 0;
  if (this->SlotWeightTracker[0].ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&this->SlotWeightTracker[0].AllocatorInstance,0,
               &this->SlotWeightTracker[0].ArrayMax);
  }
  iVar23 = this->SlotWeightTracker[1].ArrayMax;
  this->SlotWeightTracker[1].ArrayNum = 0;
  if (iVar23 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&this->SlotWeightTracker[1].AllocatorInstance,0,
               &this->SlotWeightTracker[1].ArrayMax);
  }
  psVar3 = &(this->SlotNodeInitializationCounter).Counter;
  *psVar3 = *psVar3 + 1;
  (this->SlotNodeInitializationCounter).LastSyncronizedFrame = GFrameCounter;
  if ((this->SlotNodeInitializationCounter).Counter == -1) {
    (this->SlotNodeInitializationCounter).Counter = 0;
  }
  pUVar19 = UAnimInstance::GetSkelMeshComponent(param_1);
  if (pUVar19 == (USkeletalMeshComponent *)0x0) {
    *&(this->ComponentTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->ComponentTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->ComponentTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->ComponentTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->ComponentTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this->ComponentTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    *&(this->ComponentRelativeTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->ComponentRelativeTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->ComponentRelativeTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->ComponentRelativeTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->ComponentRelativeTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    *&(this->ActorTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->ActorTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->ActorTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->ActorTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->ActorTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    uVar29 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    dVar8 = (double)pUVar19->_padding_;
    this_00 = this->SkeletalMeshComponent;
    (this->ComponentTransform).Rotation.XY.m128d_f64[0] = (double)pUVar19->_padding_;
    (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar8;
    dVar8 = (double)pUVar19->_padding_;
    (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = (double)pUVar19->_padding_;
    (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar8;
    dVar8 = (double)pUVar19->_padding_;
    (this->ComponentTransform).Translation.XY.m128d_f64[0] = (double)pUVar19->_padding_;
    (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar8;
    dVar8 = (double)pUVar19->_padding_;
    (this->ComponentTransform).Translation.ZW.m128d_f64[0] = (double)pUVar19->_padding_;
    (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar8;
    dVar8 = (double)pUVar19->_padding_;
    (this->ComponentTransform).Scale3D.XY.m128d_f64[0] = (double)pUVar19->_padding_;
    (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar8;
    dVar8 = (double)pUVar19->_padding_;
    (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)pUVar19->_padding_;
    (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
    pTVar20 = USceneComponent::GetRelativeTransform((USceneComponent *)this_00,&local_a8);
    dVar8 = (pTVar20->Rotation).XY.m128d_f64[1];
    (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
         (pTVar20->Rotation).XY.m128d_f64[0];
    (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Rotation).ZW.m128d_f64[1];
    (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
         (pTVar20->Rotation).ZW.m128d_f64[0];
    (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Translation).XY.m128d_f64[1];
    (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
         (pTVar20->Translation).XY.m128d_f64[0];
    (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Translation).ZW.m128d_f64[1];
    (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
         (pTVar20->Translation).ZW.m128d_f64[0];
    (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Scale3D).XY.m128d_f64[1];
    (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] = (pTVar20->Scale3D).XY.m128d_f64[0];
    (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Scale3D).ZW.m128d_f64[1];
    pUVar19 = this->SkeletalMeshComponent;
    (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] = (pTVar20->Scale3D).ZW.m128d_f64[0];
    (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
    lVar15 = pUVar19->_padding_;
    if ((lVar15 == 0) || (lVar15 = *(longlong *)(lVar15 + 0x1b8), lVar15 == 0)) {
      pTVar20 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar20 = (TTransform<double> *)(lVar15 + 0x1f0);
    }
    dVar8 = (pTVar20->Rotation).XY.m128d_f64[1];
    (this->ActorTransform).Rotation.XY.m128d_f64[0] = (pTVar20->Rotation).XY.m128d_f64[0];
    (this->ActorTransform).Rotation.XY.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Rotation).ZW.m128d_f64[1];
    (this->ActorTransform).Rotation.ZW.m128d_f64[0] = (pTVar20->Rotation).ZW.m128d_f64[0];
    (this->ActorTransform).Rotation.ZW.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Translation).XY.m128d_f64[1];
    (this->ActorTransform).Translation.XY.m128d_f64[0] = (pTVar20->Translation).XY.m128d_f64[0];
    (this->ActorTransform).Translation.XY.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Translation).ZW.m128d_f64[1];
    (this->ActorTransform).Translation.ZW.m128d_f64[0] = (pTVar20->Translation).ZW.m128d_f64[0];
    (this->ActorTransform).Translation.ZW.m128d_f64[1] = dVar8;
    dVar8 = (pTVar20->Scale3D).XY.m128d_f64[1];
    (this->ActorTransform).Scale3D.XY.m128d_f64[0] = (pTVar20->Scale3D).XY.m128d_f64[0];
    (this->ActorTransform).Scale3D.XY.m128d_f64[1] = dVar8;
    uVar29 = *(undefined4 *)(pTVar20->Scale3D).ZW.m128d_f64;
    uVar30 = *(undefined4 *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 4);
    uVar31 = *(undefined4 *)((pTVar20->Scale3D).ZW.m128d_f64 + 1);
    uVar32 = *(undefined4 *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 0xc);
  }
  *(undefined4 *)(this->ActorTransform).Scale3D.ZW.m128d_f64 = uVar29;
  *(undefined4 *)((longlong)(this->ActorTransform).Scale3D.ZW.m128d_f64 + 4) = uVar30;
  *(undefined4 *)((this->ActorTransform).Scale3D.ZW.m128d_f64 + 1) = uVar31;
  *(undefined4 *)((longlong)(this->ActorTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar32;
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeCachedClassData @ 147466670

void __thiscall FAnimInstanceProxy::InitializeCachedClassData(FAnimInstanceProxy *this)

{
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  FProperty *this_00;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  FAnimNode_StateMachine *this_01;
  FName FVar12;
  UClass *pUVar13;
  FAnimNode_LinkedInputPose *pFVar14;
  FString *pFVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int *piVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  void *local_90;
  void *local_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::InitializeCachedClassData");
  (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum = 0;
  if ((this->LODDisabledGameThreadPreUpdateNodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LODDisabledGameThreadPreUpdateNodes).AllocatorInstance,0,
               &(this->LODDisabledGameThreadPreUpdateNodes).ArrayMax);
  }
  pTVar1 = &this->GameThreadPreUpdateNodes;
  (this->GameThreadPreUpdateNodes).ArrayNum = 0;
  if ((this->GameThreadPreUpdateNodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->GameThreadPreUpdateNodes).ArrayMax);
  }
  pTVar2 = &this->DynamicResetNodes;
  (this->DynamicResetNodes).ArrayNum = 0;
  if ((this->DynamicResetNodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->DynamicResetNodes).ArrayMax);
  }
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar11 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x58))();
    puVar18 = (undefined8 *)*plVar11;
    lVar7 = plVar11[1];
    puVar3 = puVar18 + (int)lVar7;
    while( true ) {
      if ((int)plVar11[1] != (int)lVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar18 == puVar3) break;
      this_01 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)*puVar18,this->AnimInstanceObject,0);
      FAnimNode_StateMachine::CacheMachineDescription(this_01,this->AnimClassInterface);
      puVar18 = puVar18 + 1;
    }
    plVar11 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x48))();
    puVar18 = (undefined8 *)*plVar11;
    lVar7 = plVar11[1];
    puVar3 = puVar18 + (int)lVar7;
    while( true ) {
      if ((int)plVar11[1] != (int)lVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar18 == puVar3) break;
      local_90 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           ((FProperty *)*puVar18,this->AnimInstanceObject,0);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 <
           pFVar4 + (longlong)(this->GameThreadPreUpdateNodes).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (this->GameThreadPreUpdateNodes).ArrayNum;
      if (iVar10 == (this->GameThreadPreUpdateNodes).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,
                            &(this->GameThreadPreUpdateNodes).ArrayMax);
      }
      puVar18 = puVar18 + 1;
      (this->GameThreadPreUpdateNodes).ArrayNum = iVar10 + 1;
      *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_90;
    }
    plVar11 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x50))();
    puVar18 = (undefined8 *)*plVar11;
    lVar7 = plVar11[1];
    puVar3 = puVar18 + (int)lVar7;
    while( true ) {
      if ((int)plVar11[1] != (int)lVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar18 == puVar3) break;
      local_88 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           ((FProperty *)*puVar18,this->AnimInstanceObject,0);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           pFVar4 + (longlong)(this->DynamicResetNodes).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (this->DynamicResetNodes).ArrayNum;
      if (iVar10 == (this->DynamicResetNodes).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,&(this->DynamicResetNodes).ArrayMax);
      }
      puVar18 = puVar18 + 1;
      (this->DynamicResetNodes).ArrayNum = iVar10 + 1;
      *(void **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_88;
    }
    plVar11 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x80))();
    pwVar22 = L"";
    lVar7 = *plVar11;
    lVar8 = plVar11[1];
    piVar20 = (int *)(lVar7 + 0x48);
    FVar12 = FAnimNode_LinkedInputPose::DefaultInputPoseName;
    while( true ) {
      if ((int)plVar11[1] != (int)lVar8) {
        local_98[0] = 0;
        `TCheckedPointerIterator<FAnimBlueprintFunction_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_98);
        FVar12 = FAnimNode_LinkedInputPose::DefaultInputPoseName;
      }
      if ((FName *)(piVar20 + -0x12) == (FName *)((longlong)(int)lVar8 * 0x78 + lVar7)) break;
      if (*(FName *)(piVar20 + -0x12) == NAME_AnimGraph) {
        if ((piVar20[-10] != *piVar20) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("AnimBlueprintFunction.InputPoseNames.Num() == AnimBlueprintFunction.InputPoseNodeProperties.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                               ,0x131,L""), FVar12 = FAnimNode_LinkedInputPose::DefaultInputPoseName
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = piVar20[-10];
        uVar17 = 0;
        lVar19 = 0;
        if (iVar10 < 1) goto LAB_147466bd4;
        do {
          uVar16 = 0;
          if ((int)uVar17 < iVar10) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             FVar12 = FAnimNode_LinkedInputPose::DefaultInputPoseName, bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(FName *)(*(longlong *)(piVar20 + -0xc) + lVar19 * 8) == FVar12) {
            uVar16 = 0;
            if ((int)uVar17 < *piVar20) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               FVar12 = FAnimNode_LinkedInputPose::DefaultInputPoseName, bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(longlong *)(*(longlong *)(piVar20 + -2) + lVar19 * 8) != 0) {
              uVar16 = 0;
              if ((int)uVar17 < *piVar20) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pUVar5 = this->AnimInstanceObject;
              this_00 = *(FProperty **)(*(longlong *)(piVar20 + -2) + lVar19 * 8);
              if (pUVar5 == (UObject *)0x0) {
                pFVar15 = GetTypeName<UAnimInstance>(local_60);
                if ((pFVar15->Data).ArrayNum != 0) {
                  pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                }
                    /* WARNING: Subroutine does not return */
                CastLogError(L"nullptr",pwVar22);
              }
              pUVar13 = UAnimInstance::StaticClass();
              iVar10 = (int)pUVar13->_padding_;
              if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar10) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar10 * 8)
                  != &pUVar13->_padding_)) {
                pFVar15 = GetTypeName<UAnimInstance>(&local_80);
                if ((pFVar15->Data).ArrayNum == 0) {
                  pwVar21 = L"";
                }
                else {
                  pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                }
                pFVar15 = GetFullNameForCastLogError<UObject>(&local_70,pUVar5);
                if ((pFVar15->Data).ArrayNum != 0) {
                  pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                }
                    /* WARNING: Subroutine does not return */
                CastLogError(pwVar22,pwVar21);
              }
              pFVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar5,0);
              this->DefaultLinkedInstanceInputNode = pFVar14;
              FVar12 = FAnimNode_LinkedInputPose::DefaultInputPoseName;
              goto LAB_147466bd4;
            }
          }
          iVar10 = piVar20[-10];
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 1;
        } while ((int)uVar17 < iVar10);
        piVar20 = piVar20 + 0x1e;
      }
      else {
LAB_147466bd4:
        piVar20 = piVar20 + 0x1e;
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeInputProxy @ 147466ce0

void __cdecl
FAnimInstanceProxy::InitializeInputProxy(FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  if ((param_2 != (UAnimInstance *)0x0) && (param_1 != (FAnimInstanceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147466ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 8))();
    return;
  }
  return;
}

// InitializeObjects @ 147466d00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::InitializeObjects(FAnimInstanceProxy *this,UAnimInstance *param_1)

{
  FAnimUpdateRateParameters *pFVar1;
  bool bVar2;
  ushort uVar3;
  USkeletalMeshComponent *this_00;
  UAnimInstance *this_01;
  FAnimInstanceProxy *pFVar4;
  USkeletalMesh *pUVar5;
  USkeleton *pUVar6;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::InitializeObjects");
  this_00 = UAnimInstance::GetSkelMeshComponent(param_1);
  this->SkeletalMeshComponent = this_00;
  this_01 = USkeletalMeshComponent::GetAnimInstance(this_00);
  if (this_01 != (UAnimInstance *)0x0) {
    pFVar4 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(this_01);
    this->MainInstanceProxy = pFVar4;
    this->field_0x801 =
         ((byte)param_1->field_0x31 >> 2 ^ this->field_0x801) & 0x10 ^ this->field_0x801;
  }
  pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(this->SkeletalMeshComponent);
  pUVar6 = (USkeleton *)0x0;
  if (pUVar5 != (USkeletalMesh *)0x0) {
    pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(this->SkeletalMeshComponent);
    pUVar6 = (USkeleton *)(**(code **)(pUVar5->_padding_ + 0x408))(pUVar5);
  }
  this->Skeleton = pUVar6;
  pFVar1 = (FAnimUpdateRateParameters *)this->SkeletalMeshComponent->_padding_;
  this->NumUroSkippedFrames_Update = 0;
  this->NumUroSkippedFrames_Eval = 0;
  if (pFVar1 != (FAnimUpdateRateParameters *)0x0) {
    bVar2 = USkinnedMeshComponent::ShouldUseUpdateRateOptimizations
                      ((USkinnedMeshComponent *)this->SkeletalMeshComponent);
    if (bVar2) {
      this->NumUroSkippedFrames_Update = (short)pFVar1->UpdateRate + -1;
      if ((pFVar1->OptimizeMode != LookAheadMode) && (pFVar1->EvaluationRate < 2))
      goto LAB_147466e0a;
      uVar3 = (short)pFVar1->EvaluationRate - 1;
    }
    else {
      if ((this->SkeletalMeshComponent->_padding_ & 0x400000) == 0) goto LAB_147466e0a;
      uVar3 = (ushort)*(byte *)((longlong)&this->SkeletalMeshComponent->_padding_ + 5);
      this->NumUroSkippedFrames_Update = uVar3;
    }
    this->NumUroSkippedFrames_Eval = uVar3;
  }
LAB_147466e0a:
  (this->UpdateCounter).SkipFrames = this->NumUroSkippedFrames_Update;
  (this->EvaluationCounter).SkipFrames = this->NumUroSkippedFrames_Eval;
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeRootNode @ 147466e40

void __thiscall FAnimInstanceProxy::InitializeRootNode(FAnimInstanceProxy *this,bool param_1)

{
  int *piVar1;
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  UAnimInstance *pUVar14;
  undefined8 *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::InitializeRootNode");
  InitializeCachedClassData(this);
  if (this->AnimClassInterface == (IAnimClassInterface *)0x0) {
    local_50 = (longlong *)0x0;
    local_48 = 0;
    (**(code **)(*(longlong *)this + 0x48))(this,&local_50);
    iVar8 = (int)local_48;
    plVar12 = local_50 + (int)local_48;
    plVar13 = local_50;
    while( true ) {
      if ((int)local_48 != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FAnimNode_Base_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (plVar13 == plVar12) break;
      plVar4 = (longlong *)*plVar13;
      if (plVar4 != (longlong *)0x0) {
        local_58 = plVar4;
        cVar9 = (**(code **)(*plVar4 + 0x68))();
        if (cVar9 != '\0') {
          pcVar5 = *(code **)(*local_58 + 0x98);
          pUVar14 = CastChecked<UAnimInstance,UObject>(this->AnimInstanceObject);
          (*pcVar5)(local_58,this,pUVar14);
        }
        cVar9 = (**(code **)(*local_58 + 0x38))();
        if (cVar9 != '\0') {
          pTVar2 = &this->GameThreadPreUpdateNodes;
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar6 <= (FScriptContainerElement *)&local_58) &&
             ((FScriptContainerElement *)&local_58 <
              pFVar6 + (longlong)(this->GameThreadPreUpdateNodes).ArrayMax * 8)) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar11 = (this->GameThreadPreUpdateNodes).ArrayNum;
          piVar1 = &(this->GameThreadPreUpdateNodes).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->GameThreadPreUpdateNodes).ArrayNum = iVar11 + 1;
          *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_58;
        }
        cVar9 = (**(code **)(*local_58 + 0x48))();
        if (cVar9 != '\0') {
          pTVar2 = &this->DynamicResetNodes;
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar6 <= (FScriptContainerElement *)&local_58) &&
             ((FScriptContainerElement *)&local_58 <
              pFVar6 + (longlong)(this->DynamicResetNodes).ArrayMax * 8)) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar11 = (this->DynamicResetNodes).ArrayNum;
          piVar1 = &(this->DynamicResetNodes).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->DynamicResetNodes).ArrayNum = iVar11 + 1;
          *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_58;
        }
      }
      plVar13 = plVar13 + 1;
    }
    if (local_50 != (longlong *)0x0) {
      FMemory::Free(local_50);
    }
  }
  else {
    CastChecked<UAnimInstance,UObject>(this->AnimInstanceObject);
    plVar12 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x60))();
    puVar15 = (undefined8 *)*plVar12;
    lVar7 = plVar12[1];
    puVar3 = puVar15 + (int)lVar7;
    while( true ) {
      if ((int)plVar12[1] != (int)lVar7) {
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar15 == puVar3) break;
      plVar13 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)*puVar15,this->AnimInstanceObject,0);
      (**(code **)(*plVar13 + 0x98))(plVar13,this);
      puVar15 = puVar15 + 1;
    }
  }
  if (param_1) {
    this->bDeferRootNodeInitialization = '\x01';
  }
  else {
    InitializeRootNode_WithRoot(this,this->RootNode);
  }
  this->bInitializeSubsystems = '\x01';
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeRootNode_WithRoot @ 147467160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimInstanceProxy::InitializeRootNode_WithRoot(FAnimInstanceProxy *this,FAnimNode_Base *param_1)

{
  short *psVar1;
  undefined1 auStackY_ce8 [32];
  FLLMScope local_cb8 [2];
  FMemScope local_cb0;
  FAnimationBaseContext local_ca8;
  FScopedAnimGraphTrace local_c88;
  undefined1 local_c70 [320];
  undefined4 local_b30;
  FMessageStack local_b28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_ce8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name381,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_cb8,LLMScope_Name381,false,None,Default,true);
  FMemScope::FMemScope(&local_cb0,&LLMScope_Name381,true);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::InitializeRootNode_WithRoot");
  if (param_1 != (FAnimNode_Base *)0x0) {
    FAnimationUpdateSharedContext::FAnimationUpdateSharedContext
              ((FAnimationUpdateSharedContext *)local_c70);
    FAnimationBaseContext::FAnimationBaseContext
              (&local_ca8,this,(FAnimationUpdateSharedContext *)local_c70);
    if (param_1 == this->RootNode) {
      psVar1 = &(this->InitializationCounter).Counter;
      *psVar1 = *psVar1 + 1;
      (this->InitializationCounter).LastSyncronizedFrame = GFrameCounter;
      if ((this->InitializationCounter).Counter == -1) {
        (this->InitializationCounter).Counter = 0;
      }
      FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace
                (&local_c88,(FAnimationInitializeContext *)&local_ca8);
      (**(code **)param_1->_padding_)(param_1,&local_ca8);
      FAnimTrace::FScopedAnimGraphTrace::~FScopedAnimGraphTrace(&local_c88);
    }
    else {
      (**(code **)param_1->_padding_)(param_1,&local_ca8);
    }
    UE::Anim::FMessageStack::~FMessageStack(&local_b28);
    local_b30 = 0;
    if ((void *)local_c70._312_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c70._312_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *)local_c70);
  }
  FStatsHierarchical::EndMeasurement();
  FMemScope::~FMemScope(&local_cb0);
  FLLMScope::~FLLMScope(local_cb8);
  return;
}

// IsSlotNodeRelevantForNotifies @ 147467860

bool __thiscall
FAnimInstanceProxy::IsSlotNodeRelevantForNotifies(FAnimInstanceProxy *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  
  puVar7 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->SlotNameToTrackerIndex,*param_1);
  if (puVar7 != (uint *)0x0) {
    iVar8 = 1 - this->BufferWriteIndex;
    uVar1 = *puVar7;
    uVar6 = 0;
    if ((int)uVar1 < this->SlotWeightTracker[iVar8].ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar2 = this->SlotWeightTracker[iVar8].AllocatorInstance.Data;
    if ((pFVar2[(longlong)(int)uVar1 * 0xc + 8] != (FScriptContainerElement)0x0) ||
       (pFVar2[(longlong)(int)uVar1 * 0xc + 9] != (FScriptContainerElement)0x0)) {
      return true;
    }
  }
  return false;
}

// IsSyncGroupBetweenMarkers @ 147467920

bool __thiscall
FAnimInstanceProxy::IsSyncGroupBetweenMarkers
          (FAnimInstanceProxy *this,FName param_1,FName param_2,FName param_3,bool param_4)

{
  bool bVar1;
  
  bVar1 = UE::Anim::FAnimSync::IsSyncGroupBetweenMarkers
                    (&this->Sync,param_1,param_2,param_3,param_4);
  return bVar1;
}

// IsSyncGroupValid @ 147467990

bool __thiscall FAnimInstanceProxy::IsSyncGroupValid(FAnimInstanceProxy *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = UE::Anim::FAnimSync::IsSyncGroupValid(&this->Sync,param_1);
  return bVar1;
}

// LogMessage @ 147467e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimInstanceProxy::LogMessage
          (FAnimInstanceProxy *this,FName param_1,TSharedRef<FTokenizedMessage,1> *param_2)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  FText *this_00;
  FString *pFVar7;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 auStackY_178 [32];
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FText local_f8;
  FSHA1 local_e8;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = FTokenizedMessage::ToText(param_2->Object,&local_f8);
  pFVar7 = FText::ToString(this_00);
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = (pFVar7->Data).ArrayNum;
  lVar11 = (longlong)local_100;
  pFVar10 = (pFVar7->Data).AllocatorInstance.Data;
  if (local_100 == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_100,0,&local_108,local_100,&local_fc);
    memcpy(local_108.Data,pFVar10,lVar11 * 2);
  }
  iVar6 = local_100;
  _Src.Data = local_108.Data;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = local_100;
  if (local_100 == 0) {
    local_10c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_100,0,&local_118,local_100,&local_10c);
    memcpy(local_118.Data,_Src.Data,(longlong)iVar6 * 2);
  }
  FSHA1::FSHA1(&local_e8);
  FSHA1::Update(&local_e8,(uchar *)local_118.Data,(ulonglong)(uint)(local_110 * 2));
  FSHA1::Final(&local_e8);
  FSHA1::GetHash(&local_e8,(uchar *)&local_58);
  local_128 = local_58 ^ local_48;
  uStack_124 = local_54;
  uStack_120 = local_50;
  uStack_11c = local_4c;
  FSHA1::~FSHA1(&local_e8);
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  pTVar2 = &this->PreviouslyLoggedMessages;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  for (pFVar9 = pFVar10;
      pFVar9 != pFVar10 + (longlong)(this->PreviouslyLoggedMessages).ArrayNum * 0x10;
      pFVar9 = pFVar9 + 0x10) {
    if (((uStack_11c == *(uint *)(pFVar9 + 0xc) && uStack_120 == *(uint *)(pFVar9 + 8)) &&
        uStack_124 == *(uint *)(pFVar9 + 4)) && local_128 == *(uint *)pFVar9) {
      return;
    }
  }
  if (((pFVar10 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       pFVar10 + (longlong)(this->PreviouslyLoggedMessages).ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->PreviouslyLoggedMessages).ArrayNum;
  piVar1 = &(this->PreviouslyLoggedMessages).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PreviouslyLoggedMessages).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar10 = CONCAT44(uStack_124,local_128);
  *(ulonglong *)(pFVar10 + 8) = CONCAT44(uStack_11c,uStack_120);
  pTVar8 = TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->LoggedMessagesMap,param_1);
  if (pTVar8 != (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar6 = pTVar8->ArrayNum;
    if (iVar6 == pTVar8->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar6 + 1;
    pFVar10 = (pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(FTokenizedMessage **)pFVar10 = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// LogMessage @ 147468160

void __thiscall
FAnimInstanceProxy::LogMessage(FAnimInstanceProxy *this,FName param_1,Type param_2,FText *param_3)

{
  TSharedRef<FTokenizedMessage,1> *pTVar1;
  TSharedRef<FTokenizedMessage,1> local_18;
  
  pTVar1 = FTokenizedMessage::Create(&local_18,param_2,param_3);
  LogMessage(this,param_1,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// MakeBlendSpaceTickRecord @ 1474681b0

void __thiscall
FAnimInstanceProxy::MakeBlendSpaceTickRecord
          (FAnimInstanceProxy *this,FAnimTickRecord *param_1,UBlendSpace *param_2,
          TVector<double> *param_3,TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_4,
          FBlendFilter *param_5,bool param_6,float param_7,float param_8,float *param_9,
          FMarkerTickRecord *param_10)

{
  double dVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  (param_1->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_2;
  (param_1->field13_0x40).BlendSpace.BlendSpacePositionX = (float)dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (param_1->field13_0x40).BlendSpace.BlendSampleDataCache = param_4;
  (param_1->field13_0x40).BlendSpace.BlendFilter = param_5;
  param_1->TimeAccumulator = param_9;
  param_1->MarkerTickRecord = param_10;
  param_1->bLooping = param_6;
  (param_1->field13_0x40).BlendSpace.bTeleportToTime = false;
  param_1->bIsEvaluator = false;
  param_1->PlayRateMultiplier = param_7;
  (param_1->field13_0x40).BlendSpace.BlendSpacePositionY = (float)dVar1;
  param_1->EffectiveBlendWeight = param_8;
  return;
}

// MakePoseAssetTickRecord @ 147468480

void __thiscall
FAnimInstanceProxy::MakePoseAssetTickRecord
          (FAnimInstanceProxy *this,FAnimTickRecord *param_1,UPoseAsset *param_2,float param_3)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UPoseAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
    param_1->EffectiveBlendWeight = param_3;
    (param_1->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_2;
    return;
  }
  param_1->EffectiveBlendWeight = param_3;
  (param_1->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_2;
  return;
}

// MakeSequenceTickRecord @ 1474684f0

void __thiscall
FAnimInstanceProxy::MakeSequenceTickRecord
          (FAnimInstanceProxy *this,FAnimTickRecord *param_1,UAnimSequenceBase *param_2,bool param_3
          ,float param_4,float param_5,float *param_6,FMarkerTickRecord *param_7)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_2;
  param_1->TimeAccumulator = param_6;
  param_1->bLooping = param_3;
  param_1->MarkerTickRecord = param_7;
  param_1->PlayRateMultiplier = param_4;
  param_1->EffectiveBlendWeight = param_5;
  param_1->bIsEvaluator = false;
  return;
}

// OnPreUpdateLODChanged @ 14746ba20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::OnPreUpdateLODChanged(FAnimInstanceProxy *this,int param_1,int param_2)

{
  int *piVar1;
  TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  FAnimNode_Base *local_18;
  FAnimNode_Base *local_10;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::OnPreUpdateLODChanged");
  if (param_1 < param_2) {
    uVar8 = 0;
    if (0 < (this->GameThreadPreUpdateNodes).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->GameThreadPreUpdateNodes).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_18 = *(FAnimNode_Base **)
                    ((this->GameThreadPreUpdateNodes).AllocatorInstance.Data + lVar9);
        if ((local_18 != (FAnimNode_Base *)0x0) &&
           (bVar5 = FAnimNode_Base::IsLODEnabled(local_18,this), !bVar5)) {
          pTVar2 = &this->LODDisabledGameThreadPreUpdateNodes;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
             (((FScriptContainerElement *)&local_18 <
               pFVar3 + (longlong)(this->LODDisabledGameThreadPreUpdateNodes).ArrayMax * 8 &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum;
          piVar1 = &(this->LODDisabledGameThreadPreUpdateNodes).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum = iVar7 + 1;
          *(FAnimNode_Base **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18;
          TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->GameThreadPreUpdateNodes,uVar8,No);
          uVar8 = uVar8 - 1;
          lVar9 = lVar9 + -8;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < (this->GameThreadPreUpdateNodes).ArrayNum);
    }
  }
  else {
    uVar8 = 0;
    if (0 < (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_10 = *(FAnimNode_Base **)
                    ((this->LODDisabledGameThreadPreUpdateNodes).AllocatorInstance.Data + lVar9);
        if ((local_10 != (FAnimNode_Base *)0x0) &&
           (bVar5 = FAnimNode_Base::IsLODEnabled(local_10,this), bVar5)) {
          pTVar2 = &this->GameThreadPreUpdateNodes;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar3 <= (FScriptContainerElement *)&local_10) &&
             (((FScriptContainerElement *)&local_10 <
               pFVar3 + (longlong)(this->GameThreadPreUpdateNodes).ArrayMax * 8 &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (this->GameThreadPreUpdateNodes).ArrayNum;
          piVar1 = &(this->GameThreadPreUpdateNodes).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->GameThreadPreUpdateNodes).ArrayNum = iVar7 + 1;
          *(FAnimNode_Base **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_10;
          TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->LODDisabledGameThreadPreUpdateNodes,uVar8,No);
          uVar8 = uVar8 - 1;
          lVar9 = lVar9 + -8;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < (this->LODDisabledGameThreadPreUpdateNodes).ArrayNum);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// PostEvaluate @ 14746ef40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAnimInstanceProxy::PostEvaluate(FAnimInstanceProxy *this,UAnimInstance *param_1)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  UWorld *pUVar3;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TSharedRef<FTokenizedMessage,1> *pTVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FName local_res8;
  FMessageLog local_38;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::PostEvaluate");
  (**(code **)(*(longlong *)this + 0x88))(this);
  pUVar2 = UAnimInstance::GetSkelMeshComponent(param_1);
  pUVar3 = (UWorld *)pUVar2->_padding_;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar2);
  }
  pUVar2 = UAnimInstance::GetSkelMeshComponent(param_1);
  FlushQueuedDebugDrawItems(this,(AActor *)pUVar2->_padding_,pUVar3);
  local_res8 = NAME_AnimBlueprintLog;
  FMessageLog::FMessageLog(&local_38,&local_res8);
  pTVar4 = TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->LoggedMessagesMap,NAME_Evaluate);
  if (pTVar4 != (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TSharedRef<FTokenizedMessage,1> *)(pTVar4->AllocatorInstance).Data;
    iVar1 = pTVar4->ArrayNum;
    pTVar6 = pTVar5 + iVar1;
    while( true ) {
      if (pTVar4->ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FTokenizedMessage,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pTVar5 == pTVar6) break;
      FMessageLog::AddMessage(&local_38,pTVar5);
      pTVar5 = pTVar5 + 1;
    }
  }
  FMessageLog::~FMessageLog(&local_38);
  FStatsHierarchical::EndMeasurement();
  return;
}

// PostUpdate @ 14746fc40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAnimInstanceProxy::PostUpdate(FAnimInstanceProxy *this,UAnimInstance *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  FAnimInstanceProxy *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  USkeletalMeshComponent *pUVar13;
  UWorld *pUVar14;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  FScriptContainerElement FVar17;
  TSharedRef<FTokenizedMessage,1> *pTVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  TSharedRef<FTokenizedMessage,1> *pTVar22;
  int iVar23;
  undefined1 *puVar24;
  int iVar25;
  float fVar26;
  undefined1 local_res8 [8];
  UAnimInstance *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_bc;
  FName local_b0;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FMessageLog local_78;
  
  local_res10 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::PostUpdate");
  if (((this->bUseMainInstanceMontageEvaluationData != '\0') &&
      (this_00 = this->MainInstanceProxy, this_00 != (FAnimInstanceProxy *)0x0)) &&
     (this_00 != this)) {
    local_a8 = &this->SlotNameToTrackerIndex;
    iVar23 = 0;
    puVar1 = &(this->SlotNameToTrackerIndex).field_0x10;
    iVar11 = *(int *)&(this->SlotNameToTrackerIndex).field_0x28;
    iVar25 = 0;
    uVar9 = 1;
    iVar10 = 0;
    if (iVar11 != 0) {
      puVar12 = *(uint **)&(this->SlotNameToTrackerIndex).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)puVar1;
      }
      uVar21 = *puVar12;
      while (uVar21 == 0) {
        lVar16 = (longlong)iVar23;
        iVar25 = iVar25 + 0x20;
        iVar23 = iVar23 + 1;
        iVar10 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_14746fd2d;
        uVar21 = puVar12[lVar16 + 1];
      }
      uVar9 = -uVar21 & uVar21;
      uVar3 = (ulonglong)uVar9 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar10 = iVar25 + -1 + (int)lVar16;
      if (iVar11 < iVar10) {
        iVar10 = iVar11;
      }
    }
LAB_14746fd2d:
    uVar21 = *(uint *)&(this->SlotNameToTrackerIndex).field_0x28;
    uVar19 = uVar21 & 0xffffffe0;
    TStack_a0._padding_ = CONCAT44(uVar9,iVar23);
    TStack_a0.CurrentBitIndex = iVar10;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    iVar23 = (int)uVar21 >> 5;
    TStack_a0._28_4_ = iVar10;
    TStack_a0.BaseBitIndex = iVar25;
    uStack_80 = CONCAT44(uStack_bc,
                         *(int *)&(this->SlotNameToTrackerIndex).field_0x8 -
                         *(int *)&(this->SlotNameToTrackerIndex).field_0x34);
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar21 < 0) || (iVar11 < (int)uVar21)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(this->SlotNameToTrackerIndex).field_0x28;
    if (uVar21 != uVar9) {
      puVar24 = *(undefined1 **)&(this->SlotNameToTrackerIndex).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar1;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar23 * 4);
      while (uVar21 == 0) {
        lVar16 = (longlong)iVar23;
        uVar19 = uVar19 + 0x20;
        iVar23 = iVar23 + 1;
        uVar21 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_14746fe30;
        uVar21 = *(uint *)(puVar24 + lVar16 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar21 = (int)lVar16 + -1 + uVar19;
      if ((int)uVar9 < (int)uVar21) {
        uVar21 = uVar9;
      }
    }
LAB_14746fe30:
    while( true ) {
      pTVar7 = local_a8;
      if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_a0.CurrentBitIndex == uVar21) &&
          (TStack_a0.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->SlotNameToTrackerIndex).field_0x10)) &&
         (param_1 = local_res10, pTVar7 == &this->SlotNameToTrackerIndex)) break;
      lVar16 = *(longlong *)pTVar7;
      pFVar2 = (FName *)(lVar16 + (longlong)TStack_a0.CurrentBitIndex * 0x14);
      puVar12 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)&this_00->SlotNameToTrackerIndex,
                               *(FName *)(lVar16 + (longlong)TStack_a0.CurrentBitIndex * 0x14));
      if (puVar12 == (uint *)0x0) {
        RegisterSlotNodeWithAnimInstance(this_00,pFVar2);
        puVar12 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  *)&this_00->SlotNameToTrackerIndex,*pFVar2);
      }
      uVar9 = pFVar2[1].ComparisonIndex.Value;
      lVar16 = (longlong)(int)uVar9;
      iVar11 = 1 - this->BufferWriteIndex;
      uVar19 = 0;
      if ((int)uVar9 < this->SlotWeightTracker[iVar11].ArrayNum) {
        uVar19 = ~uVar9 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *puVar12;
      lVar20 = (longlong)(int)uVar9;
      iVar23 = this_00->BufferWriteIndex;
      pFVar4 = this->SlotWeightTracker[iVar11].AllocatorInstance.Data;
      uVar19 = 0;
      if ((int)uVar9 < this_00->SlotWeightTracker[iVar23].ArrayNum) {
        uVar19 = ~uVar9 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = this_00->SlotWeightTracker[iVar23].AllocatorInstance.Data;
      FVar17 = pFVar5[lVar20 * 0xc + 8];
      fVar26 = *(float *)(pFVar4 + lVar16 * 0xc);
      if (*(float *)(pFVar4 + lVar16 * 0xc) <= *(float *)(pFVar5 + lVar20 * 0xc)) {
        fVar26 = *(float *)(pFVar5 + lVar20 * 0xc);
      }
      *(float *)(pFVar5 + lVar20 * 0xc) = fVar26;
      fVar26 = *(float *)(pFVar4 + lVar16 * 0xc + 4);
      if (*(float *)(pFVar4 + lVar16 * 0xc + 4) <= *(float *)(pFVar5 + lVar20 * 0xc + 4)) {
        fVar26 = *(float *)(pFVar5 + lVar20 * 0xc + 4);
      }
      *(float *)(pFVar5 + lVar20 * 0xc + 4) = fVar26;
      if ((FVar17 == (FScriptContainerElement)0x0) &&
         (pFVar4[lVar16 * 0xc + 8] == (FScriptContainerElement)0x0)) {
        FVar17 = (FScriptContainerElement)0x0;
      }
      else {
        FVar17 = (FScriptContainerElement)0x1;
      }
      pFVar5[lVar20 * 0xc + 8] = FVar17;
      if ((pFVar5[lVar20 * 0xc + 9] == (FScriptContainerElement)0x0) &&
         (pFVar4[lVar16 * 0xc + 9] == (FScriptContainerElement)0x0)) {
        FVar17 = (FScriptContainerElement)0x0;
      }
      else {
        FVar17 = (FScriptContainerElement)0x1;
      }
      pFVar5[lVar20 * 0xc + 9] = FVar17;
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    }
  }
  FAnimNotifyQueue::Append(&param_1->NotifyQueue,&this->NotifyQueue);
  FAnimNotifyQueue::ApplyMontageNotifies(&param_1->NotifyQueue,this);
  pUVar13 = UAnimInstance::GetSkelMeshComponent(param_1);
  pUVar14 = (UWorld *)pUVar13->_padding_;
  if (pUVar14 == (UWorld *)0x0) {
    pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar13);
  }
  pUVar13 = UAnimInstance::GetSkelMeshComponent(param_1);
  FlushQueuedDebugDrawItems(this,(AActor *)pUVar13->_padding_,pUVar14);
  local_b0 = NAME_AnimBlueprintLog;
  FMessageLog::FMessageLog(&local_78,&local_b0);
  pTVar15 = TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->LoggedMessagesMap,NAME_Update);
  if ((pTVar15 != (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0) ||
     (bVar8 = `FAnimInstanceProxy::PostUpdate'::__l14::<lambda_1>::operator()(local_res18), bVar8))
  {
    iVar11 = pTVar15->ArrayNum;
    pTVar18 = (TSharedRef<FTokenizedMessage,1> *)(pTVar15->AllocatorInstance).Data;
    pTVar22 = pTVar18 + iVar11;
    while( true ) {
      if (pTVar15->ArrayNum != iVar11) {
        `TCheckedPointerIterator<TSharedRef<FTokenizedMessage,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pTVar18 == pTVar22) break;
      FMessageLog::AddMessage(&local_78,pTVar18);
      pTVar18 = pTVar18 + 1;
    }
  }
  FMessageLog::~FMessageLog(&local_78);
  FStatsHierarchical::EndMeasurement();
  return;
}

// PreEvaluateAnimation @ 147470b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::PreEvaluateAnimation(FAnimInstanceProxy *this,UAnimInstance *param_1)

{
  USkeletalMeshComponent *pUVar1;
  longlong lVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  double dVar4;
  FName FVar5;
  char cVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 auStackY_a8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::PreEvaluateAnimation");
  (**(code **)(*(longlong *)this + 0x80))(this,param_1);
  if (this->SkeletalMeshComponent != (USkeletalMeshComponent *)0x0) {
    cVar6 = (**(code **)(this->SkeletalMeshComponent->_padding_ + 0xc30))();
    if (cVar6 != '\0') {
      pUVar1 = this->SkeletalMeshComponent;
      dVar4 = (double)pUVar1->_padding_;
      (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
           (((TTransform<double> *)&pUVar1->_padding_)->Rotation).XY.m128d_f64[0];
      (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar4;
      dVar4 = (double)pUVar1->_padding_;
      (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
           ((__m128d *)&pUVar1->_padding_)->m128d_f64[0];
      (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (double)pUVar1->_padding_;
      (this->ComponentTransform).Translation.XY.m128d_f64[0] =
           (((VectorRegister4Double *)&pUVar1->_padding_)->XY).m128d_f64[0];
      (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar4;
      dVar4 = (double)pUVar1->_padding_;
      (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
           ((__m128d *)&pUVar1->_padding_)->m128d_f64[0];
      (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (double)pUVar1->_padding_;
      (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
           (((VectorRegister4Double *)&pUVar1->_padding_)->XY).m128d_f64[0];
      (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar4;
      dVar4 = (double)pUVar1->_padding_;
      (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
           ((__m128d *)&pUVar1->_padding_)->m128d_f64[0];
      (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
      pTVar8 = USceneComponent::GetRelativeTransform((USceneComponent *)pUVar1,&local_78);
      dVar4 = (pTVar8->Rotation).XY.m128d_f64[1];
      (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] =
           (pTVar8->Rotation).XY.m128d_f64[0];
      (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] =
           (pTVar8->Rotation).ZW.m128d_f64[0];
      (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).XY.m128d_f64[1];
      (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
           (pTVar8->Translation).XY.m128d_f64[0];
      (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).ZW.m128d_f64[1];
      (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
           (pTVar8->Translation).ZW.m128d_f64[0];
      (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0]
      ;
      (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      pUVar1 = this->SkeletalMeshComponent;
      (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0]
      ;
      (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
      lVar2 = pUVar1->_padding_;
      if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x1b8), lVar2 == 0)) {
        pTVar8 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar8 = (TTransform<double> *)(lVar2 + 0x1f0);
      }
      dVar4 = (pTVar8->Rotation).XY.m128d_f64[1];
      (this->ActorTransform).Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (this->ActorTransform).Rotation.XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (this->ActorTransform).Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (this->ActorTransform).Rotation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).XY.m128d_f64[1];
      (this->ActorTransform).Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
      (this->ActorTransform).Translation.XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Translation).ZW.m128d_f64[1];
      (this->ActorTransform).Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
      (this->ActorTransform).Translation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (this->ActorTransform).Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (this->ActorTransform).Scale3D.XY.m128d_f64[1] = dVar4;
      dVar4 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      (this->ActorTransform).Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      (this->ActorTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
    }
  }
  FVar5 = NAME_Evaluate;
  uVar7 = ::GetTypeHash(NAME_Evaluate.ComparisonIndex.Value);
  pTVar9 = TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->LoggedMessagesMap,uVar7 + FVar5.Number,&NAME_Evaluate);
  pTVar3 = (TSharedRef<FTokenizedMessage,1> *)(pTVar9->AllocatorInstance).Data;
  if (pTVar9->ArrayMax < 0) {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>(pTVar3,pTVar9->ArrayNum);
    pTVar9->ArrayNum = 0;
    if (pTVar9->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
    }
  }
  else {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>(pTVar3,pTVar9->ArrayNum);
    pTVar9->ArrayNum = 0;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// PreUpdate @ 147470d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimInstanceProxy::PreUpdate(FAnimInstanceProxy *this,UAnimInstance *param_1,float param_2)

{
  int *piVar1;
  uchar uVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  USkeletalMeshComponent *pUVar5;
  FQueuedDrawDebugItem *pFVar6;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  FName FVar12;
  byte bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  UWorld *this_00;
  AWorldSettings *pAVar18;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar19;
  TTransform<double> *pTVar20;
  uint uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [4];
  undefined8 local_d4;
  uint local_cc;
  UAnimInstance *local_c8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c8 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::PreUpdate");
  (**(code **)(*(longlong *)this + 0x80))(this);
  pUVar5 = this->SkeletalMeshComponent;
  if ((pUVar5 == (USkeletalMeshComponent *)0x0) ||
     ((this_00 = (UWorld *)pUVar5->_padding_, this_00 == (UWorld *)0x0 &&
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar5),
      this_00 == (UWorld *)0x0)))) {
    this->CurrentDeltaSeconds = param_2;
    fVar26 = __real_3f800000;
  }
  else {
    pAVar18 = UWorld::GetWorldSettings(this_00,false,true);
    this->CurrentDeltaSeconds = param_2;
    fVar26 = __real_3f800000;
    if (pAVar18 != (AWorldSettings *)0x0) {
      fVar26 = (float)(**(code **)(pAVar18->_padding_ + 0x790))(pAVar18);
    }
  }
  this->CurrentTimeDilation = fVar26;
  this->RootMotionMode = (uint)(param_1->RootMotionMode).Value;
  uVar2 = (param_1->RootMotionMode).Value;
  if ((uVar2 == '\x02') || (uVar2 == '\x01')) {
    bVar13 = 2;
  }
  else {
    bVar13 = 0;
  }
  this->bShouldExtractRootMotion = '\0';
  this->field_0x801 = this->field_0x801 | bVar13;
  if (this->SkeletalMeshComponent != (USkeletalMeshComponent *)0x0) {
    iVar4 = this->LODLevel;
    iVar15 = (**(code **)(*(longlong *)param_1 + 0x360))(param_1);
    this->LODLevel = iVar15;
    if (iVar15 != iVar4) {
      OnPreUpdateLODChanged(this,iVar4,iVar15);
    }
  }
  FAnimNotifyQueue::Reset(&this->NotifyQueue,this->SkeletalMeshComponent);
  piVar1 = &(this->QueuedDrawDebugItems).ArrayMax;
  pFVar6 = (FQueuedDrawDebugItem *)(this->QueuedDrawDebugItems).AllocatorInstance.Data;
  iVar4 = (this->QueuedDrawDebugItems).ArrayNum;
  if ((this->QueuedDrawDebugItems).ArrayMax < 0) {
    DestructItems<FQueuedDrawDebugItem,int>(pFVar6,iVar4);
    (this->QueuedDrawDebugItems).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,&(this->QueuedDrawDebugItems).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FQueuedDrawDebugItem,int>(pFVar6,iVar4);
    (this->QueuedDrawDebugItems).ArrayNum = 0;
  }
  FVar12 = NAME_Update;
  uVar22 = 0;
  uVar16 = ::GetTypeHash(NAME_Update.ComparisonIndex.Value);
  pTVar19 = TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->LoggedMessagesMap,uVar16 + FVar12.Number,&NAME_Update);
  pTVar7 = (TSharedRef<FTokenizedMessage,1> *)(pTVar19->AllocatorInstance).Data;
  uVar16 = 0;
  if (pTVar19->ArrayMax < 0) {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>(pTVar7,pTVar19->ArrayNum);
    pTVar19->ArrayNum = 0;
    if (pTVar19->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar19->AllocatorInstance,0,&pTVar19->ArrayMax);
    }
  }
  else {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>(pTVar7,pTVar19->ArrayNum);
    pTVar19->ArrayNum = 0;
  }
  iVar4 = this->BufferWriteIndex;
  iVar15 = this->SlotWeightTracker[iVar4].ArrayNum;
  uVar24 = uVar22;
  if (0 < iVar15) {
    do {
      uVar21 = (uint)uVar22;
      local_d4 = 0;
      local_cc = local_cc & 0xffff0000;
      uVar25 = ~uVar21 >> 0x1f;
      uVar17 = uVar16;
      if ((int)uVar21 < iVar15) {
        uVar17 = uVar25;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = this->SlotWeightTracker[iVar4].AllocatorInstance.Data;
      *(undefined8 *)(pFVar8 + uVar24) = local_d4;
      *(uint *)(pFVar8 + uVar24 + 8) = local_cc;
      uVar17 = uVar16;
      if ((int)uVar21 < this->SlotWeightTracker[1 - iVar4].ArrayNum) {
        uVar17 = uVar25;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar3 = this->SlotWeightTracker[1 - iVar4].AllocatorInstance.Data[uVar24 + 8];
      uVar17 = uVar16;
      if ((int)uVar21 < this->SlotWeightTracker[iVar4].ArrayNum) {
        uVar17 = uVar25;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar22 = (ulonglong)(uVar21 + 1);
      this->SlotWeightTracker[iVar4].AllocatorInstance.Data[uVar24 + 9] = FVar3;
      iVar15 = this->SlotWeightTracker[iVar4].ArrayNum;
      param_1 = local_c8;
      uVar24 = uVar24 + 0xc;
    } while ((int)(uVar21 + 1) < iVar15);
  }
  UE::Anim::FAnimSync::Reset(&this->Sync);
  memset(this->StateWeightArrays[this->BufferWriteIndex].AllocatorInstance.Data,0,
         (longlong)this->StateWeightArrays[this->BufferWriteIndex].ArrayNum << 2);
  memset(this->MachineWeightArrays[this->BufferWriteIndex].AllocatorInstance.Data,0,
         (longlong)this->MachineWeightArrays[this->BufferWriteIndex].ArrayNum << 2);
  pUVar5 = this->SkeletalMeshComponent;
  dVar11 = (double)pUVar5->_padding_;
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (((TTransform<double> *)&pUVar5->_padding_)->Rotation).XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (double)pUVar5->_padding_;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       ((__m128d *)&pUVar5->_padding_)->m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (double)pUVar5->_padding_;
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (((VectorRegister4Double *)&pUVar5->_padding_)->XY).m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (double)pUVar5->_padding_;
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
       ((__m128d *)&pUVar5->_padding_)->m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (double)pUVar5->_padding_;
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (((VectorRegister4Double *)&pUVar5->_padding_)->XY).m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (double)pUVar5->_padding_;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = ((__m128d *)&pUVar5->_padding_)->m128d_f64[0]
  ;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar11;
  pTVar20 = USceneComponent::GetRelativeTransform((USceneComponent *)pUVar5,&local_b8);
  dVar11 = (pTVar20->Rotation).XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] = (pTVar20->Rotation).XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Rotation).ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] = (pTVar20->Rotation).ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Translation).XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
       (pTVar20->Translation).XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Translation).ZW.m128d_f64[1];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
       (pTVar20->Translation).ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Scale3D).XY.m128d_f64[1];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] = (pTVar20->Scale3D).XY.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Scale3D).ZW.m128d_f64[1];
  pUVar5 = this->SkeletalMeshComponent;
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] = (pTVar20->Scale3D).ZW.m128d_f64[0];
  (this->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar11;
  lVar9 = pUVar5->_padding_;
  if ((lVar9 == 0) || (lVar9 = *(longlong *)(lVar9 + 0x1b8), lVar9 == 0)) {
    pTVar20 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar20 = (TTransform<double> *)(lVar9 + 0x1f0);
  }
  dVar11 = (pTVar20->Rotation).XY.m128d_f64[1];
  (this->ActorTransform).Rotation.XY.m128d_f64[0] = (pTVar20->Rotation).XY.m128d_f64[0];
  (this->ActorTransform).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Rotation).ZW.m128d_f64[1];
  (this->ActorTransform).Rotation.ZW.m128d_f64[0] = (pTVar20->Rotation).ZW.m128d_f64[0];
  (this->ActorTransform).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Translation).XY.m128d_f64[1];
  (this->ActorTransform).Translation.XY.m128d_f64[0] = (pTVar20->Translation).XY.m128d_f64[0];
  (this->ActorTransform).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Translation).ZW.m128d_f64[1];
  (this->ActorTransform).Translation.ZW.m128d_f64[0] = (pTVar20->Translation).ZW.m128d_f64[0];
  (this->ActorTransform).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Scale3D).XY.m128d_f64[1];
  (this->ActorTransform).Scale3D.XY.m128d_f64[0] = (pTVar20->Scale3D).XY.m128d_f64[0];
  (this->ActorTransform).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (pTVar20->Scale3D).ZW.m128d_f64[1];
  (this->ActorTransform).Scale3D.ZW.m128d_f64[0] = (pTVar20->Scale3D).ZW.m128d_f64[0];
  (this->ActorTransform).Scale3D.ZW.m128d_f64[1] = dVar11;
  pFVar23 = (this->GameThreadPreUpdateNodes).AllocatorInstance.Data;
  iVar4 = (this->GameThreadPreUpdateNodes).ArrayNum;
  pFVar8 = pFVar23 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->GameThreadPreUpdateNodes).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FAnimNode_Base_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_d8);
    }
    if (pFVar23 == pFVar8) break;
    (**(code **)(**(longlong **)pFVar23 + 0x40))(*(longlong **)pFVar23,param_1);
    pFVar23 = pFVar23 + 8;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// QueryAndMarkTransitionEvent @ 147471670

bool __thiscall
FAnimInstanceProxy::QueryAndMarkTransitionEvent
          (FAnimInstanceProxy *this,int param_1,int param_2,FName *param_3)

{
  int iVar1;
  FProperty *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  UScriptStruct *pUVar7;
  FAnimNode_StateMachine *this_01;
  uint uVar8;
  uint uVar9;
  
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x20))();
    uVar9 = ~param_1 + (int)plVar6[1];
    uVar8 = 0;
    if ((int)uVar9 < (int)plVar6[1]) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    this_00 = *(FProperty **)(*plVar6 + (longlong)(int)uVar9 * 8);
    if (this_00 != (FProperty *)0x0) {
      lVar2 = this_00[1]._padding_;
      pUVar7 = FAnimNode_StateMachine::StaticStruct();
      if (pUVar7 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) &&
           (this_01 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                (this_00,this->AnimInstanceObject,0),
           this_01 != (FAnimNode_StateMachine *)0x0)) {
          bVar4 = FAnimNode_StateMachine::QueryAndMarkTransitionEvent(this_01,param_2,param_3);
          return bVar4;
        }
      }
    }
  }
  return false;
}

// QueryTransitionEvent @ 1474718b0

bool __thiscall
FAnimInstanceProxy::QueryTransitionEvent
          (FAnimInstanceProxy *this,int param_1,int param_2,FName *param_3)

{
  bool bVar1;
  FAnimNode_StateMachine *this_00;
  
  this_00 = GetStateMachineInstance(this,param_1);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    bVar1 = FAnimNode_StateMachine::QueryTransitionEvent(this_00,param_2,param_3);
    return bVar1;
  }
  return false;
}

// RecalcRequiredBones @ 147471f00

void __thiscall
FAnimInstanceProxy::RecalcRequiredBones
          (FAnimInstanceProxy *this,USkeletalMeshComponent *param_1,UObject *param_2)

{
  undefined1 *puVar1;
  TSharedPtr<FBoneContainer,1> *this_00;
  undefined1 *puVar2;
  uint uVar3;
  FBoneContainer *pFVar4;
  FSkelMeshRefPoseOverride *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAnimNode_LinkedInputPose *pFVar7;
  code *pcVar8;
  bool bVar9;
  TSharedPtr<FBoneContainer,1> *pTVar10;
  FCurveFilterSettings *pFVar11;
  longlong *plVar12;
  TArrayView<unsigned_short_const_,int> local_58;
  TSharedPtr<FBoneContainer,1> local_48;
  FSkelMeshRefPoseOverride *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FCurveFilterSettings local_28;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::RecalcRequiredBones");
  this_00 = &this->RequiredBones;
  pTVar10 = USkeletalMeshComponent::GetSharedRequiredBones(param_1,&local_48);
  TSharedPtr<FBoneContainer,1>::operator=(this_00,pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (this_00->Object == (FBoneContainer *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar4 = this_00->Object;
  bVar9 = FWeakObjectPtr::IsValid(&(pFVar4->Asset).WeakPtr);
  if (((!bVar9) || (pFVar4->RefSkeleton == (FReferenceSkeleton *)0x0)) ||
     ((pFVar4->BoneIndicesArray).ArrayNum < 1)) {
    if (this_00->Object == (FBoneContainer *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar4 = this_00->Object;
    pFVar11 = USkeletalMeshComponent::GetCurveFilterSettings(param_1,&local_28,-1);
    local_58.DataPtr = (ushort *)(param_1->RequiredBones).AllocatorInstance.Data;
    local_58.ArrayNum = (param_1->RequiredBones).ArrayNum;
    if (local_58.ArrayNum < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FBoneContainer::InitializeTo(pFVar4,&local_58,pFVar11,param_2);
    if (this_00->Object == (FBoneContainer *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar4 = this_00->Object;
    plVar12 = (longlong *)(**(code **)(param_1->_padding_ + 0xb78))(param_1);
    pFVar5 = (FSkelMeshRefPoseOverride *)*plVar12;
    if (pFVar5 != (pFVar4->RefPoseOverride).Object) {
      pTVar6 = (TReferenceControllerBase<1> *)plVar12[1];
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = (pFVar4->RefPoseOverride).Object;
      pTStack_30 = (pFVar4->RefPoseOverride).SharedReferenceCount.ReferenceController;
      (pFVar4->RefPoseOverride).Object = pFVar5;
      (pFVar4->RefPoseOverride).SharedReferenceCount.ReferenceController = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
    }
  }
  pFVar7 = this->DefaultLinkedInstanceInputNode;
  if (pFVar7 == (FAnimNode_LinkedInputPose *)0x0) goto LAB_147472199;
  pFVar4 = this_00->Object;
  if (pFVar4 == (FBoneContainer *)0x0) {
LAB_147472101:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBoneContainer && InBoneContainer->IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                       ,0x97,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    bVar9 = FWeakObjectPtr::IsValid(&(pFVar4->Asset).WeakPtr);
    if (((!bVar9) || (pFVar4->RefSkeleton == (FReferenceSkeleton *)0x0)) ||
       ((pFVar4->BoneIndicesArray).ArrayNum < 1)) goto LAB_147472101;
  }
  *(FBoneContainer **)&(pFVar7->CachedInputPose).field_0x10 = pFVar4;
  uVar3 = (pFVar4->BoneIndicesArray).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  puVar2 = &(pFVar7->CachedInputPose).field_0xc;
  puVar1 = &(pFVar7->CachedInputPose).field_0x8;
  *(undefined4 *)puVar1 = 0;
  if (*(int *)&(pFVar7->CachedInputPose).field_0xc < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar3,(ForAnyElementType *)&pFVar7->CachedInputPose,0,(int *)puVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,uVar3,(ForAnyElementType *)&pFVar7->CachedInputPose,(int *)puVar1,
             (int *)puVar2);
  this->DefaultLinkedInstanceInputNode->bIsCachedInputPoseInitialized = '\0';
LAB_147472199:
  this->bBoneCachesInvalidated = '\x01';
  FStatsHierarchical::EndMeasurement();
  return;
}

// RecalcRequiredCurves @ 1474722d0

void __thiscall
FAnimInstanceProxy::RecalcRequiredCurves(FAnimInstanceProxy *this,FCurveEvaluationOption *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCurveFilterSettings local_18;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::RecalcRequiredCurves");
  if ((this->RequiredBones).Object == (FBoneContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.FilterCurves = param_1->DisallowedList;
  local_18.FilterMode = param_1->bAllowCurveEvaluation == false;
  local_18.LODIndex = param_1->LODIndex;
  FBoneContainer::CacheRequiredAnimCurves((this->RequiredBones).Object,&local_18);
  this->bBoneCachesInvalidated = '\x01';
  FStatsHierarchical::EndMeasurement();
  return;
}

// RecalcRequiredCurves @ 147472370

void __thiscall
FAnimInstanceProxy::RecalcRequiredCurves(FAnimInstanceProxy *this,FCurveFilterSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::RecalcRequiredCurves");
  if ((this->RequiredBones).Object == (FBoneContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBoneContainer::CacheRequiredAnimCurves((this->RequiredBones).Object,param_1);
  this->bBoneCachesInvalidated = '\x01';
  FStatsHierarchical::EndMeasurement();
  return;
}

// RecordMachineWeight @ 147472510

void __thiscall
FAnimInstanceProxy::RecordMachineWeight(FAnimInstanceProxy *this,int param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = this->BufferWriteIndex;
  uVar4 = 0;
  if (param_1 < this->MachineWeightArrays[iVar1].ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)(this->MachineWeightArrays[iVar1].AllocatorInstance.Data + (longlong)param_1 * 4) =
       param_2;
  return;
}

// RecordStateWeight @ 147472650

void __thiscall
FAnimInstanceProxy::RecordStateWeight
          (FAnimInstanceProxy *this,int param_1,int param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  if (*(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x8 !=
      *(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x34) {
    puVar8 = *(undefined1 **)&(this->StateMachineClassIndexToWeightOffset).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->StateMachineClassIndexToWeightOffset).field_0x38;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 - 1U
                              & param_1) * 4);
    if (iVar3 != -1) {
      while (piVar5 = (int *)((longlong)iVar3 * 0x10 +
                             *(longlong *)&this->StateMachineClassIndexToWeightOffset),
            *piVar5 != param_1) {
        iVar3 = piVar5[2];
        if (iVar3 == -1) {
          return;
        }
      }
      piVar4 = piVar5 + 1;
      if (piVar5 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        iVar3 = this->BufferWriteIndex;
        uVar7 = *piVar4 + param_2;
        uVar6 = 0;
        if ((int)uVar7 < this->StateWeightArrays[iVar3].ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        *(float *)(this->StateWeightArrays[iVar3].AllocatorInstance.Data + (longlong)(int)uVar7 * 4)
             = param_3;
      }
    }
  }
  return;
}

// RegisterSlotNodeWithAnimInstance @ 147472b50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::RegisterSlotNodeWithAnimInstance(FAnimInstanceProxy *this,FName *param_1)

{
  int *piVar1;
  TArray<FMontageActiveSlotTracker,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ITextData *pIVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FMessageLog *this_00;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  undefined1 *puVar17;
  int local_res8 [2];
  TPairInitializer<FName_const_&,int_const_&> local_res10;
  FName local_res20;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_190;
  FString local_180;
  FString local_170;
  FTextFormat local_160;
  FText local_150;
  FName *local_140;
  int *local_138;
  FFormatArgumentValue local_128;
  undefined4 local_108;
  FText local_f8;
  FString local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  FText local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FTextFormat local_78;
  FMessageLog local_68;
  
  local_res8[0] = 0;
  FVar3 = *param_1;
  uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  if (*(int *)&(this->SlotNameToTrackerIndex).field_0x8 !=
      *(int *)&(this->SlotNameToTrackerIndex).field_0x34) {
    puVar17 = *(undefined1 **)&(this->SlotNameToTrackerIndex).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->SlotNameToTrackerIndex).field_0x38;
    }
    iVar10 = *(int *)(puVar17 +
                     (ulonglong)
                     (*(int *)&(this->SlotNameToTrackerIndex).field_0x48 - 1U & FVar3.Number + uVar9
                     ) * 4);
    if (iVar10 != -1) {
      lVar4 = *(longlong *)&(this->SlotNameToTrackerIndex).field_0x0;
      do {
        if (*(FName *)(lVar4 + (longlong)iVar10 * 0x14) == FVar3) {
          pUVar11 = IAnimClassInterface::GetActualAnimClass(this->AnimClassInterface);
          bVar8 = pUVar11 == (UClass *)0x0;
          if (bVar8) {
            pFVar13 = ::FString::FString(&local_e8,"Unavailable");
          }
          else {
            local_res10.Value = (int *)pUVar11->_padding_;
            ::FName::ToString((FName *)&local_res10.Value,&local_170);
            pFVar13 = &local_170;
          }
          local_180.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
          (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_180.Data.ArrayNum = (pFVar13->Data).ArrayNum;
          local_180.Data.ArrayMax = (pFVar13->Data).ArrayMax;
          (pFVar13->Data).ArrayNum = 0;
          (pFVar13->Data).ArrayMax = 0;
          if ((bVar8) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if ((!bVar8) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          bVar8 = IsInGameThread();
          if (bVar8) {
            ::FName::FName(&local_res20,"AnimBlueprintLog");
            this_00 = FMessageLog::FMessageLog(&local_68,&local_res20);
            pFVar12 = FText::FromString(&local_98,&local_180);
            pFVar13 = ::FName::ToString(param_1,&local_b8);
            pFVar14 = FText::FromString(&local_88,pFVar13);
            pFVar15 = FText::AsLocalizable_Advanced_LocText
                                (&local_c8,L"AnimInstance",L"AnimInstance_SlotNode",
                                 L"SLOTNODE: \'{0}\' in animation instance class {1} already exists. Remove duplicates from the animation graph for this class."
                                );
            pFVar16 = FTextFormat::FTextFormat(&local_78,pFVar15,Default);
            local_128.Type = Text;
            FText::FText((FText *)&local_128.TextValue,pFVar14);
            if ((local_128.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_108 = 4;
            FText::FText(&local_f8,pFVar12);
            if ((local_f8.TextData.Reference == (ITextData *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_190.ArrayNum = 2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_190.AllocatorInstance,2,&local_190.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_190.AllocatorInstance.Data,&local_128,2);
            local_160.TextFormatData.Object = (pFVar16->TextFormatData).Object;
            local_160.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar16->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_160.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_160.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_160.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_150,&local_160,&local_190);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
            if ((FFormatArgumentValue *)local_190.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_190.AllocatorInstance.Data);
            }
            if (local_f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
            }
            if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_128.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar16->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar6 = (pFVar14->TextData).Reference;
            if (pIVar6 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar6 + 0x10))();
            }
            pIVar6 = (pFVar12->TextData).Reference;
            if (pIVar6 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar6 + 0x10))();
            }
            FMessageLog::Warning(this_00,&local_d8,&local_150);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d8.SharedReferenceCount.ReferenceController);
            if (local_150.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
            }
            if (local_c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            FMessageLog::~FMessageLog(&local_68);
          }
          else if (2 < (byte)LogAnimation._0_1_) {
            ::FName::ToString(param_1,&local_a8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          if (local_180.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
          return;
        }
        iVar10 = *(int *)(lVar4 + 0xc + (longlong)iVar10 * 0x14);
      } while (iVar10 != -1);
    }
  }
  local_res8[0] = this->SlotWeightTracker[0].ArrayNum;
  local_138 = local_res8;
  local_140 = param_1;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->SlotNameToTrackerIndex,&local_res10,(bool *)&local_140);
  pTVar2 = this->SlotWeightTracker;
  local_1a8 = 0;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  local_1a0 = (uint)local_1a0._2_2_ << 0x10;
  if (((pFVar5 <= (FScriptContainerElement *)&local_1a8) &&
      ((FScriptContainerElement *)&local_1a8 <
       pFVar5 + (longlong)this->SlotWeightTracker[0].ArrayMax * 0xc)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = this->SlotWeightTracker[0].ArrayNum;
  piVar1 = &this->SlotWeightTracker[0].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  this->SlotWeightTracker[0].ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  pTVar2 = this->SlotWeightTracker + 1;
  local_19c = 0;
  local_194 = (uint)local_194._2_2_ << 0x10;
  *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0xc) = local_1a8;
  *(int *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = local_1a0;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_19c) &&
      ((FScriptContainerElement *)&local_19c <
       pFVar5 + (longlong)this->SlotWeightTracker[1].ArrayMax * 0xc)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = this->SlotWeightTracker[1].ArrayNum;
  piVar1 = &this->SlotWeightTracker[1].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  this->SlotWeightTracker[1].ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0xc) = local_19c;
  *(int *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = local_194;
  return;
}

// ReinitializeSlotNodes @ 147473ff0

void __thiscall FAnimInstanceProxy::ReinitializeSlotNodes(FAnimInstanceProxy *this)

{
  short *psVar1;
  int iVar2;
  
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->SlotNameToTrackerIndex);
  this->SlotWeightTracker[0].ArrayNum = 0;
  if (this->SlotWeightTracker[0].ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&this->SlotWeightTracker[0].AllocatorInstance,0,
               &this->SlotWeightTracker[0].ArrayMax);
  }
  iVar2 = this->SlotWeightTracker[1].ArrayMax;
  this->SlotWeightTracker[1].ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&this->SlotWeightTracker[1].AllocatorInstance,0,
               &this->SlotWeightTracker[1].ArrayMax);
  }
  psVar1 = &(this->SlotNodeInitializationCounter).Counter;
  *psVar1 = *psVar1 + 1;
  (this->SlotNodeInitializationCounter).LastSyncronizedFrame = GFrameCounter;
  if ((this->SlotNodeInitializationCounter).Counter == -1) {
    (this->SlotNodeInitializationCounter).Counter = 0;
  }
  return;
}

// RemovePoseSnapshot @ 147474650

void __thiscall FAnimInstanceProxy::RemovePoseSnapshot(FAnimInstanceProxy *this,FName param_1)

{
  TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  this_00 = &this->PoseSnapshots;
  pFVar2 = (this_00->AllocatorInstance).Data;
  iVar1 = (this->PoseSnapshots).ArrayNum;
  pFVar7 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x38) {
    while (*(FName *)(pFVar7 + 0x28) != param_1) {
      pFVar7 = pFVar7 + 0x38;
      if (pFVar7 == pFVar2 + (longlong)iVar1 * 0x38) {
        return;
      }
    }
    uVar4 = (uint)(((longlong)pFVar7 - (longlong)pFVar2) / 0x38);
    if (uVar4 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar4 < iVar1) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar4);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,&this_00->AllocatorInstance,(this->PoseSnapshots).ArrayNum,
                 &(this->PoseSnapshots).ArrayMax);
    }
  }
  return;
}

// RequestTransitionEvent @ 147474bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAnimInstanceProxy::RequestTransitionEvent
          (FAnimInstanceProxy *this,FName *param_1,double param_2,
          ETransitionRequestQueueMode *param_3,ETransitionRequestOverwriteMode *param_4)

{
  ETransitionRequestQueueMode EVar1;
  ETransitionRequestOverwriteMode EVar2;
  FName FVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  undefined1 *local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  double local_48;
  double local_40;
  FName local_38;
  ETransitionRequestQueueMode local_30;
  ETransitionRequestOverwriteMode local_2f;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FVar3 = *param_1;
  EVar1 = *param_3;
  EVar2 = *param_4;
  QueryPerformanceCounter(&local_88);
  local_48 = (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  if (0.0 < param_2) {
    local_58 = (void *)0x0;
    local_50 = 0;
    local_80 = local_78;
    local_88.QuadPart =
         (LONGLONG)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAnimInstanceProxy::RequestTransitionEvent'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
         ::Call;
    local_4c = 8;
    local_40 = param_2;
    local_38 = FVar3;
    local_30 = EVar1;
    local_2f = EVar2;
    ForEachStateMachine(this,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_88.s);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// ResetAnimationCurves @ 1474753c0

void __thiscall FAnimInstanceProxy::ResetAnimationCurves(FAnimInstanceProxy *this)

{
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_00
  ;
  longlong lVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::ResetAnimationCurves");
  this_00 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)this->AnimationCurves;
  lVar1 = 3;
  do {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
              (this_00);
    this_00 = this_00 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FStatsHierarchical::EndMeasurement();
  return;
}

// ResetCounterInputProxy @ 147475470

void __cdecl FAnimInstanceProxy::ResetCounterInputProxy(FAnimInstanceProxy *param_1)

{
  if (param_1 != (FAnimInstanceProxy *)0x0) {
    (param_1->UpdateCounter).Counter = -1;
    (param_1->UpdateCounter).SkipFrames = 0;
    (param_1->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
    (param_1->EvaluationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
    (param_1->CachedBonesCounter).LastSyncronizedFrame = 0xffffffffffffffff;
    (param_1->EvaluationCounter).Counter = -1;
    (param_1->EvaluationCounter).SkipFrames = 0;
    (param_1->CachedBonesCounter).Counter = -1;
    (param_1->CachedBonesCounter).SkipFrames = 0;
  }
  return;
}

// ResetDynamics @ 1474754c0

void __thiscall FAnimInstanceProxy::ResetDynamics(FAnimInstanceProxy *this,ETeleportType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [16];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name3275,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name3275,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name3275,true);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::ResetDynamics");
  pFVar3 = (this->DynamicResetNodes).AllocatorInstance.Data;
  iVar2 = (this->DynamicResetNodes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DynamicResetNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimNode_Base_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x58))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  FStatsHierarchical::EndMeasurement();
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// ResetDynamics @ 1474755f0

void __thiscall FAnimInstanceProxy::ResetDynamics(FAnimInstanceProxy *this)

{
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name3286,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name3286,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name3286,true);
  ResetDynamics(this,ResetPhysics);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SavePoseSnapshot @ 147475dc0

void __thiscall
FAnimInstanceProxy::SavePoseSnapshot
          (FAnimInstanceProxy *this,USkeletalMeshComponent *param_1,FName param_2)

{
  FPoseSnapshot *pFVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::SavePoseSnapshot");
  pFVar1 = AddPoseSnapshot(this,param_2);
  USkeletalMeshComponent::SnapshotPose(param_1,pFVar1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// SequenceAdvanceImmediate @ 147475e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimInstanceProxy::SequenceAdvanceImmediate
          (FAnimInstanceProxy *this,UAnimSequenceBase *param_1,bool param_2,float param_3,
          float param_4,float *param_5,FMarkerTickRecord *param_6)

{
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 local_190;
  UAnimSequenceBase *local_188;
  float *local_180;
  float local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined4 local_16a;
  undefined8 local_160;
  undefined8 local_158;
  TReferenceControllerBase<1> *pTStack_150;
  undefined8 *local_128;
  FMarkerTickRecord *local_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  Type local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_58;
  float local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_170 = 0x3f800000;
  local_16a = 0x1000000;
  local_160 = 0;
  local_158 = 0;
  pTStack_150 = (TReferenceControllerBase<1> *)0x0;
  local_118 = 0;
  local_114 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_180 = param_5;
  local_120 = param_6;
  local_128 = &local_198;
  local_98 = this->RootMotionMode;
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_174 = 0x3f800000;
  local_16b = 0;
  local_198 = 0;
  local_190 = 0;
  local_108[0] = 0;
  local_104 = 0;
  local_90 = (void *)0x0;
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = &FMarkerTickContext::DefaultMarkerNames;
  local_4c = 0;
  local_44 = 0;
  local_40 = 0x10100;
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_50 = param_4;
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_188 = param_1;
  local_178 = param_3;
  local_16c = param_2;
  (**(code **)(param_1->_padding_ + 0x2b0))(param_1,&local_188,&this->NotifyQueue,local_108);
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_150);
  return;
}

// SetInterpolationOverride @ 147476450

void __thiscall
FAnimInstanceProxy::SetInterpolationOverride
          (FAnimInstanceProxy *this,TOptional<EAnimInterpolationType> param_1)

{
  undefined6 in_register_00000012;
  
  if ((TOptional<EAnimInterpolationType> *)CONCAT62(in_register_00000012,param_1) !=
      &this->InterpolationOverride) {
    if (*(char *)(CONCAT62(in_register_00000012,param_1) + 1) != '\0') {
      (this->InterpolationOverride).TypedValue =
           *(EAnimInterpolationType *)CONCAT62(in_register_00000012,param_1);
      (this->InterpolationOverride).bIsSet = true;
      return;
    }
    if ((this->InterpolationOverride).bIsSet != false) {
      (this->InterpolationOverride).bIsSet = false;
    }
  }
  return;
}

// SlotEvaluatePose @ 147476630

void __thiscall
FAnimInstanceProxy::SlotEvaluatePose
          (FAnimInstanceProxy *this,FName *param_1,FAnimationPoseData *param_2,float param_3,
          FAnimationPoseData *param_4,float param_5,float param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  FBoneContainer *pFVar4;
  FName FVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<float> FVar8;
  code *pcVar9;
  double dVar10;
  float *pfVar11;
  FStackAttributeContainer **ppFVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  FIdentityFunctor FVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  FCompactPose *pFVar23;
  FBaseCompactPose<TMemStackAllocator<0>_> *pFVar24;
  FBlendedCurve *this_00;
  FStackAttributeContainer *this_01;
  UAnimMontage *pUVar25;
  FAnimSegment *this_02;
  TObjectPtr<UAnimationAsset>_u_0 TVar26;
  TArrayView<float_const_,int> *pTVar27;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *pTVar28;
  TArrayView<FBlendedCurve_const_*_const,int> *pTVar29;
  FCurveElement *pFVar30;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_03;
  ForElementType<FCompactPose_const_*> FVar31;
  ForElementType<FBlendedCurve_const_*> FVar32;
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> FVar33;
  ForElementType<float> FVar34;
  ForElementType<FCompactPose_const_*> FVar35;
  ForElementType<FBlendedCurve_const_*> FVar36;
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> FVar37;
  uint uVar38;
  ulonglong uVar39;
  ECurveElementFlags *pEVar40;
  uint uVar41;
  FWeakObjectPtr *pFVar42;
  FSlotEvaluationPose *pFVar43;
  FWeakObjectPtr *pFVar44;
  TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar45;
  FAnimInstanceProxy *pFVar46;
  FCurveElement *pFVar47;
  ForElementType<UE::Anim::FCurveElement> FVar48;
  FCurveElement *pFVar49;
  longlong lVar50;
  TArray<FSlotEvaluationPose,TSizedDefaultAllocator<32>_> *pTVar51;
  longlong lVar52;
  TArray<FSlotEvaluationPose,TSizedDefaultAllocator<32>_> *pTVar53;
  longlong lVar54;
  FBlendProfileScratchData *pFVar55;
  float fVar56;
  float fVar57;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [8];
  ForElementType<UE::Math::TTransform<double>_> local_4a0;
  undefined8 local_498;
  FBoneContainer *local_490;
  ForElementType<UE::Anim::FCurveElement> local_488;
  int local_480 [2];
  char local_478;
  FCurveFilter *local_470;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_468;
  undefined1 local_428 [4];
  uint local_424;
  FBlendProfileScratchData *local_420;
  TArray<FSlotEvaluationPose,TSizedDefaultAllocator<32>_> *local_418;
  int local_410;
  float local_40c;
  FCurveElement *local_408;
  FWeakObjectPtr *local_400;
  ForElementType<FCompactPose_const_*> local_3f8;
  FBlendedCurve *local_3f0;
  FStackAttributeContainer *local_3e8;
  ForElementType<FBlendedCurve_const_*> local_3e0;
  TArray<FSlotEvaluationPose,TSizedDefaultAllocator<32>_> *local_3d8;
  FAnimTrack *local_3d0;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_3c8;
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> local_3c0;
  FCompactPose *local_3b8;
  FCurveElement *local_3b0;
  undefined8 local_3a8;
  char local_3a0;
  FCurveFilter *local_398;
  FStackAttributeContainer *local_390;
  FAnimInstanceProxy *local_388;
  FBlendedCurve *local_380;
  undefined1 local_378 [16];
  int local_368;
  undefined4 local_364;
  FBoneContainer *local_360;
  FCurveElement *local_358;
  int local_350;
  undefined4 local_34c;
  char local_348;
  undefined8 local_340;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_338;
  undefined1 local_2f8 [16];
  int local_2e8;
  undefined4 local_2e4;
  FBoneContainer *local_2e0;
  FCurveElement *local_2d8;
  int local_2d0;
  undefined4 local_2cc;
  char local_2c8;
  undefined8 local_2c0;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_2b8;
  FAnimExtractContext local_278;
  FWeakObjectPtr *local_228;
  ForElementType<FCompactPose_const_*> local_218;
  int iStack_210;
  undefined4 uStack_20c;
  code *local_208;
  undefined1 *local_200;
  TObjectPtr<UAnimationAsset>_u_0 local_1f8;
  float *pfStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  TReferenceControllerBase<1> *pTStack_1c0;
  FDeltaTimeRecord *local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined4 local_184;
  TArrayView<float_const_,int> local_178;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> local_168;
  TArrayView<FBlendedCurve_const_*_const,int> local_158;
  TArrayView<FCompactPose_const_*_const,int> local_148;
  FAnimationBaseContext local_138;
  FAnimationPoseData local_118;
  FAnimationPoseData local_100;
  TArrayView<float_const_,int> local_e8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> local_d8;
  TArrayView<FBlendedCurve_const_*_const,int> local_c8 [9];
  
  pFVar23 = FAnimationPoseData::GetPose(param_2);
  local_3b8 = pFVar23;
  local_3f0 = FAnimationPoseData::GetCurve(param_2);
  local_3e8 = FAnimationPoseData::GetAttributes(param_2);
  pFVar24 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_4);
  local_3c8 = pFVar24;
  this_00 = FAnimationPoseData::GetCurve(param_4);
  local_380 = this_00;
  this_01 = FAnimationPoseData::GetAttributes(param_4);
  fVar17 = param_5;
  fVar16 = __real_3727c5ac;
  local_390 = this_01;
  if (param_5 <= __real_3727c5ac) {
    TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)pFVar24,
               (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)pFVar23);
    pFVar24->BoneContainer = *(FBoneContainer **)&pFVar23->field_0x10;
    FBlendedCurve::operator=(this_00,local_3f0);
    UE::Anim::FStackAttributeContainer::operator=(this_01,local_3e8);
    return;
  }
  if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
     (pFVar46 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    pFVar46 = this;
  }
  iVar22 = (pFVar46->MontageEvaluationData).ArrayNum;
  pFVar42 = (FWeakObjectPtr *)(pFVar46->MontageEvaluationData).AllocatorInstance.Data;
  pFVar44 = pFVar42 + (longlong)iVar22 * 0xb;
  while( true ) {
    if ((pFVar46->MontageEvaluationData).ArrayNum != iVar22) {
      param_5 = (float)((uint)param_5 & 0xffffff00);
      `TCheckedPointerIterator<FMontageEvaluationState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (pFVar42 == pFVar44) break;
    bVar19 = FWeakObjectPtr::IsValid(pFVar42);
    if ((bVar19) && (pFVar42[7] != (FWeakObjectPtr)0x0)) {
      pUVar25 = (UAnimMontage *)FWeakObjectPtr::Get(pFVar42);
      bVar19 = UAnimMontage::IsValidSlot(pUVar25,*param_1);
      if (bVar19) {
        SlotEvaluatePoseWithBlendProfiles(this,param_1,param_2,param_3,param_4,fVar17);
        return;
      }
    }
    pFVar42 = pFVar42 + 0xb;
  }
  local_200 = local_428;
  local_208 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FBlendProfileScratchData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  local_420 = (FBlendProfileScratchData *)
              FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_208,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendProfileScratchData>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
  local_418 = &local_420->Poses;
  pTVar51 = &local_420->AdditivePoses;
  local_3f8 = (ForElementType<FCompactPose_const_*>)&local_420->BlendingPoses;
  local_3e0 = (ForElementType<FBlendedCurve_const_*>)&local_420->BlendingCurves;
  local_3c0 = (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)
              &local_420->BlendingAttributes;
  local_3d8 = pTVar51;
  bVar19 = FBlendProfileScratchData::IsEmpty(local_420);
  if ((!bVar19) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("BlendProfileScratchData.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                          ,0x771,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar17 = __real_3f800000;
  fVar57 = 0.0;
  if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
     (local_388 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    local_388 = this;
  }
  local_424 = (local_388->MontageEvaluationData).ArrayNum;
  uVar39 = (ulonglong)(int)local_424;
  pFVar42 = (FWeakObjectPtr *)(local_388->MontageEvaluationData).AllocatorInstance.Data;
  FVar18 = param_5._0_1_;
  local_228 = pFVar42 + uVar39 * 0xb;
  do {
    pFVar44 = local_228;
    local_400 = pFVar42;
    if ((local_388->MontageEvaluationData).ArrayNum != (int)uVar39) {
      local_4b8[0] = 0;
      `TCheckedPointerIterator<FMontageEvaluationState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_4b8);
    }
    fVar1 = param_6;
    if (pFVar42 == pFVar44) {
      fVar56 = param_3;
      if (fVar17 <= param_3) {
        fVar56 = fVar17;
      }
      if (fVar56 <= 0.0) {
        fVar56 = 0.0;
      }
      if ((__real_38d1b717 <
           (float)((uint)(param_6 - fVar57) & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
         (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5363211093709686734>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                              ,0x7ce,
                              "FMath::IsNearlyEqual(InTotalNodeWeight, TotalWeight, (1.e-4f))"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar53 = local_418;
      if (fVar16 < fVar1) {
        if (__real_3f800054 < fVar1) {
          uVar38 = 0;
          iVar22 = local_418->ArrayNum;
          if (0 < iVar22) {
            lVar54 = 0;
            do {
              uVar41 = 0;
              if ((int)uVar38 < iVar22) {
                uVar41 = ~uVar38 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar7 = (pTVar53->AllocatorInstance).Data;
              uVar38 = uVar38 + 1;
              *(float *)(pFVar7 + lVar54 + 4) = (fVar17 / fVar1) * *(float *)(pFVar7 + lVar54 + 4);
              lVar54 = lVar54 + 0x80;
              iVar22 = pTVar53->ArrayNum;
            } while ((int)uVar38 < iVar22);
          }
          iVar22 = pTVar51->ArrayNum;
          uVar38 = 0;
          if (0 < iVar22) {
            lVar54 = 0;
            do {
              uVar41 = 0;
              if ((int)uVar38 < iVar22) {
                uVar41 = ~uVar38 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar7 = (pTVar51->AllocatorInstance).Data;
              uVar38 = uVar38 + 1;
              *(float *)(pFVar7 + lVar54 + 4) = (fVar17 / fVar1) * *(float *)(pFVar7 + lVar54 + 4);
              lVar54 = lVar54 + 0x80;
              iVar22 = pTVar51->ArrayNum;
            } while ((int)uVar38 < iVar22);
          }
        }
      }
      else {
        bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5363211093709686736>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                            ,2000,"InTotalNodeWeight > (0.00001f)");
        pTVar53 = local_418;
        if (bVar19) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (((pTVar53->ArrayNum < 1) && (pTVar51->ArrayNum < 1)) &&
         (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5363211093709686752>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                              ,0x7e0,"(AdditivePoses.Num() > 0) || (NonAdditivePoses.Num() > 0)"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar23 = local_3b8;
      pFVar24 = local_3c8;
      FVar31 = local_3f8;
      if (pTVar51->ArrayNum == 0) {
        if (param_3 <= fVar16) {
          FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                    (local_3c8,local_3c8->BoneContainer);
        }
        else {
          TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
                    ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)local_3c8,
                     (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)local_3b8);
          pFVar24->BoneContainer = *(FBoneContainer **)&pFVar23->field_0x10;
          FBlendedCurve::operator=(local_380,local_3f0);
          UE::Anim::FStackAttributeContainer::operator=(local_390,local_3e8);
        }
      }
      else {
        uVar38 = (uint)(fVar16 < fVar56) + pTVar51->ArrayNum;
        local_424 = uVar38;
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPose_const_*>_>
                  (8,8,uVar38,(ForElementType<FCompactPose_const_*> *)local_3f8,
                   (int *)((longlong)local_3f8 + 0x48),(int *)((longlong)local_3f8 + 0x4c));
        pTVar45 = &local_420->BlendingWeights;
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                  (4,4,uVar38,&pTVar45->AllocatorInstance,&(local_420->BlendingWeights).ArrayNum,
                   &(local_420->BlendingWeights).ArrayMax);
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve_const_*>_>
                  (8,8,uVar38,(ForElementType<FBlendedCurve_const_*> *)local_3e0,
                   (int *)((longlong)local_3e0 + 0x48),(int *)((longlong)local_3e0 + 0x4c));
        FVar33 = local_3c0;
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FStackAttributeContainer_const_*>_>
                  (8,8,uVar38,
                   (ForElementType<UE::Anim::FStackAttributeContainer_const_*> *)local_3c0,
                   (int *)((longlong)local_3c0 + 0x48),(int *)((longlong)local_3c0 + 0x4c));
        iVar22 = pTVar51->ArrayNum;
        uVar41 = 0;
        if (0 < iVar22) {
          lVar50 = 0;
          lVar54 = 0;
          lVar52 = 0;
          pFVar55 = local_420;
          do {
            uVar38 = 0;
            if ((int)uVar41 < iVar22) {
              uVar38 = ~uVar41 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = (pFVar55->AdditivePoses).AllocatorInstance.Data;
            uVar38 = 0;
            if ((int)uVar41 < *(int *)((longlong)local_3f8 + 0x48)) {
              uVar38 = ~uVar41 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar55 = local_420;
            FVar31 = local_3f8;
            if (*(ForElementType<FCompactPose_const_*> *)((longlong)local_3f8 + 0x40) !=
                (ForElementType<FCompactPose_const_*>)0x0) {
              FVar31 = *(ForElementType<FCompactPose_const_*> *)((longlong)local_3f8 + 0x40);
            }
            *(FScriptContainerElement **)(lVar52 + (longlong)FVar31) =
                 pFVar7 + (longlong)(int)uVar41 * 0x80 + 8;
            uVar38 = 0;
            if ((int)uVar41 < (local_420->AdditivePoses).ArrayNum) {
              uVar38 = ~uVar41 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar32 = local_3e0;
            pFVar7 = (pFVar55->AdditivePoses).AllocatorInstance.Data;
            uVar38 = 0;
            if ((int)uVar41 < *(int *)((longlong)local_3e0 + 0x48)) {
              uVar38 = ~uVar41 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar55 = local_420;
            FVar36 = *(ForElementType<FBlendedCurve_const_*> *)((longlong)FVar32 + 0x40);
            if (FVar36 != (ForElementType<FBlendedCurve_const_*>)0x0) {
              FVar32 = FVar36;
            }
            *(FScriptContainerElement **)(lVar52 + (longlong)FVar32) =
                 pFVar7 + (longlong)(int)uVar41 * 0x80 + 0x20;
            uVar38 = 0;
            if ((int)uVar41 < (local_420->AdditivePoses).ArrayNum) {
              uVar38 = ~uVar41 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar33 = local_3c0;
            pFVar7 = (pFVar55->AdditivePoses).AllocatorInstance.Data;
            uVar38 = 0;
            if ((int)uVar41 < *(int *)((longlong)local_3c0 + 0x48)) {
              uVar38 = ~uVar41 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar37 = *(ForElementType<UE::Anim::FStackAttributeContainer_const_*> *)
                      ((longlong)FVar33 + 0x40);
            if (FVar37 != (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)0x0) {
              FVar33 = FVar37;
            }
            *(FScriptContainerElement **)(lVar52 + (longlong)FVar33) =
                 pFVar7 + (longlong)(int)uVar41 * 0x80 + 0x40;
            uVar38 = 0;
            if ((int)uVar41 < (pFVar55->AdditivePoses).ArrayNum) {
              uVar38 = ~uVar41 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar45 = &pFVar55->BlendingWeights;
            uVar2 = *(undefined4 *)((pFVar55->AdditivePoses).AllocatorInstance.Data + lVar54 + 4);
            uVar38 = 0;
            if ((int)uVar41 < (pFVar55->BlendingWeights).ArrayNum) {
              uVar38 = ~uVar41 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar8 = (pFVar55->BlendingWeights).AllocatorInstance.SecondaryData;
            FVar34 = (ForElementType<float>)pTVar45;
            if (FVar8 != (ForElementType<float>)0x0) {
              FVar34 = FVar8;
            }
            uVar41 = uVar41 + 1;
            lVar52 = lVar52 + 8;
            lVar54 = lVar54 + 0x80;
            *(undefined4 *)((longlong)FVar34 + lVar50) = uVar2;
            lVar50 = lVar50 + 4;
            iVar22 = (pFVar55->AdditivePoses).ArrayNum;
            FVar33 = local_3c0;
            pTVar53 = local_418;
            FVar31 = local_3f8;
            uVar38 = local_424;
          } while ((int)uVar41 < iVar22);
        }
        FVar32 = local_3e0;
        if (fVar16 < fVar56) {
          uVar38 = uVar38 - 1;
          uVar41 = 0;
          if ((int)uVar38 < *(int *)((longlong)FVar31 + 0x48)) {
            uVar41 = ~uVar38 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar32 = local_3e0;
          FVar35 = FVar31;
          if (*(ForElementType<FCompactPose_const_*> *)((longlong)FVar31 + 0x40) !=
              (ForElementType<FCompactPose_const_*>)0x0) {
            FVar35 = *(ForElementType<FCompactPose_const_*> *)((longlong)FVar31 + 0x40);
          }
          *(FCompactPose **)((longlong)FVar35 + (longlong)(int)uVar38 * 8) = local_3b8;
          uVar41 = 0;
          if ((int)uVar38 < *(int *)((longlong)local_3e0 + 0x48)) {
            uVar41 = ~uVar38 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar36 = FVar32;
          if (*(ForElementType<FBlendedCurve_const_*> *)((longlong)FVar32 + 0x40) !=
              (ForElementType<FBlendedCurve_const_*>)0x0) {
            FVar36 = *(ForElementType<FBlendedCurve_const_*> *)((longlong)FVar32 + 0x40);
          }
          *(FBlendedCurve **)((longlong)FVar36 + (longlong)(int)uVar38 * 8) = local_3f0;
          uVar41 = 0;
          if ((int)uVar38 < *(int *)((longlong)FVar33 + 0x48)) {
            uVar41 = ~uVar38 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar55 = local_420;
          FVar37 = FVar33;
          if (*(ForElementType<UE::Anim::FStackAttributeContainer_const_*> *)
               ((longlong)FVar33 + 0x40) !=
              (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)0x0) {
            FVar37 = *(ForElementType<UE::Anim::FStackAttributeContainer_const_*> *)
                      ((longlong)FVar33 + 0x40);
          }
          pTVar45 = &local_420->BlendingWeights;
          *(FStackAttributeContainer **)((longlong)FVar37 + (longlong)(int)uVar38 * 8) = local_3e8;
          uVar41 = 0;
          if ((int)uVar38 < (local_420->BlendingWeights).ArrayNum) {
            uVar41 = ~uVar38 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar8 = (pFVar55->BlendingWeights).AllocatorInstance.SecondaryData;
          FVar34 = (ForElementType<float>)pTVar45;
          if (FVar8 != (ForElementType<float>)0x0) {
            FVar34 = FVar8;
          }
          *(float *)((longlong)FVar34 + (longlong)(int)uVar38 * 4) = fVar56;
        }
        pTVar27 = TArrayView<float_const_,int>::
                  TArrayView<float_const_,int><TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                            (&local_e8,pTVar45);
        pfVar11 = pTVar27->DataPtr;
        uVar3._0_4_ = pTVar27->ArrayNum;
        uVar3._4_4_ = *(undefined4 *)&pTVar27->field_0xc;
        pTVar28 = TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int>::
                  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int><TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                            (&local_d8,
                             (TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                              *)FVar33);
        ppFVar12 = pTVar28->DataPtr;
        uVar13._0_4_ = pTVar28->ArrayNum;
        uVar13._4_4_ = *(undefined4 *)&pTVar28->field_0xc;
        pTVar29 = TArrayView<FBlendedCurve_const_*_const,int>::
                  TArrayView<FBlendedCurve_const_*_const,int><TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                            (local_c8,(TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                       *)FVar32);
        iStack_210 = *(int *)((longlong)FVar31 + 0x48);
        local_158.DataPtr = pTVar29->DataPtr;
        local_158.ArrayNum = pTVar29->ArrayNum;
        local_158._12_4_ = *(undefined4 *)&pTVar29->field_0xc;
        local_218 = FVar31;
        if (*(ForElementType<FCompactPose_const_*> *)((longlong)FVar31 + 0x40) !=
            (ForElementType<FCompactPose_const_*>)0x0) {
          local_218 = *(ForElementType<FCompactPose_const_*> *)((longlong)FVar31 + 0x40);
        }
        if ((iStack_210 < 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_148._12_4_ = uStack_20c;
        local_148.ArrayNum = iStack_210;
        local_148.DataPtr = (FCompactPose **)local_218;
        local_178.DataPtr = pfVar11;
        local_178._8_8_ = uVar3;
        local_168.DataPtr = ppFVar12;
        local_168._8_8_ = uVar13;
        FAnimationRuntime::BlendPosesTogetherIndirect
                  (&local_148,&local_158,&local_168,&local_178,param_4);
      }
      iVar22 = pTVar53->ArrayNum;
      if (0 < iVar22) {
        uVar38 = 0;
        lVar54 = 0;
        do {
          uVar41 = 0;
          if ((int)uVar38 < iVar22) {
            uVar41 = ~uVar38 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar43 = (FSlotEvaluationPose *)((pTVar53->AllocatorInstance).Data + lVar54);
          FAnimationPoseData::FAnimationPoseData(&local_100,pFVar43);
          FAnimationRuntime::AccumulateAdditivePose
                    (param_4,&local_100,pFVar43->Weight,(uint)(pFVar43->AdditiveType).Value);
          iVar22 = pTVar53->ArrayNum;
          uVar38 = uVar38 + 1;
          lVar54 = lVar54 + 0x80;
        } while ((int)uVar38 < iVar22);
      }
      goto LAB_147477f57;
    }
    bVar19 = FWeakObjectPtr::IsValid(pFVar42);
    pFVar23 = local_3b8;
    pFVar24 = local_3c8;
    if (!bVar19) {
      TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)local_3c8,
                 (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)local_3b8);
      pFVar24->BoneContainer = *(FBoneContainer **)&pFVar23->field_0x10;
      FBlendedCurve::operator=(local_380,local_3f0);
      UE::Anim::FStackAttributeContainer::operator=(local_390,local_3e8);
LAB_147477f57:
      FBlendProfileScratchData::Reset(local_420);
      return;
    }
    pUVar25 = (UAnimMontage *)FWeakObjectPtr::Get(pFVar42);
    bVar19 = UAnimMontage::IsValidSlot(pUVar25,*param_1);
    if (bVar19) {
      local_3d0 = UAnimMontage::GetAnimationData(pUVar25,*param_1);
      bVar19 = FAnimTrack::IsAdditive(local_3d0);
      if (bVar19) {
        bVar19 = FAnimTrack::IsRotationOffsetAdditive(local_3d0);
        local_410 = bVar19 + 1;
      }
      else {
        local_410 = 0;
      }
      fVar1 = (float)pFVar42[4].ObjectIndex;
      local_4a8[0] = (uchar)local_410;
      local_4a0.Data = (TTransform<double> *)0x0;
      local_498 = 0;
      local_490 = (FBoneContainer *)0x0;
      local_488.Data = (FCurveElement *)0x0;
      local_480[0] = 0;
      local_480[1] = 0;
      local_478 = '\0';
      local_470 = (FCurveFilter *)0x0;
      local_468.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.UniqueTypedBoneIndices.ArrayNum = 0;
      local_468.UniqueTypedBoneIndices.ArrayMax = 0;
      local_468.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.AttributeIdentifiers.ArrayNum = 0;
      local_468.AttributeIdentifiers.ArrayMax = 0;
      local_468.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.Values.ArrayNum = 0;
      local_468.Values.ArrayMax = 0;
      local_468.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.UniqueTypes.ArrayNum = 0;
      local_468.UniqueTypes.ArrayMax = 0;
      pFVar4 = (this->RequiredBones).Object;
      local_4a8._4_4_ = fVar1;
      if (((((pFVar4 == (FBoneContainer *)0x0) ||
            (bVar19 = FWeakObjectPtr::IsValid(&(pFVar4->Asset).WeakPtr), !bVar19)) ||
           (pFVar4->RefSkeleton == (FReferenceSkeleton *)0x0)) ||
          ((pFVar4->BoneIndicesArray).ArrayNum < 1)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InBoneContainer && InBoneContainer->IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                              ,0x97,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar38 = (pFVar4->BoneIndicesArray).ArrayNum;
      local_490 = pFVar4;
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
      }
      uVar41 = local_498._4_4_;
      if ((int)local_498._4_4_ < (int)uVar38) {
        local_498 = (ulonglong)local_498._4_4_ << 0x20;
        if (uVar41 != uVar38) {
          UE::Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                    (0x60,0x10,uVar38,&local_4a0,0,(int *)((longlong)&local_498 + 4));
        }
      }
      else {
        local_498 = (ulonglong)local_498._4_4_ << 0x20;
      }
      UE::Core::Private::
      ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                (0x60,0x10,uVar38,&local_4a0,(int *)&local_498,(int *)((longlong)&local_498 + 4));
      if (((this->RequiredBones).Object == (FBoneContainer *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_470 = &((this->RequiredBones).Object)->CurveFilter;
      uVar3 = *(undefined8 *)&local_400[8].ObjectSerialNumber;
      iVar22 = local_400[9].ObjectSerialNumber;
      cVar20 = (**(code **)(pUVar25->_padding_ + 0x340))(pUVar25);
      if ((cVar20 == '\0') || (this->RootMotionMode == NoRootMotionExtraction)) {
        local_278.bExtractRootMotion = false;
      }
      else {
        local_278.bExtractRootMotion = true;
      }
      local_278.CurrentTime = (double)(float)local_400[8].ObjectIndex;
      local_278.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.PoseCurves.ArrayNum = 0;
      local_278.PoseCurves.ArrayMax = 0;
      local_278.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.BonesRequired.ArrayNum = 0;
      local_278.BonesRequired.ArrayMax = 0;
      local_278.InterpolationOverride.bIsSet = false;
      local_278.bLooping = false;
      if ((&this->InterpolationOverride != &local_278.InterpolationOverride) &&
         ((this->InterpolationOverride).bIsSet != false)) {
        local_278.InterpolationOverride.TypedValue = (this->InterpolationOverride).TypedValue;
        local_278.InterpolationOverride.bIsSet = true;
      }
      local_278.DeltaTimeRecord._0_8_ = uVar3;
      local_278.DeltaTimeRecord._8_4_ = iVar22;
      FAnimationPoseData::FAnimationPoseData(&local_118,(FSlotEvaluationPose *)local_4a8);
      FAnimTrack::GetAnimationPose(local_3d0,&local_118,&local_278);
      local_3b0 = (FCurveElement *)0x0;
      local_3a8 = 0;
      local_3a0 = '\0';
      local_398 = (FCurveFilter *)0x0;
      if (((this->RequiredBones).Object == (FBoneContainer *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_398 = &((this->RequiredBones).Object)->CurveFilter;
      (**(code **)(pUVar25->_padding_ + 0x2f0))(pUVar25,&local_3b0,&local_278,0);
      iVar22 = (int)local_3a8;
      iVar21 = local_480[0];
      lVar54 = (longlong)local_480[0];
      local_408 = (FCurveElement *)CONCAT44(local_408._4_4_,(int)local_3a8);
      if ((int)local_3a8 != 0) {
        if (local_478 == '\0') {
          AlgoImpl::
          IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                    (local_488.Data,local_480[0],FVar18,(FElementSortPredicate)FVar18);
          local_478 = '\x01';
        }
        if (local_3a0 == '\0') {
          AlgoImpl::
          IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                    (local_3b0,(int)local_3a8,FVar18,(FElementSortPredicate)FVar18);
          local_3a0 = '\x01';
        }
        if (iVar22 < iVar21) {
          iVar22 = iVar21;
        }
        iVar21 = iVar22;
        if (iVar22 < 0) {
          iVar21 = iVar22 + 1;
        }
        uVar38 = (iVar21 >> 1) + iVar22;
        if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
        }
        if (local_480[1] < (int)uVar38) {
          UE::Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,uVar38,&local_488,local_480[0],local_480 + 1);
        }
        pFVar47 = local_488.Data + lVar54;
        pFVar30 = local_3b0 + (int)local_408;
        pFVar49 = local_3b0;
        local_408 = pFVar30;
        if (local_488.Data != pFVar47) {
          FVar48.Data = local_488.Data;
          pTVar51 = local_3d8;
          if (local_3b0 == pFVar30) goto LAB_147476eee;
          do {
            while( true ) {
              FVar5 = pFVar49->Name;
              FVar6 = (FVar48.Data)->Name;
              if (FVar6 != FVar5) break;
              (FVar48.Data)->Value = pFVar49->Value;
              pEVar40 = &pFVar49->Flags;
              pFVar49 = pFVar49 + 1;
              (FVar48.Data)->Flags = *pEVar40;
              if ((FVar48.Data + 1 == pFVar47) ||
                 (FVar48.Data = FVar48.Data + 1, pFVar49 == pFVar30)) goto LAB_147476e25;
            }
            iVar22 = FVar6.ComparisonIndex.Value.Value - FVar5.ComparisonIndex.Value;
            if (iVar22 == 0) {
              iVar22 = FVar6.Number - FVar5.Number;
            }
            if (iVar22 < 0) {
              FVar48.Data = FVar48.Data + 1;
              bVar19 = FVar48.Data == pFVar47;
            }
            else {
              lVar54 = (longlong)FVar48.Data - (longlong)local_488.Data;
              iVar22 = local_480[0];
              if (local_480[0] == local_480[1]) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                   (0x410,&local_488,local_480 + 1);
              }
              iVar21 = (int)(lVar54 >> 4);
              local_480[0] = iVar22 + 1;
              memmove(local_488.Data + iVar21 + 1,local_488.Data + iVar21,
                      (longlong)(iVar22 - iVar21) << 4);
              pFVar30 = local_488.Data + iVar21;
              (pFVar30->Name).ComparisonIndex = 0;
              (pFVar30->Name).Number = 0;
              pFVar30->Value = 0.0;
              pFVar30->Flags = None;
              *(undefined3 *)&pFVar30->field_0xd = 0;
              local_488.Data[iVar21].Value = 0.0;
              pFVar47 = local_488.Data + local_480[0];
              local_488.Data[iVar21].Name = pFVar49->Name;
              FVar48.Data = local_488.Data + (longlong)iVar21 + 1;
              local_488.Data[iVar21].Value = pFVar49->Value;
              pEVar40 = &pFVar49->Flags;
              pFVar49 = pFVar49 + 1;
              bVar19 = pFVar49 == local_408;
              local_488.Data[iVar21].Flags = *pEVar40;
              pFVar30 = local_408;
            }
          } while (!bVar19);
        }
LAB_147476e25:
        pTVar51 = local_3d8;
        if (pFVar49 < pFVar30) {
          lVar54 = (longlong)local_480[0];
          iVar22 = (int)((longlong)pFVar30 - (longlong)pFVar49 >> 4);
          uVar38 = local_480[0] + iVar22;
          if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
          }
          if (local_480[1] < (int)uVar38) {
            UE::Core::Private::
            ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x10,4,uVar38,&local_488,local_480[0],local_480 + 1);
          }
          UE::Core::Private::
          ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,iVar22,&local_488,local_480,local_480 + 1);
          lVar50 = (longlong)pFVar49 - (longlong)(local_488.Data + lVar54);
          pFVar30 = local_488.Data + lVar54;
          pEVar40 = &pFVar49->Flags;
          do {
            (pFVar30->Name).ComparisonIndex = 0;
            (pFVar30->Name).Number = 0;
            pFVar30->Value = 0.0;
            pFVar30->Flags = None;
            *(undefined3 *)&pFVar30->field_0xd = 0;
            pFVar30->Value = 0.0;
            pFVar30->Name = *(FName *)((longlong)pFVar30 + lVar50);
            pFVar49 = pFVar30 + 1;
            pFVar30->Value = *(float *)(pEVar40 + -4);
            pFVar30->Flags = *pEVar40;
            pFVar30 = pFVar49;
            pEVar40 = pEVar40 + 0x10;
            pTVar51 = local_3d8;
          } while ((FCurveElement *)((longlong)pFVar49 + lVar50) < local_408);
        }
      }
LAB_147476eee:
      fVar57 = fVar57 + fVar1;
      if (local_410 == 0) {
        local_378[0] = local_4a8[0];
        local_378._8_8_ = local_4a0.Data;
        local_368 = (int)local_498;
        local_364 = local_498._4_4_;
        local_360 = local_490;
        local_358 = local_488.Data;
        local_350 = local_480[0];
        local_34c = local_480[1];
        local_348 = local_478;
        local_378._4_4_ = local_4a8._4_4_;
        local_340 = 0;
        TStack_338.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_338.UniqueTypedBoneIndices.ArrayNum = 0;
        TStack_338.UniqueTypedBoneIndices.ArrayMax = 0;
        TStack_338.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_338.AttributeIdentifiers.ArrayNum = 0;
        TStack_338.AttributeIdentifiers.ArrayMax = 0;
        TStack_338.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_338.Values.ArrayNum = 0;
        TStack_338.Values.ArrayMax = 0;
        TStack_338.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_338.UniqueTypes.ArrayNum = 0;
        TStack_338.UniqueTypes.ArrayMax = 0;
        local_4a0.Data = (TTransform<double> *)0x0;
        local_498 = 0;
        local_490 = (FBoneContainer *)0x0;
        local_488.Data = (FCurveElement *)0x0;
        local_480[0] = 0;
        local_480[1] = 0;
        local_478 = 0;
        DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0,0);
        if (TStack_338.AttributeIdentifiers.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(TStack_338.AttributeIdentifiers.AllocatorInstance.Data);
        }
        TStack_338.AttributeIdentifiers.AllocatorInstance.Data =
             local_468.AttributeIdentifiers.AllocatorInstance.Data;
        TStack_338.AttributeIdentifiers.ArrayNum = local_468.AttributeIdentifiers.ArrayNum;
        TStack_338.AttributeIdentifiers.ArrayMax = local_468.AttributeIdentifiers.ArrayMax;
        local_468.AttributeIdentifiers.ArrayNum = 0;
        local_468.AttributeIdentifiers.ArrayMax = 0;
        local_468.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   TStack_338.UniqueTypedBoneIndices.AllocatorInstance.Data,
                   TStack_338.UniqueTypedBoneIndices.ArrayNum);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)
            TStack_338.UniqueTypedBoneIndices.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(TStack_338.UniqueTypedBoneIndices.AllocatorInstance.Data);
        }
        TStack_338.UniqueTypedBoneIndices.AllocatorInstance.Data =
             local_468.UniqueTypedBoneIndices.AllocatorInstance.Data;
        TStack_338.UniqueTypedBoneIndices.ArrayNum = local_468.UniqueTypedBoneIndices.ArrayNum;
        TStack_338.UniqueTypedBoneIndices.ArrayMax = local_468.UniqueTypedBoneIndices.ArrayMax;
        local_468.UniqueTypedBoneIndices.ArrayNum = 0;
        local_468.UniqueTypedBoneIndices.ArrayMax = 0;
        local_468.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                    *)TStack_338.Values.AllocatorInstance.Data,TStack_338.Values.ArrayNum);
        if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
             *)TStack_338.Values.AllocatorInstance.Data !=
            (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
             *)0x0) {
          FMemory::Free(TStack_338.Values.AllocatorInstance.Data);
        }
        TStack_338.Values.AllocatorInstance.Data = local_468.Values.AllocatorInstance.Data;
        TStack_338.Values.ArrayNum = local_468.Values.ArrayNum;
        TStack_338.Values.ArrayMax = local_468.Values.ArrayMax;
        local_468.Values.ArrayNum = 0;
        local_468.Values.ArrayMax = 0;
        local_468.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (TStack_338.UniqueTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_338.UniqueTypes.AllocatorInstance.Data);
        }
        pFVar7 = (pTVar51->AllocatorInstance).Data;
        TStack_338.UniqueTypes.AllocatorInstance.Data = local_468.UniqueTypes.AllocatorInstance.Data
        ;
        uVar14._0_4_ = local_468.UniqueTypes.ArrayNum;
        uVar14._4_4_ = local_468.UniqueTypes.ArrayMax;
        TStack_338.UniqueTypes.ArrayNum = local_468.UniqueTypes.ArrayNum;
        TStack_338.UniqueTypes.ArrayMax = local_468.UniqueTypes.ArrayMax;
        local_468.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_468.UniqueTypes.ArrayNum = 0;
        local_468.UniqueTypes.ArrayMax = 0;
        uVar3 = uVar14;
        if (((pFVar7 <= (FScriptContainerElement *)local_378) &&
            (uVar3 = TStack_338.UniqueTypes._8_8_,
            (FScriptContainerElement *)local_378 < pFVar7 + (longlong)pTVar51->ArrayMax * 0x80)) &&
           (TStack_338.UniqueTypes._8_8_ = uVar14,
           bVar19 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), uVar3 = TStack_338.UniqueTypes._8_8_, bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TStack_338.UniqueTypes._8_8_ = uVar3;
        iVar22 = pTVar51->ArrayNum;
        if (iVar22 == pTVar51->ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,&pTVar51->AllocatorInstance,&pTVar51->ArrayMax);
        }
        pTVar51->ArrayNum = iVar22 + 1;
        FSlotEvaluationPose::FSlotEvaluationPose
                  ((FSlotEvaluationPose *)
                   ((pTVar51->AllocatorInstance).Data + (longlong)iVar22 * 0x80),
                   (FSlotEvaluationPose *)local_378);
        this_03 = &TStack_338;
      }
      else {
        local_2f8[0] = local_4a8[0];
        local_2f8._8_8_ = local_4a0.Data;
        local_2e8 = (int)local_498;
        local_2e4 = local_498._4_4_;
        local_2e0 = local_490;
        local_2d8 = local_488.Data;
        local_2d0 = local_480[0];
        local_2cc = local_480[1];
        local_2c8 = local_478;
        local_2f8._4_4_ = local_4a8._4_4_;
        local_2c0 = 0;
        TStack_2b8.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_2b8.UniqueTypedBoneIndices.ArrayNum = 0;
        TStack_2b8.UniqueTypedBoneIndices.ArrayMax = 0;
        TStack_2b8.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_2b8.AttributeIdentifiers.ArrayNum = 0;
        TStack_2b8.AttributeIdentifiers.ArrayMax = 0;
        TStack_2b8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_2b8.Values.ArrayNum = 0;
        TStack_2b8.Values.ArrayMax = 0;
        TStack_2b8.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_2b8.UniqueTypes.ArrayNum = 0;
        TStack_2b8.UniqueTypes.ArrayMax = 0;
        local_4a0.Data = (TTransform<double> *)0x0;
        local_498 = 0;
        local_490 = (FBoneContainer *)0x0;
        local_488.Data = (FCurveElement *)0x0;
        local_480[0] = 0;
        local_480[1] = 0;
        local_478 = 0;
        DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0,0);
        if (TStack_2b8.AttributeIdentifiers.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(TStack_2b8.AttributeIdentifiers.AllocatorInstance.Data);
        }
        TStack_2b8.AttributeIdentifiers.AllocatorInstance.Data =
             local_468.AttributeIdentifiers.AllocatorInstance.Data;
        TStack_2b8.AttributeIdentifiers.ArrayNum = local_468.AttributeIdentifiers.ArrayNum;
        TStack_2b8.AttributeIdentifiers.ArrayMax = local_468.AttributeIdentifiers.ArrayMax;
        local_468.AttributeIdentifiers.ArrayNum = 0;
        local_468.AttributeIdentifiers.ArrayMax = 0;
        local_468.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   TStack_2b8.UniqueTypedBoneIndices.AllocatorInstance.Data,
                   TStack_2b8.UniqueTypedBoneIndices.ArrayNum);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)
            TStack_2b8.UniqueTypedBoneIndices.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(TStack_2b8.UniqueTypedBoneIndices.AllocatorInstance.Data);
        }
        TStack_2b8.UniqueTypedBoneIndices.AllocatorInstance.Data =
             local_468.UniqueTypedBoneIndices.AllocatorInstance.Data;
        TStack_2b8.UniqueTypedBoneIndices.ArrayNum = local_468.UniqueTypedBoneIndices.ArrayNum;
        TStack_2b8.UniqueTypedBoneIndices.ArrayMax = local_468.UniqueTypedBoneIndices.ArrayMax;
        local_468.UniqueTypedBoneIndices.ArrayNum = 0;
        local_468.UniqueTypedBoneIndices.ArrayMax = 0;
        local_468.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                    *)TStack_2b8.Values.AllocatorInstance.Data,TStack_2b8.Values.ArrayNum);
        if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
             *)TStack_2b8.Values.AllocatorInstance.Data !=
            (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
             *)0x0) {
          FMemory::Free(TStack_2b8.Values.AllocatorInstance.Data);
        }
        TStack_2b8.Values.AllocatorInstance.Data = local_468.Values.AllocatorInstance.Data;
        TStack_2b8.Values.ArrayNum = local_468.Values.ArrayNum;
        TStack_2b8.Values.ArrayMax = local_468.Values.ArrayMax;
        local_468.Values.ArrayNum = 0;
        local_468.Values.ArrayMax = 0;
        local_468.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (TStack_2b8.UniqueTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_2b8.UniqueTypes.AllocatorInstance.Data);
        }
        pTVar53 = local_418;
        TStack_2b8.UniqueTypes.AllocatorInstance.Data = local_468.UniqueTypes.AllocatorInstance.Data
        ;
        local_468.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar15._0_4_ = local_468.UniqueTypes.ArrayNum;
        uVar15._4_4_ = local_468.UniqueTypes.ArrayMax;
        TStack_2b8.UniqueTypes.ArrayNum = local_468.UniqueTypes.ArrayNum;
        TStack_2b8.UniqueTypes.ArrayMax = local_468.UniqueTypes.ArrayMax;
        local_468.UniqueTypes.ArrayNum = 0;
        local_468.UniqueTypes.ArrayMax = 0;
        pFVar7 = (local_418->AllocatorInstance).Data;
        uVar3 = uVar15;
        if (((pFVar7 <= (FScriptContainerElement *)local_2f8) &&
            (uVar3 = TStack_2b8.UniqueTypes._8_8_,
            (FScriptContainerElement *)local_2f8 < pFVar7 + (longlong)local_418->ArrayMax * 0x80))
           && (TStack_2b8.UniqueTypes._8_8_ = uVar15,
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), uVar3 = TStack_2b8.UniqueTypes._8_8_, bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TStack_2b8.UniqueTypes._8_8_ = uVar3;
        iVar22 = pTVar53->ArrayNum;
        if (iVar22 == pTVar53->ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,&pTVar53->AllocatorInstance,&pTVar53->ArrayMax);
        }
        pTVar53->ArrayNum = iVar22 + 1;
        FSlotEvaluationPose::FSlotEvaluationPose
                  ((FSlotEvaluationPose *)
                   ((pTVar53->AllocatorInstance).Data + (longlong)iVar22 * 0x80),
                   (FSlotEvaluationPose *)local_2f8);
        this_03 = &TStack_2b8;
      }
      UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
      ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(this_03);
      if (-1 < AnimationChannel->Enabled) {
        FAnimationBaseContext::FAnimationBaseContext(&local_138);
        local_138.AnimInstanceProxy = this;
        fVar56 = FAnimTrack::GetLength(local_3d0);
        dVar10 = (double)fVar56;
        if (local_278.CurrentTime <= (double)fVar56) {
          dVar10 = local_278.CurrentTime;
        }
        if (dVar10 <= 0.0) {
          dVar10 = 0.0;
        }
        this_02 = FAnimTrack::GetSegmentAtTime(local_3d0,(float)dVar10);
        if (this_02 != (FAnimSegment *)0x0) {
          local_40c = 0.0;
          local_1f8.DebugPtr = (UAnimationAsset *)0x0;
          pfStack_1f0 = (float *)0x0;
          local_1c8 = 0;
          pTStack_1c0 = (TReferenceControllerBase<1> *)0x0;
          local_198 = (FDeltaTimeRecord *)0x0;
          uStack_190 = 0;
          local_1e8 = 0x3f800000;
          local_1e0 = 0x3f800000;
          local_1d8 = 0x100;
          local_1d0 = 0;
          local_188 = 0;
          local_184 = 0;
          TVar26.DebugPtr =
               (UAnimationAsset *)FAnimSegment::GetAnimationData(this_02,(float)dVar10,&local_40c);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UAnimSequenceBase *)TVar26.DebugPtr != (UAnimSequenceBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar26.DebugPtr);
          }
          pfStack_1f0 = &local_40c;
          local_198 = &local_278.DeltaTimeRecord;
          local_1e8 = CONCAT44(fVar1,this_02->AnimPlayRate);
          local_1f8.DebugPtr = TVar26.DebugPtr;
          FAnimTrace::OutputAnimTickRecord(&local_138,(FAnimTickRecord *)&local_1f8.ObjectPtr);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_1c0);
        }
      }
      if (local_278.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.BonesRequired.AllocatorInstance.Data);
      }
      if (local_278.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.PoseCurves.AllocatorInstance.Data);
      }
      UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
      ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&local_468);
      pFVar42 = local_400;
    }
    pFVar42 = pFVar42 + 0xb;
    uVar39 = (ulonglong)local_424;
  } while( true );
}

// SlotEvaluatePose @ 147477fe0

void __thiscall
FAnimInstanceProxy::SlotEvaluatePose
          (FAnimInstanceProxy *this,FName *param_1,FCompactPose *param_2,FBlendedCurve *param_3,
          float param_4,FCompactPose *param_5,FBlendedCurve *param_6,float param_7,float param_8)

{
  FAnimationPoseData local_78;
  FAnimationPoseData local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_30 = 0;
  local_28 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FAnimationPoseData::FAnimationPoseData
            (&local_60,param_2,param_3,(FStackAttributeContainer *)&local_48);
  FAnimationPoseData::FAnimationPoseData
            (&local_78,param_5,param_6,(FStackAttributeContainer *)&local_48);
  SlotEvaluatePose(this,param_1,&local_60,param_4,&local_78,param_7,param_8);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_28,(int)local_20);
  if (local_28 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_48,(int)local_40);
  if (local_48 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// SlotEvaluatePoseWithBlendProfiles @ 147478100

void __thiscall
FAnimInstanceProxy::SlotEvaluatePoseWithBlendProfiles
          (FAnimInstanceProxy *this,FName *param_1,FAnimationPoseData *param_2,float param_3,
          FAnimationPoseData *param_4,float param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  float fVar5;
  <lambda_1> <Var6;
  undefined8 uVar7;
  byte bVar8;
  ForElementType<FBlendedCurve_const_*> FVar9;
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> FVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  __m128d _Var39;
  FBlendProfileScratchData *pFVar40;
  FAnimationPoseData *this_00;
  bool bVar41;
  char cVar42;
  bool bVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  FCompactPose *pFVar48;
  FBlendedCurve *pFVar49;
  FStackAttributeContainer *pFVar50;
  FCompactPose *pFVar51;
  FBlendedCurve *pFVar52;
  FStackAttributeContainer *pFVar53;
  FBlendProfileScratchData *pFVar54;
  FBoneContainer *pFVar55;
  FAnimInstanceProxy *pFVar56;
  UAnimMontage *pUVar57;
  FAnimTrack *this_01;
  EAnimInterpolationType *pEVar58;
  FSlotEvaluationPose *pFVar59;
  ForElementType<unsigned_char> FVar60;
  ForElementType<unsigned_char> FVar61;
  FScriptContainerElement *pFVar62;
  TArrayView<float_const_,int> *pTVar63;
  TArrayView<FBlendedCurve_const_*_const,int> *pTVar64;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *pTVar65;
  ForElementType<FBlendedCurve_const_*> FVar66;
  ForElementType<UE::Anim::FStackAttributeContainer_const_*> FVar67;
  ForElementType<float> FVar68;
  ForElementType<float> FVar69;
  ForElementType<FCompactPose_const_*> FVar70;
  ForElementType<FCompactPose_const_*> FVar71;
  ForElementType<unsigned_char> FVar72;
  <lambda_1> <Var73;
  uint uVar74;
  ForElementType<unsigned_char> FVar75;
  FSlotEvaluationPose *pFVar76;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_02;
  uint uVar77;
  ulonglong uVar78;
  longlong lVar79;
  TArray<FSlotEvaluationPose,TSizedDefaultAllocator<32>_> *pTVar80;
  undefined1 uVar81;
  longlong lVar82;
  longlong lVar83;
  FWeakObjectPtr *pFVar84;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar85;
  ulonglong uVar86;
  ulonglong uVar87;
  ulonglong uVar88;
  ulonglong uVar89;
  float fVar90;
  double dVar91;
  double dVar92;
  double dVar109;
  undefined1 auVar93 [16];
  double dVar110;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar111;
  double dVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar118;
  double dVar119;
  double dVar121;
  undefined1 auVar120 [16];
  double dVar122;
  float fVar123;
  double dVar124;
  undefined1 auVar125 [16];
  double dVar126;
  float fVar127;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar133;
  undefined4 uVar134;
  <lambda_1> local_578;
  undefined1 local_577;
  undefined1 local_576;
  undefined1 local_575;
  uint local_574;
  uint local_570;
  uint local_56c;
  FBlendProfileScratchData *local_568;
  uint local_560;
  FAnimInstanceProxy *local_558;
  ForElementType<unsigned_char> local_550;
  FWeakObjectPtr *local_548;
  FBlendedCurve *local_540;
  undefined1 local_538 [16];
  TArray<float,TSizedDefaultAllocator<32>_> *local_528;
  FStackAttributeContainer *local_520;
  FCompactPose *local_518;
  undefined1 local_510 [4];
  int local_50c;
  FName *local_508;
  ForElementType<float> local_500;
  UAnimMontage *local_4f8;
  TArray<FSlotEvaluationPose,TSizedDefaultAllocator<32>_> *local_4f0;
  ForElementType<FCompactPose_const_*> local_4e8;
  FCompactPose *local_4d8;
  double dStack_4d0;
  FWeakObjectPtr local_4c8;
  longlong local_4c0;
  FStackAttributeContainer *local_4b8;
  double dStack_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  FBlendedCurve *local_498;
  double dStack_490;
  FAnimationPoseData *local_488;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_478;
  double dStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [8];
  TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> local_450;
  FBoneContainer *local_440;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_438;
  FCurveFilter *local_420;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_418;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_3d8;
  FCurveFilter *local_3c0;
  FAnimExtractContext local_3b8;
  double local_368;
  undefined1 local_360;
  undefined8 local_35c;
  undefined4 local_354;
  undefined1 local_350;
  void *local_348;
  undefined8 local_340;
  void *local_338;
  undefined8 local_330;
  undefined1 local_327;
  code *local_318;
  undefined1 *local_310;
  __m128 local_308;
  TArrayView<float_const_,int> local_2f8;
  TArrayView<FBlendedCurve_const_*_const,int> local_2e8;
  TArrayView<float_const_,int> local_2d8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> local_2c8;
  FAnimationPoseData local_2b8;
  FAnimationPoseData local_2a0;
  TArrayView<float_const_,int> local_288;
  TArrayView<FBlendedCurve_const_*_const,int> local_278;
  TArrayView<float_const_,int> local_268;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_1f8;
  double dStack_1f0;
  FSlotEvaluationPose local_1e8;
  FSlotEvaluationPose local_168 [2];
  
  local_488 = param_4;
  local_558 = this;
  local_508 = param_1;
  pFVar48 = FAnimationPoseData::GetPose(param_2);
  local_4d8 = pFVar48;
  pFVar49 = FAnimationPoseData::GetCurve(param_2);
  local_540 = pFVar49;
  pFVar50 = FAnimationPoseData::GetAttributes(param_2);
  local_4b8 = pFVar50;
  pFVar51 = FAnimationPoseData::GetPose(param_4);
  local_518 = pFVar51;
  pFVar52 = FAnimationPoseData::GetCurve(param_4);
  local_498 = pFVar52;
  pFVar53 = FAnimationPoseData::GetAttributes(param_4);
  fVar133 = __real_3727c5ac;
  local_520 = pFVar53;
  if (param_5 <= __real_3727c5ac) {
    TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)pFVar51,
               (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)pFVar48);
    *(undefined8 *)&pFVar51->field_0x10 = *(undefined8 *)&pFVar48->field_0x10;
    FBlendedCurve::operator=(pFVar52,pFVar49);
    UE::Anim::FStackAttributeContainer::operator=(pFVar53,pFVar50);
  }
  else {
    local_310 = local_510;
    local_318 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FBlendProfileScratchData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar54 = (FBlendProfileScratchData *)
              FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_318,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendProfileScratchData>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    this_02 = &pFVar54->PerBoneWeights;
    pTVar85 = &pFVar54->PerBoneWeightTotals;
    local_568 = pFVar54;
    local_528 = pTVar85;
    local_478 = this_02;
    bVar41 = FBlendProfileScratchData::IsEmpty(pFVar54);
    if ((!bVar41) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("BlendProfileScratchData.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                            ,0x614,L""), bVar41)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar55 = TSharedPtr<FBoneContainer,1>::operator->(&this->RequiredBones);
    piVar1 = &(pFVar54->PerBoneWeightTotals).ArrayNum;
    iVar47 = (pFVar55->BoneIndicesArray).ArrayNum;
    lVar82 = (longlong)iVar47;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar47,&pTVar85->AllocatorInstance,piVar1,
               &(pFVar54->PerBoneWeightTotals).ArrayMax);
    uVar74 = 0;
    local_468._0_8_ = lVar82;
    if (0 < iVar47) {
      lVar83 = 0;
      do {
        uVar46 = 0;
        if ((int)uVar74 < *piVar1) {
          uVar46 = ~uVar74 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar74 = uVar74 + 1;
        *(undefined4 *)((pTVar85->AllocatorInstance).Data + lVar83 * 4) = 0;
        lVar83 = lVar83 + 1;
      } while (lVar83 < lVar82);
    }
    pFVar40 = local_568;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&local_568->PerBoneWeightTotalsAdditive,pTVar85);
    if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
       (pFVar56 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
      pFVar56 = this;
    }
    TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Reset
              (this_02,(pFVar56->MontageEvaluationData).ArrayNum);
    if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
       (pFVar56 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
      pFVar56 = this;
    }
    if ((0xfe < (pFVar56->MontageEvaluationData).ArrayNum) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetMontageEvaluationData().Num() < 255",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                            ,0x624,L""), bVar41)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_500 = (ForElementType<float>)&pFVar40->BlendingWeights;
    local_4f0 = &pFVar40->Poses;
    uVar74 = 0;
    FVar75 = (ForElementType<unsigned_char>)&pFVar40->PoseIndices;
    local_574 = 0;
    local_4e8 = (ForElementType<FCompactPose_const_*>)&pFVar40->BlendingPoses;
    local_56c = 0;
    local_4c0 = 0;
    auVar98 = ZEXT816(0);
    local_550 = FVar75;
    <Var73 = local_578;
    while( true ) {
      fVar14 = __real_3f800054;
      fVar90 = __real_3f800000;
      if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
         (pFVar56 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0))
      {
        pFVar56 = this;
      }
      fVar127 = 0.0;
      fVar130 = auVar98._0_4_;
      if ((pFVar56->MontageEvaluationData).ArrayNum <= (int)local_56c) break;
      if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
         (pFVar56 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0))
      {
        pFVar56 = this;
      }
      uVar46 = 0;
      if ((int)local_56c < (pFVar56->MontageEvaluationData).ArrayNum) {
        uVar46 = ~local_56c >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar84 = (FWeakObjectPtr *)
                ((pFVar56->MontageEvaluationData).AllocatorInstance.Data + local_4c0);
      local_548 = pFVar84;
      pUVar57 = (UAnimMontage *)FWeakObjectPtr::Get(pFVar84);
      local_4f8 = pUVar57;
      if ((pUVar57 != (UAnimMontage *)0x0) &&
         (bVar41 = UAnimMontage::IsValidSlot(pUVar57,*local_508), bVar41)) {
        local_4c8 = pFVar84[7];
        this_01 = UAnimMontage::GetAnimationData(pUVar57,*local_508);
        local_538._0_8_ = this_01;
        bVar41 = FAnimTrack::IsAdditive(this_01);
        if (bVar41) {
          bVar41 = FAnimTrack::IsRotationOffsetAdditive(this_01);
          local_50c = bVar41 + 1;
        }
        else {
          local_50c = 0;
        }
        local_458._4_4_ = pFVar84[4].ObjectIndex;
        local_458[0] = (uchar)local_50c;
        local_450.AllocatorInstance.Data = (TTransform<double> *)0x0;
        local_450.ArrayNum = 0;
        local_450.ArrayMax = 0;
        local_440 = (FBoneContainer *)0x0;
        local_438.Elements.AllocatorInstance.Data = (FCurveElement *)0x0;
        local_438.Elements.ArrayNum = 0;
        local_438.Elements.ArrayMax = 0;
        local_438.bSorted = false;
        local_420 = (FCurveFilter *)0x0;
        local_418.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_418.UniqueTypedBoneIndices.ArrayNum = 0;
        local_418.UniqueTypedBoneIndices.ArrayMax = 0;
        local_418.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_418.AttributeIdentifiers.ArrayNum = 0;
        local_418.AttributeIdentifiers.ArrayMax = 0;
        local_418.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_418.Values.ArrayNum = 0;
        local_418.Values.ArrayMax = 0;
        local_418.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_418.UniqueTypes.ArrayNum = 0;
        local_418.UniqueTypes.ArrayMax = 0;
        pFVar55 = (local_558->RequiredBones).Object;
        if (((pFVar55 == (FBoneContainer *)0x0) ||
            (bVar41 = FBoneContainer::IsValid(pFVar55), !bVar41)) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("InBoneContainer && InBoneContainer->IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                                ,0x97,L""), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar44 = (pFVar55->BoneIndicesArray).ArrayNum;
        local_440 = pFVar55;
        TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::Reset(&local_450,iVar44);
        UE::Core::Private::
        ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,iVar44,&local_450.AllocatorInstance,&local_450.ArrayNum,
                   &local_450.ArrayMax);
        pFVar56 = local_558;
        if (((local_558->RequiredBones).Object == (FBoneContainer *)0x0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pUVar57 = local_4f8;
        local_420 = &((pFVar56->RequiredBones).Object)->CurveFilter;
        uVar7 = *(undefined8 *)&pFVar84[8].ObjectSerialNumber;
        local_560 = pFVar84[9].ObjectSerialNumber;
        cVar42 = (**(code **)(local_4f8->_padding_ + 0x340))();
        if ((cVar42 == '\0') || (local_558->RootMotionMode == NoRootMotionExtraction)) {
          local_3b8.bExtractRootMotion = false;
        }
        else {
          local_3b8.bExtractRootMotion = true;
        }
        local_3b8.DeltaTimeRecord._8_4_ = local_560;
        local_3b8.CurrentTime = (double)(float)pFVar84[8].ObjectIndex;
        local_3b8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b8.PoseCurves.ArrayNum = 0;
        local_3b8.PoseCurves.ArrayMax = 0;
        local_3b8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b8.BonesRequired.ArrayNum = 0;
        local_3b8.BonesRequired.ArrayMax = 0;
        local_3b8.InterpolationOverride.bIsSet = false;
        local_3b8.bLooping = false;
        local_3b8.DeltaTimeRecord._0_8_ = uVar7;
        if ((&local_558->InterpolationOverride != &local_3b8.InterpolationOverride) &&
           ((local_558->InterpolationOverride).bIsSet != false)) {
          pEVar58 = TOptional<enum_EAnimInterpolationType>::GetValue
                              (&local_558->InterpolationOverride);
          local_3b8.InterpolationOverride.TypedValue = *pEVar58;
          local_3b8.InterpolationOverride.bIsSet = true;
        }
        FAnimationPoseData::FAnimationPoseData(&local_2a0,(FSlotEvaluationPose *)local_458);
        FAnimTrack::GetAnimationPose((FAnimTrack *)local_538._0_8_,&local_2a0,&local_3b8);
        local_3d8.Elements.AllocatorInstance.Data = (FCurveElement *)0x0;
        local_3d8.Elements.ArrayNum = 0;
        local_3d8.Elements.ArrayMax = 0;
        local_3d8.bSorted = false;
        local_3c0 = (FCurveFilter *)0x0;
        if (((local_558->RequiredBones).Object == (FBoneContainer *)0x0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_3c0 = &((local_558->RequiredBones).Object)->CurveFilter;
        local_348 = (void *)0x0;
        local_4a0 = 0;
        local_360 = 0;
        local_368 = (double)(float)pFVar84[8].ObjectIndex;
        local_354 = 0;
        local_338 = (void *)0x0;
        local_350 = 0;
        local_340 = 0;
        local_4a8 = 0;
        local_35c = 0;
        local_330 = 0;
        local_327 = 0;
        (**(code **)(pUVar57->_padding_ + 0x2f0))(pUVar57,&local_3d8,&local_368,0);
        UE::Anim::FNamedValueArrayUtils::
        Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                  (&local_438,&local_3d8,<Var73);
        uVar81 = (undefined1)uVar74;
        if (local_50c == 0) {
          pFVar59 = FSlotEvaluationPose::FSlotEvaluationPose
                              (&local_1e8,(FSlotEvaluationPose *)local_458);
          pTVar80 = local_4f0;
          pFVar76 = (FSlotEvaluationPose *)(local_4f0->AllocatorInstance).Data;
          if (((pFVar76 <= pFVar59) && (pFVar59 < pFVar76 + local_4f0->ArrayMax)) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar41)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar44 = pTVar80->ArrayNum;
          if (iVar44 == pTVar80->ArrayMax) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x880,&pTVar80->AllocatorInstance,&pTVar80->ArrayMax);
          }
          pTVar80->ArrayNum = iVar44 + 1;
          FSlotEvaluationPose::FSlotEvaluationPose
                    ((FSlotEvaluationPose *)
                     ((pTVar80->AllocatorInstance).Data + (longlong)iVar44 * 0x80),pFVar59);
          UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
          ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
                    ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                     &local_1e8.Attributes);
          FVar72 = *(ForElementType<unsigned_char> *)((longlong)FVar75 + 8);
          FVar60 = FVar75;
          if (FVar72 != (ForElementType<unsigned_char>)0x0) {
            FVar60 = FVar72;
          }
          local_577 = uVar81;
          if ((ulonglong)FVar60 <= &local_577) {
            FVar60 = FVar75;
            if (FVar72 != (ForElementType<unsigned_char>)0x0) {
              FVar60 = FVar72;
            }
            if ((&local_577 <
                 (undefined1 *)((longlong)FVar60 + (longlong)*(int *)((longlong)FVar75 + 0x14))) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar41)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          iVar44 = *(int *)((longlong)FVar75 + 0x10);
          if (iVar44 == *(int *)((longlong)FVar75 + 0x14)) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                               (0x101,(ForElementType<unsigned_char> *)FVar75,
                                (int *)((longlong)FVar75 + 0x14));
          }
          *(int *)((longlong)FVar75 + 0x10) = iVar44 + 1;
          FVar72 = FVar75;
          if (*(ForElementType<unsigned_char> *)((longlong)FVar75 + 8) !=
              (ForElementType<unsigned_char>)0x0) {
            FVar72 = *(ForElementType<unsigned_char> *)((longlong)FVar75 + 8);
          }
          *(undefined1 *)((longlong)iVar44 + (longlong)FVar72) = local_577;
          auVar98._0_4_ = fVar130 + (float)local_458._4_4_;
        }
        else {
          pFVar59 = FSlotEvaluationPose::FSlotEvaluationPose
                              (local_168,(FSlotEvaluationPose *)local_458);
          pFVar40 = local_568;
          pFVar76 = (FSlotEvaluationPose *)(local_568->AdditivePoses).AllocatorInstance.Data;
          if (((pFVar76 <= pFVar59) && (pFVar59 < pFVar76 + (local_568->AdditivePoses).ArrayMax)) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar41)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar44 = (pFVar40->AdditivePoses).ArrayNum;
          piVar1 = &(pFVar40->AdditivePoses).ArrayMax;
          if (iVar44 == *piVar1) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x880,&(pFVar40->AdditivePoses).AllocatorInstance,piVar1);
          }
          (pFVar40->AdditivePoses).ArrayNum = iVar44 + 1;
          FSlotEvaluationPose::FSlotEvaluationPose
                    ((FSlotEvaluationPose *)
                     ((pFVar40->AdditivePoses).AllocatorInstance.Data + (longlong)iVar44 * 0x80),
                     pFVar59);
          UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
          ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
                    ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                     &local_168[0].Attributes);
          FVar72 = (ForElementType<unsigned_char>)&pFVar40->AdditivePoseIndices;
          FVar60 = (pFVar40->AdditivePoseIndices).AllocatorInstance.SecondaryData;
          FVar61 = FVar72;
          if (FVar60 != (ForElementType<unsigned_char>)0x0) {
            FVar61 = FVar60;
          }
          local_576 = uVar81;
          if ((ulonglong)FVar61 <= &local_576) {
            FVar61 = FVar72;
            if (FVar60 != (ForElementType<unsigned_char>)0x0) {
              FVar61 = FVar60;
            }
            if ((&local_576 <
                 (undefined1 *)
                 ((longlong)FVar61 + (longlong)(pFVar40->AdditivePoseIndices).ArrayMax)) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar41)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          iVar44 = (pFVar40->AdditivePoseIndices).ArrayNum;
          piVar1 = &(pFVar40->AdditivePoseIndices).ArrayMax;
          if (iVar44 == *piVar1) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                               (0x101,(ForElementType<unsigned_char> *)FVar72,piVar1);
          }
          (pFVar40->AdditivePoseIndices).ArrayNum = iVar44 + 1;
          FVar60 = (pFVar40->AdditivePoseIndices).AllocatorInstance.SecondaryData;
          if (FVar60 != (ForElementType<unsigned_char>)0x0) {
            FVar72 = FVar60;
          }
          *(undefined1 *)((longlong)iVar44 + (longlong)FVar72) = local_576;
        }
        iVar44 = (pFVar54->PerBoneWeights).ArrayNum;
        piVar1 = &(pFVar54->PerBoneWeights).ArrayMax;
        if (iVar44 == *piVar1) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&this_02->AllocatorInstance,piVar1);
        }
        (pFVar54->PerBoneWeights).ArrayNum = iVar44 + 1;
        pFVar62 = (this_02->AllocatorInstance).Data + (longlong)iVar44 * 0x10;
        local_560 = ~uVar74 >> 0x1f;
        *(undefined8 *)pFVar62 = 0;
        *(undefined8 *)(pFVar62 + 8) = 0;
        uVar46 = 0;
        if ((int)uVar74 < (pFVar54->PerBoneWeights).ArrayNum) {
          uVar46 = local_560;
        }
        if ((uVar46 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar83 = (longlong)(int)uVar74 * 0x10;
        pFVar62 = (this_02->AllocatorInstance).Data + lVar83;
        local_538._0_8_ = lVar83;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar47,(ForAnyElementType *)pFVar62,(int *)(pFVar62 + 8),
                   (int *)(pFVar62 + 0xc));
        pFVar56 = local_558;
        uVar46 = local_560;
        iVar44 = local_548[4].ObjectIndex;
        if (local_4c8 == (FWeakObjectPtr)0x0) {
          uVar77 = 0;
          local_548 = (FWeakObjectPtr *)0x0;
          if (0 < lVar82) {
            do {
              uVar45 = 0;
              if ((int)uVar74 < (pFVar54->PerBoneWeights).ArrayNum) {
                uVar45 = uVar46;
              }
              if ((uVar45 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar62 = (this_02->AllocatorInstance).Data;
              local_538._0_8_ = pFVar62;
              uVar45 = 0;
              if ((int)uVar77 < *(int *)(pFVar62 + lVar83 + 8)) {
                uVar45 = ~uVar77 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar77 = uVar77 + 1;
              *(int *)(*(longlong *)(local_538._0_8_ + lVar83) + (longlong)local_548 * 4) = iVar44;
              local_548 = (FWeakObjectPtr *)((longlong)&local_548->ObjectIndex + 1);
              FVar75 = local_550;
              <Var73 = local_578;
            } while ((longlong)local_548 < lVar82);
          }
        }
        else {
          if (((local_558->RequiredBones).Object == (FBoneContainer *)0x0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar41)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          UBlendProfile::FillBoneScalesArray
                    ((UBlendProfile *)local_4c8,&local_568->BoneBlendProfileScales,
                     (pFVar56->RequiredBones).Object);
          pFVar84 = local_548;
          uVar46 = local_574;
          uVar77 = 0;
          local_4f8 = (UAnimMontage *)0x0;
          if (0 < lVar82) {
            uVar7 = local_538._0_8_;
            local_560 = ~uVar74 >> 0x1f;
            do {
              fVar90 = (float)pFVar84[10].ObjectIndex;
              local_578 = *(<lambda_1> *)((longlong)local_4c8 + 0x48);
              uVar74 = 0;
              if ((int)uVar77 < (local_568->BoneBlendProfileScales).ArrayNum) {
                uVar74 = ~uVar77 >> 0x1f;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar90 = UBlendProfile::CalculateBoneWeight
                                 (*(float *)((local_568->BoneBlendProfileScales).AllocatorInstance.
                                             Data + (longlong)local_4f8 * 4),
                                  (EBlendProfileMode)local_578,(FAlphaBlend *)(pFVar84 + 1),fVar90,
                                  (float)local_458._4_4_,false);
              uVar74 = 0;
              if ((int)uVar46 < (pFVar54->PerBoneWeights).ArrayNum) {
                uVar74 = local_560;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar62 = (this_02->AllocatorInstance).Data;
              local_538._0_8_ = pFVar62;
              uVar74 = 0;
              if ((int)uVar77 < *(int *)(pFVar62 + uVar7 + 8)) {
                uVar74 = ~uVar77 >> 0x1f;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar77 = uVar77 + 1;
              *(float *)(*(longlong *)(local_538._0_8_ + uVar7) + (longlong)local_4f8 * 4) = fVar90;
              local_4f8 = (UAnimMontage *)((longlong)&local_4f8->_padding_ + 1);
              FVar75 = local_550;
              <Var73 = local_578;
              uVar74 = local_574;
            } while ((longlong)local_4f8 < lVar82);
          }
        }
        uVar77 = 0;
        lVar83 = 0;
        uVar46 = uVar74;
        if (local_50c == 0) {
          if (0 < lVar82) {
            do {
              uVar45 = 0;
              if ((int)uVar46 < (pFVar54->PerBoneWeights).ArrayNum) {
                uVar45 = ~uVar74 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar62 = (this_02->AllocatorInstance).Data;
              local_538._0_8_ = pFVar62;
              uVar46 = 0;
              if ((int)uVar77 < *(int *)(pFVar62 + (longlong)(int)uVar74 * 0x10 + 8)) {
                uVar46 = ~uVar77 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar90 = *(float *)(*(longlong *)(local_538._0_8_ + (longlong)(int)uVar74 * 0x10) +
                                 lVar83 * 4);
              uVar46 = 0;
              if ((int)uVar77 < (local_568->PerBoneWeightTotals).ArrayNum) {
                uVar46 = ~uVar77 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar77 = uVar77 + 1;
              pFVar62 = (local_568->PerBoneWeightTotals).AllocatorInstance.Data;
              *(float *)(pFVar62 + lVar83 * 4) = fVar90 + *(float *)(pFVar62 + lVar83 * 4);
              lVar83 = lVar83 + 1;
              FVar75 = local_550;
              uVar46 = local_574;
              <Var73 = local_578;
            } while (lVar83 < lVar82);
          }
        }
        else if (0 < lVar82) {
          do {
            uVar45 = 0;
            if ((int)uVar46 < (pFVar54->PerBoneWeights).ArrayNum) {
              uVar45 = ~uVar74 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar41)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar62 = (this_02->AllocatorInstance).Data;
            local_538._0_8_ = pFVar62;
            uVar46 = 0;
            if ((int)uVar77 < *(int *)(pFVar62 + (longlong)(int)uVar74 * 0x10 + 8)) {
              uVar46 = ~uVar77 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar41)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            fVar90 = *(float *)(*(longlong *)((longlong)(int)uVar74 * 0x10 + local_538._0_8_) +
                               lVar83 * 4);
            uVar46 = 0;
            if ((int)uVar77 < (local_568->PerBoneWeightTotalsAdditive).ArrayNum) {
              uVar46 = ~uVar77 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar41)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar77 = uVar77 + 1;
            pFVar62 = (local_568->PerBoneWeightTotalsAdditive).AllocatorInstance.Data;
            *(float *)(pFVar62 + lVar83 * 4) = fVar90 + *(float *)(pFVar62 + lVar83 * 4);
            lVar83 = lVar83 + 1;
            FVar75 = local_550;
            uVar46 = local_574;
            <Var73 = local_578;
          } while (lVar83 < lVar82);
        }
        uVar74 = uVar46 + 1;
        local_574 = uVar74;
        if (local_338 != (void *)0x0) {
          FMemory::Free(local_338);
        }
        if (local_348 != (void *)0x0) {
          FMemory::Free(local_348);
        }
        if (local_3b8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.BonesRequired.AllocatorInstance.Data);
        }
        if (local_3b8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.PoseCurves.AllocatorInstance.Data);
        }
        UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
        ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&local_418);
      }
      local_56c = local_56c + 1;
      local_4c0 = local_4c0 + 0x58;
      this = local_558;
    }
    if (__real_3f800000 <= param_3) {
      param_3 = __real_3f800000;
    }
    if (param_3 <= 0.0) {
      param_3 = fVar127;
    }
    bVar41 = fVar133 < param_3;
    fVar123 = fVar133;
    if (bVar41) {
      uVar46 = TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
               AddDefaulted(this_02);
      uVar78 = (ulonglong)(int)uVar46;
      uVar74 = 0;
      if ((int)uVar46 < (pFVar54->PerBoneWeights).ArrayNum) {
        uVar74 = ~uVar46 >> 0x1f;
      }
      local_56c = uVar46;
      if ((uVar74 == 0) &&
         (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar43)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar83 = uVar78 * 0x10;
      TArray<float,TSizedDefaultAllocator<32>_>::Reset
                ((TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((this_02->AllocatorInstance).Data + lVar83),iVar47);
      uVar74 = 0;
      if ((int)uVar46 < (pFVar54->PerBoneWeights).ArrayNum) {
        uVar74 = ~uVar46 >> 0x1f;
      }
      if ((uVar74 == 0) &&
         (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar43)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar62 = (this_02->AllocatorInstance).Data + lVar83;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar47,(ForAnyElementType *)pFVar62,(int *)(pFVar62 + 8),(int *)(pFVar62 + 0xc)
                );
      uVar74 = local_56c;
      uVar46 = 0;
      if (0 < lVar82) {
        lVar79 = 0;
        local_560 = ~local_56c >> 0x1f;
        do {
          uVar77 = 0;
          if ((int)uVar74 < (pFVar54->PerBoneWeights).ArrayNum) {
            uVar77 = local_560;
          }
          if ((uVar77 == 0) &&
             (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar43)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar62 = (this_02->AllocatorInstance).Data;
          uVar77 = 0;
          if ((int)uVar46 < *(int *)(pFVar62 + lVar83 + 8)) {
            uVar77 = ~uVar46 >> 0x1f;
          }
          if ((uVar77 == 0) &&
             (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar43)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar46 = uVar46 + 1;
          *(float *)(*(longlong *)(pFVar62 + lVar83) + lVar79 * 4) = param_3;
          lVar79 = lVar79 + 1;
        } while (lVar79 < lVar82);
        uVar78 = (ulonglong)local_56c;
        FVar75 = local_550;
      }
      FVar72 = *(ForElementType<unsigned_char> *)((longlong)FVar75 + 8);
      local_575 = (undefined1)uVar78;
      FVar60 = FVar75;
      if (FVar72 != (ForElementType<unsigned_char>)0x0) {
        FVar60 = FVar72;
      }
      if ((ulonglong)FVar60 <= &local_575) {
        FVar60 = FVar75;
        if (FVar72 != (ForElementType<unsigned_char>)0x0) {
          FVar60 = FVar72;
        }
        if ((&local_575 <
             (undefined1 *)((longlong)FVar60 + (longlong)*(int *)((longlong)FVar75 + 0x14))) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      iVar47 = *(int *)((longlong)FVar75 + 0x10);
      if (iVar47 == *(int *)((longlong)FVar75 + 0x14)) {
        iVar47 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                           (0x101,(ForElementType<unsigned_char> *)FVar75,
                            (int *)((longlong)FVar75 + 0x14));
      }
      *(int *)((longlong)FVar75 + 0x10) = iVar47 + 1;
      FVar72 = FVar75;
      if (*(ForElementType<unsigned_char> *)((longlong)FVar75 + 8) !=
          (ForElementType<unsigned_char>)0x0) {
        FVar72 = *(ForElementType<unsigned_char> *)((longlong)FVar75 + 8);
      }
      *(undefined1 *)((longlong)iVar47 + (longlong)FVar72) = local_575;
      fVar123 = fVar14;
    }
    local_574 = 0;
    local_508 = (FName *)(longlong)local_4f0->ArrayNum;
    if (0 < (longlong)local_508) {
      local_548 = (FWeakObjectPtr *)0x0;
      pTVar85 = local_528;
      do {
        pFVar84 = local_548;
        uVar74 = 0;
        if ((int)local_574 < *(int *)((longlong)FVar75 + 0x10)) {
          uVar74 = ~local_574 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar72 = FVar75;
        if (*(ForElementType<unsigned_char> *)((longlong)FVar75 + 8) !=
            (ForElementType<unsigned_char>)0x0) {
          FVar72 = *(ForElementType<unsigned_char> *)((longlong)FVar75 + 8);
        }
        lVar83 = 0;
        bVar8 = *(byte *)((longlong)&pFVar84->ObjectIndex + (longlong)FVar72);
        uVar74 = 0;
        if (0 < lVar82) {
          uVar78 = (ulonglong)bVar8;
          do {
            uVar46 = 0;
            if ((int)uVar74 < pTVar85->ArrayNum) {
              uVar46 = ~uVar74 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar43)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            fVar5 = *(float *)((pTVar85->AllocatorInstance).Data + lVar83 * 4);
            if (fVar5 <= fVar123) {
              if (!bVar41) {
                if (((pFVar54->PerBoneWeights).ArrayNum <= (int)(uint)bVar8) &&
                   (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar43)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar62 = (this_02->AllocatorInstance).Data;
                uVar46 = 0;
                if ((int)uVar74 < *(int *)(pFVar62 + uVar78 * 0x10 + 8)) {
                  uVar46 = ~uVar74 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar43)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(undefined4 *)(*(longlong *)(pFVar62 + uVar78 * 0x10) + lVar83 * 4) = 0x3f800000;
                pTVar85 = local_528;
              }
            }
            else {
              if (((pFVar54->PerBoneWeights).ArrayNum <= (int)(uint)bVar8) &&
                 (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar43)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar62 = (this_02->AllocatorInstance).Data;
              local_538._0_8_ = pFVar62;
              uVar46 = 0;
              if ((int)uVar74 < *(int *)(pFVar62 + uVar78 * 0x10 + 8)) {
                uVar46 = ~uVar74 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar43)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar79 = *(longlong *)(local_538._0_8_ + uVar78 * 0x10);
              *(float *)(lVar79 + lVar83 * 4) = *(float *)(lVar79 + lVar83 * 4) / fVar5;
              pTVar85 = local_528;
            }
            uVar74 = uVar74 + 1;
            lVar83 = lVar83 + 1;
            FVar75 = local_550;
          } while (lVar83 < lVar82);
        }
        local_574 = local_574 + 1;
        local_548 = (FWeakObjectPtr *)((longlong)&local_548->ObjectIndex + 1);
      } while ((longlong)local_548 < (longlong)local_508);
    }
    if (bVar41) {
      uVar74 = 0;
      local_56c = *(int *)((longlong)FVar75 + 0x10) - 1;
      if (0 < lVar82) {
        local_548 = (FWeakObjectPtr *)0x0;
        local_570 = ~local_56c >> 0x1f;
        local_508 = (FName *)(longlong)*(int *)((longlong)FVar75 + 0x10);
        do {
          iVar47 = *(int *)((longlong)FVar75 + 0x10);
          uVar46 = 0;
          lVar83 = 0;
          fVar123 = fVar127;
          if (0 < iVar47 + -1) {
            do {
              uVar77 = 0;
              if ((int)uVar46 < iVar47) {
                uVar77 = ~uVar46 >> 0x1f;
              }
              if ((uVar77 == 0) &&
                 (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar43)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar72 = FVar75;
              if (*(ForElementType<unsigned_char> *)((longlong)FVar75 + 8) !=
                  (ForElementType<unsigned_char>)0x0) {
                FVar72 = *(ForElementType<unsigned_char> *)((longlong)FVar75 + 8);
              }
              bVar8 = *(byte *)((longlong)FVar72 + lVar83);
              if (((pFVar54->PerBoneWeights).ArrayNum <= (int)(uint)bVar8) &&
                 (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar43)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar62 = (this_02->AllocatorInstance).Data;
              local_538._0_8_ = pFVar62;
              uVar77 = 0;
              if ((int)uVar74 < *(int *)(pFVar62 + (ulonglong)bVar8 * 0x10 + 8)) {
                uVar77 = ~uVar74 >> 0x1f;
              }
              if ((uVar77 == 0) &&
                 (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar43)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar46 = uVar46 + 1;
              iVar47 = *(int *)((longlong)FVar75 + 0x10);
              lVar83 = lVar83 + 1;
              fVar123 = fVar123 + *(float *)(*(longlong *)
                                              (local_538._0_8_ + (ulonglong)bVar8 * 0x10) +
                                            (longlong)local_548 * 4);
            } while ((int)uVar46 < iVar47 + -1);
            lVar82 = local_468._0_8_;
          }
          pFVar84 = local_548;
          uVar46 = 0;
          if ((int)local_56c < iVar47) {
            uVar46 = local_570;
          }
          if ((uVar46 == 0) &&
             (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar43)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FVar72 = FVar75;
          if (*(ForElementType<unsigned_char> *)((longlong)FVar75 + 8) !=
              (ForElementType<unsigned_char>)0x0) {
            FVar72 = *(ForElementType<unsigned_char> *)((longlong)FVar75 + 8);
          }
          bVar8 = *(byte *)((longlong)FVar72 + -1 + (longlong)local_508);
          if (((pFVar54->PerBoneWeights).ArrayNum <= (int)(uint)bVar8) &&
             (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar43)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar62 = (this_02->AllocatorInstance).Data;
          uVar46 = 0;
          if ((int)uVar74 < *(int *)(pFVar62 + (ulonglong)bVar8 * 0x10 + 8)) {
            uVar46 = ~uVar74 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar43)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar74 = uVar74 + 1;
          *(float *)(*(longlong *)(pFVar62 + (ulonglong)bVar8 * 0x10) + (longlong)pFVar84 * 4) =
               fVar90 - fVar123;
          local_548 = (FWeakObjectPtr *)((longlong)&pFVar84->ObjectIndex + 1);
        } while ((longlong)local_548 < lVar82);
      }
    }
    pTVar80 = local_4f0;
    if (fVar14 < fVar130) {
      iVar47 = local_4f0->ArrayNum;
      uVar74 = 0;
      if (0 < iVar47) {
        lVar83 = 0;
        do {
          uVar46 = 0;
          if ((int)uVar74 < iVar47) {
            uVar46 = ~uVar74 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar43)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar62 = (pTVar80->AllocatorInstance).Data;
          uVar74 = uVar74 + 1;
          *(float *)(pFVar62 + lVar83 + 4) = *(float *)(pFVar62 + lVar83 + 4) / fVar130;
          lVar83 = lVar83 + 0x80;
          iVar47 = pTVar80->ArrayNum;
        } while ((int)uVar74 < iVar47);
      }
    }
    FVar71 = local_4e8;
    uVar74 = pTVar80->ArrayNum + (uint)bVar41;
    local_570 = uVar74;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPose_const_*>_>
              (8,8,uVar74,(ForElementType<FCompactPose_const_*> *)local_4e8,
               (int *)((longlong)local_4e8 + 0x48),(int *)((longlong)local_4e8 + 0x4c));
    pFVar54 = local_568;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve_const_*>_>
              (8,8,uVar74,&(local_568->BlendingCurves).AllocatorInstance,
               &(local_568->BlendingCurves).ArrayNum,&(local_568->BlendingCurves).ArrayMax);
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FStackAttributeContainer_const_*>_>
              (8,8,uVar74,&(pFVar54->BlendingAttributes).AllocatorInstance,
               &(pFVar54->BlendingAttributes).ArrayNum,&(pFVar54->BlendingAttributes).ArrayMax);
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,uVar74,(ForElementType<float> *)local_500,(int *)((longlong)local_500 + 0x28),
               (int *)((longlong)local_500 + 0x2c));
    FVar69 = local_500;
    iVar47 = pTVar80->ArrayNum;
    uVar46 = 0;
    if (0 < iVar47) {
      lVar83 = 0;
      lVar82 = 0;
      local_548 = (FWeakObjectPtr *)0x0;
      do {
        uVar74 = 0;
        if ((int)uVar46 < iVar47) {
          uVar74 = ~uVar46 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_538._0_8_ = (pTVar80->AllocatorInstance).Data + (longlong)(int)uVar46 * 0x80 + 8;
        uVar74 = 0;
        if ((int)uVar46 < *(int *)((longlong)FVar71 + 0x48)) {
          uVar74 = ~uVar46 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar70 = FVar71;
        if (*(ForElementType<FCompactPose_const_*> *)((longlong)FVar71 + 0x40) !=
            (ForElementType<FCompactPose_const_*>)0x0) {
          FVar70 = *(ForElementType<FCompactPose_const_*> *)((longlong)FVar71 + 0x40);
        }
        *(undefined8 *)(lVar82 + (longlong)FVar70) = local_538._0_8_;
        uVar74 = 0;
        if ((int)uVar46 < pTVar80->ArrayNum) {
          uVar74 = ~uVar46 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_538._0_8_ = (pTVar80->AllocatorInstance).Data;
        uVar74 = 0;
        if ((int)uVar46 < (local_568->BlendingCurves).ArrayNum) {
          uVar74 = ~uVar46 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar9 = (local_568->BlendingCurves).AllocatorInstance.SecondaryData;
        FVar66 = (ForElementType<FBlendedCurve_const_*>)&local_568->BlendingCurves;
        if (FVar9 != (ForElementType<FBlendedCurve_const_*>)0x0) {
          FVar66 = FVar9;
        }
        *(longlong *)(lVar82 + (longlong)FVar66) =
             (longlong)(int)uVar46 * 0x80 + local_538._0_8_ + 0x20;
        uVar74 = 0;
        if ((int)uVar46 < pTVar80->ArrayNum) {
          uVar74 = ~uVar46 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar62 = (pTVar80->AllocatorInstance).Data;
        uVar74 = 0;
        if ((int)uVar46 < (local_568->BlendingAttributes).ArrayNum) {
          uVar74 = ~uVar46 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar10 = (local_568->BlendingAttributes).AllocatorInstance.SecondaryData;
        FVar67 = (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)
                 &local_568->BlendingAttributes;
        if (FVar10 != (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)0x0) {
          FVar67 = FVar10;
        }
        *(FScriptContainerElement **)(lVar82 + (longlong)FVar67) =
             pFVar62 + (longlong)(int)uVar46 * 0x80 + 0x40;
        uVar74 = 0;
        if ((int)uVar46 < pTVar80->ArrayNum) {
          uVar74 = ~uVar46 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar134 = *(undefined4 *)((pTVar80->AllocatorInstance).Data + lVar83 + 4);
        uVar74 = 0;
        if ((int)uVar46 < *(int *)((longlong)FVar69 + 0x28)) {
          uVar74 = ~uVar46 >> 0x1f;
        }
        if ((uVar74 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar68 = FVar69;
        if (*(ForElementType<float> *)((longlong)FVar69 + 0x20) != (ForElementType<float>)0x0) {
          FVar68 = *(ForElementType<float> *)((longlong)FVar69 + 0x20);
        }
        uVar46 = uVar46 + 1;
        lVar82 = lVar82 + 8;
        lVar83 = lVar83 + 0x80;
        *(undefined4 *)((longlong)local_548 + (longlong)FVar68) = uVar134;
        local_548 = (FWeakObjectPtr *)((longlong)local_548 + 4);
        iVar47 = pTVar80->ArrayNum;
      } while ((int)uVar46 < iVar47);
      this_02 = local_478;
      lVar82 = local_468._0_8_;
      FVar75 = local_550;
      uVar74 = local_570;
    }
    pFVar50 = local_4b8;
    if (bVar41) {
      uVar74 = uVar74 - 1;
      uVar46 = 0;
      if ((int)uVar74 < *(int *)((longlong)FVar71 + 0x48)) {
        uVar46 = ~uVar74 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (*(ForElementType<FCompactPose_const_*> *)((longlong)FVar71 + 0x40) !=
          (ForElementType<FCompactPose_const_*>)0x0) {
        FVar71 = *(ForElementType<FCompactPose_const_*> *)((longlong)FVar71 + 0x40);
      }
      *(FCompactPose **)((longlong)FVar71 + (longlong)(int)uVar74 * 8) = local_4d8;
      uVar46 = 0;
      if ((int)uVar74 < (local_568->BlendingCurves).ArrayNum) {
        uVar46 = ~uVar74 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar54 = local_568;
      FVar9 = (local_568->BlendingCurves).AllocatorInstance.SecondaryData;
      FVar66 = (ForElementType<FBlendedCurve_const_*>)&local_568->BlendingCurves;
      if (FVar9 != (ForElementType<FBlendedCurve_const_*>)0x0) {
        FVar66 = FVar9;
      }
      *(FBlendedCurve **)((longlong)FVar66 + (longlong)(int)uVar74 * 8) = local_540;
      uVar46 = 0;
      if ((int)uVar74 < (local_568->BlendingAttributes).ArrayNum) {
        uVar46 = ~uVar74 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar50 = local_4b8;
      FVar69 = local_500;
      FVar10 = (pFVar54->BlendingAttributes).AllocatorInstance.SecondaryData;
      FVar67 = (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)
               &pFVar54->BlendingAttributes;
      if (FVar10 != (ForElementType<UE::Anim::FStackAttributeContainer_const_*>)0x0) {
        FVar67 = FVar10;
      }
      *(FStackAttributeContainer **)((longlong)FVar67 + (longlong)(int)uVar74 * 8) = local_4b8;
      if (fVar14 < fVar130) {
        param_3 = param_3 / fVar130;
      }
      uVar46 = 0;
      if ((int)uVar74 < *(int *)((longlong)local_500 + 0x28)) {
        uVar46 = ~uVar74 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar68 = *(ForElementType<float> *)((longlong)FVar69 + 0x20);
      if (FVar68 != (ForElementType<float>)0x0) {
        FVar69 = FVar68;
      }
      *(float *)((longlong)FVar69 + (longlong)(int)uVar74 * 4) = param_3;
    }
    pFVar54 = local_568;
    if (pTVar80->ArrayNum == 0) {
      if (((local_568->AdditivePoseIndices).ArrayNum < 1) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("AdditivePoseIndices.Num() > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                              ,0x6ea,L""), bVar41)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar51 = local_4d8;
      pFVar48 = local_518;
      TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)local_518,
                 (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)local_4d8);
      *(undefined8 *)&pFVar48->field_0x10 = *(undefined8 *)&pFVar51->field_0x10;
      FBlendedCurve::operator=(local_498,local_540);
      UE::Anim::FStackAttributeContainer::operator=(local_520,pFVar50);
    }
    else {
      local_574 = 0;
      if (0 < (int)local_570) {
        local_558 = (FAnimInstanceProxy *)0x0;
        do {
          pFVar56 = local_558;
          uVar74 = local_574;
          uVar46 = 0;
          if ((int)local_574 < *(int *)((longlong)FVar75 + 0x10)) {
            uVar46 = ~local_574 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar41)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FVar71 = local_4e8;
          uVar46 = local_574;
          FVar72 = FVar75;
          if (*(ForElementType<unsigned_char> *)((longlong)FVar75 + 8) !=
              (ForElementType<unsigned_char>)0x0) {
            FVar72 = *(ForElementType<unsigned_char> *)((longlong)FVar75 + 8);
          }
          pFVar48 = (FCompactPose *)(ulonglong)*(byte *)((longlong)pFVar56 + (longlong)FVar72);
          local_4d8 = pFVar48;
          if (uVar74 == 0) {
            lVar83 = 0;
            uVar74 = local_574;
            if (0 < lVar82) {
              local_540 = (FBlendedCurve *)
                          ((ulonglong)*(byte *)((longlong)pFVar56 + (longlong)FVar72) << 4);
              lVar79 = 0;
              uVar46 = 0;
              do {
                if ((this_02->ArrayNum <= (int)pFVar48) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_520 = (FStackAttributeContainer *)(this_02->AllocatorInstance).Data;
                uVar74 = 0;
                if ((int)uVar46 < *(int *)(&local_540->field_0x8 + (longlong)local_520)) {
                  uVar74 = ~uVar46 >> 0x1f;
                }
                if ((uVar74 == 0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar90 = *(float *)(*(longlong *)(&local_540->field_0x0 + (longlong)local_520) +
                                   lVar83 * 4);
                uVar74 = 0;
                if ((int)uVar46 < *(int *)&local_518->field_0x8) {
                  uVar74 = ~uVar46 >> 0x1f;
                }
                if ((uVar74 == 0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar12 = *(longlong *)local_518;
                if ((*(int *)((longlong)FVar71 + 0x48) < 1) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                FVar70 = FVar71;
                if (*(ForElementType<FCompactPose_const_*> *)((longlong)FVar71 + 0x40) !=
                    (ForElementType<FCompactPose_const_*>)0x0) {
                  FVar70 = *(ForElementType<FCompactPose_const_*> *)((longlong)FVar71 + 0x40);
                }
                local_520 = *(FStackAttributeContainer **)
                             ((longlong)FVar70 + (longlong)local_558 * 8);
                uVar74 = 0;
                if ((int)uVar46 < *(int *)&local_520->field_0x8) {
                  uVar74 = ~uVar46 >> 0x1f;
                }
                if ((uVar74 == 0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar46 = uVar46 + 1;
                dVar91 = (double)fVar90;
                dVar109 = (double)fVar90;
                lVar83 = lVar83 + 1;
                lVar11 = *(longlong *)local_520;
                pdVar3 = (double *)(lVar79 + 0x10 + lVar11);
                dVar92 = *pdVar3;
                pdVar4 = (double *)(lVar79 + 0x20 + lVar11);
                dVar110 = *pdVar4;
                dVar112 = pdVar4[1];
                pdVar4 = (double *)(lVar79 + 0x30 + lVar11);
                dVar124 = *pdVar4;
                dVar126 = pdVar4[1];
                pdVar4 = (double *)(lVar79 + 0x40 + lVar11);
                dVar34 = *pdVar4;
                dVar35 = pdVar4[1];
                pdVar4 = (double *)(lVar79 + 0x50 + lVar11);
                dVar37 = *pdVar4;
                dVar38 = pdVar4[1];
                dVar111 = (double)fVar90;
                dVar115 = (double)fVar90;
                dVar118 = ((double *)(lVar79 + lVar11))[1];
                dVar22 = pdVar3[1] * dVar115;
                *(double *)(lVar79 + lVar12) = *(double *)(lVar79 + lVar11) * dVar91;
                ((double *)(lVar79 + lVar12))[1] = dVar118 * dVar109;
                auVar131._8_4_ = SUB84(dVar22,0);
                auVar131._0_8_ = dVar92 * dVar111;
                auVar131._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
                *(undefined1 (*) [16])(lVar79 + 0x10 + lVar12) = auVar131;
                dVar112 = dVar112 * dVar109;
                auVar113._0_8_ = dVar124 * dVar111;
                auVar113._8_8_ = dVar126 * dVar115;
                auVar26._8_4_ = SUB84(dVar112,0);
                auVar26._0_8_ = dVar110 * dVar91;
                auVar26._12_4_ = (int)((ulonglong)dVar112 >> 0x20);
                *(undefined1 (*) [16])(lVar79 + 0x20 + lVar12) = auVar26;
                *(undefined1 (*) [16])(lVar79 + 0x30 + lVar12) = auVar113;
                pdVar3 = (double *)(lVar79 + 0x40 + lVar12);
                *pdVar3 = dVar34 * dVar91;
                pdVar3[1] = dVar35 * dVar109;
                pdVar3 = (double *)(lVar79 + 0x50 + lVar12);
                *pdVar3 = dVar37 * dVar111;
                pdVar3[1] = dVar38 * dVar115;
                lVar79 = lVar79 + 0x60;
                pFVar48 = (FCompactPose *)((ulonglong)local_4d8 & 0xffffffff);
                FVar75 = local_550;
                uVar74 = local_574;
              } while (lVar83 < lVar82);
            }
          }
          else {
            uVar77 = 0;
            lVar83 = 0;
            if (0 < lVar82) {
              local_540 = (FBlendedCurve *)((longlong)pFVar48 << 4);
              local_560 = ~uVar74 >> 0x1f;
              do {
                if ((this_02->ArrayNum <= (int)pFVar48) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar62 = (this_02->AllocatorInstance).Data;
                uVar74 = 0;
                if ((int)uVar77 < *(int *)(&local_540->field_0x8 + (longlong)pFVar62)) {
                  uVar74 = ~uVar77 >> 0x1f;
                }
                if ((uVar74 == 0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar90 = *(float *)(*(longlong *)(&local_540->field_0x0 + (longlong)pFVar62) +
                                   lVar83 * 4);
                uVar74 = 0;
                if ((int)uVar77 < *(int *)&local_518->field_0x8) {
                  uVar74 = ~uVar77 >> 0x1f;
                }
                if ((uVar74 == 0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar79 = *(longlong *)local_518;
                uVar74 = 0;
                if ((int)uVar46 < *(int *)((longlong)local_4e8 + 0x48)) {
                  uVar74 = local_560;
                }
                if ((uVar74 == 0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                FVar71 = local_4e8;
                if (*(ForElementType<FCompactPose_const_*> *)((longlong)local_4e8 + 0x40) !=
                    (ForElementType<FCompactPose_const_*>)0x0) {
                  FVar71 = *(ForElementType<FCompactPose_const_*> *)((longlong)local_4e8 + 0x40);
                }
                local_520 = *(FStackAttributeContainer **)
                             ((longlong)FVar71 + (longlong)local_558 * 8);
                uVar74 = 0;
                if ((int)uVar77 < *(int *)&local_520->field_0x8) {
                  uVar74 = ~uVar77 >> 0x1f;
                }
                if ((uVar74 == 0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar41)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_308.m128_f32[0] = fVar90;
                local_308.m128_f32[1] = fVar90;
                local_308.m128_f32[2] = fVar90;
                local_308.m128_f32[3] = fVar90;
                UE::Math::TTransform<double>::AccumulateWithShortestRotation
                          ((TTransform<double> *)((longlong)(int)uVar77 * 0x60 + lVar79),
                           (TTransform<double> *)
                           ((longlong)(int)uVar77 * 0x60 + *(longlong *)local_520),
                           (ScalarRegister *)&local_308);
                uVar77 = uVar77 + 1;
                lVar83 = lVar83 + 1;
                pFVar48 = (FCompactPose *)((ulonglong)local_4d8 & 0xffffffff);
                FVar75 = local_550;
                uVar74 = local_574;
              } while (lVar83 < lVar82);
            }
          }
          local_574 = uVar74 + 1;
          local_558 = (FAnimInstanceProxy *)((longlong)local_558 + 1);
        } while ((longlong)local_558 < (longlong)(int)local_570);
      }
      pFVar48 = local_518;
      FCompactPose::NormalizeRotations(local_518);
      pFVar54 = local_568;
    }
    iVar47 = (pFVar54->AdditivePoses).ArrayNum;
    pTVar80 = &pFVar54->AdditivePoses;
    local_570 = 0;
    if (0 < iVar47) {
      local_558 = (FAnimInstanceProxy *)0x0;
      lVar83 = 0;
      do {
        uVar74 = local_570;
        uVar77 = ~local_570;
        uVar46 = 0;
        if ((int)local_570 < iVar47) {
          uVar46 = uVar77 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar62 = (pTVar80->AllocatorInstance).Data;
        uVar46 = 0;
        if ((int)uVar74 < (local_568->AdditivePoseIndices).ArrayNum) {
          uVar46 = uVar77 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar75 = (local_568->AdditivePoseIndices).AllocatorInstance.SecondaryData;
        FVar72 = (ForElementType<unsigned_char>)&local_568->AdditivePoseIndices;
        if (FVar75 != (ForElementType<unsigned_char>)0x0) {
          FVar72 = FVar75;
        }
        FVar75._1_7_ = 0;
        FVar75._0_1_ = *(byte *)((longlong)local_558 + (longlong)FVar72);
        local_56c = (uint)*(byte *)((longlong)local_558 + (longlong)FVar72);
        uVar46 = 0;
        if ((int)uVar74 < (local_568->AdditivePoses).ArrayNum) {
          uVar46 = ~uVar74 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_550 = FVar75;
        if ((local_568->AdditivePoses).AllocatorInstance.Data[lVar83] ==
            (FScriptContainerElement)0x2) {
          FAnimationRuntime::ConvertPoseToMeshRotation(pFVar48);
          uVar46 = 0;
          local_528 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
          if (0 < lVar82) {
            local_540 = (FBlendedCurve *)((longlong)local_550 << 4);
            local_468 = ZEXT816(0);
            local_538 = ZEXT816(0);
            lVar79 = 0;
            do {
              auVar131 = local_468;
              auVar98 = local_538;
              uVar74 = 0;
              if ((int)uVar46 < *(int *)(pFVar62 + lVar83 + 0x10)) {
                uVar74 = ~uVar46 >> 0x1f;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar12 = *(longlong *)(pFVar62 + lVar83 + 8);
              puVar2 = (undefined8 *)(lVar79 + 0x20 + lVar12);
              local_498 = (FBlendedCurve *)*puVar2;
              dStack_490 = (double)puVar2[1];
              dVar22 = *(double *)(lVar79 + lVar12);
              dVar112 = ((double *)(lVar79 + lVar12))[1];
              pdVar3 = (double *)(lVar79 + 0x10 + lVar12);
              dVar111 = *pdVar3;
              dVar115 = pdVar3[1];
              puVar2 = (undefined8 *)(lVar79 + 0x30 + lVar12);
              local_478 = (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                           *)*puVar2;
              dStack_470 = (double)puVar2[1];
              puVar2 = (undefined8 *)(lVar79 + 0x40 + lVar12);
              local_4d8 = (FCompactPose *)*puVar2;
              dStack_4d0 = (double)puVar2[1];
              puVar2 = (undefined8 *)(lVar79 + 0x50 + lVar12);
              local_4b8 = (FStackAttributeContainer *)*puVar2;
              dStack_4b0 = (double)puVar2[1];
              if ((this_02->ArrayNum <= (int)local_56c) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              local_520 = (FStackAttributeContainer *)(this_02->AllocatorInstance).Data;
              uVar74 = 0;
              if ((int)uVar46 < *(int *)(&local_520->field_0x8 + (longlong)local_540)) {
                uVar74 = ~uVar46 >> 0x1f;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar48 = local_518;
              fVar133 = *(float *)(*(longlong *)
                                    (&local_540->field_0x0 + (longlong)&local_520->field_0x0) +
                                  (longlong)local_528 * 4);
              uVar74 = 0;
              if ((int)uVar46 < *(int *)&local_518->field_0x8) {
                uVar74 = ~uVar46 >> 0x1f;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              dVar118 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
              dVar121 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
              lVar12 = *(longlong *)pFVar48;
              dVar91 = auVar131._0_8_;
              dVar109 = auVar131._8_8_;
              uVar78 = -(ulonglong)(dVar91 <= dVar22);
              uVar87 = -(ulonglong)(dVar109 <= dVar112);
              dVar34 = (double)fVar133;
              dVar35 = (double)fVar133;
              uVar134 = (undefined4)((ulonglong)dVar35 >> 0x20);
              dVar92 = auVar98._0_8_;
              dVar110 = auVar98._8_8_;
              uVar86 = -(ulonglong)(dVar92 <= dVar111);
              uVar88 = -(ulonglong)(dVar110 <= dVar115);
              dVar37 = (double)fVar133;
              dVar38 = (double)fVar133;
              dVar124 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
              dVar126 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
              fVar127 = GlobalVectorConstants::Float1110.m128_f32[0];
              fVar90 = GlobalVectorConstants::Float1110.m128_f32[1];
              fVar133 = GlobalVectorConstants::Float1110.m128_f32[2];
              fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
              dVar91 = dVar91 - dVar118;
              dVar109 = dVar109 - dVar121;
              auVar116._0_4_ = ~(uint)uVar78 & SUB84(dVar91,0);
              auVar116._4_4_ = ~(uint)(uVar78 >> 0x20) & (uint)((ulonglong)dVar91 >> 0x20);
              auVar116._8_4_ = ~(uint)uVar87 & SUB84(dVar109,0);
              auVar116._12_4_ = ~(uint)(uVar87 >> 0x20) & (uint)((ulonglong)dVar109 >> 0x20);
              auVar15._8_4_ = (int)(uVar87 & (ulonglong)dVar121);
              auVar15._0_8_ = uVar78 & (ulonglong)dVar118;
              auVar15._12_4_ = (int)((uVar87 & (ulonglong)dVar121) >> 0x20);
              auVar93._8_4_ = SUB84(dVar35,0);
              auVar93._0_8_ = dVar34;
              auVar93._12_4_ = uVar134;
              dVar91 = SUB168(auVar116 | auVar15,0) *
                       ((double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar34) +
                       dVar34 * dVar22;
              dVar109 = SUB168(auVar116 | auVar15,8) *
                        ((double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar35) +
                        auVar93._8_8_ * dVar112;
              local_248 = *(double *)(lVar79 + lVar12);
              dStack_240 = ((double *)(lVar79 + lVar12))[1];
              dVar92 = dVar92 - dVar124;
              dVar110 = dVar110 - dVar126;
              auVar114._0_4_ = ~(uint)uVar86 & SUB84(dVar92,0);
              auVar114._4_4_ = ~(uint)(uVar86 >> 0x20) & (uint)((ulonglong)dVar92 >> 0x20);
              auVar114._8_4_ = ~(uint)uVar88 & SUB84(dVar110,0);
              auVar114._12_4_ = ~(uint)(uVar88 >> 0x20) & (uint)((ulonglong)dVar110 >> 0x20);
              auVar23._8_4_ = (int)(uVar88 & (ulonglong)dVar126);
              auVar23._0_8_ = uVar86 & (ulonglong)dVar124;
              auVar23._12_4_ = (int)((uVar88 & (ulonglong)dVar126) >> 0x20);
              auVar94._8_4_ = SUB84(dVar38,0);
              auVar94._0_8_ = dVar37;
              auVar94._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
              dVar111 = SUB168(auVar114 | auVar23,0) *
                        ((double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar37) +
                        dVar37 * dVar111;
              dVar115 = SUB168(auVar114 | auVar23,8) *
                        ((double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar38) +
                        auVar94._8_8_ * dVar115;
              auVar95._8_4_ = SUB84(dVar109,0);
              auVar95._0_8_ = dVar91;
              auVar95._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
              dVar22 = dVar111 * dVar111 + dVar91 * dVar91;
              dVar112 = dVar115 * dVar115 + auVar95._8_8_ * dVar109;
              auVar96._8_4_ = SUB84(dVar112,0);
              auVar96._0_8_ = dVar22;
              auVar96._12_4_ = (int)((ulonglong)dVar112 >> 0x20);
              auVar97._0_8_ = auVar96._8_8_ + dVar22;
              auVar97._8_8_ = dVar22 + dVar112;
              uVar86 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                        auVar97._0_8_);
              uVar88 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                        auVar97._8_8_);
              uVar87 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                        auVar97._0_8_);
              uVar89 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                        auVar97._8_8_);
              auVar98 = sqrtpd(auVar97,auVar97);
              auVar131 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                               auVar98);
              auVar98 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar98);
              auVar132._0_8_ = uVar87 & (ulonglong)(auVar131._0_8_ * dVar91);
              uVar78 = uVar89 & (ulonglong)(auVar131._8_8_ * dVar109);
              auVar132._8_4_ = (undefined4)uVar78;
              auVar132._12_4_ = (undefined4)(uVar78 >> 0x20);
              pdVar3 = (double *)(lVar79 + 0x10 + lVar12);
              local_238 = *pdVar3;
              dStack_230 = pdVar3[1];
              auVar128._0_8_ = uVar86 & (ulonglong)(auVar98._0_8_ * dVar111);
              uVar78 = uVar88 & (ulonglong)(auVar98._8_8_ * dVar115);
              auVar128._8_4_ = (undefined4)uVar78;
              auVar128._12_4_ = (undefined4)(uVar78 >> 0x20);
              auVar16._4_4_ = ~(uint)(uVar87 >> 0x20) & (uint)((ulonglong)dVar118 >> 0x20);
              auVar16._0_4_ = ~(uint)uVar87 & SUB84(dVar118,0);
              auVar16._8_4_ = ~(uint)uVar89 & SUB84(dVar121,0);
              auVar16._12_4_ = ~(uint)(uVar89 >> 0x20) & (uint)((ulonglong)dVar121 >> 0x20);
              auVar132 = auVar132 | auVar16;
              auVar24._4_4_ = ~(uint)(uVar86 >> 0x20) & (uint)((ulonglong)dVar124 >> 0x20);
              auVar24._0_4_ = ~(uint)uVar86 & SUB84(dVar124,0);
              auVar24._8_4_ = ~(uint)uVar88 & SUB84(dVar126,0);
              auVar24._12_4_ = ~(uint)(uVar88 >> 0x20) & (uint)((ulonglong)dVar126 >> 0x20);
              dVar110 = auVar132._0_8_;
              dVar118 = auVar132._8_8_;
              dVar124 = SUB168(auVar128 | auVar24,0);
              dVar126 = SUB168(auVar128 | auVar24,8);
              auVar99._8_4_ = auVar132._8_4_;
              auVar99._0_8_ = dVar118;
              auVar99._12_4_ = auVar132._12_4_;
              uVar46 = uVar46 + 1;
              dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
              dVar115 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
              dVar112 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
              dVar91 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
              dVar111 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar109 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              dVar92 = local_238 * dVar110 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       dStack_240 * dVar126 +
                       dStack_230 * dVar118 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       local_248 * dVar124 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              auVar27._8_4_ = SUB84(dVar92,0);
              auVar27._0_8_ =
                   dStack_230 * dVar110 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   local_248 * dVar126 +
                   local_238 * dVar118 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   dStack_240 * dVar124 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              auVar27._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + lVar12) = auVar27;
              auVar100._8_4_ = SUB84(dVar35,0);
              auVar100._0_8_ = dVar34;
              auVar100._12_4_ = uVar134;
              dVar115 = local_248 * dVar110 * dVar91 + dStack_230 * dVar126 +
                        auVar99._8_8_ * dStack_240 * dVar115 + local_238 * dVar124 * dVar109;
              auVar29._8_4_ = SUB84(dVar115,0);
              auVar29._0_8_ =
                   dStack_240 * dVar110 * dVar112 + local_238 * dVar126 +
                   dVar118 * local_248 * dVar22 + dStack_230 * dVar124 * dVar111;
              auVar29._12_4_ = (int)((ulonglong)dVar115 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + 0x10 + lVar12) = auVar29;
              pdVar3 = (double *)(lVar79 + 0x20 + lVar12);
              dVar22 = pdVar3[1];
              dVar112 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar37;
              dVar111 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar38;
              pdVar4 = (double *)(lVar79 + 0x20 + lVar12);
              *pdVar4 = dVar34 * (double)local_498 + *pdVar3;
              pdVar4[1] = auVar100._8_8_ * dStack_490 + dVar22;
              auVar101._8_4_ = SUB84(dVar111,0);
              auVar101._0_8_ = dVar112;
              auVar101._12_4_ = (int)((ulonglong)dVar111 >> 0x20);
              pdVar3 = (double *)(lVar79 + 0x30 + lVar12);
              dVar22 = dVar38 * dStack_470 + auVar101._8_8_ * local_538._8_8_ + pdVar3[1];
              auVar17._8_4_ = SUB84(dVar22,0);
              auVar17._0_8_ = dVar37 * (double)local_478 + dVar112 * local_538._0_8_ + *pdVar3;
              auVar17._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + 0x30 + lVar12) = auVar17;
              pdVar3 = (double *)(lVar79 + 0x40 + lVar12);
              dVar22 = (dVar35 * dStack_4d0 + (double)fVar90) * pdVar3[1];
              auVar32._8_4_ = SUB84(dVar22,0);
              auVar32._0_8_ = (dVar34 * (double)local_4d8 + (double)fVar127) * *pdVar3;
              auVar32._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + 0x40 + lVar12) = auVar32;
              pdVar3 = (double *)(lVar79 + 0x50 + lVar12);
              dVar22 = (dVar38 * dStack_4b0 + dVar111 * local_538._8_8_ + (double)fVar14) *
                       pdVar3[1];
              auVar36._8_4_ = SUB84(dVar22,0);
              auVar36._0_8_ =
                   (dVar37 * (double)local_4b8 + dVar112 * local_538._0_8_ + (double)fVar133) *
                   *pdVar3;
              auVar36._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + 0x50 + lVar12) = auVar36;
              lVar79 = lVar79 + 0x60;
              local_528 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                          ((longlong)&(local_528->AllocatorInstance).Data + 1);
              uVar74 = local_570;
              local_1f8 = local_238;
              dStack_1f0 = dStack_230;
            } while ((longlong)local_528 < lVar82);
          }
          FAnimationRuntime::ConvertMeshRotationPoseToLocalSpace(pFVar48);
        }
        else {
          uVar46 = 0;
          local_528 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
          if (0 < lVar82) {
            local_540 = (FBlendedCurve *)((longlong)FVar75 << 4);
            lVar79 = 0;
            local_538 = ZEXT816(0);
            local_498 = (FBlendedCurve *)0x0;
            dStack_490 = 0.0;
            do {
              auVar98 = local_538;
              uVar74 = 0;
              if ((int)uVar46 < *(int *)(pFVar62 + lVar83 + 0x10)) {
                uVar74 = ~uVar46 >> 0x1f;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar12 = *(longlong *)(pFVar62 + lVar83 + 8);
              puVar2 = (undefined8 *)(lVar79 + 0x30 + lVar12);
              local_478 = (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                           *)*puVar2;
              dStack_470 = (double)puVar2[1];
              dVar22 = *(double *)(lVar79 + lVar12);
              dVar112 = ((double *)(lVar79 + lVar12))[1];
              pdVar3 = (double *)(lVar79 + 0x10 + lVar12);
              dVar111 = *pdVar3;
              dVar115 = pdVar3[1];
              pdVar3 = (double *)(lVar79 + 0x20 + lVar12);
              dVar91 = *pdVar3;
              dVar109 = pdVar3[1];
              puVar2 = (undefined8 *)(lVar79 + 0x40 + lVar12);
              local_4d8 = (FCompactPose *)*puVar2;
              dStack_4d0 = (double)puVar2[1];
              puVar2 = (undefined8 *)(lVar79 + 0x50 + lVar12);
              local_4b8 = (FStackAttributeContainer *)*puVar2;
              dStack_4b0 = (double)puVar2[1];
              if ((this_02->ArrayNum <= (int)local_56c) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              local_520 = (FStackAttributeContainer *)(this_02->AllocatorInstance).Data;
              uVar74 = 0;
              if ((int)uVar46 < *(int *)(&local_520->field_0x8 + (longlong)local_540)) {
                uVar74 = ~uVar46 >> 0x1f;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar48 = local_518;
              fVar133 = *(float *)(*(longlong *)
                                    (&local_540->field_0x0 + (longlong)&local_520->field_0x0) +
                                  (longlong)local_528 * 4);
              uVar74 = 0;
              if ((int)uVar46 < *(int *)&local_518->field_0x8) {
                uVar74 = ~uVar46 >> 0x1f;
              }
              if ((uVar74 == 0) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar41)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              dVar118 = auVar98._0_8_;
              lVar12 = *(longlong *)pFVar48;
              dVar34 = (double)fVar133;
              dVar35 = (double)fVar133;
              uVar134 = (undefined4)((ulonglong)dVar35 >> 0x20);
              dVar121 = auVar98._8_8_;
              uVar78 = -(ulonglong)(dVar118 <= dVar111);
              uVar87 = -(ulonglong)(dVar121 <= dVar115);
              dVar37 = (double)fVar133;
              dVar38 = (double)fVar133;
              dVar92 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
              dVar110 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
              dVar124 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
              dVar126 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
              fVar127 = GlobalVectorConstants::Float1110.m128_f32[0];
              fVar90 = GlobalVectorConstants::Float1110.m128_f32[1];
              fVar133 = GlobalVectorConstants::Float1110.m128_f32[2];
              fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
              uVar86 = -(ulonglong)((double)local_498 <= dVar22);
              uVar88 = -(ulonglong)(dStack_490 <= dVar112);
              auVar120._0_4_ = ~(uint)uVar86 & SUB84((double)local_498 - dVar92,0);
              auVar120._4_4_ =
                   ~(uint)(uVar86 >> 0x20) & (uint)((ulonglong)((double)local_498 - dVar92) >> 0x20)
              ;
              auVar120._8_4_ = ~(uint)uVar88 & SUB84(dStack_490 - dVar110,0);
              auVar120._12_4_ =
                   ~(uint)(uVar88 >> 0x20) & (uint)((ulonglong)(dStack_490 - dVar110) >> 0x20);
              auVar18._8_4_ = (int)((ulonglong)dVar110 & uVar88);
              auVar18._0_8_ = (ulonglong)dVar92 & uVar86;
              auVar18._12_4_ = (int)(((ulonglong)dVar110 & uVar88) >> 0x20);
              auVar102._8_4_ = SUB84(dVar35,0);
              auVar102._0_8_ = dVar34;
              auVar102._12_4_ = uVar134;
              local_228 = *(double *)(lVar79 + lVar12);
              dStack_220 = ((double *)(lVar79 + lVar12))[1];
              dVar119 = SUB168(auVar120 | auVar18,0) *
                        ((double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar34) +
                        dVar34 * dVar22;
              dVar122 = SUB168(auVar120 | auVar18,8) *
                        ((double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar35) +
                        auVar102._8_8_ * dVar112;
              dVar118 = dVar118 - dVar124;
              dVar121 = dVar121 - dVar126;
              auVar117._0_4_ = ~(uint)uVar78 & SUB84(dVar118,0);
              auVar117._4_4_ = ~(uint)(uVar78 >> 0x20) & (uint)((ulonglong)dVar118 >> 0x20);
              auVar117._8_4_ = ~(uint)uVar87 & SUB84(dVar121,0);
              auVar117._12_4_ = ~(uint)(uVar87 >> 0x20) & (uint)((ulonglong)dVar121 >> 0x20);
              auVar19._8_4_ = (int)(uVar87 & (ulonglong)dVar126);
              auVar19._0_8_ = (ulonglong)dVar124 & uVar78;
              auVar19._12_4_ = (int)((uVar87 & (ulonglong)dVar126) >> 0x20);
              auVar103._8_4_ = SUB84(dVar38,0);
              auVar103._0_8_ = dVar37;
              auVar103._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
              dVar111 = SUB168(auVar117 | auVar19,0) *
                        ((double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar37) +
                        dVar37 * dVar111;
              dVar115 = SUB168(auVar117 | auVar19,8) *
                        ((double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar38) +
                        auVar103._8_8_ * dVar115;
              auVar104._8_4_ = SUB84(dVar122,0);
              auVar104._0_8_ = dVar119;
              auVar104._12_4_ = (int)((ulonglong)dVar122 >> 0x20);
              dVar22 = dVar111 * dVar111 + dVar119 * dVar119;
              dVar112 = dVar115 * dVar115 + auVar104._8_8_ * dVar122;
              auVar105._8_4_ = SUB84(dVar112,0);
              auVar105._0_8_ = dVar22;
              auVar105._12_4_ = (int)((ulonglong)dVar112 >> 0x20);
              auVar106._0_8_ = auVar105._8_8_ + dVar22;
              auVar106._8_8_ = dVar22 + dVar112;
              uVar86 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                        auVar106._0_8_);
              uVar88 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                        auVar106._8_8_);
              uVar87 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                        auVar106._0_8_);
              uVar89 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                        auVar106._8_8_);
              auVar98 = sqrtpd(auVar106,auVar106);
              auVar131 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                               auVar98);
              auVar98 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar98);
              auVar129._0_8_ = uVar87 & (ulonglong)(auVar131._0_8_ * dVar119);
              uVar78 = uVar89 & (ulonglong)(auVar131._8_8_ * dVar122);
              auVar129._8_4_ = (undefined4)uVar78;
              auVar129._12_4_ = (undefined4)(uVar78 >> 0x20);
              auVar125._0_8_ = uVar86 & (ulonglong)(auVar98._0_8_ * dVar111);
              uVar78 = uVar88 & (ulonglong)(auVar98._8_8_ * dVar115);
              auVar125._8_4_ = (undefined4)uVar78;
              auVar125._12_4_ = (undefined4)(uVar78 >> 0x20);
              auVar20._4_4_ = ~(uint)(uVar87 >> 0x20) & (uint)((ulonglong)dVar92 >> 0x20);
              auVar20._0_4_ = ~(uint)uVar87 & SUB84(dVar92,0);
              auVar20._8_4_ = ~(uint)uVar89 & SUB84(dVar110,0);
              auVar20._12_4_ = ~(uint)(uVar89 >> 0x20) & (uint)((ulonglong)dVar110 >> 0x20);
              dVar110 = SUB168(auVar129 | auVar20,0);
              pdVar3 = (double *)(lVar79 + 0x10 + lVar12);
              local_218 = *pdVar3;
              dStack_210 = pdVar3[1];
              auVar25._4_4_ = ~(uint)(uVar86 >> 0x20) & (uint)((ulonglong)dVar124 >> 0x20);
              auVar25._0_4_ = ~(uint)uVar86 & SUB84(dVar124,0);
              auVar25._8_4_ = ~(uint)uVar88 & SUB84(dVar126,0);
              auVar25._12_4_ = ~(uint)(uVar88 >> 0x20) & (uint)((ulonglong)dVar126 >> 0x20);
              auVar125 = auVar125 | auVar25;
              dVar118 = SUB168(auVar129 | auVar20,8);
              dVar124 = auVar125._0_8_;
              dVar126 = auVar125._8_8_;
              auVar107._8_4_ = auVar125._8_4_;
              auVar107._0_8_ = dVar126;
              auVar107._12_4_ = auVar125._12_4_;
              uVar46 = uVar46 + 1;
              dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
              auVar108._8_4_ = SUB84(dVar35,0);
              auVar108._0_8_ = dVar34;
              auVar108._12_4_ = uVar134;
              dVar112 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar111 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
              dVar92 = local_228 * dVar110 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       auVar107._8_8_ * dStack_210 +
                       dStack_220 * dVar118 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       local_218 * dVar124 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              dVar115 = local_218 * dVar110 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                        dVar126 * dStack_220 +
                        dStack_210 * dVar118 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                        local_228 * dVar124 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              auVar28._8_4_ = SUB84(dVar115,0);
              auVar28._0_8_ =
                   dStack_210 * dVar110 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   dVar126 * local_228 +
                   local_218 * dVar118 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   dStack_220 * dVar124 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              auVar28._12_4_ = (int)((ulonglong)dVar115 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + lVar12) = auVar28;
              auVar30._8_4_ = SUB84(dVar92,0);
              auVar30._0_8_ =
                   dStack_220 * dVar110 * dVar22 + dVar126 * local_218 +
                   local_228 * dVar118 * dVar111 + dStack_210 * dVar124 * dVar112;
              auVar30._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + 0x10 + lVar12) = auVar30;
              _Var39 = GlobalVectorConstants::DoubleOne.ZW;
              pdVar3 = (double *)(lVar79 + 0x20 + lVar12);
              dVar22 = pdVar3[1];
              dVar112 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
              pdVar4 = (double *)(lVar79 + 0x20 + lVar12);
              *pdVar4 = dVar34 * dVar91 + *pdVar3;
              pdVar4[1] = auVar108._8_8_ * dVar109 + dVar22;
              dVar112 = dVar112 - dVar37;
              dVar111 = _Var39.m128d_f64[1] - dVar38;
              pdVar3 = (double *)(lVar79 + 0x30 + lVar12);
              dVar22 = dVar38 * dStack_470 + local_538._8_8_ * dVar111 + pdVar3[1];
              auVar21._8_4_ = SUB84(dVar22,0);
              auVar21._0_8_ = dVar37 * (double)local_478 + local_538._0_8_ * dVar112 + *pdVar3;
              auVar21._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + 0x30 + lVar12) = auVar21;
              pdVar3 = (double *)(lVar79 + 0x40 + lVar12);
              dVar22 = (dVar35 * dStack_4d0 + (double)fVar90) * pdVar3[1];
              auVar31._8_4_ = SUB84(dVar22,0);
              auVar31._0_8_ = (dVar34 * (double)local_4d8 + (double)fVar127) * *pdVar3;
              auVar31._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + 0x40 + lVar12) = auVar31;
              pdVar3 = (double *)(lVar79 + 0x50 + lVar12);
              dVar22 = (dVar38 * dStack_4b0 + local_538._8_8_ * dVar111 + (double)fVar14) *
                       pdVar3[1];
              auVar33._8_4_ = SUB84(dVar22,0);
              auVar33._0_8_ =
                   (dVar37 * (double)local_4b8 + local_538._0_8_ * dVar112 + (double)fVar133) *
                   *pdVar3;
              auVar33._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              *(undefined1 (*) [16])(lVar79 + 0x50 + lVar12) = auVar33;
              lVar79 = lVar79 + 0x60;
              local_528 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                          ((longlong)&(local_528->AllocatorInstance).Data + 1);
              uVar74 = local_570;
              local_1f8 = local_218;
              dStack_1f0 = dStack_210;
            } while ((longlong)local_528 < lVar82);
          }
        }
        FCompactPose::NormalizeRotations(pFVar48);
        local_570 = uVar74 + 1;
        local_558 = (FAnimInstanceProxy *)((longlong)local_558 + 1);
        pTVar80 = &local_568->AdditivePoses;
        lVar83 = lVar83 + 0x80;
        iVar47 = (local_568->AdditivePoses).ArrayNum;
        pFVar54 = local_568;
        fVar133 = __real_3727c5ac;
      } while ((int)local_570 < iVar47);
    }
    this_00 = local_488;
    FVar69 = local_500;
    if (0 < (pFVar54->BlendingCurves).ArrayNum) {
      pFVar49 = FAnimationPoseData::GetCurve(local_488);
      FVar69 = local_500;
      pTVar63 = TArrayView<float_const_,int>::
                TArrayView<float_const_,int><TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                          (&local_288,
                           (TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *
                           )local_500);
      local_2f8.DataPtr = pTVar63->DataPtr;
      local_2f8.ArrayNum = pTVar63->ArrayNum;
      local_2f8._12_4_ = *(undefined4 *)&pTVar63->field_0xc;
      pTVar64 = TArrayView<FBlendedCurve_const_*_const,int>::
                TArrayView<FBlendedCurve_const_*_const,int><TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FBlendedCurve_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                          (&local_278,&pFVar54->BlendingCurves);
      local_2e8.DataPtr = pTVar64->DataPtr;
      local_2e8.ArrayNum = pTVar64->ArrayNum;
      local_2e8._12_4_ = *(undefined4 *)&pTVar64->field_0xc;
      BlendCurves(&local_2e8,&local_2f8,pFVar49);
    }
    if (0 < (pFVar54->BlendingAttributes).ArrayNum) {
      pFVar50 = FAnimationPoseData::GetAttributes(this_00);
      pTVar63 = TArrayView<float_const_,int>::
                TArrayView<float_const_,int><TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                          (&local_268,
                           (TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *
                           )FVar69);
      local_2d8.DataPtr = pTVar63->DataPtr;
      local_2d8.ArrayNum = pTVar63->ArrayNum;
      local_2d8._12_4_ = *(undefined4 *)&pTVar63->field_0xc;
      pTVar65 = TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int>::
                TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int><TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::Anim::FStackAttributeContainer_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                          (&local_258,&pFVar54->BlendingAttributes);
      local_2c8.DataPtr = pTVar65->DataPtr;
      local_2c8.ArrayNum = pTVar65->ArrayNum;
      local_2c8._12_4_ = *(undefined4 *)&pTVar65->field_0xc;
      UE::Anim::Attributes::BlendAttributes(&local_2c8,&local_2d8,pFVar50);
    }
    iVar47 = pTVar80->ArrayNum;
    uVar74 = 0;
    if (0 < iVar47) {
      lVar82 = 0;
      do {
        uVar46 = 0;
        if ((int)uVar74 < iVar47) {
          uVar46 = ~uVar74 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar76 = (FSlotEvaluationPose *)((pTVar80->AllocatorInstance).Data + lVar82);
        FAnimationPoseData::FAnimationPoseData(&local_2b8,pFVar76);
        pFVar49 = FAnimationPoseData::GetCurve(this_00);
        <Var6.Weight = pFVar76->Weight;
        pFVar52 = FAnimationPoseData::GetCurve(&local_2b8);
        if (fVar133 < <Var6.Weight) {
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pFVar49,
                     (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pFVar52,
                     <Var6);
        }
        bVar8 = (pFVar76->AdditiveType).Value;
        fVar90 = pFVar76->Weight;
        pFVar50 = FAnimationPoseData::GetAttributes(this_00);
        pFVar53 = FAnimationPoseData::GetAttributes(&local_2b8);
        UE::Anim::Attributes::AccumulateAttributes(pFVar53,pFVar50,fVar90,(uint)bVar8);
        iVar47 = pTVar80->ArrayNum;
        uVar74 = uVar74 + 1;
        lVar82 = lVar82 + 0x80;
      } while ((int)uVar74 < iVar47);
    }
    FBlendProfileScratchData::Reset(pFVar54);
  }
  return;
}

// TickAssetPlayerInstances @ 14747b870

void __thiscall FAnimInstanceProxy::TickAssetPlayerInstances(FAnimInstanceProxy *this,float param_1)

{
  UE::Anim::FAnimSync::TickAssetPlayerInstances(&this->Sync,this,param_1);
  (this->Sync).SyncGroupWriteIndex = 1 - (this->Sync).SyncGroupWriteIndex;
  return;
}

// TickAssetPlayerInstances @ 14747b8b0

void __thiscall FAnimInstanceProxy::TickAssetPlayerInstances(FAnimInstanceProxy *this)

{
  UE::Anim::FAnimSync::TickAssetPlayerInstances(&this->Sync,this,this->CurrentDeltaSeconds);
  (this->Sync).SyncGroupWriteIndex = 1 - (this->Sync).SyncGroupWriteIndex;
  return;
}

// TraceMontageEvaluationData @ 14747bc50

void __thiscall
FAnimInstanceProxy::TraceMontageEvaluationData
          (FAnimInstanceProxy *this,FAnimationUpdateContext *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  UAnimMontage *pUVar3;
  FAnimTrack *this_00;
  FAnimSegment *this_01;
  UAnimSequenceBase *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr *this_02;
  FWeakObjectPtr *pFVar6;
  FAnimInstanceProxy *pFVar7;
  undefined1 local_res8 [8];
  float local_res20 [2];
  
  if ((this->bUseMainInstanceMontageEvaluationData == '\0') ||
     (pFVar7 = this->MainInstanceProxy, this->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    pFVar7 = this;
  }
  iVar1 = (pFVar7->MontageEvaluationData).ArrayNum;
  this_02 = (FWeakObjectPtr *)(pFVar7->MontageEvaluationData).AllocatorInstance.Data;
  pFVar6 = this_02 + (longlong)iVar1 * 0xb;
  while( true ) {
    if ((pFVar7->MontageEvaluationData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMontageEvaluationState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_02 == pFVar6) break;
    bVar2 = TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UAnimMontage,FWeakObjectPtr> *)this_02,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UAnimMontage *)FWeakObjectPtr::Get(this_02);
      bVar2 = UAnimMontage::IsValidSlot(pUVar3,*param_2);
      if (bVar2) {
        pUVar3 = (UAnimMontage *)FWeakObjectPtr::Get(this_02);
        this_00 = UAnimMontage::GetAnimationData(pUVar3,*param_2);
        if (((this_00 != (FAnimTrack *)0x0) &&
            (this_01 = FAnimTrack::GetSegmentAtTime(this_00,(float)this_02[8].ObjectIndex),
            this_01 != (FAnimSegment *)0x0)) &&
           (pUVar4 = FAnimSegment::GetAnimationData
                               (this_01,(float)this_02[8].ObjectIndex,local_res20),
           pUVar4 != (UAnimSequenceBase *)0x0)) {
          pUVar5 = FWeakObjectPtr::Get(this_02);
          FAnimTrace::OutputAnimNodeValue
                    ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                     L"Montage",pUVar5);
          FAnimTrace::OutputAnimNodeValue
                    ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                     L"Sequence",(UObject *)pUVar4);
          FAnimTrace::OutputAnimNodeValue
                    ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                     L"Sequence Playback Time",local_res20[0]);
          return;
        }
      }
    }
    this_02 = this_02 + 0xb;
  }
  return;
}

// Uninitialize @ 14747ebc0

void __thiscall FAnimInstanceProxy::Uninitialize(FAnimInstanceProxy *this,UAnimInstance *param_1)

{
  int *piVar1;
  int iVar2;
  FAnimNotifyEventReference *pFVar3;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_00
  ;
  longlong lVar4;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::Uninitialize");
  (this->MontageEvaluationData).ArrayNum = 0;
  if ((this->MontageEvaluationData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&(this->MontageEvaluationData).AllocatorInstance,0,
               &(this->MontageEvaluationData).ArrayMax);
  }
  TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
           *)&this->SlotGroupInertializationRequestDataMap);
  this->DefaultLinkedInstanceInputNode = (FAnimNode_LinkedInputPose *)0x0;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::ResetAnimationCurves");
  this_00 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)this->AnimationCurves;
  lVar4 = 3;
  do {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
              (this_00);
    this_00 = this_00 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FStatsHierarchical::EndMeasurement();
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->MaterialParametersToClear)
  ;
  piVar1 = &(this->ActiveAnimNotifiesSinceLastTick).ArrayMax;
  pFVar3 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  iVar2 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FAnimNotifyEventReference,int>(pFVar3,iVar2);
    (this->ActiveAnimNotifiesSinceLastTick).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FAnimNotifyEventReference,int>(pFVar3,iVar2);
    (this->ActiveAnimNotifiesSinceLastTick).ArrayNum = 0;
  }
  UE::Anim::FAnimSync::ResetAll(&this->Sync);
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateActiveAnimNotifiesSinceLastTick @ 14747f3f0

void __thiscall
FAnimInstanceProxy::UpdateActiveAnimNotifiesSinceLastTick
          (FAnimInstanceProxy *this,FAnimNotifyQueue *param_1)

{
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  this_00 = &this->ActiveAnimNotifiesSinceLastTick;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::Reset
            (this_00,(param_1->AnimNotifies).ArrayNum);
  if (this_00 == &param_1->AnimNotifies) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_1->AnimNotifies).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar1,&this_00->AllocatorInstance,
                       &(this->ActiveAnimNotifiesSinceLastTick).ArrayNum,
                       &(this->ActiveAnimNotifiesSinceLastTick).ArrayMax);
    ConstructItems<FAnimNotifyEventReference,FAnimNotifyEventReference,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x30,
               (FAnimNotifyEventReference *)(param_1->AnimNotifies).AllocatorInstance.Data,iVar1);
  }
  return;
}

// UpdateAnimation @ 14747f730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAnimInstanceProxy::UpdateAnimation(FAnimInstanceProxy *this)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStackY_d28 [32];
  undefined1 local_cf8 [4];
  FLLMScope local_cf4;
  FMemMark local_cf0;
  FMemScope local_cc8;
  code *local_cc0;
  undefined1 *local_cb8;
  FAnimationUpdateContext local_cb0;
  undefined1 local_c80 [320];
  undefined4 local_b40;
  FMessageStack local_b38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_d28;
  FLLMScope::FLLMScope(&local_cf4,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_cc8,Animation,true);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::UpdateAnimation");
  puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_cb8 = local_cf8;
  local_cc0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_cc0,puVar4);
  local_cf0.Mem = (FMemStackBase *)(pFVar5 + 2);
  local_cf0.Top = (local_cf0.Mem)->Top;
  local_cf0.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
  local_cf0.bPopped = false;
  local_cf0.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
  pFVar5[5] = (FTlsAutoCleanup)&local_cf0;
  *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
  FAnimationUpdateSharedContext::FAnimationUpdateSharedContext
            ((FAnimationUpdateSharedContext *)local_c80);
  fVar1 = this->CurrentDeltaSeconds;
  FAnimationBaseContext::FAnimationBaseContext
            ((FAnimationBaseContext *)&local_cb0,this,(FAnimationUpdateSharedContext *)local_c80);
  local_cb0.CurrentWeight = 1.0;
  local_cb0.RootMotionWeightModifier = 1.0;
  local_cb0.DeltaTime = fVar1;
  if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
    lVar6 = (**(code **)((longlong)*this->AnimClassInterface + 0x80))();
    if (0 < *(int *)(lVar6 + 8)) {
      plVar7 = (longlong *)(**(code **)((longlong)*this->AnimClassInterface + 0x80))();
      if ((int)plVar7[1] < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_cb0._padding_._0_4_ = local_cb0._padding_._4_4_;
      local_cb0._padding_._4_4_ = *(undefined4 *)(*plVar7 + 0x10);
    }
  }
  UpdateAnimation_WithRoot(this,&local_cb0,this->RootNode,NAME_AnimGraph);
  UE::Anim::FAnimSync::TickAssetPlayerInstances(&this->Sync,this,this->CurrentDeltaSeconds);
  UE::Anim::FMessageStack::~FMessageStack(&local_b38);
  local_b40 = 0;
  if ((void *)local_c80._312_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c80._312_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<FAnimNode_Base_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)local_c80);
  if (local_cf0.bPopped == false) {
    if ((local_cf0.Mem)->TopMark != &local_cf0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_cf0.bPopped = true;
    (local_cf0.Mem)->NumMarks = (local_cf0.Mem)->NumMarks + -1;
    if (local_cf0.SavedChunk != (local_cf0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_cf0.Mem,local_cf0.SavedChunk);
    }
    (local_cf0.Mem)->Top = local_cf0.Top;
    (local_cf0.Mem)->TopMark = local_cf0.NextTopmostMark;
    local_cf0.Top = (uchar *)0x0;
  }
  FStatsHierarchical::EndMeasurement();
  FMemScope::~FMemScope(&local_cc8);
  FLLMScope::~FLLMScope(&local_cf4);
  return;
}

// UpdateAnimationNode @ 1474804e0

void __thiscall
FAnimInstanceProxy::UpdateAnimationNode(FAnimInstanceProxy *this,FAnimationUpdateContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001474804f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x30))(this,param_1,this->RootNode,NAME_AnimGraph);
  return;
}

// UpdateAnimationNode_WithRoot @ 147480500

void __thiscall
FAnimInstanceProxy::UpdateAnimationNode_WithRoot
          (FAnimInstanceProxy *this,FAnimationUpdateContext *param_1,FAnimNode_Base *param_2,
          FName param_3)

{
  short *psVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [8];
  FLLMScope local_38 [2];
  FScopedAnimNodeTrace local_30;
  FMemScope local_28;
  FScopedAnimGraphTrace local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name128,L"Animation/Graph");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_38,LLMScope_Name128,false,None,Default,true);
  FMemScope::FMemScope(&local_28,&LLMScope_Name128,true);
  FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace(&local_20,param_1);
  FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace(&local_30,param_1);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::UpdateAnimationNode_WithRoot");
  if (param_2 != (FAnimNode_Base *)0x0) {
    if (param_2 == this->RootNode) {
      psVar1 = &(this->UpdateCounter).Counter;
      *psVar1 = *psVar1 + 1;
      (this->UpdateCounter).LastSyncronizedFrame = GFrameCounter;
      if ((this->UpdateCounter).Counter == -1) {
        (this->UpdateCounter).Counter = 0;
      }
    }
    UE::Anim::FNodeFunctionCaller::InitialUpdate(param_1,param_2);
    UE::Anim::FNodeFunctionCaller::BecomeRelevant(param_1,param_2);
    UE::Anim::FNodeFunctionCaller::Update(param_1,param_2);
    (**(code **)(param_2->_padding_ + 0x10))(param_2,param_1);
    pTVar4 = TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->SavedPoseQueueMap,param_3);
    if (pTVar4 != (TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      iVar3 = pTVar4->ArrayNum;
      pFVar2 = pFVar5 + (longlong)iVar3 * 8;
      while( true ) {
        if (pTVar4->ArrayNum != iVar3) {
          `TCheckedPointerIterator<FAnimNode_SaveCachedPose_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (pFVar5 == pFVar2) break;
        FAnimNode_SaveCachedPose::PostGraphUpdate(*(FAnimNode_SaveCachedPose **)pFVar5);
        pFVar5 = pFVar5 + 8;
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  FAnimTrace::FScopedAnimNodeTrace::~FScopedAnimNodeTrace(&local_30);
  FAnimTrace::FScopedAnimGraphTrace::~FScopedAnimGraphTrace(&local_20);
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_38);
  return;
}

// UpdateAnimation_WithRoot @ 1474806e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::UpdateAnimation_WithRoot
          (FAnimInstanceProxy *this,FAnimationUpdateContext *param_1,FAnimNode_Base *param_2,
          FName param_3)

{
  int *piVar1;
  uint uVar2;
  IAnimClassInterface *pIVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation> FVar12;
  UAnimInstance *pUVar13;
  FAnimNode_LinkedAnimGraph *this_00;
  UClass *pUVar14;
  FThreadSafeStaticStat<FStat_STAT_NativeThreadSafeUpdateAnimation> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_BlueprintUpdateAnimation> FVar18;
  FThreadSafeStaticStat<FStat_STAT_NativeUpdateAnimation> FVar19;
  UAnimInstance *pUVar20;
  USkeletalMeshComponent *this_01;
  UObjectBaseUtility *pUVar21;
  FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation_WorkerThread> *this_02;
  UObject *pUVar22;
  FAnimNode_Base *pFVar23;
  FName FVar24;
  FName FVar25;
  wchar_t *pwVar26;
  UObjectBaseUtility *pUVar27;
  undefined1 uVar28;
  FName FVar29;
  bool *pbVar30;
  bool bVar31;
  FName local_248;
  undefined1 local_240;
  undefined1 local_23f;
  FName local_238;
  FColor_u_0 local_230;
  FColor_u_0 local_22c;
  FColor_u_0 local_228;
  float local_224;
  FName local_220;
  byte local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  undefined8 local_1f0;
  FName local_1e8;
  FName local_1d8;
  FName local_1c8;
  FName local_1b8;
  FScopedGraphMessage local_1a8;
  char local_198;
  FAnimInstanceProxy *local_190;
  FName *local_188;
  code **local_180;
  LARGE_INTEGER local_178;
  FAnimInstanceProxy *local_170;
  FAnimInstanceProxy *local_168;
  FAnimInstanceProxy *local_160;
  LARGE_INTEGER local_158;
  FStatMessage local_150;
  FStatMessage local_140;
  FStatMessage local_130;
  TSharedRef<UE::Anim::IGraphMessage,1> local_120;
  LARGE_INTEGER local_110;
  code *local_108;
  FAnimInstanceProxy **local_100;
  code *local_f8;
  FAnimInstanceProxy **local_f0;
  code *local_e8;
  FAnimInstanceProxy **local_e0;
  code *local_d8;
  FName **local_d0;
  code *local_c8;
  code ***local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FAnimationBaseContext local_90;
  FAnimationBaseContext local_70;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::UpdateAnimation_WithRoot");
  bVar8 = IsInGameThread();
  pUVar27 = (UObjectBaseUtility *)0x0;
  if (bVar8) {
    FVar12 = StatPtr_STAT_ProxyUpdateAnimation;
    if (StatPtr_STAT_ProxyUpdateAnimation ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation>)0x0) {
      pFVar11 = ::FName::FName(&local_b0,"STAT_ProxyUpdateAnimation");
      pwVar26 = L"ProxyUpdateAnimation";
      this_02 = (FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation_WorkerThread> *)
                &StatPtr_STAT_ProxyUpdateAnimation;
      goto LAB_1474807a3;
    }
  }
  else {
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation>)
             StatPtr_STAT_ProxyUpdateAnimation_WorkerThread;
    if (StatPtr_STAT_ProxyUpdateAnimation_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation_WorkerThread>)0x0) {
      pFVar11 = ::FName::FName(&local_b8,"STAT_ProxyUpdateAnimation_WorkerThread");
      pwVar26 = L"ProxyUpdateAnimation_WorkerThread";
      this_02 = &StatPtr_STAT_ProxyUpdateAnimation_WorkerThread;
LAB_1474807a3:
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_ProxyUpdateAnimation>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_02,*pFVar11,pwVar26,"STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar25 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_1e8.ComparisonIndex.Value = 0;
  local_1e8.Number = 0;
  bVar10 = false;
  bVar7 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_1474808af:
    bVar6 = bVar10;
    bVar8 = bVar7;
    bVar7 = false;
    local_238 = local_1e8;
    FVar25 = local_1e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_230.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_230._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar10 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_210.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_210.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_210,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                   ,0x4de);
        bVar6 = true;
        bVar8 = true;
        bVar10 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474808af;
    local_238 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar7 = true;
  }
  pUVar22 = (UObject *)pUVar27;
  if (this->bUpdatingRoot == false) {
    pUVar22 = this->AnimInstanceObject;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_220,(UObjectBaseUtility *)pUVar22);
  pUVar13 = CastChecked<UAnimInstance,UObject>(this->AnimInstanceObject);
  if (pUVar13->bUpdateAnimationEnabled == '\0') {
    local_170 = this;
    `FAnimInstanceProxy::UpdateAnimation_WithRoot'::__l2::<lambda_1>::operator()(&local_170);
  }
  pUVar13 = CastChecked<UAnimInstance,UObject>(this->AnimInstanceObject);
  if (pUVar13->bUpdateAnimationEnabled == '\0') goto LAB_147481451;
  pFVar23 = this->RootNode;
  if (param_2 == pFVar23) {
    bVar9 = this->field_0x801;
    if ((this->bInitializeSubsystems != '\0') &&
       (pIVar3 = this->AnimClassInterface, pIVar3 != (IAnimClassInterface *)0x0)) {
      local_100 = &local_168;
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnimInstanceProxy::UpdateAnimation_WithRoot'::__l11::<lambda_2>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
                  ::Call;
      local_168 = this;
      (**(code **)((longlong)*pIVar3 + 0xb0))(pIVar3,this->AnimInstanceObject);
      this->bInitializeSubsystems = '\0';
      bVar9 = this->field_0x801;
      pFVar23 = this->RootNode;
    }
    if ((bVar9 & 4) != 0) {
      InitializeRootNode_WithRoot(this,pFVar23);
      if (this->AnimClassInterface != (IAnimClassInterface *)0x0) {
        pFVar11 = (FName *)(**(code **)((longlong)*this->AnimClassInterface + 0x40))();
        FVar29 = *pFVar11;
        uVar2 = pFVar11[1].ComparisonIndex.Value;
        FVar24 = (FName)((longlong)FVar29 + (longlong)(int)uVar2 * 8);
        local_248 = FVar24;
        while( true ) {
          if (pFVar11[1].ComparisonIndex.Value != uVar2) {
            local_240 = 0;
            `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_240);
          }
          FVar25 = local_238;
          if (FVar29 == FVar24) break;
          this_00 = FProperty::ContainerUObjectPtrToValuePtrInternal
                              (*(FProperty **)FVar29,this->AnimInstanceObject,0);
          if (((this_00 != (FAnimNode_LinkedAnimGraph *)0x0) &&
              (FVar24 = local_248, this_00->_padding_ != 0)) &&
             ((*(uint *)(this_00->_padding_ + 8) >> 0x1e & 1) == 0)) {
            pUVar21 = pUVar27;
            if (this_00->_padding_ != 0) {
              pUVar14 = UAnimInstance::StaticClass();
              bVar10 = FObjectPtr::IsA((FObjectPtr *)&this_00->_padding_,pUVar14);
              if (bVar10) {
                pUVar21 = (UObjectBaseUtility *)this_00->_padding_;
              }
            }
            FVar24 = local_248;
            if (pUVar21 != (UObjectBaseUtility *)0x0) {
              FAnimationBaseContext::FAnimationBaseContext
                        (&local_90,this,(FAnimationUpdateSharedContext *)0x0);
              FAnimNode_LinkedAnimGraph::InitializeSubGraph_AnyThread
                        (this_00,(FAnimationInitializeContext *)&local_90);
              FAnimationBaseContext::FAnimationBaseContext
                        (&local_70,this,(FAnimationUpdateSharedContext *)0x0);
              FAnimNode_LinkedAnimGraph::CacheBonesSubGraph_AnyThread
                        (this_00,(FAnimationCacheBonesContext *)&local_70);
              FVar24 = local_248;
            }
          }
          FVar29 = (FName)((longlong)FVar29 + 8);
        }
      }
      this->bDeferRootNodeInitialization = '\0';
    }
    (**(code **)(*(longlong *)this + 0x50))(this);
  }
  else {
    (**(code **)(*(longlong *)this + 0x58))(this);
  }
  if ((this->bUpdatingRoot == false) && (this->FrameCounterForUpdate != GFrameCounter)) {
    pIVar3 = this->AnimClassInterface;
    if (pIVar3 != (IAnimClassInterface *)0x0) {
      local_f0 = &local_160;
      local_f8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FAnimInstanceProxy::UpdateAnimation_WithRoot'::__l38::<lambda_3>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
                 ::Call;
      local_160 = this;
      (**(code **)((longlong)*pIVar3 + 0xb0))(pIVar3,this->AnimInstanceObject);
    }
    FVar15 = StatPtr_STAT_NativeThreadSafeUpdateAnimation;
    if (StatPtr_STAT_NativeThreadSafeUpdateAnimation ==
        (FThreadSafeStaticStat<FStat_STAT_NativeThreadSafeUpdateAnimation>)0x0) {
      pFVar11 = ::FName::FName(&local_a8,"STAT_NativeThreadSafeUpdateAnimation");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_NativeThreadSafeUpdateAnimation>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NativeThreadSafeUpdateAnimation
                          ,*pFVar11,L"NativeThreadSafeUpdateAnimation","STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar24 = *(FName *)FVar15;
    bVar10 = false;
    bVar5 = false;
    local_1d8.ComparisonIndex.Value = 0;
    local_1d8.Number = 0;
    if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_147480c3f:
      bVar31 = false;
      FVar24 = local_1d8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_22c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_22c._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
        bVar10 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_208.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
          local_208.Number = FVar24.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_208,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                     ,0x529);
          bVar10 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147480c3f;
      local_248 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar31 = true;
    }
    pUVar13 = CastChecked<UAnimInstance,UObject>(this->AnimInstanceObject);
    (**(code **)(*(longlong *)pUVar13 + 0x330))(pUVar13,this->CurrentDeltaSeconds);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar31) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_150.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
        local_150.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_158);
        local_150.StatData.Pad[4] = '\0';
        local_150.StatData.Pad[5] = '\0';
        local_150.StatData.Pad[6] = '\0';
        local_150.StatData.Pad[7] = '\0';
        local_150.StatData.Pad[0] = local_158.s.LowPart._0_1_;
        local_150.StatData.Pad[1] = local_158.s.LowPart._1_1_;
        local_150.StatData.Pad[2] = local_158.s.LowPart._2_1_;
        local_150.StatData.Pad[3] = local_158.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_150);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    FVar18 = StatPtr_STAT_BlueprintUpdateAnimation;
    if (StatPtr_STAT_BlueprintUpdateAnimation ==
        (FThreadSafeStaticStat<FStat_STAT_BlueprintUpdateAnimation>)0x0) {
      pFVar11 = ::FName::FName(&local_a0,"STAT_BlueprintUpdateAnimation");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_BlueprintUpdateAnimation>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlueprintUpdateAnimation,
                          *pFVar11,L"BlueprintUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",
                          L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar24 = *(FName *)FVar18;
    bVar10 = false;
    bVar5 = false;
    local_1c8.ComparisonIndex.Value = 0;
    local_1c8.Number = 0;
    if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_147480e51:
      bVar31 = false;
      FVar24 = local_1c8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_228.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_228._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar10 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_200.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
          local_200.Number = FVar24.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_200,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                     ,0x52e);
          bVar10 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147480e51;
      local_248 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar31 = true;
    }
    pUVar13 = CastChecked<UAnimInstance,UObject>(this->AnimInstanceObject);
    local_224 = this->CurrentDeltaSeconds;
    UObject::FindFunctionChecked
              ((UObject *)pUVar13,NAME_UAnimInstance_BlueprintThreadSafeUpdateAnimation);
    (**(code **)(*(longlong *)pUVar13 + 0x260))(pUVar13);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar31) && (FVar24 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_140.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
        local_140.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_178);
        local_140.StatData.Pad[4] = '\0';
        local_140.StatData.Pad[5] = '\0';
        local_140.StatData.Pad[6] = '\0';
        local_140.StatData.Pad[7] = '\0';
        local_140.StatData.Pad[0] = local_178.s.LowPart._0_1_;
        local_140.StatData.Pad[1] = local_178.s.LowPart._1_1_;
        local_140.StatData.Pad[2] = local_178.s.LowPart._2_1_;
        local_140.StatData.Pad[3] = local_178.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_140);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    FVar19 = StatPtr_STAT_NativeUpdateAnimation;
    if (StatPtr_STAT_NativeUpdateAnimation ==
        (FThreadSafeStaticStat<FStat_STAT_NativeUpdateAnimation>)0x0) {
      pFVar11 = ::FName::FName(&local_98,"STAT_NativeUpdateAnimation");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_NativeUpdateAnimation>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NativeUpdateAnimation,*pFVar11,
                          L"NativeUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
    FVar24 = *(FName *)FVar19;
    bVar10 = false;
    bVar5 = false;
    local_1b8.ComparisonIndex.Value = 0;
    local_1b8.Number = 0;
    if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
      (**(code **)(*(longlong *)this + 0x20))(this,this->CurrentDeltaSeconds);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_238 = (FName)((ulonglong)local_238 & 0xffffffff00000000);
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_238,(char *)*(FName *)((longlong)FVar19 + 0x10));
        bVar10 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1f8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
          local_1f8.Number = FVar24.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                     ,0x533);
          bVar10 = true;
          bVar5 = true;
        }
      }
      bVar31 = FThreadStats::bPrimaryEnable != false;
      FVar29 = local_1b8;
      if (bVar31) {
        local_248 = FVar24;
        FThreadStats::AddMessage(FVar24,CycleScopeStart);
        FVar29 = FVar24;
      }
      (**(code **)(*(longlong *)this + 0x20))(this,this->CurrentDeltaSeconds);
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar31) && (FVar29 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
          local_130.NameAndInfo.Index = FVar29.ComparisonIndex.Value;
          local_130.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_110);
          local_130.StatData.Pad[4] = '\0';
          local_130.StatData.Pad[5] = '\0';
          local_130.StatData.Pad[6] = '\0';
          local_130.StatData.Pad[7] = '\0';
          local_130.StatData.Pad[0] = local_110.s.LowPart._0_1_;
          local_130.StatData.Pad[1] = local_110.s.LowPart._1_1_;
          local_130.StatData.Pad[2] = local_110.s.LowPart._2_1_;
          local_130.StatData.Pad[3] = local_110.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar16,&local_130);
          piVar1 = &pFVar16->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar16,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar16,false,false);
          }
        }
      }
    }
    pIVar3 = this->AnimClassInterface;
    if (pIVar3 != (IAnimClassInterface *)0x0) {
      local_e0 = &local_190;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FAnimInstanceProxy::UpdateAnimation_WithRoot'::__l44::<lambda_4>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
                 ::Call;
      local_190 = this;
      (**(code **)((longlong)*pIVar3 + 0xb0))(pIVar3,this->AnimInstanceObject,&local_e8);
    }
    this->FrameCounterForUpdate = GFrameCounter;
  }
  pbVar30 = &this->bUpdatingRoot;
  uVar28 = *pbVar30;
  *pbVar30 = true;
  local_23f = uVar28;
  if ((this->SkeletalMeshComponent == (USkeletalMeshComponent *)0x0) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206020>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x17c,"SkeletalMeshComponent"), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar13 = (UAnimInstance *)this->AnimInstanceObject;
  pUVar20 = USkeletalMeshComponent::GetAnimInstance(this->SkeletalMeshComponent);
  if (pUVar13 == pUVar20) {
LAB_14748132a:
    UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_1a8,(FAnimationBaseContext *)param_1);
    local_198 = '\x01';
    pUVar21 = ::operator_new(0x40);
    if (pUVar21 == (UObjectBaseUtility *)0x0) {
      local_120.Object = ___xmm_00000000000000000000000000000010;
      local_120.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)_UNK_150651568;
      FVar24 = UE::Anim::FAnimSyncGroupScope::TypeName;
    }
    else {
      *(undefined4 *)&pUVar21->field_0x8 = 1;
      *(undefined4 *)&pUVar21->field_0xc = 1;
      local_1f0 = 0;
      *(undefined ***)pUVar21 =
           &
           ___7__TIntrusiveReferenceController_VFAnimSyncGroupScope_Anim_UE___00_SharedPointerInternals__6B_
      ;
      UE::Anim::FAnimSyncGroupScope::FAnimSyncGroupScope
                ((FAnimSyncGroupScope *)&pUVar21->field_0x10,(FAnimationBaseContext *)param_1,
                 (FName)0x0,CanBeLeader);
      local_120.Object = (IGraphMessage *)&pUVar21->field_0x10;
      if ((local_120.Object == (IGraphMessage *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar24 = UE::Anim::FAnimSyncGroupScope::TypeName;
      LOCK();
      *(int *)&pUVar21->field_0x8 = *(int *)&pUVar21->field_0x8 + 1;
      UNLOCK();
      pUVar27 = pUVar21;
      uVar28 = local_23f;
      local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar21;
    }
    UE::Anim::FScopedGraphMessage::PushMessage
              (&local_1a8,(FAnimationBaseContext *)param_1,&local_120,FVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar27);
  }
  else {
    pUVar13 = (UAnimInstance *)this->AnimInstanceObject;
    this_01 = GetSkelMeshComponent(this);
    pUVar20 = USkeletalMeshComponent::GetPostProcessInstance(this_01);
    if (pUVar13 == pUVar20) goto LAB_14748132a;
    if (param_1->_padding_ == 0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1442789968400351459>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                          ,0xe3,"SharedContext != nullptr");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14748132a;
    }
    local_188 = &local_248;
    local_d0 = &local_188;
    local_248.ComparisonIndex.Value = 0;
    local_248.Number = 0;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::FAnimSyncGroupScope>'::__l5::<lambda_1>,void,UE::Anim::FAnimSyncGroupScope_&>
               ::Call;
    local_180 = &local_d8;
    local_c0 = &local_180;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
               ::Call;
    UE::Anim::FMessageStack::TopMessage
              ((FMessageStack *)(param_1->_padding_ + 0x148),UE::Anim::FAnimSyncGroupScope::TypeName
               ,(TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_c8);
    if (local_248 == (FName)0x0) goto LAB_14748132a;
    UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_1a8,(FAnimationBaseContext *)param_1);
    local_198 = '\0';
  }
  if (param_2 == this->RootNode) {
    (**(code **)(*(longlong *)this + 0x28))(this);
  }
  else {
    (**(code **)(*(longlong *)this + 0x30))(this,param_1,param_2,param_3);
  }
  if (local_198 != '\0') {
    UE::Anim::FScopedGraphMessage::PopMessage(&local_1a8);
  }
  *pbVar30 = (bool)uVar28;
LAB_147481451:
  if ((local_218 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_218 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_218 & 4) != 0) {
    FThreadStats::AddMessage(local_220,CycleScopeEnd);
  }
  local_218 = 0;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateCurvesPostEvaluation @ 147481500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::UpdateCurvesPostEvaluation
          (FAnimInstanceProxy *this,USkeletalMeshComponent *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_UpdateCurvesPostEvaluation> FVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FKeyForward local_res8;
  undefined1 local_res20 [8];
  uint local_1b8;
  undefined1 local_1b4 [4];
  FColor_u_0 local_1b0;
  undefined4 local_1ac;
  FName local_1a8;
  FName local_1a0;
  ulonglong local_198;
  FName local_190;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_180;
  uint uStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  uint local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  int local_14c;
  TPairInitializer<FName_const_&,float_const_&> local_148;
  FName local_138;
  FName local_130;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName *local_98;
  undefined4 *local_90;
  FName local_88 [4];
  undefined4 local_64;
  
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::UpdateCurvesPostEvaluation");
  uVar20 = 0;
  uVar21 = 0;
  FVar13 = StatPtr_STAT_UpdateCurvesPostEvaluation;
  if (StatPtr_STAT_UpdateCurvesPostEvaluation ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateCurvesPostEvaluation>)0x0) {
    pFVar12 = ::FName::FName(local_88,"STAT_UpdateCurvesPostEvaluation");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_UpdateCurvesPostEvaluation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateCurvesPostEvaluation,
                        *pFVar12,L"UpdateCurvesPostEvaluation","STATGROUP_Anim","STATCAT_Advanced",
                        L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar13;
  bVar7 = false;
  bVar6 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b0._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                   ,0xe17);
        bVar7 = true;
        bVar6 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar9 = true;
      goto LAB_14748168a;
    }
  }
  bVar7 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_1a8 = local_190;
LAB_14748168a:
  puVar2 = &(this->MaterialParametersToClear).Elements.field_0x10;
  uVar11 = *(uint *)&(this->MaterialParametersToClear).Elements.field_0x28;
  local_180 = &this->MaterialParametersToClear;
  local_198 = 1;
  uVar17 = 0;
  uStack_174 = 1;
  uStack_164 = uVar17;
  uStack_178 = uVar17;
  local_160 = uVar17;
  if (uVar11 != 0) {
    puVar19 = *(uint **)&(this->MaterialParametersToClear).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uStack_174 = *puVar19;
    local_160 = uVar20;
    uStack_178 = uVar20;
    while (uStack_174 == 0) {
      lVar14 = (longlong)(int)uStack_178;
      local_160 = local_160 + 0x20;
      uStack_178 = uStack_178 + 1;
      uStack_174 = 1;
      uStack_164 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_178)
      goto LAB_14748171d;
      uStack_174 = puVar19[lVar14 + 1];
    }
    uStack_174 = -uStack_174 & uStack_174;
    uVar1 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_150 = (int)lVar14;
    uStack_164 = (local_160 - 1) + local_150;
    if ((int)uVar11 < (int)uStack_164) {
      uStack_164 = uVar11;
    }
  }
LAB_14748171d:
  local_1b8 = *(uint *)&(this->MaterialParametersToClear).Elements.field_0x28;
  uStack_15c = local_64;
  iStack_158 = *(int *)&(this->MaterialParametersToClear).Elements.field_0x8 -
               *(int *)&(this->MaterialParametersToClear).Elements.field_0x34;
  uVar22 = local_1b8 & 0xffffffe0;
  uStack_168 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_174,uStack_178);
  TStack_f0.CurrentBitIndex = uStack_164;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_1b8 >> 5;
  TStack_f0._28_4_ = local_64;
  TStack_f0.BaseBitIndex = local_160;
  uStack_d0 = CONCAT44(uStack_154,iStack_158);
  local_170 = puVar2;
  local_f8 = local_180;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)local_1b8 < 0) || ((int)uVar11 < (int)local_1b8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = *(uint *)&(this->MaterialParametersToClear).Elements.field_0x28;
  if (local_1b8 != uVar11) {
    puVar18 = *(undefined1 **)&(this->MaterialParametersToClear).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar16 = -1 << ((byte)local_1b8 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      local_1b8 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_147481832;
      uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_14c = (int)lVar14;
    local_1b8 = local_14c + -1 + uVar22;
    if ((int)uVar11 < (int)local_1b8) {
      local_1b8 = uVar11;
    }
  }
LAB_147481832:
  local_res8 = SUB81(this,0);
  while( true ) {
    pTVar3 = local_f8;
    if (*(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34 !=
        (int)uStack_d0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_f0.CurrentBitIndex == local_1b8) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar3 == &this->MaterialParametersToClear)) break;
    local_148.Value =
         *(float **)(*(longlong *)&pTVar3->Elements + (longlong)TStack_f0.CurrentBitIndex * 0x10);
    local_138 = (FName)local_148.Value;
    uVar11 = Algo::
             BinarySearchBy<TArray<TTuple<FName,UMeshComponent::FMaterialParameterCache>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                       ((TArray<TTuple<FName,UMeshComponent::FMaterialParameterCache>,TSizedDefaultAllocator<32>_>
                         *)&param_1->_padding_,(FName *)&local_148.Value,local_res8,
                        (FNameFastLess)local_res8);
    if (uVar11 == 0xffffffff) {
LAB_14748193e:
      local_1ac = 0;
    }
    else {
      uVar22 = uVar17;
      if ((int)uVar11 < (int)param_1->_padding_) {
        uVar22 = ~uVar11 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = param_1->_padding_ + 8 + (longlong)(int)uVar11 * 0x30;
      if (lVar14 == 0) goto LAB_14748193e;
      local_1ac = *(undefined4 *)(lVar14 + 0x20);
    }
    local_98 = &local_138;
    local_90 = &local_1ac;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_const_&>_>
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)(this->AnimationCurves + 1),&local_148,(bool *)&local_98);
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  }
  USkeletalMeshComponent::ApplyAnimationCurvesToComponent
            (param_1,this->AnimationCurves + 1,this->AnimationCurves + 2);
  uVar11 = *(uint *)&(this->MaterialParametersToClear).Elements.field_0x28;
  uStack_10c = uVar17;
  if (uVar11 != 0) {
    puVar19 = *(uint **)&(this->MaterialParametersToClear).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar22 = *puVar19;
    uVar17 = uVar20;
    uVar21 = uVar20;
    while (uVar22 == 0) {
      lVar14 = (longlong)(int)uVar21;
      uVar17 = uVar17 + 0x20;
      uVar21 = uVar21 + 1;
      uStack_10c = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
      goto LAB_147481a2f;
      uVar22 = puVar19[lVar14 + 1];
    }
    local_198 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = local_198 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_148.Key._4_4_ = (int)lVar14;
    uStack_10c = (uVar17 - 1) + local_148.Key._4_4_;
    if ((int)uVar11 < (int)uStack_10c) {
      uStack_10c = uVar11;
    }
  }
LAB_147481a2f:
  pTVar3 = &this->MaterialParametersToClear;
  uStack_11c = (undefined4)local_198;
  uStack_104 = uStack_164;
  iStack_100 = *(int *)&(this->MaterialParametersToClear).Elements.field_0x8 -
               *(int *)&(this->MaterialParametersToClear).Elements.field_0x34;
  uVar20 = *(uint *)&(this->MaterialParametersToClear).Elements.field_0x28;
  uStack_110 = 0xffffffff;
  uVar22 = uVar20 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uStack_11c,uVar21);
  TStack_c0.CurrentBitIndex = uStack_10c;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar20 >> 5;
  TStack_c0._28_4_ = uStack_164;
  TStack_c0.BaseBitIndex = uVar17;
  uStack_a0 = CONCAT44(uStack_fc,iStack_100);
  local_128 = pTVar3;
  uStack_120 = uVar21;
  local_118 = puVar2;
  local_108 = uVar17;
  local_c8 = pTVar3;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || ((int)uVar11 < (int)uVar20)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar21 = *(uint *)&(this->MaterialParametersToClear).Elements.field_0x28;
  if (uVar20 != uVar21) {
    puVar18 = *(undefined1 **)&(this->MaterialParametersToClear).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar20 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_147481b50;
      uVar20 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar20 = (int)lVar14 + -1 + uVar22;
    if ((int)uVar21 < (int)uVar20) {
      uVar20 = uVar21;
    }
  }
LAB_147481b50:
  while( true ) {
    pTVar8 = local_c8;
    if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
        (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b4);
    }
    FVar4 = local_1a8;
    if (((TStack_c0.CurrentBitIndex == uVar20) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar3))
    break;
    FVar4 = *(FName *)(*(longlong *)&pTVar8->Elements + (longlong)TStack_c0.CurrentBitIndex * 0x10);
    local_130 = FVar4;
    if (*(int *)&this->AnimationCurves[1].field_0x8 != *(int *)&this->AnimationCurves[1].field_0x34)
    {
      uVar21 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                         *)(this->AnimationCurves + 1),FVar4.Number + uVar21,&local_130);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar4,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateCurvesToEvaluationContext @ 147481cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimInstanceProxy::UpdateCurvesToEvaluationContext
          (FAnimInstanceProxy *this,FAnimationEvaluationContext *param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FAnimationEvaluationContext *pFVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UpdateCurvesToEvaluationContext> FVar10;
  uint uVar11;
  longlong lVar12;
  FNameEntryId FVar13;
  FName FVar14;
  longlong lVar15;
  int iVar16;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_00
  ;
  uint *puVar17;
  FAnimationEvaluationContext *local_res10;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  uint uStackX_24;
  FName local_d8;
  FName local_d0;
  undefined1 local_c0 [8];
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  longlong local_60;
  longlong local_58;
  FName local_50 [2];
  
  local_res10 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::UpdateCurvesToEvaluationContext");
  iVar16 = 0;
  FVar10 = StatPtr_STAT_UpdateCurvesToEvaluationContext;
  if (StatPtr_STAT_UpdateCurvesToEvaluationContext ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateCurvesToEvaluationContext>)0x0) {
    pFVar9 = ::FName::FName(local_50,"STAT_UpdateCurvesToEvaluationContext");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_UpdateCurvesToEvaluationContext>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateCurvesToEvaluationContext,
                        *pFVar9,L"UpdateCurvesToEvaluationContext","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar13.Value;
        local_d8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstanceProxy.cpp"
                   ,0xdf3);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar13.Value;
      uStackX_24 = uVar11;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_147481dfb;
    }
  }
  bVar5 = false;
  FVar14 = local_d0;
LAB_147481dfb:
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->MaterialParametersToClear)
  ;
  local_a8 = &this->AnimationCurves[1].field_0x10;
  uStack_ac = 1;
  iVar2 = *(int *)&this->AnimationCurves[1].field_0x28;
  local_98 = 0;
  iStack_9c = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&this->AnimationCurves[1].field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_a8;
    }
    uVar11 = *puVar17;
    local_98 = 0;
    iVar16 = 0;
    while (uVar11 == 0) {
      lVar12 = (longlong)iVar16;
      local_98 = local_98 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_9c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_147481e8e;
      uVar11 = puVar17[lVar12 + 1];
    }
    uStack_ac = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_ac * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (uint)lVar12;
    iStack_9c = (local_res20 - 1) + local_98;
    if (iVar2 < iStack_9c) {
      iStack_9c = iVar2;
    }
  }
LAB_147481e8e:
  local_b8 = this->AnimationCurves + 1;
  uStack_a0 = 0xffffffff;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = iStack_9c;
  TStack_80.BaseBitIndex = local_98;
  iStack_b0 = iVar16;
  iStack_94 = iStack_9c;
  local_88 = local_b8;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
  TStack_80._padding_._0_4_ = iVar16;
  TStack_80._padding_._4_4_ = uStack_ac;
  TStack_80.CurrentBitIndex = iStack_9c;
  if (iStack_9c < iVar2) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&this->MaterialParametersToClear,(FName *)local_c0,
                 (bool *)(*(longlong *)local_88 + (longlong)TStack_80.CurrentBitIndex * 0x14));
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::ResetAnimationCurves");
  lVar12 = 3;
  this_00 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)this->AnimationCurves;
  do {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
              (this_00);
    this_00 = this_00 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FStatsHierarchical::EndMeasurement();
  pFVar7 = local_res10;
  iVar16 = *(int *)&(local_res10->Curve).field_0x8;
  lVar12 = *(longlong *)&local_res10->Curve;
  lVar15 = (longlong)iVar16 * 0x10 + lVar12;
  while( true ) {
    if (*(int *)&(pFVar7->Curve).field_0x8 != iVar16) {
      local_res10 = (FAnimationEvaluationContext *)((ulonglong)local_res10 & 0xffffffffffffff00);
      `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (lVar12 == lVar15) break;
    local_58 = lVar12 + 8;
    local_60 = lVar12;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_const_&>_>
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)this->AnimationCurves,
               (TPairInitializer<FName_const_&,float_const_&> *)(local_c0 + 4),(bool *)&local_60);
    lVar12 = lVar12 + 0x10;
  }
  if (((this->RequiredBones).Object == (FBoneContainer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Anim::FNamedValueArrayUtils::
  Intersection<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags,_FAnimInstanceProxy::UpdateCurvesToEvaluationContext_::__l2::<lambda_2>_>
            ((TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)&pFVar7->Curve,
             (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags> *)
             &((this->RequiredBones).Object)->CurveFlags,(<lambda_2>)this);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateInputProxy @ 147482080

void __cdecl
FAnimInstanceProxy::UpdateInputProxy(FAnimInstanceProxy *param_1,FAnimationUpdateContext *param_2)

{
  if (param_1 != (FAnimInstanceProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147482088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x28))();
    return;
  }
  return;
}

// UpdateSlotNodeWeight @ 147482ad0

void __thiscall
FAnimInstanceProxy::UpdateSlotNodeWeight
          (FAnimInstanceProxy *this,FName *param_1,float param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  FScriptContainerElement FVar8;
  longlong lVar9;
  
  puVar7 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->SlotNameToTrackerIndex,*param_1);
  if (puVar7 != (uint *)0x0) {
    iVar1 = this->BufferWriteIndex;
    uVar2 = *puVar7;
    lVar9 = (longlong)(int)uVar2;
    uVar6 = 0;
    if ((int)uVar2 < this->SlotWeightTracker[iVar1].ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SlotWeightTracker[iVar1].AllocatorInstance.Data;
    FVar8 = pFVar3[lVar9 * 0xc + 8];
    *(float *)(pFVar3 + lVar9 * 0xc) = param_2;
    *(float *)(pFVar3 + lVar9 * 0xc + 4) = param_3;
    if ((FVar8 != (FScriptContainerElement)0x0) || (__real_3727c5ac < param_2)) {
      FVar8 = (FScriptContainerElement)0x1;
    }
    else {
      FVar8 = (FScriptContainerElement)0x0;
    }
    pFVar3[lVar9 * 0xc + 8] = FVar8;
  }
  return;
}

// WasAnimNotifyNameTriggeredInAnyState @ 147482db0

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyNameTriggeredInAnyState(FAnimInstanceProxy *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar5 = (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x30;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) {
      return false;
    }
    if ((*(longlong *)(pFVar5 + 0x20) != 0) && (*(longlong *)(pFVar5 + 0x10) != 0)) {
      FVar3 = *(FName *)(*(longlong *)(pFVar5 + 0x10) + 0x3c);
      if ((*(longlong *)(pFVar5 + 0x18) != 0) &&
         (pFVar2 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)(*(longlong *)(pFVar5 + 0x18) + 0x158),FVar3), pFVar2 != (FName *)0x0))
      {
        FVar3 = *pFVar2;
      }
      if (FVar3 == param_1) {
        return true;
      }
    }
    pFVar5 = pFVar5 + 0x30;
  } while( true );
}

// WasAnimNotifyNameTriggeredInSourceState @ 147482eb0

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyNameTriggeredInSourceState
          (FAnimInstanceProxy *this,int param_1,int param_2,FName param_3)

{
  int iVar1;
  UMirrorDataTable *pUVar2;
  bool bVar3;
  FName *pFVar4;
  FName FVar5;
  FAnimNotifyEventReference *pFVar6;
  FAnimNotifyEventReference *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar7 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar6 = pFVar7 + iVar1;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) {
      return false;
    }
    if (((pFVar7->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
       (pFVar7->Notify != (FAnimNotifyEvent *)0x0)) {
      pUVar2 = (pFVar7->MirrorTable).field0_0x0.DebugPtr;
      FVar5 = pFVar7->Notify->NotifyName;
      if ((pUVar2 != (UMirrorDataTable *)0x0) &&
         (pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)&pUVar2->AnimNotifyToMirrorAnimNotifyMap,FVar5), pFVar4 != (FName *)0x0
         )) {
        FVar5 = *pFVar4;
      }
      if (FVar5 == param_3) {
        bVar3 = UAnimNotifyStateMachineInspectionLibrary::IsStateInStateMachineInEventContext
                          (pFVar7,param_1,param_2);
        return bVar3;
      }
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// WasAnimNotifyNameTriggeredInStateMachine @ 147482fe0

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyNameTriggeredInStateMachine
          (FAnimInstanceProxy *this,int param_1,FName param_2)

{
  int iVar1;
  UMirrorDataTable *pUVar2;
  bool bVar3;
  FName *pFVar4;
  FName FVar5;
  FAnimNotifyEventReference *pFVar6;
  FAnimNotifyEventReference *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar7 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar6 = pFVar7 + iVar1;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) {
      return false;
    }
    if (((pFVar7->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
       (pFVar7->Notify != (FAnimNotifyEvent *)0x0)) {
      pUVar2 = (pFVar7->MirrorTable).field0_0x0.DebugPtr;
      FVar5 = pFVar7->Notify->NotifyName;
      if ((pUVar2 != (UMirrorDataTable *)0x0) &&
         (pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)&pUVar2->AnimNotifyToMirrorAnimNotifyMap,FVar5), pFVar4 != (FName *)0x0
         )) {
        FVar5 = *pFVar4;
      }
      if (FVar5 == param_2) {
        bVar3 = UAnimNotifyStateMachineInspectionLibrary::IsStateMachineInEventContext
                          (pFVar7,param_1);
        return bVar3;
      }
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// WasAnimNotifyStateActiveInAnyState @ 147483100

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyStateActiveInAnyState
          (FAnimInstanceProxy *this,TSubclassOf<UAnimNotifyState> param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar8 = pFVar3 + 0x10;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 + -0x10 == pFVar3 + (longlong)iVar1 * 0x30) {
      return false;
    }
    if (((*(longlong *)(pFVar8 + 0x10) != 0) && (*(longlong *)pFVar8 != 0)) &&
       (lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x50), lVar4 != 0)) {
      pUVar7 = *(UObject **)param_1.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_147483199;
LAB_1474831c7:
        pUVar7 = (UObject *)0x0;
      }
      else {
        if (pUVar7 == (UObject *)0x0) goto LAB_1474831c7;
        UE::GC::MarkAsReachable(pUVar7);
LAB_147483199:
        pUVar6 = Z_Construct_UClass_UAnimNotifyState_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_1474831c7;
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_1474831c7;
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar4 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
          &pUVar7[1].field_0x8)) {
        return true;
      }
    }
    pFVar8 = pFVar8 + 0x30;
  } while( true );
}

// WasAnimNotifyStateActiveInSourceState @ 147483250

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyStateActiveInSourceState
          (FAnimInstanceProxy *this,int param_1,int param_2,TSubclassOf<UAnimNotifyState> param_3)

{
  int iVar1;
  int iVar2;
  UAnimNotifyState *pUVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FAnimNotifyEventReference *pFVar8;
  FAnimNotifyEventReference *pFVar9;
  undefined1 local_res8 [8];
  int local_res10;
  
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar9 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar8 = pFVar9 + iVar1;
  local_res10 = param_1;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) {
      return false;
    }
    if ((((pFVar9->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (pFVar9->Notify != (FAnimNotifyEvent *)0x0)) &&
       (pUVar3 = (pFVar9->Notify->NotifyStateClass).field0_0x0.DebugPtr,
       pUVar3 != (UAnimNotifyState *)0x0)) {
      pUVar7 = *(UObject **)param_3.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_1474832e6;
LAB_147483314:
        pUVar7 = (UObject *)0x0;
      }
      else {
        if (pUVar7 == (UObject *)0x0) goto LAB_147483314;
        UE::GC::MarkAsReachable(pUVar7);
LAB_1474832e6:
        pUVar6 = Z_Construct_UClass_UAnimNotifyState_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_147483314;
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_147483314;
      }
      lVar4 = pUVar3->_padding_;
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar4 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
          &pUVar7[1].field_0x8)) {
        bVar5 = UAnimNotifyStateMachineInspectionLibrary::IsStateInStateMachineInEventContext
                          (pFVar9,local_res10,param_2);
        return bVar5;
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// WasAnimNotifyStateActiveInStateMachine @ 1474833c0

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyStateActiveInStateMachine
          (FAnimInstanceProxy *this,int param_1,TSubclassOf<UAnimNotifyState> param_2)

{
  int iVar1;
  int iVar2;
  UAnimNotifyState *pUVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FAnimNotifyEventReference *pFVar8;
  FAnimNotifyEventReference *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar9 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar8 = pFVar9 + iVar1;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) {
      return false;
    }
    if ((((pFVar9->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (pFVar9->Notify != (FAnimNotifyEvent *)0x0)) &&
       (pUVar3 = (pFVar9->Notify->NotifyStateClass).field0_0x0.DebugPtr,
       pUVar3 != (UAnimNotifyState *)0x0)) {
      pUVar7 = *(UObject **)param_2.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_147483456;
LAB_147483484:
        pUVar7 = (UObject *)0x0;
      }
      else {
        if (pUVar7 == (UObject *)0x0) goto LAB_147483484;
        UE::GC::MarkAsReachable(pUVar7);
LAB_147483456:
        pUVar6 = Z_Construct_UClass_UAnimNotifyState_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_147483484;
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_147483484;
      }
      lVar4 = pUVar3->_padding_;
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar4 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
          &pUVar7[1].field_0x8)) {
        bVar5 = UAnimNotifyStateMachineInspectionLibrary::IsStateMachineInEventContext
                          (pFVar9,param_1);
        return bVar5;
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// WasAnimNotifyTriggeredInAnyState @ 147483520

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyTriggeredInAnyState
          (FAnimInstanceProxy *this,TSubclassOf<UAnimNotify> param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar8 = pFVar3 + 0x10;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 + -0x10 == pFVar3 + (longlong)iVar1 * 0x30) {
      return false;
    }
    if (((*(longlong *)(pFVar8 + 0x10) != 0) && (*(longlong *)pFVar8 != 0)) &&
       (lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x48), lVar4 != 0)) {
      pUVar7 = *(UObject **)param_1.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_1474835b9;
LAB_1474835e7:
        pUVar7 = (UObject *)0x0;
      }
      else {
        if (pUVar7 == (UObject *)0x0) goto LAB_1474835e7;
        UE::GC::MarkAsReachable(pUVar7);
LAB_1474835b9:
        pUVar6 = Z_Construct_UClass_UAnimNotify_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_1474835e7;
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_1474835e7;
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar4 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
          &pUVar7[1].field_0x8)) {
        return true;
      }
    }
    pFVar8 = pFVar8 + 0x30;
  } while( true );
}

// WasAnimNotifyTriggeredInSourceState @ 147483670

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyTriggeredInSourceState
          (FAnimInstanceProxy *this,int param_1,int param_2,TSubclassOf<UAnimNotify> param_3)

{
  int iVar1;
  int iVar2;
  UAnimNotify *pUVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FAnimNotifyEventReference *pFVar8;
  FAnimNotifyEventReference *pFVar9;
  undefined1 local_res8 [8];
  int local_res10;
  
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar9 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar8 = pFVar9 + iVar1;
  local_res10 = param_1;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) {
      return false;
    }
    if ((((pFVar9->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (pFVar9->Notify != (FAnimNotifyEvent *)0x0)) &&
       (pUVar3 = (pFVar9->Notify->Notify).field0_0x0.DebugPtr, pUVar3 != (UAnimNotify *)0x0)) {
      pUVar7 = *(UObject **)param_3.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_147483706;
LAB_147483734:
        pUVar7 = (UObject *)0x0;
      }
      else {
        if (pUVar7 == (UObject *)0x0) goto LAB_147483734;
        UE::GC::MarkAsReachable(pUVar7);
LAB_147483706:
        pUVar6 = Z_Construct_UClass_UAnimNotify_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_147483734;
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_147483734;
      }
      lVar4 = pUVar3->_padding_;
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar4 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
          &pUVar7[1].field_0x8)) {
        bVar5 = UAnimNotifyStateMachineInspectionLibrary::IsStateInStateMachineInEventContext
                          (pFVar9,local_res10,param_2);
        return bVar5;
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// WasAnimNotifyTriggeredInStateMachine @ 1474837e0

bool __thiscall
FAnimInstanceProxy::WasAnimNotifyTriggeredInStateMachine
          (FAnimInstanceProxy *this,int param_1,TSubclassOf<UAnimNotify> param_2)

{
  int iVar1;
  int iVar2;
  UAnimNotify *pUVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FAnimNotifyEventReference *pFVar8;
  FAnimNotifyEventReference *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar9 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar8 = pFVar9 + iVar1;
  do {
    if ((this->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) {
      return false;
    }
    if ((((pFVar9->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (pFVar9->Notify != (FAnimNotifyEvent *)0x0)) &&
       (pUVar3 = (pFVar9->Notify->Notify).field0_0x0.DebugPtr, pUVar3 != (UAnimNotify *)0x0)) {
      pUVar7 = *(UObject **)param_2.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_147483876;
LAB_1474838a4:
        pUVar7 = (UObject *)0x0;
      }
      else {
        if (pUVar7 == (UObject *)0x0) goto LAB_1474838a4;
        UE::GC::MarkAsReachable(pUVar7);
LAB_147483876:
        pUVar6 = Z_Construct_UClass_UAnimNotify_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_1474838a4;
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_1474838a4;
      }
      lVar4 = pUVar3->_padding_;
      if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar4 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
          &pUVar7[1].field_0x8)) {
        bVar5 = UAnimNotifyStateMachineInspectionLibrary::IsStateMachineInEventContext
                          (pFVar9,param_1);
        return bVar5;
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// operator() @ 1505092f0

bool __thiscall
`FAnimInstanceProxy::UpdateAnimation_WithRoot'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UAnimInstance *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5363211093709685987>);
  if (bVar2) {
    pUVar4 = CastChecked<UAnimInstance,UObject>(*(UObject **)(*(longlong *)this + 0x140));
    local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
    local_res10[0].Number = *(uint *)&pUVar4->field_0x1c;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5363211093709685987>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150509371;
    }
  }
  bVar2 = false;
LAB_150509371:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150509640

bool __thiscall `FAnimInstanceProxy::PostUpdate'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5363211093709685410>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5363211093709685410>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

