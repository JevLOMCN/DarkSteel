// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 118

// Construct<FChaosBreakingEventData> @ 146344220

void __cdecl UE::CoreUObject::Private::Construct<FChaosBreakingEventData>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FChaosBreakingEventData> @ 146344260

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosBreakingEventData>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FChaosBreakingEventData> @ 1463442a0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosBreakingEventData>(void *param_1)

{
  return;
}

// Copy<FChaosBreakingEventData> @ 1463442f0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosBreakingEventData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionRepDynamicData> @ 146344850

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionRepDynamicData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionRepDynamicData> @ 1463448b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionRepDynamicData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGeometryCollectionRepDynamicData> @ 1463448d0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionRepDynamicData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// NetSerialize<FGeometryCollectionRepDynamicData> @ 1463448f0

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FGeometryCollectionRepDynamicData>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FGeometryCollectionRepDynamicData::NetSerialize(param_4,param_1,param_2,param_3);
  return bVar1;
}

// Copy<FGeometryCollectionRepDynamicData> @ 146344910

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionRepDynamicData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 8);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      if (pFVar4 != pFVar3) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        _Src = pFVar3->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 0x68);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryCollectionRepDynamicData> @ 146344a30

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryCollectionRepDynamicData>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  if ((param_2 != (void *)0x0) && (*(int *)param_1 == *(int *)param_2)) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// Construct<FGeometryCollectionRepStateData> @ 146345840

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionRepStateData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionRepStateData> @ 1463458b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionRepStateData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FGeometryCollectionRepStateData> @ 1463458e0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionRepStateData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// NetSerialize<FGeometryCollectionRepStateData> @ 146345930

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FGeometryCollectionRepStateData>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FGeometryCollectionRepStateData::NetSerialize(param_4,param_1,param_2,param_3);
  return bVar1;
}

// Copy<FGeometryCollectionRepStateData> @ 146345950

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionRepStateData>
          (void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + lVar6 + 8);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar6 + (longlong)param_1);
      if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 8) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 8),pTVar1);
      }
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 0x30);
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x30);
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_1 + lVar6 + 0x28);
      if (pFVar5 != pFVar2) {
        iVar4 = *(int *)((longlong)param_1 + lVar6 + 0x38);
        piVar3 = (int *)((longlong)param_1 + 0x3c);
        _Src = pFVar2->Data;
        *(int *)((longlong)param_1 + 0x38) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar4,*piVar3,pFVar5,iVar4,piVar3);
          if (iVar4 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar4 * 0x38);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FGeometryCollectionRepStateData> @ 146345a90

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryCollectionRepStateData>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  if ((param_2 != (void *)0x0) && (*(int *)param_1 == *(int *)param_2)) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// Construct<FGeometryCollectionRepData> @ 146345df0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionRepData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionRepData> @ 146345e30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionRepData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FGeometryCollectionRepData> @ 146345e60

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionRepData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// NetSerialize<FGeometryCollectionRepData> @ 146345ea0

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FGeometryCollectionRepData>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FGeometryCollectionRepData::NetSerialize(param_4,param_1,param_2,param_3);
  return bVar1;
}

// Copy<FGeometryCollectionRepData> @ 146345f00

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionRepData>(void *param_1,void *param_2,int param_3)

