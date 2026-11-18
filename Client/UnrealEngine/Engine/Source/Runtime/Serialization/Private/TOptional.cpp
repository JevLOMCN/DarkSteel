// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 4

// operator= @ 148ba0a40

TOptional<FStructSerializerBuiltinTestStruct> * __thiscall
TOptional<FStructSerializerBuiltinTestStruct>::operator=
          (TOptional<FStructSerializerBuiltinTestStruct> *this,
          TOptional<FStructSerializerBuiltinTestStruct> *param_1)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        pIVar1 = (this->TypedValue).Text.TextData.Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        pFVar2 = (this->TypedValue).String.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      }
      FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
                (&this->TypedValue,&param_1->TypedValue);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      pIVar1 = (this->TypedValue).Text.TextData.Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = (this->TypedValue).String.Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      this->bIsSet = false;
    }
  }
  return this;
}

// operator= @ 148ba0af0

TOptional<FName> * __thiscall
TOptional<FName>::operator=(TOptional<FName> *this,TOptional<FName> *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FName> *pTVar4;
  
  if (param_1 != this) {
    if ((param_1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((this->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (this->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->field0_0x0).TypedValue.Number = 0;
        return this;
      }
    }
    else {
      FVar1 = (param_1->field0_0x0).TypedValue;
      (this->field0_0x0).TypedValue = FVar1;
      if ((FVar1.ComparisonIndex.Value.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<FName> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  return this;
}

// operator= @ 148ba0b60

TOptional<FString> * __thiscall
TOptional<FString>::operator=(TOptional<FString> *this,TOptional<FString> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FString> *pTVar4;
  
  if (param_1 != this) {
    if (*(int *)((longlong)&param_1->field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
        pFVar1 = (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = 0xffffffff;
        (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
      }
    }
    else {
      pFVar1 = (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::FString::FString((FString *)this,(FString *)param_1);
      if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TOptional<FString> *)(*pcVar2)();
          return pTVar4;
        }
      }
    }
  }
  return this;
}

// GetValue @ 148ba8ed0

FName * __thiscall TOptional<FName>::GetValue(TOptional<FName> *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((this->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FName *)this;
}

