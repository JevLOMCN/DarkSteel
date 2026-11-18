// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 231

// Construct<FLandscapeSplineMeshEntry> @ 145eefeb0

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeSplineMeshEntry>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50) = 1;
  *(undefined1 *)((longlong)param_1 + 0x52) = 2;
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) & 0xfffffffd | 1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FLandscapeSplineMeshEntry> @ 145eeff00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeSplineMeshEntry>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50) = 1;
  *(undefined1 *)((longlong)param_1 + 0x52) = 2;
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) & 0xfffffffd | 1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  return;
}

// Destruct<FLandscapeSplineMeshEntry> @ 145eeff50

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeSplineMeshEntry>(void *param_1)

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

// Copy<FLandscapeSplineMeshEntry> @ 145eeff70

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeSplineMeshEntry>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar4 = *puVar1;
      TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(puVar4 + 1),
                 (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(puVar1 + 1))
      ;
      *(uint *)(puVar4 + 3) =
           *(uint *)(puVar4 + 3) ^ (*(uint *)(puVar4 + 3) ^ *(uint *)(puVar1 + 3)) & 1;
      uVar2 = puVar1[5];
      puVar4[4] = puVar1[4];
      puVar4[5] = uVar2;
      uVar3 = (*(uint *)(puVar4 + 6) ^ *(uint *)(puVar1 + 6)) & 1 ^ *(uint *)(puVar4 + 6);
      *(uint *)(puVar4 + 6) = uVar3;
      *(uint *)(puVar4 + 6) = (uVar3 ^ *(uint *)(puVar1 + 6)) & 2 ^ uVar3;
      uVar2 = puVar1[8];
      puVar4[7] = puVar1[7];
      puVar4[8] = uVar2;
      puVar4[9] = puVar1[9];
      *(undefined1 *)(puVar4 + 10) = *(undefined1 *)(puVar1 + 10);
      *(undefined1 *)((longlong)puVar4 + 0x51) = *(undefined1 *)((longlong)puVar1 + 0x51);
      *(undefined1 *)((longlong)puVar4 + 0x52) = *(undefined1 *)((longlong)puVar1 + 0x52);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0xb;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeSplineSegmentConnection> @ 145ef05f0

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeSplineSegmentConnection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FLandscapeSplineSegmentConnection> @ 145ef0610

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeSplineSegmentConnection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FLandscapeSplineSegmentConnection> @ 145ef0630

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeSplineSegmentConnection>(void *param_1)

{
  return;
}

// Copy<FLandscapeSplineSegmentConnection> @ 145ef0700

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeSplineSegmentConnection>
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
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeEditLayerMergeRenderBlackboardItem> @ 145ef07d0

void __cdecl
UE::CoreUObject::Private::Construct<FLandscapeEditLayerMergeRenderBlackboardItem>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLandscapeEditLayerMergeRenderBlackboardItem__6B_;
  return;
}

// ConstructForTests<FLandscapeEditLayerMergeRenderBlackboardItem> @ 145ef07f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeEditLayerMergeRenderBlackboardItem>
          (void *param_1)

{
  *(undefined ***)param_1 = &___7FLandscapeEditLayerMergeRenderBlackboardItem__6B_;
  return;
}

// Destruct<FLandscapeEditLayerMergeRenderBlackboardItem> @ 145ef0810

void __cdecl
UE::CoreUObject::Private::Destruct<FLandscapeEditLayerMergeRenderBlackboardItem>(void *param_1)

{
  return;
}

// Copy<FLandscapeEditLayerMergeRenderBlackboardItem> @ 145ef0860

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeEditLayerMergeRenderBlackboardItem>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FLandscapeSplineInterpPoint> @ 145ef0bc0

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeSplineInterpPoint>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FLandscapeSplineInterpPoint> @ 145ef0c60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeSplineInterpPoint>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FLandscapeSplineInterpPoint> @ 145ef0d00

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeSplineInterpPoint>(void *param_1)

{
  return;
}

// Copy<FLandscapeSplineInterpPoint> @ 145ef0d10

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeSplineInterpPoint>(void *param_1,void *param_2,int param_3)

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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  
  if (param_3 != 0) {
    puVar29 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar29);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      uVar21 = puVar1[0x14];
      uVar22 = puVar1[0x15];
      uVar23 = puVar1[0x16];
      uVar24 = puVar1[0x17];
      uVar25 = puVar1[0x18];
      uVar26 = puVar1[0x19];
      uVar27 = puVar1[0x1a];
      uVar28 = puVar1[0x1b];
      *puVar29 = *puVar1;
      puVar29[1] = uVar2;
      puVar29[2] = uVar3;
      puVar29[3] = uVar4;
      puVar29[4] = uVar5;
      puVar29[5] = uVar6;
      puVar29[6] = uVar7;
      puVar29[7] = uVar8;
      puVar29[8] = uVar9;
      puVar29[9] = uVar10;
      puVar29[10] = uVar11;
      puVar29[0xb] = uVar12;
      puVar29[0xc] = uVar13;
      puVar29[0xd] = uVar14;
      puVar29[0xe] = uVar15;
      puVar29[0xf] = uVar16;
      puVar29[0x10] = uVar17;
      puVar29[0x11] = uVar18;
      puVar29[0x12] = uVar19;
      puVar29[0x13] = uVar20;
      puVar29[0x14] = uVar21;
      puVar29[0x15] = uVar22;
      puVar29[0x16] = uVar23;
      puVar29[0x17] = uVar24;
      puVar29[0x18] = uVar25;
      puVar29[0x19] = uVar26;
      puVar29[0x1a] = uVar27;
      puVar29[0x1b] = uVar28;
      param_3 = param_3 + -1;
      puVar29 = puVar29 + 0x1c;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FForeignWorldSplineData> @ 145ef0fa0

void __cdecl UE::CoreUObject::Private::Construct<FForeignWorldSplineData>(void *param_1)

{
  return;
}

// ConstructForTests<FForeignWorldSplineData> @ 145ef0fb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FForeignWorldSplineData>(void *param_1)

{
  return;
}

// Construct<FForeignSplineSegmentData> @ 145ef1040

void __cdecl UE::CoreUObject::Private::Construct<FForeignSplineSegmentData>(void *param_1)

{
  return;
}

// ConstructForTests<FForeignSplineSegmentData> @ 145ef1050

void __cdecl UE::CoreUObject::Private::ConstructForTests<FForeignSplineSegmentData>(void *param_1)

{
  return;
}

// Construct<FForeignControlPointData> @ 145ef10a0

void __cdecl UE::CoreUObject::Private::Construct<FForeignControlPointData>(void *param_1)

{
  return;
}

// ConstructForTests<FForeignControlPointData> @ 145ef10b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FForeignControlPointData>(void *param_1)

{
  return;
}

// Construct<FLandscapeSplineConnection> @ 145ef1280

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeSplineConnection>(void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FLandscapeSplineConnection> @ 145ef12a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeSplineConnection>(void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FLandscapeSplineConnection> @ 145ef12c0

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeSplineConnection>(void *param_1)

{
  return;
}

// Copy<FLandscapeSplineConnection> @ 145ef1340

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeSplineConnection>(void *param_1,void *param_2,int param_3)

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
      *(uint *)(puVar2 + 1) =
           *(uint *)(puVar2 + 1) ^ (*(uint *)(puVar2 + 1) ^ *(uint *)(puVar1 + 1)) & 1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeMaterialTextureStreamingInfo> @ 145ef1be0

void __cdecl
UE::CoreUObject::Private::Construct<FLandscapeMaterialTextureStreamingInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLandscapeMaterialTextureStreamingInfo> @ 145ef1bf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeMaterialTextureStreamingInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLandscapeMaterialTextureStreamingInfo> @ 145ef1c00

void __cdecl
UE::CoreUObject::Private::Destruct<FLandscapeMaterialTextureStreamingInfo>(void *param_1)

{
  return;
}

// Copy<FLandscapeMaterialTextureStreamingInfo> @ 145ef1c10

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeMaterialTextureStreamingInfo>
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

// Construct<FGrassVariety> @ 145ef1e10

void __cdecl UE::CoreUObject::Private::Construct<FGrassVariety>(void *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString FStack_28;
  
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x43c80000;
  pFVar5 = (FString *)((longlong)param_1 + 0x20);
  pFVar1 = (FString *)((longlong)param_1 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pFVar2 = (FString *)((longlong)param_1 + 0x108);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x90) = 10000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x100) = 10000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(byte *)((longlong)param_1 + 0x1a4) = *(byte *)((longlong)param_1 + 0x1a4) & 0xf9 | 1;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x180) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 400) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0x10101;
  *(undefined4 *)((longlong)param_1 + 0x1a5) = 0x1010001;
  *(undefined1 *)((longlong)param_1 + 0x1a9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b0) = 0;
  pFVar4 = ::FString::FString(&FStack_28,GGrassQualityLevelCVarName);
  if (pFVar5 != pFVar4) {
    pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x28) = (pFVar4->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0x2c) = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&FStack_28,GGrassQualityLevelCVarName);
  if (pFVar1 != pFVar5) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0xa0) = (pFVar5->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0xa4) = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&FStack_28,GGrassQualityLevelCVarName);
  if (pFVar2 != pFVar5) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x110) = (pFVar5->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0x114) = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ConstructForTests<FGrassVariety> @ 145ef1e20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGrassVariety>(void *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString FStack_28;
  
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x43c80000;
  pFVar5 = (FString *)((longlong)param_1 + 0x20);
  pFVar1 = (FString *)((longlong)param_1 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pFVar2 = (FString *)((longlong)param_1 + 0x108);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x90) = 10000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x100) = 10000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(byte *)((longlong)param_1 + 0x1a4) = *(byte *)((longlong)param_1 + 0x1a4) & 0xf9 | 1;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x180) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 400) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0x10101;
  *(undefined4 *)((longlong)param_1 + 0x1a5) = 0x1010001;
  *(undefined1 *)((longlong)param_1 + 0x1a9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b0) = 0;
  pFVar4 = ::FString::FString(&FStack_28,GGrassQualityLevelCVarName);
  if (pFVar5 != pFVar4) {
    pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x28) = (pFVar4->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0x2c) = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&FStack_28,GGrassQualityLevelCVarName);
  if (pFVar1 != pFVar5) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0xa0) = (pFVar5->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0xa4) = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&FStack_28,GGrassQualityLevelCVarName);
  if (pFVar2 != pFVar5) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x110) = (pFVar5->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0x114) = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Destruct<FGrassVariety> @ 145ef1e30

void __cdecl UE::CoreUObject::Private::Destruct<FGrassVariety>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  if (*(void **)((longlong)param_1 + 0x160) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x160));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x120));
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xb0));
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FGrassVariety> @ 145ef1e40

bool __cdecl UE::CoreUObject::Private::Copy<FGrassVariety>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int local_res18;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    local_res18 = param_3;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(puVar3 + 1),
                 (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)(puVar1 + 1))
      ;
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar1 + 3);
      ::FString::operator=((FString *)(puVar3 + 4),(FString *)(puVar1 + 4));
      this = (TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(puVar3 + 7);
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar1 + 6);
      if (this != (TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(puVar1 + 7)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar3 + 0xe),(int *)(puVar3 + 0x10),
                   (ForElementType<FSetElementId> *)(puVar1 + 0xe),*(int *)(puVar1 + 0x10));
        iVar2 = *(int *)(puVar1 + 8);
        TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar2);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,(ForAnyElementType *)this,(int *)(puVar3 + 8),
                   (int *)((longlong)puVar3 + 0x44));
        *(undefined4 *)(puVar3 + 0xd) = *(undefined4 *)(puVar1 + 0xd);
        *(undefined4 *)((longlong)puVar3 + 0x6c) = *(undefined4 *)((longlong)puVar1 + 0x6c);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar3 + 9) !=
            (TBitArray<FDefaultBitArrayAllocator> *)(puVar1 + 9)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(puVar3 + 9),
                     (TBitArray<FDefaultBitArrayAllocator> *)(puVar1 + 9));
        }
        if (iVar2 != 0) {
          memcpy(*(void **)this,*(void **)(puVar1 + 7),(longlong)iVar2 << 4);
        }
      }
      *(undefined1 *)(puVar3 + 0x11) = *(undefined1 *)(puVar1 + 0x11);
      *(undefined4 *)((longlong)puVar3 + 0x8c) = *(undefined4 *)((longlong)puVar1 + 0x8c);
      *(undefined4 *)(puVar3 + 0x12) = *(undefined4 *)(puVar1 + 0x12);
      FPerQualityLevelInt::operator=
                ((FPerQualityLevelInt *)(puVar3 + 0x13),(FPerQualityLevelInt *)(puVar1 + 0x13));
      *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(puVar1 + 0x20);
      FPerQualityLevelInt::operator=
                ((FPerQualityLevelInt *)(puVar3 + 0x21),(FPerQualityLevelInt *)(puVar1 + 0x21));
      local_res18 = local_res18 + -1;
      *(undefined4 *)(puVar3 + 0x2e) = *(undefined4 *)(puVar1 + 0x2e);
      *(undefined8 *)((longlong)puVar3 + 0x174) = *(undefined8 *)((longlong)puVar1 + 0x174);
      *(undefined1 *)((longlong)puVar3 + 0x17c) = *(undefined1 *)((longlong)puVar1 + 0x17c);
      puVar3[0x30] = puVar1[0x30];
      puVar3[0x31] = puVar1[0x31];
      puVar3[0x32] = puVar1[0x32];
      *(undefined1 *)(puVar3 + 0x33) = *(undefined1 *)(puVar1 + 0x33);
      *(undefined4 *)((longlong)puVar3 + 0x19c) = *(undefined4 *)((longlong)puVar1 + 0x19c);
      *(undefined1 *)(puVar3 + 0x34) = *(undefined1 *)(puVar1 + 0x34);
      *(undefined1 *)((longlong)puVar3 + 0x1a1) = *(undefined1 *)((longlong)puVar1 + 0x1a1);
      *(undefined1 *)((longlong)puVar3 + 0x1a2) = *(undefined1 *)((longlong)puVar1 + 0x1a2);
      *(undefined1 *)((longlong)puVar3 + 0x1a3) = *(undefined1 *)((longlong)puVar1 + 0x1a3);
      *(undefined1 *)((longlong)puVar3 + 0x1a4) = *(undefined1 *)((longlong)puVar1 + 0x1a4);
      *(undefined1 *)((longlong)puVar3 + 0x1a5) = *(undefined1 *)((longlong)puVar1 + 0x1a5);
      *(undefined1 *)((longlong)puVar3 + 0x1a6) = *(undefined1 *)((longlong)puVar1 + 0x1a6);
      *(undefined1 *)((longlong)puVar3 + 0x1a7) = *(undefined1 *)((longlong)puVar1 + 0x1a7);
      *(undefined1 *)(puVar3 + 0x35) = *(undefined1 *)(puVar1 + 0x35);
      *(undefined1 *)((longlong)puVar3 + 0x1a9) = *(undefined1 *)((longlong)puVar1 + 0x1a9);
      *(undefined4 *)((longlong)puVar3 + 0x1ac) = *(undefined4 *)((longlong)puVar1 + 0x1ac);
      *(undefined1 *)(puVar3 + 0x36) = *(undefined1 *)(puVar1 + 0x36);
      puVar3 = puVar3 + 0x37;
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FGizmoSelectData> @ 145ef2460

void __cdecl UE::CoreUObject::Private::Construct<FGizmoSelectData>(void *param_1)

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

// ConstructForTests<FGizmoSelectData> @ 145ef2490

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGizmoSelectData>(void *param_1)

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

// Destruct<FGizmoSelectData> @ 145ef24c0

void __cdecl UE::CoreUObject::Private::Destruct<FGizmoSelectData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<ULandscapeLayerInfoObject_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULandscapeLayerInfoObject_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FGizmoSelectData> @ 145ef2500

bool __cdecl
UE::CoreUObject::Private::Copy<FGizmoSelectData>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<ULandscapeLayerInfoObject_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  int iVar2;
  TSparseArray<TSparseSetElement<TTuple<ULandscapeLayerInfoObject_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<ULandscapeLayerInfoObject_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        iVar2 = *(int *)&pTVar1->field_0x8;
        TSparseArray<TSparseSetElement<TTuple<ULandscapeLayerInfoObject_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar2);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,(ForAnyElementType *)this,(int *)&this->field_0x8,
                   (int *)&this->field_0xc);
        *(undefined4 *)&this->field_0x30 = *(undefined4 *)&pTVar1->field_0x30;
        *(undefined4 *)&this->field_0x34 = *(undefined4 *)&pTVar1->field_0x34;
        if (&this->field_0x10 != &pTVar1->field_0x10) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                     (TBitArray<FDefaultBitArrayAllocator> *)&pTVar1->field_0x10);
        }
        if (iVar2 != 0) {
          memcpy(*(void **)this,*(void **)pTVar1,(longlong)iVar2 * 0x18);
        }
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<ULandscapeLayerInfoObject_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeBrushParameters> @ 145ef7890

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeBrushParameters>(void *param_1)

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
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0x7fffffff;
  *(undefined1 *)((longlong)param_1 + 0x70) = 3;
  return;
}

// ConstructForTests<FLandscapeBrushParameters> @ 145ef7920

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeBrushParameters>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)param_1 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x10) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x18) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0x7fffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70) = 3;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  return;
}

// Destruct<FLandscapeBrushParameters> @ 145ef7990

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeBrushParameters>(void *param_1)

{
  return;
}

// Copy<FLandscapeBrushParameters> @ 145ef79b0

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeBrushParameters>(void *param_1,void *param_2,int param_3)

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
    uVar2 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar2;
    uVar2 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar2;
    uVar2 = puVar4[7];
    puVar3[6] = puVar4[6];
    puVar3[7] = uVar2;
    uVar2 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar2;
    uVar2 = puVar4[0xb];
    puVar3[10] = puVar4[10];
    puVar3[0xb] = uVar2;
    puVar3[0xc] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x60 - (longlong)param_1))
    ;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x68 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[0xd] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x68 - (longlong)param_1))
    ;
    *(undefined1 *)(puVar3 + 0xe) =
         *(undefined1 *)((longlong)puVar3 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)puVar3 + 0x74) =
         *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x74 - (longlong)param_1));
    puVar3 = puVar3 + 0x10;
    puVar4 = puVar4 + 0x10;
  }
  return true;
}

// Construct<FGrassInput> @ 145ef7e30

void __cdecl UE::CoreUObject::Private::Construct<FGrassInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGrassInput> @ 145ef7e60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGrassInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGrassInput> @ 145ef7e90

void __cdecl UE::CoreUObject::Private::Destruct<FGrassInput>(void *param_1)

{
  return;
}

// Copy<FGrassInput> @ 145ef7ea0

bool __cdecl UE::CoreUObject::Private::Copy<FGrassInput>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar3 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar3 + 8);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x30);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeLayer> @ 145ef7f50

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeLayer>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLandscapeLayer__6B_;
  FGuid::NewGuid((FGuid *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// ConstructForTests<FLandscapeLayer> @ 145ef7f60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeLayer>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLandscapeLayer__6B_;
  FGuid::NewGuid((FGuid *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// Destruct<FLandscapeLayer> @ 145ef7f70

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeLayer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  return;
}

// Copy<FLandscapeLayer> @ 145ef7fc0

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeLayer>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FLandscapeLayerBrush *pFVar5;
  undefined8 uVar6;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar6;
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x30)) {
      iVar4 = *(int *)((longlong)param_2 + 0x38);
      piVar2 = (int *)((longlong)param_1 + 0x3c);
      pFVar5 = (FLandscapeLayerBrush *)((ForAnyElementType *)((longlong)param_2 + 0x30))->Data;
      *(int *)((longlong)param_1 + 0x38) = iVar4;
      if ((iVar4 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
        ConstructItems<FLandscapeLayerBrush,FLandscapeLayerBrush,int>(pFVar1->Data,pFVar5,iVar4);
      }
    }
    if ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0x40) !=
        (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0x40)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)param_1 + 0x78),
                 (int *)((longlong)param_1 + 0x88),
                 (ForElementType<FSetElementId> *)((longlong)param_2 + 0x78),
                 *(int *)((longlong)param_2 + 0x88));
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0x40),
                  (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeLayerInfoObject>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0x40));
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x90) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x90));
    }
    puVar3 = (undefined8 *)((longlong)param_2 + 0x90);
    param_2 = (void *)((longlong)param_2 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0x90) = *puVar3;
    param_1 = (void *)((longlong)param_1 + 0x98);
  }
  return true;
}

// Construct<FLandscapeLayerBrush> @ 145ef8200

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeLayerBrush>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLandscapeLayerBrush__6B_;
  return;
}

// ConstructForTests<FLandscapeLayerBrush> @ 145ef8220

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeLayerBrush>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLandscapeLayerBrush__6B_;
  return;
}

// Destruct<FLandscapeLayerBrush> @ 145ef8240

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeLayerBrush>(void *param_1)

{
  return;
}

