// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 3

// StaticStruct @ 14d379a20

UScriptStruct * __cdecl FPropertyBindingBindableStructDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingBindableStructDescriptor,
                         (UObject *)pUVar1,L"PropertyBindingBindableStructDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton;
}

// ToString @ 14d379a60

FString * __thiscall
FPropertyBindingBindableStructDescriptor::ToString
          (FPropertyBindingBindableStructDescriptor *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FString *pFVar4;
  ulong64 uVar5;
  int iVar6;
  FString local_48;
  TStringBuilderBase<wchar_t> local_38;
  
  local_38.Base = (wchar_t *)0x0;
  local_38.CurPos = (wchar_t *)0x0;
  local_38.End = (wchar_t *)0x0;
  local_38.bIsDynamic = false;
  local_38.bIsExternal = false;
  TStringBuilderBase<wchar_t>::Extend(&local_38,1);
  pvVar3 = FGenericPlatformString::Memcpy(local_38.CurPos,L"\'",2);
  local_38.CurPos = (wchar_t *)((longlong)pvVar3 + 2);
  pFVar4 = ::FName::ToString(&this->Name,&local_48);
  iVar1 = (pFVar4->Data).ArrayNum;
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  uVar5 = (ulong64)iVar6;
  if (local_38.End < local_38.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_38,uVar5);
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(local_38.CurPos,pFVar2,uVar5 * 2);
    local_38.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.End < local_38.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_38,1);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_38.CurPos,L"\'",2);
  local_38.CurPos = (wchar_t *)((longlong)pvVar3 + 2);
  if (local_38.End < (wchar_t *)((longlong)pvVar3 + 4U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_38,1);
  }
  *local_38.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_38.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_38);
  return __return_storage_ptr__;
}

// ~FPropertyBindingBindableStructDescriptor @ 14d37ced0

void __thiscall
FPropertyBindingBindableStructDescriptor::~FPropertyBindingBindableStructDescriptor
          (FPropertyBindingBindableStructDescriptor *this)

{
  this->_padding_ = (longlong)&___7FPropertyBindingBindableStructDescriptor__6B_;
  return;
}

