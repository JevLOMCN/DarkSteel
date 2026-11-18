// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// Contains @ 145bf8d80

bool __thiscall
TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Contains
          (TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *this,FOpenGLTexture **param_1)

{
  FOpenGLTexture *pFVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  
  pFVar1 = *param_1;
  uVar4 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->LookupSet).Elements.field_0x8 !=
      *(int *)&(this->LookupSet).Elements.field_0x34) {
    FVar5 = (this->LookupSet).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->LookupSet).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->LookupSet).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->LookupSet).Elements;
      do {
        if ((FOpenGLTexture *)**(ulonglong **)(lVar2 + (longlong)iVar3 * 0x10) == pFVar1)
        goto LAB_145bf8dff;
        iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_145bf8dff:
  return iVar3 != -1;
}

// Contains @ 145bf8e10

bool __thiscall
TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Contains
          (TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*> *this,FOpenGLProgramKey *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_88 = *(undefined8 *)param_1->ShaderHashes[0].Hash;
  uStack_80 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 8);
  local_78 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 0x10);
  uStack_70 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 4);
  local_68 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 0xc);
  uStack_60 = *(undefined8 *)param_1->ShaderHashes[2].Hash;
  local_58 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 8);
  uStack_50 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 0x10);
  local_48 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 4);
  uStack_40 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 0xc);
  local_38 = *(undefined8 *)param_1->ShaderHashes[4].Hash;
  uStack_30 = *(undefined8 *)(param_1->ShaderHashes[4].Hash + 8);
  local_28 = *(undefined4 *)(param_1->ShaderHashes[4].Hash + 0x10);
  uStack_24 = *(undefined4 *)param_1->ShaderHashes[5].Hash;
  uStack_20 = *(undefined4 *)(param_1->ShaderHashes[5].Hash + 4);
  uStack_1c = *(undefined4 *)(param_1->ShaderHashes[5].Hash + 8);
  local_18 = *(undefined8 *)(param_1->ShaderHashes[5].Hash + 0xc);
  uVar1 = (*FCrc::MemCrc32Func)(&local_88,0x78,0);
  iVar2 = TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLProgramKey>(&this->LookupSet,uVar1,param_1);
  return iVar2 != -1;
}

// Empty @ 145bfb8d0

void __thiscall
TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
          (TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *this,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMaxNumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                         ,0xc3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = *(int *)&(this->LookupSet).Elements.field_0x28;
  puVar1 = &(this->LookupSet).Elements.field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(this->LookupSet).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145bfb99d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar3 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar9 < iVar7) {
      iVar7 = iVar9;
    }
  }
LAB_145bfb99d:
  uVar10 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LookupSet).Elements.field_0x8 -
                       *(int *)&(this->LookupSet).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar9 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->LookupSet).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145bfbaa0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145bfbaa0:
  while( true ) {
    if (*(int *)&(this->LookupSet).Elements.field_0x8 -
        *(int *)&(this->LookupSet).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    ::operator_delete(*(void **)(*(longlong *)&(this->LookupSet).Elements +
                                (longlong)TStack_60.CurrentBitIndex * 0x10),0x20);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->MaxNumElements = param_1;
  iVar9 = 1;
  if (3 < (uint)param_1) {
    uVar3 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar8 & 0x1f);
  }
  piVar2 = &(this->LookupSet).HashSize;
  if (((param_1 < 1) || (iVar9 <= *piVar2)) && (*piVar2 <= iVar9)) {
    TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
    ::UnhashElements(&this->LookupSet);
    TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,param_1);
    *piVar2 = iVar9;
    TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
    ::Rehash(&this->LookupSet);
  }
  this->LeastRecent = (FCacheEntry *)0x0;
  this->MostRecent = (FCacheEntry *)0x0;
  return;
}

// Empty @ 145bfbb90

void __thiscall
TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Empty
          (TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*> *this,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMaxNumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                         ,0xc3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = *(int *)&(this->LookupSet).Elements.field_0x28;
  puVar1 = &(this->LookupSet).Elements.field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(this->LookupSet).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145bfbc5d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar3 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar9 < iVar7) {
      iVar7 = iVar9;
    }
  }
LAB_145bfbc5d:
  uVar10 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LookupSet).Elements.field_0x8 -
                       *(int *)&(this->LookupSet).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar9 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->LookupSet).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145bfbd60;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145bfbd60:
  while( true ) {
    if (*(int *)&(this->LookupSet).Elements.field_0x8 -
        *(int *)&(this->LookupSet).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    ::operator_delete(*(void **)(*(longlong *)&(this->LookupSet).Elements +
                                (longlong)TStack_60.CurrentBitIndex * 0x10),0x90);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->MaxNumElements = param_1;
  iVar9 = 1;
  if (3 < (uint)param_1) {
    uVar3 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar8 & 0x1f);
  }
  piVar2 = &(this->LookupSet).HashSize;
  if (((param_1 < 1) || (iVar9 <= *piVar2)) && (*piVar2 <= iVar9)) {
    TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
    ::UnhashElements(&this->LookupSet);
    TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,param_1);
    *piVar2 = iVar9;
    TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
    ::Rehash(&this->LookupSet);
  }
  this->LeastRecent = (FCacheEntry *)0x0;
  this->MostRecent = (FCacheEntry *)0x0;
  return;
}

// MarkAsRecent @ 145c0d250

