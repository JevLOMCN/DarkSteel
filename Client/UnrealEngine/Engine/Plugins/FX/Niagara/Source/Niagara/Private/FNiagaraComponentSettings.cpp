// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// GetTypeHash @ 149049fb0

uint __cdecl FNiagaraComponentSettings::GetTypeHash(FNiagaraEmitterNameSettingsRef *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = param_1->EmitterName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  FVar1 = param_1->SystemName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar5 = (FVar1.Number - uVar2) + uVar3 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar4 = (uVar2 - uVar5) - uVar3 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar2 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar3 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf;
}

// IsEmitterAllowedToRun @ 149059840

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __cdecl
FNiagaraComponentSettings::IsEmitterAllowedToRun
          (FVersionedNiagaraEmitterData *param_1,UNiagaraEmitter *param_2)

{
  FName FVar1;
  UNiagaraScript *pUVar2;
  UNiagaraEmitter *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FString *pFVar11;
  FName *pFVar12;
  longlong lVar13;
  FNiagaraTypeDefinition *pFVar14;
  FName FVar15;
  UNiagaraSystem *this;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar16;
  FVersionedNiagaraEmitter *pFVar17;
  int iVar18;
  wchar_t *pwVar19;
  ForElementType<FSetElementId> FVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  FName local_res18 [2];
  FNiagaraEmitterNameSettingsRef local_58;
  FVersionedNiagaraEmitter local_48;
  
  if (bUseEmitterDenyList) {
    pUVar9 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar9);
    if (pUVar10 == (UObject *)0x0) {
      FVar15.ComparisonIndex.Value = 0;
      FVar15.Number = 0;
    }
    else {
      FVar15.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
      FVar15.Number = *(uint *)&pUVar10->field_0x1c;
    }
    local_58.SystemName = FVar15;
    pFVar11 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)param_2);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar12 = ::FName::FName(local_res18,pwVar19);
    FVar1 = *pFVar12;
    local_58.EmitterName = FVar1;
    uVar7 = GetTypeHash(&local_58);
    if (EmitterDenyList.Elements._8_4_ != EmitterDenyList.Elements._52_4_) {
      FVar20 = (ForElementType<FSetElementId>)0x154c7d218;
      if (EmitterDenyList.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar20 = EmitterDenyList.Hash.SecondaryData;
      }
      iVar18 = *(int *)((longlong)FVar20 + (ulonglong)(EmitterDenyList.HashSize - 1U & uVar7) * 4);
      while (iVar18 != -1) {
        lVar13 = (longlong)iVar18;
        if ((*(FName *)(EmitterDenyList.Elements._0_8_ + lVar13 * 0x18) == FVar15) &&
           (*(FName *)(EmitterDenyList.Elements._0_8_ + 8 + lVar13 * 0x18) == FVar1)) {
          if (iVar18 != -1) {
            return false;
          }
          break;
        }
        iVar18 = *(int *)(EmitterDenyList.Elements._0_8_ + 0x10 + lVar13 * 0x18);
      }
    }
    if (param_1->SimTarget == GPUComputeSim) {
      uVar7 = GetTypeHash(&local_58);
      if (GpuEmitterDenyList.Elements._8_4_ != GpuEmitterDenyList.Elements._52_4_) {
        FVar20 = (ForElementType<FSetElementId>)0x154c7d268;
        if (GpuEmitterDenyList.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar20 = GpuEmitterDenyList.Hash.SecondaryData;
        }
        iVar18 = *(int *)((longlong)FVar20 +
                         (ulonglong)(GpuEmitterDenyList.HashSize - 1U & uVar7) * 4);
        while (iVar18 != -1) {
          lVar13 = (longlong)iVar18;
          if ((*(FName *)(GpuEmitterDenyList.Elements._0_8_ + lVar13 * 0x18) == FVar15) &&
             (*(FName *)(GpuEmitterDenyList.Elements._0_8_ + 8 + lVar13 * 0x18) == FVar1)) {
            if (iVar18 != -1) {
              return false;
            }
            break;
          }
          iVar18 = *(int *)(GpuEmitterDenyList.Elements._0_8_ + 0x10 + lVar13 * 0x18);
        }
      }
      if ((0 < (int)(GpuDataInterfaceDenyList.Elements._8_4_ -
                    GpuDataInterfaceDenyList.Elements._52_4_)) &&
         (pUVar2 = (param_1->GPUComputeScript).field0_0x0.DebugPtr, pUVar2 != (UNiagaraScript *)0x0)
         ) {
        iVar18 = (pUVar2->ResolvedDataInterfaces).ArrayNum;
        pFVar22 = (pUVar2->ResolvedDataInterfaces).AllocatorInstance.Data;
        if ((iVar18 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar21 = pFVar22 + (longlong)iVar18 * 0x50;
        for (; pFVar22 != pFVar21; pFVar22 = pFVar22 + 0x50) {
          pFVar14 = FNiagaraTypeDefinitionHandle::Resolve
                              ((FNiagaraTypeDefinitionHandle *)(pFVar22 + 0x28));
          if ((pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            lVar13 = 0;
          }
          else {
            FVar15 = UE::CoreUObject::Private::GetFName((UObject *)(local_res18 + 1));
            lVar13 = *(longlong *)FVar15;
          }
          uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar13);
          if (GpuDataInterfaceDenyList.Elements._8_4_ != GpuDataInterfaceDenyList.Elements._52_4_) {
            FVar20 = (ForElementType<FSetElementId>)0x154c7d2b8;
            if (GpuDataInterfaceDenyList.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar20 = GpuDataInterfaceDenyList.Hash.SecondaryData;
            }
            for (iVar18 = *(int *)((longlong)FVar20 +
                                  (ulonglong)
                                  (GpuDataInterfaceDenyList.HashSize - 1U &
                                  (int)((ulonglong)lVar13 >> 0x20) + uVar7) * 4); iVar18 != -1;
                iVar18 = *(int *)(GpuDataInterfaceDenyList.Elements._0_8_ + 8 +
                                 (longlong)iVar18 * 0x10)) {
              if (*(longlong *)(GpuDataInterfaceDenyList.Elements._0_8_ + (longlong)iVar18 * 0x10)
                  == lVar13) {
                return false;
              }
            }
          }
        }
      }
    }
  }
  if (bAllowGpuEmitters == false) {
    bVar5 = param_1->SimTarget != GPUComputeSim;
  }
  else {
    if ((bAllowGpuComputeFloat16 == false) && (param_1->SimTarget == GPUComputeSim)) {
      pUVar9 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      this = (UNiagaraSystem *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar9);
      if (this != (UNiagaraSystem *)0x0) {
        pTVar16 = UNiagaraSystem::GetEmitterHandles(this);
        uVar7 = 0;
        iVar18 = pTVar16->ArrayNum;
        if (0 < iVar18) {
          do {
            uVar8 = 0;
            if ((int)uVar7 < iVar18) {
              uVar8 = ~uVar7 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar17 = FNiagaraEmitterHandle::GetInstance
                                ((FNiagaraEmitterHandle *)
                                 ((pTVar16->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x48),
                                 &local_48);
            pUVar3 = (pFVar17->Emitter).field0_0x0.DebugPtr;
            if (pUVar3 == (UNiagaraEmitter *)0x0) {
              bVar5 = param_2 == (UNiagaraEmitter *)0x0;
            }
            else {
              bVar5 = pUVar3 == param_2;
            }
            if (((bVar5) && (-1 < (int)uVar7)) &&
               ((int)uVar7 < (this->EmitterCompiledData).ArrayNum)) {
              if (((int)uVar7 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              return *(int *)(*(longlong *)
                               ((this->EmitterCompiledData).AllocatorInstance.Data +
                               (longlong)(int)uVar7 * 0x10) + 0x124) == 0;
            }
            iVar18 = pTVar16->ArrayNum;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < iVar18);
        }
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

// IsSystemAllowedToRun @ 14905aca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FNiagaraComponentSettings::IsSystemAllowedToRun(UNiagaraSystem *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  
  if ((param_1 == (UNiagaraSystem *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("System != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentSettings.cpp"
                         ,299,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (bUseSystemDenyList == false) {
    return true;
  }
  lVar1 = param_1->_padding_;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (SystemDenyList.Elements._8_4_ != SystemDenyList.Elements._52_4_) {
    FVar7 = (ForElementType<FSetElementId>)0x154c7d1c8;
    if (SystemDenyList.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar7 = SystemDenyList.Hash.SecondaryData;
    }
    for (iVar6 = *(int *)((longlong)FVar7 +
                         (ulonglong)
                         (SystemDenyList.HashSize - 1U & (int)((ulonglong)lVar1 >> 0x20) + uVar5) *
                         4); iVar6 != -1;
        iVar6 = *(int *)(SystemDenyList.Elements._0_8_ + 8 + (longlong)iVar6 * 0x10)) {
      if (*(longlong *)(SystemDenyList.Elements._0_8_ + (longlong)iVar6 * 0x10) == lVar1)
      goto LAB_14905ad4c;
    }
  }
  iVar6 = -1;
LAB_14905ad4c:
  return iVar6 == -1;
}

// ParseIntoSet @ 14905cd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FNiagaraComponentSettings::ParseIntoSet
          (FString *param_1,
          TSet<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,DefaultKeyFuncs<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,0>,FDefaultSetAllocator>
          *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FName *pFVar15;
  longlong lVar16;
  TSet<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,DefaultKeyFuncs<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,0>,FDefaultSetAllocator>
  *pTVar17;
  ulonglong uVar18;
  int iVar19;
  ForElementType<FSetElementId> FVar20;
  FName FVar21;
  int iVar22;
  TSparseSetElement<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef> *_Src;
  ForAnyElementType FVar23;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_170;
  FName local_160;
  FName FStack_158;
  uint local_150;
  FScriptContainerElement *local_148;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FSparseArrayAllocationInfo local_128;
  FName local_118;
  FName local_110;
  TStringView<wchar_t> local_108;
  TSet<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,DefaultKeyFuncs<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,0>,FDefaultSetAllocator>
  local_f8;
  TSet<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,DefaultKeyFuncs<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_170,L",",true);
  local_f8.Elements._0_8_ = *(undefined8 *)&param_2->Elements;
  local_f8.Elements._8_8_ = *(undefined8 *)&(param_2->Elements).field_0x8;
  uVar14 = (ulonglong)local_170.ArrayNum;
  uVar6 = *(undefined8 *)&(param_2->Elements).field_0x10;
  uVar7 = *(undefined8 *)&(param_2->Elements).field_0x18;
  local_f8.Elements._32_8_ = *(undefined8 *)&(param_2->Elements).field_0x20;
  local_f8.Elements._40_8_ = *(undefined8 *)&(param_2->Elements).field_0x28;
  local_f8._72_8_ = (ulonglong)(uint)local_f8._76_4_ << 0x20;
  local_f8.Hash.SecondaryData = (param_2->Hash).SecondaryData;
  uVar8 = *(ulonglong *)&param_2->HashSize;
  local_148 = local_170.AllocatorInstance.Data + uVar14 * 0x10;
  local_f8.Elements._48_8_ = *(undefined8 *)&(param_2->Elements).field_0x30;
  uVar9._0_1_ = (param_2->Hash).InlineData[0];
  uVar9._1_1_ = (param_2->Hash).InlineData[1];
  uVar9._2_1_ = (param_2->Hash).InlineData[2];
  uVar9._3_1_ = (param_2->Hash).InlineData[3];
  uVar9._4_4_ = (param_2->Hash)._padding_;
  local_150 = local_170.ArrayNum;
  *(undefined8 *)&param_2->Elements = 0;
  *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
  *(undefined8 *)&(param_2->Elements).field_0x10 = local_f8.Elements._16_8_;
  *(undefined8 *)&(param_2->Elements).field_0x18 = local_f8.Elements._24_8_;
  *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
  *(undefined8 *)&(param_2->Elements).field_0x28 = 0x8000000000;
  *(undefined8 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  (param_2->Hash).InlineData[0] = local_f8.Hash.InlineData[0];
  (param_2->Hash).InlineData[1] = local_f8.Hash.InlineData[1];
  (param_2->Hash).InlineData[2] = local_f8.Hash.InlineData[2];
  (param_2->Hash).InlineData[3] = local_f8.Hash.InlineData[3];
  (param_2->Hash)._padding_ = local_f8.Hash._padding_;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_2->HashSize = local_f8.HashSize;
  *(undefined4 *)&param_2->field_0x4c = local_f8._76_4_;
  uVar18 = uVar14;
  FVar23.Data = local_170.AllocatorInstance.Data;
  local_f8.Elements._16_8_ = uVar6;
  local_f8.Elements._24_8_ = uVar7;
  local_f8.Hash._0_8_ = uVar9;
  local_f8._72_8_ = uVar8;
  do {
    pFVar10 = local_148;
    if ((int)uVar14 != (int)uVar18) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (FVar23.Data == pFVar10) {
      pTVar17 = TSet<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,DefaultKeyFuncs<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,0>,FDefaultSetAllocator>
                ::Difference(&local_f8,&local_a8,param_2);
      iVar22 = *(int *)&(pTVar17->Elements).field_0x8;
      iVar11 = *(int *)&(pTVar17->Elements).field_0x34;
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      local_f8._72_8_ = local_f8._72_8_ & 0xffffffff00000000;
      if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f8.Elements);
      DestructItems<FString,int>((FString *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
      if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      return 0 < iVar22 - iVar11;
    }
    pwVar2 = *(wchar_t **)FVar23.Data;
    local_160.ComparisonIndex.Value = 0;
    local_160.Number = 0;
    FStack_158.ComparisonIndex.Value = 0;
    FStack_158.Number = 0;
    iVar22 = *(int *)(FVar23.Data + 8) + -1;
    if (*(int *)(FVar23.Data + 8) == 0) {
      iVar22 = 0;
    }
    local_108._12_4_ = uStack_12c;
    local_108.Size = iVar22;
    local_138 = pwVar2;
    iStack_130 = iVar22;
    local_108.DataPtr = pwVar2;
    iVar11 = UE::String::FindFirstChar(&local_108,L':',CaseSensitive);
    FVar21 = local_160;
    if ((iVar11 != -1) && (iVar1 = iVar11 + 1, iVar1 < iVar22)) {
      iVar12 = 0;
      if (iVar22 < 0) {
        iVar12 = iVar22;
      }
      iVar5 = iVar22 - iVar12;
      if (iVar11 < iVar22 - iVar12) {
        iVar5 = iVar11;
      }
      iVar19 = 0;
      if (0 < iVar5) {
        iVar19 = iVar5;
      }
      pFVar15 = ::FName::FName(&local_118,iVar19,pwVar2 + iVar12,FNAME_Add);
      FVar21 = *pFVar15;
      iVar12 = 0;
      if (iVar1 < 0) {
        iVar12 = iVar1;
      }
      iVar11 = (iVar11 - iVar12) + 1;
      if (iVar22 < iVar11) {
        iVar11 = iVar22;
      }
      iVar1 = iVar22 - iVar11;
      if (iVar12 + 0x7fffffff < iVar22 - iVar11) {
        iVar1 = iVar12 + 0x7fffffff;
      }
      iVar22 = 0;
      if (0 < iVar1) {
        iVar22 = iVar1;
      }
      local_160 = FVar21;
      pFVar15 = ::FName::FName(&local_110,iVar22,pwVar2 + iVar11,FNAME_Add);
      FStack_158 = *pFVar15;
    }
    _Src = (TSparseSetElement<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef> *)0x0;
    if ((FVar21 != (FName)0x0) && (FStack_158 != (FName)0x0)) {
      iVar22 = *(int *)&(param_2->Elements).field_0x34;
      if (iVar22 == 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,4,1,(ForAnyElementType *)param_2,
                            (int *)&(param_2->Elements).field_0x8,
                            (int *)&(param_2->Elements).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10,false);
      }
      else {
        iVar11 = *(int *)&(param_2->Elements).field_0x30;
        iVar22 = iVar22 + -1;
        lVar3 = *(longlong *)&param_2->Elements;
        iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar11 * 0x18);
        *(int *)&(param_2->Elements).field_0x30 = iVar1;
        *(int *)&(param_2->Elements).field_0x34 = iVar22;
        if (iVar22 != 0) {
          *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x18) = 0xffffffff;
        }
      }
      TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)param_2,&local_128,iVar11);
      iVar22 = local_128.Index;
      if (local_128.Pointer !=
          (TSparseSetElement<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef> *)0x0) {
        *(FName *)local_128.Pointer = local_160;
        *(FName *)((longlong)local_128.Pointer + 8) = FStack_158;
        *(undefined4 *)((longlong)local_128.Pointer + 0x10) = 0xffffffff;
        _Src = local_128.Pointer;
      }
      uVar13 = GetTypeHash((FNiagaraEmitterNameSettingsRef *)_Src);
      iVar11 = *(int *)&(param_2->Elements).field_0x8;
      iVar1 = *(int *)&(param_2->Elements).field_0x34;
      if ((iVar11 - iVar1 != 1) && (iVar11 != iVar1)) {
        FVar4 = (param_2->Hash).SecondaryData;
        FVar20 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar4;
        }
        iVar11 = *(int *)((longlong)FVar20 + (ulonglong)(param_2->HashSize - 1U & uVar13) * 4);
        if (iVar11 != -1) {
          lVar3 = *(longlong *)&param_2->Elements;
          do {
            lVar16 = (longlong)iVar11;
            if ((*(longlong *)(lVar3 + lVar16 * 0x18) == *(longlong *)_Src) &&
               (*(longlong *)(lVar3 + 8 + lVar16 * 0x18) == *(longlong *)&_Src->field_0x8)) {
              if (iVar11 != -1) {
                memmove((void *)(lVar3 + (longlong)iVar11 * 0x18),_Src,0x10);
                TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)param_2,iVar22,1);
                goto LAB_14905d10f;
              }
              break;
            }
            iVar11 = *(int *)(lVar3 + 0x10 + lVar16 * 0x18);
          } while (iVar11 != -1);
        }
      }
      TSet<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,DefaultKeyFuncs<FNiagaraComponentSettings::FNiagaraEmitterNameSettingsRef,0>,FDefaultSetAllocator>
      ::RehashOrLink(param_2,uVar13,_Src,iVar22);
    }
LAB_14905d10f:
    uVar14 = local_170._8_8_ & 0xffffffff;
    FVar23.Data = FVar23.Data + 0x10;
    uVar18 = (ulonglong)local_150;
  } while( true );
}

// ParseIntoSet @ 14905d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FNiagaraComponentSettings::ParseIntoSet
          (FString *param_1,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ForElementType<FSetElementId> FVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  FName *pFVar14;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  int iVar18;
  TSparseSetElement<FName> *pTVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  FScriptContainerElement *local_118;
  FSparseArrayAllocationInfo local_110;
  FName local_100;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ForElementType<FSetElementId> FStack_c0;
  undefined8 uStack_b0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_130,L",",true);
  local_f8._0_8_ = *(undefined8 *)&param_2->Elements;
  local_f8._8_8_ = *(undefined8 *)&(param_2->Elements).field_0x8;
  uVar13 = (ulonglong)local_130.ArrayNum;
  uVar4 = *(undefined8 *)&(param_2->Elements).field_0x10;
  uVar6 = *(undefined8 *)&(param_2->Elements).field_0x18;
  local_d8 = *(void **)&(param_2->Elements).field_0x20;
  uStack_d0 = *(longlong *)&(param_2->Elements).field_0x28;
  uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
  FStack_c0.SecondaryData = (param_2->Hash).SecondaryData;
  uVar7 = *(ulonglong *)&param_2->HashSize;
  local_118 = local_130.AllocatorInstance.Data + uVar13 * 0x10;
  local_c8 = *(undefined8 *)&(param_2->Elements).field_0x30;
  uVar8._0_1_ = (param_2->Hash).InlineData[0];
  uVar8._1_1_ = (param_2->Hash).InlineData[1];
  uVar8._2_1_ = (param_2->Hash).InlineData[2];
  uVar8._3_1_ = (param_2->Hash).InlineData[3];
  uVar8._4_4_ = (param_2->Hash)._padding_;
  local_120 = local_130.ArrayNum;
  *(undefined8 *)&param_2->Elements = 0;
  *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
  *(undefined8 *)&(param_2->Elements).field_0x10 = local_f8._16_8_;
  *(undefined8 *)&(param_2->Elements).field_0x18 = local_f8._24_8_;
  *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
  *(undefined8 *)&(param_2->Elements).field_0x28 = 0x8000000000;
  *(undefined8 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  (param_2->Hash).InlineData[0] = FStack_c0.InlineData[0];
  (param_2->Hash).InlineData[1] = FStack_c0.InlineData[1];
  (param_2->Hash).InlineData[2] = FStack_c0.InlineData[2];
  (param_2->Hash).InlineData[3] = FStack_c0.InlineData[3];
  (param_2->Hash)._padding_ = FStack_c0._padding_;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(ulonglong *)&param_2->HashSize = uStack_b0;
  uVar17 = uVar13;
  FVar20.Data = local_130.AllocatorInstance.Data;
  local_f8._16_8_ = uVar4;
  local_f8._24_8_ = uVar6;
  FStack_c0._0_8_ = uVar8;
  uStack_b0 = uVar7;
  do {
    pFVar9 = local_118;
    pTVar19 = (TSparseSetElement<FName> *)0x0;
    puVar1 = &(param_2->Elements).field_0x8;
    if ((int)uVar13 != (int)uVar17) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (FVar20.Data == pFVar9) {
      pTVar15 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
                          ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_f8,
                           &local_a8,param_2);
      iVar18 = *(int *)&(pTVar15->Elements).field_0x8;
      iVar11 = *(int *)&(pTVar15->Elements).field_0x34;
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      if (FStack_c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_c0.SecondaryData);
      }
      bVar21 = local_f8._12_4_ != 0;
      local_f8._8_8_ = (ulonglong)(uint)local_f8._12_4_ << 0x20;
      if (bVar21) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
      }
      uVar12 = uStack_d0._4_4_;
      uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
      local_c8 = 0xffffffff;
      if (0x80 < uVar12) {
        uStack_d0 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
      DestructItems<FString,int>((FString *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
      if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.AllocatorInstance.Data);
      }
      return 0 < iVar18 - iVar11;
    }
    iVar18 = *(int *)&(param_2->Elements).field_0x34;
    if (iVar18 == 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,4,1,(ForAnyElementType *)param_2,(int *)puVar1,
                          (int *)&(param_2->Elements).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10,false);
    }
    else {
      iVar11 = *(int *)&(param_2->Elements).field_0x30;
      lVar3 = *(longlong *)&param_2->Elements;
      iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar11 * 0x10);
      iVar18 = iVar18 + -1;
      *(int *)&(param_2->Elements).field_0x30 = iVar2;
      *(int *)&(param_2->Elements).field_0x34 = iVar18;
      if (iVar18 != 0) {
        *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)param_2,&local_110,iVar11);
    pvVar10 = local_110.Pointer;
    if (local_110.Pointer != (TSparseSetElement<FName> *)0x0) {
      iVar18 = *(int *)(FVar20.Data + 8) + -1;
      if (*(int *)(FVar20.Data + 8) == 0) {
        iVar18 = 0;
      }
      pFVar14 = ::FName::FName(&local_100,iVar18,*(wchar_t **)FVar20.Data,FNAME_Add);
      *(FName *)pvVar10 = *pFVar14;
      *(undefined4 *)((longlong)pvVar10 + 8) = 0xffffffff;
      pTVar19 = pvVar10;
    }
    iVar2 = local_110.Index;
    uVar4 = *(undefined8 *)pTVar19;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
    uVar12 = uVar12 + (int)((ulonglong)uVar4 >> 0x20);
    iVar18 = *(int *)puVar1;
    iVar11 = *(int *)&(param_2->Elements).field_0x34;
    if ((iVar18 - iVar11 != 1) && (iVar18 != iVar11)) {
      FVar5 = (param_2->Hash).SecondaryData;
      FVar16 = (ForElementType<FSetElementId>)&param_2->Hash;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = FVar5;
      }
      iVar18 = *(int *)((longlong)FVar16 + (ulonglong)(param_2->HashSize - 1U & uVar12) * 4);
      if (iVar18 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&param_2->Elements + (longlong)iVar18 * 0x10) ==
              *(longlong *)pTVar19) {
            if (iVar18 != -1) {
              *(longlong *)(*(longlong *)&param_2->Elements + (longlong)iVar18 * 0x10) =
                   *(longlong *)pTVar19;
              TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)param_2,iVar2,1);
              goto LAB_14905d477;
            }
            break;
          }
          iVar18 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar18 * 0x10);
        } while (iVar18 != -1);
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::RehashOrLink
              (param_2,uVar12,pTVar19,iVar2);