// Copy<FLandscapeLayerBrush> @ 145ef8250

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeLayerBrush>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_> @ 145effc50

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<UObject_*> *param_5,
          int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 5) {
    if (param_5->SecondaryData == (ForElementType<UObject_*>)0x0) goto LAB_145effcbe;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_145effcbe:
  *param_7 = uVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_> @ 145effd00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
          (ushort param_1,ForElementType<FRDGTexture_*> *param_2,int *param_3)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_> @ 145effdc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
          (ushort param_1,ForElementType<FPSOPrecacheVertexFactoryData> *param_2,int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPSOPrecacheVertexFactoryData>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>_> @ 145effe90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>_>
          (ushort param_1,
          ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
          *param_2,int *param_3)

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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType> @ 145efff60

int __cdecl
UE::Core::Private::ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar2 = *param_5;
  iVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar6 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar5 = (ulonglong)(int)uVar1;
    if (iVar6 == 0) {
      uVar3 = 4;
      if (4 < uVar5) {
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(param_1 * uVar3,param_2);
    iVar6 = (int)(uVar4 / param_1);
    if (iVar6 < (int)uVar1) {
      iVar6 = 0x7fffffff;
    }
    NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::ResizeAllocation
              (param_4,iVar2,iVar6,param_1,param_2);
    *param_6 = iVar6;
  }
  return iVar2;
}

// ReallocShrink<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType> @ 145f00040

void __cdecl
UE::Core::Private::ReallocShrink<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
          (uint param_1,uint param_2,ForAnyElementType *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  
  iVar1 = *param_5;
  if (((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
     ((0x40 < iVar1 - param_4 || (param_4 == 0)))) {
    iVar2 = param_4;
    if (0 < param_4) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * (ulonglong)param_1,param_2);
      iVar2 = (int)(uVar3 / param_1);
    }
    if (iVar2 != iVar1) {
      *param_5 = iVar2;
      NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::ResizeAllocation
                (param_3,param_4,iVar2,param_1,param_2);
    }
  }
  return;
}

// RenderMergedTexture @ 145f1a6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145f1b42f) */
/* WARNING: Removing unreachable block (ram,0x000145f1b43f) */
/* WARNING: Removing unreachable block (ram,0x000145f1b861) */
/* WARNING: Removing unreachable block (ram,0x000145f1b86d) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Landscape::Private::RenderMergedTexture_RenderThread::RenderMergedTexture
          (FRenderInfo *param_1,FRDGBuilder *param_2,FRenderTargetBinding *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  FTexture2DResource *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  TIntPoint<int>_u_0 TVar28;
  FRenderInfo *pFVar29;
  int iVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  FString *pFVar35;
  FRDGScope *this;
  FRDGTexture *pFVar36;
  FTexture2DResourceSubregion *pFVar37;
  undefined8 *puVar38;
  TRefCountPtr<IPooledRenderTarget> TVar39;
  FRDGTextureSRV *pFVar40;
  FGlobalShaderMap *pFVar41;
  FShaderType *pFVar42;
  FName FVar43;
  FRDGEventName *pFVar44;
  int iVar45;
  longlong lVar46;
  uint uVar47;
  ForElementType<FSetElementId> FVar48;
  ForElementType<FSetElementId> FVar49;
  uint *puVar50;
  int iVar51;
  undefined1 auStackY_4a8 [32];
  int local_448;
  int local_444;
  int local_440;
  int local_43c;
  int local_430;
  int local_42c;
  undefined1 local_424 [4];
  FTexture2DResourceSubregion *local_420;
  int local_418;
  undefined8 local_414;
  TIntPoint<int>_u_0 local_40c;
  TIntPoint<int>_u_0 local_404;
  undefined8 *local_3f8;
  undefined8 *local_3f0;
  undefined8 local_3e8;
  undefined8 *local_3e0;
  FRDGTextureSRVDesc local_3d8;
  TPairInitializer<FTexture2DResource_*_const_&,FRDGTextureSRV_*_&&> local_3c0;
  FRenderInfo *local_3b0;
  FRDGTextureSRVDesc local_3a8;
  TIntRect<int>_u_0 local_390;
  int local_380;
  FScriptContainerElement *local_378;
  int local_370;
  int iStack_36c;
  int local_368;
  int iStack_364;
  int local_360;
  int iStack_35c;
  undefined8 *local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  FRenderTargetBinding *local_348;
  FRenderTargetBinding local_340;
  TIntRect<int>_u_0 local_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  FMemStackBase *local_2f8;
  FRDGTextureSRV *local_2f0;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  int local_2d8;
  FScriptContainerElement *local_2d0;
  undefined1 local_2c8 [32];
  FRDGScope *local_2a8;
  char local_2a0;
  TMap<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,0>_>
  *local_298;
  int iStack_290;
  uint uStack_28c;
  undefined1 *local_288;
  undefined4 uStack_280;
  int iStack_27c;
  int local_278;
  int iStack_274;
  TMap<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,0>_>
  *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  FTexture2DResourceSubregion *local_240;
  undefined1 *local_238;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_228;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_218;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[23],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[23],wchar_t_const_*_&&>_>_>
  local_208;
  TIntRect<int>_u_0 local_1e8 [2];
  undefined1 local_1c8;
  undefined1 local_1c4 [12];
  undefined4 local_1b8;
  TShaderRefBase<FLandscapeMergeTexturesPS,FShaderMapPointerTable> local_1a8;
  FString local_198;
  TShaderRefBase<FLandscapeResampleMergedTexturePS,FShaderMapPointerTable> local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  uint uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  FRDGEventName local_128;
  FRDGEventName local_110;
  TSet<TTuple<FTexture2DResource_*,FRDGTextureSRV_*>,TDefaultMapHashableKeyFuncs<FTexture2DResource_*,FRDGTextureSRV_*,0>,FDefaultSetAllocator>
  local_f8;
  undefined1 local_a8 [24];
  float local_90;
  int local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  char local_75;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  cVar6 = *(char *)((longlong)&param_2->_padding_ + 6);
  local_2a0 = '\0';
  local_378 = (FScriptContainerElement *)0x15060d16c;
  local_3b0 = param_1;
  local_348 = param_3;
  if ((cVar6 != '\0') && ((cVar6 != '\x01' || ((param_2->_padding_ & 4) == 0)))) {
    pFVar35 = ::FName::ToString(&param_1->TargetLayerName,&local_178);
    if ((pFVar35->Data).ArrayNum == 0) {
      local_2d0 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_2d0 = (pFVar35->Data).AllocatorInstance.Data;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xda8;
      local_138 = 0;
      uStack_134 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_13c);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_RenderMergedTex;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::Landscape::Private::RenderMergedTexture_RenderThread::RenderMergedTexture'::__l7
             ::<lambda_1>::operator()<wchar_t_const_*>'::__l3::<lambda_2>::
             operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[23],wchar_t_const_*_&&>_>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_208._Myfirst._Val = &::Desc;
    local_208._padding_ = 0x151196fc8;
    local_2c8._24_8_ = param_2;
    local_208._padding_ = (longlong)&local_2d0;
    local_208._padding_ = (longlong)local_424;
    this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_2->_padding_,(FRDGScope **)param_2);
    param_2->_padding_ = (longlong)this;
    local_2a8 = this;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[23],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[23],wchar_t_const_*_&&>_>_>_>
              (&(this->Impl).Impl,(FRDGScopeState *)param_2,&local_208);
    if (*(char *)((longlong)&param_2->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)param_2->_padding_,false);
      FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)param_2->_padding_);
    }
    local_2a0 = '\x01';
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  local_288 = &(param_1->ComponentTexturesToRender).field_0x10;
  local_43c = 0;
  iVar34 = *(int *)&(param_1->ComponentTexturesToRender).field_0x28;
  local_440 = 0;
  iStack_290 = 0;
  local_444 = 0;
  uStack_28c = 1;
  local_448 = 0;
  local_278 = 0;
  iStack_27c = 0;
  if (iVar34 != 0) {
    puVar50 = *(uint **)&(param_1->ComponentTexturesToRender).field_0x20;
    if (puVar50 == (uint *)0x0) {
      puVar50 = (uint *)local_288;
    }
    uVar47 = *puVar50;
    iStack_290 = 0;
    while (uVar47 == 0) {
      lVar46 = (longlong)iStack_290;
      local_278 = local_278 + 0x20;
      iStack_290 = iStack_290 + 1;
      iStack_27c = iVar34;
      if ((int)(iVar34 + -1 + (iVar34 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_290) goto LAB_145f1a8d5;
      uVar47 = puVar50[lVar46 + 1];
    }
    uStack_28c = -uVar47 & uVar47;
    uVar5 = (ulonglong)uStack_28c * 2 + 1;
    lVar46 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar46 == 0; lVar46 = lVar46 + -1) {
      }
    }
    local_2d8 = (int)lVar46;
    iStack_27c = local_278 + -1 + local_2d8;
    if (iVar34 < iStack_27c) {
      iStack_27c = iVar34;
    }
  }
LAB_145f1a8d5:
  local_298 = &param_1->ComponentTexturesToRender;
  uStack_280 = 0xffffffff;
  TStack_260.UnvisitedBitMask = 0xffffffff;
  TStack_260._24_8_ = CONCAT44(iStack_27c,local_278);
  iStack_274 = iStack_27c;
  local_268 = local_298;
  TStack_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_288;
  TStack_260._padding_._0_4_ = iStack_290;
  TStack_260._padding_._4_4_ = uStack_28c;
  TStack_260.CurrentBitIndex = iStack_27c;
  if (iStack_27c < iVar34) {
    local_444 = 0;
    local_440 = local_444;
    local_43c = local_444;
    iVar34 = 0;
    do {
      uVar10 = *(undefined8 *)(*(longlong *)local_268 + (longlong)TStack_260.CurrentBitIndex * 0x30)
      ;
      iVar32 = (int)uVar10;
      iVar30 = iVar32;
      if (local_43c < iVar32) {
        iVar30 = local_43c;
      }
      local_43c = iVar30;
      local_448 = (int)((ulonglong)uVar10 >> 0x20);
      iVar30 = local_448;
      if (local_440 < local_448) {
        iVar30 = local_440;
      }
      local_440 = iVar30;
      if (iVar32 < local_444) {
        iVar32 = local_444;
      }
      local_444 = iVar32;
      if (local_448 < iVar34) {
        local_448 = iVar34;
      }
      TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
      param_1 = local_3b0;
      iVar34 = local_448;
    } while (TStack_260.CurrentBitIndex < (TStack_260.Array)->NumBits);
  }
  lVar46 = 0;
  local_a8._0_8_ = 9;
  local_a8._8_8_ = FClearValueBinding::Black._0_8_;
  local_a8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_88 = 0;
  local_7c = 0x10001;
  local_78 = 0x101;
  local_76 = 0;
  local_74 = 0xff00;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 1;
  local_370 = ((local_444 + 1) - local_43c) * (param_1->SubsectionSizeQuads).field0_0x0._s_0.X *
              param_1->NumSubsections + 1;
  iStack_36c = ((local_448 + 1) - local_440) * (param_1->SubsectionSizeQuads).field0_0x0._s_0.Y *
               param_1->NumSubsections + 1;
  local_3e8 = CONCAT44(iStack_36c,local_370);
  local_90 = FClearValueBinding::Black.Value.Color[3];
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_84._4_4_ = iStack_36c;
  local_84._0_4_ = local_370;
  local_75 = (param_1->bIsHeightmap != false) + '\x03';
  pFVar36 = FRDGBuilder::CreateTexture
                      (param_2,(FRDGTextureDesc *)local_a8,L"LandscapeMergedTextureAtlas",None);
  local_3a8._padding_._0_2_ = 0;
  local_3a8._padding_._3_1_ = 0;
  local_3a8._padding_._2_1_ = (pFVar36->Desc).field_0x30;
  cVar6 = (pFVar36->Desc).field_0x32;
  local_3a8._padding_._4_4_ = 0;
  local_3a8._padding_._0_1_ = 0;
  local_3a8._padding_._2_1_ = 0;
  if ((cVar6 == '\x01') || (cVar6 == '\x04')) {
    local_3a8._padding_._4_4_ = (uint)*(ushort *)&(pFVar36->Desc).field_0x2e << 0x10;
  }
  local_3a8.Texture = pFVar36;
  local_2f0 = FRDGBuilder::CreateSRV(param_2,&local_3a8);
  local_340.ResolveTexture = (FRDGTexture *)0x0;
  local_340.LoadAction = ENoAction;
  local_340.MipIndex = '\0';
  local_340.ArraySlice = -1;
  local_340.Texture = pFVar36;
  bVar31 = FRenderTargetBinding::Validate(&local_340);
  if ((!bVar31) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar31)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_1c8 = 0;
  local_1c4._0_4_ = 0;
  local_1c4._4_8_ = 1;
  local_1b8._0_1_ = '\x01';
  local_1b8._1_1_ = '\0';
  local_1b8._2_1_ = Texture2D;
  local_1b8._3_1_ = PF_Unknown;
  local_1e8[0]._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_1e8[0]._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  AddClearRenderTargetPass(param_2,pFVar36,(FRDGTextureClearInfo *)&local_1e8[0]._s_0);
  FVar49 = (ForElementType<FSetElementId>)0x0;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  do {
    iVar34 = local_440;
    iVar30 = local_43c;
    if (local_448 + 1 <= local_440) {
      pFVar36 = local_348->Texture;
      if ((pFVar36 == (FRDGTexture *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputTexture != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                              ,0xdf9,L""), bVar31)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar3 = &(pFVar36->Desc).field_0x24;
      uVar8 = *(undefined4 *)puVar3;
      uVar9 = *(undefined4 *)&(pFVar36->Desc).field_0x28;
      uVar10 = *(undefined8 *)puVar3;
      puVar38 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x170,0x10);
      if (puVar38 == (undefined8 *)0x0) {
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar31) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else {
        *puVar38 = &
                   ___7__TObject_VFParameters_FLandscapeResampleMergedTexturePS___FRDGAllocator__6B_
        ;
        puVar38[10] = 0;
        puVar38[0xb] = 0;
        FRenderTargetBindingSlots::FRenderTargetBindingSlots
                  ((FRenderTargetBindingSlots *)(puVar38 + 0xe));
      }
      local_3f0 = puVar38;
      if ((((undefined8 **)param_2->_padding_ <= &local_3f0) &&
          (&local_3f0 <
           (undefined8 **)param_2->_padding_ + *(int *)((longlong)&param_2->_padding_ + 4))) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar31)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar34 = (int)param_2->_padding_;
      piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
      if (iVar34 == *piVar1) {
        iVar34 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_2->_padding_,piVar1);
      }
      *(int *)&param_2->_padding_ = iVar34 + 1;
      *(undefined8 **)(param_2->_padding_ + (longlong)iVar34 * 8) = local_3f0;
      dVar13 = (param_1->OutputUVToMergedTextureUV).M[1][2];
      dVar14 = (param_1->OutputUVToMergedTextureUV).M[1][3];
      dVar15 = (param_1->OutputUVToMergedTextureUV).M[1][0];
      dVar16 = (param_1->OutputUVToMergedTextureUV).M[1][1];
      dVar17 = (param_1->OutputUVToMergedTextureUV).M[2][2];
      dVar18 = (param_1->OutputUVToMergedTextureUV).M[2][3];
      dVar19 = (param_1->OutputUVToMergedTextureUV).M[2][0];
      dVar20 = (param_1->OutputUVToMergedTextureUV).M[2][1];
      dVar21 = (param_1->OutputUVToMergedTextureUV).M[3][2];
      dVar22 = (param_1->OutputUVToMergedTextureUV).M[3][3];
      dVar23 = (param_1->OutputUVToMergedTextureUV).M[3][0];
      dVar24 = (param_1->OutputUVToMergedTextureUV).M[3][1];
      dVar25 = (param_1->OutputUVToMergedTextureUV).M[0][2];
      dVar26 = (param_1->OutputUVToMergedTextureUV).M[0][3];
      dVar27 = (param_1->OutputUVToMergedTextureUV).M[0][1];
      (((FParameters *)(puVar38 + 2))->InOutputUVToMergedTextureUV).M[0][0] =
           (float)(param_1->OutputUVToMergedTextureUV).M[0][0];
      *(float *)((longlong)puVar38 + 0x14) = (float)dVar27;
      *(float *)(puVar38 + 3) = (float)dVar25;
      *(float *)((longlong)puVar38 + 0x1c) = (float)dVar26;
      *(float *)(puVar38 + 4) = (float)dVar15;
      *(float *)((longlong)puVar38 + 0x24) = (float)dVar16;
      *(float *)(puVar38 + 5) = (float)dVar13;
      *(float *)((longlong)puVar38 + 0x2c) = (float)dVar14;
      *(float *)(puVar38 + 6) = (float)dVar19;
      *(float *)((longlong)puVar38 + 0x34) = (float)dVar20;
      *(float *)(puVar38 + 7) = (float)dVar17;
      *(float *)((longlong)puVar38 + 0x3c) = (float)dVar18;
      *(float *)(puVar38 + 8) = (float)dVar23;
      *(float *)((longlong)puVar38 + 0x44) = (float)dVar24;
      *(float *)(puVar38 + 9) = (float)dVar21;
      *(float *)((longlong)puVar38 + 0x4c) = (float)dVar22;
      puVar38[10] = local_2f0;
      puVar38[0xb] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                     ::StaticResource.StateRHI.Reference;
      puVar38[0xc] = uVar10;
      pFVar36 = local_348->ResolveTexture;
      uVar10 = *(undefined8 *)&local_348->LoadAction;
      puVar38[0xe] = local_348->Texture;
      puVar38[0xf] = pFVar36;
      puVar38[0x10] = uVar10;
      bVar31 = param_1->bCompressHeight;
      bVar7 = param_1->bIsHeightmap;
      local_350 = uVar8;
      uStack_34c = uVar9;
      pFVar41 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)GMaxRHIFeatureLevel]);
      pFVar42 = (FShaderType *)FLandscapeResampleMergedTexturePS::GetStaticType();
      FGlobalShaderMap::GetShader
                (pFVar41,&local_218,pFVar42,(-(uint)(bVar31 != false) & 2) + (uint)(bVar7 != false))
      ;
      if (local_218.ShaderContent == (FShader *)0x0) {
        FVar43 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2e0);
        pFVar35 = ::FName::ToString((FName *)FVar43,&local_198);
        if ((pFVar35->Data).ArrayNum != 0) {
          local_378 = (pFVar35->Data).AllocatorInstance.Data;
        }
        FLandscapeResampleMergedTexturePS::GetStaticType();
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (bVar31) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      FLandscapeResampleMergedTexturePS::GetStaticType();
      local_328._8_4_ = *(undefined4 *)(puVar38 + 0xc);
      local_328._12_4_ = *(undefined4 *)((longlong)puVar38 + 100);
      local_188.ShaderContent = (FLandscapeResampleMergedTexturePS *)local_218.ShaderContent;
      local_188.ShaderMap = local_218.ShaderMap;
      local_328._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      pFVar44 = FRDGEventName::FRDGEventName(&local_110,1,L"ResampleMergedTexture");
      FPixelShaderUtils::AddFullscreenPass<FLandscapeResampleMergedTexturePS>
                (param_2,pFVar41,pFVar44,&local_188,(FParameters *)(puVar38 + 2),
                 (TIntRect<int> *)&local_328._s_0,(FRHIBlendState *)0x0,(FRHIRasterizerState *)0x0,
                 (FRHIDepthStencilState *)0x0,0,None);
      if (local_110.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_110.FormattedEventName.Data.AllocatorInstance.Data);
      }
      local_f8.HashSize = 0;
      if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FTexture2DResource_*,FRDGTextureSRV_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FTexture2DResource_*,FRDGTextureSRV_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f8.Elements);
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_2a0 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
                  ((TRDGEventScopeGuard<FRDGScope_RHI> *)(local_2c8 + 0x18));
      }
      return;
    }
    for (; iVar30 < local_444 + 1; iVar30 = iVar30 + 1) {
      TVar28._s_0.Y = iVar34;
      TVar28._s_0.X = iVar30;
      local_368 = iVar30;
      iStack_364 = iVar34;
      pFVar37 = TMapBase<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,0>_>
                ::Find((TMapBase<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,0>_>
                        *)&param_1->ComponentTexturesToRender,(TIntPoint<int>)TVar28);
      local_420 = pFVar37;
      if (pFVar37 != (FTexture2DResourceSubregion *)0x0) {
        pFVar11 = pFVar37->Texture;
        local_3c0.Key._4_4_ =
             (*(int *)((longlong)&(pFVar37->Subregion).field0_0x0 + 8) -
             *(int *)&(pFVar37->Subregion).field0_0x0) / param_1->NumSubsections;
        local_418 = (*(int *)((longlong)&(pFVar37->Subregion).field0_0x0 + 0xc) -
                    *(int *)((longlong)&(pFVar37->Subregion).field0_0x0 + 4)) /
                    param_1->NumSubsections;
        uVar47 = ((uint)((ulonglong)pFVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar11 >> 4)) *
                 -0x7a143595;
        uVar47 = (uVar47 >> 0xd ^ uVar47) * -0x3d4d51cb;
        if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
          FVar48 = (ForElementType<FSetElementId>)&local_f8.Hash;
          if (FVar49 != (ForElementType<FSetElementId>)0x0) {
            FVar48 = FVar49;
          }
          iVar32 = *(int *)((longlong)FVar48 +
                           (ulonglong)(local_f8.HashSize - 1U & (uVar47 >> 0x10 ^ uVar47)) * 4);
          while (iVar32 != -1) {
            lVar4 = lVar46 + (longlong)iVar32 * 0x18;
            if (*(FTexture2DResource **)(lVar46 + (longlong)iVar32 * 0x18) == pFVar11) {
              local_358 = (undefined8 *)(lVar4 + 8);
              if (lVar4 == 0) {
                local_358 = (undefined8 *)0x0;
              }
              if (local_358 != (undefined8 *)0x0) goto LAB_145f1affd;
              break;
            }
            iVar32 = *(int *)(lVar4 + 0x10);
          }
        }
        pFVar35 = ::FName::ToString((FName *)((longlong)&pFVar11->_padding_ + 4),&local_168);
        puVar38 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x18,0x10);
        if (puVar38 == (undefined8 *)0x0) {
          bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar31) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          puVar38[1] = 0;
          *puVar38 = &___7__TObject_VFString___FRDGAllocator__6B_;
          puVar38[1] = (pFVar35->Data).AllocatorInstance.Data;
          (pFVar35->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar38 + 2) = (pFVar35->Data).ArrayNum;
          *(int *)((longlong)puVar38 + 0x14) = (pFVar35->Data).ArrayMax;
          (pFVar35->Data).ArrayNum = 0;
          (pFVar35->Data).ArrayMax = 0;
        }
        local_3e0 = puVar38;
        if ((((undefined8 **)param_2->_padding_ <= &local_3e0) &&
            (&local_3e0 <
             (undefined8 **)param_2->_padding_ + *(int *)((longlong)&param_2->_padding_ + 4))) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar31)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar32 = (int)param_2->_padding_;
        piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
        if (iVar32 == *piVar1) {
          iVar32 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&param_2->_padding_,piVar1);
        }
        *(int *)&param_2->_padding_ = iVar32 + 1;
        *(undefined8 **)(param_2->_padding_ + (longlong)iVar32 * 8) = local_3e0;
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        pFVar37 = local_420;
        TVar39 = CreateRenderTarget((FRHITexture *)local_2c8,
                                    (wchar_t *)local_420->Texture->_padding_);
        pFVar36 = FRDGBuilder::RegisterExternalTexture
                            (param_2,(TRefCountPtr<IPooledRenderTarget> *)TVar39.Reference,None);
        if ((longlong *)local_2c8._0_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_2c8._0_8_ + 0x38))();
        }
        local_3d8._padding_._0_2_ = 0;
        local_3d8._padding_._4_4_ = 0;
        local_3d8._padding_._0_1_ = 0;
        local_3d8._padding_._2_1_ = 0;
        local_3d8._padding_._2_1_ = (pFVar36->Desc).field_0x30;
        cVar6 = (pFVar36->Desc).field_0x32;
        local_3d8._padding_._3_1_ = 0;
        if ((cVar6 == '\x01') || (cVar6 == '\x04')) {
          local_3d8._padding_._4_4_ = (uint)*(ushort *)&(pFVar36->Desc).field_0x2e << 0x10;
        }
        local_3d8.Texture = pFVar36;
        FRDGUserValidation::ValidateCreateSRV(&param_2->UserValidation,&local_3d8);
        pFVar36 = local_3d8.Texture;
        pFVar40 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x48,8);
        pFVar40 = FRDGTextureSRV::FRDGTextureSRV(pFVar40,(wchar_t *)pFVar36->_padding_,&local_3d8);
        piVar1 = &(param_2->Views).Array.ArrayMax;
        iVar32 = (param_2->Views).Array.ArrayNum;
        if (iVar32 == *piVar1) {
          iVar32 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)&param_2->Views,piVar1);
        }
        (param_2->Views).Array.ArrayNum = iVar32 + 1;
        (param_2->Views).Array.AllocatorInstance.Data[iVar32] = (FRDGView *)pFVar40;
        *(int *)((longlong)&pFVar40->_padding_ + 4) = (param_2->Views).Array.ArrayNum + -1;
        FRDGUserValidation::ValidateCreateSRV(&param_2->UserValidation,pFVar40);
        local_238 = local_2c8 + 8;
        local_240 = pFVar37;
        local_2c8._8_8_ = pFVar40;
        TSet<TTuple<FTexture2DResource_*,FRDGTextureSRV_*>,TDefaultMapHashableKeyFuncs<FTexture2DResource_*,FRDGTextureSRV_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FTexture2DResource_*_const_&,FRDGTextureSRV_*_&&>_>
                  (&local_f8,&local_3c0,(bool *)&local_240);
        local_358 = (undefined8 *)
                    (local_f8.Elements._0_8_ + ((longlong)(int)local_3c0.Key * 3 + 1) * 8);
        FVar49 = local_f8.Hash.SecondaryData;
        lVar46 = local_f8.Elements._0_8_;
LAB_145f1affd:
        iVar32 = param_1->NumSubsections;
        local_42c = 0;
        if (0 < iVar32) {
          do {
            local_430 = 0;
            if (0 < iVar32) {
              local_2f8 = (FMemStackBase *)&param_2->_padding_;
              plVar2 = &param_2->_padding_;
              iStack_35c = local_42c;
              do {
                iVar51 = (param_1->SubsectionSizeQuads).field0_0x0._s_0.X;
                iVar45 = iVar32 * iVar30 + local_430;
                iVar32 = iVar32 * iVar34 + local_42c;
                iVar33 = (param_1->SubsectionSizeQuads).field0_0x0._s_0.Y;
                local_414 = CONCAT44(iVar32,iVar45);
                local_40c._s_0.Y = iVar32 * iVar33;
                local_40c._s_0.X = iVar45 * iVar51;
                local_318 = CONCAT44(local_40c._s_0.Y,local_40c._s_0.X);
                local_390._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_40c;
                uVar10 = *(undefined8 *)&(pFVar37->Subregion).field0_0x0;
                local_404._s_0.Y = local_40c._s_0.Y + iVar33 + 1;
                local_404._s_0.X = local_40c._s_0.X + iVar51 + 1;
                local_390._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_404;
                local_310 = CONCAT44(iStack_35c,local_430);
                local_308._4_4_ = (int)((ulonglong)uVar10 >> 0x20);
                iVar32 = local_308._4_4_ + iStack_35c * local_418;
                local_3c0.Value._0_4_ = local_430 * local_3c0.Key._4_4_ + (int)uVar10;
                iVar51 = local_3c0.Key._4_4_ + local_430 * local_3c0.Key._4_4_;
                local_300 = CONCAT44(iVar32,(int)local_3c0.Value);
                local_380 = iVar32 + local_418;
                local_360 = local_430;
                local_308 = uVar10;
                local_2c8._16_8_ = TVar28;
                puVar38 = FMemStackBase::Alloc(local_2f8,0x140,0x10);
                if (puVar38 == (undefined8 *)0x0) {
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                      ,0x61,L"");
                  if (bVar31) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                }
                else {
                  *puVar38 = &
                             ___7__TObject_VFParameters_FLandscapeMergeTexturesPS___FRDGAllocator__6B_
                  ;
                  puVar38[7] = 0;
                  FRenderTargetBindingSlots::FRenderTargetBindingSlots
                            ((FRenderTargetBindingSlots *)(puVar38 + 8));
                }
                local_3f8 = puVar38;
                if ((((undefined8 **)*plVar2 <= &local_3f8) &&
                    (&local_3f8 <
                     (undefined8 **)*plVar2 + *(int *)((longlong)&param_2->_padding_ + 4))) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar31)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar33 = (int)param_2->_padding_;
                if (iVar33 == *(int *)((longlong)&param_2->_padding_ + 4)) {
                  iVar33 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)plVar2,
                                      (int *)((longlong)&param_2->_padding_ + 4));
                }
                pFVar29 = local_3b0;
                pFVar37 = local_420;
                *(int *)&param_2->_padding_ = iVar33 + 1;
                *(undefined8 **)(*plVar2 + (longlong)iVar33 * 8) = local_3f8;
                (((FParameters *)(puVar38 + 2))->InAtlasSubregion).field0_0x0._s_0.X =
                     local_390._0_4_;
                *(undefined4 *)((longlong)puVar38 + 0x14) = local_390._4_4_;
                *(undefined4 *)(puVar38 + 3) = local_390._8_4_;
                *(undefined4 *)((longlong)puVar38 + 0x1c) = local_390._12_4_;
                puVar38[7] = *local_358;
                *(int *)(puVar38 + 4) = (int)local_3c0.Value;
                *(int *)((longlong)puVar38 + 0x24) = iVar32;
                *(int *)(puVar38 + 5) = iVar51 + (int)uVar10;
                *(int *)((longlong)puVar38 + 0x2c) = local_380;
                if (((local_3b0->bIsHeightmap == false) &&
                    ((local_420->ChannelIndex < 0 || (3 < local_420->ChannelIndex)))) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InRenderInfo.bIsHeightmap || ((SourceTextureResourceSubregion->ChannelIndex >= 0) && (SourceTextureResourceSubregion->ChannelIndex < 4))"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                                        ,0xdec,L""), bVar31)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                *(int *)(puVar38 + 6) = pFVar37->ChannelIndex;
                puVar38[8] = local_340.Texture;
                puVar38[9] = local_340.ResolveTexture;
                puVar38[10] = CONCAT44(local_340._20_4_,local_340._16_4_);
                bVar31 = pFVar29->bIsHeightmap;
                pFVar41 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                             [(int)GMaxRHIFeatureLevel]);
                pFVar42 = (FShaderType *)FLandscapeMergeTexturesPS::GetStaticType();
                FGlobalShaderMap::GetShader(pFVar41,&local_228,pFVar42,(uint)(bVar31 != false));
                if ((ForElementType<EPixelFormat>)local_228.ShaderContent ==
                    (ForElementType<EPixelFormat>)0x0) {
                  FVar43 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2e8);
                  ::FName::ToString((FName *)FVar43,&local_158);
                  FLandscapeMergeTexturesPS::GetStaticType();
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Shader.IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                      ,0xc0,L"Failed to find shader type %s in Platform %s");
                  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_158.Data.AllocatorInstance.Data);
                  }
                  if (bVar31) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                }
                FLandscapeMergeTexturesPS::GetStaticType();
                local_1a8.ShaderContent = (FLandscapeMergeTexturesPS *)local_228.ShaderContent;
                local_1a8.ShaderMap = local_228.ShaderMap;
                pFVar44 = FRDGEventName::FRDGEventName(&local_128,1,L"LandscapeMergeTexture");
                FPixelShaderUtils::AddFullscreenPass<FLandscapeMergeTexturesPS>
                          (param_2,pFVar41,pFVar44,&local_1a8,(FParameters *)(puVar38 + 2),
                           (TIntRect<int> *)&local_390._s_0,(FRHIBlendState *)0x0,
                           (FRHIRasterizerState *)0x0,(FRHIDepthStencilState *)0x0,0,None);
                if (local_128.FormattedEventName.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.FormattedEventName.Data.AllocatorInstance.Data);
                }
                local_430 = local_430 + 1;
                iVar32 = local_3b0->NumSubsections;
                pFVar37 = local_420;
                param_1 = local_3b0;
              } while (local_430 < iVar32);
            }
            local_42c = local_42c + 1;
            FVar49 = local_f8.Hash.SecondaryData;
            lVar46 = local_f8.Elements._0_8_;
            pFVar37 = local_420;
          } while (local_42c < iVar32);
        }
      }
      iVar34 = iStack_364;
    }
    local_440 = local_440 + 1;
  } while( true );
}

// Construct<FLandscapeEditToolRenderData> @ 145f22c50

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeEditToolRenderData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// ConstructForTests<FLandscapeEditToolRenderData> @ 145f22c80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeEditToolRenderData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// Destruct<FLandscapeEditToolRenderData> @ 145f22cb0

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeEditToolRenderData>(void *param_1)

{
  return;
}

// Copy<FLandscapeEditToolRenderData> @ 145f22cc0

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeEditToolRenderData>
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
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 3);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x1c);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[4] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[4]);
      }
      puVar2[4] = puVar1[4];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[5] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[5]);
      }
      puVar2[5] = puVar1[5];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[6] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[6]);
      }
      puVar2[6] = puVar1[6];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHeightmapTextureEdgeSnapshot> @ 145f22f60

void __cdecl UE::CoreUObject::Private::Construct<FHeightmapTextureEdgeSnapshot>(void *param_1)

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
  return;
}

// ConstructForTests<FHeightmapTextureEdgeSnapshot> @ 145f22f90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FHeightmapTextureEdgeSnapshot>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FHeightmapTextureEdgeSnapshot> @ 145f22fb0

void __cdecl UE::CoreUObject::Private::Destruct<FHeightmapTextureEdgeSnapshot>(void *param_1)

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

// Copy<FHeightmapTextureEdgeSnapshot> @ 145f22fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FHeightmapTextureEdgeSnapshot>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  undefined4 *puVar4;
  ForAnyElementType *pFVar5;
  undefined4 *puVar6;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar6 = (undefined4 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      pFVar5 = (ForAnyElementType *)(puVar4 + 2);
      *puVar4 = *puVar6;
      if (pFVar5 != (ForAnyElementType *)(puVar6 + 2)) {
        iVar2 = puVar6[4];
        piVar1 = puVar4 + 5;
        _Src = ((ForAnyElementType *)(puVar6 + 2))->Data;
        puVar4[4] = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2 << 2);
          }
        }
      }
      uVar3 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar6 + 6);
      *(undefined8 *)(puVar4 + 8) = uVar3;
      uVar3 = *(undefined8 *)(puVar6 + 0xc);
      *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(puVar6 + 10);
      *(undefined8 *)(puVar4 + 0xc) = uVar3;
      uVar3 = *(undefined8 *)(puVar6 + 0x10);
      *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(puVar6 + 0xe);
      *(undefined8 *)(puVar4 + 0x10) = uVar3;
      uVar3 = *(undefined8 *)(puVar6 + 0x14);
      *(undefined8 *)(puVar4 + 0x12) = *(undefined8 *)(puVar6 + 0x12);
      *(undefined8 *)(puVar4 + 0x14) = uVar3;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0x16;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeLayerComponentData> @ 145f234f0

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeLayerComponentData>(void *param_1)

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

// ConstructForTests<FLandscapeLayerComponentData> @ 145f23560

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeLayerComponentData>(void *param_1)

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

// Destruct<FLandscapeLayerComponentData> @ 145f235d0

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeLayerComponentData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FLandscapeLayerComponentData> @ 145f23620

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeLayerComponentData>
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
      FWeightmapData::operator=((FWeightmapData *)(puVar2 + 1),(FWeightmapData *)(puVar1 + 1));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHeightmapData> @ 145f23770

void __cdecl UE::CoreUObject::Private::Construct<FHeightmapData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FHeightmapData> @ 145f23780

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHeightmapData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FHeightmapData> @ 145f23790

void __cdecl UE::CoreUObject::Private::Destruct<FHeightmapData>(void *param_1)

{
  return;
}

// Copy<FHeightmapData> @ 145f237a0

bool __cdecl UE::CoreUObject::Private::Copy<FHeightmapData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWeightmapData> @ 145f238f0

void __cdecl UE::CoreUObject::Private::Construct<FWeightmapData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FWeightmapData> @ 145f23910

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWeightmapData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FWeightmapData> @ 145f23930

void __cdecl UE::CoreUObject::Private::Destruct<FWeightmapData>(void *param_1)

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

// Copy<FWeightmapData> @ 145f23980

bool __cdecl UE::CoreUObject::Private::Copy<FWeightmapData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FWeightmapLayerAllocationInfo *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)pFVar8 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar8 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar6 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar8,iVar4,piVar1);
          ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
                    (pFVar8->Data,(TObjectPtr<UTexture2D> *)pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar8 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar8[3].Data + 4);
        pFVar7 = (FWeightmapLayerAllocationInfo *)pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FWeightmapLayerAllocationInfo,FWeightmapLayerAllocationInfo,int>
                    (pFVar2->Data,pFVar7,iVar4);
        }
      }
      pFVar2 = pFVar8 + 4;
      if (pFVar2 != pFVar3 + 4) {
        iVar4 = *(int *)&pFVar3[5].Data;
        piVar1 = (int *)((longlong)&pFVar8[5].Data + 4);
        pFVar6 = pFVar3[4].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[5].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<TObjectPtr<ULandscapeWeightmapUsage>,TObjectPtr<ULandscapeWeightmapUsage>,int>
                    (pFVar2->Data,(TObjectPtr<ULandscapeWeightmapUsage> *)pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapePerLODMaterialOverride> @ 145f23d10

void __cdecl UE::CoreUObject::Private::Construct<FLandscapePerLODMaterialOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLandscapePerLODMaterialOverride> @ 145f23d20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapePerLODMaterialOverride>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLandscapePerLODMaterialOverride> @ 145f23d30

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapePerLODMaterialOverride>(void *param_1)

{
  return;
}

// Copy<FLandscapePerLODMaterialOverride> @ 145f23d60

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapePerLODMaterialOverride>
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
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeComponentMaterialOverride> @ 145f23ff0

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeComponentMaterialOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLandscapeComponentMaterialOverride> @ 145f24000

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeComponentMaterialOverride>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLandscapeComponentMaterialOverride> @ 145f24010

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeComponentMaterialOverride>(void *param_1)

{
  return;
}

// Copy<FLandscapeComponentMaterialOverride> @ 145f24020

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeComponentMaterialOverride>
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
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWeightmapLayerAllocationInfo> @ 145f240b0

void __cdecl UE::CoreUObject::Private::Construct<FWeightmapLayerAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWeightmapLayerAllocationInfo> @ 145f240d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWeightmapLayerAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWeightmapLayerAllocationInfo> @ 145f240f0

void __cdecl UE::CoreUObject::Private::Destruct<FWeightmapLayerAllocationInfo>(void *param_1)

{
  return;
}

// Copy<FWeightmapLayerAllocationInfo> @ 145f24100

bool __cdecl
UE::CoreUObject::Private::Copy<FWeightmapLayerAllocationInfo>
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
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)((longlong)puVar2 + 9) = *(undefined1 *)((longlong)puVar1 + 9);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FWeightmapLayerAllocationInfo> @ 145f24190

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FWeightmapLayerAllocationInfo>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = *(byte *)((longlong)param_1 + 8) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar2 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
  uVar1 = *(byte *)((longlong)param_1 + 9) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar1) - uVar3 ^ uVar1 << 8;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xd;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 << 10;
  return (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewMatrices>_> @ 145f26700

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewMatrices>_>
          (uint param_1,uint param_2,ForElementType<FViewMatrices> *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewMatrices>::
    ResizeAllocation(param_3,uVar2,(int)uVar6,uVar7);
    *param_4 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_> @ 145f267c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
          (ushort param_1,ForElementType<FSceneView_const_*> *param_2,int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_> @ 145f26890

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
          (ushort param_1,ForElementType<FSceneView_const_*> *param_2,int *param_3)

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
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntPoint<int>_>_> @ 145f26960

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntPoint<int>_>_>
          (ushort param_1,ForElementType<UE::Math::TIntPoint<int>_> *param_2,int *param_3)

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
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TIntPoint<int>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FDispatchIntermediates>_> @ 145f26a30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FDispatchIntermediates>_>
          (ushort param_1,ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *param_2,
          int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Landscape::Culling::FDispatchIntermediates>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>_> @ 145f26b00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>_>
          (ushort param_1,
          ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
          *param_2,int *param_3)

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
    ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>_> @ 145f26bd0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>_>
          (ushort param_1,
          ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView> *param_2
          ,int *param_3)

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
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>_> @ 145f26ca0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>_>
          (ushort param_1,
          ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *param_2,int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TFixedAllocator<512>::ForElementType<UE::Math::TVector<double>_>_> @ 145f26d70

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<512>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x200 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x200;
  }
  return iVar5;
}

// ReallocShrink<0,TFixedAllocator<512>::ForElementType<UE::Math::TVector<double>_>_> @ 145f26df0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TFixedAllocator<512>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector<double>_> *param_3,int param_4
          ,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x200 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x200) {
    *param_5 = 0x200;
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_> @ 145f26e50

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSceneView_const_*> *param_4,
          int param_5,int *param_6)

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
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_> @ 145f26ed0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSceneView_const_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FDispatchIntermediates>_> @ 145f26f50

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FDispatchIntermediates>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *param_4,int param_5,
          int *param_6)

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
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Landscape::Culling::FDispatchIntermediates>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>_> @ 145f26fd0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
          *param_4,int param_5,int *param_6)

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
    ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>_> @ 145f27050

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>_> @ 145f270d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *param_4,int param_5,
          int *param_6)

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
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// AllCornerNeighbors @ 145f28b80

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

TArrayView<UE::Landscape::EDirectionIndex_const_,int> * __cdecl
UE::Landscape::AllCornerNeighbors
          (TArrayView<UE::Landscape::EDirectionIndex_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->ArrayNum = 4;
  __return_storage_ptr__->DataPtr = CornerNeighbors;
  return __return_storage_ptr__;
}

// AllEdgeNeighbors @ 145f28ba0

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

TArrayView<UE::Landscape::EDirectionIndex_const_,int> * __cdecl
UE::Landscape::AllEdgeNeighbors
          (TArrayView<UE::Landscape::EDirectionIndex_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->ArrayNum = 4;
  __return_storage_ptr__->DataPtr = EdgeNeighbors;
  return __return_storage_ptr__;
}

// ComputeNeighborsMaxLOD @ 145f2ac50

float __cdecl
UE::Landscape::Culling::ComputeNeighborsMaxLOD
          (FLandscapeRenderSystem *param_1,TResourceArray<float,0> *param_2,TIntPoint<int> param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  int iStackX_24;
  
  piVar9 = &NeightborBaseOffsets[0].field0_0x0._s_0.Y;
  uVar10 = 0;
  fVar11 = 0.0;
  do {
    iVar6 = ((TIntPoint<int>_u_0_s_0 *)(piVar9 + -1))->X + param_3.field0_0x0._0_4_;
    iVar7 = (param_1->Min).field0_0x0._s_0.X;
    iStackX_24 = param_3.field0_0x0._4_4_;
    iVar1 = iStackX_24 + *piVar9;
    fVar12 = fVar11;
    if ((((iVar7 <= iVar6) && (iVar7 = (param_1->Size).field0_0x0._s_0.X + iVar7, iVar6 < iVar7)) &&
        (iVar2 = (param_1->Min).field0_0x0._s_0.Y, iVar2 <= iVar1)) &&
       (iVar8 = (param_1->Size).field0_0x0._s_0.Y + iVar2, iVar1 < iVar8)) {
      iStackX_24 = iStackX_24 + *piVar9;
      if ((((iVar7 <= iVar6) || (iStackX_24 < iVar2)) || (iVar8 <= iStackX_24)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidCoord(InRenderCoord)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Public\\LandscapeRender.h"
                             ,0x227,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar11 = (float)(*pcVar3)();
        return fVar11;
      }
      iVar6 = ((iStackX_24 - (param_1->Min).field0_0x0._s_0.Y) * (param_1->Size).field0_0x0._s_0.X -
              (param_1->Min).field0_0x0._s_0.X) + iVar6;
      if ((-1 < iVar6) && (iVar6 < (int)param_2->_padding_)) {
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar11 = (float)(*pcVar3)();
          return fVar11;
        }
        uVar5 = param_2->_padding_;
        if ((uVar5 & 1) != 0) {
          uVar5 = (longlong)&param_2->_padding_ + ((longlong)uVar5 >> 0x18);
        }
        fVar12 = *(float *)(uVar5 + (longlong)iVar6 * 4);
        if (fVar12 <= fVar11) {
          fVar12 = fVar11;
        }
      }
    }
    uVar10 = uVar10 + 1;
    piVar9 = piVar9 + 2;
    fVar11 = fVar12;
    if (3 < uVar10) {
      return fVar12;
    }
  } while( true );
}

// ComputeSectionIntermediateData @ 145f2ae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Landscape::Culling::ComputeSectionIntermediateData
          (FRDGBuilder *param_1,TArrayView<FSceneView_const_*,int> *param_2)

{
  longlong *plVar1;
  ForElementType<UE::Math::TIntPoint<int>_> *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ForAnyElementType FVar9;
  undefined8 *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  ForElementType<FSceneView_const_*> FVar17;
  FLandscapeRenderSystem *this;
  TResourceArray<float,0> *pTVar18;
  ulonglong uVar19;
  TMatrix<float> *pTVar20;
  ForElementType<UE::Math::TIntPoint<int>_> *pFVar21;
  FRDGBuffer *pFVar22;
  longlong lVar23;
  ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection> FVar24;
  ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> FVar25;
  undefined8 *puVar26;
  ForElementType<UE::Math::TIntPoint<int>_> *pFVar27;
  longlong lVar28;
  ForElementType<UE::Math::TIntPoint<int>_> *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  FSceneView *pFVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  float fVar36;
  undefined1 in_XMM2 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auStackY_8e8 [32];
  longlong local_898;
  uint local_890;
  uint local_88c;
  FSceneView *local_888;
  FSceneView *local_880;
  FLandscapeRenderSystem *local_878;
  undefined8 *local_870;
  longlong local_868;
  longlong local_860;
  FRDGBuilder *local_858;
  TArrayView<FSceneView_const_*,int> *local_850;
  TLargeWorldRenderScalar<double> local_848;
  TLargeWorldRenderScalar<double> local_838;
  TLargeWorldRenderScalar<double> local_828;
  TVector<double>_u_0 local_818;
  undefined1 local_7f8 [16];
  double local_7e8;
  double local_7d0;
  TMatrix<double> local_7b8;
  TMatrix<float> local_738;
  ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection> local_6f8;
  uint local_e8;
  uint local_e4 [3];
  ulonglong local_d8;
  
  dVar8 = __real_4140000000000000;
  dVar7 = __real_3ea0000000000000;
  dVar6 = __real_3fe0000000000000;
  fVar5 = __real_3f800000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  uVar34 = 0;
  iVar16 = param_2->ArrayNum;
  uVar33 = 0;
  local_6f8.SecondaryData =
       (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>)0x0;
  local_e8 = 0;
  local_e4[0] = 0x10;
  local_88c = 0;
  local_858 = param_1;
  local_850 = param_2;
  if (0 < iVar16) {
    local_860 = 0;
    uVar19 = uVar34;
    do {
      lVar28 = local_860;
      uVar15 = uVar33;
      if ((int)(uint)uVar19 < iVar16) {
        uVar15 = ~(uint)uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar32 = *(FSceneView **)(lVar28 + (longlong)param_2->DataPtr);
      FVar17 = (ForElementType<FSceneView_const_*>)0x154bed188;
      if (GCullingSystem.Views.AllocatorInstance.SecondaryData !=
          (ForElementType<FSceneView_const_*>)0x0) {
        FVar17 = GCullingSystem.Views.AllocatorInstance.SecondaryData;
      }
      local_888 = pFVar32;
      local_880 = pFVar32;
      if ((ulonglong)FVar17 <= &local_888) {
        FVar17 = (ForElementType<FSceneView_const_*>)0x154bed188;
        if (GCullingSystem.Views.AllocatorInstance.SecondaryData !=
            (ForElementType<FSceneView_const_*>)0x0) {
          FVar17 = GCullingSystem.Views.AllocatorInstance.SecondaryData;
        }
        if ((&local_888 <
             (FSceneView **)((longlong)FVar17 + (longlong)GCullingSystem.Views.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (GCullingSystem.Views.ArrayNum == GCullingSystem.Views.ArrayMax) {
        GCullingSystem.Views.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
                       (0x808,&GCullingSystem.Views.AllocatorInstance,&GCullingSystem.Views.ArrayMax
                       );
      }
      local_890 = 0;
      FVar17 = (ForElementType<FSceneView_const_*>)0x154bed188;
      if (GCullingSystem.Views.AllocatorInstance.SecondaryData !=
          (ForElementType<FSceneView_const_*>)0x0) {
        FVar17 = GCullingSystem.Views.AllocatorInstance.SecondaryData;
      }
      lVar23 = (longlong)GCullingSystem.Views.ArrayNum;
      GCullingSystem.Views.ArrayNum = GCullingSystem.Views.ArrayNum + 1;
      *(FSceneView **)((longlong)FVar17 + lVar23 * 8) = local_888;
      if (0 < GCullingSystem.Landscapes.ArrayNum) {
        local_868 = 0;
        uVar19 = uVar34;
        do {
          lVar28 = local_868;
          uVar35 = (uint)uVar19;
          uVar15 = uVar33;
          if ((int)uVar35 < GCullingSystem.Landscapes.ArrayNum) {
            uVar15 = ~uVar35 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar9.Data = GCullingSystem.Landscapes.AllocatorInstance.Data;
          FVar25 = (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)
                   ((longlong)GCullingSystem.Landscapes.AllocatorInstance.Data + lVar28 + 0x10);
          iVar16 = *(int *)((ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *)
                           ((longlong)FVar25 + 0xb8))->InlineData;
          if (iVar16 == *(int *)((longlong)FVar25 + 0xbc)) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>_>
                               (0x858,(ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>
                                       *)FVar25,(int *)((longlong)FVar25 + 0xbc));
          }
          *(int *)((ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *)
                  ((longlong)FVar25 + 0xb8))->InlineData = iVar16 + 1;
          if (*(ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *)
               ((longlong)FVar25 + 0xb0) !=
              (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
            FVar25 = *(ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *)
                      ((longlong)FVar25 + 0xb0);
          }
          puVar26 = (undefined8 *)((longlong)FVar25 + (longlong)iVar16 * 0x58);
          local_870 = puVar26;
          DefaultConstructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>(puVar26,1);
          *puVar26 = 0;
          this = FLandscapeSceneViewExtension::GetLandscapeRenderSystem
                           (pFVar32->Family->Scene,*(uint *)(FVar9.Data + lVar28));
          local_878 = this;
          if (this != (FLandscapeRenderSystem *)0x0) {
            pTVar18 = FLandscapeRenderSystem::GetCachedSectionLODValues(this,pFVar32);
            iVar16 = (int)pTVar18->_padding_;
            if (0 < iVar16) {
              local_898 = 0;
              uVar19 = uVar34;
              uVar31 = uVar34;
              do {
                uVar30 = (uint)uVar19;
                uVar15 = uVar33;
                if ((int)uVar30 < iVar16) {
                  uVar15 = ~uVar30 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar19 = pTVar18->_padding_;
                if ((uVar19 & 1) != 0) {
                  uVar19 = (longlong)&pTVar18->_padding_ + ((longlong)uVar19 >> 0x18);
                }
                fVar36 = *(float *)(local_898 + uVar19);
                uVar15 = 0;
                if ((int)uVar30 < (this->SectionInfos).ArrayNum) {
                  uVar15 = ~uVar30 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                plVar1 = *(longlong **)((this->SectionInfos).AllocatorInstance.Data + uVar31);
                if (((int)fVar36 == 0) && (plVar1 != (longlong *)0x0)) {
                  if (local_e8 == local_e4[0]) {
                    local_e8 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>_>
                                         (0x1060,&local_6f8,(int *)local_e4);
                  }
                  FVar24 = (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
                            )&local_6f8;
                  if (local_6f8.SecondaryData !=
                      (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
                       )0x0) {
                    FVar24 = local_6f8.SecondaryData;
                  }
                  puVar26 = (undefined8 *)((longlong)(int)local_e8 * 0x60 + (longlong)FVar24);
                  local_e8 = local_e8 + 1;
                  (**(code **)(*plVar1 + 0x30))(plVar1,local_7f8,&local_7b8);
                  dVar12 = local_7b8.M[3][2];
                  dVar11 = local_7b8.M[3][1];
                  auVar40._8_8_ = 0;
                  auVar40._0_8_ = local_7b8.M[3][0];
                  auVar37._8_8_ = 0;
                  auVar37._0_8_ = local_7b8.M[3][0] * dVar7 + dVar6;
                  auVar37 = roundpd(in_XMM2,auVar37,1);
                  local_848.Tile = auVar37._0_8_;
                  local_848.Offset = local_7b8.M[3][0] - local_848.Tile * dVar8;
                  TLargeWorldRenderScalar<double>::Validate(&local_848,local_7b8.M[3][0]);
                  auVar38._0_8_ = dVar11 * dVar7 + dVar6;
                  auVar38._8_8_ = 0;
                  auVar37 = roundpd(auVar40,auVar38,1);
                  local_838.Tile = auVar37._0_8_;
                  auVar41._8_8_ = auVar37._8_8_;
                  auVar41._0_8_ = local_838.Tile * dVar8;
                  local_838.Offset = dVar11 - auVar41._0_8_;
                  TLargeWorldRenderScalar<double>::Validate(&local_838,dVar11);
                  auVar39._0_8_ = dVar12 * dVar7 + dVar6;
                  auVar39._8_8_ = 0;
                  auVar37 = roundpd(auVar41,auVar39,1);
                  local_828.Tile = auVar37._0_8_;
                  local_828.Offset = dVar12 - local_828.Tile * dVar8;
                  TLargeWorldRenderScalar<double>::Validate(&local_828,dVar12);
                  pFVar29 = (ForElementType<UE::Math::TIntPoint<int>_> *)(plVar1 + 4);
                  fVar36 = ComputeNeighborsMaxLOD
                                     (local_878,pTVar18,
                                      (TIntPoint<int>)((TIntPoint<int>_u_0 *)(plVar1 + 4))->_s_0);
                  dVar13 = local_828.Tile;
                  dVar12 = local_838.Tile;
                  dVar11 = local_848.Tile;
                  if (0.0 <= fVar36) {
                    unaff_XMM9 = roundps(unaff_XMM9,ZEXT416((uint)fVar36),2);
                  }
                  else {
                    unaff_XMM9 = roundps(unaff_XMM9,ZEXT416((uint)fVar36),1);
                  }
                  local_818._s_0.X = local_848.Tile * dVar8;
                  local_818._s_0.Y = local_838.Tile * dVar8;
                  local_818._s_0.Z = local_828.Tile * dVar8;
                  pTVar20 = TLargeWorldRenderScalar<double>::MakeToRelativeWorldMatrix
                                      (&local_738,(TVector<double> *)&local_818._s_0,&local_7b8);
                  puVar10 = local_870;
                  in_XMM2 = ZEXT416((uint)(float)dVar12);
                  uVar4 = *(undefined8 *)(pTVar20->M[0] + 2);
                  *puVar26 = *(undefined8 *)pTVar20->M[0];
                  puVar26[1] = uVar4;
                  uVar4 = *(undefined8 *)(pTVar20->M[1] + 2);
                  puVar26[2] = *(undefined8 *)pTVar20->M[1];
                  puVar26[3] = uVar4;
                  uVar4 = *(undefined8 *)(pTVar20->M[2] + 2);
                  puVar26[4] = *(undefined8 *)pTVar20->M[2];
                  puVar26[5] = uVar4;
                  uVar4 = *(undefined8 *)(pTVar20->M[3] + 2);
                  puVar26[6] = *(undefined8 *)pTVar20->M[3];
                  puVar26[7] = uVar4;
                  *(float *)(puVar26 + 8) = (float)dVar11;
                  *(float *)((longlong)puVar26 + 0x44) = (float)dVar12;
                  *(float *)(puVar26 + 9) = (float)dVar13;
                  *(float *)((longlong)puVar26 + 0x4c) = (float)local_7e8;
                  *(float *)(puVar26 + 10) = (float)local_7d0;
                  fVar36 = (float)((1 << ((byte)(int)unaff_XMM9._0_4_ & 0x1f)) + -1);
                  if (fVar36 <= fVar5) {
                    fVar36 = fVar5;
                  }
                  *(float *)((longlong)puVar26 + 0x54) = fVar36;
                  pFVar27 = (ForElementType<UE::Math::TIntPoint<int>_> *)(local_870 + 1);
                  pFVar2 = (ForElementType<UE::Math::TIntPoint<int>_> *)local_870[9];
                  pFVar21 = pFVar27;
                  if (pFVar2 != (ForElementType<UE::Math::TIntPoint<int>_> *)0x0) {
                    pFVar21 = pFVar2;
                  }
                  if (pFVar21 <= pFVar29) {
                    pFVar21 = pFVar27;
                    if (pFVar2 != (ForElementType<UE::Math::TIntPoint<int>_> *)0x0) {
                      pFVar21 = pFVar2;
                    }
                    if ((pFVar29 < (ForElementType<UE::Math::TIntPoint<int>_> *)
                                   (pFVar21->InlineData +
                                   (longlong)*(int *)((longlong)local_870 + 0x54) * 8)) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar14)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  iVar16 = *(int *)(puVar10 + 10);
                  if (iVar16 == *(int *)((longlong)puVar10 + 0x54)) {
                    iVar16 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntPoint<int>_>_>
                                       (0x408,pFVar27,(int *)((longlong)puVar10 + 0x54));
                  }
                  *(int *)(puVar10 + 10) = iVar16 + 1;
                  if ((ForElementType<UE::Math::TIntPoint<int>_> *)puVar10[9] !=
                      (ForElementType<UE::Math::TIntPoint<int>_> *)0x0) {
                    pFVar27 = (ForElementType<UE::Math::TIntPoint<int>_> *)puVar10[9];
                  }
                  *(longlong *)(pFVar27->InlineData + (longlong)iVar16 * 8) =
                       *(longlong *)pFVar29->InlineData;
                }
                iVar16 = (int)pTVar18->_padding_;
                local_898 = local_898 + 4;
                uVar19 = (ulonglong)(uVar30 + 1);
                uVar31 = uVar31 + 8;
                puVar26 = local_870;
                this = local_878;
                lVar28 = local_868;
                uVar35 = local_890;
              } while ((int)(uVar30 + 1) < iVar16);
            }
            pFVar32 = local_880;
            if (local_e8 != 0) {
              FVar24 = (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
                        )&local_6f8;
              if (local_6f8.SecondaryData !=
                  (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>
                   )0x0) {
                FVar24 = local_6f8.SecondaryData;
              }
              pFVar22 = CreateStructuredBuffer
                                  (local_858,L"LandscapeCulling.SectionsData",0x60,local_e8,
                                   (void *)FVar24,(ulonglong)(local_e8 * 0x60),None);
              *puVar26 = pFVar22;
              local_e8 = 0;
              pFVar32 = local_880;
              if (((int)local_e4[0] < 0) && (local_e4[0] != 0)) {
                Core::Private::
                ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>_>
                          (0x60,0x10,0,&local_6f8,0,(int *)local_e4);
                pFVar32 = local_880;
              }
            }
          }
          local_890 = uVar35 + 1;
          uVar19 = (ulonglong)local_890;
          local_868 = lVar28 + 0x150;
          lVar28 = local_860;
          param_2 = local_850;
        } while ((int)local_890 < GCullingSystem.Landscapes.ArrayNum);
      }
      local_860 = lVar28 + 8;
      iVar16 = param_2->ArrayNum;
      local_88c = local_88c + 1;
      uVar19 = (ulonglong)local_88c;
    } while ((int)local_88c < iVar16);
  }
  if (local_6f8.SecondaryData !=
      (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeSection>)0x0) {
    FMemory::Free((void *)local_6f8.SecondaryData);
  }
  return;
}

// DispatchCulling @ 145f2bc00

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Landscape::Culling::DispatchCulling
          (FRDGBuilder *param_1,TArrayView<FSceneView_const_*,int> *param_2,
          TArrayView<FViewMatrices,int> *param_3,bool param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  FRDGUserValidation *this;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *pTVar3;
  int *piVar4;
  double *pdVar5;
  float *pfVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  FSceneView *pFVar10;
  FViewMatrices *pFVar11;
  FUploadedBuffer *pFVar12;
  FRDGPooledBuffer *pFVar13;
  FRDGPooledBuffer *pFVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ForAnyElementType _Src;
  TArrayView<FSceneView_const_*,int> *pTVar34;
  FGlobalShaderMap *pFVar35;
  TArrayView<FViewMatrices,int> *pTVar36;
  bool bVar37;
  undefined1 uVar38;
  int iVar39;
  FScriptContainerElement *pFVar40;
  FRDGBuffer *pFVar41;
  FRDGBuffer *pFVar42;
  ForAnyElementType _Dst;
  undefined8 *puVar43;
  FRDGBufferUAV *pFVar44;
  FRDGBufferSRV *pFVar45;
  FGlobalShaderType *pFVar46;
  FShaderType *pFVar47;
  FName this_00;
  FRDGEventName *pFVar48;
  FShaderParametersMetadata *pFVar49;
  TRefCountPtr<FRDGPooledBuffer> *pTVar50;
  ForElementType<FSceneView_const_*> FVar51;
  longlong lVar52;
  FLandscapeView *pFVar53;
  FScriptContainerElement *pFVar54;
  longlong lVar55;
  ulonglong uVar56;
  undefined8 *puVar57;
  uint uVar58;
  ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView> FVar59;
  uchar *puVar60;
  uint uVar61;
  int iVar62;
  uint uVar63;
  ulong64 uVar64;
  ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *pFVar65;
  ERDGInitialDataFlags EVar66;
  int iVar67;
  longlong lVar68;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *this_01;
  uint uVar69;
  longlong lVar70;
  FScriptContainerElement *pFVar71;
  FRDGBuilder *pFVar72;
  undefined1 in_XMM3 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auStackY_8e8 [32];
  undefined1 local_897 [7];
  FRDGBuilder *local_890;
  int local_888;
  int local_884;
  uint local_880;
  int local_87c;
  uint local_878;
  uint local_874;
  ForAnyElementType local_870;
  undefined8 local_868;
  uint local_860;
  uint local_85c;
  uint local_858;
  longlong local_850;
  TArrayView<FSceneView_const_*,int> *local_848;
  FRDGBuffer *local_840;
  FSceneView *local_838;
  undefined8 *local_830;
  FScriptContainerElement *local_828;
  FGlobalShaderMap *local_820;
  FSceneView *local_818;
  FRDGBufferDesc local_810;
  uint local_7f8;
  undefined1 local_7f4 [4];
  FRDGBuffer *local_7f0;
  longlong local_7e8;
  FRDGBufferUAVDesc local_7e0;
  FRDGBufferUAVDesc local_7d0;
  FScriptContainerElement *local_7c0;
  undefined8 local_7b8;
  FRDGBufferDesc local_7b0;
  TIntVector3<int>_u_0 local_798;
  FRDGBufferSRVDesc local_788;
  FRDGBufferSRVDesc local_768;
  undefined4 local_748;
  uint uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined8 local_738;
  undefined8 *local_730;
  undefined8 local_728;
  undefined8 local_720;
  TLargeWorldRenderScalar<double> local_718;
  TLargeWorldRenderScalar<double> local_708;
  TLargeWorldRenderScalar<double> local_6f8;
  void *local_6e8;
  TArrayView<FViewMatrices,int> *local_6e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_6d8;
  undefined8 local_6c8;
  undefined8 local_6c0;
  uint local_6b8;
  FRDGEventName local_6b0;
  FString local_698;
  TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable> local_688
  ;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined4 local_668;
  ForElementType<FSceneView_const_*> local_660;
  int local_618;
  int local_614 [3];
  ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView> local_608;
  uint local_f8;
  uint local_f4 [3];
  ulonglong local_e8;
  
  dVar33 = __real_4140000000000000;
  dVar32 = __real_3ea0000000000000;
  dVar31 = __real_3fe0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  local_880 = 0;
  local_878 = 0;
  if (0 < GCullingSystem.Views.ArrayNum) {
    local_7e8 = 0;
    local_890 = param_1;
    local_848 = param_2;
    local_6e0 = param_3;
    do {
      lVar52 = local_7e8;
      pTVar34 = local_848;
      uVar63 = local_878;
      pFVar72 = local_890;
      uVar69 = ~local_878 >> 0x1f;
      uVar58 = 0;
      if ((int)local_878 < GCullingSystem.Views.ArrayNum) {
        uVar58 = uVar69;
      }
      local_860 = uVar69;
      if ((uVar58 == 0) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar37)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      FVar51 = (ForElementType<FSceneView_const_*>)0x154bed188;
      if (GCullingSystem.Views.AllocatorInstance.SecondaryData !=
          (ForElementType<FSceneView_const_*>)0x0) {
        FVar51 = GCullingSystem.Views.AllocatorInstance.SecondaryData;
      }
      local_818 = *(FSceneView **)((longlong)FVar51 + lVar52 * 8);
      local_7f8 = FSceneView::GetViewKey(local_818);
      uVar58 = pTVar34->ArrayNum;
      uVar56 = (ulonglong)uVar58;
      local_608.SecondaryData =
           (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>)0x0;
      local_f8 = 0;
      local_f4[0] = 8;
      if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar56);
      }
      if ((int)uVar58 < 9) {
        local_660.SecondaryData = (ForElementType<FSceneView_const_*>)0x0;
        local_618 = 0;
        local_614[0] = 8;
      }
      else {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>_>
                  (0xa0,0x10,uVar58,&local_608,0,(int *)local_f4);
        local_660.SecondaryData = (ForElementType<FSceneView_const_*>)0x0;
        local_618 = 0;
        local_614[0] = 8;
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
                  (8,8,uVar58,&local_660,0,local_614);
      }
      uVar61 = 0;
      if (0 < (int)uVar58) {
        lVar70 = 0;
        lVar68 = 0;
        do {
          uVar63 = 0;
          if ((int)uVar61 < (int)uVar56) {
            uVar63 = ~uVar61 >> 0x1f;
          }
          if ((uVar63 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar37)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar10 = *(FSceneView **)(lVar68 + (longlong)local_848->DataPtr);
          if (pFVar10 == local_818) {
            FVar51 = (ForElementType<FSceneView_const_*>)&local_660;
            if (local_660.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
              FVar51 = local_660.SecondaryData;
            }
            local_838 = pFVar10;
            if ((ulonglong)FVar51 <= &local_838) {
              FVar51 = (ForElementType<FSceneView_const_*>)&local_660;
              if (local_660.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
                FVar51 = local_660.SecondaryData;
              }
              if ((&local_838 < (FSceneView **)((longlong)FVar51 + (longlong)local_614[0] * 8)) &&
                 (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar37)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            if (local_618 == local_614[0]) {
              local_618 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
                                    (0x808,&local_660,local_614);
            }
            lVar52 = (longlong)local_618;
            local_618 = local_618 + 1;
            FVar51 = (ForElementType<FSceneView_const_*>)&local_660;
            if (local_660.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
              FVar51 = local_660.SecondaryData;
            }
            *(FSceneView **)((longlong)FVar51 + lVar52 * 8) = local_838;
            if (local_f8 == local_f4[0]) {
              local_f8 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>_>
                                   (0x10a0,&local_608,(int *)local_f4);
            }
            pTVar36 = local_6e0;
            uVar63 = local_f8 + 1;
            FVar59 = (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>
                      )&local_608;
            if (local_608.SecondaryData !=
                (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>)
                0x0) {
              FVar59 = local_608.SecondaryData;
            }
            lVar52 = (longlong)(int)local_f8 * 0xa0;
            uVar69 = 0;
            if ((int)uVar61 < local_6e0->ArrayNum) {
              uVar69 = ~uVar61 >> 0x1f;
            }
            local_f8 = uVar63;
            if ((uVar69 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar37)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pFVar11 = pTVar36->DataPtr;
            dVar8 = *(double *)
                     ((longlong)
                      &((TVector<double> *)(&pFVar11->FirstPersonTransform + 1))[1].field0_0x0 +
                     lVar70);
            auVar73._8_8_ = 0;
            auVar73._0_8_ = dVar8 * dVar32 + dVar31;
            auVar73 = roundpd(in_XMM3,auVar73,1);
            local_6f8.Tile = auVar73._0_8_;
            auVar74._8_8_ = auVar73._8_8_;
            auVar74._0_8_ = local_6f8.Tile * dVar33;
            local_6f8.Offset = dVar8 - auVar74._0_8_;
            TLargeWorldRenderScalar<double>::Validate(&local_6f8,dVar8);
            dVar8 = *(double *)
                     ((longlong)
                      &((TVector<double> *)(&pFVar11->FirstPersonTransform + 1))[1].field0_0x0 +
                     lVar70 + 8);
            auVar17._8_8_ = 0;
            auVar17._0_8_ = dVar8 * dVar32 + dVar31;
            auVar73 = roundpd(auVar74,auVar17,1);
            local_708.Tile = auVar73._0_8_;
            auVar75._8_8_ = auVar73._8_8_;
            auVar75._0_8_ = local_708.Tile * dVar33;
            local_708.Offset = dVar8 - auVar75._0_8_;
            TLargeWorldRenderScalar<double>::Validate(&local_708,dVar8);
            dVar8 = *(double *)
                     ((longlong)
                      &((TVector<double> *)(&pFVar11->FirstPersonTransform + 1))[1].field0_0x0 +
                     lVar70 + 0x10);
            auVar18._8_8_ = 0;
            auVar18._0_8_ = dVar8 * dVar32 + dVar31;
            auVar73 = roundpd(auVar75,auVar18,1);
            local_718.Tile = auVar73._0_8_;
            local_718.Offset = dVar8 - local_718.Tile * dVar33;
            TLargeWorldRenderScalar<double>::Validate(&local_718,dVar8);
            pdVar5 = (double *)((longlong)(pFVar11->ProjectionMatrix).M[1] + lVar70 + 0x10);
            dVar8 = *pdVar5;
            dVar9 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->ProjectionMatrix).M[1] + lVar70);
            dVar19 = *pdVar5;
            dVar20 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->ProjectionMatrix).M[2] + lVar70);
            dVar21 = *pdVar5;
            dVar22 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->ProjectionMatrix).M[2] + lVar70 + 0x10);
            dVar23 = *pdVar5;
            dVar24 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->ProjectionMatrix).M[3] + lVar70);
            dVar25 = *pdVar5;
            dVar26 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->ProjectionMatrix).M[3] + lVar70 + 0x10);
            dVar27 = *pdVar5;
            dVar28 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->ProjectionMatrix).M[0] + lVar70 + 0x10);
            dVar29 = *pdVar5;
            dVar30 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->ProjectionMatrix).M[0] + lVar70);
            *(ulonglong *)(((FLandscapeView *)(lVar52 + (longlong)FVar59))->ViewToClip).M[0] =
                 CONCAT44((float)pdVar5[1],(float)*pdVar5);
            *(ulonglong *)((((FLandscapeView *)(lVar52 + (longlong)FVar59))->ViewToClip).M[0] + 2) =
                 CONCAT44((float)dVar30,(float)dVar29);
            pfVar6 = (float *)(lVar52 + 0x10 + (longlong)FVar59);
            *pfVar6 = (float)dVar19;
            pfVar6[1] = (float)dVar20;
            pfVar6[2] = (float)dVar8;
            pfVar6[3] = (float)dVar9;
            pfVar6 = (float *)(lVar52 + 0x20 + (longlong)FVar59);
            *pfVar6 = (float)dVar21;
            pfVar6[1] = (float)dVar22;
            pfVar6[2] = (float)dVar23;
            pfVar6[3] = (float)dVar24;
            pfVar6 = (float *)(lVar52 + 0x30 + (longlong)FVar59);
            *pfVar6 = (float)dVar25;
            pfVar6[1] = (float)dVar26;
            pfVar6[2] = (float)dVar27;
            pfVar6[3] = (float)dVar28;
            pdVar5 = (double *)
                     ((longlong)(pFVar11->TranslatedViewProjectionMatrix).M[1] + lVar70 + 0x10);
            dVar8 = *pdVar5;
            dVar9 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->TranslatedViewProjectionMatrix).M[1] + lVar70);
            dVar19 = *pdVar5;
            dVar20 = pdVar5[1];
            pdVar5 = (double *)
                     ((longlong)(pFVar11->TranslatedViewProjectionMatrix).M[2] + lVar70 + 0x10);
            dVar21 = *pdVar5;
            dVar22 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->TranslatedViewProjectionMatrix).M[2] + lVar70);
            dVar23 = *pdVar5;
            dVar24 = pdVar5[1];
            pdVar5 = (double *)((longlong)(pFVar11->TranslatedViewProjectionMatrix).M[3] + lVar70);
            dVar25 = *pdVar5;
            dVar26 = pdVar5[1];
            pdVar5 = (double *)
                     ((longlong)(pFVar11->TranslatedViewProjectionMatrix).M[3] + lVar70 + 0x10);
            dVar27 = *pdVar5;
            dVar28 = pdVar5[1];
            pdVar5 = (double *)
                     ((longlong)(pFVar11->TranslatedViewProjectionMatrix).M[0] + lVar70 + 0x10);
            pdVar7 = (double *)((longlong)(pFVar11->TranslatedViewProjectionMatrix).M[0] + lVar70);
            in_XMM3._0_4_ = (float)*pdVar7;
            in_XMM3._4_4_ = (float)pdVar7[1];
            in_XMM3._12_4_ = (float)pdVar5[1];
            in_XMM3._8_4_ = (float)*pdVar5;
            *(undefined1 (*) [16])(lVar52 + 0x40 + (longlong)FVar59) = in_XMM3;
            pfVar6 = (float *)(lVar52 + 0x50 + (longlong)FVar59);
            *pfVar6 = (float)dVar19;
            pfVar6[1] = (float)dVar20;
            pfVar6[2] = (float)dVar8;
            pfVar6[3] = (float)dVar9;
            pfVar6 = (float *)(lVar52 + 0x60 + (longlong)FVar59);
            *pfVar6 = (float)dVar23;
            pfVar6[1] = (float)dVar24;
            pfVar6[2] = (float)dVar21;
            pfVar6[3] = (float)dVar22;
            pfVar6 = (float *)(lVar52 + 0x70 + (longlong)FVar59);
            *pfVar6 = (float)dVar25;
            pfVar6[1] = (float)dVar26;
            pfVar6[2] = (float)dVar27;
            pfVar6[3] = (float)dVar28;
            dVar8 = *(double *)
                     ((longlong)
                      &((TVector<double> *)(&pFVar11->FirstPersonTransform + 1))->field0_0x0 +
                     lVar70 + 8);
            dVar9 = *(double *)
                     ((longlong)
                      &((TVector<double> *)(&pFVar11->FirstPersonTransform + 1))->field0_0x0 +
                     lVar70 + 0x10);
            *(float *)(lVar52 + 0x80 + (longlong)FVar59) =
                 (float)(local_6f8.Tile * dVar33 +
                        *(double *)
                         ((longlong)
                          &((TVector<double> *)(&pFVar11->FirstPersonTransform + 1))->field0_0x0 +
                         lVar70));
            *(float *)(lVar52 + 0x84 + (longlong)FVar59) = (float)(local_708.Tile * dVar33 + dVar8);
            *(float *)(lVar52 + 0x88 + (longlong)FVar59) = (float)(local_718.Tile * dVar33 + dVar9);
            *(float *)(lVar52 + 0x90 + (longlong)FVar59) = (float)local_6f8.Tile;
            *(float *)(lVar52 + 0x94 + (longlong)FVar59) = (float)local_708.Tile;
            *(float *)(lVar52 + 0x98 + (longlong)FVar59) = (float)local_718.Tile;
            uVar58 = local_848->ArrayNum;
            uVar56 = (ulonglong)uVar58;
          }
          uVar61 = uVar61 + 1;
          lVar68 = lVar68 + 8;
          lVar70 = lVar70 + 0x880;
          lVar52 = local_7e8;
          pFVar72 = local_890;
          uVar63 = local_878;
          uVar69 = local_860;
        } while ((int)uVar61 < (int)uVar58);
      }
      local_7f0 = (FRDGBuffer *)0x0;
      local_858 = 0;
      local_818 = (FSceneView *)0x0;
      if (0 < GCullingSystem.Landscapes.ArrayNum) {
        lVar52 = lVar52 * 0x58;
        local_850 = lVar52;
        do {
          pFVar10 = local_818;
          uVar58 = 0;
          if ((int)local_858 < GCullingSystem.Landscapes.ArrayNum) {
            uVar58 = ~local_858 >> 0x1f;
          }
          if ((uVar58 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar40 = GCullingSystem.Landscapes.AllocatorInstance.Data + (longlong)pFVar10 * 0x150;
          uVar58 = 0;
          if ((int)uVar63 < *(int *)(pFVar40 + 200)) {
            uVar58 = uVar69;
          }
          local_828 = pFVar40;
          if ((uVar58 == 0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar37)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar71 = pFVar40 + 0x10;
          if (*(FScriptContainerElement **)(pFVar40 + 0xc0) != (FScriptContainerElement *)0x0) {
            pFVar71 = *(FScriptContainerElement **)(pFVar40 + 0xc0);
          }
          local_874 = local_f8;
          local_884 = *(int *)(pFVar71 + lVar52 + 0x50);
          uVar58 = local_884 * local_f8;
          local_85c = uVar58;
          local_7c0 = pFVar71;
          if (uVar58 != 0) {
            local_870.Data = (FScriptContainerElement *)0x0;
            local_868 = 0;
            local_678 = 0x60;
            uStack_670 = 0;
            local_668 = 0;
            if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
            }
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,uVar58,&local_870,0,(int *)((longlong)&local_868 + 4));
            if (0 < (int)uVar58) {
              uVar56 = (ulonglong)uVar58;
              do {
                if (((local_870.Data <= (FScriptContainerElement *)&local_678) &&
                    ((FScriptContainerElement *)&local_678 <
                     local_870.Data + (longlong)local_868._4_4_ * 0x14)) &&
                   (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar37)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                iVar39 = (int)local_868;
                if ((int)local_868 == local_868._4_4_) {
                  iVar39 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x414,&local_870,(int *)((longlong)&local_868 + 4));
                }
                local_868 = CONCAT44(local_868._4_4_,iVar39 + 1);
                *(undefined8 *)(local_870.Data + (longlong)iVar39 * 0x14) = local_678;
                *(undefined8 *)(local_870.Data + (longlong)iVar39 * 0x14 + 8) = uStack_670;
                *(undefined4 *)(local_870.Data + (longlong)iVar39 * 0x14 + 0x10) = local_668;
                uVar56 = uVar56 - 1;
              } while (uVar56 != 0);
            }
            this = &pFVar72->UserValidation;
            local_810.Metadata = (FShaderParametersMetadata *)0x0;
            local_810.NumElements = (int)local_868 * 5;
            local_810.BytesPerElement = 4;
            local_810._12_4_ = local_6b0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
            local_810.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
            local_7b0.Metadata = (FShaderParametersMetadata *)0x0;
            local_7b0.BytesPerElement = 4;
            local_7b0.NumElements = (int)local_868 * 5;
            local_7b0.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
            local_7b0._12_4_ = local_6b0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
            FRDGUserValidation::ValidateCreateBuffer
                      (this,&local_7b0,L"LandscapeCulling.DrawIndirectArgsBuffer",None);
            plVar1 = &pFVar72->_padding_;
            pTVar3 = &pFVar72->Buffers;
            uVar63 = local_7b0.BytesPerElement;
            if (local_7b0.BytesPerElement == 0) {
              uVar63 = 1;
            }
            if (local_7b0.NumElements == 0) {
              local_7b0.NumElements = 1;
            }
            local_7b0.BytesPerElement = uVar63;
            pFVar41 = FMemStackBase::Alloc((FMemStackBase *)plVar1,0x130,8);
            pFVar41 = FRDGBuffer::FRDGBuffer
                                (pFVar41,L"LandscapeCulling.DrawIndirectArgsBuffer",&local_7b0,None)
            ;
            iVar39 = (pFVar72->Buffers).Array.ArrayNum;
            if (iVar39 == (pFVar72->Buffers).Array.ArrayMax) {
              iVar39 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                                 (0x808,(ForElementType<FRDGBuffer_*> *)pTVar3,
                                  &(pFVar72->Buffers).Array.ArrayMax);
            }
            (pFVar72->Buffers).Array.ArrayNum = iVar39 + 1;
            (pTVar3->Array).AllocatorInstance.Data[iVar39] = pFVar41;
            (pFVar41->Handle).Index = (pFVar72->Buffers).Array.ArrayNum - 1;
            FRDGUserValidation::ValidateCreateBuffer(this,pFVar41);
            FRDGTrace::AddResource(&local_890->Trace,(FRDGViewableResource *)pFVar41);
            local_748 = 4;
            uStack_740 = 0x14119;
            local_738 = 0;
            local_888 = (*(int *)(local_828 + 0xc) + 3U >> 2) * *(int *)(local_828 + 8);
            local_810.Metadata = (FShaderParametersMetadata *)0x0;
            local_87c = local_888 * local_888;
            uStack_744 = local_87c * uVar58 & 0x3fffffff;
            uStack_73c = local_6b0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
            local_810._0_8_ = CONCAT44(local_87c * uVar58,4) & 0x3fffffffffffffff;
            local_810._12_4_ = local_6b0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
            local_810.Usage =
                 StructuredBuffer|VertexBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|
                 Static;
            FRDGUserValidation::ValidateCreateBuffer
                      (this,&local_810,L"LandscapeCulling.CulledTileDataBuffer",None);
            uVar63 = local_810.BytesPerElement;
            if (local_810.BytesPerElement == 0) {
              uVar63 = 1;
            }
            if (local_810.NumElements == 0) {
              local_810.NumElements = 1;
            }
            local_810.BytesPerElement = uVar63;
            pFVar42 = FMemStackBase::Alloc((FMemStackBase *)plVar1,0x130,8);
            pFVar42 = FRDGBuffer::FRDGBuffer
                                (pFVar42,L"LandscapeCulling.CulledTileDataBuffer",&local_810,None);
            iVar39 = (pFVar72->Buffers).Array.ArrayNum;
            local_840 = pFVar42;
            if (iVar39 == (pFVar72->Buffers).Array.ArrayMax) {
              iVar39 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                                 (0x808,(ForElementType<FRDGBuffer_*> *)pTVar3,
                                  &(pFVar72->Buffers).Array.ArrayMax);
            }
            (pFVar72->Buffers).Array.ArrayNum = iVar39 + 1;
            (pTVar3->Array).AllocatorInstance.Data[iVar39] = pFVar42;
            (pFVar42->Handle).Index = (pFVar72->Buffers).Array.ArrayNum - 1;
            FRDGUserValidation::ValidateCreateBuffer(this,pFVar42);
            FRDGTrace::AddResource(&local_890->Trace,(FRDGViewableResource *)pFVar42);
            _Src.Data = local_870.Data;
            uVar64 = (longlong)(int)local_868 * 0x14;
            FRDGUserValidation::ValidateUploadBuffer(this,pFVar41,local_870.Data,uVar64);
            _Dst.Data = _Src.Data;
            if (uVar64 != 0) {
              _Dst.Data = FMemStackBase::Alloc((FMemStackBase *)plVar1,uVar64,0x10);
              memcpy(_Dst.Data,_Src.Data,uVar64);
            }
            pFVar72 = local_890;
            iVar39 = (local_890->UploadedBuffers).ArrayNum;
            piVar4 = &(local_890->UploadedBuffers).ArrayMax;
            if (iVar39 == *piVar4) {
              iVar39 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                                 (0x10e0,&(local_890->UploadedBuffers).AllocatorInstance,piVar4);
            }
            (pFVar72->UploadedBuffers).ArrayNum = iVar39 + 1;
            pFVar12 = (pFVar72->UploadedBuffers).AllocatorInstance.Data;
            pFVar12[iVar39].Data = _Dst.Data;
            puVar57 = (undefined8 *)0x0;
            pFVar12[iVar39].bUseDataCallbacks = false;
            pFVar12[iVar39].bUseFreeCallbacks = false;
            pFVar12[iVar39].Buffer = pFVar41;
            pFVar12[iVar39].DataSize = uVar64;
            *(undefined8 *)&pFVar12[iVar39].DataCallback = 0;
            *(undefined8 *)&pFVar12[iVar39].DataCallback.field_0x28 = 0;
            *(undefined8 *)&pFVar12[iVar39].DataSizeCallback = 0;
            *(undefined8 *)&pFVar12[iVar39].DataSizeCallback.field_0x28 = 0;
            *(undefined8 *)&pFVar12[iVar39].DataFreeCallback = 0;
            *(undefined8 *)&pFVar12[iVar39].DataFreeCallback.field_0x28 = 0;
            *(undefined8 *)&pFVar12[iVar39].DataFillCallback = 0;
            *(undefined8 *)&pFVar12[iVar39].DataFillCallback.field_0x28 = 0;
            pbVar2 = (byte *)((longlong)&pFVar41->_padding_ + 1);
            *pbVar2 = *pbVar2 | 0x80;
            if (local_7f0 == (FRDGBuffer *)0x0) {
              if (local_f8 == 0) {
                pFVar53 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,ERDGInitialDataFlags)'
                           ::__l2::DummyElement;
                EVar66 = NoCopy;
                uVar64 = 0xa0;
                uVar63 = 1;
              }
              else {
                pFVar53 = (FLandscapeView *)&local_608;
                if (local_608.SecondaryData !=
                    (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>
                     )0x0) {
                  pFVar53 = (FLandscapeView *)local_608.SecondaryData;
                }
                uVar64 = (ulong64)(local_f8 * 0xa0);
                EVar66 = None;
                uVar63 = local_f8;
              }
              local_7f0 = CreateStructuredBuffer
                                    (pFVar72,L"LandscapeCulling.ViewsData",0xa0,uVar63,pFVar53,
                                     uVar64,EVar66);
            }
            pTVar34 = local_848;
            if ((local_848->ArrayNum < 1) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar37)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            local_820 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                           [(int)(*pTVar34->DataPtr)->FeatureLevel]);
            puVar43 = FMemStackBase::Alloc((FMemStackBase *)&pFVar72->_padding_,0x50,0x10);
            if (puVar43 == (undefined8 *)0x0) {
              bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                  ,0x61,L"");
              if (bVar37) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            else {
              puVar43[2] = 0;
              *puVar43 = &
                         ___7__TObject_VFParameters_FBuildLandscapeTileDataCS_Culling_Landscape_UE___FRDGAllocator__6B_
              ;
              puVar43[3] = 0;
              puVar43[4] = 0;
              puVar43[5] = 0;
              puVar57 = puVar43;
            }
            local_830 = puVar57;
            if ((((undefined8 **)pFVar72->_padding_ <= &local_830) &&
                (&local_830 <
                 (undefined8 **)pFVar72->_padding_ + *(int *)((longlong)&pFVar72->_padding_ + 4)))
               && (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar37)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            iVar39 = (int)pFVar72->_padding_;
            piVar4 = (int *)((longlong)&pFVar72->_padding_ + 4);
            if (iVar39 == *piVar4) {
              iVar39 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)&pFVar72->_padding_,piVar4);
            }
            *(int *)&pFVar72->_padding_ = iVar39 + 1;
            local_7e0._padding_._1_1_ = 0;
            *(undefined8 **)(pFVar72->_padding_ + (longlong)iVar39 * 8) = local_830;
            local_7e0._padding_._2_1_ = 0;
            local_7e0._padding_._0_1_ = 0;
            if (((pFVar41->Desc).Usage & DrawIndirect) != None) {
              local_7e0._padding_._0_1_ = 0x1c;
            }
            local_7e0.Buffer = pFVar41;
            FRDGUserValidation::ValidateCreateUAV(this,&local_7e0);
            pFVar42 = local_7e0.Buffer;
            this_01 = &pFVar72->Views;
            pFVar44 = FMemStackBase::Alloc((FMemStackBase *)&local_890->_padding_,0x48,8);
            lVar52 = pFVar42->_padding_;
            *(byte *)&pFVar44->_padding_ = (byte)pFVar44->_padding_ & 0xfe;
            pFVar44->_padding_ = lVar52;
            *(undefined8 *)((longlong)&pFVar44->_padding_ + 4) = 0xffffffffffffffff;
            pFVar44->_padding_ = 0;
            *(undefined1 *)&pFVar44->_padding_ = 2;
            *(undefined1 *)&pFVar44->_padding_ = 0;
            pFVar44->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
            (pFVar44->Desc)._padding_ =
                 CONCAT53(local_7e0._padding_._3_5_,
                          CONCAT12(local_7e0._padding_._2_1_,
                                   CONCAT11(local_7e0._padding_._1_1_,
                                            (undefined1)local_7e0._padding_)));
            (pFVar44->Desc).Buffer = local_7e0.Buffer;
            TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                      (this_01,(FRDGView *)pFVar44);
            FRDGUserValidation::ValidateCreateUAV(this,pFVar44);
            local_7d0.Buffer = local_840;
            local_7d0._padding_._2_1_ = 0;
            local_7d0._padding_._1_1_ = 0;
            ((FParameters *)(puVar57 + 2))->IndirectArgsBufferOut = pFVar44;
            local_7d0._padding_._0_1_ = 0;
            if (((local_840->Desc).Usage & DrawIndirect) != None) {
              local_7d0._padding_._0_1_ = 0x1c;
            }
            FRDGUserValidation::ValidateCreateUAV(this,&local_7d0);
            pFVar42 = local_7d0.Buffer;
            pFVar44 = FMemStackBase::Alloc((FMemStackBase *)&local_890->_padding_,0x48,8);
            lVar52 = pFVar42->_padding_;
            *(byte *)&pFVar44->_padding_ = (byte)pFVar44->_padding_ & 0xfe;
            pFVar44->_padding_ = lVar52;
            *(undefined8 *)((longlong)&pFVar44->_padding_ + 4) = 0xffffffffffffffff;
            pFVar44->_padding_ = 0;
            *(undefined1 *)&pFVar44->_padding_ = 2;
            *(undefined1 *)&pFVar44->_padding_ = 0;
            pFVar44->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
            (pFVar44->Desc)._padding_ =
                 CONCAT53(local_7d0._padding_._3_5_,
                          CONCAT12(local_7d0._padding_._2_1_,
                                   CONCAT11(local_7d0._padding_._1_1_,
                                            (undefined1)local_7d0._padding_)));
            (pFVar44->Desc).Buffer = local_7d0.Buffer;
            TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                      (this_01,(FRDGView *)pFVar44);
            FRDGUserValidation::ValidateCreateUAV(this,pFVar44);
            local_788.Buffer = local_7f0;
            puVar57[3] = pFVar44;
            local_788._padding_._4_4_ = 0;
            local_788._padding_._0_4_ = 0xffffffff;
            local_788._padding_ = 0;
            uVar38 = 0;
            if (((local_7f0->Desc).Usage & DrawIndirect) != None) {
              uVar38 = 0x1c;
            }
            local_788._padding_._0_4_ =
                 CONCAT31((int3)((uint)(undefined4)local_788._padding_ >> 8),uVar38);
            FRDGUserValidation::ValidateCreateSRV(this,&local_788);
            pFVar42 = local_788.Buffer;
            pFVar45 = FMemStackBase::Alloc((FMemStackBase *)&local_890->_padding_,0x50,8);
            lVar52 = pFVar42->_padding_;
            *(byte *)&pFVar45->_padding_ = (byte)pFVar45->_padding_ & 0xfe;
            *(undefined8 *)((longlong)&pFVar45->_padding_ + 4) = 0xffffffffffffffff;
            pFVar45->_padding_ = lVar52;
            pFVar45->_padding_ = 0;
            *(undefined1 *)&pFVar45->_padding_ = 3;
            pFVar45->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
            (pFVar45->Desc)._padding_ =
                 CONCAT44(local_788._padding_._4_4_,(undefined4)local_788._padding_);
            (pFVar45->Desc)._padding_ =
                 CONCAT44(local_788._padding_._4_4_,(undefined4)local_788._padding_);
            (pFVar45->Desc)._padding_ = local_788._padding_;
            (pFVar45->Desc).Buffer = local_788.Buffer;
            TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                      (this_01,(FRDGView *)pFVar45);
            FRDGUserValidation::ValidateCreateSRV(this,pFVar45);
            puVar57[4] = pFVar45;
            local_768._padding_._4_4_ = 0;
            local_768.Buffer = *(FRDGBuffer **)(pFVar71 + local_850);
            local_768._padding_._0_4_ = 0xffffffff;
            local_768._padding_ = 0;
            uVar38 = 0;
            if ((((local_768.Buffer)->Desc).Usage & DrawIndirect) != None) {
              uVar38 = 0x1c;
            }
            local_768._padding_._0_4_ =
                 CONCAT31((int3)((uint)(undefined4)local_768._padding_ >> 8),uVar38);
            FRDGUserValidation::ValidateCreateSRV(this,&local_768);
            pFVar42 = local_768.Buffer;
            pFVar45 = FMemStackBase::Alloc((FMemStackBase *)&local_890->_padding_,0x50,8);
            lVar52 = pFVar42->_padding_;
            piVar4 = &(pFVar72->Views).Array.ArrayMax;
            *(byte *)&pFVar45->_padding_ = (byte)pFVar45->_padding_ & 0xfe;
            *(undefined8 *)((longlong)&pFVar45->_padding_ + 4) = 0xffffffffffffffff;
            pFVar45->_padding_ = lVar52;
            pFVar45->_padding_ = 0;
            *(undefined1 *)&pFVar45->_padding_ = 3;
            pFVar45->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
            (pFVar45->Desc)._padding_ =
                 CONCAT44(local_768._padding_._4_4_,(undefined4)local_768._padding_);
            (pFVar45->Desc)._padding_ =
                 CONCAT44(local_768._padding_._4_4_,(undefined4)local_768._padding_);
            (pFVar45->Desc)._padding_ = local_768._padding_;
            (pFVar45->Desc).Buffer = local_768.Buffer;
            iVar39 = (pFVar72->Views).Array.ArrayNum;
            if (iVar39 == *piVar4) {
              iVar39 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                                 (0x808,(ForElementType<FRDGView_*> *)this_01,piVar4);
            }
            (pFVar72->Views).Array.ArrayNum = iVar39 + 1;
            (this_01->Array).AllocatorInstance.Data[iVar39] = (FRDGView *)pFVar45;
            *(int *)((longlong)&pFVar45->_padding_ + 4) = (pFVar72->Views).Array.ArrayNum + -1;
            FRDGUserValidation::ValidateCreateSRV(this,pFVar45);
            iVar39 = local_884;
            puVar57[5] = pFVar45;
            *(uint *)(puVar57 + 7) = *(int *)(local_828 + 0xc) + 3U >> 2;
            *(undefined4 *)((longlong)puVar57 + 0x3c) = *(undefined4 *)(local_828 + 8);
            *(uint *)(puVar57 + 8) = (uint)param_4;
            *(uint *)((longlong)puVar57 + 0x34) = local_874;
            *(int *)(puVar57 + 6) = local_884;
            pFVar46 = FBuildLandscapeTileDataCS::GetStaticType();
            if (*(int *)&pFVar46->field_0x50 != 1) {
              local_897[0] = 0;
              `FGlobalShaderMap::GetShader<UE::Landscape::Culling::FBuildLandscapeTileDataCS>'::__l2
              ::<lambda_1>::operator()(local_897);
            }
            pFVar47 = (FShaderType *)FBuildLandscapeTileDataCS::GetStaticType();
            FGlobalShaderMap::GetShader(local_820,&local_6d8,pFVar47,0);
            if (local_6d8.ShaderContent == (FShader *)0x0) {
              this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_6e8);
              ::FName::ToString((FName *)this_00,&local_698);
              FBuildLandscapeTileDataCS::GetStaticType();
              bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Shader.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                  ,0xc0,L"Failed to find shader type %s in Platform %s");
              if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_698.Data.AllocatorInstance.Data);
              }
              if (bVar37) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            FBuildLandscapeTileDataCS::GetStaticType();
            pFVar40 = local_828;
            local_880 = local_880 | 1;
            local_688.ShaderContent = (FBuildLandscapeTileDataCS *)local_6d8.ShaderContent;
            local_688.ShaderMap = local_6d8.ShaderMap;
            iVar62 = (int)((local_888 + 7 >> 0x1f & 7U) + local_888 + 7) >> 3;
            pFVar48 = FRDGEventName::FRDGEventName
                                (&local_6b0,
                                 L"LandscapeCulling, SubsectionSizeQuads %d, Subsections %d, Views:%d"
                                );
            pFVar49 = FBuildLandscapeTileDataCS::FParameters::FTypeInfo::GetStructMetadata();
            pFVar72 = local_890;
            local_798._s_0.Z = local_85c;
            local_798._s_0.X = iVar62;
            local_798._s_0.Y = iVar62;
            FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>
                      (local_890,pFVar48,Compute,&local_688,pFVar49,(FParameters *)(puVar57 + 2),
                       (TIntVector3<int> *)&local_798._s_0);
            uVar63 = local_880;
            if (((local_880 & 2) != 0) &&
               (uVar63 = local_880 & 0xfffffffd, local_6e8 != (void *)0x0)) {
              FMemory::Free(local_6e8);
            }
            local_880 = uVar63 & 0xfffffffe;
            if ((void *)CONCAT44(local_6b0.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                 local_6b0.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
                (void *)0x0) {
              FMemory::Free((void *)CONCAT44(local_6b0.FormattedEventName.Data.AllocatorInstance.
                                             Data._4_4_,
                                             local_6b0.FormattedEventName.Data.AllocatorInstance.
                                             Data._0_4_));
            }
            iVar62 = *(int *)(pFVar40 + 0xf8);
            if (iVar62 == *(int *)(pFVar40 + 0xfc)) {
              iVar62 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FDispatchIntermediates>_>
                                 (0x810,(ForElementType<UE::Landscape::Culling::FDispatchIntermediates>
                                         *)(pFVar40 + 0xd0),(int *)(pFVar40 + 0xfc));
            }
            *(int *)(pFVar40 + 0xf8) = iVar62 + 1;
            pFVar65 = (ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *)
                      (pFVar40 + 0xd0);
            if (*(ForElementType<UE::Landscape::Culling::FDispatchIntermediates> **)(pFVar40 + 0xf0)
                != (ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *)0x0) {
              pFVar65 = *(ForElementType<UE::Landscape::Culling::FDispatchIntermediates> **)
                         (pFVar40 + 0xf0);
            }
            puVar60 = pFVar65->InlineData + (longlong)iVar62 * 0x10;
            DefaultConstructItems<UE::Landscape::Culling::FDispatchIntermediates,int>(puVar60,1);
            pTVar50 = FRDGBuilder::ConvertToExternalBuffer(pFVar72,pFVar41);
            FRDGBuilder::UseExternalAccessMode
                      (local_890,(FRDGViewableResource *)pFVar41,IndirectArgs,Graphics);
            pFVar13 = pTVar50->Reference;
            pFVar14 = *(FRDGPooledBuffer **)puVar60;
            if (pFVar14 != pFVar13) {
              *(FRDGPooledBuffer **)puVar60 = pFVar13;
              if (pFVar13 != (FRDGPooledBuffer *)0x0) {
                LOCK();
                *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
                UNLOCK();
              }
              if (pFVar14 != (FRDGPooledBuffer *)0x0) {
                plVar1 = &pFVar14->_padding_;
                LOCK();
                lVar52 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if (((int)lVar52 == 1) && (plVar1 != (longlong *)0x0)) {
                  (**(code **)pFVar14->_padding_)(pFVar14,1);
                }
              }
            }
            pTVar50 = FRDGBuilder::ConvertToExternalBuffer(local_890,local_840);
            FRDGBuilder::UseExternalAccessMode
                      (local_890,(FRDGViewableResource *)local_840,VertexOrIndexBuffer,Graphics);
            pFVar13 = pTVar50->Reference;
            pFVar14 = *(FRDGPooledBuffer **)(puVar60 + 8);
            if (pFVar14 != pFVar13) {
              *(FRDGPooledBuffer **)(puVar60 + 8) = pFVar13;
              if (pFVar13 != (FRDGPooledBuffer *)0x0) {
                LOCK();
                *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
                UNLOCK();
              }
              if (pFVar14 != (FRDGPooledBuffer *)0x0) {
                plVar1 = &pFVar14->_padding_;
                LOCK();
                lVar52 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if (((int)lVar52 == 1) && (plVar1 != (longlong *)0x0)) {
                  (**(code **)pFVar14->_padding_)(pFVar14,1);
                }
              }
            }
            local_874 = 0;
            local_728 = *(undefined8 *)
                         (*(longlong *)(pFVar65->InlineData + (longlong)iVar62 * 0x10) + 0x28);
            local_7b8 = *(undefined8 *)(*(longlong *)(puVar60 + 8) + 0x28);
            if (0 < local_618) {
              local_820 = (FGlobalShaderMap *)0x0;
              local_85c = iVar39 * 0x14;
              local_888 = 0;
              local_884 = 0;
              local_840 = (FRDGBuffer *)CONCAT44(local_840._4_4_,local_87c * iVar39 * 4);
              iVar39 = local_618;
              do {
                pFVar35 = local_820;
                uVar63 = 0;
                if ((int)local_874 < iVar39) {
                  uVar63 = ~local_874 >> 0x1f;
                }
                if ((uVar63 == 0) &&
                   (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), iVar39 = local_618, bVar37)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pFVar40 = local_828;
                lVar52 = local_850;
                FVar51 = (ForElementType<FSceneView_const_*>)&local_660;
                if (local_660.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
                  FVar51 = local_660.SecondaryData;
                }
                local_720 = *(undefined8 *)((longlong)pFVar35 + (longlong)FVar51);
                uVar63 = 0;
                pFVar54 = pFVar71;
                if (0 < *(int *)(pFVar71 + local_850 + 0x50)) {
                  lVar68 = 0;
                  iVar62 = local_888;
                  iVar67 = local_884;
                  do {
                    uVar69 = 0;
                    if ((int)uVar63 < *(int *)(pFVar71 + lVar52 + 0x50)) {
                      uVar69 = ~uVar63 >> 0x1f;
                    }
                    if ((uVar69 == 0) &&
                       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar37)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    pFVar54 = pFVar71 + lVar52 + 8;
                    if (*(FScriptContainerElement **)(pFVar71 + lVar52 + 0x48) !=
                        (FScriptContainerElement *)0x0) {
                      pFVar54 = *(FScriptContainerElement **)(pFVar71 + lVar52 + 0x48);
                    }
                    uVar15 = *(undefined8 *)(pFVar54 + lVar68);
                    if (((int)uVar15 < -0x7fffffff) &&
                       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                           ("RenderCoord.X > (-2147483647i32 - 1)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCulling.cpp"
                                            ,0x30c,L""), bVar37)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    local_6c8 = local_720;
                    local_6b8 = local_7f8;
                    local_730 = &local_6c8;
                    local_6c0 = uVar15;
                    TSet<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>,TDefaultMapHashableKeyFuncs<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments,0>,FDefaultSetAllocator>
                    ::Emplace<TKeyInitializer<UE::Landscape::Culling::FArgumentsKey_&&>_>
                              ((TSet<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>,TDefaultMapHashableKeyFuncs<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments,0>,FDefaultSetAllocator>
                                *)(pFVar40 + 0x100),
                               (TKeyInitializer<UE::Landscape::Culling::FArgumentsKey_&&> *)
                               local_7f4,(bool *)&local_730);
                    uVar63 = uVar63 + 1;
                    lVar68 = lVar68 + 8;
                    lVar55 = (longlong)(int)local_7f4 * 0x38;
                    lVar70 = *(longlong *)(pFVar40 + 0x100);
                    *(undefined8 *)(lVar55 + 0x18 + lVar70) = local_728;
                    *(int *)(lVar55 + 0x28 + lVar70) = iVar62;
                    iVar62 = iVar62 + 0x14;
                    *(int *)(lVar55 + 0x2c + lVar70) = iVar67;
                    *(undefined8 *)(lVar55 + 0x20 + lVar70) = local_7b8;
                    iVar67 = iVar67 + local_87c * 4;
                    pFVar54 = local_7c0;
                    iVar39 = local_618;
                  } while ((int)uVar63 < *(int *)(local_7c0 + local_850 + 0x50));
                }
                local_874 = local_874 + 1;
                local_888 = local_888 + local_85c;
                local_820 = (FGlobalShaderMap *)((longlong)local_820 + 8);
                local_884 = local_884 + (int)local_840;
                pFVar71 = pFVar54;
              } while ((int)local_874 < iVar39);
            }
            lVar52 = local_850;
            uVar63 = local_878;
            uVar69 = local_860;
            if (local_870.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_870.Data);
              lVar52 = local_850;
              uVar63 = local_878;
              uVar69 = local_860;
            }
          }
          local_858 = local_858 + 1;
          local_818 = (FSceneView *)((longlong)local_818 + 1);
          pFVar72 = local_890;
        } while ((int)local_858 < GCullingSystem.Landscapes.ArrayNum);
      }
      if (local_660.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
        FMemory::Free((void *)local_660.SecondaryData);
      }
      if (local_608.SecondaryData !=
          (ForElementType<UE::Landscape::Culling::FBuildLandscapeTileDataCS::FLandscapeView>)0x0) {
        FMemory::Free((void *)local_608.SecondaryData);
      }
      local_878 = uVar63 + 1;
      local_7e8 = local_7e8 + 1;
    } while ((int)local_878 < GCullingSystem.Views.ArrayNum);
  }
  return;
}

// EdgesToAffectedNeighbors @ 145f2d3d0

EDirectionFlags __cdecl UE::Landscape::EdgesToAffectedNeighbors(EDirectionFlags param_1)

{
  return param_1 >> 7 | (EDirectionFlags)((param_1 & 0xaa) >> 1) | (char)(param_1 & 0xaa) * '\x02' |
         param_1;
}

// GetDirectionString @ 145f2e000

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

FString * __cdecl UE::Landscape::GetDirectionString(EDirectionIndex param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(DirectionStrings,"B");
      ::FString::FString(DirectionStrings + 1,"BR");
      ::FString::FString(DirectionStrings + 2,"R");
      ::FString::FString(DirectionStrings + 3,"TR");
      ::FString::FString(DirectionStrings + 4,"T");
      ::FString::FString(DirectionStrings + 5,"TL");
      ::FString::FString(DirectionStrings + 6,"L");
      ::FString::FString(DirectionStrings + 7,"BL");
      atexit(`UE::Landscape::GetDirectionString'::__l2::
             _dynamic_atexit_destructor_for__DirectionStrings__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1 < Count) {
    return DirectionStrings + param_1;
  }
  if (*piVar1 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&ErrorString,"Error");
      atexit(`UE::Landscape::GetDirectionString'::__l2::
             _dynamic_atexit_destructor_for__ErrorString__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &ErrorString;
}

// GetEdgeArrayMipOffset @ 145f2e1a0

int __cdecl UE::Landscape::GetEdgeArrayMipOffset(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 4) {
    return 0;
  }
  if ((param_1 & param_1 - 1U) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(MipEdgeLength & (MipEdgeLength - 1)) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = 0x1f;
  if (param_1 != 0) {
    for (; (uint)param_1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = iVar3;
  }
  return param_1 + iVar4 * -2;
}

// GetEdgeDataSize @ 145f2e3d0

int __cdecl UE::Landscape::GetEdgeDataSize(int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = param_1 * 2;
  if ((int)uVar2 < 4) {
    return 0;
  }
  if ((uVar2 & uVar2 - 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(MipEdgeLength & (MipEdgeLength - 1)) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x102,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  iVar4 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar5 = 0;
  if (uVar2 != 0) {
    iVar5 = iVar4;
  }
  return (uVar2 + iVar5 * -2) * 4;
}

// GetNeighborRelativePosition @ 145f2e790

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

TIntPoint<int> __cdecl UE::Landscape::GetNeighborRelativePosition(EDirectionIndex param_1)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int>_u_0 TVar2;
  undefined7 in_register_00000009;
  byte in_DL;
  
  if (in_DL < 8) {
    *(TIntPoint<int>_u_0 *)CONCAT71(in_register_00000009,param_1) =
         RelativePositions[in_DL].field0_0x0;
    TVar1._1_7_ = in_register_00000009;
    TVar1._s_0.X._0_1_ = param_1;
    return (TIntPoint<int>)TVar1;
  }
  *(undefined8 *)CONCAT71(in_register_00000009,param_1) = 0;
  TVar2._1_7_ = in_register_00000009;
  TVar2._s_0.X._0_1_ = param_1;
  return (TIntPoint<int>)TVar2;
}

// GetOppositeIndex @ 145f2eaa0

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

EDirectionIndex __cdecl UE::Landscape::GetOppositeIndex(EDirectionIndex param_1)

{
  return param_1 - CornerCount & BottomLeft;
}

// GetSourceTextureEdgeStartCoord @ 145f2f020

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __cdecl
UE::Landscape::GetSourceTextureEdgeStartCoord
          (EDirectionIndex param_1,int param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (BottomLeft < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(EdgeIndex >= EEdgeIndex::First) && (EdgeIndex <= EEdgeIndex::Last)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x9f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = param_2 + -1;
  iVar3 = iVar4;
  if (2 < (param_1 - BottomRight & 7)) {
    iVar3 = 0;
  }
  *param_3 = iVar3;
  if (2 < (param_1 - TopRight & 7)) {
    iVar4 = 0;
  }
  *param_4 = iVar4;
  return;
}

// GetSourceTextureEdgeStartStrideCount @ 145f2f0b0

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

int __cdecl
UE::Landscape::GetSourceTextureEdgeStartStrideCount
          (EDirectionIndex param_1,int param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (BottomLeft < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(EdgeIndex >= EEdgeIndex::First) && (EdgeIndex <= EEdgeIndex::Last)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdgeFixup.cpp"
                       ,0x9f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = param_2 + -1;
  iVar4 = iVar3;
  if (2 < (param_1 - TopRight & 7)) {
    iVar4 = 0;
  }
  if (2 < (param_1 - BottomRight & 7)) {
    iVar3 = 0;
  }
  iVar3 = iVar4 * param_2 + iVar3;
  if ((param_1 & BottomRight) == Bottom) {
    iVar4 = param_2;
    if ((param_1 & TopRight) == Bottom) {
      iVar4 = 1;
    }
    *param_3 = iVar4;
    *param_4 = param_2 + -2;
    iVar3 = iVar4 + iVar3;
  }
  else {
    *param_3 = 0;
    *param_4 = 1;
  }
  return iVar3;
}

// GetTileVertexFactoryType @ 145f2f5a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __cdecl UE::Landscape::Culling::GetTileVertexFactoryType(void)

{
  return &FLandscapeTileVertexFactory::StaticType;
}

// GetTypeHash @ 145f2f700

uint __cdecl UE::Landscape::Culling::GetTypeHash(FArgumentsKey *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (param_1->RenderCoord).field0_0x0._s_0.Y;
  uVar2 = ((uint)((ulonglong)param_1->ViewPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->ViewPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = (param_1->RenderCoord).field0_0x0._s_0.X - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar5 = (uVar1 - uVar3) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar2 = (uVar3 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar3 = (uVar5 - uVar1) - uVar2 ^ uVar1 >> 0xf;
  uVar1 = (uVar4 >> 0x10 ^ uVar4) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar1) - uVar3 ^ uVar1 << 8;
  uVar4 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xd;
  uVar3 = (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = param_1->ViewStateKey;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar3 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetViewArguments @ 145f2f8d0

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
UE::Landscape::Culling::GetViewArguments
          (FSceneView *param_1,uint param_2,TIntPoint<int> param_3,int param_4,FArguments *param_5)

{
  longlong lVar1;
  code *pcVar2;
  FRHIBuffer *pFVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iStackX_1c;
  FArgumentsKey local_28;
  
  pTVar4 = CVarLandscapeEnableGPUCulling.Ref;
  if (param_4 != 0) {
    return false;
  }
  if (GCullingSystem.Landscapes.ArrayNum == 0) {
    return false;
  }
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (pTVar4->ShadowedValue[1] == 0) {
    return false;
  }
  FVar11.Data = GCullingSystem.Landscapes.AllocatorInstance.Data;
  while( true ) {
    if (FVar11.Data ==
        GCullingSystem.Landscapes.AllocatorInstance.Data +
        (longlong)GCullingSystem.Landscapes.ArrayNum * 0x150) {
      return false;
    }
    if (*(uint *)FVar11.Data == param_2) break;
    FVar11.Data = FVar11.Data + 0x150;
  }
  if ((param_3.field0_0x0._0_4_ < -0x7fffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderCoord.X > (-2147483647i32 - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCulling.cpp"
                         ,0x34f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_28.ViewPtr = param_1;
  local_28.RenderCoord.field0_0x0 = param_3.field0_0x0;
  uVar7 = FSceneView::GetViewKey(param_1);
  local_28.ViewStateKey = uVar7;
  uVar8 = GetTypeHash(&local_28);
  if (*(int *)(FVar11.Data + 0x108) == *(int *)(FVar11.Data + 0x134)) {
    return false;
  }
  pFVar12 = *(FScriptContainerElement **)(FVar11.Data + 0x140);
  if (*(FScriptContainerElement **)(FVar11.Data + 0x140) == (FScriptContainerElement *)0x0) {
    pFVar12 = FVar11.Data + 0x138;
  }
  iVar13 = *(int *)(pFVar12 + (ulonglong)(*(int *)(FVar11.Data + 0x148) - 1U & uVar8) * 4);
  if (iVar13 == -1) {
    return false;
  }
  iStackX_1c = param_3.field0_0x0._4_4_;
  while ((((plVar9 = (longlong *)((longlong)iVar13 * 0x38 + *(longlong *)(FVar11.Data + 0x100)),
           (FSceneView *)*plVar9 != param_1 || ((int)plVar9[1] != param_3.field0_0x0._0_4_)) ||
          (*(int *)((longlong)plVar9 + 0xc) != iStackX_1c)) || (*(uint *)(plVar9 + 2) != uVar7))) {
    iVar13 = (int)plVar9[6];
    if (iVar13 == -1) {
      return false;
    }
  }
  if (iVar13 == -1) {
    return false;
  }
  plVar10 = plVar9 + 3;
  if (plVar9 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 == (longlong *)0x0) {
    return false;
  }
  pFVar3 = (FRHIBuffer *)plVar10[1];
  param_5->IndirectArgsBuffer = (FRHIBuffer *)*plVar10;
  param_5->TileDataVertexBuffer = pFVar3;
  lVar1 = plVar10[2];
  param_5->IndirectArgsOffset = (int)lVar1;
  param_5->TileDataOffset = (int)((ulonglong)lVar1 >> 0x20);
  return true;
}

// InitMainViews @ 145f2fe40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Landscape::Culling::InitMainViews
          (FRDGBuilder *param_1,TArrayView<FSceneView_const_*,int> *param_2)

{
  FSceneView **ppFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_void___cdecl_UE::Landscape::Culling::InitMainViews(FRDGBuilder_&,TArrayView<FSceneView_const_*,int>)_::_2_::FStat_STAT_LandscapeCulling_InitMainViews>
  FVar9;
  ForElementType<FViewMatrices> FVar10;
  longlong lVar11;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FViewMatrices *_Src;
  FSceneView **ppFVar15;
  undefined1 auStackY_2358 [32];
  FColor_u_0 local_22f8 [2];
  FName local_22f0;
  uint local_22e8;
  uint uStack_22e4;
  FName local_22e0;
  TArrayView<FSceneView_const_*,int> *local_22d0;
  FRDGBuilder *local_22c8;
  ForElementType<FViewMatrices> local_22b8;
  int iStack_22b0;
  undefined4 uStack_22ac;
  FName local_22a8;
  FName local_22a0;
  TArrayView<FSceneView_const_*,int> local_2298;
  TArrayView<FViewMatrices,int> local_2288;
  TArrayView<FSceneView_const_*,int> local_2278;
  ForElementType<FViewMatrices> local_2268;
  int local_58;
  int local_54 [3];
  ulonglong local_48;
  
  pTVar5 = CVarLandscapeEnableGPUCulling.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2358;
  if (GCullingSystem.Landscapes.ArrayNum == 0) {
    return;
  }
  local_22d0 = param_2;
  local_22c8 = param_1;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar5->ShadowedValue[1] == 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LandscapeCulling_InitMainViews ==
        (FThreadSafeStaticStat<_void___cdecl_UE::Landscape::Culling::InitMainViews(FRDGBuilder_&,TArrayView<FSceneView_const_*,int>)_::_2_::FStat_STAT_LandscapeCulling_InitMainViews>
         )0x0) {
      pFVar8 = ::FName::FName(&local_22a8,"STAT_LandscapeCulling_InitMainViews");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeCulling_InitMainViews,*pFVar8,
                 L"STAT_LandscapeCulling_InitMainViews","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_LandscapeCulling_InitMainViews;
  if (StatPtr_STAT_LandscapeCulling_InitMainViews ==
      (FThreadSafeStaticStat<_void___cdecl_UE::Landscape::Culling::InitMainViews(FRDGBuilder_&,TArrayView<FSceneView_const_*,int>)_::_2_::FStat_STAT_LandscapeCulling_InitMainViews>
       )0x0) {
    pFVar8 = ::FName::FName(&local_22a0,"STAT_LandscapeCulling_InitMainViews");
    FVar9 = (FThreadSafeStaticStat<_void___cdecl_UE::Landscape::Culling::InitMainViews(FRDGBuilder_&,TArrayView<FSceneView_const_*,int>)_::_2_::FStat_STAT_LandscapeCulling_InitMainViews>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeCulling_InitMainViews,
                         *pFVar8,L"STAT_LandscapeCulling_InitMainViews","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar6 = false;
  bVar4 = false;
  local_22e0.ComparisonIndex.Value = 0;
  local_22e0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_22f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_22f8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar6 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_22f0.ComparisonIndex.Value = FVar13.Value;
        local_22f0.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_22f0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCulling.cpp"
                   ,0x321);
        bVar6 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_22e8 = FVar13.Value;
      uStack_22e4 = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar3 = true;
      goto LAB_145f3003e;
    }
  }
  bVar3 = false;
  FVar14 = local_22e0;
LAB_145f3003e:
  if ((GCullingSystem.Views.ArrayNum != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GCullingSystem.Views.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCulling.cpp"
                         ,0x323,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2298.DataPtr = param_2->DataPtr;
  local_2298.ArrayNum = param_2->ArrayNum;
  local_2298._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ComputeSectionIntermediateData(param_1,&local_2298);
  ppFVar15 = param_2->DataPtr;
  local_2268.SecondaryData = (ForElementType<FViewMatrices>)0x0;
  local_58 = 0;
  local_54[0] = 4;
  ppFVar1 = ppFVar15 + param_2->ArrayNum;
  iStack_22b0 = local_58;
  do {
    local_58 = iStack_22b0;
    if (ppFVar15 == ppFVar1) {
      local_22b8 = (ForElementType<FViewMatrices>)&local_2268;
      if (local_2268.SecondaryData != (ForElementType<FViewMatrices>)0x0) {
        local_22b8 = local_2268.SecondaryData;
      }
      if ((iStack_22b0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_2278.DataPtr = param_2->DataPtr;
      local_2278.ArrayNum = param_2->ArrayNum;
      local_2278._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_2288._12_4_ = uStack_22ac;
      local_2288.ArrayNum = iStack_22b0;
      local_2288.DataPtr = (FViewMatrices *)local_22b8;
      DispatchCulling(local_22c8,&local_2278,&local_2288,true);
      if (local_2268.SecondaryData != (ForElementType<FViewMatrices>)0x0) {
        FMemory::Free((void *)local_2268.SecondaryData);
      }
      if (bVar4) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar3) {
        FThreadStats::AddMessage(FVar14,CycleScopeEnd);
      }
      return;
    }
    _Src = &(*ppFVar15)->ViewMatrices;
    FVar10 = (ForElementType<FViewMatrices>)&local_2268;
    if (local_2268.SecondaryData != (ForElementType<FViewMatrices>)0x0) {
      FVar10 = local_2268.SecondaryData;
    }
    if ((ulonglong)FVar10 <= _Src) {
      FVar10 = (ForElementType<FViewMatrices>)&local_2268;
      if (local_2268.SecondaryData != (ForElementType<FViewMatrices>)0x0) {
        FVar10 = local_2268.SecondaryData;
      }
      if ((_Src < (undefined1 *)((longlong)local_54[0] * 0x880 + (longlong)FVar10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_58 == local_54[0]) {
      local_58 = Core::Private::
                 ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewMatrices>_>
                           (0x880,0x10,&local_2268,local_54);
    }
    lVar11 = (longlong)local_58;
    FVar10 = (ForElementType<FViewMatrices>)&local_2268;
    if (local_2268.SecondaryData != (ForElementType<FViewMatrices>)0x0) {
      FVar10 = local_2268.SecondaryData;
    }
    local_58 = local_58 + 1;
    memcpy((undefined1 *)(lVar11 * 0x880 + (longlong)FVar10),_Src,0x880);
    ppFVar15 = ppFVar15 + 1;
    param_2 = local_22d0;
    iStack_22b0 = local_58;
  } while( true );
}

// InitShadowViews @ 145f30f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Landscape::Culling::InitShadowViews
          (FRDGBuilder *param_1,TArrayView<FSceneView_const_*,int> *param_2,
          TArrayView<FViewMatrices,int> *param_3)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_void___cdecl_UE::Landscape::Culling::InitShadowViews(FRDGBuilder_&,TArrayView<FSceneView_const_*,int>,TArrayView<FViewMatrices,int>)_::_2_::FStat_STAT_LandscapeCulling_InitShadowViews>
  FVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FColor_u_0 FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  bool bVar14;
  FColor_u_0 local_res20;
  uint uStackX_24;
  FColor_u_0 local_88;
  uint local_84;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  TArrayView<FViewMatrices,int> local_58;
  TArrayView<FSceneView_const_*,int> local_48;
  FStatMessage local_38;
  
  pTVar5 = CVarLandscapeEnableGPUCulling.Ref;
  if (GCullingSystem.Landscapes.ArrayNum != 0) {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = CVarLandscapeEnableGPUCullingShadows.Ref;
    if (pTVar5->ShadowedValue[1] != 0) {
      bVar7 = IsInParallelRenderingThread();
      if ((!bVar7) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pTVar6->ShadowedValue[1] != 0) {
        FVar13.Value = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_LandscapeCulling_InitShadowViews ==
              (FThreadSafeStaticStat<_void___cdecl_UE::Landscape::Culling::InitShadowViews(FRDGBuilder_&,TArrayView<FSceneView_const_*,int>,TArrayView<FViewMatrices,int>)_::_2_::FStat_STAT_LandscapeCulling_InitShadowViews>
               )0x0) {
            pFVar8 = ::FName::FName(&local_78,"STAT_LandscapeCulling_InitShadowViews");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeCulling_InitShadowViews,
                       *pFVar8,L"STAT_LandscapeCulling_InitShadowViews","STATGROUP_Quick",
                       "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        FVar9 = StatPtr_STAT_LandscapeCulling_InitShadowViews;
        if (StatPtr_STAT_LandscapeCulling_InitShadowViews ==
            (FThreadSafeStaticStat<_void___cdecl_UE::Landscape::Culling::InitShadowViews(FRDGBuilder_&,TArrayView<FSceneView_const_*,int>,TArrayView<FViewMatrices,int>)_::_2_::FStat_STAT_LandscapeCulling_InitShadowViews>
             )0x0) {
          pFVar8 = ::FName::FName(&local_70,"STAT_LandscapeCulling_InitShadowViews");
          FVar9 = (FThreadSafeStaticStat<_void___cdecl_UE::Landscape::Culling::InitShadowViews(FRDGBuilder_&,TArrayView<FSceneView_const_*,int>,TArrayView<FViewMatrices,int>)_::_2_::FStat_STAT_LandscapeCulling_InitShadowViews>
                   )FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_LandscapeCulling_InitShadowViews,*pFVar8,
                               L"STAT_LandscapeCulling_InitShadowViews","STATGROUP_Quick",
                               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid
                              );
        }
        FVar2 = *(FName *)FVar9;
        bVar7 = false;
        bVar4 = false;
        local_68.ComparisonIndex.Value = 0;
        local_68.Number = 0;
        FVar11.Bits = (uint)FVar2.ComparisonIndex.Value;
        uVar10 = FVar2.Number;
        if ((FVar11.Bits == 0) && (uVar10 == 0)) {
          local_58.DataPtr = param_3->DataPtr;
          local_58.ArrayNum = param_3->ArrayNum;
          local_58._12_4_ = *(undefined4 *)&param_3->field_0xc;
          local_48.DataPtr = param_2->DataPtr;
          local_48.ArrayNum = param_2->ArrayNum;
          local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
          DispatchCulling(param_1,&local_48,&local_58,false);
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res20.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
            bVar7 = false;
            bVar4 = true;
            if (-1 < CpuChannel->Enabled) {
              local_88.Bits = FVar11.Bits;
              local_84 = uVar10;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        ((FName *)&local_88._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCulling.cpp"
                         ,0x338);
              bVar7 = true;
              bVar4 = true;
            }
          }
          bVar14 = FThreadStats::bPrimaryEnable != false;
          FVar12 = local_68;
          if (bVar14) {
            local_res20.Bits = FVar11.Bits;
            uStackX_24 = uVar10;
            local_68 = FVar2;
            FThreadStats::AddMessage(FVar2,CycleScopeStart);
            FVar12 = FVar2;
            FVar13.Value = local_68.ComparisonIndex.Value;
          }
          local_58.DataPtr = param_3->DataPtr;
          local_58.ArrayNum = param_3->ArrayNum;
          local_58._12_4_ = *(undefined4 *)&param_3->field_0xc;
          local_48.DataPtr = param_2->DataPtr;
          local_48.ArrayNum = param_2->ArrayNum;
          local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
          DispatchCulling(param_1,&local_48,&local_58,false);
          if (bVar4) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar14) && (FVar12 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this = TlsGetValue(FThreadStats::TlsSlot);
            if (this == (FThreadStats *)0x0) {
              this_00 = FThreadStatsPool::Get();
              this = FThreadStatsPool::GetFromPool(this_00);
            }
            if (this->bWaitForExplicitFlush < this->ScopeCount) {
              local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
              local_38.NameAndInfo.Index.Value = FVar13.Value;
              QueryPerformanceCounter(&local_80);
              local_38.StatData.Pad[4] = '\0';
              local_38.StatData.Pad[5] = '\0';
              local_38.StatData.Pad[6] = '\0';
              local_38.StatData.Pad[7] = '\0';
              local_38.StatData.Pad[0] = local_80.s.LowPart._0_1_;
              local_38.StatData.Pad[1] = local_80.s.LowPart._1_1_;
              local_38.StatData.Pad[2] = local_80.s.LowPart._2_1_;
              local_38.StatData.Pad[3] = local_80.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this,&local_38);
              piVar1 = &this->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(this,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this,false,false);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// InitSharedBuffers @ 145f313b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Landscape::Culling::InitSharedBuffers
          (FRHICommandListBase *param_1,FLandscapeSharedBuffers *param_2,Type param_3)

{
  int iVar1;
  int iVar2;
  FRenderResource *this;
  FVertexBuffer *this_00;
  FLandscapeVertexFactory *this_01;
  
  if (param_2->TileVertexFactory == (FLandscapeVertexFactory *)0x0) {
    iVar1 = param_2->SubsectionSizeVerts;
    this = ::operator_new(0x70);
    if (this == (FRenderResource *)0x0) {
      this = (FRenderResource *)0x0;
    }
    else {
      FRenderResource::FRenderResource(this);
      this->_padding_ = (longlong)&___7FLandscapeTileMesh_Culling_Landscape_UE__6B_;
      FVertexBuffer::FVertexBuffer((FVertexBuffer *)(this + 1));
      FIndexBuffer::FIndexBuffer((FIndexBuffer *)&this[2].OwnerName);
      FRenderResource::InitResource(this,param_1);
      (**(code **)(this[1]._padding_ + 0x18))(this + 1,param_1);
      (**(code **)((longlong)this[2].OwnerName + 0x18))(&this[2].OwnerName,param_1);
    }
    this_00 = ::operator_new(0x30);
    if (this_00 == (FVertexBuffer *)0x0) {
      this_00 = (FVertexBuffer *)0x0;
    }
    else {
      iVar2 = param_2->NumSubsections;
      FVertexBuffer::FVertexBuffer(this_00);
      *(int *)&this_00[1]._padding_ = iVar2;
      this_00->_padding_ = (longlong)&___7FLandscapeTileDataBuffer_Culling_Landscape_UE__6B_;
      *(int *)((longlong)&this_00[1]._padding_ + 4) = iVar1 + -1;
      FRenderResource::InitResource((FRenderResource *)this_00,param_1);
    }
    this_01 = ::operator_new(0x170);
    if (this_01 == (FLandscapeVertexFactory *)0x0) {
      this_01 = (FLandscapeVertexFactory *)0x0;
    }
    else {
      FLandscapeVertexFactory::FLandscapeVertexFactory(this_01,param_3);
      this_01->_padding_ = (longlong)&___7FLandscapeTileVertexFactory__6B_;
    }
    this_01[1]._padding_ = (longlong)(this + 1);
    *(undefined4 *)&this_01[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = 0x60400;
    this_01[1]._padding_ = (longlong)this_00;
    *(undefined4 *)&this_01[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = 0x1060400;
    (**(code **)(this_01->_padding_ + 0x18))(this_01,param_1);
    param_2->TileMesh = this;
    param_2->TileVertexFactory = this_01;
    param_2->TileDataBuffer = this_00;
  }
  return;
}

// IsDiagonalCorner @ 145f31570

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

bool __cdecl UE::Landscape::IsDiagonalCorner(EDirectionIndex param_1)

{
  return (bool)(param_1 & BottomRight);
}

// IsDoubleTriangleCorner @ 145f31580

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

bool __cdecl UE::Landscape::IsDoubleTriangleCorner(EDirectionIndex param_1)

{
  return (bool)(~(param_1 >> 1) & 1);
}

// IsTopOrBottomEdge @ 145f315a0

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

bool __cdecl UE::Landscape::IsTopOrBottomEdge(EDirectionIndex param_1)

{
  return (param_1 & TopRight) == Bottom;
}

// NeighborsToBlendedEdges @ 145f315f0

EDirectionFlags __cdecl UE::Landscape::NeighborsToBlendedEdges(EDirectionFlags param_1)

{
  byte bVar1;
  
  bVar1 = (byte)(param_1 & 0x55);
  return (bVar1 << 6 | bVar1) * '\x02' | (EDirectionFlags)((param_1 & 0x55) >> 1) | param_1;
}

// PreRenderViewFamily @ 145f32090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl UE::Landscape::Culling::PreRenderViewFamily(FSceneViewFamily *param_1)

{
  uchar *puVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> FVar7;
  ForElementType<UE::Landscape::Culling::FDispatchIntermediates> FVar8;
  ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> FVar9;
  ForElementType<UE::Landscape::Culling::FDispatchIntermediates> FVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar11 = 0;
  if (0 < GCullingSystem.Landscapes.ArrayNum) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < GCullingSystem.Landscapes.ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
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
      FVar4.Data = GCullingSystem.Landscapes.AllocatorInstance.Data;
      FVar9 = (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)
              ((longlong)GCullingSystem.Landscapes.AllocatorInstance.Data + lVar12 + 0x10);
      FVar7 = *(ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *)
               ((longlong)FVar9 + 0xb0);
      piVar2 = (int *)((longlong)FVar9 + 0xbc);
      if (*piVar2 < 0) {
        if (FVar7 == (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
          FVar7 = FVar9;
        }
        DestructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>
                  ((FViewStateIntermediateData *)FVar7,*(int *)((longlong)FVar9 + 0xb8));
        *(undefined4 *)((longlong)FVar9 + 0xb8) = 0;
        if (*piVar2 != 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>_>
                    (0x58,8,0,(ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *)
                              FVar9,0,piVar2);
        }
      }
      else {
        if (FVar7 == (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
          FVar7 = FVar9;
        }
        DestructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>
                  ((FViewStateIntermediateData *)FVar7,*(int *)((longlong)FVar9 + 0xb8));
        *(undefined4 *)((longlong)FVar9 + 0xb8) = 0;
      }
      FVar10 = (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)
               ((longlong)FVar4.Data + lVar12 + 0xd0);
      puVar1 = (uchar *)((longlong)FVar10 + 0x2c);
      FVar8 = *(ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *)
               ((longlong)FVar10 + 0x20);
      if (*(int *)puVar1 < 0) {
        if (FVar8 == (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)0x0) {
          FVar8 = FVar10;
        }
        DestructItems<UE::Landscape::Culling::FDispatchIntermediates,int>
                  ((FDispatchIntermediates *)FVar8,*(int *)((longlong)FVar10 + 0x28));
        *(undefined4 *)((longlong)FVar10 + 0x28) = 0;
        if (*(int *)puVar1 != 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FDispatchIntermediates>_>
                    (0x10,8,0,(ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *)
                              FVar10,0,(int *)puVar1);
        }
      }
      else {
        if (FVar8 == (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)0x0) {
          FVar8 = FVar10;
        }
        DestructItems<UE::Landscape::Culling::FDispatchIntermediates,int>
                  ((FDispatchIntermediates *)FVar8,*(int *)((longlong)FVar10 + 0x28));
        *(undefined4 *)((longlong)FVar10 + 0x28) = 0;
      }
      TSet<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>,TDefaultMapHashableKeyFuncs<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>,TDefaultMapHashableKeyFuncs<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments,0>,FDefaultSetAllocator>
               *)(FVar4.Data + lVar12 + 0x100));
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x150;
    } while ((int)uVar11 < GCullingSystem.Landscapes.ArrayNum);
  }
  GCullingSystem.Views.ArrayNum = 0;
  if ((GCullingSystem.Views.ArrayMax < 0) && (GCullingSystem.Views.ArrayMax != 0)) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
              (8,8,0,&GCullingSystem.Views.AllocatorInstance,0,&GCullingSystem.Views.ArrayMax);
  }
  return;
}

// RegisterLandscape @ 145f320a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Landscape::Culling::RegisterLandscape
          (FRHICommandListBase *param_1,FLandscapeSharedBuffers *param_2,Type param_3,uint param_4,
          int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  FRenderResource *this;
  FVertexBuffer *this_00;
  FLandscapeVertexFactory *this_01;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  
  if (0x1e < (uint)((param_5 + -1) * param_6)) {
    if (param_2->TileVertexFactory == (FLandscapeVertexFactory *)0x0) {
      iVar1 = param_2->SubsectionSizeVerts;
      this = ::operator_new(0x70);
      if (this == (FRenderResource *)0x0) {
        this = (FRenderResource *)0x0;
      }
      else {
        FRenderResource::FRenderResource(this);
        this->_padding_ = (longlong)&___7FLandscapeTileMesh_Culling_Landscape_UE__6B_;
        FVertexBuffer::FVertexBuffer((FVertexBuffer *)(this + 1));
        FIndexBuffer::FIndexBuffer((FIndexBuffer *)&this[2].OwnerName);
        FRenderResource::InitResource(this,param_1);
        (**(code **)(this[1]._padding_ + 0x18))(this + 1,param_1);
        (**(code **)((longlong)this[2].OwnerName + 0x18))(&this[2].OwnerName,param_1);
      }
      this_00 = ::operator_new(0x30);
      if (this_00 == (FVertexBuffer *)0x0) {
        this_00 = (FVertexBuffer *)0x0;
      }
      else {
        iVar2 = param_2->NumSubsections;
        FVertexBuffer::FVertexBuffer(this_00);
        *(int *)&this_00[1]._padding_ = iVar2;
        this_00->_padding_ = (longlong)&___7FLandscapeTileDataBuffer_Culling_Landscape_UE__6B_;
        *(int *)((longlong)&this_00[1]._padding_ + 4) = iVar1 + -1;
        FRenderResource::InitResource((FRenderResource *)this_00,param_1);
      }
      this_01 = ::operator_new(0x170);
      if (this_01 == (FLandscapeVertexFactory *)0x0) {
        this_01 = (FLandscapeVertexFactory *)0x0;
      }
      else {
        FLandscapeVertexFactory::FLandscapeVertexFactory(this_01,param_3);
        this_01->_padding_ = (longlong)&___7FLandscapeTileVertexFactory__6B_;
      }
      this_01[1]._padding_ = (longlong)(this + 1);
      *(undefined4 *)&this_01[1]._padding_ = 0;
      *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = 0x60400;
      this_01[1]._padding_ = (longlong)this_00;
      *(undefined4 *)&this_01[1]._padding_ = 0;
      *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = 0x1060400;
      (**(code **)(this_01->_padding_ + 0x18))(this_01,param_1);
      param_2->TileMesh = this;
      param_2->TileDataBuffer = this_00;
      param_2->TileVertexFactory = this_01;
    }
    for (FVar3.Data = GCullingSystem.Landscapes.AllocatorInstance.Data;
        FVar3.Data !=
        GCullingSystem.Landscapes.AllocatorInstance.Data +
        (longlong)GCullingSystem.Landscapes.ArrayNum * 0x150; FVar3.Data = FVar3.Data + 0x150) {
      if (*(uint *)FVar3.Data == param_4) {
        *(int *)(FVar3.Data + 4) = *(int *)(FVar3.Data + 4) + 1;
        return;
      }
    }
    if (GCullingSystem.Landscapes.ArrayNum == GCullingSystem.Landscapes.ArrayMax) {
      GCullingSystem.Landscapes.ArrayNum =
           Core::Private::ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x150,8,(ForAnyElementType *)&GCullingSystem,
                      &GCullingSystem.Landscapes.ArrayMax);
    }
    pFVar4 = GCullingSystem.Landscapes.AllocatorInstance.Data +
             (longlong)GCullingSystem.Landscapes.ArrayNum * 0x150;
    GCullingSystem.Landscapes.ArrayNum = GCullingSystem.Landscapes.ArrayNum + 1;
    DefaultConstructItems<UE::Landscape::Culling::FCullingEntry,int>(pFVar4,1);
    *(uint *)pFVar4 = param_4;
    *(int *)(pFVar4 + 8) = param_6;
    *(int *)(pFVar4 + 0xc) = param_5 + -1;
    *(undefined4 *)(pFVar4 + 4) = 1;
  }
  return;
}

// ResetIntermediateData @ 145f32a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl UE::Landscape::Culling::ResetIntermediateData(void)

{
  uchar *puVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> FVar7;
  ForElementType<UE::Landscape::Culling::FDispatchIntermediates> FVar8;
  ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> FVar9;
  ForElementType<UE::Landscape::Culling::FDispatchIntermediates> FVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar11 = 0;
  if (0 < GCullingSystem.Landscapes.ArrayNum) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < GCullingSystem.Landscapes.ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
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
      FVar4.Data = GCullingSystem.Landscapes.AllocatorInstance.Data;
      FVar9 = (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)
              ((longlong)GCullingSystem.Landscapes.AllocatorInstance.Data + lVar12 + 0x10);
      FVar7 = *(ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *)
               ((longlong)FVar9 + 0xb0);
      piVar2 = (int *)((longlong)FVar9 + 0xbc);
      if (*piVar2 < 0) {
        if (FVar7 == (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
          FVar7 = FVar9;
        }
        DestructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>
                  ((FViewStateIntermediateData *)FVar7,*(int *)((longlong)FVar9 + 0xb8));
        *(undefined4 *)((longlong)FVar9 + 0xb8) = 0;
        if (*piVar2 != 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>_>
                    (0x58,8,0,(ForElementType<UE::Landscape::Culling::FViewStateIntermediateData> *)
                              FVar9,0,piVar2);
        }
      }
      else {
        if (FVar7 == (ForElementType<UE::Landscape::Culling::FViewStateIntermediateData>)0x0) {
          FVar7 = FVar9;
        }
        DestructItems<UE::Landscape::Culling::FViewStateIntermediateData,int>
                  ((FViewStateIntermediateData *)FVar7,*(int *)((longlong)FVar9 + 0xb8));
        *(undefined4 *)((longlong)FVar9 + 0xb8) = 0;
      }
      FVar10 = (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)
               ((longlong)FVar4.Data + lVar12 + 0xd0);
      puVar1 = (uchar *)((longlong)FVar10 + 0x2c);
      FVar8 = *(ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *)
               ((longlong)FVar10 + 0x20);
      if (*(int *)puVar1 < 0) {
        if (FVar8 == (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)0x0) {
          FVar8 = FVar10;
        }
        DestructItems<UE::Landscape::Culling::FDispatchIntermediates,int>
                  ((FDispatchIntermediates *)FVar8,*(int *)((longlong)FVar10 + 0x28));
        *(undefined4 *)((longlong)FVar10 + 0x28) = 0;
        if (*(int *)puVar1 != 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Landscape::Culling::FDispatchIntermediates>_>
                    (0x10,8,0,(ForElementType<UE::Landscape::Culling::FDispatchIntermediates> *)
                              FVar10,0,(int *)puVar1);
        }
      }
      else {
        if (FVar8 == (ForElementType<UE::Landscape::Culling::FDispatchIntermediates>)0x0) {
          FVar8 = FVar10;
        }
        DestructItems<UE::Landscape::Culling::FDispatchIntermediates,int>
                  ((FDispatchIntermediates *)FVar8,*(int *)((longlong)FVar10 + 0x28));
        *(undefined4 *)((longlong)FVar10 + 0x28) = 0;
      }
      TSet<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>,TDefaultMapHashableKeyFuncs<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments>,TDefaultMapHashableKeyFuncs<UE::Landscape::Culling::FArgumentsKey,UE::Landscape::Culling::FArguments,0>,FDefaultSetAllocator>
               *)(FVar4.Data + lVar12 + 0x100));
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x150;
    } while ((int)uVar11 < GCullingSystem.Landscapes.ArrayNum);
  }
  GCullingSystem.Views.ArrayNum = 0;
  if ((GCullingSystem.Views.ArrayMax < 0) && (GCullingSystem.Views.ArrayMax != 0)) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
              (8,8,0,&GCullingSystem.Views.AllocatorInstance,0,&GCullingSystem.Views.ArrayMax);
  }
  return;
}

// RotateDirection @ 145f33140

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

EDirectionIndex __cdecl UE::Landscape::RotateDirection(EDirectionIndex param_1,int param_2)

{
  return param_1 - (char)param_2 & BottomLeft;
}

// RotateFlags @ 145f33150

EDirectionFlags __cdecl UE::Landscape::RotateFlags(EDirectionFlags param_1,int param_2)

{
  return (EDirectionFlags)(CONCAT11(param_1,param_1) >> ((byte)param_2 & 7));
}

// SetupMeshBatch @ 145f334c0

void __cdecl
UE::Landscape::Culling::SetupMeshBatch(FLandscapeSharedBuffers *param_1,FMeshBatch *param_2)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  ForElementType<FMeshBatchElement> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  iVar2 = param_1->SubsectionSizeVerts;
  if (((0x1e < (uint)((iVar2 + -1) * param_1->NumSubsections)) && (param_2->LODIndex == '\0')) &&
     (param_1->TileVertexFactory != (FLandscapeVertexFactory *)0x0)) {
    param_2->bViewDependentArguments = 1;
    param_2->VertexFactory = (FVertexFactory *)param_1->TileVertexFactory;
    if ((param_2->Elements).ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar4 = (param_2->Elements).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<FMeshBatchElement>)0x0) {
      param_2 = (FMeshBatch *)FVar4;
    }
    uVar7 = iVar2 + 2U >> 2;
    *(FName **)((longlong)param_2 + 0x18) = &param_1->TileMesh[2].OwnerName;
    puVar1 = (uchar *)((longlong)param_2 + 0x5c);
    puVar1[0] = ' ';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    iVar2 = param_1->NumSubsections;
    iVar3 = param_1->NumSubsections;
    puVar1 = (uchar *)((longlong)param_2 + 0x58);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = (uchar *)((longlong)param_2 + 0x68);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = (uchar *)((longlong)param_2 + 0x6c);
    puVar1[0] = '\x18';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    *(uint *)((longlong)param_2 + 0x60) = uVar7 * uVar7 * iVar2 * iVar3;
  }
  return;
}

// ToFlag @ 145f33900

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

EDirectionFlags __cdecl UE::Landscape::ToFlag(EDirectionIndex param_1)

{
  return '\x01' << (param_1 & 0x1f);
}

// UnregisterLandscape @ 145f33fd0

void __cdecl UE::Landscape::Culling::UnregisterLandscape(uint param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FCullingEntry *this;
  
  uVar7 = GCullingSystem.Landscapes.ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 * 0x150;
    iVar6 = GCullingSystem.Landscapes.ArrayNum;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar6 = GCullingSystem.Landscapes.ArrayNum, bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = GCullingSystem.Landscapes.AllocatorInstance.Data + lVar8;
      if (*(uint *)pFVar5 == param_1) {
        *(int *)(pFVar5 + 4) = *(int *)(pFVar5 + 4) + -1;
        if (0 < *(int *)(pFVar5 + 4)) {
          return;
        }
        uVar4 = 0;
        if ((int)uVar7 < GCullingSystem.Landscapes.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar2.Data = GCullingSystem.Landscapes.AllocatorInstance.Data;
        this = (FCullingEntry *)
               (GCullingSystem.Landscapes.AllocatorInstance.Data + (ulonglong)uVar7 * 0x150);
        FCullingEntry::~FCullingEntry(this);
        iVar6 = (GCullingSystem.Landscapes.ArrayNum - uVar7) + -1;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(this,FVar2.Data + (longlong)(GCullingSystem.Landscapes.ArrayNum - iVar6) * 0x150,
                  (longlong)iVar6 * 0x150);
        }
        GCullingSystem.Landscapes.ArrayNum = GCullingSystem.Landscapes.ArrayNum + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x150,8,(ForAnyElementType *)&GCullingSystem,GCullingSystem.Landscapes.ArrayNum,
                   &GCullingSystem.Landscapes.ArrayMax);
        return;
      }
      lVar8 = lVar8 + -0x150;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// UseCulling @ 145f34210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl UE::Landscape::Culling::UseCulling(EShaderPlatform param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) goto LAB_145f3435d;
  LumenCVarsState.bLumenSupported = false;
  if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
     ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
      (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar3)))) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Lumen.Supported",1);
  if (plVar6 == (longlong *)0x0) {
LAB_145f342e1:
    LumenCVarsState.bLumenSupported = false;
  }
  else {
    iVar5 = (**(code **)(*plVar6 + 200))(plVar6);
    LumenCVarsState.bLumenSupported = true;
    if (iVar5 == 0) goto LAB_145f342e1;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Lumen.DiffuseIndirect.Allow",1);
  LumenCVarsState.DiffuseIndirectInt =
       (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
  _Init_thread_footer(&::_TSS0);
LAB_145f3435d:
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&LandscapeSupportCullingIniValue.CVarName,L"landscape.SupportGPUCulling");
    LandscapeSupportCullingIniValue.CVar = (IConsoleVariable *)0x0;
    atexit(`UE::Landscape::Culling::UseCulling'::__l2::
           _dynamic_atexit_destructor_for__LandscapeSupportCullingIniValue__);
    _Init_thread_footer(&::_TSS1);
  }
  iVar5 = FShaderPlatformCachedIniValue<int>::Get(&LandscapeSupportCullingIniValue,param_1);
  if ((iVar5 == 0) ||
     (bVar3 = UseVirtualShadowMaps(param_1,(FGenericStaticFeatureLevel)GMaxRHIFeatureLevel), bVar3))
  {
    return false;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x20e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pTVar2 = LumenCVarsState.DiffuseIndirectInt;
  if (((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsLumenGI != 0) &&
      (LumenCVarsState.bLumenSupported != false)) &&
     (LumenCVarsState.DiffuseIndirectInt != (TConsoleVariableData<int> *)0x0)) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      lVar7 = 4;
    }
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0) {
      return false;
    }
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UHierarchicalInstancedStaticMeshComponent_*>_> @ 145f3f170

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UHierarchicalInstancedStaticMeshComponent_*>_>
          (ushort param_1,ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *param_2,
          int *param_3)

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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UHierarchicalInstancedStaticMeshComponent_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_> @ 145f3f240

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
          (ushort param_1,ForElementType<FRHITransitionInfo> *param_2,int *param_3)

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
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UHierarchicalInstancedStaticMeshComponent_*>_> @ 145f3f310

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UHierarchicalInstancedStaticMeshComponent_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *param_4,int param_5,
          int *param_6)

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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UHierarchicalInstancedStaticMeshComponent_*>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 145f44f80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UE::Landscape::Private::EnqueueCopyToScratchRTRenderCommand'::__l2::<lambda_1>::operator()
          (void *this,FRDGBuilder *param_1)

{
  TRefCountPtr<IPooledRenderTarget> TVar1;
  FRDGTexture *pFVar2;
  FRDGTexture *pFVar3;
  longlong *local_res8;
  longlong *local_res18;
  
  TVar1 = CreateRenderTarget((FRHITexture *)&local_res8,*(wchar_t **)(*(longlong *)this + 0x20));
  pFVar2 = FRDGBuilder::RegisterExternalTexture
                     (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar1.Reference,None);
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x38))();
  }
  TVar1 = CreateRenderTarget((FRHITexture *)&local_res18,
                             *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0x20));
  pFVar3 = FRDGBuilder::RegisterExternalTexture
                     (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar1.Reference,None);
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x38))();
  }
  AddCopyTexturePass(param_1,pFVar2,pFVar3,(FRHICopyTextureInfo *)((longlong)this + 0x10));
  return;
}

// EnqueueCopyToScratchRTRenderCommand @ 145f50c80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Landscape::Private::EnqueueCopyToScratchRTRenderCommand
          (FCopyFromParams *param_1,FTextureResource *param_2,FTextureResource *param_3,
          FRDGBuilderRecorder *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  uint local_178;
  uint uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int local_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  uint uStack_144;
  FRDGExternalTextureAccessFinal *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FTextureResource *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  FTextureResource *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>
  local_108;
  code *local_f8 [5];
  undefined8 *local_d0;
  FTextureResource *local_c8;
  FTextureResource *pFStack_c0;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  uVar16 = (**(code **)(param_2->_padding_ + 0x38))(param_2);
  uVar16 = uVar16 >> (param_1->SourceMip & 0x1f);
  uVar17 = (**(code **)(param_2->_padding_ + 0x30))(param_2);
  uVar17 = uVar17 >> (param_1->SourceMip & 0x1f);
  uVar18 = (**(code **)(param_3->_padding_ + 0x38))(param_3);
  bVar1 = param_1->DestMip;
  uVar19 = (**(code **)(param_3->_padding_ + 0x30))(param_3);
  bVar2 = param_1->DestMip;
  iVar3 = (param_1->SourcePosition).field0_0x0._s_0.Y;
  uStack_144 = (uint)bVar2;
  iVar4 = (param_1->DestPosition).field0_0x0._s_0.X;
  iVar5 = (param_1->DestPosition).field0_0x0._s_0.Y;
  uVar6 = (param_1->CopySize).field0_0x0._s_0.Y;
  iStack_164 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_158 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  uVar20 = (param_1->CopySize).field0_0x0._s_0.X;
  uStack_14c = 1;
  uVar21 = uVar17;
  if (0 < (int)uVar20) {
    uVar21 = uVar20;
  }
  uStack_170 = 1;
  uVar20 = uVar16;
  if (0 < (int)uVar6) {
    uVar20 = uVar6;
  }
  iVar7 = (param_1->SourcePosition).field0_0x0._s_0.X;
  uStack_154 = param_1->SourceSliceIndex;
  uStack_150 = param_1->DestSliceIndex;
  local_148 = (uint)param_1->SourceMip;
  local_178 = uVar21;
  uStack_174 = uVar20;
  iStack_16c = iVar7;
  local_168 = iVar3;
  iStack_160 = iVar4;
  iStack_15c = iVar5;
  if ((((iVar7 < 0) || (iVar3 < 0)) || (iVar4 < 0)) || (iVar5 < 0)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Info.SourcePosition.X >= 0) && (Info.SourcePosition.Y >= 0) && (Info.DestPosition.X >= 0) && (Info.DestPosition.Y >= 0)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                        ,0xe9,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((int)uVar17 < (int)(iVar7 + uVar21)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Info.SourcePosition.X + Info.Size.X <= SourceSize.X",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                        ,0xea,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((int)uVar16 < (int)(iVar3 + uVar20)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Info.SourcePosition.Y + Info.Size.Y <= SourceSize.Y",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                        ,0xeb,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((int)(uVar19 >> (bVar2 & 0x1f)) < (int)(iVar4 + uVar21)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Info.DestPosition.X + Info.Size.X <= DestSize.X",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                        ,0xec,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((int)(uVar18 >> (bVar1 & 0x1f)) < (int)(iVar5 + uVar20)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Info.DestPosition.Y + Info.Size.Y <= DestSize.Y",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                        ,0xed,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_88 = CONCAT44(uStack_144,local_148);
  uVar9 = CONCAT44(uStack_174,local_178);
  uVar10 = CONCAT44(iStack_16c,uStack_170);
  uVar11 = CONCAT44(iStack_164,local_168);
  uVar12 = CONCAT44(iStack_15c,iStack_160);
  uVar13 = CONCAT44(uStack_154,local_158);
  uVar14 = CONCAT44(uStack_14c,uStack_150);
  uStack_80 = 1;
  uStack_120 = 0x80;
  uStack_110 = 0x2000;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 2;
  local_128 = param_2;
  local_118 = param_3;
  local_c8 = param_2;
  pFStack_c0 = param_3;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_188,2,&local_17c);
  iStack_130 = local_180;
  *(FTextureResource **)local_188.Data = local_128;
  *(ulonglong *)(local_188.Data + 8) = CONCAT44(uStack_11c,uStack_120);
  *(FTextureResource **)&local_188.Data[0x10].field_0x0 = local_118;
  *(ulonglong *)(local_188.Data + 0x18) = CONCAT44(uStack_10c,uStack_110);
  local_138 = (FRDGExternalTextureAccessFinal *)local_188.Data;
  if (local_180 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_f8[0] = (code *)0x0;
  local_d0 = FMemory::Malloc(0x58,8);
  local_d0[1] = local_c8;
  local_d0[2] = pFStack_c0;
  *local_d0 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Landscape::Private::EnqueueCopyToScratchRTRenderCommand'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_d0[3] = uVar9;
  local_d0[4] = uVar10;
  local_d0[5] = uVar11;
  local_d0[6] = uVar12;
  local_d0[7] = uVar13;
  local_d0[8] = uVar14;
  local_d0[9] = local_88;
  local_d0[10] = CONCAT44(uStack_7c,uStack_80);
  if (local_d0 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_f8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Landscape::Private::EnqueueCopyToScratchRTRenderCommand'::__l2::<lambda_1>,void,FRDGBuilder_&>
                  ::Call;
  }
  local_108._12_4_ = uStack_12c;
  local_108.ArrayNum = iStack_130;
  local_108.DataPtr = local_138;
  FRDGBuilderRecorder::EnqueueRDGCommand
            (param_4,(TFunction<void___cdecl(FRDGBuilder_&)> *)local_f8,&local_108);
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  return;
}

// Construct<FLandscapeInfoLayerSettings> @ 145f663c0

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeInfoLayerSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLandscapeInfoLayerSettings> @ 145f663d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeInfoLayerSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLandscapeInfoLayerSettings> @ 145f663e0

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeInfoLayerSettings>(void *param_1)

{
  return;
}

// Copy<FLandscapeInfoLayerSettings> @ 145f663f0

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeInfoLayerSettings>(void *param_1,void *param_2,int param_3)

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
      puVar2[1] = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeProxyMaterialOverride> @ 145f67670

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeProxyMaterialOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLandscapeProxyMaterialOverride> @ 145f67680

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeProxyMaterialOverride>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLandscapeProxyMaterialOverride> @ 145f67690

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeProxyMaterialOverride>(void *param_1)

{
  return;
}

// Copy<FLandscapeProxyMaterialOverride> @ 145f676a0

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeProxyMaterialOverride>
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
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeImportLayerInfo> @ 145f67b70

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeImportLayerInfo>(void *param_1)

{
  return;
}

// ConstructForTests<FLandscapeImportLayerInfo> @ 145f67b90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeImportLayerInfo>(void *param_1)

{
  return;
}

// Construct<FLandscapeEditorLayerSettings> @ 145f67c50

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeEditorLayerSettings>(void *param_1)

{
  return;
}

// ConstructForTests<FLandscapeEditorLayerSettings> @ 145f67c60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeEditorLayerSettings>(void *param_1)

{
  return;
}

// Construct<FLandscapeTargetLayerSettings> @ 145f67c70

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeTargetLayerSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FLandscapeTargetLayerSettings> @ 145f67c80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeTargetLayerSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FLandscapeTargetLayerSettings> @ 145f67c90

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeTargetLayerSettings>(void *param_1)

{
  return;
}

// Copy<FLandscapeTargetLayerSettings> @ 145f67ca0

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeTargetLayerSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// DeleterFunc<FLandscapeRayTracingImpl> @ 145f6fa40

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FLandscapeRayTracingImpl>(void *param_1)

{
  DestructItems<FLandscapeRayTracingState,int>
            (*(FLandscapeRayTracingState **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  ::operator_delete(param_1,0x20);
  return;
}

// DeleterFunc<FLandscapeRayTracingStateList> @ 145f6fa80

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FLandscapeRayTracingStateList>(void *param_1)

{
  FLandscapeRayTracingStateList::~FLandscapeRayTracingStateList
            ((FLandscapeRayTracingStateList *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x20);
  return;
}

// DereferenceIfNecessary<FLandscapeDebugOptions,FLandscapeDebugOptions_*_&> @ 145f6fab0

FLandscapeDebugOptions * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLandscapeDebugOptions,FLandscapeDebugOptions_*_&>
          (FLandscapeDebugOptions **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FLandscapeModule,FLandscapeModule_*_&> @ 145f6fad0

FLandscapeModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLandscapeModule,FLandscapeModule_*_&>
          (FLandscapeModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FLandscapeSceneViewExtension,FLandscapeSceneViewExtension_*_&> @ 145f6faf0

FLandscapeSceneViewExtension * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FLandscapeSceneViewExtension,FLandscapeSceneViewExtension_*_&>
          (FLandscapeSceneViewExtension **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>_> @ 145f74fb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>_>
          (ushort param_1,ForElementType<FLightCacheInterface_*> *param_2,int *param_3)

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
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>_> @ 145f75080

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>_>
          (ushort param_1,
          ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo> *param_2,
          int *param_3)

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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_> @ 145f75150

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_>
          (ushort param_1,ForElementType<FPrimitiveComponentId> *param_2,int *param_3)

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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<void_*>_> @ 145f75220

/* WARNING: Removing unreachable block (ram,0x000145f75267) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<void_*>_>
          (ushort param_1,ForElementType<void_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<void_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLandscapeBatchElementParams>_> @ 145f752b0

/* WARNING: Removing unreachable block (ram,0x000145f752f7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLandscapeBatchElementParams>_>
          (ushort param_1,ForElementType<FLandscapeBatchElementParams> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLandscapeBatchElementParams>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_> @ 145f75340

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *param_4,
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
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_> @ 145f75420

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FMeshBatchElement> *param_4,
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
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLandscapeBatchElementParams>_> @ 145f75500

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLandscapeBatchElementParams>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FLandscapeBatchElementParams> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLandscapeBatchElementParams>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_> @ 145f755a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>_> @ 145f75620

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_> @ 145f756a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FMeshBatchElement> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_> @ 145f75720

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveComponentId> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// AddGrassWeightShaderTypes @ 145f80c90

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UE::Landscape::Grass::AddGrassWeightShaderTypes(FMaterialShaderTypes *param_1)

{
  FShaderType *pFVar1;
  
  pFVar1 = (FShaderType *)FLandscapeGrassWeightVS::GetStaticType();
  FMaterialShaderTypes::AddShaderType(param_1,pFVar1,0);
  pFVar1 = (FShaderType *)FLandscapeGrassWeightPS::GetStaticType();
  FMaterialShaderTypes::AddShaderType(param_1,pFVar1,0);
  return;
}

// CalculateMinDistanceToCamerasSquared @ 145f83ce0

double __cdecl
UE::Landscape::CalculateMinDistanceToCamerasSquared
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 local_res8 [8];
  
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    pFVar7 = (param_1->AllocatorInstance).Data;
    uVar8 = (undefined4)__real_7fefffffffffffff;
    uVar10 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    pFVar1 = pFVar7 + (longlong)iVar3 * 0x18;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      dVar11 = (param_2->Origin).field0_0x0._s_0.X;
      dVar9 = 0.0;
      dVar12 = (param_2->Origin).field0_0x0._s_0.Y;
      dVar13 = (param_2->Origin).field0_0x0._s_0.Z;
      dVar6 = dVar11 - (param_2->BoxExtent).field0_0x0._s_0.X;
      dVar2 = *(double *)pFVar7;
      dVar4 = dVar12 - (param_2->BoxExtent).field0_0x0._s_0.Y;
      dVar5 = dVar13 - (param_2->BoxExtent).field0_0x0._s_0.Z;
      dVar11 = dVar11 + (param_2->BoxExtent).field0_0x0._s_0.X;
      dVar12 = dVar12 + (param_2->BoxExtent).field0_0x0._s_0.Y;
      dVar13 = dVar13 + (param_2->BoxExtent).field0_0x0._s_0.Z;
      if ((dVar2 < dVar6) || (dVar6 = dVar11, dVar11 < dVar2)) {
        dVar9 = (dVar2 - dVar6) * (dVar2 - dVar6);
      }
      dVar11 = *(double *)(pFVar7 + 8);
      if ((dVar11 < dVar4) || (dVar4 = dVar12, dVar12 < dVar11)) {
        dVar9 = dVar9 + (dVar11 - dVar4) * (dVar11 - dVar4);
      }
      dVar11 = *(double *)(pFVar7 + 0x10);
      if ((dVar11 < dVar5) || (dVar5 = dVar13, dVar13 < dVar11)) {
        dVar9 = dVar9 + (dVar11 - dVar5) * (dVar11 - dVar5);
      }
      if ((double)CONCAT44(uVar10,uVar8) <= dVar9) {
        dVar9 = (double)CONCAT44(uVar10,uVar8);
      }
      pFVar7 = pFVar7 + 0x18;
      uVar8 = SUB84(dVar9,0);
      uVar10 = (undefined4)((ulonglong)dVar9 >> 0x20);
    }
    return (double)CONCAT44(uVar10,uVar8);
  }
  return 0.0;
}

// CanRenderGrassMap @ 145f84550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __cdecl UE::Landscape::CanRenderGrassMap(ULandscapeComponent *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UWorld *pUVar8;
  ALandscapeProxy *pAVar9;
  UMaterialInterface *pUVar10;
  FMaterial *this;
  FShaderType *pFVar11;
  FName *pFVar12;
  FVertexFactoryType *pFVar13;
  EShaderPlatform EVar14;
  undefined1 auStack_1b8 [32];
  uint local_198;
  int local_190;
  int local_188;
  int local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FHashedName local_158;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FName local_e0;
  FMaterialShaderTypes local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pUVar8 = (UWorld *)param_1->_padding_;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  if (((GRHIGlobals.UsingNullRHI == false) && (pUVar8 != (UWorld *)0x0)) &&
     (param_1->_padding_ != 0)) {
    iVar7 = ULandscapeComponent::GetCurrentRuntimeMaterialInstanceCount(param_1);
    if (iVar7 < 1) {
      if ((byte)LogGrass._0_1_ < 6) {
        return false;
      }
      iVar7 = (param_1->MobileMaterialInterfaces).ArrayNum;
      iVar2 = (param_1->MaterialInstances).ArrayNum;
      iVar3 = (param_1->MaterialInstancesDynamic).ArrayNum;
      pAVar9 = ULandscapeComponent::GetLandscapeProxy(param_1);
      bVar5 = pAVar9->bUseDynamicMaterialInstance;
      local_178 = (FName)param_1->_padding_;
      ::FName::ToString(&local_178,&local_140);
      local_198 = (uint)(bVar5 != false);
      local_190 = iVar3;
      local_188 = iVar2;
      local_180 = iVar7;
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
    }
    else {
      pUVar10 = ULandscapeComponent::GetCurrentRuntimeMaterialInterface(param_1,0);
      if (pUVar10 == (UMaterialInterface *)0x0) {
        if ((byte)LogGrass._0_1_ < 6) {
          return false;
        }
        local_170 = (FName)param_1->_padding_;
        ::FName::ToString(&local_170,&local_130);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
        local_140.Data.AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
      }
      else {
        bVar1 = (pUVar8->FeatureLevel).Value;
        if (bVar1 == 5) {
          EVar14 = SP_NumPlatforms;
        }
        else {
          EVar14 = GRHIGlobals.ShaderPlatformForFeatureLevel[bVar1];
        }
        this = (FMaterial *)(**(code **)(pUVar10->_padding_ + 0x390))(pUVar10,EVar14);
        if (this == (FMaterial *)0x0) {
          if ((byte)LogGrass._0_1_ < 6) {
            return false;
          }
          local_168 = (FName)pUVar10->_padding_;
          bVar1 = (pUVar8->FeatureLevel).Value;
          ::FName::ToString(&local_168,&local_110);
          local_160 = (FName)param_1->_padding_;
          ::FName::ToString(&local_160,&local_120);
          local_198 = (uint)bVar1;
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
          local_140.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
            local_140.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
          }
        }
        else {
          local_d8.PipelineType = (FShaderPipelineType *)0x0;
          local_d8.ShaderType[0] = (FShaderType *)0x0;
          local_d8.ShaderType[1] = (FShaderType *)0x0;
          local_d8.ShaderType[2] = (FShaderType *)0x0;
          local_d8.ShaderType[3] = (FShaderType *)0x0;
          local_d8.ShaderType[4] = (FShaderType *)0x0;
          local_d8.ShaderType[5] = (FShaderType *)0x0;
          local_d8.ShaderType[6] = (FShaderType *)0x0;
          local_d8.ShaderType[7] = (FShaderType *)0x0;
          local_d8.ShaderType[8] = (FShaderType *)0x0;
          local_d8.ShaderType[9] = (FShaderType *)0x0;
          local_d8.ShaderType[10] = (FShaderType *)0x0;
          local_d8.ShaderType[0xb] = (FShaderType *)0x0;
          local_d8.PermutationId[0] = 0;
          local_d8.PermutationId[1] = 0;
          local_d8.PermutationId[2] = 0;
          local_d8.PermutationId[3] = 0;
          local_d8.PermutationId[4] = 0;
          local_d8.PermutationId[5] = 0;
          local_d8.PermutationId[6] = 0;
          local_d8.PermutationId[7] = 0;
          local_d8.PermutationId[8] = 0;
          local_d8.PermutationId[9] = 0;
          local_d8.PermutationId[10] = 0;
          local_d8.PermutationId[0xb] = 0;
          pFVar11 = (FShaderType *)FLandscapeGrassWeightVS::GetStaticType();
          bVar1 = (byte)pFVar11->Frequency;
          if ((local_d8.ShaderType[bVar1] != (FShaderType *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ShaderType[Frequency] == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                                 ,0xd0,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_d8.ShaderType[bVar1] = pFVar11;
          local_d8.PermutationId[bVar1] = 0;
          pFVar11 = (FShaderType *)FLandscapeGrassWeightPS::GetStaticType();
          bVar1 = (byte)pFVar11->Frequency;
          if ((local_d8.ShaderType[bVar1] != (FShaderType *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ShaderType[Frequency] == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                                 ,0xd0,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_d8.ShaderType[bVar1] = pFVar11;
          local_d8.PermutationId[bVar1] = 0;
          pFVar12 = ::FName::FName(&local_e0,L"FLandscapeFixedGridVertexFactory",FNAME_Find);
          FHashedName::FHashedName(&local_158,pFVar12);
          pFVar13 = FindVertexFactoryType(&local_158);
          bVar5 = FMaterial::HasShaders(this,&local_d8,pFVar13);
          if (bVar5) {
            return true;
          }
          if ((byte)LogGrass._0_1_ < 6) {
            return false;
          }
          local_150 = (FName)param_1->_padding_;
          ::FName::ToString(&local_150,&local_100);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
          local_140.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  else {
    if ((byte)LogGrass._0_1_ < 6) {
      return false;
    }
    local_148 = (FName)param_1->_padding_;
    ::FName::ToString(&local_148,&local_f0);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
    local_140.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return false;
}

// ComputeGrassInstanceGenerationHash @ 145f85de0

uint __cdecl
UE::Landscape::ComputeGrassInstanceGenerationHash
          (uint param_1,TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_> *param_2
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId185,"ComputeGrassInstanceGenerationHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0xb9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId185);
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeGrassType>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 == 0) {
      local_res8[0] = 0;
    }
    else {
      local_res8[0] = *(undefined4 *)(*(longlong *)pFVar3 + 0x3c);
    }
    param_1 = (*FCrc::MemCrc32Func)(local_res8,4,param_1);
    pFVar3 = pFVar3 + 8;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return param_1;
}

// ComputeGrassMapGenerationHash @ 145f85ec0

uint __cdecl
UE::Landscape::ComputeGrassMapGenerationHash
          (ULandscapeComponent *param_1,UMaterialInterface *param_2)

{
  uint uVar1;
  bool bVar2;
  ulong64 uVar3;
  bool bVar4;
  FGuid local_28;
  FString local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId156,"ComputeGrassMapGenerationHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x9c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId156);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&local_18,"216D95C7651D4095ADC6A8459B4F181D");
    bVar2 = FGuid::Parse(&local_18,&local_28);
    if (!bVar2) {
      local_28.C = 0;
      local_28.D = 0;
      local_28.A = 0;
      local_28.B = 0;
    }
    uVar3 = CityHash64((char *)&local_28,0x10);
    InitialHash = (uint)uVar3;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    _Init_thread_footer(&::_TSS0);
  }
  uVar1 = InitialHash;
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar1;
}

// IsRuntimeGrassMapGenerationSupported @ 145f97fb0

bool __cdecl UE::Landscape::IsRuntimeGrassMapGenerationSupported(void)

{
  if ((GGrassMapUseRuntimeGeneration == 0) && (GGrassMapAlwaysBuildRuntimeGenerationResources == 0))
  {
    return false;
  }
  return true;
}

// NeedsFixedGridVertexFactory @ 145f99c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl UE::Landscape::NeedsFixedGridVertexFactory(EShaderPlatform param_1)

{
  bool bVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  longlong lVar4;
  
  bVar1 = UseVirtualTexturing((FStaticShaderPlatform)param_1);
  bVar2 = DoesPlatformSupportLumenGI(param_1,false);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      lVar4 = (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Water.WaterInfo.RenderMethod",1);
      bWaterPluginLoaded = lVar4 != 0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (bool)(bWaterPluginLoaded | (bVar1 || bVar2));
}

// ShouldBuildGrassMapRenderingResources @ 145fa2460

bool __cdecl UE::Landscape::ShouldBuildGrassMapRenderingResources(void)

{
  if ((GGrassMapUseRuntimeGeneration == 0) && (GGrassMapAlwaysBuildRuntimeGenerationResources == 0))
  {
    return false;
  }
  return true;
}

// ShouldInstallEdgeFixup @ 145fa2fa0

bool __cdecl UE::Landscape::ShouldInstallEdgeFixup(void)

{
  return GInstallEdgeFixup != 0;
}

// ShouldPatchAllLandscapeComponentEdges @ 145fa34c0

bool __cdecl UE::Landscape::ShouldPatchAllLandscapeComponentEdges(bool param_1)

{
  bool bVar1;
  
  bVar1 = GForcePatchAllEdges != 0;
  if (param_1) {
    GForcePatchAllEdges = 0;
  }
  return bVar1;
}

// ShouldPatchStreamingMipEdges @ 145fa34e0

bool __cdecl UE::Landscape::ShouldPatchStreamingMipEdges(void)

{
  return GPatchStreamingMipEdges != 0;
}

// SubmitGPUCommands @ 145fa49a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Landscape::SubmitGPUCommands(bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FEvent *pFVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FEvent *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FEvent *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar3 = (FEvent *)0x0;
  if (param_1) {
    pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  }
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  local_78 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Landscape::SubmitGPUCommands'::`2'::<lambda_1>,1,0>::
              _vftable_;
  uStack_61 = auStack_b8[0x2f];
  local_60 = (undefined ***)0x0;
  local_88[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Landscape::SubmitGPUCommands'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = pFVar3;
  local_68 = param_2;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UE::Landscape::SubmitGPUCommands_::__l2::TSTR_FFlushResourcesCommand293>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UE::Landscape::SubmitGPUCommands'::__l2::TSTR_FFlushResourcesCommand293>
             ::Get();
    RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
        ::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (pFVar3 != (FEvent *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,0xffffffff,0);
    (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3);
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar3);
  }
  return;
}

// Construct<FPhysicalMaterialInput> @ 145fad3f0

void __cdecl UE::CoreUObject::Private::Construct<FPhysicalMaterialInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPhysicalMaterialInput> @ 145fad410

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicalMaterialInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPhysicalMaterialInput> @ 145fad430

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicalMaterialInput>(void *param_1)

{
  return;
}

// Copy<FPhysicalMaterialInput> @ 145fad440

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicalMaterialInput>(void *param_1,void *param_2,int param_3)

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
      uVar2 = puVar1[2];
      puVar3[1] = puVar1[1];
      puVar3[2] = uVar2;
      uVar2 = puVar1[4];
      puVar3[3] = puVar1[3];
      puVar3[4] = uVar2;
      puVar3[5] = puVar1[5];
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLayerBlendInput> @ 145fad6e0

void __cdecl UE::CoreUObject::Private::Construct<FLayerBlendInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FLayerBlendInput> @ 145fad770

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLayerBlendInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FLayerBlendInput> @ 145fad800

void __cdecl UE::CoreUObject::Private::Destruct<FLayerBlendInput>(void *param_1)

{
  return;
}

// Copy<FLayerBlendInput> @ 145fad890

bool __cdecl
UE::CoreUObject::Private::Copy<FLayerBlendInput>(void *param_1,void *param_2,int param_3)

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
  undefined8 uVar17;
  longlong lVar18;
  
  if (param_3 != 0) {
    lVar18 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar18 + 0x80 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar18 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar18 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x60 + (longlong)param_1);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x70 + (longlong)param_1);
      uVar16 = *puVar1;
      uVar17 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar18 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar16;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar17;
      *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x88);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeTexture2DMipMap> @ 145fadb70

void __cdecl UE::CoreUObject::Private::Construct<FLandscapeTexture2DMipMap>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0xff;
  *(undefined8 *)((longlong)param_1 + 0x28) = FIoChunkId::InvalidChunkId.Id._0_8_;
  *(undefined4 *)((longlong)param_1 + 0x30) = FIoChunkId::InvalidChunkId.Id._8_4_;
  return;
}

// ConstructForTests<FLandscapeTexture2DMipMap> @ 145fadbc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLandscapeTexture2DMipMap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0xff;
  *(undefined8 *)((longlong)param_1 + 0x28) = FIoChunkId::InvalidChunkId.Id._0_8_;
  *(undefined4 *)((longlong)param_1 + 0x30) = FIoChunkId::InvalidChunkId.Id._8_4_;
  return;
}

// Destruct<FLandscapeTexture2DMipMap> @ 145fadc00

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapeTexture2DMipMap>(void *param_1)

{
  FBulkData::~FBulkData((FBulkData *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FLandscapeTexture2DMipMap> @ 145fadc10

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeTexture2DMipMap>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_1 + lVar1 + 8);
      FBulkData::operator=
                ((FBulkData *)((longlong)param_1 + 0x10),
                 (FBulkData *)((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<ULandscapeSubsystem,ULandscapeSubsystem_*_&> @ 145fafc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeSubsystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<ULandscapeSubsystem,ULandscapeSubsystem_*_&>
          (ULandscapeSubsystem **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureMipInfo>_> @ 145fb3630

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureMipInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FTextureMipInfo> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x10) {
      uVar1 = 0xf;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 0x10) {
    if (param_5->SecondaryData == (ForElementType<FTextureMipInfo>)0x0) goto LAB_145fb36a1;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_145fb36a1:
  *param_7 = uVar1;
  return;
}

// ReallocGrow<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_> @ 145fb36e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<float>_> *param_4,
          int *param_5,int *param_6)

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
    iVar7 = 0x200;
    uVar8 = (ulonglong)param_1;
    if (0x200 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x201) {
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
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<float>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>_> @ 145fb37c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x10) {
      iVar8 = 0xf;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x10) {
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
    TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_> @ 145fb38a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector<float>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x200;
  if (0x200 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<float>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>_> @ 145fb3960

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x10) {
      iVar1 = 0xf;
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
    TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs> @ 145fb4220

T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs> *
__thiscall
UE::Landscape::Private::
T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>::
T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
          (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
           *this,TArrayView<ULandscapeComponent_*_const,int> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  ULandscapeComponent *pUVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
  *pTVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  TIntPoint<int>_u_0 TVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar19;
  uint uVar20;
  int iStackX_1c;
  undefined8 local_70;
  int local_68;
  uint uStack_64;
  ForAnyElementType local_60;
  int local_58 [6];
  
  iVar8 = param_1->ArrayNum;
  uVar16 = (ulonglong)iVar8;
  uVar20 = 0;
  (this->AllValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllValues).ArrayNum = 0;
  (this->AllValues).ArrayMax = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__T2DIndexer_PEAVULandscapeComponent__UFLandscapeComponent2DIndexerKeyFuncs_Private_Landscape_UE___Private_Landscape_UE__6B_
  ;
  (this->KeyExclusiveBounds).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->KeyExclusiveBounds).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ValidValueBitIndices).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  iVar14 = -0x80000000;
  uStack_64 = 0x80000000;
  local_70 = 0x7fffffff7fffffff;
  (this->ValidValueBitIndices).NumBits = 0;
  (this->ValidValueBitIndices).MaxBits = 0x80;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar8,&local_60,local_58,local_58 + 1);
  if (0 < iVar8) {
    uStack_64 = 0x80000000;
    lVar18 = 0;
    local_70._0_4_ = 0x7fffffff;
    uVar17 = uVar16;
    iVar8 = (int)local_70;
    local_68 = -0x80000000;
    do {
      iVar14 = (int)uVar17;
      uVar17 = uVar17 & 0xffffffff;
      uVar12 = 0;
      if ((int)uVar20 < iVar14) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
                  *)(*pcVar5)();
        return pTVar9;
      }
      pUVar2 = param_1->DataPtr[lVar18];
      lVar3 = (longlong)pUVar2->SectionBaseY / (longlong)pUVar2->ComponentSizeQuads;
      uVar4 = (longlong)pUVar2->SectionBaseX / (longlong)pUVar2->ComponentSizeQuads;
      uVar12 = 0;
      if ((int)uVar20 < local_58[0]) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
                  *)(*pcVar5)();
        return pTVar9;
      }
      iVar14 = (int)uVar4;
      *(ulonglong *)(local_60.Data + lVar18 * 8) = lVar3 << 0x20 | uVar4 & 0xffffffff;
      iVar6 = iVar14;
      if (iVar8 < iVar14) {
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      uVar15 = (uint)lVar3;
      uVar12 = uVar15;
      if ((int)local_70._4_4_ < (int)uVar15) {
        uVar12 = local_70._4_4_;
      }
      local_70 = (ulonglong)uVar12 << 0x20;
      if (iVar14 < local_68) {
        iVar14 = local_68;
      }
      if ((int)uVar15 < (int)uStack_64) {
        uVar15 = uStack_64;
      }
      uStack_64 = uVar15;
      uVar20 = uVar20 + 1;
      lVar18 = lVar18 + 1;
      local_68 = iVar14;
    } while (lVar18 < (longlong)uVar16);
    local_70 = CONCAT44(uVar12,iVar8);
  }
  piVar19 = &(this->ValidValueBitIndices).MaxBits;
  if (local_58[0] != 0) {
    *(longlong *)&(this->KeyExclusiveBounds).field0_0x0 = local_70;
    TVar13._s_0.Y = uStack_64 + 1;
    TVar13._s_0.X = iVar14 + 1;
    (this->KeyExclusiveBounds).field0_0x0._s_0.Max.field0_0x0 = TVar13;
  }
  iVar14 = (*(int *)((longlong)&(this->KeyExclusiveBounds).field0_0x0 + 0xc) -
           *(int *)((longlong)&(this->KeyExclusiveBounds).field0_0x0 + 4)) *
           (*(int *)((longlong)&(this->KeyExclusiveBounds).field0_0x0 + 8) -
           *(int *)&(this->KeyExclusiveBounds).field0_0x0);
  iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar14,&(this->AllValues).AllocatorInstance,&(this->AllValues).ArrayNum,
                     &(this->AllValues).ArrayMax);
  memset((this->AllValues).AllocatorInstance.Data + (longlong)iVar8 * 8,0,(longlong)iVar14 << 3);
  (this->ValidValueBitIndices).NumBits = iVar14;
  this_00 = &this->ValidValueBitIndices;
  uVar20 = iVar14 + 0x1fU >> 5;
  if (iVar14 + 0x1fU >> 5 != 0) {
    if (*piVar19 + 0x1fU >> 5 < uVar20) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar20,4);
      *piVar19 = uVar20 << 5;
    }
    FVar10 = (this->ValidValueBitIndices).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar10,0,(ulonglong)uVar20 << 2);
    iVar8 = (this->ValidValueBitIndices).NumBits;
    uVar12 = iVar8 >> 0x1f & 0x1f;
    uVar20 = iVar8 + uVar12;
    iVar8 = (uVar20 & 0x1f) - uVar12;
    if (iVar8 != 0) {
      FVar10 = (this->ValidValueBitIndices).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)uVar20 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  uVar20 = 0;
  if (0 < (longlong)uVar16) {
    lVar18 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar20 < local_58[0]) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
                  *)(*pcVar5)();
        return pTVar9;
      }
      iStackX_1c = (int)((ulonglong)*(undefined8 *)(local_60.Data + lVar18 * 8) >> 0x20);
      uVar15 = (*(int *)((longlong)&(this->KeyExclusiveBounds).field0_0x0 + 8) -
               *(int *)&(this->KeyExclusiveBounds).field0_0x0) *
               (iStackX_1c - *(int *)((longlong)&(this->KeyExclusiveBounds).field0_0x0 + 4)) +
               ((int)*(undefined8 *)(local_60.Data + lVar18 * 8) -
               *(int *)&(this->KeyExclusiveBounds).field0_0x0);
      uVar12 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
                  *)(*pcVar5)();
        return pTVar9;
      }
      pUVar2 = param_1->DataPtr[lVar18];
      uVar12 = 0;
      if ((int)uVar15 < (this->AllValues).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
                  *)(*pcVar5)();
        return pTVar9;
      }
      *(ULandscapeComponent **)
       ((this->AllValues).AllocatorInstance.Data + (longlong)(int)uVar15 * 8) = pUVar2;
      if ((((int)uVar15 < 0) || ((this->ValidValueBitIndices).NumBits <= (int)uVar15)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
                  *)(*pcVar5)();
        return pTVar9;
      }
      FVar10 = (this->ValidValueBitIndices).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)&this->ValidValueBitIndices;
      if (FVar10 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar10;
      }
      uVar12 = uVar15;
      if ((int)uVar15 < 0) {
        uVar12 = uVar15 + 0x1f;
      }
      uVar20 = uVar20 + 1;
      puVar1 = (uint *)((longlong)FVar11 + (longlong)((int)uVar12 >> 5) * 4);
      lVar18 = lVar18 + 1;
      *puVar1 = *puVar1 | 1 << ((byte)uVar15 & 0x1f);
    } while (lVar18 < (longlong)uVar16);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return this;
}

// ~T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs> @ 145fb6100

void __thiscall
UE::Landscape::Private::
T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>::
~T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
          (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
           *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->ValidValueBitIndices).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->AllValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// operator() @ 145fb7640

FString * __thiscall
`UE::Landscape::GetLandscapeToolTargetTypeFlagsAsString'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,ELandscapeToolTargetTypeFlags param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  UEnum *this_00;
  ulonglong uVar5;
  uint uVar6;
  FText local_18;
  
  uVar5 = (ulonglong)param_1 - ((ulonglong)(param_1 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  if ((char)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::CountBits(static_cast<uint64>(InSingleFlag)) == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                       ,0x4b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar1 = 0x1f;
  if (param_1 != None) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar6 = 0;
  if (param_1 != None) {
    uVar6 = uVar1;
  }
  if (2 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < static_cast<uint32>(ELandscapeToolTargetType::Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                       ,0x4d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = StaticEnum<enum_ELandscapeToolTargetType>();
  if (this_00 == (UEnum *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xd13,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_18,(ulonglong)(uVar6 & 0xff));
  pFVar4 = FText::ToString(&local_18);
  ::FString::FString(__return_storage_ptr__,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 145fb7f20

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

bool __thiscall
`UE::Landscape::DumpLandscapeWeightmapAllocations'::__l37::<lambda_1>::operator()
          (void *this,ULandscapeInfo *param_1)

{
  void *_Src;
  undefined8 uVar1;
  code *pcVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar3;
  int iVar4;
  longlong *plVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ALandscapeProxy *pAVar13;
  ulonglong uVar14;
  byte bVar15;
  uint *puVar16;
  ForAnyElementType FVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auStackY_218 [32];
  FIdentityFunctor local_1d8;
  undefined1 local_1d7 [7];
  FString local_1d0;
  uint local_1c0;
  int local_1bc;
  int local_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_198;
  undefined8 local_190;
  int local_188;
  int local_184;
  FName local_180;
  FIdentityFunctor *local_178;
  FIdentityFunctor **local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  longlong *local_140;
  int iStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 **local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  FString *local_c0;
  FString local_b8 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_5c = 0x80;
  local_88._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)0x0;
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_58 = -1;
  pAVar13 = ULandscapeInfo::GetLandscapeProxy(param_1);
  if ((int)pAVar13->_padding_ < 2) {
    local_180 = (FName)pAVar13->_padding_;
    ::FName::ToString(&local_180,&local_1d0);
  }
  else {
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.Data.ArrayNum = (int)pAVar13->_padding_;
    lVar20 = (longlong)local_1d0.Data.ArrayNum;
    _Src = (void *)pAVar13->_padding_;
    if (local_1d0.Data.ArrayNum == 0) {
      local_1d0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1d0.Data.ArrayNum,0,(ForAnyElementType *)&local_1d0,
                 local_1d0.Data.ArrayNum,&local_1d0.Data.ArrayMax);
      memcpy(local_1d0.Data.AllocatorInstance.Data,_Src,lVar20 * 2);
    }
  }
  if (4 < (byte)LogLandscape._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
  }
  local_d0 = (undefined8 *)local_88;
  local_c8 = *(undefined8 *)this;
  local_c0 = &local_1d0;
  local_d8 = &local_d0;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Landscape::DumpLandscapeWeightmapAllocations'::__l37::<lambda_1>::operator()'::__l2::<lambda_1>,bool,ALandscapeProxy_*>
             ::Call;
  ULandscapeInfo::ForEachLandscapeProxy
            (param_1,(TFunctionRef<bool___cdecl(ALandscapeProxy_*)> *)&local_e0);
  if (4 < (byte)LogLandscape._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
  }
  local_178 = &local_1d8;
  uVar21 = 1;
  local_170 = &local_178;
  local_1c0 = local_54;
  uVar24 = local_88._8_4_ - local_54;
  local_1bc = local_88._8_4_;
  local_190 = 1;
  if (0 < (int)uVar24) {
    uVar21 = 1;
    uVar12 = local_54;
    pTVar6 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)local_88._0_8_;
    pTVar3 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)local_88._0_8_;
    iVar11 = local_58;
    iVar19 = local_88._8_4_;
    if (local_54 != 0) {
      while (iVar4 = iVar11, local_198 = pTVar6, local_1c0 = uVar12, iVar4 != -1) {
        iVar11 = *(int *)((longlong)pTVar3 + (longlong)iVar4 * 0x14 + 4);
        pTVar6 = local_198;
        if (iVar4 < (int)uVar24) {
          bVar15 = (byte)iVar19 & 0x1f;
          uVar21 = 1 << bVar15 | 1U >> 0x20 - bVar15;
          iVar18 = iVar19;
          do {
            uVar21 = uVar21 >> 1 | (uint)((uVar21 & 1) != 0) << 0x1f;
            iVar19 = iVar18 + -1;
            if (((iVar19 < 0) || ((int)local_60 <= iVar19)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            puVar16 = (uint *)(local_88 + 0x10);
            if (local_68 != (uint *)0x0) {
              puVar16 = local_68;
            }
            iVar9 = iVar19;
            if (iVar19 < 0) {
              iVar9 = iVar18 + 0x1e;
            }
            iVar18 = iVar19;
          } while ((puVar16[iVar9 >> 5] & uVar21) == 0);
          memmove(pTVar3 + iVar4,local_198 + iVar19,0x14);
          if (((iVar4 < 0) || ((int)local_60 <= iVar4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          puVar16 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar16 = local_68;
          }
          iVar18 = iVar4;
          if (iVar4 < 0) {
            iVar18 = iVar4 + 0x1f;
          }
          puVar16[iVar18 >> 5] = puVar16[iVar18 >> 5] | 1 << ((byte)iVar4 & 0x1f);
          uVar12 = local_1c0;
          pTVar6 = local_198;
          pTVar3 = local_198;
        }
      }
      uVar21 = (uint)local_190;
      uVar10 = 0;
      if (local_1bc <= (int)local_88._8_4_) {
        uVar10 = ~(uVar12 | uVar24) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      iVar11 = (local_88._8_4_ - uVar12) - uVar24;
      if (iVar11 != 0) {
        memmove((FScriptContainerElement *)(local_88._0_8_ + (longlong)(int)uVar24 * 0x14),
                (FScriptContainerElement *)(local_88._0_8_ + (longlong)(int)uVar24 * 0x14) +
                (longlong)(int)uVar12 * 0x14,(longlong)iVar11 * 0x14);
      }
      local_88._8_4_ = local_88._8_4_ - uVar12;
      TBitArray<FDefaultBitArrayAllocator>::RemoveAt
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),uVar24,uVar12);
      local_54 = 0;
      local_58 = -1;
      if (local_88._12_4_ != local_88._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,local_88._8_4_,(ForAnyElementType *)local_88,local_88._8_4_,
                   (int *)(local_88 + 0xc));
      }
    }
    uVar1 = local_88._0_8_;
    iVar11 = local_88._8_4_ - local_54;
    if ((iVar11 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)uVar1,iVar11,local_1d8,
               (FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FKeyComparisonClass<FNameLexicalLess>_>
                *)&local_170);
  }
  uVar24 = local_40;
  uVar23 = (ulonglong)local_40;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar24 == 0) goto LAB_145fb8439;
  uVar12 = uVar24;
  if (uVar24 < 2) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar12 = 0;
      goto LAB_145fb83dc;
    }
  }
  else {
LAB_145fb83dc:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar12,4);
  }
  if (0 < (int)uVar24) {
    uVar22 = 0;
    do {
      FVar17.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar17.Data = local_48.Data;
      }
      uVar14 = uVar22 & (longlong)(int)uVar24 - 1U;
      uVar22 = uVar22 + 1;
      *(undefined4 *)(FVar17.Data + uVar14 * 4) = 0xffffffff;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
LAB_145fb8439:
  if (local_40 != 0) {
    local_1b8 = 0;
    uStack_1a4 = 0;
    iStack_1a0 = 0;
    pTStack_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_1b4 = uVar21;
    if (local_60 != 0) {
      puVar16 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar16 = local_68;
      }
      uVar24 = *puVar16;
      local_1b8 = 0;
      while (uVar24 == 0) {
        iStack_1a0 = iStack_1a0 + 0x20;
        lVar20 = (longlong)local_1b8;
        local_1b8 = local_1b8 + 1;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1b8)
        goto LAB_145fb84ef;
        uVar24 = (puVar16 + 1)[lVar20];
      }
      uStack_1b4 = -uVar24 & uVar24;
      uVar23 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_188 = (int)lVar20;
      uStack_1a4 = local_188 + -1 + iStack_1a0;
      if ((int)local_60 < (int)uStack_1a4) {
LAB_145fb84ef:
        uStack_1a4 = local_60;
      }
    }
    local_1a8 = 0xffffffff;
    local_168 = (longlong *)local_88;
    local_160._padding_ = CONCAT44(uStack_1b4,local_1b8);
    local_160.CurrentBitIndex = uStack_1a4;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160._28_4_ = uStack_19c;
    local_160.BaseBitIndex = iStack_1a0;
    uVar24 = uStack_1a4;
    local_160.Array = pTStack_1b0;
    if ((int)uStack_1a4 < (int)local_60) {
      do {
        uVar1 = *(undefined8 *)(*local_168 + (longlong)(int)uVar24 * 0x14);
        lVar20 = *local_168 + (longlong)(int)uVar24 * 0x14;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        uVar12 = local_40 - 1 & uVar12 + (int)((ulonglong)uVar1 >> 0x20);
        *(uint *)(lVar20 + 0x10) = uVar12;
        FVar17.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_48.Data;
        }
        uVar23 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar20 + 0xc) = *(undefined4 *)(FVar17.Data + uVar23 * 4);
        *(uint *)(FVar17.Data + uVar23 * 4) = uVar24;
        local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
        uVar24 = local_160.CurrentBitIndex;
      } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
    }
  }
  uVar24 = local_60;
  iStack_138 = 0;
  local_120 = 0;
  uStack_124 = 0;
  if (local_60 != 0) {
    puVar16 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar16 = local_68;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar20 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      uStack_124 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_138)
      goto LAB_145fb8630;
      uVar12 = (puVar16 + 1)[lVar20];
    }
    uVar21 = -uVar12 & uVar12;
    uVar23 = (ulonglong)uVar21 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_184 = (int)lVar20;
    uStack_124 = local_120 + -1 + local_184;
    if ((int)local_60 < (int)uStack_124) {
      uStack_124 = local_60;
    }
  }
LAB_145fb8630:
  local_140 = (longlong *)local_88;
  uStack_11c = local_8c;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_118 = local_88._8_4_ - local_54;
  uVar12 = local_60 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uVar21,iStack_138);
  iVar11 = (int)local_60 >> 5;
  TStack_108._28_4_ = local_8c;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar15 = (byte)local_60;
  uStack_134 = uVar21;
  local_110 = local_140;
  TStack_108.Array = local_130;
  if (((int)local_60 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if (uVar24 != local_60) {
    puVar16 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar16 = local_68;
    }
    uVar21 = -1 << (bVar15 & 0x1f) & puVar16[iVar11];
    while (uVar21 == 0) {
      lVar20 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar24 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_145fb8750;
      uVar21 = (puVar16 + 1)[lVar20];
    }
    uVar23 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar24 = (int)lVar20 + -1 + uVar12;
    if ((int)local_60 < (int)uVar24) {
      uVar24 = local_60;
    }
  }
LAB_145fb8750:
  while( true ) {
    plVar5 = local_110;
    if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_108.CurrentBitIndex == uVar24) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar5 == (longlong *)local_88)) break;
    if (4 < (byte)LogLandscape._0_1_) {
      ::FName::ToString((FName *)(*plVar5 + (longlong)TStack_108.CurrentBitIndex * 0x14),local_b8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
      }
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return true;
}

// BlitHeightChannelsToUint16 @ 145fba1d0

int __cdecl
UE::Landscape::Private::BlitHeightChannelsToUint16
          (ushort *param_1,FBlitBuffer2DDesc *param_2,uint *param_3,FBlitBuffer2DDesc *param_4,
          TIntRect<int> *param_5)

{
  int iVar1;
  TIntRect<int>_u_0 local_18;
  
  local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_5->field0_0x0)._s_0.Min.field0_0x0;
  local_18._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_5->field0_0x0)._s_0.Max.field0_0x0;
  iVar1 = BlitRGChannelsToSingleTmpl<unsigned_short,_UE::Landscape::Private::BlitHeightChannelsToUint16_::__l2::<lambda_1>_>
                    (param_1,param_2,param_3,param_4,(TIntRect<int> *)&local_18._s_0,param_5._0_1_);
  return iVar1;
}

// BlitWeightChannelsToUint8 @ 145fba210

int __cdecl
UE::Landscape::Private::BlitWeightChannelsToUint8
          (uchar *param_1,FBlitBuffer2DDesc *param_2,uint *param_3,FBlitBuffer2DDesc *param_4,
          TIntRect<int> *param_5)

{
  int iVar1;
  TIntRect<int>_u_0 local_18;
  
  local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_5->field0_0x0)._s_0.Min.field0_0x0;
  local_18._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_5->field0_0x0)._s_0.Max.field0_0x0;
  iVar1 = BlitRGChannelsToSingleTmpl<unsigned_char,_UE::Landscape::Private::BlitWeightChannelsToUint8_::__l2::<lambda_1>_>
                    (param_1,param_2,param_3,param_4,(TIntRect<int> *)&local_18._s_0,param_5._0_1_);
  return iVar1;
}

// ComputeMaxDeltasCountForMip @ 145fbb770

int __cdecl UE::Landscape::Private::ComputeMaxDeltasCountForMip(int param_1,int param_2)

{
  return (param_2 - param_1) + -1;
}

// ComputeMaxDeltasOffsetForMip @ 145fbb780

int __cdecl UE::Landscape::Private::ComputeMaxDeltasOffsetForMip(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar3 = param_2 - iVar2;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1 + iVar3;
    } while (iVar2 < param_1);
  }
  return iVar1;
}

// ComputeMipToMipMaxDeltasCount @ 145fbb7b0

int __cdecl UE::Landscape::Private::ComputeMipToMipMaxDeltasCount(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < param_1 + -1) {
    do {
      iVar3 = param_1 - iVar2;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1 + iVar3;
    } while (iVar2 < param_1 + -1);
  }
  return iVar1;
}

// ComputeMipToMipMaxDeltasIndex @ 145fbb7e0

int __cdecl
UE::Landscape::Private::ComputeMipToMipMaxDeltasIndex(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 < 0) || (param_3 <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSourceMipIndex >= 0) && (InSourceMipIndex < InNumRelevantMips)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                         ,0x2f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (((param_2 <= param_1) || (param_3 <= param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InDestinationMipIndex > InSourceMipIndex) && (InDestinationMipIndex < InNumRelevantMips)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtilsPrivate.cpp"
                         ,0x30,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  iVar5 = 0;
  iVar3 = 0;
  if (0 < param_1) {
    do {
      iVar4 = param_3 - iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1 + iVar4;
    } while (iVar3 < param_1);
  }
  return param_2 + -1 + (iVar5 - param_1);
}

// CreateLandscapeComponent2DIndexer @ 145fbc4f0

T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs> *
__cdecl UE::Landscape::Private::CreateLandscapeComponent2DIndexer
                  (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
                   *__return_storage_ptr__,ULandscapeInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
  *pTVar3;
  TArray<ULandscapeComponent_*,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<ULandscapeComponent_*_const,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
              *)&param_1->XYtoComponentMap,&local_38);
  iStack_20 = local_38.ArrayNum;
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iStack_20;
  local_18.DataPtr = (ULandscapeComponent **)local_28;
  T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>::
  T2DIndexer<ULandscapeComponent_*,UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs>
            (__return_storage_ptr__,&local_18);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DoesPlatformSupportEditLayers @ 145fbd790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl UE::Landscape::DoesPlatformSupportEditLayers(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel) {
    bVar2 = IsConsolePlatform((FStaticShaderPlatform)param_1);
    if (!bVar2) {
      bVar2 = IsMobilePlatform((FStaticShaderPlatform)param_1);
      if (!bVar2) {
        return true;
      }
    }
  }
  return false;
}

// DoesPlatformSupportEditLayers @ 145fbd830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl UE::Landscape::Private::DoesPlatformSupportEditLayers(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel) {
    bVar2 = IsConsolePlatform((FStaticShaderPlatform)param_1);
    if (!bVar2) {
      bVar2 = IsMobilePlatform((FStaticShaderPlatform)param_1);
      if (!bVar2) {
        return true;
      }
    }
  }
  return false;
}

// DumpLandscapeWeightmapAllocations @ 145fbd900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Landscape::DumpLandscapeWeightmapAllocations
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UObjectBaseUtility *this;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ULandscapeSubsystem *this_00;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  FScriptContainerElement *local_58;
  int *piStack_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  int local_30;
  undefined4 uStack_2c;
  
  iVar2 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
  local_res8[0] = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar8 == pFVar9) break;
    if (*(int *)(pFVar8 + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)pFVar8;
    }
    bVar4 = FParse::Param(pwVar7,L"details");
    if (bVar4) {
      local_res8[0] = 1;
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pFVar9 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  iVar2 = *piVar1;
  pFVar8 = pFVar9 + (longlong)iVar2 * 8;
  local_48 = CONCAT44(uStack_2c,iVar2);
  local_58 = pFVar9;
  piStack_50 = piVar1;
  local_40._0_8_ = pFVar9;
  local_40._8_8_ = piVar1;
  local_30 = iVar2;
  do {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar9 == pFVar8) {
      return;
    }
    this = *(UObjectBaseUtility **)(*(longlong *)pFVar9 + 0x2c0);
    if (this != (UObjectBaseUtility *)0x0) {
      if (4 < (byte)LogLandscape._0_1_) {
        UObjectBaseUtility::GetFullName(this,(FString *)local_40,(UObject *)0x0,None);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
        if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_40._0_8_);
        }
      }
      pUVar5 = ULandscapeSubsystem::StaticClass();
      if (GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UClass *)0x0) goto LAB_145fbda78;
LAB_145fbdaa6:
        pUVar5 = (UClass *)0x0;
      }
      else {
        if (pUVar5 == (UClass *)0x0) goto LAB_145fbdaa6;
        GC::MarkAsReachable((UObject *)pUVar5);
LAB_145fbda78:
        pUVar6 = ULandscapeSubsystem::StaticClass();
        if (pUVar6 == (UClass *)0x0) goto LAB_145fbdaa6;
        iVar3 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_145fbdaa6;
      }
      this_00 = (ULandscapeSubsystem *)
                FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)&this[0x44].field_0x20,pUVar5);
      if (this_00 != (ULandscapeSubsystem *)0x0) {
        local_res10 = local_res8;
        local_58 = (FScriptContainerElement *)
                   Core::Private::Function::
                   TFunctionRefCaller<`UE::Landscape::DumpLandscapeWeightmapAllocations'::__l37::<lambda_1>,bool,ULandscapeInfo_*>
                   ::Call;
        piStack_50 = (int *)&local_res10;
        ULandscapeSubsystem::ForEachLandscapeInfo
                  (this_00,(TFunctionRef<bool___cdecl(ULandscapeInfo_*)> *)&local_58);
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// EnsureTextureForcedResident @ 145fbe330

void __cdecl UE::Landscape::EnsureTextureForcedResident(UTexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->_padding_ & 8) == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5790779683641491472>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
                       ,0x10,"Texture->bForceMiplevelsToBeResident");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(byte *)&param_1->_padding_ = (byte)param_1->_padding_ | 8;
  }
  return;
}

// GetLandscapeToolTargetTypeAsFlags @ 145fc25e0

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

ELandscapeToolTargetTypeFlags __cdecl
UE::Landscape::GetLandscapeToolTargetTypeAsFlags(ELandscapeToolTargetType param_1)

{
  code *pcVar1;
  bool bVar2;
  ELandscapeToolTargetTypeFlags EVar3;
  
  if (Visibility < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetTypeValue < static_cast<uint8>(ELandscapeToolTargetType::Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                       ,0x45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return '\x01' << (param_1 & 0x1f);
}

// GetLandscapeToolTargetTypeFlagsAsString @ 145fc2630

/* WARNING: Removing unreachable block (ram,0x000145fc2766) */

FString * __cdecl
UE::Landscape::GetLandscapeToolTargetTypeFlagsAsString
          (FString *__return_storage_ptr__,ELandscapeToolTargetTypeFlags param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FString local_38;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_4c = 0;
  local_50 = 0;
  FVar6.Data = local_58.Data;
  iVar1 = local_50;
  while( true ) {
    local_58.Data = FVar6.Data;
    local_50 = iVar1;
    if (param_1 == None) {
      bVar3 = true;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar5 = FVar6.Data + (longlong)iVar1 * 0x10;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      while( true ) {
        if (local_50 != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar6.Data == pFVar5) break;
        if (bVar3) {
          bVar3 = false;
        }
        else {
          ::FString::AppendChars(&local_38,L",",1);
        }
        iVar7 = *(int *)(FVar6.Data + 8) + -1;
        if (*(int *)(FVar6.Data + 8) == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_38,*(wchar_t **)FVar6.Data,iVar7);
        FVar6.Data = FVar6.Data + 0x10;
      }
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar6.Data = local_38.Data.AllocatorInstance.Data;
      }
      ::FString::FString(__return_storage_ptr__,(wchar_t *)FVar6.Data);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_58.Data,local_50);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      return __return_storage_ptr__;
    }
    `UE::Landscape::GetLandscapeToolTargetTypeFlagsAsString'::__l2::<lambda_1>::operator()
              (local_res10,&local_48,~param_1 + Heightmap & param_1);
    if (((local_58.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < local_58.Data + (longlong)local_4c * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    if (local_50 == local_4c) {
      local_50 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_58,&local_4c);
    }
    iVar1 = local_50 + 1;
    pFVar5 = local_58.Data + (longlong)local_50 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(FScriptContainerElement **)pFVar5 = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar5 + 8) = local_48.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    param_1 = param_1 & ~(~param_1 + Heightmap);
    FVar6.Data = local_58.Data;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar2)();
  return pFVar4;
}

// GetLandscapeToolTargetTypeSingleFlagAsType @ 145fc2850

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

ELandscapeToolTargetType __cdecl
UE::Landscape::GetLandscapeToolTargetTypeSingleFlagAsType(ELandscapeToolTargetTypeFlags param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ELandscapeToolTargetType EVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = (ulonglong)param_1 - ((ulonglong)(param_1 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  if ((char)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::CountBits(static_cast<uint64>(InSingleFlag)) == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                       ,0x4b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  uVar1 = 0x1f;
  if (param_1 != None) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar6 = 0;
  if (param_1 != None) {
    uVar6 = uVar1;
  }
  if (2 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < static_cast<uint32>(ELandscapeToolTargetType::Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeUtils.cpp"
                       ,0x4d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return (ELandscapeToolTargetType)uVar6;
}

// LandscapeProxySortPredicate @ 145fc5390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Landscape::LandscapeProxySortPredicate
          (TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr> param_1,
          TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr> param_2)

{
  int iVar1;
  ALandscapeProxy *this;
  ALandscapeProxy *this_00;
  bool bVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  
  local_res8 = param_1.WeakPtr;
  local_res10 = param_2.WeakPtr;
  this = (ALandscapeProxy *)FWeakObjectPtr::Get(&local_res8);
  this_00 = (ALandscapeProxy *)FWeakObjectPtr::Get(&local_res10);
  if ((this != (ALandscapeProxy *)0x0) && (this_00 != (ALandscapeProxy *)0x0)) {
    ALandscapeProxy::GetSectionBase(this);
    ALandscapeProxy::GetSectionBase(this_00);
    bVar2 = SBORROW4(local_res20,local_res18);
    iVar1 = local_res20 - local_res18;
    if (local_res20 == local_res18) {
      bVar2 = SBORROW4(iStackX_24,iStackX_1c);
      iVar1 = iStackX_24 - iStackX_1c;
    }
    return bVar2 != iVar1 < 0;
  }
  return this_00 != (ALandscapeProxy *)0x0;
}

// ModifyShaderCompilerEnvironmentForDebug @ 145fc5420

void __cdecl
UE::Landscape::ModifyShaderCompilerEnvironmentForDebug(FShaderCompilerEnvironment *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarLandscapeDebugShaders.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_145fc544f;
    }
  }
  lVar3 = 0;
LAB_145fc544f:
  if (pTVar1->ShadowedValue[lVar3] != false) {
    (param_1->CompilerFlags).Data = (param_1->CompilerFlags).Data | 2;
  }
  return;
}

// GetChannelSwizzleMaskDescription @ 145fcc8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Landscape::Private::GetChannelSwizzleMaskDescription
          (FString *__return_storage_ptr__,uchar param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  byte bVar4;
  undefined1 auStack_48 [32];
  wchar_t local_28;
  wchar_t local_26;
  wchar_t local_24;
  short local_22;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((4 < param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumChannels <= 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditLayers.cpp"
                         ,0x259,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  local_22 = 0x52;
  bVar4 = param_1 & 3;
  local_24 = L'R';
  local_28 = local_24;
  if (bVar4 != 0) {
    if (bVar4 == 1) {
      local_28 = L'G';
    }
    else {
      local_28 = (ushort)(bVar4 == 2) + L'A';
    }
  }
  bVar4 = param_1 >> 2 & 3;
  local_26 = local_24;
  if (bVar4 != 0) {
    if (bVar4 == 1) {
      local_26 = L'G';
    }
    else {
      local_26 = (ushort)(bVar4 == 2) + L'A';
    }
  }
  bVar4 = param_1 >> 4 & 3;
  if (bVar4 != 0) {
    if (bVar4 == 1) {
      local_24 = L'G';
    }
    else {
      local_24 = (ushort)(bVar4 == 2) + L'A';
    }
  }
  bVar4 = param_1 >> 6;
  if (bVar4 != 0) {
    if (bVar4 == 1) {
      local_22 = 0x47;
    }
    else {
      local_22 = (bVar4 == 2) + 0x41;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendChars(__return_storage_ptr__,&local_28,param_2);
  return __return_storage_ptr__;
}

