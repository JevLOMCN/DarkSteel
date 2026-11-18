// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab9bc50

UScriptStruct * __cdecl FCustomizableObjectProjectorParameterValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectProjectorParameterValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectProjectorParameterValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue,
                         (UObject *)pUVar1,L"CustomizableObjectProjectorParameterValue");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectProjectorParameterValue.OuterSingleton
  ;
}

// FCustomizableObjectProjectorParameterValue @ 14ac098e0

FCustomizableObjectProjectorParameterValue * __thiscall
FCustomizableObjectProjectorParameterValue::FCustomizableObjectProjectorParameterValue
          (FCustomizableObjectProjectorParameterValue *this,
          FCustomizableObjectProjectorParameterValue *param_1)

{
  TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  undefined3 uVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  ::FString::FString(&this->ParameterName,&param_1->ParameterName);
  uVar4 = *(undefined8 *)((longlong)&(param_1->Value).Position.field0_0x0 + 8);
  pTVar1 = &this->RangeValues;
  piVar2 = &(this->RangeValues).ArrayMax;
  *(undefined8 *)&(this->Value).Position.field0_0x0 =
       *(undefined8 *)&(param_1->Value).Position.field0_0x0;
  *(undefined8 *)((longlong)&(this->Value).Position.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)&(param_1->Value).Up.field0_0x0;
  *(undefined8 *)((longlong)&(this->Value).Direction.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Value).Direction.field0_0x0 + 4);
  *(undefined8 *)&(this->Value).Up.field0_0x0 = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->Value).Scale.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Value).Up.field0_0x0 + 8) =
       *(undefined8 *)((longlong)&(param_1->Value).Up.field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->Value).Scale.field0_0x0 + 4) = uVar4;
  uVar5 = *(undefined3 *)&(param_1->Value).field_0x31;
  fVar6 = (param_1->Value).Angle;
  (this->Value).ProjectionType = (param_1->Value).ProjectionType;
  *(undefined3 *)&(this->Value).field_0x31 = uVar5;
  (this->Value).Angle = fVar6;
  uVar7 = (param_1->Id).B;
  uVar8 = (param_1->Id).C;
  uVar9 = (param_1->Id).D;
  (this->Id).A = (param_1->Id).A;
  (this->Id).B = uVar7;
  (this->Id).C = uVar8;
  (this->Id).D = uVar9;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->RangeValues).ArrayNum;
  _Src = (param_1->RangeValues).AllocatorInstance.Data;
  (this->RangeValues).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x38);
  }
  return this;
}

