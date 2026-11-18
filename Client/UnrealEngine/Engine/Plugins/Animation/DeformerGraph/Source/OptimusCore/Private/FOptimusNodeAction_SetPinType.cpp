// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e10dad0

UScriptStruct * __cdecl FOptimusNodeAction_SetPinType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinType.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType,(UObject *)pUVar1,
                         L"OptimusNodeAction_SetPinType");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_SetPinType.OuterSingleton;
}

// Do @ 14e10dd60

bool __thiscall
FOptimusNodeAction_SetPinType::Do(FOptimusNodeAction_SetPinType *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  
  bVar1 = SetPinType(this,param_1,this->NewDataTypeName);
  return bVar1;
}

// Undo @ 14e10dd70

bool __thiscall
FOptimusNodeAction_SetPinType::Undo
          (FOptimusNodeAction_SetPinType *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  
  bVar1 = SetPinType(this,param_1,this->OldDataTypeName);
  return bVar1;
}

// FOptimusNodeAction_SetPinType @ 14e153670

FOptimusNodeAction_SetPinType * __thiscall
FOptimusNodeAction_SetPinType::FOptimusNodeAction_SetPinType
          (FOptimusNodeAction_SetPinType *this,UOptimusNodePin *param_1,FOptimusDataTypeRef *param_2
          )

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FOptimusNodeAction_SetPinType *pFVar6;
  FString *pFVar7;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  FString local_28;
  
  pFVar1 = &this->PinPath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_SetPinType__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  (this->NewDataTypeName).ComparisonIndex = 0;
  (this->NewDataTypeName).Number = 0;
  (this->OldDataTypeName).ComparisonIndex = 0;
  (this->OldDataTypeName).Number = 0;
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643788069>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0xdb,"InPin");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FOptimusNodeAction_SetPinType *)(*pcVar4)();
      return pFVar6;
    }
  }
  else {
    pFVar7 = UOptimusNodePin::GetPinPath(param_1,&local_28);
    if (pFVar1 != pFVar7) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PinPath).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->PinPath).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this->NewDataTypeName = param_2->TypeName;
    FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_38);
    if (local_38.Object == (FOptimusDataType *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FOptimusNodeAction_SetPinType *)(*pcVar4)();
        return pFVar6;
      }
    }
    this->OldDataTypeName = (local_38.Object)->TypeName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  pvVar3 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return this;
}

// SetPinType @ 14e220970

bool __thiscall
FOptimusNodeAction_SetPinType::SetPinType
          (FOptimusNodeAction_SetPinType *this,IOptimusPathResolver *param_1,FName param_2)

{
  ForAnyElementType _Src;
  bool bVar1;
  UOptimusNodePin *this_00;
  FOptimusDataTypeRegistry *this_01;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar2;
  UOptimusNode *this_02;
  size_t _Size;
  TSharedPtr<FOptimusDataType_const_,1> local_98;
  TSharedPtr<FOptimusDataType_const_,1> local_88;
  undefined1 local_78 [32];
  FUtf8String local_58;
  undefined1 local_48 [32];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->PinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return false;
  }
  this_01 = FOptimusDataTypeRegistry::Get();
  pTVar2 = FOptimusDataTypeRegistry::FindType(this_01,&local_88,param_2);
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_78._8_8_ = 0;
  local_78._24_8_ = 0;
  local_78._16_8_ = 0;
  FUtf8String::Reset(&local_58,0);
  local_98.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  local_98.Object = pTVar2->Object;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_78,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar2->SharedReferenceCount).ReferenceController);
  this_02 = UOptimusNodePin::GetOwningNode(this_00);
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  _Size = (size_t)local_58.Data.ArrayNum;
  local_48._0_8_ = local_78._0_8_;
  local_48._8_8_ = local_78._8_8_;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = local_58.Data.ArrayNum;
  local_48._16_8_ = local_78._16_8_;
  local_48._24_8_ = local_78._24_8_;
  if (local_58.Data.ArrayNum == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_58.Data.ArrayNum,0,&local_28,local_58.Data.ArrayNum,&local_1c);
    memcpy(local_28.Data,_Src.Data,_Size);
  }
  bVar1 = UOptimusNode::SetPinDataTypeDirect(this_02,this_00,(FOptimusDataTypeRef *)local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

