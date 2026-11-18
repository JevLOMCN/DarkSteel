// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e1100c0

UScriptStruct * __cdecl FOptimusNodeAction_RemovePin::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_RemovePin.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_RemovePin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin,(UObject *)pUVar1,
                         L"OptimusNodeAction_RemovePin");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_RemovePin.OuterSingleton;
}

// Do @ 14e110100

bool __thiscall
FOptimusNodeAction_RemovePin::Do(FOptimusNodeAction_RemovePin *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusNodePin *this_00;
  UOptimusNode *this_01;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->field_0xa0);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return false;
  }
  this_01 = UOptimusNodePin::GetOwningNode(this_00);
  bVar1 = UOptimusNode::RemovePinDirect(this_01,this_00);
  return bVar1;
}

// Undo @ 14e110180

bool __thiscall
FOptimusNodeAction_RemovePin::Undo(FOptimusNodeAction_RemovePin *this,IOptimusPathResolver *param_1)

{
  FName FVar1;
  FName FVar2;
  FOptimusDataType *pFVar3;
  FName FVar4;
  ForAnyElementType _Src;
  UOptimusNode *this_00;
  UOptimusNodePin *pUVar5;
  UOptimusNodePin *pUVar6;
  FOptimusDataTypeRegistry *this_01;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar7;
  FString *pFVar8;
  size_t _Size;
  TSharedPtr<FOptimusDataType_const_,1> TStack_a8;
  TSharedPtr<FOptimusDataType_const_,1> TStack_98;
  undefined1 auStack_88 [32];
  FUtf8String FStack_68;
  undefined1 auStack_58 [32];
  ForAnyElementType FStack_38;
  int iStack_30;
  int iStack_2c;
  
  this_00 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->field_0x18);
  if (((this_00 != (UOptimusNode *)0x0) &&
      ((pUVar6 = (UOptimusNodePin *)0x0, pUVar5 = pUVar6, *(int *)&this->field_0x88 < 2 ||
       (pUVar5 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1),
       pUVar5 != (UOptimusNodePin *)0x0)))) &&
     ((*(int *)&this->field_0x98 < 2 ||
      (pUVar6 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1),
      pUVar6 != (UOptimusNodePin *)0x0)))) {
    if (this->field_0x31 == '\0') {
      this_01 = FOptimusDataTypeRegistry::Get();
      FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x78;
      FVar2.Number = *(uint *)&this->field_0x7c;
      pTVar7 = FOptimusDataTypeRegistry::FindType(this_01,&TStack_98,FVar2);
      auStack_88._0_4_ = 0;
      auStack_88._4_4_ = 0;
      FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_68.Data.ArrayNum = 0;
      FStack_68.Data.ArrayMax = 0;
      auStack_88._8_8_ = 0;
      auStack_88._24_8_ = 0;
      auStack_88._16_8_ = 0;
      FUtf8String::Reset(&FStack_68,0);
      TStack_a8.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      TStack_a8.Object = pTVar7->Object;
      if (TStack_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)auStack_88,&TStack_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar7->SharedReferenceCount).ReferenceController);
      pTVar7 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)auStack_88,&TStack_a8);
      pFVar3 = pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_a8.SharedReferenceCount.ReferenceController);
      _Src.Data = FStack_68.Data.AllocatorInstance.Data;
      if (pFVar3 == (FOptimusDataType *)0x0) {
        if (FStack_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
        return false;
      }
      _Size = (size_t)FStack_68.Data.ArrayNum;
      auStack_58._0_8_ = auStack_88._0_8_;
      auStack_58._8_8_ = auStack_88._8_8_;
      FStack_38.Data = (FScriptContainerElement *)0x0;
      iStack_30 = FStack_68.Data.ArrayNum;
      auStack_58._16_8_ = auStack_88._16_8_;
      auStack_58._24_8_ = auStack_88._24_8_;
      if (FStack_68.Data.ArrayNum == 0) {
        iStack_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,FStack_68.Data.ArrayNum,0,&FStack_38,FStack_68.Data.ArrayNum,&iStack_2c);
        memcpy(FStack_38.Data,_Src.Data,_Size);
      }
      FVar4.ComparisonIndex.Value = *(uint *)&this->field_0x28;
      FVar4.Number = *(uint *)&this->field_0x2c;
      pUVar5 = UOptimusNode::AddPinDirect
                         (this_00,FVar4,this->field_0x30,(FOptimusDataDomain *)&this->field_0x38,
                          (FOptimusDataTypeRef *)auStack_58,pUVar5,pUVar6);
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
    }
    else {
      FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x28;
      FVar1.Number = *(uint *)&this->field_0x2c;
      pUVar5 = UOptimusNode::AddGroupingPinDirect(this_00,FVar1,this->field_0x30,pUVar5);
    }
    if (pUVar5 != (UOptimusNodePin *)0x0) {
      UOptimusNodePin::SetIsExpanded(pUVar5,(bool)this->field_0xb0);
      *(longlong *)&this->field_0x28 = pUVar5->_padding_;
      pFVar8 = UOptimusNodePin::GetPinPath(pUVar5,(FString *)&TStack_a8);
      ::FString::operator=((FString *)&this->field_0xa0,pFVar8);
      if (TStack_a8.Object != (FOptimusDataType *)0x0) {
        FMemory::Free(TStack_a8.Object);
      }
      return true;
    }
  }
  return false;
}

