// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 187

// Destruct<FLiveLinkCameraStaticData> @ 14cfa9e40

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkCameraStaticData>(void *param_1)

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

// Copy<FLiveLinkCameraStaticData> @ 14cfa9ea0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkCameraStaticData>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      *(undefined1 *)&this[1].AllocatorInstance.Data =
           *(undefined1 *)&pTVar1[1].AllocatorInstance.Data;
      *(undefined1 *)((longlong)&this[1].AllocatorInstance.Data + 1) =
           *(undefined1 *)((longlong)&pTVar1[1].AllocatorInstance.Data + 1);
      *(undefined1 *)((longlong)&this[1].AllocatorInstance.Data + 2) =
           *(undefined1 *)((longlong)&pTVar1[1].AllocatorInstance.Data + 2);
      *(char *)&this[1].ArrayNum = (char)pTVar1[1].ArrayNum;
      *(undefined1 *)((longlong)&this[1].ArrayNum + 1) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayNum + 1);
      *(undefined1 *)((longlong)&this[1].ArrayNum + 2) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayNum + 2);
      *(undefined1 *)((longlong)&this[1].ArrayNum + 3) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayNum + 3);
      this[1].ArrayMax = pTVar1[1].ArrayMax;
      *(undefined4 *)&this[2].AllocatorInstance.Data =
           *(undefined4 *)&pTVar1[2].AllocatorInstance.Data;
      *(undefined1 *)((longlong)&this[2].AllocatorInstance.Data + 4) =
           *(undefined1 *)((longlong)&pTVar1[2].AllocatorInstance.Data + 4);
      *(undefined1 *)((longlong)&this[2].AllocatorInstance.Data + 5) =
           *(undefined1 *)((longlong)&pTVar1[2].AllocatorInstance.Data + 5);
      *(undefined1 *)((longlong)&this[2].AllocatorInstance.Data + 6) =
           *(undefined1 *)((longlong)&pTVar1[2].AllocatorInstance.Data + 6);
      *(undefined1 *)((longlong)&this[2].AllocatorInstance.Data + 7) =
           *(undefined1 *)((longlong)&pTVar1[2].AllocatorInstance.Data + 7);
      param_3 = param_3 + -1;
      this = (TArray<FName,TSizedDefaultAllocator<32>_> *)&this[2].ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkSourceDebugInfo> @ 14cfa9f70

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSourceDebugInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLiveLinkSourceDebugInfo> @ 14cfa9f80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSourceDebugInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLiveLinkSourceDebugInfo> @ 14cfa9f90

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSourceDebugInfo>(void *param_1)

{
  return;
}

// Copy<FLiveLinkSourceDebugInfo> @ 14cfa9fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSourceDebugInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FLiveLinkFrameData> @ 14cfaa040

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkFrameData>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  FLiveLinkFrameData::FLiveLinkFrameData(param_1);
  return;
}

// ConstructForTests<FLiveLinkFrameData> @ 14cfaa080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkFrameData>(void *param_1)

{
  double dVar1;
  LARGE_INTEGER LStackX_8;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  QueryPerformanceCounter(&LStackX_8);
  dVar1 = (double)LStackX_8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(double *)((longlong)param_1 + 0x20) = dVar1 + __real_4170000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
  return;
}

// Destruct<FLiveLinkFrameData> @ 14cfaa090

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkFrameData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FLiveLinkFrameData> @ 14cfaa0f0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkFrameData>(void *param_1,void *param_2,int param_3)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int iVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    pTVar1 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10);
    if (pTVar1 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x10)) {
      iVar3 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x10))->ArrayNum;
      piVar2 = &((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x10))->ArrayMax;
      _Src = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x10))->AllocatorInstance).Data;
      ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      ((longlong)param_1 + 0x10))->ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
        }
      }
    }
    iVar3 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x20))->ArrayNum;
    iVar4 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x20))->ArrayMax;
    (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20)
     )->AllocatorInstance).Data =
         (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x20))->AllocatorInstance).Data;
    ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))
    ->ArrayNum = iVar3;
    ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))
    ->ArrayMax = iVar4;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)((longlong)param_1 + 0x30),
              (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)((longlong)param_2 + 0x30));
    iVar3 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x80))->ArrayNum;
    iVar4 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x80))->ArrayMax;
    (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80)
     )->AllocatorInstance).Data =
         (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x80))->AllocatorInstance).Data;
    ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))
    ->ArrayNum = iVar3;
    ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))
    ->ArrayMax = iVar4;
    param_1 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x90);
    param_2 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x90);
  }
  return true;
}

// Construct<FLiveLinkBasicBlueprintData> @ 14cfaa290

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkBasicBlueprintData>(void *param_1)

{
  memset((void *)((longlong)param_1 + 0x18),0,0xa0);
  *(undefined ***)param_1 = &___7FLiveLinkBasicBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x18));
  return;
}

// ConstructForTests<FLiveLinkBasicBlueprintData> @ 14cfaa2e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkBasicBlueprintData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLiveLinkBasicBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x18));
  return;
}

// Destruct<FLiveLinkBasicBlueprintData> @ 14cfaa310

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkBasicBlueprintData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FLiveLinkBasicBlueprintData> @ 14cfaa370

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkBasicBlueprintData>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 8),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    FLiveLinkBaseFrameData::operator=
              ((FLiveLinkBaseFrameData *)((longlong)pvVar1 + 0x18),
               (FLiveLinkBaseFrameData *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0xb8);
  }
  return true;
}

// Construct<FLiveLinkSourceBufferManagementSettings> @ 14cfaa3f0

void __cdecl
UE::CoreUObject::Private::Construct<FLiveLinkSourceBufferManagementSettings>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x1e;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 10;
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// ConstructForTests<FLiveLinkSourceBufferManagementSettings> @ 14cfaa460

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkSourceBufferManagementSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x54) = 10;
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Destruct<FLiveLinkSourceBufferManagementSettings> @ 14cfaa4c0

void __cdecl
UE::CoreUObject::Private::Destruct<FLiveLinkSourceBufferManagementSettings>(void *param_1)

{
  return;
}

// Copy<FLiveLinkSourceBufferManagementSettings> @ 14cfaa4d0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSourceBufferManagementSettings>
          (void *param_1,void *param_2,int param_3)

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
  longlong lVar13;
  
  if (param_3 != 0) {
    lVar13 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar13 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar13 + (longlong)param_1);
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
      param_1 = (void *)((longlong)param_1 + 0x60);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkCurveElement> @ 14cfaa690

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkCurveElement>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLiveLinkCurveElement> @ 14cfaa6a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkCurveElement>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLiveLinkCurveElement> @ 14cfaa6b0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkCurveElement>(void *param_1)

