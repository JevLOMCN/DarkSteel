// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 60

// Destruct<FPaperSpriteSocket> @ 14acdc960

void __cdecl UE::CoreUObject::Private::Destruct<FPaperSpriteSocket>(void *param_1)

{
  return;
}

// Copy<FPaperSpriteSocket> @ 14acdc970

bool __cdecl
UE::CoreUObject::Private::Copy<FPaperSpriteSocket>(void *param_1,void *param_2,int param_3)

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
  longlong lVar15;
  
  if (param_3 != 0) {
    lVar15 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar15 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar15 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar15 + (longlong)param_1);
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
      param_1 = (void *)((longlong)param_1 + 0x70);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSpriteInstanceData> @ 14acdcc20

void __cdecl UE::CoreUObject::Private::Construct<FSpriteInstanceData>(void *param_1)

{
  double dVar1;
  
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  *(double *)param_1 = UE::Math::TMatrix<double>::Identity.M[0][0];
  *(double *)((longlong)param_1 + 8) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TMatrix<double>::Identity.M[0][2];
  *(double *)((longlong)param_1 + 0x18) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TMatrix<double>::Identity.M[1][0];
  *(double *)((longlong)param_1 + 0x28) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TMatrix<double>::Identity.M[1][2];
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TMatrix<double>::Identity.M[2][0];
  *(double *)((longlong)param_1 + 0x48) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TMatrix<double>::Identity.M[2][2];
  *(double *)((longlong)param_1 + 0x58) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TMatrix<double>::Identity.M[3][0];
  *(double *)((longlong)param_1 + 0x68) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TMatrix<double>::Identity.M[3][2];
  *(double *)((longlong)param_1 + 0x78) = dVar1;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x88))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  return;
}

// ConstructForTests<FSpriteInstanceData> @ 14acdcca0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSpriteInstanceData>(void *param_1)

{
  double dVar1;
  
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  *(double *)param_1 = UE::Math::TMatrix<double>::Identity.M[0][0];
  *(double *)((longlong)param_1 + 8) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TMatrix<double>::Identity.M[0][2];
  *(double *)((longlong)param_1 + 0x18) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TMatrix<double>::Identity.M[1][0];
  *(double *)((longlong)param_1 + 0x28) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TMatrix<double>::Identity.M[1][2];
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TMatrix<double>::Identity.M[2][0];
  *(double *)((longlong)param_1 + 0x48) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TMatrix<double>::Identity.M[2][2];
  *(double *)((longlong)param_1 + 0x58) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TMatrix<double>::Identity.M[3][0];
  *(double *)((longlong)param_1 + 0x68) = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TMatrix<double>::Identity.M[3][2];
  *(double *)((longlong)param_1 + 0x78) = dVar1;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x88))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  return;
}

// Destruct<FSpriteInstanceData> @ 14acdcd20

void __cdecl UE::CoreUObject::Private::Destruct<FSpriteInstanceData>(void *param_1)

{
  return;
}

// Copy<FSpriteInstanceData> @ 14acdcd30

bool __cdecl
UE::CoreUObject::Private::Copy<FSpriteInstanceData>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar3 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar3 + 0x80), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x80);
      *(undefined4 *)((longlong)param_1 + 0x88) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x88);
      *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x8c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPaperFlipbookKeyFrame> @ 14acdd410

void __cdecl UE::CoreUObject::Private::Construct<FPaperFlipbookKeyFrame>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FPaperFlipbookKeyFrame> @ 14acdd430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPaperFlipbookKeyFrame>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FPaperFlipbookKeyFrame> @ 14acdd450

void __cdecl UE::CoreUObject::Private::Destruct<FPaperFlipbookKeyFrame>(void *param_1)

{
  return;
}

// Copy<FPaperFlipbookKeyFrame> @ 14acdd460

bool __cdecl
UE::CoreUObject::Private::Copy<FPaperFlipbookKeyFrame>(void *param_1,void *param_2,int param_3)

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
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPaperTerrainMaterialRule> @ 14acdec20

