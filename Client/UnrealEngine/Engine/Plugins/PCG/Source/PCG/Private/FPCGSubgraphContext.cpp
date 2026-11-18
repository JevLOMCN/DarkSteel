// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// AddExtraStructReferencedObjects @ 149f3b700

void __thiscall
FPCGSubgraphContext::AddExtraStructReferencedObjects
          (FPCGSubgraphContext *this,FReferenceCollector *param_1)

{
  FReferenceCollector::AddReferencedObjects<UPCGData_const_>
            (param_1,&this->ReferencedObjects,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// AddToReferencedObjects @ 149f3c1d0

void __thiscall
FPCGSubgraphContext::AddToReferencedObjects(FPCGSubgraphContext *this,FPCGDataCollection *param_1)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  UObject *local_res10;
  TObjectPtr<UPCGData_const_> local_res18 [2];
  
  iVar1 = (param_1->TaggedData).ArrayNum;
  pFVar3 = (param_1->TaggedData).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((param_1->TaggedData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (pFVar3 == pFVar4) break;
    pUVar2 = *(UObject **)pFVar3;
    if (pUVar2 != (UObject *)0x0) {
      local_res10 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      TSet<TObjectPtr<UPCGData_const_>,DefaultKeyFuncs<TObjectPtr<UPCGData_const_>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UPCGData_const_>_>
                (&this->ReferencedObjects,local_res18,(bool *)&local_res10);
    }
    pFVar3 = pFVar3 + 0x78;
  }
  return;
}

// GetUnsafeExternalContainerForOverridableParam @ 149f50110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FPCGSubgraphContext::GetUnsafeExternalContainerForOverridableParam
          (FPCGSubgraphContext *this,FPCGSettingsOverridableParam *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  UPCGSubgraphSettings *pUVar5;
  void *pvVar6;
  longlong *plVar7;
  FInstancedPropertyBag *this_00;
  FPropertyBagPropertyDesc *pFVar8;
  
  pUVar5 = FPCGContext::GetInputSettings<UPCGSubgraphSettings>((FPCGContext *)this);
  if ((pUVar5 == (UPCGSubgraphSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                         ,0x20c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  plVar7 = (longlong *)(**(code **)(pUVar5->_padding_ + 0x4f0))(pUVar5);
  if (((plVar7 != (longlong *)0x0) &&
      (this_00 = (FInstancedPropertyBag *)(**(code **)(*plVar7 + 0x2c0))(plVar7),
      this_00 != (FInstancedPropertyBag *)0x0)) &&
     (iVar1 = (param_1->PropertiesNames).ArrayNum, iVar1 != 0)) {
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
    pFVar8 = FInstancedPropertyBag::FindPropertyDescByName
                       (this_00,*(FName *)(param_1->PropertiesNames).AllocatorInstance.Data);
    if (((pFVar8 != (FPropertyBagPropertyDesc *)0x0) &&
        (puVar2 = (this->GraphInstanceParametersOverride).StructMemory, puVar2 != (uchar *)0x0)) &&
       ((this->GraphInstanceParametersOverride).ScriptStruct.field0_0x0.DebugPtr !=
        (UScriptStruct *)0x0)) {
      return puVar2;
    }
  }
  return (void *)0x0;
}

// InitializeUserParametersStruct @ 149f51440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGSubgraphContext::InitializeUserParametersStruct(FPCGSubgraphContext *this)

{
  int iVar1;
  UStruct *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  UPCGBaseSubgraphSettings *pUVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  UClass *pUVar12;
  <lambda_1> <Var13;
  FInstancedStruct *pFVar14;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar15;
  FProperty *pFVar16;
  TObjectPtr<UScriptStruct_const_>_u_0 *this_01;
  FName FVar17;
  uint uVar18;
  longlong lVar19;
  FName local_res18;
  TArray<FName,TSizedDefaultAllocator<32>_> local_c8;
  UScriptStruct *local_b8;
  uchar *puStack_b0;
  TObjectPtr<UScriptStruct_const_>_u_0 local_a8;
  undefined8 uStack_a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  TOptional<TArrayView<FName_const_,int>_>_u_0 local_78;
  FInstancedStruct local_68;
  FConstStructView local_58;
  TObjectPtr<UScriptStruct_const_>_u_0 local_48 [2];
  
  FInstancedStruct::Reset(&this->GraphInstanceParametersOverride);
  pUVar7 = FPCGContext::GetInputSettings<UPCGBaseSubgraphSettings>((FPCGContext *)this);
  if ((pUVar7 == (UPCGBaseSubgraphSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                         ,0x223,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = *(UStruct **)&pUVar7->field_0x10;
  if ((this_00 == (UStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SettingsClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                         ,0x226,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar7 + 0x480))(pUVar7);
  plVar9 = (longlong *)(**(code **)(*(longlong *)pUVar7 + 0x4f0))();
  if (plVar9 == (longlong *)0x0) {
    puVar10 = (undefined8 *)0x0;
LAB_149f5151c:
    local_b8 = (UScriptStruct *)0x0;
    puStack_b0 = (uchar *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x2c0))();
    if (puVar10 == (undefined8 *)0x0) goto LAB_149f5151c;
    local_b8 = (UScriptStruct *)*puVar10;
    puStack_b0 = (uchar *)puVar10[1];
  }
  if ((int)plVar8[1] == 0) {
    return;
  }
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  plVar11 = (longlong *)(**(code **)(*(longlong *)pUVar7 + 0x4f8))(pUVar7);
  if (plVar11 != (longlong *)0x0) {
    pUVar12 = Z_Construct_UClass_UPCGGraphInstance_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((((iVar1 <= *(int *)(plVar11[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar11[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar12->_padding_)) && (plVar9 != plVar11)) &&
       ((int)plVar11[9] != *(int *)((longlong)plVar11 + 0x74))) {
      local_a8.DebugPtr = (UScriptStruct *)0x0;
      uStack_a0 = 0;
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)&local_a8.ObjectPtr,(UScriptStruct *)*puVar10,
                 (uchar *)puVar10[1]);
      uVar18 = (int)plVar11[9] - *(int *)((longlong)plVar11 + 0x74);
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if (0 < (int)uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar18,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
      }
      <Var13.OriginalBag =
           FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)(plVar11 + 6));
      if (<Var13.OriginalBag == (UPropertyBag *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6759709290413425210>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                           ,0x23a,"OriginalBag");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        Algo::
        Transform<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,TArray<FName,TSizedDefaultAllocator<32>_>_&,_FPCGSubgraphContext::InitializeUserParametersStruct_::__l25::<lambda_1>_>
                  ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(plVar11 + 8),
                   &local_c8,<Var13);
        iVar1 = local_c8.ArrayNum;
        local_b8 = (UScriptStruct *)local_c8.AllocatorInstance.Data;
        if ((local_c8.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puStack_b0 = (uchar *)CONCAT44(puStack_b0._4_4_,iVar1);
        local_78.TypedValue.DataPtr = (FName *)local_b8;
        local_78._8_8_ = puStack_b0;
        if ((iVar1 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FInstancedPropertyBag::CopyMatchingValuesByName
                  ((FInstancedPropertyBag *)&local_a8.ObjectPtr,
                   (FInstancedPropertyBag *)(plVar11 + 6),
                   (TOptional<TArrayView<FName_const_,int>_> *)&local_78.TypedValue);
        pFVar14 = FInstancedPropertyBag::Detach
                            ((FInstancedPropertyBag *)&local_a8.ObjectPtr,&local_68);
        FInstancedStruct::operator=(&this->GraphInstanceParametersOverride,pFVar14);
        FInstancedStruct::Reset(&local_68);
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      this_01 = &local_a8;
      goto LAB_149f51912;
    }
  }
  pTVar15 = FPCGDataCollection::GetParamsByPin
                      ((FPCGDataCollection *)&this->_padding_,&local_98,
                       &PCGPinConstants::DefaultParamsLabel);
  iVar1 = pTVar15->ArrayNum;
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FPCGTaggedData *)local_98.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  uVar18 = 0;
  if (iVar1 == 0) {
    lVar19 = 0;
    bVar4 = false;
    do {
      if ((int)plVar8[1] <= (int)uVar18) {
        return;
      }
      if (((int)uVar18 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*plVar8 + 0x10 + lVar19) == 0) {
        FVar17.ComparisonIndex.Value = 0;
        FVar17.Number = 0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar18 < (int)plVar8[1]) {
          uVar6 = ~uVar18 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *plVar8;
        if ((*(int *)(lVar2 + 0x10 + lVar19) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar17 = **(FName **)(lVar2 + 8 + lVar19);
      }
      uVar6 = 0;
      if ((int)uVar18 < (int)plVar8[1]) {
        uVar6 = ~uVar18 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar18 = uVar18 + 1;
      local_res18 = *(FName *)(lVar19 + *plVar8);
      lVar19 = lVar19 + 0x88;
      if ((FVar17 == (FName)0x0) ||
         (pFVar16 = UStruct::FindPropertyByName(this_00,FVar17), pFVar16 == (FProperty *)0x0)) {
        pTVar15 = FPCGDataCollection::GetParamsByPin
                            ((FPCGDataCollection *)&this->_padding_,&local_88,&local_res18);
        bVar4 = (bool)(bVar4 | pTVar15->ArrayNum != 0);
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
        if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
      }
    } while (!bVar4);
  }
  local_58.ScriptStruct = local_b8;
  local_58.StructMemory = puStack_b0;
  pFVar14 = FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_48[0].ObjectPtr,&local_58)
  ;
  FInstancedStruct::operator=(&this->GraphInstanceParametersOverride,pFVar14);
  this_01 = local_48;
LAB_149f51912:
  FInstancedStruct::Reset((FInstancedStruct *)&this_01->ObjectPtr);
  return;
}

// UpdateOverridesWithOverriddenGraph @ 149f6c990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGSubgraphContext::UpdateOverridesWithOverriddenGraph(FPCGSubgraphContext *this)

{
  InitializeUserParametersStruct(this);
  if (((this->GraphInstanceParametersOverride).StructMemory != (uchar *)0x0) &&
     ((this->GraphInstanceParametersOverride).ScriptStruct.field0_0x0.DebugPtr !=
      (UScriptStruct *)0x0)) {
    FPCGContext::OverrideSettings((FPCGContext *)this);
    return;
  }
  return;
}

