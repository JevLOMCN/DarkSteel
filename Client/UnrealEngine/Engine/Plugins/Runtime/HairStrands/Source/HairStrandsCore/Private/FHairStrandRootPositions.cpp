// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// FHairStrandRootPositions @ 14dfad7d0

FHairStrandRootPositions * __thiscall
GroomBinding_Mesh::FHairStrandRootPositions::FHairStrandRootPositions
          (FHairStrandRootPositions *this,FHairStrandsBulkData *param_1)

{
  int *piVar1;
  ushort *puVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  uint *puVar14;
  long64 lVar15;
  FHairStrandRootPositions *pFVar16;
  void *pvVar17;
  ulonglong uVar18;
  float fVar19;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_60;
  
  piVar1 = &(this->RootPositions).ArrayMax;
  (this->RootPositions).ArrayNum = 0;
  *piVar1 = 0;
  *(undefined8 *)&(this->BoundingBox).Min.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Min.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Max.field0_0x0 + 4) = 0;
  (this->RootPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  uVar5 = (param_1->Header).CurveCount;
  uVar18 = (ulonglong)uVar5;
  uVar6 = (param_1->Header).PointCount;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar18);
  }
  if (*piVar1 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar5,(ForAnyElementType *)this,(this->RootPositions).ArrayNum,piVar1);
  }
  dVar9 = ((param_1->Header).BoundingBox.Min.field0_0x0._s_0.X +
          (param_1->Header).BoundingBox.Max.field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar10 = ((param_1->Header).BoundingBox.Max.field0_0x0._s_0.Y +
           (param_1->Header).BoundingBox.Min.field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar11 = ((param_1->Header).BoundingBox.Min.field0_0x0._s_0.Z +
           (param_1->Header).BoundingBox.Max.field0_0x0._s_0.Z) * __real_3fe0000000000000;
  puVar14 = FBulkData::LockReadOnly((FBulkData *)&(param_1->Data).Curves.Data);
  lVar15 = FBulkData::GetBulkDataSize((FBulkData *)&(param_1->Data).Curves.Data);
  if ((lVar15 != uVar18 * 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Source.Data.Curves.GetBulkDataSize() == NumCurves * sizeof(FHairStrandsCurveFormat::Type)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                          ,0xba,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pFVar16 = (FHairStrandRootPositions *)(*pcVar8)();
    return pFVar16;
  }
  pvVar17 = FBulkData::LockReadOnly((FBulkData *)&(param_1->Data).Positions.Data);
  lVar15 = FBulkData::GetBulkDataSize((FBulkData *)&(param_1->Data).Positions.Data);
  if ((lVar15 != (ulonglong)uVar6 << 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Source.Data.Positions.GetBulkDataSize() == NumPoints * sizeof(FHairStrandsPositionFormat::Type)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                          ,0xbd,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pFVar16 = (FHairStrandRootPositions *)(*pcVar8)();
    return pFVar16;
  }
  if (uVar5 != 0) {
    do {
      puVar2 = (ushort *)((longlong)pvVar17 + (ulonglong)(*puVar14 & 0xffffff) * 8);
      fVar19 = FGenericPlatformMath::LoadHalf(puVar2);
      local_88 = (float)((double)fVar19 + dVar9);
      fVar19 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
      fStack_84 = (float)((double)fVar19 + dVar10);
      fVar19 = FGenericPlatformMath::LoadHalf(puVar2 + 2);
      pFVar7 = (this->RootPositions).AllocatorInstance.Data;
      local_80 = (float)((double)fVar19 + dVar11);
      if (((pFVar7 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar7 + (longlong)*piVar1 * 0xc)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar16 = (FHairStrandRootPositions *)(*pcVar8)();
        return pFVar16;
      }
      iVar13 = (this->RootPositions).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,(ForAnyElementType *)this,piVar1);
      }
      pFVar7 = (this->RootPositions).AllocatorInstance.Data;
      puVar14 = puVar14 + 1;
      (this->RootPositions).ArrayNum = iVar13 + 1;
      *(ulonglong *)(pFVar7 + (longlong)iVar13 * 0xc) = CONCAT44(fStack_84,local_88);
      *(float *)(pFVar7 + (longlong)iVar13 * 0xc + 8) = local_80;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  FBulkData::Unlock((FBulkData *)&(param_1->Data).Positions.Data);
  FBulkData::Unlock((FBulkData *)&(param_1->Data).Curves.Data);
  dVar9 = (param_1->Header).BoundingBox.Min.field0_0x0._s_0.Y;
  dVar10 = (param_1->Header).BoundingBox.Min.field0_0x0._s_0.Z;
  dVar11 = (param_1->Header).BoundingBox.Max.field0_0x0._s_0.X;
  dVar3 = (param_1->Header).BoundingBox.Max.field0_0x0._s_0.Y;
  dVar4 = (param_1->Header).BoundingBox.Max.field0_0x0._s_0.Z;
  (this->BoundingBox).Min.field0_0x0._s_0.X =
       (float)(param_1->Header).BoundingBox.Min.field0_0x0._s_0.X;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = (float)dVar9;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = (float)dVar10;
  (this->BoundingBox).Max.field0_0x0._s_0.X = (float)dVar11;
  *(ulonglong *)((longlong)&(this->BoundingBox).Max.field0_0x0 + 4) =
       CONCAT44((float)dVar4,(float)dVar3);
  (this->BoundingBox).IsValid = 1;
  (this->BoundingBox).Pad[0] = local_60._1_1_;
  (this->BoundingBox).Pad[1] = local_60._2_1_;
  (this->BoundingBox).Pad[2] = local_60._3_1_;
  return this;
}

