// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 15

// StaticStruct @ 1443ffdd0

UScriptStruct * __cdecl FDataflowOverrideNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowOverrideNode,(UObject *)pUVar1,
                         L"DataflowOverrideNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton;
}

// GetType @ 1443ffe30

FName __thiscall FDataflowOverrideNode::GetType(FDataflowOverrideNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowOverrideNode");
  return in_RDX;
}

// IsA @ 1443ffe60

bool __thiscall FDataflowOverrideNode::IsA(FDataflowOverrideNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FDataflowOverrideNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443ffec8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443ffec8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443ffee6;
      }
    }
  }
  bVar5 = true;
LAB_1443ffee6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443fff20

FStructOnScope * __thiscall FDataflowOverrideNode::NewStructOnScope(FDataflowOverrideNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowOverrideNode,(UObject *)pUVar2,
                           L"DataflowOverrideNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443fffa0

void __thiscall
FDataflowOverrideNode::SerializeInternal(FDataflowOverrideNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowOverrideNode,(UObject *)pUVar1,
                         L"DataflowOverrideNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014440001d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 144400030

FName __thiscall FDataflowOverrideNode::GetDisplayName(FDataflowOverrideNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"DataflowOverrideNode");
  return in_RDX;
}

// GetCategory @ 144400060

FName __thiscall FDataflowOverrideNode::GetCategory(FDataflowOverrideNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BaseClass");
  return in_RDX;
}

// GetTags @ 144400090

FString * __thiscall
FDataflowOverrideNode::GetTags(FDataflowOverrideNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1444000c0

UScriptStruct * __thiscall FDataflowOverrideNode::TypedScriptStruct(FDataflowOverrideNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowOverrideNode,(UObject *)pUVar1,
                         L"DataflowOverrideNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowOverrideNode.OuterSingleton;
}

// Evaluate @ 144400160

void __thiscall
FDataflowOverrideNode::Evaluate
          (FDataflowOverrideNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1835328770706243524>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowOverrideNode.h"
                     ,0x3c,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetDefaultValue<int> @ 144412600

int __thiscall
FDataflowOverrideNode::GetDefaultValue<int>(FDataflowOverrideNode *this,FContext *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  FDataflowInput *this_00;
  FString *pFVar3;
  ForAnyElementType _Str;
  longlong lVar4;
  FString local_38;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  iVar2 = 0;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Default;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  pFVar3 = FDataflowInput::GetValue<FString>(this_00,param_1,&this->Default);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  lVar4 = (longlong)local_38.Data.ArrayNum;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  if (1 < local_38.Data.ArrayNum) {
    bVar1 = ::FString::IsNumeric(&local_38);
    if (bVar1) {
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar2 = _wtoi((wchar_t *)_Str.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return iVar2;
}

// GetDefaultValue<float> @ 144412700

float __thiscall
FDataflowOverrideNode::GetDefaultValue<float>(FDataflowOverrideNode *this,FContext *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FDataflowInput *this_00;
  FString *pFVar2;
  ForAnyElementType _Str;
  longlong lVar3;
  double dVar4;
  float fVar5;
  FString local_48;
  FConnectionReference local_38 [2];
  
  local_38[0].Index = -1;
  local_38[0].ContainerReference = (void *)0x0;
  local_38[0].Reference = &this->Default;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,local_38);
  pFVar2 = FDataflowInput::GetValue<FString>(this_00,param_1,&this->Default);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  lVar3 = (longlong)local_48.Data.ArrayNum;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  fVar5 = 0.0;
  if (1 < local_48.Data.ArrayNum) {
    bVar1 = ::FString::IsNumeric(&local_48);
    if (bVar1) {
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        _Str.Data = local_48.Data.AllocatorInstance.Data;
      }
      dVar4 = _wtof((wchar_t *)_Str.Data);
      fVar5 = (float)dVar4;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return fVar5;
}

// ~FDataflowOverrideNode @ 144433a50

void __thiscall FDataflowOverrideNode::~FDataflowOverrideNode(FDataflowOverrideNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDataflowOverrideNode__6B_;
  pFVar1 = (this->Default).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// GetValueFromAsset @ 14444ee20

FString * __thiscall
FDataflowOverrideNode::GetValueFromAsset
          (FDataflowOverrideNode *this,FString *__return_storage_ptr__,FContext *param_1,
          UObject *param_2)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  FDataflowInput *this_00;
  FName *pFVar5;
  FString *pFVar6;
  bool bVar7;
  FName local_res8;
  FName local_res20;
  FString local_58;
  FConnectionReference local_48;
  
  bVar7 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Key;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
  pFVar5 = FDataflowInput::GetValue<FName>(this_00,param_1,&this->Key);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_res8 = *pFVar5;
  if (param_2 == (UObject *)0x0) goto LAB_14444ef48;
  if ((local_res8 == (FName)0x0) ||
     (bVar3 = ::FName::IsWithinBounds(local_res8.ComparisonIndex.Value), !bVar3)) {
LAB_14444eee3:
    bVar3 = false;
  }
  else {
    pFVar6 = ::FName::ToString(&local_res8,(FString *)&local_48);
    bVar7 = true;
    iVar1 = (pFVar6->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 < 1) goto LAB_14444eee3;
    bVar3 = true;
  }
  if ((bVar7) && (local_48.Reference != (FName *)0x0)) {
    FMemory::Free(local_48.Reference);
  }
  FVar2 = local_res8;
  if (bVar3) {
    pFVar5 = ::FName::FName(&local_res20,"Overrides");
    FindOverrideMapProperty<FString>(__return_storage_ptr__,param_2,*pFVar5,FVar2,&local_58);
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
LAB_14444ef48:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ShouldInvalidate @ 1444652a0

bool __thiscall FDataflowOverrideNode::ShouldInvalidate(FDataflowOverrideNode *this,FName param_1)

{
  FDataflowInput *pFVar1;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Key;
  pFVar1 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  if (pFVar1->Connection != (FDataflowOutput *)0x0) {
    return true;
  }
  return param_1 == this->Key;
}

