// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 7

// FShaderBindingTable @ 145cd1780

FShaderBindingTable * __thiscall
RHIValidation::FShaderBindingTable::FShaderBindingTable
          (FShaderBindingTable *this,FRayTracingShaderBindingTableInitializer *param_1)

{
  this->bIsDirty = true;
  *(undefined8 *)&this->WorkerData[0].SRVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[0].SRVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[0].SRVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x34 = 0;
  this->WorkerData[0].SRVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[0].SRVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[0].UAVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[0].UAVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[0].UAVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x34 = 0;
  this->WorkerData[0].UAVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[0].UAVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[1].SRVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[1].SRVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[1].SRVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[1].SRVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[1].SRVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[1].SRVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[1].SRVs.Elements.field_0x34 = 0;
  this->WorkerData[1].SRVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[1].SRVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[1].UAVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[1].UAVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[1].UAVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[1].UAVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[1].UAVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[1].UAVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[1].UAVs.Elements.field_0x34 = 0;
  this->WorkerData[1].UAVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[1].UAVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[2].SRVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[2].SRVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[2].SRVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[2].SRVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[2].SRVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[2].SRVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[2].SRVs.Elements.field_0x34 = 0;
  this->WorkerData[2].SRVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[2].SRVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[2].UAVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[2].UAVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[2].UAVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[2].UAVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[2].UAVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[2].UAVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[2].UAVs.Elements.field_0x34 = 0;
  this->WorkerData[2].UAVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[2].UAVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[3].SRVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[3].SRVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[3].SRVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[3].SRVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[3].SRVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[3].SRVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[3].SRVs.Elements.field_0x34 = 0;
  this->WorkerData[3].SRVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[3].SRVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[3].UAVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[3].UAVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[3].UAVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[3].UAVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[3].UAVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[3].UAVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[3].UAVs.Elements.field_0x34 = 0;
  this->WorkerData[3].UAVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[3].UAVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[4].SRVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[4].SRVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[4].SRVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[4].SRVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[4].SRVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[4].SRVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[4].SRVs.Elements.field_0x34 = 0;
  this->WorkerData[4].SRVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[4].SRVs.HashSize = 0;
  *(undefined8 *)&this->WorkerData[4].UAVs.Elements = 0;
  *(undefined8 *)&this->WorkerData[4].UAVs.Elements.field_0x8 = 0;
  *(undefined8 *)&this->WorkerData[4].UAVs.Elements.field_0x20 = 0;
  *(undefined4 *)&this->WorkerData[4].UAVs.Elements.field_0x28 = 0;
  *(undefined4 *)&this->WorkerData[4].UAVs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->WorkerData[4].UAVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[4].UAVs.Elements.field_0x34 = 0;
  this->WorkerData[4].UAVs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->WorkerData[4].UAVs.HashSize = 0;
  this->LifeTime = param_1->Lifetime;
  this->ShaderBindingMode = param_1->ShaderBindingMode;
  this->HitGroupIndexingMode = param_1->HitGroupIndexingMode;
  return this;
}

// operator() @ 145cd3430

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable'::__l5::<lambda_1>::operator()
          (void *this,FTaskContext *param_1,int param_2)

