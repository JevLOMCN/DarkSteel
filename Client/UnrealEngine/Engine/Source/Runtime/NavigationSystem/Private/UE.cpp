// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 92

// Construct<FNavGraphNode> @ 146d603e0

void __cdecl UE::CoreUObject::Private::Construct<FNavGraphNode>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  ((ForAnyElementType *)((longlong)param_1 + 8))->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(int *)((longlong)param_1 + 0x14) = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,(ForAnyElementType *)((longlong)param_1 + 8),0,
             (int *)((longlong)param_1 + 0x14));
  return;
}

// ConstructForTests<FNavGraphNode> @ 146d60430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavGraphNode>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  ((ForAnyElementType *)((longlong)param_1 + 8))->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(int *)((longlong)param_1 + 0x14) = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,(ForAnyElementType *)((longlong)param_1 + 8),0,
             (int *)((longlong)param_1 + 0x14));
  return;
}

// Destruct<FNavGraphNode> @ 146d60480

void __cdecl UE::CoreUObject::Private::Destruct<FNavGraphNode>(void *param_1)

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

// Copy<FNavGraphNode> @ 146d604e0

bool __cdecl UE::CoreUObject::Private::Copy<FNavGraphNode>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar5 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar5 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar5 + 0x14);
        _Src = ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar5 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar4 * 0x18);
          }
        }
      }
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNavGraphEdge> @ 146d60b90

void __cdecl UE::CoreUObject::Private::Construct<FNavGraphEdge>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) & 0xffffff00;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNavGraphEdge> @ 146d60bb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavGraphEdge>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) & 0xffffff00;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNavGraphEdge> @ 146d60bd0

void __cdecl UE::CoreUObject::Private::Destruct<FNavGraphEdge>(void *param_1)

{
  return;
}

// Copy<FNavGraphEdge> @ 146d60be0

bool __cdecl UE::CoreUObject::Private::Copy<FNavGraphEdge>(void *param_1,void *param_2,int param_3)

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

// Construct<FNavigationFilterFlags> @ 146d61220

void __cdecl UE::CoreUObject::Private::Construct<FNavigationFilterFlags>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FNavigationFilterFlags> @ 146d61230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavigationFilterFlags>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FNavigationFilterFlags> @ 146d61240

void __cdecl UE::CoreUObject::Private::Destruct<FNavigationFilterFlags>(void *param_1)

{
  return;
}

// Copy<FNavigationFilterFlags> @ 146d61250

bool __cdecl
UE::CoreUObject::Private::Copy<FNavigationFilterFlags>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNavigationFilterArea> @ 146d61630

void __cdecl UE::CoreUObject::Private::Construct<FNavigationFilterArea>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  return;
}

// ConstructForTests<FNavigationFilterArea> @ 146d61650

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavigationFilterArea>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  return;
}

// Destruct<FNavigationFilterArea> @ 146d61670

void __cdecl UE::CoreUObject::Private::Destruct<FNavigationFilterArea>(void *param_1)

{
  return;
}

// Copy<FNavigationFilterArea> @ 146d616c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNavigationFilterArea>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar2 = (*(uint *)(puVar3 + 2) ^ *(uint *)(puVar1 + 2)) & 1 ^ *(uint *)(puVar3 + 2);
      *(uint *)(puVar3 + 2) = uVar2;
      uVar2 = (uVar2 ^ *(uint *)(puVar1 + 2)) & 2 ^ uVar2;
      *(uint *)(puVar3 + 2) = uVar2;
      *(uint *)(puVar3 + 2) = (uVar2 ^ *(uint *)(puVar1 + 2)) & 4 ^ uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNavCollisionBox> @ 146d61780

void __cdecl UE::CoreUObject::Private::Construct<FNavCollisionBox>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FNavCollisionBox> @ 146d617d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavCollisionBox>(void *param_1)

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
  return;
}

// Destruct<FNavCollisionBox> @ 146d61810

void __cdecl UE::CoreUObject::Private::Destruct<FNavCollisionBox>(void *param_1)

{
  return;
}

// Copy<FNavCollisionBox> @ 146d61820

bool __cdecl
UE::CoreUObject::Private::Copy<FNavCollisionBox>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNavCollisionCylinder> @ 146d61f80

void __cdecl UE::CoreUObject::Private::Construct<FNavCollisionCylinder>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FNavCollisionCylinder> @ 146d61fb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavCollisionCylinder>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FNavCollisionCylinder> @ 146d61fe0

void __cdecl UE::CoreUObject::Private::Destruct<FNavCollisionCylinder>(void *param_1)

{
  return;
}

// Copy<FNavCollisionCylinder> @ 146d620f0

bool __cdecl
UE::CoreUObject::Private::Copy<FNavCollisionCylinder>(void *param_1,void *param_2,int param_3)

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

// Construct<FSupportedAreaData> @ 146d64530

void __cdecl UE::CoreUObject::Private::Construct<FSupportedAreaData>(void *param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FSupportedAreaData::FSupportedAreaData(param_1,(TSubclassOf<UNavArea>)local_res8,-1);
  return;
}

// ConstructForTests<FSupportedAreaData> @ 146d64560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSupportedAreaData>(void *param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FSupportedAreaData::FSupportedAreaData(param_1,(TSubclassOf<UNavArea>)local_res8,-1);
  return;
}

// Destruct<FSupportedAreaData> @ 146d645d0

void __cdecl UE::CoreUObject::Private::Destruct<FSupportedAreaData>(void *param_1)

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

// Copy<FSupportedAreaData> @ 146d645f0

bool __cdecl
UE::CoreUObject::Private::Copy<FSupportedAreaData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)((longlong)pFVar5 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      *(undefined4 *)&pFVar5[2].Data = *(undefined4 *)&pFVar2[2].Data;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar2[3].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar2[3].Data);
      }
      pFVar5[3].Data = pFVar2[3].Data;
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UNavigationInvokerComponent,UNavigationInvokerComponent_*_&> @ 146d678a0

