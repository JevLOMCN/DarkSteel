// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// FCachedQuery @ 14a8aafa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FCachedQuery * __thiscall
UE::PoseSearch::FCachedQuery::FCachedQuery(FCachedQuery *this,UPoseSearchSchema *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCachedQuery *pFVar3;
  
  (this->Values).AllocatorInstance.Data = (float *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  if (param_1 == (UPoseSearchSchema *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSchema",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x2f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCachedQuery *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->Schema = param_1;
  TArray<float,TMemStackAllocator<16>_>::SetNumZeroed
            (&this->Values,param_1->SchemaCardinality,Default);
  return this;
}

// GetValues @ 14a8bf670

TArrayView<float_const_,int> * __thiscall
UE::PoseSearch::FCachedQuery::GetValues
          (FCachedQuery *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  
  iVar1 = (this->Values).ArrayNum;
  __return_storage_ptr__->DataPtr = (this->Values).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

