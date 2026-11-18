// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// operator() @ 149beeca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FPCGMatchAndSetAttributesElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
          *param_1,FPCGMatchAndSetAttributesExecutionState *param_2,
          FPCGMatchAndSetAttributesIterationState *param_3,uint param_4)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if (((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                       ,0x48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar5 = ~param_4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FVar1 = (param_1->PerIterationStateResultArray).AllocatorInstance.Data[(int)param_4];
  if (FVar1 == (FScriptContainerElement)0x2) {
    return true;
  }
  if (FVar1 != (FScriptContainerElement)0x1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InitResult == EPCGTimeSliceInitResult::Success",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                       ,0x496,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = FPCGDataPartitionBase<FPCGMatchAndSetPartition,int>::SelectMultiple
                    ((FPCGDataPartitionBase<FPCGMatchAndSetPartition,int> *)param_3->Partition,
                     (FPCGContext *)param_1,param_3->InData,&param_3->CurrentIndex,0,
                     param_3->OutData);
  return bVar3;
}

// operator() @ 149bf0300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGMatchAndSetAttributesElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,UPCGParamData *param_1,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          FPCGMatchAndSetPartition **param_4)

{
  int iVar1;
  int iVar2;
  FPCGContext *pFVar3;
  UPCGMatchAndSetAttributesSettings *pUVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  EPCGTimeSliceInitResult EVar9;
  uint uVar10;
  FText *this_00;
  FString *pFVar11;
  FPCGMatchAndSetPartition *this_01;
  FPCGContext *pFVar12;
  FPCGMatchAndSetPartition *pFVar13;
  FPCGMatchAndSetPartition *pFVar14;
  uint uVar15;
  wchar_t *pwVar16;
  undefined1 auStack_178 [32];
  FScriptContainerElement *local_158;
  longlong local_150;
  TPairInitializer<UPCGData_const_*_&&,UPCGData_const_*_&&> local_148;
  undefined1 local_138 [8];
  UPCGData **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  FPCGMatchAndSetPartition **local_100;
  UPCGData ***local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  FString local_c8;
  FString local_b8;
  FText local_a8;
  TSet<TTuple<UPCGData_const_*,UPCGData_const_*>,TDefaultMapHashableKeyFuncs<UPCGData_const_*,UPCGData_const_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar14 = (FPCGMatchAndSetPartition *)0x0;
  local_148.Key._0_4_ = 0;
  local_100 = param_4;
  if (param_2->ArrayNum == 0) {
    return NoOperation;
  }
  local_148.Value = (UPCGData **)param_1;
  if (param_1 == (UPCGParamData *)0x0) {
    if (*(char *)(*(longlong *)this + 0x3a0) == '\0') {
      return NoOperation;
    }
    if ((byte)LogPCG._0_1_ < 3) {
      return NoOperation;
    }
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_a8,L"PCGMatchAndSetAttributes",L"NoMatchData",
                         L"Must have exactly one Attribute Set to match against");
    pFVar11 = FText::ToString(this_00);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    if (*(FPCGContext **)((longlong)this + 8) != (FPCGContext *)0x0) {
      pFVar11 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 8),&local_b8);
      if ((pFVar11->Data).ArrayNum == 0) {
        pFVar14 = (FPCGMatchAndSetPartition *)&DAT_00000001;
      }
      else {
        pFVar14 = (FPCGMatchAndSetPartition *)&DAT_00000001;
      }
    }
    if (*(FPCGContext **)((longlong)this + 8) != (FPCGContext *)0x0) {
      pFVar14 = (FPCGMatchAndSetPartition *)(ulonglong)((uint)pFVar14 | 2);
      FPCGContext::GetExecutionSourceName(*(FPCGContext **)((longlong)this + 8),&local_c8);
    }
    local_158 = (FScriptContainerElement *)pwVar16;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((((ulonglong)pFVar14 & 2) != 0) &&
       (pFVar14 = (FPCGMatchAndSetPartition *)(ulonglong)((uint)pFVar14 & 0xfffffffd),
       local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pFVar14 & 1) != 0) &&
       (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.TextData.Reference == (ITextData *)0x0) {
      return NoOperation;
    }
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    return NoOperation;
  }
  this_01 = ::operator_new(0x140);
  if (this_01 == (FPCGMatchAndSetPartition *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Partition",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                       ,0x3cd,L"");
    this_01 = pFVar14;
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
  }
  else {
    pFVar3 = *(FPCGContext **)((longlong)this + 8);
    pFVar12 = pFVar3;
    pFVar13 = pFVar14;
    if ((pFVar3->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
      bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar3->ExecutionSource);
      pFVar12 = *(FPCGContext **)((longlong)this + 8);
      if (bVar8) {
        pFVar13 = (FPCGMatchAndSetPartition *)(pFVar3->ExecutionSource).InterfaceInstance;
      }
    }
    pUVar4 = *(UPCGMatchAndSetAttributesSettings **)this;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    *(undefined4 *)&this_01->_padding_ = 0;
    *(undefined4 *)((longlong)&this_01->_padding_ + 4) = 0x80;
    *(undefined4 *)&this_01->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this_01->_padding_ + 4) = 0;
    this_01->_padding_ = 0;
    this_01->Settings = pUVar4;
    this_01->ParamData = (UPCGParamData *)local_148.Value;
    this_01->Context = pFVar12;
    (this_01->AttributeSetPartition).ParamData = (UPCGParamData *)0x0;
    (this_01->AttributeSetPartition).Attribute = (FPCGMetadataAttributeBase *)0x0;
    (this_01->AttributeSetPartition).bIsValid = false;
    (this_01->AttributeSetPartition).bFindNearest = false;
    (this_01->AttributeSetPartition).MaxDistanceMode = NoMaxDistance;
    (this_01->AttributeSetPartition).ConstantThreshold.Ptr = (IPCGAttributeAccessor *)0x0;
    (this_01->AttributeSetPartition).ConstantKey.Ptr = (IPCGAttributeAccessorKeys *)0x0;
    (this_01->AttributeSetPartition).PartitionData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this_01->AttributeSetPartition).PartitionData.ArrayNum = 0;
    (this_01->AttributeSetPartition).PartitionData.ArrayMax = 0;
    this_01->ExecutionSource = (IPCGGraphExecutionSource *)pFVar13;
    (this_01->InputAttributeAccessor).Ptr = (IPCGAttributeAccessor *)0x0;
    (this_01->InputWeightAccessor).Ptr = (IPCGAttributeAccessor *)0x0;
    (this_01->InputAttributeKeys).Ptr = (IPCGAttributeAccessorKeys *)0x0;
    (this_01->AttributesToSet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttributesToSet).ArrayNum = 0;
    (this_01->AttributesToSet).ArrayMax = 0;
    *(undefined8 *)&this_01->DataToMaxDistanceMap = 0;
    *(undefined8 *)&(this_01->DataToMaxDistanceMap).field_0x8 = 0;
    *(undefined8 *)&(this_01->DataToMaxDistanceMap).field_0x20 = 0;
    *(undefined4 *)&(this_01->DataToMaxDistanceMap).field_0x28 = 0;
    *(undefined4 *)&(this_01->DataToMaxDistanceMap).field_0x2c = 0x80;
    *(undefined4 *)&(this_01->DataToMaxDistanceMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_01->DataToMaxDistanceMap).field_0x34 = 0;
    *(undefined8 *)&(this_01->DataToMaxDistanceMap).field_0x40 = 0;
    *(undefined4 *)&(this_01->DataToMaxDistanceMap).field_0x48 = 0;
    (this_01->PartitionDataIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->PartitionDataIndices).ArrayNum = 0;
    (this_01->PartitionDataIndices).ArrayMax = 0;
    (this_01->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->Weights).ArrayNum = 0;
    (this_01->Weights).ArrayMax = 0;
  }
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  if (*(int *)(*(longlong *)this + 0x154) == 2) {
    if (((param_2->ArrayNum != 1) &&
        (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) != param_2->ArrayNum)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartitionInputs.Num() == 1 || MaxDistanceDataInputs.Num() == PartitionInputs.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                           ,0x3d3,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    plVar5 = *(longlong **)((longlong)this + 0x18);
    iVar1 = param_2->ArrayNum;
    iVar2 = (int)plVar5[1];
    if (iVar2 == 1) {
      pFVar13 = pFVar14;
      if (0 < iVar1) {
        do {
          puVar6 = *(undefined8 **)((longlong)this + 0x18);
          iVar1 = *(int *)(puVar6 + 1);
          if (iVar1 < 1) {
            local_158 = (FScriptContainerElement *)0x0;
            local_150 = (longlong)iVar1;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              EVar9 = (*pcVar7)();
              return EVar9;
            }
          }
          local_128 = *(undefined8 *)*puVar6;
          uVar15 = (uint)pFVar14;
          uVar10 = 0;
          if ((int)uVar15 < param_2->ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_158 = (FScriptContainerElement *)(longlong)(int)uVar15;
            local_150 = (longlong)param_2->ArrayNum;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              EVar9 = (*pcVar7)();
              return EVar9;
            }
          }
          local_130 = *(UPCGData ***)
                       ((longlong)&pFVar13->_padding_ + (longlong)(param_2->AllocatorInstance).Data)
          ;
          local_f8 = &local_130;
          local_f0 = &local_128;
          TSet<TTuple<UPCGData_const_*,UPCGData_const_*>,TDefaultMapHashableKeyFuncs<UPCGData_const_*,UPCGData_const_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UPCGData_const_*_&&,UPCGData_const_*_&&>_>
                    (&local_98,&local_148,(bool *)&local_f8);
          pFVar14 = (FPCGMatchAndSetPartition *)(ulonglong)(uVar15 + 1);
          pFVar13 = (FPCGMatchAndSetPartition *)&(pFVar13->AttributeSetPartition).bIsValid;
        } while ((int)(uVar15 + 1) < param_2->ArrayNum);
      }
      goto LAB_149bf094e;
    }
    if (param_3 == -1) {
      if (iVar1 == iVar2) {
        pFVar13 = pFVar14;
        if (0 < iVar1) {
          do {
            local_148.Value = *(UPCGData ***)((longlong)this + 0x18);
            uVar15 = (uint)pFVar14;
            iVar1 = (int)((UPCGParamData *)local_148.Value)->_padding_;
            uVar10 = 0;
            if ((int)uVar15 < iVar1) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_158 = (FScriptContainerElement *)(longlong)(int)uVar15;
              local_150 = (longlong)iVar1;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                EVar9 = (*pcVar7)();
                return EVar9;
              }
            }
            local_118 = *(undefined8 *)
                         ((longlong)&pFVar13->_padding_ + *(longlong *)local_148.Value);
            uVar10 = 0;
            if ((int)uVar15 < param_2->ArrayNum) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_158 = (FScriptContainerElement *)(longlong)(int)uVar15;
              local_150 = (longlong)param_2->ArrayNum;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                EVar9 = (*pcVar7)();
                return EVar9;
              }
            }
            local_120 = *(undefined8 *)
                         ((longlong)&pFVar13->_padding_ +
                         (longlong)(param_2->AllocatorInstance).Data);
            local_e8 = &local_120;
            local_e0 = &local_118;
            TSet<TTuple<UPCGData_const_*,UPCGData_const_*>,TDefaultMapHashableKeyFuncs<UPCGData_const_*,UPCGData_const_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UPCGData_const_*_&&,UPCGData_const_*_&&>_>
                      (&local_98,
                       (TPairInitializer<UPCGData_const_*_&&,UPCGData_const_*_&&> *)local_138,
                       (bool *)&local_e8);
            pFVar14 = (FPCGMatchAndSetPartition *)(ulonglong)(uVar15 + 1);
            pFVar13 = (FPCGMatchAndSetPartition *)&(pFVar13->AttributeSetPartition).bIsValid;
          } while ((int)(uVar15 + 1) < param_2->ArrayNum);
        }
        goto LAB_149bf094e;
      }
    }
    else if (((iVar1 == 1) && (-1 < param_3)) && (param_3 < iVar2)) {
      if ((param_3 < 0) &&
         (local_158 = (FScriptContainerElement *)(longlong)param_3, local_150 = (longlong)iVar2,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar9 = (*pcVar7)();
        return EVar9;
      }
      local_108 = *(undefined8 *)((longlong)param_3 * 0x78 + *plVar5);
      if (param_2->ArrayNum < 1) {
        local_158 = (FScriptContainerElement *)0x0;
        local_150 = (longlong)param_2->ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          EVar9 = (*pcVar7)();
          return EVar9;
        }
      }
      local_110 = *(undefined8 *)(param_2->AllocatorInstance).Data;
      local_d8 = &local_110;
      local_d0 = &local_108;
      TSet<TTuple<UPCGData_const_*,UPCGData_const_*>,TDefaultMapHashableKeyFuncs<UPCGData_const_*,UPCGData_const_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPCGData_const_*_&&,UPCGData_const_*_&&>_>
                (&local_98,
                 (TPairInitializer<UPCGData_const_*_&&,UPCGData_const_*_&&> *)(local_138 + 4),
                 (bool *)&local_d8);
      goto LAB_149bf094e;
    }
  }
  else {
LAB_149bf094e:
    bVar8 = FPCGMatchAndSetPartition::Initialize
                      (this_01,(TMap<UPCGData_const_*,UPCGData_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGData_const_*,UPCGData_const_*,0>_>
                                *)&local_98);
    if (bVar8) {
      EVar9 = Success;
      *local_100 = this_01;
      goto LAB_149bf0980;
    }
  }
  if (this_01 != (FPCGMatchAndSetPartition *)0x0) {
    FPCGMatchAndSetPartition::_scalar_deleting_destructor_(this_01,1);
  }
  EVar9 = AbortExecution;