void __thiscall
TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::MarkAsRecent
          (TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*> *this,FCacheEntry *param_1)

{
  FCacheEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->LeastRecent == (FCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LeastRecent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                       ,0x241,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->MostRecent == (FCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MostRecent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 == this->LeastRecent) &&
     (pFVar1 = this->LeastRecent->MoreRecent, pFVar1 != (FCacheEntry *)0x0)) {
    this->LeastRecent = pFVar1;
  }
  if (param_1 != this->MostRecent) {
    if (param_1->LessRecent != (FCacheEntry *)0x0) {
      param_1->LessRecent->MoreRecent = param_1->MoreRecent;
    }
    if (param_1->MoreRecent != (FCacheEntry *)0x0) {
      param_1->MoreRecent->LessRecent = param_1->LessRecent;
    }
    param_1->LessRecent = (FCacheEntry *)0x0;
    param_1->MoreRecent = (FCacheEntry *)0x0;
    pFVar1 = this->MostRecent;
    param_1->LessRecent = pFVar1;
    if (pFVar1 != (FCacheEntry *)0x0) {
      pFVar1->MoreRecent = param_1;
    }
    this->MostRecent = param_1;
  }
  return;
}

// Remove @ 145c28f70

void __thiscall
TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Remove
          (TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *this,FCacheEntry *param_1)

{
  FCacheEntry **ppFVar1;
  
  if (param_1 != (FCacheEntry *)0x0) {
    TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
    ::Remove(&this->LookupSet,param_1->Key);
    ppFVar1 = &param_1->MoreRecent;
    if (param_1 == this->LeastRecent) {
      this->LeastRecent = *ppFVar1;
    }
    if (param_1 == this->MostRecent) {
      this->MostRecent = param_1->LessRecent;
    }
    if (param_1->LessRecent != (FCacheEntry *)0x0) {
      param_1->LessRecent->MoreRecent = *ppFVar1;
    }
    if (*ppFVar1 != (FCacheEntry *)0x0) {
      (*ppFVar1)->LessRecent = param_1->LessRecent;
    }
    param_1->MoreRecent = (FCacheEntry *)0x0;
    param_1->LessRecent = (FCacheEntry *)0x0;
    ::operator_delete(param_1,0x20);
  }
  return;
}

// Remove @ 145c29010

void __thiscall
TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Remove
          (TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*> *this,FCacheEntry *param_1)

{
  FCacheEntry **ppFVar1;
  uint uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (param_1 != (FCacheEntry *)0x0) {
    if (*(int *)&(this->LookupSet).Elements.field_0x8 !=
        *(int *)&(this->LookupSet).Elements.field_0x34) {
      local_88 = *(undefined8 *)(param_1->Key).ShaderHashes[0].Hash;
      uStack_80 = *(undefined8 *)((param_1->Key).ShaderHashes[0].Hash + 8);
      local_78 = *(undefined8 *)((param_1->Key).ShaderHashes[0].Hash + 0x10);
      uStack_70 = *(undefined8 *)((param_1->Key).ShaderHashes[1].Hash + 4);
      local_68 = *(undefined8 *)((param_1->Key).ShaderHashes[1].Hash + 0xc);
      uStack_60 = *(undefined8 *)(param_1->Key).ShaderHashes[2].Hash;
      local_58 = *(undefined8 *)((param_1->Key).ShaderHashes[2].Hash + 8);
      uStack_50 = *(undefined8 *)((param_1->Key).ShaderHashes[2].Hash + 0x10);
      local_48 = *(undefined8 *)((param_1->Key).ShaderHashes[3].Hash + 4);
      uStack_40 = *(undefined8 *)((param_1->Key).ShaderHashes[3].Hash + 0xc);
      local_38 = *(undefined8 *)(param_1->Key).ShaderHashes[4].Hash;
      uStack_30 = *(undefined8 *)((param_1->Key).ShaderHashes[4].Hash + 8);
      local_28 = *(undefined4 *)((param_1->Key).ShaderHashes[4].Hash + 0x10);
      uStack_24 = *(undefined4 *)(param_1->Key).ShaderHashes[5].Hash;
      uStack_20 = *(undefined4 *)((param_1->Key).ShaderHashes[5].Hash + 4);
      uStack_1c = *(undefined4 *)((param_1->Key).ShaderHashes[5].Hash + 8);
      local_18 = *(undefined8 *)((param_1->Key).ShaderHashes[5].Hash + 0xc);
      uVar2 = (*FCrc::MemCrc32Func)(&local_88,0x78,0);
      TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
      ::RemoveImpl<FOpenGLProgramKey>(&this->LookupSet,uVar2,&param_1->Key);
    }
    ppFVar1 = &param_1->MoreRecent;
    if (param_1 == this->LeastRecent) {
      this->LeastRecent = *ppFVar1;
    }
    if (param_1 == this->MostRecent) {
      this->MostRecent = param_1->LessRecent;
    }
    if (param_1->LessRecent != (FCacheEntry *)0x0) {
      param_1->LessRecent->MoreRecent = *ppFVar1;
    }
    if (*ppFVar1 != (FCacheEntry *)0x0) {
      (*ppFVar1)->LessRecent = param_1->LessRecent;
    }
    param_1->MoreRecent = (FCacheEntry *)0x0;
    param_1->LessRecent = (FCacheEntry *)0x0;
    ::operator_delete(param_1,0x90);
  }
  return;
}

