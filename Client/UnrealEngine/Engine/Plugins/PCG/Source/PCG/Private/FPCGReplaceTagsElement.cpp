// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c194f0

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
FPCGReplaceTagsElement::ExecuteInternal(FPCGReplaceTagsElement *this,FPCGContext *param_1)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  FPCGTaggedData *pFVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  FText *pFVar13;
  int iVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  int *piVar17;
  int iVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  FPCGDataCollection *pFVar21;
  FScriptContainerElement *pFVar22;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_01;
  ForAnyElementType FVar23;
  int *piVar24;
  <lambda_1> <Var25;
  undefined1 local_res18 [8];
  int local_res20;
  uint local_158;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_150;
  uint local_13c;
  uint local_138;
  TObjectPtr<UPCGSettings>_u_0 local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  int *local_118;
  int *local_110;
  FPCGDataCollection *local_108;
  FPCGTaggedData *local_100;
  FPCGTaggedData *local_f8;
  undefined1 local_f0 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_e8;
  FPCGTaggedData *local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  
  TVar10.DebugPtr = (UPCGSettings *)0x0;
  <Var25 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId78,"FPCGReplaceTagsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGReplaceTags.cpp"
               ,0x4e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId78);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGReplaceTags.cpp"
                         ,0x4f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar11 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGReplaceTagsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,<Var25);
      if (pFVar11 != (FPCGTaggedData *)0x0) {
        local_130.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar11->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_130.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c19683;
          UE::GC::MarkAsReachable((UObject *)local_130.DebugPtr);
        }
        if (local_130.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPCGReplaceTagsSettings::StaticClass();
          bVar3 = FObjectPtr::IsA(&local_130.ObjectPtr,pUVar8);
          TVar10 = local_130;
          if (bVar3) goto LAB_149c19686;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPCGReplaceTagsSettings::StaticClass();
        iVar18 = (int)pUVar8->_padding_;
        if ((iVar18 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
            &pUVar8->_padding_)) goto LAB_149c19686;
      }
    }
