// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 9

// StaticStruct @ 14a872cd0

UScriptStruct * __cdecl FRandomizeColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomizeColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FRandomizeColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeColumn,(UObject *)pUVar1,
                         L"RandomizeColumn");
  }
  return Z_Registration_Info_UScriptStruct_FRandomizeColumn.OuterSingleton;
}

// FRandomizeColumn @ 14a87d7b0

FRandomizeColumn * __thiscall FRandomizeColumn::FRandomizeColumn(FRandomizeColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FRandomizeColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  this->EqualCostThreshold = 0.001;
  (this->RepeatProbabilityMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepeatProbabilityMultipliers).ArrayNum = 0;
  (this->RepeatProbabilityMultipliers).ArrayMax = 0;
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FRandomizeContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FRandomizeContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeContextProperty,(UObject *)pUVar1,
                         L"RandomizeContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->InputValue,
             Z_Registration_Info_UScriptStruct_FRandomizeContextProperty.OuterSingleton,(uchar *)0x0
            );
  return this;
}

// Compile @ 14a883200

void __thiscall
FRandomizeColumn::Compile(FRandomizeColumn *this,IHasContextClass *param_1,bool param_2)

{
  int iVar1;
  longlong *plVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  char cVar5;
  UPackage *pUVar6;
  
  plVar2 = (longlong *)(this->InputValue).StructMemory;
  if ((plVar2 != (longlong *)0x0) &&
     (pUVar3 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0))
  {
    if (Z_Registration_Info_UScriptStruct_FChooserParameterRandomizeBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Chooser();
      Z_Registration_Info_UScriptStruct_FChooserParameterRandomizeBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterRandomizeBase,
                           (UObject *)pUVar6,L"ChooserParameterRandomizeBase");
      if (Z_Registration_Info_UScriptStruct_FChooserParameterRandomizeBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FChooserParameterRandomizeBase.OuterSingleton)->
                 _padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FChooserParameterRandomizeBase.OuterSingleton)->
         _padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (cVar5 = (**(code **)(*plVar2 + 0x48))(plVar2), cVar5 != '\0')) {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
    }
  }
  return;
}

// Filter @ 14a889150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRandomizeColumn::Filter
          (FRandomizeColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3)

