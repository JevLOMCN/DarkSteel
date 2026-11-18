// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 32

// Construct<FClothCollisionData> @ 144644dc0

void __cdecl UE::CoreUObject::Private::Construct<FClothCollisionData>(void *param_1)

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

// ConstructForTests<FClothCollisionData> @ 144644df0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothCollisionData>(void *param_1)

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

// Destruct<FClothCollisionData> @ 144644e20

void __cdecl UE::CoreUObject::Private::Destruct<FClothCollisionData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            (*(FClothCollisionPrim_Convex **)((longlong)param_1 + 0x20),
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

// Copy<FClothCollisionData> @ 144644e80

bool __cdecl
UE::CoreUObject::Private::Copy<FClothCollisionData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FClothCollisionPrim_Convex *pFVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar8 = (ForAnyElementType *)((longlong)pFVar7 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar7 != pFVar8) {
        iVar3 = *(int *)&pFVar8[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar5 = pFVar8->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar7,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar7->Data,pFVar5,(longlong)iVar3 << 5);
          }
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar8 + 2) {
        iVar3 = *(int *)&pFVar8[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        pFVar5 = pFVar8[2].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar2,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar2->Data,pFVar5,(longlong)iVar3 << 5);
          }
        }
      }
      pFVar2 = pFVar7 + 4;
      if (pFVar2 != pFVar8 + 4) {
        DestructItems<FClothCollisionPrim_Convex,int>
                  ((FClothCollisionPrim_Convex *)pFVar2->Data,*(int *)&pFVar7[5].Data);
        iVar3 = *(int *)&pFVar8[5].Data;
        piVar1 = (int *)((longlong)&pFVar7[5].Data + 4);
        pFVar6 = (FClothCollisionPrim_Convex *)pFVar8[4].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[5].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar3,iVar4,pFVar2,iVar3,piVar1);
          ConstructItems<FClothCollisionPrim_Convex,FClothCollisionPrim_Convex,int>
                    (pFVar2->Data,pFVar6,iVar3);
        }
      }
      pFVar2 = pFVar7 + 6;
      if (pFVar2 != pFVar8 + 6) {
        iVar3 = *(int *)&pFVar8[7].Data;
        piVar1 = (int *)((longlong)&pFVar7[7].Data + 4);
        pFVar5 = pFVar8[6].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[7].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar3,iVar4,pFVar2,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar2->Data,pFVar5,(longlong)iVar3 * 0x60);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FClothVertBoneData> @ 144645590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FClothVertBoneData>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_15060db28;
  uVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  return;
}

// ConstructForTests<FClothVertBoneData> @ 1446455c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothVertBoneData>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_15060db28;
  uVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  return;
}

// Destruct<FClothVertBoneData> @ 1446455f0

void __cdecl UE::CoreUObject::Private::Destruct<FClothVertBoneData>(void *param_1)

{
  return;
}

// Copy<FClothVertBoneData> @ 144645600

bool __cdecl
UE::CoreUObject::Private::Copy<FClothVertBoneData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
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
      uVar2 = *(undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar11 + 0x48 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x48) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x4c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FClothCollisionPrim_Box> @ 144645720

void __cdecl UE::CoreUObject::Private::Construct<FClothCollisionPrim_Box>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  return;
}

// ConstructForTests<FClothCollisionPrim_Box> @ 144645780

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_Box>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  return;
}

// Destruct<FClothCollisionPrim_Box> @ 1446457e0

void __cdecl UE::CoreUObject::Private::Destruct<FClothCollisionPrim_Box>(void *param_1)

{
  return;
}

// Copy<FClothCollisionPrim_Box> @ 1446458b0

bool __cdecl
UE::CoreUObject::Private::Copy<FClothCollisionPrim_Box>(void *param_1,void *param_2,int param_3)

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

// Construct<FClothCollisionPrim_Convex> @ 144645c50

void __cdecl UE::CoreUObject::Private::Construct<FClothCollisionPrim_Convex>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FClothCollisionPrim_Convex> @ 144645c70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_Convex>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FClothCollisionPrim_Convex> @ 144645c90

