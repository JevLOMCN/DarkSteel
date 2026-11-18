// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 5

// StaticStruct @ 148c4a640

UScriptStruct * __cdecl FAutomatedTestFilter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestFilter.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomatedTestFilter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestFilter,(UObject *)pUVar1,
                         L"AutomatedTestFilter");
  }
  return Z_Registration_Info_UScriptStruct_FAutomatedTestFilter.OuterSingleton;
}

// PassesFilter @ 148c4a8e0

bool __thiscall
FAutomatedTestFilter::PassesFilter
          (FAutomatedTestFilter *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [8];
  
  bVar2 = FAutomatedTestFilterBase::PassesFilter((FAutomatedTestFilterBase *)this,param_1);
  if (bVar2) {
    iVar1 = (this->Exclude).ArrayNum;
    if (iVar1 == 0) {
LAB_148c4a953:
      iVar1 = (this->Tags).ArrayNum;
      if (iVar1 != 0) {
        pFVar5 = (this->Tags).AllocatorInstance.Data;
        pFVar4 = pFVar5 + (longlong)iVar1 * 0x18;
        while( true ) {
          if ((this->Tags).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FAutomatedTestTagFilter_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar5 == pFVar4) {
            return false;
          }
          cVar3 = (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,param_1);
          if (cVar3 != '\0') break;
          pFVar5 = pFVar5 + 0x18;
        }
        bVar2 = true;
      }
    }
    else {
      pFVar4 = (this->Exclude).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
      while( true ) {
        if ((this->Exclude).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FAutomatedTestFilterBase_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar4 == pFVar5) goto LAB_148c4a953;
        cVar3 = (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,param_1);
        if (cVar3 != '\0') break;
        pFVar4 = pFVar4 + 0x20;
      }
      bVar2 = false;
    }
  }
  return bVar2;
}

// FAutomatedTestFilter @ 148c52760

FAutomatedTestFilter * __thiscall
FAutomatedTestFilter::FAutomatedTestFilter(FAutomatedTestFilter *this,FAutomatedTestFilter *param_1)

{
  this->_padding_ = (longlong)&___7FAutomatedTestFilterBase__6B_;
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  this->_padding_ = (longlong)&___7FAutomatedTestFilter__6B_;
  (this->Exclude).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Exclude).AllocatorInstance.Data = (param_1->Exclude).AllocatorInstance.Data;
  (param_1->Exclude).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Exclude).ArrayNum = (param_1->Exclude).ArrayNum;
  (this->Exclude).ArrayMax = (param_1->Exclude).ArrayMax;
  (param_1->Exclude).ArrayNum = 0;
  (param_1->Exclude).ArrayMax = 0;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).AllocatorInstance.Data = (param_1->Tags).AllocatorInstance.Data;
  (param_1->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = (param_1->Tags).ArrayNum;
  (this->Tags).ArrayMax = (param_1->Tags).ArrayMax;
  (param_1->Tags).ArrayNum = 0;
  (param_1->Tags).ArrayMax = 0;
  return this;
}

// FAutomatedTestFilter @ 148c52800

FAutomatedTestFilter * __thiscall
FAutomatedTestFilter::FAutomatedTestFilter
          (FAutomatedTestFilter *this,FString *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  this->_padding_ = (longlong)&___7FAutomatedTestFilterBase__6B_;
  ::FString::FString((FString *)&this->_padding_,pFVar2);
  *(bool *)&this->_padding_ = param_2;
  *(bool *)((longlong)&this->_padding_ + 1) = param_3;
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAutomatedTestFilter__6B_;
  (this->Exclude).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Exclude).ArrayNum = 0;
  (this->Exclude).ArrayMax = 0;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FAutomatedTestFilter @ 148c53b90

void __thiscall FAutomatedTestFilter::~FAutomatedTestFilter(FAutomatedTestFilter *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAutomatedTestTagFilter,int>
            ((FAutomatedTestTagFilter *)(this->Tags).AllocatorInstance.Data,(this->Tags).ArrayNum);
  pFVar1 = (this->Tags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomatedTestFilterBase,int>
            ((FAutomatedTestFilterBase *)(this->Exclude).AllocatorInstance.Data,
             (this->Exclude).ArrayNum);
  pFVar1 = (this->Exclude).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAutomatedTestFilterBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

