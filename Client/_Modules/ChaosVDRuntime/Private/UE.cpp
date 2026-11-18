// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 244

// Destruct<FChaosVDBoundingVolumeDataWrapper> @ 1436c5a70

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDBoundingVolumeDataWrapper>(void *param_1)

{
  DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> **)
              ((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FChaosVDQueryHitData> @ 1436c5ab0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDQueryHitData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined2 *)((longlong)param_1 + 0x18) = *(undefined2 *)((longlong)param_2 + 0x18);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    param_1 = (void *)((longlong)param_1 + 0x68);
    param_2 = (void *)((longlong)param_2 + 0x68);
  }
  return true;
}

// Copy<FChaosVDBoundingVolumeDataWrapper> @ 1436c5b40

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDBoundingVolumeDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *pTVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x28)) {
      DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)
                 pFVar1->Data,*(int *)((longlong)param_1 + 0x30));
      iVar4 = *(int *)((longlong)param_2 + 0x30);
      piVar2 = (int *)((longlong)param_1 + 0x34);
      pTVar5 = (TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)
               ((ForAnyElementType *)((longlong)param_2 + 0x28))->Data;
      *(int *)((longlong)param_1 + 0x30) = iVar4;
      if ((iVar4 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
        ConstructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
                  (pFVar1->Data,pTVar5,iVar4);
      }
    }
    puVar3 = (undefined8 *)((longlong)param_2 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x38) = *puVar3;
    param_1 = (void *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FChaosVDCollisionChannelInfo> @ 1436c5c50

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDCollisionChannelInfo>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// ConstructForTests<FChaosVDCollisionChannelInfo> @ 1436c5c80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionChannelInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FChaosVDCollisionChannelInfo> @ 1436c5ca0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDCollisionChannelInfo>(void *param_1)

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

// Copy<FChaosVDCollisionChannelInfo> @ 1436c5d00

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCollisionChannelInfo>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      this[4] = *(undefined4 *)&pFVar1[1].Data.AllocatorInstance.Data;
      *(undefined1 *)(this + 5) =
           *(undefined1 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4);
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDConstraintDataWrapperBase> @ 1436c5f60

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDConstraintDataWrapperBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDConstraintDataWrapperBase__6B_;
  return;
}

// ConstructForTests<FChaosVDConstraintDataWrapperBase> @ 1436c5f80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDConstraintDataWrapperBase>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDConstraintDataWrapperBase__6B_;
  return;
}

// Destruct<FChaosVDConstraintDataWrapperBase> @ 1436c5fa0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDConstraintDataWrapperBase>(void *param_1)

{
  return;
}

// Copy<FChaosVDConstraintDataWrapperBase> @ 1436c5fb0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDConstraintDataWrapperBase>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined1 *)((longlong)pvVar1 + 8) =
           *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDBVCellElementDataWrapper> @ 1436c60d0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDBVCellElementDataWrapper>(void *param_1)

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
  *(undefined ***)param_1 = &___7FChaosVDBVCellElementDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x4c) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x54) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x58) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x60) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return;
}

// Construct<FChaosVDQueryFastData> @ 1436c6150

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDQueryFastData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51) = 0;
  *(undefined2 *)((longlong)param_1 + 0x55) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDQueryFastData__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FChaosVDBVCellElementDataWrapper> @ 1436c61d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDBVCellElementDataWrapper>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDBVCellElementDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41) = 0;
  *(undefined2 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x4c) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x54) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x58) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x60) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FChaosVDQueryFastData> @ 1436c6240

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDQueryFastData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDQueryFastData__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FChaosVDBVCellElementDataWrapper> @ 1436c62d0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDBVCellElementDataWrapper>(void *param_1)

{
  return;
}

// Destruct<FChaosVDQueryFastData> @ 1436c62e0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDQueryFastData>(void *param_1)

{
  return;
}

// SerializeArchive<FChaosVDQueryFastData> @ 1436c6330

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosVDQueryFastData>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FChaosVDQueryFastData::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FChaosVDBVCellElementDataWrapper> @ 1436c6380

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDBVCellElementDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
    param_1 = (void *)((longlong)param_1 + 0x68);
    param_2 = (void *)((longlong)param_2 + 0x68);
  }
  return true;
}

// Construct<FChaosVDShapeCollisionData> @ 1436c6410

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDShapeCollisionData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) & 0xf8;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Copy<FChaosVDQueryFastData> @ 1436c6440

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDQueryFastData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  byte bVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    bVar2 = (*(byte *)((longlong)param_1 + 0x50) ^ *(byte *)((longlong)param_2 + 0x50)) & 1 ^
            *(byte *)((longlong)param_1 + 0x50);
    *(byte *)((longlong)param_1 + 0x50) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x50)) & 2 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x50) = bVar2;
    *(byte *)((longlong)param_1 + 0x50) = (bVar2 ^ *(byte *)((longlong)param_2 + 0x50)) & 4 ^ bVar2;
    param_1 = (void *)((longlong)param_1 + 0x58);
    param_2 = (void *)((longlong)param_2 + 0x58);
  }
  return true;
}

// ConstructForTests<FChaosVDShapeCollisionData> @ 1436c6500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDShapeCollisionData>(void *param_1)

{
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) & 0xf8;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FChaosVDShapeCollisionData> @ 1436c6530

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDShapeCollisionData>(void *param_1)

{
  return;
}

// Copy<FChaosVDShapeCollisionData> @ 1436c6580

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDShapeCollisionData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar7 + 0x28 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x28) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x2c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDWrapperDataBase> @ 1436c6b90

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDWrapperDataBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDWrapperDataBase__6B_;
  return;
}

// ConstructForTests<FChaosVDWrapperDataBase> @ 1436c6bb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDWrapperDataBase>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDWrapperDataBase__6B_;
  return;
}

// Destruct<FChaosVDWrapperDataBase> @ 1436c6bd0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDWrapperDataBase>(void *param_1)

{
  return;
}

// Copy<FChaosVDWrapperDataBase> @ 1436c6c60

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDWrapperDataBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined1 *)((longlong)pvVar1 + 8) =
           *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDCollisionFilterData> @ 1436c6c90

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDCollisionFilterData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FChaosVDCollisionFilterData> @ 1436c6ca0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionFilterData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FChaosVDCollisionFilterData> @ 1436c6cb0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDCollisionFilterData>(void *param_1)

{
  return;
}

// Copy<FChaosVDCollisionFilterData> @ 1436c6d00

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCollisionFilterData>(void *param_1,void *param_2,int param_3)

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

// Construct<FChaosVDAccelerationStructureBase> @ 1436c6d30

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDAccelerationStructureBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAccelerationStructureBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  return;
}

// ConstructForTests<FChaosVDAccelerationStructureBase> @ 1436c6d60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDAccelerationStructureBase>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAccelerationStructureBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  return;
}

// Destruct<FChaosVDAccelerationStructureBase> @ 1436c6dd0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDAccelerationStructureBase>(void *param_1)

{
  return;
}

// Construct<FChaosVDCollisionQueryParams> @ 1436c6e30

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDCollisionQueryParams>(void *param_1)

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
  *(undefined ***)param_1 = &___7FChaosVDCollisionQueryParams__6B_;
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) & 0xfe00;
  return;
}

// Copy<FChaosVDAccelerationStructureBase> @ 1436c6e70

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDAccelerationStructureBase>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// ConstructForTests<FChaosVDCollisionQueryParams> @ 1436c6ec0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionQueryParams>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCollisionQueryParams__6B_;
  *(ushort *)((longlong)param_1 + 0x20) = *(ushort *)((longlong)param_1 + 0x20) & 0xfe00;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FChaosVDCollisionQueryParams> @ 1436c6f10

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDCollisionQueryParams>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// SerializeArchive<FChaosVDCollisionQueryParams> @ 1436c6fe0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosVDCollisionQueryParams>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FChaosVDCollisionQueryParams::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FChaosVDCollisionQueryParams> @ 1436c7060

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCollisionQueryParams>
          (void *param_1,void *param_2,int param_3)

{
  ushort uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    uVar1 = (*(ushort *)((longlong)param_1 + 0x20) ^ *(ushort *)((longlong)param_2 + 0x20)) & 1 ^
            *(ushort *)((longlong)param_1 + 0x20);
    *(ushort *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = (uVar1 ^ *(ushort *)((longlong)param_2 + 0x20)) & 2 ^ uVar1;
    *(ushort *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = (uVar1 ^ *(ushort *)((longlong)param_2 + 0x20)) & 4 ^ uVar1;
    *(ushort *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = (uVar1 ^ *(ushort *)((longlong)param_2 + 0x20)) & 8 ^ uVar1;
    *(ushort *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = (uVar1 ^ *(ushort *)((longlong)param_2 + 0x20)) & 0x10 ^ uVar1;
    *(ushort *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = (uVar1 ^ *(ushort *)((longlong)param_2 + 0x20)) & 0x20 ^ uVar1;
    *(ushort *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = (uVar1 ^ *(ushort *)((longlong)param_2 + 0x20)) & 0x40 ^ uVar1;
    *(ushort *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = (uVar1 ^ *(ushort *)((longlong)param_2 + 0x20)) & 0x80 ^ uVar1;
    *(ushort *)((longlong)param_1 + 0x20) = uVar1;
    *(ushort *)((longlong)param_1 + 0x20) =
         (uVar1 ^ *(ushort *)((longlong)param_2 + 0x20)) & 0x100 ^ uVar1;
    *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x38),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x38));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x48),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x48));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x58),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x58));
    param_2 = (void *)((longlong)param_2 + 0x68);
    param_1 = (void *)((longlong)param_1 + 0x68);
  }
  return true;
}

// Construct<FChaosVDParticlePairMidPhase> @ 1436c72a0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticlePairMidPhase>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 5) = *(byte *)((longlong)param_1 + 5) & 0xe0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 4) = 3;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FChaosVDParticlePairMidPhase> @ 1436c7310

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDParticlePairMidPhase>(void *param_1)

{
  *(byte *)((longlong)param_1 + 5) = *(byte *)((longlong)param_1 + 5) & 0xe0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 4) = 3;
  return;
}

// Destruct<FChaosVDParticlePairMidPhase> @ 1436c7340

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticlePairMidPhase>(void *param_1)

