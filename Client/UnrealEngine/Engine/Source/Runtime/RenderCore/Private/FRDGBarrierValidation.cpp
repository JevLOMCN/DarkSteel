// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// FRDGBarrierValidation @ 145d8bd80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBarrierValidation * __thiscall
FRDGBarrierValidation::FRDGBarrierValidation
          (FRDGBarrierValidation *this,
          TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *param_1,FRDGEventName *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRDGEventName *pFVar3;
  FRDGBarrierValidation *pFVar4;
  
  *(undefined8 *)&this->BatchMap = 0;
  *(undefined8 *)&(this->BatchMap).field_0x8 = 0;
  *(undefined8 *)&(this->BatchMap).field_0x20 = 0;
  *(undefined4 *)&(this->BatchMap).field_0x28 = 0;
  *(undefined4 *)&(this->BatchMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BatchMap).field_0x34 = 0;
  *(undefined4 *)&(this->BatchMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BatchMap).field_0x40 = 0;
  *(undefined4 *)&(this->BatchMap).field_0x48 = 0;
  this->Passes = param_1;
  pFVar3 = (FRDGEventName *)&param_2->FormattedEventName;
  if ((param_2->FormattedEventName).Data.ArrayNum < 2) {
    pFVar3 = param_2;
  }
  this->GraphName = pFVar3->EventFormat;
  if (param_1 == (TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Passes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x3fc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGBarrierValidation *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// operator() @ 145d94970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FRDGBarrierValidation::ValidateBarrierBatchEnd'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((**(char **)this == '\0') && (**(char **)this = '\x01', 3 < (byte)LogRDG._0_1_)) {
    GetRHIPipelineName(&local_18,*(ERHIPipeline *)(**(longlong **)((longlong)this + 8) + 0x4b));
    if ((*(int *)(**(longlong **)((longlong)this + 8) + 0x4c) == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                           ,0x166,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRDG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ValidateBarrierBatchBegin @ 145dd4e60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRDGBarrierValidation::ValidateBarrierBatchBegin
          (FRDGBarrierValidation *this,FRDGPass *param_1,FRDGBarrierBatchBegin *param_2)

{
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  FRDGTexture *pFVar5;
  FScriptContainerElement *pFVar6;
  FRHITransientAliasingInfo *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap> *pTVar13;
  TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int iVar18;
  ERHIAccess *pEVar19;
  uint uVar20;
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint *puVar24;
  longlong lVar25;
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  longlong *plVar28;
  longlong lVar29;
  ERHIAccess *pEVar30;
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6;
  undefined1 local_2a5 [5];
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_2a0;
  uint local_298;
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_290;
  int iStack_288;
  uint uStack_284;
  undefined1 *local_280;
  undefined4 uStack_278;
  int iStack_274;
  int local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  TKeyInitializer<FRDGBarrierBatchBegin_const_*_&&> local_260;
  ulonglong local_258;
  TBitArray<FDefaultBitArrayAllocator> *local_250;
  undefined1 local_248 [8];
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  FRDGBarrierBatchBegin *local_228;
  FRDGBarrierBatchBegin **local_220;
  FRDGTexture *local_218;
  FRDGTexture *local_210;
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  FRDGTexture **local_178;
  FScriptContainerElement *local_170;
  FRDGViewableResource **local_168;
  FRHITransientAliasingInfo *local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8 [2];
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_4c;
  
  if (GRDGTransitionLog != 0) {
    pTVar13 = TSet<TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>,TDefaultMapHashableKeyFuncs<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>,TDefaultMapHashableKeyFuncs<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap,0>,FDefaultSetAllocator>
                      *)this,param_2);
    pTVar21 = (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
               *)0x0;
    local_2a0 = (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
                 *)&pTVar13->field_0x8;
    if (pTVar13 == (TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap> *)0x0)
    {
      local_2a0 = pTVar21;
    }
    if (local_2a0 ==
        (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
         *)0x0) {
      local_220 = &local_228;
      local_228 = param_2;
      TSet<TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>,TDefaultMapHashableKeyFuncs<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FRDGBarrierBatchBegin_const_*_&&>_>
                ((TSet<TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>,TDefaultMapHashableKeyFuncs<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap,0>,FDefaultSetAllocator>
                  *)this,&local_260,(bool *)&local_220);
      local_2a0 = (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
                   *)(*(longlong *)&this->BatchMap + (longlong)(int)local_260.Key * 0x100 + 8);
      if (0 < (param_2->Transitions).ArrayNum) {
        lVar29 = 0;
        lVar25 = 0;
        do {
          uVar20 = (uint)pTVar21;
          uVar15 = 0;
          if ((int)uVar20 < (param_2->DebugTransitionResources).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar5 = *(FRDGTexture **)
                    (lVar25 + (longlong)(param_2->DebugTransitionResources).AllocatorInstance.Data);
          uVar15 = 0;
          if ((int)uVar20 < (param_2->Transitions).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          cVar3 = (char)pFVar5->_padding_;
          pFVar16 = (FScriptContainerElement *)
                    (&((param_2->Transitions).AllocatorInstance.Data)->field_0x0 + lVar29);
          if (cVar3 == '\0') {
            uVar15 = ((uint)((ulonglong)pFVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar5 >> 4)) *
                     -0x7a143595;
            uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
            local_218 = pFVar5;
            pTVar14 = TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<FRDGTexture_*>(local_2a0,uVar15 >> 0x10 ^ uVar15,&local_218);
            pFVar6 = (pTVar14->AllocatorInstance).Data;
            if (((pFVar6 <= pFVar16) && (pFVar16 < pFVar6 + (longlong)pTVar14->ArrayMax * 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = pTVar14->ArrayNum;
            if (iVar12 == pTVar14->ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
            }
            pTVar14->ArrayNum = iVar12 + 1;
            uVar9 = *(undefined8 *)(pFVar16 + 8);
            pFVar6 = (pTVar14->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
            *(undefined8 *)pFVar6 = *(undefined8 *)pFVar16;
            *(undefined8 *)(pFVar6 + 8) = uVar9;
          }
          else {
            if ((cVar3 != '\x01') &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Resource->Type == ERDGViewableResourceType::Buffer",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                                    ,0x417,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_178 = &local_210;
            local_210 = pFVar5;
            local_170 = pFVar16;
            TSet<TTuple<FRDGBuffer_*,FRDGTransitionInfo>,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FRDGBuffer_*_&&,FRDGTransitionInfo_const_&>_>
                      ((TSet<TTuple<FRDGBuffer_*,FRDGTransitionInfo>,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>,FDefaultSetAllocator>
                        *)(local_2a0 + 1),
                       (TPairInitializer<FRDGBuffer_*_&&,FRDGTransitionInfo_const_&> *)local_248,
                       (bool *)&local_178);
          }
          pTVar21 = (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
                     *)(ulonglong)(uVar20 + 1);
          lVar25 = lVar25 + 8;
          lVar29 = lVar29 + 0x10;
        } while ((int)(uVar20 + 1) < (param_2->Transitions).ArrayNum);
      }
      pTVar21 = local_2a0;
      uVar15 = 0;
      if (0 < (param_2->Aliases).ArrayNum) {
        do {
          uVar20 = 0;
          if ((int)uVar15 < (param_2->Aliases).ArrayNum) {
            uVar20 = ~uVar15 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_2->Aliases).AllocatorInstance.Data;
          uVar20 = 0;
          if ((int)uVar15 < (param_2->DebugAliasingResources).ArrayNum) {
            uVar20 = ~uVar15 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_168 = (param_2->DebugAliasingResources).AllocatorInstance.Data + (int)uVar15;
          local_160 = pFVar7 + (int)uVar15;
          TSet<TTuple<FRDGViewableResource_*,FRHITransientAliasingInfo>,TDefaultMapHashableKeyFuncs<FRDGViewableResource_*,FRHITransientAliasingInfo,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FRDGViewableResource_*_const_&,FRHITransientAliasingInfo_const_&>_>
                    ((TSet<TTuple<FRDGViewableResource_*,FRHITransientAliasingInfo>,TDefaultMapHashableKeyFuncs<FRDGViewableResource_*,FRHITransientAliasingInfo,0>,FDefaultSetAllocator>
                      *)(pTVar21 + 2),
                     (TPairInitializer<FRDGViewableResource_*_const_&,FRHITransientAliasingInfo_const_&>
                      *)(local_248 + 4),(bool *)&local_168);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (param_2->Aliases).ArrayNum);
      }
    }
    pTVar21 = local_2a0;
    iVar12 = 0;
    bVar10 = IsDebugAllowed(&GRDGDebugGraphFilterName,this->GraphName);
    if (bVar10) {
      if ((param_1->FullPathIfDebug).Data.ArrayNum < 2) {
        if ((param_1->Name).FormattedEventName.Data.ArrayNum < 2) {
          pFVar16 = (FScriptContainerElement *)(param_1->Name).EventFormat;
        }
        else {
          pFVar16 = (param_1->Name).FormattedEventName.Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar16 = (param_1->FullPathIfDebug).Data.AllocatorInstance.Data;
      }
      bVar10 = IsDebugAllowed(&GRDGDebugPassFilterName,(wchar_t *)pFVar16);
      if (bVar10) {
        puVar22 = &pTVar21[2].Pairs.Elements.field_0x10;
        iVar18 = *(int *)&pTVar21[2].Pairs.Elements.field_0x28;
        pTVar1 = pTVar21 + 2;
        bVar10 = false;
        local_258 = 1;
        uStack_284 = 1;
        iStack_274 = iVar12;
        local_270 = iVar12;
        if (iVar18 != 0) {
          puVar24 = *(uint **)&pTVar21[2].Pairs.Elements.field_0x20;
          if (puVar24 == (uint *)0x0) {
            puVar24 = (uint *)puVar22;
          }
          uStack_284 = *puVar24;
          while (uStack_284 == 0) {
            lVar25 = (longlong)iVar12;
            local_270 = local_270 + 0x20;
            iVar12 = iVar12 + 1;
            uStack_284 = 1;
            iStack_274 = iVar18;
            if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12)
            goto LAB_145dd531d;
            uStack_284 = puVar24[lVar25 + 1];
          }
          uStack_284 = -uStack_284 & uStack_284;
          uVar2 = (ulonglong)uStack_284 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_240 = (int)lVar25;
          iStack_274 = local_270 + -1 + local_240;
          if (iVar18 < iStack_274) {
            iStack_274 = iVar18;
          }
        }
LAB_145dd531d:
        uStack_26c = local_8c;
        iStack_268 = *(int *)&pTVar21[2].Pairs.Elements.field_0x8 -
                     *(int *)&pTVar21[2].Pairs.Elements.field_0x34;
        uVar15 = *(uint *)&pTVar21[2].Pairs.Elements.field_0x28;
        uVar20 = uVar15 & 0xffffffe0;
        TStack_200._padding_ = CONCAT44(uStack_284,iVar12);
        uStack_278 = 0xffffffff;
        TStack_200.CurrentBitIndex = iStack_274;
        TStack_200.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar15 >> 5;
        TStack_200._28_4_ = local_8c;
        TStack_200.BaseBitIndex = local_270;
        uStack_1e0 = CONCAT44(uStack_264,iStack_268);
        local_290 = pTVar1;
        iStack_288 = iVar12;
        local_280 = puVar22;
        local_208 = pTVar1;
        TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar22;
        if ((((int)uVar15 < 0) || (iVar18 < (int)uVar15)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar4 = *(uint *)&pTVar21[2].Pairs.Elements.field_0x28;
        if (uVar15 != uVar4) {
          puVar23 = *(undefined1 **)&pTVar21[2].Pairs.Elements.field_0x20;
          if (puVar23 == (undefined1 *)0x0) {
            puVar23 = puVar22;
          }
          uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar17 * 4);
          while (uVar15 == 0) {
            lVar25 = (longlong)iVar17;
            uVar20 = uVar20 + 0x20;
            iVar17 = iVar17 + 1;
            uVar15 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_145dd5430;
            uVar15 = *(uint *)(puVar23 + lVar25 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar25 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_23c = (int)lVar25;
          uVar15 = local_23c + -1 + uVar20;
          if ((int)uVar4 < (int)uVar15) {
            uVar15 = uVar4;
          }
        }
LAB_145dd5430:
        do {
          pTVar21 = local_208;
          if (*(int *)&(local_208->Pairs).Elements.field_0x8 -
              *(int *)&(local_208->Pairs).Elements.field_0x34 != (int)uStack_1e0) {
            local_2a8 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FRDGViewableResource_*,FRHITransientAliasingInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a8);
          }
          pTVar26 = local_2a0;
          if (((TStack_200.CurrentBitIndex == uVar15) &&
              (TStack_200.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
             (pTVar21 == pTVar1)) goto LAB_145dd55bc;
          lVar25 = *(longlong *)&(pTVar21->Pairs).Elements;
          if ((*(char *)(lVar25 + 0x21 + (longlong)TStack_200.CurrentBitIndex * 0x30) == '\0') &&
             (bVar11 = IsDebugAllowed(&GRDGDebugResourceFilterName,
                                      *(wchar_t **)
                                       (*(longlong *)
                                         (lVar25 + (longlong)TStack_200.CurrentBitIndex * 0x30) + 8)
                                     ), bVar11)) {
            if (!bVar10) {
              bVar10 = true;
              if ((byte)LogRDG._0_1_ < 4) goto LAB_145dd55a6;
              GetRHIPipelineName(&local_158,param_1->Pipeline);
              if (((param_1->Handle).Index == 0xffffffff) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                      ,0x166,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              UE::Logging::Private::BasicLog<4>
                        ((FStaticBasicLogRecord *)&PTR_u___s_Index___d___1511455d0,
                         (FLogCategoryBase *)&LogRDG);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
            if (3 < (byte)LogRDG._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRDG);
            }
          }
LAB_145dd55a6:
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
        } while( true );
      }
    }
  }
  return;
LAB_145dd55bc:
  local_270 = 0;
  iVar12 = *(int *)&(local_2a0->Pairs).Elements.field_0x28;
  pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_2a0->Pairs).Elements.field_0x10;
  iStack_288 = 0;
  uStack_284 = (uint)local_258;
  iStack_274 = 0;
  if (iVar12 != 0) {
    puVar24 = *(uint **)&(local_2a0->Pairs).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)pTVar27;
    }
    uVar15 = *puVar24;
    while (uVar15 == 0) {
      lVar25 = (longlong)iStack_288;
      local_270 = local_270 + 0x20;
      iStack_288 = iStack_288 + 1;
      iStack_274 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_288) goto LAB_145dd564d;
      uVar15 = puVar24[lVar25 + 1];
    }
    uStack_284 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_284 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_238 = (int)lVar25;
    iStack_274 = local_238 + -1 + local_270;
    if (iVar12 < iStack_274) {
      iStack_274 = iVar12;
    }
  }
LAB_145dd564d:
  uVar15 = *(uint *)&(local_2a0->Pairs).Elements.field_0x28;
  uStack_26c = local_6c;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_268 = *(int *)&(local_2a0->Pairs).Elements.field_0x8 -
               *(int *)&(local_2a0->Pairs).Elements.field_0x34;
  local_290 = local_2a0;
  TStack_1d0._padding_ = CONCAT44(uStack_284,iStack_288);
  uStack_278 = 0xffffffff;
  TStack_1d0.CurrentBitIndex = iStack_274;
  TStack_1d0.UnvisitedBitMask = 0xffffffff;
  local_1d8 = local_2a0;
  iVar18 = (int)uVar15 >> 5;
  TStack_1d0._28_4_ = local_6c;
  TStack_1d0.BaseBitIndex = local_270;
  uStack_1b0 = CONCAT44(uStack_264,iStack_268);
  local_298 = uVar15;
  local_280 = (undefined1 *)pTVar27;
  local_250 = pTVar27;
  TStack_1d0.Array = pTVar27;
  if ((((int)uVar15 < 0) || (iVar12 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(pTVar26->Pairs).Elements.field_0x28;
  if (uVar15 != uVar4) {
    puVar22 = *(undefined1 **)&(pTVar26->Pairs).Elements.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = (undefined1 *)pTVar27;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar25 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar4;
      local_298 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_145dd5761;
      uVar15 = *(uint *)(puVar22 + lVar25 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_234 = (int)lVar25;
    uVar15 = local_234 + -1 + uVar20;
    local_298 = uVar15;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
      local_298 = uVar4;
    }
  }
LAB_145dd5761:
  do {
    pTVar21 = local_1d8;
    if (*(int *)&(local_1d8->Pairs).Elements.field_0x8 -
        *(int *)&(local_1d8->Pairs).Elements.field_0x34 != (int)uStack_1b0) {
      local_2a7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a7);
    }
    if (((TStack_1d0.CurrentBitIndex == uVar15) && (TStack_1d0.Array == pTVar27)) &&
       (pTVar21 == pTVar26)) break;
    plVar28 = (longlong *)
              ((longlong)TStack_1d0.CurrentBitIndex * 0x20 + *(longlong *)&(pTVar21->Pairs).Elements
              );
    bVar11 = IsDebugAllowed(&GRDGDebugResourceFilterName,*(wchar_t **)(*plVar28 + 8));
    if (bVar11) {
      if ((int)plVar28[2] != 0) {
        if (!bVar10) {
          bVar10 = true;
          if ((byte)LogRDG._0_1_ < 4) goto LAB_145dd58cd;
          GetRHIPipelineName(&local_148,param_1->Pipeline);
          if (((param_1->Handle).Index == 0xffffffff) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                  ,0x166,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u___s_Index___d___1511455d0,
                     (FLogCategoryBase *)&LogRDG);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        if (3 < (byte)LogRDG._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRDG);
        }
      }
LAB_145dd58cd:
      lVar25 = plVar28[2];
      pEVar19 = (ERHIAccess *)plVar28[1];
      pEVar30 = pEVar19 + (longlong)(int)lVar25 * 4;
      while( true ) {
        if ((int)plVar28[2] != (int)lVar25) {
          local_2a6 = 0;
          `TCheckedPointerIterator<FRDGTransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_2a6);
        }
        pTVar26 = local_2a0;
        uVar15 = local_298;
        if (pEVar19 == pEVar30) break;
        if (3 < (byte)LogRDG._0_1_) {
          GetRHIPipelineName(&local_108,param_2->PipelinesToEnd);
          GetRHIAccessName(&local_118,
                           (ERHIAccess)((ulonglong)*(undefined8 *)pEVar19 >> 0x15) & 0x1fffff);
          GetRHIPipelineName(&local_128,param_2->PipelinesToBegin);
          GetRHIAccessName(&local_138,*pEVar19 & 0x1fffff);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRDG);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        pEVar19 = pEVar19 + 4;
      }
    }
    TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
    pTVar27 = local_250;
  } while( true );
  iVar12 = *(int *)&pTVar26[1].Pairs.Elements.field_0x28;
  pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar26 + 1);
  puVar22 = &pTVar26[1].Pairs.Elements.field_0x10;
  iStack_288 = 0;
  local_270 = 0;
  iStack_274 = 0;
  if (iVar12 != 0) {
    puVar24 = *(uint **)&pTVar26[1].Pairs.Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar22;
    }
    uVar15 = *puVar24;
    while (uVar15 == 0) {
      lVar25 = (longlong)iStack_288;
      local_270 = local_270 + 0x20;
      iStack_288 = iStack_288 + 1;
      iStack_274 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_288) goto LAB_145dd5ae1;
      uVar15 = puVar24[lVar25 + 1];
    }
    local_258 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = local_258 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_230 = (int)lVar25;
    iStack_274 = local_270 + -1 + local_230;
    if (iVar12 < iStack_274) {
      iStack_274 = iVar12;
    }
  }
LAB_145dd5ae1:
  uStack_284 = (uint)local_258;
  uStack_26c = local_4c;
  iStack_268 = *(int *)&local_2a0[1].Pairs.Elements.field_0x8 -
               *(int *)&local_2a0[1].Pairs.Elements.field_0x34;
  uVar15 = *(uint *)&local_2a0[1].Pairs.Elements.field_0x28;
  TStack_1a0._padding_ = CONCAT44(uStack_284,iStack_288);
  uVar20 = uVar15 & 0xffffffe0;
  uStack_278 = 0xffffffff;
  TStack_1a0.CurrentBitIndex = iStack_274;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_1a0._28_4_ = local_4c;
  TStack_1a0.BaseBitIndex = local_270;
  uStack_180 = CONCAT44(uStack_264,iStack_268);
  local_290 = (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
               *)pTVar27;
  local_280 = puVar22;
  local_250 = pTVar27;
  local_1a8 = (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
               *)pTVar27;
  TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar22;
  if ((((int)uVar15 < 0) || (iVar12 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&pTVar26[1].Pairs.Elements.field_0x28;
  if (uVar15 != uVar4) {
    puVar23 = *(undefined1 **)&pTVar26[1].Pairs.Elements.field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar22;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar25 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_145dd5bf0;
      uVar15 = *(uint *)(puVar23 + lVar25 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_22c = (int)lVar25;
    uVar15 = local_22c + -1 + uVar20;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_145dd5bf0:
  do {
    pTVar21 = local_1a8;
    if (*(int *)&(local_1a8->Pairs).Elements.field_0x8 -
        *(int *)&(local_1a8->Pairs).Elements.field_0x34 != (int)uStack_180) {
      local_2a5[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRDGBuffer_*,FRDGTransitionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2a5);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar15) &&
        (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
       ((TBitArray<FDefaultBitArrayAllocator> *)pTVar21 == pTVar27)) {
      return;
    }
    plVar28 = (longlong *)
              ((longlong)TStack_1a0.CurrentBitIndex * 0x20 + *(longlong *)&(pTVar21->Pairs).Elements
              );
    bVar11 = IsDebugAllowed(&GRDGDebugResourceFilterName,*(wchar_t **)(*plVar28 + 8));
    if (bVar11) {
      if (!bVar10) {
        bVar10 = true;
        if ((byte)LogRDG._0_1_ < 4) goto LAB_145dd5e5c;
        GetRHIPipelineName(&local_f8,param_1->Pipeline);
        if (((param_1->Handle).Index == 0xffffffff) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                ,0x166,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u___s_Index___d___1511455d0,
                   (FLogCategoryBase *)&LogRDG);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      if (3 < (byte)LogRDG._0_1_) {
        GetRHIPipelineName(local_b8,param_2->PipelinesToEnd);
        GetRHIAccessName(&local_c8,(ERHIAccess)((ulonglong)plVar28[1] >> 0x15) & 0x1fffff);
        GetRHIPipelineName(&local_d8,param_2->PipelinesToBegin);
        GetRHIAccessName(&local_e8,*(ERHIAccess *)(plVar28 + 1) & 0x1fffff);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRDG);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
        }
      }
    }
LAB_145dd5e5c:
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
    pTVar27 = local_250;
  } while( true );
}

// ValidateBarrierBatchEnd @ 145dd5eb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRDGBarrierValidation::ValidateBarrierBatchEnd
          (FRDGBarrierValidation *this,FRDGPass *param_1,FRDGBarrierBatchEnd *param_2)

{
  ERHIPipeline EVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  FRDGBarrierBatchEnd *pFVar12;
  char *pcVar13;
  FRDGBarrierBatchEnd *pFVar14;
  FRDGPass *local_res10;
  FRDGBarrierBatchEnd *local_res18;
  char local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6 [2];
  int local_c4;
  FRDGBarrierBatchEnd *local_c0;
  uint local_b8;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> local_b0;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> local_a0;
  char *local_90;
  FRDGPass **local_88;
  FRDGBarrierBatchBegin **local_80;
  FScriptContainerElement *local_78;
  FRDGBarrierBatchEnd *local_70;
  FRDGBarrierBatchBegin *local_68;
  FString local_60 [2];
  
  if ((GRDGTransitionLog != 0) &&
     (local_res10 = param_1, local_res18 = param_2,
     bVar5 = IsDebugAllowed(&GRDGDebugGraphFilterName,this->GraphName), bVar5)) {
    if ((local_res10->FullPathIfDebug).Data.ArrayNum < 2) {
      if ((local_res10->Name).FormattedEventName.Data.ArrayNum < 2) {
        pFVar9 = (FScriptContainerElement *)(local_res10->Name).EventFormat;
      }
      else {
        pFVar9 = (local_res10->Name).FormattedEventName.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar9 = (local_res10->FullPathIfDebug).Data.AllocatorInstance.Data;
    }
    bVar5 = IsDebugAllowed(&GRDGDebugPassFilterName,(wchar_t *)pFVar9);
    if (bVar5) {
      bVar5 = IsDebugAllowed(&GRDGDebugGraphFilterName,this->GraphName);
      if (bVar5) {
        if ((local_res10->FullPathIfDebug).Data.ArrayNum < 2) {
          if ((local_res10->Name).FormattedEventName.Data.ArrayNum < 2) {
            pFVar9 = (FScriptContainerElement *)(local_res10->Name).EventFormat;
          }
          else {
            pFVar9 = (local_res10->Name).FormattedEventName.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar9 = (local_res10->FullPathIfDebug).Data.AllocatorInstance.Data;
        }
        IsDebugAllowed(&GRDGDebugPassFilterName,(wchar_t *)pFVar9);
      }
      local_c4 = (param_2->Dependencies).ArrayNum;
      pFVar12 = (FRDGBarrierBatchEnd *)(param_2->Dependencies).AllocatorInstance.SecondaryData.Data;
      local_res20[0] = '\0';
      pFVar14 = param_2;
      if (pFVar12 != (FRDGBarrierBatchEnd *)0x0) {
        pFVar14 = pFVar12;
      }
      pFVar12 = (FRDGBarrierBatchEnd *)
                ((pFVar14->Dependencies).AllocatorInstance.InlineData + (longlong)local_c4 * 8);
      local_70 = pFVar12;
      while( true ) {
        local_c0 = pFVar14;
        if ((param_2->Dependencies).ArrayNum != local_c4) {
          local_c8 = 0;
          `TCheckedPointerIterator<FRDGBarrierBatchBegin_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_c8);
        }
        if (pFVar14 == pFVar12) break;
        local_68 = *(FRDGBarrierBatchBegin **)(pFVar14->Dependencies).AllocatorInstance.InlineData;
        EVar1 = param_2->Pass->Pipeline;
        if ((EVar1 == Graphics) || (lVar6 = 0x18, EVar1 != AsyncCompute)) {
          lVar6 = 0x10;
        }
        uVar2 = *(undefined8 *)((longlong)&local_68->Transition + lVar6);
        if (((param_2->Pass->Handle).Index == (uint)uVar2) &&
           (param_2->BarrierLocation == (ERDGBarrierLocation)((ulonglong)uVar2 >> 0x20))) {
          pTVar7 = TSet<TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>,TDefaultMapHashableKeyFuncs<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>,TDefaultMapHashableKeyFuncs<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap,0>,FDefaultSetAllocator>
                           *)this,local_68);
          if ((pTVar7 == (TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>
                          *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = 0;
          local_a0.ArrayMax = 0;
          if (*(int *)&pTVar7->field_0x10 != *(int *)&pTVar7->field_0x3c) {
            TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
            ::GetKeys<TSizedDefaultAllocator<32>_>
                      ((TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
                        *)&pTVar7->field_0x8,&local_a0);
          }
          local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0.ArrayNum = 0;
          local_b0.ArrayMax = 0;
          if (*(int *)&pTVar7->field_0x60 != *(int *)&pTVar7->field_0x8c) {
            TMapBase<FRDGBuffer_*,FRDGTransitionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>_>
            ::GetKeys<TSizedDefaultAllocator<32>_>
                      ((TMapBase<FRDGBuffer_*,FRDGTransitionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>_>
                        *)&pTVar7->field_0x58,&local_b0);
          }
          local_90 = local_res20;
          iVar4 = local_a0.ArrayNum;
          local_88 = &local_res10;
          local_80 = &local_68;
          pFVar9 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 8;
          FVar11.Data = local_a0.AllocatorInstance.Data;
          while( true ) {
            if (local_a0.ArrayNum != iVar4) {
              local_c7 = 0;
              `TCheckedPointerIterator<FRDGTexture_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_c7);
            }
            if (FVar11.Data == pFVar9) break;
            bVar5 = IsDebugAllowed(&GRDGDebugResourceFilterName,
                                   *(wchar_t **)(*(longlong *)FVar11.Data + 8));
            if ((bVar5) &&
               (`FRDGBarrierValidation::ValidateBarrierBatchEnd'::__l9::<lambda_1>::operator()
                          (&local_90), 3 < (byte)LogRDG._0_1_)) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRDG);
            }
            FVar11.Data = FVar11.Data + 8;
          }
          uVar8 = (ulonglong)local_b0.ArrayNum;
          local_b8 = local_b0.ArrayNum;
          pFVar9 = local_b0.AllocatorInstance.Data + uVar8 * 8;
          uVar10 = uVar8;
          FVar11.Data = local_b0.AllocatorInstance.Data;
          pcVar13 = local_90;
          local_78 = pFVar9;
          while( true ) {
            if ((int)uVar8 != (int)uVar10) {
              local_c6[0] = 0;
              `TCheckedPointerIterator<FRDGBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_c6);
            }
            if (FVar11.Data == pFVar9) break;
            bVar5 = IsDebugAllowed(&GRDGDebugResourceFilterName,
                                   *(wchar_t **)(*(longlong *)FVar11.Data + 8));
            if (bVar5) {
              if (*pcVar13 == '\0') {
                *pcVar13 = '\x01';
                if ((byte)LogRDG._0_1_ < 4) goto LAB_145dd627c;
                GetRHIPipelineName(local_60,local_res10->Pipeline);
                if (((local_res10->Handle).Index == 0xffffffff) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                                       ,0x166,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRDG);
                pFVar9 = local_78;
                pcVar13 = local_90;
                if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                  pFVar9 = local_78;
                  pcVar13 = local_90;
                }
              }
              if (3 < (byte)LogRDG._0_1_) {
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRDG);
              }
            }
LAB_145dd627c:
            uVar8 = local_b0._8_8_ & 0xffffffff;
            FVar11.Data = FVar11.Data + 8;
            uVar10 = (ulonglong)local_b8;
          }
          local_res20[0] = '\0';
          if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.AllocatorInstance.Data);
          }
          param_2 = local_res18;
          pFVar12 = local_70;
          pFVar14 = local_c0;
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
            param_2 = local_res18;
            pFVar12 = local_70;
            pFVar14 = local_c0;
          }
        }
        pFVar14 = (FRDGBarrierBatchEnd *)((pFVar14->Dependencies).AllocatorInstance.InlineData + 8);
      }
    }
  }
  return;
}