{
  TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_>::operator=
              (param_1,param_2);
    pTVar1 = (TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10);
    if (pTVar1 != (TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x10)) {
      iVar3 = ((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x10))->ArrayNum;
      piVar2 = &((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x10))->ArrayMax;
      _Src = (((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x10))->AllocatorInstance).Data;
      ((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
      ((longlong)param_1 + 0x10))->ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 7);
        }
      }
    }
    *(undefined4 *)
     &(((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
       ((longlong)param_1 + 0x20))->AllocatorInstance).Data =
         *(undefined4 *)
          &(((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x20))->AllocatorInstance).Data;
    *(undefined4 *)
     ((longlong)
      &(((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
        ((longlong)param_1 + 0x20))->AllocatorInstance).Data + 4) =
         *(undefined4 *)
          ((longlong)
           &(((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x20))->AllocatorInstance).Data + 4);
    if (&((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_2 + 0x20))->ArrayNum !=
        &((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 + 0x20))->ArrayNum) {
      if ((char)((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x20))->ArrayMax == '\0') {
        if ((char)((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0x20))->ArrayMax != '\0') {
          *(undefined1 *)
           &((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_1 + 0x20))->ArrayMax = 0;
        }
      }
      else {
        ((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
        ((longlong)param_1 + 0x20))->ArrayNum =
             ((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x20))->ArrayNum;
        *(undefined1 *)
         &((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_1 + 0x20))->ArrayMax = 1;
      }
    }
    *(undefined1 *)
     &(((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
       ((longlong)param_1 + 0x30))->AllocatorInstance).Data =
         *(undefined1 *)
          &(((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x30))->AllocatorInstance).Data;
    param_1 = &((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x30))->ArrayNum;
    param_2 = &((TArray<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x30))->ArrayNum;
  }
  return true;
}

// Identical<FGeometryCollectionRepData> @ 146346050

bool __cdecl
UE::CoreUObject::Private::Identical<FGeometryCollectionRepData>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  if ((param_2 != (void *)0x0) &&
     (*(int *)((longlong)param_1 + 0x20) == *(int *)((longlong)param_2 + 0x20))) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// Construct<FGeometryCollectionDamagePropagationData> @ 146346290

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryCollectionDamagePropagationData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FGeometryCollectionDamagePropagationData> @ 1463462b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionDamagePropagationData>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// Destruct<FGeometryCollectionDamagePropagationData> @ 1463462d0

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryCollectionDamagePropagationData>(void *param_1)

{
  return;
}

// Copy<FGeometryCollectionDamagePropagationData> @ 146346360

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionDamagePropagationData>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeomComponentCacheParameters> @ 1463464b0

void __cdecl UE::CoreUObject::Private::Construct<FGeomComponentCacheParameters>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x461c4000;
  return;
}

// ConstructForTests<FGeomComponentCacheParameters> @ 146346520

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeomComponentCacheParameters>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x461c4000;
  return;
}

// Destruct<FGeomComponentCacheParameters> @ 146346590

void __cdecl UE::CoreUObject::Private::Destruct<FGeomComponentCacheParameters>(void *param_1)

{
  return;
}

// Copy<FGeomComponentCacheParameters> @ 1463465f0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeomComponentCacheParameters>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x10);
      *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x14);
      *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x15);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x24);
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x29);
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x2c);
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x34);
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x38);
      *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x3c);
      *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x3d);
      *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x40);
      *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x44);
      *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosTrailingEventRequestSettings> @ 146346990

void __cdecl UE::CoreUObject::Private::Construct<FChaosTrailingEventRequestSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FChaosTrailingEventRequestSettings> @ 1463469b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosTrailingEventRequestSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FChaosTrailingEventRequestSettings> @ 1463469d0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosTrailingEventRequestSettings>(void *param_1)

{
  return;
}

// Copy<FChaosTrailingEventRequestSettings> @ 1463469e0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosTrailingEventRequestSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosTrailingEventData> @ 146346ef0

void __cdecl UE::CoreUObject::Private::Construct<FChaosTrailingEventData>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  return;
}

// ConstructForTests<FChaosTrailingEventData> @ 146346f50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosTrailingEventData>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  return;
}

// Destruct<FChaosTrailingEventData> @ 146346fb0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosTrailingEventData>(void *param_1)

{
  return;
}

// Copy<FChaosTrailingEventData> @ 146347000

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosTrailingEventData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      param_1 = (void *)((longlong)param_1 + 0x50);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosRemovalEventRequestSettings> @ 1463474f0