void __cdecl UE::CoreUObject::Private::Construct<FPaperTerrainMaterialRule>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x43b40000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ConstructForTests<FPaperTerrainMaterialRule> @ 14acdec90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPaperTerrainMaterialRule>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x43b40000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Destruct<FPaperTerrainMaterialRule> @ 14acded00

void __cdecl UE::CoreUObject::Private::Destruct<FPaperTerrainMaterialRule>(void *param_1)

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

// Copy<FPaperTerrainMaterialRule> @ 14acded60

bool __cdecl
UE::CoreUObject::Private::Copy<FPaperTerrainMaterialRule>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar6 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar6 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar6 + 0x14);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar6 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TObjectPtr<UPaperSprite>,TObjectPtr<UPaperSprite>,int>
                    (pFVar1->Data,(TObjectPtr<UPaperSprite> *)pFVar5,iVar4);
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[3] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[3]);
      }
      puVar6[3] = puVar3[3];
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar3 + 4);
      *(undefined4 *)((longlong)puVar6 + 0x24) = *(undefined4 *)((longlong)puVar3 + 0x24);
      *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(puVar3 + 5);
      *(undefined4 *)((longlong)puVar6 + 0x2c) = *(undefined4 *)((longlong)puVar3 + 0x2c);
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar3 + 6);
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSpriteAssetInitParameters> @ 14acdf1d0

void __cdecl UE::CoreUObject::Private::Construct<FSpriteAssetInitParameters>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FSpriteAssetInitParameters> @ 14acdf200

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSpriteAssetInitParameters>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FSpriteAssetInitParameters> @ 14acdf230

void __cdecl UE::CoreUObject::Private::Destruct<FSpriteAssetInitParameters>(void *param_1)

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

// Copy<FSpriteAssetInitParameters> @ 14acdf250

bool __cdecl
UE::CoreUObject::Private::Copy<FSpriteAssetInitParameters>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      pFVar5 = (ForAnyElementType *)(puVar4 + 1);
      *puVar4 = *puVar3;
      if (pFVar5 != (ForAnyElementType *)(puVar3 + 1)) {
        iVar2 = *(int *)(puVar3 + 2);
        piVar1 = (int *)((longlong)puVar4 + 0x14);
        _Src = ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar4 + 2) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2 << 3);
          }
        }
      }
      puVar4[3] = puVar3[3];
      puVar4[4] = puVar3[4];
      *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar3 + 5);
      *(undefined4 *)((longlong)puVar4 + 0x2c) = *(undefined4 *)((longlong)puVar3 + 0x2c);
      puVar4[6] = puVar3[6];
      puVar4[7] = puVar3[7];
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSpriteGeometryCollection> @ 14acdf510

void __cdecl UE::CoreUObject::Private::Construct<FSpriteGeometryCollection>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x40000000;
  return;
}

// ConstructForTests<FSpriteGeometryCollection> @ 14acdf550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSpriteGeometryCollection>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x40000000;
  return;
}

// Destruct<FSpriteGeometryCollection> @ 14acdf590

void __cdecl UE::CoreUObject::Private::Destruct<FSpriteGeometryCollection>(void *param_1)