{
  DestructItems<FChaosVDConstraint,int>
            (*(FChaosVDConstraint **)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FChaosVDParticlePairMidPhase> @ 1436c7440

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticlePairMidPhase>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FChaosVDConstraint *pFVar4;
  byte bVar5;
  ForAnyElementType *pFVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar7 + 0x18);
      pFVar6 = (ForAnyElementType *)((longlong)param_1 + 0x18);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar7 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_1 + lVar7 + 4);
      bVar5 = (*(byte *)((longlong)param_1 + 5) ^ *(byte *)((longlong)param_1 + lVar7 + 5)) & 1 ^
              *(byte *)((longlong)param_1 + 5);
      *(byte *)((longlong)param_1 + 5) = bVar5;
      bVar5 = (bVar5 ^ *(byte *)((longlong)param_1 + lVar7 + 5)) & 2 ^ bVar5;
      *(byte *)((longlong)param_1 + 5) = bVar5;
      bVar5 = (bVar5 ^ *(byte *)((longlong)param_1 + lVar7 + 5)) & 4 ^ bVar5;
      *(byte *)((longlong)param_1 + 5) = bVar5;
      bVar5 = (bVar5 ^ *(byte *)((longlong)param_1 + lVar7 + 5)) & 8 ^ bVar5;
      *(byte *)((longlong)param_1 + 5) = bVar5;
      *(byte *)((longlong)param_1 + 5) =
           (bVar5 ^ *(byte *)((longlong)param_1 + lVar7 + 5)) & 0x10 ^ bVar5;
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar7 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar7 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar7 + 0x10);
      if (pFVar6 != pFVar1) {
        DestructItems<FChaosVDConstraint,int>
                  ((FChaosVDConstraint *)pFVar6->Data,*(int *)((longlong)param_1 + 0x20));
        iVar3 = *(int *)((longlong)param_1 + lVar7 + 0x20);
        piVar2 = (int *)((longlong)param_1 + 0x24);
        pFVar4 = (FChaosVDConstraint *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x20) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x280,0x10,iVar3,*piVar2,pFVar6,iVar3,piVar2);
          ConstructItems<FChaosVDConstraint,FChaosVDConstraint,int>(pFVar6->Data,pFVar4,iVar3);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDParticleMetadata> @ 1436c75b0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticleMetadata>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FChaosVDParticleMetadata> @ 1436c75f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleMetadata>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FChaosVDParticleMetadata> @ 1436c7620

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticleMetadata>(void *param_1)

{
  return;
}

// Copy<FChaosVDParticleMetadata> @ 1436c7630

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticleMetadata>(void *param_1,void *param_2,int param_3)

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
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDCollisionObjectQueryParams> @ 1436c7900

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDCollisionObjectQueryParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCollisionObjectQueryParams__6B_;
  return;
}

// ConstructForTests<FChaosVDCollisionObjectQueryParams> @ 1436c7920

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionObjectQueryParams>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCollisionObjectQueryParams__6B_;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FChaosVDCollisionObjectQueryParams> @ 1436c7940

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDCollisionObjectQueryParams>(void *param_1)

{
  return;
}

// SerializeArchive<FChaosVDCollisionObjectQueryParams> @ 1436c7950

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosVDCollisionObjectQueryParams>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FChaosVDCollisionObjectQueryParams::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FChaosVDCollisionObjectQueryParams> @ 1436c7a20

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCollisionObjectQueryParams>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x11) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x11 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FChaosVDConstraint> @ 1436c7b30

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDConstraint>(void *param_1)

{
  memset(param_1,0,0x280);
  FChaosVDConstraint::FChaosVDConstraint(param_1);
  return;
}

// ConstructForTests<FChaosVDConstraint> @ 1436c7b60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDConstraint>(void *param_1)

{
  *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) & 0xe0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)param_1 = 0;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xb0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xc0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xd0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xe0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x140) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x150) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x160) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x170) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x180) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 400) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1a0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1b0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1c0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1d0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x270) = 0xffffffff;
  return;
}

// Destruct<FChaosVDConstraint> @ 1436c7b70

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDConstraint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  if (*(void **)((longlong)param_1 + 0x1e8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1e8));
    return;
  }
  return;
}

// Copy<FChaosVDConstraint> @ 1436c7bb0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDConstraint>(void *param_1,void *param_2,int param_3)

{
  FChaosVDConstraint *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FChaosVDConstraint::operator=
                (this,(FChaosVDConstraint *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDJointConstraint> @ 1436c7c00

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDJointConstraint>(void *param_1)

{
  memset(param_1,0,0x3c0);
  FChaosVDJointConstraint::FChaosVDJointConstraint(param_1);
  return;
}

// ConstructForTests<FChaosVDJointConstraint> @ 1436c7c30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDJointConstraint>(void *param_1)

{
  undefined8 uVar1;
  
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xf0;
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 0x10;
  *(undefined ***)param_1 = &___7FChaosVDJointConstraint__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FChaosVDJointStateDataWrapper__6B_;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(byte *)((longlong)param_1 + 0x90) = *(byte *)((longlong)param_1 + 0x90) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FChaosVDGTJointStateDataWrapper__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x98) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar1;
  *(double *)((longlong)param_1 + 0xa8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xb0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar1;
  FChaosVDJointSettingsDataWrapper::FChaosVDJointSettingsDataWrapper
            ((FChaosVDJointSettingsDataWrapper *)((longlong)param_1 + 0xd0));
  return;
}

// Destruct<FChaosVDJointConstraint> @ 1436c7c40

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDJointConstraint>(void *param_1)

{
  return;
}

// Copy<FChaosVDJointConstraint> @ 1436c7c50

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDJointConstraint>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  byte bVar4;
  
  pvVar3 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar3 + 8) = *(undefined1 *)((longlong)pvVar1 + 8);
    *(undefined4 *)((longlong)pvVar3 + 0x10) = *(undefined4 *)((longlong)pvVar1 + 0x10);
    *(undefined4 *)((longlong)pvVar3 + 0x14) = *(undefined4 *)((longlong)pvVar1 + 0x14);
    *(undefined4 *)((longlong)pvVar3 + 0x18) = *(undefined4 *)((longlong)pvVar1 + 0x18);
    *(undefined4 *)((longlong)pvVar3 + 0x1c) = *(undefined4 *)((longlong)pvVar1 + 0x1c);
    FChaosVDJointStateDataWrapper::operator=
              ((FChaosVDJointStateDataWrapper *)((longlong)pvVar3 + 0x20),
               (FChaosVDJointStateDataWrapper *)((longlong)pvVar1 + 0x20));
    *(undefined1 *)((longlong)pvVar3 + 0x88) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x88 - (longlong)param_1));
    bVar4 = (*(byte *)((longlong)pvVar3 + 0x90) ^
            *(byte *)((longlong)pvVar3 + (longlong)param_2 + (0x90 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar3 + 0x90);
    *(byte *)((longlong)pvVar3 + 0x90) = bVar4;
    bVar4 = (bVar4 ^ *(byte *)((longlong)pvVar3 + (longlong)param_2 + (0x90 - (longlong)param_1))) &
            2 ^ bVar4;
    *(byte *)((longlong)pvVar3 + 0x90) = bVar4;
    bVar4 = (bVar4 ^ *(byte *)((longlong)pvVar3 + (longlong)param_2 + (0x90 - (longlong)param_1))) &
            4 ^ bVar4;
    *(byte *)((longlong)pvVar3 + 0x90) = bVar4;
    *(byte *)((longlong)pvVar3 + 0x90) =
         (bVar4 ^ *(byte *)((longlong)pvVar3 + (longlong)param_2 + (0x90 - (longlong)param_1))) & 8
         ^ bVar4;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x98) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x98 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xa0) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0xa8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xb0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0xb8) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0xc0) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 200) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (200 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0xcc) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0xcc - (longlong)param_1));
    FChaosVDJointSettingsDataWrapper::operator=
              ((FChaosVDJointSettingsDataWrapper *)((longlong)pvVar3 + 0xd0),
               (FChaosVDJointSettingsDataWrapper *)((longlong)pvVar1 + 0xd0));
    pvVar1 = (void *)((longlong)pvVar1 + 0x3c0);
    pvVar3 = (void *)((longlong)pvVar3 + 0x3c0);
  }
  return true;
}

// Construct<FChaosVDCollisionResponseParams> @ 1436c80b0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDCollisionResponseParams>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCollisionResponseParams__6B_;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x20;
  return;
}

// ConstructForTests<FChaosVDCollisionResponseParams> @ 1436c80f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionResponseParams>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCollisionResponseParams__6B_;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x20;
  return;
}

// Destruct<FChaosVDCollisionResponseParams> @ 1436c8150

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDCollisionResponseParams>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
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

// SerializeArchive<FChaosVDCollisionResponseParams> @ 1436c8170

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosVDCollisionResponseParams>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  ::operator<<(param_1,(bool *)((longlong)param_2 + 8));
  if (*(char *)((longlong)param_2 + 8) != '\0') {
    TArrayPrivateFriend::
    Serialize<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)param_2 + 0x10));
  }
  return (bool)(~((byte)param_1->field_0x29 >> 1) & 1);
}

// Copy<FChaosVDCollisionResponseParams> @ 1436c8220

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCollisionResponseParams>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ForElementType<unsigned_char> *pFVar4;
  ForElementType<unsigned_char> *_Src;
  ForElementType<unsigned_char> *pFVar5;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar5 = (ForElementType<unsigned_char> *)((longlong)pvVar3 + 0x10);
    *(undefined1 *)((longlong)pvVar3 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar3);
    pFVar4 = (ForElementType<unsigned_char> *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (pFVar5 != pFVar4) {
      _Src = *(ForElementType<unsigned_char> **)
              ((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
      piVar1 = (int *)((longlong)pvVar3 + 0x3c);
      iVar2 = *(int *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
      if (_Src == (ForElementType<unsigned_char> *)0x0) {
        _Src = pFVar4;
      }
      *(int *)((longlong)pvVar3 + 0x38) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0x20;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                  (1,1,iVar2,*piVar1,pFVar5,iVar2,piVar1);
        pFVar4 = *(ForElementType<unsigned_char> **)((longlong)pvVar3 + 0x30);
        if (*(ForElementType<unsigned_char> **)((longlong)pvVar3 + 0x30) ==
            (ForElementType<unsigned_char> *)0x0) {
          pFVar4 = pFVar5;
        }
        if (iVar2 != 0) {
          memcpy(pFVar4,_Src,(longlong)iVar2);
        }
      }
    }
    pvVar3 = (void *)((longlong)pvVar3 + 0x40);
  }
  return true;
}

// Construct<FChaosVDTraceDetails> @ 1436c84e0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDTraceDetails>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FChaosVDTraceDetails> @ 1436c8560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDTraceDetails>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FChaosVDTraceDetails> @ 1436c85a0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDTraceDetails>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Construct<FChaosVDCollisionMaterial> @ 1436c8620

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDCollisionMaterial>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// ConstructForTests<FChaosVDCollisionMaterial> @ 1436c8660

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionMaterial>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// Destruct<FChaosVDCollisionMaterial> @ 1436c86a0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDCollisionMaterial>(void *param_1)

{
  return;
}

// Copy<FChaosVDTraceDetails> @ 1436c8700

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDTraceDetails>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar4 = (undefined8 *)(lVar7 + (longlong)param_1);
      uVar6 = puVar4[1];
      *(undefined8 *)param_1 = *puVar4;
      *(undefined8 *)((longlong)param_1 + 8) = uVar6;
      uVar6 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined2 *)((longlong)param_1 + 0x30) = *(undefined2 *)((longlong)param_2 + 0x30);
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x38);
      *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)((longlong)param_2 + 0x32);
      *(undefined1 *)((longlong)param_1 + 0x33) = *(undefined1 *)((longlong)param_2 + 0x33);
      *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
      if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x38)) {
        iVar5 = *(int *)((longlong)param_2 + 0x40);
        piVar2 = (int *)((longlong)param_1 + 0x44);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x38))->Data;
        *(int *)((longlong)param_1 + 0x40) = iVar5;
        if ((iVar5 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,*piVar2,pFVar1,iVar5,piVar2);
          if (iVar5 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar5);
          }
        }
      }
      puVar3 = (undefined1 *)((longlong)param_2 + 0x48);
      param_2 = (void *)((longlong)param_2 + 0x50);
      *(undefined1 *)((longlong)param_1 + 0x48) = *puVar3;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FChaosVDCollisionMaterial> @ 1436c88e0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCollisionMaterial>(void *param_1,void *param_2,int param_3)

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

