// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 4

// FInterchangeProperty @ 14e67c300

FInterchangeProperty * __thiscall
UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty::
FInterchangeProperty(FInterchangeProperty *this,FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res8 [4];
  
  (this->ClassType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassType).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassType).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->ClassType).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->Path).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  iVar1 = (param_3->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(local_res8,iVar3,(wchar_t *)(param_3->Data).AllocatorInstance.Data,
                          FNAME_Add);
  this->Name = *pFVar2;
  (this->VariantProperty)._padding_ = 0;
  (this->VariantProperty).TypeIndex = '\0';
  return this;
}

// FInterchangeProperty @ 14e67c390

FInterchangeProperty * __thiscall
UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty::
FInterchangeProperty
          (FInterchangeProperty *this,FString *param_1,FString *param_2,FString *param_3,int param_4
          )

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res8 [4];
  
  (this->ClassType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassType).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassType).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->ClassType).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->Path).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  iVar1 = (param_3->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(local_res8,iVar3,(wchar_t *)(param_3->Data).AllocatorInstance.Data,
                          FNAME_Add);
  this->Name = *pFVar2;
  *(int *)&(this->VariantProperty)._padding_ = param_4;
  (this->VariantProperty).TypeIndex = '\x01';
  return this;
}

// FInterchangeProperty @ 14e67c420

FInterchangeProperty * __thiscall
UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty::
FInterchangeProperty
          (FInterchangeProperty *this,FString *param_1,FString *param_2,FString *param_3,
          UEnum *param_4)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res8 [4];
  
  (this->ClassType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassType).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassType).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->ClassType).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->Path).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  iVar1 = (param_3->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(local_res8,iVar3,(wchar_t *)(param_3->Data).AllocatorInstance.Data,
                          FNAME_Add);
  this->Name = *pFVar2;
  (this->VariantProperty)._padding_ = (longlong)param_4;
  (this->VariantProperty).TypeIndex = '\0';
  return this;
}

// ~FInterchangeProperty @ 14e691ad0

void __thiscall
UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty::
~FInterchangeProperty(FInterchangeProperty *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Path).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClassType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