LAB_149bf0980:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGData_const_*,UPCGData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGData_const_*,UPCGData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return EVar9;
}

// operator() @ 149bf6b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGMatchAndSetAttributesElement::PrepareDataInternal'::__l2::<lambda_2>::operator()
          (void *this,
          TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
          *param_1,FPCGMatchAndSetAttributesExecutionState *param_2)

{
  int iVar1;
  int iVar2;
  void *this_00;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar3;
  EPCGTimeSliceInitResult EVar4;
  FText *pFVar5;
  UPCGParamData *pUVar6;
  bool bVar7;
  FText local_48;
  FString local_38;
  FText local_28;
  
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  if (iVar1 == 0) {
    if ((*(char *)(*(longlong *)this + 0x3a0) != '\0') && (2 < (byte)LogPCG._0_1_)) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"PCGMatchAndSetAttributes",L"NoMatchData",
                          L"Must have exactly one Attribute Set to match against");
      FText::ToString(pFVar5);
      bVar7 = param_1 !=
              (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
               *)0x0;
      if (bVar7) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_38);
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,(FString *)&local_48);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar7) && (local_48.TextData.Reference != (ITextData *)0x0)) {
        FMemory::Free(local_48.TextData.Reference);
      }
      if ((bVar7) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
    }
    EVar4 = NoOperation;
  }
  else if ((iVar1 == 1) || (iVar1 == *(int *)(*(longlong *)((longlong)this + 0x10) + 8))) {
    if ((*(int *)(*(longlong *)this + 0x154) == 2) &&
       ((iVar2 = *(int *)(*(longlong *)((longlong)this + 0x18) + 8),
        iVar2 != *(int *)(*(longlong *)((longlong)this + 0x10) + 8) && (iVar2 != 1)))) {
      PCGLog::InputOutput::LogInvalidCardinalityError
                (PCGPinConstants::DefaultInputLabel,
                 PCGMatchAndSetAttributesConstants::MaxDistanceLabel,(FPCGContext *)param_1);
      EVar4 = AbortExecution;
    }
    else if (iVar1 == 1) {
      this_00 = *(void **)((longlong)this + 0x20);
      pTVar3 = *(TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
      pUVar6 = Cast<UPCGParamData_const_>
                         ((FPCGDataPtrWrapper *)**(undefined8 **)((longlong)this + 8));
      EVar4 = __l2::<lambda_1>::operator()(this_00,pUVar6,pTVar3,-1,&param_2->Partition);
      if ((EVar4 == AbortExecution) && (2 < (byte)LogPCG._0_1_)) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"PCGMatchAndSetAttributes",
                            L"CouldNotInitializeExecutionState",
                            L"Could not initialize per-execution timeslice state data");
        FText::ToString(pFVar5);
        bVar7 = param_1 !=
                (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                 *)0x0;
        if (bVar7) {
          FPCGContext::GetTaskName((FPCGContext *)param_1,&local_38);
          FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,(FString *)&local_28);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar7) && (local_28.TextData.Reference != (ITextData *)0x0)) {
          FMemory::Free(local_28.TextData.Reference);
        }
        if ((bVar7) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
    }
    else {
      EVar4 = Success;
    }
  }
  else {
    PCGLog::InputOutput::LogInvalidCardinalityError
              (PCGPinConstants::DefaultInputLabel,PCGMatchAndSetAttributesConstants::MatchDataLabel,
               (FPCGContext *)param_1);
    EVar4 = AbortExecution;
  }
  return EVar4;
}

