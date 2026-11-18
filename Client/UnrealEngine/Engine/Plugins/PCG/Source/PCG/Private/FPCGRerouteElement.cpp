// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c19ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGRerouteElement::ExecuteInternal(FPCGRerouteElement *this,FPCGContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FText *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_48;
  FString local_38;
  FText local_28;
  
  local_res10[0] = 0;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGReroute.cpp"
                         ,0x118,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (1 < (byte)LogPCG._0_1_) {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGRerouteSettings",L"DetachedReroute",
                         L"Reroute is not linked to anything. Reconnect to recreate to fix the error."
                        );
    FText::ToString(this_00);
    bVar3 = param_1 != (FPCGContext *)0x0;
    if (bVar3) {
      FPCGContext::GetTaskName(param_1,&local_38);
      FPCGContext::GetExecutionSourceName(param_1,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  iVar1 = (param_1->OutputData).TaggedData.ArrayNum;
  pFVar5 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((param_1->OutputData).TaggedData.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar5 == pFVar6) break;
    *(FName *)(pFVar5 + 0x60) = PCGPinConstants::DefaultOutputLabel;
    pFVar5 = pFVar5 + 0x78;
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c35860

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
FPCGRerouteElement::SupportsBasePointDataInputs(FPCGRerouteElement *this,FPCGContext *param_1)

{
  return true;
}

