// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// operator() @ 1446c4980

FRHITextureSubresourceInitializer * __thiscall
`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>::operator()
          (void *this,FRHITextureSubresourceInitializer *__return_storage_ptr__,
          FSubresourceIndex *param_1)

{
  EPixelFormat EVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  FRHITextureDesc *pFVar6;
  ulong64 uVar7;
  byte bVar8;
  longlong lVar9;
  ulong64 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulong64 uVar19;
  
  pFVar6 = (FRHITextureDesc *)(**(code **)(**(longlong **)this + 0x20))();
  iVar2 = param_1->MipIndex;
  uVar13 = 0;
  if ((pFVar6->Dimension == TextureCube) || (bVar4 = false, pFVar6->Dimension == TextureCubeArray))
  {
    bVar4 = true;
  }
  lVar9 = 1;
  if (bVar4) {
    lVar9 = 6;
  }
  lVar9 = (longlong)param_1->FaceIndex + lVar9 * param_1->ArrayIndex;
  uVar7 = uVar13;
  if (lVar9 != 0) {
    uVar7 = UE::RHITextureUtils::CalculateTexturePlaneSize(pFVar6);
  }
  uVar15 = uVar13;
  uVar19 = uVar13;
  if (-1 < iVar2) {
    EVar1 = pFVar6->Format;
    uVar14 = uVar13;
    uVar10 = uVar13;
    do {
      iVar16 = (int)uVar10;
      bVar8 = (byte)uVar10;
      uVar11 = (uint)(pFVar6->Extent).field0_0x0._s_0.X >> (bVar8 & 0x1f);
      uVar5 = 1;
      if (1 < uVar11) {
        uVar5 = uVar11;
      }
      uVar12 = (uint)(pFVar6->Extent).field0_0x0._s_0.Y >> (bVar8 & 0x1f);
      uVar11 = 1;
      if (1 < uVar12) {
        uVar11 = uVar12;
      }
      uVar13 = CONCAT44(0 >> (bVar8 & 0x1f),(uVar11 - 1) + GPixelFormats[EVar1].BlockSizeY) /
               (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY;
      uVar12 = (uint)(pFVar6->Depth >> (bVar8 & 0x1f));
      uVar11 = 1;
      if (1 < uVar12) {
        uVar11 = uVar12;
      }
      iVar18 = (int)(CONCAT44(0 >> (bVar8 & 0x1f),(uVar5 - 1) + GPixelFormats[EVar1].BlockSizeX) /
                    (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeX);
      if (iVar18 == 0) {
        iVar18 = 1;
      }
      uVar5 = (uint)(CONCAT44(0 >> (bVar8 & 0x1f),(uVar11 - 1) + GPixelFormats[EVar1].BlockSizeZ) /
                    (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeZ);
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      uVar17 = uVar13 & 0xffffffff;
      if ((int)uVar13 == 0) {
        uVar17 = 1;
      }
      uVar13 = (ulonglong)(uint)(iVar18 * GPixelFormats[EVar1].BlockBytes);
      uVar10 = uVar5 * uVar17 * uVar13;
      if (iVar16 != iVar2) {
        uVar13 = uVar14;
      }
      if (iVar16 != iVar2) {
        uVar19 = uVar10 + uVar19;
        uVar10 = uVar15;
      }
      uVar15 = uVar10;
      uVar10 = (ulong64)(iVar16 + 1U);
      uVar14 = uVar13;
    } while ((int)(iVar16 + 1U) <= iVar2);
  }
  lVar3 = *(longlong *)((longlong)this + 8);
  __return_storage_ptr__->Stride = uVar13;
  __return_storage_ptr__->Size = uVar15;
  __return_storage_ptr__->Data = (void *)(lVar3 + uVar19 + uVar7 * lVar9);
  return __return_storage_ptr__;
}