LAB_14905d477:
    uVar13 = local_130._8_8_ & 0xffffffff;
    FVar20.Data = FVar20.Data + 0x10;
    uVar17 = (ulonglong)local_120;
  } while( true );
}

// RequestUpdateSettings @ 149063c60

void __cdecl FNiagaraComponentSettings::RequestUpdateSettings(IConsoleVariable *param_1)

{
  bNeedsSettingsUpdate = true;
  return;
}

// UpdateEmitterDenyList @ 14906e8d0

void __cdecl FNiagaraComponentSettings::UpdateEmitterDenyList(IConsoleVariable *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = ParseIntoSet(&EmitterDenyListString,&EmitterDenyList);
  bVar2 = ParseIntoSet(&GpuEmitterDenyListString,&GpuEmitterDenyList);
  bVar3 = ParseIntoSet(&GpuDataInterfaceDenyListString,&GpuDataInterfaceDenyList);
  if ((((int)(EmitterDenyList.Elements._8_4_ - EmitterDenyList.Elements._52_4_) < 1) &&
      ((int)(GpuEmitterDenyList.Elements._8_4_ - GpuEmitterDenyList.Elements._52_4_) < 1)) &&
     ((int)(GpuDataInterfaceDenyList.Elements._8_4_ - GpuDataInterfaceDenyList.Elements._52_4_) < 1)
     ) {
    bUseEmitterDenyList = false;
  }
  else {
    bUseEmitterDenyList = true;
  }
  if (bVar3 || (bVar2 || bVar1)) {
    UpdateScalabilityForSystems();
  }
  return;
}

