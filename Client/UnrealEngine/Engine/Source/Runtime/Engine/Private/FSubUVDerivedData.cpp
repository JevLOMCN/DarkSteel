// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Build @ 1481d5740

void __thiscall
FSubUVDerivedData::Build
          (FSubUVDerivedData *this,UTexture2D *param_1,int param_2,int param_3,
          ESubUVBoundingVertexCount param_4,float param_5,EOpacitySourceMode param_6)

{
  return;
}

// GetDDCKeyString @ 1481f5280

FString * __cdecl
FSubUVDerivedData::GetDDCKeyString
          (FString *__return_storage_ptr__,FGuid *param_1,int param_2,int param_3,int param_4,
          float param_5,int param_6)

{
  size_t sVar1;
  int iVar2;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FGuid::AppendString(param_1,&local_58,Digits);
  ::FString::PrintfImpl(&local_48,L"%s_%u_%u_%u_%f");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (param_6 != 0) {
    ::FString::PrintfImpl(&local_58,L"_%u");
    iVar2 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(&local_48,L"_V4",3);
  if (local_48.Data.ArrayNum == 0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    iVar2 = 0;
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1481f538d;
  }
  sVar1 = wcslen((wchar_t *)local_58.Data.AllocatorInstance.Data);
  iVar2 = (int)sVar1;
LAB_1481f538d:
  local_58.Data.ArrayNum = iVar2;
  local_28.DataPtr = L"9E83F251AF83E44D8192C237A7C2433E";
  local_28.Size = 0x20;
  local_38.DataPtr = L"SUBUV_";
  local_38.Size = 6;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reserve(__return_storage_ptr__,iVar2 + 0x28);
  FDerivedDataCacheInterface::AppendSanitized(__return_storage_ptr__,&local_38);
  ::FString::AppendChar(__return_storage_ptr__,L'_');
  FDerivedDataCacheInterface::AppendSanitized(__return_storage_ptr__,&local_28);
  ::FString::AppendChar(__return_storage_ptr__,L'_');
  local_28.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_28.Size = local_58.Data.ArrayNum;
  local_28._12_4_ = local_58.Data.ArrayMax;
  FDerivedDataCacheInterface::AppendSanitized(__return_storage_ptr__,&local_28);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFeedback @ 1481faae0

void __cdecl
FSubUVDerivedData::GetFeedback
          (UTexture2D *param_1,int param_2,int param_3,ESubUVBoundingVertexCount param_4,
          float param_5,EOpacitySourceMode param_6,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_8,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_9)

{
  return;
}

// Serialize @ 148215710

void __thiscall FSubUVDerivedData::Serialize(FSubUVDerivedData *this,FStructuredArchiveSlot param_1)

{
  operator<<<UE::Math::TVector2<float>_>(param_1,&this->BoundingGeometry);
  return;
}

