// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 60

// Copy<FPVDataTypeInfoFoliageMesh> @ 14da55530

bool __cdecl
UE::CoreUObject::Private::Copy<FPVDataTypeInfoFoliageMesh>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPVFloatRamp> @ 14da556c0

void __cdecl UE::CoreUObject::Private::Construct<FPVFloatRamp>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FPVFloatRamp> @ 14da55730

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVFloatRamp>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FPVFloatRamp> @ 14da55790

void __cdecl UE::CoreUObject::Private::Destruct<FPVFloatRamp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FPVFloatRamp> @ 14da557f0

bool __cdecl UE::CoreUObject::Private::Copy<FPVFloatRamp>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *pvVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar5 = (ForAnyElementType *)((longlong)pvVar3 + 0x70);
    *(undefined4 *)((longlong)pvVar3 + 0x68) =
         *(undefined4 *)((longlong)param_2 + (0x68 - (longlong)param_1) + (longlong)pvVar3);
    *(undefined1 *)((longlong)pvVar3 + 0x6c) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x6c - (longlong)param_1));
    pFVar4 = (ForAnyElementType *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x6d) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x6d - (longlong)param_1));
    if (pFVar5 != pFVar4) {
      iVar2 = *(int *)((longlong)pvVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
      piVar1 = (int *)((longlong)pvVar3 + 0x7c);
      _Src = pFVar4->Data;
      *(int *)((longlong)pvVar3 + 0x78) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar2,*piVar1,pFVar5,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar2 * 0x1c);
        }
      }
    }
    pvVar3 = (void *)((longlong)pvVar3 + 0x80);
  }
  return true;
}

// Construct<FPVExportParams> @ 14da558f0

void __cdecl UE::CoreUObject::Private::Construct<FPVExportParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x2010101;
  *(undefined2 *)param_1 = 0x101;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FPVExportParams> @ 14da55920

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVExportParams>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x2010101;
  return;
}

// Destruct<FPVExportParams> @ 14da55950

void __cdecl UE::CoreUObject::Private::Destruct<FPVExportParams>(void *param_1)

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

// Construct<FPVSlopeParams> @ 14da55970

void __cdecl UE::CoreUObject::Private::Construct<FPVSlopeParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0x41b40000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x40000000;
  return;
}

// ConstructForTests<FPVSlopeParams> @ 14da55990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVSlopeParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0x41b40000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x40000000;
  return;
}

// Destruct<FPVSlopeParams> @ 14da559b0

void __cdecl UE::CoreUObject::Private::Destruct<FPVSlopeParams>(void *param_1)

{
  return;
}

// Copy<FPVExportParams> @ 14da55a00

bool __cdecl
UE::CoreUObject::Private::Copy<FPVExportParams>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
      *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
      *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
      *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
      *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x28) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x28));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x28);
      param_2 = (void *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x28) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FPVSlopeParams> @ 14da55ae0

bool __cdecl UE::CoreUObject::Private::Copy<FPVSlopeParams>(void *param_1,void *param_2,int param_3)

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

// Construct<FPVDebugSettings> @ 14da56130

void __cdecl UE::CoreUObject::Private::Construct<FPVDebugSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPVDebugSettings> @ 14da56200

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVDebugSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPVDebugSettings> @ 14da56250

void __cdecl UE::CoreUObject::Private::Destruct<FPVDebugSettings>(void *param_1)

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

// Copy<FPVDebugSettings> @ 14da56270

bool __cdecl
UE::CoreUObject::Private::Copy<FPVDebugSettings>(void *param_1,void *param_2,int param_3)

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
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
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
                    (0x18,4,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x18);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPVDataTypeInfoMesh> @ 14da56410

void __cdecl UE::CoreUObject::Private::Construct<FPVDataTypeInfoMesh>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPVDataTypeInfoMesh__6B_;
  return;
}

// ConstructForTests<FPVDataTypeInfoMesh> @ 14da56430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVDataTypeInfoMesh>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPVDataTypeInfoMesh__6B_;
  return;
}

// Destruct<FPVDataTypeInfoMesh> @ 14da56450

void __cdecl UE::CoreUObject::Private::Destruct<FPVDataTypeInfoMesh>(void *param_1)

{
  return;
}

// Copy<FPVDataTypeInfoMesh> @ 14da56460

bool __cdecl
UE::CoreUObject::Private::Copy<FPVDataTypeInfoMesh>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPVVisualizationSettings> @ 14da56470

void __cdecl UE::CoreUObject::Private::Construct<FPVVisualizationSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  ((FColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  return;
}

// ConstructForTests<FPVVisualizationSettings> @ 14da56490

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVVisualizationSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  return;
}

// Destruct<FPVVisualizationSettings> @ 14da564b0

void __cdecl UE::CoreUObject::Private::Destruct<FPVVisualizationSettings>(void *param_1)

