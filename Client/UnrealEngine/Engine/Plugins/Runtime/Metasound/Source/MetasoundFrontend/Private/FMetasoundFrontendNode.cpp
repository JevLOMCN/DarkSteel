// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// StaticStruct @ 14ad72320

UScriptStruct * __cdecl FMetasoundFrontendNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendNode,(UObject *)pUVar1,
                         L"MetasoundFrontendNode");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendNode.OuterSingleton;
}

// FMetasoundFrontendNode @ 14ad9b170

FMetasoundFrontendNode * __thiscall
FMetasoundFrontendNode::FMetasoundFrontendNode
          (FMetasoundFrontendNode *this,FMetasoundFrontendClass *param_1)

{
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  undefined8 uStack_10;
  
  local_18.DebugPtr = (UScriptStruct *)0x0;
  uStack_10 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_18.ObjectPtr);
  FMetasoundFrontendNode
            (this,param_1,
             (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)&local_18.ObjectPtr);
  return this;
}

// FMetasoundFrontendNode @ 14ad9b1c0

FMetasoundFrontendNode * __thiscall
FMetasoundFrontendNode::FMetasoundFrontendNode
          (FMetasoundFrontendNode *this,FMetasoundFrontendClass *param_1,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *param_2)

{
  FMetasoundFrontendNodeInterface *pFVar1;
  TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  TInstancedStruct<FMetasoundFrontendClassInterface> *this_00;
  TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UScriptStruct *pUVar5;
  uchar *puVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  FString *pFVar13;
  FName *pFVar14;
  UPackage *pUVar15;
  undefined8 *puVar16;
  FMetasoundFrontendClassInterface *pFVar17;
  FMetasoundFrontendNodeInterface *pFVar18;
  int iVar19;
  FMetasoundFrontendClassInterface *pFVar20;
  TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *pTVar21;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  FMetasoundFrontendClass *local_res10;
  FInstancedStruct *local_res18;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res20;
  TObjectPtr<UScriptStruct_const_>_u_0 local_88 [2];
  FMetasoundFrontendNodeInterface local_78;
  
  this->ID = Metasound::FrontendInvalidID;
  uVar9 = (param_1->ID).B;
  uVar10 = (param_1->ID).C;
  uVar11 = (param_1->ID).D;
  (this->ClassID).A = (param_1->ID).A;
  (this->ClassID).B = uVar9;
  (this->ClassID).C = uVar10;
  (this->ClassID).D = uVar11;
  local_res10 = param_1;
  local_res18 = &param_2->InstancedStruct;
  pFVar13 = ::FName::ToString(&(param_1->Metadata).ClassName.Name,(FString *)&local_88[0].ObjectPtr)
  ;
  iVar4 = (pFVar13->Data).ArrayNum;
  iVar19 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar19 = 0;
  }
  pFVar14 = ::FName::FName((FName *)&local_res8.ObjectPtr,iVar19,
                           (wchar_t *)(pFVar13->Data).AllocatorInstance.Data,FNAME_Add);
  this->Name = *pFVar14;
  if (local_88[0].DebugPtr != (UScriptStruct *)0x0) {
    FMemory::Free(local_88[0].DebugPtr);
  }
  pFVar1 = &this->Interface;
  (this->InputLiterals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar21 = &(this->Interface).Outputs;
  (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar2 = &(this->Interface).Environment;
  (this->Interface).Outputs.ArrayNum = 0;
  (this->Interface).Outputs.ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Interface).Environment.ArrayNum = 0;
  (this->Interface).Environment.ArrayMax = 0;
  (this->Interface).Inputs.ArrayNum = 0;
  (this->Interface).Inputs.ArrayMax = 0;
  (this->InputLiterals).ArrayNum = 0;
  (this->InputLiterals).ArrayMax = 0;
  pUVar5 = (param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
  puVar6 = (param_2->InstancedStruct).StructMemory;
  (this->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Configuration).InstancedStruct.StructMemory = puVar6;
  this_00 = &this->ClassInterfaceOverride;
  (param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (param_2->InstancedStruct).StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&this_00->InstancedStruct);
  local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)
               (this->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  plVar7 = (longlong *)(this->Configuration).InstancedStruct.StructMemory;
  pFVar17 = (FMetasoundFrontendClassInterface *)0x0;
  if ((plVar7 == (longlong *)0x0) || (local_res8.DebugPtr == (UScriptStruct *)0x0))
  goto LAB_14ad9b3e5;
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar15 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendNodeConfiguration,
                         (UObject *)pUVar15,L"MetaSoundFrontendNodeConfiguration");
  }
  if (local_res8.DebugPtr !=
      Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar15 = Z_Construct_UPackage__Script_MetasoundFrontend();
      Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundFrontendNodeConfiguration,
                           (UObject *)pUVar15,L"MetaSoundFrontendNodeConfiguration");
      if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton !=
          (UScriptStruct *)0x0) goto LAB_14ad9b330;
    }
    else {
LAB_14ad9b330:
      iVar19 = (int)(Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.
                    OuterSingleton)->_padding_;
      if (((int)(local_res8.DebugPtr)->_padding_ < iVar19) ||
         ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar19 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMetaSoundFrontendNodeConfiguration.OuterSingleton)->
           _padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) goto LAB_14ad9b375;
    }
    local_res20 = &local_res8;
    bVar12 = `UE::StructUtils::
             GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>'
             ::__l7::<lambda_1>::operator()(&local_res20);
    pFVar17 = (FMetasoundFrontendClassInterface *)0x0;
    if (!bVar12) goto LAB_14ad9b3e5;
  }
LAB_14ad9b375:
  puVar16 = (undefined8 *)(**(code **)(*plVar7 + 8))(plVar7,local_88,local_res10);
  if (this_00 != (TInstancedStruct<FMetasoundFrontendClassInterface> *)puVar16) {
    FInstancedStruct::Reset(&this_00->InstancedStruct);
    puVar6 = (uchar *)puVar16[1];
    pUVar5 = (UScriptStruct *)*puVar16;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this_00->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar5;
    (this->ClassInterfaceOverride).InstancedStruct.StructMemory = puVar6;
    *puVar16 = 0;
    puVar16[1] = 0;
    param_2 = (TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *)local_res18;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_88[0].ObjectPtr);
  pFVar17 = TInstancedStruct<FMetasoundFrontendClassInterface>::
            GetPtr<FMetasoundFrontendClassInterface,void>(this_00);
LAB_14ad9b3e5:
  pFVar20 = &local_res10->Interface;
  if (pFVar17 != (FMetasoundFrontendClassInterface *)0x0) {
    pFVar20 = pFVar17;
  }
  pFVar18 = FMetasoundFrontendNodeInterface::FMetasoundFrontendNodeInterface(&local_78,pFVar20);
  if (pFVar1 != pFVar18) {
    pFVar8 = (pFVar1->Inputs).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pFVar1->Inputs).AllocatorInstance.Data = (pFVar18->Inputs).AllocatorInstance.Data;
    (pFVar18->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Interface).Inputs.ArrayNum = (pFVar18->Inputs).ArrayNum;
    (this->Interface).Inputs.ArrayMax = (pFVar18->Inputs).ArrayMax;
    (pFVar18->Inputs).ArrayNum = 0;
    (pFVar18->Inputs).ArrayMax = 0;
  }
  pTVar3 = &pFVar18->Outputs;
  if (pTVar21 != pTVar3) {
    pFVar8 = (pTVar21->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar21->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Interface).Outputs.ArrayNum = (pFVar18->Outputs).ArrayNum;
    (this->Interface).Outputs.ArrayMax = (pFVar18->Outputs).ArrayMax;
    (pFVar18->Outputs).ArrayNum = 0;
    (pFVar18->Outputs).ArrayMax = 0;
  }
  pTVar21 = &pFVar18->Environment;
  if (pTVar2 != pTVar21) {
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar21->AllocatorInstance).Data;
    (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Interface).Environment.ArrayNum = (pFVar18->Environment).ArrayNum;
    (this->Interface).Environment.ArrayMax = (pFVar18->Environment).ArrayMax;
    (pFVar18->Environment).ArrayNum = 0;
    (pFVar18->Environment).ArrayMax = 0;
  }
  if (local_78.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Environment.AllocatorInstance.Data);
  }
  if (local_78.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Outputs.AllocatorInstance.Data);
  }
  if (local_78.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Inputs.AllocatorInstance.Data);
  }
  FInstancedStruct::Reset(&param_2->InstancedStruct);
  return this;
}

// ~FMetasoundFrontendNode @ 14ad9e5c0

void __thiscall FMetasoundFrontendNode::~FMetasoundFrontendNode(FMetasoundFrontendNode *this)

{
  FScriptContainerElement *pFVar1;
  
  FInstancedStruct::Reset(&(this->ClassInterfaceOverride).InstancedStruct);
  FInstancedStruct::Reset(&(this->Configuration).InstancedStruct);
  DestructItems<FMetasoundFrontendVertexLiteral,int>
            ((FMetasoundFrontendVertexLiteral *)(this->InputLiterals).AllocatorInstance.Data,
             (this->InputLiterals).ArrayNum);
  pFVar1 = (this->InputLiterals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).Environment.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).Outputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).Inputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FMetasoundFrontendNode @ 14addccc0

FMetasoundFrontendNode * __thiscall
FMetasoundFrontendNode::FMetasoundFrontendNode
          (FMetasoundFrontendNode *this,FMetasoundFrontendNode *param_1)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (param_1->ID).B;
  uVar4 = (param_1->ID).C;
  uVar5 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar3;
  (this->ID).C = uVar4;
  (this->ID).D = uVar5;
  uVar3 = (param_1->ClassID).B;
  uVar4 = (param_1->ClassID).C;
  uVar5 = (param_1->ClassID).D;
  (this->ClassID).A = (param_1->ClassID).A;
  (this->ClassID).B = uVar3;
  (this->ClassID).C = uVar4;
  (this->ClassID).D = uVar5;
  this->Name = param_1->Name;
  (this->Interface).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Inputs.AllocatorInstance.Data =
       (param_1->Interface).Inputs.AllocatorInstance.Data;
  (param_1->Interface).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Inputs.ArrayNum = (param_1->Interface).Inputs.ArrayNum;
  (this->Interface).Inputs.ArrayMax = (param_1->Interface).Inputs.ArrayMax;
  (param_1->Interface).Inputs.ArrayNum = 0;
  (param_1->Interface).Inputs.ArrayMax = 0;
  (this->Interface).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Outputs.AllocatorInstance.Data =
       (param_1->Interface).Outputs.AllocatorInstance.Data;
  (param_1->Interface).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Outputs.ArrayNum = (param_1->Interface).Outputs.ArrayNum;
  (this->Interface).Outputs.ArrayMax = (param_1->Interface).Outputs.ArrayMax;
  (param_1->Interface).Outputs.ArrayNum = 0;
  (param_1->Interface).Outputs.ArrayMax = 0;
  (this->Interface).Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Environment.AllocatorInstance.Data =
       (param_1->Interface).Environment.AllocatorInstance.Data;
  (param_1->Interface).Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interface).Environment.ArrayNum = (param_1->Interface).Environment.ArrayNum;
  (this->Interface).Environment.ArrayMax = (param_1->Interface).Environment.ArrayMax;
  (param_1->Interface).Environment.ArrayNum = 0;
  (param_1->Interface).Environment.ArrayMax = 0;
  (this->InputLiterals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputLiterals).AllocatorInstance.Data = (param_1->InputLiterals).AllocatorInstance.Data;
  (param_1->InputLiterals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputLiterals).ArrayNum = (param_1->InputLiterals).ArrayNum;
  (this->InputLiterals).ArrayMax = (param_1->InputLiterals).ArrayMax;
  (param_1->InputLiterals).ArrayNum = 0;
  (param_1->InputLiterals).ArrayMax = 0;
  pUVar1 = (param_1->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  puVar2 = (param_1->Configuration).InstancedStruct.StructMemory;
  (this->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Configuration).InstancedStruct.StructMemory = puVar2;
  (param_1->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (param_1->Configuration).InstancedStruct.StructMemory = (uchar *)0x0;
  pUVar1 = (param_1->ClassInterfaceOverride).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  puVar2 = (param_1->ClassInterfaceOverride).InstancedStruct.StructMemory;
  (this->ClassInterfaceOverride).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ClassInterfaceOverride).InstancedStruct.StructMemory = puVar2;
  (param_1->ClassInterfaceOverride).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
       (UScriptStruct *)0x0;
  (param_1->ClassInterfaceOverride).InstancedStruct.StructMemory = (uchar *)0x0;
  return this;
}