{
  return;
}

// Copy<FLiveLinkCurveElement> @ 14cfaa6c0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkCurveElement>(void *param_1,void *param_2,int param_3)

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

// Construct<FLiveLinkFloatAnimationFrameData> @ 14cfaa740

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkFloatAnimationFrameData>(void *param_1)

{
  memset(param_1,0,0xb0);
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// ConstructForTests<FLiveLinkFloatAnimationFrameData> @ 14cfaa780

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkFloatAnimationFrameData>(void *param_1)

{
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// Destruct<FLiveLinkFloatAnimationFrameData> @ 14cfaa7b0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkFloatAnimationFrameData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkFloatAnimationFrameData> @ 14cfaa810

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkFloatAnimationFrameData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FLiveLinkBaseFrameData *pFVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  FLiveLinkBaseFrameData *this;
  FLiveLinkBaseFrameData *pFVar5;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar2 = (FLiveLinkBaseFrameData *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FLiveLinkBaseFrameData::operator=(this,pFVar2);
      pFVar5 = this + 1;
      if (pFVar5 != pFVar2 + 1) {
        iVar3 = *(int *)&pFVar2[1].WorldTime.Offset;
        piVar1 = (int *)((longlong)&this[1].WorldTime.Offset + 4);
        _Src = (void *)pFVar2[1].WorldTime.Time;
        iVar4 = *piVar1;
        *(int *)&this[1].WorldTime.Offset = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,iVar3,iVar4,(ForAnyElementType *)pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy((void *)(pFVar5->WorldTime).Time,_Src,(longlong)iVar3 * 0x30);
          }
        }
      }
      param_3 = param_3 + -1;
      this = (FLiveLinkBaseFrameData *)&this[1].MetaData;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkTimeCode> @ 14cfaa900

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkTimeCode>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 60000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// ConstructForTests<FLiveLinkTimeCode> @ 14cfaa920

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkTimeCode>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 60000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Destruct<FLiveLinkTimeCode> @ 14cfaa940

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTimeCode>(void *param_1)

{
  return;
}

// Copy<FLiveLinkTimeCode> @ 14cfaa950

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkTimeCode>(void *param_1,void *param_2,int param_3)

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

// Construct<FLiveLinkAnimationFrameData> @ 14cfaaa00

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkAnimationFrameData>(void *param_1)

{
  memset(param_1,0,0xb0);
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// ConstructForTests<FLiveLinkAnimationFrameData> @ 14cfaaa40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkAnimationFrameData>(void *param_1)

{
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// Destruct<FLiveLinkAnimationFrameData> @ 14cfaaa70

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkAnimationFrameData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkAnimationFrameData> @ 14cfaac30

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkAnimationFrameData>(void *param_1,void *param_2,int param_3)

{
  FLiveLinkBaseFrameData *pFVar1;
  FLiveLinkBaseFrameData *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FLiveLinkBaseFrameData *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FLiveLinkBaseFrameData::operator=(this,pFVar1);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = (FLiveLinkBaseFrameData *)&this[1].MetaData;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkCurveConversionSettings> @ 14cfaacc0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkCurveConversionSettings>(void *param_1)

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

// ConstructForTests<FLiveLinkCurveConversionSettings> @ 14cfaad00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkCurveConversionSettings>(void *param_1)

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

// Destruct<FLiveLinkCurveConversionSettings> @ 14cfaad30

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkCurveConversionSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FLiveLinkCurveConversionSettings> @ 14cfaad70

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkCurveConversionSettings>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkTimeCode_Base_DEPRECATED> @ 14cfaaf00

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkTimeCode_Base_DEPRECATED>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 60000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// ConstructForTests<FLiveLinkTimeCode_Base_DEPRECATED> @ 14cfaaf20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkTimeCode_Base_DEPRECATED>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 60000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Destruct<FLiveLinkTimeCode_Base_DEPRECATED> @ 14cfaaf40

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTimeCode_Base_DEPRECATED>(void *param_1)

{
  return;
}

// Copy<FLiveLinkTimeCode_Base_DEPRECATED> @ 14cfaaf50

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkTimeCode_Base_DEPRECATED>
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

// Construct<FLiveLinkSkeletonStaticData> @ 14cfab2e0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSkeletonStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FLiveLinkSkeletonStaticData> @ 14cfab300

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSkeletonStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FLiveLinkSkeletonStaticData> @ 14cfab320

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSkeletonStaticData>(void *param_1)

{
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

// Copy<FLiveLinkSkeletonStaticData> @ 14cfab370

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSkeletonStaticData>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FLiveLinkFrameRate> @ 14cfab4f0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkFrameRate>(void *param_1)

{
  *(undefined4 *)param_1 = 60000;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FLiveLinkFrameRate> @ 14cfab510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkFrameRate>(void *param_1)

{
  *(undefined4 *)param_1 = 60000;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FLiveLinkFrameRate> @ 14cfab530

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkFrameRate>(void *param_1)

{
  return;
}

// Copy<FLiveLinkFrameRate> @ 14cfab540

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkFrameRate>(void *param_1,void *param_2,int param_3)

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

// Construct<FLiveLinkTransformBlueprintData> @ 14cfab600

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkTransformBlueprintData>(void *param_1)

{
  memset(param_1,0,0x120);
  FLiveLinkTransformBlueprintData::FLiveLinkTransformBlueprintData(param_1);
  return;
}

// ConstructForTests<FLiveLinkTransformBlueprintData> @ 14cfab630

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransformBlueprintData>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  *(undefined ***)param_1 = &___7FLiveLinkTransformBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x20));
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0xc0) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 200) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xd0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xd8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0xe0) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0xe8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xf0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xf8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x100) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x108) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x110) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x118) = (double)fVar3;
  return;
}

// GetStructTypeHash<FLiveLinkFrameRate> @ 14cfab640

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FLiveLinkFrameRate>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((longlong)param_1 + 4);
  uVar3 = *(int *)param_1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// Destruct<FLiveLinkTransformBlueprintData> @ 14cfab6e0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTransformBlueprintData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FLiveLinkTransformBlueprintData> @ 14cfab780

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkTransformBlueprintData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 8),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar2 + 0x18) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x19) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x19 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x1a) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x1a - (longlong)param_1));
    FLiveLinkBaseFrameData::operator=
              ((FLiveLinkBaseFrameData *)((longlong)pvVar2 + 0x20),
               (FLiveLinkBaseFrameData *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (200 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xc0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 200) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xd8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xd0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xd8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xe8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xe0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xe0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xe8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xf8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xf0) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0xf0 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0xf8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x108 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x100) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x100 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x108) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x118 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x110) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x110 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x118) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x120);
  }
  return true;
}

