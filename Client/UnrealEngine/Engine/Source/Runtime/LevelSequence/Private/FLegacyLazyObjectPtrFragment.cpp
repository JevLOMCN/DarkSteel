// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 6

// StaticStruct @ 146c44220

UScriptStruct * __cdecl FLegacyLazyObjectPtrFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment,(UObject *)pUVar1,
                         L"LegacyLazyObjectPtrFragment");
  }
  return Z_Registration_Info_UScriptStruct_FLegacyLazyObjectPtrFragment.OuterSingleton;
}

// ComputePriority @ 146c51800

uint __cdecl FLegacyLazyObjectPtrFragment::ComputePriority(UObject *param_1,UObject *param_2)

{
  return 0;
}

// Initialize @ 146c570e0

FInitializeResult * __thiscall
FLegacyLazyObjectPtrFragment::Initialize
          (FLegacyLazyObjectPtrFragment *this,FInitializeResult *__return_storage_ptr__,
          FInitializeParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInitializeResult *pFVar3;
  undefined7 uStack_f;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LegacyLazyObjectPtrFragment.cpp"
                     ,0x2c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInitializeResult *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->RelativeToContext = (UObject *)0x0;
  *(ulonglong *)&__return_storage_ptr__->Type = CONCAT71(uStack_f,2);
  return __return_storage_ptr__;
}

// Resolve @ 146c59500

FResolveResult * __thiscall
FLegacyLazyObjectPtrFragment::Resolve
          (FLegacyLazyObjectPtrFragment *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  longlong *plVar1;
  UObject *pUVar2;
  undefined1 local_res8;
  TPersistentObjectPtr<FUniqueObjectGuid> local_28;
  
  if (((((this->LazyObjectId).D != 0 || (this->LazyObjectId).C != 0) || (this->LazyObjectId).B != 0)
       || (this->LazyObjectId).A != 0) &&
     ((UObjectBaseUtility *)param_1->Context != (UObjectBaseUtility *)0x0)) {
    UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1->Context);
    local_28.ObjectID.Guid.A = (this->LazyObjectId).A;
    local_28.ObjectID.Guid.B = (this->LazyObjectId).B;
    local_28.ObjectID.Guid.C = (this->LazyObjectId).C;
    local_28.ObjectID.Guid.D = (this->LazyObjectId).D;
    local_28.WeakPtr.ObjectIndex = 0;
    local_28.WeakPtr.ObjectSerialNumber = 0;
    pUVar2 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_28);
    local_28.ObjectID.Guid._0_8_ =
         CONCAT71(local_28.ObjectID.Guid._1_7_,local_res8) & 0xfffffffffffffffc;
    (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar2;
    (__return_storage_ptr__->Value)._padding_ = local_28.ObjectID.Guid._0_8_;
    (__return_storage_ptr__->Value).TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  plVar1 = &(__return_storage_ptr__->Value)._padding_;
  *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
  (__return_storage_ptr__->Value)._padding_ = 0;
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// ToString @ 146c5cf90

void __thiscall
FLegacyLazyObjectPtrFragment::ToString
          (FLegacyLazyObjectPtrFragment *this,TStringBuilderBase<wchar_t> *param_1)

{
  return;
}

// TryParseString @ 146c5cfc0

FParseStringResult * __thiscall
FLegacyLazyObjectPtrFragment::TryParseString
          (FLegacyLazyObjectPtrFragment *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  FText *this_00;
  undefined1 uVar4;
  undefined1 local_res10 [8];
  FText local_38;
  FText local_28;
  undefined8 local_18;
  
  local_28.TextData.Reference = (ITextData *)0x0;
  local_28.Flags = 0;
  local_28._12_4_ = 0;
  local_18 = 0;
  FText::FText(&local_28);
  local_18 = local_18 & 0xffffff0000000000;
  this_00 = FText::FText(&local_38);
  bVar3 = FText::IsEmpty(this_00);
  TVar2.Reference = local_28.TextData.Reference;
  if (!bVar3) {
    pIVar1 = (this_00->TextData).Reference;
    if (local_28.TextData.Reference != pIVar1) {
      local_28.TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))();
      }
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
      }
    }
    local_28.Flags = this_00->Flags;
  }
  local_18._0_5_ = (uint5)(uint)local_18;
  (__return_storage_ptr__->ErrorMessage).TextData.Reference = local_28.TextData.Reference;
  uVar4 = false;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res10);
    uVar4 = local_18._4_1_;
  }
  (__return_storage_ptr__->ErrorMessage).Flags = local_28.Flags;
  __return_storage_ptr__->bSuccess = (bool)uVar4;
  __return_storage_ptr__->NumCharsParsed = (uint)local_18;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))(local_38.TextData.Reference);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