{
  return;
}

// Copy<FPVVisualizationSettings> @ 14da56580

bool __cdecl
UE::CoreUObject::Private::Copy<FPVVisualizationSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FPVMeshBuilderParams> @ 14da566c0

void __cdecl UE::CoreUObject::Private::Construct<FPVMeshBuilderParams>(void *param_1)

{
  ForAnyElementType *pFVar1;
  FString FStack_38;
  
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 6;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
  *(undefined4 *)((longlong)param_1 + 0x38) = 5;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x58) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0x404;
  (((FPVFloatRamp *)((longlong)param_1 + 0xd8))->EditorCurveData)._padding_ =
       (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 400) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0x404;
  (((FPVFloatRamp *)((longlong)param_1 + 0x158))->EditorCurveData)._padding_ =
       (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined4 *)((longlong)param_1 + 0x210) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined4 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x24c) = 0x404;
  (((FPVFloatRamp *)((longlong)param_1 + 0x1e0))->EditorCurveData)._padding_ =
       (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x260),"None");
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x270);
  ::FString::FString(&FStack_38,"None");
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,pFVar1,1,(int *)((longlong)param_1 + 0x27c));
  ConstructItems<FString,FString,int>(pFVar1->Data,&FStack_38,1);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined4 *)((longlong)param_1 + 700) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2c0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0x404;
  (((FPVFloatRamp *)((longlong)param_1 + 0x288))->EditorCurveData)._padding_ =
       (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x308) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x338) = 1;
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0x58));
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0xd8));
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0x158));
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0x1e0));
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0x288));
  return;
}

// ConstructForTests<FPVMeshBuilderParams> @ 14da566d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVMeshBuilderParams>(void *param_1)

{
  ForAnyElementType *pFVar1;
  FString FStack_38;
  
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 6;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
  *(undefined4 *)((longlong)param_1 + 0x38) = 5;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x58) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0x404;
  (((FPVFloatRamp *)((longlong)param_1 + 0xd8))->EditorCurveData)._padding_ =
       (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 400) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0x404;
  (((FPVFloatRamp *)((longlong)param_1 + 0x158))->EditorCurveData)._padding_ =
       (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined4 *)((longlong)param_1 + 0x210) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined4 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x24c) = 0x404;
  (((FPVFloatRamp *)((longlong)param_1 + 0x1e0))->EditorCurveData)._padding_ =
       (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x260),"None");
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x270);
  ::FString::FString(&FStack_38,"None");
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,pFVar1,1,(int *)((longlong)param_1 + 0x27c));
  ConstructItems<FString,FString,int>(pFVar1->Data,&FStack_38,1);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined4 *)((longlong)param_1 + 700) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2c0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0x404;
  (((FPVFloatRamp *)((longlong)param_1 + 0x288))->EditorCurveData)._padding_ =
       (longlong)&___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x308) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x338) = 1;
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0x58));
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0xd8));
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0x158));
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0x1e0));
  FPVMeshBuilderParams::InitializeLinearCurve((FPVFloatRamp *)((longlong)param_1 + 0x288));
  return;
}

// Destruct<FPVMeshBuilderParams> @ 14da566e0

void __cdecl UE::CoreUObject::Private::Destruct<FPVMeshBuilderParams>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x318) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x318));
  }
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  *(undefined ***)((longlong)param_1 + 0x288) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x2e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2e0));
  }
  *(undefined4 *)((longlong)param_1 + 0x2d8) = 0;
  if (*(void **)((longlong)param_1 + 0x2d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2d0));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x290));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x270),*(int *)((longlong)param_1 + 0x278));
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  if (*(void **)((longlong)param_1 + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x260));
  }
  if (*(void **)((longlong)param_1 + 0x250) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x250));
  }
  *(undefined ***)((longlong)param_1 + 0x1e0) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x238) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x238));
  }
  *(undefined4 *)((longlong)param_1 + 0x230) = 0;
  if (*(void **)((longlong)param_1 + 0x228) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x228));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1e8));
  if (*(void **)((longlong)param_1 + 0x1c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c8));
  }
  *(undefined ***)((longlong)param_1 + 0x158) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x1b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1b0));
  }
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0;
  if (*(void **)((longlong)param_1 + 0x1a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a0));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x160));
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  *(undefined ***)((longlong)param_1 + 0xd8) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  if (*(void **)((longlong)param_1 + 0x120) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x120));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xe0));
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  *(undefined ***)((longlong)param_1 + 0x58) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  return;
}

