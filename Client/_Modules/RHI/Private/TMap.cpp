// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 10

// Append<FDefaultSetAllocator> @ 145c3b750

void __thiscall
TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
::Append<FDefaultSetAllocator>
          (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
           *this,TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar9 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar9 = (uint *)puVar1;
    }
    uVar11 = *puVar9;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145c3b7fd;
      uVar11 = puVar9[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145c3b7fd:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145c3b900;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_145c3b900:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar9 = (uint *)((longlong)TStack_60.CurrentBitIndex * 0xc0 + *(longlong *)param_1);
    TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
    ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>
              ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                *)this,puVar9,(FPipelineCacheFileFormatPSOMetaData *)(puVar9 + 2));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// FindAndRemoveChecked @ 145c57920

int __thiscall
TMap<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
::FindAndRemoveChecked
          (TMap<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
           *this,FRHIBreadcrumbData_Stats *param_1)

{
  uint uVar1;
  FGPUStat *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  
  pFVar2 = param_1->GPUStat;
  uVar7 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar6 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar6 + (ulonglong)(*(int *)&this->field_0x48 - 1U & (uVar7 >> 0x10 ^ uVar7))
                               * 4);
    if (uVar7 != 0xffffffff) {
      do {
        if (*(FGPUStat **)(*(longlong *)this + (longlong)(int)uVar7 * 0x18) == pFVar2) {
          if (uVar7 == 0xffffffff) goto LAB_145c579bf;
          goto LAB_145c579e5;
        }
        uVar7 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar7 * 0x18);
      } while (uVar7 != 0xffffffff);
    }
  }
  uVar7 = 0xffffffff;
LAB_145c579bf:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_145c579e5:
  iVar5 = *(int *)((longlong)(int)uVar7 * 0x18 + 8 + *(longlong *)this);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
    puVar6 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_145c57a56;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_145c57a56:
  lVar8 = *(longlong *)this + (longlong)(int)uVar7 * 0x18;
  puVar6 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar6 = &this->field_0x38;
  }
  puVar9 = (uint *)(puVar6 + (longlong)*(int *)(lVar8 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar9 = *(uint *)(lVar8 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return iVar5;
    }
    puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_> @ 145c84860

TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
* __thiscall
TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
::
TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
           *this,TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_> @ 145c84980

TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
* __thiscall
TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
::
TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_> @ 145c849c0

TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
* __thiscall
TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
::
TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
          (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
           *this,TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_> @ 145c84ae0

TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
* __thiscall
TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
::
TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
          (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_> @ 145c84b20

TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
* __thiscall
TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
::
TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
          (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// ~TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_> @ 145c897d0

void __thiscall
TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
::
~TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_> @ 145c89810

void __thiscall
TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
::
~TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
          (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_> @ 145c89850

void __thiscall
TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
::
~TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
          (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

