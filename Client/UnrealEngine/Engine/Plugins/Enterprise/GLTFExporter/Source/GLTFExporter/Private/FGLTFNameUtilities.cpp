// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// GetName @ 14e5f7eb0

FString * __cdecl
FGLTFNameUtilities::GetName(FString *__return_storage_ptr__,UEnum *param_1,int param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FString *pFVar4;
  FText *this;
  ForAnyElementType FVar5;
  longlong lVar6;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FString local_38;
  FText local_28;
  
  if (param_1 == (UEnum *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Enum != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFNameUtilities.cpp"
                       ,9,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  this = UEnum::GetDisplayNameTextByValue(param_1,&local_28,(longlong)param_2);
  pFVar4 = FText::ToString(this);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar4->Data).ArrayNum;
  lVar6 = (longlong)local_50;
  _Src = (pFVar4->Data).AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,_Src,lVar6 * 2);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  iVar2 = local_50;
  FVar5.Data = local_58.Data;
  if (local_50 < 2) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,param_2);
    ::FString::FString(__return_storage_ptr__,&local_38);
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = local_50;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,(ForAnyElementType *)&local_48,local_50,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,FVar5.Data,(longlong)iVar2 * 2);
    ::FString::FString(__return_storage_ptr__,&local_48);
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// GetName @ 14e5f8050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
FGLTFNameUtilities::GetName(FString *__return_storage_ptr__,USceneComponent *param_1)

{
  longlong lVar1;
  FName local_res10 [3];
  
  lVar1 = param_1->_padding_;
  if ((lVar1 == 0) || (param_1 != *(USceneComponent **)(lVar1 + 0x1b8))) {
    local_res10[0] = (FName)param_1->_padding_;
  }
  else {
    local_res10[0] = *(FName *)(lVar1 + 0x18);
  }
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