{
  uint uVar1;
  FShaderBindingTable *pFVar2;
  FRHIRayTracingGeometry *pFVar3;
  FRHIBuffer *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  FRayTracingLocalShaderBindings *pFVar12;
  ulonglong uVar13;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  pFVar12 = (FRayTracingLocalShaderBindings *)
            ((longlong)param_2 * 0x38 + *(longlong *)((longlong)this + 0x10));
  if ((pFVar12->BindingType == Persistent) || (pFVar12->BindingType == Validation)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  pFVar2 = *(FShaderBindingTable **)this;
  if (((pFVar2->HitGroupIndexingMode == Allow) && (bVar8)) &&
     ((pFVar2->ShaderBindingMode & RTPSO) != Disabled)) {
    RHIValidation::CollectShaderBindingTableResources
              (*(FRayTracingPipelineState **)((longlong)this + 8),pFVar2,pFVar12,
               *(ERayTracingBindingType *)((longlong)this + 0x18),param_1->WorkerIndex);
    pFVar3 = pFVar12->Geometry;
    uVar11 = 0;
    pFVar4 = (pFVar3->Initializer).IndexBuffer.Reference;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      local_6c = (undefined4)pFVar4->_padding_;
      local_78 = &pFVar4->_padding_;
      local_70 = 0;
      local_68 = 0;
      local_64 = *(undefined4 *)((longlong)&pFVar4->_padding_ + 4);
      local_5c = (undefined4)pFVar4->_padding_;
      local_60 = 0;
      TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
      ::Emplace<RHIValidation::FResourceIdentity_const_&>
                ((TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
                  *)((ulonglong)param_1->WorkerIndex * 0xa0 + *(longlong *)this + 8),
                 (FResourceIdentity *)&stack0x00000018,(bool *)&local_78);
    }
    uVar13 = uVar11;
    if (0 < (pFVar3->Initializer).Segments.ArrayNum) {
      do {
        uVar10 = (uint)uVar11;
        lVar5 = *(longlong *)this;
        uVar1 = param_1->WorkerIndex;
        uVar9 = 0;
        if ((int)uVar10 < (pFVar3->Initializer).Segments.ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        lVar6 = *(longlong *)((pFVar3->Initializer).Segments.AllocatorInstance.Data + uVar13);
        local_4c = *(undefined4 *)(lVar6 + 0x28);
        local_58 = lVar6 + 0x28;
        local_44 = *(undefined4 *)(lVar6 + 0x2c);
        local_3c = *(undefined4 *)(lVar6 + 0x30);
        TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
        ::Emplace<RHIValidation::FResourceIdentity_const_&>
                  ((TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
                    *)((ulonglong)uVar1 * 0xa0 + 8 + lVar5),(FResourceIdentity *)&stack0x00000008,
                   (bool *)&local_58);
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar13 = uVar13 + 0x28;
      } while ((int)(uVar10 + 1) < (pFVar3->Initializer).Segments.ArrayNum);
    }
  }
  return;
}

// Clear @ 145cd8560

void __thiscall RHIValidation::FShaderBindingTable::Clear(FShaderBindingTable *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < this->WorkerData[0].SRVs.HashSize;
  if (!bVar3) {
    TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->WorkerData[0].SRVs);
  }
  puVar1 = &this->WorkerData[0].SRVs.Elements.field_0xc;
  *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this->WorkerData,0,(int *)puVar1);
  }
  *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x34 = 0;
  iVar2 = *(int *)&this->WorkerData[0].SRVs.Elements.field_0x2c;
  *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&this->WorkerData[0].SRVs.Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->WorkerData[0].SRVs.Elements.field_0x10
               ,0);
  }
  if (bVar3) {
    this->WorkerData[0].SRVs.HashSize = 1;
    TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
    ::Rehash(&this->WorkerData[0].SRVs);
  }
  bVar3 = 1 < this->WorkerData[0].UAVs.HashSize;
  if (!bVar3) {
    TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->WorkerData[0].UAVs);
  }
  puVar1 = &this->WorkerData[0].UAVs.Elements.field_0xc;
  *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->WorkerData[0].UAVs,0,(int *)puVar1);
  }
  *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x34 = 0;
  iVar2 = *(int *)&this->WorkerData[0].UAVs.Elements.field_0x2c;
  *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&this->WorkerData[0].UAVs.Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->WorkerData[0].UAVs.Elements.field_0x10
               ,0);
  }
  if (bVar3) {
    this->WorkerData[0].UAVs.HashSize = 1;
    TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
    ::Rehash(&this->WorkerData[0].UAVs);
  }
  this->bIsDirty = true;
  return;
}

// Commit @ 145cd88b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall RHIValidation::FShaderBindingTable::Commit(FShaderBindingTable *this)

