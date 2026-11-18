// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 17

// Emplace<TObjectPtr<UInputMappingContext_const_>_const_&,TObjectPtr<UInputMappingContext_const_>_const_&> @ 14a6be360

TObjectPtr<UInputMappingContext_const_> * __thiscall
TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
::
Emplace<TObjectPtr<UInputMappingContext_const_>_const_&,TObjectPtr<UInputMappingContext_const_>_const_&>
          (TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
           *this,TObjectPtr<UInputMappingContext_const_> *param_1,
          TObjectPtr<UInputMappingContext_const_> *param_2)

{
  TPairInitializer<TObjectPtr<UInputMappingContext_const_>_const_&,TObjectPtr<UInputMappingContext_const_>_const_&>
  local_res8 [2];
  TObjectPtr<UInputMappingContext_const_> *local_18;
  TObjectPtr<UInputMappingContext_const_> *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TObjectPtr<UInputMappingContext_const_>_const_&,TObjectPtr<UInputMappingContext_const_>_const_&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (TObjectPtr<UInputMappingContext_const_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x18 + 8);
}

// FindOrAddImpl<TObjectPtr<UInputAction_const_>_const_&> @ 14a6c1c70

FInjectedInputArray * __thiscall
TMapBase<TObjectPtr<UInputAction_const_>,FInjectedInputArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>_>
::FindOrAddImpl<TObjectPtr<UInputAction_const_>_const_&>
          (TMapBase<TObjectPtr<UInputAction_const_>,FInjectedInputArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>_>
           *this,uint param_1,TObjectPtr<UInputAction_const_> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TObjectPtr<UInputAction_const_> *local_res20;
  
  iVar1 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FInjectedInputArray *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UInputAction_const_>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UInputAction_const_>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FInjectedInputArray *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<TObjectPtr<UInputAction_const_>_const_&> @ 14a6c1d00

FKeyConsumptionOptions * __thiscall
TMapBase<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>_>
::FindOrAddImpl<TObjectPtr<UInputAction_const_>_const_&>
          (TMapBase<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>_>
           *this,uint param_1,TObjectPtr<UInputAction_const_> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TObjectPtr<UInputAction_const_> *local_res20;
  
  iVar1 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TObjectPtr<UInputAction_const_>_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<TObjectPtr<UInputAction_const_>_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FKeyConsumptionOptions *)(lVar2 + 8);
}

// FindOrAddImpl<FKey_const_&> @ 14a6c1d80

int * __thiscall
TMapBase<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_>::
FindOrAddImpl<FKey_const_&>
          (TMapBase<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_> *this,
          uint param_1,FKey *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x28) == param_2->KeyName) {
          if (lVar3 != 0) goto LAB_14a6c1e12;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FKey,int>,TDefaultMapHashableKeyFuncs<FKey,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FKey_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14a6c1e12:
  return (int *)(lVar3 + 0x18);
}

// FindOrAddImpl<FKey_const_&> @ 14a6c1e30

FInjectedKeyData * __thiscall
TMapBase<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
::FindOrAddImpl<FKey_const_&>
          (TMapBase<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
           *this,uint param_1,FKey *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_2->KeyName) {
          if (pFVar2 != (FName *)0x0) {
            return (FInjectedKeyData *)(pFVar2 + 3);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FKey_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FInjectedKeyData *)
         (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FKey_const_&,UE::Math::TVector<double>_> @ 14a6c1ee0

TVector<double> * __thiscall
TMapBase<FKey,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,UE::Math::TVector<double>,0>_>
::FindOrAddImpl<FKey_const_&,UE::Math::TVector<double>_>
          (TMapBase<FKey,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,UE::Math::TVector<double>,0>_>
           *this,uint param_1,FKey *param_2,TVector<double> *param_3)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FKey *local_18;
  TVector<double> *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_2->KeyName) {
          if (pFVar2 != (FName *)0x0) {
            return (TVector<double> *)(pFVar2 + 3);
          }
          break;
        }
        uVar1 = pFVar2[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FKey,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FKey,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FKey_const_&,UE::Math::TVector<double>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FKey_const_&,UE::Math::TVector<double>_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (TVector<double> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x18);
}

// FindOrAddImpl<FName_const_&> @ 14a6c1fa0

FKeyMappingRow * __thiscall
TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FKeyMappingRow *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FKeyMappingRow>,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FKeyMappingRow *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<UInputAction_const_*> @ 14a6c2050

TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UInputAction_const_*>
          (TMapBase<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UInputAction **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UInputAction **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UInputAction *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UInputAction_const_*,TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UInputAction_const_*_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UInputAction_const_*_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14a6c2140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar18 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar20 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14a6c2439;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14a6c2439;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14a6c2280;
      }
    }
    else {
LAB_14a6c2280:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar10 = uVar18;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar18;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar13 = *puVar19;
      uVar17 = uVar18;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14a6c2380;
        uVar13 = puVar19[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14a6c2380:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar20;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14a6c2439:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar18;
  local_f4.Data.ArrayMax = uVar20;
  local_d0 = uVar20;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar19;
    uVar17 = uVar18;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar18;
      local_d0 = (uint)uVar17;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar17 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar18 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_14a6c24df;
      uVar14 = puVar19[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14a6c24df:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x28;
      pFVar15 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar15->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar20;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar15);
      if (iVar6 == -1) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar16 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar9);
        if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar16);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)(*(longlong *)&(this->Pairs).Elements +
                           (longlong)TStack_120.CurrentBitIndex * 0x28));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 14a6dca10

