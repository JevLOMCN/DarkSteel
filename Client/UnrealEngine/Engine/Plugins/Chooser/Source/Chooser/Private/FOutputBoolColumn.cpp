// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a86db90

UScriptStruct * __cdecl FOutputBoolColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOutputBoolColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FOutputBoolColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOutputBoolColumn,(UObject *)pUVar1,
                         L"OutputBoolColumn");
  }
  return Z_Registration_Info_UScriptStruct_FOutputBoolColumn.OuterSingleton;
}

// FOutputBoolColumn @ 14a87d490

FOutputBoolColumn * __thiscall FOutputBoolColumn::FOutputBoolColumn(FOutputBoolColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FOutputBoolColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  this->bFallbackValue = false;
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolContextProperty,(UObject *)pUVar1,
                         L"BoolContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->InputValue,Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton
             ,(uchar *)0x0);
  return this;
}

// GetInputValue @ 14a88a560

FChooserParameterBase * __thiscall FOutputBoolColumn::GetInputValue(FOutputBoolColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// HasFilters @ 14a88b910

bool __thiscall FOutputBoolColumn::HasFilters(FOutputBoolColumn *this)

{
  return false;
}

// HasOutputs @ 14a88b990

bool __thiscall FOutputBoolColumn::HasOutputs(FOutputBoolColumn *this)

{
  return true;
}

// SetOutputs @ 14a88f310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputBoolColumn::SetOutputs
          (FOutputBoolColumn *this,FChooserEvaluationContext *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChooserParameterBoolBase *pFVar4;
  FScriptContainerElement FVar5;
  FString local_38;
  FAssetLog local_28;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    if (param_2 == -2) {
      FVar5 = (FScriptContainerElement)this->bFallbackValue;
    }
    else {
      if ((param_2 < 0) || ((this->RowValues).ArrayNum <= param_2)) {
        if ((byte)LogChooser._0_1_ < 2) {
          return;
        }
        ::FString::PrintfImpl(&local_38,L"Invalid index %d passed to FOutputBoolColumn::SetOutputs")
        ;
        local_28.Object = (param_1->DebuggingInfo).CurrentChooser;
        local_28.Path = (wchar_t *)0x0;
        local_28.PackagePath = (FPackagePath *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogChooser.field_0x4,Error,&local_28,&local_38,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\OutputBoolColumn.cpp"
                   ,0x23);
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
      FVar5 = (this->RowValues).AllocatorInstance.Data[param_2];
    }
    pFVar4 = UE::StructUtils::GetStructRef<FChooserParameterBoolBase>
                       ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                        (this->InputValue).StructMemory);
    (**(code **)((longlong)*pFVar4 + 0x48))(pFVar4,param_1,FVar5);
  }
  return;
}

