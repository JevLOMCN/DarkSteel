// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformConfiguration
// Functions: 3

// AppendHash<int> @ 144539b40

void __cdecl
FPlatformCompressionUtilities::AppendHash<int>(FString *param_1,wchar_t *param_2,int *param_3)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  ::FString::PrintfImpl(&local_28,L"%s_%s_");
  iVar1 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendHash<float> @ 144539be0

void __cdecl
FPlatformCompressionUtilities::AppendHash<float>(FString *param_1,wchar_t *param_2,float *param_3)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%f");
  ::FString::PrintfImpl(&local_28,L"%s_%s_");
  iVar1 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendHash<bool> @ 144539c90

void __cdecl
FPlatformCompressionUtilities::AppendHash<bool>(FString *param_1,wchar_t *param_2,bool *param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  pwVar1 = L"true";
  if (*param_3 == false) {
    pwVar1 = L"false";
  }
  ::FString::FString(&local_18,pwVar1);
  ::FString::PrintfImpl(&local_28,L"%s_%s_");
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

