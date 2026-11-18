// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147aa3f40

UScriptStruct * __cdecl FDPMatchingRulestructBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDPMatchingRulestructBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDPMatchingRulestructBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructBase,(UObject *)pUVar1,
                         L"DPMatchingRulestructBase");
  }
  return Z_Registration_Info_UScriptStruct_FDPMatchingRulestructBase.OuterSingleton;
}

// FDPMatchingRulestructBase @ 147abad90

FDPMatchingRulestructBase * __thiscall
FDPMatchingRulestructBase::FDPMatchingRulestructBase
          (FDPMatchingRulestructBase *this,FDPMatchingRulestructBase *param_1)

{
  TArray<FDPMatchingIfCondition,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FDPMatchingIfCondition *pFVar4;
  
  this->_padding_ = (longlong)&___7FDPMatchingRulestructBase__6B_;
  ::FString::FString(&this->RuleName,&param_1->RuleName);
  pTVar1 = &this->IfConditions;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->IfConditions).ArrayMax;
  iVar3 = (param_1->IfConditions).ArrayNum;
  pFVar4 = (FDPMatchingIfCondition *)(param_1->IfConditions).AllocatorInstance.Data;
  (this->IfConditions).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FDPMatchingIfCondition,FDPMatchingIfCondition,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  ::FString::FString(&this->AppendFragments,&param_1->AppendFragments);
  ::FString::FString(&this->SetUserVar,&param_1->SetUserVar);
  return this;
}

// ~FDPMatchingRulestructBase @ 147abed10

void __thiscall
FDPMatchingRulestructBase::~FDPMatchingRulestructBase(FDPMatchingRulestructBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDPMatchingRulestructBase__6B_;
  pFVar1 = (this->SetUserVar).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppendFragments).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDPMatchingIfCondition,int>
            ((FDPMatchingIfCondition *)(this->IfConditions).AllocatorInstance.Data,
             (this->IfConditions).ArrayNum);
  pFVar1 = (this->IfConditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuleName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 147ac06c0

FDPMatchingRulestructBase * __thiscall
FDPMatchingRulestructBase::operator=
          (FDPMatchingRulestructBase *this,FDPMatchingRulestructBase *param_1)

{
  TArray<FDPMatchingIfCondition,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FDPMatchingIfCondition *pFVar4;
  
  ::FString::operator=(&this->RuleName,&param_1->RuleName);
  pTVar1 = &this->IfConditions;
  if (pTVar1 != &param_1->IfConditions) {
    DestructItems<FDPMatchingIfCondition,int>
              ((FDPMatchingIfCondition *)(pTVar1->AllocatorInstance).Data,
               (this->IfConditions).ArrayNum);
    iVar3 = (param_1->IfConditions).ArrayNum;
    piVar2 = &(this->IfConditions).ArrayMax;
    pFVar4 = (FDPMatchingIfCondition *)(param_1->IfConditions).AllocatorInstance.Data;
    (this->IfConditions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FDPMatchingIfCondition,FDPMatchingIfCondition,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  ::FString::operator=(&this->AppendFragments,&param_1->AppendFragments);
  ::FString::operator=(&this->SetUserVar,&param_1->SetUserVar);
  return this;
}

// GetOnFalse @ 147aea450

FDPMatchingRulestructBase * __thiscall
FDPMatchingRulestructBase::GetOnFalse(FDPMatchingRulestructBase *this)

{
  return (FDPMatchingRulestructBase *)0x0;
}

// GetOnTrue @ 147aea4c0

FDPMatchingRulestructBase * __thiscall
FDPMatchingRulestructBase::GetOnTrue(FDPMatchingRulestructBase *this)

{
  return (FDPMatchingRulestructBase *)0x0;
}