// UpdateScalabilityForSystems @ 14906ec10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FNiagaraComponentSettings::UpdateScalabilityForSystems(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UNiagaraSystem> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraSystem>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(UNiagaraSystem **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) !=
        (UNiagaraSystem *)0x0) {
      UNiagaraSystem::UpdateScalability
                (*(UNiagaraSystem **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8));
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// UpdateSettings @ 14906f1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FNiagaraComponentSettings::UpdateSettings(void)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  FString *pFVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong *puVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  undefined1 auStack_148 [32];
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  undefined1 local_108 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_100;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  uint local_c0;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_148;
  if (!bNeedsSettingsUpdate) {
    return;
  }
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
    return;
  }
  bNeedsSettingsUpdate = false;
  if (((GNiagaraAllowGPUParticles == 0) || (GNiagaraAllowComputeShaders == 0)) ||
     (!GRHIGlobals.SupportsDrawIndirect)) {
    bVar3 = false;
  }
  else {
    pFVar12 = (FScriptContainerElement *)0x0;
    bVar3 = true;
    iVar9 = 0;
    iVar10 = GpuRHIDenyListString.Data.ArrayNum + -1;
    if (GpuRHIDenyListString.Data.ArrayNum == 0) {
      iVar10 = iVar9;
    }
    if (0 < iVar10) {
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 0;
      ::FString::ParseIntoArray(&GpuRHIDenyListString,&local_e0,L",",true);
      pwVar6 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
      ::FString::FString(&local_b0,pwVar6);
      pFVar18 = local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 0x10;
      for (FVar13.Data = local_e0.AllocatorInstance.Data; pFVar16 = pFVar12, FVar13.Data != pFVar18;
          FVar13.Data = FVar13.Data + 0x10) {
        if (*(int *)(FVar13.Data + 8) == 0) {
          pwVar6 = L"";
          iVar10 = iVar9;
        }
        else {
          pwVar6 = *(wchar_t **)FVar13.Data;
          iVar10 = *(int *)(FVar13.Data + 8) + -1;
        }
        bVar3 = ::FString::MatchesWildcard(&local_b0,pwVar6,iVar10,IgnoreCase);
        pFVar16 = FVar13.Data;
        if (bVar3) break;
      }
      bVar3 = pFVar16 == (FScriptContainerElement *)0x0;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      if (!bVar3) goto LAB_14906f6d9;
    }
    iVar10 = GpuRHIAdapterDenyListString.Data.ArrayNum + -1;
    if (GpuRHIAdapterDenyListString.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    if (0 < iVar10) {
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      ::FString::ParseIntoArray(&GpuRHIAdapterDenyListString,&local_d0,L",",true);
      pFVar18 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x10;
      for (FVar13.Data = local_d0.AllocatorInstance.Data; pFVar16 = pFVar12, FVar13.Data != pFVar18;
          FVar13.Data = FVar13.Data + 0x10) {
        if (*(int *)(FVar13.Data + 8) == 0) {
          pwVar6 = L"";
          iVar10 = iVar9;
        }
        else {
          pwVar6 = *(wchar_t **)FVar13.Data;
          iVar10 = *(int *)(FVar13.Data + 8) + -1;
        }
        bVar4 = ::FString::MatchesWildcard
                          (&GRHIGlobals.GpuInfo.AdapterName,pwVar6,iVar10,IgnoreCase);
        pFVar16 = FVar13.Data;
        if (bVar4) break;
      }
      bVar4 = false;
      if (pFVar16 == (FScriptContainerElement *)0x0) {
        bVar4 = bVar3;
      }
      bVar3 = bVar4;
      DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      if (bVar3 == false) goto LAB_14906f6d9;
    }
    iVar10 = GpuDenyListString.Data.ArrayNum + -1;
    if (GpuDenyListString.Data.ArrayNum == 0) {
      iVar10 = iVar9;
    }
    if (0 < iVar10) {
      local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.ArrayNum = 0;
      local_f0.ArrayMax = 0;
      ::FString::ParseIntoArray(&GpuDenyListString,&local_f0,L"+",true);
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      FWindowsPlatformMisc::GetOSVersions(&local_78,&local_68);
      pFVar7 = FWindowsPlatformMisc::GetCPUBrand(&local_a0);
      ::FString::operator=(&local_58,pFVar7);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      pFVar7 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_90);
      ::FString::operator=(&local_48,pFVar7);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      uVar8 = (ulonglong)local_f0.ArrayNum;
      pFVar18 = local_f0.AllocatorInstance.Data + uVar8 * 0x10;
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.ArrayNum = 0;
      local_100.ArrayMax = 0;
      local_c0 = local_f0.ArrayNum;
      uVar11 = uVar8;
      FVar13.Data = local_f0.AllocatorInstance.Data;
      local_b8 = pFVar18;
      while( true ) {
        pFVar16 = (FScriptContainerElement *)0x0;
        uVar5 = (uint)pFVar12;
        if ((int)uVar8 != (int)uVar11) {
          local_108[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_108);
          uVar5 = local_100.ArrayNum;
        }
        if (FVar13.Data == pFVar18) break;
        ::FString::ParseIntoArray((FString *)FVar13.Data,&local_100,L",",false);
        pFVar12 = (FScriptContainerElement *)(ulonglong)(uint)local_100.ArrayNum;
        if (local_100.ArrayNum == 4) {
          pFVar12 = (FScriptContainerElement *)&DAT_00000004;
          pFVar18 = pFVar16;
          pFVar21 = pFVar16;
          do {
            uVar17 = (uint)pFVar18;
            uVar5 = 0;
            if ((int)uVar17 < (int)pFVar12) {
              uVar5 = ~uVar17 >> 0x1f;
            }
            if (uVar5 == 0) {
              local_120 = (FScriptContainerElement *)(longlong)(int)pFVar12;
              local_128 = (FScriptContainerElement *)(longlong)(int)uVar17;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar12 = (FScriptContainerElement *)(ulonglong)(uint)local_100.ArrayNum;
            }
            if (1 < *(int *)(pFVar16 + 8 + local_100.AllocatorInstance.Data)) {
              uVar5 = 0;
              if ((int)uVar17 < (int)pFVar12) {
                uVar5 = ~uVar17 >> 0x1f;
              }
              if (uVar5 == 0) {
                local_120 = (FScriptContainerElement *)(longlong)(int)pFVar12;
                local_128 = pFVar21;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              iVar10 = *(int *)(local_100.AllocatorInstance.Data + 8 + (longlong)pFVar16) + -1;
              if (*(int *)(local_100.AllocatorInstance.Data + 8 + (longlong)pFVar16) == 0) {
                iVar10 = 0;
                pwVar6 = L"";
              }
              else {
                pwVar6 = *(wchar_t **)(local_100.AllocatorInstance.Data + (longlong)pFVar16);
              }
              bVar4 = ::FString::MatchesWildcard
                                ((FString *)(pFVar16 + (longlong)&local_78.Data),pwVar6,iVar10,
                                 IgnoreCase);
              pFVar12 = (FScriptContainerElement *)(ulonglong)(uint)local_100.ArrayNum;
              pFVar18 = local_b8;
              if (!bVar4) break;
            }
            uVar5 = (uint)pFVar12;
            pFVar18 = (FScriptContainerElement *)(ulonglong)(uVar17 + 1);
            pFVar21 = pFVar21 + 1;
            pFVar16 = pFVar16 + 0x10;
            if (3 < uVar17 + 1) {
              bVar3 = false;
              goto LAB_14906f649;
            }
          } while( true );
        }
        uVar8 = local_f0._8_8_ & 0xffffffff;
        FVar13.Data = FVar13.Data + 0x10;
        uVar11 = (ulonglong)local_c0;
      }
LAB_14906f649:
      DestructItems<FString,int>((FString *)local_100.AllocatorInstance.Data,uVar5);
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      puVar19 = local_38;
      lVar14 = 4;
      do {
        puVar1 = puVar19 + -2;
        puVar19 = puVar19 + -2;
        lVar14 = lVar14 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar14 != 0);
      DestructItems<FString,int>((FString *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
    }
  }
LAB_14906f6d9:
  bVar4 = false;
  if (bAllowGpuEmitters != bVar3) {
    bVar4 = true;
    bAllowGpuEmitters = bVar3;
    if (bVar3 == false) {
      if (4 < (byte)LogNiagara._0_1_) {
        pwVar6 = L"";
        pwVar20 = L"";
        if (GpuDenyListString.Data.ArrayNum != 0) {
          pwVar6 = (wchar_t *)GpuDenyListString.Data.AllocatorInstance.Data;
        }
        pwVar15 = L"";
        if (GpuRHIAdapterDenyListString.Data.ArrayNum != 0) {
          pwVar20 = (wchar_t *)GpuRHIAdapterDenyListString.Data.AllocatorInstance.Data;
        }
        if (GpuRHIDenyListString.Data.ArrayNum != 0) {
          pwVar15 = (wchar_t *)GpuRHIDenyListString.Data.AllocatorInstance.Data;
        }
        (**(code **)(GDynamicRHI->_padding_ + 0x20))(GDynamicRHI);
        local_128 = (FScriptContainerElement *)pwVar15;
        local_120 = (FScriptContainerElement *)pwVar20;
        local_118 = (FScriptContainerElement *)pwVar6;
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
    }
    else if (4 < (byte)LogNiagara._0_1_) {
      (**(code **)(GDynamicRHI->_padding_ + 0x20))(GDynamicRHI);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  bVar22 = (GPixelFormats[0x15].Capabilities & (TypedUAVStore|TypedUAVLoad)) ==
           (TypedUAVStore|TypedUAVLoad);
  bVar3 = GGpuEmitterCheckFloat16Support == false || bVar22;
  if (bAllowGpuComputeFloat16 == bVar3) {
    if (!bVar4) {
      return;
    }
  }
  else {
    bAllowGpuComputeFloat16 = bVar3;
    if ((GGpuEmitterCheckFloat16Support != false && !bVar22) && (4 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  UpdateScalabilityForSystems();
  return;
}

// UpdateSystemDenyList @ 14906fa90

void __cdecl FNiagaraComponentSettings::UpdateSystemDenyList(IConsoleVariable *param_1)

{
  bool bVar1;
  
  bVar1 = ParseIntoSet(&SystemDenyListString,&SystemDenyList);
  bUseSystemDenyList = 0 < (int)(SystemDenyList.Elements._8_4_ - SystemDenyList.Elements._52_4_);
  if (bVar1) {
    UpdateScalabilityForSystems();
    return;
  }
  return;
}