// operator() @ 149bf8dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGMatchAndSetAttributesElement::PrepareDataInternal'::__l2::<lambda_3>::operator()
          (void *this,FPCGMatchAndSetAttributesIterationState *param_1,
          FPCGMatchAndSetAttributesExecutionState *param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  UPCGData *pUVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  EPCGTimeSliceInitResult EVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  UClass *pUVar13;
  UPCGBasePointData *this_00;
  UPCGParamData *pUVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  uint uVar18;
  FPCGDataPtrWrapper *pFVar19;
  UPCGSpatialData *pUVar20;
  FPCGTaggedData *pFVar21;
  uint uVar22;
  UPCGSpatialData *pUVar23;
  undefined1 auStackY_228 [32];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1d8;
  ulonglong local_1c8;
  FPCGMatchAndSetAttributesExecutionState *local_1c0;
  void *local_1b8;
  FPCGTaggedData *local_1b0;
  TSharedPtr<FCulture,1> local_1a8;
  FString local_198;
  FString local_188;
  FText local_178;
  FString local_168;
  FString local_158;
  FText local_148;
  FText local_138;
  FPCGInitializeFromDataParams local_128;
  FText local_e8;
  FTextFormat local_d8;
  FPCGTaggedData local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  plVar2 = *(longlong **)this;
  pUVar20 = (UPCGSpatialData *)0x0;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  uVar22 = ~param_3 >> 0x1f;
  local_1c8 = local_1c8 & 0xffffffff00000000;
  uVar11 = 0;
  if ((int)param_3 < (int)plVar2[1]) {
    uVar11 = uVar22;
  }
  local_1c0 = param_2;
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar8 = (*pcVar5)();
    return EVar8;
  }
  local_1c8 = (longlong)(int)param_3 * 0x78;
  pFVar21 = (FPCGTaggedData *)(*plVar2 + local_1c8);
  if ((((FPCGTaggedData *)pFVar3->Data <= pFVar21) &&
      (pFVar21 < (FPCGTaggedData *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar8 = (*pcVar5)();
    return EVar8;
  }
  iVar9 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar9 + 1;
  local_1b0 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)(pFVar3->Data + (longlong)iVar9 * 0x78),pFVar21);
  plVar2 = *(longlong **)this;
  uVar18 = 0;
  uVar11 = uVar18;
  if ((int)param_3 < (int)plVar2[1]) {
    uVar11 = uVar22;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar8 = (*pcVar5)();
    return EVar8;
  }
  uVar6 = local_1c8;
  pUVar4 = *(UPCGData **)(local_1c8 + *plVar2);
  param_1->InData = pUVar4;
  if ((pUVar4 == (UPCGData *)0x0) ||
     (lVar12 = (**(code **)(pUVar4->_padding_ + 800))(), lVar12 == 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      local_1a8.Object = (FCulture *)0x0;
      local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar15 = FText::AsNumber(&local_e8,param_3,(FNumberFormattingOptions *)0x0,&local_1a8);
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_138,L"PCGMatchAndSetAttributes",L"InvalidInputDataType",
                           L"Input {0}: Input data must be of type Point or Param");
      pFVar17 = FTextFormat::FTextFormat(&local_d8,pFVar16,Default);
      pFVar15 = FText::Format<FText>(&local_148,pFVar17,pFVar15);
      FText::ToString(pFVar15);
      if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar20 = (UPCGSpatialData *)&DAT_00000001;
        FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x18),&local_158);
      }
      if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar20 = (UPCGSpatialData *)(ulonglong)((uint)pUVar20 | 2);
        FPCGContext::GetExecutionSourceName(*(FPCGContext **)((longlong)this + 0x18),&local_168);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar20 & 2) != 0) &&
         (pUVar20 = (UPCGSpatialData *)(ulonglong)((uint)pUVar20 & 0xfffffffd),
         local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar20 & 1) != 0) &&
         (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
    }
    return NoOperation;
  }
  if (*(int *)(*(longlong *)((longlong)this + 8) + 8) == 1) {
    bVar7 = false;
    param_1->Partition = local_1c0->Partition;
  }
  else {
    local_1b8 = *(void **)((longlong)this + 0x20);
    local_1c0 = *(FPCGMatchAndSetAttributesExecutionState **)this;
    uVar11 = uVar18;
    if ((int)param_3 < *(int *)&local_1c0[1].Partition) {
      uVar11 = uVar22;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar8 = (*pcVar5)();
      return EVar8;
    }
    pFVar19 = (FPCGDataPtrWrapper *)((longlong)&local_1c0->Partition->_padding_ + uVar6);
    FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_c8.Data,pFVar19);
    local_c8.Tags.Elements._0_8_ = 0;
    local_c8.Tags.Elements._8_8_ = 0;
    local_c8.Tags.Elements._32_8_ = 0;
    local_c8.Tags.Elements._40_4_ = 0;
    local_c8.Tags.Elements._44_4_ = 0x80;
    local_c8.Tags.Elements._48_4_ = 0xffffffff;
    local_c8.Tags.Elements._52_4_ = 0;
    local_c8.Tags.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_c8.Tags.HashSize = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              (&local_c8.Tags,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar19 + 1));
    local_c8.Pin = *(FName *)&pFVar19[6].Data.field0_0x0;
    local_c8.bPinlessData = SUB41(pFVar19[6].WeakData.WeakPtr.ObjectIndex,0);
    local_c8.bIsUsedMultipleTimes =
         *(bool *)((longlong)&pFVar19[6].WeakData.WeakPtr.ObjectIndex + 1);
    local_c8.OriginatingNode.WeakPtr =
         *(FWeakObjectPtr *)&pFVar19[6].WeakData.WeakPtr.ObjectSerialNumber;
    local_c8.OriginalIndex = *(int *)((longlong)&pFVar19[7].Data.field0_0x0 + 4);
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,1,0,&local_1d8.AllocatorInstance,1,&local_1d8.ArrayMax);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>(local_1d8.AllocatorInstance.Data,&local_c8,1);
    plVar2 = *(longlong **)((longlong)this + 8);
    if ((int)param_3 < (int)plVar2[1]) {
      uVar18 = uVar22;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar8 = (*pcVar5)();
      return EVar8;
    }
    pUVar14 = Cast<UPCGParamData_const_>((FPCGDataPtrWrapper *)(local_1c8 + *plVar2));
    EVar8 = __l2::<lambda_1>::operator()(local_1b8,pUVar14,&local_1d8,param_3,&param_1->Partition);
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
    if ((FPCGTaggedData *)local_1d8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    local_c8.Tags.HashSize = 0;
    if (local_c8.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Tags.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Tags.Elements);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_c8.Data);
    if (EVar8 != Success) {
      if (EVar8 != AbortExecution) {
        return EVar8;
      }
      if ((byte)LogPCG._0_1_ < 3) {
        return AbortExecution;
      }
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_178,L"PCGMatchAndSetAttributes",L"CouldNotInitializeStateData",
                           L"Could not initialize timeslice state data");
      FText::ToString(pFVar15);
      if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar20 = (UPCGSpatialData *)&DAT_00000004;
        FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x18),&local_188);
      }
      if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar20 = (UPCGSpatialData *)(ulonglong)((uint)pUVar20 | 8);
        FPCGContext::GetExecutionSourceName(*(FPCGContext **)((longlong)this + 0x18),&local_198);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar20 & 8) != 0) &&
         (pUVar20 = (UPCGSpatialData *)(ulonglong)((uint)pUVar20 & 0xfffffff7),
         local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar20 & 4) != 0) &&
         (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (local_178.TextData.Reference == (ITextData *)0x0) {
        return AbortExecution;
      }
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      return AbortExecution;
    }
    bVar7 = true;
  }
  param_1->bIsPartitionOwner = bVar7;
  pUVar23 = (UPCGSpatialData *)param_1->InData;
  if (pUVar23 == (UPCGSpatialData *)0x0) {
LAB_149bf91ce:
    pUVar23 = pUVar20;
  }
  else {
    pUVar13 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    iVar9 = (int)pUVar13->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar13->_padding_)) goto LAB_149bf91ce;
  }
  if (pUVar23 == (UPCGSpatialData *)0x0) {
    pUVar4 = param_1->InData;
    if (pUVar4 != (UPCGData *)0x0) {
      pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
      iVar9 = (int)pUVar13->_padding_;
      if ((iVar9 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar13->_padding_)) {
        pUVar14 = FPCGContext::NewObject_AnyThread<UPCGParamData>
                            (*(FPCGContext **)((longlong)this + 0x18));
        PCGMetadataHelpers::InitializeMetadataWithDataDomainCopyAndElementsNoCopy
                  (pUVar4,(UPCGData *)pUVar14);
        param_1->OutData = (UPCGData *)pUVar14;
        goto LAB_149bf92df;
      }
    }
    EVar8 = AbortExecution;
  }
  else {
    this_00 = FPCGContext::NewPointData_AnyThread(*(FPCGContext **)((longlong)this + 0x18));
    FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_128,pUVar23);
    local_128.bInheritSpatialData = false;
    UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_00,&local_128);
    pcVar5 = *(code **)(this_00->_padding_ + 0x490);
    uVar10 = (**(code **)(pUVar23->_padding_ + 0x488))(pUVar23);
    (*pcVar5)(this_00,uVar10,1);
    pcVar5 = *(code **)(this_00->_padding_ + 0x498);
    uVar11 = (**(code **)(pUVar23->_padding_ + 0x640))(pUVar23,1);
    (*pcVar5)(this_00,uVar11 | 0x80);
    (**(code **)(this_00->_padding_ + 0x4b0))(this_00,pUVar23);
    param_1->OutData = (UPCGData *)this_00;
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_128.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
               local_128.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_128.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_128.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                   );
    }
    if (local_128.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
      FPCGDataPtrWrapper::operator=(&local_1b0->Data,param_1->OutData);
      return Success;
    }