void __cdecl UE::CoreUObject::Private::Construct<FChaosRemovalEventRequestSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FChaosRemovalEventRequestSettings> @ 146347510

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosRemovalEventRequestSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FChaosRemovalEventRequestSettings> @ 146347530

void __cdecl UE::CoreUObject::Private::Destruct<FChaosRemovalEventRequestSettings>(void *param_1)

{
  return;
}

// Copy<FChaosRemovalEventRequestSettings> @ 146347540

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosRemovalEventRequestSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosRemovalEventData> @ 146347600

void __cdecl UE::CoreUObject::Private::Construct<FChaosRemovalEventData>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// ConstructForTests<FChaosRemovalEventData> @ 146347630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosRemovalEventData>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// Destruct<FChaosRemovalEventData> @ 146347660

void __cdecl UE::CoreUObject::Private::Destruct<FChaosRemovalEventData>(void *param_1)

{
  return;
}

// Copy<FChaosRemovalEventData> @ 146347770

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosRemovalEventData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosCollisionEventRequestSettings> @ 146347e70

void __cdecl UE::CoreUObject::Private::Construct<FChaosCollisionEventRequestSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FChaosCollisionEventRequestSettings> @ 146347e90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosCollisionEventRequestSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FChaosCollisionEventRequestSettings> @ 146347eb0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosCollisionEventRequestSettings>(void *param_1)

{
  return;
}

// Copy<FChaosCollisionEventRequestSettings> @ 146348040

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosCollisionEventRequestSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionDebugDrawActorSelectedRigidBody> @ 146348140

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryCollectionDebugDrawActorSelectedRigidBody>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionDebugDrawActorSelectedRigidBody> @ 146348160

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionDebugDrawActorSelectedRigidBody>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGeometryCollectionDebugDrawActorSelectedRigidBody> @ 146348180

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryCollectionDebugDrawActorSelectedRigidBody>
          (void *param_1)

{
  return;
}

// Copy<FGeometryCollectionDebugDrawActorSelectedRigidBody> @ 146348290

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionDebugDrawActorSelectedRigidBody>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosCollisionEventData> @ 146348720

void __cdecl UE::CoreUObject::Private::Construct<FChaosCollisionEventData>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FChaosCollisionEventData> @ 1463487b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosCollisionEventData>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FChaosCollisionEventData> @ 146348840

void __cdecl UE::CoreUObject::Private::Destruct<FChaosCollisionEventData>(void *param_1)

{
  return;
}

// Copy<FChaosCollisionEventData> @ 146348890

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosCollisionEventData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  if (param_3 != 0) {
    lVar17 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar17 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar17 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x70 + (longlong)param_1);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar17 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar16;
      param_1 = (void *)((longlong)param_1 + 0x80);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosBreakingEventRequestSettings> @ 146348fd0

void __cdecl UE::CoreUObject::Private::Construct<FChaosBreakingEventRequestSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FChaosBreakingEventRequestSettings> @ 146348ff0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosBreakingEventRequestSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FChaosBreakingEventRequestSettings> @ 146349010

void __cdecl UE::CoreUObject::Private::Destruct<FChaosBreakingEventRequestSettings>(void *param_1)

{
  return;
}

// Copy<FChaosBreakingEventRequestSettings> @ 146349060

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosBreakingEventRequestSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionDebugDrawWarningMessage> @ 1463490e0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryCollectionDebugDrawWarningMessage>(void *param_1)

{
  return;
}

// ConstructForTests<FGeometryCollectionDebugDrawWarningMessage> @ 1463490f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionDebugDrawWarningMessage>
          (void *param_1)

