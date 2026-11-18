// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// FAnalyticsEventAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_&> @ 14e5b6d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_&>
          (FAnalyticsEventAttribute *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *this_00;
  void *_Src;
  FString *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  pFVar1 = CheckName(this,param_1);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &this->AttrValueString;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar1->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrValueString).Data.ArrayNum = 0;
  (this->AttrValueString).Data.ArrayMax = 0;
  iVar5 = param_2->ArrayNum;
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar6 = pFVar3 + (longlong)iVar5 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar5) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar3 == pFVar6) break;
    local_40 = *(int *)(pFVar3 + 8);
    lVar2 = (longlong)local_40;
    _Src = *(void **)pFVar3;
    local_48.Data = (FScriptContainerElement *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar2 * 2);
    }
    iVar4 = local_40 + -1;
    if (local_40 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(this_00,(wchar_t *)local_48.Data,iVar4);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    ::FString::AppendChars(this_00,L",",1);
    pFVar3 = pFVar3 + 0x10;
  }
  iVar4 = (this->AttrValueString).Data.ArrayNum;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if (iVar5 + -1 < iVar5) {
    iVar5 = iVar5 + -1;
  }
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  ::FString::RemoveAt(this_00,iVar4,1,No);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// FAnalyticsEventAttribute<char_const_*> @ 14e5b6f70

FAnalyticsEventAttribute * __thiscall
FAnalyticsEventAttribute::FAnalyticsEventAttribute<char_const_*>
          (FAnalyticsEventAttribute *this,FString *param_1,char **param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  pFVar2 = CheckName(this,param_1);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::FString(&this->AttrValueString,*param_2);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

