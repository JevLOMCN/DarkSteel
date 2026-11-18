// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// ExecuteInternal @ 149efcb50

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
FPCGInputOutputElement::ExecuteInternal(FPCGInputOutputElement *this,FPCGContext *param_1)

{
  FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  return true;
}

// IsCacheable @ 149f07960

bool __thiscall
FPCGInputOutputElement::IsCacheable(FPCGInputOutputElement *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149f14370

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
FPCGInputOutputElement::SupportsBasePointDataInputs
          (FPCGInputOutputElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 149f14390

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
FPCGInputOutputElement::SupportsGPUResidentData(FPCGInputOutputElement *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  FPCGStackContext *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UPCGSettings *pUVar6;
  FObjectPtr_u_0 FVar7;
  UClass *pUVar8;
  FObjectPtr_u_0 *pFVar9;
  FPCGStack *this_02;
  FObjectPtr_u_0 local_res10;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGInputOutputSettings.cpp"
                         ,0x3e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar6 = UPCGNode::GetSettings(this_00), pUVar6 == (UPCGSettings *)0x0)) {
    pFVar9 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGraphInputOutputSettings>_::__l2::<lambda_1>_>
                       (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
    if (pFVar9 != (FObjectPtr_u_0 *)0x0) {
      local_res10 = (FObjectPtr_u_0)pFVar9->Handle;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0)) {
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
        pUVar8 = UPCGGraphInputOutputSettings::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar8);
        FVar7 = local_res10;
        if (bVar3) goto LAB_149f1448c;
      }
    }
  }
  else {
    pUVar6 = UPCGNode::GetSettings(this_00);
    FVar7.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar6);
    if ((UPCGSettings *)FVar7.Handle != (UPCGSettings *)0x0) {
      pUVar8 = UPCGGraphInputOutputSettings::StaticClass();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&(FVar7.Handle)->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(FVar7.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) goto LAB_149f1448c;
    }
  }
  FVar7.Handle = (UObject *)0x0;
LAB_149f1448c:
  this_02 = (FPCGStack *)0x0;
  if ((((param_1->StackHandle).StackContext.Object != (FPCGStackContext *)0x0) &&
      (-1 < (param_1->StackHandle).StackIndex)) &&
     (this_01 = (param_1->StackHandle).StackContext.Object,
     (param_1->StackHandle).StackIndex < (this_01->Stacks).ArrayNum)) {
    this_02 = FPCGStackContext::GetStack(this_01,(param_1->StackHandle).StackIndex);
  }
  if ((UPCGSettings *)FVar7.Handle != (UPCGSettings *)0x0) {
    if (this_02 != (FPCGStack *)0x0) {
      if (FVar7.Handle[7].field_0x21 == '\0') {
        uVar5 = FPCGStack::GetNumGraphLevels(this_02);
        return uVar5 != 1;
      }
      return true;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2514396034013069378>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGInputOutputSettings.cpp"
                       ,0x42,"Stack");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

