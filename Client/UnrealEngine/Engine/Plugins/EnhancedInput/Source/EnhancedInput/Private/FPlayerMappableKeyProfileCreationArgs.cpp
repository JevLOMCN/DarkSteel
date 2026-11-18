// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 2

// StaticStruct @ 14a6b6030

UScriptStruct * __cdecl FPlayerMappableKeyProfileCreationArgs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlayerMappableKeyProfileCreationArgs.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FPlayerMappableKeyProfileCreationArgs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs,
                         (UObject *)pUVar1,L"PlayerMappableKeyProfileCreationArgs");
  }
  return Z_Registration_Info_UScriptStruct_FPlayerMappableKeyProfileCreationArgs.OuterSingleton;
}

// FPlayerMappableKeyProfileCreationArgs @ 14a6cac70

FPlayerMappableKeyProfileCreationArgs * __thiscall
FPlayerMappableKeyProfileCreationArgs::FPlayerMappableKeyProfileCreationArgs
          (FPlayerMappableKeyProfileCreationArgs *this)

{
  int iVar1;
  ITextData *pIVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  
  pUVar4 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar4 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)
                      &(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x18);
  if (pUVar4 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar5 = UEnhancedPlayerMappableKeyProfile::StaticClass();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14a6cad0d;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14a6cad0d:
  (this->ProfileType).Class.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ProfileIdentifier).TagName = FGameplayTag::EmptyTag.TagName;
  (this->ProfileStringIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileStringIdentifier).Data.ArrayNum = 0;
  (this->ProfileStringIdentifier).Data.ArrayMax = 0;
  (this->UserId).InternalId = -1;
  pFVar6 = FText::GetEmpty();
  (this->DisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (pFVar6->TextData).Reference;
  (this->DisplayName).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->DisplayName).Flags = pFVar6->Flags;
  this->bSetAsCurrentProfile = '\x01';
  return this;
}

