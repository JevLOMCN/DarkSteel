// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 7

// StaticStruct @ 14a86f740

UScriptStruct * __cdecl FOutputGameplayTagQueryColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOutputGameplayTagQueryColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FOutputGameplayTagQueryColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOutputGameplayTagQueryColumn,(UObject *)pUVar1,
                         L"OutputGameplayTagQueryColumn");
  }
  return Z_Registration_Info_UScriptStruct_FOutputGameplayTagQueryColumn.OuterSingleton;
}

// FOutputGameplayTagQueryColumn @ 14a87d5d0

FOutputGameplayTagQueryColumn * __thiscall
FOutputGameplayTagQueryColumn::FOutputGameplayTagQueryColumn(FOutputGameplayTagQueryColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FOutputGameplayTagQueryColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  FGameplayTagQuery::FGameplayTagQuery(&this->FallbackValue);
  if (Z_Registration_Info_UScriptStruct_FGameplayTagQueryContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FGameplayTagQueryContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQueryContextProperty,
                         (UObject *)pUVar1,L"GameplayTagQueryContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->InputValue,
             Z_Registration_Info_UScriptStruct_FGameplayTagQueryContextProperty.OuterSingleton,
             (uchar *)0x0);
  return this;
}

// ~FOutputGameplayTagQueryColumn @ 14a87e4c0

void __thiscall
FOutputGameplayTagQueryColumn::~FOutputGameplayTagQueryColumn(FOutputGameplayTagQueryColumn *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FallbackValue).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FallbackValue).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FallbackValue).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FallbackValue).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGameplayTagQuery,int>
            ((FGameplayTagQuery *)(this->RowValues).AllocatorInstance.Data,
             (this->RowValues).ArrayNum);
  pFVar1 = (this->RowValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&this->InputValue);
  this->_padding_ = (longlong)&___7FChooserColumnBase__6B_;
  return;
}

// GetInputValue @ 14a88a590

FChooserParameterBase * __thiscall
FOutputGameplayTagQueryColumn::GetInputValue(FOutputGameplayTagQueryColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// HasFilters @ 14a88b940

bool __thiscall FOutputGameplayTagQueryColumn::HasFilters(FOutputGameplayTagQueryColumn *this)

{
  return false;
}

// HasOutputs @ 14a88b9c0

bool __thiscall FOutputGameplayTagQueryColumn::HasOutputs(FOutputGameplayTagQueryColumn *this)

{
  return true;
}

// SetOutputs @ 14a88f700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputGameplayTagQueryColumn::SetOutputs
          (FOutputGameplayTagQueryColumn *this,FChooserEvaluationContext *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChooserParameterGameplayTagQueryBase *pFVar4;
  FScriptContainerElement *pFVar5;
  FString local_38;
  FAssetLog local_28;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    if (param_2 == -2) {
      pFVar5 = (FScriptContainerElement *)&this->FallbackValue;
    }
    else {
      if ((param_2 < 0) || ((this->RowValues).ArrayNum <= param_2)) {
        if ((byte)LogChooser._0_1_ < 2) {
          return;
        }
        ::FString::PrintfImpl
                  (&local_38,L"Invalid index %d passed to FOutputGameplayTagQueryColumn::SetOutputs"
                  );
        local_28.Object = (param_1->DebuggingInfo).CurrentChooser;
        local_28.Path = (wchar_t *)0x0;
        local_28.PackagePath = (FPackagePath *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogChooser.field_0x4,Error,&local_28,&local_38,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\OutputGameplayTagQueryColumn.cpp"
                   ,0x29);
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
      uVar3 = 0;
      if (param_2 < (this->RowValues).ArrayNum) {
        uVar3 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (this->RowValues).AllocatorInstance.Data + (longlong)param_2 * 0x48;
    }
    pFVar4 = UE::StructUtils::GetStructRef<FChooserParameterGameplayTagQueryBase>
                       ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                        (this->InputValue).StructMemory);
    (**(code **)((longlong)*pFVar4 + 0x40))(pFVar4,param_1,pFVar5);
  }
  return;
}

