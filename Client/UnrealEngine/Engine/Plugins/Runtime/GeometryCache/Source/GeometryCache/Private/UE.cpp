// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 24

// Construct<FTrackRenderData> @ 14c9fef90

void __cdecl UE::CoreUObject::Private::Construct<FTrackRenderData>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FTrackRenderData> @ 14c9fefa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTrackRenderData>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0xffffffffffffffff;
  return;
}

// Destruct<FTrackRenderData> @ 14c9fefb0

void __cdecl UE::CoreUObject::Private::Destruct<FTrackRenderData>(void *param_1)

{
  return;
}

// Copy<FTrackRenderData> @ 14c9ff000

bool __cdecl
UE::CoreUObject::Private::Copy<FTrackRenderData>(void *param_1,void *param_2,int param_3)

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
  undefined8 *puVar25;
  
  if (param_3 != 0) {
    puVar25 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar25);
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
      *puVar25 = *puVar1;
      puVar25[1] = uVar2;
      puVar25[2] = uVar3;
      puVar25[3] = uVar4;
      puVar25[4] = uVar5;
      puVar25[5] = uVar6;
      puVar25[6] = uVar7;
      puVar25[7] = uVar8;
      puVar25[8] = uVar9;
      puVar25[9] = uVar10;
      puVar25[10] = uVar11;
      puVar25[0xb] = uVar12;
      puVar25[0xc] = uVar13;
      puVar25[0xd] = uVar14;
      puVar25[0xe] = uVar15;
      puVar25[0xf] = uVar16;
      puVar25[0x10] = uVar17;
      puVar25[0x11] = uVar18;
      puVar25[0x12] = uVar19;
      puVar25[0x13] = uVar20;
      puVar25[0x14] = uVar21;
      puVar25[0x15] = uVar22;
      puVar25[0x16] = uVar23;
      puVar25[0x17] = uVar24;
      param_3 = param_3 + -1;
      puVar25 = puVar25 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCacheMeshData> @ 14c9ffc60

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCacheMeshData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  *(undefined2 *)((longlong)param_1 + 0x99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  return;
}

// ConstructForTests<FGeometryCacheMeshData> @ 14c9ffd10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryCacheMeshData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  *(undefined2 *)((longlong)param_1 + 0x99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  return;
}

// Destruct<FGeometryCacheMeshData> @ 14c9ffdc0

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCacheMeshData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
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

// Copy<FGeometryCacheMeshData> @ 14c9ffdd0

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCacheMeshData>(void *param_1,void *param_2,int param_3)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    pTVar1 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10);
    if (pTVar1 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x10)) {
      iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x10))->ArrayNum;
      piVar2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x10))->ArrayMax;
      pFVar4 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x10))->AllocatorInstance).Data;
      ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
        }
      }
    }
    TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
               (TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30));
    pTVar1 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x40);
    if (pTVar1 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x40)) {
      iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x40))->ArrayNum;
      piVar2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x40))->ArrayMax;
      pFVar4 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x40))->AllocatorInstance).Data;
      ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
        }
      }
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50));
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x60),
               (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x60));
    pTVar1 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x70);
    if (pTVar1 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x70)) {
      iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x70))->ArrayNum;
      piVar2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x70))->ArrayMax;
      pFVar4 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x70))->AllocatorInstance).Data;
      ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0xc);
        }
      }
    }
    iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x80))->ArrayNum;
    iVar5 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x80))->ArrayMax;
    (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))->
    AllocatorInstance).Data =
         (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x80))->AllocatorInstance).Data;
    ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))->
    ArrayNum = iVar3;
    ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))->
    ArrayMax = iVar5;
    (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90))->
    AllocatorInstance).Data =
         (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x90))->AllocatorInstance).Data;
    ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90))->
    ArrayNum = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x90))->ArrayNum;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa0));
    (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb0))->
    AllocatorInstance).Data =
         (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0xb0))->AllocatorInstance).Data;
    *(char *)&((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0xb0))->ArrayNum =
         (char)((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0xb0))->ArrayNum;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xc0),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xc0));
    (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xd0))->
    AllocatorInstance).Data =
         (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0xd0))->AllocatorInstance).Data;
    param_1 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0xd0))->ArrayNum;
    param_2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0xd0))->ArrayNum;
  }
  return true;
}

// Construct<FGeometryCacheVertexInfo> @ 14ca001e0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCacheVertexInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryCacheVertexInfo> @ 14ca00200

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryCacheVertexInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGeometryCacheVertexInfo> @ 14ca00220

void __cdecl UE::CoreUObject::Private::Destruct<FGeometryCacheVertexInfo>(void *param_1)

{
  return;
}

// Copy<FGeometryCacheVertexInfo> @ 14ca00230

bool __cdecl
UE::CoreUObject::Private::Copy<FGeometryCacheVertexInfo>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 9);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometryCacheMeshBatchInfo> @ 14ca002b0

void __cdecl UE::CoreUObject::Private::Construct<FGeometryCacheMeshBatchInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGeometryCacheMeshBatchInfo> @ 14ca002c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometryCacheMeshBatchInfo>(void *param_1)

{
  return;
}

// Construct<FNiagaraGeometryCacheReference> @ 14ca00690

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraGeometryCacheReference>(void *param_1)

