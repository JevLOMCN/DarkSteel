// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FParseTagResult @ 1499c2ef0

FParseTagResult * __thiscall
PCG::Private::FParseTagResult::FParseTagResult(FParseTagResult *this,FParseTagResult *param_1)

{
  bool bVar1;
  
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attribute).Data.AllocatorInstance.Data = (param_1->Attribute).Data.AllocatorInstance.Data;
  (param_1->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attribute).Data.ArrayNum = (param_1->Attribute).Data.ArrayNum;
  (this->Attribute).Data.ArrayMax = (param_1->Attribute).Data.ArrayMax;
  (param_1->Attribute).Data.ArrayNum = 0;
  (param_1->Attribute).Data.ArrayMax = 0;
  (this->OriginalAttribute).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->OriginalAttribute).field0_0x0 + 0xc) != -1) {
    (this->OriginalAttribute).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (param_1->OriginalAttribute).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    (param_1->OriginalAttribute).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(param_1->OriginalAttribute).field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 0xc) =
         *(undefined4 *)((longlong)&(param_1->OriginalAttribute).field0_0x0 + 0xc);
    *(int *)((longlong)&(param_1->OriginalAttribute).field0_0x0 + 8) = 0;
    *(int *)((longlong)&(param_1->OriginalAttribute).field0_0x0 + 0xc) = 0;
  }
  (this->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->Value).field0_0x0 + 0xc) != -1) {
    (this->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (param_1->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    (param_1->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc) =
         *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 0xc);
    *(int *)((longlong)&(param_1->Value).field0_0x0 + 8) = 0;
    *(int *)((longlong)&(param_1->Value).field0_0x0 + 0xc) = 0;
  }
  (this->NumericValue).bIsSet = false;
  bVar1 = (param_1->NumericValue).bIsSet;
  (this->NumericValue).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->NumericValue).TypedValue = (param_1->NumericValue).TypedValue;
  }
  (this->BooleanValue).bIsSet = false;
  bVar1 = (param_1->BooleanValue).bIsSet;
  (this->BooleanValue).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->BooleanValue).TypedValue = (param_1->BooleanValue).TypedValue;
  }
  return this;
}

// FParseTagResult @ 149d33dd0

FParseTagResult * __thiscall
PCG::Private::FParseTagResult::FParseTagResult(FParseTagResult *this,FString *param_1)

{
  FParseTagResult *pFVar1;
  FParseTagResult local_58;
  
  *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 0xc) = 0xffffffff;
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attribute).Data.ArrayNum = 0;
  (this->Attribute).Data.ArrayMax = 0;
  (this->OriginalAttribute).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 8) = 0;
  (this->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8) = 0;
  (this->NumericValue).bIsSet = false;
  (this->BooleanValue).bIsSet = false;
  *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc) = 0xffffffff;
  pFVar1 = ParseTag(&local_58,param_1);
  operator=(this,pFVar1);
  if ((local_58.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_58.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_58.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
  }
  if ((local_58.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_58.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_58.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.
                          Data);
  }
  if (local_58.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Attribute.Data.AllocatorInstance.Data);
  }
  return this;
}

// FParseTagResult @ 149d33e70

FParseTagResult * __thiscall
PCG::Private::FParseTagResult::FParseTagResult(FParseTagResult *this,FName param_1)

