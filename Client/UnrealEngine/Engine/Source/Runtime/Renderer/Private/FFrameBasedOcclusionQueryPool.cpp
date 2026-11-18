// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AdvanceFrame @ 145492a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FFrameBasedOcclusionQueryPool::AdvanceFrame
          (FFrameBasedOcclusionQueryPool *this,uint param_1,uint param_2,bool param_3)

{
  ulonglong *puVar1;
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_> *this_01;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_1d8 [32];
  FScriptContainerElement *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  FScriptContainerElement *pFStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  FScriptContainerElement *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  FScriptContainerElement *pFStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  FScriptContainerElement *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  FScriptContainerElement *pFStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  FScriptContainerElement *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  FScriptContainerElement *pFStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  FScriptContainerElement *pFStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FScriptContainerElement *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FScriptContainerElement *pFStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FScriptContainerElement *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FScriptContainerElement *pFStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FScriptContainerElement *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  FScriptContainerElement *pFStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (param_1 != this->OcclusionFrameCounter) {
    uVar9 = param_2 * 2;
    if (!param_3) {
      uVar9 = param_2;
    }
    this->OcclusionFrameCounter = param_1;
    uVar13 = 0;
    if (uVar9 != this->NumBufferedFrames) {
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      local_e8 = 0;
      pFStack_e0 = (FScriptContainerElement *)0x0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = (FScriptContainerElement *)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      pFStack_b0 = (FScriptContainerElement *)0x0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (FScriptContainerElement *)0x0;
      uStack_90 = 0;
      local_88 = 0;
      pFStack_80 = (FScriptContainerElement *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = (FScriptContainerElement *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      pFStack_50 = (FScriptContainerElement *)0x0;
      local_48 = 0;
      uStack_40 = 0;
      if (this->NumBufferedFrames != 0) {
        do {
          uVar14 = this->FrameQueries[uVar13].OcclusionFrameCounter;
          this_00 = &this->FrameQueries[uVar13].Queries;
          uVar10 = (longlong)(int)uVar14 % (longlong)(int)uVar9 & 0xffffffff;
          lVar12 = uVar10 * 0x18;
          this_01 = (TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&local_f8 + lVar12);
          if (*(uint *)((longlong)&local_e8 + uVar10 * 0x18 + 4) < uVar14) {
            TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
            Append<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(this_00,this_01);
            pFVar5 = (this_00->AllocatorInstance).Data;
            uVar6 = *(undefined8 *)&this_00->ArrayNum;
            uVar7 = *(undefined8 *)((longlong)&local_f8 + lVar12 + 8);
            pFVar2 = this_00[1].AllocatorInstance.Data;
            pFVar3 = (FScriptContainerElement *)(&local_e8)[uVar10 * 3];
            (this_00->AllocatorInstance).Data = (this_01->AllocatorInstance).Data;
            this_00->ArrayNum = (int)uVar7;
            this_00->ArrayMax = (int)((ulonglong)uVar7 >> 0x20);
            (this_01->AllocatorInstance).Data = pFVar5;
            *(undefined8 *)((longlong)&local_f8 + lVar12 + 8) = uVar6;
            this_00[1].AllocatorInstance.Data = pFVar3;
            (&local_e8)[uVar10 * 3] = pFVar2;
          }
          else {
            TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
            Append<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(this_01,this_00);
          }
          uVar14 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar14;
        } while (uVar14 < this->NumBufferedFrames);
      }
      local_1b8 = this->FrameQueries[0].Queries.AllocatorInstance.Data;
      uStack_1b0._0_4_ = this->FrameQueries[0].Queries.ArrayNum;
      uStack_1b0._4_4_ = this->FrameQueries[0].Queries.ArrayMax;
      local_1a8._0_4_ = this->FrameQueries[0].FirstFreeIndex;
      local_1a8._4_4_ = this->FrameQueries[0].OcclusionFrameCounter;
      pFStack_1a0 = this->FrameQueries[1].Queries.AllocatorInstance.Data;
      lVar12 = 8;
      puVar11 = local_38;
      local_198._0_4_ = this->FrameQueries[1].Queries.ArrayNum;
      local_198._4_4_ = this->FrameQueries[1].Queries.ArrayMax;
      uStack_190._0_4_ = this->FrameQueries[1].FirstFreeIndex;
      uStack_190._4_4_ = this->FrameQueries[1].OcclusionFrameCounter;
      local_188 = this->FrameQueries[2].Queries.AllocatorInstance.Data;
      uStack_180._0_4_ = this->FrameQueries[2].Queries.ArrayNum;
      uStack_180._4_4_ = this->FrameQueries[2].Queries.ArrayMax;
      local_178._0_4_ = this->FrameQueries[2].FirstFreeIndex;
      local_178._4_4_ = this->FrameQueries[2].OcclusionFrameCounter;
      pFStack_170 = this->FrameQueries[3].Queries.AllocatorInstance.Data;
      local_168._0_4_ = this->FrameQueries[3].Queries.ArrayNum;
      local_168._4_4_ = this->FrameQueries[3].Queries.ArrayMax;
      uStack_160._0_4_ = this->FrameQueries[3].FirstFreeIndex;
      uStack_160._4_4_ = this->FrameQueries[3].OcclusionFrameCounter;
      local_158 = this->FrameQueries[4].Queries.AllocatorInstance.Data;
      uStack_150._0_4_ = this->FrameQueries[4].Queries.ArrayNum;
      uStack_150._4_4_ = this->FrameQueries[4].Queries.ArrayMax;
      local_138._0_4_ = this->FrameQueries[5].Queries.ArrayNum;
      local_138._4_4_ = this->FrameQueries[5].Queries.ArrayMax;
      uStack_130._0_4_ = this->FrameQueries[5].FirstFreeIndex;
      uStack_130._4_4_ = this->FrameQueries[5].OcclusionFrameCounter;
      local_148._0_4_ = this->FrameQueries[4].FirstFreeIndex;
      local_148._4_4_ = this->FrameQueries[4].OcclusionFrameCounter;
      pFStack_140 = this->FrameQueries[5].Queries.AllocatorInstance.Data;
      local_128 = this->FrameQueries[6].Queries.AllocatorInstance.Data;
      uStack_120._0_4_ = this->FrameQueries[6].Queries.ArrayNum;
      uStack_120._4_4_ = this->FrameQueries[6].Queries.ArrayMax;
      local_118._0_4_ = this->FrameQueries[6].FirstFreeIndex;
      local_118._4_4_ = this->FrameQueries[6].OcclusionFrameCounter;
      pFStack_110 = this->FrameQueries[7].Queries.AllocatorInstance.Data;
      local_108._0_4_ = this->FrameQueries[7].Queries.ArrayNum;
      local_108._4_4_ = this->FrameQueries[7].Queries.ArrayMax;
      uStack_100._0_4_ = this->FrameQueries[7].FirstFreeIndex;
      uStack_100._4_4_ = this->FrameQueries[7].OcclusionFrameCounter;
      this->FrameQueries[0].Queries.AllocatorInstance.Data = local_f8.AllocatorInstance.Data;
      this->FrameQueries[0].Queries.ArrayNum = local_f8.ArrayNum;
      this->FrameQueries[0].Queries.ArrayMax = local_f8.ArrayMax;
      this->FrameQueries[0].FirstFreeIndex = (undefined4)local_e8;
      this->FrameQueries[0].OcclusionFrameCounter = local_e8._4_4_;
      this->FrameQueries[1].Queries.AllocatorInstance.Data = pFStack_e0;
      this->FrameQueries[1].Queries.ArrayNum = (undefined4)local_d8;
      this->FrameQueries[1].Queries.ArrayMax = local_d8._4_4_;
      this->FrameQueries[1].FirstFreeIndex = (undefined4)uStack_d0;
      this->FrameQueries[1].OcclusionFrameCounter = uStack_d0._4_4_;
      this->FrameQueries[2].Queries.AllocatorInstance.Data = local_c8;
      this->FrameQueries[2].Queries.ArrayNum = (undefined4)uStack_c0;
      this->FrameQueries[2].Queries.ArrayMax = uStack_c0._4_4_;
      this->FrameQueries[2].FirstFreeIndex = (undefined4)local_b8;
      this->FrameQueries[2].OcclusionFrameCounter = local_b8._4_4_;
      this->FrameQueries[3].Queries.AllocatorInstance.Data = pFStack_b0;
      this->FrameQueries[3].Queries.ArrayNum = (undefined4)local_a8;
      this->FrameQueries[3].Queries.ArrayMax = local_a8._4_4_;
      this->FrameQueries[3].FirstFreeIndex = (undefined4)uStack_a0;
      this->FrameQueries[3].OcclusionFrameCounter = uStack_a0._4_4_;
      this->FrameQueries[4].Queries.AllocatorInstance.Data = local_98;
      this->FrameQueries[4].Queries.ArrayNum = (undefined4)uStack_90;
      this->FrameQueries[4].Queries.ArrayMax = uStack_90._4_4_;
      this->FrameQueries[4].FirstFreeIndex = (undefined4)local_88;
      this->FrameQueries[4].OcclusionFrameCounter = local_88._4_4_;
      this->FrameQueries[5].Queries.AllocatorInstance.Data = pFStack_80;
      this->FrameQueries[5].Queries.ArrayNum = (undefined4)local_78;
      this->FrameQueries[5].Queries.ArrayMax = local_78._4_4_;
      this->FrameQueries[5].FirstFreeIndex = (undefined4)uStack_70;
      this->FrameQueries[5].OcclusionFrameCounter = uStack_70._4_4_;
      this->FrameQueries[6].Queries.AllocatorInstance.Data = local_68;
      this->FrameQueries[6].Queries.ArrayNum = (undefined4)uStack_60;
      this->FrameQueries[6].Queries.ArrayMax = uStack_60._4_4_;
      this->FrameQueries[6].FirstFreeIndex = (undefined4)local_58;
      this->FrameQueries[6].OcclusionFrameCounter = local_58._4_4_;
      this->FrameQueries[7].Queries.AllocatorInstance.Data = pFStack_50;
      this->FrameQueries[7].Queries.ArrayNum = (undefined4)local_48;
      this->FrameQueries[7].Queries.ArrayMax = local_48._4_4_;
      this->FrameQueries[7].FirstFreeIndex = (undefined4)uStack_40;
      this->FrameQueries[7].OcclusionFrameCounter = uStack_40._4_4_;
      this->NumBufferedFrames = uVar9;
      local_f8.AllocatorInstance.Data = local_1b8;
      local_f8.ArrayNum = (int)uStack_1b0;
      local_f8.ArrayMax = uStack_1b0._4_4_;
      local_e8 = local_1a8;
      pFStack_e0 = pFStack_1a0;
      local_d8 = local_198;
      uStack_d0 = uStack_190;
      local_c8 = local_188;
      uStack_c0 = uStack_180;
      local_b8 = local_178;
      pFStack_b0 = pFStack_170;
      local_a8 = local_168;
      uStack_a0 = uStack_160;
      local_98 = local_158;
      uStack_90 = uStack_150;
      local_88 = local_148;
      pFStack_80 = pFStack_140;
      local_78 = local_138;
      uStack_70 = uStack_130;
      local_68 = local_128;
      uStack_60 = uStack_120;
      local_58 = local_118;
      pFStack_50 = pFStack_110;
      local_48 = local_108;
      uStack_40 = uStack_100;
      do {
        puVar1 = puVar11 + -2;
        puVar11 = puVar11 + -3;
        lVar12 = lVar12 + -1;
        DestructItems<TRefCountPtr<FRHIRenderQuery>,int>
                  ((TRefCountPtr<FRHIRenderQuery> *)*puVar11,(int)*puVar1);
        if ((void *)*puVar11 != (void *)0x0) {
          FMemory::Free((void *)*puVar11);
        }
      } while (lVar12 != 0);
    }
    uVar9 = (int)this->OcclusionFrameCounter % (int)this->NumBufferedFrames;
    this->CurrentFrameIndex = uVar9;
    if ((7 < uVar9) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentFrameIndex < FOcclusionQueryHelpers::MaxBufferedOcclusionFrames * 2"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                           ,0x1be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this->FrameQueries[this->CurrentFrameIndex].FirstFreeIndex = 0;
    this->FrameQueries[this->CurrentFrameIndex].OcclusionFrameCounter = this->OcclusionFrameCounter;
  }
  return;
}

// AllocateQuery @ 1454947e0

FRHIRenderQuery * __thiscall
FFrameBasedOcclusionQueryPool::AllocateQuery(FFrameBasedOcclusionQueryPool *this)

{
  int *piVar1;
  FFrameOcclusionQueries *pFVar2;
  FFrameOcclusionQueries *pFVar3;
  FScriptContainerElement *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRHIRenderQuery *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar12;
  FRHIResource *local_38;
  undefined8 local_30;
  FRHIRenderQuery *pFVar11;
  
  uVar10 = this->CurrentFrameIndex;
  iVar7 = this->FrameQueries[uVar10].FirstFreeIndex;
  pFVar2 = this->FrameQueries + uVar10;
  if (iVar7 < this->FrameQueries[uVar10].Queries.ArrayNum) {
    pFVar2->FirstFreeIndex = iVar7 + 1;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHIRenderQuery *)(*pcVar5)();
      return pFVar8;
    }
    return *(FRHIRenderQuery **)((pFVar2->Queries).AllocatorInstance.Data + (longlong)iVar7 * 8);
  }
  pFVar8 = (FRHIRenderQuery *)0x0;
  pFVar11 = pFVar8;
  do {
    if ((uint)pFVar11 != this->CurrentFrameIndex) {
      iVar7 = this->FrameQueries[(longlong)pFVar11].Queries.ArrayNum;
      pFVar3 = this->FrameQueries + (longlong)pFVar11;
      if (this->FrameQueries[(longlong)pFVar11].FirstFreeIndex < iVar7) {
        do {
          if ((iVar7 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FRHIRenderQuery *)(*pcVar5)();
            return pFVar8;
          }
          lVar9 = (longlong)(pFVar3->Queries).ArrayNum;
          pFVar4 = (pFVar3->Queries).AllocatorInstance.Data;
          local_30 = *(undefined8 *)(pFVar4 + lVar9 * 8 + -8);
          *(undefined8 *)(pFVar4 + lVar9 * 8 + -8) = 0;
          iVar7 = (pFVar3->Queries).ArrayNum;
          pFVar4 = (pFVar3->Queries).AllocatorInstance.Data;
          this_00 = *(FRHIResource **)(pFVar4 + (longlong)iVar7 * 8 + -8);
          pFVar4 = pFVar4 + (longlong)iVar7 * 8;
          if (this_00 != (FRHIResource *)0x0) {
            FRHIResource::Release(this_00);
          }
          iVar7 = (pFVar3->Queries).ArrayNum - iVar7;
          if (iVar7 != 0) {
            memmove(pFVar4 + -8,pFVar4,(longlong)iVar7 << 3);
          }
          piVar1 = &(pFVar3->Queries).ArrayNum;
          *piVar1 = *piVar1 + -1;
          pFVar4 = (pFVar2->Queries).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_30) &&
              ((FScriptContainerElement *)&local_30 <
               pFVar4 + (longlong)(pFVar2->Queries).ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FRHIRenderQuery *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (pFVar2->Queries).ArrayNum;
          if (iVar7 == (pFVar2->Queries).ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)pFVar2,&(pFVar2->Queries).ArrayMax);
          }
          (pFVar2->Queries).ArrayNum = iVar7 + 1;
          pFVar4 = (pFVar2->Queries).AllocatorInstance.Data;
          *(undefined8 *)(pFVar4 + (longlong)iVar7 * 8) = 0;
          *(undefined8 *)(pFVar4 + (longlong)iVar7 * 8) = local_30;
          iVar7 = (pFVar3->Queries).ArrayNum;
          local_30 = 0;
        } while (pFVar3->FirstFreeIndex < iVar7);
      }
      iVar7 = pFVar2->FirstFreeIndex;
      if (iVar7 < (pFVar2->Queries).ArrayNum) {
        pFVar2->FirstFreeIndex = iVar7 + 1;
        if ((iVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FRHIRenderQuery *)(*pcVar5)();
          return pFVar8;
        }
        return *(FRHIRenderQuery **)((pFVar2->Queries).AllocatorInstance.Data + (longlong)iVar7 * 8)
        ;
      }
    }
    uVar10 = (uint)pFVar11 + 1;
    pFVar11 = (FRHIRenderQuery *)(ulonglong)uVar10;
  } while (uVar10 < 8);
  (**(code **)(GDynamicRHI->_padding_ + 0x260))(GDynamicRHI,&local_38,1);
  if (local_38 != (FRHIResource *)0x0) {
    pFVar4 = (pFVar2->Queries).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)(pFVar2->Queries).ArrayMax * 8))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHIRenderQuery *)(*pcVar5)();
      return pFVar8;
    }
    iVar7 = (pFVar2->Queries).ArrayNum;
    piVar1 = &(pFVar2->Queries).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar2,piVar1);
    }
    (pFVar2->Queries).ArrayNum = iVar7 + 1;
    pFVar4 = (pFVar2->Queries).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 8) = 0;
    *(FRHIResource **)(pFVar4 + (longlong)iVar7 * 8) = local_38;
    local_38 = (FRHIResource *)0x0;
    uVar10 = pFVar2->FirstFreeIndex;
    pFVar2->FirstFreeIndex = uVar10 + 1;
    uVar12 = 0;
    if ((int)uVar10 < (pFVar2->Queries).ArrayNum) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHIRenderQuery *)(*pcVar5)();
      return pFVar8;
    }
    pFVar8 = *(FRHIRenderQuery **)
              ((pFVar2->Queries).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
    if (local_38 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_38);
    }
  }
  return pFVar8;
}