// Construct<FLiveLinkLocatorBlueprintData> @ 14cfab880

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkLocatorBlueprintData>(void *param_1)

{
  memset((void *)((longlong)param_1 + 0x29),0,0xb7);
  *(undefined ***)param_1 = &___7FLiveLinkLocatorBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x30));
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FLiveLinkLocatorBlueprintData> @ 14cfab8f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkLocatorBlueprintData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLiveLinkLocatorBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x30));
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FLiveLinkLocatorBlueprintData> @ 14cfab990

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkLocatorBlueprintData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FLiveLinkLocatorBlueprintData> @ 14cfab9a0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkLocatorBlueprintData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8);
    pvVar1 = param_1;
    do {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)
                      ((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (this + 1,(TArray<FName,TSizedDefaultAllocator<32>_> *)
                          ((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
      *(undefined1 *)&this[2].AllocatorInstance.Data =
           *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
      FLiveLinkLocatorFrameData::operator=
                ((FLiveLinkLocatorFrameData *)((longlong)pvVar1 + 0x30),
                 (FLiveLinkLocatorFrameData *)
                 ((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1)));
      this = this + 0xe;
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0xe0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkSourceHandle> @ 14cfabaa0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSourceHandle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLiveLinkSourceHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FLiveLinkSourceHandle> @ 14cfabb00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSourceHandle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLiveLinkSourceHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FLiveLinkSourceHandle> @ 14cfabb60

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSourceHandle>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkSourceHandle> @ 14cfabbb0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSourceHandle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    lVar2 = *(longlong *)((longlong)param_2 + (0x10 - (longlong)param_1) + (longlong)pvVar4);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x10);
    *(undefined8 *)((longlong)pvVar4 + 8) = uVar1;
    *(longlong *)((longlong)pvVar4 + 0x10) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0x18);
  }
  return true;
}

// Construct<FLiveLinkTransformFrameData> @ 14cfabd30

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkTransformFrameData>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  memset(param_1,0,0x100);
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0xa0) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xb0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0xc0) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 200) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xd0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xd8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xe0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xe8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xf0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xf8) = (double)fVar3;
  return;
}

// ConstructForTests<FLiveLinkTransformFrameData> @ 14cfabdc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransformFrameData>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0xa0) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xb0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0xc0) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 200) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xd0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xd8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xe0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xe8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xf0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xf8) = (double)fVar3;
  return;
}

// Destruct<FLiveLinkTransformFrameData> @ 14cfabef0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTransformFrameData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkTransformFrameData> @ 14cfabf30

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkTransformFrameData>(void *param_1,void *param_2,int param_3)

{
  FLiveLinkBaseFrameData *pFVar1;
  double dVar2;
  undefined8 uVar3;
  FLiveLinkBaseFrameData *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FLiveLinkBaseFrameData *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FLiveLinkBaseFrameData::operator=(this,pFVar1);
      dVar2 = pFVar1[1].WorldTime.Offset;
      this[1].WorldTime.Time = pFVar1[1].WorldTime.Time;
      this[1].WorldTime.Offset = dVar2;
      uVar3 = *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x8;
      *(undefined8 *)&this[1].MetaData.StringMetaData =
           *(undefined8 *)&pFVar1[1].MetaData.StringMetaData;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x18;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x10 =
           *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x10;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x18 = uVar3;
      uVar3 = *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x28;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x20 =
           *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x20;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x28 = uVar3;
      uVar3 = *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x38;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x30 =
           *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x30;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x38 = uVar3;
      uVar3 = *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x48;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x40 =
           *(undefined8 *)&pFVar1[1].MetaData.StringMetaData.field_0x40;
      *(undefined8 *)&this[1].MetaData.StringMetaData.field_0x48 = uVar3;
      param_3 = param_3 + -1;
      this = (FLiveLinkBaseFrameData *)&this[1].MetaData.SceneTime;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkBaseBlueprintData> @ 14cfac130

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkBaseBlueprintData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLiveLinkBaseBlueprintData__6B_;
  return;
}

// ConstructForTests<FLiveLinkBaseBlueprintData> @ 14cfac150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkBaseBlueprintData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLiveLinkBaseBlueprintData__6B_;
  return;
}

// Destruct<FLiveLinkBaseBlueprintData> @ 14cfac170

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkBaseBlueprintData>(void *param_1)

{
  return;
}

// Copy<FLiveLinkBaseBlueprintData> @ 14cfac1c0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkBaseBlueprintData>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FLiveLinkTransformStaticData> @ 14cfac1d0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkTransformStaticData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}

// ConstructForTests<FLiveLinkTransformStaticData> @ 14cfac1f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransformStaticData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x101;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}

// Destruct<FLiveLinkTransformStaticData> @ 14cfac210

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTransformStaticData>(void *param_1)

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

// Copy<FLiveLinkTransformStaticData> @ 14cfac230

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkTransformStaticData>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      *(undefined1 *)&this[1].AllocatorInstance.Data =
           *(undefined1 *)&pTVar1[1].AllocatorInstance.Data;
      *(undefined1 *)((longlong)&this[1].AllocatorInstance.Data + 1) =
           *(undefined1 *)((longlong)&pTVar1[1].AllocatorInstance.Data + 1);
      *(undefined1 *)((longlong)&this[1].AllocatorInstance.Data + 2) =
           *(undefined1 *)((longlong)&pTVar1[1].AllocatorInstance.Data + 2);
      param_3 = param_3 + -1;
      this = (TArray<FName,TSizedDefaultAllocator<32>_> *)&this[1].ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkLocatorFrameData> @ 14cfac2c0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkLocatorFrameData>(void *param_1)

