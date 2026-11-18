// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// Consolidate @ 146198690

void __thiscall
FMovieSceneAccumulatedBlendState::Consolidate
          (FMovieSceneAccumulatedBlendState *this,
          TMap<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  ulonglong *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  int local_res18 [2];
  ulonglong *local_res20;
  ulonglong local_48;
  ulonglong local_40;
  
  iVar1 = (this->TokensToBlend).ArrayNum;
  pFVar7 = (this->TokensToBlend).AllocatorInstance.Data;
  pFVar10 = pFVar7 + (longlong)iVar1 * 0x88;
  do {
    if ((this->TokensToBlend).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar10) {
      return;
    }
    local_48 = 0;
    if ((((byte)pFVar7[0x80] & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = pFVar7;
    if (((byte)pFVar7[0x80] & 2) == 0) {
      pFVar4 = *(FScriptContainerElement **)pFVar7;
    }
    local_40 = *(ulonglong *)(pFVar4 + 8);
    if ((((byte)pFVar7[0x80] & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = pFVar7;
    if (((byte)pFVar7[0x80] & 2) == 0) {
      pFVar4 = *(FScriptContainerElement **)pFVar7;
    }
    pcVar2 = *(code **)(*(longlong *)pFVar4 + 8);
    uVar5 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = (int)(local_40 >> 0x20) * 0x17 + (int)local_40 ^ uVar5 >> 0x10 ^ uVar5;
    if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
      puVar8 = &param_1->field_0x38;
      if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_1->field_0x40;
      }
      iVar9 = *(int *)(puVar8 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar5) * 4);
      if (iVar9 != -1) {
        do {
          puVar6 = (ulonglong *)((longlong)iVar9 * 0x60 + *(longlong *)param_1);
          if ((*puVar6 == local_48) && (puVar6[1] == local_40)) {
            if ((iVar9 != -1) && (puVar6 != (ulonglong *)0x0)) goto LAB_146198865;
            break;
          }
          iVar9 = (int)puVar6[0xb];
        } while (iVar9 != -1);
      }
    }
    local_res20 = &local_48;
    TSet<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FMovieSceneBlendingKey_const_&>_>
              ((TSet<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>,FDefaultSetAllocator>
                *)param_1,(uint)local_res18,
               (TKeyInitializer<FMovieSceneBlendingKey_const_&> *)(ulonglong)uVar5,
               (bool *)&local_res20);
    puVar6 = (ulonglong *)((longlong)local_res18[0] * 0x60 + *(longlong *)param_1);
LAB_146198865:
    (*pcVar2)(pFVar4,puVar6 + 2);
    pFVar7 = pFVar7 + 0x88;
  } while( true );
}

// Consolidate @ 1461988a0

void __thiscall
FMovieSceneAccumulatedBlendState::Consolidate
          (FMovieSceneAccumulatedBlendState *this,
          TMap<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>_>
          *param_1,FMovieSceneEvaluationOperand *param_2,IMovieScenePlayer *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FWeakObjectPtr *pFVar9;
  FWeakObjectPtr *pFVar10;
  undefined1 *puVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  int local_78 [2];
  FWeakObjectPtr *local_70;
  FWeakObjectPtr local_68;
  UObject **local_60;
  FWeakObjectPtr *local_58;
  UObject *local_50;
  longlong local_48;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_40;
  
  if ((this->TokensToBlend).ArrayNum != 0) {
    if ((((param_2->ObjectBindingID).D == 0 && (param_2->ObjectBindingID).C == 0) &&
        (param_2->ObjectBindingID).B == 0) && (param_2->ObjectBindingID).A == 0) {
      Consolidate(this,param_1);
      return;
    }
    IMovieScenePlayer::FindBoundObjects
              (param_3,&local_40,&param_2->ObjectBindingID,&param_2->SequenceID);
    pFVar9 = &local_40.DataPtr[local_40.ArrayNum].WeakPtr;
    local_58 = pFVar9;
    if (&(local_40.DataPtr)->WeakPtr != pFVar9) {
      do {
        local_68 = (local_40.DataPtr)->WeakPtr;
        local_70 = &(local_40.DataPtr)->WeakPtr;
        pUVar4 = FWeakObjectPtr::Get(&local_68);
        pFVar10 = &(local_40.DataPtr)->WeakPtr;
        if (pUVar4 != (UObject *)0x0) {
          iVar1 = (this->TokensToBlend).ArrayNum;
          pFVar8 = (this->TokensToBlend).AllocatorInstance.Data;
          pFVar13 = pFVar8 + (longlong)iVar1 * 0x88;
          while( true ) {
            if ((this->TokensToBlend).ArrayNum != iVar1) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            pFVar9 = local_58;
            pFVar10 = local_70;
            if (pFVar8 == pFVar13) break;
            local_50 = pUVar4;
            if ((((byte)pFVar8[0x80] & 1) == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0x97,
                                   L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar5 = pFVar8;
            if (((byte)pFVar8[0x80] & 2) == 0) {
              pFVar5 = *(FScriptContainerElement **)pFVar8;
            }
            local_48 = *(longlong *)(pFVar5 + 8);
            if ((((byte)pFVar8[0x80] & 1) == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0x97,
                                   L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar5 = pFVar8;
            if (((byte)pFVar8[0x80] & 2) == 0) {
              pFVar5 = *(FScriptContainerElement **)pFVar8;
            }
            pcVar2 = *(code **)(*(longlong *)pFVar5 + 8);
            uVar6 = ((uint)((ulonglong)local_50 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_50 >> 4)
                    ) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            uVar6 = (int)((ulonglong)local_48 >> 0x20) * 0x17 + (int)local_48 ^ uVar6 >> 0x10 ^
                    uVar6;
            if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
              puVar11 = &param_1->field_0x38;
              if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
                puVar11 = *(undefined1 **)&param_1->field_0x40;
              }
              iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar6) * 4
                               );
              if (iVar12 != -1) {
                do {
                  plVar7 = (longlong *)((longlong)iVar12 * 0x60 + *(longlong *)param_1);
                  if (((UObject *)*plVar7 == local_50) && (plVar7[1] == local_48)) {
                    if ((iVar12 != -1) && (plVar7 != (longlong *)0x0)) goto LAB_146198afd;
                    break;
                  }
                  iVar12 = (int)plVar7[0xb];
                } while (iVar12 != -1);
              }
            }
            local_60 = &local_50;
            TSet<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FMovieSceneBlendingKey_const_&>_>
                      ((TSet<TTuple<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingKey,TInlineValue<IBlendableTokenStack,64,8>,0>,FDefaultSetAllocator>
                        *)param_1,(uint)local_78,
                       (TKeyInitializer<FMovieSceneBlendingKey_const_&> *)(ulonglong)uVar6,
                       (bool *)&local_60);
            plVar7 = (longlong *)((longlong)local_78[0] * 0x60 + *(longlong *)param_1);
LAB_146198afd:
            (*pcVar2)(pFVar5,plVar7 + 2);
            pFVar8 = pFVar8 + 0x88;
          }
        }
        local_40.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(pFVar10 + 1);
      } while (pFVar10 + 1 != pFVar9);
    }
  }
  return;
}

// Reset @ 1461cd340

void __thiscall FMovieSceneAccumulatedBlendState::Reset(FMovieSceneAccumulatedBlendState *this)

{
  int *piVar1;
  int iVar2;
  TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *pTVar3;
  
  piVar1 = &(this->TokensToBlend).ArrayMax;
  pTVar3 = (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)
           (this->TokensToBlend).AllocatorInstance.Data;
  iVar2 = (this->TokensToBlend).ArrayNum;
  if (-1 < (this->TokensToBlend).ArrayMax) {
    DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
              (pTVar3,iVar2);
    (this->TokensToBlend).ArrayNum = 0;
    return;
  }
  DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>(pTVar3,iVar2)
  ;
  (this->TokensToBlend).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

