// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e88be40

UScriptStruct * __cdecl FPrintStringDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrintStringDataflowNode,(UObject *)pUVar1,
                         L"PrintStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton;
}

// GetType @ 14e88bed0

FName __thiscall FPrintStringDataflowNode::GetType(FPrintStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FPrintStringDataflowNode");
  return in_RDX;
}

// IsA @ 14e88bf40

bool __thiscall FPrintStringDataflowNode::IsA(FPrintStringDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FPrintStringDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88bfa8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88bfa8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88bfc6;
      }
    }
  }
  bVar5 = true;
LAB_14e88bfc6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88c010

FStructOnScope * __thiscall
FPrintStringDataflowNode::NewStructOnScope(FPrintStringDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPrintStringDataflowNode,(UObject *)pUVar2,
                           L"PrintStringDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88c0a0

void __thiscall
FPrintStringDataflowNode::SerializeInternal(FPrintStringDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrintStringDataflowNode,(UObject *)pUVar1,
                         L"PrintStringDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88c11d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88c130

FName __thiscall FPrintStringDataflowNode::GetDisplayName(FPrintStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PrintString");
  return in_RDX;
}

// GetCategory @ 14e88c160

FName __thiscall FPrintStringDataflowNode::GetCategory(FPrintStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Development");
  return in_RDX;
}

// GetTags @ 14e88c190

FString * __thiscall
FPrintStringDataflowNode::GetTags(FPrintStringDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88c300

UScriptStruct * __thiscall
FPrintStringDataflowNode::TypedScriptStruct(FPrintStringDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrintStringDataflowNode,(UObject *)pUVar1,
                         L"PrintStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPrintStringDataflowNode.OuterSingleton;
}

// Evaluate @ 14e88c510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPrintStringDataflowNode::Evaluate
          (FPrintStringDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *_Src;
  FDataflowInput *this_00;
  FString *pFVar1;
  longlong lVar2;
  FString local_38;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.Reference = &this->String;
  local_28.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  pFVar1 = FDataflowInput::GetValue<FString>(this_00,param_1,local_28.Reference);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)local_38.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (this->bPrintToScreen != false) {
    UEngine::AddOnScreenDebugMessage
              (GEngine,-1,this->Duration,(FColor)(this->Color).field0_0x0._s_0,&local_38,true,
               &UE::Math::TVector2<double>::UnitVector);
  }
  if ((this->bPrintToLog != false) && (2 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