{
  memset(param_1,0,0xb0);
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// ConstructForTests<FLiveLinkLocatorFrameData> @ 14cfac300

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkLocatorFrameData>(void *param_1)

{
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// Destruct<FLiveLinkLocatorFrameData> @ 14cfac330

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkLocatorFrameData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkLocatorFrameData> @ 14cfac390

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkLocatorFrameData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FLiveLinkBaseFrameData *pFVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  FLiveLinkBaseFrameData *this;
  FLiveLinkBaseFrameData *pFVar5;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar2 = (FLiveLinkBaseFrameData *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FLiveLinkBaseFrameData::operator=(this,pFVar2);
      pFVar5 = this + 1;
      if (pFVar5 != pFVar2 + 1) {
        iVar3 = *(int *)&pFVar2[1].WorldTime.Offset;
        piVar1 = (int *)((longlong)&this[1].WorldTime.Offset + 4);
        _Src = (void *)pFVar2[1].WorldTime.Time;
        iVar4 = *piVar1;
        *(int *)&this[1].WorldTime.Offset = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,(ForAnyElementType *)pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy((void *)(pFVar5->WorldTime).Time,_Src,(longlong)iVar3 * 0x18);
          }
        }
      }
      param_3 = param_3 + -1;
      this = (FLiveLinkBaseFrameData *)&this[1].MetaData;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkBaseStaticData> @ 14cfac5c0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkBaseStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLiveLinkBaseStaticData> @ 14cfac5d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkBaseStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLiveLinkBaseStaticData> @ 14cfac5e0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkBaseStaticData>(void *param_1)

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

// Copy<FLiveLinkBaseStaticData> @ 14cfac640

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkBaseStaticData>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkSubjectRepresentation> @ 14cfac690

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSubjectRepresentation>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLiveLinkSubjectRepresentation> @ 14cfac6e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectRepresentation>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLiveLinkSubjectRepresentation> @ 14cfac6f0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSubjectRepresentation>(void *param_1)

{
  return;
}

// Copy<FLiveLinkSubjectRepresentation> @ 14cfac700

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSubjectRepresentation>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkLocatorStaticData> @ 14cfac790

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkLocatorStaticData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FLiveLinkLocatorStaticData> @ 14cfac7c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkLocatorStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FLiveLinkLocatorStaticData> @ 14cfac7e0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkLocatorStaticData>(void *param_1)

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

// Copy<FLiveLinkLocatorStaticData> @ 14cfac820

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkLocatorStaticData>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20);
    param_2 = &((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20))->ArrayNum;
    *(undefined1 *)
     &(((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->AllocatorInstance)
      .Data = *(undefined1 *)&(pTVar1->AllocatorInstance).Data;
    param_1 = &((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->ArrayNum;
  }
  return true;
}

// Construct<FLiveLinkBaseFrameData> @ 14cfacaf0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkBaseFrameData>(void *param_1)

{
  memset(param_1,0,0xa0);
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  return;
}

// ConstructForTests<FLiveLinkBaseFrameData> @ 14cfacb20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkBaseFrameData>(void *param_1)

{
  double dVar1;
  LARGE_INTEGER LStackX_8;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  QueryPerformanceCounter(&LStackX_8);
  dVar1 = (double)LStackX_8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(double *)param_1 = dVar1 + __real_4170000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x94) = 1;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0xffffffff;
  return;
}

// Destruct<FLiveLinkBaseFrameData> @ 14cfacb30

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkBaseFrameData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkBaseFrameData> @ 14cfacc30

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkBaseFrameData>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    pvVar6 = param_2;
    puVar7 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar7 + ((longlong)param_2 - (longlong)param_1));
      uVar5 = puVar3[1];
      *puVar7 = *puVar3;
      puVar7[1] = uVar5;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(puVar7 + 2),
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)((longlong)pvVar6 + 0x10));
      uVar5 = *(undefined8 *)((longlong)pvVar6 + 0x68);
      pFVar1 = (ForAnyElementType *)(puVar7 + 0xe);
      puVar7[0xc] = *(undefined8 *)((longlong)pvVar6 + 0x60);
      puVar7[0xd] = uVar5;
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0x70)) {
        iVar4 = *(int *)((longlong)pvVar6 + 0x78);
        piVar2 = (int *)((longlong)puVar7 + 0x7c);
        _Src = ((ForAnyElementType *)((longlong)pvVar6 + 0x70))->Data;
        *(int *)(puVar7 + 0xf) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar4 << 2);
          }
        }
      }
      uVar5 = *(undefined8 *)((longlong)pvVar6 + 0x88);
      puVar7[0x10] = *(undefined8 *)((longlong)pvVar6 + 0x80);
      puVar7[0x11] = uVar5;
      puVar7[0x12] = *(undefined8 *)((longlong)pvVar6 + 0x90);
      *(undefined4 *)(puVar7 + 0x13) = *(undefined4 *)((longlong)pvVar6 + 0x98);
      param_3 = param_3 + -1;
      pvVar6 = (void *)((longlong)pvVar6 + 0xa0);
      puVar7 = puVar7 + 0x14;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkRefSkeleton> @ 14cfacf90

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkRefSkeleton>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FLiveLinkRefSkeleton> @ 14cfacfb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkRefSkeleton>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FLiveLinkRefSkeleton> @ 14cfad050

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkRefSkeleton>(void *param_1)

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

// Copy<FLiveLinkRefSkeleton> @ 14cfad0d0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkRefSkeleton>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkGamepadInputDeviceBlueprintData> @ 14cfad150

void __cdecl
UE::CoreUObject::Private::Construct<FLiveLinkGamepadInputDeviceBlueprintData>(void *param_1)

{
  memset((void *)((longlong)param_1 + 0x18),0,0x120);
  *(undefined ***)param_1 = &___7FLiveLinkGamepadInputDeviceBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FLiveLinkGamepadInputDeviceFrameData::FLiveLinkGamepadInputDeviceFrameData
            ((FLiveLinkGamepadInputDeviceFrameData *)((longlong)param_1 + 0x18));
  return;
}

// ConstructForTests<FLiveLinkGamepadInputDeviceBlueprintData> @ 14cfad1a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkGamepadInputDeviceBlueprintData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLiveLinkGamepadInputDeviceBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FLiveLinkGamepadInputDeviceFrameData::FLiveLinkGamepadInputDeviceFrameData
            ((FLiveLinkGamepadInputDeviceFrameData *)((longlong)param_1 + 0x18));
  return;
}

// Destruct<FLiveLinkGamepadInputDeviceBlueprintData> @ 14cfad1d0

void __cdecl
UE::CoreUObject::Private::Destruct<FLiveLinkGamepadInputDeviceBlueprintData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FLiveLinkGamepadInputDeviceBlueprintData> @ 14cfad2b0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkGamepadInputDeviceBlueprintData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 8),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    FLiveLinkGamepadInputDeviceFrameData::operator=
              ((FLiveLinkGamepadInputDeviceFrameData *)((longlong)pvVar1 + 0x18),
               (FLiveLinkGamepadInputDeviceFrameData *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x138);
  }
  return true;
}

// Construct<FLiveLinkMetaData> @ 14cfad780

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkMetaData>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 1;
  return;
}

// ConstructForTests<FLiveLinkMetaData> @ 14cfad7d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkMetaData>(void *param_1)

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
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 1;
  return;
}