// Construct<FChaosVDJointSettingsDataWrapper> @ 1436c8920

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDJointSettingsDataWrapper>(void *param_1)

{
  memset(param_1,0,0x2f0);
  FChaosVDJointSettingsDataWrapper::FChaosVDJointSettingsDataWrapper(param_1);
  return;
}

// ConstructForTests<FChaosVDJointSettingsDataWrapper> @ 1436c8980

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDJointSettingsDataWrapper>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  double dVar16;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDJointSettingsDataWrapper__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xc0) = auVar14;
  *(ushort *)((longlong)param_1 + 0x108) = *(ushort *)((longlong)param_1 + 0x108) & 0xf000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x130) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x138) = uVar15;
  *(double *)((longlong)param_1 + 0x140) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x1b0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = uVar15;
  *(double *)((longlong)param_1 + 0x1c0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x1c8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = uVar15;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x1e0) = *(byte *)((longlong)param_1 + 0x1e0) & 0xc0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x1e8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = uVar15;
  *(double *)((longlong)param_1 + 0x1f8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x200) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x208) = uVar15;
  *(double *)((longlong)param_1 + 0x210) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x218) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x220) = uVar15;
  *(double *)((longlong)param_1 + 0x228) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar16 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x230) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x238) = dVar16;
  dVar16 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x240) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x248) = dVar16;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x250) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 600) = uVar15;
  *(double *)((longlong)param_1 + 0x260) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x268) = 0;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x270) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x278) = uVar15;
  *(double *)((longlong)param_1 + 0x280) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x288) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x290) = uVar15;
  *(double *)((longlong)param_1 + 0x298) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x2a0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = uVar15;
  *(double *)((longlong)param_1 + 0x2b0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  return;
}

// Destruct<FChaosVDJointSettingsDataWrapper> @ 1436c8990

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDJointSettingsDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDJointSettingsDataWrapper> @ 1436c8aa0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDJointSettingsDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  FChaosVDJointSettingsDataWrapper *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FChaosVDJointSettingsDataWrapper::operator=
                (this,(FChaosVDJointSettingsDataWrapper *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDParticleDataWrapper> @ 1436c8d10

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticleDataWrapper>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)((longlong)param_1 + 0x40) = &___7FChaosVDParticlePositionRotation__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x30) = 7;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FChaosVDParticleVelocities__6B_;
  *(undefined ***)((longlong)param_1 + 0xd0) = &___7FChaosVDParticleBounds__6B_;
  *(undefined ***)((longlong)param_1 + 0x110) = &___7FChaosVDKinematicTarget__6B_;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0;
  *(undefined ***)((longlong)param_1 + 0x160) = &___7FChaosVDVSmooth__6B_;
  *(undefined ***)((longlong)param_1 + 0x1a0) = &___7FChaosVDParticleDynamics__6B_;
  *(undefined ***)((longlong)param_1 + 0x210) = &___7FChaosVDParticleDynamicMisc__6B_;
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined1 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined4 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0x3f800000;
  *(undefined ***)((longlong)param_1 + 600) = &___7FChaosVDFRigidParticleControlFlags__6B_;
  *(undefined ***)((longlong)param_1 + 0x280) = &___7FChaosVDParticleMassProps__6B_;
  *(undefined2 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined1 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined2 *)((longlong)param_1 + 0x270) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x272) = 0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0xffffff00;
  *(undefined1 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined ***)((longlong)param_1 + 0x310) = &___7FChaosVDParticleCluster__6B_;
  *(undefined1 *)((longlong)param_1 + 0x318) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0xffffffffffffffff;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x330) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x338) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x340) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x348) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x350) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x358) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x360) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x368) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x370) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x378) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x380) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x388) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x390) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3b8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ba) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = 0;
  return;
}

// ConstructForTests<FChaosVDParticleDataWrapper> @ 1436c8d60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleDataWrapper>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)((longlong)param_1 + 0x40) = &___7FChaosVDParticlePositionRotation__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x30) = 7;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FChaosVDParticleVelocities__6B_;
  *(undefined ***)((longlong)param_1 + 0xd0) = &___7FChaosVDParticleBounds__6B_;
  *(undefined ***)((longlong)param_1 + 0x110) = &___7FChaosVDKinematicTarget__6B_;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0;
  *(undefined ***)((longlong)param_1 + 0x160) = &___7FChaosVDVSmooth__6B_;
  *(undefined ***)((longlong)param_1 + 0x1a0) = &___7FChaosVDParticleDynamics__6B_;
  *(undefined ***)((longlong)param_1 + 0x210) = &___7FChaosVDParticleDynamicMisc__6B_;
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined1 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined4 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0x3f800000;
  *(undefined ***)((longlong)param_1 + 600) = &___7FChaosVDFRigidParticleControlFlags__6B_;
  *(undefined ***)((longlong)param_1 + 0x280) = &___7FChaosVDParticleMassProps__6B_;
  *(undefined2 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined1 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined2 *)((longlong)param_1 + 0x270) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x272) = 0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0xffffff00;
  *(undefined1 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined ***)((longlong)param_1 + 0x310) = &___7FChaosVDParticleCluster__6B_;
  *(undefined1 *)((longlong)param_1 + 0x318) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0xffffffffffffffff;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x330) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x338) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x340) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x348) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x350) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x358) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x360) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x368) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x370) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x378) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x380) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x388) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x390) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3b8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ba) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = 0;
  return;
}

// Destruct<FChaosVDParticleDataWrapper> @ 1436c8d70

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticleDataWrapper>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x3d8));
  if (*(void **)((longlong)param_1 + 0x3c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3c0));
  }
  if (*(void **)((longlong)param_1 + 0x3a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3a8));
    return;
  }
  return;
}

// Copy<FChaosVDParticleDataWrapper> @ 1436c8e30

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticleDataWrapper>(void *param_1,void *param_2,int param_3)

{
  FChaosVDParticleDataWrapper *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FChaosVDParticleDataWrapper::operator=
                (this,(FChaosVDParticleDataWrapper *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDStartRecordingCommandMessage> @ 1436c8ec0

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDStartRecordingCommandMessage>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 6) = 0;
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FChaosVDStartRecordingCommandMessage> @ 1436c8ef0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDStartRecordingCommandMessage>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FChaosVDStartRecordingCommandMessage> @ 1436c8f10

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDStartRecordingCommandMessage>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FChaosVDManifoldPoint> @ 1436c8fe0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDManifoldPoint>(void *param_1)

{
  memset(param_1,0,0x130);
  FChaosVDManifoldPoint::FChaosVDManifoldPoint(param_1);
  return;
}

// ConstructForTests<FChaosVDManifoldPoint> @ 1436c9010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDManifoldPoint>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xc0;
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
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined1 *)((longlong)param_1 + 0x128) = 0;
  return;
}

// Destruct<FChaosVDManifoldPoint> @ 1436c9020

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDManifoldPoint>(void *param_1)

{
  return;
}

