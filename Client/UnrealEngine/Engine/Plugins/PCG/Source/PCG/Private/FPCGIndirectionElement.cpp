// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// CanExecuteOnlyOnMainThread @ 149c018c0

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
FPCGIndirectionElement::CanExecuteOnlyOnMainThread
          (FPCGIndirectionElement *this,FPCGContext *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  if ((param_1 != (FPCGContext *)0x0) &&
     (plVar1 = (longlong *)param_1[1]._padding_, plVar1 != (longlong *)0x0)) {
    uVar2._0_4_ = param_1[1].InputData.TaggedData.ArrayNum;
    uVar2._4_4_ = param_1[1].InputData.TaggedData.ArrayMax;
                    /* WARNING: Could not recover jumptable at 0x000149c018db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar2);
    return (bool)uVar3;
  }
  return true;
}

// CreateContext @ 149c04400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall FPCGIndirectionElement::CreateContext(FPCGIndirectionElement *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x280);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x280);
    FPCGContext::FPCGContext(this_00);
    this_00->_padding_ = (longlong)&___7FPCGIndirectionContext__6B_;
    this_00[1]._padding_ = 0;
    this_00[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 149c0f630

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
FPCGIndirectionElement::ExecuteInternal(FPCGIndirectionElement *this,FPCGContext *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  UPCGIndirectionSettings *pUVar7;
  FText *this_00;
  IPCGElement *this_01;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  FString local_res18;
  FString local_68;
  FString local_58;
  FText local_48;
  FString local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId310,"FPCGIndirectionElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
               ,0x136);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId310);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                         ,0x138,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pUVar7 = FPCGContext::GetInputSettings<UPCGIndirectionSettings>(param_1);
  if ((pUVar7 == (UPCGIndirectionSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                         ,0x13c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((param_1[1].InputData.bCancelExecutionOnEmpty == false) && (param_1[1]._padding_ != 0)) &&
     (lVar2._0_4_ = param_1[1].InputData.TaggedData.ArrayNum,
     lVar2._4_4_ = param_1[1].InputData.TaggedData.ArrayMax, lVar2 != 0)) {
    pFVar10 = param_1[1].InputData.DataCrcs.AllocatorInstance.Data;
    if ((pFVar10 == (FScriptContainerElement *)0x0) ||
       (cVar6 = (**(code **)(*(longlong *)pFVar10 + 0x4a8))(), cVar6 == '\0')) {
      FPCGAsyncState::operator=
                ((FPCGAsyncState *)(*(longlong *)&param_1[1].InputData.TaggedData.ArrayNum + 0x88),
                 &param_1->AsyncState);
      this_01 = TSharedPtr<IPCGElement,1>::operator->((TSharedPtr<IPCGElement,1> *)(param_1 + 1));
      bVar4 = IPCGElement::Execute
                        (this_01,*(FPCGContext **)&param_1[1].InputData.TaggedData.ArrayNum);
      FPCGDataCollection::operator=
                (&param_1->OutputData,
                 (FPCGDataCollection *)
                 (*(longlong *)&param_1[1].InputData.TaggedData.ArrayNum + 0x38));
      if ((bVar4) && (pUVar7->bTagOutputsBasedOnOutputPins != false)) {
        iVar1 = (param_1->OutputData).TaggedData.ArrayNum;
        pFVar10 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
        pFVar9 = pFVar10 + (longlong)iVar1 * 0x78;
        while( true ) {
          if ((param_1->OutputData).TaggedData.ArrayNum != iVar1) {
            `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar10 == pFVar9) break;
          if (*(longlong *)(pFVar10 + 0x60) != 0) {
            pFVar8 = ::FName::ToString((FName *)(pFVar10 + 0x60),&local_38);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       (pFVar10 + 0x10),&local_res18,(bool *)pFVar8);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          pFVar10 = pFVar10 + 0x78;
        }
      }
      goto LAB_149c0f812;
    }
    if (1 < (byte)LogPCG._0_1_) {
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"PCGIndirectionElement",L"UnsupportedGPUProxyNode",
                           L"GPU nodes do not currently support execution via proxy.");
      FText::ToString(this_00);
      FPCGContext::GetTaskName(param_1,&local_58);
      FPCGContext::GetExecutionSourceName(param_1,&local_68);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
  }
  FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  bVar4 = true;
LAB_149c0f812:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// IsCacheable @ 149c2d410

bool __thiscall
FPCGIndirectionElement::IsCacheable(FPCGIndirectionElement *this,UPCGSettings *param_1)

{
  return false;
}

// PrepareDataInternal @ 149c2f680

/* WARNING: Type propagation algorithm not settling */
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
FPCGIndirectionElement::PrepareDataInternal(FPCGIndirectionElement *this,FPCGContext *param_1)

{
  FPCGContext *this_00;
  int iVar1;
  UPCGSettings *this_01;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UPCGIndirectionSettings *pUVar6;
  UClass *pUVar7;
  FText *pFVar8;
  UClass *pUVar9;
  FPCGContext *pFVar10;
  IPCGElement *this_02;
  UPCGSettings *pUVar11;
  UObject *pUVar12;
  FString local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  TSharedPtr<IPCGElement,1> local_28;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                         ,0xfb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pUVar6 = FPCGContext::GetInputSettings<UPCGIndirectionSettings>(param_1);
  if ((pUVar6 == (UPCGIndirectionSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                         ,0xff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  this_01 = (pUVar6->Settings).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_01 == (UPCGSettings *)0x0)) {
    param_1[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)this_01;
    if (this_01 == (UPCGSettings *)0x0) {
      return true;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_01);
    param_1[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)this_01;
  }
  if (pUVar6->ProxyInterfaceMode == ByNativeElement) {
    pUVar9 = (pUVar6->SettingsClass).Class.field0_0x0.DebugPtr;
    if ((pUVar9 != (UClass *)0x0) &&
       (pUVar7 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar9->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (pUVar9 = (pUVar6->SettingsClass).Class.field0_0x0.DebugPtr, pUVar9 != (UClass *)0x0)) {
        lVar2 = this_01->_padding_;
        pUVar7 = Z_Construct_UClass_UPCGSettings_NoRegister();
        if (pUVar7 != (UClass *)0x0) {
          iVar1 = (int)pUVar7->_padding_;
          if (((int)pUVar9->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) &&
             (pUVar9 = (pUVar6->SettingsClass).Class.field0_0x0.DebugPtr, pUVar9 != (UClass *)0x0))
          {
            iVar1 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar2 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) goto LAB_149c2fb03;
          }
        }
      }
    }
    param_1[1].InputData.bCancelExecutionOnEmpty = true;
    if ((byte)LogPCG._0_1_ < 2) {
      return true;
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"PCGIndirectionElement",
                        L"NativeProxySettingsInterfaceTypeMismatch",
                        L"The selected native settings template does not match the set or overridden settings!"
                       );
    FText::ToString(pFVar8);
    FPCGContext::GetTaskName(param_1,&local_78);
    FPCGContext::GetExecutionSourceName(param_1,&local_88);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_38.TextData.Reference = local_68.TextData.Reference;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      local_38.TextData.Reference = local_68.TextData.Reference;
    }
    goto LAB_149c2f8b9;
  }
  if (pUVar6->ProxyInterfaceMode != ByBlueprintElement) goto LAB_149c2fb03;
  pUVar9 = Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
  iVar1 = (int)pUVar9->_padding_;
  if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
     (pUVar11 = this_01,
     (longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
     &pUVar9->_padding_)) {
    pUVar11 = (UPCGSettings *)0x0;
  }
  pUVar9 = (pUVar6->BlueprintElementClass).Class.field0_0x0.DebugPtr;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && ((pUVar6->BlueprintElementClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) &&
       (pUVar11 != (UPCGSettings *)0x0)) {
      pUVar12 = (UObject *)pUVar11[1]._padding_;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar12 != (UObject *)0x0) goto LAB_149c2f99e;
LAB_149c2f9cc:
        pUVar12 = (UObject *)0x0;
      }
      else {
        if (pUVar12 == (UObject *)0x0) goto LAB_149c2f9cc;
        UE::GC::MarkAsReachable(pUVar12);
LAB_149c2f99e:
        pUVar9 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
        if (pUVar9 == (UClass *)0x0) goto LAB_149c2f9cc;
        iVar1 = (int)pUVar9->_padding_;
        if ((*(int *)&pUVar12[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)iVar1 * 8)
            != &pUVar9->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_149c2f9cc;
      }
      pUVar9 = (pUVar6->BlueprintElementClass).Class.field0_0x0.DebugPtr;
      if ((pUVar9 != (UClass *)0x0) &&
         (pUVar7 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar7 != (UClass *)0x0
         )) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar9->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) &&
           (pUVar9 = (pUVar6->BlueprintElementClass).Class.field0_0x0.DebugPtr,
           pUVar9 != (UClass *)0x0)) {
          iVar1 = (int)pUVar9->_padding_;
          if ((*(int *)&pUVar12[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar9->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
LAB_149c2fb03:
            pFVar10 = (FPCGContext *)UPCGSettings::GetElement(this_01,&local_28);
            this_00 = param_1 + 1;
            if (this_00 != pFVar10) {
              this_00->_padding_ = (longlong)pFVar10->_padding_;
              pFVar10->_padding_ = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&param_1[1].InputData,
                         (FSharedReferencer<1> *)&pFVar10->InputData);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_28.SharedReferenceCount.ReferenceController);
            if (((IPCGElement *)this_00->_padding_ == (IPCGElement *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Context->InnerElement",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGIndirectionElement.cpp"
                                   ,0x11c,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            lVar2._0_4_ = param_1[1].InputData.TaggedData.ArrayNum;
            lVar2._4_4_ = param_1[1].InputData.TaggedData.ArrayMax;
            if (lVar2 == 0) {
              FPCGIndirectionContext::SetupInnerContext((FPCGIndirectionContext *)param_1);
            }
            this_02 = TSharedPtr<IPCGElement,1>::operator->((TSharedPtr<IPCGElement,1> *)this_00);
            bVar4 = IPCGElement::ConvertInputsIfNeeded
                              (this_02,*(FPCGContext **)&param_1[1].InputData.TaggedData.ArrayNum);
            return bVar4;
          }
        }
      }
    }
  }
  param_1[1].InputData.bCancelExecutionOnEmpty = true;
  if ((byte)LogPCG._0_1_ < 2) {
    return true;
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGIndirectionElement",
                      L"BlueprintProxySettingsInterfaceTypeMismatch",
                      L"The selected blueprint settings template does not match the set or overridden settings!"
                     );
  FText::ToString(pFVar8);
  FPCGContext::GetTaskName(param_1,&local_48);
  FPCGContext::GetExecutionSourceName(param_1,&local_58);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_149c2f8b9:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c35740

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
FPCGIndirectionElement::SupportsBasePointDataInputs
          (FPCGIndirectionElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 149c35950

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
FPCGIndirectionElement::SupportsGPUResidentData(FPCGIndirectionElement *this,FPCGContext *param_1)

{
  return true;
}