LAB_149c19683:
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPCGReplaceTagsSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar3) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_149c19686:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGReplaceTags.cpp"
                         ,0x52,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_150,&PCGPinConstants::DefaultInputLabel);
  local_108 = &param_1->OutputData;
  if ((char)TVar10.DebugPtr[1]._padding_ == '\0') {
    pTVar12 = PCGHelpers::GetStringArrayFromCommaSeparatedList
                        (&local_c8,(FString *)(TVar10.DebugPtr + 1));
    pFVar22 = (pTVar12->AllocatorInstance).Data;
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar18 = pTVar12->ArrayNum;
    pTVar12->ArrayNum = 0;
    pTVar12->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    local_d8.AllocatorInstance.Data = local_c8.AllocatorInstance.Data;
  }
  else {
    pTVar12 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                        (&local_d8,(FString *)(TVar10.DebugPtr + 1),(FPCGContext *)0x0);
    pFVar22 = (pTVar12->AllocatorInstance).Data;
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar18 = pTVar12->ArrayNum;
    pTVar12->ArrayNum = 0;
    pTVar12->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  bVar3 = (char)TVar10.DebugPtr[1]._padding_ == '\0';
  if (bVar3) {
    pTVar12 = PCGHelpers::GetStringArrayFromCommaSeparatedList
                        (&local_b8,(FString *)&TVar10.DebugPtr[1]._padding_);
  }
  else {
    pTVar12 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                        (&local_a8,(FString *)&TVar10.DebugPtr[1]._padding_,(FPCGContext *)0x0);
  }
  local_120 = (pTVar12->AllocatorInstance).Data;
  (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar14 = pTVar12->ArrayNum;
  pTVar12->ArrayNum = 0;
  pTVar12->ArrayMax = 0;
  local_res20 = iVar14;
  if ((bVar3) &&
     (DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum),
     local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if ((!bVar3) &&
     (DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum),
     local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if ((iVar18 == 0) && (iVar14 == 0)) {
    TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
              (&(param_1->OutputData).TaggedData,&local_150);
    if ((byte)LogPCG._0_1_ < 6) goto LAB_149c1989c;
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"PCGReplaceTagsElement",L"InvalidNumberOfTags",
                         L"No selected or replaced tags, nothing to do.");
    FText::ToString(pFVar13);
    FPCGContext::GetTaskName(param_1,&local_88);
    FPCGContext::GetExecutionSourceName(param_1,&local_98);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_48.TextData.Reference = local_78.TextData.Reference;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      local_48.TextData.Reference = local_78.TextData.Reference;
    }
  }
  else {
    if ((iVar14 < 2) || (iVar18 == iVar14)) {
      uVar15 = (ulonglong)local_150.ArrayNum;
      local_138 = local_150.ArrayNum;
      piVar17 = &(local_108->TaggedData).ArrayMax;
      local_f8 = (FPCGTaggedData *)(local_150.AllocatorInstance.Data + uVar15 * 0x78);
      piVar24 = &(local_108->TaggedData).ArrayNum;
      uVar19 = uVar15;
      pFVar21 = local_108;
      FVar23.Data = local_150.AllocatorInstance.Data;
      while( true ) {
        local_100 = (FPCGTaggedData *)FVar23.Data;
        if ((int)uVar15 != (int)uVar19) {
          local_res18[0] = 0;
          local_118 = piVar17;
          local_110 = piVar24;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
          piVar17 = &(pFVar21->TaggedData).ArrayMax;
          piVar24 = &(pFVar21->TaggedData).ArrayNum;
        }
        local_118 = piVar17;
        local_110 = piVar24;
        if ((FPCGTaggedData *)FVar23.Data == local_f8) break;
        pFVar11 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
        if (((pFVar11 <= FVar23.Data) && (FVar23.Data < pFVar11 + *piVar17)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar5 = *piVar24;
        if (iVar5 == *piVar17) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)pFVar21,piVar17);
        }
        *piVar24 = iVar5 + 1;
        local_e0 = FPCGTaggedData::FPCGTaggedData
                             ((FPCGTaggedData *)
                              ((pFVar21->TaggedData).AllocatorInstance.Data + (longlong)iVar5 * 0x78
                              ),(FPCGTaggedData *)FVar23.Data);
        local_158 = 0;
        if (0 < iVar18) {
          pFVar20 = pFVar22 + 8;
          local_128 = local_120;
          local_e8 = &((FPCGTaggedData *)FVar23.Data)->Tags;
          do {
            local_13c = ~local_158 >> 0x1f;
            uVar7 = 0;
            if ((int)local_158 < iVar18) {
              uVar7 = local_13c;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar1 = pFVar20 + -8;
            if (*(int *)pFVar20 == 0) {
              pwVar16 = L"";
              iVar14 = 0;
            }
            else {
              pwVar16 = (wchar_t *)
                        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                        AllocatorInstance).Data;
              iVar14 = *(int *)pFVar20 + -1;
            }
            uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar16);
            iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                    FindIndexByHash<FString>(local_e8,uVar6,(FString *)pFVar1);
            pFVar11 = local_e0;
            iVar14 = local_res20;
            if (iVar5 != -1) {
              this_01 = &local_e0->Tags;
              if ((uVar7 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              if (*(int *)&(pFVar11->Tags).Elements.field_0x8 !=
                  *(int *)&(pFVar11->Tags).Elements.field_0x34) {
                if (*(int *)pFVar20 == 0) {
                  pwVar16 = L"";
                  iVar14 = 0;
                }
                else {
                  pwVar16 = (wchar_t *)
                            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                            AllocatorInstance).Data;
                  iVar14 = *(int *)pFVar20 + -1;
                }
                uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar16);
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                          (this_01,uVar7,(FString *)pFVar1);
              }
              iVar14 = local_res20;
              if (iVar18 == local_res20) {
                uVar7 = 0;
                if ((int)local_158 < local_res20) {
                  uVar7 = local_13c;
                }
                if ((uVar7 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                Emplace<FString_const_&>(this_01,(FString *)local_f0,(bool *)local_128);
              }
              else if (local_res20 == 1) {
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                Emplace<FString_const_&>(this_01,(FString *)(local_f0 + 4),(bool *)local_120);
              }
            }
            local_128 = local_128 + 0x10;
            local_158 = local_158 + 1;
            pFVar20 = pFVar20 + 0x10;
            piVar17 = local_118;
            pFVar21 = local_108;
            FVar23.Data = (FScriptContainerElement *)local_100;
            piVar24 = local_110;
          } while ((int)local_158 < iVar18);
        }
        uVar15 = (ulonglong)(uint)local_150.ArrayNum;
        FVar23.Data = FVar23.Data + 0x78;
        uVar19 = (ulonglong)local_138;
      }
      goto LAB_149c1989c;
    }
    TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
              (&(param_1->OutputData).TaggedData,&local_150);
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149c1989c;
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"PCGReplaceTagsElement",L"InvalidMappingSupport",
                         L"Input only supports 1:1, N:1, and N:N mappings from source to replaced tags, Input data discarded."
                        );
    FText::ToString(pFVar13);
    FPCGContext::GetTaskName(param_1,&local_58);
    FPCGContext::GetExecutionSourceName(param_1,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  iVar14 = local_res20;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    iVar14 = local_res20;
  }
LAB_149c1989c:
  pFVar20 = local_120;
  DestructItems<FString,int>((FString *)local_120,iVar14);
  if (pFVar20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar20);
  }
  DestructItems<FString,int>((FString *)pFVar22,iVar18);
  if (pFVar22 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar22);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
  if ((FPCGTaggedData *)local_150.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  if ((bool)<Var25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c228e0

EPCGElementExecutionLoopMode __thiscall
FPCGReplaceTagsElement::ExecutionLoopMode(FPCGReplaceTagsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c35850

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
FPCGReplaceTagsElement::SupportsBasePointDataInputs
          (FPCGReplaceTagsElement *this,FPCGContext *param_1)

{
  return true;
}

