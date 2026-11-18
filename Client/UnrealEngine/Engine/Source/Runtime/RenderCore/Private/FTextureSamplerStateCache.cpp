// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ReleaseRHI @ 145ddb6d0

void __thiscall FTextureSamplerStateCache::ReleaseRHI(FTextureSamplerStateCache *this)

{
  undefined1 *puVar1;
  TMap<FSamplerStateInitializerRHI,FRHISamplerState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>_>
  *this_00;
  FAtomicFlags *pFVar2;
  ulonglong uVar3;
  atomic<unsigned_int> aVar4;
  FRHIResource *this_01;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined8 uStack_b0;
  uint uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar5 = *(int *)&(this->Samplers).field_0x28;
  puVar1 = &(this->Samplers).field_0x10;
  iVar12 = 0;
  this_00 = &this->Samplers;
  TStack_80.BaseBitIndex = 0;
  uVar8 = 1;
  TStack_80.CurrentBitIndex = TStack_80.BaseBitIndex;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(this->Samplers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    TStack_80.BaseBitIndex = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      TStack_80.BaseBitIndex = TStack_80.BaseBitIndex + 0x20;
      iVar12 = iVar12 + 1;
      TStack_80.CurrentBitIndex = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145ddb77e;
      uVar11 = puVar14[lVar9 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    TStack_80.CurrentBitIndex = local_res10 + -1 + TStack_80.BaseBitIndex;
    if (iVar5 < TStack_80.CurrentBitIndex) {
      TStack_80.CurrentBitIndex = iVar5;
    }
  }
LAB_145ddb77e:
  uVar11 = *(uint *)&(this->Samplers).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  uStack_b0 = CONCAT44(uVar8,iVar12);
  TStack_80._padding_ = uStack_b0;
  iVar12 = (int)uVar11 >> 5;
  uStack_60 = CONCAT44(uStack_8c,
                       *(int *)&(this->Samplers).field_0x8 - *(int *)&(this->Samplers).field_0x34);
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = local_3c;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar5 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->Samplers).field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->Samplers).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145ddb880;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar11 = local_res18 + -1 + uVar10;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_145ddb880:
  do {
    if (*(int *)&(this->Samplers).field_0x8 - *(int *)&(this->Samplers).field_0x34 != (int)uStack_60
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_80.CurrentBitIndex == uVar11) &&
       (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      bVar7 = 1 < *(int *)&(this->Samplers).field_0x48;
      if (!bVar7) {
        TSet<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->Samplers).field_0xc;
      *(undefined4 *)&(this->Samplers).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->Samplers).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->Samplers).field_0x34 = 0;
      iVar5 = *(int *)&(this->Samplers).field_0x2c;
      *(undefined4 *)&(this->Samplers).field_0x28 = 0;
      if ((iVar5 < 0) || (0x80 < iVar5)) {
        *(undefined4 *)&(this->Samplers).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Samplers).field_0x10,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->Samplers).field_0x48 = 1;
        TSet<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      return;
    }
    this_01 = *(FRHIResource **)
               (*(longlong *)&this_00->field_0x0 + 0x20 + (longlong)TStack_80.CurrentBitIndex * 0x30
               );
    LOCK();
    pFVar2 = &this_01->AtomicFlags;
    aVar4 = pFVar2->Packed;
    pFVar2->Packed = (atomic<unsigned_int>)((int)pFVar2->Packed + -1);
    UNLOCK();
    if (((int)aVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa2,L"Resource is being deleted."), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = (uint)aVar4 & 0x3fffffff;
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xa4,L"Reference count has underflowed.");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewValue >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x53,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (uVar8 == 1) {
      FRHIResource::MarkForDelete(this_01);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

