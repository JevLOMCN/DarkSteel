// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 4

// StaticStruct @ 148b85dc0

UScriptStruct * __cdecl FStructSerializerOptionalTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerOptionalTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerOptionalTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerOptionalTestStruct,
                         (UObject *)pUVar1,L"StructSerializerOptionalTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerOptionalTestStruct.OuterSingleton;
}

// FStructSerializerOptionalTestStruct @ 148b9e910

FStructSerializerOptionalTestStruct * __thiscall
FStructSerializerOptionalTestStruct::FStructSerializerOptionalTestStruct
          (FStructSerializerOptionalTestStruct *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FStructSerializerOptionalTestStruct *pFVar4;
  FStructSerializerBuiltinTestStruct *pFVar5;
  TOptional<FName>_u_0 local_res8;
  FString local_e8;
  FStructSerializerBuiltinTestStruct local_d8;
  
  ::FString::FString(&local_e8,L"Test String");
  (this->StrOptional).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       local_e8.Data.AllocatorInstance.Data;
  *(int *)((longlong)&(this->StrOptional).field0_0x0 + 8) = local_e8.Data.ArrayNum;
  iVar2 = local_e8.Data.ArrayMax;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)&(this->StrOptional).field0_0x0 + 0xc) = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  if ((iVar2 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FStructSerializerOptionalTestStruct *)(*pcVar1)();
    return pFVar4;
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  (this->StrOptionalUnset).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->StrOptionalUnset).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->StrOptionalUnset).field0_0x0 + 0xc) = 0xffffffff;
  (this->IntOptional).TypedValue = 0x4d2;
  (this->IntOptional).bIsSet = true;
  (this->IntOptionalUnset).bIsSet = false;
  ::FName::FName(&local_res8.TypedValue,L"Test Name");
  (this->NameOptional).field0_0x0.TypedValue = (FName)local_res8;
  if ((local_res8.TypedValue.ComparisonIndex.Value.Value == 0xffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FStructSerializerOptionalTestStruct *)(*pcVar1)();
    return pFVar4;
  }
  (this->NameOptionalUnset).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->NameOptionalUnset).field0_0x0.TypedValue.Number = 0;
  pFVar5 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&local_d8);
  FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
            (&(this->StructOptional).TypedValue,pFVar5);
  (this->StructOptional).bIsSet = true;
  if (local_d8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.Text.TextData.Reference + 0x10))();
  }
  if (local_d8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.String.Data.AllocatorInstance.Data);
  }
  (this->StructOptionalUnset).bIsSet = false;
  return this;
}

// ~FStructSerializerOptionalTestStruct @ 148ba0780

void __thiscall
FStructSerializerOptionalTestStruct::~FStructSerializerOptionalTestStruct
          (FStructSerializerOptionalTestStruct *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  if ((this->StructOptionalUnset).bIsSet != false) {
    pIVar1 = (this->StructOptionalUnset).TypedValue.Text.TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pFVar2 = (this->StructOptionalUnset).TypedValue.String.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  if ((this->StructOptional).bIsSet != false) {
    pIVar1 = (this->StructOptional).TypedValue.Text.TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pFVar2 = (this->StructOptional).TypedValue.String.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  if ((*(int *)((longlong)&(this->StrOptionalUnset).field0_0x0 + 0xc) != -1) &&
     (pFVar2 = (this->StrOptionalUnset).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  if ((*(int *)((longlong)&(this->StrOptional).field0_0x0 + 0xc) != -1) &&
     (pFVar2 = (this->StrOptional).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// operator= @ 148ba19c0

FStructSerializerOptionalTestStruct * __thiscall
FStructSerializerOptionalTestStruct::operator=
          (FStructSerializerOptionalTestStruct *this,FStructSerializerOptionalTestStruct *param_1)

{
  TOptional<FString>::operator=(&this->StrOptional,&param_1->StrOptional);
  TOptional<FString>::operator=(&this->StrOptionalUnset,&param_1->StrOptionalUnset);
  if (&param_1->IntOptional != &this->IntOptional) {
    if ((param_1->IntOptional).bIsSet == false) {
      if ((this->IntOptional).bIsSet != false) {
        (this->IntOptional).bIsSet = false;
      }
    }
    else {
      (this->IntOptional).TypedValue = (param_1->IntOptional).TypedValue;
      (this->IntOptional).bIsSet = true;
    }
  }
  if (&param_1->IntOptionalUnset != &this->IntOptionalUnset) {
    if ((param_1->IntOptionalUnset).bIsSet == false) {
      if ((this->IntOptionalUnset).bIsSet != false) {
        (this->IntOptionalUnset).bIsSet = false;
      }
    }
    else {
      (this->IntOptionalUnset).TypedValue = (param_1->IntOptionalUnset).TypedValue;
      (this->IntOptionalUnset).bIsSet = true;
    }
  }
  TOptional<FName>::operator=(&this->NameOptional,&param_1->NameOptional);
  TOptional<FName>::operator=(&this->NameOptionalUnset,&param_1->NameOptionalUnset);
  TOptional<FStructSerializerBuiltinTestStruct>::operator=
            (&this->StructOptional,&param_1->StructOptional);
  TOptional<FStructSerializerBuiltinTestStruct>::operator=
            (&this->StructOptionalUnset,&param_1->StructOptionalUnset);
  return this;
}