{
  DestructItems<FSpriteGeometryShape,int>
            (*(FSpriteGeometryShape **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FSpriteGeometryCollection> @ 14acdf5d0

bool __cdecl
UE::CoreUObject::Private::Copy<FSpriteGeometryCollection>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FSpriteGeometryShape *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FSpriteGeometryShape,int>
                  ((FSpriteGeometryShape *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        pFVar5 = (FSpriteGeometryShape *)pFVar2->Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        iVar3 = *(int *)&pFVar2[1].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FSpriteGeometryShape,FSpriteGeometryShape,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      *(undefined1 *)&pFVar6[2].Data = *(undefined1 *)&pFVar2[2].Data;
      *(undefined4 *)((longlong)&pFVar6[2].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[2].Data + 4);
      *(undefined4 *)&pFVar6[3].Data = *(undefined4 *)&pFVar2[3].Data;
      *(undefined1 *)((longlong)&pFVar6[3].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[3].Data + 4);
      *(undefined4 *)&pFVar6[4].Data = *(undefined4 *)&pFVar2[4].Data;
      *(undefined4 *)((longlong)&pFVar6[4].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[4].Data + 4);
      *(undefined4 *)&pFVar6[5].Data = *(undefined4 *)&pFVar2[5].Data;
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSpriteGeometryShape> @ 14acdf980

void __cdecl UE::CoreUObject::Private::Construct<FSpriteGeometryShape>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// ConstructForTests<FSpriteGeometryShape> @ 14acdf9b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSpriteGeometryShape>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// Destruct<FSpriteGeometryShape> @ 14acdf9e0

void __cdecl UE::CoreUObject::Private::Destruct<FSpriteGeometryShape>(void *param_1)

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

// Copy<FSpriteGeometryShape> @ 14acdfa40

bool __cdecl
UE::CoreUObject::Private::Copy<FSpriteGeometryShape>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  undefined1 *puVar4;
  ForAnyElementType *pFVar5;
  undefined1 *puVar6;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar6 = puVar4 + ((longlong)param_2 - (longlong)param_1);
      pFVar5 = (ForAnyElementType *)(puVar4 + 8);
      *puVar4 = *puVar6;
      if (pFVar5 != (ForAnyElementType *)(puVar6 + 8)) {
        iVar2 = *(int *)(puVar6 + 0x10);
        piVar1 = (int *)(puVar4 + 0x14);
        _Src = ((ForAnyElementType *)(puVar6 + 8))->Data;
        *(int *)(puVar4 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2 << 4);
          }
        }
      }
      uVar3 = *(undefined8 *)(puVar6 + 0x20);
      *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(puVar6 + 0x18);
      *(undefined8 *)(puVar4 + 0x20) = uVar3;
      uVar3 = *(undefined8 *)(puVar6 + 0x30);
      *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(puVar6 + 0x28);
      *(undefined8 *)(puVar4 + 0x30) = uVar3;
      *(undefined4 *)(puVar4 + 0x38) = *(undefined4 *)(puVar6 + 0x38);
      puVar4[0x3c] = puVar6[0x3c];
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0x40;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSpriteDrawCallRecord> @ 14acdfd50

void __cdecl UE::CoreUObject::Private::Construct<FSpriteDrawCallRecord>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
  ((FColor_u_0 *)((longlong)param_1 + 0x50))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 6;
  return;
}

// ConstructForTests<FSpriteDrawCallRecord> @ 14acdfda0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSpriteDrawCallRecord>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
  ((FColor_u_0 *)((longlong)param_1 + 0x50))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 6;
  return;
}

// Destruct<FSpriteDrawCallRecord> @ 14acdfdf0

void __cdecl UE::CoreUObject::Private::Destruct<FSpriteDrawCallRecord>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x120) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x120));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
    return;
  }
  return;
}

// Copy<FSpriteDrawCallRecord> @ 14acdfe30