LAB_149bf92df:
    FPCGDataPtrWrapper::operator=(&local_1b0->Data,param_1->OutData);
    EVar8 = Success;
  }
  return EVar8;
}

// ExecuteInternal @ 149c118f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMatchAndSetAttributesElement::ExecuteInternal
          (FPCGMatchAndSetAttributesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_res18 [2];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1149,"FPCGMatchAndSetAttributesElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
               ,0x47d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1149);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                         ,0x480,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_28,&PCGPinConstants::DefaultInputLabel);
  bVar4 = TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                      *)param_1);
  if (bVar4) {
    *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
    local_res18[0] = &local_28;
    bVar4 = TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
            ::DataIsPreparedForExecution
                      ((TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                        *)param_1);
    if (((bVar4) ||
        (local_res10[0] = bVar4,
        bVar4 = `TPCGTimeSlicedElementBase<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar4)) &&
       ((int)param_1[1].InputData.InactiveOutputPinBitmask != 0)) {
      do {
        uVar2 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
        uVar6 = 0;
        if ((int)uVar2 < (int)param_1[1].InputData.InactiveOutputPinBitmask) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar4 = `FPCGMatchAndSetAttributesElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                          (local_res18,
                           (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                            *)param_1,
                           (FPCGMatchAndSetAttributesExecutionState *)&param_1[1].InputData.DataCrcs
                           ,(FPCGMatchAndSetAttributesIterationState *)
                            (*(longlong *)&param_1[1].InputData.DataCrcs.ArrayNum +
                            (longlong)(int)uVar2 * 0x28),uVar2);
        if (!bVar4) {
          bVar4 = false;
          goto LAB_149c11aa2;
        }
        piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
        *piVar1 = *piVar1 + 1;
      } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                (int)param_1[1].InputData.InactiveOutputPinBitmask) &&
              (bVar4 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar4));
      bVar4 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
              (int)param_1[1].InputData.InactiveOutputPinBitmask;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = true;
  }