// Copy<FPVMeshBuilderParams> @ 14da566f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPVMeshBuilderParams>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      FPVMaterialSettings::operator=
                ((FPVMaterialSettings *)(puVar2 + 8),(FPVMaterialSettings *)((longlong)pvVar1 + 8));
      *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)((longlong)pvVar1 + 0x28);
      *(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)((longlong)pvVar1 + 0x2c);
      *(undefined4 *)(puVar2 + 0x30) = *(undefined4 *)((longlong)pvVar1 + 0x30);
      *(undefined4 *)(puVar2 + 0x34) = *(undefined4 *)((longlong)pvVar1 + 0x34);
      *(undefined4 *)(puVar2 + 0x38) = *(undefined4 *)((longlong)pvVar1 + 0x38);
      *(undefined4 *)(puVar2 + 0x3c) = *(undefined4 *)((longlong)pvVar1 + 0x3c);
      *(undefined4 *)(puVar2 + 0x40) = *(undefined4 *)((longlong)pvVar1 + 0x40);
      *(undefined4 *)(puVar2 + 0x44) = *(undefined4 *)((longlong)pvVar1 + 0x44);
      *(undefined4 *)(puVar2 + 0x48) = *(undefined4 *)((longlong)pvVar1 + 0x48);
      *(undefined4 *)(puVar2 + 0x4c) = *(undefined4 *)((longlong)pvVar1 + 0x4c);
      *(undefined4 *)(puVar2 + 0x50) = *(undefined4 *)((longlong)pvVar1 + 0x50);
      FPVFloatRamp::operator=
                ((FPVFloatRamp *)(puVar2 + 0x58),(FPVFloatRamp *)((longlong)pvVar1 + 0x58));
      FPVFloatRamp::operator=
                ((FPVFloatRamp *)(puVar2 + 0xd8),(FPVFloatRamp *)((longlong)pvVar1 + 0xd8));
      FPVFloatRamp::operator=
                ((FPVFloatRamp *)(puVar2 + 0x158),(FPVFloatRamp *)((longlong)pvVar1 + 0x158));
      *(undefined4 *)(puVar2 + 0x1d8) = *(undefined4 *)((longlong)pvVar1 + 0x1d8);
      FPVFloatRamp::operator=
                ((FPVFloatRamp *)(puVar2 + 0x1e0),(FPVFloatRamp *)((longlong)pvVar1 + 0x1e0));
      ::FString::operator=((FString *)(puVar2 + 0x260),(FString *)((longlong)pvVar1 + 0x260));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x270),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x270));
      puVar2[0x280] = *(undefined1 *)((longlong)pvVar1 + 0x280);
      FPVFloatRamp::operator=
                ((FPVFloatRamp *)(puVar2 + 0x288),(FPVFloatRamp *)((longlong)pvVar1 + 0x288));
      *(undefined4 *)(puVar2 + 0x308) = *(undefined4 *)((longlong)pvVar1 + 0x308);
      puVar2[0x30c] = *(undefined1 *)((longlong)pvVar1 + 0x30c);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x310) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x310));
      }
      *(undefined8 *)(puVar2 + 0x310) = *(undefined8 *)((longlong)pvVar1 + 0x310);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x318),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x318));
      *(undefined4 *)(puVar2 + 0x328) = *(undefined4 *)((longlong)pvVar1 + 0x328);
      *(undefined4 *)(puVar2 + 0x32c) = *(undefined4 *)((longlong)pvVar1 + 0x32c);
      *(undefined8 *)(puVar2 + 0x330) = *(undefined8 *)((longlong)pvVar1 + 0x330);
      *(undefined4 *)(puVar2 + 0x338) = *(undefined4 *)((longlong)pvVar1 + 0x338);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x340);
      puVar2 = puVar2 + 0x340;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPVCarveParams> @ 14da568e0

void __cdecl UE::CoreUObject::Private::Construct<FPVCarveParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FPVCarveParams> @ 14da568f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVCarveParams>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FPVCarveParams> @ 14da56910

void __cdecl UE::CoreUObject::Private::Destruct<FPVCarveParams>(void *param_1)

{
  return;
}

// Copy<FPVCarveParams> @ 14da56920

bool __cdecl UE::CoreUObject::Private::Copy<FPVCarveParams>(void *param_1,void *param_2,int param_3)

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

// Construct<FPlantProfile> @ 14da56a00

void __cdecl UE::CoreUObject::Private::Construct<FPlantProfile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FPlantProfile> @ 14da56a60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPlantProfile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPlantProfile> @ 14da56a80

void __cdecl UE::CoreUObject::Private::Destruct<FPlantProfile>(void *param_1)

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

// Copy<FPlantProfile> @ 14da56ac0

bool __cdecl UE::CoreUObject::Private::Copy<FPlantProfile>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPVPresetVariationInfo> @ 14da56c80

void __cdecl UE::CoreUObject::Private::Construct<FPVPresetVariationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FPVPresetVariationInfo> @ 14da56cb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVPresetVariationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FPVPresetVariationInfo> @ 14da56ce0

