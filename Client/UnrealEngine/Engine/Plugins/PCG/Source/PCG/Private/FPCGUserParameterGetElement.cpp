// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// CanExecuteOnlyOnMainThread @ 149c5d690

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
FPCGUserParameterGetElement::CanExecuteOnlyOnMainThread
          (FPCGUserParameterGetElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c71900

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGUserParameterGetElement::ExecuteInternal(FPCGUserParameterGetElement *this,FPCGContext *param_1)

{
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  char cVar3;
  UPCGNode *pUVar4;
  FName FVar5;
  code *pcVar6;
  UStruct *pUVar7;
  void *pvVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  UClass *pUVar15;
  TObjectPtr<UPCGSettings>_u_0 TVar16;
  UPCGSettings *pUVar17;
  TObjectPtr<UPCGSettings>_u_0 TVar18;
  FPCGTaggedData *pFVar19;
  FText *pFVar20;
  FExtractorParameters *pFVar21;
  UPCGParamData *pUVar22;
  FString *pFVar23;
  FTextFormat *pFVar24;
  ForElementType<FConstStructView> FVar25;
  FPCGDataPtrWrapper *this_00;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStackY_418 [32];
  <lambda_1> local_3d8;
  TObjectPtr<UPCGSettings>_u_0 local_3d0;
  TObjectPtr<UPCGSettings>_u_0 local_3c8 [2];
  FExtractorParameters local_3b8;
  FPCGAttributePropertySelector local_348;
  undefined8 local_308;
  longlong local_300;
  FText local_2f8;
  FString local_2e8;
  FText local_2d8;
  FString local_2c8;
  FString local_2b8;
  FText local_2a8;
  FText local_298;
  FString local_288;
  FString local_278;
  FText local_268;
  UStruct *local_258;
  void *pvStack_250;
  FTextFormat local_248;
  FExtractorParameters local_238;
  FExtractorParameters local_1c8;
  TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId541,"FPCGUserParameterGetElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUserParameterGet.cpp"
               ,0x21d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId541);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUserParameterGet.cpp"
                          ,0x21f,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    pUVar4 = param_1->Node;
    if ((pUVar4 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(pUVar4), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar19 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGUserParameterGetSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_3d8);
      if (pFVar19 != (FPCGTaggedData *)0x0) {
        local_3d0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar19->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_3d0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c71a45;
          UE::GC::MarkAsReachable((UObject *)local_3d0.DebugPtr);
        }
        if (local_3d0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar15 = UPCGUserParameterGetSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_3d0.ObjectPtr,pUVar15);
          TVar16 = local_3d0;
          if (bVar10) goto LAB_149c71a48;
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(pUVar4);
      TVar16.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
      if (TVar16.DebugPtr != (UPCGSettings *)0x0) {
        pUVar15 = UPCGUserParameterGetSettings::StaticClass();
        iVar14 = (int)pUVar15->_padding_;
        if ((iVar14 <= *(int *)((TVar16.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar16.DebugPtr)->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
            &pUVar15->_padding_)) goto LAB_149c71a48;
      }
    }
LAB_149c71a45:
    TVar16.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar15 = UPCGUserParameterGetSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar15);
    if (!bVar10) goto LAB_149c71a45;
    TVar16.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c71a48:
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    pUVar4 = param_1->Node;
    if ((pUVar4 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(pUVar4), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar19 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGenericUserParameterGetSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_3d8);
      if (pFVar19 != (FPCGTaggedData *)0x0) {
        local_3c8[0].ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar19->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_3c8[0].DebugPtr == (UPCGSettings *)0x0) goto LAB_149c71b3f;
          UE::GC::MarkAsReachable((UObject *)local_3c8[0].DebugPtr);
        }
        if (local_3c8[0].DebugPtr != (UPCGSettings *)0x0) {
          pUVar15 = UPCGGenericUserParameterGetSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_3c8[0].ObjectPtr,pUVar15);
          TVar18 = local_3c8[0];
          if (bVar10) goto LAB_149c71b42;
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(pUVar4);
      TVar18.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
      if (TVar18.DebugPtr != (UPCGSettings *)0x0) {
        pUVar15 = UPCGGenericUserParameterGetSettings::StaticClass();
        iVar14 = (int)pUVar15->_padding_;
        if ((iVar14 <= *(int *)((TVar18.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
            &pUVar15->_padding_)) goto LAB_149c71b42;
      }
    }
LAB_149c71b3f:
    TVar18.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar15 = UPCGGenericUserParameterGetSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar15);
    if (!bVar10) goto LAB_149c71b3f;
    TVar18.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c71b42:
  if (TVar16.DebugPtr == (UPCGSettings *)0x0) {
    if (TVar18.DebugPtr == (UPCGSettings *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings || GenericSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUserParameterGet.cpp"
                          ,0x222,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      goto LAB_149c71bec;
    }
LAB_149c71bdd:
    bVar10 = true;
    if (*(char *)((longlong)&TVar18.DebugPtr[1]._padding_ + 5) == '\0') goto LAB_149c71bec;
  }
  else {
    if (TVar18.DebugPtr != (UPCGSettings *)0x0) goto LAB_149c71bdd;
LAB_149c71bec:
    bVar10 = false;
  }
  PCGUserParameterGet::Settings::GetValidLayouts(&local_158,param_1);
  if (local_158.ArrayNum < 2) goto LAB_149c71dac;
  if ((TVar18.DebugPtr != (UPCGSettings *)0x0) &&
     (cVar3 = *(char *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4), cVar3 != '\0')) {
    if (cVar3 == '\x01') {
      if ((local_158.ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      FVar25 = (ForElementType<FConstStructView>)&local_158;
      if (local_158.AllocatorInstance.SecondaryData != (ForElementType<FConstStructView>)0x0) {
        FVar25 = local_158.AllocatorInstance.SecondaryData;
      }
      if (local_158.ArrayNum + -1 != 0) {
        memmove((void *)FVar25,(uchar *)((longlong)FVar25 + 0x10),
                (longlong)(local_158.ArrayNum + -1) << 4);
      }
      local_158.ArrayNum = local_158.ArrayNum + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
                (0x10,8,&local_158.AllocatorInstance,local_158.ArrayNum,&local_158.ArrayMax);
      goto LAB_149c71dac;
    }
    if (cVar3 != '\x02') goto LAB_149c71dac;
    if ((local_158.ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    FVar25 = (ForElementType<FConstStructView>)&local_158;
    if (local_158.AllocatorInstance.SecondaryData != (ForElementType<FConstStructView>)0x0) {
      FVar25 = local_158.AllocatorInstance.SecondaryData;
    }
    iVar14 = local_158.ArrayNum + -1;
    if (1 < iVar14) {
      iVar14 = 1;
    }
    if (iVar14 != 0) {
      memmove((void *)FVar25,
              (void *)((longlong)(local_158.ArrayNum - iVar14) * 0x10 + (longlong)FVar25),
              (longlong)iVar14 << 4);
    }
    local_158.ArrayNum = local_158.ArrayNum + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
              (0x10,8,&local_158.AllocatorInstance,local_158.ArrayNum,&local_158.ArrayMax);
  }
  TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_158,1,Default);
LAB_149c71dac:
  if (local_158.ArrayNum == 0) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_2f8,L"PCGUserParameterGetElement",L"NoValidLayout",
                         L"Failed to find a valid user parameters to extract from.");
    PCGLog::LogErrorOnGraph(pFVar20,(FPCGContext *)0x0);
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
  }
  else {
    uVar27 = 0;
    if (0 < local_158.ArrayNum) {
      local_300 = 0;
      do {
        lVar9 = local_300;
        uVar26 = local_158.ArrayNum - 1;
        uVar13 = 0;
        if ((int)uVar27 < local_158.ArrayNum) {
          uVar13 = ~uVar27 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        FVar25 = (ForElementType<FConstStructView>)&local_158;
        if (local_158.AllocatorInstance.SecondaryData != (ForElementType<FConstStructView>)0x0) {
          FVar25 = local_158.AllocatorInstance.SecondaryData;
        }
        pUVar7 = *(UStruct **)(lVar9 + (longlong)FVar25);
        pvVar8 = (void *)((undefined8 *)(lVar9 + (longlong)FVar25))[1];
        local_3b8.PropertySelector._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_3b8.Container = (void *)0x0;
        local_3b8.Class = (UStruct *)0x0;
        local_3b8.PropertySelector.Selection = Attribute;
        local_3b8.PropertySelector.DomainName.ComparisonIndex.Value = 0;
        local_3b8.PropertySelector.DomainName.Number = 0;
        local_3b8.PropertySelector.AttributeName.ComparisonIndex.Value = 0;
        local_3b8.PropertySelector.AttributeName.Number = 0;
        local_3b8.PropertySelector.PropertyName.ComparisonIndex.Value = 0;
        local_3b8.PropertySelector.PropertyName.Number = 0;
        local_3b8.PropertySelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_3b8.PropertySelector.ExtraNames.ArrayNum = 0;
        local_3b8.PropertySelector.ExtraNames.ArrayMax = 0;
        local_3b8.PropertySelector.ExtraProperty = Index;
        local_3b8.PropertySelectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b8.PropertySelectors.ArrayNum = 0;
        local_3b8.PropertySelectors.ArrayMax = 0;
        local_3b8.OutputAttributeName.ComparisonIndex.Value = 0;
        local_3b8.OutputAttributeName.Number = 0;
        local_3b8.bShouldExtract = false;
        local_3b8.bPropertyNeedsToBeVisible = false;
        local_3b8.bStrictSanitizeOutputAttributeNames = false;
        local_258 = pUVar7;
        pvStack_250 = pvVar8;
        if (TVar16.DebugPtr == (UPCGSettings *)0x0) {
          if (TVar18.DebugPtr != (UPCGSettings *)0x0) {
            pFVar21 = PCGPropertyHelpers::FExtractorParameters::FExtractorParameters
                                (&local_1c8,pvVar8,pUVar7,(FString *)(TVar18.DebugPtr + 1),
                                 *(FName *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4),
                                 SUB81(TVar18.DebugPtr[1]._padding_,0),false);
            PCGPropertyHelpers::FExtractorParameters::operator=(&local_3b8,pFVar21);
            DestructItems<FPCGAttributePropertySelector,int>
                      ((FPCGAttributePropertySelector *)
                       local_1c8.PropertySelectors.AllocatorInstance.Data,
                       local_1c8.PropertySelectors.ArrayNum);
            if ((FPCGAttributePropertySelector *)local_1c8.PropertySelectors.AllocatorInstance.Data
                != (FPCGAttributePropertySelector *)0x0) {
              FMemory::Free(local_1c8.PropertySelectors.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_1c8.PropertySelector.ExtraNames.AllocatorInstance.Data,
                       local_1c8.PropertySelector.ExtraNames.ArrayNum);
            if (local_1c8.PropertySelector.ExtraNames.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.PropertySelector.ExtraNames.AllocatorInstance.Data);
            }
            local_3b8.bStrictSanitizeOutputAttributeNames =
                 *(bool *)((longlong)&TVar18.DebugPtr[1]._padding_ + 1);
          }
        }
        else {
          lVar9 = TVar16.DebugPtr[1]._padding_;
          FVar5 = (FName)TVar16.DebugPtr[1]._padding_;
          local_348.PropertyName.Number = 0;
          local_348.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_308 = 0;
          local_348._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
          local_348.Selection = Attribute;
          local_348.DomainName.ComparisonIndex.Value = 0;
          local_348.DomainName.Number = 0;
          local_348.AttributeName.ComparisonIndex.Value = 0;
          local_348.AttributeName.Number = 0;
          local_348.PropertyName.ComparisonIndex.Value = 0;
          local_348.ExtraNames.ArrayNum = 0;
          local_348.ExtraNames.ArrayMax = 0;
          local_348.ExtraProperty = Index;
          FPCGAttributePropertySelector::SetDomainName(&local_348,(FName)0x0,true);
          FPCGAttributePropertySelector::SetAttributeName(&local_348,FVar5,true);
          DestructItems<FString,int>
                    ((FString *)local_348.ExtraNames.AllocatorInstance.Data,
                     local_348.ExtraNames.ArrayNum);
          iVar14 = local_348.ExtraNames.ArrayMax;
          local_348.ExtraNames._8_8_ = (ulonglong)(uint)local_348.ExtraNames.ArrayMax << 0x20;
          if (iVar14 == 0) {
            local_348.ExtraNames.ArrayNum = 0;
            local_348.ExtraNames.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,iVar14,&local_348.ExtraNames.AllocatorInstance,0,
                       &local_348.ExtraNames.ArrayMax);
            ConstructItems<FString,FString,int>
                      (local_348.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
          }
          pFVar21 = PCGPropertyHelpers::FExtractorParameters::FExtractorParameters
                              (&local_238,pvVar8,pUVar7,&local_348,FVar5,SUB81(lVar9,0),false);
          local_3b8.Container = pFVar21->Container;
          local_3b8.Class = pFVar21->Class;
          FPCGAttributePropertySelector::operator=
                    (&local_3b8.PropertySelector,&pFVar21->PropertySelector);
          pTVar1 = &pFVar21->PropertySelectors;
          if (&local_3b8.PropertySelectors != pTVar1) {
            DestructItems<FPCGAttributePropertySelector,int>
                      ((FPCGAttributePropertySelector *)
                       local_3b8.PropertySelectors.AllocatorInstance.Data,
                       local_3b8.PropertySelectors.ArrayNum);
            if ((FPCGAttributePropertySelector *)local_3b8.PropertySelectors.AllocatorInstance.Data
                != (FPCGAttributePropertySelector *)0x0) {
              FMemory::Free(local_3b8.PropertySelectors.AllocatorInstance.Data);
            }
            local_3b8.PropertySelectors.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_3b8.PropertySelectors.ArrayNum = (pFVar21->PropertySelectors).ArrayNum;
            local_3b8.PropertySelectors.ArrayMax = (pFVar21->PropertySelectors).ArrayMax;
            (pFVar21->PropertySelectors).ArrayNum = 0;
            (pFVar21->PropertySelectors).ArrayMax = 0;
          }
          local_3b8.OutputAttributeName = pFVar21->OutputAttributeName;
          local_3b8.bShouldExtract = pFVar21->bShouldExtract;
          local_3b8.bPropertyNeedsToBeVisible = pFVar21->bPropertyNeedsToBeVisible;
          local_3b8.bStrictSanitizeOutputAttributeNames =
               pFVar21->bStrictSanitizeOutputAttributeNames;
          DestructItems<FPCGAttributePropertySelector,int>
                    ((FPCGAttributePropertySelector *)
                     local_238.PropertySelectors.AllocatorInstance.Data,
                     local_238.PropertySelectors.ArrayNum);
          if ((FPCGAttributePropertySelector *)local_238.PropertySelectors.AllocatorInstance.Data !=
              (FPCGAttributePropertySelector *)0x0) {
            FMemory::Free(local_238.PropertySelectors.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_238.PropertySelector.ExtraNames.AllocatorInstance.Data,
                     local_238.PropertySelector.ExtraNames.ArrayNum);
          if (local_238.PropertySelector.ExtraNames.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.PropertySelector.ExtraNames.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_348.ExtraNames.AllocatorInstance.Data,
                     local_348.ExtraNames.ArrayNum);
          if (local_348.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.ExtraNames.AllocatorInstance.Data);
          }
          local_3b8.bStrictSanitizeOutputAttributeNames =
               *(bool *)((longlong)&TVar16.DebugPtr[1]._padding_ + 1);
        }
        if ((bVar10) || (uVar27 != uVar26)) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        pUVar22 = PCGPropertyHelpers::ExtractPropertyAsAttributeSet
                            (&local_3b8,param_1,
                             (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                              *)0x0,bVar12);
        if (pUVar22 != (UPCGParamData *)0x0) {
          iVar14 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar14 == *piVar2) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)&param_1->OutputData,piVar2);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar14 + 1;
          this_00 = (FPCGDataPtrWrapper *)
                    ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                    (longlong)iVar14 * 0x78);
          this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
          (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
          (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
          this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
          this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
          this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
          *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
          *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
          this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
          *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
          *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
          FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar22);
LAB_149c724d4:
          DestructItems<FPCGAttributePropertySelector,int>
                    ((FPCGAttributePropertySelector *)
                     local_3b8.PropertySelectors.AllocatorInstance.Data,
                     local_3b8.PropertySelectors.ArrayNum);
          if ((FPCGAttributePropertySelector *)local_3b8.PropertySelectors.AllocatorInstance.Data !=
              (FPCGAttributePropertySelector *)0x0) {
            FMemory::Free(local_3b8.PropertySelectors.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_3b8.PropertySelector.ExtraNames.AllocatorInstance.Data,
                     local_3b8.PropertySelector.ExtraNames.ArrayNum);
          if (local_3b8.PropertySelector.ExtraNames.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.PropertySelector.ExtraNames.AllocatorInstance.Data);
          }
          break;
        }
        if (uVar27 == uVar26) {
          if (local_3b8.PropertySelectors.ArrayNum == 0) {
            if (1 < (byte)LogPCG._0_1_) {
              pFVar20 = FText::AsLocalizable_Advanced_LocText
                                  (&local_268,L"PCGUserParameterGetElement",
                                   L"InvalidNamelessProperty",
                                   L"Could not find nameless property in the user parameters");
              FText::ToString(pFVar20);
              FPCGContext::GetTaskName(param_1,&local_278);
              FPCGContext::GetExecutionSourceName(param_1,&local_288);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_288.Data.AllocatorInstance.Data);
              }
              if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.Data.AllocatorInstance.Data);
              }
              if (local_268.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
              }
            }
          }
          else if (1 < (byte)LogPCG._0_1_) {
            if ((local_3b8.PropertySelectors.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            pFVar23 = FPCGAttributePropertySelector::ToString
                                ((FPCGAttributePropertySelector *)
                                 local_3b8.PropertySelectors.AllocatorInstance.Data,&local_2e8,false
                                );
            FText::FromString(&local_2d8,pFVar23);
            if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
            }
            pFVar20 = FText::AsLocalizable_Advanced_LocText
                                (&local_298,L"PCGUserParameterGetElement",L"InvalidProperty",
                                 L"Could not find the property \'{0}\' in the user parameters");
            pFVar24 = FTextFormat::FTextFormat(&local_248,pFVar20,Default);
            pFVar20 = FText::Format<FText>(&local_2a8,pFVar24,&local_2d8);
            FText::ToString(pFVar20);
            FPCGContext::GetTaskName(param_1,&local_2b8);
            FPCGContext::GetExecutionSourceName(param_1,&local_2c8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            }
            if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
            }
            if (local_2a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
            }
            if (local_298.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
            }
          }
          goto LAB_149c724d4;
        }
        DestructItems<FPCGAttributePropertySelector,int>
                  ((FPCGAttributePropertySelector *)
                   local_3b8.PropertySelectors.AllocatorInstance.Data,
                   local_3b8.PropertySelectors.ArrayNum);
        if ((FPCGAttributePropertySelector *)local_3b8.PropertySelectors.AllocatorInstance.Data !=
            (FPCGAttributePropertySelector *)0x0) {
          FMemory::Free(local_3b8.PropertySelectors.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_3b8.PropertySelector.ExtraNames.AllocatorInstance.Data,
                   local_3b8.PropertySelector.ExtraNames.ArrayNum);
        if (local_3b8.PropertySelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.PropertySelector.ExtraNames.AllocatorInstance.Data);
        }
        uVar27 = uVar27 + 1;
        local_300 = local_300 + 0x10;
      } while ((int)uVar27 < local_158.ArrayNum);
    }
  }
  if (local_158.AllocatorInstance.SecondaryData != (ForElementType<FConstStructView>)0x0) {
    FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c80690

bool __thiscall
FPCGUserParameterGetElement::IsCacheable(FPCGUserParameterGetElement *this,UPCGSettings *param_1)

{
  return false;
}

