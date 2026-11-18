// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 195

// Construct<FFarmReadyToHarvestTag> @ 1470614e0

void __cdecl UE::CoreUObject::Private::Construct<FFarmReadyToHarvestTag>(void *param_1)

{
  return;
}

// ConstructForTests<FFarmReadyToHarvestTag> @ 1470616b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFarmReadyToHarvestTag>(void *param_1)

{
  return;
}

// Construct<FTestChunkFragment_Int> @ 147062860

void __cdecl UE::CoreUObject::Private::Construct<FTestChunkFragment_Int>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestChunkFragment_Int> @ 147062f70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestChunkFragment_Int>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestChunkFragment_Int> @ 147062f80

void __cdecl UE::CoreUObject::Private::Destruct<FTestChunkFragment_Int>(void *param_1)

{
  return;
}

// Copy<FTestChunkFragment_Int> @ 147063720

bool __cdecl
UE::CoreUObject::Private::Copy<FTestChunkFragment_Int>(void *param_1,void *param_2,int param_3)

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

// Construct<FFragmentWithSharedPtr> @ 1470698b0

void __cdecl UE::CoreUObject::Private::Construct<FFragmentWithSharedPtr>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FFragmentWithSharedPtr> @ 147069f70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFragmentWithSharedPtr>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FFragmentWithSharedPtr> @ 147069f80

void __cdecl UE::CoreUObject::Private::Destruct<FFragmentWithSharedPtr>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FFragmentWithSharedPtr> @ 147069fe0

bool __cdecl
UE::CoreUObject::Private::Copy<FFragmentWithSharedPtr>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFarmJustBecameReadyToHarvestTag> @ 14706b860

void __cdecl UE::CoreUObject::Private::Construct<FFarmJustBecameReadyToHarvestTag>(void *param_1)

{
  return;
}

// ConstructForTests<FFarmJustBecameReadyToHarvestTag> @ 14706b910

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFarmJustBecameReadyToHarvestTag>(void *param_1)

{
  return;
}

// Construct<FTestFragment_Array> @ 147073970

void __cdecl UE::CoreUObject::Private::Construct<FTestFragment_Array>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTestFragment_Array> @ 147073a80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestFragment_Array>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTestFragment_Array> @ 147073bc0

void __cdecl UE::CoreUObject::Private::Destruct<FTestFragment_Array>(void *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(param_1);
  return;
}

// Construct<FFarmVisualDataRow> @ 147074310

void __cdecl UE::CoreUObject::Private::Construct<FFarmVisualDataRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FFarmVisualDataRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FFarmVisualDataRow> @ 147074330

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFarmVisualDataRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FFarmVisualDataRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Copy<FTestFragment_Array> @ 147074350

