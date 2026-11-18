// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ExecuteInternal @ 14da82850

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

bool __thiscall FPVImporterElement::ExecuteInternal(FPVImporterElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  void *_Src;
  code *pcVar2;
  ForAnyElementType _Src_00;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  UPCGSettings *pUVar8;
  TObjectPtr<UPCGSettings>_u_0 TVar9;
  FPCGTaggedData *pFVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  FText *pFVar12;
  UPVGrowthData *pUVar13;
  int iVar14;
  FPCGDataPtrWrapper *this_01;
  wchar_t *pwVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStackY_1f8 [32];
  FString local_1b8;
  <lambda_1> local_1a8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1a0;
  TObjectPtr<UPCGSettings>_u_0 local_190;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FText local_128;
  FText local_118;
  FStringFormatArg local_108;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId43,"FPVImporterElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVImporterSettings.cpp"
               ,0x2b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId43);
  }
  pwVar15 = L"";
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVImporterSettings.cpp"
                         ,0x2d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar8 = UPCGNode::GetSettings(this_00), pUVar8 == (UPCGSettings *)0x0)) {
      pFVar10 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPVImporterSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_1a8);
      if (pFVar10 != (FPCGTaggedData *)0x0) {
        local_190.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar10->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_190.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_190.DebugPtr);
        }
        if (local_190.DebugPtr != (UPCGSettings *)0x0) {
          pUVar7 = UPVImporterSettings::StaticClass();
          bVar3 = FObjectPtr::IsA(&local_190.ObjectPtr,pUVar7);
          TVar9 = local_190;
          if (bVar3) goto LAB_14da829e5;
        }
      }
    }
    else {
      pUVar8 = UPCGNode::GetSettings(this_00);
      TVar9.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar8);
      if (TVar9.DebugPtr != (UPCGSettings *)0x0) {
        pUVar7 = UPVImporterSettings::StaticClass();
        iVar6 = (int)pUVar7->_padding_;
        if ((iVar6 <= *(int *)((TVar9.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar9.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar7->_padding_)) goto LAB_14da829e5;
      }
    }
  }
  else {
    pUVar7 = UPVImporterSettings::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar7);
    if (bVar3) {
      TVar9.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_14da829e5;
    }
  }
  TVar9.DebugPtr = (UPCGSettings *)0x0;
LAB_14da829e5:
  if ((TVar9.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Nodes\\PVImporterSettings.cpp"
                         ,0x30,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = (int)TVar9.DebugPtr[1]._padding_;
  lVar16 = (longlong)local_1b8.Data.ArrayNum;
  _Src = (void *)TVar9.DebugPtr[1]._padding_;
  iVar6 = 0;
  if (local_1b8.Data.ArrayNum == 0) {
    local_1b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1b8.Data.ArrayNum,0,(ForAnyElementType *)&local_1b8,local_1b8.Data.ArrayNum
               ,&local_1b8.Data.ArrayMax);
    memcpy(local_1b8.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
  }
  ::FString::FString(&local_158,"Content");
  iVar14 = iVar6;
  if (local_158.Data.ArrayNum != 0) {
    pwVar15 = (wchar_t *)local_158.Data.AllocatorInstance.Data;
    iVar14 = local_158.Data.ArrayNum + -1;
  }
  bVar3 = ::FString::StartsWith(&local_1b8,pwVar15,iVar14,IgnoreCase);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pTVar11 = &FPaths::ProjectDir(&local_138)->Data;
    iVar14 = iVar6;
    if (local_1b8.Data.ArrayNum != 0) {
      iVar14 = local_1b8.Data.ArrayNum + -1;
    }
    if ((pTVar11->ArrayNum != 0) || (iVar5 = 1, iVar14 + 1 == 0)) {
      iVar5 = iVar6;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_188,pTVar11,iVar5 + iVar14 + 1);
    ::FString::PathAppend
              ((FString *)&local_188,(wchar_t *)local_1b8.Data.AllocatorInstance.Data,iVar14);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    local_1b8.Data.AllocatorInstance.Data = local_188.AllocatorInstance.Data;
    local_1b8.Data.ArrayNum = local_188.ArrayNum;
    local_1b8.Data.ArrayMax = local_188.ArrayMax;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  FManagedArrayCollection::FManagedArrayCollection(&local_e8);
  bVar3 = PV::LoadMegaPlantsJsonToCollection(&local_e8,&local_1b8,&local_168);
  if (bVar3) {
    bVar3 = PV::Utilities::IsValidPVData(&local_e8);
    _Src_00.Data = local_1b8.Data.AllocatorInstance.Data;
    if (bVar3) {
      PV::SetFoliagePaths(&local_e8,&local_1b8);
      pUVar13 = FPCGContext::NewObject_AnyThread<UPVGrowthData>(param_1);
      FManagedArrayCollection::operator=((FManagedArrayCollection *)&pUVar13->field_0x98,&local_e8);
      iVar6 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar6 + 1;
      this_01 = (FPCGDataPtrWrapper *)
                ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
      FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_01,(UPCGData *)pUVar13);
      this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
      this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined2 *)&this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
    }
    else {
      lVar16 = (longlong)local_1b8.Data.ArrayNum;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.Data.ArrayNum = local_1b8.Data.ArrayNum;
      if (local_1b8.Data.ArrayNum == 0) {
        local_178.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1b8.Data.ArrayNum,0,(ForAnyElementType *)&local_178,
                   local_1b8.Data.ArrayNum,&local_178.Data.ArrayMax);
        memcpy(local_178.Data.AllocatorInstance.Data,_Src_00.Data,lVar16 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_108,&local_178);
      local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_1a0.AllocatorInstance.Data,&local_108,1);
      ::FString::FormatImpl(&local_148,L"Invalid data in the imported json {0}",&local_1a0);
      pFVar12 = FText::FromString(&local_118,&local_148);
      PCGLog::LogErrorOnGraph(pFVar12,param_1);
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
      if ((FStringFormatArg *)local_1a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar12 = FText::FromString(&local_128,&local_168);
    PCGLog::LogErrorOnGraph(pFVar12,param_1);
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