{
  TOptional<FString> *pTVar1;
  TOptional<FString> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  FString *pFVar7;
  FParseTagResult *pFVar8;
  FName local_res8;
  FString local_78;
  FParseTagResult local_68;
  
  pTVar1 = &this->OriginalAttribute;
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->Value;
  (this->Attribute).Data.ArrayNum = 0;
  (this->Attribute).Data.ArrayMax = 0;
  (this->NumericValue).bIsSet = false;
  (this->BooleanValue).bIsSet = false;
  (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 0xc) = 0xffffffff;
  (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc) = 0xffffffff;
  local_res8 = param_1;
  pFVar7 = ::FName::ToString(&local_res8,&local_78);
  ParseTag(&local_68,pFVar7);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (this != &local_68) {
    pFVar3 = (this->Attribute).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Attribute).Data.AllocatorInstance.Data = local_68.Attribute.Data.AllocatorInstance.Data;
    (this->Attribute).Data.ArrayNum = local_68.Attribute.Data.ArrayNum;
    (this->Attribute).Data.ArrayMax = local_68.Attribute.Data.ArrayMax;
    local_68.Attribute.Data.ArrayNum = 0;
    local_68.Attribute.Data.ArrayMax = 0;
    local_68.Attribute.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (&local_68.OriginalAttribute != pTVar1) {
    if (local_68.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax == -1) {
      if (*(int *)((longlong)&(this->OriginalAttribute).field0_0x0 + 0xc) != -1) {
        pFVar3 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->OriginalAttribute).field0_0x0 + 0xc) = 0xffffffff;
      }
    }
    else {
      pFVar3 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           local_68.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
      *(int *)((longlong)&(this->OriginalAttribute).field0_0x0 + 8) =
           local_68.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayNum;
      uVar5 = local_68.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax;
      local_68.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      *(int *)((longlong)&(this->OriginalAttribute).field0_0x0 + 0xc) =
           local_68.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax;
      local_68.OriginalAttribute.field0_0x0._8_8_ = 0;
      if (uVar5 == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FParseTagResult *)(*pcVar4)();
          return pFVar8;
        }
      }
    }
  }
  if (&local_68.Value != pTVar2) {
    if (local_68.Value.field0_0x0.TypedValue.Data.ArrayMax == -1) {
      if (*(int *)((longlong)&(this->Value).field0_0x0 + 0xc) != -1) {
        pFVar3 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc) = 0xffffffff;
      }
    }
    else {
      pFVar3 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           local_68.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
      *(int *)((longlong)&(this->Value).field0_0x0 + 8) =
           local_68.Value.field0_0x0.TypedValue.Data.ArrayNum;
      uVar5 = local_68.Value.field0_0x0.TypedValue.Data.ArrayMax;
      local_68.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      *(int *)((longlong)&(this->Value).field0_0x0 + 0xc) =
           local_68.Value.field0_0x0.TypedValue.Data.ArrayMax;
      local_68.Value.field0_0x0._8_8_ = 0;
      if (uVar5 == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FParseTagResult *)(*pcVar4)();
          return pFVar8;
        }
      }
    }
  }
  if (&local_68.NumericValue != &this->NumericValue) {
    if (local_68.NumericValue.bIsSet == false) {
      if ((this->NumericValue).bIsSet != false) {
        (this->NumericValue).bIsSet = false;
      }
    }
    else {
      (this->NumericValue).TypedValue = local_68.NumericValue.TypedValue;
      (this->NumericValue).bIsSet = true;
    }
  }
  if (&local_68.BooleanValue != &this->BooleanValue) {
    if (local_68.BooleanValue.bIsSet == false) {
      if ((this->BooleanValue).bIsSet != false) {
        (this->BooleanValue).bIsSet = false;
      }
    }
    else {
      (this->BooleanValue).TypedValue = local_68.BooleanValue.TypedValue;
      (this->BooleanValue).bIsSet = true;
    }
  }
  if ((local_68.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_68.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
  }
  if ((local_68.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_68.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.
                          Data);
  }
  if (local_68.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Attribute.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator= @ 149d357e0

FParseTagResult * __thiscall
PCG::Private::FParseTagResult::operator=(FParseTagResult *this,FParseTagResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Attribute).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Attribute).Data.AllocatorInstance.Data = (param_1->Attribute).Data.AllocatorInstance.Data
    ;
    (param_1->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Attribute).Data.ArrayNum = (param_1->Attribute).Data.ArrayNum;
    (this->Attribute).Data.ArrayMax = (param_1->Attribute).Data.ArrayMax;
    (param_1->Attribute).Data.ArrayNum = 0;
    (param_1->Attribute).Data.ArrayMax = 0;
  }
  TOptional<FString>::operator=(&this->OriginalAttribute,&param_1->OriginalAttribute);
  TOptional<FString>::operator=(&this->Value,&param_1->Value);
  if (&param_1->NumericValue != &this->NumericValue) {
    if ((param_1->NumericValue).bIsSet == false) {
      if ((this->NumericValue).bIsSet != false) {
        (this->NumericValue).bIsSet = false;
      }
    }
    else {
      (this->NumericValue).TypedValue = (param_1->NumericValue).TypedValue;
      (this->NumericValue).bIsSet = true;
    }
  }
  if (&param_1->BooleanValue != &this->BooleanValue) {
    if ((param_1->BooleanValue).bIsSet == false) {
      if ((this->BooleanValue).bIsSet != false) {
        (this->BooleanValue).bIsSet = false;
        return this;
      }
    }
    else {
      (this->BooleanValue).TypedValue = (param_1->BooleanValue).TypedValue;
      (this->BooleanValue).bIsSet = true;
    }
  }
  return this;
}

