// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a86f020

UScriptStruct * __cdecl FOutputFloatColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOutputFloatColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FOutputFloatColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOutputFloatColumn,(UObject *)pUVar1,
                         L"OutputFloatColumn");
  }
  return Z_Registration_Info_UScriptStruct_FOutputFloatColumn.OuterSingleton;
}

// FOutputFloatColumn @ 14a87d550

FOutputFloatColumn * __thiscall FOutputFloatColumn::FOutputFloatColumn(FOutputFloatColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FOutputFloatColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  this->FallbackValue = 0.0;
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatContextProperty,(UObject *)pUVar1,
                         L"FloatContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->InputValue,
             Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton,(uchar *)0x0);
  return this;
}

// GetInputValue @ 14a88a580

FChooserParameterBase * __thiscall FOutputFloatColumn::GetInputValue(FOutputFloatColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// HasFilters @ 14a88b930

bool __thiscall FOutputFloatColumn::HasFilters(FOutputFloatColumn *this)

{
  return false;
}

// HasOutputs @ 14a88b9b0

bool __thiscall FOutputFloatColumn::HasOutputs(FOutputFloatColumn *this)

{
  return true;
}

// SetOutputs @ 14a88f5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputFloatColumn::SetOutputs
          (FOutputFloatColumn *this,FChooserEvaluationContext *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChooserParameterFloatBase *pFVar4;
  undefined4 uVar5;
  FString local_48;
  FAssetLog local_38 [2];
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    if (param_2 == -2) {
      uVar5 = SUB84(this->FallbackValue,0);
    }
    else {
      if ((param_2 < 0) || ((this->RowValues).ArrayNum <= param_2)) {
        if ((byte)LogChooser._0_1_ < 2) {
          return;
        }
        ::FString::PrintfImpl(&local_48,L"Invalid index passed to FOutputFloatColumn::SetOutputs");
        local_38[0].Object = (param_1->DebuggingInfo).CurrentChooser;
        local_38[0].Path = (wchar_t *)0x0;
        local_38[0].PackagePath = (FPackagePath *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogChooser.field_0x4,Error,local_38,&local_48,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\OutputFloatColumn.cpp"
                   ,0x23);
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
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
      uVar5 = (undefined4)
              *(undefined8 *)((this->RowValues).AllocatorInstance.Data + (longlong)param_2 * 8);
    }
    pFVar4 = UE::StructUtils::GetStructRef<FChooserParameterFloatBase>
                       ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                        (this->InputValue).StructMemory);
    (**(code **)((longlong)*pFVar4 + 0x48))(pFVar4,param_1,uVar5);
  }
  return;
}