// Copy<FChaosVDStartRecordingCommandMessage> @ 1436c9030

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDStartRecordingCommandMessage>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  undefined1 *puVar5;
  void *pvVar6;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    pvVar6 = param_2;
    do {
      *puVar5 = puVar5[(longlong)param_2 - (longlong)param_1];
      puVar5[1] = *(undefined1 *)((longlong)pvVar6 + 1);
      ::FString::operator=((FString *)(puVar5 + 8),(FString *)((longlong)pvVar6 + 8));
      pFVar4 = (ForAnyElementType *)(puVar5 + 0x18);
      if (pFVar4 != (ForAnyElementType *)((longlong)pvVar6 + 0x18)) {
        DestructItems<FString,int>((FString *)pFVar4->Data,*(int *)(puVar5 + 0x20));
        iVar2 = *(int *)((longlong)pvVar6 + 0x20);
        piVar1 = (int *)(puVar5 + 0x24);
        pFVar3 = ((ForAnyElementType *)((longlong)pvVar6 + 0x18))->Data;
        *(int *)(puVar5 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<FString,FString,int>(pFVar4->Data,(FString *)pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 0x28;
      pvVar6 = (void *)((longlong)pvVar6 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FChaosVDManifoldPoint> @ 1436c9140

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDManifoldPoint>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_138 [39];
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      lVar9 = 2;
      puVar5 = (undefined8 *)(lVar10 + (longlong)param_1);
      puVar6 = local_138;
      do {
        puVar8 = puVar6;
        puVar7 = puVar5;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar1;
        uVar1 = puVar7[4];
        uVar4 = puVar7[5];
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        uVar2 = puVar7[6];
        uVar3 = puVar7[7];
        puVar8[4] = uVar1;
        puVar8[5] = uVar4;
        uVar1 = puVar7[8];
        uVar4 = puVar7[9];
        puVar8[6] = uVar2;
        puVar8[7] = uVar3;
        uVar2 = puVar7[10];
        uVar3 = puVar7[0xb];
        puVar8[8] = uVar1;
        puVar8[9] = uVar4;
        uVar1 = puVar7[0xc];
        uVar4 = puVar7[0xd];
        puVar8[10] = uVar2;
        puVar8[0xb] = uVar3;
        uVar2 = puVar7[0xe];
        uVar3 = puVar7[0xf];
        puVar8[0xc] = uVar1;
        puVar8[0xd] = uVar4;
        puVar8[0xe] = uVar2;
        puVar8[0xf] = uVar3;
        lVar9 = lVar9 + -1;
        puVar5 = puVar7 + 0x10;
        puVar6 = puVar8 + 0x10;
      } while (lVar9 != 0);
      uVar1 = puVar7[0x11];
      lVar9 = 2;
      uVar2 = puVar7[0x12];
      uVar3 = puVar7[0x13];
      puVar8[0x10] = puVar7[0x10];
      puVar8[0x11] = uVar1;
      uVar1 = puVar7[0x14];
      uVar4 = puVar7[0x15];
      puVar8[0x12] = uVar2;
      puVar8[0x13] = uVar3;
      puVar8[0x14] = uVar1;
      puVar8[0x15] = uVar4;
      puVar5 = local_138;
      puVar6 = param_1;
      do {
        puVar8 = puVar6;
        puVar7 = puVar5;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar1;
        uVar1 = puVar7[4];
        uVar4 = puVar7[5];
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        uVar2 = puVar7[6];
        uVar3 = puVar7[7];
        puVar8[4] = uVar1;
        puVar8[5] = uVar4;
        uVar1 = puVar7[8];
        uVar4 = puVar7[9];
        puVar8[6] = uVar2;
        puVar8[7] = uVar3;
        uVar2 = puVar7[10];
        uVar3 = puVar7[0xb];
        puVar8[8] = uVar1;
        puVar8[9] = uVar4;
        uVar1 = puVar7[0xc];
        uVar4 = puVar7[0xd];
        puVar8[10] = uVar2;
        puVar8[0xb] = uVar3;
        uVar2 = puVar7[0xe];
        uVar3 = puVar7[0xf];
        puVar8[0xc] = uVar1;
        puVar8[0xd] = uVar4;
        puVar8[0xe] = uVar2;
        puVar8[0xf] = uVar3;
        lVar9 = lVar9 + -1;
        puVar5 = puVar7 + 0x10;
        puVar6 = puVar8 + 0x10;
      } while (lVar9 != 0);
      uVar1 = puVar7[0x11];
      param_1 = (void *)((longlong)param_1 + 0x130);
      uVar2 = puVar7[0x12];
      uVar3 = puVar7[0x13];
      puVar8[0x10] = puVar7[0x10];
      puVar8[0x11] = uVar1;
      uVar1 = puVar7[0x14];
      uVar4 = puVar7[0x15];
      puVar8[0x12] = uVar2;
      puVar8[0x13] = uVar3;
      puVar8[0x14] = uVar1;
      puVar8[0x15] = uVar4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDJointSolverSettingsDataWrapper> @ 1436c9280

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDJointSolverSettingsDataWrapper>(void *param_1)

{
  memset(param_1,0,0xd8);
  FChaosVDJointSolverSettingsDataWrapper::FChaosVDJointSolverSettingsDataWrapper(param_1);
  return;
}

// ConstructForTests<FChaosVDJointSolverSettingsDataWrapper> @ 1436c92b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDJointSolverSettingsDataWrapper>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDJointSolverSettingsDataWrapper__6B_;
  *(ushort *)((longlong)param_1 + 0x50) = *(ushort *)((longlong)param_1 + 0x50) & 0xff80;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  return;
}

// Destruct<FChaosVDJointSolverSettingsDataWrapper> @ 1436c92c0

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosVDJointSolverSettingsDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDJointSolverSettingsDataWrapper> @ 1436c9310

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDJointSolverSettingsDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  ushort uVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x28) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x30) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x38) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x40) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x48) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x4c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x4c - (longlong)param_1));
    uVar2 = (*(ushort *)((longlong)pvVar1 + 0x50) ^
            *(ushort *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1))) & 1 ^
            *(ushort *)((longlong)pvVar1 + 0x50);
    *(ushort *)((longlong)pvVar1 + 0x50) = uVar2;
    uVar2 = (uVar2 ^ *(ushort *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1)))
            & 2 ^ uVar2;
    *(ushort *)((longlong)pvVar1 + 0x50) = uVar2;
    uVar2 = (uVar2 ^ *(ushort *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1)))
            & 4 ^ uVar2;
    *(ushort *)((longlong)pvVar1 + 0x50) = uVar2;
    uVar2 = (uVar2 ^ *(ushort *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1)))
            & 8 ^ uVar2;
    *(ushort *)((longlong)pvVar1 + 0x50) = uVar2;
    uVar2 = (uVar2 ^ *(ushort *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1)))
            & 0x10 ^ uVar2;
    *(ushort *)((longlong)pvVar1 + 0x50) = uVar2;
    uVar2 = (uVar2 ^ *(ushort *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1)))
            & 0x20 ^ uVar2;
    *(ushort *)((longlong)pvVar1 + 0x50) = uVar2;
    *(ushort *)((longlong)pvVar1 + 0x50) =
         (uVar2 ^ *(ushort *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1))) &
         0x40 ^ uVar2;
    *(undefined8 *)((longlong)pvVar1 + 0x58) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x60) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x68) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x70) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x78) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x78 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x80) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x80 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x88) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x88 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x90) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x90 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x98) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x98 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0xa0) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0xa8) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0xb0) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0xb8) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0xc0) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 200) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (200 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0xd0) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0xd8);
  }
  return true;
}

// Construct<FChaosVDVSmooth> @ 1436c9670

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDVSmooth>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDVSmooth__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FChaosVDVSmooth> @ 1436c96b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDVSmooth>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDVSmooth__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FChaosVDVSmooth> @ 1436c9710

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDVSmooth>(void *param_1)

{
  return;
}

// Copy<FChaosVDVSmooth> @ 1436c97d0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDVSmooth>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    param_1 = (void *)((longlong)param_1 + 0x40);
    param_2 = (void *)((longlong)param_2 + 0x40);
  }
  return true;
}

// Construct<FChaosVDContactPoint> @ 1436c9870

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDContactPoint>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x51) = 0;
  *(undefined2 *)((longlong)param_1 + 0x55) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0;
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
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FChaosVDContactPoint> @ 1436c98b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDContactPoint>(void *param_1)

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
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FChaosVDContactPoint> @ 1436c98f0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDContactPoint>(void *param_1)

{
  return;
}

// Copy<FChaosVDContactPoint> @ 1436c9900

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDContactPoint>(void *param_1,void *param_2,int param_3)

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
  longlong lVar12;
  
  if (param_3 != 0) {
    lVar12 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar12 + 0x50 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar12 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar12 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar12 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x58);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDGTJointStateDataWrapper> @ 1436c9960

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDGTJointStateDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  
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
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) & 0xf0;
  *(undefined ***)param_1 = &___7FChaosVDGTJointStateDataWrapper__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FChaosVDGTJointStateDataWrapper> @ 1436c99d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDGTJointStateDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) & 0xf0;
  *(undefined ***)param_1 = &___7FChaosVDGTJointStateDataWrapper__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FChaosVDGTJointStateDataWrapper> @ 1436c9a20

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDGTJointStateDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDGTJointStateDataWrapper> @ 1436c9a30

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDGTJointStateDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  byte bVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    bVar2 = (*(byte *)((longlong)param_1 + 0x10) ^ *(byte *)((longlong)param_2 + 0x10)) & 1 ^
            *(byte *)((longlong)param_1 + 0x10);
    *(byte *)((longlong)param_1 + 0x10) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x10)) & 2 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x10) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x10)) & 4 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x10) = bVar2;
    *(byte *)((longlong)param_1 + 0x10) = (bVar2 ^ *(byte *)((longlong)param_2 + 0x10)) & 8 ^ bVar2;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_1 = (void *)((longlong)param_1 + 0x50);
    param_2 = (void *)((longlong)param_2 + 0x50);
  }
  return true;
}

// Construct<FChaosVDKinematicTarget> @ 1436c9ae0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDKinematicTarget>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined ***)param_1 = &___7FChaosVDKinematicTarget__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FChaosVDKinematicTarget> @ 1436c9b30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDKinematicTarget>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDKinematicTarget__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FChaosVDKinematicTarget> @ 1436c9b70

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDKinematicTarget>(void *param_1)

{
  return;
}

// Copy<FChaosVDKinematicTarget> @ 1436c9b80

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDKinematicTarget>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x48) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x50);
  }
  return true;
}

// Construct<FChaosVDCharacterGroundConstraint> @ 1436c9c00

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDCharacterGroundConstraint>(void *param_1)

{
  memset(param_1,0,0x138);
  FChaosVDCharacterGroundConstraint::FChaosVDCharacterGroundConstraint(param_1);
  return;
}

// ConstructForTests<FChaosVDCharacterGroundConstraint> @ 1436c9c30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCharacterGroundConstraint>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCharacterGroundConstraint__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined ***)((longlong)param_1 + 0x20) =
       &___7FChaosVDCharacterGroundConstraintStateDataWrapper__6B_;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined ***)((longlong)param_1 + 0x78) =
       &___7FChaosVDCharacterGroundConstraintSettingsDataWrapper__6B_;
  *(undefined ***)((longlong)param_1 + 0xe0) =
       &___7FChaosVDCharacterGroundConstraintDataDataWrapper__6B_;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  return;
}

// Destruct<FChaosVDCharacterGroundConstraint> @ 1436c9c40

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDCharacterGroundConstraint>(void *param_1)

{
  return;
}

// Copy<FChaosVDCharacterGroundConstraint> @ 1436c9cd0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCharacterGroundConstraint>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = param_1;
  pvVar3 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) = *(undefined1 *)((longlong)pvVar3 + 8);
    *(undefined4 *)((longlong)pvVar2 + 0x10) = *(undefined4 *)((longlong)pvVar3 + 0x10);
    *(undefined4 *)((longlong)pvVar2 + 0x14) = *(undefined4 *)((longlong)pvVar3 + 0x14);
    *(undefined4 *)((longlong)pvVar2 + 0x18) = *(undefined4 *)((longlong)pvVar3 + 0x18);
    *(undefined4 *)((longlong)pvVar2 + 0x1c) = *(undefined4 *)((longlong)pvVar3 + 0x1c);
    *(undefined1 *)((longlong)pvVar2 + 0x28) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x30) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x34) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x38) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x3c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x3c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x40) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x50) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x58) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x58 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x60) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x68) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x70) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x80) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x80 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x90 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x88) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x88 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x90) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x98) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x98 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xa0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xa8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xb0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xb8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xc0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 200) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (200 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xd0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xd8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xd8 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0xe8) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0xe8 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xf8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xf0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xf0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xf8) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x100) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x100 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x110 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x108) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x108 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x110) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x118) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x118 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x120) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x120 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x128) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x128 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x130) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x130 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x138);
    pvVar3 = (void *)((longlong)pvVar3 + 0x138);
  }
  return true;
}

