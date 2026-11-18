// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// OcclusionCullPrimitive<1,FGPUOcclusionPacket::FRecordVisitor> @ 145517670

/* WARNING: Removing unreachable block (ram,0x000145518860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FGPUOcclusionPacket::OcclusionCullPrimitive<1,FGPUOcclusionPacket::FRecordVisitor>
          (FGPUOcclusionPacket *this,FRecordVisitor *param_1,FOcclusionCullResult *param_2,
          int param_3)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  undefined1 *puVar3;
  uchar *puVar4;
  TVector<double> *pTVar5;
  FScene *pFVar6;
  longlong *plVar7;
  FViewInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar9;
  TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator> *pTVar10;
  ForElementType<FSetElementId> FVar11;
  FGPUOcclusionState *pFVar12;
  FOcclusionQuery *pFVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  uint uVar21;
  uint uVar22;
  FRecordVisitor *pFVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  bool bVar29;
  undefined1 uVar30;
  bool bVar31;
  char cVar32;
  bool bVar33;
  atomic<unsigned_int> aVar34;
  int iVar35;
  uint uVar36;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar37;
  undefined8 *puVar38;
  FRHIRenderQuery *pFVar39;
  TBoxSphereBounds<double,double> *pTVar40;
  double *pdVar41;
  TVector4<double> *pTVar42;
  FHZBBound *pFVar43;
  byte bVar44;
  byte bVar45;
  uint uVar46;
  ForElementType<FSetElementId> FVar47;
  TVector<double>_u_0 *pTVar48;
  atomic<unsigned_int> aVar49;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar50;
  FPrimitiveOcclusionHistory *this_00;
  FColor_u_0 *pFVar51;
  uint uVar52;
  atomic<unsigned_int> aVar53;
  uint uVar54;
  uint uVar55;
  FPrimitiveOcclusionHistory *pFVar56;
  longlong lVar57;
  double dVar58;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar59;
  double dVar61;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar68;
  undefined1 auVar72 [16];
  double dVar73;
  double dVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  float fVar79;
  float fVar80;
  FScriptContainerElement local_518;
  char local_517;
  undefined1 local_516;
  bool local_515;
  char local_514;
  char local_513;
  FScriptContainerElement local_512;
  FRecordVisitor *local_510;
  ulonglong local_508;
  FColor_u_0 local_500;
  FColor_u_0 local_4fc;
  FColor_u_0 local_4f8;
  FColor_u_0 local_4f4;
  uint local_4f0;
  int local_4ec;
  longlong *local_4e8;
  undefined8 local_4e0;
  FOcclusionCullResult *local_4d8;
  TVector<double>_u_0 local_4d0;
  undefined8 uStack_4b8;
  undefined1 local_4b0 [16];
  double local_4a0;
  ulonglong local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  FPrimitiveOcclusionHistoryKey local_470;
  uint local_468;
  undefined4 uStack_464;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  int local_418;
  undefined4 uStack_414;
  undefined2 uStack_410;
  undefined6 uStack_40e;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  TVector<double>_u_0 local_3c8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  undefined1 local_398;
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  double local_360;
  TVector<double>_u_0 local_358;
  double local_340;
  double local_338;
  double local_330;
  undefined1 local_328;
  TVector<double>_u_0 local_320;
  double local_308;
  double local_300;
  double local_2f8;
  undefined1 local_2f0;
  TVector<double>_u_0 local_2e8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined1 local_2b8;
  uint local_2b0;
  undefined4 uStack_2ac;
  double dStack_2a8;
  undefined1 local_2a0 [16];
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  FPrimitiveOcclusionHistory *local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  undefined8 local_248;
  char cStack_240;
  undefined7 uStack_23f;
  FPrimitiveOcclusionHistory *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined1 local_1b8 [32];
  double local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  TVector4<double> local_148 [2];
  double local_f8;
  double dVar60;
  
  pFVar6 = this->Scene;
  lVar57 = (longlong)param_3;
  aVar53 = (atomic<unsigned_int>)0x0;
  aVar49 = (atomic<unsigned_int>)((uint)~param_3 >> 0x1f);
  aVar34 = aVar53;
  if (param_3 < (pFVar6->PrimitiveOcclusionFlags).ArrayNum) {
    aVar34 = aVar49;
  }
  local_510 = param_1;
  local_4d8 = param_2;
  if ((aVar34 == (atomic<unsigned_int>)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar15 = (code *)swi(3);
    uVar30 = (*pcVar15)();
    return (bool)uVar30;
  }
  local_4f0 = 1;
  local_517 = '\0';
  local_4e8 = (longlong *)0x0;
  local_512 = (pFVar6->PrimitiveOcclusionFlags).AllocatorInstance.Data[lVar57];
  local_4ec = 0;
  if (((byte)local_512 & 0x20) == 0) {
    uVar46 = param_3 >> 0x1f;
    bVar44 = (byte)param_3;
    if ((((byte)local_512 & 0x10) != 0) && (this->OcclusionState->bAllowSubQueries != false)) {
      pFVar6 = this->Scene;
      aVar34 = aVar53;
      if (param_3 < (pFVar6->PrimitiveSceneProxies).ArrayNum) {
        aVar34 = aVar49;
      }
      if ((aVar34 == (atomic<unsigned_int>)0x0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar15 = (code *)swi(3);
        uVar30 = (*pcVar15)();
        return (bool)uVar30;
      }
      plVar7 = *(longlong **)((pFVar6->PrimitiveSceneProxies).AllocatorInstance.Data + lVar57 * 8);
      local_4e8 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7,this->View);
      local_517 = '\x01';
      local_4f0 = *(uint *)(local_4e8 + 1);
      if (local_4f0 == 0) {
        pFVar8 = this->View;
        if (((param_3 < 0) || ((pFVar8->PrimitiveVisibilityMap).NumBits <= param_3)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar29)) {
          pcVar15 = (code *)swi(3);
          uVar30 = (*pcVar15)();
          return (bool)uVar30;
        }
        pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(pFVar8->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
        pTVar50 = &pFVar8->PrimitiveVisibilityMap;
        if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar50 = pTVar9;
        }
        uVar52 = 1 << (bVar44 & 0x1f);
        lVar57 = (longlong)((int)(param_3 + (uVar46 & 0x1f)) >> 5);
        if ((uVar52 & *(uint *)((pTVar50->AllocatorInstance).InlineData + lVar57 * 4)) != 0) {
          LOCK();
          puVar4 = (pTVar50->AllocatorInstance).InlineData + lVar57 * 4;
          *(uint *)puVar4 = *(uint *)puVar4 & ~uVar52;
          UNLOCK();
        }
        goto LAB_145517821;
      }
      pTVar37 = this->SubIsOccluded;
      if ((pTVar37 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) ||
         (pTVar37->ArrayMax < (int)(pTVar37->ArrayNum + local_4f0))) {
        pTVar37 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
                  Create<TArray<bool,TSizedDefaultAllocator<32>_>_>(&this->View->Allocator);
        this->SubIsOccluded = pTVar37;
        uVar52 = 0x400;
        if (0x400 < local_4f0) {
          uVar52 = local_4f0;
        }
        if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
        }
        if (pTVar37->ArrayMax < (int)uVar52) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar52,&pTVar37->AllocatorInstance,pTVar37->ArrayNum,&pTVar37->ArrayMax);
        }
      }
      local_4ec = this->SubIsOccluded->ArrayNum;
    }
    pFVar6 = this->Scene;
    local_516 = 1;
    local_513 = '\x01';
    aVar34 = aVar53;
    if (param_3 < (pFVar6->PrimitiveComponentIds).ArrayNum) {
      aVar34 = aVar49;
    }
    local_514 = '\x01';
    if ((aVar34 == (atomic<unsigned_int>)0x0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar15 = (code *)swi(3);
      uVar30 = (*pcVar15)();
      return (bool)uVar30;
    }
    uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar20 = __real_3ff0000000000000;
    uVar52 = *(uint *)((pFVar6->PrimitiveComponentIds).AllocatorInstance.Data + lVar57 * 4);
    local_3e8 = ZEXT816(0);
    local_408 = ZEXT816(0);
    local_488 = 0.0;
    local_490 = 0.0;
    local_480 = 0.0;
    local_4e0 = __real_3ff0000000000000;
    local_478 = __real_3ff0000000000000;
    local_3d8 = ___xmm_3ff00000000000000000000000000000;
    local_3f8 = ___xmm_3ff00000000000000000000000000000;
    if ((0.0 < GExpandAllTestedBBoxesScreenSpace) ||
       (0.0 < GExpandNewlyOcclusionTestedBBoxesScreenSpace)) {
      pFVar8 = this->View;
      fVar80 = __real_3f800000 /
               (float)(*(int *)((longlong)&(pFVar8->ViewRect).field0_0x0 + 8) -
                      *(int *)&(pFVar8->ViewRect).field0_0x0);
      fVar79 = __real_3f800000 /
               (float)(*(int *)((longlong)&(pFVar8->ViewRect).field0_0x0 + 0xc) -
                      *(int *)((longlong)&(pFVar8->ViewRect).field0_0x0 + 4));
      dVar73 = (double)(fVar80 * (GExpandNewlyOcclusionTestedBBoxesScreenSpace +
                                 GExpandAllTestedBBoxesScreenSpace));
      dVar58 = (double)(fVar79 * (GExpandNewlyOcclusionTestedBBoxesScreenSpace +
                                 GExpandAllTestedBBoxesScreenSpace));
      auVar62._8_4_ = SUB84(dVar73,0);
      auVar62._0_8_ = dVar73;
      auVar62._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
      dVar61 = dVar58 * (double)pFVar8->_padding_ + dVar73 * (double)pFVar8->_padding_ +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      dVar68 = dVar58 * (double)pFVar8->_padding_ + auVar62._8_8_ * (double)pFVar8->_padding_ +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      uVar75 = SUB84(dVar68,0);
      uVar76 = (undefined4)((ulonglong)dVar68 >> 0x20);
      local_188._8_4_ = uVar75;
      local_188._0_8_ = dVar61;
      local_188._12_4_ = uVar76;
      local_3e8._8_4_ = uVar75;
      local_3e8._0_8_ = dVar61;
      local_3e8._12_4_ = uVar76;
      dVar61 = dVar58 * (double)pFVar8->_padding_ + dVar73 * (double)pFVar8->_padding_ +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      dVar68 = dVar58 * (double)pFVar8->_padding_ + dVar73 * (double)pFVar8->_padding_ +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      uVar75 = SUB84(dVar68,0);
      uVar76 = (undefined4)((ulonglong)dVar68 >> 0x20);
      dVar58 = (double)(fVar79 * GExpandAllTestedBBoxesScreenSpace);
      local_178._8_4_ = uVar75;
      local_178._0_8_ = dVar61;
      local_178._12_4_ = uVar76;
      local_3d8._8_4_ = uVar75;
      local_3d8._0_8_ = dVar61;
      local_3d8._12_4_ = uVar76;
      dVar73 = (double)(fVar80 * GExpandAllTestedBBoxesScreenSpace);
      auVar63._8_4_ = SUB84(dVar73,0);
      auVar63._0_8_ = dVar73;
      auVar63._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
      dVar61 = dVar58 * (double)pFVar8->_padding_ + dVar73 * (double)pFVar8->_padding_ +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      dVar68 = dVar58 * (double)pFVar8->_padding_ + auVar63._8_8_ * (double)pFVar8->_padding_ +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      uVar75 = SUB84(dVar68,0);
      uVar76 = (undefined4)((ulonglong)dVar68 >> 0x20);
      local_488 = (double)pFVar8->_padding_;
      local_490 = (double)pFVar8->_padding_;
      local_480 = (double)pFVar8->_padding_;
      local_478 = (double)pFVar8->_padding_;
      dVar68 = dVar58 * (double)pFVar8->_padding_ + dVar73 * (double)pFVar8->_padding_ +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      dVar73 = dVar58 * (double)pFVar8->_padding_ + dVar73 * (double)pFVar8->_padding_ +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      uVar77 = SUB84(dVar73,0);
      uVar78 = (undefined4)((ulonglong)dVar73 >> 0x20);
      local_158._8_4_ = uVar77;
      local_158._0_8_ = dVar68;
      local_158._12_4_ = uVar78;
      local_3f8._8_4_ = uVar77;
      local_3f8._0_8_ = dVar68;
      local_3f8._12_4_ = uVar78;
      local_168._8_4_ = uVar75;
      local_168._0_8_ = dVar61;
      local_168._12_4_ = uVar76;
      local_408._8_4_ = uVar75;
      local_408._0_8_ = dVar61;
      local_408._12_4_ = uVar76;
    }
    local_508 = 0;
    uVar54 = 0;
    if (0 < (int)local_4f0) {
      local_4e0 = (double)CONCAT44((int)((ulonglong)__real_3ff0000000000000 >> 0x20),
                                   1 << (bVar44 & 0x1f) | 1U >> 0x20 - (bVar44 & 0x1f));
      pFVar56 = (FPrimitiveOcclusionHistory *)0x0;
      do {
        pTVar10 = this->PrimitiveOcclusionHistorySet;
        iVar35 = (int)pFVar56;
        if (*(int *)&(pTVar10->Elements).field_0x8 != *(int *)&(pTVar10->Elements).field_0x34) {
          FVar11 = (pTVar10->Hash).SecondaryData;
          FVar47 = (ForElementType<FSetElementId>)&pTVar10->Hash;
          if (FVar11 != (ForElementType<FSetElementId>)0x0) {
            FVar47 = FVar11;
          }
          uVar55 = *(uint *)((longlong)FVar47 +
                            (ulonglong)
                            (pTVar10->HashSize - 1U & ((uint)((ulonglong)pFVar56 >> 0x14) ^ uVar52))
                            * 4);
          if (uVar55 != 0xffffffff) {
            do {
              this_00 = (FPrimitiveOcclusionHistory *)
                        ((longlong)(int)uVar55 * 0x68 + *(longlong *)&pTVar10->Elements);
              if (((this_00->PrimitiveId).PrimIDValue == uVar52) && (this_00->CustomIndex == iVar35)
                 ) {
                if (uVar55 != 0xffffffff) goto LAB_145517ca0;
                break;
              }
              uVar55 = this_00[1].PrimitiveId.PrimIDValue;
            } while (uVar55 != 0xffffffff);
          }
        }
        this_00 = (FPrimitiveOcclusionHistory *)0x0;
LAB_145517ca0:
        bVar29 = false;
        local_518 = (FScriptContainerElement)0x0;
        if (this_00 == (FPrimitiveOcclusionHistory *)0x0) {
          uStack_430 = 0xffffffffffffffff;
          local_428 = 0;
          uStack_420 = 0;
          uStack_414 = 0;
          uStack_410 = 0;
          uStack_460 = 0;
          uStack_440 = 0;
          local_458 = 0;
          uStack_450 = 0;
          local_438 = 0;
          local_448 = 0;
          local_468 = uVar52;
          local_418 = iVar35;
          iVar35 = TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                   ::Add(&local_510->OcclusionHistories,1);
          uVar55 = iVar35 / 10;
          uVar36 = uVar54;
          if ((int)uVar55 < (local_510->OcclusionHistories).Chunks.Array.ArrayNum) {
            uVar36 = ~uVar55 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar15 = (code *)swi(3);
            uVar30 = (*pcVar15)();
            return (bool)uVar30;
          }
          puVar38 = (undefined8 *)
                    ((longlong)
                     (local_510->OcclusionHistories).Chunks.Array.AllocatorInstance.Data
                     [(int)uVar55] + (ulonglong)(uint)(iVar35 % 10) * 0x60);
          if (puVar38 != (undefined8 *)0x0) {
            *puVar38 = CONCAT44(uStack_464,local_468);
            puVar38[1] = uStack_460;
            puVar38[2] = local_458;
            puVar38[3] = uStack_450;
            puVar38[4] = local_448;
            puVar38[5] = uStack_440;
            auVar65._8_8_ = uStack_420;
            auVar65._0_8_ = local_428;
            puVar38[6] = local_438;
            puVar38[7] = uStack_430;
            auVar18._4_4_ = uStack_414;
            auVar18._0_4_ = local_418;
            auVar18._8_2_ = uStack_410;
            auVar18._10_6_ = uStack_40e;
            *(undefined1 (*) [16])(puVar38 + 8) = auVar65;
            *(undefined1 (*) [16])(puVar38 + 10) = auVar18;
          }
          iVar35 = (local_510->OcclusionHistories).NumElements + -1;
          uVar55 = iVar35 / 10;
          uVar36 = uVar54;
          if ((int)uVar55 < (local_510->OcclusionHistories).Chunks.Array.ArrayNum) {
            uVar36 = ~uVar55 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar15 = (code *)swi(3);
            uVar30 = (*pcVar15)();
            return (bool)uVar30;
          }
          this_00 = (FPrimitiveOcclusionHistory *)
                    ((ulonglong)(uint)(iVar35 % 10) * 0x60 +
                    (longlong)
                    (local_510->OcclusionHistories).Chunks.Array.AllocatorInstance.Data[(int)uVar55]
                    );
        }
        else if (this->View->bIgnoreExistingQueries == 0) {
          if (this->bUseOcclusionFeedback == false) {
            pFVar12 = this->OcclusionState;
            if (pFVar12->bHZBOcclusion == false) {
              local_498 = 0;
              iVar35 = pFVar12->NumBufferedFrames;
              local_515 = false;
              pFVar39 = FPrimitiveOcclusionHistory::GetQueryForReading
                                  (this_00,this->OcclusionFrameCounter,iVar35,
                                   pFVar12->ReadBackLagTolerance,&local_515);
              if (pFVar39 == (FRHIRenderQuery *)0x0) {
                if ((iVar35 < 2) && (0x7ffffffe < GRHIGlobals.MaximumInFlightQueries)) {
                  bVar29 = true;
                  local_518 = (FScriptContainerElement)
                              (this_00->LastProvenVisibleTime +
                               GEngine->PrimitiveProbablyVisibleTime < this->CurrentRealTime);
                }
                else {
                  local_518 = this_00->WasOccludedLastFrame;
                  bVar29 = this_00->OcclusionStateWasDefiniteLastFrame;
                }
                if (local_518 == (FScriptContainerElement)0x0) {
                  this_00->LastPixelsPercentage = GEngine->MaxOcclusionPixelsFraction;
                }
                else {
                  this_00->LastPixelsPercentage = 0.0;
                }
              }
              else {
                cVar32 = (**(code **)(GDynamicRHI->_padding_ + 0x288))
                                   (GDynamicRHI,pFVar39,&local_498,1,0xffffffff);
                if (cVar32 != '\0') {
                  local_518 = (FScriptContainerElement)((int)local_498 == 0);
                  if ((int)local_498 == 0) {
                    fVar79 = 0.0;
                  }
                  else {
                    fVar79 = (float)(local_498 & 0xffffffff) * this->View->OneOverNumPossiblePixels;
                  }
                  this_00->LastPixelsPercentage = fVar79;
                  bVar29 = local_515 == false;
                }
                local_4d8->NumTestedQueries = local_4d8->NumTestedQueries + 1;
              }
              pFVar56 = (FPrimitiveOcclusionHistory *)(local_508 & 0xffffffff);
            }
            else {
              bVar31 = FHZBOcclusionTester::IsValidFrame
                                 (this->HZBOcclusionTests,this_00->LastTestFrameNumber);
              if (bVar31) {
                bVar29 = FHZBOcclusionTester::IsVisible
                                   (this->HZBOcclusionTests,this_00->HZBTestIndex);
                local_518 = (FScriptContainerElement)!bVar29;
                bVar29 = true;
              }
            }
          }
          else {
            local_470.PrimitiveId.PrimIDValue = uVar52;
            local_470.CustomIndex = iVar35;
            local_518 = (FScriptContainerElement)
                        FOcclusionFeedback::IsOccluded(this->OcclusionFeedback,&local_470);
            bVar29 = true;
          }
          if ((GVisualizeOccludedPrimitives == 1) && (local_518 != (FScriptContainerElement)0x0)) {
            if (local_517 == '\0') {
              pTVar40 = TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::Get
                                  (&this->Scene->PrimitiveOcclusionBounds,param_3);
            }
            else {
              uVar55 = uVar54;
              if ((int)(uint)pFVar56 < (int)local_4e8[1]) {
                uVar55 = ~(uint)pFVar56 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar15 = (code *)swi(3);
                uVar30 = (*pcVar15)();
                return (bool)uVar30;
              }
              pTVar40 = (TBoxSphereBounds<double,double> *)((longlong)pFVar56 * 0x38 + *local_4e8);
            }
            local_3b0 = (pTVar40->Origin).field0_0x0._s_0.X;
            local_3a8 = (pTVar40->Origin).field0_0x0._s_0.Y;
            local_3a0 = (pTVar40->Origin).field0_0x0._s_0.Z;
            local_3c8._s_0.X = local_3b0 - (pTVar40->BoxExtent).field0_0x0._s_0.X;
            dVar61 = (pTVar40->BoxExtent).field0_0x0._s_0.Y;
            local_3b0 = local_3b0 + (pTVar40->BoxExtent).field0_0x0._s_0.X;
            local_3c8._s_0.Y = local_3a8 - dVar61;
            local_3a8 = local_3a8 + dVar61;
            local_500.Bits = 0xff32ff32;
            local_3c8._s_0.Z = local_3a0 - (pTVar40->BoxExtent).field0_0x0._s_0.Z;
            local_3a0 = local_3a0 + (pTVar40->BoxExtent).field0_0x0._s_0.Z;
            local_398 = 1;
            FRecordVisitor::AddVisualizeQuery
                      (local_510,(TBox<double> *)&local_3c8._s_0,(FColor *)&local_500._s_0);
          }
        }
        else {
          bVar29 = this->View->bDisableQuerySubmissions;
        }
        if (this->OcclusionState->bSubmitQueries != false) {
          bVar31 = false;
          if (this->bNewlyConsideredBBoxExpandActive != false) {
            bVar45 = this_00->field_0x54;
            if ((this_00->BecameEligibleForQueryCooldown == 0) &&
               ((uint)GFramesNotOcclusionTestedToExpandBBoxes <
                this->OcclusionFrameCounter - this_00->LastConsideredFrameNumber)) {
              bVar45 = (this_00->BecameEligibleForQueryCooldown ^
                       (byte)GFramesToExpandNewlyOcclusionTestedBBoxes) & 0x3f ^ bVar45;
              this_00->field_0x54 = bVar45;
            }
            bVar31 = (bVar45 & 0x3f) != 0;
            if ((bVar45 & 0x3f) != 0) {
              this_00->field_0x54 = (bVar45 - 1 ^ bVar45) & 0x3f ^ bVar45;
            }
          }
          if (local_517 == '\0') {
            pTVar40 = TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::Get
                                (&this->Scene->PrimitiveOcclusionBounds,param_3);
          }
          else {
            uVar55 = uVar54;
            if ((int)(uint)local_508 < (int)local_4e8[1]) {
              uVar55 = ~(uint)local_508 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar15 = (code *)swi(3);
              uVar30 = (*pcVar15)();
              return (bool)uVar30;
            }
            pTVar40 = (TBoxSphereBounds<double,double> *)
                      ((local_508 & 0xffffffff) * 0x38 + *local_4e8);
          }
          auVar62 = *(undefined1 (*) [16])((longlong)&(pTVar40->Origin).field0_0x0 + 0x10);
          dVar58 = auVar62._8_8_;
          dVar61 = pTVar40->SphereRadius;
          pauVar1 = (undefined1 (*) [16])((longlong)&(pTVar40->BoxExtent).field0_0x0 + 8);
          dVar68 = *(double *)*pauVar1;
          dVar73 = (pTVar40->BoxExtent).field0_0x0._s_0.Z;
          auVar65 = *pauVar1;
          auVar63 = *(undefined1 (*) [16])&(pTVar40->Origin).field0_0x0;
          uVar75 = auVar63._0_4_;
          uVar76 = auVar63._4_4_;
          uVar77 = auVar63._8_4_;
          uVar78 = auVar63._12_4_;
          dVar74 = auVar63._8_8_;
          dVar59 = auVar62._0_8_;
          dVar60 = auVar63._0_8_;
          local_200 = auVar63;
          local_1f0 = auVar62;
          local_1e0 = dVar68;
          dStack_1d8 = dVar73;
          local_1d0 = dVar61;
          if ((GVisualizePrimitiveBBoxes == 2) &&
             ((GVisualizeOccludedPrimitives != 1 || (local_518 == (FScriptContainerElement)0x0)))) {
            local_4fc.Bits = 0xff009b00;
            local_2e8._s_0.X = dVar60 - dVar58;
            local_2b8 = 1;
            local_2d0 = dVar60 + dVar58;
            local_2e8._s_0.Y = dVar74 - dVar68;
            local_2c8 = dVar74 + dVar68;
            local_2e8._s_0.Z = dVar59 - dVar73;
            local_2c0 = dVar59 + dVar73;
            FRecordVisitor::AddVisualizeQuery
                      (local_510,(TBox<double> *)&local_2e8._s_0,(FColor *)&local_4fc._s_0);
          }
          if ((0.0 < GExpandAllTestedBBoxesAmount) ||
             (local_380 = auVar62, local_370 = auVar65,
             0.0 < GExpandNewlyOcclusionTestedBBoxesAmount)) {
            if (bVar31) {
              dVar67 = (double)GExpandNewlyOcclusionTestedBBoxesAmount;
            }
            else {
              dVar67 = 0.0;
            }
            dVar67 = (double)GExpandAllTestedBBoxesAmount + dVar67;
            dVar61 = local_1d0 + dVar67;
            dVar58 = dVar58 + dVar67;
            dVar68 = dVar68 + dVar67;
            dVar73 = dVar73 + dVar67;
            local_380._8_4_ = SUB84(dVar58,0);
            local_380._0_8_ = dVar59;
            local_380._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            local_370._8_4_ = SUB84(dVar73,0);
            local_370._0_8_ = dVar68;
            local_370._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
            local_f8 = dVar61;
          }
          auVar69 = ZEXT416((uint)GExpandAllTestedBBoxesScreenSpace);
          local_1b8._8_4_ = SUB84(dVar58,0);
          local_1b8._0_8_ = dVar59;
          local_1b8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          if ((0.0 < GExpandAllTestedBBoxesScreenSpace) ||
             (local_4a0 = dVar61, 0.0 < GExpandNewlyOcclusionTestedBBoxesScreenSpace)) {
            pdVar41 = (double *)local_3e8;
            if (!bVar31) {
              pdVar41 = (double *)local_408;
            }
            auVar69._0_8_ = dVar74 * local_490 + dVar60 * local_488 + dVar59 * local_480 + local_478
            ;
            auVar69._8_8_ = dVar74;
            dVar74 = (double)(float)auVar69._0_8_;
            dVar58 = (double)CONCAT44((uint)((ulonglong)(dVar74 * *pdVar41) >> 0x20) & uVar22,
                                      SUB84(dVar74 * *pdVar41,0) & uVar21) + dVar58;
            dVar68 = (double)CONCAT44((uint)((ulonglong)(dVar74 * pdVar41[1]) >> 0x20) & uVar22,
                                      SUB84(dVar74 * pdVar41[1],0) & uVar21) + dVar68;
            dVar73 = (double)CONCAT44((uint)((ulonglong)(dVar74 * pdVar41[2]) >> 0x20) & uVar22,
                                      SUB84(dVar74 * pdVar41[2],0) & uVar21) + dVar73;
            local_1b8._8_8_ = dVar58;
            auVar64._0_8_ = dVar68 * dVar68 + dVar58 * dVar58 + dVar73 * dVar73;
            auVar64._8_8_ = 0;
            auVar65 = sqrtpd(auVar64,auVar64);
            local_198 = auVar65._0_8_;
            local_4a0 = local_198;
          }
          local_4b0._8_4_ = SUB84(dVar73,0);
          local_4b0._0_8_ = dVar68;
          local_4b0._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          local_4d0._0_16_ = auVar63;
          local_4d0._16_4_ = auVar62._0_4_;
          local_4d0._20_4_ = auVar62._4_4_;
          uStack_4b8 = dVar58;
          local_390 = auVar63;
          local_360 = dVar61;
          if ((GVisualizeOccludedPrimitives == 2) && (local_518 != (FScriptContainerElement)0x0)) {
            local_4f8.Bits = 0xff32ff32;
            local_358._s_0.X = dVar60 - dVar58;
            local_328 = 1;
            auVar16._4_8_ = auVar69._8_8_;
            auVar16._0_4_ = uVar76;
            auVar70._0_8_ = auVar16._0_8_ << 0x20;
            auVar70._8_4_ = uVar77;
            auVar70._12_4_ = uVar78;
            local_340 = dVar58 + dVar60;
            pFVar51 = &local_4f8;
            pTVar48 = &local_358;
            local_358._s_0.Y = auVar70._8_8_ - dVar68;
            local_338 = dVar68 + auVar70._8_8_;
            local_358._s_0.Z = dVar59 - dVar73;
            local_330 = dVar73 + dVar59;
LAB_14551856e:
            FRecordVisitor::AddVisualizeQuery
                      (local_510,(TBox<double> *)&pTVar48->_s_0,(FColor *)&pFVar51->_s_0);
            uVar75 = local_4d0._0_4_;
            uVar76 = local_4d0._4_4_;
            uVar77 = local_4d0._8_4_;
            uVar78 = local_4d0._12_4_;
          }
          else if (0 < GVisualizePrimitiveBBoxes) {
            local_4f4.Bits = 0xff9b0000;
            local_320._s_0.X = dVar60 - dVar58;
            local_2f0 = 1;
            auVar17._4_8_ = auVar69._8_8_;
            auVar17._0_4_ = uVar76;
            auVar71._0_8_ = auVar17._0_8_ << 0x20;
            auVar71._8_4_ = uVar77;
            auVar71._12_4_ = uVar78;
            local_308 = dVar58 + dVar60;
            pFVar51 = &local_4f4;
            pTVar48 = &local_320;
            local_320._s_0.Y = auVar71._8_8_ - dVar68;
            local_300 = dVar68 + auVar71._8_8_;
            local_320._s_0.Z = dVar59 - dVar73;
            local_2f8 = dVar73 + dVar59;
            goto LAB_14551856e;
          }
          dVar61 = (double)CONCAT44(local_4d0._20_4_,local_4d0._16_4_) -
                   (this->ViewOrigin).field0_0x0._s_0.Z;
          dVar73 = (double)CONCAT44(uVar78,uVar77) - (this->ViewOrigin).field0_0x0._s_0.Y;
          dVar68 = (double)CONCAT44(uVar76,uVar75) - (this->ViewOrigin).field0_0x0._s_0.X;
          if ((double)this->NeverOcclusionTestDistanceSquared <=
              dVar73 * dVar73 + dVar68 * dVar68 + dVar61 * dVar61) {
            pFVar8 = this->View;
            if (*(bool *)((longlong)&pFVar8->_padding_ + 1) == false) {
              if ((double)pFVar8->_padding_ <= dVar20 && dVar20 != (double)pFVar8->_padding_) {
                bVar31 = local_4a0 < __real_4290000000000000;
              }
              else {
                pTVar42 = FSceneView::WorldToScreen
                                    ((FSceneView *)pFVar8,local_148,
                                     (TVector<double> *)&local_4d0._s_0);
                uVar75 = local_4d0._0_4_;
                uVar76 = local_4d0._4_4_;
                uVar78 = local_4d0._12_4_;
                bVar31 = (pTVar42->field0_0x0)._s_0.Z - local_4a0 * (double)pFVar8->_padding_ <
                         dVar20;
                uVar77 = local_4d0._8_4_;
              }
            }
            else {
              dVar61 = (double)((TPlane<double> *)&pFVar8->_padding_)->_padding_;
              dVar58 = (double)local_4b0._0_8_ * (double)pFVar8->_padding_;
              dVar68 = uStack_4b8 * dVar61;
              dVar73 = (double)local_4b0._8_8_ * (double)pFVar8->_padding_;
              dVar68 = (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) & uVar22,
                                        SUB84(dVar58,0) & uVar21) +
                       (double)CONCAT44((uint)((ulonglong)dVar68 >> 0x20) & uVar22,
                                        SUB84(dVar68,0) & uVar21) +
                       (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar22,
                                        SUB84(dVar73,0) & uVar21);
              bVar31 = ((double)CONCAT44(uVar78,uVar77) * (double)pFVar8->_padding_ +
                        (double)CONCAT44(uVar76,uVar75) * dVar61 +
                       (double)CONCAT44(local_4d0._20_4_,local_4d0._16_4_) *
                       (double)pFVar8->_padding_) - (double)pFVar8->_padding_ <
                       (double)CONCAT44((uint)((ulonglong)dVar68 >> 0x20) ^
                                        __xmm_80000000000000008000000000000000._4_4_,
                                        SUB84(dVar68,0) ^
                                        (uint)__xmm_80000000000000008000000000000000);
            }
            dVar61 = uStack_4b8;
            pFVar23 = local_510;
            if (bVar31) {
              this_00->LastTestFrameNumber = this->OcclusionFrameCounter;
              uVar24 = (undefined4)uStack_4b8;
              uVar25 = uStack_4b8._4_4_;
              uVar26 = local_4b0._0_4_;
              uVar28 = local_4b0._4_4_;
              uVar27 = local_4b0._8_8_;
              if (this->bUseOcclusionFeedback == false) {
                if (this->OcclusionState->bHZBOcclusion == false) {
                  if ((local_517 == '\0') && (((byte)local_512 & 4) != 0)) {
                    if (local_518 == (FScriptContainerElement)0x0) {
                      cVar32 = '\0';
                      if (bVar29 != false) {
                        LOCK();
                        UNLOCK();
                        bVar31 = 0xdf2 < (uint)GOcclusionRandomStream.CurrentSample;
                        aVar34 = GOcclusionRandomStream.CurrentSample;
                        GOcclusionRandomStream.CurrentSample =
                             (atomic<unsigned_int>)((int)GOcclusionRandomStream.CurrentSample + 1);
                        if (bVar31) {
                          LOCK();
                          GOcclusionRandomStream.CurrentSample = (atomic<unsigned_int>)0x0;
                          UNLOCK();
                          aVar34 = aVar53;
                        }
                        if (GRHIGlobals.SupportsExactOcclusionQueries == false) {
                          fVar79 = this->CurrentRealTime - this_00->LastProvenVisibleTime;
                          fVar80 = GOcclusionRandomStream.Samples[(uint)aVar34] *
                                   this->PrimitiveProbablyVisibleTime * __real_3e000000;
                          bVar31 = fVar79 == fVar80;
                          bVar33 = fVar79 < fVar80;
                        }
                        else {
                          fVar79 = GEngine->MaxOcclusionPixelsFraction;
                          fVar80 = this_00->LastPixelsPercentage / fVar79;
                          if (fVar80 <= __real_3f800000) {
                            fVar80 = __real_3f800000;
                          }
                          fVar80 = fVar80 * GOcclusionRandomStream.Samples[(uint)aVar34];
                          bVar31 = fVar79 == fVar80;
                          bVar33 = fVar79 < fVar80;
                        }
                        if (bVar33 || bVar31) goto LAB_1455189e6;
                        uVar77 = local_4d0._8_4_;
                        uVar78 = local_4d0._12_4_;
                        uVar75 = local_4d0._0_4_;
                        uVar76 = local_4d0._4_4_;
                      }
                    }
                    else {
                      cVar32 = '\x01';
                    }
                  }
                  else {
                    cVar32 = '\0';
                  }
                  pFVar8 = this->View;
                  dVar58 = (double)CONCAT44(uVar76,uVar75) + (double)pFVar8->_padding_;
                  dVar68 = (double)pFVar8->_padding_;
                  dVar73 = (double)pFVar8->_padding_;
                  dVar59 = (double)CONCAT44(local_4d0._20_4_,local_4d0._16_4_);
                  if ((GRHIGlobals.MaximumInFlightQueries < 0x7fffffff) && (cVar32 == '\0')) {
                    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!\"Enclosing block should never be called\"",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                                        ,0x3c1,L"");
                    if (bVar31) {
                      pcVar15 = (code *)swi(3);
                      uVar30 = (*pcVar15)();
                      return (bool)uVar30;
                    }
                  }
                  else {
                    uVar27 = local_4b0._0_8_;
                    piVar2 = &(local_510->OcclusionQueries).ArrayMax;
                    iVar35 = (local_510->OcclusionQueries).ArrayNum;
                    local_258 = uStack_4b8;
                    dStack_250 = (double)local_4b0._0_8_;
                    local_248 = local_4b0._8_8_;
                    local_278 = this_00;
                    dStack_270 = dVar58;
                    cStack_240 = cVar32;
                    if (iVar35 == *piVar2) {
                      iVar35 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQuery>_>
                                         (0x840,&(local_510->OcclusionQueries).AllocatorInstance,
                                          piVar2);
                    }
                    (pFVar23->OcclusionQueries).ArrayNum = iVar35 + 1;
                    pFVar13 = (pFVar23->OcclusionQueries).AllocatorInstance.Data;
                    local_268._8_8_ = dVar59 + dVar73;
                    local_268._0_8_ = (double)CONCAT44(uVar78,uVar77) + dVar68;
                    pFVar13[iVar35].PrimitiveOcclusionHistory = local_278;
                    pFVar13[iVar35].Bounds.Origin.field0_0x0._s_0.X = dStack_270;
                    auVar19[8] = cStack_240;
                    auVar19._0_8_ = local_248;
                    auVar19._9_7_ = uStack_23f;
                    *(undefined1 (*) [16])((longlong)&pFVar13[iVar35].Bounds.Origin.field0_0x0 + 8)
                         = local_268;
                    pFVar13[iVar35].Bounds.Extent.field0_0x0._s_0.X = dVar61;
                    pFVar13[iVar35].Bounds.Extent.field0_0x0._s_0.Y = (double)uVar27;
                    *(undefined1 (*) [16])
                     ((longlong)&pFVar13[iVar35].Bounds.Extent.field0_0x0 + 0x10) = auVar19;
                  }
                  goto LAB_1455189e6;
                }
                piVar2 = &(local_510->HZBBounds).ArrayMax;
                uStack_220 = CONCAT44(local_4d0._20_4_,local_4d0._16_4_);
                iVar35 = (local_510->HZBBounds).ArrayNum;
                local_218 = (undefined4)uStack_4b8;
                uStack_214 = uStack_4b8._4_4_;
                uStack_210 = local_4b0._0_4_;
                uStack_20c = local_4b0._4_4_;
                local_208 = local_4b0._8_8_;
                local_238 = this_00;
                uStack_230 = uVar75;
                uStack_22c = uVar76;
                uStack_228 = uVar77;
                uStack_224 = uVar78;
                if (iVar35 == *piVar2) {
                  iVar35 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHZBBound>_>
                                     (0x838,&(local_510->HZBBounds).AllocatorInstance,piVar2);
                }
                auVar66._8_4_ = uStack_230;
                auVar66._0_8_ = local_238;
                auVar66._12_4_ = uStack_22c;
                auVar72._4_4_ = uStack_224;
                auVar72._0_4_ = uStack_228;
                auVar72._8_8_ = uStack_220;
                (pFVar23->HZBBounds).ArrayNum = iVar35 + 1;
                pFVar43 = (pFVar23->HZBBounds).AllocatorInstance.Data;
              }
              else {
                pFVar8 = this->View;
                piVar2 = &(local_510->OcclusionFeedbacks).ArrayMax;
                dStack_2a8 = (double)CONCAT44(uVar76,uVar75) + (double)pFVar8->_padding_;
                dVar61 = (double)pFVar8->_padding_;
                dVar68 = (double)pFVar8->_padding_;
                dVar73 = (double)CONCAT44(local_4d0._20_4_,local_4d0._16_4_);
                iVar35 = (local_510->OcclusionFeedbacks).ArrayNum;
                uStack_2ac = (uint)local_508;
                local_290 = (undefined4)uStack_4b8;
                uStack_28c = uStack_4b8._4_4_;
                uStack_288 = local_4b0._0_4_;
                uStack_284 = local_4b0._4_4_;
                local_280 = local_4b0._8_8_;
                local_2b0 = uVar52;
                if (iVar35 == *piVar2) {
                  iVar35 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionFeedbackEntry>_>
                                     (0x838,&(local_510->OcclusionFeedbacks).AllocatorInstance,
                                      piVar2);
                }
                auVar66._4_4_ = uStack_2ac;
                auVar66._0_4_ = local_2b0;
                auVar66._8_8_ = dStack_2a8;
                (pFVar23->OcclusionFeedbacks).ArrayNum = iVar35 + 1;
                auVar72._8_8_ = dVar73 + dVar68;
                auVar72._0_8_ = (double)CONCAT44(uVar78,uVar77) + dVar61;
                pFVar43 = (FHZBBound *)(pFVar23->OcclusionFeedbacks).AllocatorInstance.Data;
                local_2a0 = auVar72;
              }
              *(undefined1 (*) [16])(pFVar43 + iVar35) = auVar66;
              *(undefined1 (*) [16])
               ((longlong)&(((FOcclusionBounds *)&pFVar43[iVar35].BoundsOrigin)->Origin).field0_0x0
               + 8) = auVar72;
              pTVar5 = &pFVar43[iVar35].BoundsExtent;
              *(undefined4 *)&pTVar5->field0_0x0 = uVar24;
              *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 4) = uVar25;
              *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 8) = uVar26;
              *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 0xc) = uVar28;
              *(undefined8 *)((longlong)&pFVar43[iVar35].BoundsExtent.field0_0x0 + 0x10) = uVar27;
              goto LAB_1455189e6;
            }
          }
          local_518 = (FScriptContainerElement)0x0;
          bVar29 = true;
        }
LAB_1455189e6:
        this_00->LastConsideredTime = this->CurrentRealTime;
        if ((local_518 == (FScriptContainerElement)0x0) && (bVar29 != false)) {
          this_00->LastProvenVisibleTime = this->CurrentRealTime;
        }
        this_00->LastConsideredFrameNumber = this->OcclusionFrameCounter;
        this_00->WasOccludedLastFrame = local_518;
        this_00->OcclusionStateWasDefiniteLastFrame = bVar29;
        if (local_517 == '\0') {
          if (local_518 == (FScriptContainerElement)0x0) {
            if (bVar29 != false) {
              pFVar8 = this->View;
              if (((param_3 < 0) || ((pFVar8->PrimitiveDefinitelyUnoccludedMap).NumBits <= param_3))
                 && (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar29)) {
                pcVar15 = (code *)swi(3);
                uVar30 = (*pcVar15)();
                return (bool)uVar30;
              }
              pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(pFVar8->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData
                          .Data;
              pTVar50 = &pFVar8->PrimitiveDefinitelyUnoccludedMap;
              if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)0x0) {
                pTVar50 = pTVar9;
              }
              iVar35 = param_3;
              if (param_3 < 0) {
                iVar35 = param_3 + 0x1f;
              }
              if (((uint)local_4e0 &
                  *(uint *)((pTVar50->AllocatorInstance).InlineData + (longlong)(iVar35 >> 5) * 4))
                  == 0) {
                LOCK();
                puVar4 = (pTVar50->AllocatorInstance).InlineData + (longlong)(iVar35 >> 5) * 4;
                *(uint *)puVar4 = *(uint *)puVar4 | (uint)local_4e0;
                UNLOCK();
              }
            }
          }
          else {
            pFVar8 = this->View;
            if (((param_3 < 0) || ((pFVar8->PrimitiveVisibilityMap).NumBits <= param_3)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar29)) {
              pcVar15 = (code *)swi(3);
              uVar30 = (*pcVar15)();
              return (bool)uVar30;
            }
            pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                      *)(pFVar8->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
            pTVar50 = &pFVar8->PrimitiveVisibilityMap;
            if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                           *)0x0) {
              pTVar50 = pTVar9;
            }
            iVar35 = param_3;
            if (param_3 < 0) {
              iVar35 = param_3 + 0x1f;
            }
            if (((uint)local_4e0 &
                *(uint *)((pTVar50->AllocatorInstance).InlineData + (longlong)(iVar35 >> 5) * 4)) !=
                0) {
              LOCK();
              puVar4 = (pTVar50->AllocatorInstance).InlineData + (longlong)(iVar35 >> 5) * 4;
              *(uint *)puVar4 = *(uint *)puVar4 & ~(uint)local_4e0;
              UNLOCK();
            }
            local_516 = 0;
            local_4d8->NumCulledPrimitives = local_4d8->NumCulledPrimitives + 1;
          }
        }
        else {
          pTVar37 = this->SubIsOccluded;
          pFVar14 = (pTVar37->AllocatorInstance).Data;
          if (((pFVar14 <= &local_518) && (&local_518 < pFVar14 + pTVar37->ArrayMax)) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar31)) {
            pcVar15 = (code *)swi(3);
            uVar30 = (*pcVar15)();
            return (bool)uVar30;
          }
          iVar35 = pTVar37->ArrayNum;
          if (iVar35 == pTVar37->ArrayMax) {
            iVar35 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&pTVar37->AllocatorInstance,&pTVar37->ArrayMax);
          }
          pTVar37->ArrayNum = iVar35 + 1;
          (pTVar37->AllocatorInstance).Data[iVar35] = local_518;
          if ((local_518 != (FScriptContainerElement)0x0) || (local_514 = '\0', bVar29 == false)) {
            local_513 = '\0';
          }
        }
        uVar55 = (uint)local_508 + 1;
        pFVar56 = (FPrimitiveOcclusionHistory *)(ulonglong)uVar55;
        local_508 = CONCAT44(local_508._4_4_,uVar55);
      } while ((int)uVar55 < (int)local_4f0);
    }
    if (local_517 != '\0') {
      pFVar6 = this->Scene;
      if (param_3 < (pFVar6->PrimitiveSceneProxies).ArrayNum) {
        uVar54 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar54 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar15 = (code *)swi(3);
        uVar30 = (*pcVar15)();
        return (bool)uVar30;
      }
      plVar7 = *(longlong **)((pFVar6->PrimitiveSceneProxies).AllocatorInstance.Data + lVar57 * 8);
      (**(code **)(*plVar7 + 200))
                (plVar7,this->View,this->SubIsOccluded,local_4ec,
                 this->SubIsOccluded->ArrayNum - local_4ec);
      if (local_514 == '\0') {
        if (local_513 != '\0') {
          pFVar8 = this->View;
          if (((param_3 < 0) || ((pFVar8->PrimitiveDefinitelyUnoccludedMap).NumBits <= param_3)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar29)) {
            pcVar15 = (code *)swi(3);
            uVar30 = (*pcVar15)();
            return (bool)uVar30;
          }
          pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)(pFVar8->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData.
                      Data;
          pTVar50 = &pFVar8->PrimitiveDefinitelyUnoccludedMap;
          if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)0x0) {
            pTVar50 = pTVar9;
          }
          uVar52 = 1 << (bVar44 & 0x1f);
          lVar57 = (longlong)((int)(param_3 + (uVar46 & 0x1f)) >> 5);
          if ((uVar52 & *(uint *)((pTVar50->AllocatorInstance).InlineData + lVar57 * 4)) == 0) {
            LOCK();
            puVar4 = (pTVar50->AllocatorInstance).InlineData + lVar57 * 4;
            *(uint *)puVar4 = *(uint *)puVar4 | uVar52;
            UNLOCK();
          }
        }
      }
      else {
        pFVar8 = this->View;
        if (((param_3 < 0) || ((pFVar8->PrimitiveVisibilityMap).NumBits <= param_3)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar29)) {
          pcVar15 = (code *)swi(3);
          uVar30 = (*pcVar15)();
          return (bool)uVar30;
        }
        pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(pFVar8->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
        pTVar50 = &pFVar8->PrimitiveVisibilityMap;
        if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar50 = pTVar9;
        }
        uVar52 = 1 << (bVar44 & 0x1f);
        lVar57 = (longlong)((int)(param_3 + (uVar46 & 0x1f)) >> 5);
        if ((uVar52 & *(uint *)((pTVar50->AllocatorInstance).InlineData + lVar57 * 4)) != 0) {
          LOCK();
          puVar4 = (pTVar50->AllocatorInstance).InlineData + lVar57 * 4;
          *(uint *)puVar4 = *(uint *)puVar4 & ~uVar52;
          UNLOCK();
        }
        local_516 = 0;
        local_4d8->NumCulledPrimitives = local_4d8->NumCulledPrimitives + 1;
      }
    }
  }
  else {
LAB_145517821:
    local_516 = 0;
  }
  return (bool)local_516;
}

// OcclusionCullPrimitive<0,FGPUOcclusionPacket::FProcessVisitor> @ 145518df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145519e77) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FGPUOcclusionPacket::OcclusionCullPrimitive<0,FGPUOcclusionPacket::FProcessVisitor>
          (FGPUOcclusionPacket *this,FProcessVisitor *param_1,FOcclusionCullResult *param_2,
          int param_3)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  undefined1 *puVar3;
  uchar *puVar4;
  float fVar5;
  FScene *pFVar6;
  longlong *plVar7;
  FViewInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar9;
  TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator> *pTVar10;
  ForElementType<FSetElementId> FVar11;
  FGPUOcclusionState *pFVar12;
  FThrottledOcclusionQuery *pFVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  FPrimitiveOcclusionHistoryKey FVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  FRHIRenderQuery *pFVar22;
  uint uVar23;
  FProcessVisitor *pFVar24;
  bool bVar25;
  undefined1 uVar26;
  char cVar27;
  bool bVar28;
  atomic<unsigned_int> aVar29;
  uint uVar30;
  int iVar31;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar32;
  FRHIRenderQuery *pFVar33;
  TBoxSphereBounds<double,double> *pTVar34;
  double *pdVar35;
  TVector4<double> *pTVar36;
  byte bVar37;
  byte bVar38;
  uint uVar39;
  uint uVar40;
  ForElementType<FSetElementId> FVar41;
  TVector<double>_u_0 *pTVar42;
  atomic<unsigned_int> aVar43;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar44;
  FPrimitiveOcclusionHistory *this_00;
  FPrimitiveOcclusionHistory *pFVar45;
  uint uVar46;
  FColor_u_0 *pFVar47;
  atomic<unsigned_int> aVar48;
  uint uVar49;
  longlong lVar50;
  bool bVar51;
  bool bVar52;
  undefined4 uVar53;
  double dVar54;
  double dVar55;
  undefined4 uVar58;
  undefined1 auVar57 [16];
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined4 uVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  float fVar71;
  float fVar72;
  undefined1 auStackY_5d8 [32];
  FScriptContainerElement local_588;
  char local_587;
  bool local_586;
  undefined1 local_585;
  bool local_584;
  char local_583;
  char local_582;
  FScriptContainerElement local_581;
  uint local_580;
  FColor_u_0 local_57c;
  FColor_u_0 local_578;
  FColor_u_0 local_574;
  FColor_u_0 local_570;
  uint local_56c;
  FProcessVisitor *local_568;
  int local_560;
  longlong *local_558;
  ulonglong local_550;
  TVector<double>_u_0 local_548;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  undefined1 local_510 [40];
  double local_4e8;
  double local_4e0;
  FRHIRenderQuery *local_4d8;
  FPrimitiveOcclusionHistoryKey local_4d0;
  float local_4c8 [2];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  float local_478;
  undefined4 local_474;
  undefined2 local_470;
  FPrimitiveOcclusionHistoryKey local_468;
  TVector<double>_u_0 local_460;
  TVector<double>_u_0 local_448;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  FPrimitiveComponentId local_3e8;
  uint uStack_3e4;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  uint uStack_3b0;
  undefined4 uStack_3ac;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  FPrimitiveOcclusionHistory *local_370;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_350;
  FOcclusionQuery local_338;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined1 local_2b0 [32];
  undefined8 local_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  double local_238;
  TVector4<double> local_228 [2];
  double local_1d8;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined1 local_1a0;
  TVector<double>_u_0 local_198;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168;
  TVector<double>_u_0 local_160;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_130;
  TVector<double>_u_0 local_128;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8;
  ulonglong local_f0;
  double dVar56;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  pFVar6 = this->Scene;
  lVar50 = (longlong)param_3;
  aVar48 = (atomic<unsigned_int>)0x0;
  aVar43 = (atomic<unsigned_int>)((uint)~param_3 >> 0x1f);
  aVar29 = aVar48;
  if (param_3 < (pFVar6->PrimitiveOcclusionFlags).ArrayNum) {
    aVar29 = aVar43;
  }
  local_568 = param_1;
  local_510._16_8_ = param_2;
  if ((aVar29 == (atomic<unsigned_int>)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar15 = (code *)swi(3);
    uVar26 = (*pcVar15)();
    return (bool)uVar26;
  }
  local_56c = 1;
  local_587 = '\0';
  local_558 = (longlong *)0x0;
  local_581 = (pFVar6->PrimitiveOcclusionFlags).AllocatorInstance.Data[lVar50];
  local_560 = 0;
  if (((byte)local_581 & 0x20) == 0) {
    uVar40 = param_3 >> 0x1f;
    bVar37 = (byte)param_3;
    if ((((byte)local_581 & 0x10) != 0) && (this->OcclusionState->bAllowSubQueries != false)) {
      pFVar6 = this->Scene;
      aVar29 = aVar48;
      if (param_3 < (pFVar6->PrimitiveSceneProxies).ArrayNum) {
        aVar29 = aVar43;
      }
      if ((aVar29 == (atomic<unsigned_int>)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        uVar26 = (*pcVar15)();
        return (bool)uVar26;
      }
      plVar7 = *(longlong **)((pFVar6->PrimitiveSceneProxies).AllocatorInstance.Data + lVar50 * 8);
      local_558 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7,this->View);
      local_587 = '\x01';
      local_56c = *(uint *)(local_558 + 1);
      if (local_56c == 0) {
        pFVar8 = this->View;
        if (((param_3 < 0) || ((pFVar8->PrimitiveVisibilityMap).NumBits <= param_3)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar25)) {
          pcVar15 = (code *)swi(3);
          uVar26 = (*pcVar15)();
          return (bool)uVar26;
        }
        pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(pFVar8->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
        pTVar44 = &pFVar8->PrimitiveVisibilityMap;
        if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar44 = pTVar9;
        }
        puVar4 = (pTVar44->AllocatorInstance).InlineData +
                 (longlong)((int)(param_3 + (uVar40 & 0x1f)) >> 5) * 4;
        *(uint *)puVar4 = *(uint *)puVar4 & ~(1 << (bVar37 & 0x1f));
        goto LAB_145518fa5;
      }
      pTVar32 = this->SubIsOccluded;
      if ((pTVar32 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) ||
         (pTVar32->ArrayMax < (int)(pTVar32->ArrayNum + local_56c))) {
        pTVar32 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
                  Create<TArray<bool,TSizedDefaultAllocator<32>_>_>(&this->View->Allocator);
        this->SubIsOccluded = pTVar32;
        uVar46 = 0x400;
        if (0x400 < local_56c) {
          uVar46 = local_56c;
        }
        if ((int)uVar46 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar46);
        }
        if (pTVar32->ArrayMax < (int)uVar46) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar46,&pTVar32->AllocatorInstance,pTVar32->ArrayNum,&pTVar32->ArrayMax);
        }
      }
      local_560 = this->SubIsOccluded->ArrayNum;
    }
    pFVar6 = this->Scene;
    local_585 = 1;
    local_582 = '\x01';
    aVar29 = aVar48;
    if (param_3 < (pFVar6->PrimitiveComponentIds).ArrayNum) {
      aVar29 = aVar43;
    }
    local_583 = '\x01';
    if ((aVar29 == (atomic<unsigned_int>)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar15 = (code *)swi(3);
      uVar26 = (*pcVar15)();
      return (bool)uVar26;
    }
    uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar46 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar22 = __real_3ff0000000000000;
    fVar5 = *(float *)((pFVar6->PrimitiveComponentIds).AllocatorInstance.Data + lVar50 * 4);
    local_428 = ZEXT816(0);
    local_408 = ZEXT816(0);
    local_550 = 0;
    local_4e8 = 0.0;
    local_510._32_8_ = (FRHIRenderQuery *)0x0;
    local_4e0 = 0.0;
    local_510._8_8_ = __real_3ff0000000000000;
    local_4d8 = __real_3ff0000000000000;
    local_418 = ___xmm_3ff00000000000000000000000000000;
    local_3f8 = ___xmm_3ff00000000000000000000000000000;
    if ((0.0 < GExpandAllTestedBBoxesScreenSpace) ||
       (0.0 < GExpandNewlyOcclusionTestedBBoxesScreenSpace)) {
      pFVar8 = this->View;
      fVar72 = __real_3f800000 /
               (float)(*(int *)((longlong)&(pFVar8->ViewRect).field0_0x0 + 8) -
                      *(int *)&(pFVar8->ViewRect).field0_0x0);
      fVar71 = __real_3f800000 /
               (float)(*(int *)((longlong)&(pFVar8->ViewRect).field0_0x0 + 0xc) -
                      *(int *)((longlong)&(pFVar8->ViewRect).field0_0x0 + 4));
      dVar65 = (double)(fVar72 * (GExpandNewlyOcclusionTestedBBoxesScreenSpace +
                                 GExpandAllTestedBBoxesScreenSpace));
      dVar54 = (double)(fVar71 * (GExpandNewlyOcclusionTestedBBoxesScreenSpace +
                                 GExpandAllTestedBBoxesScreenSpace));
      dVar68 = (double)pFVar8->_padding_ * dVar54 + (double)pFVar8->_padding_ * dVar65 +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      dVar66 = (double)pFVar8->_padding_ * dVar54 + (double)pFVar8->_padding_ * dVar65 +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      uVar63 = SUB84(dVar66,0);
      uVar64 = (undefined4)((ulonglong)dVar66 >> 0x20);
      local_288._8_4_ = uVar63;
      local_288._0_8_ = dVar68;
      local_288._12_4_ = uVar64;
      local_428._8_4_ = uVar63;
      local_428._0_8_ = dVar68;
      local_428._12_4_ = uVar64;
      dVar68 = (double)pFVar8->_padding_ * dVar54 + (double)pFVar8->_padding_ * dVar65 +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      dVar66 = (double)pFVar8->_padding_ * dVar54 + (double)pFVar8->_padding_ * dVar65 +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      uVar63 = SUB84(dVar66,0);
      uVar64 = (undefined4)((ulonglong)dVar66 >> 0x20);
      dVar65 = (double)(fVar71 * GExpandAllTestedBBoxesScreenSpace);
      local_278._8_4_ = uVar63;
      local_278._0_8_ = dVar68;
      local_278._12_4_ = uVar64;
      local_418._8_4_ = uVar63;
      local_418._0_8_ = dVar68;
      local_418._12_4_ = uVar64;
      dVar68 = (double)(fVar72 * GExpandAllTestedBBoxesScreenSpace);
      local_4e8 = (double)pFVar8->_padding_;
      local_510._32_8_ = pFVar8->_padding_;
      local_4e0 = (double)pFVar8->_padding_;
      dVar66 = (double)pFVar8->_padding_ * dVar65 + (double)pFVar8->_padding_ * dVar68 +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      dVar54 = (double)pFVar8->_padding_ * dVar65 + (double)pFVar8->_padding_ * dVar68 +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      uVar63 = SUB84(dVar54,0);
      uVar64 = (undefined4)((ulonglong)dVar54 >> 0x20);
      dVar54 = (double)pFVar8->_padding_ * dVar65 + (double)pFVar8->_padding_ * dVar68 +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      dVar68 = (double)pFVar8->_padding_ * dVar65 + (double)pFVar8->_padding_ * dVar68 +
               (double)pFVar8->_padding_ * 0.0 + (double)pFVar8->_padding_ * 0.0;
      uVar69 = SUB84(dVar68,0);
      uVar70 = (undefined4)((ulonglong)dVar68 >> 0x20);
      local_4d8 = (FRHIRenderQuery *)pFVar8->_padding_;
      local_258._8_4_ = uVar69;
      local_258._0_8_ = dVar54;
      local_258._12_4_ = uVar70;
      local_3f8._8_4_ = uVar69;
      local_3f8._0_8_ = dVar54;
      local_3f8._12_4_ = uVar70;
      local_268._8_4_ = uVar63;
      local_268._0_8_ = dVar66;
      local_268._12_4_ = uVar64;
      local_408._8_4_ = uVar63;
      local_408._0_8_ = dVar66;
      local_408._12_4_ = uVar64;
    }
    local_580 = 0;
    uVar49 = 0;
    if (0 < (int)local_56c) {
      local_550 = (ulonglong)(1 << (bVar37 & 0x1f) | 1U >> 0x20 - (bVar37 & 0x1f));
      pFVar45 = (FPrimitiveOcclusionHistory *)0x0;
      do {
        pTVar10 = this->PrimitiveOcclusionHistorySet;
        fVar71 = SUB84(pFVar45,0);
        if (*(int *)&(pTVar10->Elements).field_0x8 != *(int *)&(pTVar10->Elements).field_0x34) {
          FVar11 = (pTVar10->Hash).SecondaryData;
          FVar41 = (ForElementType<FSetElementId>)&pTVar10->Hash;
          if (FVar11 != (ForElementType<FSetElementId>)0x0) {
            FVar41 = FVar11;
          }
          uVar30 = *(uint *)((longlong)FVar41 +
                            (ulonglong)
                            (pTVar10->HashSize - 1U &
                            ((uint)((ulonglong)pFVar45 >> 0x14) ^ (uint)fVar5)) * 4);
          if (uVar30 != 0xffffffff) {
            do {
              this_00 = (FPrimitiveOcclusionHistory *)
                        ((longlong)(int)uVar30 * 0x68 + *(longlong *)&pTVar10->Elements);
              if (((float)(this_00->PrimitiveId).PrimIDValue == fVar5) &&
                 ((float)this_00->CustomIndex == fVar71)) {
                if (uVar30 != 0xffffffff) goto LAB_145519420;
                break;
              }
              uVar30 = this_00[1].PrimitiveId.PrimIDValue;
            } while (uVar30 != 0xffffffff);
          }
        }
        this_00 = (FPrimitiveOcclusionHistory *)0x0;
LAB_145519420:
        bVar25 = false;
        local_588 = (FScriptContainerElement)0x0;
        if (this_00 == (FPrimitiveOcclusionHistory *)0x0) {
          local_490 = 0xffffffffffffffff;
          pTVar10 = local_568->PrimitiveOcclusionHistorySet;
          local_488 = 0;
          local_480 = 0;
          local_474 = 0;
          local_470 = 0;
          local_4c0._0_4_ = 0;
          local_4c0._4_1_ = 0;
          local_4c0._5_1_ = false;
          local_4c0._6_1_ = false;
          local_4c0._7_1_ = false;
          local_4a0 = 0;
          local_4b8._0_1_ = false;
          local_4b8._1_1_ = false;
          local_4b8._2_6_ = 0;
          local_4b0 = 0;
          local_498 = 0;
          local_4a8 = 0;
          local_4c8[0] = fVar5;
          local_478 = fVar71;
          TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator>::
          Emplace<FPrimitiveOcclusionHistory_const_&>
                    (pTVar10,(FPrimitiveOcclusionHistory *)local_510,(bool *)local_4c8);
          this_00 = (FPrimitiveOcclusionHistory *)
                    ((longlong)(int)local_510._0_4_ * 0x68 + *(longlong *)&pTVar10->Elements);
          pFVar45 = (FPrimitiveOcclusionHistory *)(ulonglong)local_580;
        }
        else if (this->View->bIgnoreExistingQueries == 0) {
          if (this->bUseOcclusionFeedback == false) {
            pFVar12 = this->OcclusionState;
            if (pFVar12->bHZBOcclusion == false) {
              local_510._24_8_ = (FRHIRenderQuery *)0x0;
              local_584 = false;
              local_510._8_4_ = pFVar12->NumBufferedFrames;
              pFVar33 = FPrimitiveOcclusionHistory::GetQueryForReading
                                  (this_00,this->OcclusionFrameCounter,pFVar12->NumBufferedFrames,
                                   pFVar12->ReadBackLagTolerance,&local_584);
              if (pFVar33 == (FRHIRenderQuery *)0x0) {
                if (((int)local_510._8_4_ < 2) && (0x7ffffffe < GRHIGlobals.MaximumInFlightQueries))
                {
                  bVar25 = true;
                  local_588 = (FScriptContainerElement)
                              (this_00->LastProvenVisibleTime +
                               GEngine->PrimitiveProbablyVisibleTime < this->CurrentRealTime);
                }
                else {
                  local_588 = this_00->WasOccludedLastFrame;
                  bVar25 = this_00->OcclusionStateWasDefiniteLastFrame;
                }
                if (local_588 == (FScriptContainerElement)0x0) {
                  this_00->LastPixelsPercentage = GEngine->MaxOcclusionPixelsFraction;
                }
                else {
                  this_00->LastPixelsPercentage = 0.0;
                }
              }
              else {
                cVar27 = (**(code **)(GDynamicRHI->_padding_ + 0x288))
                                   (GDynamicRHI,pFVar33,local_510 + 0x18,1);
                if (cVar27 != '\0') {
                  local_588 = (FScriptContainerElement)((int)local_510._24_8_ == 0);
                  if ((int)local_510._24_8_ == 0) {
                    fVar72 = 0.0;
                  }
                  else {
                    fVar72 = (float)(local_510._24_8_ & 0xffffffff) *
                             this->View->OneOverNumPossiblePixels;
                  }
                  this_00->LastPixelsPercentage = fVar72;
                  bVar25 = local_584 == false;
                }
                *(uint *)(local_510._16_8_ + 4) = *(uint *)(local_510._16_8_ + 4) + 1;
              }
            }
            else {
              bVar28 = FHZBOcclusionTester::IsValidFrame
                                 (this->HZBOcclusionTests,this_00->LastTestFrameNumber);
              if (bVar28) {
                bVar25 = FHZBOcclusionTester::IsVisible
                                   (this->HZBOcclusionTests,this_00->HZBTestIndex);
                local_588 = (FScriptContainerElement)!bVar25;
                bVar25 = true;
              }
            }
          }
          else {
            local_4d0.PrimitiveId.PrimIDValue = (uint)fVar5;
            local_4d0.CustomIndex = (int)fVar71;
            local_588 = (FScriptContainerElement)
                        FOcclusionFeedback::IsOccluded(this->OcclusionFeedback,&local_4d0);
            bVar25 = true;
          }
          if ((GVisualizeOccludedPrimitives == 1) && (local_588 != (FScriptContainerElement)0x0)) {
            if (local_587 == '\0') {
              pTVar34 = TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::Get
                                  (&this->Scene->PrimitiveOcclusionBounds,param_3);
            }
            else {
              uVar30 = uVar49;
              if ((int)fVar71 < (int)local_558[1]) {
                uVar30 = ~(uint)fVar71 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar15 = (code *)swi(3);
                uVar26 = (*pcVar15)();
                return (bool)uVar26;
              }
              pTVar34 = (TBoxSphereBounds<double,double> *)((longlong)pFVar45 * 0x38 + *local_558);
            }
            local_1b8 = (pTVar34->BoxExtent).field0_0x0._s_0.X;
            dVar68 = (pTVar34->Origin).field0_0x0._s_0.Y;
            local_1d0._s_0.X = (pTVar34->Origin).field0_0x0._s_0.X - local_1b8;
            local_1b0 = (pTVar34->BoxExtent).field0_0x0._s_0.Y;
            local_1a8 = (pTVar34->BoxExtent).field0_0x0._s_0.Z;
            local_1d0._s_0.Y = dVar68 - local_1b0;
            local_1b8 = local_1b8 + (pTVar34->Origin).field0_0x0._s_0.X;
            local_1b0 = local_1b0 + dVar68;
            local_1d0._s_0.Z = (pTVar34->Origin).field0_0x0._s_0.Z - local_1a8;
            local_1a8 = local_1a8 + (pTVar34->Origin).field0_0x0._s_0.Z;
            local_57c.Bits = 0xff32ff32;
            local_1a0 = 1;
            FProcessVisitor::AddVisualizeQuery
                      (local_568,(TBox<double> *)&local_1d0._s_0,(FColor *)&local_57c._s_0);
          }
        }
        else {
          bVar25 = this->View->bDisableQuerySubmissions;
        }
        if (this->OcclusionState->bSubmitQueries != false) {
          local_586 = false;
          if (this->bNewlyConsideredBBoxExpandActive != false) {
            bVar38 = this_00->field_0x54;
            if ((this_00->BecameEligibleForQueryCooldown == 0) &&
               ((uint)GFramesNotOcclusionTestedToExpandBBoxes <
                this->OcclusionFrameCounter - this_00->LastConsideredFrameNumber)) {
              bVar38 = (this_00->BecameEligibleForQueryCooldown ^
                       (byte)GFramesToExpandNewlyOcclusionTestedBBoxes) & 0x3f ^ bVar38;
              this_00->field_0x54 = bVar38;
            }
            local_586 = (bVar38 & 0x3f) != 0;
            if ((bVar38 & 0x3f) != 0) {
              this_00->field_0x54 = (bVar38 - 1 ^ bVar38) & 0x3f ^ bVar38;
            }
          }
          if (local_587 == '\0') {
            pTVar34 = TScenePrimitiveArray<UE::Math::TBoxSphereBounds<double,double>_>::Get
                                (&this->Scene->PrimitiveOcclusionBounds,param_3);
          }
          else {
            uVar30 = uVar49;
            if ((int)(uint)pFVar45 < (int)local_558[1]) {
              uVar30 = ~(uint)pFVar45 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar15 = (code *)swi(3);
              uVar26 = (*pcVar15)();
              return (bool)uVar26;
            }
            pTVar34 = (TBoxSphereBounds<double,double> *)((longlong)pFVar45 * 0x38 + *local_558);
          }
          pFVar24 = local_568;
          auVar62 = *(undefined1 (*) [16])((longlong)&(pTVar34->Origin).field0_0x0 + 0x10);
          dVar66 = auVar62._8_8_;
          dVar68 = pTVar34->SphereRadius;
          pauVar1 = (undefined1 (*) [16])((longlong)&(pTVar34->BoxExtent).field0_0x0 + 8);
          dVar54 = *(double *)*pauVar1;
          dVar65 = (pTVar34->BoxExtent).field0_0x0._s_0.Z;
          auVar60 = *pauVar1;
          auVar61 = *(undefined1 (*) [16])&(pTVar34->Origin).field0_0x0;
          uVar63 = auVar61._0_4_;
          uVar64 = auVar61._4_4_;
          uVar69 = auVar61._8_4_;
          uVar70 = auVar61._12_4_;
          dVar55 = auVar62._0_8_;
          dVar56 = auVar61._0_8_;
          dVar67 = auVar61._8_8_;
          local_2f8 = auVar61;
          local_2e8 = auVar62;
          local_2d8 = dVar54;
          dStack_2d0 = dVar65;
          local_2c8 = dVar68;
          if ((GVisualizePrimitiveBBoxes == 2) &&
             ((GVisualizeOccludedPrimitives != 1 || (local_588 == (FScriptContainerElement)0x0)))) {
            local_578.Bits = 0xff009b00;
            local_128._s_0.X = dVar56 - dVar66;
            local_f8 = 1;
            local_110 = dVar56 + dVar66;
            local_128._s_0.Y = dVar67 - dVar54;
            local_108 = dVar67 + dVar54;
            local_128._s_0.Z = dVar55 - dVar65;
            local_100 = dVar55 + dVar65;
            FProcessVisitor::AddVisualizeQuery
                      (local_568,(TBox<double> *)&local_128._s_0,(FColor *)&local_578._s_0);
          }
          if ((0.0 < GExpandAllTestedBBoxesAmount) ||
             (local_398 = auVar62, local_388 = auVar60,
             0.0 < GExpandNewlyOcclusionTestedBBoxesAmount)) {
            if (local_586 == false) {
              dVar59 = 0.0;
            }
            else {
              dVar59 = (double)GExpandNewlyOcclusionTestedBBoxesAmount;
            }
            dVar59 = (double)GExpandAllTestedBBoxesAmount + dVar59;
            dVar54 = dVar54 + dVar59;
            dVar66 = dVar59 + dVar66;
            dVar68 = dVar59 + local_2c8;
            dVar65 = dVar59 + dVar65;
            local_398._8_4_ = SUB84(dVar66,0);
            local_398._0_8_ = dVar55;
            local_398._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
            local_388._8_4_ = SUB84(dVar65,0);
            local_388._0_8_ = dVar54;
            local_388._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
            local_1d8 = dVar68;
          }
          uVar53 = SUB84(dVar68,0);
          uVar58 = (undefined4)((ulonglong)dVar68 >> 0x20);
          auVar60 = ZEXT416((uint)GExpandAllTestedBBoxesScreenSpace);
          local_2b0._8_4_ = SUB84(dVar66,0);
          local_2b0._0_8_ = dVar55;
          local_2b0._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
          if ((0.0 < GExpandAllTestedBBoxesScreenSpace) ||
             (0.0 < GExpandNewlyOcclusionTestedBBoxesScreenSpace)) {
            pdVar35 = (double *)local_428;
            if (local_586 == false) {
              pdVar35 = (double *)local_408;
            }
            auVar60._0_8_ =
                 dVar67 * (double)local_510._32_8_ + dVar56 * local_4e8 +
                 dVar55 * local_4e0 + (double)local_4d8;
            auVar60._8_8_ = dVar67;
            dVar67 = (double)(float)auVar60._0_8_;
            dVar66 = (double)CONCAT44((uint)((ulonglong)(dVar67 * *pdVar35) >> 0x20) & uVar23,
                                      SUB84(dVar67 * *pdVar35,0) & uVar46) + dVar66;
            dVar54 = (double)CONCAT44((uint)((ulonglong)(dVar67 * pdVar35[1]) >> 0x20) & uVar23,
                                      SUB84(dVar67 * pdVar35[1],0) & uVar46) + dVar54;
            dVar65 = (double)CONCAT44((uint)((ulonglong)(dVar67 * pdVar35[2]) >> 0x20) & uVar23,
                                      SUB84(dVar67 * pdVar35[2],0) & uVar46) + dVar65;
            local_2b0._8_8_ = dVar66;
            auVar57._0_8_ = dVar54 * dVar54 + dVar66 * dVar66 + dVar65 * dVar65;
            auVar57._8_8_ = 0;
            auVar57 = sqrtpd(auVar57,auVar57);
            local_290 = auVar57._0_8_;
            uVar53 = auVar57._0_4_;
            uVar58 = auVar57._4_4_;
          }
          auVar16._8_4_ = SUB84(dVar65,0);
          auVar16._0_8_ = dVar54;
          auVar16._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
          dStack_520 = auVar16._8_8_;
          local_518 = (double)CONCAT44(uVar58,uVar53);
          local_548._0_16_ = auVar61;
          local_548._16_4_ = auVar62._0_4_;
          local_548._20_4_ = auVar62._4_4_;
          dStack_530 = dVar66;
          local_528 = dVar54;
          local_3a8 = auVar61;
          local_378 = dVar68;
          if ((GVisualizeOccludedPrimitives == 2) && (local_588 != (FScriptContainerElement)0x0)) {
            local_574.Bits = 0xff32ff32;
            local_198._s_0.X = dVar56 - dVar66;
            local_168 = 1;
            auVar17._4_8_ = auVar60._8_8_;
            auVar17._0_4_ = uVar64;
            auVar61._0_8_ = auVar17._0_8_ << 0x20;
            auVar61._8_4_ = uVar69;
            auVar61._12_4_ = uVar70;
            local_180 = dVar66 + dVar56;
            pFVar47 = &local_574;
            pTVar42 = &local_198;
            local_198._s_0.Y = auVar61._8_8_ - dVar54;
            local_178 = dVar54 + auVar61._8_8_;
            local_198._s_0.Z = dVar55 - dVar65;
            local_170 = dVar65 + dVar55;
LAB_145519bcd:
            FProcessVisitor::AddVisualizeQuery
                      (pFVar24,(TBox<double> *)&pTVar42->_s_0,(FColor *)&pFVar47->_s_0);
            uVar63 = local_548._0_4_;
            uVar64 = local_548._4_4_;
            uVar69 = local_548._8_4_;
            uVar70 = local_548._12_4_;
          }
          else if (0 < GVisualizePrimitiveBBoxes) {
            local_570.Bits = 0xff9b0000;
            local_160._s_0.X = dVar56 - dVar66;
            local_130 = 1;
            auVar18._4_8_ = auVar60._8_8_;
            auVar18._0_4_ = uVar64;
            auVar62._0_8_ = auVar18._0_8_ << 0x20;
            auVar62._8_4_ = uVar69;
            auVar62._12_4_ = uVar70;
            local_148 = dVar66 + dVar56;
            pFVar47 = &local_570;
            pTVar42 = &local_160;
            local_160._s_0.Y = auVar62._8_8_ - dVar54;
            local_140 = dVar54 + auVar62._8_8_;
            local_160._s_0.Z = dVar55 - dVar65;
            local_138 = dVar65 + dVar55;
            goto LAB_145519bcd;
          }
          dVar66 = (double)CONCAT44(local_548._20_4_,local_548._16_4_) -
                   (this->ViewOrigin).field0_0x0._s_0.Z;
          dVar68 = (double)CONCAT44(uVar70,uVar69) - (this->ViewOrigin).field0_0x0._s_0.Y;
          dVar54 = (double)CONCAT44(uVar64,uVar63) - (this->ViewOrigin).field0_0x0._s_0.X;
          if ((double)this->NeverOcclusionTestDistanceSquared <=
              dVar68 * dVar68 + dVar54 * dVar54 + dVar66 * dVar66) {
            pFVar8 = this->View;
            if (*(bool *)((longlong)&pFVar8->_padding_ + 1) == false) {
              if ((double)pFVar8->_padding_ <= (double)pFVar22 &&
                  (double)pFVar22 != (double)pFVar8->_padding_) {
                bVar28 = local_518 < __real_4290000000000000;
              }
              else {
                pTVar36 = FSceneView::WorldToScreen
                                    ((FSceneView *)pFVar8,local_228,
                                     (TVector<double> *)&local_548._s_0);
                uVar63 = local_548._0_4_;
                uVar64 = local_548._4_4_;
                uVar70 = local_548._12_4_;
                bVar28 = (pTVar36->field0_0x0)._s_0.Z - local_518 * (double)pFVar8->_padding_ <
                         (double)pFVar22;
                uVar69 = local_548._8_4_;
              }
            }
            else {
              dVar68 = (double)((TPlane<double> *)&pFVar8->_padding_)->_padding_;
              dVar65 = local_528 * (double)pFVar8->_padding_;
              dVar66 = dStack_530 * dVar68;
              dVar54 = dStack_520 * (double)pFVar8->_padding_;
              dVar66 = (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar23,
                                        SUB84(dVar65,0) & uVar46) +
                       (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) & uVar23,
                                        SUB84(dVar66,0) & uVar46) +
                       (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & uVar23,
                                        SUB84(dVar54,0) & uVar46);
              bVar28 = ((double)CONCAT44(uVar70,uVar69) * (double)pFVar8->_padding_ +
                        (double)CONCAT44(uVar64,uVar63) * dVar68 +
                       (double)CONCAT44(local_548._20_4_,local_548._16_4_) *
                       (double)pFVar8->_padding_) - (double)pFVar8->_padding_ <
                       (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) ^
                                        __xmm_80000000000000008000000000000000._4_4_,
                                        SUB84(dVar66,0) ^
                                        (uint)__xmm_80000000000000008000000000000000);
            }
            dVar66 = local_528;
            dVar68 = dStack_530;
            pFVar24 = local_568;
            if (bVar28) {
              this_00->LastTestFrameNumber = this->OcclusionFrameCounter;
              if (this->bUseOcclusionFeedback == false) {
                if (this->OcclusionState->bHZBOcclusion == false) {
                  if ((local_587 == '\0') && (((byte)local_581 & 4) != 0)) {
                    if (local_588 == (FScriptContainerElement)0x0) {
                      bVar28 = false;
                      if (bVar25 != false) {
                        LOCK();
                        UNLOCK();
                        bVar51 = 0xdf2 < (uint)GOcclusionRandomStream.CurrentSample;
                        aVar29 = GOcclusionRandomStream.CurrentSample;
                        GOcclusionRandomStream.CurrentSample =
                             (atomic<unsigned_int>)((int)GOcclusionRandomStream.CurrentSample + 1);
                        if (bVar51) {
                          LOCK();
                          GOcclusionRandomStream.CurrentSample = (atomic<unsigned_int>)0x0;
                          UNLOCK();
                          aVar29 = aVar48;
                        }
                        if (GRHIGlobals.SupportsExactOcclusionQueries == false) {
                          fVar71 = this->CurrentRealTime - this_00->LastProvenVisibleTime;
                          fVar72 = GOcclusionRandomStream.Samples[(uint)aVar29] *
                                   this->PrimitiveProbablyVisibleTime * __real_3e000000;
                          bVar51 = fVar71 == fVar72;
                          bVar52 = fVar71 < fVar72;
                        }
                        else {
                          fVar71 = GEngine->MaxOcclusionPixelsFraction;
                          fVar72 = this_00->LastPixelsPercentage / fVar71;
                          if (fVar72 <= __real_3f800000) {
                            fVar72 = __real_3f800000;
                          }
                          fVar72 = fVar72 * GOcclusionRandomStream.Samples[(uint)aVar29];
                          bVar51 = fVar71 == fVar72;
                          bVar52 = fVar71 < fVar72;
                        }
                        if (bVar52 || bVar51) goto LAB_14551a07e;
                        uVar69 = local_548._8_4_;
                        uVar70 = local_548._12_4_;
                        uVar63 = local_548._0_4_;
                        uVar64 = local_548._4_4_;
                      }
                    }
                    else {
                      bVar28 = true;
                    }
                  }
                  else {
                    bVar28 = false;
                  }
                  pFVar8 = this->View;
                  dVar65 = (double)CONCAT44(uVar64,uVar63) + (double)pFVar8->_padding_;
                  dVar54 = (double)CONCAT44(uVar70,uVar69) + (double)pFVar8->_padding_;
                  dVar55 = (double)CONCAT44(local_548._20_4_,local_548._16_4_) +
                           (double)pFVar8->_padding_;
                  if ((GRHIGlobals.MaximumInFlightQueries < 0x7fffffff) && (bVar28 == false)) {
                    uVar30 = 0;
                    if (this_00->bGroupedQuery[0] == false) {
                      uVar30 = this_00->PendingOcclusionQueryFrames[0];
                    }
                    uVar39 = uVar30;
                    if ((this_00->bGroupedQuery[1] == false) &&
                       (uVar39 = this_00->PendingOcclusionQueryFrames[1],
                       this_00->PendingOcclusionQueryFrames[1] < uVar30)) {
                      uVar39 = uVar30;
                    }
                    uVar30 = uVar39;
                    if ((this_00->bGroupedQuery[2] == false) &&
                       (uVar30 = this_00->PendingOcclusionQueryFrames[2],
                       this_00->PendingOcclusionQueryFrames[2] < uVar39)) {
                      uVar30 = uVar39;
                    }
                    uStack_3b0 = uVar30;
                    if ((this_00->bGroupedQuery[3] == false) &&
                       (uStack_3b0 = this_00->PendingOcclusionQueryFrames[3],
                       this_00->PendingOcclusionQueryFrames[3] < uVar30)) {
                      uStack_3b0 = uVar30;
                    }
                    piVar2 = &(local_568->ThrottledOcclusionQueries).ArrayMax;
                    iVar31 = (local_568->ThrottledOcclusionQueries).ArrayNum;
                    dStack_3e0 = dVar65;
                    local_3e8.PrimIDValue = (uint)fVar5;
                    uStack_3e4 = local_580;
                    local_3c8 = dStack_530;
                    dStack_3c0 = local_528;
                    local_3b8 = dStack_520;
                    dStack_3d8 = dVar54;
                    dStack_3d0 = dVar55;
                    local_238 = dVar55;
                    if (iVar31 == *piVar2) {
                      iVar31 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery>_>
                                         (0x840,&(local_568->ThrottledOcclusionQueries).
                                                 AllocatorInstance,piVar2);
                    }
                    FVar19.CustomIndex = uStack_3e4;
                    FVar19.PrimitiveId.PrimIDValue = local_3e8.PrimIDValue;
                    auVar20._8_8_ = dStack_3d0;
                    auVar20._0_8_ = dStack_3d8;
                    (pFVar24->ThrottledOcclusionQueries).ArrayNum = iVar31 + 1;
                    pFVar13 = (pFVar24->ThrottledOcclusionQueries).AllocatorInstance.Data;
                    pFVar13[iVar31].PrimitiveOcclusionHistoryKey = FVar19;
                    pFVar13[iVar31].Bounds.Origin.field0_0x0._s_0.X = dStack_3e0;
                    auVar21._8_4_ = uStack_3b0;
                    auVar21._0_8_ = local_3b8;
                    auVar21._12_4_ = uStack_3ac;
                    *(undefined1 (*) [16])((longlong)&pFVar13[iVar31].Bounds.Origin.field0_0x0 + 8)
                         = auVar20;
                    pFVar13[iVar31].Bounds.Extent.field0_0x0._s_0.X = dVar68;
                    pFVar13[iVar31].Bounds.Extent.field0_0x0._s_0.Y = dVar66;
                    *(undefined1 (*) [16])
                     ((longlong)&pFVar13[iVar31].Bounds.Extent.field0_0x0 + 0x10) = auVar21;
                  }
                  else {
                    local_338.Bounds.Extent.field0_0x0._s_0.X = dStack_530;
                    local_338.Bounds.Extent.field0_0x0._s_0.Y = local_528;
                    local_338.Bounds.Extent.field0_0x0._s_0.Z = dStack_520;
                    local_338.PrimitiveOcclusionHistory = this_00;
                    local_338.Bounds.Origin.field0_0x0._s_0.X = dVar65;
                    local_338.Bounds.Origin.field0_0x0._s_0.Y = dVar54;
                    local_338.Bounds.Origin.field0_0x0._s_0.Z = dVar55;
                    local_338.bGroupedQuery = bVar28;
                    FProcessVisitor::AddOcclusionQuery(local_568,&local_338);
                  }
                }
                else {
                  local_368._s_0.Z = (double)CONCAT44(local_548._20_4_,local_548._16_4_);
                  local_350._8_8_ = local_528;
                  local_350._0_8_ = dStack_530;
                  local_350._s_0.Z = dStack_520;
                  local_370 = this_00;
                  local_368._0_4_ = uVar63;
                  local_368._4_4_ = uVar64;
                  local_368._8_4_ = uVar69;
                  local_368._12_4_ = uVar70;
                  uVar30 = FHZBOcclusionTester::AddBounds
                                     (local_568->Packet->HZBOcclusionTests,
                                      (TVector<double> *)&local_368._s_0,
                                      (TVector<double> *)&local_350._s_0);
                  local_370->HZBTestIndex = uVar30;
                }
              }
              else {
                pFVar8 = this->View;
                local_460._s_0.X = (double)CONCAT44(uVar64,uVar63) + (double)pFVar8->_padding_;
                local_460._s_0.Y = (double)CONCAT44(uVar70,uVar69) + (double)pFVar8->_padding_;
                local_460._s_0.Z =
                     (double)CONCAT44(local_548._20_4_,local_548._16_4_) + (double)pFVar8->_padding_
                ;
                local_468.CustomIndex = local_580;
                local_448._s_0.X = dStack_530;
                local_448._s_0.Y = local_528;
                local_448._s_0.Z = dStack_520;
                local_468.PrimitiveId.PrimIDValue = (uint)fVar5;
                FOcclusionFeedback::AddPrimitive
                          (local_568->Packet->OcclusionFeedback,&local_468,
                           (TVector<double> *)&local_460._s_0,(TVector<double> *)&local_448._s_0,
                           local_568->DynamicVertexBuffer);
              }
              goto LAB_14551a07e;
            }
          }
          local_588 = (FScriptContainerElement)0x0;
          bVar25 = true;
        }
LAB_14551a07e:
        this_00->LastConsideredTime = this->CurrentRealTime;
        if ((local_588 == (FScriptContainerElement)0x0) && (bVar25 != false)) {
          this_00->LastProvenVisibleTime = this->CurrentRealTime;
        }
        this_00->LastConsideredFrameNumber = this->OcclusionFrameCounter;
        this_00->WasOccludedLastFrame = local_588;
        this_00->OcclusionStateWasDefiniteLastFrame = bVar25;
        if (local_587 == '\0') {
          if (local_588 == (FScriptContainerElement)0x0) {
            if (bVar25 != false) {
              pFVar8 = this->View;
              if (((param_3 < 0) || ((pFVar8->PrimitiveDefinitelyUnoccludedMap).NumBits <= param_3))
                 && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar25)) {
                pcVar15 = (code *)swi(3);
                uVar26 = (*pcVar15)();
                return (bool)uVar26;
              }
              pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(pFVar8->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData
                          .Data;
              pTVar44 = &pFVar8->PrimitiveDefinitelyUnoccludedMap;
              if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)0x0) {
                pTVar44 = pTVar9;
              }
              iVar31 = param_3;
              if (param_3 < 0) {
                iVar31 = param_3 + 0x1f;
              }
              puVar4 = (pTVar44->AllocatorInstance).InlineData + (longlong)(iVar31 >> 5) * 4;
              *(uint *)puVar4 = *(uint *)puVar4 | (uint)local_550;
            }
          }
          else {
            pFVar8 = this->View;
            if (((param_3 < 0) || ((pFVar8->PrimitiveVisibilityMap).NumBits <= param_3)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar25)) {
              pcVar15 = (code *)swi(3);
              uVar26 = (*pcVar15)();
              return (bool)uVar26;
            }
            pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                      *)(pFVar8->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
            pTVar44 = &pFVar8->PrimitiveVisibilityMap;
            if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                           *)0x0) {
              pTVar44 = pTVar9;
            }
            iVar31 = param_3;
            if (param_3 < 0) {
              iVar31 = param_3 + 0x1f;
            }
            local_585 = 0;
            puVar4 = (pTVar44->AllocatorInstance).InlineData + (longlong)(iVar31 >> 5) * 4;
            *(uint *)puVar4 = *(uint *)puVar4 & ~(uint)local_550;
            *(int *)local_510._16_8_ = *(int *)local_510._16_8_ + 1;
          }
        }
        else {
          pTVar32 = this->SubIsOccluded;
          pFVar14 = (pTVar32->AllocatorInstance).Data;
          if (((pFVar14 <= &local_588) && (&local_588 < pFVar14 + pTVar32->ArrayMax)) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar28)) {
            pcVar15 = (code *)swi(3);
            uVar26 = (*pcVar15)();
            return (bool)uVar26;
          }
          iVar31 = pTVar32->ArrayNum;
          if (iVar31 == pTVar32->ArrayMax) {
            iVar31 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&pTVar32->AllocatorInstance,&pTVar32->ArrayMax);
          }
          pTVar32->ArrayNum = iVar31 + 1;
          (pTVar32->AllocatorInstance).Data[iVar31] = local_588;
          if ((local_588 != (FScriptContainerElement)0x0) || (local_583 = '\0', bVar25 == false)) {
            local_582 = '\0';
          }
        }
        local_580 = local_580 + 1;
        pFVar45 = (FPrimitiveOcclusionHistory *)(ulonglong)local_580;
      } while ((int)local_580 < (int)local_56c);
    }
    if (local_587 != '\0') {
      pFVar6 = this->Scene;
      if (param_3 < (pFVar6->PrimitiveSceneProxies).ArrayNum) {
        uVar49 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        uVar26 = (*pcVar15)();
        return (bool)uVar26;
      }
      plVar7 = *(longlong **)((pFVar6->PrimitiveSceneProxies).AllocatorInstance.Data + lVar50 * 8);
      (**(code **)(*plVar7 + 200))(plVar7,this->View);
      if (local_583 == '\0') {
        if (local_582 != '\0') {
          pFVar8 = this->View;
          if (((param_3 < 0) || ((pFVar8->PrimitiveDefinitelyUnoccludedMap).NumBits <= param_3)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar25)) {
            pcVar15 = (code *)swi(3);
            uVar26 = (*pcVar15)();
            return (bool)uVar26;
          }
          pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)(pFVar8->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData.
                      Data;
          pTVar44 = &pFVar8->PrimitiveDefinitelyUnoccludedMap;
          if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)0x0) {
            pTVar44 = pTVar9;
          }
          puVar4 = (pTVar44->AllocatorInstance).InlineData +
                   (longlong)((int)(param_3 + (uVar40 & 0x1f)) >> 5) * 4;
          *(uint *)puVar4 = *(uint *)puVar4 | 1 << (bVar37 & 0x1f);
        }
      }
      else {
        pFVar8 = this->View;
        if (((param_3 < 0) || ((pFVar8->PrimitiveVisibilityMap).NumBits <= param_3)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar25)) {
          pcVar15 = (code *)swi(3);
          uVar26 = (*pcVar15)();
          return (bool)uVar26;
        }
        pTVar9 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(pFVar8->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
        local_585 = 0;
        pTVar44 = &pFVar8->PrimitiveVisibilityMap;
        if (pTVar9 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar44 = pTVar9;
        }
        puVar4 = (pTVar44->AllocatorInstance).InlineData +
                 (longlong)((int)(param_3 + (uVar40 & 0x1f)) >> 5) * 4;
        *(uint *)puVar4 = *(uint *)puVar4 & ~(1 << (bVar37 & 0x1f));
        *(int *)local_510._16_8_ = *(int *)local_510._16_8_ + 1;
      }
    }
  }
  else {
LAB_145518fa5:
    local_585 = 0;
  }
  return (bool)local_585;
}

// FGPUOcclusionPacket @ 14551e570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FGPUOcclusionPacket * __thiscall
FGPUOcclusionPacket::FGPUOcclusionPacket
          (FGPUOcclusionPacket *this,FVisibilityViewPacket *param_1,FGPUOcclusionState *param_2)

{
  FViewInfo *pFVar1;
  FSceneViewState *pFVar2;
  double dVar3;
  bool bVar4;
  
  this->ViewPacket = param_1;
  pFVar1 = param_1->View;
  this->View = pFVar1;
  pFVar2 = param_1->ViewState;
  this->ViewElementPDI = &param_1->ViewElementPDI;
  this->ViewState = pFVar2;
  this->SubIsOccluded = (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0;
  this->HZBOcclusionTests = &pFVar2->HZBOcclusionTests;
  this->OcclusionFeedback = &pFVar2->OcclusionFeedback;
  this->PrimitiveOcclusionHistorySet = &(pFVar2->Occlusion).PrimitiveOcclusionHistorySet;
  this->Scene = param_1->Scene;
  this->OcclusionState = param_2;
  dVar3 = (double)pFVar1->_padding_;
  (this->ViewOrigin).field0_0x0._s_0.X = (double)pFVar1->_padding_;
  (this->ViewOrigin).field0_0x0._s_0.Y = dVar3;
  (this->ViewOrigin).field0_0x0._s_0.Z = (double)pFVar1->_padding_;
  this->OcclusionFrameCounter = pFVar2->OcclusionFrameCounter;
  this->PrimitiveProbablyVisibleTime = GEngine->PrimitiveProbablyVisibleTime;
  this->CurrentRealTime = (float)*(double *)(pFVar1->_padding_ + 0x88);
  this->NeverOcclusionTestDistanceSquared =
       GNeverOcclusionTestDistance * GNeverOcclusionTestDistance;
  if (((int)pFVar1->_padding_ == 1) && ((int)(pFVar2->OcclusionFeedback)._padding_ != -1)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  this->bUseOcclusionFeedback = bVar4;
  if ((((0.0 < GExpandNewlyOcclusionTestedBBoxesAmount) &&
       (0.0 < GExpandNewlyOcclusionTestedBBoxesScreenSpace)) &&
      (0 < GFramesToExpandNewlyOcclusionTestedBBoxes)) &&
     (0 < GFramesNotOcclusionTestedToExpandBBoxes)) {
    this->bNewlyConsideredBBoxExpandActive = true;
    return this;
  }
  this->bNewlyConsideredBBoxExpandActive = false;
  return this;
}

