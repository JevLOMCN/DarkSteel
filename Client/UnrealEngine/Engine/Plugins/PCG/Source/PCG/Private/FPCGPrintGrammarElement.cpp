// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 1499e8f40

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
FPCGPrintGrammarElement::ExecuteInternal(FPCGPrintGrammarElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FLog *pFVar2;
  ELogType EVar3;
  UPCGNode *this_00;
  FScriptContainerElement *pFVar4;
  UPCGMetadata *this_01;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FPCGTaggedData *pFVar12;
  UObject *pUVar13;
  UPCGParamData *pUVar14;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<FString> *this_03;
  FString *pFVar15;
  FText *pFVar16;
  ForAnyElementType FVar17;
  ForAnyElementType this_04;
  FPCGDataPtrWrapper *this_05;
  bool bVar18;
  <lambda_1> local_res10 [8];
  TObjectPtr<UPCGSettings>_u_0 local_res18;
  <lambda_1> local_res20;
  FString local_108;
  FString local_f8;
  TStringBuilderBase<wchar_t> local_e8;
  FName local_c8;
  FPCGMetadataDomainID local_c0;
  FPCGGrammarResult local_a8;
  FString local_58;
  FText local_48;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId33,"FPCGPrintGrammarElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGPrintGrammar.cpp"
               ,0x21);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId33);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPrintGrammarSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10[0]);
      if (pFVar12 != (FPCGTaggedData *)0x0) {
        local_res18.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res18.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
        }
        if (local_res18.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPCGPrintGrammarSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_res18.ObjectPtr,pUVar9);
          TVar11 = local_res18;
          if (bVar6) goto LAB_1499e9083;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPCGPrintGrammarSettings::StaticClass();
        iVar8 = (int)pUVar9->_padding_;
        if ((iVar8 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar9->_padding_)) goto LAB_1499e9083;
      }
    }
  }
  else {
    pUVar9 = UPCGPrintGrammarSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (bVar6) {
      TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_1499e9083;
    }
  }
  TVar11.DebugPtr = (UPCGSettings *)0x0;
LAB_1499e9083:
  FVar17.Data = (FScriptContainerElement *)0x0;
  PCGGrammar::Parse(&local_a8,(FString *)(TVar11.DebugPtr + 1));
  iVar8 = local_a8.Logs.ArrayNum;
  local_e8.Base = (wchar_t *)0x0;
  local_e8.CurPos = (wchar_t *)0x0;
  local_e8.End = (wchar_t *)0x0;
  local_e8.bIsDynamic = false;
  local_e8.bIsExternal = false;
  pFVar2 = (FLog *)(local_a8.Logs.AllocatorInstance.Data + (longlong)local_a8.Logs.ArrayNum * 0x18);
  this_04.Data = local_a8.Logs.AllocatorInstance.Data;
LAB_1499e90b6:
  if (local_a8.Logs.ArrayNum != iVar8) {
    local_res10[0] = (<lambda_1>)0x0;
    `TCheckedPointerIterator<FPCGGrammarResult::FLog_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res10);
  }
  if ((FLog *)this_04.Data == pFVar2) {
    if (local_a8.bSuccess != false) {
      local_res20.Description = &local_e8;
      `FPCGPrintGrammarElement::ExecuteInternal'::__l2::<lambda_1>::
      operator()<_FPCGPrintGrammarElement::ExecuteInternal_::__l2::<lambda_1>_&>
                (&local_res20,&local_a8.Root,&local_res20);
      iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      pFVar4 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
      (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
      this_05 = (FPCGDataPtrWrapper *)(pFVar4 + (longlong)iVar8 * 0x78);
      this_05[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_05[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_05[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_05[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_05[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this_05->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_05->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this_05[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_05[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_05[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_05[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_05[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_05[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_05[4].Data.field0_0x0 + 4) = 0;
      this_05[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_05[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this_05[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_05[7].Data.field0_0x0 + 4) = 0xffffffff;
      pUVar13 = GetTransientPackageAsObject();
      pUVar14 = NewObject<UPCGParamData>(pUVar13);
      this_01 = (UPCGMetadata *)pUVar14->_padding_;
      if ((this_01 == (UPCGMetadata *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutParamData && Metadata",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGPrintGrammar.cpp"
                             ,0x75,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FPCGDataPtrWrapper::operator=(this_05,(UPCGData *)pUVar14);
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0 = PCGMetadataDomainID::Default;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_c8 = PCGPrintGrammarConstants::OutputLabel;
      this_02 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_c0);
      this_03 = (FPCGMetadataAttribute<FString> *)FVar17.Data;
      if (this_02 != (FPCGMetadataDomain *)0x0) {
        this_03 = FPCGMetadataDomain::CreateAttribute<FString>
                            (this_02,local_c8,&local_f8,false,true);
        FVar17.Data = local_f8.Data.AllocatorInstance.Data;
      }
      if ((FPCGMetadataAttribute<FString> *)FVar17.Data != (FPCGMetadataAttribute<FString> *)0x0) {
        FMemory::Free(FVar17.Data);
      }
      if (this_03 == (FPCGMetadataAttribute<FString> *)0x0) {
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_48,L"PCGPrintGrammarElement",L"CreateAttributeFailed",
                             L"Couldn\'t create new attribute for the description.");
        PCGLog::LogErrorOnGraph(pFVar16,param_1);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
      else {
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        pFVar15 = ::FString::ConstructFromPtrSize
                            (&local_58,local_e8.Base,
                             (int)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1));
        if (&local_108 != pFVar15) {
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          local_108.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = (pFVar15->Data).ArrayNum;
          local_108.Data.ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        iVar8 = FPCGMetadataAttribute<FString>::AddValue(this_03,&local_108);
        FPCGMetadataAttributeBase::SetValueFromValueKey
                  ((FPCGMetadataAttributeBase *)this_03,0,iVar8,false);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
    DestructItems<FPCGGrammarResult::FLog,int>
              ((FLog *)local_a8.Logs.AllocatorInstance.Data,local_a8.Logs.ArrayNum);
    if ((FLog *)local_a8.Logs.AllocatorInstance.Data != (FLog *)0x0) {
      FMemory::Free(local_a8.Logs.AllocatorInstance.Data);
    }
    DestructItems<PCGGrammar::FModuleDescriptor,int>
              ((FModuleDescriptor *)local_a8.Root.Submodules.AllocatorInstance.Data,
               local_a8.Root.Submodules.ArrayNum);
    if ((FModuleDescriptor *)local_a8.Root.Submodules.AllocatorInstance.Data !=
        (FModuleDescriptor *)0x0) {
      FMemory::Free(local_a8.Root.Submodules.AllocatorInstance.Data);
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return true;
  }
  EVar3 = ((FLog *)this_04.Data)->Verbosity;
  if (EVar3 == Error) {
    PCGLog::LogErrorOnGraph((FText *)this_04.Data,param_1);
  }
  else {
    if (EVar3 == Warning) {
      PCGLog::LogWarningOnGraph((FText *)this_04.Data,param_1);
      this_04.Data = this_04.Data + 0x18;
      goto LAB_1499e90b6;
    }
    if (EVar3 != Log) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGPrintGrammar.cpp"
                         ,0x37,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      goto LAB_1499e9172;
    }
    if (4 < (byte)LogPCG._0_1_) {
      FText::ToString((FText *)this_04.Data);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      this_04.Data = this_04.Data + 0x18;
      goto LAB_1499e90b6;
    }
  }
LAB_1499e9172:
  this_04.Data = this_04.Data + 0x18;
  goto LAB_1499e90b6;
}

