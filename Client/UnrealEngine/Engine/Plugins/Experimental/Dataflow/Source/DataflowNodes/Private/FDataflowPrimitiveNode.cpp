// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 5

// StaticStruct @ 14dac4380

UScriptStruct * __cdecl FDataflowPrimitiveNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPrimitiveNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowPrimitiveNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPrimitiveNode,(UObject *)pUVar1,
                         L"DataflowPrimitiveNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowPrimitiveNode.OuterSingleton;
}

// IsA @ 14dac43c0

bool __thiscall FDataflowPrimitiveNode::IsA(FDataflowPrimitiveNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FDataflowPrimitiveNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dac4428;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dac4428:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dac4446;
      }
    }
  }
  bVar5 = true;
LAB_14dac4446:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// HasRenderCollectionPrimitives @ 14dac4480

bool __thiscall FDataflowPrimitiveNode::HasRenderCollectionPrimitives(FDataflowPrimitiveNode *this)

{
  return true;
}

// AddPrimitiveComponents @ 14dac4490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDataflowPrimitiveNode::AddPrimitiveComponents
          (FDataflowPrimitiveNode *this,FContext *param_1,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_2,TObjectPtr<UObject> param_3,
          TObjectPtr<AActor> param_4,
          TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ~FDataflowPrimitiveNode @ 14dace3c0

void __thiscall FDataflowPrimitiveNode::~FDataflowPrimitiveNode(FDataflowPrimitiveNode *this)

{
  *(undefined ***)this = &___7FDataflowPrimitiveNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