void __cdecl UE::CoreUObject::Private::Destruct<FClothCollisionPrim_Convex>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FClothCollisionPrim_ConvexFace,int>
            (*(FClothCollisionPrim_ConvexFace **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FClothCollisionPrim_Convex> @ 144645cd0

bool __cdecl
UE::CoreUObject::Private::Copy<FClothCollisionPrim_Convex>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FClothCollisionPrim_ConvexFace *pFVar5;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FClothCollisionPrim_ConvexFace,int>
                  ((FClothCollisionPrim_ConvexFace *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FClothCollisionPrim_ConvexFace *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FClothCollisionPrim_ConvexFace,FClothCollisionPrim_ConvexFace,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      pFVar7 = pFVar6 + 2;
      if (pFVar7 != pFVar2 + 2) {
        iVar3 = *(int *)&pFVar2[3].Data;
        piVar1 = (int *)((longlong)&pFVar6[3].Data + 4);
        _Src = pFVar2[2].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[3].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar7,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar7->Data,_Src,(longlong)iVar3 * 0x18);
          }
        }
      }
      *(undefined4 *)&pFVar6[4].Data = *(undefined4 *)&pFVar2[4].Data;
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FClothCollisionPrim_ConvexFace> @ 144645e30

void __cdecl UE::CoreUObject::Private::Construct<FClothCollisionPrim_ConvexFace>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FClothCollisionPrim_ConvexFace> @ 144645e50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_ConvexFace>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FClothCollisionPrim_ConvexFace> @ 144645e70

void __cdecl UE::CoreUObject::Private::Destruct<FClothCollisionPrim_ConvexFace>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FClothCollisionPrim_ConvexFace> @ 144645e90

bool __cdecl
UE::CoreUObject::Private::Copy<FClothCollisionPrim_ConvexFace>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x20);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar6 + 0x18);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar6 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar3;
      if (pFVar5 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar6 + 0x28);
        piVar1 = (int *)((longlong)param_1 + 0x2c);
        _Src = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x28) = iVar2;
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
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FClothCollisionPrim_SphereConnection> @ 144645f80

void __cdecl
UE::CoreUObject::Private::Construct<FClothCollisionPrim_SphereConnection>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FClothCollisionPrim_SphereConnection> @ 144645fc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_SphereConnection>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FClothCollisionPrim_SphereConnection> @ 144646000

void __cdecl UE::CoreUObject::Private::Destruct<FClothCollisionPrim_SphereConnection>(void *param_1)

{
  return;
}

// Copy<FClothCollisionPrim_SphereConnection> @ 144646010

bool __cdecl
UE::CoreUObject::Private::Copy<FClothCollisionPrim_SphereConnection>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FClothCollisionPrim_Sphere> @ 144646050

void __cdecl UE::CoreUObject::Private::Construct<FClothCollisionPrim_Sphere>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FClothCollisionPrim_Sphere> @ 144646080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothCollisionPrim_Sphere>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FClothCollisionPrim_Sphere> @ 1446460b0

void __cdecl UE::CoreUObject::Private::Destruct<FClothCollisionPrim_Sphere>(void *param_1)

{
  return;
}

// Copy<FClothCollisionPrim_Sphere> @ 1446460c0

bool __cdecl
UE::CoreUObject::Private::Copy<FClothCollisionPrim_Sphere>(void *param_1,void *param_2,int param_3)

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

// Construct<FClothingSimulationInstance> @ 144646140

void __cdecl UE::CoreUObject::Private::Construct<FClothingSimulationInstance>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FClothingSimulationInstance> @ 144646160

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothingSimulationInstance>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FClothingSimulationInstance> @ 144646180

void __cdecl UE::CoreUObject::Private::Destruct<FClothingSimulationInstance>(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)param_1 != (longlong *)0x0) {
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      (**(code **)(**(longlong **)param_1 + 0x60))();
    }
    (**(code **)(**(longlong **)param_1 + 0x58))();
    (**(code **)(**(longlong **)param_1 + 0x30))();
    plVar1 = *(longlong **)((longlong)param_1 + 0x18);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446461c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2c8))(plVar1,*(undefined8 *)param_1);
      return;
    }
  }
  return;
}

