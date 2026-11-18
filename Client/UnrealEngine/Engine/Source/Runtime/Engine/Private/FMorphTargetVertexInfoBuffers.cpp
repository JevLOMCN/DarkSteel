// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FMorphTargetVertexInfoBuffers @ 1483e1d60

FMorphTargetVertexInfoBuffers * __thiscall
FMorphTargetVertexInfoBuffers::FMorphTargetVertexInfoBuffers(FMorphTargetVertexInfoBuffers *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->bIsMorphCPUDataValid = false;
  this->bResourcesInitialized = false;
  this->bRHIInitialized = false;
  this->bEmptyMorphCPUDataOnInitRHI = true;
  this->NumTotalBatches = 0;
  this->PositionPrecision = 0.0;
  this->_padding_ = (longlong)&___7FMorphTargetVertexInfoBuffers__6B_;
  (this->MorphData)._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
  (this->MorphDataBuffer).Reference = (FRHIBuffer *)0x0;
  (this->MorphDataSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->MorphData)._padding_ = 0;
  (this->MorphData)._padding_ = 0;
  (this->MorphData).bNeedsCPUAccess = false;
  (this->MaximumValuePerMorph).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaximumValuePerMorph).ArrayNum = 0;
  (this->MaximumValuePerMorph).ArrayMax = 0;
  (this->MinimumValuePerMorph).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MinimumValuePerMorph).ArrayNum = 0;
  (this->MinimumValuePerMorph).ArrayMax = 0;
  (this->BatchStartOffsetPerMorph).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchStartOffsetPerMorph).ArrayNum = 0;
  (this->BatchStartOffsetPerMorph).ArrayMax = 0;
  (this->BatchesPerMorph).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchesPerMorph).ArrayNum = 0;
  (this->BatchesPerMorph).ArrayMax = 0;
  this->TangentZPrecision = 0.0;
  return this;
}

// ~FMorphTargetVertexInfoBuffers @ 1483e8970

