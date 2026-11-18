// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// ValidateCopyTexture @ 145cf4060

void __cdecl
FValidationRHIUtils::ValidateCopyTexture
          (FRHITexture *param_1,FRHITexture *param_2,FRHICopyTextureInfo *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FRHITexture *pFVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int local_58;
  
  if ((param_1 == (FRHITexture *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                         ,0x11,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 == (FRHITexture *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                         ,0x12,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  bVar2 = *(byte *)(lVar9 + 0x33);
  lVar9 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  bVar3 = *(byte *)(lVar9 + 0x33);
  if ((bVar2 != bVar3) &&
     ((((1 < GPixelFormats[bVar2].BlockSizeX || (GPixelFormats[bVar3].BlockSizeX < 2)) ||
       (GPixelFormats[bVar2].BlockBytes != GPixelFormats[bVar3].BlockBytes)) &&
      (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("bValidCopyFormats",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                          ,0x1c,
                          L"Some RHIs do not support this format conversion by the GPU for transfer operations!"
                         ), bVar5)))) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar2 = (byte)param_3->SourceMipIndex;
  lVar9 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  uVar14 = (uint)(*(ushort *)(lVar9 + 0x2c) >> (bVar2 & 0x1f));
  bVar3 = (byte)param_3->DestMipIndex;
  iVar6 = *(int *)(lVar9 + 0x24) >> (bVar2 & 0x1f);
  iVar12 = *(int *)(lVar9 + 0x28) >> (bVar2 & 0x1f);
  iVar11 = 1;
  if (1 < iVar6) {
    iVar11 = iVar6;
  }
  iVar6 = 1;
  if (1 < iVar12) {
    iVar6 = iVar12;
  }
  uVar7 = 1;
  if (1 < uVar14) {
    uVar7 = uVar14;
  }
  lVar9 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  uVar1 = *(undefined8 *)&(param_3->Size).field0_0x0;
  uVar14 = (param_3->Size).field0_0x0._s_0.Z;
  uVar15 = (uint)(*(ushort *)(lVar9 + 0x2c) >> (bVar3 & 0x1f));
  iVar8 = *(int *)(lVar9 + 0x24) >> (bVar3 & 0x1f);
  iVar13 = *(int *)(lVar9 + 0x28) >> (bVar3 & 0x1f);
  iVar12 = 1;
  if (1 < iVar8) {
    iVar12 = iVar8;
  }
  iVar8 = 1;
  if (1 < iVar13) {
    iVar8 = iVar13;
  }
  uVar16 = 1;
  if (1 < uVar15) {
    uVar16 = uVar15;
  }
  local_58 = (int)uVar1;
  iVar13 = (int)((ulonglong)uVar1 >> 0x20);
  if (((local_58 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) &&
      (iVar13 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) &&
     (uVar14 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) {
    uVar14 = uVar7;
    local_58 = iVar11;
    iVar13 = iVar6;
  }
  if (((iVar12 < local_58) || (iVar8 < iVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopySize.X <= DestSize.X && CopySize.Y <= DestSize.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                         ,0x26,
                         L"Some RHIs can\'t perform scaling operations [%dx%d to %dx%d] during copies!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((((param_3->SourcePosition).field0_0x0._s_0.X < 0) ||
       ((param_3->SourcePosition).field0_0x0._s_0.Y < 0)) ||
      ((param_3->SourcePosition).field0_0x0._s_0.Z < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyInfo.SourcePosition.X >= 0 && CopyInfo.SourcePosition.Y >= 0 && CopyInfo.SourcePosition.Z >= 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                         ,0x28,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((iVar11 < (param_3->SourcePosition).field0_0x0._s_0.X + local_58) ||
      (iVar6 < (param_3->SourcePosition).field0_0x0._s_0.Y + iVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyInfo.SourcePosition.X + CopySize.X <= SrcSize.X && CopyInfo.SourcePosition.Y + CopySize.Y <= SrcSize.Y"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                         ,0x29,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((((param_3->DestPosition).field0_0x0._s_0.X < 0) ||
       ((param_3->DestPosition).field0_0x0._s_0.Y < 0)) ||
      ((param_3->DestPosition).field0_0x0._s_0.Z < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyInfo.DestPosition.X >= 0 && CopyInfo.DestPosition.Y >= 0 && CopyInfo.DestPosition.Z >= 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                         ,0x2b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((iVar12 < (param_3->DestPosition).field0_0x0._s_0.X + local_58) ||
      (iVar8 < (param_3->DestPosition).field0_0x0._s_0.Y + iVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyInfo.DestPosition.X + CopySize.X <= DestSize.X && CopyInfo.DestPosition.Y + CopySize.Y <= DestSize.Y"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                         ,0x2c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar10 = (FRHITexture *)0x0;
  if ((param_1->TextureDesc).Dimension == Texture3D) {
    pFVar10 = param_1;
  }
  if (pFVar10 != (FRHITexture *)0x0) {
    pFVar10 = (FRHITexture *)0x0;
    if ((param_2->TextureDesc).Dimension == Texture3D) {
      pFVar10 = param_2;
    }
    if (pFVar10 != (FRHITexture *)0x0) {
      if (((int)uVar7 < (int)((param_3->SourcePosition).field0_0x0._s_0.Z + uVar14)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CopyInfo.SourcePosition.Z + CopySize.Z <= SrcSize.Z",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                             ,0x30,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((int)uVar16 < (int)((param_3->DestPosition).field0_0x0._s_0.Z + uVar14)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CopyInfo.DestPosition.Z + CopySize.Z <= DestSize.Z",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationUtils.h"
                             ,0x31,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