{
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_> @ 14635ad80

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPSOPrecacheVertexFactoryData> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPSOPrecacheVertexFactoryData>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChildActorComponent_*>_> @ 14635ae20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChildActorComponent_*>_>
          (ushort param_1,ForElementType<UChildActorComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChildActorComponent_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>_> @ 14635aef0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>_>
          (ushort param_1,ForElementType<UPrimitiveComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialInterfacePSOPrecacheParams>_> @ 14635afc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialInterfacePSOPrecacheParams>_>
          (ushort param_1,ForElementType<FMaterialInterfacePSOPrecacheParams> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMaterialInterfacePSOPrecacheParams>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*>_> @ 14635b080

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*>_>
          (ushort param_1,ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *param_2,
          int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (8 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 8;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*>_> @ 14635b0f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*>_>
          (ushort param_1,ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*> *param_2
          ,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (8 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 8;
  return iVar4;
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChildActorComponent_*>_> @ 14635b160

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChildActorComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UChildActorComponent_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChildActorComponent_*>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>_> @ 14635b1e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UPrimitiveComponent_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FGeometryCollectionAutoInstanceMesh> @ 146398ed0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionAutoInstanceMesh>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionAutoInstanceMesh> @ 146398f00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionAutoInstanceMesh>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FGeometryCollectionAutoInstanceMesh> @ 146398f20

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionAutoInstanceMesh>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FGeometryCollectionAutoInstanceMesh> @ 146398fa0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionAutoInstanceMesh>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(puVar2 + 1),
                 (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(puVar1 + 1))
      ;
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 3);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar2 + 4),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)(puVar1 + 4));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionSource> @ 146399260

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionSource>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa0) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionSource> @ 1463992f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionSource>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa0) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  return;
}

// Destruct<FGeometryCollectionSource> @ 146399380

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionSource>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FGeometryCollectionSource> @ 1463993d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionSource>(void *param_1,void *param_2,int param_3)

{
  FName FVar1;
  FSoftObjectPath *pFVar2;
  int iVar3;
  int iVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSoftObjectPath::operator=(param_1,param_2);
    FVar1 = (((FSoftObjectPath *)((longlong)param_2 + 0x20))->AssetPath).AssetName;
    (((FSoftObjectPath *)((longlong)param_1 + 0x20))->AssetPath).PackageName =
         (((FSoftObjectPath *)((longlong)param_2 + 0x20))->AssetPath).PackageName;
    (((FSoftObjectPath *)((longlong)param_1 + 0x20))->AssetPath).AssetName = FVar1;
    iVar3 = (((FSoftObjectPath *)((longlong)param_2 + 0x20))->SubPathString).Data.ArrayNum;
    iVar4 = (((FSoftObjectPath *)((longlong)param_2 + 0x20))->SubPathString).Data.ArrayMax;
    (((FSoftObjectPath *)((longlong)param_1 + 0x20))->SubPathString).Data.AllocatorInstance.Data =
         (((FSoftObjectPath *)((longlong)param_2 + 0x20))->SubPathString).Data.AllocatorInstance.
         Data;
    (((FSoftObjectPath *)((longlong)param_1 + 0x20))->SubPathString).Data.ArrayNum = iVar3;
    (((FSoftObjectPath *)((longlong)param_1 + 0x20))->SubPathString).Data.ArrayMax = iVar4;
    FVar1 = (((FSoftObjectPath *)((longlong)param_2 + 0x40))->AssetPath).AssetName;
    (((FSoftObjectPath *)((longlong)param_1 + 0x40))->AssetPath).PackageName =
         (((FSoftObjectPath *)((longlong)param_2 + 0x40))->AssetPath).PackageName;
    (((FSoftObjectPath *)((longlong)param_1 + 0x40))->AssetPath).AssetName = FVar1;
    iVar3 = (((FSoftObjectPath *)((longlong)param_2 + 0x40))->SubPathString).Data.ArrayNum;
    iVar4 = (((FSoftObjectPath *)((longlong)param_2 + 0x40))->SubPathString).Data.ArrayMax;
    (((FSoftObjectPath *)((longlong)param_1 + 0x40))->SubPathString).Data.AllocatorInstance.Data =
         (((FSoftObjectPath *)((longlong)param_2 + 0x40))->SubPathString).Data.AllocatorInstance.
         Data;
    (((FSoftObjectPath *)((longlong)param_1 + 0x40))->SubPathString).Data.ArrayNum = iVar3;
    (((FSoftObjectPath *)((longlong)param_1 + 0x40))->SubPathString).Data.ArrayMax = iVar4;
    FVar1 = (((FSoftObjectPath *)((longlong)param_2 + 0x60))->AssetPath).AssetName;
    (((FSoftObjectPath *)((longlong)param_1 + 0x60))->AssetPath).PackageName =
         (((FSoftObjectPath *)((longlong)param_2 + 0x60))->AssetPath).PackageName;
    (((FSoftObjectPath *)((longlong)param_1 + 0x60))->AssetPath).AssetName = FVar1;
    iVar3 = (((FSoftObjectPath *)((longlong)param_2 + 0x60))->SubPathString).Data.ArrayNum;
    iVar4 = (((FSoftObjectPath *)((longlong)param_2 + 0x60))->SubPathString).Data.ArrayMax;
    (((FSoftObjectPath *)((longlong)param_1 + 0x60))->SubPathString).Data.AllocatorInstance.Data =
         (((FSoftObjectPath *)((longlong)param_2 + 0x60))->SubPathString).Data.AllocatorInstance.
         Data;
    (((FSoftObjectPath *)((longlong)param_1 + 0x60))->SubPathString).Data.ArrayNum = iVar3;
    (((FSoftObjectPath *)((longlong)param_1 + 0x60))->SubPathString).Data.ArrayMax = iVar4;
    TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x80),
               (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x80));
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)
               &((FSoftObjectPath *)((longlong)param_1 + 0x80))->SubPathString,
               (TArray<float,TSizedDefaultAllocator<32>_> *)
               &((FSoftObjectPath *)((longlong)param_2 + 0x80))->SubPathString);
    *(char *)&(((FSoftObjectPath *)((longlong)param_1 + 0xa0))->AssetPath).PackageName.
              ComparisonIndex.Value =
         (char)(((FSoftObjectPath *)((longlong)param_2 + 0xa0))->AssetPath).PackageName.
               ComparisonIndex.Value;
    *(undefined1 *)
     ((longlong)
      &(((FSoftObjectPath *)((longlong)param_1 + 0xa0))->AssetPath).PackageName.ComparisonIndex.
       Value + 1) =
         *(undefined1 *)
          ((longlong)
           &(((FSoftObjectPath *)((longlong)param_2 + 0xa0))->AssetPath).PackageName.ComparisonIndex
            .Value + 1);
    pFVar2 = (FSoftObjectPath *)((longlong)param_2 + 0xa0);
    param_2 = &((FSoftObjectPath *)((longlong)param_2 + 0xa0))->SubPathString;
    *(undefined1 *)
     ((longlong)
      &(((FSoftObjectPath *)((longlong)param_1 + 0xa0))->AssetPath).PackageName.ComparisonIndex.
       Value + 2) =
         *(undefined1 *)((longlong)&(pFVar2->AssetPath).PackageName.ComparisonIndex.Value + 2);
    param_1 = &((FSoftObjectPath *)((longlong)param_1 + 0xa0))->SubPathString;
  }
  return true;
}