// Construct<FChaosVDJointStateDataWrapper> @ 1436ca040

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDJointStateDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  
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
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) & 0xf0;
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 0x10;
  *(undefined ***)param_1 = &___7FChaosVDJointStateDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FChaosVDJointStateDataWrapper> @ 1436ca0f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDJointStateDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) & 0xf0;
  *(byte *)((longlong)param_1 + 0x20) = *(byte *)((longlong)param_1 + 0x20) | 0x10;
  *(undefined ***)param_1 = &___7FChaosVDJointStateDataWrapper__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FChaosVDJointStateDataWrapper> @ 1436ca160

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDJointStateDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDJointStateDataWrapper> @ 1436ca210

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDJointStateDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  byte bVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    bVar2 = (*(byte *)((longlong)param_1 + 0x20) ^ *(byte *)((longlong)param_2 + 0x20)) & 1 ^
            *(byte *)((longlong)param_1 + 0x20);
    *(byte *)((longlong)param_1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x20)) & 2 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x20)) & 4 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x20)) & 8 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x20) = bVar2;
    *(byte *)((longlong)param_1 + 0x20) =
         (bVar2 ^ *(byte *)((longlong)param_2 + 0x20)) & 0x10 ^ bVar2;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_1 = (void *)((longlong)param_1 + 0x60);
    param_2 = (void *)((longlong)param_2 + 0x60);
  }
  return true;
}

// Construct<FChaosVDParticleCluster> @ 1436ca6c0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticleCluster>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleCluster__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
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
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaa) = 0;
  return;
}

// ConstructForTests<FChaosVDParticleCluster> @ 1436ca770

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleCluster>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleCluster__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
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
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaa) = 0;
  return;
}

// Destruct<FChaosVDParticleCluster> @ 1436ca820

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticleCluster>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x98);
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

// Copy<FChaosVDParticleCluster> @ 1436ca840

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticleCluster>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x68) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x78) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x80);
    *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x84);
    *(undefined4 *)((longlong)param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x88);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
    *(undefined4 *)((longlong)param_1 + 0x90) = *(undefined4 *)((longlong)param_2 + 0x90);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x98)) {
      iVar3 = *(int *)((longlong)param_2 + 0xa0);
      piVar1 = (int *)((longlong)param_1 + 0xa4);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x98))->Data;
      *(int *)((longlong)param_1 + 0xa0) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy(pFVar2->Data,_Src,(longlong)iVar3 << 3);
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xa8) = *(undefined1 *)((longlong)param_2 + 0xa8);
    *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0xa9);
    *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0xaa);
    param_1 = (void *)((longlong)param_1 + 0xb0);
    param_2 = (void *)((longlong)param_2 + 0xb0);
  }
  return true;
}

// Construct<FChaosVDCharacterGroundConstraintDataDataWrapper> @ 1436ca9d0

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDCharacterGroundConstraintDataDataWrapper>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCharacterGroundConstraintDataDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FChaosVDCharacterGroundConstraintDataDataWrapper> @ 1436caa20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCharacterGroundConstraintDataDataWrapper>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCharacterGroundConstraintDataDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FChaosVDCharacterGroundConstraintDataDataWrapper> @ 1436caa60

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosVDCharacterGroundConstraintDataDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDCharacterGroundConstraintDataDataWrapper> @ 1436caa70

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCharacterGroundConstraintDataDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    param_1 = (void *)((longlong)param_1 + 0x58);
    param_2 = (void *)((longlong)param_2 + 0x58);
  }
  return true;
}

// Construct<FChaosVDDebugDrawImplicitObjectDataWrapper> @ 1436caaf0

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDDebugDrawImplicitObjectDataWrapper>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
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
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawImplicitObjectDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar8;
  return;
}

// ConstructForTests<FChaosVDDebugDrawImplicitObjectDataWrapper> @ 1436caba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawImplicitObjectDataWrapper>
          (void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawImplicitObjectDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x70) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x78) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x80) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x88) = (double)fVar3;
  return;
}

// Destruct<FChaosVDDebugDrawImplicitObjectDataWrapper> @ 1436cac30

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawImplicitObjectDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDDebugDrawImplicitObjectDataWrapper> @ 1436cac40

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDDebugDrawImplicitObjectDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined4 *)((longlong)pvVar2 + 0x10) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x14) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x1c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x20) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x28) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x50) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x60) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x78 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x70) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x78) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x88 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x80) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x80 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x88) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x90);
  }
  return true;
}

// Construct<FChaosVDConnectivityEdge> @ 1436cad30

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDConnectivityEdge>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FChaosVDConnectivityEdge> @ 1436cad90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDConnectivityEdge>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FChaosVDConnectivityEdge> @ 1436cadb0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDConnectivityEdge>(void *param_1)

{
  return;
}

// Copy<FChaosVDConnectivityEdge> @ 1436caf10

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDConnectivityEdge>(void *param_1,void *param_2,int param_3)

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

// Construct<FChaosVDCharacterGroundConstraintSettingsDataWrapper> @ 1436cb2c0

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDCharacterGroundConstraintSettingsDataWrapper>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCharacterGroundConstraintSettingsDataWrapper__6B_;
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
  return;
}

// ConstructForTests<FChaosVDCharacterGroundConstraintSettingsDataWrapper> @ 1436cb340

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCharacterGroundConstraintSettingsDataWrapper>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCharacterGroundConstraintSettingsDataWrapper__6B_;
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
  return;
}

// Destruct<FChaosVDCharacterGroundConstraintSettingsDataWrapper> @ 1436cb390

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosVDCharacterGroundConstraintSettingsDataWrapper>
          (void *param_1)

{
  return;
}

// Copy<FChaosVDCharacterGroundConstraintSettingsDataWrapper> @ 1436cb630

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCharacterGroundConstraintSettingsDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x50) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x58) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x60) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x60 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x68);
  }
  return true;
}

// Construct<FChaosVDDebugDrawLineDataWrapper> @ 1436cb6c0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDDebugDrawLineDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  
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
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawLineDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FChaosVDDebugDrawLineDataWrapper> @ 1436cb740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawLineDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawLineDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FChaosVDDebugDrawLineDataWrapper> @ 1436cb7b0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawLineDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDDebugDrawLineDataWrapper> @ 1436cb7c0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDDebugDrawLineDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined1 *)((longlong)param_1 + 0x58) = *(undefined1 *)((longlong)param_2 + 0x58);
    param_1 = (void *)((longlong)param_1 + 0x60);
    param_2 = (void *)((longlong)param_2 + 0x60);
  }
  return true;
}

// Construct<FChaosVDParticleDynamicMisc> @ 1436cc060

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticleDynamicMisc>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleDynamicMisc__6B_;
  *(undefined ***)((longlong)param_1 + 0x48) = &___7FChaosVDFRigidParticleControlFlags__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffff00;
  return;
}

// ConstructForTests<FChaosVDParticleDynamicMisc> @ 1436cc0c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleDynamicMisc>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleDynamicMisc__6B_;
  *(undefined ***)((longlong)param_1 + 0x48) = &___7FChaosVDFRigidParticleControlFlags__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffff00;
  return;
}

// Destruct<FChaosVDParticleDynamicMisc> @ 1436cc120

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticleDynamicMisc>(void *param_1)

{
  return;
}

// Copy<FChaosVDParticleDynamicMisc> @ 1436cc130

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticleDynamicMisc>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = param_1;
  pvVar2 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) = *(undefined1 *)((longlong)pvVar2 + 8);
    *(undefined8 *)((longlong)pvVar1 + 0x10) = *(undefined8 *)((longlong)pvVar2 + 0x10);
    *(undefined8 *)((longlong)pvVar1 + 0x18) = *(undefined8 *)((longlong)pvVar2 + 0x18);
    *(undefined8 *)((longlong)pvVar1 + 0x20) = *(undefined8 *)((longlong)pvVar2 + 0x20);
    *(undefined8 *)((longlong)pvVar1 + 0x28) = *(undefined8 *)((longlong)pvVar2 + 0x28);
    *(undefined4 *)((longlong)pvVar1 + 0x30) = *(undefined4 *)((longlong)pvVar2 + 0x30);
    *(undefined4 *)((longlong)pvVar1 + 0x34) = *(undefined4 *)((longlong)pvVar2 + 0x34);
    *(undefined4 *)((longlong)pvVar1 + 0x38) = *(undefined4 *)((longlong)pvVar2 + 0x38);
    *(undefined1 *)((longlong)pvVar1 + 0x3c) = *(undefined1 *)((longlong)pvVar2 + 0x3c);
    *(undefined1 *)((longlong)pvVar1 + 0x3d) = *(undefined1 *)((longlong)pvVar2 + 0x3d);
    *(undefined4 *)((longlong)pvVar1 + 0x40) = *(undefined4 *)((longlong)pvVar2 + 0x40);
    *(undefined1 *)((longlong)pvVar1 + 0x50) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x58) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x59) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x59 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x5a) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x5a - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x5b) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x5b - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x5c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x5c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x60) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x61) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x61 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x62) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x62 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x68) = *(undefined1 *)((longlong)pvVar2 + 0x68);
    *(undefined1 *)((longlong)pvVar1 + 0x69) = *(undefined1 *)((longlong)pvVar2 + 0x69);
    *(undefined1 *)((longlong)pvVar1 + 0x6a) = *(undefined1 *)((longlong)pvVar2 + 0x6a);
    *(undefined1 *)((longlong)pvVar1 + 0x6b) = *(undefined1 *)((longlong)pvVar2 + 0x6b);
    pvVar1 = (void *)((longlong)pvVar1 + 0x70);
    pvVar2 = (void *)((longlong)pvVar2 + 0x70);
  }
  return true;
}

// Construct<FChaosVDCharacterGroundConstraintStateDataWrapper> @ 1436cc2c0

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDCharacterGroundConstraintStateDataWrapper>
          (void *param_1)

{
  undefined8 uVar1;
  
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
  *(undefined ***)param_1 = &___7FChaosVDCharacterGroundConstraintStateDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FChaosVDCharacterGroundConstraintStateDataWrapper> @ 1436cc330

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCharacterGroundConstraintStateDataWrapper>
          (void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDCharacterGroundConstraintStateDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FChaosVDCharacterGroundConstraintStateDataWrapper> @ 1436cc390

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosVDCharacterGroundConstraintStateDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDCharacterGroundConstraintStateDataWrapper> @ 1436cc430

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCharacterGroundConstraintStateDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    param_1 = (void *)((longlong)param_1 + 0x58);
    param_2 = (void *)((longlong)param_2 + 0x58);
  }
  return true;
}