{
  TObjectPtr<UObject>_u_0 TStack_28;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  *(undefined8 *)param_1 = 0;
  TStack_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)TStack_28.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable(TStack_28.DebugPtr);
  }
  uStack_1e = 0;
  uStack_20 = 1;
  uStack_1c = 0xffffffffffffffff;
  uStack_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&TStack_28.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            ((FNiagaraUserParameterBinding *)((longlong)param_1 + 8),
             (FNiagaraTypeDefinition *)&TStack_28.ObjectPtr);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FNiagaraGeometryCacheReference> @ 14ca006a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraGeometryCacheReference>(void *param_1)

{
  TObjectPtr<UObject>_u_0 TStack_28;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  *(undefined8 *)param_1 = 0;
  TStack_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)TStack_28.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable(TStack_28.DebugPtr);
  }
  uStack_1e = 0;
  uStack_20 = 1;
  uStack_1c = 0xffffffffffffffff;
  uStack_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&TStack_28.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            ((FNiagaraUserParameterBinding *)((longlong)param_1 + 8),
             (FNiagaraTypeDefinition *)&TStack_28.ObjectPtr);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FNiagaraGeometryCacheReference> @ 14ca006b0

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraGeometryCacheReference>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FNiagaraGeometryCacheReference> @ 14ca00700

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraGeometryCacheReference>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraGeometryCacheMICOverride *pFVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar7 + ((longlong)param_2 - (longlong)param_1));
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar7 = *puVar3;
      puVar7[1] = puVar3[1];
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar3 + 2);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar7 + 3),
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar3 + 3));
      pFVar1 = (ForAnyElementType *)(puVar7 + 5);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 5)) {
        iVar4 = *(int *)(puVar3 + 6);
        piVar2 = (int *)((longlong)puVar7 + 0x34);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 5))->Data;
        *(int *)(puVar7 + 6) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    (pFVar1->Data,(TObjectPtr<UMaterialInterface> *)pFVar5,iVar4);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar7 + 7);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 7)) {
        iVar4 = *(int *)(puVar3 + 8);
        piVar2 = (int *)((longlong)puVar7 + 0x44);
        pFVar6 = (FNiagaraGeometryCacheMICOverride *)((ForAnyElementType *)(puVar3 + 7))->Data;
        *(int *)(puVar7 + 8) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FNiagaraGeometryCacheMICOverride,FNiagaraGeometryCacheMICOverride,int>
                    (pFVar1->Data,pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 9;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNiagaraGeometryCacheMICOverride> @ 14ca009b0

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraGeometryCacheMICOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNiagaraGeometryCacheMICOverride> @ 14ca009c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraGeometryCacheMICOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNiagaraGeometryCacheMICOverride> @ 14ca009d0

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraGeometryCacheMICOverride>(void *param_1)

{
  return;
}

// Copy<FNiagaraGeometryCacheMICOverride> @ 14ca009e0

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraGeometryCacheMICOverride>
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
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// operator<< @ 14ca0ad00

FArchive * __cdecl UE::Math::operator<<(FArchive *param_1,TBox<float> *param_2)

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

// GetGeometryCacheMeshDataFromMeshDescription @ 14ca1c4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::GeometryCache::Utils::GetGeometryCacheMeshDataFromMeshDescription
          (FGeometryCacheMeshData *param_1,FMeshDescription *param_2,
          FMeshDataConversionArguments *param_3)

{
  TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  float *pfVar2;
  ulonglong uVar3;
  int *piVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  FGeometryCacheMeshData *pFVar15;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  FMeshElementContainer *pFVar21;
  FAttributesSetEntry *pFVar22;
  TArrayView<int_const_,int> *pTVar23;
  TArrayView<FVertexInstanceID,int> *pTVar24;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar25;
  TVector<float> *pTVar26;
  FLinearColor *this;
  byte bVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  FMeshAttributeArraySetBase *pFVar34;
  FMeshAttributeArraySetBase *pFVar35;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  int iVar36;
  FMeshDescription *pFVar37;
  uint uVar38;
  ForElementType<unsigned_int> FVar39;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar40;
  FMeshAttributeArraySetBase *pFVar41;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_02;
  bool bVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStackY_2f8 [32];
  int local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  int local_298;
  int local_294;
  undefined4 local_290 [2];
  FMeshAttributeArraySetBase *local_288;
  FMeshDescription *local_280;
  ForElementType<unsigned_int> local_278;
  undefined8 local_270;
  float local_268;
  undefined8 local_260;
  FTriangleID *local_258;
  FGeometryCacheMeshData *local_250;
  int *local_248;
  int *local_240;
  undefined1 local_238 [16];
  double local_228;
  undefined1 auStack_220 [16];
  double dStack_210;
  char local_208;
  undefined4 local_207;
  undefined2 local_203;
  undefined1 local_201;
  undefined8 local_200;
  FMeshDataConversionArguments *local_1f8;
  FMeshAttributeArraySetBase *local_1f0;
  FPolygonID *local_1e8;
  int local_1e0;
  uint uStack_1dc;
  ForElementType<unsigned_int> FStack_1d8;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  FMeshAttributeArraySetBase *local_1c0;
  FMeshAttributeArraySetBase *local_1b8;
  FMeshAttributeArraySetBase *local_1b0;
  int local_1a8;
  uint uStack_1a4;
  ForElementType<unsigned_int> FStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_188;
  FMeshAttributeArraySetBase *local_180;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_178;
  FMeshAttributeArraySetBase *local_170;
  ForElementType<unsigned_int> local_168;
  FTriangleID *local_160;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *local_158;
  FPolygonID *local_150;
  int local_148;
  int local_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 local_130;
  undefined4 local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  TArrayView<FTriangleID_const_,int> local_100;
  TArrayView<FPolygonID_const_,int> local_f0;
  undefined8 local_e0;
  ForElementType<unsigned_int> FStack_d8;
  uint local_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  TArrayView<int_const_,int> local_c0;
  TArrayView<FVertexInstanceID,int> local_b0;
  FLinearColor local_a0;
  int local_90;
  int iStack_8c;
  int local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar42 = -1 < CpuChannel->Enabled;
  local_280 = param_2;
  local_250 = param_1;
  local_1f8 = param_3;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId18,"GetGeometryCacheMeshDataFromMeshDescription",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheHelpers.cpp"
               ,0x12);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId18);
  }
  local_1e8 = (FPolygonID *)&(param_1->Positions).ArrayMax;
  pTVar40 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  (param_1->Positions).ArrayNum = 0;
  if ((param_1->Positions).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_1,0,(int *)local_1e8);
  }
  local_178 = &param_1->TextureCoordinates;
  local_1b8 = (FMeshAttributeArraySetBase *)&(param_1->TextureCoordinates).ArrayMax;
  (param_1->TextureCoordinates).ArrayNum = 0;
  if ((param_1->TextureCoordinates).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_178->AllocatorInstance,0,(int *)local_1b8);
  }
  (param_1->TangentsX).ArrayNum = 0;
  if ((param_1->TangentsX).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(param_1->TangentsX).AllocatorInstance,0,&(param_1->TangentsX).ArrayMax);
  }
  local_260 = &param_1->TangentsZ;
  local_240 = &(param_1->TangentsZ).ArrayMax;
  (param_1->TangentsZ).ArrayNum = 0;
  if ((param_1->TangentsZ).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_260->AllocatorInstance,0,local_240);
  }
  local_1c0 = (FMeshAttributeArraySetBase *)&param_1->Colors;
  local_248 = &(param_1->Colors).ArrayMax;
  (param_1->Colors).ArrayNum = 0;
  if ((param_1->Colors).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)local_1c0,0,local_248);
  }
  local_258 = (FTriangleID *)&param_1->Indices;
  local_278 = (ForElementType<unsigned_int>)&(param_1->Indices).ArrayMax;
  (param_1->Indices).ArrayNum = 0;
  if ((param_1->Indices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)local_258,0,(int *)local_278);
  }
  local_288 = (FMeshAttributeArraySetBase *)&param_1->MotionVectors;
  local_1b0 = (FMeshAttributeArraySetBase *)&(param_1->MotionVectors).ArrayMax;
  (param_1->MotionVectors).ArrayNum = 0;
  if ((param_1->MotionVectors).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_288,0,(int *)local_1b0);
  }
  (param_1->BatchesInfo).ArrayNum = 0;
  if ((param_1->BatchesInfo).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(param_1->BatchesInfo).AllocatorInstance,0,&(param_1->BatchesInfo).ArrayMax)
    ;
  }
  *(undefined8 *)&(param_1->BoundingBox).Max.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (param_1->BoundingBox).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(param_1->BoundingBox).Min.field0_0x0 =
       *(undefined8 *)&(param_1->BoundingBox).Max.field0_0x0;
  (param_1->BoundingBox).Min.field0_0x0._s_0.Z = (float)uVar14;
  (param_1->BoundingBox).IsValid = '\0';
  (param_1->VertexInfo).bHasTangentX = true;
  (param_1->VertexInfo).bHasTangentZ = true;
  (param_1->VertexInfo).bHasUV0 = true;
  (param_1->VertexInfo).bHasColor0 = true;
  pFVar21 = FMeshElementChannels::Get(param_2->VertexElements,0);
  pFVar22 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar21->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar22 == (FAttributesSetEntry *)0x0) ||
      (this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar22->Ptr).Ptr,
      *(uint *)&this_00->_padding_ != 1)) || (*(uint *)((longlong)&this_00->_padding_ + 4) != 1)) {
    this_00 = pTVar40;
  }
  pFVar21 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar22 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar21->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar22 == (FAttributesSetEntry *)0x0) ||
      (this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar22->Ptr).Ptr,
      *(uint *)&this_01->_padding_ != 1)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1)) {
    this_01 = pTVar40;
  }
  pFVar21 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar22 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar21->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar22 == (FAttributesSetEntry *)0x0) ||
      (this_02 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar22->Ptr).Ptr,
      *(uint *)&this_02->_padding_ != 1)) || (*(uint *)((longlong)&this_02->_padding_ + 4) != 1)) {
    this_02 = pTVar40;
  }
  pFVar21 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar22 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar21->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar22 == (FAttributesSetEntry *)0x0) ||
      (local_1f0 = (pFVar22->Ptr).Ptr, local_1f0->Type != 3)) || (local_1f0->Extent != 1)) {
    local_1f0 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar34 = local_1f0;
  pFVar21 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar22 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar21->Attributes,MeshAttribute::VertexInstance::Color);
  if (((pFVar22 == (FAttributesSetEntry *)0x0) ||
      (local_170 = (pFVar22->Ptr).Ptr, local_170->Type != 0)) || (local_170->Extent != 1)) {
    local_170 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar35 = local_170;
  pFVar21 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar22 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar21->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar22 == (FAttributesSetEntry *)0x0) ||
      (local_180 = (pFVar22->Ptr).Ptr, local_180->Type != 2)) || (local_180->Extent != 1)) {
    local_180 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar41 = local_180;
  pFVar21 = FMeshElementChannels::Get(local_280->VertexInstanceElements,0);
  pFVar22 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar21->Attributes,MeshAttribute::VertexInstance::Velocity);
  pFVar37 = local_280;
  if (((pFVar22 == (FAttributesSetEntry *)0x0) ||
      (local_188 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar22->Ptr).Ptr,
      *(uint *)&local_188->_padding_ != 1)) || (*(uint *)((longlong)&local_188->_padding_ + 4) != 1)
     ) {
    local_188 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  if ((local_1f8->bUseVelocitiesAsMotionVectors == false) ||
     (local_188 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  (param_1->VertexInfo).bHasMotionVectors = bVar17;
  pFVar21 = FMeshElementChannels::Get(local_280->VertexElements,0);
  uVar31 = (pFVar21->BitArray).NumBits - pFVar21->NumHoles;
  pFVar21 = FMeshElementChannels::Get(pFVar37->TriangleElements,0);
  uVar32 = ((pFVar21->BitArray).NumBits - pFVar21->NumHoles) * 3;
  if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
  }
  if ((int)*local_1e8 < (int)uVar31) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar31,(ForAnyElementType *)local_250,(local_250->Positions).ArrayNum,
               (int *)local_1e8);
  }
  if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
  }
  if (*(int *)local_278 < (int)uVar32) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar32,(ForAnyElementType *)local_258,*(int *)((longlong)local_258 + 8),
               (int *)local_278);
  }
  if (*local_240 < (int)uVar32) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar32,&local_260->AllocatorInstance,local_260->ArrayNum,local_240);
  }
  if (*local_248 < (int)uVar32) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar32,(ForAnyElementType *)local_1c0,local_1c0->Type,local_248);
  }
  if ((int)local_1b8->_padding_ < (int)uVar32) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar32,&local_178->AllocatorInstance,local_178->ArrayNum,(int *)local_1b8);
  }
  if ((bVar17 != false) && ((int)local_1b0->_padding_ < (int)uVar32)) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar32,(ForAnyElementType *)local_288,local_288->Type,(int *)local_1b0);
  }
  if (((int)uVar31 < 1) || (local_1f8->bStoreImportedVertexNumbers == false)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    if ((local_250->ImportedVertexNumbers).ArrayMax < (int)uVar32) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar32,&(local_250->ImportedVertexNumbers).AllocatorInstance,
                 (local_250->ImportedVertexNumbers).ArrayNum,
                 &(local_250->ImportedVertexNumbers).ArrayMax);
    }
  }
  local_208 = '\0';
  local_207 = 0;
  local_203 = 0;
  local_201 = 0;
  local_238 = ZEXT816(0);
  local_240 = (int *)((ulonglong)local_240 & 0xffffffff00000000);
  local_228 = 0.0;
  local_248 = (int *)CONCAT44(local_248._4_4_,local_1f8->MaterialOffset);
  auStack_220 = ZEXT816(0);
  dStack_210 = 0.0;
  local_278 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get(local_280->PolygonGroupElements,0);
  local_1a8 = 0;
  uStack_1a4 = 1;
  uVar32 = *(int *)((longlong)local_278 + 0x18);
  uStack_194 = 0;
  iStack_190 = 0;
  if (uVar32 != 0) {
    FVar39 = local_278;
    if (*(ForElementType<unsigned_int> *)((longlong)local_278 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar39 = *(ForElementType<unsigned_int> *)((longlong)local_278 + 0x10);
    }
    uVar31 = *(uint *)FVar39;
    iStack_190 = 0;
    local_1a8 = 0;
    while (uVar31 == 0) {
      iStack_190 = iStack_190 + 0x20;
      lVar33 = (longlong)local_1a8;
      local_1a8 = local_1a8 + 1;
      if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1a8)
      goto LAB_14ca1cbbe;
      uVar31 = ((uint *)((longlong)FVar39 + 4))[lVar33];
    }
    uStack_1a4 = -uVar31 & uVar31;
    uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_144 = (int)lVar33;
    uStack_194 = local_144 + -1 + iStack_190;
    if ((int)uVar32 < (int)uStack_194) {
LAB_14ca1cbbe:
      uStack_194 = uVar32;
    }
  }
  local_198 = 0xffffffff;
  local_120._padding_ = CONCAT44(uStack_1a4,local_1a8);
  local_120.CurrentBitIndex = uStack_194;
  local_120.UnvisitedBitMask = 0xffffffff;
  local_120._28_4_ = uStack_18c;
  local_120.BaseBitIndex = iStack_190;
  bVar27 = (byte)uVar32 & 0x1f;
  uStack_1dc = 1 << bVar27;
  iVar36 = (int)uVar32 >> 5;
  uVar31 = -1 << bVar27;
  uVar38 = uVar32 & 0xffffffe0;
  local_258 = (FTriangleID *)CONCAT44(local_258._4_4_,uVar31);
  local_260 = (TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)
              (CONCAT44(local_260._4_4_,uVar32) & 0xffffffffffffffe0);
  local_1e0 = iVar36;
  FStack_1d8 = local_278;
  local_1d0 = uVar31;
  uStack_1cc = uVar32;
  uStack_1c8 = uVar38;
  FStack_1a0 = local_278;
  local_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_278;
  if ((int)uVar32 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar18) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar38 = (uint)local_260;
    uVar31 = (uint)local_258;
  }
  fVar13 = __real_437e0000;
  fVar12 = __real_bf800000;
  fVar11 = __real_3f000000;
  uVar6 = *(uint *)((longlong)local_278 + 0x18);
  if (uVar32 != uVar6) {
    FVar39 = local_278;
    if (*(ForElementType<unsigned_int> *)((longlong)local_278 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar39 = *(ForElementType<unsigned_int> *)((longlong)local_278 + 0x10);
    }
    uVar31 = uVar31 & *(uint *)((longlong)FVar39 + (longlong)iVar36 * 4);
    while (uVar31 == 0) {
      uStack_1c8 = uVar38 + 0x20;
      local_1e0 = iVar36 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1e0)
      goto LAB_14ca1ccf1;
      uVar31 = ((int *)((longlong)FVar39 + 4))[iVar36];
      local_1d0 = 0xffffffff;
      iVar36 = local_1e0;
      uVar38 = uStack_1c8;
    }
    uStack_1dc = -uVar31 & uVar31;
    uVar3 = (ulonglong)uStack_1dc * 2 + 1;
    lVar33 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_148 = (int)lVar33;
    uStack_1cc = local_148 + -1 + uVar38;
    if ((int)uVar6 < (int)uStack_1cc) {
LAB_14ca1ccf1:
      uStack_1cc = uVar6;
    }
  }
  local_e0 = CONCAT44(uStack_1dc,local_1e0);
  local_d0 = local_1d0;
  uStack_cc = uStack_1cc;
  uStack_c8 = CONCAT44(uStack_1c4,uStack_1c8);
  FStack_d8 = FStack_1d8;
  do {
    if ((local_120.CurrentBitIndex == uStack_cc) &&
       ((ForElementType<unsigned_int>)local_120.Array == FStack_d8)) {
      if (bVar42) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar32 = 0xffffffff;
    if (local_120.CurrentBitIndex < *(int *)((longlong)local_120.Array + 0x18)) {
      uVar32 = local_120.CurrentBitIndex;
    }
    pTVar23 = FMeshElementIndexer::Find(&local_280->PolygonGroupToPolygons,&local_c0,uVar32,0);
    pFVar37 = local_280;
    if (pTVar23->ArrayNum != 0) {
      local_2a4 = 0;
      local_90 = (local_250->Indices).ArrayNum;
      local_88 = (int)local_248;
      local_248 = (int *)CONCAT44(local_248._4_4_,(int)local_248 + 1);
      FMeshElementIndexer::Find<FPolygonID>(&local_280->PolygonGroupToPolygons,&local_f0,uVar32,0);
      local_1e8 = local_f0.DataPtr;
      local_150 = local_f0.DataPtr + local_f0.ArrayNum;
      if (local_f0.DataPtr != local_150) {
        do {
          FMeshElementIndexer::Find<FTriangleID>
                    (&pFVar37->PolygonToTriangles,&local_100,(int)*local_1e8,0);
          local_258 = local_100.DataPtr;
          local_160 = local_100.DataPtr + local_100.ArrayNum;
          if (local_100.DataPtr != local_160) {
            local_158 = &pFVar37->TriangleVertexInstances;
            do {
              pTVar24 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                                  (local_158,&local_b0,(int)*local_258);
              pTVar16 = local_178;
              pFVar15 = local_250;
              local_278 = (ForElementType<unsigned_int>)pTVar24->DataPtr;
              local_168 = (ForElementType<unsigned_int>)
                          ((longlong)local_278 + (longlong)pTVar24->ArrayNum * 4);
              if (local_278 != local_168) {
                local_1b8 = pFVar35 + 1;
                local_1b0 = pFVar34 + 1;
                local_1c0 = pFVar41 + 1;
                do {
                  iVar36 = *(int *)local_278;
                  pFVar34 = (local_280->VertexInstanceVertices).ArrayPtr;
                  if (((int)pFVar34[2].Type < 1) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar35 = pFVar34 + 1;
                  if ((FMeshAttributeArraySetBase *)pFVar34[2]._padding_ !=
                      (FMeshAttributeArraySetBase *)0x0) {
                    pFVar35 = (FMeshAttributeArraySetBase *)pFVar34[2]._padding_;
                  }
                  uVar32 = iVar36 * pFVar35->NumElements;
                  local_260 = (TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)
                              CONCAT44(local_260._4_4_,uVar32);
                  uVar31 = 0;
                  if ((int)uVar32 < (int)pFVar35->Type) {
                    uVar31 = ~uVar32 >> 0x1f;
                  }
                  if (uVar31 == 0) {
                    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar18) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar32 = (uint)local_260;
                  }
                  iVar20 = *(int *)(pFVar35->_padding_ + (longlong)(int)uVar32 * 4);
                  pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      (this_00,0);
                  local_288 = (FMeshAttributeArraySetBase *)
                              TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                        (pTVar25,iVar20);
                  pFVar7 = (pFVar15->Positions).AllocatorInstance.Data;
                  if (((pFVar7 <= local_288) &&
                      (local_288 < pFVar7 + (longlong)(pFVar15->Positions).ArrayMax * 0xc)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar19 = (pFVar15->Positions).ArrayNum;
                  if (iVar19 == (pFVar15->Positions).ArrayMax) {
                    iVar19 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,(ForAnyElementType *)pFVar15,
                                        &(pFVar15->Positions).ArrayMax);
                  }
                  (pFVar15->Positions).ArrayNum = iVar19 + 1;
                  pFVar7 = (pFVar15->Positions).AllocatorInstance.Data;
                  *(undefined8 *)(pFVar7 + (longlong)iVar19 * 0xc) =
                       *(undefined8 *)&local_288->_padding_;
                  *(undefined4 *)(pFVar7 + (longlong)iVar19 * 0xc + 8) =
                       *(undefined4 *)((longlong)local_288 + 8);
                  dVar44 = (double)(((TVector<float>_u_0 *)&local_288->_padding_)->_s_0).X;
                  dVar45 = (double)*(float *)((longlong)local_288 + 4);
                  dVar46 = (double)*(float *)((longlong)local_288 + 8);
                  if (local_208 == '\0') {
                    local_208 = '\x01';
                    local_238._8_8_ = dVar45;
                    local_238._0_8_ = dVar44;
                    auStack_220._8_4_ = SUB84(dVar45,0);
                    auStack_220._0_8_ = dVar44;
                    auStack_220._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                    local_228 = dVar46;
                    dStack_210 = dVar46;
                  }
                  else {
                    if (dVar44 <= (double)local_238._0_8_) {
                      local_238._0_8_ = dVar44;
                    }
                    if (dVar45 <= (double)local_238._8_8_) {
                      local_238._8_8_ = dVar45;
                    }
                    if (dVar46 <= local_228) {
                      local_228 = dVar46;
                    }
                    dVar9 = (double)auStack_220._0_8_;
                    if ((double)auStack_220._0_8_ <= dVar44) {
                      dVar9 = dVar44;
                    }
                    if ((double)auStack_220._8_8_ <= dVar45) {
                      auStack_220._8_8_ = dVar45;
                    }
                    if (dStack_210 <= dVar46) {
                      dStack_210 = dVar46;
                    }
                    auStack_220._0_8_ = dVar9;
                  }
                  if (bVar10) {
                    pFVar7 = (pFVar15->ImportedVertexNumbers).AllocatorInstance.Data;
                    local_298 = iVar20;
                    if (((pFVar7 <= (FScriptContainerElement *)&local_298) &&
                        ((FScriptContainerElement *)&local_298 <
                         pFVar7 + (longlong)(pFVar15->ImportedVertexNumbers).ArrayMax * 4)) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar18)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar20 = (pFVar15->ImportedVertexNumbers).ArrayNum;
                    piVar4 = &(pFVar15->ImportedVertexNumbers).ArrayMax;
                    if (iVar20 == *piVar4) {
                      iVar20 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&(pFVar15->ImportedVertexNumbers).AllocatorInstance,
                                          piVar4);
                    }
                    (pFVar15->ImportedVertexNumbers).ArrayNum = iVar20 + 1;
                    *(int *)((pFVar15->ImportedVertexNumbers).AllocatorInstance.Data +
                            (longlong)iVar20 * 4) = local_298;
                  }
                  pTVar5 = &pFVar15->Indices;
                  pFVar7 = (pTVar5->AllocatorInstance).Data;
                  local_294 = (int)local_240;
                  local_240 = (int *)CONCAT44(local_240._4_4_,(int)local_240 + 1);
                  if (((pFVar7 <= (FScriptContainerElement *)&local_294) &&
                      ((FScriptContainerElement *)&local_294 <
                       pFVar7 + (longlong)(pFVar15->Indices).ArrayMax * 4)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar20 = (pFVar15->Indices).ArrayNum;
                  if (iVar20 == (pFVar15->Indices).ArrayMax) {
                    iVar20 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar5->AllocatorInstance,
                                        &(pFVar15->Indices).ArrayMax);
                  }
                  (pFVar15->Indices).ArrayNum = iVar20 + 1;
                  *(int *)((pTVar5->AllocatorInstance).Data + (longlong)iVar20 * 4) = local_294;
                  pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      (this_01,0);
                  pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                      (pTVar25,iVar36);
                  pFVar34 = local_1b0;
                  iVar19 = (int)ROUND((pTVar26->field0_0x0)._s_0.X * fVar13 + fVar11) >> 1;
                  iVar20 = 0x7f;
                  if (iVar19 < 0x7f) {
                    iVar20 = iVar19;
                  }
                  uVar28 = 0x80;
                  if (-0x80 < iVar20) {
                    uVar28 = (char)iVar20;
                  }
                  iVar19 = (int)ROUND((pTVar26->field0_0x0)._s_0.Y * fVar13 + fVar11) >> 1;
                  iVar20 = 0x7f;
                  if (iVar19 < 0x7f) {
                    iVar20 = iVar19;
                  }
                  uVar29 = 0x80;
                  if (-0x80 < iVar20) {
                    uVar29 = (char)iVar20;
                  }
                  iVar19 = (int)ROUND((pTVar26->field0_0x0)._s_0.Z * fVar13 + fVar11) >> 1;
                  iVar20 = 0x7f;
                  if (iVar19 < 0x7f) {
                    iVar20 = iVar19;
                  }
                  uVar30 = 0x80;
                  if (-0x80 < iVar20) {
                    uVar30 = (char)iVar20;
                  }
                  local_2a0._0_3_ = CONCAT12(uVar30,CONCAT11(uVar29,uVar28));
                  local_2a0 = CONCAT13(0x7f,(undefined3)local_2a0);
                  if (((int)local_1b0[1].Type < 1) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar35 = (FMeshAttributeArraySetBase *)pFVar34[1]._padding_;
                  local_288 = pFVar34;
                  if (pFVar35 != (FMeshAttributeArraySetBase *)0x0) {
                    local_288 = pFVar35;
                  }
                  uVar31 = iVar36 * local_288->NumElements;
                  uVar32 = 0;
                  if ((int)uVar31 < (int)local_288->Type) {
                    uVar32 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar32 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pfVar2 = (float *)(local_288->_padding_ + (longlong)(int)uVar31 * 4);
                  pFVar7 = (pFVar15->TangentsZ).AllocatorInstance.Data;
                  uVar28 = 0x7f;
                  if (*pfVar2 <= 0.0 && *pfVar2 != 0.0) {
                    uVar28 = 0x81;
                  }
                  local_2a0 = CONCAT13(uVar28,(undefined3)local_2a0);
                  if (((pFVar7 <= (FScriptContainerElement *)&local_2a0) &&
                      ((FScriptContainerElement *)&local_2a0 <
                       pFVar7 + (longlong)(pFVar15->TangentsZ).ArrayMax * 4)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar20 = (pFVar15->TangentsZ).ArrayNum;
                  if (iVar20 == (pFVar15->TangentsZ).ArrayMax) {
                    iVar20 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&(pFVar15->TangentsZ).AllocatorInstance,
                                        &(pFVar15->TangentsZ).ArrayMax);
                  }
                  (pFVar15->TangentsZ).ArrayNum = iVar20 + 1;
                  *(undefined4 *)
                   ((pFVar15->TangentsZ).AllocatorInstance.Data + (longlong)iVar20 * 4) = local_2a0;
                  pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      (this_02,0);
                  pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                      (pTVar25,iVar36);
                  iVar19 = (int)ROUND((pTVar26->field0_0x0)._s_0.X * fVar13 + fVar11) >> 1;
                  iVar20 = 0x7f;
                  if (iVar19 < 0x7f) {
                    iVar20 = iVar19;
                  }
                  uVar28 = 0x80;
                  if (-0x80 < iVar20) {
                    uVar28 = (char)iVar20;
                  }
                  iVar19 = (int)ROUND((pTVar26->field0_0x0)._s_0.Y * fVar13 + fVar11) >> 1;
                  iVar20 = 0x7f;
                  if (iVar19 < 0x7f) {
                    iVar20 = iVar19;
                  }
                  uVar29 = 0x80;
                  if (-0x80 < iVar20) {
                    uVar29 = (char)iVar20;
                  }
                  iVar19 = (int)ROUND((pTVar26->field0_0x0)._s_0.Z * fVar13 + fVar11) >> 1;
                  iVar20 = 0x7f;
                  if (iVar19 < 0x7f) {
                    iVar20 = iVar19;
                  }
                  pFVar7 = (pFVar15->TangentsX).AllocatorInstance.Data;
                  uVar30 = 0x80;
                  if (-0x80 < iVar20) {
                    uVar30 = (char)iVar20;
                  }
                  local_29c = CONCAT13(0x7f,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
                  if (((pFVar7 <= (FScriptContainerElement *)&local_29c) &&
                      ((FScriptContainerElement *)&local_29c <
                       pFVar7 + (longlong)(pFVar15->TangentsX).ArrayMax * 4)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar20 = (pFVar15->TangentsX).ArrayNum;
                  if (iVar20 == (pFVar15->TangentsX).ArrayMax) {
                    iVar20 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&(pFVar15->TangentsX).AllocatorInstance,
                                        &(pFVar15->TangentsX).ArrayMax);
                  }
                  pFVar34 = local_1b8;
                  (pFVar15->TangentsX).ArrayNum = iVar20 + 1;
                  *(undefined4 *)
                   ((pFVar15->TangentsX).AllocatorInstance.Data + (longlong)iVar20 * 4) = local_29c;
                  if (((int)local_1b8[1].Type < 1) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar35 = (FMeshAttributeArraySetBase *)pFVar34[1]._padding_;
                  local_288 = pFVar34;
                  if (pFVar35 != (FMeshAttributeArraySetBase *)0x0) {
                    local_288 = pFVar35;
                  }
                  uVar31 = iVar36 * local_288->NumElements;
                  uVar32 = 0;
                  if ((int)uVar31 < (int)local_288->Type) {
                    uVar32 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar32 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  this = FLinearColor::FLinearColor
                                   (&local_a0,
                                    (TVector4<float> *)
                                    ((longlong)(int)uVar31 * 0x10 + local_288->_padding_));
                  FLinearColor::ToFColorSRGB(this);
                  pFVar7 = (pFVar15->Colors).AllocatorInstance.Data;
                  if (((pFVar7 <= (FScriptContainerElement *)local_290) &&
                      ((FScriptContainerElement *)local_290 <
                       pFVar7 + (longlong)(pFVar15->Colors).ArrayMax * 4)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar20 = (pFVar15->Colors).ArrayNum;
                  if (iVar20 == (pFVar15->Colors).ArrayMax) {
                    iVar20 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&(pFVar15->Colors).AllocatorInstance,
                                        &(pFVar15->Colors).ArrayMax);
                  }
                  pFVar34 = local_1c0;
                  (pFVar15->Colors).ArrayNum = iVar20 + 1;
                  *(undefined4 *)((pFVar15->Colors).AllocatorInstance.Data + (longlong)iVar20 * 4) =
                       local_290[0];
                  if (((int)local_1c0[1].Type < 1) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar35 = (FMeshAttributeArraySetBase *)pFVar34[1]._padding_;
                  local_288 = pFVar34;
                  if (pFVar35 != (FMeshAttributeArraySetBase *)0x0) {
                    local_288 = pFVar35;
                  }
                  uVar31 = iVar36 * local_288->NumElements;
                  uVar32 = 0;
                  if ((int)uVar31 < (int)local_288->Type) {
                    uVar32 = ~uVar31 >> 0x1f;
                  }
                  if ((uVar32 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_200 = *(undefined8 *)(local_288->_padding_ + (longlong)(int)uVar31 * 8);
                  pFVar7 = (pTVar16->AllocatorInstance).Data;
                  if (((pFVar7 <= (FScriptContainerElement *)&local_200) &&
                      ((FScriptContainerElement *)&local_200 <
                       pFVar7 + (longlong)pTVar16->ArrayMax * 8)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar20 = pTVar16->ArrayNum;
                  if (iVar20 == pTVar16->ArrayMax) {
                    iVar20 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
                  }
                  pTVar16->ArrayNum = iVar20 + 1;
                  *(undefined8 *)((pTVar16->AllocatorInstance).Data + (longlong)iVar20 * 8) =
                       local_200;
                  if (bVar17 != false) {
                    pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                        (local_188,0);
                    pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                        (pTVar25,iVar36);
                    pFVar7 = (pFVar15->MotionVectors).AllocatorInstance.Data;
                    local_270._0_4_ = (float)*(undefined8 *)&pTVar26->field0_0x0;
                    local_270._4_4_ =
                         (float)((ulonglong)*(undefined8 *)&pTVar26->field0_0x0 >> 0x20);
                    fVar43 = fVar12 / local_1f8->FramesPerSecond;
                    local_268 = (pTVar26->field0_0x0)._s_0.Z * fVar43;
                    local_270 = CONCAT44(local_270._4_4_ * fVar43,(float)local_270 * fVar43);
                    if (((pFVar7 <= (FScriptContainerElement *)&local_270) &&
                        ((FScriptContainerElement *)&local_270 <
                         pFVar7 + (longlong)(pFVar15->MotionVectors).ArrayMax * 0xc)) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar18)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar36 = (pFVar15->MotionVectors).ArrayNum;
                    if (iVar36 == (pFVar15->MotionVectors).ArrayMax) {
                      iVar36 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,&(pFVar15->MotionVectors).AllocatorInstance,
                                          &(pFVar15->MotionVectors).ArrayMax);
                    }
                    (pFVar15->MotionVectors).ArrayNum = iVar36 + 1;
                    pFVar7 = (pFVar15->MotionVectors).AllocatorInstance.Data;
                    *(undefined8 *)(pFVar7 + (longlong)iVar36 * 0xc) = local_270;
                    *(float *)(pFVar7 + (longlong)iVar36 * 0xc + 8) = local_268;
                  }
                  local_278 = (ForElementType<unsigned_int>)((longlong)local_278 + 4);
                  pFVar35 = local_170;
                  pFVar41 = local_180;
                } while (local_278 != local_168);
              }
              local_2a4 = local_2a4 + 1;
              local_258 = local_258 + 1;
              pFVar34 = local_1f0;
              pFVar37 = local_280;
            } while (local_258 != local_160);
          }
          local_1e8 = local_1e8 + 1;
          pFVar34 = local_1f0;
        } while (local_1e8 != local_150);
      }
      pFVar15 = local_250;
      pTVar1 = &local_250->BatchesInfo;
      local_140 = (float)(double)local_238._0_8_;
      local_128 = CONCAT31(local_128._1_3_,1);
      uVar14 = local_128;
      fStack_13c = (float)(double)local_238._8_8_;
      fStack_138 = (float)local_228;
      fStack_134 = (float)(double)auStack_220._0_8_;
      (local_250->BoundingBox).Min.field0_0x0._s_0.X = local_140;
      (local_250->BoundingBox).Min.field0_0x0._s_0.Y = fStack_13c;
      (local_250->BoundingBox).Min.field0_0x0._s_0.Z = fStack_138;
      (local_250->BoundingBox).Max.field0_0x0._s_0.X = fStack_134;
      local_130 = CONCAT44((float)dStack_210,(float)(double)auStack_220._8_8_);
      *(undefined8 *)((longlong)&(local_250->BoundingBox).Max.field0_0x0 + 4) = local_130;
      (local_250->BoundingBox).IsValid = 1;
      (local_250->BoundingBox).Pad[0] = local_128._1_1_;
      (local_250->BoundingBox).Pad[1] = local_128._2_1_;
      (local_250->BoundingBox).Pad[2] = local_128._3_1_;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      iStack_8c = local_2a4;
      local_128 = uVar14;
      if (((pFVar7 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 <
           pFVar7 + (longlong)(local_250->BatchesInfo).ArrayMax * 0xc)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar36 = (pFVar15->BatchesInfo).ArrayNum;
      if (iVar36 == (pFVar15->BatchesInfo).ArrayMax) {
        iVar36 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar1->AllocatorInstance,&(pFVar15->BatchesInfo).ArrayMax);
      }
      (pFVar15->BatchesInfo).ArrayNum = iVar36 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + (longlong)iVar36 * 0xc) = CONCAT44(iStack_8c,local_90);
      *(int *)(pFVar7 + (longlong)iVar36 * 0xc + 8) = local_88;
    }
    local_120.UnvisitedBitMask = local_120.UnvisitedBitMask & ~local_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_120);
    pFVar34 = local_1f0;
  } while( true );
}