// Construct<FGeometryCollectionRenderResourceSizeInfo> @ 146399cf0

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryCollectionRenderResourceSizeInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionRenderResourceSizeInfo> @ 146399d00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionRenderResourceSizeInfo>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryCollectionRenderResourceSizeInfo> @ 146399d10

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryCollectionRenderResourceSizeInfo>(void *param_1)

{
  return;
}

// Copy<FGeometryCollectionRenderResourceSizeInfo> @ 146399d20

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionRenderResourceSizeInfo>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionProxyMeshData> @ 14639a110

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionProxyMeshData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionProxyMeshData> @ 14639a130

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionProxyMeshData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FGeometryCollectionProxyMeshData> @ 14639a150

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionProxyMeshData>(void *param_1)

{
  DestructItems<FGeometryCollectionProxyMeshMaterials,int>
            (*(FGeometryCollectionProxyMeshMaterials **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGeometryCollectionProxyMeshData> @ 14639a1a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionProxyMeshData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)pFVar7 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar7 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar6 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar7,iVar4,piVar1);
          ConstructItems<TObjectPtr<UStaticMesh>,TObjectPtr<UStaticMesh>,int>
                    (pFVar7->Data,(TObjectPtr<UStaticMesh> *)pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        pFVar6 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar6,(longlong)iVar4 * 0x30);
          }
        }
      }
      pFVar2 = pFVar7 + 4;
      if (pFVar2 != pFVar3 + 4) {
        DestructItems<FGeometryCollectionProxyMeshMaterials,int>
                  ((FGeometryCollectionProxyMeshMaterials *)pFVar2->Data,*(int *)&pFVar7[5].Data);
        iVar4 = *(int *)&pFVar3[5].Data;
        piVar1 = (int *)((longlong)&pFVar7[5].Data + 4);
        pFVar6 = pFVar3[4].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[5].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FGeometryCollectionProxyMeshMaterials,FGeometryCollectionProxyMeshMaterials,int>
                    (pFVar2->Data,(FGeometryCollectionProxyMeshMaterials *)pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionProxyMeshMaterials> @ 14639a350

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryCollectionProxyMeshMaterials>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionProxyMeshMaterials> @ 14639a360

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionProxyMeshMaterials>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryCollectionProxyMeshMaterials> @ 14639a370

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryCollectionProxyMeshMaterials>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryCollectionProxyMeshMaterials> @ 14639a390

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionProxyMeshMaterials>
          (void *param_1,void *param_2,int param_3)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionSizeSpecificData> @ 14639a3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionSizeSpecificData>(void *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = _UNK_15127a598;
  uVar3 = ___xmm_00000032000000190000000a00000005;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 8);
  *(undefined4 *)param_1 = 0x47c34ff3;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  uStack_34 = (undefined4)uVar3;
  uStack_30 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_2c = (undefined4)uVar4;
  uStack_28 = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x24,4,1,0,pFVar1,1,(int *)((longlong)param_1 + 0x14));
  pFVar2 = pFVar1->Data;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_34,CONCAT22(uStack_36,0x500));
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,uStack_30);
  *(ulonglong *)(pFVar2 + 0x10) = CONCAT44(0x3f800000,uStack_28);
  *(undefined8 *)(pFVar2 + 0x18) = 0x3c;
  *(undefined4 *)(pFVar2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 5000;
  return;
}

