// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 6

// StaticStruct @ 144343a40

UScriptStruct * __cdecl FDirectPathObjectLocator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDirectPathObjectLocator,(UObject *)pUVar1,
                         L"DirectPathObjectLocator");
  }
  return Z_Registration_Info_UScriptStruct_FDirectPathObjectLocator.OuterSingleton;
}

// ComputePriority @ 1443471c0

uint __cdecl FDirectPathObjectLocator::ComputePriority(UObject *param_1,UObject *param_2)

{
  return 0;
}

// Initialize @ 1443486a0

FInitializeResult * __thiscall
FDirectPathObjectLocator::Initialize
          (FDirectPathObjectLocator *this,FInitializeResult *__return_storage_ptr__,
          FInitializeParams *param_1)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar2 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)param_1->Object,&local_18,(UObject *)0x0);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  FSoftObjectPath::SetPath(&this->Path,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28._8_8_ = local_28._8_8_ & 0xffffffffffffff00;
  __return_storage_ptr__->RelativeToContext = (UObject *)0x0;
  *(undefined8 *)&__return_storage_ptr__->Type = local_28._8_8_;
  return __return_storage_ptr__;
}

// Resolve @ 144349960

FResolveResult * __thiscall
FDirectPathObjectLocator::Resolve
          (FDirectPathObjectLocator *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  longlong *plVar1;
  UObject *pUVar2;
  byte local_res8;
  undefined7 uStack_f;
  
  pUVar2 = FSoftObjectPath::ResolveObject(&this->Path);
  if (pUVar2 == (UObject *)0x0) {
    if ((param_1->Flags & Load) == None) {
      plVar1 = &(__return_storage_ptr__->Value)._padding_;
      *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
      (__return_storage_ptr__->Value)._padding_ = 0;
    }
    else {
      pUVar2 = FSoftObjectPath::TryLoad(&this->Path,(FUObjectSerializeContext *)0x0);
      (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar2;
      (__return_storage_ptr__->Value)._padding_ =
           CONCAT71(uStack_f,pUVar2 != (UObject *)0x0 | local_res8 & 0xfc);
    }
  }
  else {
    (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar2;
    (__return_storage_ptr__->Value)._padding_ = CONCAT71(uStack_f,local_res8) & 0xfffffffffffffffc;
  }
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// ToString @ 14434b470

void __thiscall
FDirectPathObjectLocator::ToString
          (FDirectPathObjectLocator *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((this->Path).AssetPath.PackageName != (FName)0x0) {
    ::operator<<(param_1,(FTopLevelAssetPath *)this);
    iVar1 = (this->Path).SubPathString.Data.ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L':';
      param_1->CurPos = param_1->CurPos + 1;
      operator<<<wchar_t,FUtf8String_const_&>(param_1,&(this->Path).SubPathString);
    }
  }
  return;
}

// TryParseString @ 14434c180

FParseStringResult * __thiscall
FDirectPathObjectLocator::TryParseString
          (FDirectPathObjectLocator *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_28;
  undefined8 local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FSoftObjectPath::SetPath(&this->Path,&local_28);
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_18 = 0;
  FText::FText((FText *)&local_28);
  iVar1 = 0;
  local_18 = CONCAT35((int3)((ulonglong)local_18 >> 0x28),0x100000000);
  (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)local_28.DataPtr;
  uVar2 = true;
  if ((ITextData *)local_28.DataPtr != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.DataPtr + 8))(local_28.DataPtr,local_res8);
    iVar1 = (int)local_18;
    uVar2 = local_18._4_1_;
  }
  (__return_storage_ptr__->ErrorMessage).Flags = local_28.Size;
  __return_storage_ptr__->NumCharsParsed = iVar1;
  __return_storage_ptr__->bSuccess = (bool)uVar2;
  if ((ITextData *)local_28.DataPtr != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.DataPtr + 0x10))();
  }
  return __return_storage_ptr__;
}