void __cdecl UE::CoreUObject::Private::Destruct<FPVPresetVariationInfo>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<TSoftObjectPtr<UObject>,int>
            (*(TSoftObjectPtr<UObject> **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<TSoftObjectPtr<UObject>,int>
            (*(TSoftObjectPtr<UObject> **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10)
            );
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPVPresetVariationInfo> @ 14da56d00

bool __cdecl
UE::CoreUObject::Private::Copy<FPVPresetVariationInfo>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 8),
                 (TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 8));
      TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x18),
                 (TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x18));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
      param_2 = (void *)((longlong)param_2 + 0x38);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPVMaterialSettings> @ 14da58380

void __cdecl UE::CoreUObject::Private::Construct<FPVMaterialSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FPVMaterialSettings> @ 14da583a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVMaterialSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPVMaterialSettings> @ 14da583c0

void __cdecl UE::CoreUObject::Private::Destruct<FPVMaterialSettings>(void *param_1)

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

// Copy<FPVMaterialSettings> @ 14da583e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPVMaterialSettings>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FTrunkGenerationMaterialSetup *pFVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar6 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_2 + 4);
      if (pFVar6 != (ForAnyElementType *)((longlong)param_2 + 8)) {
        iVar3 = *(int *)((longlong)param_2 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        pFVar4 = (FTrunkGenerationMaterialSetup *)
                 ((ForAnyElementType *)((longlong)param_2 + 8))->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar3,*piVar1,pFVar6,iVar3,piVar1);
          ConstructItems<FTrunkGenerationMaterialSetup,FTrunkGenerationMaterialSetup,int>
                    (pFVar6->Data,pFVar4,iVar3);
        }
      }
      puVar2 = (undefined1 *)((longlong)param_2 + 0x18);
      param_2 = (void *)((longlong)param_2 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x18) = *puVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTrunkGenerationMaterialSetup> @ 14da587d0

void __cdecl UE::CoreUObject::Private::Construct<FTrunkGenerationMaterialSetup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  return;
}

// ConstructForTests<FTrunkGenerationMaterialSetup> @ 14da58810

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTrunkGenerationMaterialSetup>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  return;
}

// Destruct<FTrunkGenerationMaterialSetup> @ 14da58840

void __cdecl UE::CoreUObject::Private::Destruct<FTrunkGenerationMaterialSetup>(void *param_1)

{
  return;
}

// Copy<FTrunkGenerationMaterialSetup> @ 14da588d0

bool __cdecl
UE::CoreUObject::Private::Copy<FTrunkGenerationMaterialSetup>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar1 + 3);
      *(undefined4 *)((longlong)puVar3 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x1c);
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPVDataTypeInfoGrowth> @ 14da58f50

void __cdecl UE::CoreUObject::Private::Construct<FPVDataTypeInfoGrowth>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPVDataTypeInfoGrowth__6B_;
  return;
}

// ConstructForTests<FPVDataTypeInfoGrowth> @ 14da58f70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVDataTypeInfoGrowth>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPVDataTypeInfoGrowth__6B_;
  return;
}

// Destruct<FPVDataTypeInfoGrowth> @ 14da58f90

void __cdecl UE::CoreUObject::Private::Destruct<FPVDataTypeInfoGrowth>(void *param_1)

{
  return;
}

// Copy<FPVDataTypeInfoGrowth> @ 14da58fe0

bool __cdecl
UE::CoreUObject::Private::Copy<FPVDataTypeInfoGrowth>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPVGravityParams> @ 14da59290

void __cdecl UE::CoreUObject::Private::Construct<FPVGravityParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = UE::Math::TVector<float>::DownVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x10) = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// ConstructForTests<FPVGravityParams> @ 14da592d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVGravityParams>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = UE::Math::TVector<float>::DownVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x10) = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FPVGravityParams> @ 14da59300

void __cdecl UE::CoreUObject::Private::Destruct<FPVGravityParams>(void *param_1)

{
  return;
}

// Copy<FPVGravityParams> @ 14da59350

bool __cdecl
UE::CoreUObject::Private::Copy<FPVGravityParams>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPVDataTypeInfoFoliageMesh> @ 14da59580

void __cdecl UE::CoreUObject::Private::Construct<FPVDataTypeInfoFoliageMesh>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPVDataTypeInfoFoliageMesh__6B_;
  return;
}

// ConstructForTests<FPVDataTypeInfoFoliageMesh> @ 14da595a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPVDataTypeInfoFoliageMesh>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPVDataTypeInfoFoliageMesh__6B_;
  return;
}

// Destruct<FPVDataTypeInfoFoliageMesh> @ 14da595c0

void __cdecl UE::CoreUObject::Private::Destruct<FPVDataTypeInfoFoliageMesh>(void *param_1)

{
  return;
}