LAB_149c11aa2:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FPCGTaggedData *)local_28.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// ExecutionLoopMode @ 149c22890

EPCGElementExecutionLoopMode __thiscall
FPCGMatchAndSetAttributesElement::ExecutionLoopMode
          (FPCGMatchAndSetAttributesElement *this,UPCGSettings *param_1)

{
  return PrimaryPinAndBroadcastablePins;
}

// PrepareDataInternal @ 149c2fbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMatchAndSetAttributesElement::PrepareDataInternal
          (FPCGMatchAndSetAttributesElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *this_00;
  int iVar1;
  UPCGNode *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EPCGTimeSliceInitResult EVar5;
  UClass *pUVar6;
  UPCGSettings *pUVar7;
  FObjectPtr_u_0 FVar8;
  FPCGTaggedData *pFVar9;
  FText *this_02;
  FPCGDataCollection *this_03;
  bool bVar10;
  FObjectPtr_u_0 local_res10;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_108;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_e8;
  code *local_d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> **local_d0;
  FObjectPtr_u_0 local_c8;
  FPCGContext *local_c0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_b8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_b0;
  FObjectPtr_u_0 local_a8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_98;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_90;
  FObjectPtr_u_0 *local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_80;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_78;
  FPCGDataCollection *local_70;
  FPCGContext *local_68;
  FObjectPtr_u_0 *local_60;
  FString local_58;
  FString local_48;
  FText local_38;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId941,"FPCGMatchAndSetAttributesElement::PrepareDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
               ,0x3ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId941);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar6 = UPCGMatchAndSetAttributesSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar6);
    if (bVar3) {
      FVar8 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar8.Handle = (UObject *)0x0;
    }
    goto LAB_149c2fcac;
  }
  this_01 = param_1->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar7 = UPCGNode::GetSettings(this_01), pUVar7 == (UPCGSettings *)0x0)) {
    pFVar9 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMatchAndSetAttributesSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
    if (pFVar9 != (FPCGTaggedData *)0x0) {
      local_res10 = (FObjectPtr_u_0)(pFVar9->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_149c2fcaa;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
        pUVar6 = UPCGMatchAndSetAttributesSettings::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar6);
        FVar8 = local_res10;
        if (bVar3) goto LAB_149c2fcac;
      }
    }
  }
  else {
    pUVar7 = UPCGNode::GetSettings(this_01);
    FVar8.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar7);
    if ((UPCGSettings *)FVar8.Handle != (UPCGSettings *)0x0) {
      pUVar6 = UPCGMatchAndSetAttributesSettings::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&(FVar8.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(FVar8.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) goto LAB_149c2fcac;
    }
  }