// Destruct<FLiveLinkMetaData> @ 14cfad820

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkMetaData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FLiveLinkMetaData> @ 14cfad860

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkMetaData>(void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined8 uVar2;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=(this,pTVar1);
      uVar2 = *(undefined8 *)&pTVar1[1].Elements.field_0x8;
      *(undefined8 *)&this[1].Elements = *(undefined8 *)&pTVar1[1].Elements;
      *(undefined8 *)&this[1].Elements.field_0x8 = uVar2;
      param_3 = param_3 + -1;
      this = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this[1].Elements.field_0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkSubjectPreset> @ 14cfad9f0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSubjectPreset>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FLiveLinkSubjectPreset> @ 14cfada20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectPreset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FLiveLinkSubjectPreset> @ 14cfadb10

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSubjectPreset>(void *param_1)

{
  return;
}

// Copy<FLiveLinkSubjectPreset> @ 14cfadb20

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSubjectPreset>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_1;
  puVar4 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    puVar3[2] = puVar4[2];
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[3] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[4] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[5] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)(puVar3 + 6) =
         *(undefined1 *)((longlong)puVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    puVar3 = puVar3 + 7;
    puVar4 = puVar4 + 7;
  }
  return true;
}

// Construct<FLiveLinkGamepadInputDeviceFrameData> @ 14cfadc10

void __cdecl
UE::CoreUObject::Private::Construct<FLiveLinkGamepadInputDeviceFrameData>(void *param_1)

{
  memset(param_1,0,0x120);
  FLiveLinkGamepadInputDeviceFrameData::FLiveLinkGamepadInputDeviceFrameData(param_1);
  return;
}

// ConstructForTests<FLiveLinkGamepadInputDeviceFrameData> @ 14cfadc40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkGamepadInputDeviceFrameData>(void *param_1)

{
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
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
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  return;
}

// Destruct<FLiveLinkGamepadInputDeviceFrameData> @ 14cfadd00

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkGamepadInputDeviceFrameData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkGamepadInputDeviceFrameData> @ 14cfaddc0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkGamepadInputDeviceFrameData>
          (void *param_1,void *param_2,int param_3)

{
  FLiveLinkBaseFrameData *pFVar1;
  FLiveLinkBaseFrameData *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FLiveLinkBaseFrameData *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FLiveLinkBaseFrameData::operator=(this,pFVar1);
      *(undefined4 *)&this[1].WorldTime.Time = *(undefined4 *)&pFVar1[1].WorldTime.Time;
      *(undefined4 *)((longlong)&this[1].WorldTime.Time + 4) =
           *(undefined4 *)((longlong)&pFVar1[1].WorldTime.Time + 4);
      *(undefined4 *)&this[1].WorldTime.Offset = *(undefined4 *)&pFVar1[1].WorldTime.Offset;
      *(undefined4 *)((longlong)&this[1].WorldTime.Offset + 4) =
           *(undefined4 *)((longlong)&pFVar1[1].WorldTime.Offset + 4);
      *(undefined4 *)&this[1].MetaData.StringMetaData =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x4 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x4;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x8 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x8;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0xc =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0xc;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x10 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x10;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x14 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x14;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x18 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x18;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x1c =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x1c;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x20 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x20;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x24 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x24;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x28 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x28;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x2c =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x2c;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x30 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x30;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x34 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x34;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x38 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x38;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x3c =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x3c;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x40 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x40;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x44 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x44;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x48 =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x48;
      *(undefined4 *)&this[1].MetaData.StringMetaData.field_0x4c =
           *(undefined4 *)&pFVar1[1].MetaData.StringMetaData.field_0x4c;
      this[1].MetaData.SceneTime.Time.FrameNumber.Value =
           pFVar1[1].MetaData.SceneTime.Time.FrameNumber.Value;
      this[1].MetaData.SceneTime.Time.SubFrame = pFVar1[1].MetaData.SceneTime.Time.SubFrame;
      this[1].MetaData.SceneTime.Rate.Numerator = pFVar1[1].MetaData.SceneTime.Rate.Numerator;
      this[1].MetaData.SceneTime.Rate.Denominator = pFVar1[1].MetaData.SceneTime.Rate.Denominator;
      *(undefined4 *)&this[1].PropertyValues.AllocatorInstance.Data =
           *(undefined4 *)&pFVar1[1].PropertyValues.AllocatorInstance.Data;
      *(undefined4 *)((longlong)&this[1].PropertyValues.AllocatorInstance.Data + 4) =
           *(undefined4 *)((longlong)&pFVar1[1].PropertyValues.AllocatorInstance.Data + 4);
      this[1].PropertyValues.ArrayNum = pFVar1[1].PropertyValues.ArrayNum;
      this[1].PropertyValues.ArrayMax = pFVar1[1].PropertyValues.ArrayMax;
      param_3 = param_3 + -1;
      this = (FLiveLinkBaseFrameData *)&this[1].ArrivalTime;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkTime> @ 14cfae500

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkTime>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x18;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// ConstructForTests<FLiveLinkTime> @ 14cfae520

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkTime>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x18;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Destruct<FLiveLinkTime> @ 14cfae540

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTime>(void *param_1)

{
  return;
}

// Copy<FLiveLinkTime> @ 14cfae5d0

bool __cdecl UE::CoreUObject::Private::Copy<FLiveLinkTime>(void *param_1,void *param_2,int param_3)

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

// Construct<FLiveLinkSourcePreset> @ 14cfae700

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSourcePreset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x18));
  return;
}

// ConstructForTests<FLiveLinkSourcePreset> @ 14cfae730

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSourcePreset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x18));
  return;
}

// Destruct<FLiveLinkSourcePreset> @ 14cfae750

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSourcePreset>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfae75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}

// Copy<FLiveLinkSourcePreset> @ 14cfae7f0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSourcePreset>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar4 = ((undefined8 *)(lVar5 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar5 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x10);
      plVar2 = *(longlong **)((longlong)param_1 + lVar5 + 0x18);
      plVar3 = *(longlong **)((longlong)param_1 + 0x18);
      if (plVar3 != plVar2) {
        *(longlong **)((longlong)param_1 + 0x18) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,local_res18);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x20);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkGamepadInputDeviceStaticData> @ 14cfae8c0

void __cdecl
UE::CoreUObject::Private::Construct<FLiveLinkGamepadInputDeviceStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLiveLinkGamepadInputDeviceStaticData> @ 14cfae8d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkGamepadInputDeviceStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLiveLinkGamepadInputDeviceStaticData> @ 14cfae8e0

void __cdecl
UE::CoreUObject::Private::Destruct<FLiveLinkGamepadInputDeviceStaticData>(void *param_1)

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

