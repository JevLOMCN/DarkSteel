// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a871c10

UScriptStruct * __cdecl FOutputStructColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOutputStructColumn.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FOutputStructColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOutputStructColumn,(UObject *)pUVar1,
                         L"OutputStructColumn");
  }
  return Z_Registration_Info_UScriptStruct_FOutputStructColumn.OuterSingleton;
}

// FOutputStructColumn @ 14a87d6a0

FOutputStructColumn * __thiscall FOutputStructColumn::FOutputStructColumn(FOutputStructColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FOutputStructColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  FInstancedStruct::FInstancedStruct(&this->FallbackValue);
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FStructContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FStructContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructContextProperty,(UObject *)pUVar1,
                         L"StructContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->InputValue,
             Z_Registration_Info_UScriptStruct_FStructContextProperty.OuterSingleton,(uchar *)0x0);
  return this;
}

// GetInputValue @ 14a88a5b0

FChooserParameterBase * __thiscall FOutputStructColumn::GetInputValue(FOutputStructColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// HasFilters @ 14a88b960

bool __thiscall FOutputStructColumn::HasFilters(FOutputStructColumn *this)

{
  return false;
}

// HasOutputs @ 14a88b9e0

bool __thiscall FOutputStructColumn::HasOutputs(FOutputStructColumn *this)

{
  return true;
}

// SetOutputs @ 14a88f9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputStructColumn::SetOutputs
          (FOutputStructColumn *this,FChooserEvaluationContext *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChooserParameterStructBase *pFVar4;
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
                  (&local_38,L"Invalid index %d passed to FOutputStructColumn::SetOutputs");
        local_28.Object = (param_1->DebuggingInfo).CurrentChooser;
        local_28.Path = (wchar_t *)0x0;
        local_28.PackagePath = (FPackagePath *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogChooser.field_0x4,Error,&local_28,&local_38,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\OutputStructColumn.cpp"
                   ,0x82);
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
      pFVar5 = (this->RowValues).AllocatorInstance.Data + (longlong)param_2 * 0x10;
    }
    if ((*(longlong *)(pFVar5 + 8) != 0) && (*(longlong *)&pFVar5->field_0x0 != 0)) {
      pFVar4 = UE::StructUtils::GetStructRef<FChooserParameterStructBase>
                         ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                          (this->InputValue).StructMemory);
      (**(code **)((longlong)*pFVar4 + 0x40))(pFVar4,param_1,pFVar5);
    }
  }
  return;
}