bool __cdecl
UE::CoreUObject::Private::Copy<FTestFragment_Array>(void *param_1,void *param_2,int param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<int,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FFarmVisualDataRow> @ 147074430

void __cdecl UE::CoreUObject::Private::Destruct<FFarmVisualDataRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FFarmVisualDataRow> @ 1470753a0

bool __cdecl
UE::CoreUObject::Private::Copy<FFarmVisualDataRow>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FTestFragment_Large> @ 14707a910

void __cdecl UE::CoreUObject::Private::Construct<FTestFragment_Large>(void *param_1)

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

// ConstructForTests<FTestFragment_Large> @ 14707a930

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestFragment_Large>(void *param_1)

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

// Destruct<FTestFragment_Large> @ 14707aa00

void __cdecl UE::CoreUObject::Private::Destruct<FTestFragment_Large>(void *param_1)

{
  return;
}

// Copy<FTestFragment_Large> @ 14707c060

bool __cdecl
UE::CoreUObject::Private::Copy<FTestFragment_Large>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTestFragment_Bool> @ 1470822d0

void __cdecl UE::CoreUObject::Private::Construct<FTestFragment_Bool>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestFragment_Bool> @ 1470822e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestFragment_Bool>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FTestFragment_Bool> @ 1470823a0

void __cdecl UE::CoreUObject::Private::Destruct<FTestFragment_Bool>(void *param_1)

{
  return;
}

// Copy<FTestFragment_Bool> @ 147083300

bool __cdecl
UE::CoreUObject::Private::Copy<FTestFragment_Bool>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTestFragment_Int> @ 147088af0

void __cdecl UE::CoreUObject::Private::Construct<FTestFragment_Int>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestFragment_Int> @ 147088e40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestFragment_Int>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestFragment_Int> @ 147088e50

void __cdecl UE::CoreUObject::Private::Destruct<FTestFragment_Int>(void *param_1)

{
  return;
}

// Copy<FTestFragment_Int> @ 147089660

bool __cdecl
UE::CoreUObject::Private::Copy<FTestFragment_Int>(void *param_1,void *param_2,int param_3)

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

// Construct<FTestFragment_Float> @ 14708e280

void __cdecl UE::CoreUObject::Private::Construct<FTestFragment_Float>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestFragment_Float> @ 14708e3f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestFragment_Float>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestFragment_Float> @ 14708e440

void __cdecl UE::CoreUObject::Private::Destruct<FTestFragment_Float>(void *param_1)

{
  return;
}

// Copy<FTestFragment_Float> @ 14708edc0

bool __cdecl
UE::CoreUObject::Private::Copy<FTestFragment_Float>(void *param_1,void *param_2,int param_3)

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

// Construct<FTestTag_D> @ 147090540

void __cdecl UE::CoreUObject::Private::Construct<FTestTag_D>(void *param_1)

{
  return;
}

// ConstructForTests<FTestTag_D> @ 147090550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestTag_D>(void *param_1)

{
  return;
}

// Construct<FTestTag_C> @ 147094b30

void __cdecl UE::CoreUObject::Private::Construct<FTestTag_C>(void *param_1)

{
  return;
}

// ConstructForTests<FTestTag_C> @ 147094b40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestTag_C>(void *param_1)

{
  return;
}

// Construct<FTestTag_B> @ 14709add0

void __cdecl UE::CoreUObject::Private::Construct<FTestTag_B>(void *param_1)

{
  return;
}

// ConstructForTests<FTestTag_B> @ 14709af40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestTag_B>(void *param_1)

{
  return;
}

// Construct<FTestTag_A> @ 1470a1ac0

void __cdecl UE::CoreUObject::Private::Construct<FTestTag_A>(void *param_1)

{
  return;
}

// ConstructForTests<FTestTag_A> @ 1470a1ad0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestTag_A>(void *param_1)

{
  return;
}

// Construct<FHarvestTimerFragment> @ 1470a6020

void __cdecl UE::CoreUObject::Private::Construct<FHarvestTimerFragment>(void *param_1)

{
  *(undefined4 *)param_1 = 0xf;
  return;
}

// ConstructForTests<FHarvestTimerFragment> @ 1470a60b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHarvestTimerFragment>(void *param_1)

{
  *(undefined4 *)param_1 = 0xf;
  return;
}

// Destruct<FHarvestTimerFragment> @ 1470a6740

void __cdecl UE::CoreUObject::Private::Destruct<FHarvestTimerFragment>(void *param_1)

{
  return;
}

// Construct<FTestFragment_Tag> @ 1470a67a0

void __cdecl UE::CoreUObject::Private::Construct<FTestFragment_Tag>(void *param_1)

{
  return;
}

// ConstructForTests<FTestFragment_Tag> @ 1470a67b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestFragment_Tag>(void *param_1)

{
  return;
}

// Copy<FHarvestTimerFragment> @ 1470a67c0

bool __cdecl
UE::CoreUObject::Private::Copy<FHarvestTimerFragment>(void *param_1,void *param_2,int param_3)

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

// Construct<FTestConstSharedFragment_Float> @ 1470ac960

void __cdecl UE::CoreUObject::Private::Construct<FTestConstSharedFragment_Float>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestConstSharedFragment_Float> @ 1470acad0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTestConstSharedFragment_Float>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestConstSharedFragment_Float> @ 1470acae0

void __cdecl UE::CoreUObject::Private::Destruct<FTestConstSharedFragment_Float>(void *param_1)

{
  return;
}

// Copy<FTestConstSharedFragment_Float> @ 1470ad2f0

bool __cdecl
UE::CoreUObject::Private::Copy<FTestConstSharedFragment_Float>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FFarmVisualFragment> @ 1470b1c60

void __cdecl UE::CoreUObject::Private::Construct<FFarmVisualFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FFarmVisualFragment> @ 1470b1c80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFarmVisualFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FFarmVisualFragment> @ 1470b1ca0

void __cdecl UE::CoreUObject::Private::Destruct<FFarmVisualFragment>(void *param_1)

{
  return;
}

// Construct<FTestSharedFragment_Float> @ 1470b20d0

void __cdecl UE::CoreUObject::Private::Construct<FTestSharedFragment_Float>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestSharedFragment_Float> @ 1470b20e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestSharedFragment_Float>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestSharedFragment_Float> @ 1470b2130

void __cdecl UE::CoreUObject::Private::Destruct<FTestSharedFragment_Float>(void *param_1)

{
  return;
}

// Copy<FFarmVisualFragment> @ 1470b2140

bool __cdecl
UE::CoreUObject::Private::Copy<FFarmVisualFragment>(void *param_1,void *param_2,int param_3)

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

// Copy<FTestSharedFragment_Float> @ 1470b2240

bool __cdecl
UE::CoreUObject::Private::Copy<FTestSharedFragment_Float>(void *param_1,void *param_2,int param_3)

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

// Construct<FFarmCropFragment> @ 1470b6fe0

void __cdecl UE::CoreUObject::Private::Construct<FFarmCropFragment>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ConstructForTests<FFarmCropFragment> @ 1470b6ff0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFarmCropFragment>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FFarmCropFragment> @ 1470b7000

void __cdecl UE::CoreUObject::Private::Destruct<FFarmCropFragment>(void *param_1)

{
  return;
}

// Construct<FTestConstSharedFragment_Int> @ 1470b7010

void __cdecl UE::CoreUObject::Private::Construct<FTestConstSharedFragment_Int>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestConstSharedFragment_Int> @ 1470b7050

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTestConstSharedFragment_Int>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestConstSharedFragment_Int> @ 1470b70d0

void __cdecl UE::CoreUObject::Private::Destruct<FTestConstSharedFragment_Int>(void *param_1)

{
  return;
}

// Copy<FFarmCropFragment> @ 1470b72d0

bool __cdecl
UE::CoreUObject::Private::Copy<FFarmCropFragment>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FTestConstSharedFragment_Int> @ 1470b8b30

bool __cdecl
UE::CoreUObject::Private::Copy<FTestConstSharedFragment_Int>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FFarmFlowerFragment> @ 1470c0520

void __cdecl UE::CoreUObject::Private::Construct<FFarmFlowerFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FFarmFlowerFragment> @ 1470c05a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFarmFlowerFragment>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FFarmFlowerFragment> @ 1470c0c40

void __cdecl UE::CoreUObject::Private::Destruct<FFarmFlowerFragment>(void *param_1)

{
  return;
}

// Construct<FTestSharedFragment_Array> @ 1470c12a0

void __cdecl UE::CoreUObject::Private::Construct<FTestSharedFragment_Array>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FTestSharedFragment_Array::FTestSharedFragment_Array(param_1);
  return;
}

// ConstructForTests<FTestSharedFragment_Array> @ 1470c1420

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestSharedFragment_Array>(void *param_1)

{
  int iVar1;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(param_1);
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity(param_1);
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}

