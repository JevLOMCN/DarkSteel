// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FTextureLayout @ 14560a500

FTextureLayout * __thiscall
FTextureLayout::FTextureLayout
          (FTextureLayout *this,uint param_1,uint param_2,uint param_3,uint param_4,bool param_5,
          ETextureLayoutAspectRatio param_6,bool param_7)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTextureLayout *pFVar5;
  longlong lVar6;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar7;
  
  this->AspectRatio = param_6;
  this->bPowerOfTwoSize = param_5;
  this->bAlignByFour = param_7;
  this->MinSizeX = param_1;
  this->MinSizeY = param_2;
  this->SizeX = param_1;
  this->SizeY = param_2;
  (this->Nodes).AllocatorInstance.SecondaryData =
       (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 5;
  if (param_4 != (param_4 & 0xffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTextureLayout *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_3 != (param_3 & 0xffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTextureLayout *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Nodes).ArrayNum;
  if (iVar4 == (this->Nodes).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_>
                      (0x414,&(this->Nodes).AllocatorInstance,&(this->Nodes).ArrayMax);
  }
  (this->Nodes).ArrayNum = iVar4 + 1;
  FVar7 = (this->Nodes).AllocatorInstance.SecondaryData;
  lVar6 = (longlong)iVar4;
  if (FVar7 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar7 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
  }
  *(short *)((uchar *)((longlong)FVar7 + 0xc) + lVar6 * 0x14) = (short)param_3;
  *(undefined8 *)((longlong)FVar7 + lVar6 * 0x14) = 0xffffffffffffffff;
  puVar1 = (uchar *)((longlong)FVar7 + 8) + lVar6 * 0x14;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(short *)((uchar *)((longlong)FVar7 + 0xe) + lVar6 * 0x14) = (short)param_4;
  ((uchar *)((longlong)FVar7 + 0x10))[lVar6 * 0x14] = '\0';
  return this;
}

// operator= @ 14560ba20

FTextureLayout * __thiscall FTextureLayout::operator=(FTextureLayout *this,FTextureLayout *param_1)

{
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar1;
  
  this->MinSizeX = param_1->MinSizeX;
  this->MinSizeY = param_1->MinSizeY;
  this->SizeX = param_1->SizeX;
  this->SizeY = param_1->SizeY;
  this->AspectRatio = param_1->AspectRatio;
  this->bPowerOfTwoSize = param_1->bPowerOfTwoSize;
  this->bAlignByFour = param_1->bAlignByFour;
  if (&this->Nodes != &param_1->Nodes) {
    if ((param_1->Nodes).AllocatorInstance.SecondaryData ==
        (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      memmove(&this->Nodes,&param_1->Nodes,100);
    }
    FVar1 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->Nodes).AllocatorInstance.SecondaryData = (param_1->Nodes).AllocatorInstance.SecondaryData
    ;
    (param_1->Nodes).AllocatorInstance.SecondaryData =
         (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0;
    (this->Nodes).ArrayNum = (param_1->Nodes).ArrayNum;
    (this->Nodes).ArrayMax = (param_1->Nodes).ArrayMax;
    (param_1->Nodes).ArrayNum = 0;
    (param_1->Nodes).ArrayMax = 5;
  }
  return this;
}

// AddElement @ 145612900

bool __thiscall
FTextureLayout::AddElement
          (FTextureLayout *this,uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar7;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    bVar2 = true;
    *param_1 = 0;
    *param_2 = 0;
  }
  else {
    if (this->bAlignByFour != false) {
      param_3 = param_3 + 3 & 0xfffffffc;
      param_4 = param_4 + 3 & 0xfffffffc;
    }
    uVar4 = AddSurfaceInner(this,0,param_3,param_4,false);
    if ((uVar4 == 0xffffffff) &&
       (uVar4 = AddSurfaceInner(this,0,param_3,param_4,true), uVar4 == 0xffffffff)) {
      bVar2 = false;
    }
    else {
      uVar6 = 0;
      if ((int)uVar4 < (this->Nodes).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FVar7 = (this->Nodes).AllocatorInstance.SecondaryData;
      lVar5 = (longlong)(int)uVar4;
      if (FVar7 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar7 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      }
      ((uchar *)((longlong)FVar7 + 0x10))[lVar5 * 0x14] = '\x01';
      *param_1 = (uint)*(ushort *)((uchar *)((longlong)FVar7 + 8) + lVar5 * 0x14);
      *param_2 = (uint)*(ushort *)((uchar *)((longlong)FVar7 + 10) + lVar5 * 0x14);
      UpdateSize(this,*(ushort *)((uchar *)((longlong)FVar7 + 8) + lVar5 * 0x14) + param_3,
                 *(ushort *)((uchar *)((longlong)FVar7 + 10) + lVar5 * 0x14) + param_4);
      bVar2 = true;
    }
  }
  return bVar2;
}

// AddSurfaceInner @ 145614d70

int __thiscall
FTextureLayout::AddSurfaceInner
          (FTextureLayout *this,int param_1,uint param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ETextureLayoutAspectRatio EVar3;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uStack_64;
  ushort uStack_60;
  ushort uStack_5e;
  ushort uStack_5c;
  ushort uStack_5a;
  
  do {
    while( true ) {
      uVar14 = 0;
      if (param_1 < (this->Nodes).ArrayNum) {
        uVar14 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      puVar1 = (undefined8 *)((longlong)param_1 * 0x14 + (longlong)FVar13);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar14 = 0;
      if (param_1 < (this->Nodes).ArrayNum) {
        uVar14 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      piVar18 = (int *)((longlong)FVar13 + (longlong)param_1 * 0x14);
      if (*piVar18 == -1) break;
      iVar11 = AddSurfaceInner(this,*piVar18,param_2,param_3,param_4);
      if (iVar11 != -1) {
        return iVar11;
      }
      uStack_64 = (uint)((ulonglong)uVar6 >> 0x20);
      param_1 = uStack_64;
    }
    if ((((char)piVar18[4] != '\0') || (*(ushort *)(piVar18 + 3) < param_2)) ||
       (*(ushort *)((longlong)piVar18 + 0xe) < param_3)) {
      return -1;
    }
    uVar14 = *(ushort *)(piVar18 + 2) + param_2;
    if (param_4) {
      uVar16 = *(ushort *)((longlong)piVar18 + 10) + param_3;
      if (this->bPowerOfTwoSize != false) {
        uVar15 = 1;
        if (uVar14 != 0) {
          uVar15 = uVar14;
        }
        uVar2 = (ulonglong)(uVar15 - 1) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar15 = 1 << ((byte)lVar12 & 0x1f);
        uVar14 = 1;
        if (uVar16 != 0) {
          uVar14 = uVar16;
        }
        uVar2 = (ulonglong)(uVar14 - 1) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar17 = 1 << ((byte)lVar12 & 0x1f);
        EVar3 = this->AspectRatio;
        uVar14 = uVar15;
        uVar16 = uVar17;
        if (EVar3 != None) {
          if (EVar3 == Force2To1) {
            uVar14 = uVar17 * 2;
            if ((int)(uVar17 * 2) < (int)uVar15) {
              uVar14 = uVar15;
            }
            uVar16 = (int)uVar14 / 2;
            if ((int)uVar14 / 2 < (int)uVar17) {
              uVar16 = uVar17;
            }
          }
          else if (EVar3 == ForceSquare) {
            uVar14 = uVar17;
            if ((int)uVar17 < (int)uVar15) {
              uVar14 = uVar15;
              uVar16 = uVar15;
            }
          }
          else {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout.h"
                               ,0x128,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
          }
        }
      }
      if (0x4000 < (int)uVar14) {
        return -1;
      }
      if (0x4000 < (int)uVar16) {
        return -1;
      }
    }
    else {
      if (this->SizeX < uVar14) {
        return -1;
      }
      if (this->SizeY < *(ushort *)((longlong)piVar18 + 10) + param_3) {
        return -1;
      }
    }
    if ((*(ushort *)(piVar18 + 3) == param_2) && (*(ushort *)((longlong)piVar18 + 0xe) == param_3))
    {
      return param_1;
    }
    iVar11 = (this->Nodes).ArrayNum;
    uStack_60 = (ushort)uVar7;
    uStack_5e = (ushort)((ulonglong)uVar7 >> 0x10);
    uStack_5c = (ushort)((ulonglong)uVar7 >> 0x20);
    uStack_5a = (ushort)((ulonglong)uVar7 >> 0x30);
    if (*(ushort *)((longlong)piVar18 + 0xe) - param_3 < *(ushort *)(piVar18 + 3) - param_2) {
      uVar14 = 0;
      if (param_1 < iVar11) {
        uVar14 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      *(int *)((longlong)FVar13 + (longlong)param_1 * 0x14) = iVar11;
      uVar9 = IntCastChecked<unsigned_short,unsigned_int>(param_2);
      piVar18 = &(this->Nodes).ArrayMax;
      iVar11 = (this->Nodes).ArrayNum;
      if (iVar11 == *piVar18) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_>
                           (0x414,&(this->Nodes).AllocatorInstance,piVar18);
      }
      lVar12 = (longlong)iVar11;
      (this->Nodes).ArrayNum = iVar11 + 1;
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      *(undefined8 *)((longlong)FVar13 + lVar12 * 0x14) = 0xffffffffffffffff;
      *(ushort *)((uchar *)((longlong)FVar13 + 8) + lVar12 * 0x14) = uStack_60;
      *(ushort *)((uchar *)((longlong)FVar13 + 10) + lVar12 * 0x14) = uStack_5e;
      *(ushort *)((uchar *)((longlong)FVar13 + 0xc) + lVar12 * 0x14) = uVar9;
      *(ushort *)((uchar *)((longlong)FVar13 + 0xe) + lVar12 * 0x14) = uStack_5a;
      ((uchar *)((longlong)FVar13 + 0x10))[lVar12 * 0x14] = '\0';
      iVar11 = (this->Nodes).ArrayNum;
      uVar14 = 0;
      if (param_1 < iVar11) {
        uVar14 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      *(int *)((longlong)FVar13 + 4 + (longlong)param_1 * 0x14) = iVar11;
      uVar9 = IntCastChecked<unsigned_short,unsigned_int>(uStack_5c - param_2);
      uVar10 = IntCastChecked<unsigned_short,unsigned_int>(uStack_60 + param_2);
      iVar11 = (this->Nodes).ArrayNum;
      if (iVar11 == (this->Nodes).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_>
                           (0x414,&(this->Nodes).AllocatorInstance,&(this->Nodes).ArrayMax);
      }
      lVar12 = (longlong)iVar11;
      (this->Nodes).ArrayNum = iVar11 + 1;
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      *(ushort *)((uchar *)((longlong)FVar13 + 8) + lVar12 * 0x14) = uVar10;
      *(ushort *)((uchar *)((longlong)FVar13 + 10) + lVar12 * 0x14) = uStack_5e;
      *(ushort *)((uchar *)((longlong)FVar13 + 0xc) + lVar12 * 0x14) = uVar9;
      *(ushort *)((uchar *)((longlong)FVar13 + 0xe) + lVar12 * 0x14) = uStack_5a;
    }
    else {
      uVar14 = 0;
      if (param_1 < iVar11) {
        uVar14 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      *(int *)((longlong)FVar13 + (longlong)param_1 * 0x14) = iVar11;
      uVar9 = IntCastChecked<unsigned_short,unsigned_int>(param_3);
      piVar18 = &(this->Nodes).ArrayMax;
      iVar11 = (this->Nodes).ArrayNum;
      if (iVar11 == *piVar18) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_>
                           (0x414,&(this->Nodes).AllocatorInstance,piVar18);
      }
      lVar12 = (longlong)iVar11;
      (this->Nodes).ArrayNum = iVar11 + 1;
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      *(undefined8 *)((longlong)FVar13 + lVar12 * 0x14) = 0xffffffffffffffff;
      *(ushort *)((uchar *)((longlong)FVar13 + 8) + lVar12 * 0x14) = uStack_60;
      *(ushort *)((uchar *)((longlong)FVar13 + 10) + lVar12 * 0x14) = uStack_5e;
      *(ushort *)((uchar *)((longlong)FVar13 + 0xc) + lVar12 * 0x14) = uStack_5c;
      *(ushort *)((uchar *)((longlong)FVar13 + 0xe) + lVar12 * 0x14) = uVar9;
      ((uchar *)((longlong)FVar13 + 0x10))[lVar12 * 0x14] = '\0';
      iVar11 = (this->Nodes).ArrayNum;
      uVar14 = 0;
      if (param_1 < iVar11) {
        uVar14 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      *(int *)((longlong)FVar13 + 4 + (longlong)param_1 * 0x14) = iVar11;
      uVar9 = IntCastChecked<unsigned_short,unsigned_int>(uStack_5a - param_3);
      uVar10 = IntCastChecked<unsigned_short,unsigned_int>(uStack_5e + param_3);
      iVar11 = (this->Nodes).ArrayNum;
      if (iVar11 == (this->Nodes).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_>
                           (0x414,&(this->Nodes).AllocatorInstance,&(this->Nodes).ArrayMax);
      }
      lVar12 = (longlong)iVar11;
      (this->Nodes).ArrayNum = iVar11 + 1;
      FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar13 = FVar4;
      }
      *(ushort *)((uchar *)((longlong)FVar13 + 8) + lVar12 * 0x14) = uStack_60;
      *(ushort *)((uchar *)((longlong)FVar13 + 10) + lVar12 * 0x14) = uVar10;
      *(ushort *)((uchar *)((longlong)FVar13 + 0xc) + lVar12 * 0x14) = uStack_5c;
      *(ushort *)((uchar *)((longlong)FVar13 + 0xe) + lVar12 * 0x14) = uVar9;
    }
    ((uchar *)((longlong)FVar13 + 0x10))[lVar12 * 0x14] = '\0';
    *(undefined8 *)((longlong)FVar13 + lVar12 * 0x14) = 0xffffffffffffffff;
    uVar14 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar14 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    FVar4 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
    if (FVar4 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar13 = FVar4;
    }
    param_1 = *(uint *)((longlong)FVar13 + (longlong)param_1 * 0x14);
  } while( true );
}

// FindParentNode @ 145632210

int __thiscall FTextureLayout::FindParentNode(FTextureLayout *this,int param_1)

{
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->Nodes).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Nodes).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
      if (FVar1 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar6 = FVar1;
      }
      if (*(int *)(lVar8 + (longlong)FVar6) == param_1) {
        return uVar7;
      }
      if (*(int *)(lVar8 + 4 + (longlong)FVar6) == param_1) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x14;
    } while ((int)uVar7 < (this->Nodes).ArrayNum);
  }
  return -1;
}

// IsNodeUsed @ 14563a8c0

bool __thiscall FTextureLayout::IsNodeUsed(FTextureLayout *this,int param_1)

{
  TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar8;
  uint uVar9;
  
  bVar6 = false;
  pTVar1 = &this->Nodes;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar8 = (this->Nodes).AllocatorInstance.SecondaryData;
  lVar2 = (longlong)param_1 * 0x14;
  if (FVar8 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar8 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  }
  if (*(int *)((longlong)FVar8 + lVar2) != -1) {
    uVar7 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    FVar8 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar8 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
    }
    bVar4 = IsNodeUsed(this,*(int *)((longlong)FVar8 + lVar2));
    if (!bVar4) {
      uVar7 = 0;
      if (param_1 < (this->Nodes).ArrayNum) {
        uVar7 = uVar9;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      FVar8 = (this->Nodes).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar8 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
      }
      bVar4 = IsNodeUsed(this,*(int *)((uchar *)((longlong)FVar8 + 4) + lVar2));
      if (!bVar4) goto LAB_14563aa23;
    }
    bVar6 = true;
  }
LAB_14563aa23:
  uVar7 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar8 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar8 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  }
  if ((((uchar *)((longlong)FVar8 + 0x10))[lVar2] != '\0') || (bVar6)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// RemoveChildren @ 14563daa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FTextureLayout::RemoveChildren(FTextureLayout *this,int param_1)

{
  TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  uchar *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar10;
  int iVar11;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<FTextureLayout::FTextureLayoutNode> *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int *piVar22;
  
  lVar14 = (longlong)param_1;
  pTVar1 = &this->Nodes;
  uVar17 = 0;
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  uVar8 = uVar7;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  }
  piVar22 = &(this->Nodes).ArrayNum;
  if (*(int *)((longlong)FVar10 + lVar14 * 0x14) != -1) {
    uVar8 = uVar7;
    if (param_1 < *piVar22) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
    }
    RemoveChildren(this,*(int *)((longlong)FVar10 + lVar14 * 0x14));
  }
  pFVar15 = &(this->Nodes).AllocatorInstance.SecondaryData;
  uVar8 = uVar7;
  if (param_1 < *piVar22) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar10 = *pFVar15;
  if (*pFVar15 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  }
  if (*(int *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 0x14) != -1) {
    if (param_1 < *piVar22) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar10 = *pFVar15;
    if (*pFVar15 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
    }
    RemoveChildren(this,*(int *)((longlong)FVar10 + 4 + lVar14 * 0x14));
  }
  uVar7 = 0;
  uVar8 = uVar7;
  if (param_1 < *piVar22) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar10 = *pFVar15;
  if (*pFVar15 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
  }
  uVar8 = 0;
  uVar9 = 0;
  if (*(int *)((longlong)FVar10 + lVar14 * 0x14) != -1) {
    uVar19 = uVar7;
    if (param_1 < *piVar22) {
      uVar19 = uVar13;
    }
    if ((uVar19 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar10 = *pFVar15;
    if (*pFVar15 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
    }
    iVar4 = *(int *)((longlong)FVar10 + lVar14 * 0x14);
    TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
    ::RemoveAt(&this->Nodes,iVar4,Default);
    iVar11 = *piVar22;
    uVar16 = uVar17;
    uVar21 = uVar17;
    if (0 < iVar11) {
      do {
        uVar20 = (uint)uVar21;
        uVar18 = ~uVar20 >> 0x1f;
        uVar19 = uVar7;
        if ((int)uVar20 < (this->Nodes).ArrayNum) {
          uVar19 = uVar18;
        }
        if ((uVar19 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
        if (FVar10 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
          FVar12 = FVar10;
        }
        if (iVar4 <= *(int *)((longlong)FVar12 + uVar16)) {
          uVar19 = uVar7;
          if ((int)uVar20 < (this->Nodes).ArrayNum) {
            uVar19 = uVar18;
          }
          if ((uVar19 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
          if (FVar10 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
            FVar12 = FVar10;
          }
          *(int *)((longlong)FVar12 + uVar16) = *(int *)((longlong)FVar12 + uVar16) + -1;
        }
        uVar19 = uVar9;
        if ((int)uVar20 < (this->Nodes).ArrayNum) {
          uVar19 = uVar18;
        }
        if ((uVar19 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
        if (FVar10 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
          FVar12 = FVar10;
        }
        if (iVar4 <= *(int *)((longlong)FVar12 + 4 + uVar16)) {
          uVar19 = uVar9;
          if ((int)uVar20 < (this->Nodes).ArrayNum) {
            uVar19 = uVar18;
          }
          if ((uVar19 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
          if (FVar10 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
            FVar12 = FVar10;
          }
          piVar2 = (int *)((longlong)FVar12 + 4 + uVar16);
          *piVar2 = *piVar2 + -1;
        }
        iVar11 = *piVar22;
        uVar16 = uVar16 + 0x14;
        uVar21 = (ulonglong)(uVar20 + 1);
      } while ((int)(uVar20 + 1) < iVar11);
    }
    uVar7 = uVar8;
    if (param_1 < iVar11) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
    }
    *(undefined4 *)((longlong)FVar10 + lVar14 * 0x14) = 0xffffffff;
  }
  pFVar15 = &(this->Nodes).AllocatorInstance.SecondaryData;
  piVar22 = &(this->Nodes).ArrayNum;
  uVar7 = uVar8;
  if (param_1 < *piVar22) {
    uVar7 = uVar13;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar10 = *pFVar15;
  if (FVar10 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
  }
  if (*(int *)((longlong)FVar10 + 4 + lVar14 * 0x14) != -1) {
    uVar7 = uVar9;
    if (param_1 < *piVar22) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar10 = *pFVar15;
    if (FVar10 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
    }
    iVar4 = *(int *)((longlong)FVar10 + 4 + lVar14 * 0x14);
    TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
    ::RemoveAt(&this->Nodes,iVar4,Default);
    iVar11 = *piVar22;
    uVar16 = uVar17;
    if (0 < iVar11) {
      do {
        uVar18 = (uint)uVar16;
        uVar19 = ~uVar18 >> 0x1f;
        uVar7 = uVar9;
        if ((int)uVar18 < (this->Nodes).ArrayNum) {
          uVar7 = uVar19;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
        if (FVar10 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
          FVar12 = FVar10;
        }
        if (iVar4 <= *(int *)((longlong)FVar12 + uVar17)) {
          uVar7 = uVar8;
          if ((int)uVar18 < (this->Nodes).ArrayNum) {
            uVar7 = uVar19;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
          if (FVar10 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
            FVar12 = FVar10;
          }
          *(int *)((longlong)FVar12 + uVar17) = *(int *)((longlong)FVar12 + uVar17) + -1;
        }
        uVar7 = uVar8;
        if ((int)uVar18 < (this->Nodes).ArrayNum) {
          uVar7 = uVar19;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
        if (FVar10 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
          FVar12 = FVar10;
        }
        if (iVar4 <= *(int *)((longlong)FVar12 + 4 + uVar17)) {
          uVar7 = uVar8;
          if ((int)uVar18 < (this->Nodes).ArrayNum) {
            uVar7 = uVar19;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
          if (FVar10 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
            FVar12 = FVar10;
          }
          piVar2 = (int *)((longlong)FVar12 + 4 + uVar17);
          *piVar2 = *piVar2 + -1;
        }
        iVar11 = *piVar22;
        uVar17 = uVar17 + 0x14;
        uVar16 = (ulonglong)(uVar18 + 1);
      } while ((int)(uVar18 + 1) < iVar11);
    }
    if (param_1 < iVar11) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&this->Nodes;
    }
    puVar3 = (uchar *)((longlong)FVar10 + 4) + lVar14 * 0x14;
    puVar3[0] = 0xff;
    puVar3[1] = 0xff;
    puVar3[2] = 0xff;
    puVar3[3] = 0xff;
  }
  return;
}

// RemoveElement @ 14563e2e0

bool __thiscall
FTextureLayout::RemoveElement
          (FTextureLayout *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  TArray<FTextureLayout::FTextureLayoutNode,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  ETextureLayoutAspectRatio EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint local_58;
  
  if (this->bAlignByFour != false) {
    param_3 = param_3 + 3 & 0xfffffffc;
    param_4 = param_4 + 3 & 0xfffffffc;
  }
  uVar13 = 0;
  if (0 < (this->Nodes).ArrayNum) {
    pTVar1 = &this->Nodes;
    lVar17 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (this->Nodes).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
      if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar10 = FVar15;
      }
      if ((((*(ushort *)(lVar17 + 8 + (longlong)FVar10) == param_1) &&
           (*(ushort *)(lVar17 + 10 + (longlong)FVar10) == param_2)) &&
          (*(ushort *)(lVar17 + 0xc + (longlong)FVar10) == param_3)) &&
         (*(ushort *)(lVar17 + 0xe + (longlong)FVar10) == param_4)) {
        if (uVar13 == 0xffffffff) {
          return false;
        }
        uVar11 = 0;
        if ((int)uVar13 < (this->Nodes).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
          FVar15 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
        }
        ((uchar *)((longlong)FVar15 + 0x10))[(longlong)(int)uVar13 * 0x14] = '\0';
        local_58 = FindParentNode(this,uVar13);
        uVar12 = (ulonglong)(int)local_58;
        if (((local_58 != 0xffffffff) && (bVar4 = IsNodeUsed(this,local_58), bVar4)) ||
           (uVar18 = uVar12, local_58 == 0xffffffff)) goto LAB_14563e973;
        goto LAB_14563e4b0;
      }
      uVar13 = uVar13 + 1;
      lVar17 = lVar17 + 0x14;
    } while ((int)uVar13 < (this->Nodes).ArrayNum);
  }
  return false;
LAB_14563e4b0:
  uVar11 = (uint)uVar12;
  uVar13 = 0;
  if ((int)uVar11 < (this->Nodes).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
  bVar4 = false;
  FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = FVar15;
  }
  uVar13 = *(uint *)(uVar18 * 0x14 + (longlong)FVar10);
  uVar14 = ~uVar13 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar13 < (this->Nodes).ArrayNum) {
    uVar7 = uVar14;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = FVar15;
  }
  lVar17 = (longlong)(int)uVar13 * 0x14;
  if (*(int *)((longlong)FVar10 + lVar17) != -1) {
    uVar7 = 0;
    if ((int)uVar13 < (this->Nodes).ArrayNum) {
      uVar7 = uVar14;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = FVar15;
    }
    bVar4 = IsNodeUsed(this,*(int *)((longlong)FVar10 + lVar17));
    if (!bVar4) {
      uVar7 = 0;
      if ((int)uVar13 < (this->Nodes).ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
      if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar10 = FVar15;
      }
      bVar6 = IsNodeUsed(this,*(int *)((uchar *)((longlong)FVar10 + 4) + lVar17));
      bVar4 = false;
      if (!bVar6) goto LAB_14563e665;
    }
    bVar4 = true;
  }
LAB_14563e665:
  uVar7 = 0;
  if ((int)uVar13 < (this->Nodes).ArrayNum) {
    uVar7 = uVar14;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = FVar15;
  }
  if ((((uchar *)((longlong)FVar10 + 0x10))[lVar17] != '\0') || (bVar4)) goto LAB_14563e962;
  uVar13 = 0;
  if ((int)uVar11 < (this->Nodes).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = FVar15;
  }
  bVar4 = false;
  uVar13 = *(uint *)(uVar18 * 0x14 + 4 + (longlong)FVar10);
  uVar14 = ~uVar13 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar13 < (this->Nodes).ArrayNum) {
    uVar7 = uVar14;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = FVar15;
  }
  lVar17 = (longlong)(int)uVar13 * 0x14;
  if (*(int *)((longlong)FVar10 + lVar17) != -1) {
    uVar7 = 0;
    if ((int)uVar13 < (this->Nodes).ArrayNum) {
      uVar7 = uVar14;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = FVar15;
    }
    bVar6 = IsNodeUsed(this,*(int *)(lVar17 + (longlong)FVar10));
    if (!bVar6) {
      uVar7 = 0;
      if ((int)uVar13 < (this->Nodes).ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
      if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar10 = FVar15;
      }
      bVar6 = IsNodeUsed(this,*(int *)(lVar17 + 4 + (longlong)FVar10));
      if (!bVar6) goto LAB_14563e85b;
    }
    bVar4 = true;
  }
LAB_14563e85b:
  uVar7 = 0;
  if ((int)uVar13 < (this->Nodes).ArrayNum) {
    uVar7 = uVar14;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
  if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FVar10 = FVar15;
  }
  if ((*(char *)(lVar17 + 0x10 + (longlong)FVar10) != '\0') || (bVar4)) goto LAB_14563e962;
  uVar13 = 0;
  uVar18 = 0;
  local_58 = uVar11;
  if ((this->Nodes).ArrayNum < 1) goto LAB_14563e962;
  lVar17 = 0;
  while( true ) {
    uVar7 = 0;
    if ((int)uVar13 < (this->Nodes).ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
      FVar10 = FVar15;
    }
    if ((*(uint *)(lVar17 + (longlong)FVar10) == uVar11) ||
       (*(uint *)(lVar17 + 4 + (longlong)FVar10) == uVar11)) break;
    uVar13 = uVar13 + 1;
    uVar18 = uVar18 + 1;
    lVar17 = lVar17 + 0x14;
    if ((this->Nodes).ArrayNum <= (int)uVar13) goto LAB_14563e962;
  }
  uVar12 = (ulonglong)uVar13;
  if (uVar13 == 0xffffffff) goto LAB_14563e962;
  goto LAB_14563e4b0;
LAB_14563e962:
  if (local_58 != 0xffffffff) {
    RemoveChildren(this,local_58);
  }
LAB_14563e973:
  uVar13 = 0;
  this->SizeX = this->MinSizeX;
  this->SizeY = this->MinSizeY;
  if (0 < (this->Nodes).ArrayNum) {
    lVar17 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (this->Nodes).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FTextureLayout::FTextureLayoutNode>)pTVar1;
      if (FVar15 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FVar10 = FVar15;
      }
      lVar16 = (longlong)FVar10 + lVar17;
      if (*(char *)(lVar16 + 0x10) != '\0') {
        uVar14 = (uint)*(ushort *)(lVar16 + 0xe) + (uint)*(ushort *)(lVar16 + 10);
        uVar11 = this->SizeX;
        uVar9 = (uint)*(ushort *)(lVar16 + 0xc) + (uint)*(ushort *)(lVar16 + 8);
        uVar7 = this->SizeY;
        if (this->bPowerOfTwoSize == false) {
          if (uVar9 < uVar11) {
            uVar9 = uVar11;
          }
          this->SizeX = uVar9;
          if (uVar14 < uVar7) {
            uVar14 = uVar7;
          }
LAB_14563eaeb:
          this->SizeY = uVar14;
        }
        else {
          uVar8 = 1;
          if (uVar9 != 0) {
            uVar8 = uVar9;
          }
          uVar12 = (ulonglong)(uVar8 - 1) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar9 = 1 << ((byte)lVar16 & 0x1f);
          if (uVar9 < uVar11) {
            uVar9 = uVar11;
          }
          this->SizeX = uVar9;
          uVar11 = 1;
          if (uVar14 != 0) {
            uVar11 = uVar14;
          }
          uVar12 = (ulonglong)(uVar11 - 1) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar14 = 1 << ((byte)lVar16 & 0x1f);
          EVar2 = this->AspectRatio;
          if (uVar14 < uVar7) {
            uVar14 = uVar7;
          }
          this->SizeY = uVar14;
          if (EVar2 != None) {
            if (EVar2 == Force2To1) {
              uVar11 = uVar14 * 2;
              if (uVar14 * 2 < uVar9) {
                uVar11 = uVar9;
              }
              this->SizeX = uVar11;
              uVar7 = uVar11 >> 1;
              if (uVar11 >> 1 < uVar14) {
                uVar7 = uVar14;
              }
              this->SizeY = uVar7;
            }
            else {
              if (EVar2 == ForceSquare) {
                if (uVar14 < uVar9) {
                  uVar14 = uVar9;
                }
                this->SizeX = uVar14;
                goto LAB_14563eaeb;
              }
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout.h"
                                 ,0x183,L"");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar17 = lVar17 + 0x14;
    } while ((int)uVar13 < (this->Nodes).ArrayNum);
  }
  return true;
}

// UpdateSize @ 14564bc60

void __thiscall FTextureLayout::UpdateSize(FTextureLayout *this,uint param_1,uint param_2)

{
  ulonglong uVar1;
  ETextureLayoutAspectRatio EVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = this->SizeX;
  if (this->bPowerOfTwoSize == false) {
    if (param_1 < uVar8) {
      param_1 = uVar8;
    }
    this->SizeX = param_1;
    if (param_2 < this->SizeY) {
      param_2 = this->SizeY;
    }
    this->SizeY = param_2;
  }
  else {
    uVar7 = 1;
    if (param_1 != 0) {
      uVar7 = param_1;
    }
    uVar1 = (ulonglong)(uVar7 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar7 < uVar8) {
      uVar7 = uVar8;
    }
    this->SizeX = uVar7;
    uVar8 = 1;
    if (param_2 != 0) {
      uVar8 = param_2;
    }
    uVar1 = (ulonglong)(uVar8 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar8 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar8 < this->SizeY) {
      uVar8 = this->SizeY;
    }
    EVar2 = this->AspectRatio;
    this->SizeY = uVar8;
    if (EVar2 != None) {
      if (EVar2 == Force2To1) {
        uVar6 = uVar8 * 2;
        if (uVar8 * 2 < uVar7) {
          uVar6 = uVar7;
        }
        this->SizeX = uVar6;
        uVar7 = uVar6 >> 1;
        if (uVar6 >> 1 < uVar8) {
          uVar7 = uVar8;
        }
        this->SizeY = uVar7;
        return;
      }
      if (EVar2 == ForceSquare) {
        if (uVar8 < uVar7) {
          uVar8 = uVar7;
        }
        this->SizeX = uVar8;
        this->SizeY = uVar8;
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout.h"
                         ,0x183,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