// Copy<FLiveLinkGamepadInputDeviceStaticData> @ 14cfae900

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkGamepadInputDeviceStaticData>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkWorldTime> @ 14cfaebe0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkWorldTime>(void *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  QueryPerformanceCounter(local_res8);
  *(double *)param_1 =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// ConstructForTests<FLiveLinkWorldTime> @ 14cfaec30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkWorldTime>(void *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  QueryPerformanceCounter(local_res8);
  *(double *)param_1 =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// Destruct<FLiveLinkWorldTime> @ 14cfaec80

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkWorldTime>(void *param_1)

{
  return;
}

// Copy<FLiveLinkWorldTime> @ 14cfaec90

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkWorldTime>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_2;
    do {
      uVar2 = *puVar4;
      uVar3 = puVar4[1];
      puVar4 = puVar4 + 2;
      puVar1 = (undefined8 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkLightBlueprintData> @ 14cfaee00

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkLightBlueprintData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  memset((void *)((longlong)param_1 + 0x29),0,0x137);
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  *(undefined ***)param_1 = &___7FLiveLinkLightBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  FLiveLinkLightFrameData::FLiveLinkLightFrameData
            ((FLiveLinkLightFrameData *)((longlong)param_1 + 0x30));
  return;
}

// ConstructForTests<FLiveLinkLightBlueprintData> @ 14cfaeea0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkLightBlueprintData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  *(undefined ***)param_1 = &___7FLiveLinkLightBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  FLiveLinkLightFrameData::FLiveLinkLightFrameData
            ((FLiveLinkLightFrameData *)((longlong)param_1 + 0x30));
  return;
}

// Destruct<FLiveLinkLightBlueprintData> @ 14cfaef60

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkLightBlueprintData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FLiveLinkLightBlueprintData> @ 14cfaefd0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkLightBlueprintData>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FLiveLinkLightStaticData::operator=
              ((FLiveLinkLightStaticData *)((longlong)pvVar1 + 8),
               (FLiveLinkLightStaticData *)
               ((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    FLiveLinkLightFrameData::operator=
              ((FLiveLinkLightFrameData *)((longlong)pvVar1 + 0x30),
               (FLiveLinkLightFrameData *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x160);
  }
  return true;
}

// Construct<FSubjectFrameHandle> @ 14cfaf050

void __cdecl UE::CoreUObject::Private::Construct<FSubjectFrameHandle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSubjectFrameHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSubjectFrameHandle> @ 14cfaf070

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSubjectFrameHandle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSubjectFrameHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSubjectFrameHandle> @ 14cfaf110

void __cdecl UE::CoreUObject::Private::Destruct<FSubjectFrameHandle>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FSubjectFrameHandle> @ 14cfaf160

bool __cdecl
UE::CoreUObject::Private::Copy<FSubjectFrameHandle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    lVar2 = *(longlong *)((longlong)param_2 + (0x10 - (longlong)param_1) + (longlong)pvVar4);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x10);
    *(undefined8 *)((longlong)pvVar4 + 8) = uVar1;
    *(longlong *)((longlong)pvVar4 + 0x10) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0x18);
  }
  return true;
}

// Construct<FLiveLinkSubjectKey> @ 14cfaf500

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSubjectKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FLiveLinkSubjectKey> @ 14cfaf560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FLiveLinkSubjectKey> @ 14cfaf580

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSubjectKey>(void *param_1)

{
  return;
}

// Copy<FLiveLinkSubjectKey> @ 14cfaf5d0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSubjectKey>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FLiveLinkSubjectKey> @ 14cfaf750

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FLiveLinkSubjectKey>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong64 uVar3;
  
  uVar3 = CityHash64(param_1,0x10);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x10);
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return (uVar2 + (int)((ulonglong)uVar1 >> 0x20)) * 0xd + (int)uVar3;
}

// Construct<FLiveLinkLightFrameData> @ 14cfaf7e0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkLightFrameData>(void *param_1)

{
  memset(param_1,0,0x130);
  FLiveLinkLightFrameData::FLiveLinkLightFrameData(param_1);
  return;
}

// ConstructForTests<FLiveLinkLightFrameData> @ 14cfaf810

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkLightFrameData>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0xa0) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xb0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0xc0) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 200) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xd0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xd8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xe0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xe8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xf0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xf8) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x45cb2000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x40490fdb;
  ((FColor_u_0 *)((longlong)param_1 + 0x108))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0x42300000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x447a0000;
  return;
}

// Destruct<FLiveLinkLightFrameData> @ 14cfaf820

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkLightFrameData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkLightFrameData> @ 14cfaf860

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkLightFrameData>(void *param_1,void *param_2,int param_3)

{
  double dVar1;
  undefined8 uVar2;
  FLiveLinkBaseFrameData *pFVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FLiveLinkBaseFrameData::operator=(param_1,param_2);
    dVar1 = (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->WorldTime).Offset;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->WorldTime).Time =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->WorldTime).Time;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->WorldTime).Offset = dVar1;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x8;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x8 =
         uVar2;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x18;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x10 =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
           field_0x10;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x18 =
         uVar2;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x28;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x20 =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
           field_0x20;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x28 =
         uVar2;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x38;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x30 =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
           field_0x30;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x38 =
         uVar2;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x48;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x40 =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
           field_0x40;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x48 =
         uVar2;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).SceneTime.Time.FrameNumber.
    Value = (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).SceneTime.Time.
            FrameNumber.Value;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).SceneTime.Time.SubFrame =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).SceneTime.Time.SubFrame;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).SceneTime.Rate.Numerator =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).SceneTime.Rate.Numerator
    ;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).SceneTime.Rate.Denominator =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).SceneTime.Rate.
         Denominator;
    *(undefined4 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->PropertyValues).AllocatorInstance.
      Data = *(undefined4 *)
              &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->PropertyValues).
               AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)
      &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->PropertyValues).AllocatorInstance.
       Data + 4) = *(undefined4 *)
                    ((longlong)
                     &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->PropertyValues).
                      AllocatorInstance.Data + 4);
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->PropertyValues).ArrayNum =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->PropertyValues).ArrayNum;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->PropertyValues).ArrayMax =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->PropertyValues).ArrayMax;
    pFVar3 = (FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0);
    param_2 = &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->ArrivalTime).SceneTime.Rate;
    *(undefined4 *)&(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->ArrivalTime).WorldTime
         = *(undefined4 *)&(pFVar3->ArrivalTime).WorldTime;
    param_1 = &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->ArrivalTime).SceneTime.Rate;
  }
  return true;
}

