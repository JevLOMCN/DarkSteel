// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 2

// TMap<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>_> @ 1494c3eb0

TMap<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>_>
* __thiscall
TMap<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>_>
::
TMap<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>_>
          (TMap<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>_>
           *this,initializer_list<TPairInitializer<FShaderValueType_const_&,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_const_&>_>
                 *param_1)

{
  TPairInitializer<FShaderValueType_const_&,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_const_&>
  *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  FShaderValueType *pFVar8;
  TPairInitializer<FShaderValueType_const_&,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_const_&>
  *pTVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined8 local_78;
  TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar11 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar7 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar7 == 0) goto joined_r0x0001494c4117;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar7);
  }
  TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar7);
  if (uVar7 < 4) {
    uVar7 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar7 <= *(int *)&this->field_0x48))
  goto joined_r0x0001494c4117;
  *(uint *)&this->field_0x48 = uVar7;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar7 != 0) {
    uVar4 = uVar7;
    if (uVar7 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar4 = 0;
        goto LAB_1494c3f8b;
      }
    }
    else {
LAB_1494c3f8b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar4,4);
    }
    if (0 < (int)uVar7) {
      uVar12 = (ulonglong)uVar7;
      uVar6 = uVar11;
      do {
        puVar5 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&this->field_0x40;
        }
        uVar3 = uVar6 & (longlong)(int)uVar7 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(puVar5 + uVar3 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar7 = *(uint *)&this->field_0x28;
    pTStack_70 = (TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)> *)
                 &this->field_0x10;
    local_78 = (FShaderValueType *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar13 = (uint *)pTStack_70;
      }
      uVar4 = *puVar13;
      uVar6 = uVar11;
      while (uVar4 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        uVar4 = iVar10 + 1;
        uVar11 = (ulonglong)local_78 >> 0x20;
        local_78 = (FShaderValueType *)CONCAT44((int)uVar11,uVar4);
        uVar11 = (ulonglong)uVar4;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_1494c407b;
        uVar4 = puVar13[(longlong)iVar10 + 1];
      }
      local_78 = (FShaderValueType *)CONCAT44(-uVar4 & uVar4,SUB84(local_78,0));
      uVar11 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1494c407b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTStack_70;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pFVar8 = (FShaderValueType *)((longlong)(int)uVar11 * 0x60 + *(longlong *)local_58);
        uVar7 = ::GetTypeHash(pFVar8);
        uVar7 = *(int *)&this->field_0x48 - 1U & uVar7;
        *(uint *)((longlong)&pFVar8[2].StructElements.AllocatorInstance.Data + 4) = uVar7;
        puVar5 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&this->field_0x40;
        }
        uVar6 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)&pFVar8[2].StructElements.AllocatorInstance.Data =
             *(undefined4 *)(puVar5 + uVar6 * 4);
        *(int *)(puVar5 + uVar6 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x0001494c4117:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = pTVar9->Value;
    TSet<TTuple<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_>,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FShaderValueType_const_&,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_const_&>_>
              ((TSet<TTuple<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_>,TDefaultMapHashableKeyFuncs<FShaderValueType,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FShaderValueType_const_&,TFunction<void___cdecl(FShaderParametersMetadataBuilder_&,wchar_t_const_*)>_const_&>
                        *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// ~TMap<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>_> @ 1494c51c0

void __thiscall
TMap<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>_>
::
~TMap<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>_>
          (TMap<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

