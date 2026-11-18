// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 5

// StaticStruct @ 14a86f0e0

UScriptStruct * __cdecl FGameplayTagContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FGameplayTagContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContextProperty,(UObject *)pUVar1,
                         L"GameplayTagContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagContextProperty.OuterSingleton;
}

// GetValue @ 14a86f150

bool __thiscall
FGameplayTagContextProperty::GetValue
          (FGameplayTagContextProperty *this,FChooserEvaluationContext *param_1,
          FGameplayTagContainer **param_2)

{
  bool bVar1;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,&this->Binding,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    *param_2 = (FGameplayTagContainer *)(local_38.Container + local_38.PropertyOffset);
    return true;
  }
  return false;
}

// PostLoad @ 14a86f1c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FGameplayTagContextProperty::PostLoad(FGameplayTagContextProperty *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  iVar3 = (this->PropertyBindingChain_DEPRECATED).ArrayNum;
  this_00 = &this->PropertyBindingChain_DEPRECATED;
  if (0 < iVar3) {
    pTVar1 = &(this->Binding).PropertyBindingChain;
    if (pTVar1 != this_00) {
      piVar2 = &(this->Binding).PropertyBindingChain.ArrayMax;
      _Src = (this_00->AllocatorInstance).Data;
      iVar4 = *piVar2;
      (this->Binding).PropertyBindingChain.ArrayNum = iVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,Default);
  }
  return;
}

// Compile @ 14a86f250

void __thiscall
FGameplayTagContextProperty::Compile
          (FGameplayTagContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile(&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14a86f260

bool __thiscall
FGameplayTagContextProperty::HasCompileErrors(FGameplayTagContextProperty *this,FText *param_1)

{
  return false;
}

