// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e116580

UScriptStruct * __cdecl FOptimusDeformerInstanceComponentBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusDeformerInstanceComponentBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusDeformerInstanceComponentBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding,
                         (UObject *)pUVar1,L"OptimusDeformerInstanceComponentBinding");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusDeformerInstanceComponentBinding.OuterSingleton;
}

// GetActorComponent @ 14e1b79f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSoftObjectPtr<UActorComponent> * __thiscall
FOptimusDeformerInstanceComponentBinding::GetActorComponent
          (FOptimusDeformerInstanceComponentBinding *this,
          TSoftObjectPtr<UActorComponent> *__return_storage_ptr__,AActor *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ForAnyElementType _Src;
  FString *pFVar3;
  FString *pFVar4;
  size_t _Size;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FSoftObjectPath local_38;
  
  pFVar3 = ::FName::ToString(&this->ComponentName,&local_48);
  if ((param_1 == (AActor *)0x0) || ((pFVar3->Data).ArrayNum < 2)) {
    puVar1 = &(__return_storage_ptr__->SoftObjectPtr).field_0x18;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x20 = 0;
    *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr = 0;
    *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)puVar1,0);
  }
  else {
    pFVar4 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)param_1,(FString *)&local_58,(UObject *)0x0);
    ::FString::ConcatFC(&local_68,pFVar4,L".");
    ::FString::ConcatFF(&local_78,&local_68,pFVar3);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_38.AssetPath.PackageName.Number = 0;
    local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_38.AssetPath.AssetName.Number = 0;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.SubPathString.Data.ArrayNum = 0;
    local_38.SubPathString.Data.ArrayMax = 0;
    local_68.Data.ArrayNum = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      local_68.Data.ArrayNum = 0;
    }
    local_58._12_4_ = local_68.Data.ArrayMax;
    local_58.Size = local_68.Data.ArrayNum;
    local_58.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_38,&local_58);
    _Src.Data = local_38.SubPathString.Data.AllocatorInstance.Data;
    _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
    puVar1 = &(__return_storage_ptr__->SoftObjectPtr).field_0x18;
    puVar2 = &(__return_storage_ptr__->SoftObjectPtr).field_0x24;
    *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr = 0;
    *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8 =
         local_38.AssetPath.PackageName.ComparisonIndex.Value;
    *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0xc =
         local_38.AssetPath.PackageName.Number;
    *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x10 =
         local_38.AssetPath.AssetName.ComparisonIndex.Value;
    *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x14 =
         local_38.AssetPath.AssetName.Number;
    *(undefined8 *)puVar1 = 0;
    *(int *)&(__return_storage_ptr__->SoftObjectPtr).field_0x20 =
         local_38.SubPathString.Data.ArrayNum;
    if (local_38.SubPathString.Data.ArrayNum == 0) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)puVar1,
                 local_38.SubPathString.Data.ArrayNum,(int *)puVar2);
      memcpy(*(void **)puVar1,_Src.Data,_Size);
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetActorComponent @ 14e1b7bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSoftObjectPtr<UActorComponent> * __cdecl
FOptimusDeformerInstanceComponentBinding::GetActorComponent
          (TSoftObjectPtr<UActorComponent> *__return_storage_ptr__,AActor *param_1,FString *param_2)

{
  undefined1 *puVar1;
  ForAnyElementType _Src;
  FString *pFVar2;
  undefined1 *puVar3;
  size_t _Size;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  FSoftObjectPath local_28;
  
  if ((param_1 == (AActor *)0x0) || ((param_2->Data).ArrayNum < 2)) {
    puVar3 = &(__return_storage_ptr__->SoftObjectPtr).field_0x18;
    *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr = 0;
    *(undefined8 *)puVar3 = 0;
    *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x20 = 0;
    *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)puVar3,0);
  }
  else {
    pFVar2 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)param_1,(FString *)&local_38,(UObject *)0x0);
    ::FString::ConcatFC(&local_48,pFVar2,L".");
    ::FString::ConcatFF(&local_58,&local_48,param_2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
    local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_48.Data.ArrayNum = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      local_48.Data.ArrayNum = 0;
    }
    local_38._12_4_ = local_48.Data.ArrayMax;
    local_38.Size = local_48.Data.ArrayNum;
    local_38.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_28,&local_38);
    _Src.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    _Size = (size_t)local_28.SubPathString.Data.ArrayNum;
    puVar3 = &(__return_storage_ptr__->SoftObjectPtr).field_0x18;
    puVar1 = &(__return_storage_ptr__->SoftObjectPtr).field_0x24;
    *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr = 0;
    *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8 =
         local_28.AssetPath.PackageName.ComparisonIndex.Value;
    *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0xc =
         local_28.AssetPath.PackageName.Number;
    *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x10 =
         local_28.AssetPath.AssetName.ComparisonIndex.Value;
    *(uint *)&(__return_storage_ptr__->SoftObjectPtr).field_0x14 =
         local_28.AssetPath.AssetName.Number;
    *(undefined8 *)puVar3 = 0;
    *(int *)&(__return_storage_ptr__->SoftObjectPtr).field_0x20 =
         local_28.SubPathString.Data.ArrayNum;
    if (local_28.SubPathString.Data.ArrayNum == 0) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_28.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)puVar3,
                 local_28.SubPathString.Data.ArrayNum,(int *)puVar1);
      memcpy(*(void **)puVar3,_Src.Data,_Size);
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetSanitizedComponentName @ 14e1e01b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __cdecl
FOptimusDeformerInstanceComponentBinding::GetSanitizedComponentName(UActorComponent *param_1)

{
  bool bVar1;
  FName *pFVar2;
  int iVar3;
  longlong in_RDX;
  FName FVar4;
  FName local_res8;
  FName local_res10;
  FString local_18;
  
  if (in_RDX == 0) {
    param_1->_padding_ = 0;
    return (FName)param_1;
  }
  local_res8 = *(FName *)(in_RDX + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  bVar1 = ::FString::RemoveFromEnd(&local_18,L"_GEN_VARIABLE",0xd,IgnoreCase);
  FVar4 = local_res8;
  if (bVar1) {
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(&local_res10,iVar3,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar4 = *pFVar2;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  param_1->_padding_ = (longlong)FVar4;
  return (FName)param_1;
}

// GetSanitizedComponentName @ 14e1e0270

FName __cdecl FOptimusDeformerInstanceComponentBinding::GetSanitizedComponentName(FName param_1)

{
  bool bVar1;
  FName *pFVar2;
  int iVar3;
  FName in_RDX;
  FName local_res10;
  FName local_res18 [2];
  FString local_18;
  
  local_res10 = in_RDX;
  ::FName::ToString(&local_res10,&local_18);
  bVar1 = ::FString::RemoveFromEnd(&local_18,L"_GEN_VARIABLE",0xd,IgnoreCase);
  if (bVar1) {
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(local_res18,iVar3,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)param_1 = *pFVar2;
  }
  else {
    *(FName *)param_1 = local_res10;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// GetSanitizedComponentName @ 14e1e0300

bool __cdecl FOptimusDeformerInstanceComponentBinding::GetSanitizedComponentName(FString *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::RemoveFromEnd(param_1,L"_GEN_VARIABLE",0xd,IgnoreCase);
  return bVar1;
}

