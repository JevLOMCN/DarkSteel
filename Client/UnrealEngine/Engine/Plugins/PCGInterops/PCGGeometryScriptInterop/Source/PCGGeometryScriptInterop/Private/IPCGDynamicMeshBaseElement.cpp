// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 3

// CopyOrSteal @ 14cee9d10

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

UPCGDynamicMeshData * __cdecl
IPCGDynamicMeshBaseElement::CopyOrSteal(FPCGTaggedData *param_1,FPCGContext *param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  UPCGDynamicMeshData *pUVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  UObject *pUVar9;
  FName *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  UPCGSpatialData *pUVar15;
  FObjectPtr_u_0 FVar16;
  ulonglong uVar17;
  bool bVar18;
  FObjectPtr_u_0 local_res8;
  FName local_res10;
  FName local_res18;
  FText local_a8;
  FText local_98;
  FString local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  uVar17 = 0;
  local_res8.Handle = local_res8.Handle & 0xffffffff00000000;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId43,"IPCGDynamicMeshBaseElement::CopyOrSteal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGDynamicMeshBaseElement.cpp"
               ,0x2b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId43);
  }
  if ((param_2 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGDynamicMeshBaseElement.cpp"
                         ,0x2d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UPCGDynamicMeshData *)(*pcVar2)();
    return pUVar6;
  }
  local_res8 = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UPCGDynamicMeshData *)local_res8.Handle != (UPCGDynamicMeshData *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  if ((UPCGDynamicMeshData *)local_res8.Handle != (UPCGDynamicMeshData *)0x0) {
    pUVar7 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar7);
    FVar16 = local_res8;
    pTVar3 = PCGDynamicMeshBaseElement::CVarPCGDynamicMeshAllowSteal.Ref;
    if ((bVar5) && ((UPCGDynamicMeshData *)local_res8.Handle != (UPCGDynamicMeshData *)0x0)) {
      if (param_1->bIsUsedMultipleTimes == false) {
        bVar5 = IsInParallelGameThread();
        if (bVar5) {
LAB_14cee9e48:
          uVar8 = uVar17;
        }
        else {
          bVar5 = IsInGameThread();
          uVar8 = 1;
          if (bVar5) goto LAB_14cee9e48;
        }
        pTVar4 = PCGDynamicMeshBaseElement::CVarPCGDynamicMeshStealVerbose.Ref;
        if (pTVar3->ShadowedValue[uVar8] != false) {
          bVar5 = IsInParallelGameThread();
          if (bVar5) {
LAB_14cee9e7b:
            uVar8 = uVar17;
          }
          else {
            bVar5 = IsInGameThread();
            uVar8 = 4;
            if (bVar5) goto LAB_14cee9e7b;
          }
          iVar1 = *(int *)((longlong)pTVar4->ShadowedValue + uVar8);
          if (iVar1 != 0) {
            bVar5 = FWeakObjectPtr::IsValid(&(param_1->OriginatingNode).WeakPtr);
            if (bVar5) {
              pUVar9 = FWeakObjectPtr::Get(&(param_1->OriginatingNode).WeakPtr);
              pFVar10 = (FName *)&pUVar9->field_0x18;
            }
            else {
              pFVar10 = ::FName::FName(&local_res18,L"*UnknownSource*");
            }
            local_res10 = *pFVar10;
            pFVar11 = FText::FromName(&local_68,&param_1->Pin);
            pFVar12 = FText::FromName(&local_58,&local_res10);
            pFVar13 = FText::AsLocalizable_Advanced_LocText
                                (&local_98,L"PCGDynamicMeshBaseElement",L"StealVerbose",
                                 L"[STEAL DATA] Data, originating from node {0}, on pin {1} was stolen."
                                );
            pFVar14 = FTextFormat::FTextFormat(&local_48,pFVar13,Default);
            FText::Format<FText,FText>(&local_a8,pFVar14,pFVar12,pFVar11);
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
            if (iVar1 == 1) {
              if (2 < (byte)LogPCG._0_1_) {
                FText::ToString(&local_a8);
                if (param_2 != (FPCGContext *)0x0) {
                  FPCGContext::GetTaskName(param_2,&local_78);
                  uVar17 = 3;
                  FPCGContext::GetExecutionSourceName(param_2,&local_88);
                }
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (((uVar17 & 2) != 0) &&
                   (uVar17 = (ulonglong)((uint)uVar17 & 0xfffffffd),
                   local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
                if (((uVar17 & 1) != 0) &&
                   (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              PCGLog::LogWarningOnGraph(&local_a8,param_2);
            }
            if (local_a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
            }
          }
          goto LAB_14ceea052;
        }
      }
      pUVar15 = (UPCGSpatialData *)
                (**(code **)(*(longlong *)FVar16.Handle + 0x310))(FVar16.Handle,param_2,1);
      FVar16.Handle = (UObject *)CastChecked<UPCGDynamicMeshData,UPCGSpatialData>(pUVar15);
      goto LAB_14ceea052;
    }
  }
  FVar16.Handle = (UObject *)0x0;
LAB_14ceea052:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (UPCGDynamicMeshData *)FVar16.Handle;
}

// IsCacheable @ 14cef41a0

bool __thiscall
IPCGDynamicMeshBaseElement::IsCacheable(IPCGDynamicMeshBaseElement *this,UPCGSettings *param_1)

{
  return false;
}

// ShouldVerifyIfOutputsAreUsedMultipleTimes @ 14cef9b70

bool __thiscall
IPCGDynamicMeshBaseElement::ShouldVerifyIfOutputsAreUsedMultipleTimes
          (IPCGDynamicMeshBaseElement *this,UPCGSettings *param_1)

{
  return true;
}

