// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 7

// StaticStruct @ 14d7645c0

UScriptStruct * __cdecl FOpenColorIOColorSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOpenColorIOColorSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenColorIO();
    Z_Registration_Info_UScriptStruct_FOpenColorIOColorSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOpenColorIOColorSpace,(UObject *)pUVar1,
                         L"OpenColorIOColorSpace");
  }
  return Z_Registration_Info_UScriptStruct_FOpenColorIOColorSpace.OuterSingleton;
}

// FOpenColorIOColorSpace @ 14d768bf0

FOpenColorIOColorSpace * __thiscall
FOpenColorIOColorSpace::FOpenColorIOColorSpace
          (FOpenColorIOColorSpace *this,FString *param_1,int param_2,FString *param_3,
          FString *param_4)

{
  ::FString::FString(&this->ColorSpaceName,param_1);
  ::FString::FString(&this->FamilyName,param_3);
  ::FString::FString(&this->Description,param_4);
  return this;
}

// operator= @ 14d76a090

FOpenColorIOColorSpace * __thiscall
FOpenColorIOColorSpace::operator=(FOpenColorIOColorSpace *this,FOpenColorIOColorSpace *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (this != param_1) {
    pFVar2 = (this->ColorSpaceName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->ColorSpaceName).Data.AllocatorInstance.Data =
         (param_1->ColorSpaceName).Data.AllocatorInstance.Data;
    (param_1->ColorSpaceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ColorSpaceName).Data.ArrayNum = (param_1->ColorSpaceName).Data.ArrayNum;
    (this->ColorSpaceName).Data.ArrayMax = (param_1->ColorSpaceName).Data.ArrayMax;
    (param_1->ColorSpaceName).Data.ArrayNum = 0;
    (param_1->ColorSpaceName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->FamilyName;
  pFVar3 = &this->FamilyName;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FamilyName).Data.ArrayNum = (param_1->FamilyName).Data.ArrayNum;
    (this->FamilyName).Data.ArrayMax = (param_1->FamilyName).Data.ArrayMax;
    (param_1->FamilyName).Data.ArrayNum = 0;
    (param_1->FamilyName).Data.ArrayMax = 0;
  }
  pFVar3 = &param_1->Description;
  pFVar1 = &this->Description;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Description).Data.ArrayNum = (param_1->Description).Data.ArrayNum;
    (this->Description).Data.ArrayMax = (param_1->Description).Data.ArrayMax;
    (param_1->Description).Data.ArrayNum = 0;
    (param_1->Description).Data.ArrayMax = 0;
  }
  return this;
}

// GetFamilyNameAtDepth @ 14d770eb0

FString * __thiscall
FOpenColorIOColorSpace::GetFamilyNameAtDepth
          (FOpenColorIOColorSpace *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  ::FString::ParseIntoArray(&this->FamilyName,&local_18,FamilyDelimiter,true);
  if ((param_1 < 0) || (local_18.ArrayNum <= param_1)) {
    if ((param_1 != 0) || ((this->FamilyName).Data.ArrayNum < 2)) goto LAB_14d770f8b;
    ::FString::operator=(__return_storage_ptr__,&this->FamilyName);
  }
  else {
    uVar4 = 0;
    if (param_1 < local_18.ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    iVar1 = *(int *)(local_18.AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
    uVar4 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    ::FString::AssignRange
              (__return_storage_ptr__,
               *(wchar_t **)(local_18.AllocatorInstance.Data + (longlong)param_1 * 0x10),uVar4);
  }
LAB_14d770f8b:
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsValid @ 14d773a70

bool __thiscall FOpenColorIOColorSpace::IsValid(FOpenColorIOColorSpace *this)

{
  return 1 < (this->ColorSpaceName).Data.ArrayNum;
}

// Reset @ 14d776220

void __thiscall FOpenColorIOColorSpace::Reset(FOpenColorIOColorSpace *this)

{
  ::FString::Reset(&this->ColorSpaceName,0);
  ::FString::Reset(&this->FamilyName,0);
  ::FString::Reset(&this->Description,0);
  return;
}

// ToString @ 14d778c20

FString * __thiscall
FOpenColorIOColorSpace::ToString(FOpenColorIOColorSpace *this,FString *__return_storage_ptr__)

{
  if (1 < (this->ColorSpaceName).Data.ArrayNum) {
    ::FString::FString(__return_storage_ptr__,&this->ColorSpaceName);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