{
  TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
  *this_00;
  TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
  *this_01;
  ulonglong uVar1;
  code *pcVar2;
  TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
  *pTVar3;
  TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
  *pTVar11;
  int *piVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
  *local_158;
  undefined4 uStack_124;
  longlong local_120;
  undefined1 local_10c [20];
  TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  piVar12 = (int *)&this->WorkerData[1].SRVs.Elements.field_0x2c;
  local_120 = 4;
  pTVar11 = &this->WorkerData[1].SRVs;
  local_158 = &this->WorkerData[1].UAVs;
  do {
    iVar8 = 0;
    iVar13 = 0;
    uVar6 = 1;
    uVar10 = piVar12[-1];
    uVar7 = 0;
    if (uVar10 != 0) {
      puVar15 = *(uint **)(piVar12 + -3);
      if (*(uint **)(piVar12 + -3) == (uint *)0x0) {
        puVar15 = (uint *)(piVar12 + -7);
      }
      uVar7 = *puVar15;
      while (uVar7 == 0) {
        lVar9 = (longlong)iVar8;
        iVar13 = iVar13 + 0x20;
        iVar8 = iVar8 + 1;
        uVar7 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_145cd8970;
        uVar7 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar7 & uVar7;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      uVar7 = local_res20 + -1 + iVar13;
      if ((int)uVar10 < (int)uVar7) {
        uVar7 = uVar10;
      }
    }
LAB_145cd8970:
    TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7);
    uVar16 = uVar10 & 0xffffffe0;
    TStack_f0._padding_ = CONCAT44(uVar6,iVar8);
    TStack_f0.CurrentBitIndex = uVar7;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar8 = (int)uVar10 >> 5;
    TStack_f0._28_4_ = local_6c;
    TStack_f0.BaseBitIndex = iVar13;
    uStack_d0 = CONCAT44(uStack_124,piVar12[-9] - piVar12[2]);
    local_f8 = pTVar11;
    if (((int)uVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = piVar12[-1];
    if (uVar10 != uVar7) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar12 + -3) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar12 + -3);
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar8;
        uVar16 = uVar16 + 0x20;
        iVar8 = iVar8 + 1;
        uVar10 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_145cd8a80;
        uVar10 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (int)lVar9 + -1 + uVar16;
      if ((int)uVar7 < (int)uVar10) {
        uVar10 = uVar7;
      }
    }
LAB_145cd8a80:
    this_00 = (TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
               *)(piVar12 + -0xb);
    while( true ) {
      pTVar3 = local_f8;
      if (*(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34 !=
          (int)uStack_d0) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<RHIValidation::FResourceIdentity>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_f0.CurrentBitIndex == uVar10) &&
          (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7))) &&
         (pTVar3 == this_00)) break;
      TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
      ::Emplace<RHIValidation::FResourceIdentity_const_&>
                (&this->WorkerData[0].SRVs,(FResourceIdentity *)local_10c,
                 (bool *)(*(longlong *)&pTVar3->Elements +
                         (longlong)TStack_f0.CurrentBitIndex * 0x28));
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    uVar10 = piVar12[0x13];
    iVar13 = 0;
    iVar8 = 0;
    uVar6 = 1;
    uVar7 = 0;
    if (uVar10 != 0) {
      puVar15 = *(uint **)(piVar12 + 0x11);
      if (*(uint **)(piVar12 + 0x11) == (uint *)0x0) {
        puVar15 = (uint *)(piVar12 + 0xd);
      }
      uVar7 = *puVar15;
      while (uVar7 == 0) {
        lVar9 = (longlong)iVar13;
        iVar8 = iVar8 + 0x20;
        iVar13 = iVar13 + 1;
        uVar7 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_145cd8b7f;
        uVar7 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar7 & uVar7;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_10c._4_4_ = (undefined4)lVar9;
      uVar7 = iVar8 + -1 + local_10c._4_4_;
      if ((int)uVar10 < (int)uVar7) {
        uVar7 = uVar10;
      }
    }
LAB_145cd8b7f:
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + 0xd);
    uVar16 = uVar10 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uVar6,iVar13);
    TStack_c0.CurrentBitIndex = uVar7;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    local_c8 = local_158;
    iVar13 = (int)uVar10 >> 5;
    TStack_c0._28_4_ = local_4c;
    TStack_c0.BaseBitIndex = iVar8;
    uStack_a0 = CONCAT44(uStack_124,piVar12[0xb] - piVar12[0x16]);
    if (((int)uVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = piVar12[0x13];
    if (uVar10 != uVar7) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + 0xd);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar12 + 0x11) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar12 + 0x11);
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar13;
        uVar16 = uVar16 + 0x20;
        iVar13 = iVar13 + 1;
        uVar10 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_145cd8c8f;
        uVar10 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_10c._8_4_ = (undefined4)lVar9;
      uVar10 = (local_10c._8_4_ - 1) + uVar16;
      if ((int)uVar7 < (int)uVar10) {
        uVar10 = uVar7;
      }
    }