// Destruct<FTestSharedFragment_Array> @ 1470c1430

void __cdecl UE::CoreUObject::Private::Destruct<FTestSharedFragment_Array>(void *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(param_1);
  return;
}

// Copy<FFarmFlowerFragment> @ 1470c1440

bool __cdecl
UE::CoreUObject::Private::Copy<FFarmFlowerFragment>(void *param_1,void *param_2,int param_3)

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

// Copy<FTestSharedFragment_Array> @ 1470c17c0

bool __cdecl
UE::CoreUObject::Private::Copy<FTestSharedFragment_Array>(void *param_1,void *param_2,int param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<int,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFarmWaterFragment> @ 1470c8570

void __cdecl UE::CoreUObject::Private::Construct<FFarmWaterFragment>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0xbc23d70a;
  return;
}

// ConstructForTests<FFarmWaterFragment> @ 1470c8650

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFarmWaterFragment>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0xbc23d70a;
  return;
}

// Destruct<FFarmWaterFragment> @ 1470c86c0

void __cdecl UE::CoreUObject::Private::Destruct<FFarmWaterFragment>(void *param_1)

{
  return;
}

// Construct<FTestSharedFragment_Int> @ 1470c8780

void __cdecl UE::CoreUObject::Private::Construct<FTestSharedFragment_Int>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestSharedFragment_Int> @ 1470c8ce0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestSharedFragment_Int>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestSharedFragment_Int> @ 1470c8e90

void __cdecl UE::CoreUObject::Private::Destruct<FTestSharedFragment_Int>(void *param_1)

{
  return;
}

// Copy<FFarmWaterFragment> @ 1470c8ec0

bool __cdecl
UE::CoreUObject::Private::Copy<FFarmWaterFragment>(void *param_1,void *param_2,int param_3)

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

// Copy<FTestSharedFragment_Int> @ 1470c96d0

bool __cdecl
UE::CoreUObject::Private::Copy<FTestSharedFragment_Int>(void *param_1,void *param_2,int param_3)

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

// Construct<FFarmGridCellData> @ 1470ce310

void __cdecl UE::CoreUObject::Private::Construct<FFarmGridCellData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FFarmGridCellData> @ 1470ce320

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFarmGridCellData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FFarmGridCellData> @ 1470ce330

void __cdecl UE::CoreUObject::Private::Destruct<FFarmGridCellData>(void *param_1)

{
  return;
}

// Construct<FTestChunkFragment_Float> @ 1470ce6b0

void __cdecl UE::CoreUObject::Private::Construct<FTestChunkFragment_Float>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestChunkFragment_Float> @ 1470ce6f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestChunkFragment_Float>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestChunkFragment_Float> @ 1470ce700

void __cdecl UE::CoreUObject::Private::Destruct<FTestChunkFragment_Float>(void *param_1)

{
  return;
}

// Copy<FFarmGridCellData> @ 1470ce710

bool __cdecl
UE::CoreUObject::Private::Copy<FFarmGridCellData>(void *param_1,void *param_2,int param_3)

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

// Copy<FTestChunkFragment_Float> @ 1470ce780

bool __cdecl
UE::CoreUObject::Private::Copy<FTestChunkFragment_Float>(void *param_1,void *param_2,int param_3)

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

// <lambda_invoker_cdecl> @ 1470cef10

bool __cdecl
UE::Mass::Test::DescendingGroupSorter::<lambda>::<lambda_invoker_cdecl>
          (FArchetypeGroupID param_1,FArchetypeGroupID param_2)

{
  int iVar1;
  FArchetypeGroupID local_20 [2];
  FArchetypeGroupID local_18 [2];
  int local_10;
  
  local_20[0].ID = param_1.ID;
  local_18[0].ID = param_2.ID;
  local_10 = FArchetypeGroupID::operator_int(local_20);
  iVar1 = FArchetypeGroupID::operator_int(local_18);
  return iVar1 < local_10;
}