void __thiscall
FMorphTargetVertexInfoBuffers::~FMorphTargetVertexInfoBuffers(FMorphTargetVertexInfoBuffers *this)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this->_padding_ = (longlong)&___7FMorphTargetVertexInfoBuffers__6B_;
  pFVar1 = (this->BatchesPerMorph).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BatchStartOffsetPerMorph).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MinimumValuePerMorph).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaximumValuePerMorph).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->MorphData)._padding_);
  (this->MorphData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this_00 = (this->MorphDataSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->MorphDataBuffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// Compress @ 1483f6530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMorphTargetVertexInfoBuffers::Compress
          (FMorphTargetVertexInfoBuffers *this,
          TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMorphTargetLODModel_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TBitArray<FDefaultBitArrayAllocator> *param_3,int param_4,float param_5)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  FMorphTargetVertexInfoBuffers *pFVar5;
  TArray<FMorphTargetLODModel_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ForElementType<unsigned_int> FVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar17;
  TVector<float> *pTVar18;
  uint uVar19;
  float *pfVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  undefined1 local_228;
  undefined1 local_227 [3];
  int local_224;
  int local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  FDwordViewBitWriter local_210;
  FMorphTargetVertexInfoBuffers *local_1f0;
  TArray<UE::MorphTargetVertexCodec::FDeltaBatchHeader,TSizedDefaultAllocator<32>_> local_1e8;
  ForElementType<unsigned_int> local_1d8;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_198;
  TArray<FMorphTargetLODModel_const_*,TSizedDefaultAllocator<32>_> *local_190;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_188;
  int *local_180;
  longlong *local_178;
  FMorphTargetDelta *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  uint *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  TArrayView<FMorphTargetDelta_const_,int> local_138;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_278;
  fVar25 = param_5 * __real_3951b717;
  this->TangentZPrecision = 0.00048828125;
  local_188 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&(this->MorphData)._padding_;
  local_178 = &(this->MorphData)._padding_;
  this->PositionPrecision = fVar25;
  local_180 = (int *)((longlong)&(this->MorphData)._padding_ + 4);
  *(undefined4 *)&(this->MorphData)._padding_ = 0;
  local_1f0 = this;
  local_1d8 = (ForElementType<unsigned_int>)param_3;
  local_190 = param_2;
  if (*local_180 != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)local_188,0,local_180);
  }
  uVar13 = param_2->ArrayNum;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->BatchStartOffsetPerMorph).ArrayMax;
  (this->BatchStartOffsetPerMorph).ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&(this->BatchStartOffsetPerMorph).AllocatorInstance,0,piVar1);
  }
  uVar13 = param_2->ArrayNum;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->BatchesPerMorph).ArrayMax;
  (this->BatchesPerMorph).ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&(this->BatchesPerMorph).AllocatorInstance,0,piVar1);
  }
  uVar13 = param_2->ArrayNum;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->MaximumValuePerMorph).ArrayMax;
  (this->MaximumValuePerMorph).ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar13,&(this->MaximumValuePerMorph).AllocatorInstance,0,piVar1);
  }
  uVar13 = param_2->ArrayNum;
  local_198 = &this->MinimumValuePerMorph;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->MinimumValuePerMorph).ArrayMax;
  (this->MinimumValuePerMorph).ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar13,&local_198->AllocatorInstance,0,piVar1);
  }
  iVar21 = GSkinCacheRecomputeTangents;
  local_128.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_128.MaxBits = 0x80;
  local_128.NumBits = param_4;
  uVar13 = param_4 + 0x1fU >> 5;
  if (param_4 + 0x1fU >> 5 != 0) {
    if (4 < uVar13) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_128.AllocatorInstance,0,uVar13,4);
      local_128.MaxBits = uVar13 << 5;
    }
    FVar11 = (ForElementType<unsigned_int>)&local_128;
    if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_128.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar11,0,(ulonglong)uVar13 << 2);
    uVar13 = local_128.NumBits & 0x8000001f;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
    }
    if (uVar13 != 0) {
      FVar11 = (ForElementType<unsigned_int>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_128.AllocatorInstance.SecondaryData;
      }
      puVar10 = (uint *)((longlong)FVar11 +
                        (longlong)
                        ((int)(local_128.NumBits + (local_128.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar10 = *puVar10 & 0xffffffffU >> (0x20U - (char)uVar13 & 0x1f);
    }
  }
  iVar9 = param_1->ArrayNum;
  pFVar16 = (param_1->AllocatorInstance).Data;
  pFVar24 = pFVar16 + (longlong)iVar9 * 0x118;
  while( true ) {
    if (param_1->ArrayNum != iVar9) {
      local_228 = 0;
      `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_228);
    }
    pFVar5 = local_1f0;
    if (pFVar16 == pFVar24) break;
    if (((iVar21 < 1) || ((pFVar16[0xc] == (FScriptContainerElement)0x0 && (iVar21 != 1)))) &&
       (uVar13 = 0, *(int *)(pFVar16 + 0x48) != 0)) {
      do {
        iVar14 = *(int *)(pFVar16 + 0x10) + uVar13;
        if (((iVar14 < 0) || (local_128.NumBits <= iVar14)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar11 = (ForElementType<unsigned_int>)&local_128;
        if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_128.AllocatorInstance.SecondaryData;
        }
        iVar8 = iVar14;
        if (iVar14 < 0) {
          iVar8 = iVar14 + 0x1f;
        }
        uVar13 = uVar13 + 1;
        puVar10 = (uint *)((longlong)FVar11 + (longlong)(iVar8 >> 5) * 4);
        *puVar10 = *puVar10 | 1 << ((byte)iVar14 & 0x1f);
      } while (uVar13 < *(uint *)(pFVar16 + 0x48));
    }
    pFVar16 = pFVar16 + 0x118;
  }
  uVar13 = 0;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  iVar21 = local_190->ArrayNum;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  if (0 < iVar21) {
    uVar23 = 1;
    lVar22 = 0;
    pTVar17 = local_198;
    fVar25 = __real_7f7fffff;
    do {
      pTVar6 = local_190;
      fVar30 = __real_ff7fffff;
      local_224 = local_1e8.ArrayNum;
      local_1f0 = (FMorphTargetVertexInfoBuffers *)CONCAT44(local_1f0._4_4_,fVar25);
      uVar19 = 0;
      if ((int)uVar13 < iVar21) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)((pTVar6->AllocatorInstance).Data + lVar22);
      if ((plVar3 == (longlong *)0x0) || (lVar15 = (longlong)(int)plVar3[1], (int)plVar3[1] == 0)) {
LAB_1483f6b60:
        fVar30 = 0.0;
        fVar32 = 0.0;
        fVar34 = 0.0;
        fVar36 = 0.0;
        fVar25 = 0.0;
        fVar39 = 0.0;
        fVar41 = 0.0;
        uVar27 = 0;
      }
      else {
        if ((((int)uVar13 < 0) || (*(int *)((longlong)local_1d8 + 0x18) <= (int)uVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar11 = local_1d8;
        if (*(ForElementType<unsigned_int> *)((longlong)local_1d8 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar11 = *(ForElementType<unsigned_int> *)((longlong)local_1d8 + 0x10);
        }
        uVar19 = uVar13;
        if ((int)uVar13 < 0) {
          uVar19 = uVar13 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar11 + (longlong)((int)uVar19 >> 5) * 4) & uVar23) == 0)
        goto LAB_1483f6b60;
        local_168 = (FMorphTargetDelta *)*plVar3;
        iVar21 = 0;
        fVar32 = fVar30;
        fVar34 = fVar30;
        fVar36 = fVar30;
        fVar39 = fVar25;
        fVar41 = fVar25;
        if (0 < lVar15) {
          pfVar20 = &(local_168->PositionDelta).field0_0x0._s_0.Y;
          fVar28 = fVar25;
          fVar29 = fVar30;
          fVar31 = fVar30;
          fVar33 = fVar30;
          fVar35 = fVar30;
          fVar37 = fVar25;
          fVar38 = fVar25;
          fVar40 = fVar25;
          do {
            fVar25 = pfVar20[5];
            if (((int)fVar25 < 0) || (local_128.NumBits <= (int)fVar25)) {
LAB_1483f6a39:
              pTVar18 = &UE::Math::TVector<float>::ZeroVector;
            }
            else {
              FVar11 = (ForElementType<unsigned_int>)&local_128;
              if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar11 = local_128.AllocatorInstance.SecondaryData;
              }
              uVar19 = (uint)fVar25 & 0x1f;
              if ((int)fVar25 < 0) {
                fVar25 = (float)((int)fVar25 + 0x1f);
              }
              if ((*(uint *)((longlong)FVar11 + (longlong)((int)fVar25 >> 5) * 4) >> uVar19 & 1) ==
                  0) goto LAB_1483f6a39;
              pTVar18 = &local_168[iVar21].TangentZDelta;
            }
            fVar25 = ((TVector<float>_u_0_s_0 *)(pfVar20 + -1))->X;
            iVar21 = iVar21 + 1;
            fVar34 = pfVar20[1];
            fVar39 = *pfVar20;
            fVar30 = fVar25;
            if (fVar25 <= fVar29) {
              fVar30 = fVar29;
            }
            local_148 = *(undefined8 *)&pTVar18->field0_0x0;
            if (fVar37 <= fVar25) {
              fVar25 = fVar37;
            }
            fVar26 = (float)((ulonglong)local_148 >> 0x20);
            fVar32 = fVar39;
            if (fVar39 <= fVar31) {
              fVar32 = fVar31;
            }
            pfVar20 = pfVar20 + 7;
            if (fVar38 <= fVar39) {
              fVar39 = fVar38;
            }
            fVar41 = fVar34;
            if (fVar40 <= fVar34) {
              fVar41 = fVar40;
            }
            if (fVar34 <= fVar33) {
              fVar34 = fVar33;
            }
            fVar29 = (pTVar18->field0_0x0)._s_0.Z;
            fVar36 = fVar26;
            if (fVar26 <= fVar29) {
              fVar36 = fVar29;
            }
            fVar29 = (pTVar18->field0_0x0)._s_0.Z;
            if (fVar29 <= fVar26) {
              fVar26 = fVar29;
            }
            if (fVar36 <= (float)local_148) {
              fVar36 = (float)local_148;
            }
            if ((float)local_148 <= fVar26) {
              fVar26 = (float)local_148;
            }
            if (fVar36 <= fVar35) {
              fVar36 = fVar35;
            }
            if (fVar28 <= fVar26) {
              fVar26 = fVar28;
            }
            lVar15 = lVar15 + -1;
            fVar28 = fVar26;
            fVar29 = fVar30;
            fVar31 = fVar32;
            fVar33 = fVar34;
            fVar35 = fVar36;
            fVar37 = fVar25;
            fVar38 = fVar39;
            fVar40 = fVar41;
          } while (lVar15 != 0);
          local_1f0 = (FMorphTargetVertexInfoBuffers *)CONCAT44(local_1f0._4_4_,fVar26);
        }
        iVar21 = (int)plVar3[1];
        fVar28 = pFVar5->TangentZPrecision;
        fVar29 = pFVar5->PositionPrecision;
        if ((iVar21 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_138._12_4_ = uStack_15c;
        local_138.ArrayNum = iVar21;
        local_138.DataPtr = local_168;
        iStack_160 = iVar21;
        UE::MorphTargetVertexCodec::Encode
                  (&local_138,&local_128,fVar29,fVar28,&local_1e8,&local_1a8);
        pTVar17 = local_198;
        uVar27 = local_1f0._0_4_;
      }
      local_220 = local_1e8.ArrayNum - local_224;
      pFVar16 = (pFVar5->BatchStartOffsetPerMorph).AllocatorInstance.Data;
      if (((pFVar16 <= (FScriptContainerElement *)&local_224) &&
          ((FScriptContainerElement *)&local_224 <
           pFVar16 + (longlong)(pFVar5->BatchStartOffsetPerMorph).ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar21 = (pFVar5->BatchStartOffsetPerMorph).ArrayNum;
      if (iVar21 == (pFVar5->BatchStartOffsetPerMorph).ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pFVar5->BatchStartOffsetPerMorph).AllocatorInstance,
                            &(pFVar5->BatchStartOffsetPerMorph).ArrayMax);
      }
      pTVar2 = &pFVar5->BatchesPerMorph;
      (pFVar5->BatchStartOffsetPerMorph).ArrayNum = iVar21 + 1;
      *(int *)((pFVar5->BatchStartOffsetPerMorph).AllocatorInstance.Data + (longlong)iVar21 * 4) =
           local_224;
      pFVar16 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar16 <= (FScriptContainerElement *)&local_220) &&
          ((FScriptContainerElement *)&local_220 <
           pFVar16 + (longlong)(pFVar5->BatchesPerMorph).ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar21 = (pFVar5->BatchesPerMorph).ArrayNum;
      if (iVar21 == (pFVar5->BatchesPerMorph).ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,&(pFVar5->BatchesPerMorph).ArrayMax);
      }
      (pFVar5->BatchesPerMorph).ArrayNum = iVar21 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_220;
      pFVar16 = (pFVar5->MaximumValuePerMorph).AllocatorInstance.Data;
      local_1c8 = fVar30;
      fStack_1c4 = fVar32;
      fStack_1c0 = fVar34;
      fStack_1bc = fVar36;
      if (((pFVar16 <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 <
           pFVar16 + (longlong)(pFVar5->MaximumValuePerMorph).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar21 = (pFVar5->MaximumValuePerMorph).ArrayNum;
      if (iVar21 == (pFVar5->MaximumValuePerMorph).ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&(pFVar5->MaximumValuePerMorph).AllocatorInstance,
                            &(pFVar5->MaximumValuePerMorph).ArrayMax);
      }
      (pFVar5->MaximumValuePerMorph).ArrayNum = iVar21 + 1;
      pFVar16 = (pFVar5->MaximumValuePerMorph).AllocatorInstance.Data + (longlong)iVar21 * 0x10;
      *(ulonglong *)pFVar16 = CONCAT44(fStack_1c4,local_1c8);
      *(ulonglong *)(pFVar16 + 8) = CONCAT44(fStack_1bc,fStack_1c0);
      pFVar16 = (pTVar17->AllocatorInstance).Data;
      local_1b8 = fVar25;
      fStack_1b4 = fVar39;
      fStack_1b0 = fVar41;
      uStack_1ac = uVar27;
      if (((pFVar16 <= (FScriptContainerElement *)&local_1b8) &&
          ((FScriptContainerElement *)&local_1b8 < pFVar16 + (longlong)pTVar17->ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar21 = pTVar17->ArrayNum;
      if (iVar21 == pTVar17->ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
      }
      fVar25 = __real_7f7fffff;
      uVar13 = uVar13 + 1;
      lVar22 = lVar22 + 8;
      pTVar17->ArrayNum = iVar21 + 1;
      uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
      pFVar16 = (pTVar17->AllocatorInstance).Data + (longlong)iVar21 * 0x10;
      *(ulonglong *)pFVar16 = CONCAT44(fStack_1b4,local_1b8);
      *(ulonglong *)(pFVar16 + 8) = CONCAT44(uStack_1ac,fStack_1b0);
      iVar21 = local_190->ArrayNum;
    } while ((int)uVar13 < iVar21);
  }
  plVar3 = local_178;
  piVar1 = local_180;
  pTVar2 = local_188;
  iVar21 = local_1e8.ArrayNum;
  pFVar5->NumTotalBatches = local_1e8.ArrayNum;
  pFVar24 = local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayNum * 0x2c;
  pFVar16 = local_1e8.AllocatorInstance.Data + 10;
  while( true ) {
    if (local_1e8.ArrayNum != iVar21) {
      local_227[0] = 0;
      `TCheckedPointerIterator<UE::MorphTargetVertexCodec::FDeltaBatchHeader,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_227);
    }
    pFVar12 = pFVar16 + -10;
    if (pFVar12 == pFVar24) break;
    uStack_150 = 10;
    uVar13 = *(uint *)pFVar12 + local_1e8.ArrayNum * 0x28;
    local_210.Buffer.DataPtr = (uint *)&local_108;
    *(uint *)pFVar12 = uVar13;
    local_210.Buffer._12_4_ = uStack_14c;
    local_210.Buffer.ArrayNum = 10;
    local_210.PendingBits = 0;
    local_210.NumPendingBits = 0;
    local_210.NumElements = 0;
    local_158 = local_210.Buffer.DataPtr;
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,uVar13,0x20);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,(int)(char)pFVar16[-1],5);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,(int)(char)*pFVar16,5);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,(int)(char)pFVar16[1],5);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,(int)(char)pFVar16[2],5);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,(uint)(byte)pFVar16[-2],1);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,*(uint *)(pFVar16 + -6),0xb)
    ;
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,*(uint *)(pFVar16 + 6),0x20)
    ;
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits
              (&local_210,*(uint *)(pFVar16 + 10),0x20);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits
              (&local_210,*(uint *)(pFVar16 + 0xe),0x20);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits
              (&local_210,*(uint *)(pFVar16 + 0x12),0x20);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,(int)(char)pFVar16[3],5);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,(int)(char)pFVar16[4],5);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,(int)(char)pFVar16[5],5);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits(&local_210,0,0x11);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits
              (&local_210,*(uint *)(pFVar16 + 0x16),0x20);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits
              (&local_210,*(uint *)(pFVar16 + 0x1a),0x20);
    UE::MorphTargetVertexCodec::FDwordViewBitWriter::PutBits
              (&local_210,*(uint *)(pFVar16 + 0x1e),0x20);
    if (0 < local_210.NumPendingBits) {
      iVar9 = local_210.NumElements;
      local_210.NumElements = local_210.NumElements + 1;
      puVar10 = TArrayView<unsigned_int,int>::operator[](&local_210.Buffer,iVar9);
      *puVar10 = (uint)local_210.PendingBits;
    }
    local_210.PendingBits = 0;
    local_210._24_8_ = local_210._24_8_ & 0xffffffff00000000;
    iVar9 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (4,4,10,(ForAnyElementType *)pTVar2,(int *)plVar3,piVar1);
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    if (((ulonglong)pFVar12 & 1) != 0) {
      pFVar12 = (FScriptContainerElement *)
                ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar12 >> 0x18));
    }
    lVar22 = (longlong)iVar9;
    pFVar16 = pFVar16 + 0x2c;
    *(undefined8 *)(pFVar12 + lVar22 * 4) = local_108;
    *(undefined8 *)(pFVar12 + lVar22 * 4 + 8) = uStack_100;
    *(undefined8 *)(pFVar12 + lVar22 * 4 + 0x10) = local_f8;
    *(undefined8 *)(pFVar12 + lVar22 * 4 + 0x10 + 8) = uStack_f0;
    *(undefined8 *)(pFVar12 + lVar22 * 4 + 0x20) = local_e8;
  }
  if ((pTVar2 == &local_1a8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar22 = (longlong)local_1a8.ArrayNum;
  if (local_1a8.ArrayNum != 0) {
    iVar21 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                       (4,4,local_1a8.ArrayNum,(ForAnyElementType *)pTVar2,(int *)plVar3,piVar1);
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (((ulonglong)pFVar16 & 1) != 0) {
      pFVar16 = (FScriptContainerElement *)
                ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
    }
    memcpy(pFVar16 + (longlong)iVar21 * 4,local_1a8.AllocatorInstance.Data,lVar22 << 2);
  }
  if (0 < (int)(pFVar5->MorphData)._padding_) {
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    local_21c = 0;
    pFVar24 = pFVar16;
    if (((ulonglong)pFVar16 & 1) != 0) {
      pFVar24 = (FScriptContainerElement *)
                ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
    }
    if (pFVar24 <= (FScriptContainerElement *)&local_21c) {
      if (((ulonglong)pFVar16 & 1) != 0) {
        pFVar16 = (FScriptContainerElement *)
                  ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
      }
      if (((FScriptContainerElement *)&local_21c < pFVar16 + (longlong)*piVar1 * 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar21 = (int)*plVar3;
    if (iVar21 == *piVar1) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pTVar2,piVar1);
    }
    *(int *)plVar3 = iVar21 + 1;
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (((ulonglong)pFVar16 & 1) != 0) {
      pFVar16 = (FScriptContainerElement *)
                ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
    }
    local_218 = 0;
    *(undefined4 *)(pFVar16 + (longlong)iVar21 * 4) = local_21c;
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    pFVar24 = pFVar16;
    if (((ulonglong)pFVar16 & 1) != 0) {
      pFVar24 = (FScriptContainerElement *)
                ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
    }
    if (pFVar24 <= (FScriptContainerElement *)&local_218) {
      if (((ulonglong)pFVar16 & 1) != 0) {
        pFVar16 = (FScriptContainerElement *)
                  ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
      }
      if (((FScriptContainerElement *)&local_218 < pFVar16 + (longlong)*piVar1 * 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar21 = (int)*plVar3;
    if (iVar21 == *piVar1) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pTVar2,piVar1);
    }
    *(int *)plVar3 = iVar21 + 1;
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (((ulonglong)pFVar16 & 1) != 0) {
      pFVar16 = (FScriptContainerElement *)
                ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
    }
    local_214 = 0;
    *(undefined4 *)(pFVar16 + (longlong)iVar21 * 4) = local_218;
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    pFVar24 = pFVar16;
    if (((ulonglong)pFVar16 & 1) != 0) {
      pFVar24 = (FScriptContainerElement *)
                ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
    }
    if (pFVar24 <= (FScriptContainerElement *)&local_214) {
      if (((ulonglong)pFVar16 & 1) != 0) {
        pFVar16 = (FScriptContainerElement *)
                  ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
      }
      if (((FScriptContainerElement *)&local_214 < pFVar16 + (longlong)*piVar1 * 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar21 = (int)*plVar3;
    if (iVar21 == *piVar1) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pTVar2,piVar1);
    }
    *(int *)plVar3 = iVar21 + 1;
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (((ulonglong)pFVar16 & 1) != 0) {
      pFVar16 = (FScriptContainerElement *)
                ((longlong)&(pTVar2->AllocatorInstance).Data + ((longlong)pFVar16 >> 0x18));
    }
    *(undefined4 *)(pFVar16 + (longlong)iVar21 * 4) = local_214;
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_128.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetMaximumThreadGroupSize @ 148408fd0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl FMorphTargetVertexInfoBuffers::GetMaximumThreadGroupSize(void)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((ulonglong)((longlong)GRHIGlobals.MaxComputeDispatchDimension.Value << 5) < 0xffffffff) {
    uVar1 = (uint)((longlong)GRHIGlobals.MaxComputeDispatchDimension.Value << 5);
  }
  return uVar1;
}

// InitMorphResources @ 14840c840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMorphTargetVertexInfoBuffers::InitMorphResources
          (FMorphTargetVertexInfoBuffers *this,EShaderPlatform param_1,
          TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UMorphTarget_*,TSizedDefaultAllocator<32>_> *param_3,int param_4,int param_5,
          float param_6)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  byte bVar13;
  ulonglong uVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [8];
  TArray<FMorphTargetLODModel_const_*,TSizedDefaultAllocator<32>_> local_90;
  ulonglong local_80;
  FScriptContainerElement *local_78;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *local_70;
  FMorphTargetVertexInfoBuffers *local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_70 = param_2;
  local_68 = this;
  if ((this->bRHIInitialized != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRHIInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                         ,0x86,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->bResourcesInitialized != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsMorphResourcesInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                         ,0x87,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->bIsMorphCPUDataValid != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsMorphCPUDataValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                         ,0x88,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->bResourcesInitialized = true;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel) &&
     (param_3->ArrayNum != 0)) {
    uVar11 = 0;
    this->bIsMorphCPUDataValid = true;
    uVar16 = param_3->ArrayNum;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar16,&local_90.AllocatorInstance,0,&local_90.ArrayMax);
    }
    local_60.NumBits = 0;
    local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.MaxBits = 0x80;
    if (0x80 < param_3->ArrayNum) {
      uVar16 = param_3->ArrayNum + 0x1fU >> 5;
      if (uVar16 < 5) {
        local_60.MaxBits = 4;
      }
      else {
        uVar14 = 4;
        if (4 < uVar16) {
          uVar14 = (ulonglong)uVar16;
        }
        uVar12 = FMemory::QuantizeSize(uVar14 * 4,0);
        local_60.MaxBits = (int)(uVar12 >> 2);
        if (local_60.MaxBits < (int)uVar16) {
          local_60.MaxBits = 0x7fffffff;
        }
      }
      local_60.MaxBits = local_60.MaxBits << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,local_60.NumBits);
    }
    pFVar18 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    local_78 = pFVar18 + (longlong)iVar2 * 8;
    while( true ) {
      pFVar5 = local_78;
      if (param_3->ArrayNum != iVar2) {
        local_98[0] = 0;
        `TCheckedPointerIterator<UMorphTarget_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_98);
      }
      if (pFVar18 == pFVar5) break;
      plVar3 = *(longlong **)pFVar18;
      plVar10 = (longlong *)(**(code **)(*plVar3 + 0x2b0))(plVar3);
      if ((-1 < param_5) && (param_5 < (int)plVar10[1])) {
        if ((param_5 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = (longlong)param_5 * 0x40 + *plVar10;
      }
      local_80 = uVar11;
      if (((local_90.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 <
           local_90.AllocatorInstance.Data + (longlong)local_90.ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = local_90.ArrayNum;
      if (local_90.ArrayNum == local_90.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_90.AllocatorInstance,&local_90.ArrayMax);
      }
      local_90.ArrayNum = iVar8 + 1;
      *(ulonglong *)(local_90.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_80;
      bVar7 = (**(code **)(*plVar3 + 0x318))(plVar3);
      iVar8 = local_60.NumBits;
      if ((local_60.NumBits == 0) ||
         ((int)(local_60.NumBits + (local_60.NumBits >> 0x1f & 0x1fU)) >> 5 !=
          (int)((local_60.NumBits + -1 >> 0x1f & 0x1fU) + local_60.NumBits + -1) >> 5)) {
        if (local_60.MaxBits < local_60.NumBits + 1) {
          uVar16 = local_60.MaxBits + 0x1fU >> 5;
          uVar17 = local_60.NumBits + 0x20U >> 5;
          if (uVar17 < 5) {
            local_60.MaxBits = 4;
          }
          else {
            uVar11 = (ulonglong)uVar17;
            if (uVar16 < 5) {
              uVar16 = 0;
            }
            if (uVar16 == 0) {
              uVar14 = 4;
              if (4 < uVar11) {
                uVar14 = uVar11;
              }
            }
            else {
              uVar14 = ((ulonglong)uVar17 * 3 >> 3) + 0x10 + uVar11;
            }
            uVar12 = FMemory::QuantizeSize(uVar14 * 4,0);
            local_60.MaxBits = (int)(uVar12 >> 2);
            if (local_60.MaxBits < (int)uVar17) {
              local_60.MaxBits = 0x7fffffff;
            }
          }
          local_60.MaxBits = local_60.MaxBits << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,local_60.NumBits);
        }
        local_60.NumBits = local_60.NumBits + 1;
        uVar17 = local_60.NumBits >> 0x1f & 0x1f;
        uVar16 = local_60.NumBits + uVar17;
        iVar9 = (uVar16 & 0x1f) - uVar17;
        if (iVar9 != 0) {
          FVar15 = (ForElementType<unsigned_int>)&local_60;
          if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_60.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar15 + (longlong)((int)uVar16 >> 5) * 4);
          *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
        }
      }
      else {
        local_60.NumBits = local_60.NumBits + 1;
      }
      FVar15 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_60.AllocatorInstance.SecondaryData;
      }
      bVar13 = (byte)iVar8 & 0x1f;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
        bVar13 = bVar13 - 0x20;
      }
      pFVar18 = pFVar18 + 8;
      *(uint *)((longlong)FVar15 + (longlong)(iVar8 >> 5) * 4) =
           ~(1 << (bVar13 & 0x1f)) & *(uint *)((longlong)FVar15 + (longlong)(iVar8 >> 5) * 4) |
           (uint)bVar7 << (bVar13 & 0x1f);
      uVar11 = (ulonglong)(uint)(0 << (bVar13 & 0x1f));
    }
    Compress(local_68,local_70,&local_90,&local_60,param_4,param_6);
    ValidateVertexBuffers(local_68,true);
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
  return;
}

// InitMorphResourcesStreaming @ 14840cd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMorphTargetVertexInfoBuffers::InitMorphResourcesStreaming
          (FMorphTargetVertexInfoBuffers *this,
          TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMorphTargetLODModel_const_*,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          float param_4)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int _Val;
  uint uVar3;
  undefined1 auStackY_88 [32];
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  ResetCPUData(this);
  local_58.NumBits = param_2->ArrayNum;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.MaxBits = 0x80;
  uVar3 = local_58.NumBits + 0x1fU >> 5;
  if (local_58.NumBits + 0x1fU >> 5 != 0) {
    if (4 < uVar3) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_58.AllocatorInstance,0,uVar3,4);
      local_58.MaxBits = uVar3 << 5;
    }
    FVar2 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar2 = local_58.AllocatorInstance.SecondaryData;
    }
    if (uVar3 < 9) {
      _Val = -1;
    }
    else {
      _Val = 0xff;
    }
    memset((void *)FVar2,_Val,(ulonglong)uVar3 << 2);
    uVar3 = local_58.NumBits & 0x8000001f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
    }
    if (uVar3 != 0) {
      FVar2 = (ForElementType<unsigned_int>)&local_58;
      if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar2 = local_58.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar2 +
                       (longlong)((int)(local_58.NumBits + (local_58.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar3 & 0x1f);
    }
  }
  Compress(this,param_1,param_2,&local_58,param_3,param_4);
  this->bResourcesInitialized = true;
  this->bRHIInitialized = false;
  this->bIsMorphCPUDataValid = true;
  ValidateVertexBuffers(this,true);
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  return;
}

// InitRHI @ 14840d1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMorphTargetVertexInfoBuffers::InitRHI
          (FMorphTargetVertexInfoBuffers *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  int *piVar3;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  byte bVar10;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  FInitializer local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  wchar_t *local_50;
  TResourceArray<unsigned_int,0> *pTStack_48;
  undefined8 local_40;
  longlong local_30;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId18,"FFMorphTargetVertexInfoBuffers_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
               ,0x12);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId18);
  }
  if (this->NumTotalBatches == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumTotalBatches > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                       ,0x14,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->bRHIInitialized != false) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRHIInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                       ,0x15,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar6 = (this->MorphData)._padding_;
  bVar10 = (byte)GNumExplicitGPUsForRendering;
  FLazyName::Resolve(&::ClassName);
  local_60 = CONCAT44(4,(int)lVar6 << 2);
  uStack_58 = CONCAT44((1 << (bVar10 & 0x1f)) + -1,0x10111);
  local_30 = this->_padding_;
  local_40 = 0x200000070;
  local_50 = L"MorphData";
  pTStack_48 = &this->MorphData;
  TVar8 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res18);
  pTVar1 = &this->MorphDataBuffer;
  if ((FRHIBuffer *)pTVar1 != TVar8.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_70,pTVar1->Reference);
  TVar9 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res20,(FInitializer *)pTVar1->Reference);
  pTVar2 = &this->MorphDataSRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar9.Reference) {
    this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar9.Reference;
    *(undefined8 *)TVar9.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res20 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res20);
  }
  if (this->bEmptyMorphCPUDataOnInitRHI != false) {
    piVar3 = (int *)((longlong)&(this->MorphData)._padding_ + 4);
    *(undefined4 *)&(this->MorphData)._padding_ = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&(this->MorphData)._padding_,0,piVar3);
    }
    this->bIsMorphCPUDataValid = false;
  }
  this->bRHIInitialized = true;
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsPlatformShaderSupported @ 14840f6a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FMorphTargetVertexInfoBuffers::IsPlatformShaderSupported(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel;
}

// ReleaseRHI @ 14841f480

void __thiscall FMorphTargetVertexInfoBuffers::ReleaseRHI(FMorphTargetVertexInfoBuffers *this)

{
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  
  this_00 = (this->MorphDataBuffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (this->MorphDataBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->MorphDataSRV).Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (this->MorphDataSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this->bRHIInitialized = false;
  return;
}

// ResetCPUData @ 148421660

void __thiscall FMorphTargetVertexInfoBuffers::ResetCPUData(FMorphTargetVertexInfoBuffers *this)

{
  int *piVar1;
  
  piVar1 = (int *)((longlong)&(this->MorphData)._padding_ + 4);
  *(undefined4 *)&(this->MorphData)._padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&(this->MorphData)._padding_,0,piVar1);
  }
  piVar1 = &(this->MaximumValuePerMorph).ArrayMax;
  (this->MaximumValuePerMorph).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->MaximumValuePerMorph).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MinimumValuePerMorph).ArrayMax;
  (this->MinimumValuePerMorph).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->MinimumValuePerMorph).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BatchStartOffsetPerMorph).ArrayMax;
  (this->BatchStartOffsetPerMorph).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BatchStartOffsetPerMorph).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BatchesPerMorph).ArrayMax;
  (this->BatchesPerMorph).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BatchesPerMorph).AllocatorInstance,0,piVar1);
  }
  this->NumTotalBatches = 0;
  this->PositionPrecision = 0.0;
  this->TangentZPrecision = 0.0;
  this->bIsMorphCPUDataValid = false;
  this->bResourcesInitialized = false;
  return;
}

// Serialize @ 148422b90

void __thiscall
FMorphTargetVertexInfoBuffers::Serialize(FMorphTargetVertexInfoBuffers *this,FArchive *param_1)

{
  float *pfVar1;
  uint *puVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  TArray<unsigned_int,TMemoryImageAllocator<0>_> *pTVar7;
  
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      ResetCPUData(this);
    }
  }
  else {
    if (this->bResourcesInitialized == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bResourcesInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                         ,99,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (this->bIsMorphCPUDataValid == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsMorphCPUDataValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                         ,100,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    ValidateVertexBuffers(this,true);
  }
  pTVar7 = (TArray<unsigned_int,TMemoryImageAllocator<0>_> *)&(this->MorphData)._padding_;
  if (this == (FMorphTargetVertexInfoBuffers *)0xffffffffffffffd0) {
    pTVar7 = (TArray<unsigned_int,TMemoryImageAllocator<0>_> *)0x0;
  }
  pFVar6 = TArrayPrivateFriend::Serialize<unsigned_int,TMemoryImageAllocator<0>_>(param_1,pTVar7);
  pFVar6 = TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
                     (pFVar6,&this->MinimumValuePerMorph);
  pFVar6 = TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
                     (pFVar6,&this->MaximumValuePerMorph);
  pFVar6 = TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
                     (pFVar6,&this->BatchStartOffsetPerMorph);
  pFVar6 = TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
                     (pFVar6,&this->BatchesPerMorph);
  puVar2 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&this->NumTotalBatches,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,&this->NumTotalBatches);
    }
  }
  else {
    this->NumTotalBatches = *puVar2;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  pfVar1 = &this->PositionPrecision;
  pfVar3 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar3 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  pfVar1 = &this->TangentZPrecision;
  pfVar3 = (float *)**(undefined8 **)&pFVar6->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar3 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->bResourcesInitialized = true;
    this->bRHIInitialized = false;
    this->bIsMorphCPUDataValid = true;
    ValidateVertexBuffers(this,true);
  }
  return;
}

// ValidateVertexBuffers @ 14842dcd0

void __thiscall
FMorphTargetVertexInfoBuffers::ValidateVertexBuffers
          (FMorphTargetVertexInfoBuffers *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->BatchesPerMorph).ArrayNum != (this->BatchStartOffsetPerMorph).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BatchesPerMorph.Num() == BatchStartOffsetPerMorph.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                       ,0x4c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->BatchesPerMorph).ArrayNum != (this->MaximumValuePerMorph).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BatchesPerMorph.Num() == MaximumValuePerMorph.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                       ,0x4d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->BatchesPerMorph).ArrayNum != (this->MinimumValuePerMorph).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BatchesPerMorph.Num() == MinimumValuePerMorph.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                       ,0x4e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1) {
    iVar1 = (int)(this->MorphData)._padding_;
    if (this->NumTotalBatches == 0) {
      if (iVar1 != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MorphData.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                           ,0x58,L"");
        if (bVar3) goto code_r0x00014842dde0;
      }
    }
    else if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MorphData.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\MorphTargetVertexInfoBuffers.cpp"
                         ,0x54,L"");
      if (!bVar3) {
        return;
      }
code_r0x00014842dde0:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

