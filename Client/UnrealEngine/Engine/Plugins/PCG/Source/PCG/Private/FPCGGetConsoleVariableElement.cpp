// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149c0a5d0

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

bool __thiscall
FPCGGetConsoleVariableElement::ExecuteInternal
          (FPCGGetConsoleVariableElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  UPCGMetadata *this_01;
  FName FVar2;
  code *pcVar3;
  IConsoleManager *pIVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FString *pFVar12;
  FPCGTaggedData *pFVar13;
  longlong *plVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  UPCGParamData *pUVar18;
  long64 lVar19;
  FPCGMetadataDomain *pFVar20;
  FPCGMetadataAttribute<bool> *this_02;
  FPCGMetadataAttribute<int> *this_03;
  FPCGMetadataAttribute<float> *this_04;
  FPCGMetadataAttribute<FString> *this_05;
  FPCGDataPtrWrapper *this_06;
  wchar_t *pwVar21;
  bool bVar22;
  <lambda_1> local_res10 [8];
  int local_res18 [2];
  float local_res20 [2];
  TObjectPtr<UPCGSettings>_u_0 local_218;
  FString local_210;
  UPCGParamData *local_200;
  UPCGSettings *local_1f8;
  FString local_1f0;
  FName local_1d8;
  FPCGMetadataDomainID local_1d0;
  FName local_1b8;
  FPCGMetadataDomainID local_1b0;
  FName local_198;
  FPCGMetadataDomainID local_190;
  FName local_178;
  FPCGMetadataDomainID local_170;
  FString local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FString local_118;
  FString local_108;
  FText local_f8;
  FText local_e8;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId37,"FPCGGetConsoleVariableElement::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetConsoleVariable.cpp"
               ,0x25);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId37);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetConsoleVariable.cpp"
                         ,0x27,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetConsoleVariableSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10[0]);
      if (pFVar13 != (FPCGTaggedData *)0x0) {
        local_218.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_218.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c0a6ec;
          UE::GC::MarkAsReachable((UObject *)local_218.DebugPtr);
        }
        if (local_218.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPCGGetConsoleVariableSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_218.ObjectPtr,pUVar9);
          TVar11 = local_218;
          if (bVar5) goto LAB_149c0a6ee;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPCGGetConsoleVariableSettings::StaticClass();
        iVar8 = (int)pUVar9->_padding_;
        if ((iVar8 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar9->_padding_)) goto LAB_149c0a6ee;
      }
    }