bool __cdecl
UE::CoreUObject::Private::Copy<FSpriteDrawCallRecord>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ForElementType<UE::Math::TVector4<double>_> *pFVar7;
  ForElementType<UE::Math::TVector4<double>_> *_Src;
  ForElementType<UE::Math::TVector4<double>_> *pFVar8;
  
  puVar5 = param_1;
  puVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    puVar5[2] = puVar6[2];
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = *(UObject **)((longlong)puVar5 + (longlong)param_2 + (0x18 - (longlong)param_1)),
       pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
    puVar5[3] = *(undefined8 *)((longlong)puVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
    TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::operator=
              ((TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               (puVar5 + 4),
               (TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)puVar5 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    pFVar7 = (ForElementType<UE::Math::TVector4<double>_> *)
             ((longlong)puVar5 + (longlong)param_2 + (0x60 - (longlong)param_1));
    pFVar8 = (ForElementType<UE::Math::TVector4<double>_> *)(puVar5 + 0xc);
    *(undefined4 *)(puVar5 + 10) =
         *(undefined4 *)((longlong)puVar5 + (longlong)param_2 + (0x50 - (longlong)param_1));
    if (pFVar8 != pFVar7) {
      iVar2 = *(int *)((longlong)puVar5 + (longlong)param_2 + (0x130 - (longlong)param_1));
      piVar1 = (int *)((longlong)puVar5 + 0x134);
      _Src = *(ForElementType<UE::Math::TVector4<double>_> **)
              ((longlong)puVar5 + (longlong)param_2 + (0x120 - (longlong)param_1));
      *(int *)(puVar5 + 0x26) = iVar2;
      if (_Src == (ForElementType<UE::Math::TVector4<double>_> *)0x0) {
        _Src = pFVar7;
      }
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 6;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                  (0x20,0x10,iVar2,*piVar1,pFVar8,iVar2,piVar1);
        pFVar7 = (ForElementType<UE::Math::TVector4<double>_> *)puVar5[0x24];
        if ((ForElementType<UE::Math::TVector4<double>_> *)puVar5[0x24] ==
            (ForElementType<UE::Math::TVector4<double>_> *)0x0) {
          pFVar7 = pFVar8;
        }
        if (iVar2 != 0) {
          memcpy(pFVar7,_Src,(longlong)iVar2 << 5);
        }
      }
    }
    puVar5 = puVar5 + 0x28;
    puVar6 = puVar6 + 0x28;
  }
  return true;
}

// Construct<FPaperTileSetTerrain> @ 14acdffe0

void __cdecl UE::CoreUObject::Private::Construct<FPaperTileSetTerrain>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPaperTileSetTerrain> @ 14ace0000

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPaperTileSetTerrain>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPaperTileSetTerrain> @ 14ace0020

void __cdecl UE::CoreUObject::Private::Destruct<FPaperTileSetTerrain>(void *param_1)

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

// Copy<FPaperTileSetTerrain> @ 14ace0050

bool __cdecl
UE::CoreUObject::Private::Copy<FPaperTileSetTerrain>(void *param_1,void *param_2,int param_3)

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
                    (2,2,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      *(undefined4 *)&pFVar5[2].Data = *(undefined4 *)&pFVar2[2].Data;
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPaperTileMetadata> @ 14ace0640

void __cdecl UE::CoreUObject::Private::Construct<FPaperTileMetadata>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x20;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x18) = 3;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// ConstructForTests<FPaperTileMetadata> @ 14ace0690

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPaperTileMetadata>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x20;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x18) = 3;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// Destruct<FPaperTileMetadata> @ 14ace06e0

void __cdecl UE::CoreUObject::Private::Destruct<FPaperTileMetadata>(void *param_1)

{
  DestructItems<FSpriteGeometryShape,int>
            (*(FSpriteGeometryShape **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPaperTileMetadata> @ 14ace0740

bool __cdecl
UE::CoreUObject::Private::Copy<FPaperTileMetadata>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      FSpriteGeometryCollection::operator=
                ((FSpriteGeometryCollection *)((longlong)param_1 + 8),
                 (FSpriteGeometryCollection *)((longlong)param_1 + lVar1 + 8));
      *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x38);
      *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x39);
      *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x3a);
      *(undefined1 *)((longlong)param_1 + 0x3b) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x3b);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIntMargin> @ 14ace0ef0

void __cdecl UE::CoreUObject::Private::Construct<FIntMargin>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FIntMargin> @ 14ace0f40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIntMargin>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FIntMargin> @ 14ace0f50

void __cdecl UE::CoreUObject::Private::Destruct<FIntMargin>(void *param_1)

{
  return;
}

// Copy<FIntMargin> @ 14ace0fa0

bool __cdecl UE::CoreUObject::Private::Copy<FIntMargin>(void *param_1,void *param_2,int param_3)

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

// Construct<FPaperTileInfo> @ 14ace1010