// ConstructForTests<FGeometryCollectionSizeSpecificData> @ 14639a3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionSizeSpecificData>(void *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = _UNK_15127a598;
  uVar3 = ___xmm_00000032000000190000000a00000005;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 8);
  *(undefined4 *)param_1 = 0x47c34ff3;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  uStack_34 = (undefined4)uVar3;
  uStack_30 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_2c = (undefined4)uVar4;
  uStack_28 = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x24,4,1,0,pFVar1,1,(int *)((longlong)param_1 + 0x14));
  pFVar2 = pFVar1->Data;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_34,CONCAT22(uStack_36,0x500));
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,uStack_30);
  *(ulonglong *)(pFVar2 + 0x10) = CONCAT44(0x3f800000,uStack_28);
  *(undefined8 *)(pFVar2 + 0x18) = 0x3c;
  *(undefined4 *)(pFVar2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 5000;
  return;
}

// Destruct<FGeometryCollectionSizeSpecificData> @ 14639a400

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionSizeSpecificData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// SerializeArchive<FGeometryCollectionSizeSpecificData> @ 14639a420

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FGeometryCollectionSizeSpecificData>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  return false;
}

// Copy<FGeometryCollectionSizeSpecificData> @ 14639a460

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionSizeSpecificData>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined4 *)param_1 = *(undefined4 *)((longlong)param_1 + lVar5);
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 8);
      if (pFVar4 != pFVar1) {
        iVar3 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar2 = (int *)((longlong)param_1 + 0x14);
        _Src = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x24,4,iVar3,*piVar2,pFVar4,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar3 * 0x24);
          }
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionCollisionTypeData> @ 14639a690

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryCollectionCollisionTypeData>(void *param_1)

