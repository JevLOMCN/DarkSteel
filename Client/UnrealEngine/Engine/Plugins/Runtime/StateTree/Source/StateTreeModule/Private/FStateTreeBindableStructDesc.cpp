// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d5266d0

UScriptStruct * __cdecl FStateTreeBindableStructDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBindableStructDesc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBindableStructDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc,(UObject *)pUVar1,
                         L"StateTreeBindableStructDesc");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeBindableStructDesc.OuterSingleton;
}

// ToString @ 14d526710

FString * __thiscall
FStateTreeBindableStructDesc::ToString
          (FStateTreeBindableStructDesc *this,FString *__return_storage_ptr__)

{
  EStateTreeBindableStructSource EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UEnum *this_00;
  bool bVar4;
  UPackage *pUVar5;
  FString *pFVar6;
  size_t sVar7;
  void *pvVar8;
  ulong64 uVar9;
  wchar_t *_Str;
  int iVar10;
  int iVar11;
  FText local_68;
  FString local_58;
  TStringBuilderBase<wchar_t> local_48;
  
  EVar1 = this->DataSource;
  local_48.End = (wchar_t *)0x0;
  local_48.bIsDynamic = false;
  local_48.bIsExternal = false;
  local_48.Base = (wchar_t *)0x0;
  local_48.CurPos = (wchar_t *)0x0;
  if (Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton == (UEnum *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource,
                       (UObject *)pUVar5,L"EStateTreeBindableStructSource");
  }
  this_00 = Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton;
  _Str = L"";
  if (Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton == (UEnum *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xd13,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_68,(ulonglong)EVar1);
  pFVar6 = FText::ToString(&local_68);
  if (((pFVar6->Data).ArrayNum == 0) ||
     (_Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data, iVar10 = 0,
     (FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0)) {
    sVar7 = wcslen(_Str);
    iVar10 = (int)sVar7;
  }
  uVar9 = (ulong64)iVar10;
  if (local_48.End < local_48.CurPos + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_48,uVar9);
  }
  if (iVar10 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(local_48.CurPos,_Str,uVar9 * 2);
    local_48.CurPos = (wchar_t *)((longlong)pvVar8 + uVar9 * 2);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_48.End < local_48.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_48,2);
  }
  pvVar8 = FGenericPlatformString::Memcpy(local_48.CurPos,L" \'",4);
  local_48.CurPos = (wchar_t *)((longlong)pvVar8 + 4);
  pFVar6 = ::FName::ToString((FName *)&this->_padding_,&local_58);
  iVar10 = (pFVar6->Data).ArrayNum;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  iVar11 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar11 = 0;
  }
  uVar9 = (ulong64)iVar11;
  if (local_48.End < local_48.CurPos + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_48,uVar9);
  }
  if (iVar11 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(local_48.CurPos,pFVar2,uVar9 * 2);
    local_48.CurPos = (wchar_t *)((longlong)pvVar8 + uVar9 * 2);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.End < local_48.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_48,1);
  }
  pvVar8 = FGenericPlatformString::Memcpy(local_48.CurPos,L"\'",2);
  local_48.CurPos = (wchar_t *)((longlong)pvVar8 + 2);
  if (local_48.End < (wchar_t *)((longlong)pvVar8 + 4U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_48,1);
  }
  *local_48.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_48.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_48);
  return __return_storage_ptr__;
}