// CalculateClothingTeleport @ 14464a490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EClothingTeleportMode __cdecl
UE::ClothingSimulation::TeleportHelpers::CalculateClothingTeleport
          (EClothingTeleportMode param_1,TMatrix<double> *param_2,TMatrix<double> *param_3,
          bool param_4,float param_5,float param_6)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  TConsoleVariableData<bool> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  EClothingTeleportMode EVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStackY_1b8 [32];
  wchar_t *local_188;
  wchar_t **local_180;
  wchar_t *local_178;
  wchar_t **local_170;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  pTVar3 = CVarClothTeleportOverride.Ref;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar7 = IsInParallelGameThread();
  if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
    pcVar2 = (code *)swi(3);
    EVar8 = (*pcVar2)();
    return EVar8;
  }
  pTVar4 = CVarClothResetAfterTeleport.Ref;
  if (pTVar3->ShadowedValue[0] != false) {
    bVar7 = IsInParallelGameThread();
    if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
      pcVar2 = (code *)swi(3);
      EVar8 = (*pcVar2)();
      return EVar8;
    }
    pTVar5 = CVarClothTeleportDistanceThreshold.Ref;
    param_4 = pTVar4->ShadowedValue[0];
    bVar7 = IsInParallelGameThread();
    if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
      pcVar2 = (code *)swi(3);
      EVar8 = (*pcVar2)();
      return EVar8;
    }
    pTVar6 = CVarClothTeleportRotationThreshold.Ref;
    fVar1 = pTVar5->ShadowedValue[0];
    if (fVar1 <= 0.0) {
      param_5 = 0.0;
    }
    else {
      param_5 = fVar1 * fVar1;
    }
    bVar7 = IsInParallelGameThread();
    if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
       (bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
      pcVar2 = (code *)swi(3);
      EVar8 = (*pcVar2)();
      return EVar8;
    }
    param_6 = cosf(pTVar6->ShadowedValue[0] * __real_3c8efa35);
  }
  fVar1 = __real_3f800000;
  if (((0.0 < param_5) && (param_1 == None)) &&
     (dVar11 = param_2->M[3][1] - param_3->M[3][1], dVar9 = param_2->M[3][2] - param_3->M[3][2],
     dVar10 = param_2->M[3][0] - param_3->M[3][0],
     param_5 < (float)(dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9))) {
    param_1 = (param_4 != false) + Teleport;
  }
  if ((param_6 < __real_3f800000) && (param_1 == None)) {
    dVar9 = param_3->M[0][0];
    if (((((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3e45798ee0000000) &&
         ((((dVar9 = param_3->M[0][1],
            (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee0000000 &&
            (dVar9 = param_3->M[0][2],
            (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee0000000)) &&
           (dVar9 = param_3->M[1][0],
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3e45798ee0000000)) &&
          ((dVar9 = param_3->M[1][1],
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3e45798ee0000000 &&
           (dVar9 = param_3->M[1][2],
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3e45798ee0000000)))))) &&
        (dVar9 = param_3->M[2][0],
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000)) &&
       ((dVar9 = param_3->M[2][1],
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000 &&
        (dVar9 = param_3->M[2][2],
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000)))) {
      local_188 = 
      L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
      ;
      if (1 < (byte)LogUnrealMath._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
      }
      local_180 = &local_188;
      `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_180);
    }
    bVar7 = FMath::MatrixInverse(&local_e8,param_3);
    if (!bVar7) {
      local_178 = 
      L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
      ;
      if (1 < (byte)LogUnrealMath._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
      }
      local_170 = &local_178;
      `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_170);
    }
    VectorMatrixMultiply(&local_168,param_2,&local_e8);
    if (((float)(local_168.M[0][0] + local_168.M[1][1] + local_168.M[2][2]) - fVar1) *
        __real_3f000000 < param_6) {
      param_1 = (param_4 != false) + Teleport;
    }
  }
  return param_1;
}

