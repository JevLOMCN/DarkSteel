// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b7ffb0

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
FPCGFilterByAttributeElement::ExecuteInternal
          (FPCGFilterByAttributeElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *this_00;
  char cVar1;
  EPCGFilterByAttributeMode EVar2;
  UPCGNode *this_01;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  FString *pFVar11;
  uint uVar12;
  FName FVar13;
  FPCGDataCollection *this_02;
  int *piVar14;
  FPCGTaggedData *pFVar15;
  FPCGTaggedData *pFVar16;
  FPCGTaggedData *pFVar17;
  uint uVar18;
  bool bVar19;
  <lambda_1> local_res10;
  TObjectPtr<UPCGSettings>_u_0 local_res18;
  FPCGTaggedData *local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId374,"FPCGFilterByAttributeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByAttribute.cpp"
               ,0x176);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId374);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByAttribute.cpp"
                         ,0x177,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_01 = param_1->Node;
    if ((this_01 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_01), pUVar9 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterByAttributeSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar15 != (FPCGTaggedData *)0x0) {
        local_res18.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGFilterByAttributeSettings *)local_res18.DebugPtr ==
              (UPCGFilterByAttributeSettings *)0x0) goto LAB_149b800de;
          UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
        }
        if ((UPCGFilterByAttributeSettings *)local_res18.DebugPtr !=
            (UPCGFilterByAttributeSettings *)0x0) {
          pUVar8 = UPCGFilterByAttributeSettings::StaticClass();
          bVar4 = FObjectPtr::IsA(&local_res18.ObjectPtr,pUVar8);
          TVar10 = local_res18;
          if (bVar4) goto LAB_149b800e0;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_01);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if ((UPCGFilterByAttributeSettings *)TVar10.DebugPtr != (UPCGFilterByAttributeSettings *)0x0)
      {
        pUVar8 = UPCGFilterByAttributeSettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_149b800e0;
      }
    }
