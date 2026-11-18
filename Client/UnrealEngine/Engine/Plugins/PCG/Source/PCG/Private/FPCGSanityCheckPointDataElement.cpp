// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// CanExecuteOnlyOnMainThread @ 149c01930

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
FPCGSanityCheckPointDataElement::CanExecuteOnlyOnMainThread
          (FPCGSanityCheckPointDataElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c1ae60

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
FPCGSanityCheckPointDataElement::ExecuteInternal
          (FPCGSanityCheckPointDataElement *this,FPCGContext *param_1)

{
  IPCGGraphExecutionSource **ppIVar1;
  int iVar2;
  UPCGNode *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UPCGSettings *pUVar8;
  TObjectPtr<UPCGSettings>_u_0 TVar9;
  FPCGTaggedData *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  longlong *plVar13;
  IPCGGraphExecutionSource *pIVar14;
  int iVar15;
  TObjectPtr<UPCGSettings>_u_0 TVar16;
  ForAnyElementType FVar17;
  FObjectPtr_u_0 *pFVar18;
  bool bVar19;
  <lambda_1> local_res10 [8];
  TObjectPtr<UPCGSettings>_u_0 local_res18;
  FObjectPtr_u_0 local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  
  TVar16.DebugPtr = (UPCGSettings *)0x0;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId40,"FPCGSanityCheckPointDataElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSanityCheckPointData.cpp"
               ,0x28);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId40);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar8 = UPCGNode::GetSettings(this_00), pUVar8 == (UPCGSettings *)0x0)) {
      pFVar10 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSanityCheckPointDataSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10[0]);
      if (pFVar10 != (FPCGTaggedData *)0x0) {
        local_res18.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar10->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_res18.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c1afaa;
          UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
        }
        if (local_res18.DebugPtr != (UPCGSettings *)0x0) {
          pUVar7 = UPCGSanityCheckPointDataSettings::StaticClass();
          bVar4 = FObjectPtr::IsA(&local_res18.ObjectPtr,pUVar7);
          TVar9 = local_res18;
          if (bVar4) goto LAB_149c1afad;
        }
      }
    }
    else {
      pUVar8 = UPCGNode::GetSettings(this_00);
      TVar9.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar8);
      if (TVar9.DebugPtr != (UPCGSettings *)0x0) {
        pUVar7 = UPCGSanityCheckPointDataSettings::StaticClass();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)((TVar9.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar9.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) goto LAB_149c1afad;
      }
    }
LAB_149c1afaa:
    TVar9.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar7 = UPCGSanityCheckPointDataSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar7);
    TVar9.DebugPtr = TVar16.DebugPtr;
    if (bVar4) {
      TVar9.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_149c1afad:
  if ((TVar9.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSanityCheckPointData.cpp"
                         ,0x2b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_e8,&PCGPinConstants::DefaultInputLabel);
  iVar2 = local_e8.ArrayNum;
  pFVar18 = (FObjectPtr_u_0 *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x78)
  ;
  FVar17.Data = local_e8.AllocatorInstance.Data;
  while( true ) {
    if (local_e8.ArrayNum != iVar2) {
      local_res10[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    iVar15 = TVar16._0_4_;
    if ((FObjectPtr_u_0 *)FVar17.Data == pFVar18) break;
    local_res20 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar17.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c1b03a:
      if (local_res20.Handle != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar7);
        if ((bVar4) && (local_res20.Handle != (UObject *)0x0)) {
          iVar6 = (**(code **)(*(longlong *)local_res20.Handle + 0x488))();
          TVar16._0_4_ = iVar15 + iVar6;
          TVar16._4_4_ = 0;
        }
      }
    }
    else if (local_res20.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res20.Handle);
      goto LAB_149c1b03a;
    }
    FVar17.Data = FVar17.Data + 0x78;
  }
  iVar2 = (int)TVar9.DebugPtr[1]._padding_;
  if (iVar15 < iVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_a8,L"PCGSanityCheckPointDataElement",L"NotEnoughPoints",
                           L"Expected at least {0} Points, found {1}");
      pFVar12 = FTextFormat::FTextFormat(&local_58,pFVar11,Default);
      pFVar11 = FText::Format<int,int>(&local_b8,pFVar12,iVar2,iVar15);
      FText::ToString(pFVar11);
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
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
    if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar4))
    goto LAB_149c1b358;
    if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
        (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pIVar14 = (param_1->ExecutionSource).InterfaceInstance;
  }
  else {
    iVar2 = *(int *)((longlong)&TVar9.DebugPtr[1]._padding_ + 4);
    if (iVar15 <= iVar2) {
      FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
      goto LAB_149c1b358;
    }
    if (1 < (byte)LogPCG._0_1_) {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"PCGSanityCheckPointDataElement",L"TooManyPoints",
                           L"Expected less than {0} Points, found {1}");
      pFVar12 = FTextFormat::FTextFormat(&local_48,pFVar11,Default);
      pFVar11 = FText::Format<int,int>(&local_78,pFVar12,iVar2,iVar15);
      FText::ToString(pFVar11);
      FPCGContext::GetTaskName(param_1,&local_88);
      FPCGContext::GetExecutionSourceName(param_1,&local_98);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    ppIVar1 = &(param_1->ExecutionSource).InterfaceInstance;
    if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar4))
    goto LAB_149c1b358;
    if (((*ppIVar1 == (IPCGGraphExecutionSource *)0x0) ||
        (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pIVar14 = *ppIVar1;
  }
  plVar13 = (longlong *)(**(code **)((longlong)*pIVar14 + 0x18))();
  (**(code **)(*plVar13 + 0x70))(plVar13);
LAB_149c1b358:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FPCGTaggedData *)local_e8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c35890

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
FPCGSanityCheckPointDataElement::SupportsBasePointDataInputs
          (FPCGSanityCheckPointDataElement *this,FPCGContext *param_1)

{
  return true;
}