// CallCheckBreakpoints<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>,FMassEntityHandle_const_&> @ 1470d77e0

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>,TArrayView<FMassEntityHandle_const_,int>_&> @ 1470d77f0

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>,TArrayView<FMassEntityHandle_const_,int>_&>
          (TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>,FMassEntityHandle_const_&> @ 1470d7800

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>,FMassEntityHandle_const_&> @ 1470d7810

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>,FMassEntityHandle_const_&> @ 1470d7820

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandAddTagsInternal<0,FTestFragment_Tag>,TArrayView<FMassEntityHandle_const_,int>_&> @ 1470d7830

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandAddTagsInternal<0,FTestFragment_Tag>,TArrayView<FMassEntityHandle_const_,int>_&>
          (TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandAddTagsInternal<0,FTestTag_A>,FMassEntityHandle_const_&> @ 1470d7840

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandAddTagsInternal<0,FTestTag_A>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>,FMassEntityHandle_const_&> @ 1470d7850

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>,FMassEntityHandle_const_&> @ 1470d7860

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandRemoveTagsInternal<0,FTestTag_A>,FMassEntityHandle_const_&> @ 1470d7870

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandRemoveTagsInternal<0,FTestTag_A>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>,FMassEntityHandle_const_&> @ 1470d7880

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  return;
}

// CallCheckBreakpoints<FMassCommandDestroyEntities,FMassEntityHandle_const_&> @ 1470d7890

void __cdecl
UE::Mass::Debug::CallCheckBreakpoints<FMassCommandDestroyEntities,FMassEntityHandle_const_&>
          (FMassEntityHandle *param_1)

{
  bool bVar1;
  FMassEntityHandle local_res8 [4];
  
  local_res8[0] = *param_1;
  bVar1 = FBreakpoint::CheckDestroyEntityBreakpoints(local_res8);
  if (bVar1) {
    FBreakpoint::DebugBreak();
    return;
  }
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandAddFragmentInstances<FTestFragment_Array_&>,FMassEntityHandle_const_&,FTestFragment_Array_&> @ 1470d78c0

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandAddFragmentInstances<FTestFragment_Array_&>,FMassEntityHandle_const_&,FTestFragment_Array_&>
          (FMassEntityHandle *param_1,FTestFragment_Array *param_2)

{
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandAddFragmentInstances<FTestFragment_Float>,FMassEntityHandle_const_&,FTestFragment_Float> @ 1470d78d0

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandAddFragmentInstances<FTestFragment_Float>,FMassEntityHandle_const_&,FTestFragment_Float>
          (FMassEntityHandle *param_1,FTestFragment_Float *param_2)

{
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>,FMassEntityHandle_const_&,FTestFragment_Int,FTestFragment_Float> @ 1470d78e0

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>,FMassEntityHandle_const_&,FTestFragment_Int,FTestFragment_Float>
          (FMassEntityHandle *param_1,FTestFragment_Int *param_2,FTestFragment_Float *param_3)

{
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&> @ 1470d78f0

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>,FMassEntityHandle_const_&,FTestFragment_Int,FTestFragment_Float> @ 1470d7900

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>,FMassEntityHandle_const_&,FTestFragment_Int,FTestFragment_Float>
          (FMassEntityHandle *param_1,FTestFragment_Int *param_2,FTestFragment_Float *param_3)

{
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle_&,FMassEntityHandle_&> @ 1470d7910

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle_&,FMassEntityHandle_&>
          (FMassEntityHandle *param_1,FMassEntityHandle *param_2)

{
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_> @ 1470d7920

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
          (TArrayView<FMassEntityHandle,int> *param_1,TArrayView<FMassEntityHandle,int> *param_2)

{
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> @ 1470d7930

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// CheckStructType<FFragmentWithSharedPtr> @ 1470d7980

void __cdecl UE::StructUtils::CheckStructType<FFragmentWithSharedPtr>(void)

{
  return;
}

// CheckStructType<FTestConstSharedFragment_Float> @ 1470d7990

void __cdecl UE::StructUtils::CheckStructType<FTestConstSharedFragment_Float>(void)

{
  return;
}

// CheckStructType<FTestConstSharedFragment_Int> @ 1470d79a0

void __cdecl UE::StructUtils::CheckStructType<FTestConstSharedFragment_Int>(void)

{
  return;
}

// CheckStructType<FTestFragment_Float> @ 1470d79b0

void __cdecl UE::StructUtils::CheckStructType<FTestFragment_Float>(void)

{
  return;
}

// CheckStructType<FTestFragment_Int> @ 1470d79c0

void __cdecl UE::StructUtils::CheckStructType<FTestFragment_Int>(void)

{
  return;
}

// CheckStructType<FTestSharedFragment_Array> @ 1470d79d0

void __cdecl UE::StructUtils::CheckStructType<FTestSharedFragment_Array>(void)

{
  return;
}

// CheckStructType<FTestSharedFragment_Float> @ 1470d79e0

void __cdecl UE::StructUtils::CheckStructType<FTestSharedFragment_Float>(void)

{
  return;
}

// CheckStructType<FTestSharedFragment_Int> @ 1470d79f0

void __cdecl UE::StructUtils::CheckStructType<FTestSharedFragment_Int>(void)

{
  return;
}

// ConstructBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Array_&> @ 1470d83f0

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Array_&>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestFragment_Array_&>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Float> @ 1470d8420

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Float>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestFragment_Float>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Int> @ 1470d8450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Int>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar6;
  ForElementType<unsigned_int> _Src;
  undefined1 auStackY_68 [32];
  <lambda_1> local_38 [8];
  TBitArray<FDefaultBitArrayAllocator> local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
           TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           GetTypeBitSet<FTestFragment_Int>();
  if ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__ == pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  local_30.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_30.NumBits = 0;
  local_30.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__,pTVar5,&local_30,MaxSize
             ,local_38);
  if ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__ != &local_30) {
    *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
    uVar4 = local_30.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&__return_storage_ptr__->field_0x1c < (int)uVar4) ||
       (0x80 < *(int *)&__return_storage_ptr__->field_0x1c)) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar2 = uVar4;
      }
      *(uint *)&__return_storage_ptr__->field_0x1c = uVar2;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__,0);
    }
    *(int *)&__return_storage_ptr__->field_0x18 = local_30.NumBits;
    if (local_30.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_30;
      if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_30.AllocatorInstance.SecondaryData;
      }
      pTVar6 = __return_storage_ptr__;
      if (*(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            **)&__return_storage_ptr__->field_0x10 !=
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
          0x0) {
        pTVar6 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   **)&__return_storage_ptr__->field_0x10;
      }
      memcpy(pTVar6,(void *)_Src,(ulonglong)(local_30.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_30.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// ConstructBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Int,FTestFragment_Float> @ 1470d85a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Int,FTestFragment_Float>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar6;
  ForElementType<unsigned_int> _Src;
  undefined1 auStackY_68 [32];
  <lambda_1> local_38 [8];
  TBitArray<FDefaultBitArrayAllocator> local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestFragment_Float>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
           TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           GetTypeBitSet<FTestFragment_Int>();
  if ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__ == pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  local_30.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_30.NumBits = 0;
  local_30.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__,pTVar5,&local_30,MaxSize
             ,local_38);
  if ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__ != &local_30) {
    *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
    uVar4 = local_30.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&__return_storage_ptr__->field_0x1c < (int)uVar4) ||
       (0x80 < *(int *)&__return_storage_ptr__->field_0x1c)) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar2 = uVar4;
      }
      *(uint *)&__return_storage_ptr__->field_0x1c = uVar2;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__,0);
    }
    *(int *)&__return_storage_ptr__->field_0x18 = local_30.NumBits;
    if (local_30.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_30;
      if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_30.AllocatorInstance.SecondaryData;
      }
      pTVar6 = __return_storage_ptr__;
      if (*(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            **)&__return_storage_ptr__->field_0x10 !=
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
          0x0) {
        pTVar6 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   **)&__return_storage_ptr__->field_0x10;
      }
      memcpy(pTVar6,(void *)_Src,(ulonglong)(local_30.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_30.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FFarmJustBecameReadyToHarvestTag> @ 1470d86f0

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FFarmJustBecameReadyToHarvestTag>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FFarmJustBecameReadyToHarvestTag>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FFarmReadyToHarvestTag> @ 1470d8720

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FFarmReadyToHarvestTag>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FFarmReadyToHarvestTag>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Tag> @ 1470d8750

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FTestFragment_Tag>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestFragment_Tag>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FTestTag_A> @ 1470d8780

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FTestTag_A>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestTag_A>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FTestTag_B> @ 1470d87b0

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::
ConstructBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,0,FTestTag_B>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestTag_B>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructFragmentBitSet<0,FTestFragment_Array_&> @ 1470d87e0

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructFragmentBitSet<0,FTestFragment_Array_&>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestFragment_Array_&>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructFragmentBitSet<0,FTestFragment_Float> @ 1470d8810

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructFragmentBitSet<0,FTestFragment_Float>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestFragment_Float>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructFragmentBitSet<0,FTestFragment_Int> @ 1470d8840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructFragmentBitSet<0,FTestFragment_Int>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar6;
  ForElementType<unsigned_int> _Src;
  undefined1 auStackY_68 [32];
  <lambda_1> local_38 [8];
  TBitArray<FDefaultBitArrayAllocator> local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
           TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           GetTypeBitSet<FTestFragment_Int>();
  if ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__ == pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  local_30.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_30.NumBits = 0;
  local_30.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__,pTVar5,&local_30,MaxSize
             ,local_38);
  if ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__ != &local_30) {
    *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
    uVar4 = local_30.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&__return_storage_ptr__->field_0x1c < (int)uVar4) ||
       (0x80 < *(int *)&__return_storage_ptr__->field_0x1c)) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar2 = uVar4;
      }
      *(uint *)&__return_storage_ptr__->field_0x1c = uVar2;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__,0);
    }
    *(int *)&__return_storage_ptr__->field_0x18 = local_30.NumBits;
    if (local_30.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_30;
      if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_30.AllocatorInstance.SecondaryData;
      }
      pTVar6 = __return_storage_ptr__;
      if (*(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            **)&__return_storage_ptr__->field_0x10 !=
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
          0x0) {
        pTVar6 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   **)&__return_storage_ptr__->field_0x10;
      }
      memcpy(pTVar6,(void *)_Src,(ulonglong)(local_30.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_30.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// ConstructFragmentBitSet<0,FTestFragment_Int,FTestFragment_Float> @ 1470d8990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructFragmentBitSet<0,FTestFragment_Int,FTestFragment_Float>
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar6;
  ForElementType<unsigned_int> _Src;
  undefined1 auStackY_68 [32];
  <lambda_1> local_38 [8];
  TBitArray<FDefaultBitArrayAllocator> local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestFragment_Float>::
  PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
           TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           GetTypeBitSet<FTestFragment_Int>();
  if ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__ == pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  local_30.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_30.NumBits = 0;
  local_30.MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__,pTVar5,&local_30,MaxSize
             ,local_38);
  if ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__ != &local_30) {
    *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
    uVar4 = local_30.NumBits + 0x1fU & 0xffffffe0;
    if ((*(int *)&__return_storage_ptr__->field_0x1c < (int)uVar4) ||
       (0x80 < *(int *)&__return_storage_ptr__->field_0x1c)) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar2 = uVar4;
      }
      *(uint *)&__return_storage_ptr__->field_0x1c = uVar2;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)__return_storage_ptr__,0);
    }
    *(int *)&__return_storage_ptr__->field_0x18 = local_30.NumBits;
    if (local_30.NumBits != 0) {
      _Src = (ForElementType<unsigned_int>)&local_30;
      if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Src = local_30.AllocatorInstance.SecondaryData;
      }
      pTVar6 = __return_storage_ptr__;
      if (*(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            **)&__return_storage_ptr__->field_0x10 !=
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
          0x0) {
        pTVar6 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   **)&__return_storage_ptr__->field_0x10;
      }
      memcpy(pTVar6,(void *)_Src,(ulonglong)(local_30.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_30.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_30.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// ConstructTagBitSet<0,FFarmJustBecameReadyToHarvestTag> @ 1470d8e30

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructTagBitSet<0,FFarmJustBecameReadyToHarvestTag>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FFarmJustBecameReadyToHarvestTag>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructTagBitSet<0,FFarmReadyToHarvestTag> @ 1470d8e60

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructTagBitSet<0,FFarmReadyToHarvestTag>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FFarmReadyToHarvestTag>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructTagBitSet<0,FTestFragment_Tag> @ 1470d8e90

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructTagBitSet<0,FTestFragment_Tag>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestFragment_Tag>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructTagBitSet<0,FTestTag_A> @ 1470d8ec0

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructTagBitSet<0,FTestTag_A>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestTag_A>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConstructTagBitSet<0,FTestTag_B> @ 1470d8ef0

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __cdecl
UE::Mass::Utils::ConstructTagBitSet<0,FTestTag_B>
          (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0x80;
  TMultiTypeList<FTestTag_B>::
  PopulateBitSet<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DereferenceIfNecessary<UE::Mass::Testing::FMassTestProcessingPhaseManager,UE::Mass::Testing::FMassTestProcessingPhaseManager_*_&> @ 1470dcc50

FMassTestProcessingPhaseManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Mass::Testing::FMassTestProcessingPhaseManager,UE::Mass::Testing::FMassTestProcessingPhaseManager_*_&>
          (FMassTestProcessingPhaseManager **param_1)

{
  return *param_1;
}

// GetAsUStruct<FFarmCropFragment> @ 1470de1f0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FFarmCropFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmCropFragment,(UObject *)pUVar1,
                         L"FarmCropFragment");
  }
  return Z_Registration_Info_UScriptStruct_FFarmCropFragment.OuterSingleton;
}

