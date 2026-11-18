// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148aa6f10

UScriptStruct * __cdecl FStreamingSourceShape::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStreamingSourceShape.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStreamingSourceShape.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStreamingSourceShape,(UObject *)pUVar1,
                         L"StreamingSourceShape");
  }
  return Z_Registration_Info_UScriptStruct_FStreamingSourceShape.OuterSingleton;
}

// ToString @ 148adba40

FString * __thiscall
FStreamingSourceShape::ToString(FStreamingSourceShape *this,FString *__return_storage_ptr__)

{
  void *pvVar1;
  TStringBuilderBase<wchar_t> local_28;
  
  local_28.End = (wchar_t *)0x0;
  local_28.Base = (wchar_t *)0x0;
  local_28.CurPos = (wchar_t *)0x0;
  local_28.bIsDynamic = false;
  local_28.bIsExternal = false;
  if (this->bIsSector != false) {
    TStringBuilderBase<wchar_t>::Extend(&local_28,9);
    pvVar1 = FGenericPlatformString::Memcpy(local_28.CurPos,L"IsSector ",0x12);
    local_28.CurPos = (wchar_t *)((longlong)pvVar1 + 0x12);
  }
  if (this->bUseGridLoadingRange == false) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_28,L"Radius: %d");
  }
  else {
    if (local_28.End < local_28.CurPos + 0x15) {
      TStringBuilderBase<wchar_t>::Extend(&local_28,0x15);
    }
    pvVar1 = FGenericPlatformString::Memcpy(local_28.CurPos,L"UsesGridLoadingRange ",0x2a);
    local_28.CurPos = (wchar_t *)((longlong)pvVar1 + 0x2a);
    if (__real_322bcc77 <
        (float)((uint)(this->LoadingRangeScale - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_28,L"Scale: %3.2f");
    }
  }
  if (local_28.End < local_28.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_28,1);
  }
  *local_28.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_28.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_28);
  return __return_storage_ptr__;
}