// Construct<FLiveLinkTransform> @ 14cfaf9a0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkTransform>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined ***)param_1 = &___7FLiveLinkTransform__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FLiveLinkTransform> @ 14cfaf9d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransform>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined ***)param_1 = &___7FLiveLinkTransform__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FLiveLinkTransform> @ 14cfafb00

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTransform>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkTransform> @ 14cfafbd0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkTransform>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x10 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x10);
    *(undefined8 *)((longlong)pvVar4 + 8) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x10) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x18) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar4 = (void *)((longlong)pvVar4 + 0x20);
  }
  return true;
}

// Construct<FLiveLinkSubjectName> @ 14cfaffd0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSubjectName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FLiveLinkSubjectName> @ 14cfaffe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FLiveLinkSubjectName> @ 14cfafff0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSubjectName>(void *param_1)

{
  return;
}

// Copy<FLiveLinkSubjectName> @ 14cfb0000

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSubjectName>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FLiveLinkSubjectName> @ 14cfb0070

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FLiveLinkSubjectName>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// Construct<FLiveLinkLightStaticData> @ 14cfb00a0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkLightStaticData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x101;
  return;
}

// ConstructForTests<FLiveLinkLightStaticData> @ 14cfb00c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkLightStaticData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x101;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FLiveLinkLightStaticData> @ 14cfb00e0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkLightStaticData>(void *param_1)

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

// Copy<FLiveLinkLightStaticData> @ 14cfb0100

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkLightStaticData>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      *(undefined1 *)&this[1].AllocatorInstance.Data =
           *(undefined1 *)&pTVar1[1].AllocatorInstance.Data;
      *(undefined1 *)((longlong)&this[1].AllocatorInstance.Data + 1) =
           *(undefined1 *)((longlong)&pTVar1[1].AllocatorInstance.Data + 1);
      *(undefined1 *)((longlong)&this[1].AllocatorInstance.Data + 2) =
           *(undefined1 *)((longlong)&pTVar1[1].AllocatorInstance.Data + 2);
      *(char *)&this[1].ArrayNum = (char)pTVar1[1].ArrayNum;
      *(undefined1 *)((longlong)&this[1].ArrayNum + 1) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayNum + 1);
      *(undefined1 *)((longlong)&this[1].ArrayNum + 2) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayNum + 2);
      *(undefined1 *)((longlong)&this[1].ArrayNum + 3) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayNum + 3);
      *(char *)&this[1].ArrayMax = (char)pTVar1[1].ArrayMax;
      *(undefined1 *)((longlong)&this[1].ArrayMax + 1) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayMax + 1);
      *(undefined1 *)((longlong)&this[1].ArrayMax + 2) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayMax + 2);
      *(undefined1 *)((longlong)&this[1].ArrayMax + 3) =
           *(undefined1 *)((longlong)&pTVar1[1].ArrayMax + 3);
      *(undefined1 *)&this[2].AllocatorInstance.Data =
           *(undefined1 *)&pTVar1[2].AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = (TArray<FName,TSizedDefaultAllocator<32>_> *)&this[2].ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCachedSubjectFrame> @ 14cfb01d0

void __cdecl UE::CoreUObject::Private::Construct<FCachedSubjectFrame>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCachedSubjectFrame__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x38));
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined1 *)((longlong)param_1 + 0x158) = 0;
  return;
}

// ConstructForTests<FCachedSubjectFrame> @ 14cfb01e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCachedSubjectFrame>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCachedSubjectFrame__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x38));
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined1 *)((longlong)param_1 + 0x158) = 0;
  return;
}

// Destruct<FCachedSubjectFrame> @ 14cfb01f0

void __cdecl UE::CoreUObject::Private::Destruct<FCachedSubjectFrame>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x108));
  DestructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            (*(TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> **)((longlong)param_1 + 0xf8),
             *(int *)((longlong)param_1 + 0x100));
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FCachedSubjectFrame> @ 14cfb0280

bool __cdecl
UE::CoreUObject::Private::Copy<FCachedSubjectFrame>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8);
    do {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 8));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (this + 1,(TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x18));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(this + 2),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
      FLiveLinkBaseFrameData::operator=
                ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x38),
                 (FLiveLinkBaseFrameData *)((longlong)param_2 + 0x38));
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0xd8),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0xd8));
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0xe8);
      if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0xe8)) {
        iVar3 = *(int *)((longlong)param_2 + 0xf0);
        piVar1 = (int *)((longlong)param_1 + 0xf4);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0xe8))->Data;
        *(int *)((longlong)param_1 + 0xf0) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,0x10,iVar3,*piVar1,pFVar2,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 0x70);
          }
        }
      }
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0xf8);
      if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0xf8)) {
        DestructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                  ((TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar2->Data,
                   *(int *)((longlong)param_1 + 0x100));
        iVar3 = *(int *)((longlong)param_2 + 0x100);
        piVar1 = (int *)((longlong)param_1 + 0x104);
        pTVar4 = (TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                 ((ForAnyElementType *)((longlong)param_2 + 0xf8))->Data;
        *(int *)((longlong)param_1 + 0x100) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
          ConstructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                    (pFVar2->Data,pTVar4,iVar3);
        }
      }
      TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
                ((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)((longlong)param_1 + 0x108),
                 (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)((longlong)param_2 + 0x108));
      *(undefined1 *)((longlong)param_1 + 0x158) = *(undefined1 *)((longlong)param_2 + 0x158);
      param_3 = param_3 + -1;
      param_2 = (void *)((longlong)param_2 + 0x160);
      this = this + 0x16;
      param_1 = (void *)((longlong)param_1 + 0x160);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkCameraBlueprintData> @ 14cfb0830

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkCameraBlueprintData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  memset((void *)((longlong)param_1 + 0x30),0,0x120);
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  *(undefined ***)param_1 = &___7FLiveLinkCameraBlueprintData__6B_;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x10000;
  FLiveLinkCameraFrameData::FLiveLinkCameraFrameData
            ((FLiveLinkCameraFrameData *)((longlong)param_1 + 0x30));
  return;
}

// ConstructForTests<FLiveLinkCameraBlueprintData> @ 14cfb08a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkCameraBlueprintData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  *(undefined ***)param_1 = &___7FLiveLinkCameraBlueprintData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x10000;
  FLiveLinkCameraFrameData::FLiveLinkCameraFrameData
            ((FLiveLinkCameraFrameData *)((longlong)param_1 + 0x30));
  return;
}

// Destruct<FLiveLinkCameraBlueprintData> @ 14cfb08f0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkCameraBlueprintData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Construct<FSubjectMetadata> @ 14cfb0960