// Construct<FChaosVDDebugDrawSphereDataWrapper> @ 1436cc4c0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDDebugDrawSphereDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawSphereDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FChaosVDDebugDrawSphereDataWrapper> @ 1436cc530

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawSphereDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawSphereDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FChaosVDDebugDrawSphereDataWrapper> @ 1436cc590

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawSphereDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDDebugDrawSphereDataWrapper> @ 1436cc620

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDDebugDrawSphereDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined4 *)((longlong)pvVar2 + 0x10) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x14) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x1c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x20) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x38) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x40) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x48);
  }
  return true;
}

// Construct<FChaosVDParticleMassProps> @ 1436cc960

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticleMassProps>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleMassProps__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// ConstructForTests<FChaosVDParticleMassProps> @ 1436cc9d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleMassProps>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleMassProps__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FChaosVDParticleMassProps> @ 1436cca40

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticleMassProps>(void *param_1)

{
  return;
}

// Copy<FChaosVDParticleMassProps> @ 1436cca50

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticleMassProps>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
    param_1 = (void *)((longlong)param_1 + 0x90);
    param_2 = (void *)((longlong)param_2 + 0x90);
  }
  return true;
}

// Construct<FChaosVDAABBTreeDataWrapper> @ 1436ccb40

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDAABBTreeDataWrapper>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0x29) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAABBTreeDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FChaosVDAABBTreeDataWrapper> @ 1436ccbc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDAABBTreeDataWrapper>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAABBTreeDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  return;
}

// Destruct<FChaosVDAABBTreeDataWrapper> @ 1436ccc30

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDAABBTreeDataWrapper>(void *param_1)

{
  DestructItems<FChaosVDBoundingVolumeDataWrapper,int>
            (*(FChaosVDBoundingVolumeDataWrapper **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FChaosVDAABBTreeLeafDataWrapper,int>
            (*(FChaosVDAABBTreeLeafDataWrapper **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
    return;
  }
  return;
}

// Copy<FChaosVDAABBTreeDataWrapper> @ 1436ccc90

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDAABBTreeDataWrapper>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FChaosVDAABBTreeNodeDataWrapper *pFVar4;
  FChaosVDAABBTreeLeafDataWrapper *pFVar5;
  FChaosVDBoundingVolumeDataWrapper *pFVar6;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x40)) {
      iVar3 = *(int *)((longlong)param_2 + 0x48);
      piVar2 = (int *)((longlong)param_1 + 0x4c);
      pFVar4 = (FChaosVDAABBTreeNodeDataWrapper *)
               ((ForAnyElementType *)((longlong)param_2 + 0x40))->Data;
      *(int *)((longlong)param_1 + 0x48) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FChaosVDAABBTreeNodeDataWrapper,FChaosVDAABBTreeNodeDataWrapper,int>
                  (pFVar1->Data,pFVar4,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x50);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x50)) {
      DestructItems<FChaosVDAABBTreeLeafDataWrapper,int>
                ((FChaosVDAABBTreeLeafDataWrapper *)pFVar1->Data,*(int *)((longlong)param_1 + 0x58))
      ;
      iVar3 = *(int *)((longlong)param_2 + 0x58);
      piVar2 = (int *)((longlong)param_1 + 0x5c);
      pFVar5 = (FChaosVDAABBTreeLeafDataWrapper *)
               ((ForAnyElementType *)((longlong)param_2 + 0x50))->Data;
      *(int *)((longlong)param_1 + 0x58) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FChaosVDAABBTreeLeafDataWrapper,FChaosVDAABBTreeLeafDataWrapper,int>
                  (pFVar1->Data,pFVar5,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x60);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x60)) {
      DestructItems<FChaosVDBoundingVolumeDataWrapper,int>
                ((FChaosVDBoundingVolumeDataWrapper *)pFVar1->Data,
                 *(int *)((longlong)param_1 + 0x68));
      iVar3 = *(int *)((longlong)param_2 + 0x68);
      piVar2 = (int *)((longlong)param_1 + 0x6c);
      pFVar6 = (FChaosVDBoundingVolumeDataWrapper *)
               ((ForAnyElementType *)((longlong)param_2 + 0x60))->Data;
      *(int *)((longlong)param_1 + 0x68) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FChaosVDBoundingVolumeDataWrapper,FChaosVDBoundingVolumeDataWrapper,int>
                  (pFVar1->Data,pFVar6,iVar3);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x70);
    param_2 = (void *)((longlong)param_2 + 0x70);
  }
  return true;
}

// Construct<FChaosVDDebugDrawBoxDataWrapper> @ 1436cce70

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDDebugDrawBoxDataWrapper>(void *param_1)

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
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawBoxDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x59) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5f) = 0;
  return;
}

// ConstructForTests<FChaosVDDebugDrawBoxDataWrapper> @ 1436ccef0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawBoxDataWrapper>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawBoxDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x59) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5f) = 0;
  return;
}

// Construct<FChaosVDSceneQueriesDataContainer> @ 1436ccf60

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDSceneQueriesDataContainer>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// Destruct<FChaosVDDebugDrawBoxDataWrapper> @ 1436cd020

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawBoxDataWrapper>(void *param_1)

{
  return;
}

// ConstructForTests<FChaosVDSceneQueriesDataContainer> @ 1436cd030

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDSceneQueriesDataContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FChaosVDSceneQueriesDataContainer> @ 1436cd0a0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDSceneQueriesDataContainer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDQueryDataWrapper,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDQueryDataWrapper,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDQueryDataWrapper,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FChaosVDDebugDrawBoxDataWrapper> @ 1436cd100

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDDebugDrawBoxDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined4 *)((longlong)pvVar2 + 0x10) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x14) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x1c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x20) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x50) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x58) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x58 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x60);
  }
  return true;
}

// Copy<FChaosVDSceneQueriesDataContainer> @ 1436cd180

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDSceneQueriesDataContainer>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      if (&this[1].field_0x18 != &pTVar1[1].field_0x18) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&this[2].field_0x18,(int *)&this[2].field_0x28,
                   (ForElementType<FSetElementId> *)&pTVar1[2].field_0x18,
                   *(int *)&pTVar1[2].field_0x28);
        TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDQueryDataWrapper,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDQueryDataWrapper,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this[1].field_0x18,
                    (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDQueryDataWrapper,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&pTVar1[1].field_0x18);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<int,TMap<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FChaosVDQueryDataWrapper,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[2].field_0x30;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDParticleDynamics> @ 1436cd280

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticleDynamics>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleDynamics__6B_;
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
  return;
}

// ConstructForTests<FChaosVDParticleDynamics> @ 1436cd2d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleDynamics>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleDynamics__6B_;
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
  return;
}

// Destruct<FChaosVDParticleDynamics> @ 1436cd320

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticleDynamics>(void *param_1)

{
  return;
}

// Copy<FChaosVDParticleDynamics> @ 1436cd330

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticleDynamics>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    param_1 = (void *)((longlong)param_1 + 0x70);
    param_2 = (void *)((longlong)param_2 + 0x70);
  }
  return true;
}

// Construct<FChaosVDAccelerationStructureContainer> @ 1436cd8c0

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDAccelerationStructureContainer>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FChaosVDAccelerationStructureContainer> @ 1436cd900

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDAccelerationStructureContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FChaosVDAccelerationStructureContainer> @ 1436cd930

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosVDAccelerationStructureContainer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FChaosVDAccelerationStructureContainer> @ 1436cd970

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDAccelerationStructureContainer>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<int,TArray<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<int,TArray<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<int,TArray<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<int,TArray<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<int,TArray<TSharedPtr<FChaosVDAABBTreeDataWrapper,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDDebugDrawShapeBase> @ 1436cda00

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDDebugDrawShapeBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// ConstructForTests<FChaosVDDebugDrawShapeBase> @ 1436cda40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugDrawShapeBase>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDDebugDrawShapeBase__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x1c))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Destruct<FChaosVDDebugDrawShapeBase> @ 1436cda80

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDDebugDrawShapeBase>(void *param_1)

{
  return;
}

// Copy<FChaosVDDebugDrawShapeBase> @ 1436cdb10

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDDebugDrawShapeBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x1c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x20) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FChaosVDParticleBounds> @ 1436cdc40

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticleBounds>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleBounds__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FChaosVDParticleBounds> @ 1436cdc70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleBounds>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleBounds__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FChaosVDParticleBounds> @ 1436cdca0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticleBounds>(void *param_1)

{
  return;
}

// Copy<FChaosVDParticleBounds> @ 1436cdd00

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticleBounds>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    param_1 = (void *)((longlong)param_1 + 0x40);
    param_2 = (void *)((longlong)param_2 + 0x40);
  }
  return true;
}

// Construct<FChaosVDQueryDataWrapper> @ 1436cddb0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDQueryDataWrapper>(void *param_1)

{
  memset(param_1,0,0x180);
  FChaosVDQueryDataWrapper::FChaosVDQueryDataWrapper(param_1);
  return;
}

// Construct<FChaosVDAABBTreeLeafDataWrapper> @ 1436cdde0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDAABBTreeLeafDataWrapper>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAABBTreeLeafDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51) = 0;
  *(undefined2 *)((longlong)param_1 + 0x55) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  return;
}

// ConstructForTests<FChaosVDQueryDataWrapper> @ 1436cde30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDQueryDataWrapper>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 3;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FChaosVDCollisionQueryParams__6B_;
  *(ushort *)((longlong)param_1 + 0xa0) = *(ushort *)((longlong)param_1 + 0xa0) & 0xfe00;
  *(undefined ***)((longlong)param_1 + 0xe8) = &___7FChaosVDCollisionResponseParams__6B_;
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x20;
  *(undefined ***)((longlong)param_1 + 0x128) = &___7FChaosVDCollisionObjectQueryParams__6B_;
  *(undefined1 *)((longlong)param_1 + 0x130) = 0;
  *(undefined2 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  return;
}

// ConstructForTests<FChaosVDAABBTreeLeafDataWrapper> @ 1436cde40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDAABBTreeLeafDataWrapper>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAABBTreeLeafDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51) = 0;
  *(undefined2 *)((longlong)param_1 + 0x55) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  return;
}

// Destruct<FChaosVDQueryDataWrapper> @ 1436cded0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDQueryDataWrapper>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x160) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x160));
  }
  if (*(void **)((longlong)param_1 + 0x150) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x150));
  }
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
    return;
  }
  return;
}

