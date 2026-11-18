// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 1488a1180

UScriptStruct * __cdecl FAssetLocatorFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetLocatorFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAssetLocatorFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetLocatorFragment,(UObject *)pUVar1,
                         L"AssetLocatorFragment");
  }
  return Z_Registration_Info_UScriptStruct_FAssetLocatorFragment.OuterSingleton;
}

// FAssetLocatorFragment @ 1488ae000

FAssetLocatorFragment * __thiscall
FAssetLocatorFragment::FAssetLocatorFragment(FAssetLocatorFragment *this,FAssetData *param_1)

{
  FName FVar1;
  FName FVar2;
  
  FVar1 = param_1->AssetName;
  FVar2 = param_1->PackageName;
  (this->Path).PackageName.ComparisonIndex = 0;
  (this->Path).PackageName.Number = 0;
  (this->Path).AssetName.ComparisonIndex = 0;
  (this->Path).AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&this->Path,FVar2,FVar1);
  return this;
}

// FAssetLocatorFragment @ 1488ae030

FAssetLocatorFragment * __thiscall
FAssetLocatorFragment::FAssetLocatorFragment
          (FAssetLocatorFragment *this,FTopLevelAssetPath *param_1)

{
  FName FVar1;
  
  FVar1 = param_1->AssetName;
  (this->Path).PackageName = param_1->PackageName;
  (this->Path).AssetName = FVar1;
  return this;
}

// ComputePriority @ 1488baeb0

uint __cdecl FAssetLocatorFragment::ComputePriority(UObject *param_1,UObject *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  uint uVar5;
  
  pUVar2 = *(UPackage **)&param_1->field_0x20;
  if (pUVar2 != (UPackage *)0x0) {
    pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) && ((*(uint *)&param_1->field_0x8 >> 6 & 1) == 0)) {
      pUVar4 = GetTransientPackage();
      uVar5 = 0;
      if (pUVar2 != pUVar4) {
        uVar5 = 1000;
      }
      return uVar5;
    }
  }
  return 0;
}

// Initialize @ 1488cbc40

FInitializeResult * __thiscall
FAssetLocatorFragment::Initialize
          (FAssetLocatorFragment *this,FInitializeResult *__return_storage_ptr__,
          FInitializeParams *param_1)

{
  uint7 uStack_f;
  
  FTopLevelAssetPath::TrySetPath(&this->Path,param_1->Object);
  __return_storage_ptr__->RelativeToContext = (UObject *)0x0;
  *(ulonglong *)&__return_storage_ptr__->Type = (ulonglong)uStack_f << 8;
  return __return_storage_ptr__;
}

// Resolve @ 1488db800

FResolveResult * __thiscall
FAssetLocatorFragment::Resolve
          (FAssetLocatorFragment *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  UClass *pUVar6;
  UObject *pUVar7;
  undefined4 uVar8;
  byte bStack_50;
  undefined7 uStack_4f;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  size_t sVar5;
  
  FTopLevelAssetPath::ToString(&this->Path,&local_48);
  if ((param_1->Flags & Unload) != None) {
    plVar1 = &(__return_storage_ptr__->Value)._padding_;
    *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
    (__return_storage_ptr__->Value)._padding_ = 0;
    goto LAB_1488db9a6;
  }
  uVar8 = 0;
  if (local_48.Data.ArrayNum == 0) {
    local_38.DataPtr = L"";
LAB_1488db886:
    sVar5 = wcslen(local_38.DataPtr);
    uVar4 = (undefined4)sVar5;
  }
  else {
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    uVar4 = uVar8;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1488db886;
  }
  local_38.Size = uVar4;
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  local_28.DataPtr = local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  pUVar7 = StaticFindObject(pUVar6,(UObject *)0x0,&local_28,None);
  bVar3 = bStack_50 & 0xfc;
  if ((pUVar7 == (UObject *)0x0) && ((param_1->Flags & Load) != None)) {
    local_38.DataPtr = (wchar_t *)0x0;
    local_38._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    if (local_48.Data.ArrayNum == 0) {
      local_28.DataPtr = L"";
LAB_1488db8f0:
      sVar5 = wcslen(local_28.DataPtr);
      uVar8 = (undefined4)sVar5;
    }
    else {
      local_28.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1488db8f0;
    }
    local_28.Size = uVar8;
    pUVar6 = Z_Construct_UClass_UObject_NoRegister();
    pUVar7 = StaticLoadObject(pUVar6,(UObject *)0x0,&local_28,&local_38,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    bVar3 = pUVar7 != (UObject *)0x0 | bStack_50 & 0xfc;
  }
  for (; bStack_50 = bVar3, pUVar7 != (UObject *)0x0; pUVar7 = *(UObject **)(pUVar7 + 1)) {
    pUVar6 = UObjectRedirector::GetPrivateStaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if (((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar6->_padding_)) || (pUVar7 == (UObject *)0x0)) break;
    bVar3 = bStack_50;
  }
  (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar7;
  (__return_storage_ptr__->Value)._padding_ = CONCAT71(uStack_4f,bStack_50);
LAB_1488db9a6:
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 1488e8090

void __thiscall
FAssetLocatorFragment::ToString(FAssetLocatorFragment *this,TStringBuilderBase<wchar_t> *param_1)

{
  if ((this->Path).PackageName != (FName)0x0) {
    ::FName::AppendString((FName *)this,param_1);
    if ((this->Path).AssetName != (FName)0x0) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L'.';
      param_1->CurPos = param_1->CurPos + 1;
      ::FName::AppendString(&(this->Path).AssetName,param_1);
    }
  }
  return;
}

// TryParseString @ 1488e8df0

FParseStringResult * __thiscall
FAssetLocatorFragment::TryParseString
          (FAssetLocatorFragment *this,FParseStringResult *__return_storage_ptr__,
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
  FTopLevelAssetPath::TrySetPath(&this->Path,&local_28);
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