{
  *(undefined2 *)param_1 = 0x500;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 5;
  *(undefined4 *)((longlong)param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x19;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3c;
  return;
}

// ConstructForTests<FGeometryCollectionCollisionTypeData> @ 14639a6d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionCollisionTypeData>(void *param_1)

{
  *(undefined2 *)param_1 = 0x500;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 5;
  *(undefined4 *)((longlong)param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x19;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3c;
  return;
}

// Destruct<FGeometryCollectionCollisionTypeData> @ 14639a710

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionCollisionTypeData>(void *param_1)

{
  return;
}

// Copy<FGeometryCollectionCollisionTypeData> @ 14639a720

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionCollisionTypeData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionCollisionParticleData> @ 14639ad00

void __cdecl
UE::CoreUObject::Private::Construct<FGeometryCollectionCollisionParticleData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3c;
  return;
}

// ConstructForTests<FGeometryCollectionCollisionParticleData> @ 14639ad20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionCollisionParticleData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3c;
  return;
}

// Destruct<FGeometryCollectionCollisionParticleData> @ 14639ad40

void __cdecl
UE::CoreUObject::Private::Destruct<FGeometryCollectionCollisionParticleData>(void *param_1)

{
  return;
}

// Copy<FGeometryCollectionCollisionParticleData> @ 14639ad50

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionCollisionParticleData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionLevelSetData> @ 14639b0e0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionLevelSetData>(void *param_1)

{
  *(undefined4 *)param_1 = 5;
  *(undefined4 *)((longlong)param_1 + 4) = 10;
  *(undefined4 *)((longlong)param_1 + 8) = 0x19;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x32;
  return;
}

// ConstructForTests<FGeometryCollectionLevelSetData> @ 14639b110

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionLevelSetData>(void *param_1)

{
  *(undefined4 *)param_1 = 5;
  *(undefined4 *)((longlong)param_1 + 4) = 10;
  *(undefined4 *)((longlong)param_1 + 8) = 0x19;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x32;
  return;
}

// Destruct<FGeometryCollectionLevelSetData> @ 14639b140

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionLevelSetData>(void *param_1)

{
  return;
}

// Copy<FGeometryCollectionLevelSetData> @ 14639b150

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionLevelSetData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCollectionEmbeddedExemplar> @ 14639b280

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCollectionEmbeddedExemplar>(void *param_1)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> TStack_28;
  FString FStack_18;
  
  pFVar2 = ::FString::FString(&FStack_18,L"None");
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  TStack_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  TStack_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    TStack_28.Size = 0;
  }
  FSoftObjectPath::SetPath(param_1,&TStack_28);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FGeometryCollectionEmbeddedExemplar> @ 14639b290

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGeometryCollectionEmbeddedExemplar>(void *param_1)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> TStack_28;
  FString FStack_18;
  
  pFVar2 = ::FString::FString(&FStack_18,L"None");
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  TStack_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  TStack_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    TStack_28.Size = 0;
  }
  FSoftObjectPath::SetPath(param_1,&TStack_28);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FGeometryCollectionEmbeddedExemplar> @ 14639b2a0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCollectionEmbeddedExemplar>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGeometryCollectionEmbeddedExemplar> @ 14639b2c0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCollectionEmbeddedExemplar>
          (void *param_1,void *param_2,int param_3)