// Destruct<FChaosVDAABBTreeLeafDataWrapper> @ 1436cdee0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDAABBTreeLeafDataWrapper>(void *param_1)

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

// SerializeArchive<FChaosVDQueryDataWrapper> @ 1436cdf00

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosVDQueryDataWrapper>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FChaosVDQueryDataWrapper::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FChaosVDAABBTreeLeafDataWrapper> @ 1436cdf20

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDAABBTreeLeafDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FChaosVDAABBTreePayloadBoundsElement *pFVar4;
  undefined8 uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x10)) {
      iVar3 = *(int *)((longlong)param_2 + 0x18);
      piVar2 = (int *)((longlong)param_1 + 0x1c);
      pFVar4 = (FChaosVDAABBTreePayloadBoundsElement *)
               ((ForAnyElementType *)((longlong)param_2 + 0x10))->Data;
      *(int *)((longlong)param_1 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FChaosVDAABBTreePayloadBoundsElement,FChaosVDAABBTreePayloadBoundsElement,int>
                  (pFVar1->Data,pFVar4,iVar3);
      }
    }
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar5;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    param_1 = (void *)((longlong)param_1 + 0x58);
    param_2 = (void *)((longlong)param_2 + 0x58);
  }
  return true;
}

// Copy<FChaosVDQueryDataWrapper> @ 1436ce020

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDQueryDataWrapper>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
      uVar4 = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar4;
      uVar4 = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
      *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
      uVar4 = *(undefined8 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
      uVar4 = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
      *(undefined4 *)((longlong)param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x78);
      FChaosVDCollisionQueryParams::operator=
                ((FChaosVDCollisionQueryParams *)((longlong)param_1 + 0x80),
                 (FChaosVDCollisionQueryParams *)((longlong)param_2 + 0x80));
      FChaosVDCollisionResponseParams::operator=
                ((FChaosVDCollisionResponseParams *)((longlong)param_1 + 0xe8),
                 (FChaosVDCollisionResponseParams *)((longlong)param_2 + 0xe8));
      *(undefined1 *)((longlong)param_1 + 0x130) =
           *(undefined1 *)((longlong)param_1 + lVar5 + 0x130);
      *(undefined1 *)((longlong)param_1 + 0x138) =
           *(undefined1 *)((longlong)param_1 + lVar5 + 0x138);
      *(undefined1 *)((longlong)param_1 + 0x139) =
           *(undefined1 *)((longlong)param_1 + lVar5 + 0x139);
      TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x140),
                 (TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x140));
      TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x150),
                 (TArray<FChaosVDQueryVisitStep,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x150));
      pFVar6 = (ForAnyElementType *)((longlong)param_1 + 0x160);
      if (pFVar6 != (ForAnyElementType *)((longlong)param_2 + 0x160)) {
        iVar3 = *(int *)((longlong)param_2 + 0x168);
        piVar1 = (int *)((longlong)param_1 + 0x16c);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x160))->Data;
        *(int *)((longlong)param_1 + 0x168) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,*piVar1,pFVar6,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar6->Data,_Src,(longlong)iVar3 << 2);
          }
        }
      }
      puVar2 = (undefined4 *)((longlong)param_2 + 0x170);
      param_2 = (void *)((longlong)param_2 + 0x180);
      *(undefined4 *)((longlong)param_1 + 0x170) = *puVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x180);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDMultiSolverDebugShapeDataContainer> @ 1436ce210

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDMultiSolverDebugShapeDataContainer>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FChaosVDMultiSolverDebugShapeDataContainer> @ 1436ce250

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDMultiSolverDebugShapeDataContainer>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FChaosVDMultiSolverDebugShapeDataContainer> @ 1436ce280

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosVDMultiSolverDebugShapeDataContainer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDDebugShapeDataContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDDebugShapeDataContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FChaosVDMultiSolverDebugShapeDataContainer> @ 1436ce2c0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDMultiSolverDebugShapeDataContainer>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDDebugShapeDataContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDDebugShapeDataContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDDebugShapeDataContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDDebugShapeDataContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FChaosVDDebugShapeDataContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDParticleVelocities> @ 1436ce7c0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticleVelocities>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleVelocities__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FChaosVDParticleVelocities> @ 1436ce7f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDParticleVelocities>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticleVelocities__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FChaosVDParticleVelocities> @ 1436ce820

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticleVelocities>(void *param_1)

{
  return;
}

// Copy<FChaosVDParticleVelocities> @ 1436ce830

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticleVelocities>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    param_1 = (void *)((longlong)param_1 + 0x40);
    param_2 = (void *)((longlong)param_2 + 0x40);
  }
  return true;
}

// Construct<FChaosVDAABBTreePayloadBoundsElement> @ 1436ceb20

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDAABBTreePayloadBoundsElement>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAABBTreePayloadBoundsElement__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  return;
}

// ConstructForTests<FChaosVDAABBTreePayloadBoundsElement> @ 1436cebb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDAABBTreePayloadBoundsElement>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAABBTreePayloadBoundsElement__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  return;
}

// Destruct<FChaosVDAABBTreePayloadBoundsElement> @ 1436cec30

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDAABBTreePayloadBoundsElement>(void *param_1)

{
  return;
}

// Copy<FChaosVDAABBTreePayloadBoundsElement> @ 1436cec80

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDAABBTreePayloadBoundsElement>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    param_1 = (void *)((longlong)param_1 + 0x88);
    param_2 = (void *)((longlong)param_2 + 0x88);
  }
  return true;
}

// Construct<FChaosVDDebugShapeDataContainer> @ 1436ced20

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDDebugShapeDataContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FChaosVDDebugShapeDataContainer> @ 1436ced50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDDebugShapeDataContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FChaosVDDebugShapeDataContainer> @ 1436ced80

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDDebugShapeDataContainer>(void *param_1)

{
  DestructItems<TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,int>
            (*(TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1> **)
              ((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,int>
            (*(TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1> **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,int>
            (*(TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1> **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,int>
            (*(TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1> **)param_1,
             *(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FChaosVDDebugShapeDataContainer> @ 1436cedd0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDDebugShapeDataContainer>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1> *pTVar5;
  TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1> *pTVar6;
  TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1> *pTVar7;
  TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1> *pTVar8;
  ForAnyElementType *pFVar9;
  ForAnyElementType *pFVar10;
  
  if (param_3 != 0) {
    pFVar10 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar10);
      if (pFVar10 != pFVar2) {
        DestructItems<TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,int>
                  ((TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1> *)pFVar10->Data,
                   *(int *)&pFVar10[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
        pTVar5 = (TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1> *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar10[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar10,iVar3,piVar1);
          ConstructItems<TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawBoxDataWrapper,1>,int>
                    (pFVar10->Data,pTVar5,iVar3);
        }
      }
      pFVar9 = pFVar10 + 2;
      if (pFVar9 != pFVar2 + 2) {
        DestructItems<TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,int>
                  ((TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1> *)pFVar9->Data,
                   *(int *)&pFVar10[3].Data);
        iVar3 = *(int *)&pFVar2[3].Data;
        piVar1 = (int *)((longlong)&pFVar10[3].Data + 4);
        pTVar6 = (TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1> *)pFVar2[2].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar10[3].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar9,iVar3,piVar1);
          ConstructItems<TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawLineDataWrapper,1>,int>
                    (pFVar9->Data,pTVar6,iVar3);
        }
      }
      pFVar9 = pFVar10 + 4;
      if (pFVar9 != pFVar2 + 4) {
        DestructItems<TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,int>
                  ((TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1> *)pFVar9->Data,
                   *(int *)&pFVar10[5].Data);
        iVar3 = *(int *)&pFVar2[5].Data;
        piVar1 = (int *)((longlong)&pFVar10[5].Data + 4);
        pTVar7 = (TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1> *)pFVar2[4].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar10[5].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar9,iVar3,piVar1);
          ConstructItems<TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawSphereDataWrapper,1>,int>
                    (pFVar9->Data,pTVar7,iVar3);
        }
      }
      pFVar9 = pFVar10 + 6;
      if (pFVar9 != pFVar2 + 6) {
        DestructItems<TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,int>
                  ((TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1> *)pFVar9->Data,
                   *(int *)&pFVar10[7].Data);
        iVar3 = *(int *)&pFVar2[7].Data;
        piVar1 = (int *)((longlong)&pFVar10[7].Data + 4);
        pTVar8 = (TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1> *)pFVar2[6].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar10[7].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar9,iVar3,piVar1);
          ConstructItems<TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,TSharedPtr<FChaosVDDebugDrawImplicitObjectDataWrapper,1>,int>
                    (pFVar9->Data,pTVar8,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar10 = pFVar10 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDParticlePositionRotation> @ 1436cf080

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDParticlePositionRotation>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticlePositionRotation__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FChaosVDParticlePositionRotation> @ 1436cf0c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDParticlePositionRotation>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDParticlePositionRotation__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  return;
}

// Destruct<FChaosVDParticlePositionRotation> @ 1436cf100

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDParticlePositionRotation>(void *param_1)

{
  return;
}

// Copy<FChaosVDParticlePositionRotation> @ 1436cf190

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDParticlePositionRotation>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x50);
  }
  return true;
}

// Construct<FChaosVDQueryVisitStep> @ 1436cf270

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDQueryVisitStep>(void *param_1)

{
  memset(param_1,0,0x150);
  FChaosVDQueryVisitStep::FChaosVDQueryVisitStep(param_1);
  return;
}

// ConstructForTests<FChaosVDQueryVisitStep> @ 1436cf2a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDQueryVisitStep>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDQueryVisitStep__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar8;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FChaosVDQueryFastData__6B_;
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar9;
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xb0) = uVar9;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0xb8) = uVar9;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined ***)((longlong)param_1 + 0xe0) = &___7FChaosVDQueryHitData__6B_;
  *(undefined1 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xf8) = 0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x100) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x108) = uVar9;
  *(double *)((longlong)param_1 + 0x110) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x118) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x120) = uVar9;
  *(double *)((longlong)param_1 + 0x128) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x130) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x138) = uVar9;
  *(double *)((longlong)param_1 + 0x140) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  return;
}

// Destruct<FChaosVDQueryVisitStep> @ 1436cf2b0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDQueryVisitStep>(void *param_1)

{
  return;
}