// GetAsUStruct<FFarmFlowerFragment> @ 1470de230

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FFarmFlowerFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmFlowerFragment,(UObject *)pUVar1,
                         L"FarmFlowerFragment");
  }
  return Z_Registration_Info_UScriptStruct_FFarmFlowerFragment.OuterSingleton;
}

// GetAsUStruct<FFarmGridCellData> @ 1470de270

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FFarmGridCellData>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar1,
                         L"FarmGridCellData");
  }
  return Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton;
}

// GetAsUStruct<FFarmJustBecameReadyToHarvestTag> @ 1470de2b0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FFarmJustBecameReadyToHarvestTag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmJustBecameReadyToHarvestTag.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmJustBecameReadyToHarvestTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag,
                         (UObject *)pUVar1,L"FarmJustBecameReadyToHarvestTag");
  }
  return Z_Registration_Info_UScriptStruct_FFarmJustBecameReadyToHarvestTag.OuterSingleton;
}

// GetAsUStruct<FFarmReadyToHarvestTag> @ 1470de2f0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FFarmReadyToHarvestTag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmReadyToHarvestTag.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmReadyToHarvestTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmReadyToHarvestTag,(UObject *)pUVar1,
                         L"FarmReadyToHarvestTag");
  }
  return Z_Registration_Info_UScriptStruct_FFarmReadyToHarvestTag.OuterSingleton;
}

