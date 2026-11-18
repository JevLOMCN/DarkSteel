// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8e2640

UScriptStruct * __cdecl FWriteStringToFile::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWriteStringToFile,(UObject *)pUVar1,
                         L"WriteStringToFile");
  }
  return Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton;
}

// GetType @ 14e8e27b0

FName __thiscall FWriteStringToFile::GetType(FWriteStringToFile *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FWriteStringToFile");
  return in_RDX;
}

// IsA @ 14e8e2830

bool __thiscall FWriteStringToFile::IsA(FWriteStringToFile *this,FName param_1)

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
  ::FName::FName(local_res18,"FWriteStringToFile");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8e2898;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8e2898:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8e28b6;
      }
    }
  }
  bVar5 = true;
LAB_14e8e28b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8e28f0

FStructOnScope * __thiscall FWriteStringToFile::NewStructOnScope(FWriteStringToFile *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FWriteStringToFile,(UObject *)pUVar2,
                           L"WriteStringToFile");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8e2aa0

void __thiscall FWriteStringToFile::SerializeInternal(FWriteStringToFile *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWriteStringToFile,(UObject *)pUVar1,
                         L"WriteStringToFile");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8e2b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8e2b60

FName __thiscall FWriteStringToFile::GetDisplayName(FWriteStringToFile *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Write String to File");
  return in_RDX;
}

// GetCategory @ 14e8e2b90

FName __thiscall FWriteStringToFile::GetCategory(FWriteStringToFile *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Development");
  return in_RDX;
}

// GetTags @ 14e8e2c80

FString * __thiscall
FWriteStringToFile::GetTags(FWriteStringToFile *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8e2d30

UScriptStruct * __thiscall FWriteStringToFile::TypedScriptStruct(FWriteStringToFile *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWriteStringToFile,(UObject *)pUVar1,
                         L"WriteStringToFile");
  }
  return Z_Registration_Info_UScriptStruct_FWriteStringToFile.OuterSingleton;
}

// Evaluate @ 14e8e31c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWriteStringToFile::Evaluate(FWriteStringToFile *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FString *pFVar4;
  IFileManager *pIVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  int iVar8;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FConnectionReference local_38;
  
  local_38.Index = -1;
  local_38.Reference = &this->FileContents;
  local_38.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
  pFVar4 = FDataflowInput::GetValue<FString>(pFVar3,param_1,local_38.Reference);
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = (pFVar4->Data).ArrayNum;
  lVar7 = (longlong)local_40;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pFVar1,lVar7 * 2);
  }
  local_38.Reference = &this->FilePath;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
  pFVar4 = FDataflowInput::GetValue<FString>(pFVar3,param_1,local_38.Reference);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar4->Data).ArrayNum;
  lVar7 = (longlong)local_50;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar1,lVar7 * 2);
  }
  pIVar5 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_50 != 0) {
    FVar6.Data = local_58.Data;
  }
  iVar8 = local_40 + -1;
  if (local_40 == 0) {
    iVar8 = 0;
  }
  local_38.Index = iVar8;
  local_38.Reference = local_48.Data;
  bVar2 = FFileHelper::SaveStringToFile
                    ((TStringView<wchar_t> *)&local_38,(wchar_t *)FVar6.Data,AutoDetect,pIVar5,0);
  if ((!bVar2) && (2 < (byte)LogChaos._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

