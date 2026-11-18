// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 10

// Emplace<FGuid_const_&,TSharedPtr<FChaosVDSessionInfo,1>_> @ 146304860

TSharedPtr<FChaosVDSessionInfo,1> * __thiscall
TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
::Emplace<FGuid_const_&,TSharedPtr<FChaosVDSessionInfo,1>_>
          (TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
           *this,FGuid *param_1,TSharedPtr<FChaosVDSessionInfo,1> *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar8 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer ==
      (TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_> *)0x0) {
    pTVar7 = (TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_> *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)&param_1->C;
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    *(FChaosVDSessionInfo **)((longlong)local_28.Pointer + 0x10) = param_2->Object;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x18) =
         (param_2->SharedReferenceCount).ReferenceController;
    (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_2->Object = (FChaosVDSessionInfo *)0x0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  uVar6 = CityHash64((char *)pTVar7,0x10);
  bVar4 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,(uint)uVar6,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,(uint)uVar6,pTVar7,local_res8[0]);
  }
  return (TSharedPtr<FChaosVDSessionInfo,1> *)
         (*(longlong *)&(this->Pairs).Elements + lVar8 * 0x28 + 0x10);
}

// EmplaceByHash<FGuid_const_&> @ 146305610

TSharedPtr<FChaosVDSessionInfo,1> * __thiscall
TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
::EmplaceByHash<FGuid_const_&>
          (TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_> *)0x0) {
    local_18.Pointer = (TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_> *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)&param_2->C;
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TSharedPtr<FChaosVDSessionInfo,1> *)
         (*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 146306f90

FChaosVDRecordingStatusMessage * __thiscall
TMapBase<FGuid,FChaosVDRecordingStatusMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FChaosVDRecordingStatusMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FChaosVDRecordingStatusMessage *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FChaosVDRecordingStatusMessage *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x80 + 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 146307020

FChaosVDTraceDetails * __thiscall
TMapBase<FGuid,FChaosVDTraceDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FChaosVDTraceDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FChaosVDTraceDetails *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FChaosVDTraceDetails *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// FindOrAddImpl<TObjectPtr<UPrimitiveComponent>_> @ 1463070b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FChaosHandlerSet * __thiscall
TMapBase<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>_>
::FindOrAddImpl<TObjectPtr<UPrimitiveComponent>_>
          (TMapBase<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>_>
           *this,uint param_1,TObjectPtr<UPrimitiveComponent> *param_2)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UPrimitiveComponent *pUVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  int local_res8 [2];
  TObjectPtr<UPrimitiveComponent> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      lVar5 = (longlong)iVar1 * 0x68;
      pUVar3 = *(UPrimitiveComponent **)(lVar5 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar5 = *(longlong *)&(this->Pairs).Elements + lVar5, lVar5 != 0)) {
          return (FChaosHandlerSet *)(lVar5 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar5 + 0x60 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FChaosHandlerSet,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UPrimitiveComponent>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FChaosHandlerSet *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 8);
}

// Find @ 146311a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UPrimitiveComponent *)*plVar2 == param_1) {
          pTVar4 = (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 146311ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBreakEventCallbackWrapper * __thiscall
TMapBase<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>_>
::Find(TMapBase<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>_>
       *this,TObjectPtr<UPrimitiveComponent_const_> param_1)

{
  TObjectPtr<UPrimitiveComponent_const_>_u_0 TVar1;
  int iVar2;
  FBreakEventCallbackWrapper *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UPrimitiveComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FBreakEventCallbackWrapper,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UPrimitiveComponent_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x50 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FBreakEventCallbackWrapper *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FBreakEventCallbackWrapper *)(lVar5 + 0x10);
    }
    return pFVar3;
  }
  return (FBreakEventCallbackWrapper *)0x0;
}

// Find @ 146311b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCrumblingEventCallbackWrapper * __thiscall
TMapBase<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>_>
::Find(TMapBase<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>_>
       *this,TObjectPtr<UPrimitiveComponent_const_> param_1)

{
  TObjectPtr<UPrimitiveComponent_const_>_u_0 TVar1;
  int iVar2;
  FCrumblingEventCallbackWrapper *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UPrimitiveComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FCrumblingEventCallbackWrapper,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UPrimitiveComponent_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x50 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FCrumblingEventCallbackWrapper *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FCrumblingEventCallbackWrapper *)(lVar5 + 0x10);
    }
    return pFVar3;
  }
  return (FCrumblingEventCallbackWrapper *)0x0;
}

// Find @ 146311c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRemovalEventCallbackWrapper * __thiscall
TMapBase<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>_>
::Find(TMapBase<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>_>
       *this,TObjectPtr<UPrimitiveComponent_const_> param_1)

{
  TObjectPtr<UPrimitiveComponent_const_>_u_0 TVar1;
  int iVar2;
  FRemovalEventCallbackWrapper *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UPrimitiveComponent_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UPrimitiveComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPrimitiveComponent>,FRemovalEventCallbackWrapper,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UPrimitiveComponent_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UPrimitiveComponent_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x50 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FRemovalEventCallbackWrapper *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FRemovalEventCallbackWrapper *)(lVar5 + 0x10);
    }
    return pFVar3;
  }
  return (FRemovalEventCallbackWrapper *)0x0;
}

// FindChecked @ 146311d00

TSharedPtr<FChaosVDSessionInfo,1> * __thiscall
TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
::FindChecked(TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
              *this,FGuid *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  TSharedPtr<FChaosVDSessionInfo,1> *pTVar6;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar5,param_1);
  if ((iVar4 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28, lVar1 != 0)) {
    return (TSharedPtr<FChaosVDSessionInfo,1> *)(lVar1 + 0x10);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TSharedPtr<FChaosVDSessionInfo,1> *)&DAT_00000010;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TSharedPtr<FChaosVDSessionInfo,1> *)(*pcVar2)();
  return pTVar6;
}

