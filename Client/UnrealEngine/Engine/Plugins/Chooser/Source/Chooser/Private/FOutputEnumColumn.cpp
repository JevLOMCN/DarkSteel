// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a86e200

UScriptStruct * __cdecl FOutputEnumColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOutputEnumColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FOutputEnumColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOutputEnumColumn,(UObject *)pUVar1,
                         L"OutputEnumColumn");
  }
  return Z_Registration_Info_UScriptStruct_FOutputEnumColumn.OuterSingleton;
}

// FOutputEnumColumn @ 14a87d510

FOutputEnumColumn * __thiscall FOutputEnumColumn::FOutputEnumColumn(FOutputEnumColumn *this)

{
  this->_padding_ = (longlong)&___7FOutputEnumColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->FallbackValue).Value = '\0';
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  return this;
}

// GetInputValue @ 14a88a570

FChooserParameterBase * __thiscall FOutputEnumColumn::GetInputValue(FOutputEnumColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// HasFilters @ 14a88b920

bool __thiscall FOutputEnumColumn::HasFilters(FOutputEnumColumn *this)

{
  return false;
}

// HasOutputs @ 14a88b9a0

bool __thiscall FOutputEnumColumn::HasOutputs(FOutputEnumColumn *this)

{
  return true;
}

// SetOutputs @ 14a88f460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputEnumColumn::SetOutputs
          (FOutputEnumColumn *this,FChooserEvaluationContext *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChooserParameterEnumBase *pFVar4;
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
        ::FString::PrintfImpl(&local_38,L"Invalid index %d passed to FOutputEnumColumn::SetOutputs")
        ;
        local_28.Object = (param_1->DebuggingInfo).CurrentChooser;
        local_28.Path = (wchar_t *)0x0;
        local_28.PackagePath = (FPackagePath *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogChooser.field_0x4,Error,&local_28,&local_38,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\OutputEnumColumn.cpp"
                   ,0x25);
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
      pFVar5 = (this->RowValues).AllocatorInstance.Data + param_2;
    }
    pFVar4 = UE::StructUtils::GetStructRef<FChooserParameterEnumBase>
                       ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                        (this->InputValue).StructMemory);
    (**(code **)((longlong)*pFVar4 + 0x48))(pFVar4,param_1,pFVar5->field_0x0);
  }
  return;
}