{
  uint *puVar1;
  uint uVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  FIndexData *pFVar5;
  code *pcVar6;
  float fVar7;
  TSet<TTuple<void_const_*,FRandomizationState>,TDefaultMapHashableKeyFuncs<void_const_*,FRandomizationState,0>,FDefaultSetAllocator>
  *pTVar8;
  FChooserIndexArray *pFVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FChooserParameterRandomizeBase *pFVar14;
  longlong *plVar15;
  FRandomizationState *pFVar16;
  FIndexData *pFVar17;
  uint uVar18;
  ForElementType<FSetElementId> FVar19;
  FRandomizationState *pFVar20;
  FIndexData *pFVar21;
  FChooserIndexArray *pFVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FRandomizationState *pFVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_198 [32];
  uint local_144;
  undefined1 local_140 [12];
  float fStack_134;
  int local_130 [2];
  TSet<TTuple<void_const_*,FRandomizationState>,TDefaultMapHashableKeyFuncs<void_const_*,FRandomizationState,0>,FDefaultSetAllocator>
  *local_128;
  FChooserIndexArray *local_120;
  FRandomizeColumn *local_118;
  FRandomizeColumn **local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar2 = param_2->Size;
  uVar12 = 0;
  puVar3 = (this->InputValue).StructMemory;
  local_144 = 0;
  local_128 = (TSet<TTuple<void_const_*,FRandomizationState>,TDefaultMapHashableKeyFuncs<void_const_*,FRandomizationState,0>,FDefaultSetAllocator>
               *)0x0;
  unique0x10000d80 = (FIndexData)param_2;
  local_120 = param_3;
  if ((puVar3 != (uchar *)0x0) &&
     (pUVar4 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0))
  {
    pFVar14 = UE::StructUtils::GetStructRef<FChooserParameterRandomizeBase>(pUVar4,puVar3);
    (**(code **)((longlong)*pFVar14 + 0x40))(pFVar14,param_1,&local_128);
  }
  pTVar8 = local_128;
  pFVar25 = (FRandomizationState *)0x0;
  uVar18 = 0;
  if (1 < (int)uVar2) {
    if (local_128 !=
        (TSet<TTuple<void_const_*,FRandomizationState>,TDefaultMapHashableKeyFuncs<void_const_*,FRandomizationState,0>,FDefaultSetAllocator>
         *)0x0) {
      local_100 = 0;
      local_f8 = 0;
      local_e0 = 0;
      uVar18 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
               -0x7a143595;
      local_f0 = (void *)0x0;
      local_e8 = 0;
      local_e4 = 4;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      local_118 = this;
      if (*(int *)&(local_128->Elements).field_0x8 != *(int *)&(local_128->Elements).field_0x34) {
        FVar19 = (local_128->Hash).SecondaryData;
        if (FVar19 == (ForElementType<FSetElementId>)0x0) {
          FVar19 = (ForElementType<FSetElementId>)&local_128->Hash;
        }
        iVar26 = *(int *)((longlong)FVar19 + (ulonglong)(local_128->HashSize - 1U & uVar18) * 4);
        if (iVar26 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar26 * 0x38 + *(longlong *)&local_128->Elements);
            if ((FRandomizeColumn *)*plVar15 == this) {
              if (plVar15 != (longlong *)0x0) goto LAB_14a889316;
              break;
            }
            iVar26 = (int)plVar15[6];
          } while (iVar26 != -1);
        }
      }
      local_110 = &local_118;
      local_108 = &local_100;
      TSet<TTuple<void_const_*,FRandomizationState>,TDefaultMapHashableKeyFuncs<void_const_*,FRandomizationState,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<void_const_*_&&,FRandomizationState_&&>_>
                (local_128,(uint)local_130,
                 (TPairInitializer<void_const_*_&&,FRandomizationState_&&> *)(ulonglong)uVar18,
                 (bool *)&local_110);
      plVar15 = (longlong *)((longlong)local_130[0] * 0x38 + *(longlong *)&pTVar8->Elements);
LAB_14a889316:
      pFVar25 = (FRandomizationState *)(plVar15 + 1);
      if (local_f0 != (void *)0x0) {
        FMemory::Free(local_f0);
      }
      uVar18 = (this->RepeatProbabilityMultipliers).ArrayNum;
      if (*(uint *)(plVar15 + 4) != uVar18) {
        local_140[0] = 0xff;
        local_140[1] = 0xff;
        local_140[2] = 0xff;
        local_140[3] = 0xff;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        puVar1 = (uint *)((longlong)plVar15 + 0x24);
        *(undefined4 *)(plVar15 + 4) = 0;
        if (*puVar1 != uVar18) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,uVar18,(ForElementType<int> *)pFVar25,0,(int *)puVar1);
        }
        iVar26 = 0;
        if (0 < (int)uVar18) {
          do {
            pFVar20 = (FRandomizationState *)plVar15[3];
            pFVar16 = pFVar25;
            if (pFVar20 != (FRandomizationState *)0x0) {
              pFVar16 = pFVar20;
            }
            if (pFVar16 <= (FRandomizationState *)local_140) {
              pFVar16 = pFVar25;
              if (pFVar20 != (FRandomizationState *)0x0) {
                pFVar16 = pFVar20;
              }
              if ((local_140 <
                   (pFVar16->RecentlySelectedRows).AllocatorInstance.InlineData +
                   (longlong)(int)*puVar1 * 4) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar11 = *(uint *)(plVar15 + 4);
            if (uVar11 == *puVar1) {
              uVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)pFVar25,(int *)puVar1);
            }
            *(uint *)(plVar15 + 4) = uVar11 + 1;
            pFVar20 = pFVar25;
            if ((FRandomizationState *)plVar15[3] != (FRandomizationState *)0x0) {
              pFVar20 = (FRandomizationState *)plVar15[3];
            }
            iVar26 = iVar26 + 1;
            *(undefined4 *)
             ((pFVar20->RecentlySelectedRows).AllocatorInstance.InlineData +
             (longlong)(int)uVar11 * 4) = local_140._0_4_;
          } while (iVar26 < (int)uVar18);
        }
        *(undefined4 *)(plVar15 + 5) = 0;
        param_2 = (FChooserIndexArray *)stack0xfffffffffffffec8;
      }
    }
    uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar7 = __real_3f800000;
    uVar18 = 0;
    pFVar21 = param_2->Data;
    pFVar5 = pFVar21 + param_2->Size;
    if (param_2->bHasCosts == false) {
      fVar33 = 0.0;
      fVar32 = 0.0;
      for (; pFVar21 != pFVar5; pFVar21 = pFVar21 + 1) {
        uVar18 = pFVar21->Index;
        fVar31 = fVar7;
        if ((int)uVar18 < (this->RowValues).ArrayNum) {
          if (((int)uVar18 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar31 = *(float *)((this->RowValues).AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
        }
        fVar27 = GetRepeatProbabilityMultiplier
                           (&this->RepeatProbabilityMultipliers,pFVar25,pFVar21->Index);
        fVar32 = fVar32 + fVar27 * fVar31;
        param_2 = (FChooserIndexArray *)stack0xfffffffffffffec8;
      }
      fVar31 = 0.0;
      if (fVar32 < __real_322bcc77) {
        fVar31 = fVar7 / (float)param_2->Size;
        fVar32 = fVar7;
      }
      uVar18 = rand();
      fVar27 = (float)(uVar18 & 0x7fff) * __real_38000100;
      if ((int)(uVar2 - 1) < 1) goto LAB_14a8898c9;
      uVar23 = 0;
      uVar24 = uVar23;
      do {
        if ((param_2->MaxSize <= (uint)uVar23) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < MaxSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                ,0x42,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = param_2->Data;
        uVar12 = pFVar5[uVar24].Index;
        fVar28 = fVar7;
        if ((-1 < (int)uVar12) && ((int)uVar12 < (this->RowValues).ArrayNum)) {
          uVar18 = 0;
          if ((int)uVar12 < (this->RowValues).ArrayNum) {
            uVar18 = ~uVar12 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar28 = *(float *)((this->RowValues).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
        }
        fVar29 = GetRepeatProbabilityMultiplier
                           (&this->RepeatProbabilityMultipliers,pFVar25,pFVar5[uVar24].Index);
        fVar33 = fVar33 + fVar29 * fVar28 + fVar31;
        uVar18 = local_144;
        if (fVar27 * fVar32 < fVar33) break;
        uVar24 = uVar24 + 1;
        local_144 = local_144 + 1;
        uVar23 = (ulonglong)local_144;
        param_2 = (FChooserIndexArray *)stack0xfffffffffffffec8;
        uVar18 = local_144;
      } while ((longlong)uVar24 < (longlong)(int)(uVar2 - 1));
    }
    else {
      fVar33 = 0.0;
      pFVar17 = pFVar21;
      fVar32 = __real_7f7fffff;
      uVar12 = uVar18;
      if (pFVar21 == pFVar5) {
        uVar18 = 0;
LAB_14a8895ba:
        fVar27 = fVar7 / (float)(int)uVar18;
        fVar31 = fVar7;
      }
      else {
        do {
          if (pFVar17->Cost < fVar32) {
            uVar12 = pFVar17->Index;
            fVar32 = pFVar17->Cost;
          }
          pFVar17 = pFVar17 + 1;
        } while (pFVar17 != pFVar5);
        fVar31 = 0.0;
        do {
          fVar27 = (float)((uint)(fVar32 - pFVar21->Cost) & uVar11);
          if (fVar27 < this->EqualCostThreshold || fVar27 == this->EqualCostThreshold) {
            uVar13 = pFVar21->Index;
            fVar27 = fVar7;
            if ((int)uVar13 < (this->RowValues).ArrayNum) {
              if (((int)uVar13 < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              fVar27 = *(float *)((this->RowValues).AllocatorInstance.Data +
                                 (longlong)(int)uVar13 * 4);
            }
            fVar28 = GetRepeatProbabilityMultiplier
                               (&this->RepeatProbabilityMultipliers,pFVar25,pFVar21->Index);
            uVar18 = uVar18 + 1;
            fVar31 = fVar31 + fVar28 * fVar27;
          }
          pFVar22 = local_120;
          pFVar21 = pFVar21 + 1;
        } while (pFVar21 != pFVar5);
        if (uVar18 == 1) {
          fStack_134 = fVar32;
          local_140._8_4_ = uVar12;
          if ((local_120->MaxSize <= local_120->Size) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size < MaxSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                  ,0x26,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar22->Data[pFVar22->Size] = stack0xfffffffffffffec8;
          pFVar22->Size = pFVar22->Size + 1;
          return;
        }
        fVar27 = 0.0;
        if (fVar31 < __real_322bcc77) goto LAB_14a8895ba;
      }
      uVar12 = rand();
      fVar28 = (float)(uVar12 & 0x7fff) * __real_38000100;
      if ((int)(uVar2 - 1) < 1) {
        uVar12 = 0;
        goto LAB_14a8898c9;
      }
      uVar23 = 0;
      pFVar22 = (FChooserIndexArray *)stack0xfffffffffffffec8;
      uVar24 = uVar23;
      do {
        uVar18 = (uint)uVar24;
        if ((pFVar22->MaxSize <= uVar18) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < MaxSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                ,0x42,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = pFVar22->Data;
        fVar29 = (float)((uint)(fVar32 - pFVar5[uVar23].Cost) & uVar11);
        if (fVar29 < this->EqualCostThreshold || fVar29 == this->EqualCostThreshold) {
          uVar12 = pFVar5[uVar23].Index;
          fVar29 = fVar7;
          if ((-1 < (int)uVar12) && ((int)uVar12 < (this->RowValues).ArrayNum)) {
            uVar13 = 0;
            if ((int)uVar12 < (this->RowValues).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar29 = *(float *)((this->RowValues).AllocatorInstance.Data + (longlong)(int)uVar12 * 4
                               );
          }
          fVar30 = GetRepeatProbabilityMultiplier
                             (&this->RepeatProbabilityMultipliers,pFVar25,pFVar5[uVar23].Index);
          fVar33 = fVar33 + fVar30 * fVar29 + fVar27;
          pFVar22 = (FChooserIndexArray *)stack0xfffffffffffffec8;
          if (fVar28 * fVar31 < fVar33) break;
        }
        uVar24 = (ulonglong)(uVar18 + 1);
        uVar23 = uVar23 + 1;
        uVar18 = uVar18 + 1;
      } while ((longlong)uVar23 < (longlong)(int)(uVar2 - 1));
    }
  }
  uVar12 = uVar18;
  if ((int)uVar2 <= (int)uVar12) {
    return;
  }
LAB_14a8898c9:
  pFVar22 = (FChooserIndexArray *)stack0xfffffffffffffec8;
  if ((((FChooserIndexArray *)stack0xfffffffffffffec8)->MaxSize <= uVar12) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < MaxSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                          ,0x42,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = local_120;
  pFVar5 = pFVar22->Data;
  if ((local_120->MaxSize <= local_120->Size) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size < MaxSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                          ,0x26,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9->Data[pFVar9->Size] = pFVar5[uVar12];
  pFVar9->Size = pFVar9->Size + 1;
  return;
}

// GetInputValue @ 14a88a5c0

FChooserParameterBase * __thiscall FRandomizeColumn::GetInputValue(FRandomizeColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// HasFilters @ 14a88b970

bool __thiscall FRandomizeColumn::HasFilters(FRandomizeColumn *this)

{
  return true;
}

// HasOutputs @ 14a88b9f0

bool __thiscall FRandomizeColumn::HasOutputs(FRandomizeColumn *this)

{
  return true;
}

// PostLoad @ 14a88cce0

void __thiscall FRandomizeColumn::PostLoad(FRandomizeColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar1 = FInstancedStruct::GetMutable<FChooserParameterBase>(&this->InputValue);
                    /* WARNING: Could not recover jumptable at 0x00014a88cd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,*(code **)((longlong)*pFVar1 + 0x20));
    return;
  }
  return;
}

// SetOutputs @ 14a88fb20

void __thiscall
FRandomizeColumn::SetOutputs(FRandomizeColumn *this,FChooserEvaluationContext *param_1,int param_2)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FChooserParameterRandomizeBase *pFVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *local_res8;
  
  puVar1 = (this->InputValue).StructMemory;
  if ((((puVar1 != (uchar *)0x0) &&
       (pUVar2 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0
       )) && (-1 < param_2)) && (param_2 < (this->RowValues).ArrayNum)) {
    local_res8 = (longlong *)0x0;
    pFVar6 = UE::StructUtils::GetStructRef<FChooserParameterRandomizeBase>(pUVar2,puVar1);
    (**(code **)((longlong)*pFVar6 + 0x40))(pFVar6,param_1,&local_res8);
    if ((local_res8 != (longlong *)0x0) &&
       (uVar8 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                -0x7a143595, uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb,
       (int)local_res8[1] != *(int *)((longlong)local_res8 + 0x34))) {
      plVar7 = (longlong *)local_res8[8];
      if ((longlong *)local_res8[8] == (longlong *)0x0) {
        plVar7 = local_res8 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)local_res8[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar5 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar5 * 0x38 + *local_res8);
          if ((FRandomizeColumn *)*plVar7 == this) {
            plVar10 = plVar7 + 1;
            if (plVar7 == (longlong *)0x0) {
              plVar10 = (longlong *)0x0;
            }
            if (plVar10 == (longlong *)0x0) {
              return;
            }
            iVar5 = (int)plVar10[3];
            if (iVar5 < 1) {
              return;
            }
            uVar9 = ((int)plVar10[4] + 1) % iVar5;
            *(uint *)(plVar10 + 4) = uVar9;
            uVar8 = 0;
            if ((int)uVar9 < iVar5) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((longlong *)plVar10[2] != (longlong *)0x0) {
              plVar10 = (longlong *)plVar10[2];
            }
            *(int *)((longlong)plVar10 + (longlong)(int)uVar9 * 4) = param_2;
            return;
          }
          iVar5 = (int)plVar7[6];
        } while (iVar5 != -1);
      }
    }
  }
  return;
}