LAB_145cd8c8f:
    this_01 = (TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
               *)(piVar12 + 9);
    while( true ) {
      pTVar4 = local_c8;
      if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
          (int)uStack_a0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<RHIValidation::FUAVBinding>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_c0.CurrentBitIndex == uVar10) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + 0xd))) &&
         (pTVar4 == this_01)) break;
      lVar9 = *(longlong *)&pTVar4->Elements;
      local_98 = *(undefined8 *)(lVar9 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
      local_90 = *(undefined4 *)(lVar9 + (longlong)TStack_c0.CurrentBitIndex * 0x18 + 8);
      TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
      ::Emplace<RHIValidation::FUAVBinding>
                (&this->WorkerData[0].UAVs,(FUAVBinding *)(local_10c + 0xc),(bool *)&local_98);
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    iVar8 = piVar12[7];
    if (1 >= iVar8) {
      TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    piVar12[-9] = 0;
    if (piVar12[-8] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this_00,0,piVar12 + -8);
    }
    piVar12[1] = -1;
    piVar12[2] = 0;
    piVar12[-1] = 0;
    if ((*piVar12 < 0) || (0x80 < *piVar12)) {
      *piVar12 = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7),0);
    }
    if (1 < iVar8) {
      piVar12[7] = 1;
      TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
    iVar8 = piVar12[0x1b];
    if (1 >= iVar8) {
      TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
      ::UnhashElements(this_01);
    }
    piVar12[0xb] = 0;
    if (piVar12[0xc] != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_01,0,piVar12 + 0xc);
    }
    piVar12[0x15] = -1;
    piVar12[0x16] = 0;
    piVar12[0x13] = 0;
    if ((piVar12[0x14] < 0) || (0x80 < piVar12[0x14])) {
      piVar12[0x14] = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + 0xd),0);
    }
    if (1 < iVar8) {
      piVar12[0x1b] = 1;
      TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
      ::Rehash(this_01);
    }
    piVar12 = piVar12 + 0x28;
    local_120 = local_120 + -1;
    pTVar11 = pTVar11 + 2;
    local_158 = local_158 + 2;
    if (local_120 == 0) {
      this->bIsDirty = false;
      return;
    }
  } while( true );
}