// GetAsUStruct<FFarmVisualFragment> @ 1470de330

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FFarmVisualFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar1,
                         L"FarmVisualFragment");
  }
  return Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton;
}

// GetAsUStruct<FFarmWaterFragment> @ 1470de370

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FFarmWaterFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar1,
                         L"FarmWaterFragment");
  }
  return Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton;
}

// GetAsUStruct<FHarvestTimerFragment> @ 1470de3b0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FHarvestTimerFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar1,
                         L"HarvestTimerFragment");
  }
  return Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton;
}

// GetAsUStruct<FMassChildOfFragment> @ 1470de3f0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FMassChildOfFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfFragment,(UObject *)pUVar1,
                         L"MassChildOfFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton;
}

// GetAsUStruct<FMassChunkFragment> @ 1470de400

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FMassChunkFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassChunkFragment,(UObject *)pUVar1,
                         L"MassChunkFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton;
}

// GetAsUStruct<FMassConstSharedFragment> @ 1470de410

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FMassConstSharedFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,(UObject *)pUVar1,
                         L"MassConstSharedFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton;
}

// GetAsUStruct<FMassFragment> @ 1470de420

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FMassFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar1,L"MassFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton;
}

// GetAsUStruct<FMassSharedFragment> @ 1470de430

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FMassSharedFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar1,
                         L"MassSharedFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton;
}

// GetAsUStruct<FMassTag> @ 1470de440

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FMassTag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar1,L"MassTag");
  }
  return Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton;
}

// GetAsUStruct<FTestChunkFragment_Float> @ 1470de450

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestChunkFragment_Float>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestChunkFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Float,(UObject *)pUVar1,
                         L"TestChunkFragment_Float");
  }
  return Z_Registration_Info_UScriptStruct_FTestChunkFragment_Float.OuterSingleton;
}

// GetAsUStruct<FTestChunkFragment_Int> @ 1470de490

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestChunkFragment_Int>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar1,
                         L"TestChunkFragment_Int");
  }
  return Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton;
}

// GetAsUStruct<FTestConstSharedFragment_Float> @ 1470de4d0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestConstSharedFragment_Float>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Float,(UObject *)pUVar1,
                         L"TestConstSharedFragment_Float");
  }
  return Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton;
}

// GetAsUStruct<FTestConstSharedFragment_Int> @ 1470de510

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestConstSharedFragment_Int>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar1,
                         L"TestConstSharedFragment_Int");
  }
  return Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
}

// GetAsUStruct<FTestFragment_Array> @ 1470de550

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestFragment_Array>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Array,(UObject *)pUVar1,
                         L"TestFragment_Array");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Array.OuterSingleton;
}

// GetAsUStruct<FTestFragment_Bool> @ 1470de590

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestFragment_Bool>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar1,
                         L"TestFragment_Bool");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton;
}

// GetAsUStruct<FTestFragment_Float> @ 1470de5d0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestFragment_Float>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar1,
                         L"TestFragment_Float");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
}

// GetAsUStruct<FTestFragment_Int> @ 1470de610

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestFragment_Int>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar1,
                         L"TestFragment_Int");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
}

// GetAsUStruct<FTestFragment_Large> @ 1470de650

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestFragment_Large>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Large,(UObject *)pUVar1,
                         L"TestFragment_Large");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton;
}

// GetAsUStruct<FTestFragment_Tag> @ 1470de690

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestFragment_Tag>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Tag,(UObject *)pUVar1,
                         L"TestFragment_Tag");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton;
}

// GetAsUStruct<FTestSharedFragment_Float> @ 1470de6d0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestSharedFragment_Float>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar1,
                         L"TestSharedFragment_Float");
  }
  return Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton;
}

// GetAsUStruct<FTestSharedFragment_Int> @ 1470de710

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestSharedFragment_Int>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar1,
                         L"TestSharedFragment_Int");
  }
  return Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
}

