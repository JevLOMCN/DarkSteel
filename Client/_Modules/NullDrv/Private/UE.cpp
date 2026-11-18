// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 3

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_> @ 1446c4080

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<EPixelFormat> *param_5,
          int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_> @ 1446c4120

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
          (ushort param_1,ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *param_2,
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
    ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// CalculateTexturePlaneSize @ 1446c5970

ulong64 __cdecl UE::RHITextureUtils::CalculateTexturePlaneSize(FRHITextureDesc *param_1)

{
  EPixelFormat EVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  
  uVar6 = 0;
  if (param_1->NumMips != 0) {
    EVar1 = param_1->Format;
    uVar10 = uVar6;
    do {
      bVar3 = (byte)uVar10;
      uVar4 = (uint)(param_1->Extent).field0_0x0._s_0.X >> (bVar3 & 0x1f);
      uVar9 = 1;
      if (1 < uVar4) {
        uVar9 = uVar4;
      }
      uVar5 = (uint)(param_1->Extent).field0_0x0._s_0.Y >> (bVar3 & 0x1f);
      uVar4 = 1;
      if (1 < uVar5) {
        uVar4 = uVar5;
      }
      uVar2 = CONCAT44(0 >> (bVar3 & 0x1f),(uVar4 - 1) + GPixelFormats[EVar1].BlockSizeY) /
              (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY;
      uVar5 = (uint)(param_1->Depth >> (bVar3 & 0x1f));
      uVar4 = 1;
      if (1 < uVar5) {
        uVar4 = uVar5;
      }
      uVar4 = ((uVar4 - 1) + GPixelFormats[EVar1].BlockSizeZ) /
              (uint)GPixelFormats[EVar1].BlockSizeZ;
      iVar8 = (int)(CONCAT44(0 >> (bVar3 & 0x1f),(uVar9 - 1) + GPixelFormats[EVar1].BlockSizeX) /
                   (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeX);
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      uVar7 = uVar2 & 0xffffffff;
      if ((int)uVar2 == 0) {
        uVar7 = 1;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulong64)uVar9;
      uVar6 = uVar6 + (ulonglong)(uint)(iVar8 * GPixelFormats[EVar1].BlockBytes) * (ulonglong)uVar4
                      * uVar7;
    } while (uVar9 < param_1->NumMips);
  }
  return uVar6;
}

