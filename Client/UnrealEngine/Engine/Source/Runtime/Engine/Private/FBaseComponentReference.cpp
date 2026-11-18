// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba4000

UScriptStruct * __cdecl FBaseComponentReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBaseComponentReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBaseComponentReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBaseComponentReference,(UObject *)pUVar1,
                         L"BaseComponentReference");
  }
  return Z_Registration_Info_UScriptStruct_FBaseComponentReference.OuterSingleton;
}

// ExtractComponent @ 147bdb740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
FBaseComponentReference::ExtractComponent(FBaseComponentReference *this,AActor *param_1)

{
  int iVar1;
  FName FVar2;
  FField *pFVar3;
  bool bVar4;
  UActorComponent *pUVar5;
  FName FVar6;
  UClass *pUVar7;
  size_t sVar8;
  undefined4 uVar9;
  TFieldIterator<FObjectPropertyBase> local_28;
  FName FVar10;
  
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  uVar9 = 0;
  bVar4 = FWeakObjectPtr::IsValid(&(this->OverrideComponent).WeakPtr);
  if (bVar4) {
    pUVar5 = (UActorComponent *)FWeakObjectPtr::Get(&(this->OverrideComponent).WeakPtr);
    return pUVar5;
  }
  if (param_1 == (AActor *)0x0) {
    return (UActorComponent *)0x0;
  }
  FVar2 = this->ComponentProperty;
  if (FVar2 != (FName)0x0) {
    local_28.Struct = (UStruct *)param_1->_padding_;
    if (FVar2 == (FName)0x0) {
      return (UActorComponent *)0x0;
    }
    if (local_28.Struct == (UStruct *)0x0) {
      local_28.Field = (FField *)0x0;
    }
    else {
      local_28.Field = (local_28.Struct)->ChildProperties;
    }
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_28);
    pFVar3 = local_28.Field;
    while( true ) {
      if (pFVar3 == (FField *)0x0) {
        return (UActorComponent *)0x0;
      }
      local_28.Field = pFVar3;
      bVar4 = IsThisNotNull(pFVar3,"FField::GetFName");
      FVar6 = FVar10;
      if (bVar4) {
        FVar6 = pFVar3->NamePrivate;
      }
      if (FVar6 == FVar2) break;
      local_28.Field = pFVar3->Next;
      TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_28);
      pFVar3 = local_28.Field;
    }
    if (pFVar3 == (FField *)0x0) {
      return (UActorComponent *)0x0;
    }
    pUVar5 = (UActorComponent *)(**(code **)(pFVar3->_padding_ + 0x208))(pFVar3,param_1,0);
    if (pUVar5 == (UActorComponent *)0x0) {
      return (UActorComponent *)0x0;
    }
    pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (*(int *)(pUVar5->_padding_ + 0x38) < iVar1) {
      return (UActorComponent *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_) {
      return (UActorComponent *)0x0;
    }
    return pUVar5;
  }
  if ((this->PathToComponent).Data.ArrayNum < 2) {
    return (UActorComponent *)(param_1->RootComponent).field0_0x0.DebugPtr;
  }
  if ((this->PathToComponent).Data.ArrayNum == 0) {
    local_28.Struct = (UStruct *)0x15060d16c;
  }
  else {
    local_28.Struct = (UStruct *)(this->PathToComponent).Data.AllocatorInstance.Data;
    if (local_28.Struct == (UStruct *)0x0) goto LAB_147bdb8ba;
  }
  sVar8 = wcslen((wchar_t *)local_28.Struct);
  uVar9 = (undefined4)sVar8;
LAB_147bdb8ba:
  local_28.Field = (FField *)CONCAT44(local_28.Field._4_4_,uVar9);
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar5 = (UActorComponent *)
           StaticFindObject(pUVar7,(UObject *)param_1,(TStringView<wchar_t> *)&local_28,None);
  return pUVar5;
}

