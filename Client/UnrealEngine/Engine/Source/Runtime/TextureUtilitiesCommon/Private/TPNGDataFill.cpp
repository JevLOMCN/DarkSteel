// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TextureUtilitiesCommon
// Functions: 8

// operator() @ 14c93cd40

void __thiscall
`UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::
FillFromNearNeighbors'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  void *_Dst;
  code *pcVar1;
  ForAnyElementType FVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3> *this_00;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  lVar7 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x10);
  local_28.Data = (FScriptContainerElement *)0x0;
  lVar8 = (longlong)(**(int **)this * param_1);
  lVar6 = lVar8 + **(int **)this;
  if (lVar6 < lVar7) {
    lVar7 = lVar6;
  }
  local_20 = 0;
  uVar5 = *(uint *)(*(longlong *)((longlong)this + 8) + 8);
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  else {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar5,&local_28,(int *)&local_20,(int *)((longlong)&local_20 + 4));
    memset(local_28.Data + (longlong)iVar4 * 4,0,(longlong)(int)uVar5 << 2);
    FVar2.Data = local_28.Data;
    if (0 < (int)local_20) goto joined_r0x00014c93ce16;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  FVar2.Data = local_28.Data;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
joined_r0x00014c93ce16:
  for (; _Src.Data = local_28.Data, local_28.Data = FVar2.Data, lVar8 < lVar7; lVar8 = lVar8 + 1) {
    this_00 = *(TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3> **)((longlong)this + 8);
    lVar6 = 0;
    _Dst = (void *)(**(longlong **)((longlong)this + 0x10) + this_00->TextureWidth * lVar8 * 4);
    if (0 < this_00->TextureWidth) {
      do {
        uVar5 = *(uint *)((longlong)_Dst + lVar6 * 4);
        if (uVar5 == this_00->WhiteWithZeroAlpha) {
          uVar5 = UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::
                  GetFilledFromNearNeighbors(this_00,lVar6,lVar8);
        }
        *(uint *)(_Src.Data + lVar6 * 4) = uVar5;
        lVar6 = lVar6 + 1;
        this_00 = *(TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3> **)((longlong)this + 8);
      } while (lVar6 < this_00->TextureWidth);
    }
    memcpy(_Dst,_Src.Data,this_00->TextureWidth << 2);
    FVar2.Data = local_28.Data;
    local_28.Data = _Src.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return;
}

// operator() @ 14c93ced0

void __thiscall
`UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::
FillFromNearNeighbors'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  void *_Dst;
  uint uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3> *this_00;
  ulong64 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  lVar8 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x10);
  local_28.Data = (FScriptContainerElement *)0x0;
  lVar9 = (longlong)(**(int **)this * param_1);
  lVar7 = lVar9 + **(int **)this;
  if (lVar7 < lVar8) {
    lVar8 = lVar7;
  }
  local_20 = 0;
  uVar1 = *(uint *)(*(longlong *)((longlong)this + 8) + 8);
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
  }
  else {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar1,&local_28,(int *)&local_20,(int *)((longlong)&local_20 + 4));
    memset(local_28.Data + (longlong)iVar5 * 8,0,(longlong)(int)uVar1 << 3);
    FVar3.Data = local_28.Data;
    if (0 < (int)local_20) goto joined_r0x00014c93cfa6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  FVar3.Data = local_28.Data;
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
joined_r0x00014c93cfa6:
  for (; _Src.Data = local_28.Data, local_28.Data = FVar3.Data, lVar9 < lVar8; lVar9 = lVar9 + 1) {
    this_00 = *(TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3> **)((longlong)this + 8);
    lVar7 = 0;
    _Dst = (void *)(**(longlong **)((longlong)this + 0x10) + this_00->TextureWidth * lVar9 * 8);
    if (0 < this_00->TextureWidth) {
      do {
        uVar6 = *(ulong64 *)((longlong)_Dst + lVar7 * 8);
        if (uVar6 == this_00->WhiteWithZeroAlpha) {
          uVar6 = UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>
                  ::GetFilledFromNearNeighbors(this_00,lVar7,lVar9);
        }
        *(ulong64 *)(_Src.Data + lVar7 * 8) = uVar6;
        lVar7 = lVar7 + 1;
        this_00 = *(TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3> **)((longlong)this + 8);
      } while (lVar7 < this_00->TextureWidth);
    }
    memcpy(_Dst,_Src.Data,this_00->TextureWidth << 3);
    FVar3.Data = local_28.Data;
    local_28.Data = _Src.Data;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// GetFilledFromNearNeighbors @ 14c93d720

uint __thiscall
UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::
GetFilledFromNearNeighbors
          (TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3> *this,long64 param_1,long64 param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColor FVar5;
  longlong lVar6;
  undefined4 extraout_var;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  FLinearColor_u_0 local_98 [6];
  
  puVar1 = this->SourceData;
  lVar15 = param_1 + -4;
  if (param_1 + -4 < 0) {
    lVar15 = 0;
  }
  lVar9 = param_2 + -4;
  if (param_2 + -4 < 0) {
    lVar9 = 0;
  }
  fVar20 = 0.0;
  lVar14 = this->TextureWidth + -1;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  lVar10 = param_1 + 4;
  if (lVar14 < param_1 + 4) {
    lVar10 = lVar14;
  }
  lVar6 = this->TextureHeight + -1;
  lVar14 = param_2 + 4;
  if (lVar6 < param_2 + 4) {
    lVar14 = lVar6;
  }
  if ((*(uint *)(puVar1 + (this->TextureWidth * param_2 + param_1) * 4) != this->WhiteWithZeroAlpha)
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("ImageColors[ CenterX + CenterY * TextureWidth ] == WhiteWithZeroAlpha",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                            ,0x1af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (lVar9 <= lVar14) {
    do {
      lVar6 = -(lVar9 - param_2);
      if (lVar6 < 0) {
        lVar6 = lVar9 - param_2;
      }
      if (lVar15 <= lVar10) {
        lVar12 = lVar15;
        if (3 < (lVar10 - lVar15) + 1) {
          lVar11 = (lVar15 - param_1) + 2;
          lVar13 = ((lVar10 - lVar15) - 3U >> 2) + 1;
          puVar8 = (uint *)(puVar1 + (lVar9 * this->TextureWidth + 2 + lVar15) * 4);
          lVar12 = lVar15 + lVar13 * 4;
          do {
            uVar4 = puVar8[-2];
            fVar16 = (float)(uVar4 >> 0x18) * __real_3b808081;
            if (fVar16 != 0.0) {
              lVar7 = -(lVar11 + -2);
              if (lVar7 < 0) {
                lVar7 = lVar11 + -2;
              }
              fVar16 = fVar16 * this->NearNeighborWeights[lVar6][lVar7];
              fVar20 = fVar20 + fVar16;
              fVar17 = fVar17 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 0x10 & 0xff];
              fVar18 = fVar18 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 8 & 0xff];
              fVar19 = fVar19 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 & 0xff];
            }
            uVar4 = puVar8[-1];
            fVar16 = (float)(uVar4 >> 0x18) * __real_3b808081;
            if (fVar16 != 0.0) {
              lVar7 = -(lVar11 + -1);
              if (lVar7 < 0) {
                lVar7 = lVar11 + -1;
              }
              fVar16 = fVar16 * this->NearNeighborWeights[lVar6][lVar7];
              fVar20 = fVar20 + fVar16;
              fVar17 = fVar17 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 0x10 & 0xff];
              fVar18 = fVar18 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 8 & 0xff];
              fVar19 = fVar19 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 & 0xff];
            }
            uVar4 = *puVar8;
            fVar16 = (float)(uVar4 >> 0x18) * __real_3b808081;
            if (fVar16 != 0.0) {
              lVar7 = -lVar11;
              if (-lVar11 < 0) {
                lVar7 = lVar11;
              }
              fVar16 = fVar16 * this->NearNeighborWeights[lVar6][lVar7];
              fVar20 = fVar20 + fVar16;
              fVar17 = fVar17 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 0x10 & 0xff];
              fVar18 = fVar18 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 8 & 0xff];
              fVar19 = fVar19 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 & 0xff];
            }
            uVar4 = puVar8[1];
            fVar16 = (float)(uVar4 >> 0x18) * __real_3b808081;
            if (fVar16 != 0.0) {
              lVar7 = -(lVar11 + 1);
              if (lVar7 < 0) {
                lVar7 = lVar11 + 1;
              }
              fVar16 = fVar16 * this->NearNeighborWeights[lVar6][lVar7];
              fVar20 = fVar20 + fVar16;
              fVar17 = fVar17 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 0x10 & 0xff];
              fVar18 = fVar18 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 8 & 0xff];
              fVar19 = fVar19 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 & 0xff];
            }
            puVar8 = puVar8 + 4;
            lVar11 = lVar11 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          if (lVar10 < lVar12) goto LAB_14c93db10;
        }
        puVar8 = (uint *)(puVar1 + (lVar9 * this->TextureWidth + lVar12) * 4);
        do {
          uVar4 = *puVar8;
          fVar16 = (float)(uVar4 >> 0x18) * __real_3b808081;
          if (fVar16 != 0.0) {
            lVar11 = -(lVar12 - param_1);
            if (lVar11 < 0) {
              lVar11 = lVar12 - param_1;
            }
            fVar16 = fVar16 * this->NearNeighborWeights[lVar6][lVar11];
            fVar20 = fVar20 + fVar16;
            fVar17 = fVar17 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 0x10 & 0xff];
            fVar18 = fVar18 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 >> 8 & 0xff];
            fVar19 = fVar19 + fVar16 * FLinearColor::sRGBToLinearTable[uVar4 & 0xff];
          }
          lVar12 = lVar12 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar12 <= lVar10);
      }
