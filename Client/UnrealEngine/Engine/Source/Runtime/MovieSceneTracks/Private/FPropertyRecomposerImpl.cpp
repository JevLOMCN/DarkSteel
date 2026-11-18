// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits> @ 146898310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146898756) */
/* WARNING: Removing unreachable block (ram,0x00014689875c) */
/* WARNING: Removing unreachable block (ram,0x000146898761) */
/* WARNING: Removing unreachable block (ram,0x000146898773) */

TRecompositionResult<double> * __thiscall
UE::MovieScene::FPropertyRecomposerImpl::
RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
          (FPropertyRecomposerImpl *this,TRecompositionResult<double> *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *param_1,
          FDecompositionQuery *param_2,double *param_3)

{
  FIntermediatePropertyValue *pFVar1;
  ushort uVar2;
  ushort uVar3;
  TCompositePropertyTypeID<UE::MovieScene::FFloatPropertyTraits> TVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<double> FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FBuiltInComponentTypes *pFVar12;
  TRecompositionResult<double> *pTVar13;
  undefined *******pppppppuVar14;
  byte bVar15;
  longlong *plVar16;
  ForElementType<double> FVar17;
  undefined *******pppppppuVar18;
  ForElementType<UE::MovieScene::FIntermediatePropertyValue> FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_6a8 [32];
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 local_638;
  undefined4 uStack_634;
  int iStack_630;
  undefined4 uStack_62c;
  undefined8 local_628;
  UObject *pUStack_620;
  short local_618;
  undefined2 local_616;
  undefined2 local_614;
  undefined2 local_612;
  short local_610 [4];
  longlong local_608;
  undefined2 local_600;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  int iStack_5f0;
  FScriptContainerElement *local_5e8;
  uint uStack_5e0;
  FReadAccessScope local_5d8;
  undefined ******local_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  longlong local_5b0;
  undefined8 uStack_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined8 local_590;
  undefined8 uStack_588;
  byte local_580;
  undefined ******local_578;
  undefined8 uStack_570;
  longlong local_568;
  undefined8 uStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  byte local_538;
  undefined ******local_530;
  undefined4 local_528;
  double *local_520;
  byte local_4f0;
  ForElementType<UE::MovieScene::FIntermediatePropertyValue> local_4e8;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  pFVar12 = FBuiltInComponentTypes::Get();
  TVar4 = param_1->CompositeID;
  uVar21 = 0;
  if ((int)TVar4 < (pFVar12->PropertyRegistry).Properties.ArrayNum) {
    uVar21 = ~(uint)TVar4 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
    return pTVar13;
  }
  pFVar22 = (pFVar12->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar4 * 0x70;
  TRecompositionResult<double>::TRecompositionResult<double>
            (__return_storage_ptr__,param_3,(param_2->Entities).ArrayNum);
  iVar11 = (param_2->Entities).ArrayNum;
  if (iVar11 != 0) {
    pUVar5 = param_2->Object;
    if ((iVar11 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
      return pTVar13;
    }
    uVar2 = ((param_2->Entities).DataPtr)->Value;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_5d8);
    if (*(int *)&(this->OnGetPropertyInfo).field_0x10 == 0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = *(longlong **)&(this->OnGetPropertyInfo).field_0x8;
    }
    uVar21 = 0;
    (**(code **)(*plVar16 + 0x60))(plVar16,local_610,uVar2,pUVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d8);
    if ((local_610[0] != -1) && (local_608 != 0)) {
      local_638 = *(undefined4 *)&(param_2->Entities).DataPtr;
      uStack_634 = *(undefined4 *)((longlong)&(param_2->Entities).DataPtr + 4);
      iStack_630 = (param_2->Entities).ArrayNum;
      uStack_62c = *(undefined4 *)&(param_2->Entities).field_0xc;
      uVar10 = (__return_storage_ptr__->Values).ArrayNum;
      local_614 = 0xffff;
      local_618 = local_610[0];
      local_616 = local_600;
      local_628 = *(undefined8 *)&param_2->bConvertFromSourceEntityIDs;
      pUStack_620 = param_2->Object;
      local_612 = *(undefined2 *)(pFVar22 + 0x28);
      pFVar6 = (pFVar12->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
      uVar2 = *(ushort *)(pFVar22 + 0x24);
      uVar3 = *(ushort *)(pFVar22 + 0x26);
      local_4e8.SecondaryData = (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)0x0;
      local_60 = 0;
      local_5c = 0x10;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if (0x10 < (int)uVar10) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FIntermediatePropertyValue>_>
                  (0x48,8,uVar10,&local_4e8,0,&local_5c);
      }
      iVar11 = (__return_storage_ptr__->Values).ArrayNum;
      if (0 < iVar11) {
        do {
          uVar10 = 0;
          if ((int)uVar21 < iVar11) {
            uVar10 = ~uVar21 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
            return pTVar13;
          }
          FVar7 = (__return_storage_ptr__->Values).AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<double>)__return_storage_ptr__;
          if (FVar7 != (ForElementType<double>)0x0) {
            FVar17 = FVar7;
          }
          local_580 = local_580 | 3;
          uStack_5b8 = 8;
          local_5c0 = (undefined ******)
                      &___7__TTypeErasedPropertyPtrImpl_N_Private_MovieScene_UE__6B_;
          local_5b0 = (longlong)FVar17 + (longlong)(int)uVar21 * 8;
          if (((local_580 & 1) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0x97,
                                 L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
            return pTVar13;
          }
          pppppppuVar18 = &local_5c0;
          if ((local_580 & 2) == 0) {
            pppppppuVar18 = (undefined *******)local_5c0;
          }
          if (((local_580 & 1) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0x97,
                                 L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
            return pTVar13;
          }
          pppppppuVar14 = &local_5c0;
          if ((local_580 & 2) == 0) {
            pppppppuVar14 = (undefined *******)local_5c0;
          }
          if ((pppppppuVar18 != pppppppuVar14) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0xce,
                                 L"TInlineValue cannot operate with multiple inheritance objects."),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
            return pTVar13;
          }
          bVar15 = local_538 & 0xfe;
          local_538 = bVar15 | 2;
          if ((local_580 & 1) != 0) {
            local_580 = local_580 & 0xfe;
            bVar15 = bVar15 | 3;
            local_578 = local_5c0;
            uStack_570 = CONCAT44(uStack_5b4,uStack_5b8);
            local_538 = (local_580 ^ bVar15) & 2 ^ bVar15;
            local_568 = local_5b0;
            uStack_560 = uStack_5a8;
            local_558 = local_5a0;
            uStack_554 = uStack_59c;
            uStack_550 = uStack_598;
            uStack_54c = uStack_594;
            local_548 = local_590;
            uStack_540 = uStack_588;
          }
          if ((local_580 & 1) != 0) {
            pppppppuVar18 = &local_5c0;
            if ((local_580 & 2) == 0) {
              pppppppuVar18 = (undefined *******)local_5c0;
            }
            local_580 = local_580 & 0xfe;
            (*(code *)**pppppppuVar18)(pppppppuVar18,0);
            if ((local_580 & 2) == 0) {
              FMemory::Free(local_5c0);
            }
          }
          iVar11 = local_60;
          if (local_60 == local_5c) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FIntermediatePropertyValue>_>
                               (0x848,&local_4e8,&local_5c);
          }
          local_60 = iVar11 + 1;
          FVar19 = (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)&local_4e8;
          if (local_4e8.SecondaryData !=
              (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)0x0) {
            FVar19 = local_4e8.SecondaryData;
          }
          pFVar1 = (FIntermediatePropertyValue *)((longlong)FVar19 + (longlong)iVar11 * 0x48);
          bVar15 = ((uchar *)((longlong)FVar19 + 0x40))[(longlong)iVar11 * 0x48] & 0xfe;
          pFVar1->field_0x40 = bVar15 | 2;
          if ((local_538 & 1) != 0) {
            pFVar1->field_0x40 = bVar15 | 3;
            local_538 = local_538 & 0xfe;
            pFVar1->field_0x40 = pFVar1->field_0x40 ^ (pFVar1->field_0x40 ^ local_538) & 2;
            *(undefined *******)pFVar1 = local_578;
            *(undefined8 *)&pFVar1->field_0x8 = uStack_570;
            *(longlong *)&pFVar1->field_0x10 = local_568;
            *(undefined8 *)&pFVar1->field_0x18 = uStack_560;
            *(undefined4 *)&pFVar1->field_0x20 = local_558;
            *(undefined4 *)&pFVar1->field_0x24 = uStack_554;
            *(undefined4 *)&pFVar1->field_0x28 = uStack_550;
            *(undefined4 *)&pFVar1->field_0x2c = uStack_54c;
            *(undefined4 *)&pFVar1->field_0x30 = (undefined4)local_548;
            *(undefined4 *)&pFVar1->field_0x34 = local_548._4_4_;
            *(undefined4 *)&pFVar1->field_0x38 = (undefined4)uStack_540;
            *(undefined4 *)&pFVar1->field_0x3c = uStack_540._4_4_;
          }
          iVar11 = (__return_storage_ptr__->Values).ArrayNum;
          uVar21 = uVar21 + 1;
        } while ((int)uVar21 < iVar11);
      }
      local_4f0 = local_4f0 | 3;
      local_528 = 8;
      local_530 = (undefined ******)
                  &___7__TTypeErasedPropertyPtrImpl___CBN_Private_MovieScene_UE__6B_;
      local_520 = param_3;
      if (((local_4f0 & 1) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
        return pTVar13;
      }
      pppppppuVar18 = &local_530;
      if ((local_4f0 & 2) == 0) {
        pppppppuVar18 = (undefined *******)local_530;
      }
      if (((local_4f0 & 1) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
        return pTVar13;
      }
      pppppppuVar14 = &local_530;
      if ((local_4f0 & 2) == 0) {
        pppppppuVar14 = (undefined *******)local_530;
      }
      if ((pppppppuVar18 != pppppppuVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
        return pTVar13;
      }
      pFVar20 = pFVar22 + 0x48;
      if ((((byte)pFVar22[0x68] & 1) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
        return pTVar13;
      }
      iVar11 = local_60;
      if (((byte)pFVar22[0x68] & 2) == 0) {
        pFVar20 = *(FScriptContainerElement **)pFVar20;
      }
      pcVar8 = *(code **)(*(longlong *)pFVar20 + 0x40);
      FVar19 = (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)&local_4e8;
      if (local_4e8.SecondaryData != (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)0x0
         ) {
        FVar19 = local_4e8.SecondaryData;
      }
      if ((local_60 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TRecompositionResult<double> *)(*pcVar8)();
        return pTVar13;
      }
      local_658 = FVar19._0_4_;
      uStack_654 = FVar19._4_4_;
      local_5f8 = local_658;
      uStack_5f4 = uStack_654;
      iStack_5f0 = iVar11;
      uStack_5e0 = (uint)uVar3;
      local_5e8 = pFVar6 + (ulonglong)uVar2 * 4;
      (*pcVar8)(pFVar20,pFVar22,&local_5e8,&local_638);
      if ((local_4f0 & 1) != 0) {
        pppppppuVar18 = &local_530;
        if ((local_4f0 & 2) == 0) {
          pppppppuVar18 = (undefined *******)local_530;
        }
        local_4f0 = local_4f0 & 0xfe;
        (*(code *)**pppppppuVar18)(pppppppuVar18,0);
        if ((local_4f0 & 2) == 0) {
          FMemory::Free(local_530);
        }
      }
      FVar19 = (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)&local_4e8;
      if (local_4e8.SecondaryData != (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)0x0
         ) {
        FVar19 = local_4e8.SecondaryData;
      }
      DestructItems<UE::MovieScene::FIntermediatePropertyValue,int>
                ((FIntermediatePropertyValue *)FVar19,local_60);
      if (local_4e8.SecondaryData != (ForElementType<UE::MovieScene::FIntermediatePropertyValue>)0x0
         ) {
        FMemory::Free((void *)local_4e8.SecondaryData);
      }
    }
  }
  return __return_storage_ptr__;
}