{
  FSoftObjectPath *pFVar1;
  FSoftObjectPath *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FSoftObjectPath *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FSoftObjectPath::operator=(this,pFVar1);
      this[1].AssetPath.PackageName.ComparisonIndex.Value =
           pFVar1[1].AssetPath.PackageName.ComparisonIndex.Value;
      this[1].AssetPath.PackageName.Number = pFVar1[1].AssetPath.PackageName.Number;
      this[1].AssetPath.AssetName.ComparisonIndex.Value =
           pFVar1[1].AssetPath.AssetName.ComparisonIndex.Value;
      param_3 = param_3 + -1;
      this = (FSoftObjectPath *)&this[1].SubPathString;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UGeometryCollectionISMPoolDebugDrawComponent,UGeometryCollectionISMPoolDebugDrawComponent_*_&> @ 14639c430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UGeometryCollectionISMPoolDebugDrawComponent * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UGeometryCollectionISMPoolDebugDrawComponent,UGeometryCollectionISMPoolDebugDrawComponent_*_&>
          (UGeometryCollectionISMPoolDebugDrawComponent **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_> @ 14639fbe0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
          (ushort param_1,ForElementType<FMaterialRenderProxy_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FGeometryCollectionTransformBuffer>_> @ 14639fcb0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FGeometryCollectionTransformBuffer>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FGeometryCollectionTransformBuffer> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 4) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FGeometryCollectionTransformBuffer>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FGeometryCollectionTransformBuffer>_> @ 14639fd90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FGeometryCollectionTransformBuffer>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FGeometryCollectionTransformBuffer> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 4) {
      iVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FGeometryCollectionTransformBuffer>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// SetRandomBoneColor @ 1463c9480

void __cdecl UE::Dataflow::Private::SetRandomBoneColor(TSharedPtr<FGeometryCollection,1> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FGeometryCollection *pFVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  if ((param_1->Object == (FGeometryCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = param_1->Object;
  iVar11 = (**(code **)(pFVar4->_padding_ + 0x60))();
  fVar9 = __real_42c80000;
  fVar8 = __real_40a00000;
  fVar7 = __real_3f800000;
  uVar15 = 0;
  uVar17 = (ulonglong)iVar11;
  if (0 < iVar11) {
    lVar14 = 0;
    uVar18 = uVar17;
    do {
      uVar12 = (int)uVar18 * 0xbb38435 + 0x3619636b;
      uVar13 = uVar12 * 0xbb38435 + 0x3619636b;
      uVar16 = uVar13 * 0xbb38435 + 0x3619636b;
      uVar18 = (ulonglong)uVar16;
      fVar1 = FLinearColor::sRGBToLinearTable
              [(int)(((float)(uVar12 >> 9 | 0x3f800000) - fVar7) * fVar9 + fVar8) & 0xff];
      fVar2 = FLinearColor::sRGBToLinearTable
              [(int)(((float)(uVar13 >> 9 | 0x3f800000) - fVar7) * fVar9 + fVar8) & 0xff];
      fVar3 = FLinearColor::sRGBToLinearTable
              [(int)(((float)(uVar16 >> 9 | 0x3f800000) - fVar7) * fVar9 + fVar8) & 0xff];
      uVar12 = 0;
      if ((int)uVar15 < (int)pFVar4->_padding_) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = pFVar4->_padding_;
      uVar15 = uVar15 + 1;
      *(float *)(lVar14 + lVar5) = fVar1;
      *(float *)(lVar14 + 4 + lVar5) = fVar2;
      *(float *)(lVar14 + 8 + lVar5) = fVar3;
      *(undefined4 *)(lVar14 + 0xc + lVar5) = 0x3f800000;
      lVar14 = lVar14 + 0x10;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