// SetBindingsOnShaderBindingTable @ 145cf13a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable
          (FShaderBindingTable *this,FRayTracingPipelineState *param_1,uint param_2,
          FRayTracingLocalShaderBindings *param_3,ERayTracingBindingType param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  FTaskGraphInterface *pFVar5;
  ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
  FVar6;
  longlong lVar7;
  TRefCountPtr<FBaseGraphTask> *pTVar8;
  TRefCountPtr<FBaseGraphTask> *pTVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStackY_158 [32];
  uint local_108;
  <lambda_1> local_104;
  uint local_100;
  ForAnyElementType local_f8;
  int iStack_f0;
  int iStack_ec;
  ForAnyElementType local_e8;
  FRayTracingPipelineState *pFStack_e0;
  FRayTracingLocalShaderBindings *local_d8;
  ERayTracingBindingType EStack_d0;
  undefined7 uStack_cf;
  TRefCountPtr<FBaseGraphTask> local_c8 [4];
  TRefCountPtr<FBaseGraphTask> *local_a8;
  int local_a0;
  undefined4 local_9c;
  TArrayView<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext,int>
  local_98;
  <lambda_1> local_88;
  ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
  local_68;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar11 = -1 < CpuChannel->Enabled;
  local_100 = param_2;
  local_f8.Data = (FScriptContainerElement *)param_1;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId473,"RHIValidation-SetBindingsOnShaderBindingTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
               ,0x1d9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId473);
  }
  if (this->LifeTime == Persistent) goto LAB_145cf169f;
  local_a8 = (TRefCountPtr<FBaseGraphTask> *)0x0;
  local_a0 = 0;
  local_9c = 4;
  pFVar5 = FTaskGraphInterface::Get();
  uVar4 = (**(code **)((longlong)*pFVar5 + 0x20))(pFVar5);
  bVar3 = FApp::ShouldUseThreadingForPerformance();
  local_44 = 5;
  if (bVar3) {
    uVar10 = 5;
    if (uVar4 < 5) {
      uVar10 = uVar4;
    }
    local_68.SecondaryData =
         (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
          )0x0;
    uVar4 = 0;
    local_48 = 0;
    pTVar9 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    if (uVar10 != 0) goto LAB_145cf14c0;
  }
  else {
    local_68.SecondaryData =
         (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
          )0x0;
    uVar4 = 0;
    local_48 = 0;
    uVar10 = 1;
LAB_145cf14c0:
    do {
      FVar6 = (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
               )&local_68;
      if (local_68.SecondaryData !=
          (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
           )0x0) {
        FVar6 = local_68.SecondaryData;
      }
      local_108 = uVar4;
      if ((ulonglong)FVar6 <= &local_108) {
        FVar6 = (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
                 )&local_68;
        if (local_68.SecondaryData !=
            (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
             )0x0) {
          FVar6 = local_68.SecondaryData;
        }
        if ((&local_108 < (uint *)((longlong)FVar6 + (longlong)local_44 * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_48 == local_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>_>
                             (0x404,&local_68,&local_44);
      }
      lVar7 = (longlong)local_48;
      FVar6 = (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
               )&local_68;
      if (local_68.SecondaryData !=
          (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
           )0x0) {
        FVar6 = local_68.SecondaryData;
      }
      uVar4 = uVar4 + 1;
      local_48 = local_48 + 1;
      *(uint *)((longlong)FVar6 + lVar7 * 4) = local_108;
      pTVar9 = local_a8;
    } while (uVar4 < uVar10);
  }
  iVar2 = local_48;
  pFStack_e0 = (FRayTracingPipelineState *)local_f8.Data;
  EStack_d0 = param_4;
  local_f8.Data = (FScriptContainerElement *)&local_68;
  if (local_68.SecondaryData !=
      (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
       )0x0) {
    local_f8.Data = (FScriptContainerElement *)local_68.SecondaryData;
  }
  local_e8.Data = (FScriptContainerElement *)this;
  local_d8 = param_3;
  if ((local_48 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_98._12_4_ = iStack_ec;
  local_98.ArrayNum = iVar2;
  local_98.DataPtr = (FTaskContext *)local_f8.Data;
  local_88._25_7_ = uStack_cf;
  local_88.BindingType = EStack_d0;
  local_88.__this = (FShaderBindingTable *)local_e8.Data;
  local_88.RayTracingPipelineState = pFStack_e0;
  local_88.Bindings = local_d8;
  iStack_f0 = iVar2;
  ParallelForImpl::
  ParallelForInternal<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>,_ParallelForWithExistingTaskContext<_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::<lambda_1>_>_::__l2::<lambda_1>,_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable_::__l5::FTaskContext>
            (L"SetRayTracingBindings",local_100,0x400,&local_88,local_104,None,&local_98);
  if (local_68.SecondaryData !=
      (ForElementType<_public:_void___cdecl_RHIValidation::FShaderBindingTable::SetBindingsOnShaderBindingTable(RHIValidation::FRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_5_::FTaskContext>
       )0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  pTVar8 = local_c8;
  if (pTVar9 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar8 = pTVar9;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar8,local_a0);
  if (pTVar9 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    FMemory::Free(pTVar9);
  }
LAB_145cf169f:
  this->bIsDirty = true;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ValidateStateForDispatch @ 145cf6160

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
RHIValidation::FShaderBindingTable::ValidateStateForDispatch
          (FShaderBindingTable *this,FTracker *param_1)

{
  undefined1 *puVar1;
  TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
  *pTVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ERHIPipeline EVar6;
  int iVar7;
  uint uVar8;
  FRHIUnorderedAccessView *pFVar9;
  code *pcVar10;
  TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
  *pTVar11;
  FWorkerThreadData *pFVar12;
  FWorkerThreadData *pFVar13;
  bool bVar14;
  FRHIUnorderedAccessView **ppFVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1b8 [8];
  ulonglong local_1b0;
  FResource *local_1a8;
  FState FStack_1a0;
  void *local_198;
  uint uStack_190;
  uint uStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FState local_148;
  undefined8 uStack_140;
  void *local_138;
  FWorkerThreadData *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  int local_f8;
  FWorkerThreadData *local_f0;
  undefined2 local_e3;
  undefined1 local_e1;
  FWorkerThreadData *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FOperation local_b0;
  undefined4 local_4c;
  
  if (this->bIsDirty != false) {
    local_res18[0] = 0;
    `RHIValidation::FShaderBindingTable::ValidateStateForDispatch'::__l2::<lambda_1>::operator()
              (local_res18);
  }
  iVar7 = *(int *)&this->WorkerData[0].SRVs.Elements.field_0x28;
  puVar1 = &this->WorkerData[0].SRVs.Elements.field_0x10;
  local_130 = this->WorkerData;
  local_1b0 = 1;
  iStack_128 = 0;
  local_110 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  if (iVar7 != 0) {
    puVar20 = *(uint **)&this->WorkerData[0].SRVs.Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uStack_124 = *puVar20;
    local_110 = 0;
    while (uStack_124 == 0) {
      lVar16 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      uStack_124 = 1;
      iStack_114 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_145cf622f;
      uStack_124 = puVar20[lVar16 + 1];
    }
    uStack_124 = -uStack_124 & uStack_124;
    uVar4 = (ulonglong)uStack_124 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_100 = (int)lVar16;
    iStack_114 = local_110 + -1 + local_100;
    if (iVar7 < iStack_114) {
      iStack_114 = iVar7;
    }
  }
LAB_145cf622f:
  uVar18 = *(uint *)&this->WorkerData[0].SRVs.Elements.field_0x28;
  uStack_10c = local_4c;
  iStack_108 = *(int *)&this->WorkerData[0].SRVs.Elements.field_0x8 -
               *(int *)&this->WorkerData[0].SRVs.Elements.field_0x34;
  uVar21 = uVar18 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(uStack_124,iStack_128);
  uStack_118 = 0xffffffff;
  TStack_d8.CurrentBitIndex = iStack_114;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar18 >> 5;
  TStack_d8._28_4_ = local_4c;
  TStack_d8.BaseBitIndex = local_110;
  uStack_b8 = CONCAT44(uStack_104,iStack_108);
  local_120 = puVar1;
  local_f0 = local_130;
  local_e0 = local_130;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar7 < (int)uVar18)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar12 = local_f0;
  uVar8 = *(uint *)&this->WorkerData[0].SRVs.Elements.field_0x28;
  if (uVar18 != uVar8) {
    puVar19 = *(undefined1 **)&this->WorkerData[0].SRVs.Elements.field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_145cf6350;
      uVar18 = *(uint *)(puVar19 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_fc = (int)lVar16;
    uVar18 = local_fc + -1 + uVar21;
    if ((int)uVar8 < (int)uVar18) {
      uVar18 = uVar8;
    }
  }
LAB_145cf6350:
  while( true ) {
    pFVar13 = local_e0;
    if (*(int *)&(local_e0->SRVs).Elements.field_0x8 - *(int *)&(local_e0->SRVs).Elements.field_0x34
        != (int)uStack_b8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<RHIValidation::FResourceIdentity>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d8.CurrentBitIndex == uVar18) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar13 == pFVar12)
       ) break;
    EVar6 = param_1->Pipeline;
    lVar16 = *(longlong *)&(pFVar13->SRVs).Elements;
    plVar3 = (longlong *)(lVar16 + (longlong)TStack_d8.CurrentBitIndex * 0x28);
    local_1a8 = (FResource *)*plVar3;
    FStack_1a0 = *(FState *)(plVar3 + 1);
    puVar5 = (undefined8 *)(lVar16 + 0x10 + (longlong)TStack_d8.CurrentBitIndex * 0x28);
    local_198 = (void *)*puVar5;
    puVar20 = (uint *)(puVar5 + 1);
    uStack_190 = *puVar20;
    uStack_18c = *(uint *)((longlong)puVar5 + 0xc);
    TStack_170.BaseBitIndex = puVar20[0];
    TStack_170._28_4_ = puVar20[1];
    LOCK();
    (local_1a8->NumOpRefs).Counter = (local_1a8->NumOpRefs).Counter + 1;
    UNLOCK();
    uStack_150._4_4_ = (uint)EVar6;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x10);
    uStack_150 = CONCAT17(local_e1,CONCAT25(local_e3,(undefined5)uStack_150));
    local_178 = (TSet<RHIValidation::FUAVBinding,DefaultKeyFuncs<RHIValidation::FUAVBinding,0>,FDefaultSetAllocator>
                 *)CONCAT44(local_178._4_4_,Assert);
    local_b0._0_8_ = local_178;
    uStack_150 = CONCAT44(uStack_150._4_4_,0x10);
    local_b0.field1_0x8.Data_BeginTransition.PreviousState.Access = SRVCompute;
    local_b0.field1_0x8._36_4_ = uStack_150._4_4_;
    local_b0.field1_0x8.Data_BeginTransition.CreateBacktrace = local_138;
    local_b0.field1_0x8.Data_BeginTransition.NextState = local_148;
    local_b0.field1_0x8._48_8_ = uStack_140;
    TStack_170._padding_ = (longlong)local_1a8;
    local_b0.field1_0x8.Data_BeginTransition.Identity.Resource = local_1a8;
    local_b0.field1_0x8.Data_SetTrackedAccess.State = FStack_1a0;
    local_b0.field1_0x8.Data_AliasingOverlap.CreateBacktrace = local_198;
    local_b0.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex = uStack_190;
    local_b0.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes = uStack_18c;
    FTracker::AddOp(param_1,&local_b0);
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  iVar17 = 0;
  local_188 = 0;
  puVar1 = &this->WorkerData[0].UAVs.Elements.field_0x10;
  iVar7 = *(int *)&this->WorkerData[0].UAVs.Elements.field_0x28;
  pTVar2 = &this->WorkerData[0].UAVs;
  uStack_18c = 0;
  if (iVar7 != 0) {
    puVar20 = *(uint **)&this->WorkerData[0].UAVs.Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar17;
      local_188 = local_188 + 0x20;
      iVar17 = iVar17 + 1;
      uStack_18c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_145cf64be;
      uVar18 = puVar20[lVar16 + 1];
    }
    local_1b0 = (ulonglong)(-uVar18 & uVar18);
    uVar4 = local_1b0 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_f8 = (int)lVar16;
    uStack_18c = local_188 + -1 + local_f8;
    if (iVar7 < (int)uStack_18c) {
      uStack_18c = iVar7;
    }
  }
LAB_145cf64be:
  iStack_184 = iStack_114;
  iStack_180 = *(int *)&this->WorkerData[0].UAVs.Elements.field_0x8 -
               *(int *)&this->WorkerData[0].UAVs.Elements.field_0x34;
  FStack_1a0 = (FState)CONCAT44((int)local_1b0,iVar17);
  uVar18 = *(uint *)&this->WorkerData[0].UAVs.Elements.field_0x28;
  uStack_190 = 0xffffffff;
  uVar21 = uVar18 & 0xffffffe0;
  TStack_170.CurrentBitIndex = uStack_18c;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar18 >> 5;
  TStack_170._28_4_ = iStack_114;
  TStack_170.BaseBitIndex = local_188;
  uStack_150 = CONCAT44(uStack_17c,iStack_180);
  local_1a8 = (FResource *)pTVar2;
  local_198 = puVar1;
  local_178 = pTVar2;
  TStack_170._padding_ = (longlong)FStack_1a0;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar7 < (int)uVar18)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar8 = *(uint *)&this->WorkerData[0].UAVs.Elements.field_0x28;
  if (uVar18 != uVar8) {
    puVar19 = *(undefined1 **)&this->WorkerData[0].UAVs.Elements.field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_145cf65e0;
      uVar18 = *(uint *)(puVar19 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar18 = (int)lVar16 + -1 + uVar21;
    if ((int)uVar8 < (int)uVar18) {
      uVar18 = uVar8;
    }
  }
LAB_145cf65e0:
  while( true ) {
    pTVar11 = local_178;
    if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34 !=
        (int)uStack_150) {
      `TSparseArray<TSparseSetElement<RHIValidation::FUAVBinding>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1b8);
    }
    if (((TStack_170.CurrentBitIndex == uVar18) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) break;
    lVar16 = *(longlong *)&pTVar11->Elements;
    pFVar9 = *(FRHIUnorderedAccessView **)(lVar16 + (longlong)TStack_170.CurrentBitIndex * 0x18);
    ppFVar15 = FTracker::FUAVTracker::operator[]
                         (param_1->UAVTrackers + 1,
                          *(int *)(lVar16 + 8 + (longlong)TStack_170.CurrentBitIndex * 0x18));
    *ppFVar15 = pFVar9;
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  return;
}

// operator() @ 1504daf20

bool __thiscall
`RHIValidation::FShaderBindingTable::ValidateStateForDispatch'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6018585595129889321>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6018585595129889321>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