LAB_149c2fcaa:
  FVar8.Handle = (UObject *)0x0;
LAB_149c2fcac:
  this_03 = &param_1->InputData;
  if (((UPCGSettings *)FVar8.Handle == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                         ,0x3b0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FPCGDataCollection::GetInputsByPin(this_03,&local_108,&PCGPinConstants::DefaultInputLabel);
  this_00 = &param_1->OutputData;
  FPCGDataCollection::GetInputsByPin
            (this_03,&local_e8,&PCGMatchAndSetAttributesConstants::MatchDataLabel);
  FPCGDataCollection::GetInputsByPin
            (this_03,&local_f8,&PCGMatchAndSetAttributesConstants::MaxDistanceLabel);
  local_b8 = &local_108;
  local_b0 = &local_f8;
  local_a0 = &local_e8;
  local_98 = &local_108;
  local_90 = &local_f8;
  local_88 = &local_c8;
  EVar5 = *(EPCGTimeSliceInitResult *)
           ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1);
  local_c8 = FVar8;
  local_c0 = param_1;
  local_a8 = FVar8;
  if (EVar5 == Uninitialized) {
    EVar5 = `FPCGMatchAndSetAttributesElement::PrepareDataInternal'::__l2::<lambda_2>::operator()
                      (&local_a8,
                       (TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                        *)param_1,
                       (FPCGMatchAndSetAttributesExecutionState *)&param_1[1].InputData.DataCrcs);
    *(EPCGTimeSliceInitResult *)
     ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = EVar5;
  }
  if (EVar5 != AbortExecution) {
    if (EVar5 == NoOperation) {
      TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=(&this_00->TaggedData,&local_108)
      ;
    }
    else {
      local_80 = &local_108;
      local_78 = &local_e8;
      local_60 = &local_c8;
      local_d0 = &local_80;
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGMatchAndSetAttributesElement::PrepareDataInternal'::__l2::<lambda_3>,enum_EPCGTimeSliceInitResult,FPCGMatchAndSetAttributesIterationState_&,FPCGMatchAndSetAttributesExecutionState_const_&,unsigned_int>
                 ::Call;
      local_70 = this_00;
      local_68 = param_1;
      TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
      ::InitializePerIterationStates
                ((TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                  *)param_1,local_108.ArrayNum,
                 (TFunctionRef<EPCGTimeSliceInitResult___cdecl(FPCGMatchAndSetAttributesIterationState_&,FPCGMatchAndSetAttributesExecutionState_const_&,unsigned_int)>
                  *)&local_d8);
      bVar3 = TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
              ::DataIsPreparedForExecution
                        ((TPCGTimeSlicedContext<FPCGMatchAndSetAttributesExecutionState,FPCGMatchAndSetAttributesIterationState,FPCGContext>
                          *)param_1);
      if (!bVar3) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)(this_00->TaggedData).AllocatorInstance.Data,
                   (param_1->OutputData).TaggedData.ArrayNum);
        iVar1 = (param_1->OutputData).TaggedData.ArrayMax;
        (param_1->OutputData).TaggedData.ArrayNum = 0;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,0,(ForAnyElementType *)this_00,0,
                     &(param_1->OutputData).TaggedData.ArrayMax);
        }
        if (2 < (byte)LogPCG._0_1_) {
          this_02 = FText::AsLocalizable_Advanced_LocText
                              (&local_38,L"PCGMatchAndSetAttributes",L"CouldNotInitializeStateData",
                               L"Could not initialize timeslice state data");
          FText::ToString(this_02);
          FPCGContext::GetTaskName(param_1,&local_48);
          FPCGContext::GetExecutionSourceName(param_1,&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
          }
        }
      }
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FPCGTaggedData *)local_f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FPCGTaggedData *)local_e8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FPCGTaggedData *)local_108.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c35780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMatchAndSetAttributesElement::SupportsBasePointDataInputs
          (FPCGMatchAndSetAttributesElement *this,FPCGContext *param_1)

{
  return true;
}

