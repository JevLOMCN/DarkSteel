// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// RecomposeBlendOperational @ 14614b6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014614b887) */
/* WARNING: Removing unreachable block (ram,0x00014614b88d) */
/* WARNING: Removing unreachable block (ram,0x00014614b892) */
/* WARNING: Removing unreachable block (ram,0x00014614b8a4) */

FRecompositionResult * __thiscall
UE::MovieScene::FPropertyRecomposerImpl::RecomposeBlendOperational
          (FPropertyRecomposerImpl *this,FRecompositionResult *__return_storage_ptr__,
          FPropertyDefinition *param_1,FDecompositionQuery *param_2,
          FIntermediatePropertyValueConstRef *param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  ForElementType<UE::MovieScene::FIntermediatePropertyValue> FVar3;
  UObject *pUVar4;
  code *pcVar5;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar6;
  FPropertyDefinition *pFVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  FRecompositionResult *pFVar11;
  undefined8 *puVar12;
  FIntermediatePropertyValueConstRef *pFVar13;
  undefined8 *****pppppuVar14;
  ForElementType<UE::MovieScene::FIntermediatePropertyValue> FVar15;
  uint uVar16;
  longlong *plVar17;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar18;
  longlong *plVar19;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  FIntermediatePropertyValueConstRef *local_1a0;
  undefined4 *local_198;
  FBuiltInComponentTypes *local_188;
  undefined8 local_178;
  uint uStack_170;
  undefined4 uStack_16c;
  ForElementType<UE::MovieScene::FIntermediatePropertyValue> local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FMovieSceneEntityID *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  UObject *pUStack_140;
  short local_138;
  undefined2 local_136;
  undefined2 local_134;
  ushort local_132;
  short local_130 [4];
  longlong local_128;
  undefined2 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  FReadAccessScope local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte local_a0;
  undefined8 ****local_98 [8];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  plVar19 = (longlong *)0x0;
  local_178 = param_1;
  local_188 = FBuiltInComponentTypes::Get();
  (__return_storage_ptr__->Values).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)0x0;
  (__return_storage_ptr__->Values).ArrayNum = 0;
  (__return_storage_ptr__->Values).ArrayMax = 1;
  iVar10 = (param_2->Entities).ArrayNum;
  plVar17 = plVar19;
  if (0 < iVar10) {
    do {
      if ((!(param_3->Value).bIsValid) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FRecompositionResult *)(*pcVar5)();
        return pFVar11;
      }
      pFVar13 = param_3;
      if (!(param_3->Value).bInline) {
        pFVar13 = *(FIntermediatePropertyValueConstRef **)(param_3->Value).Data.Pad;
      }
      puVar12 = (undefined8 *)
                (**(code **)(*(longlong *)(pFVar13->Value).Data.Pad + 0x10))(pFVar13,local_98);
      bVar9 = local_a0 & 0xfe;
      local_a0 = bVar9 | 2;
      if ((*(byte *)(puVar12 + 8) & 1) != 0) {
        bVar9 = bVar9 | 3;
        *(byte *)(puVar12 + 8) = *(byte *)(puVar12 + 8) & 0xfe;
        local_a0 = bVar9 ^ (bVar9 ^ *(byte *)(puVar12 + 8)) & 2;
        local_e0 = *puVar12;
        uStack_d8 = puVar12[1];
        local_d0 = puVar12[2];
        uStack_c8 = puVar12[3];
        local_c0 = *(undefined4 *)(puVar12 + 4);
        uStack_bc = *(undefined4 *)((longlong)puVar12 + 0x24);
        uStack_b8 = *(undefined4 *)(puVar12 + 5);
        uStack_b4 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        local_b0 = puVar12[6];
        uStack_a8 = puVar12[7];
      }
      if ((local_58 & 1) != 0) {
        pppppuVar14 = local_98;
        if ((local_58 & 2) == 0) {
          pppppuVar14 = (undefined8 *****)local_98[0];
        }
        local_58 = local_58 & 0xfe;
        (*(code *)**pppppuVar14)(pppppuVar14,0);
        if ((local_58 & 2) == 0) {
          FMemory::Free(local_98[0]);
        }
      }
      iVar10 = (__return_storage_ptr__->Values).ArrayNum;
      if (iVar10 == (__return_storage_ptr__->Values).ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FIntermediatePropertyValue>_>
                           (0x848,(ForElementType<UE::MovieScene::FIntermediatePropertyValue> *)
                                  __return_storage_ptr__,&(__return_storage_ptr__->Values).ArrayMax)
        ;
      }
      (__return_storage_ptr__->Values).ArrayNum = iVar10 + 1;
      FVar3 = (__return_storage_ptr__->Values).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)0x0) {
        FVar15 = FVar3;
      }
      puVar12 = (undefined8 *)((longlong)FVar15 + (longlong)iVar10 * 0x48);
      bVar9 = ((uchar *)((longlong)FVar15 + 0x40))[(longlong)iVar10 * 0x48] & 0xfe;
      *(byte *)(puVar12 + 8) = bVar9 | 2;
      if ((local_a0 & 1) != 0) {
        *(byte *)(puVar12 + 8) = bVar9 | 3;
        local_a0 = local_a0 & 0xfe;
        *(byte *)(puVar12 + 8) = *(byte *)(puVar12 + 8) ^ (*(byte *)(puVar12 + 8) ^ local_a0) & 2;
        *puVar12 = local_e0;
        puVar12[1] = uStack_d8;
        puVar12[2] = local_d0;
        puVar12[3] = uStack_c8;
        *(undefined4 *)(puVar12 + 4) = local_c0;
        *(undefined4 *)((longlong)puVar12 + 0x24) = uStack_bc;
        *(undefined4 *)(puVar12 + 5) = uStack_b8;
        *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_b4;
        *(undefined4 *)(puVar12 + 6) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar12 + 0x34) = local_b0._4_4_;
        *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_a8._4_4_;
      }
      iVar10 = (param_2->Entities).ArrayNum;
      uVar16 = (int)plVar17 + 1;
      plVar17 = (longlong *)(ulonglong)uVar16;
    } while ((int)uVar16 < iVar10);
  }
  if (iVar10 != 0) {
    pUVar4 = param_2->Object;
    if (iVar10 < 1) {
      local_1a0 = (FIntermediatePropertyValueConstRef *)(longlong)iVar10;
      local_1a8 = 0;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FRecompositionResult *)(*pcVar5)();
        return pFVar11;
      }
    }
    uVar2 = ((param_2->Entities).DataPtr)->Value;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_f8);
    if (*(int *)&(this->OnGetPropertyInfo).field_0x10 != 0) {
      plVar19 = *(longlong **)&(this->OnGetPropertyInfo).field_0x8;
    }
    (**(code **)(*plVar19 + 0x60))(plVar19,local_130,uVar2,pUVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    pFVar7 = local_178;
    if ((local_130[0] != -1) && (local_128 != 0)) {
      pTVar6 = &local_178->Handler;
      pTVar18 = &local_178->Handler;
      local_158 = (param_2->Entities).DataPtr;
      uStack_150 = *(undefined8 *)&(param_2->Entities).ArrayNum;
      local_134 = 0xffff;
      local_148 = *(undefined8 *)&param_2->bConvertFromSourceEntityIDs;
      pUStack_140 = param_2->Object;
      local_136 = local_120;
      local_132 = (local_178->PropertyType).Value;
      local_138 = local_130[0];
      pFVar1 = (local_188->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
               (ulonglong)local_178->VariableSizeCompositeOffset * 4;
      uStack_170 = (uint)local_178->CompositeSize;
      local_178 = (FPropertyDefinition *)pFVar1;
      if ((!pTVar6->bIsValid) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FRecompositionResult *)(*pcVar5)();
        return pFVar11;
      }
      if (!(pFVar7->Handler).bInline) {
        pTVar18 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar18->Data).Pad;
      }
      iVar10 = (__return_storage_ptr__->Values).ArrayNum;
      pcVar5 = *(code **)(*(longlong *)(pTVar18->Data).Pad + 0x40);
      FVar3 = (__return_storage_ptr__->Values).AllocatorInstance.SecondaryData;
      local_168 = (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)__return_storage_ptr__
      ;
      if (FVar3 != (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)0x0) {
        local_168 = FVar3;
      }
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FRecompositionResult *)(*pcVar5)();
        return pFVar11;
      }
      local_198 = &local_118;
      local_1a0 = param_3;
      local_118 = local_168._0_4_;
      uStack_114 = local_168._4_4_;
      uStack_10c = uStack_15c;
      local_1a8 = local_128;
      local_108 = (undefined4)local_178;
      uStack_104 = local_178._4_4_;
      uStack_100 = uStack_170;
      uStack_fc = uStack_16c;
      iStack_160 = iVar10;
      iStack_110 = iVar10;
      (*pcVar5)(pTVar18,pFVar7,&local_108,&local_158);
    }
  }
  return __return_storage_ptr__;
}