FInputActionInstance * __thiscall
TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
::Find(TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
       *this,TObjectPtr<UInputAction_const_> param_1)

{
  TObjectPtr<UInputAction_const_>_u_0 TVar1;
  int iVar2;
  FInputActionInstance *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UInputAction_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UInputAction *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UInputAction_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x70 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FInputActionInstance *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FInputActionInstance *)(lVar5 + 8);
    }
    return pFVar3;
  }
  return (FInputActionInstance *)0x0;
}

// Find @ 14a6dcac0

TObjectPtr<UInputMappingContext_const_> * __thiscall
TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
::Find(TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
       *this,TObjectPtr<UInputMappingContext_const_> param_1)

{
  longlong lVar1;
  TObjectPtr<UInputMappingContext_const_>_u_0 TVar2;
  int iVar3;
  TObjectPtr<UInputMappingContext_const_> *pTVar4;
  uint uVar5;
  TObjectPtr<UInputMappingContext_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar2.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UInputMappingContext *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputMappingContext_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TObjectPtr<UInputMappingContext_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x18;
    pTVar4 = (TObjectPtr<UInputMappingContext_const_> *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TObjectPtr<UInputMappingContext_const_> *)(lVar1 + 8);
    }
    return pTVar4;
  }
  return (TObjectPtr<UInputMappingContext_const_> *)0x0;
}

// Find @ 14a6dcb80

FAppliedInputContextData * __thiscall
TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
::Find(TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
       *this,TObjectPtr<UInputMappingContext_const_> param_1)

{
  longlong lVar1;
  TObjectPtr<UInputMappingContext_const_>_u_0 TVar2;
  int iVar3;
  FAppliedInputContextData *pFVar4;
  uint uVar5;
  TObjectPtr<UInputMappingContext_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar2.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UInputMappingContext *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar5 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar3 = TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputMappingContext_const_>_>
                    (&this->Pairs,uVar5 >> 0x10 ^ uVar5,
                     (TObjectPtr<UInputMappingContext_const_> *)&local_res8.ObjectPtr);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x18;
    pFVar4 = (FAppliedInputContextData *)0x0;
    if (lVar1 != 0) {
      pFVar4 = (FAppliedInputContextData *)(lVar1 + 8);
    }
    return pFVar4;
  }
  return (FAppliedInputContextData *)0x0;
}

// Find @ 14a6dcc40

FKeyState * __thiscall
TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>::Find
          (TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
           *this,FKey *param_1)

{
  FName FVar1;
  uint uVar2;
  FKeyState *pFVar3;
  ForElementType<FSetElementId> FVar4;
  FName *pFVar5;
  
  FVar1 = param_1->KeyName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar4 +
                     (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar2 * 0x110 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar5 == param_1->KeyName) {
          pFVar3 = (FKeyState *)0x0;
          if (pFVar5 != (FName *)0x0) {
            pFVar3 = (FKeyState *)(pFVar5 + 3);
          }
          return pFVar3;
        }
        uVar2 = pFVar5[0x21].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  return (FKeyState *)0x0;
}

// Find @ 14a6dcd00

FKeyMappingRow * __thiscall
TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
::Find(TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FName *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = pFVar4 + 1;
          }
          return (FKeyMappingRow *)pFVar2;
        }
        uVar1 = pFVar4[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FKeyMappingRow *)0x0;
}

// Find @ 14a6dcda0

TObjectPtr<UEnhancedPlayerMappableKeyProfile> * __thiscall
TMapBase<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
::Find(TMapBase<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TObjectPtr<UEnhancedPlayerMappableKeyProfile> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TObjectPtr<UEnhancedPlayerMappableKeyProfile> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TObjectPtr<UEnhancedPlayerMappableKeyProfile> *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TObjectPtr<UEnhancedPlayerMappableKeyProfile> *)0x0;
}

// Find @ 14a6dce30

FInputMappingContextMappingData * __thiscall
TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
::Find(TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
       *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      iVar1 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x28);
      lVar5 = (longlong)iVar4 * 0x28;
      iVar4 = (param_1->Data).ArrayNum;
      if (iVar1 == iVar4) {
        if (iVar1 < 2) goto LAB_14a6dcf01;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar2 + lVar5),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = iVar1 + iVar4 == 1;
      }
      if (bVar8) {
LAB_14a6dcf01:
        lVar5 = *(longlong *)&(this->Pairs).Elements + lVar5;
        if (lVar5 != 0) {
          return (FInputMappingContextMappingData *)(lVar5 + 0x10);
        }
        return (FInputMappingContextMappingData *)0x0;
      }
      iVar4 = *(int *)(lVar5 + 0x20 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FInputMappingContextMappingData *)0x0;
}

// Remove @ 14a6f2490

int __thiscall
TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
::Remove(TMapBase<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>_>
         *this,TObjectPtr<UInputMappingContext_const_> param_1)

{
  TObjectPtr<UInputMappingContext_const_>_u_0 TVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UInputMappingContext_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  local_res8 = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar1.DebugPtr != (UInputMappingContext *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    uVar3 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar2 = TSet<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData,0>,FDefaultSetAllocator>
            ::RemoveImpl<TObjectPtr<UInputMappingContext_const_>_>
                      (&this->Pairs,uVar3 >> 0x10 ^ uVar3,
                       (TObjectPtr<UInputMappingContext_const_> *)&local_res8.ObjectPtr);
    return iVar2;
  }
  return 0;
}