LAB_14c93db10:
      lVar9 = lVar9 + 1;
    } while (lVar9 <= lVar14);
    if (fVar20 != 0.0) {
      fVar20 = __real_3f800000 / fVar20;
      local_98[0]._s_0.A = 0.0;
      local_98[0]._0_4_ = fVar17 * fVar20;
      local_98[0]._4_4_ = fVar18 * fVar20;
      local_98[0]._8_4_ = fVar19 * fVar20;
      FVar5 = FLinearColor::ToFColorSRGB((FLinearColor *)&local_98[0]._s_0);
      return *(uint *)CONCAT44(extraout_var,FVar5.field0_0x0);
    }
  }
  return this->WhiteWithZeroAlpha;
}

// GetFilledFromNearNeighbors @ 14c93dbb0

ulong64 __thiscall
UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::
GetFilledFromNearNeighbors
          (TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3> *this,long64 param_1,long64 param_2
          )

{
  ushort *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulong64 uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar1 = this->SourceData;
  lVar11 = param_1 + -4;
  if (param_1 + -4 < 0) {
    lVar11 = 0;
  }
  fVar20 = 0.0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  lVar12 = param_2 + -4;
  if (param_2 + -4 < 0) {
    lVar12 = 0;
  }
  fVar19 = 0.0;
  lVar15 = this->TextureWidth + -1;
  lVar10 = param_1 + 4;
  if (lVar15 < param_1 + 4) {
    lVar10 = lVar15;
  }
  lVar5 = this->TextureHeight + -1;
  lVar15 = param_2 + 4;
  if (lVar5 < param_2 + 4) {
    lVar15 = lVar5;
  }
  if ((*(ulong64 *)(puVar1 + (this->TextureWidth * param_2 + param_1) * 4) !=
       this->WhiteWithZeroAlpha) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImageColors[ CenterX + CenterY * TextureWidth ] == WhiteWithZeroAlpha",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                         ,0x1af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  if (lVar12 <= lVar15) {
    do {
      lVar5 = -(lVar12 - param_2);
      if (lVar5 < 0) {
        lVar5 = lVar12 - param_2;
      }
      if (lVar11 <= lVar10) {
        lVar13 = lVar11;
        if (3 < (lVar10 - lVar11) + 1) {
          lVar8 = (lVar11 - param_1) + 2;
          lVar14 = ((lVar10 - lVar11) - 3U >> 2) + 1;
          puVar9 = puVar1 + (lVar12 * this->TextureWidth + 2 + lVar11) * 4;
          lVar13 = lVar11 + lVar14 * 4;
          do {
            uVar2 = *(undefined8 *)(puVar9 + -8);
            fVar16 = (float)(ushort)((ulonglong)uVar2 >> 0x30) * __real_37800080;
            if (fVar16 != 0.0) {
              lVar7 = -(lVar8 + -2);
              if (lVar7 < 0) {
                lVar7 = lVar8 + -2;
              }
              fVar16 = fVar16 * this->NearNeighborWeights[lVar5][lVar7];
              fVar20 = fVar20 + fVar16;
              fVar18 = fVar18 + fVar16 * (float)((uint)((ulonglong)uVar2 >> 0x10) & 0xffff) *
                                __real_37800080;
              fVar17 = fVar17 + fVar16 * (float)((uint)uVar2 & 0xffff) * __real_37800080;
              fVar19 = fVar19 + fVar16 * (float)((uint)((ulonglong)uVar2 >> 0x20) & 0xffff) *
                                __real_37800080;
            }
            uVar2 = *(undefined8 *)(puVar9 + -4);
            fVar16 = (float)(ushort)((ulonglong)uVar2 >> 0x30) * __real_37800080;
            if (fVar16 != 0.0) {
              lVar7 = -(lVar8 + -1);
              if (lVar7 < 0) {
                lVar7 = lVar8 + -1;
              }
              fVar16 = fVar16 * this->NearNeighborWeights[lVar5][lVar7];
              fVar20 = fVar20 + fVar16;
              fVar18 = fVar18 + fVar16 * (float)((uint)((ulonglong)uVar2 >> 0x10) & 0xffff) *
                                __real_37800080;
              fVar17 = fVar17 + fVar16 * (float)((uint)uVar2 & 0xffff) * __real_37800080;
              fVar19 = fVar19 + fVar16 * (float)((uint)((ulonglong)uVar2 >> 0x20) & 0xffff) *
                                __real_37800080;
            }
            uVar2 = *(undefined8 *)puVar9;
            fVar16 = (float)(ushort)((ulonglong)uVar2 >> 0x30) * __real_37800080;
            if (fVar16 != 0.0) {
              lVar7 = -lVar8;
              if (-lVar8 < 0) {
                lVar7 = lVar8;
              }
              fVar16 = fVar16 * this->NearNeighborWeights[lVar5][lVar7];
              fVar20 = fVar20 + fVar16;
              fVar17 = fVar17 + (float)((uint)uVar2 & 0xffff) * fVar16 * __real_37800080;
              fVar18 = fVar18 + (float)((uint)((ulonglong)uVar2 >> 0x10) & 0xffff) * fVar16 *
                                __real_37800080;
              fVar19 = fVar19 + (float)((uint)((ulonglong)uVar2 >> 0x20) & 0xffff) * fVar16 *
                                __real_37800080;
            }
            uVar2 = *(undefined8 *)(puVar9 + 4);
            fVar16 = (float)(ushort)((ulonglong)uVar2 >> 0x30) * __real_37800080;
            if (fVar16 != 0.0) {
              lVar7 = -(lVar8 + 1);
              if (lVar7 < 0) {
                lVar7 = lVar8 + 1;
              }
              fVar16 = fVar16 * this->NearNeighborWeights[lVar5][lVar7];
              fVar20 = fVar20 + fVar16;
              fVar19 = fVar19 + (float)((uint)((ulonglong)uVar2 >> 0x20) & 0xffff) * fVar16 *
                                __real_37800080;
              fVar17 = fVar17 + fVar16 * (float)((uint)uVar2 & 0xffff) * __real_37800080;
              fVar18 = fVar18 + fVar16 * (float)((uint)((ulonglong)uVar2 >> 0x10) & 0xffff) *
                                __real_37800080;
            }
            puVar9 = puVar9 + 0x10;
            lVar8 = lVar8 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          if (lVar10 < lVar13) goto LAB_14c93dfe2;
        }
        puVar9 = puVar1 + (lVar12 * this->TextureWidth + lVar13) * 4;
        do {
          uVar2 = *(undefined8 *)puVar9;
          fVar16 = (float)(ushort)((ulonglong)uVar2 >> 0x30) * __real_37800080;
          if (fVar16 != 0.0) {
            lVar8 = -(lVar13 - param_1);
            if (lVar8 < 0) {
              lVar8 = lVar13 - param_1;
            }
            fVar16 = fVar16 * this->NearNeighborWeights[lVar5][lVar8];
            fVar20 = fVar20 + fVar16;
            fVar18 = fVar18 + fVar16 * (float)((uint)((ulonglong)uVar2 >> 0x10) & 0xffff) *
                              __real_37800080;
            fVar17 = fVar17 + fVar16 * (float)((uint)uVar2 & 0xffff) * __real_37800080;
            fVar19 = fVar19 + fVar16 * (float)((uint)((ulonglong)uVar2 >> 0x20) & 0xffff) *
                              __real_37800080;
          }
          lVar13 = lVar13 + 1;
          puVar9 = puVar9 + 4;
        } while (lVar13 <= lVar10);
      }
LAB_14c93dfe2:
      lVar12 = lVar12 + 1;
    } while (lVar12 <= lVar15);
    if (fVar20 != 0.0) {
      fVar20 = __real_3f800000 / fVar20;
      fVar19 = fVar19 * fVar20;
      fVar18 = fVar18 * fVar20;
      fVar17 = fVar17 * fVar20;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if (__real_3f800000 <= fVar19) {
        fVar19 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar18) {
        fVar18 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar17) {
        fVar17 = __real_3f800000;
      }
      return ((ulonglong)((int)(fVar18 * __real_477fff00 + __real_3f000000) & 0xffff) |
             (ulonglong)((int)(fVar19 * __real_477fff00 + __real_3f000000) & 0xffff) << 0x10) <<
             0x10 | (ulonglong)((int)(fVar17 * __real_477fff00 + __real_3f000000) & 0xffff);
    }
  }
  return this->WhiteWithZeroAlpha;
}

// ProcessData @ 14c93eed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::ProcessData
          (TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3> *this,bool param_1)

{
  uchar *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  FStaticBasicLogRecord *pFVar7;
  longlong lVar8;
  uchar *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  <lambda_1> local_res8 [8];
  uchar *local_res18 [2];
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  <lambda_1> **local_40;
  <lambda_1> *local_38;
  TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3> *local_30;
  uchar **local_28;
  
  bVar3 = false;
  bVar2 = false;
  lVar10 = 0;
  if (this->TextureHeight < 1) {
    return;
  }
  lVar8 = this->TextureWidth;
  puVar9 = this->SourceData;
  do {
    lVar5 = 0;
    if (0 < lVar8) {
      do {
        if (*(uint *)(puVar9 + lVar5 * 4) < 0xff000000) {
          if (*(uint *)(puVar9 + lVar5 * 4) == this->WhiteWithZeroAlpha) {
            bVar3 = true;
          }
          else {
            bVar2 = true;
            if (!param_1) {
              if ((byte)LogCore._0_1_ < 5) {
                return;
              }
              Logging::Private::BasicLog<5>
                        (&`public:_void___cdecl_UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::ProcessData(bool)___ptr64'
                          ::__l19::LOG_Static,(FLogCategoryBase *)&LogCore);
              return;
            }
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar8);
    }
    lVar10 = lVar10 + 1;
    puVar9 = puVar9 + lVar8 * 4;
  } while (lVar10 < this->TextureHeight);
  if (!bVar3) {
    return;
  }
  if (bVar2) {
    if ((byte)LogCore._0_1_ < 5) goto LAB_14c93efb1;
    pFVar7 = &`public:_void___cdecl_UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::ProcessData(bool)___ptr64'
              ::__l42::LOG_Static;
  }
  else {
    if ((byte)LogCore._0_1_ < 5) goto LAB_14c93efb1;
    pFVar7 = &`public:_void___cdecl_UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::ProcessData(bool)___ptr64'
              ::__l61::LOG_Static;
  }
  Logging::Private::BasicLog<5>(pFVar7,(FLogCategoryBase *)&LogCore);
LAB_14c93efb1:
  local_res18[0] = this->SourceData;
  iVar4 = ImageParallelForComputeNumJobsForRows
                    ((int *)local_res8,this->TextureWidth,this->TextureHeight);
  local_38 = local_res8;
  local_58.DataPtr = (void **)0x0;
  local_28 = local_res18;
  local_58.ArrayNum = 0;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::FillFromNearNeighbors'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_30 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"TextureImportUtils.FillFromNearNeighbors.PF",iVar4,1,
             (TFunctionRef<void___cdecl(int)> *)&local_48,local_res8[0],None,&local_58);
  lVar10 = 0;
  lVar5 = 0;
  lVar8 = -1;
  if (0 < this->TextureHeight) {
    do {
      bVar3 = ProcessHorizontalRow(this,lVar5);
      lVar13 = lVar5;
      if (!bVar3) {
        lVar13 = lVar8;
        if (lVar8 == -1) {
          lVar10 = lVar5 + 1;
        }
        else {
          lVar11 = this->TextureWidth;
          lVar12 = 0;
          if (0 < lVar11) {
            do {
              puVar9 = this->SourceData;
              lVar6 = lVar11 * lVar8 + lVar12;
              lVar11 = lVar11 * lVar5 + lVar12;
              lVar12 = lVar12 + 1;
              puVar9[lVar11 * 4 + 2] = puVar9[lVar6 * 4 + 2];
              puVar9[lVar11 * 4 + 1] = (puVar9 + lVar6 * 4)[1];
              puVar9[lVar11 * 4] = puVar9[lVar6 * 4];
              lVar11 = this->TextureWidth;
            } while (lVar12 < lVar11);
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar8 = lVar13;
    } while (lVar5 < this->TextureHeight);
    if ((0 < lVar10) && (lVar10 < this->TextureHeight)) {
      lVar8 = this->TextureWidth;
      lVar5 = 0;
      do {
        lVar13 = 0;
        if (0 < lVar8) {
          do {
            lVar11 = lVar8 * lVar5 + lVar13;
            lVar8 = lVar8 * lVar10 + lVar13;
            lVar13 = lVar13 + 1;
            puVar9 = this->SourceData + lVar8 * 4;
            puVar1 = this->SourceData + lVar11 * 4;
            puVar1[2] = puVar9[2];
            puVar1[1] = puVar9[1];
            *puVar1 = *puVar9;
            lVar8 = this->TextureWidth;
          } while (lVar13 < lVar8);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar10);
    }
  }
  return;
}

// ProcessData @ 14c93f170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::ProcessData
          (TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3> *this,bool param_1)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  FStaticBasicLogRecord *pFVar7;
  longlong lVar8;
  ushort *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  <lambda_1> local_res8 [8];
  ushort *local_res18;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  <lambda_1> **local_40;
  <lambda_1> *local_38;
  TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3> *local_30;
  ushort **local_28;
  
  bVar3 = false;
  bVar2 = false;
  lVar10 = 0;
  if (this->TextureHeight < 1) {
    return;
  }
  lVar8 = this->TextureWidth;
  puVar9 = this->SourceData;
  do {
    lVar5 = 0;
    if (0 < lVar8) {
      do {
        if (*(ulonglong *)(puVar9 + lVar5 * 4) < 0xffff000000000000) {
          if (*(ulonglong *)(puVar9 + lVar5 * 4) == this->WhiteWithZeroAlpha) {
            bVar3 = true;
          }
          else {
            bVar2 = true;
            if (!param_1) {
              if ((byte)LogCore._0_1_ < 5) {
                return;
              }
              Logging::Private::BasicLog<5>
                        (&`public:_void___cdecl_UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::ProcessData(bool)___ptr64'
                          ::__l19::LOG_Static,(FLogCategoryBase *)&LogCore);
              return;
            }
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar8);
    }
    lVar10 = lVar10 + 1;
    puVar9 = puVar9 + lVar8 * 4;
  } while (lVar10 < this->TextureHeight);
  if (!bVar3) {
    return;
  }
  if (bVar2) {
    if ((byte)LogCore._0_1_ < 5) goto LAB_14c93f257;
    pFVar7 = &`public:_void___cdecl_UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::ProcessData(bool)___ptr64'
              ::__l42::LOG_Static;
  }
  else {
    if ((byte)LogCore._0_1_ < 5) goto LAB_14c93f257;
    pFVar7 = &`public:_void___cdecl_UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::ProcessData(bool)___ptr64'
              ::__l61::LOG_Static;
  }
  Logging::Private::BasicLog<5>(pFVar7,(FLogCategoryBase *)&LogCore);
LAB_14c93f257:
  local_res18 = this->SourceData;
  iVar4 = ImageParallelForComputeNumJobsForRows
                    ((int *)local_res8,this->TextureWidth,this->TextureHeight);
  local_38 = local_res8;
  local_58.DataPtr = (void **)0x0;
  local_28 = &local_res18;
  local_58.ArrayNum = 0;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::FillFromNearNeighbors'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_30 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"TextureImportUtils.FillFromNearNeighbors.PF",iVar4,1,
             (TFunctionRef<void___cdecl(int)> *)&local_48,local_res8[0],None,&local_58);
  lVar10 = 0;
  lVar5 = 0;
  lVar8 = -1;
  if (0 < this->TextureHeight) {
    do {
      bVar3 = ProcessHorizontalRow(this,lVar5);
      lVar13 = lVar5;
      if (!bVar3) {
        lVar13 = lVar8;
        if (lVar8 == -1) {
          lVar10 = lVar5 + 1;
        }
        else {
          lVar11 = this->TextureWidth;
          lVar12 = 0;
          if (0 < lVar11) {
            do {
              puVar9 = this->SourceData;
              lVar6 = lVar11 * lVar8 + lVar12;
              lVar11 = lVar11 * lVar5 + lVar12;
              lVar12 = lVar12 + 1;
              puVar9[lVar11 * 4] = puVar9[lVar6 * 4];
              puVar9[lVar11 * 4 + 1] = puVar9[lVar6 * 4 + 1];
              puVar9[lVar11 * 4 + 2] = puVar9[lVar6 * 4 + 2];
              lVar11 = this->TextureWidth;
            } while (lVar12 < lVar11);
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar8 = lVar13;
    } while (lVar5 < this->TextureHeight);
    if ((0 < lVar10) && (lVar10 < this->TextureHeight)) {
      lVar8 = this->TextureWidth;
      lVar5 = 0;
      do {
        lVar13 = 0;
        if (0 < lVar8) {
          do {
            lVar11 = lVar8 * lVar5 + lVar13;
            lVar8 = lVar8 * lVar10 + lVar13;
            lVar13 = lVar13 + 1;
            puVar9 = this->SourceData + lVar8 * 4;
            puVar1 = this->SourceData + lVar11 * 4;
            *puVar1 = *puVar9;
            puVar1[1] = puVar9[1];
            puVar1[2] = puVar9[2];
            lVar8 = this->TextureWidth;
          } while (lVar13 < lVar8);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar10);
    }
  }
  return;
}

// ProcessHorizontalRow @ 14c93f420

bool __thiscall
UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::ProcessHorizontalRow
          (TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3> *this,long64 param_1)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  
  uVar9 = 0;
  uVar10 = this->TextureWidth;
  puVar1 = (uint *)(this->SourceData + uVar10 * param_1 * 4);
  if (*puVar1 != this->WhiteWithZeroAlpha) goto LAB_14c93f4f0;
  do {
    uVar9 = uVar9 + 1;
    if (uVar9 == uVar10) {
      return false;
    }
  } while (puVar1[uVar9] == this->WhiteWithZeroAlpha);
  if (((longlong)uVar10 <= (longlong)uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("X < TextureWidth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                         ,0x117,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((puVar1[uVar9] == this->WhiteWithZeroAlpha) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RowData[X] != WhiteWithZeroAlpha",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                         ,0x118,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar6 = puVar1[uVar9] & 0xffffff;
  if ((longlong)uVar9 < 1) goto LAB_14c93f4f0;
  uVar10 = uVar9 & 0x3fffffffffffffff;
  puVar11 = puVar1;
  do {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar11 = uVar6;
      puVar11 = puVar11 + 1;
    }
LAB_14c93f4f0:
    do {
      if ((puVar1[uVar9] == this->WhiteWithZeroAlpha) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RowData[X] != WhiteWithZeroAlpha",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x126,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar10 = uVar9;
      if (puVar1[uVar9] != this->WhiteWithZeroAlpha) {
        do {
          uVar10 = uVar10 + 1;
          if (uVar10 == this->TextureWidth) {
            return true;
          }
        } while (puVar1[uVar10] != this->WhiteWithZeroAlpha);
      }
      if (((longlong)uVar10 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("X > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x134,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((puVar1[uVar10] != this->WhiteWithZeroAlpha) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RowData[X] == WhiteWithZeroAlpha",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x135,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar10;
      if (puVar1[uVar10] == this->WhiteWithZeroAlpha) {
        do {
          uVar9 = uVar9 + 1;
          if (uVar9 == this->TextureWidth) {
            uVar6 = puVar1[uVar10 - 1];
            if ((longlong)uVar10 < this->TextureWidth) {
              do {
                puVar1[uVar10] = uVar6 & 0xffffff;
                uVar10 = uVar10 + 1;
              } while ((longlong)uVar10 < this->TextureWidth);
            }
            return true;
          }
        } while (puVar1[uVar9] == this->WhiteWithZeroAlpha);
      }
      if ((this->TextureWidth <= (longlong)uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("X < TextureWidth",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x14c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((puVar1[uVar9] == this->WhiteWithZeroAlpha) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RowData[X] != WhiteWithZeroAlpha",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x14d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar6 = puVar1[uVar9] & 0xffffff;
      lVar7 = (longlong)(uVar10 + uVar9) / 2;
      uVar2 = puVar1[uVar10 - 1];
      if ((longlong)uVar10 < lVar7) {
        puVar11 = puVar1 + uVar10;
        for (lVar8 = lVar7 - uVar10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar11 = uVar2 & 0xffffff;
          puVar11 = puVar11 + 1;
        }
      }
    } while ((longlong)uVar9 <= lVar7);
    uVar10 = uVar9 - lVar7;
    puVar11 = puVar1 + lVar7;
  } while( true );
}

// ProcessHorizontalRow @ 14c93f6b0

bool __thiscall
UE::TextureUtilitiesCommon::TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::
ProcessHorizontalRow(TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3> *this,long64 param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  
  uVar9 = 0;
  uVar6 = this->TextureWidth;
  puVar1 = (ulonglong *)(this->SourceData + uVar6 * param_1 * 4);
  if (*puVar1 != this->WhiteWithZeroAlpha) goto LAB_14c93f790;
  do {
    uVar9 = uVar9 + 1;
    if (uVar9 == uVar6) {
      return false;
    }
  } while (puVar1[uVar9] == this->WhiteWithZeroAlpha);
  if (((longlong)uVar6 <= (longlong)uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("X < TextureWidth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                         ,0x117,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((puVar1[uVar9] == this->WhiteWithZeroAlpha) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RowData[X] != WhiteWithZeroAlpha",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                         ,0x118,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar6 = puVar1[uVar9] & 0xffffffffffff;
  if ((longlong)uVar9 < 1) goto LAB_14c93f790;
  uVar10 = uVar9 & 0x1fffffffffffffff;
  puVar11 = puVar1;
  do {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar11 = uVar6;
      puVar11 = puVar11 + 1;
    }
LAB_14c93f790:
    do {
      if ((puVar1[uVar9] == this->WhiteWithZeroAlpha) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RowData[X] != WhiteWithZeroAlpha",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x126,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar10 = uVar9;
      if (puVar1[uVar9] != this->WhiteWithZeroAlpha) {
        do {
          uVar10 = uVar10 + 1;
          if (uVar10 == this->TextureWidth) {
            return true;
          }
        } while (puVar1[uVar10] != this->WhiteWithZeroAlpha);
      }
      if (((longlong)uVar10 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("X > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x134,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((puVar1[uVar10] != this->WhiteWithZeroAlpha) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RowData[X] == WhiteWithZeroAlpha",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x135,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar10;
      if (puVar1[uVar10] == this->WhiteWithZeroAlpha) {
        do {
          uVar9 = uVar9 + 1;
          if (uVar9 == this->TextureWidth) {
            uVar6 = puVar1[uVar10 - 1];
            if ((longlong)uVar10 < this->TextureWidth) {
              do {
                puVar1[uVar10] = uVar6 & 0xffffffffffff;
                uVar10 = uVar10 + 1;
              } while ((longlong)uVar10 < this->TextureWidth);
            }
            return true;
          }
        } while (puVar1[uVar9] == this->WhiteWithZeroAlpha);
      }
      if ((this->TextureWidth <= (longlong)uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("X < TextureWidth",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x14c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((puVar1[uVar9] == this->WhiteWithZeroAlpha) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RowData[X] != WhiteWithZeroAlpha",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                             ,0x14d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar6 = puVar1[uVar9] & 0xffffffffffff;
      lVar7 = (longlong)(uVar10 + uVar9) / 2;
      uVar2 = puVar1[uVar10 - 1];
      if ((longlong)uVar10 < lVar7) {
        puVar11 = puVar1 + uVar10;
        for (lVar8 = lVar7 - uVar10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar11 = uVar2 & 0xffffffffffff;
          puVar11 = puVar11 + 1;
        }
      }
    } while ((longlong)uVar9 <= lVar7);
    puVar11 = puVar1 + lVar7;
    uVar10 = uVar9 - lVar7;
  } while( true );
}