LAB_149b800de:
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPCGFilterByAttributeSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar4) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar10.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149b800e0:
  this_02 = &param_1->InputData;
  if (((UPCGFilterByAttributeSettings *)TVar10.DebugPtr == (UPCGFilterByAttributeSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByAttribute.cpp"
                         ,0x17a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar11 = ::FName::ToString((FName *)((longlong)&TVar10.DebugPtr[1]._padding_ + 4),&local_48);
  PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_58,pFVar11);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FPCGDataCollection::GetInputsByPin(this_02,&local_68,&PCGPinConstants::DefaultInputLabel);
  FPCGDataCollection::GetInputsByPin(this_02,&local_78,&PCGAttributeFilterConstants::FilterLabel);
  FPCGDataCollection::GetInputsByPin(this_02,&local_88,&PCGAttributeFilterConstants::FilterMinLabel)
  ;
  FPCGDataCollection::GetInputsByPin(this_02,&local_98,&PCGAttributeFilterConstants::FilterMaxLabel)
  ;
  this_00 = &param_1->OutputData;
  if (local_68.ArrayNum == 0) goto LAB_149b80578;
  if (*(EPCGFilterByAttributeMode *)&TVar10.DebugPtr[1]._padding_ == FilterByValue) {
    cVar1 = ((FPCGFilterByAttributeThresholdSettings *)&TVar10.DebugPtr[1].CachedElement)->
            bUseConstantThreshold;
    FVar13 = PCGAttributeFilterConstants::FilterLabel;
    iVar7 = local_78.ArrayNum;
joined_r0x000149b8025b:
    if (((cVar1 == '\0') && (local_68.ArrayNum != iVar7)) && (iVar7 != 1)) {
LAB_149b80270:
      PCGLog::InputOutput::LogInvalidCardinalityError
                (PCGPinConstants::DefaultInputLabel,FVar13,param_1);
      FPCGDataCollection::operator=(this_00,this_02);
      goto LAB_149b80578;
    }
  }
  else if (*(EPCGFilterByAttributeMode *)&TVar10.DebugPtr[1]._padding_ == FilterByValueRange) {
    if (((*(char *)(TVar10.DebugPtr[3].CacheLock.CriticalSection.Opaque3 + 2) != '\0') ||
        (local_68.ArrayNum == local_88.ArrayNum)) ||
       (FVar13 = PCGAttributeFilterConstants::FilterMinLabel, local_88.ArrayNum == 1)) {
      cVar1 = (char)TVar10.DebugPtr[6]._padding_;
      FVar13 = PCGAttributeFilterConstants::FilterMaxLabel;
      iVar7 = local_98.ArrayNum;
      goto joined_r0x000149b8025b;
    }
    goto LAB_149b80270;
  }
  uVar18 = 0;
  if (0 < local_68.ArrayNum) {
    do {
      piVar14 = &(param_1->OutputData).TaggedData.ArrayMax;
      uVar6 = 0;
      if ((int)uVar18 < local_68.ArrayNum) {
        uVar6 = ~uVar18 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar15 = (FPCGTaggedData *)(this_00->TaggedData).AllocatorInstance.Data;
      pFVar17 = (FPCGTaggedData *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x78);
      if (((pFVar15 <= pFVar17) && (pFVar17 < pFVar15 + *piVar14)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
      if (iVar7 == *piVar14) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)this_00,piVar14);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
      local_res20 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((this_00->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar7 * 0x78),pFVar17);
      local_res20->Pin = PCGPinConstants::DefaultOutFilterLabel;
      EVar2 = *(EPCGFilterByAttributeMode *)&TVar10.DebugPtr[1]._padding_;
      if (EVar2 == FilterByExistence) {
        bVar4 = PCGFilterByAttributeElement::FilterByExistence
                          (pFVar17,(UPCGFilterByAttributeSettings *)TVar10.DebugPtr,&local_58);
LAB_149b80542:
        if (bVar4 != false) {
          local_res20->Pin = PCGPinConstants::DefaultInFilterLabel;
        }
      }
      else {
        if (EVar2 == FilterByValue) {
          if (((FPCGFilterByAttributeThresholdSettings *)&TVar10.DebugPtr[1].CachedElement)->
              bUseConstantThreshold == false) {
            uVar12 = (int)uVar18 % local_78.ArrayNum;
            uVar6 = 0;
            if ((int)uVar12 < local_78.ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            bVar4 = PCGFilterByAttributeElement::FilterByValue
                              (pFVar17,(UPCGFilterByAttributeSettings *)TVar10.DebugPtr,
                               (FPCGTaggedData *)
                               (local_78.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x78),
                               param_1);
          }
          else {
            bVar4 = PCGFilterByAttributeElement::FilterByValue
                              (pFVar17,(UPCGFilterByAttributeSettings *)TVar10.DebugPtr,
                               (FPCGTaggedData *)0x0,param_1);
          }
          goto LAB_149b80542;
        }
        if (EVar2 == FilterByValueRange) {
          if (*(char *)(TVar10.DebugPtr[3].CacheLock.CriticalSection.Opaque3 + 2) == '\0') {
            uVar12 = (int)uVar18 % local_88.ArrayNum;
            uVar6 = 0;
            if ((int)uVar12 < local_88.ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar15 = (FPCGTaggedData *)
                      (local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x78);
          }
          else {
            pFVar15 = (FPCGTaggedData *)0x0;
          }
          if ((char)TVar10.DebugPtr[6]._padding_ == '\0') {
            uVar12 = (int)uVar18 % local_98.ArrayNum;
            uVar6 = 0;
            if ((int)uVar12 < local_98.ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar16 = (FPCGTaggedData *)
                      (local_98.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x78);
          }
          else {
            pFVar16 = (FPCGTaggedData *)0x0;
          }
          bVar4 = PCGFilterByAttributeElement::FilterByValueRange
                            (pFVar17,(UPCGFilterByAttributeSettings *)TVar10.DebugPtr,pFVar15,
                             pFVar16,param_1);
          goto LAB_149b80542;
        }
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < local_68.ArrayNum);
  }
LAB_149b80578:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FPCGTaggedData *)local_98.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FPCGTaggedData *)local_68.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88bd0

EPCGElementExecutionLoopMode __thiscall
FPCGFilterByAttributeElement::ExecutionLoopMode
          (FPCGFilterByAttributeElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98a60

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
FPCGFilterByAttributeElement::SupportsBasePointDataInputs
          (FPCGFilterByAttributeElement *this,FPCGContext *param_1)

{
  return true;
}