void __cdecl UE::CoreUObject::Private::Construct<FSubjectMetadata>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined2 *)((longlong)param_1 + 0x65) = 0;
  *(undefined1 *)((longlong)param_1 + 0x67) = 0;
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
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// Copy<FLiveLinkCameraBlueprintData> @ 14cfb09c0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkCameraBlueprintData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FLiveLinkCameraStaticData::operator=
              ((FLiveLinkCameraStaticData *)((longlong)pvVar1 + 8),
               (FLiveLinkCameraStaticData *)
               ((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    FLiveLinkCameraFrameData::operator=
              ((FLiveLinkCameraFrameData *)((longlong)pvVar1 + 0x30),
               (FLiveLinkCameraFrameData *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x150);
  }
  return true;
}

// ConstructForTests<FSubjectMetadata> @ 14cfb0b00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSubjectMetadata>(void *param_1)

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
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// Destruct<FSubjectMetadata> @ 14cfb0b50

void __cdecl UE::CoreUObject::Private::Destruct<FSubjectMetadata>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Construct<FLiveLinkInterpolationSettings> @ 14cfb0b90

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkInterpolationSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  return;
}

// ConstructForTests<FLiveLinkInterpolationSettings> @ 14cfb0bb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkInterpolationSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  return;
}

// Destruct<FLiveLinkInterpolationSettings> @ 14cfb0bd0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkInterpolationSettings>(void *param_1)

{
  return;
}

// Copy<FSubjectMetadata> @ 14cfb0be0

bool __cdecl
UE::CoreUObject::Private::Copy<FSubjectMetadata>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=(param_1,param_2);
    uVar1 = *(undefined8 *)
             &(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x50))->Elements).field_0x8;
    *(undefined8 *)
     &((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        *)((longlong)param_1 + 0x50))->Elements =
         *(undefined8 *)
          &((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)((longlong)param_2 + 0x50))->Elements;
    *(undefined8 *)
     &(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
         *)((longlong)param_1 + 0x50))->Elements).field_0x8 = uVar1;
    *(undefined8 *)
     &(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
         *)((longlong)param_1 + 0x50))->Elements).field_0x10 =
         *(undefined8 *)
          &(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_2 + 0x50))->Elements).field_0x10;
    pTVar2 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_2 + 0x50);
    param_2 = &(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)((longlong)param_2 + 0x50))->Elements).field_0x20;
    *(undefined8 *)
     &(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
         *)((longlong)param_1 + 0x50))->Elements).field_0x18 =
         *(undefined8 *)&(pTVar2->Elements).field_0x18;
    param_1 = &(((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + 0x50))->Elements).field_0x20;
  }
  return true;
}

// Copy<FLiveLinkInterpolationSettings> @ 14cfb0c70

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkInterpolationSettings>
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

// Construct<FLiveLinkCameraFrameData> @ 14cfb1070

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkCameraFrameData>(void *param_1)

{
  memset(param_1,0,0x120);
  FLiveLinkCameraFrameData::FLiveLinkCameraFrameData(param_1);
  return;
}

// ConstructForTests<FLiveLinkCameraFrameData> @ 14cfb10a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkCameraFrameData>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(param_1);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0xa0) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xb0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0xc0) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 200) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xd0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xd8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xe0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xe8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xf0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xf8) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3fe38e3b;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x40333333;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0x47c35000;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xbf800000;
  return;
}

// Destruct<FLiveLinkCameraFrameData> @ 14cfb10b0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkCameraFrameData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLiveLinkCameraFrameData> @ 14cfb10f0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkCameraFrameData>(void *param_1,void *param_2,int param_3)

{
  double dVar1;
  undefined8 uVar2;
  FLiveLinkBaseFrameData *pFVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FLiveLinkBaseFrameData::operator=(param_1,param_2);
    dVar1 = (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->WorldTime).Offset;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->WorldTime).Time =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->WorldTime).Time;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->WorldTime).Offset = dVar1;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x8;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x8 =
         uVar2;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x18;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x10 =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
           field_0x10;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x18 =
         uVar2;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x28;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x20 =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
           field_0x20;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x28 =
         uVar2;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x38;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x30 =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
           field_0x30;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x38 =
         uVar2;
    uVar2 = *(undefined8 *)
             &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
              field_0x48;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x40 =
         *(undefined8 *)
          &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).StringMetaData.
           field_0x40;
    *(undefined8 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).StringMetaData.field_0x48 =
         uVar2;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).SceneTime.Time.FrameNumber.
    Value = (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).SceneTime.Time.
            FrameNumber.Value;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).SceneTime.Time.SubFrame =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).SceneTime.Time.SubFrame;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).SceneTime.Rate.Numerator =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).SceneTime.Rate.Numerator
    ;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->MetaData).SceneTime.Rate.Denominator =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->MetaData).SceneTime.Rate.
         Denominator;
    *(undefined4 *)
     &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->PropertyValues).AllocatorInstance.
      Data = *(undefined4 *)
              &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->PropertyValues).
               AllocatorInstance.Data;
    *(undefined1 *)
     ((longlong)
      &(((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->PropertyValues).AllocatorInstance.
       Data + 4) = *(undefined1 *)
                    ((longlong)
                     &(((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->PropertyValues).
                      AllocatorInstance.Data + 4);
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->PropertyValues).ArrayNum =
         (((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->PropertyValues).ArrayNum;
    pFVar3 = (FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0);
    param_2 = &((FLiveLinkBaseFrameData *)((longlong)param_2 + 0xa0))->ArrivalTime;
    (((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->PropertyValues).ArrayMax =
         (pFVar3->PropertyValues).ArrayMax;
    param_1 = &((FLiveLinkBaseFrameData *)((longlong)param_1 + 0xa0))->ArrivalTime;
  }
  return true;
}

// Construct<FLiveLinkTimeSynchronizationSettings> @ 14cfb1260

void __cdecl
UE::CoreUObject::Private::Construct<FLiveLinkTimeSynchronizationSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3c;
  *(undefined8 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FLiveLinkTimeSynchronizationSettings> @ 14cfb12c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkTimeSynchronizationSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3c;
  *(undefined8 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FLiveLinkTimeSynchronizationSettings> @ 14cfb12e0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTimeSynchronizationSettings>(void *param_1)

{
  return;
}

// Copy<FLiveLinkTimeSynchronizationSettings> @ 14cfb1330

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkTimeSynchronizationSettings>
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

// Construct<FLiveLinkCameraStaticData> @ 14cfb1730

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkCameraStaticData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x13) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10000;
  return;
}

// ConstructForTests<FLiveLinkCameraStaticData> @ 14cfb1770

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkCameraStaticData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x10) = 0x101;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x10000;
  return;
}