// GetAsUStruct<FTestTag_A> @ 1470de750

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestTag_A>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A,(UObject *)pUVar1,L"TestTag_A");
  }
  return Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton;
}

// GetAsUStruct<FTestTag_B> @ 1470de790

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestTag_B>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_B,(UObject *)pUVar1,L"TestTag_B");
  }
  return Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton;
}

// GetAsUStruct<FTestTag_C> @ 1470de7d0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestTag_C>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_C,(UObject *)pUVar1,L"TestTag_C");
  }
  return Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton;
}

// GetAsUStruct<FTestTag_D> @ 1470de810

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FTestTag_D>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestTag_D.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_D,(UObject *)pUVar1,L"TestTag_D");
  }
  return Z_Registration_Info_UScriptStruct_FTestTag_D.OuterSingleton;
}

// GetAsUStruct<UMassTestEngineSubsystem> @ 1470de850

UClass * __cdecl UE::StructUtils::GetAsUStruct<UMassTestEngineSubsystem>(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestEngineSubsystem",
               &Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton,
               UMassTestEngineSubsystem::StaticRegisterNativesUMassTestEngineSubsystem,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMassTestEngineSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestEngineSubsystem>,aFStackX_8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestEngineSubsystem.InnerSingleton;
}

// GetAsUStruct<UMassTestGameInstanceSubsystem> @ 1470de860

UClass * __cdecl UE::StructUtils::GetAsUStruct<UMassTestGameInstanceSubsystem>(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestGameInstanceSubsystem",
               &Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton,
               UMassTestGameInstanceSubsystem::StaticRegisterNativesUMassTestGameInstanceSubsystem,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMassTestGameInstanceSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestGameInstanceSubsystem>,aFStackX_8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestGameInstanceSubsystem.InnerSingleton;
}

// GetAsUStruct<UMassTestLocalPlayerSubsystem> @ 1470de870

UClass * __cdecl UE::StructUtils::GetAsUStruct<UMassTestLocalPlayerSubsystem>(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestLocalPlayerSubsystem",
               &Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton,
               UMassTestLocalPlayerSubsystem::StaticRegisterNativesUMassTestLocalPlayerSubsystem,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMassTestLocalPlayerSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestLocalPlayerSubsystem>,aFStackX_8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestLocalPlayerSubsystem.InnerSingleton;
}

// GetAsUStruct<UMassTestParallelSubsystem> @ 1470de880

UClass * __cdecl UE::StructUtils::GetAsUStruct<UMassTestParallelSubsystem>(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestParallelSubsystem",
               &Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton,
               UMassTestParallelSubsystem::StaticRegisterNativesUMassTestParallelSubsystem,0x40,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestParallelSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestParallelSubsystem>,aFStackX_8,
               UMassSubsystemBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestParallelSubsystem.InnerSingleton;
}

// GetAsUStruct<UMassTestWorldSubsystem> @ 1470de890

UClass * __cdecl UE::StructUtils::GetAsUStruct<UMassTestWorldSubsystem>(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestWorldSubsystem",
               &Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton,
               UMassTestWorldSubsystem::StaticRegisterNativesUMassTestWorldSubsystem,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMassTestWorldSubsystem>
               ,InternalVTableHelperCtorCaller<UMassTestWorldSubsystem>,aFStackX_8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton;
}

// GetAsUStruct<USubsystem> @ 1470de8a0

UClass * __cdecl UE::StructUtils::GetAsUStruct<USubsystem>(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubsystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Subsystem",&Z_Registration_Info_UClass_USubsystem.InnerSingleton,
               USubsystem::StaticRegisterNativesUSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USubsystem>,
               InternalVTableHelperCtorCaller<USubsystem>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsystem.InnerSingleton;
}

// GetDataImpl<FMassProcessingPhaseConfig_(&)[6]> @ 1470dee90

FMassProcessingPhaseConfig * __cdecl
UE::Core::Private::GetDataImpl<FMassProcessingPhaseConfig_(&)[6]>
          (FMassProcessingPhaseConfig (*param_1) [6])

{
  return *param_1;
}

// GetStructPtr<FTestConstSharedFragment_Int_const_> @ 1470e2200

/* WARNING: Removing unreachable block (ram,0x0001470e22b6) */

FTestConstSharedFragment_Int * __cdecl
UE::StructUtils::GetStructPtr<FTestConstSharedFragment_Int_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FTestConstSharedFragment_Int *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                           L"TestConstSharedFragment_Int");
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FTestConstSharedFragment_Int *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->_padding_)
       ) {
      return param_2;
    }
    return (FTestConstSharedFragment_Int *)0x0;
  }
  return param_2;
}

// GetStructPtr<FTestConstSharedFragment_Int_const_> @ 1470e22f0

FTestConstSharedFragment_Int * __cdecl
UE::StructUtils::GetStructPtr<FTestConstSharedFragment_Int_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FTestConstSharedFragment_Int *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar3,
                         L"TestConstSharedFragment_Int");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar3,
                           L"TestConstSharedFragment_Int");
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FTestConstSharedFragment_Int *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
                 _padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return (FTestConstSharedFragment_Int *)0x0;
    }
  }
  return param_2;
}

// GetStructPtr<FTestSharedFragment_Int_const_> @ 1470e23c0

/* WARNING: Removing unreachable block (ram,0x0001470e2476) */

FTestSharedFragment_Int * __cdecl
UE::StructUtils::GetStructPtr<FTestSharedFragment_Int_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FTestSharedFragment_Int *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                           L"TestSharedFragment_Int");
      if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FTestSharedFragment_Int *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FTestSharedFragment_Int *)0x0;
  }
  return param_2;
}

// GetStructPtr<FTestSharedFragment_Int_const_> @ 1470e24b0