void __cdecl UE::CoreUObject::Private::Construct<FPaperTileInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// ConstructForTests<FPaperTileInfo> @ 14ace1030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPaperTileInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// Destruct<FPaperTileInfo> @ 14ace1050

void __cdecl UE::CoreUObject::Private::Destruct<FPaperTileInfo>(void *param_1)

{
  return;
}

// Copy<FPaperTileInfo> @ 14ace1060

bool __cdecl UE::CoreUObject::Private::Copy<FPaperTileInfo>(void *param_1,void *param_2,int param_3)

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
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPaperTileInfo> @ 14ace1140

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPaperTileInfo>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((longlong)param_1 + 8);
  uVar1 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar3 = (uVar1 >> 0x10 ^ uVar1) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// Construct<FPaperSpriteAtlasSlot> @ 14ace1c60

void __cdecl UE::CoreUObject::Private::Construct<FPaperSpriteAtlasSlot>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FPaperSpriteAtlasSlot> @ 14ace1cc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPaperSpriteAtlasSlot>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FPaperSpriteAtlasSlot> @ 14ace1d10

void __cdecl UE::CoreUObject::Private::Destruct<FPaperSpriteAtlasSlot>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FPaperSpriteAtlasSlot> @ 14ace1df0

bool __cdecl
UE::CoreUObject::Private::Copy<FPaperSpriteAtlasSlot>(void *param_1,void *param_2,int param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TPersistentObjectPtr<FSoftObjectPath>::operator=(this,pTVar1);
      this[1].WeakPtr.ObjectIndex = pTVar1[1].WeakPtr.ObjectIndex;
      this[1].WeakPtr.ObjectSerialNumber = pTVar1[1].WeakPtr.ObjectSerialNumber;
      this[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value =
           pTVar1[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value;
      this[1].ObjectID.AssetPath.PackageName.Number =
           pTVar1[1].ObjectID.AssetPath.PackageName.Number;
      this[1].ObjectID.AssetPath.AssetName.ComparisonIndex.Value =
           pTVar1[1].ObjectID.AssetPath.AssetName.ComparisonIndex.Value;
      param_3 = param_3 + -1;
      this = (TPersistentObjectPtr<FSoftObjectPath> *)&this[1].ObjectID.SubPathString;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPaperSpriteSocket> @ 14ace1fd0

void __cdecl UE::CoreUObject::Private::Construct<FPaperSpriteSocket>(void *param_1)

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
  return;
}

// ConstructForTests<FPaperSpriteSocket> @ 14ace2040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPaperSpriteSocket>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Decay<TObjectPtr<UPaperTileSet>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPaperTileSet>_>,UPaperTileSet_*> @ 14ace2cc0

UPaperTileSet ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UPaperTileSet>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPaperTileSet>_>,UPaperTileSet_*>
          (TObjectPtr<UPaperTileSet> *param_1)

{
  return (UPaperTileSet **)param_1;
}

// DereferenceIfNecessary<UPaperGroupedSpriteComponent,UPaperGroupedSpriteComponent_*_&> @ 14ace2d40

UPaperGroupedSpriteComponent * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UPaperGroupedSpriteComponent,UPaperGroupedSpriteComponent_*_&>
          (UPaperGroupedSpriteComponent **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UPaperTerrainComponent,UPaperTerrainComponent_*_&> @ 14ace2d60

UPaperTerrainComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UPaperTerrainComponent,UPaperTerrainComponent_*_&>
          (UPaperTerrainComponent **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_> @ 14ace7250

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<UTexture_*> *param_5,
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
    if (param_5->SecondaryData == (ForElementType<UTexture_*>)0x0) goto LAB_14ace72be;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_14ace72be:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 14ace7300

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TVector4<double>_> *param_5,int param_6,int *param_7)

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
  TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 14ace73a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector4<double>_> *param_2,int *param_3)

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
    ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 14ace7470

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector4<double>_> *param_4,int param_5,int *param_6)

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
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

