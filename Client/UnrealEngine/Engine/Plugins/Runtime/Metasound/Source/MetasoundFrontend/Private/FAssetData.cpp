// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// GetTagValue<int> @ 14ae50630

bool __thiscall FAssetData::GetTagValue<int>(FAssetData *this,FName param_1,int *param_2)

{
  int iVar1;
  ForAnyElementType _Str;
  FAssetTagValueRef_u_0 local_res8 [4];
  FString local_18;
  
  FAssetDataTagMapSharedView::FindTag(&this->TagsAndValues,(FName)local_res8);
  if (local_res8[0].Loose != (FString *)0x0) {
    *param_2 = 0;
    FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res8[0].Fixed,&local_18);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar1 = _wtoi((wchar_t *)_Str.Data);
    *param_2 = iVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