// SerializeArchive<FChaosVDQueryVisitStep> @ 1436cf2c0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosVDQueryVisitStep>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FChaosVDQueryVisitStep::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FChaosVDQueryVisitStep> @ 1436cf2f0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDQueryVisitStep>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  byte bVar5;
  
  pvVar4 = param_1;
  pvVar2 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar4 + 8) = *(undefined1 *)((longlong)pvVar2 + 8);
    *(undefined4 *)((longlong)pvVar4 + 0x10) = *(undefined4 *)((longlong)pvVar2 + 0x10);
    *(undefined4 *)((longlong)pvVar4 + 0x14) = *(undefined4 *)((longlong)pvVar2 + 0x14);
    *(undefined4 *)((longlong)pvVar4 + 0x18) = *(undefined4 *)((longlong)pvVar2 + 0x18);
    *(undefined4 *)((longlong)pvVar4 + 0x1c) = *(undefined4 *)((longlong)pvVar2 + 0x1c);
    uVar3 = *(undefined8 *)((longlong)pvVar2 + 0x28);
    *(undefined8 *)((longlong)pvVar4 + 0x20) = *(undefined8 *)((longlong)pvVar2 + 0x20);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar2 + 0x38);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = *(undefined8 *)((longlong)pvVar2 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x38) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar2 + 0x48);
    *(undefined8 *)((longlong)pvVar4 + 0x40) = *(undefined8 *)((longlong)pvVar2 + 0x40);
    *(undefined8 *)((longlong)pvVar4 + 0x48) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar2 + 0x58);
    *(undefined8 *)((longlong)pvVar4 + 0x50) = *(undefined8 *)((longlong)pvVar2 + 0x50);
    *(undefined8 *)((longlong)pvVar4 + 0x58) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar2 + 0x68);
    *(undefined8 *)((longlong)pvVar4 + 0x60) = *(undefined8 *)((longlong)pvVar2 + 0x60);
    *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar2 + 0x78);
    *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)((longlong)pvVar2 + 0x70);
    *(undefined8 *)((longlong)pvVar4 + 0x78) = uVar3;
    *(undefined1 *)((longlong)pvVar4 + 0x88) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0x88 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x98 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x90) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x90 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x98) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0xa0) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0xa8) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0xb0) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0xb8) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0xc0) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 200) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (200 - (longlong)param_1));
    bVar5 = (*(byte *)((longlong)pvVar4 + 0xd0) ^
            *(byte *)((longlong)pvVar4 + (longlong)param_2 + (0xd0 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar4 + 0xd0);
    *(byte *)((longlong)pvVar4 + 0xd0) = bVar5;
    bVar5 = (bVar5 ^ *(byte *)((longlong)pvVar4 + (longlong)param_2 + (0xd0 - (longlong)param_1))) &
            2 ^ bVar5;
    *(byte *)((longlong)pvVar4 + 0xd0) = bVar5;
    *(byte *)((longlong)pvVar4 + 0xd0) =
         (bVar5 ^ *(byte *)((longlong)pvVar4 + (longlong)param_2 + (0xd0 - (longlong)param_1))) & 4
         ^ bVar5;
    *(undefined4 *)((longlong)pvVar4 + 0xd8) = *(undefined4 *)((longlong)pvVar2 + 0xd8);
    *(undefined1 *)((longlong)pvVar4 + 0xe8) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0xe8 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0xf0) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0xf0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0xf4) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0xf4 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar4 + 0xf8) =
         *(undefined2 *)((longlong)pvVar4 + (longlong)param_2 + (0xf8 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x108 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x100) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x100 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x108) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0x110) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x110 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x120 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x118) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x118 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x120) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0x128) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x128 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x138 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x130) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x130 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x138) = uVar3;
    *(undefined8 *)((longlong)pvVar4 + 0x140) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x140 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0x148) = *(undefined4 *)((longlong)pvVar2 + 0x148);
    puVar1 = (undefined4 *)((longlong)pvVar2 + 0x14c);
    pvVar2 = (void *)((longlong)pvVar2 + 0x150);
    *(undefined4 *)((longlong)pvVar4 + 0x14c) = *puVar1;
    pvVar4 = (void *)((longlong)pvVar4 + 0x150);
  }
  return true;
}

// Construct<FChaosVDAABBTreeNodeDataWrapper> @ 1436cf580

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDAABBTreeNodeDataWrapper>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAABBTreeNodeDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41) = 0;
  *(undefined2 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7f) = 0;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  return;
}

// ConstructForTests<FChaosVDAABBTreeNodeDataWrapper> @ 1436cf610

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDAABBTreeNodeDataWrapper>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDAABBTreeNodeDataWrapper__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41) = 0;
  *(undefined2 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7f) = 0;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  return;
}

// Destruct<FChaosVDAABBTreeNodeDataWrapper> @ 1436cf6d0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDAABBTreeNodeDataWrapper>(void *param_1)

{
  return;
}

// Copy<FChaosVDAABBTreeNodeDataWrapper> @ 1436cf6e0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDAABBTreeNodeDataWrapper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  byte bVar4;
  
  pvVar2 = param_1;
  pvVar3 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x50);
    *(undefined8 *)((longlong)pvVar2 + 0x48) = *(undefined8 *)((longlong)pvVar3 + 0x48);
    *(undefined8 *)((longlong)pvVar2 + 0x50) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x60);
    *(undefined8 *)((longlong)pvVar2 + 0x58) = *(undefined8 *)((longlong)pvVar3 + 0x58);
    *(undefined8 *)((longlong)pvVar2 + 0x60) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x70);
    *(undefined8 *)((longlong)pvVar2 + 0x68) = *(undefined8 *)((longlong)pvVar3 + 0x68);
    *(undefined8 *)((longlong)pvVar2 + 0x70) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x78) = *(undefined8 *)((longlong)pvVar3 + 0x78);
    *(undefined4 *)((longlong)pvVar2 + 0x80) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x80 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x84) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x84 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x88) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x88 - (longlong)param_1));
    bVar4 = (*(byte *)((longlong)pvVar2 + 0x8c) ^
            *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x8c - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar2 + 0x8c);
    *(byte *)((longlong)pvVar2 + 0x8c) = bVar4;
    *(byte *)((longlong)pvVar2 + 0x8c) =
         (bVar4 ^ *(byte *)((longlong)pvVar2 + (longlong)param_2 + (0x8c - (longlong)param_1))) & 2
         ^ bVar4;
    pvVar2 = (void *)((longlong)pvVar2 + 0x90);
    pvVar3 = (void *)((longlong)pvVar3 + 0x90);
  }
  return true;
}

// Construct<FChaosVDCollisionChannelsInfoContainer> @ 1436cf7f0

void __cdecl
UE::CoreUObject::Private::Construct<FChaosVDCollisionChannelsInfoContainer>(void *param_1)

{
  memset(param_1,0,0x300);
  FChaosVDCollisionChannelsInfoContainer::FChaosVDCollisionChannelsInfoContainer(param_1);
  return;
}

// ConstructForTests<FChaosVDCollisionChannelsInfoContainer> @ 1436cf820

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDCollisionChannelsInfoContainer>(void *param_1)

{
  memset(param_1,0,0x300);
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 400) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x208) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x220) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x238) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x268) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x280) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x298) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2e0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2f8) = 0xffffffff;
  return;
}

// Destruct<FChaosVDCollisionChannelsInfoContainer> @ 1436cf880

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosVDCollisionChannelsInfoContainer>(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 + 0x300;
  lVar2 = 0x20;
  do {
    puVar1 = (undefined8 *)(lVar3 + -0x18);
    lVar3 = lVar3 + -0x18;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  return;
}

// Copy<FChaosVDCollisionChannelsInfoContainer> @ 1436cf8d0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDCollisionChannelsInfoContainer>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      lVar3 = 0x20;
      puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
      do {
        ::FString::operator=((FString *)(puVar1 + -4),(FString *)(lVar2 + -0x10 + (longlong)puVar1))
        ;
        *puVar1 = *(undefined4 *)(lVar2 + (longlong)puVar1);
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar2 + 4 + (longlong)puVar1);
        puVar1 = puVar1 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      param_3 = param_3 + -1;
      param_1 = (void *)((longlong)param_1 + 0x300);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosVDFRigidParticleControlFlags> @ 1436cfef0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDFRigidParticleControlFlags>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDFRigidParticleControlFlags__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  return;
}

// ConstructForTests<FChaosVDFRigidParticleControlFlags> @ 1436cff20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDFRigidParticleControlFlags>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDFRigidParticleControlFlags__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  return;
}

// Destruct<FChaosVDFRigidParticleControlFlags> @ 1436cff90

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDFRigidParticleControlFlags>(void *param_1)

{
  return;
}

// SerializeArchive<FChaosVDFRigidParticleControlFlags> @ 1436cffa0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosVDFRigidParticleControlFlags>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FChaosVDFRigidParticleControlFlags::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FChaosVDFRigidParticleControlFlags> @ 1436d0000

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosVDFRigidParticleControlFlags>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x11) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x11 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x12) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x13) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x13 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x19) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x19 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1a) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1a - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FChaosVDQueryHitData> @ 1436d00e0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDQueryHitData>(void *param_1)

{
  undefined8 uVar1;
  
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
  *(undefined ***)param_1 = &___7FChaosVDQueryHitData__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FChaosVDQueryHitData> @ 1436d0180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosVDQueryHitData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDQueryHitData__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FChaosVDQueryHitData> @ 1436d0200

void __cdecl UE::CoreUObject::Private::Destruct<FChaosVDQueryHitData>(void *param_1)

{
  return;
}

// SerializeArchive<FChaosVDQueryHitData> @ 1436d02a0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosVDQueryHitData>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FChaosVDQueryHitData::Serialize(param_2,param_1);
  return bVar1;
}

// Construct<FChaosVDBoundingVolumeDataWrapper> @ 1436d02c0

void __cdecl UE::CoreUObject::Private::Construct<FChaosVDBoundingVolumeDataWrapper>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FChaosVDBoundingVolumeDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  *(undefined8 *)((longlong)param_1 + 0x18) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x20) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FChaosVDBoundingVolumeDataWrapper> @ 1436d0320

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosVDBoundingVolumeDataWrapper>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FChaosVDBoundingVolumeDataWrapper__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  *(undefined8 *)((longlong)param_1 + 0x18) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x20) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&> @ 1436d1980

FChaosVDRuntimeModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>
          (FChaosVDRuntimeModule **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1436d1cb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (ushort param_1,ForElementType<FString> *param_2,int *param_3)

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
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 1436d1d80

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator<< @ 1436d78b0

FArchive * __cdecl UE::Math::operator<<(FArchive *param_1,TBox<double> *param_2)

{
  uchar *puVar1;
  FArchive *pFVar2;
  
  pFVar2 = operator<<(param_1,&param_2->Min);
  pFVar2 = operator<<(pFVar2,&param_2->Max);
  puVar1 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    param_2->IsValid = *puVar1;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
    return pFVar2;
  }
  (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&param_2->IsValid,1);
  return pFVar2;
}