UNavigationInvokerComponent * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UNavigationInvokerComponent,UNavigationInvokerComponent_*_&>
          (UNavigationInvokerComponent **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UNavigationPath,UNavigationPath_*_&> @ 146d678c0

UNavigationPath * __cdecl
UE::Core::Private::DereferenceIfNecessary<UNavigationPath,UNavigationPath_*_&>
          (UNavigationPath **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&> @ 146d678e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavigationSystemV1 * __cdecl
UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
          (UNavigationSystemV1 **param_1)

{
  return *param_1;
}

// ReallocForCopy<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType> @ 146d6fbe0

void __cdecl
UE::Core::Private::ReallocForCopy<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,int param_4,ForAnyElementType *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * (ulonglong)param_1,param_2);
    iVar1 = (int)(uVar2 / param_1);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (param_4 < iVar1) {
    NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::ResizeAllocation
              (param_5,0,iVar1,param_1,param_2);
    *param_7 = iVar1;
  }
  else {
    *param_7 = param_4;
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_> @ 146d6fc80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
          (ushort param_1,ForElementType<UActorComponent_*> *param_2,int *param_3)

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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 146d6fd50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector<double>_> *param_2,int *param_3)

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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_> @ 146d6fe20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
          (ushort param_1,ForElementType<FNavigationOctreeElement> *param_2,int *param_3)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNavigationOctreeElement>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType> @ 146d6fef0

/* WARNING: Removing unreachable block (ram,0x000146d6ff4e) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
          (ushort param_1,ForAnyElementType *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulong64 uVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar2 = *param_3;
  uVar3 = (uint)(byte)(param_1 >> 8);
  uVar7 = (ulonglong)param_1 & 0xff;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    lVar4 = 4;
    if (iVar2 != 0) {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar5 = FMemory::QuantizeSize(uVar7 * lVar4,uVar3);
    iVar6 = (int)(uVar5 / uVar7);
    if (iVar6 < (int)uVar1) {
      iVar6 = 0x7fffffff;
    }
    NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::ResizeAllocation
              (param_2,iVar2,iVar6,(int)uVar7,uVar3);
    *param_3 = iVar6;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_> @ 146d6ffc0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FNavigationOctreeElement> *param_4,
          int *param_5,int *param_6)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNavigationOctreeElement>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_> @ 146d700a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
          (uint param_1,uint param_2,ForElementType<FNavigationOctreeElement> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNavigationOctreeElement>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_> @ 146d70160

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UActorComponent_*> *param_4,
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_> @ 146d701e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationOctreeElement>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FNavigationOctreeElement> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNavigationOctreeElement>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType> @ 146d70260

void __cdecl
UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * (ulonglong)param_1,param_2);
    iVar1 = (int)(uVar2 / param_1);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::ResizeAllocation
              (param_4,param_5,iVar1,param_1,param_2);
  }
  return;
}

// operator() @ 146d7b9f0

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
UE::Navigation::Private::<lambda_25>::operator()
          (<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  UNavigationObjectRepository *this_00;
  undefined4 local_38 [2];
  FOutputDevice *local_30;
  undefined4 *local_28;
  code *local_20;
  FOutputDevice **local_18;
  
  this_00 = UWorld::GetSubsystem<UNavigationObjectRepository>(param_2);
  if (this_00 != (UNavigationObjectRepository *)0x0) {
    local_28 = local_38;
    local_38[0] = 0;
    local_18 = &local_30;
    local_20 = Core::Private::Function::
               TFunctionRefCaller<`UE::Navigation::Private::<lambda_25>::operator()'::__l5::<lambda_1>,void,TSharedRef<FNavigationElement_const_,1>_const_&>
               ::Call;
    local_30 = param_3;
    UNavigationObjectRepository::ForEachNavigationElement
              (this_00,(TFunctionRef<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&)>
                        *)&local_20);
    FOutputDevice::LogfImpl(param_3,Log,L"Total: %d elements");
    return;
  }
  FOutputDevice::Log(param_3,Error,
                     L"Command failed since it was unable to find the navigation repository");
  return;
}

// operator() @ 146d7ba80

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

void __thiscall
UE::Navigation::Private::<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  wchar_t wVar8;
  int iVar9;
  uint uVar10;
  ULocalPlayer *pUVar11;
  uint uVar12;
  wchar_t *pwVar13;
  wchar_t *_Str;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FDestructionSentinel local_a8;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar11 = UWorld::GetFirstLocalPlayerFromController(param_2);
  if (pUVar11 == (ULocalPlayer *)0x0) {
    FOutputDevice::Log(param_3,Error,L"Command failed since it was unable to find a local player");
  }
  else {
    local_80 = (pUVar11->LastViewLocation).field0_0x0._s_0.Z;
    dVar3 = (pUVar11->LastViewLocation).field0_0x0._s_0.X;
    dVar4 = (pUVar11->LastViewLocation).field0_0x0._s_0.Y;
    local_58 = __real_408f400000000000;
    if (0 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      _Str = L"";
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)pFVar1;
      }
      wVar8 = *pwVar13;
      if ((wVar8 == L'-') || (wVar8 == L'+')) {
        pwVar13 = pwVar13 + 1;
        wVar8 = *pwVar13;
      }
      bVar5 = false;
      if (wVar8 != L'\0') {
        wVar8 = *pwVar13;
        do {
          if (wVar8 == L'.') {
            if (bVar5) {
LAB_146d7bd50:
              FOutputDevice::Log(param_3,Error,
                                 L"Command failed since first parameter is not a valid numerical value"
                                );
              return;
            }
            bVar5 = true;
          }
          else {
            iVar9 = iswdigit(wVar8);
            if (iVar9 == 0) goto LAB_146d7bd50;
          }
          wVar8 = pwVar13[1];
          pwVar13 = pwVar13 + 1;
        } while (wVar8 != L'\0');
      }
      if (param_1->ArrayNum < 1) {
        local_b8 = 0;
        local_b0 = (longlong)param_1->ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) != 0) {
        _Str = *(wchar_t **)pFVar1;
      }
      local_58 = wcstod(_Str,(wchar_t **)0x0);
    }
    local_48 = 1;
    local_78 = dVar3 - local_58;
    local_60 = dVar3 + local_58;
    local_68 = local_80 - local_58;
    local_50 = local_80 + local_58;
    local_70 = dVar4 - local_58;
    local_58 = dVar4 + local_58;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UNavigationSystemV1::NavigationDirtyEvent,(FWriteAccessScope *)&local_a8);
    bVar5 = false;
    UNavigationSystemV1::NavigationDirtyEvent._28_4_ =
         UNavigationSystemV1::NavigationDirtyEvent._28_4_ + 1;
    uVar12 = UNavigationSystemV1::NavigationDirtyEvent._16_4_ - 1;
    if (-1 < (int)uVar12) {
      lVar14 = (longlong)(int)uVar12;
      lVar15 = lVar14 << 4;
      bVar5 = false;
      do {
        uVar10 = 0;
        if ((int)uVar12 < (int)UNavigationSystemV1::NavigationDirtyEvent._16_4_) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (local_b8 = lVar14,
           local_b0 = (longlong)(int)UNavigationSystemV1::NavigationDirtyEvent._16_4_,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar15 + 8 + UNavigationSystemV1::NavigationDirtyEvent._8_8_) == 0) ||
            (*(longlong **)(lVar15 + UNavigationSystemV1::NavigationDirtyEvent._8_8_) ==
             (longlong *)0x0)) ||
           (cVar7 = (**(code **)(**(longlong **)
                                   (lVar15 + UNavigationSystemV1::NavigationDirtyEvent._8_8_) + 0x68
                                ))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar14 = lVar14 + -1;
        lVar15 = lVar15 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    UNavigationSystemV1::NavigationDirtyEvent._28_4_ =
         UNavigationSystemV1::NavigationDirtyEvent._28_4_ + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UNavigationSystemV1::NavigationDirtyEvent,false);
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
  }
  return;
}

// operator() @ 146d7bd80

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
UE::Navigation::Private::<lambda_27>::operator()
          (<lambda_27> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  bool bVar1;
  UObjectBaseUtility *this_00;
  wchar_t *pwVar2;
  int local_res18 [4];
  FNavigationOctree *local_38;
  <lambda_1> local_30;
  <lambda_2> local_28;
  
  if (param_2 != (UWorld *)0x0) {
    this_00 = (UObjectBaseUtility *)(param_2->NavigationSystem).field0_0x0.DebugPtr;
    if (this_00 == (UObjectBaseUtility *)0x0) {
LAB_146d7bdae:
      this_00 = (UObjectBaseUtility *)0x0;
    }
    else {
      bVar1 = UObjectBaseUtility::IsA<UNavigationSystemV1>(this_00);
      if (!bVar1) goto LAB_146d7bdae;
    }
    if (this_00 != (UObjectBaseUtility *)0x0) {
      local_38 = *(FNavigationOctree **)&this_00[0x16].field_0x18;
      if (local_38 != (FNavigationOctree *)0x0) {
        local_28.NumElements = local_res18;
        local_res18[0] = 0;
        local_28.Octree = &local_38;
        local_30.NumElements = local_res18;
        local_28.OutputDevice = param_3;
        TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
        FindNodesWithPredicateInternal<_UE::Navigation::Private::<lambda_27>::operator()_::__l8::<lambda_1>,_UE::Navigation::Private::<lambda_27>::operator()_::__l8::<lambda_2>_>
                  ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                   &local_38->_padding_,0xffffffff,0,(FOctreeNodeContext *)&local_38->_padding_,
                   &local_30,&local_28);
        FOutputDevice::LogfImpl(param_3,Log,L"Total: %d elements");
        return;
      }
      pwVar2 = L"Octree not used in the current configuration";
      local_38 = (FNavigationOctree *)0x0;
      goto LAB_146d7be61;
    }
  }
  pwVar2 = L"Command failed since it was unable to find the navigation system";
LAB_146d7be61:
  FOutputDevice::Log(param_3,Error,pwVar2);
  return;
}

// FindNavigationSystem @ 146d95b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavigationSystemV1 * __cdecl
UE::Navigation::Private::FindNavigationSystem
          (TArray<ANavigationData_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UNavigationSystemV1 *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pUVar6 = (UNavigationSystemV1 *)0x0;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  do {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<ANavigationData_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return pUVar6;
    }
    if (*(AActor **)pFVar7 != (AActor *)0x0) {
      pUVar4 = AActor::GetWorld(*(AActor **)pFVar7);
      if (pUVar4 == (UWorld *)0x0) {
        pUVar6 = (UNavigationSystemV1 *)0x0;
      }
      else {
        pUVar6 = (UNavigationSystemV1 *)(pUVar4->NavigationSystem).field0_0x0.DebugPtr;
        if (pUVar6 == (UNavigationSystemV1 *)0x0) {
LAB_146d95ba7:
          pUVar6 = (UNavigationSystemV1 *)0x0;
        }
        else {
          pUVar5 = UNavigationSystemV1::StaticClass();
          iVar3 = (int)pUVar5->_padding_;
          if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar5->_padding_)) goto LAB_146d95ba7;
        }
        if (pUVar6 != (UNavigationSystemV1 *)0x0) {
          return pUVar6;
        }
      }
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetDirtyFlag @ 146d9b0c0

ENavigationDirtyFlag __cdecl
UE::NavigationHelper::Private::GetDirtyFlag(int param_1,ENavigationDirtyFlag param_2)

{
  if ((param_1 & 1U) != 0) {
    return All;
  }
  if ((param_1 & 2U) != 0) {
    param_2 = DynamicModifier;
  }
  return param_2;
}

// GetFallbackNavDataConfig @ 146d9b370

FNavDataConfig * __cdecl UE::Navigation::Private::GetFallbackNavDataConfig(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FNavDataConfig::FNavDataConfig
                (&FallbackNavDataConfig,FNavigationSystem::FallbackAgentRadius,
                 FNavigationSystem::FallbackAgentHeight);
      atexit(`UE::Navigation::Private::GetFallbackNavDataConfig'::__l2::
             _dynamic_atexit_destructor_for__FallbackNavDataConfig__);
      _Init_thread_footer(&::_TSS0);
      return &FallbackNavDataConfig;
    }
  }
  return &FallbackNavDataConfig;
}

// LogNavInvokerRegistration @ 146da67b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Navigation::Private::LogNavInvokerRegistration
          (UNavigationSystemV1 *param_1,FNavigationInvoker *param_2)

{
  ENavigationInvokerPriority EVar1;
  ANavigationData *pAVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  UObject *pUVar8;
  UEnum *this;
  ulong64 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStackY_278 [32];
  TVector<double>_u_0 local_228;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FString local_1c8;
  FText local_1b8;
  FLogScopedCategoryAndVerbosityOverride local_1a8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_278;
  if ((byte)LogNavInvokers._0_1_ < 5) {
    return;
  }
  FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
            (&local_1a8,(FName)LogNavInvokers._4_8_,Log);
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  uVar10 = 0;
  local_168.End = (wchar_t *)local_48;
  if (0 < (param_1->NavDataSet).ArrayNum) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (param_1->NavDataSet).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
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
      pAVar2 = *(ANavigationData **)((param_1->NavDataSet).AllocatorInstance.Data + lVar12);
      if (((pAVar2 != (ANavigationData *)0x0) &&
          (uVar6 = UNavigationSystemV1::GetSupportedAgentIndex(param_1,pAVar2), uVar6 < 0x10)) &&
         (((param_2->SupportedAgents).field0_0x0.PackedBits >> (uVar6 & 0x1f) & 1) != 0)) {
        local_1e0 = (FName)pAVar2->_padding_;
        ::FName::ToString(&local_1e0,&local_1c8);
        ::FString::PrintfImpl(&local_1f0,L"%s ");
        FVar4.Data = local_1f0.Data.AllocatorInstance.Data;
        iVar11 = local_1f0.Data.ArrayNum + -1;
        if (local_1f0.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        uVar9 = (ulong64)iVar11;
        if (local_168.End < local_168.CurPos + uVar9) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,uVar9);
        }
        if (iVar11 != 0) {
          pvVar7 = FGenericPlatformString::Memcpy(local_168.CurPos,FVar4.Data,uVar9 * 2);
          local_168.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
        }
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar10 < (param_1->NavDataSet).ArrayNum);
  }
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'\0';
  if (((param_2->Actor).WeakPtr.ObjectIndex == 0) &&
     ((param_2->Actor).WeakPtr.ObjectSerialNumber == 0)) {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_2->Object);
    if (pUVar8 != (UObject *)0x0) {
      local_1d8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_1d8.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_1d8,&local_210);
      goto LAB_146da6a26;
    }
  }
  else {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    if (pUVar8 != (UObject *)0x0) {
      local_1d0.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_1d0.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_1d0,&local_210);
      goto LAB_146da6a26;
    }
  }
  ::FString::FString(&local_210,L"None");
LAB_146da6a26:
  EVar1 = param_2->Priority;
  this = StaticEnum<enum_ENavigationInvokerPriority>();
  if ((this == (UEnum *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UEnum::GetDisplayNameTextByValue(this,&local_1b8,(ulonglong)EVar1);
  FText::ToString(&local_1b8);
  ::FString::PrintfImpl
            (&local_200,
             L"Register invoker r: %.0f, r area: %.0f m2, removal r: %.0f, priority: %s, (%s %s) ");
  if (local_1b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
  }
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogNavInvokers._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavInvokers);
  }
  local_228._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_228._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_228._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FNavigationInvoker::GetLocation(param_2,(TVector<double> *)&local_228._s_0);
  if (FVisualLogger::bIsRecording != 0) {
    local_198._s_0.X = local_228._s_0.X;
    local_198._s_0.Y = local_228._s_0.Y;
    local_198._s_0.Z = local_228._s_0.Z + __real_4034000000000000;
    FVisualLogger::CylinderLogfImpl
              ((UObject *)param_1,(FName *)&LogNavInvokers.field_0x4,Log,
               (TVector<double> *)&local_228._s_0,(TVector<double> *)&local_198._s_0,
               param_2->GenerationRadius,&FColorList::LimeGreen,false,L"%s");
    if (FVisualLogger::bIsRecording != 0) {
      local_180._s_0.X = local_228._s_0.X;
      local_180._s_0.Y = local_228._s_0.Y;
      local_180._s_0.Z = local_228._s_0.Z + __real_4034000000000000;
      FVisualLogger::CylinderLogfImpl
                ((UObject *)param_1,(FName *)&LogNavInvokers.field_0x4,Log,
                 (TVector<double> *)&local_228._s_0,(TVector<double> *)&local_180._s_0,
                 param_2->RemovalRadius,&FColorList::IndianRed,false,L"");
    }
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavInvokers,Log);
  FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_1a8);
  return;
}

// ShouldComponentWaitForActorToRegister @ 146db9e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Navigation::Private::ShouldComponentWaitForActorToRegister(UActorComponent *param_1)

{
  if ((bComponentShouldWaitForActorToRegister) && (param_1->OwnerPrivate != (AActor *)0x0)) {
    return !(bool)param_1->OwnerPrivate->bHasRegisteredAllComponents;
  }
  return false;
}

// Construct<FNavLinkGenerationJumpDownConfig> @ 146dc8e80

void __cdecl UE::CoreUObject::Private::Construct<FNavLinkGenerationJumpDownConfig>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42a00000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x42a00000;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x28) = pUVar1;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x30) = pUVar1;
  return;
}

// ConstructForTests<FNavLinkGenerationJumpDownConfig> @ 146dc8e90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNavLinkGenerationJumpDownConfig>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42a00000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x42a00000;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x28) = pUVar1;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x30) = pUVar1;
  return;
}

// Destruct<FNavLinkGenerationJumpDownConfig> @ 146dc8ea0

void __cdecl UE::CoreUObject::Private::Destruct<FNavLinkGenerationJumpDownConfig>(void *param_1)

{
  return;
}

// SerializeArchive<FNavLinkGenerationJumpDownConfig> @ 146dc8ec0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FNavLinkGenerationJumpDownConfig>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpDownConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpDownConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig,
                         (UObject *)pUVar1,L"NavLinkGenerationJumpDownConfig");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpDownConfig.OuterSingleton,
             param_1,param_2,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpDownConfig.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  return true;
}

// Copy<FNavLinkGenerationJumpDownConfig> @ 146dc8f60

bool __cdecl
UE::CoreUObject::Private::Copy<FNavLinkGenerationJumpDownConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)pvVar1 + 4);
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)pvVar1 + 8);
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)((longlong)pvVar1 + 0xc);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)((longlong)pvVar1 + 0x10);
      *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)((longlong)pvVar1 + 0x14);
      *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)((longlong)pvVar1 + 0x18);
      *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)((longlong)pvVar1 + 0x1c);
      *(undefined2 *)(puVar2 + 0x20) = *(undefined2 *)((longlong)pvVar1 + 0x20);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x28) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x28));
      }
      *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)((longlong)pvVar1 + 0x28);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x30) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x30));
      }
      *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)((longlong)pvVar1 + 0x30);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x38) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x38));
      }
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)((longlong)pvVar1 + 0x38);
      *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)((longlong)pvVar1 + 0x40);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x48) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x48));
      }
      *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)((longlong)pvVar1 + 0x48);
      puVar2[0x50] = *(undefined1 *)((longlong)pvVar1 + 0x50);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x58);
      puVar2 = puVar2 + 0x58;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNavLinkGenerationJumpConfig> @ 146dc90e0

void __cdecl UE::CoreUObject::Private::Construct<FNavLinkGenerationJumpConfig>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x42a00000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x42a00000;
  *(undefined2 *)((longlong)param_1 + 0x28) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x30) = pUVar1;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x38) = pUVar1;
  return;
}

// ConstructForTests<FNavLinkGenerationJumpConfig> @ 146dc90f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNavLinkGenerationJumpConfig>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x42a00000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x42a00000;
  *(undefined2 *)((longlong)param_1 + 0x28) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x30) = pUVar1;
  pUVar1 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x38) = pUVar1;
  return;
}

// Destruct<FNavLinkGenerationJumpConfig> @ 146dc9100

void __cdecl UE::CoreUObject::Private::Destruct<FNavLinkGenerationJumpConfig>(void *param_1)

{
  return;
}

// SerializeArchive<FNavLinkGenerationJumpConfig> @ 146dc9110

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FNavLinkGenerationJumpConfig>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkGenerationJumpConfig,(UObject *)pUVar1,
                         L"NavLinkGenerationJumpConfig");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton,param_1,
             param_2,(UStruct *)
                     Z_Registration_Info_UScriptStruct_FNavLinkGenerationJumpConfig.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  return true;
}

// Copy<FNavLinkGenerationJumpConfig> @ 146dc9180

bool __cdecl
UE::CoreUObject::Private::Copy<FNavLinkGenerationJumpConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)((longlong)pvVar1 + 4);
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)((longlong)pvVar1 + 0xc);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)((longlong)pvVar1 + 0x10);
      *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)((longlong)pvVar1 + 0x14);
      *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)((longlong)pvVar1 + 0x18);
      *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)((longlong)pvVar1 + 0x1c);
      *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)((longlong)pvVar1 + 0x20);
      *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)((longlong)pvVar1 + 0x24);
      *(undefined2 *)(puVar2 + 0x28) = *(undefined2 *)((longlong)pvVar1 + 0x28);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x30) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x30));
      }
      *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)((longlong)pvVar1 + 0x30);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x38) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x38));
      }
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)((longlong)pvVar1 + 0x38);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x40) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x40));
      }
      *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)((longlong)pvVar1 + 0x40);
      *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)((longlong)pvVar1 + 0x48);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x50) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x50));
      }
      *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)((longlong)pvVar1 + 0x50);
      puVar2[0x58] = *(undefined1 *)((longlong)pvVar1 + 0x58);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x60);
      puVar2 = puVar2 + 0x60;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNavLinkCustomInstanceData> @ 146dc9500

void __cdecl UE::CoreUObject::Private::Construct<FNavLinkCustomInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  FActorComponentInstanceData::FActorComponentInstanceData(param_1);
  *(undefined ***)param_1 = &___7FNavLinkCustomInstanceData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// ConstructForTests<FNavLinkCustomInstanceData> @ 146dc9560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavLinkCustomInstanceData>(void *param_1)

{
  FActorComponentInstanceData::FActorComponentInstanceData(param_1);
  *(undefined ***)param_1 = &___7FNavLinkCustomInstanceData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FNavLinkCustomInstanceData> @ 146dc95c0

void __cdecl UE::CoreUObject::Private::Destruct<FNavLinkCustomInstanceData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInstanceCacheDataBase__6B_;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FNavLinkCustomInstanceData> @ 146dc97c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNavLinkCustomInstanceData>(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FInstanceCacheDataBase::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_);
    }
    ((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->_padding_ =
         ((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_;
    *(undefined1 *)
     &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).AllocatorInstance.
      Data = *(undefined1 *)
              &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
               AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)
      &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).AllocatorInstance.
       Data + 4) = *(undefined4 *)
                    ((longlong)
                     &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
                      AllocatorInstance.Data + 4);
    iVar1 = (((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).ArrayMax;
    (((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).ArrayNum =
         (((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).ArrayNum;
    (((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).ArrayMax = iVar1;
    (((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->UniqueTransientPackage).
    DuplicatedObject =
         (((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->UniqueTransientPackage).
         DuplicatedObject;
    param_1 = &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->UniqueTransientPackage).
               ObjectPathDepth;
    param_2 = &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->UniqueTransientPackage).
               ObjectPathDepth;
  }
  return true;
}

// Construct<FNavMeshResolutionParam> @ 146dca0e0

void __cdecl UE::CoreUObject::Private::Construct<FNavMeshResolutionParam>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x420c0000;
  return;
}

// ConstructForTests<FNavMeshResolutionParam> @ 146dca110

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavMeshResolutionParam>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x420c0000;
  return;
}

// Destruct<FNavMeshResolutionParam> @ 146dca150

void __cdecl UE::CoreUObject::Private::Destruct<FNavMeshResolutionParam>(void *param_1)

{
  return;
}

// Copy<FNavMeshResolutionParam> @ 146dca270

bool __cdecl
UE::CoreUObject::Private::Copy<FNavMeshResolutionParam>(void *param_1,void *param_2,int param_3)

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

// Construct<FRecastNavMeshTileGenerationDebug> @ 146dca540

void __cdecl UE::CoreUObject::Private::Construct<FRecastNavMeshTileGenerationDebug>(void *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 4) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)param_1 + 0xc) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  uVar1 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 4) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)param_1 + 0xc) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  uVar1 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffff0000;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FRecastNavMeshTileGenerationDebug> @ 146dca5c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRecastNavMeshTileGenerationDebug>(void *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 4) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)param_1 + 0xc) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  uVar1 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 4) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)param_1 + 0xc) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  uVar1 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffff0000;
  *(undefined4 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  return;
}

// Destruct<FRecastNavMeshTileGenerationDebug> @ 146dca640

void __cdecl UE::CoreUObject::Private::Destruct<FRecastNavMeshTileGenerationDebug>(void *param_1)

{
  return;
}

// Copy<FRecastNavMeshTileGenerationDebug> @ 146dca650

bool __cdecl
UE::CoreUObject::Private::Copy<FRecastNavMeshTileGenerationDebug>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar8 + 0x30 + (longlong)param_1);
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
      *(undefined4 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x34);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConvertArrayTypeClampMax<float,double,TSizedDefaultAllocator<32>_> @ 146dcc530

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UE::LWC::ConvertArrayTypeClampMax<float,double,TSizedDefaultAllocator<32>_>
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  float local_38 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  fVar7 = __real_7f7fffff;
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar2) break;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_38[0] = (float)*(double *)pFVar11;
    if (fVar7 <= (float)*(double *)pFVar11) {
      local_38[0] = fVar7;
    }
    if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar10;
      }
    }
    iVar9 = __return_storage_ptr__->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar9 + 1;
    pFVar11 = pFVar11 + 8;
    *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38[0]
    ;
  }
  return __return_storage_ptr__;
}

// DereferenceIfNecessary<ANavigationTestingActor,ANavigationTestingActor_*_&> @ 146dccdc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavigationTestingActor * __cdecl
UE::Core::Private::DereferenceIfNecessary<ANavigationTestingActor,ANavigationTestingActor_*_&>
          (ANavigationTestingActor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ARecastNavMesh,ARecastNavMesh_*_&> @ 146dccde0

ARecastNavMesh * __cdecl
UE::Core::Private::DereferenceIfNecessary<ARecastNavMesh,ARecastNavMesh_*_&>
          (ARecastNavMesh **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UNavLinkCustomComponent,UNavLinkCustomComponent_*_&> @ 146dcce00

UNavLinkCustomComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UNavLinkCustomComponent,UNavLinkCustomComponent_*_&>
          (UNavLinkCustomComponent **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UNavMeshRenderingComponent,UNavMeshRenderingComponent_*_&> @ 146dcce20

UNavMeshRenderingComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UNavMeshRenderingComponent,UNavMeshRenderingComponent_*_&>
          (UNavMeshRenderingComponent **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_> @ 146dd1c00

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TVector<float>_> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 7) {
      iVar1 = 6;
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
  TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>
  ::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_> @ 146dd1ca0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector<float>_> *param_2,int *param_3)

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
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
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
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<float>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// GetClampedCellSize @ 146e00930

float __cdecl UE::NavMesh::Private::GetClampedCellSize(float param_1)

{
  if (__real_44800000 <= param_1) {
    param_1 = __real_44800000;
  }
  if (param_1 <= __real_3f800000) {
    param_1 = __real_3f800000;
  }
  return param_1;
}

// GetClampedTileSizeUU @ 146e00950

float __cdecl UE::NavMesh::Private::GetClampedTileSizeUU(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 * __real_41800000;
  if (param_2 * __real_41800000 <= __real_43960000) {
    fVar2 = __real_43960000;
  }
  fVar1 = param_2 * __real_44800000;
  if (param_2 * __real_44800000 <= __real_43960000) {
    fVar1 = __real_43960000;
  }
  if (fVar2 <= param_3 * __real_40800000) {
    fVar2 = param_3 * __real_40800000;
  }
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}

// GetTileRefFromPolyRef @ 146e12350

FNavTileRef __cdecl UE::NavMesh::Private::GetTileRefFromPolyRef(dtNavMesh *param_1,ulong64 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong in_R8;
  
  bVar1 = (byte)*(undefined4 *)(param_2 + 0xf4);
  bVar2 = (byte)*(undefined4 *)(param_2 + 0xf8);
  bVar3 = bVar1 + bVar2;
  (param_1->m_params).walkableHeight =
       (double)((ulonglong)
                ((int)(1L << ((byte)*(undefined4 *)(param_2 + 0xf0) & 0x3f)) - 1U &
                (uint)(in_R8 >> (bVar3 & 0x3f))) << (bVar3 & 0x3f) |
               (ulonglong)((int)(1L << (bVar1 & 0x3f)) - 1U & (uint)(in_R8 >> (bVar2 & 0x3f))) <<
               (bVar2 & 0x3f));
  return (FNavTileRef)(ulong64)param_1;
}

// ConvertArrayType<UE::Math::TVector<double>,UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> @ 146e32380

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UE::LWC::
ConvertArrayType<UE::Math::TVector<double>,UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
  return __return_storage_ptr__;
}

// DereferenceIfNecessary<UNavModifierComponent,UNavModifierComponent_*_&> @ 146e32480

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

UNavModifierComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UNavModifierComponent,UNavModifierComponent_*_&>
          (UNavModifierComponent **param_1)

{
  return *param_1;
}

// ReallocGrow<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 146e355a0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x1000;
    uVar8 = (ulonglong)param_1;
    if (0x1000 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x1001) {
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
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<dtMeshTile_*>_> @ 146e35680

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<dtMeshTile_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<dtMeshTile_*> *param_4,int *param_5,
          int *param_6)

{
  ForElementType<dtMeshTile_*> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<dtMeshTile_*> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0x11) {
    _Src = param_4->SecondaryData;
    uVar8 = 0x10;
LAB_146e3573b:
    uVar6 = uVar8;
    if (_Src == (ForElementType<dtMeshTile_*>)0x0) goto LAB_146e3578f;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 3);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0x11) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 0x11) goto LAB_146e3573b;
    iVar5 = iVar1;
    if (_Src == (ForElementType<dtMeshTile_*>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 << 3);
      goto LAB_146e3578f;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_146e3578f:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocShrink<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 146e357c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x1000;
  if (0x1000 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// CalculateMaxTilesCount @ 146e445d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::NavMesh::Private::CalculateMaxTilesCount
          (TNavStatArray<UE::Math::TBox<double>_> *param_1,double param_2,double param_3,
          uint param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  TBox<double> *pTVar17;
  longlong lVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auStack_1198 [32];
  FScriptContainerElement *local_1178;
  double local_1170;
  double local_1168;
  undefined1 local_1158 [4];
  uint local_1154;
  uint local_1150;
  FScriptContainerElement *local_1148;
  longlong local_1140;
  FString local_1138;
  FString local_1128;
  FString local_1118;
  FLogScopedCategoryAndVerbosityOverride local_1108;
  TVector<double>_u_0 local_10f8;
  double local_10e0;
  double local_10d0;
  TStringBuilderBase<wchar_t> local_10b8;
  wchar_t local_1098 [2048];
  ulonglong local_98 [12];
  
  dVar10 = __real_bfe0000000000000;
  dVar9 = __real_4000000000000000;
  dVar8 = __real_3ff0000000000000;
  local_98[0] = __security_cookie.value ^ (ulonglong)auStack_1198;
  iVar13 = *(int *)&param_1->field_0x10;
  uVar22 = 0;
  local_1148 = (FScriptContainerElement *)0x0;
  local_1150 = 0;
  local_1154 = param_4;
  if (0 < iVar13) {
    local_1140 = 0;
    uVar15 = uVar22;
    uVar23 = uVar22;
    do {
      lVar14 = local_1140;
      pFVar20 = local_1148;
      uVar21 = (uint)uVar15;
      uVar12 = 0;
      if ((int)uVar21 < iVar13) {
        uVar12 = ~uVar21 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_1178 = (FScriptContainerElement *)(longlong)(int)uVar21;
        local_1170 = (double)(longlong)iVar13;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          iVar13 = (*pcVar7)();
          return iVar13;
        }
      }
      pTVar17 = (TBox<double> *)(*(longlong *)param_1 + lVar14);
      if ((0x15 < local_1154) &&
         (iVar13 = *(int *)&param_1->field_0x10, uVar15 = uVar22, uVar19 = uVar22,
         pFVar20 = local_1148, uVar24 = uVar22, 0 < iVar13)) {
        do {
          uVar12 = (uint)uVar19;
          if (uVar23 != uVar24) {
            uVar21 = 0;
            if ((int)uVar12 < iVar13) {
              uVar21 = ~uVar12 >> 0x1f;
            }
            if (uVar21 == 0) {
              local_1170 = (double)(longlong)iVar13;
              local_1178 = (FScriptContainerElement *)(longlong)(int)uVar12;
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar7 = (code *)swi(3);
                iVar13 = (*pcVar7)();
                return iVar13;
              }
            }
            lVar14 = *(longlong *)param_1;
            dVar1 = (pTVar17->Min).field0_0x0._s_0.X;
            if ((*(double *)(lVar14 + uVar15) < dVar1) &&
               (dVar2 = *(double *)(lVar14 + 0x18 + uVar15), dVar1 < dVar2)) {
              dVar1 = (pTVar17->Min).field0_0x0._s_0.Y;
              dVar3 = *(double *)(lVar14 + 8 + uVar15);
              if ((dVar3 < dVar1) &&
                 ((((dVar4 = *(double *)(lVar14 + 0x20 + uVar15), dVar1 < dVar4 &&
                    (dVar1 = (pTVar17->Max).field0_0x0._s_0.X, *(double *)(lVar14 + uVar15) < dVar1)
                    ) && (dVar1 < dVar2)) &&
                  ((dVar1 = (pTVar17->Max).field0_0x0._s_0.Y, dVar3 < dVar1 && (dVar1 < dVar4))))))
              goto LAB_146e448da;
            }
          }
          iVar13 = *(int *)&param_1->field_0x10;
          uVar15 = uVar15 + 0x38;
          lVar14 = local_1140;
          uVar19 = (ulonglong)(uVar12 + 1);
          pFVar20 = local_1148;
          uVar24 = uVar24 + 1;
        } while ((int)(uVar12 + 1) < iVar13);
      }
      Unreal2RecastBox((TBox<double> *)&local_10f8._s_0,pTVar17);
      local_1140 = lVar14;
      if (local_1154 < 0x13) {
        local_1148 = pFVar20 + (1 - ((longlong)
                                     ROUND(dVar10 - (local_10e0 - local_10f8._s_0.X) *
                                                    (dVar8 / param_2) * dVar9) >> 1)) *
                               (1 - ((longlong)
                                     ROUND(dVar10 - (local_10d0 - local_10f8._s_0.Z) *
                                                    (dVar8 / param_2) * dVar9) >> 1));
      }
      else {
        lVar14 = (longlong)ROUND(dVar10 - (local_10d0 - local_10f8._s_0.Z) * dVar9);
        auVar5._8_8_ = lVar14 >> 0x3f;
        auVar5._0_8_ = lVar14 >> 1;
        lVar14 = (longlong)ROUND(dVar10 - (local_10e0 - local_10f8._s_0.X) * dVar9);
        auVar6._8_8_ = lVar14 >> 0x3f;
        auVar6._0_8_ = lVar14 >> 1;
        local_1148 = pFVar20 + (1 - SUB168(auVar5 / SEXT816((longlong)param_2),0)) *
                               (1 - SUB168(auVar6 / SEXT816((longlong)param_2),0));
      }
LAB_146e448da:
      local_1140 = local_1140 + 0x38;
      iVar13 = *(int *)&param_1->field_0x10;
      local_1150 = local_1150 + 1;
      uVar15 = (ulonglong)local_1150;
      uVar23 = uVar23 + 1;
    } while ((int)local_1150 < iVar13);
  }
  pFVar20 = local_1148;
  lVar14 = (longlong)ROUND(dVar10 - (param_3 + param_3) * (double)(longlong)local_1148) >> 1;
  lVar18 = -lVar14;
  if (2 < (byte)LogNavigationDataBuild._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_1108,(FName)LogNavigationDataBuild._4_8_,Warning);
    if (-(longlong)(int)lVar18 != lVar14) {
      local_10b8.End = (wchar_t *)local_98;
      local_10b8.bIsDynamic = false;
      local_10b8.bIsExternal = false;
      local_1178 = pFVar20;
      local_1170 = param_3;
      local_1168 = param_2;
      local_10b8.Base = local_1098;
      local_10b8.CurPos = local_1098;
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_10b8,
                 L"%hs Computed maximum tile count is over limit. Check inputs for a abnormally high values.\n  MaxTilesCount: %llu, GridCellsCount: %llu, AvgLayersPerGridCell: %f, TileSizeInWorldUnits: %f \n"
                );
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_10b8,L"  Navigable areas:\n");
      iVar13 = *(int *)&param_1->field_0x10;
      lVar14 = *(longlong *)param_1;
      lVar25 = (longlong)iVar13 * 0x38 + lVar14;
      while( true ) {
        if (*(int *)&param_1->field_0x10 != iVar13) {
          local_1158[0] = 0;
          `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1158);
        }
        if (lVar14 == lVar25) break;
        local_1178 = *(FScriptContainerElement **)(lVar14 + 0x28);
        ::FString::PrintfImpl(&local_1128,L"X=%3.3f Y=%3.3f Z=%3.3f");
        local_1178 = *(FScriptContainerElement **)(lVar14 + 0x10);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_1128.Data.ArrayNum != 0) {
          FVar16.Data = local_1128.Data.AllocatorInstance.Data;
        }
        ::FString::PrintfImpl(&local_1138,L"X=%3.3f Y=%3.3f Z=%3.3f");
        local_1178 = FVar16.Data;
        ::FString::PrintfImpl(&local_1118,L"IsValid=%s, Min=(%s), Max=(%s)");
        if (local_1138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1138.Data.AllocatorInstance.Data);
        }
        if (local_1128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1128.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_10b8,L"    AreaBounds: %s");
        if (local_1118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1118.Data.AllocatorInstance.Data);
        }
        lVar14 = lVar14 + 0x38;
      }
      if (2 < (byte)LogNavigationDataBuild._0_1_) {
        if (local_10b8.End < local_10b8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_10b8,1);
        }
        *local_10b8.CurPos = L'\0';
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigationDataBuild,Warning);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_1108);
  }
  lVar14 = 0x7fffffff;
  if (lVar18 < 0x7fffffff) {
    lVar14 = lVar18;
  }
  local_1178 = (FScriptContainerElement *)0;
  if (0 < lVar14) {
    local_1178 = (FScriptContainerElement *)lVar14;
  }
  iVar13 = (int)local_1178;
  if ((local_1178 != (FScriptContainerElement *)(longlong)iVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar11))
  {
    pcVar7 = (code *)swi(3);
    iVar13 = (*pcVar7)();
    return iVar13;
  }
  return iVar13;
}

// CheckTileIndicesInValidRange @ 146e44ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::NavMesh::Private::CheckTileIndicesInValidRange
          (TNavStatArray<UE::Math::TBox<double>_> *param_1,ARecastNavMesh *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  undefined1 *puVar6;
  bool local_res8 [8];
  bool local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pTVar4 = *(TVector<double> **)param_1;
  local_res20 = *(uint *)&param_1->field_0x10;
  uVar3 = (ulonglong)(int)local_res20;
  puVar6 = (undefined1 *)((longlong)&pTVar4[1].field0_0x0 + 8);
  pTVar5 = (TVector<double> *)(uVar3 * 0x38 + (longlong)pTVar4);
  while( true ) {
    if (*(int *)&param_1->field_0x10 != (int)uVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pTVar4 == pTVar5) {
      return;
    }
    local_res8[0] = false;
    bVar2 = ARecastNavMesh::CheckTileIndicesInValidRange(param_2,pTVar4,local_res8);
    if ((!bVar2) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4457677437609710485>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                           ,0x1395,"NavMesh.CheckTileIndicesInValidRange(Pos, bIndiciesFitInInt32)")
       , bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((1 < (byte)LogNavigation._0_1_) && (local_res8[0] == false)) {
      if ((param_2 == (ARecastNavMesh *)0x0) || (param_2->_padding_ == 0)) {
        ::FString::FString(&local_88,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_88,(UObject *)0x0,None)
        ;
      }
      ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
      Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Magnitude_of_Re_1514a1f08,
                 (FLogCategoryBase *)&LogNavigation);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    local_res10[0] = false;
    bVar2 = ARecastNavMesh::CheckTileIndicesInValidRange
                      (param_2,(TVector<double> *)(puVar6 + -8),local_res10);
    if ((!bVar2) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4457677437609710485>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                           ,0x1395,"NavMesh.CheckTileIndicesInValidRange(Pos, bIndiciesFitInInt32)")
       , bVar2)) break;
    if ((1 < (byte)LogNavigation._0_1_) && (local_res10[0] == false)) {
      if ((param_2 == (ARecastNavMesh *)0x0) || (param_2->_padding_ == 0)) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_78,(UObject *)0x0,None)
        ;
      }
      ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
      Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Magnitude_of_Re_1514a1f08,
                 (FLogCategoryBase *)&LogNavigation);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    uVar3 = (ulonglong)local_res20;
    pTVar4 = (TVector<double> *)((longlong)&pTVar4[2].field0_0x0 + 8);
    puVar6 = puVar6 + 0x38;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ComputeConfigBorderSizes @ 146e45140

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
UE::NavMesh::Private::ComputeConfigBorderSizes(bool param_1,FRecastBuildConfig *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1) {
    iVar3 = (int)param_2->_padding_ -
            (int)((longlong)
                  ROUND(__real_bfe0000000000000 -
                        ((double)param_2->LinkSpillDistance + (double)param_2->LinkSpillDistance) /
                        (double)param_2->_padding_) >> 1);
  }
  iVar1 = (int)param_2->_padding_ + 3;
  if (bUseAsymetricBorderSizes) {
    *(int *)((longlong)&param_2->_padding_ + 4) = iVar1;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    *(int *)&param_2->_padding_ = iVar3;
    return;
  }
  iVar2 = iVar3;
  if (iVar3 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)((longlong)&param_2->_padding_ + 4) = iVar2;
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  *(int *)&param_2->_padding_ = iVar3;
  return;
}

// CreateAreaModifier @ 146e46280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAreaNavModifier * __cdecl
UE::Navigation::ModComponent::Private::CreateAreaModifier
          (FAreaNavModifier *__return_storage_ptr__,TBox<double> *param_1,TQuat<double> *param_2,
          TSubclassOf<UNavArea> *param_3,TSubclassOf<UNavArea> *param_4,bool param_5)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined1 auStack_a8 [32];
  UClass *local_88 [2];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = (param_3->Class).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (local_88[0] != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_88[0]);
  }
  local_78.Rotation.XY.m128d_f64[0] = param_2->X;
  local_78.Rotation.XY.m128d_f64[1] = param_2->Y;
  local_78.Rotation.ZW.m128d_f64[0] = param_2->Z;
  local_78.Rotation.ZW.m128d_f64[1] = param_2->W;
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FAreaNavModifier::FAreaNavModifier
            (__return_storage_ptr__,param_1,&local_78,(TSubclassOf<UNavAreaBase>)local_88);
  __return_storage_ptr__->bIncludeAgentHeight = '\0';
  __return_storage_ptr__->field_0x6a = __return_storage_ptr__->field_0x6a | param_5 * '\x02';
  pUVar2 = (param_4->Class).field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UNavArea_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (local_88[0] = (param_4->Class).field0_0x0.DebugPtr, local_88[0] != (UClass *)0x0)) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)local_88[0]);
        }
        FAreaNavModifier::SetAreaClassToReplace
                  (__return_storage_ptr__,(TSubclassOf<UNavAreaBase>)local_88);
      }
    }
  }
  return __return_storage_ptr__;
}

// DrawHeightfield @ 146e47f40

void __cdecl
UE::NavMesh::Private::DrawHeightfield
          (EHeightFieldRenderMode param_1,duDebugDraw *param_2,rcHeightfield *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  uint auStack_c8 [36];
  
  if (param_1 == Solid) {
    if (param_2 != (duDebugDraw *)0x0) {
      iVar3 = param_3->height;
      iVar4 = param_3->width;
      dVar1 = param_3->cs;
      dVar2 = param_3->ch;
      duCalcBoxColors(auStack_c8,0xffffffff,0xffffffff);
      (**(code **)((longlong)*param_2 + 0x18))(param_2,3,__real_3f800000);
      iVar8 = 0;
      if (0 < iVar3) {
        lVar9 = 0;
        do {
          iVar7 = 0;
          if (0 < iVar4) {
            lVar10 = lVar9;
            do {
              dVar5 = (double)iVar8 * dVar1 + param_3->bmin[2];
              puVar6 = *(uint **)(lVar10 + (longlong)param_3->spans);
              dVar11 = (double)iVar7 * dVar1 + param_3->bmin[0];
              if (puVar6 != (uint *)0x0) {
                do {
                  duAppendBox(param_2,dVar11,
                              (double)(*puVar6 & 0x1fffffff) * dVar2 + param_3->bmin[1],dVar5,
                              dVar11 + dVar1,
                              (double)(puVar6[1] & 0x1fffffff) * dVar2 + param_3->bmin[1],
                              dVar5 + dVar1,auStack_c8);
                  puVar6 = *(uint **)(puVar6 + 4);
                } while (puVar6 != (uint *)0x0);
              }
              iVar7 = iVar7 + 1;
              lVar10 = lVar10 + 8;
            } while (iVar7 < iVar4);
          }
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + (longlong)iVar4 * 8;
        } while (iVar8 < iVar3);
      }
      (**(code **)((longlong)*param_2 + 0x70))(param_2);
    }
    return;
  }
  duDebugDrawHeightfieldWalkable(param_2,param_3);
  return;
}

// IsUsingActiveTileGeneration @ 146e5fee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UE::NavMesh::Private::IsUsingActiveTileGeneration(ARecastNavMesh *param_1)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UNavigationSystemV1 *pUVar5;
  
  pUVar3 = AActor::GetWorld((AActor *)param_1);
  if (pUVar3 == (UWorld *)0x0) {
    return false;
  }
  pUVar5 = (UNavigationSystemV1 *)(pUVar3->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 != (UNavigationSystemV1 *)0x0) {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146e5ff28;
  }
  pUVar5 = (UNavigationSystemV1 *)0x0;
LAB_146e5ff28:
  if (pUVar5 == (UNavigationSystemV1 *)0x0) {
    return false;
  }
  bVar2 = ARecastNavMesh::IsUsingActiveTilesGeneration(param_1,pUVar5);
  return bVar2;
}