FTestSharedFragment_Int * __cdecl
UE::StructUtils::GetStructPtr<FTestSharedFragment_Int_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FTestSharedFragment_Int *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar3,
                         L"TestSharedFragment_Int");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar3,
                           L"TestSharedFragment_Int");
      if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FTestSharedFragment_Int *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->
                 _padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return (FTestSharedFragment_Int *)0x0;
    }
  }
  return param_2;
}

// GetStructPtr<FTestChunkFragment_Int> @ 1470e2580

/* WARNING: Removing unreachable block (ram,0x0001470e2636) */

FTestChunkFragment_Int * __cdecl
UE::StructUtils::GetStructPtr<FTestChunkFragment_Int>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FTestChunkFragment_Int *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar2,
                         L"TestChunkFragment_Int");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestChunkFragment_Int,(UObject *)pUVar2,
                           L"TestChunkFragment_Int");
      if (Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FTestChunkFragment_Int *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FTestChunkFragment_Int.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FTestChunkFragment_Int *)0x0;
  }
  return param_2;
}

// GetStructPtr<FTestConstSharedFragment_Int> @ 1470e2670

/* WARNING: Removing unreachable block (ram,0x0001470e2726) */

FTestConstSharedFragment_Int * __cdecl
UE::StructUtils::GetStructPtr<FTestConstSharedFragment_Int>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FTestConstSharedFragment_Int *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                         L"TestConstSharedFragment_Int");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar2,
                           L"TestConstSharedFragment_Int");
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FTestConstSharedFragment_Int *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->_padding_)
       ) {
      return param_2;
    }
    return (FTestConstSharedFragment_Int *)0x0;
  }
  return param_2;
}

// GetStructPtr<FTestSharedFragment_Int> @ 1470e2760

/* WARNING: Removing unreachable block (ram,0x0001470e2816) */

FTestSharedFragment_Int * __cdecl
UE::StructUtils::GetStructPtr<FTestSharedFragment_Int>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FTestSharedFragment_Int *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                           L"TestSharedFragment_Int");
      if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FTestSharedFragment_Int *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FTestSharedFragment_Int *)0x0;
  }
  return param_2;
}

// GetStructRef<FTestConstSharedFragment_Int_const_> @ 1470e2850

FTestConstSharedFragment_Int * __cdecl
UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTestConstSharedFragment_Int *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestConstSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestConstSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar5,
                         L"TestConstSharedFragment_Int");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar5,
                         L"TestConstSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1470e294b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1470e294b:
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar5,
                         L"TestConstSharedFragment_Int");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton,&local_18
             ,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FTestConstSharedFragment_Int *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FTestConstSharedFragment_Int_const_> @ 1470e2a30

FTestConstSharedFragment_Int * __cdecl
UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTestConstSharedFragment_Int *pFVar4;
  UPackage *pUVar5;
  FString FStack_28;
  FString FStack_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestConstSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestConstSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar5,
                         L"TestConstSharedFragment_Int");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar5,
                         L"TestConstSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1470e294b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1470e294b:
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar5,
                         L"TestConstSharedFragment_Int");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton,
             &FStack_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&FStack_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FTestConstSharedFragment_Int *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FTestFragment_Bool_const_> @ 1470e2a40

FTestFragment_Bool * __cdecl
UE::StructUtils::GetStructRef<FTestFragment_Bool_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTestFragment_Bool *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestFragment_Bool *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestFragment_Bool *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar5,
                         L"TestFragment_Bool");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar5,
                         L"TestFragment_Bool");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_1470e2b3b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1470e2b3b:
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar5,
                         L"TestFragment_Bool");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FTestFragment_Bool *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FTestFragment_Float_const_> @ 1470e2c20

FTestFragment_Float * __cdecl
UE::StructUtils::GetStructRef<FTestFragment_Float_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTestFragment_Float *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestFragment_Float *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestFragment_Float *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar5,
                         L"TestFragment_Float");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar5,
                         L"TestFragment_Float");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0
       ) goto LAB_1470e2d1b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1470e2d1b:
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar5,
                         L"TestFragment_Float");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FTestFragment_Float *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FTestSharedFragment_Int_const_> @ 1470e2e00

FTestSharedFragment_Int * __cdecl
UE::StructUtils::GetStructRef<FTestSharedFragment_Int_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTestSharedFragment_Int *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1470e2efb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_
  ;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1470e2efb:
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FTestSharedFragment_Int_const_> @ 1470e2fe0

FTestSharedFragment_Int * __cdecl
UE::StructUtils::GetStructRef<FTestSharedFragment_Int_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTestSharedFragment_Int *pFVar4;
  UPackage *pUVar5;
  FString FStack_28;
  FString FStack_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1470e2efb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_
  ;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1470e2efb:
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,&FStack_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&FStack_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FTestFragment_Int> @ 1470e2ff0

FTestFragment_Int * __cdecl
UE::StructUtils::GetStructRef<FTestFragment_Int>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTestFragment_Int *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar5,
                         L"TestFragment_Int");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar5,
                         L"TestFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_1470e30eb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1470e30eb:
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar5,
                         L"TestFragment_Int");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FTestFragment_Int *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FTestSharedFragment_Int> @ 1470e31d0

FTestSharedFragment_Int * __cdecl
UE::StructUtils::GetStructRef<FTestSharedFragment_Int>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTestSharedFragment_Int *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1470e32cb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_
  ;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_1470e32cb:
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FTestSharedFragment_Int *)(*pcVar2)();
  return pFVar4;
}

// operator() @ 1470fa0a0

bool __thiscall
UE::Mass::Test::Observers::EntityIndexSorted::<lambda>::operator()
          (<lambda> *this,FMassEntityHandle *param_1,FMassEntityHandle *param_2)

{
  return param_1->Index < param_2->Index;
}

