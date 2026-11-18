// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// CanExecuteOnlyOnMainThread @ 149b67bf0

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
FPCGDataFromToolElement::CanExecuteOnlyOnMainThread
          (FPCGDataFromToolElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b789b0

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

bool __thiscall
FPCGDataFromToolElement::ExecuteInternal(FPCGDataFromToolElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar2;
  FScriptContainerElement *pFVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  FPCGTaggedData *pFVar12;
  longlong lVar13;
  FString *pFVar14;
  void *pvVar15;
  TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *pTVar16;
  UScriptStruct *pUVar17;
  ulong64 uVar18;
  int iVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_8c8 [32];
  <lambda_1> local_8a8;
  TObjectPtr<UPCGSettings>_u_0 local_8a0;
  FName local_898;
  FName local_890;
  FString local_888;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_8c8;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId90,"FPCGDataFromToolElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromTool.cpp"
               ,0x5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId90);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromTool.cpp"
                         ,0x5c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar12 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataFromTool>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_8a8);
      if (pFVar12 != (FPCGTaggedData *)0x0) {
        local_8a0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_8a0.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_8a0.DebugPtr);
        }
        if (local_8a0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPCGDataFromTool::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_8a0.ObjectPtr,pUVar9);
          TVar11 = local_8a0;
          if (bVar6) goto LAB_149b78b4b;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        pUVar9 = UPCGDataFromTool::StaticClass();
        iVar19 = (int)pUVar9->_padding_;
        if ((iVar19 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
            &pUVar9->_padding_)) goto LAB_149b78b4b;
      }
    }
LAB_149b78b48:
    TVar11.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar9 = UPCGDataFromTool::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (!bVar6) goto LAB_149b78b48;
    TVar11.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149b78b4b:
  if ((TVar11.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromTool.cpp"
                         ,0x5f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar6)) ||
      (pIVar2 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar2 == (IPCGGraphExecutionSource *)0x0)) ||
     (lVar13 = (**(code **)((longlong)*pIVar2 + 8))(), lVar13 == 0)) goto LAB_149b78e00;
  pUVar9 = Z_Construct_UClass_UPCGComponent_NoRegister();
  iVar19 = (int)pUVar9->_padding_;
  if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar19) ||
      ((longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar19 * 8)
       != &pUVar9->_padding_)) || ((FName)TVar11.DebugPtr[1]._padding_ == (FName)0x0))
  goto LAB_149b78e00;
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  local_898 = (FName)TVar11.DebugPtr[1]._padding_;
  ::FName::AppendString(&local_898,&local_878);
  if (TVar11.DebugPtr[1]._padding_ != 0) {
    if (local_878.End < local_878.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = L'.';
    local_878.CurPos = local_878.CurPos + 1;
    pFVar14 = ::FName::ToString((FName *)&TVar11.DebugPtr[1]._padding_,&local_888);
    iVar1 = (pFVar14->Data).ArrayNum;
    pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
    iVar19 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar19 = 0;
    }
    uVar18 = (ulong64)iVar19;
    if (local_878.End < local_878.CurPos + uVar18) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,uVar18);
    }
    if (iVar19 != 0) {
      pvVar15 = FGenericPlatformString::Memcpy(local_878.CurPos,pFVar3,uVar18 * 2);
      local_878.CurPos = (wchar_t *)((longlong)pvVar15 + uVar18 * 2);
    }
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  if (local_878.End < local_878.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_878,1);
  }
  *local_878.CurPos = L'\0';
  ::FName::FName(&local_890,local_878.Base);
  pTVar16 = FPCGInteractiveToolDataContainer::FindToolDataStruct
                      ((FPCGInteractiveToolDataContainer *)(lVar13 + 0x148),local_890);
  if (((pTVar16 != (TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)0x0) &&
      ((pTVar16->InstancedStruct).StructMemory != (uchar *)0x0)) &&
     ((pUVar4 = (pTVar16->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
      pUVar4 != (UScriptStruct *)0x0 &&
      (pUVar17 = FPCGInteractiveToolWorkingData::StaticStruct(), pUVar17 != (UScriptStruct *)0x0))))
  {
    iVar19 = (int)pUVar17->_padding_;
    if (((int)pUVar4->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar17->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar20 = (longlong *)(pTVar16->InstancedStruct).StructMemory;
      pUVar4 = (pTVar16->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
      if ((plVar20 == (longlong *)0x0) || (pUVar4 == (UScriptStruct *)0x0)) {
LAB_149b78dd5:
        plVar20 = (longlong *)0x0;
      }
      else {
        pUVar17 = FPCGInteractiveToolWorkingData::StaticStruct();
        if (pUVar4 != pUVar17) {
          pUVar17 = FPCGInteractiveToolWorkingData::StaticStruct();
          if (pUVar17 != (UScriptStruct *)0x0) {
            iVar19 = (int)pUVar17->_padding_;
            if (((int)pUVar4->_padding_ < iVar19) ||
               ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar19 * 8) !=
                &pUVar17->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) goto LAB_149b78dd8;
          }
          goto LAB_149b78dd5;
        }
      }
LAB_149b78dd8:
      if ((plVar20 != (longlong *)0x0) &&
         (cVar8 = (**(code **)(*plVar20 + 8))(plVar20), cVar8 != '\0')) {
        (**(code **)(*plVar20 + 0x10))(plVar20,param_1);
      }
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
LAB_149b78e00:
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149b931c0

bool __thiscall
FPCGDataFromToolElement::IsCacheable(FPCGDataFromToolElement *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149b988f0

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
FPCGDataFromToolElement::SupportsBasePointDataInputs
          (FPCGDataFromToolElement *this,FPCGContext *param_1)

{
  return true;
}