LAB_149c0a6ec:
    TVar11.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar9 = UPCGGetConsoleVariableSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (!bVar5) goto LAB_149c0a6ec;
    TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c0a6ee:
  if ((TVar11.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetConsoleVariable.cpp"
                         ,0x2a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pIVar4 = IConsoleManager::Singleton;
  pUVar10 = TVar11.DebugPtr + 1;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0xc0);
  local_1f8 = pUVar10;
  pFVar12 = ::FName::ToString((FName *)pUVar10,&local_158);
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  plVar14 = (longlong *)(*pcVar3)(pIVar4,pwVar21,1);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (plVar14 == (longlong *)0x0) {
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149c0adfe;
    pFVar15 = FText::FromName(&local_98,(FName *)pUVar10);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_128,L"PCGGetConsoleVariableElement",L"FailedToFindCVar",
                         L"Failed to find console variable \'{0}\'.");
    pFVar17 = FTextFormat::FTextFormat(&local_88,pFVar16,Default);
    pFVar15 = FText::Format<FText>(&local_138,pFVar17,pFVar15);
    FText::ToString(pFVar15);
    FPCGContext::GetTaskName(param_1,&local_148);
    FPCGContext::GetExecutionSourceName(param_1,&local_210);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((FName *)local_210.Data.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    local_a8.TextData.Reference = local_128.TextData.Reference;
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      local_a8.TextData.Reference = local_128.TextData.Reference;
    }
  }
  else {
    pUVar18 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
    this_01 = (UPCGMetadata *)pUVar18->_padding_;
    local_200 = pUVar18;
    if ((this_01 == (UPCGMetadata *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metadata",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetConsoleVariable.cpp"
                           ,0x36,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    lVar19 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar18->_padding_,-1);
    local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)&TVar11.DebugPtr[1]._padding_
    ;
    FVar2 = *(FName *)local_210.Data.AllocatorInstance.Data;
    cVar7 = (**(code **)(*plVar14 + 0x40))(plVar14);
    if (cVar7 == '\0') {
      cVar7 = (**(code **)(*plVar14 + 0x48))(plVar14);
      if (cVar7 == '\0') {
        cVar7 = (**(code **)(*plVar14 + 0x50))(plVar14);
        if (cVar7 == '\0') {
          cVar7 = (**(code **)(*plVar14 + 0x58))(plVar14);
          if (cVar7 == '\0') {
            if ((byte)LogPCG._0_1_ < 2) goto LAB_149c0adfe;
            pFVar15 = FText::FromName(&local_58,(FName *)local_1f8);
            pFVar16 = FText::AsLocalizable_Advanced_LocText
                                (&local_a8,L"PCGGetConsoleVariableElement",L"UnsupportedCVarType",
                                 L"Console variable \'{0}\' is not a supported type.");
            pFVar17 = FTextFormat::FTextFormat(&local_48,pFVar16,Default);
            pFVar15 = FText::Format<FText>(&local_b8,pFVar17,pFVar15);
            FText::ToString(pFVar15);
            FPCGContext::GetTaskName(param_1,&local_c8);
            FPCGContext::GetExecutionSourceName(param_1,&local_d8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (local_b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
            }
            goto LAB_149c0adf3;
          }
          (**(code **)(*plVar14 + 0xd8))(plVar14,&local_1f0);
          local_170 = PCGMetadataDomainID::Default;
          local_178 = FVar2;
          pFVar20 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_170);
          if ((pFVar20 == (FPCGMetadataDomain *)0x0) ||
             (this_05 = FPCGMetadataDomain::CreateAttribute<FString>
                                  (pFVar20,local_178,&local_1f0,true,false),
             this_05 == (FPCGMetadataAttribute<FString> *)0x0)) {
            bVar5 = false;
          }
          else {
            FPCGMetadataAttribute<FString>::SetValue(this_05,lVar19,&local_1f0);
            bVar5 = true;
          }
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_res20[0] = (float)(**(code **)(*plVar14 + 0xd0))();
          local_190 = PCGMetadataDomainID::Default;
          local_198 = FVar2;
          pFVar20 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_190);
          if ((pFVar20 == (FPCGMetadataDomain *)0x0) ||
             (this_04 = FPCGMetadataDomain::CreateAttribute<float>
                                  (pFVar20,local_198,local_res20,true,false),
             this_04 == (FPCGMetadataAttribute<float> *)0x0)) goto LAB_149c0aae0;
          FPCGMetadataAttribute<float>::SetValue(this_04,lVar19,local_res20);
          bVar5 = true;
        }
      }
      else {
        local_res18[0] = (**(code **)(*plVar14 + 200))();
        local_1b0 = PCGMetadataDomainID::Default;
        local_1b8 = FVar2;
        pFVar20 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_1b0);
        if ((pFVar20 == (FPCGMetadataDomain *)0x0) ||
           (this_03 = FPCGMetadataDomain::CreateAttribute<int>
                                (pFVar20,local_1b8,local_res18,true,false),
           this_03 == (FPCGMetadataAttribute<int> *)0x0)) goto LAB_149c0aae0;
        FPCGMetadataAttribute<int>::SetValue(this_03,lVar19,local_res18);
        bVar5 = true;
      }
    }
    else {
      local_res10[0] = (<lambda_1>)(**(code **)(*plVar14 + 0xc0))();
      local_1d0 = PCGMetadataDomainID::Default;
      local_1d8 = FVar2;
      pFVar20 = UPCGMetadata::FindOrCreateMetadataDomain(this_01,&local_1d0);
      if ((pFVar20 == (FPCGMetadataDomain *)0x0) ||
         (this_02 = FPCGMetadataDomain::CreateAttribute<bool>
                              (pFVar20,local_1d8,(bool *)local_res10,true,false),
         this_02 == (FPCGMetadataAttribute<bool> *)0x0)) {
LAB_149c0aae0:
        bVar5 = false;
      }
      else {
        FPCGMetadataAttribute<bool>::SetValue(this_02,lVar19,(bool *)local_res10);
        bVar5 = true;
      }
    }
    if (bVar5) {
      iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
      this_06 = (FPCGDataPtrWrapper *)
                ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar8 * 0x78);
      this_06[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_06[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_06[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_06[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_06[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this_06->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_06->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this_06[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_06[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_06[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_06[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_06[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_06[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_06[4].Data.field0_0x0 + 4) = 0;
      this_06[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_06[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this_06[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_06[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(this_06,(UPCGData *)local_200);
      goto LAB_149c0adfe;
    }
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149c0adfe;
    pFVar15 = FText::FromName(&local_78,(FName *)local_210.Data.AllocatorInstance.Data);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_e8,L"PCGGetConsoleVariableElement",L"AttributeCreationFailed",
                         L"Failed to create attribute {0}.");
    pFVar17 = FTextFormat::FTextFormat(&local_68,pFVar16,Default);
    pFVar15 = FText::Format<FText>(&local_f8,pFVar17,pFVar15);
    FText::ToString(pFVar15);
    FPCGContext::GetTaskName(param_1,&local_108);
    FPCGContext::GetExecutionSourceName(param_1,&local_118);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_a8.TextData.Reference = local_e8.TextData.Reference;
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      local_a8.TextData.Reference = local_e8.TextData.Reference;
    }
  }
LAB_149c0adf3:
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
LAB_149c0adfe:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

