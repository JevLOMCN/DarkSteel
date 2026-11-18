// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// StaticStruct @ 14d536580

UScriptStruct * __cdecl FCameraObjectInterfaceParameterDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterDefinition,
                         (UObject *)pUVar1,L"CameraObjectInterfaceParameterDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterDefinition.OuterSingleton;
}

// FCameraObjectInterfaceParameterDefinition @ 14d5435b0

FCameraObjectInterfaceParameterDefinition * __thiscall
FCameraObjectInterfaceParameterDefinition::FCameraObjectInterfaceParameterDefinition
          (FCameraObjectInterfaceParameterDefinition *this,
          FCameraObjectInterfaceParameterDefinition *param_1)

{
  UScriptStruct *pUVar1;
  UObject *pUVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  this->ParameterName = param_1->ParameterName;
  uVar3 = (param_1->ParameterGuid).B;
  uVar4 = (param_1->ParameterGuid).C;
  uVar5 = (param_1->ParameterGuid).D;
  (this->ParameterGuid).A = (param_1->ParameterGuid).A;
  (this->ParameterGuid).B = uVar3;
  (this->ParameterGuid).C = uVar4;
  (this->ParameterGuid).D = uVar5;
  this->ParameterType = param_1->ParameterType;
  (this->VariableID).Value = (param_1->VariableID).Value;
  this->VariableType = param_1->VariableType;
  pUVar1 = (param_1->BlendableStructType).field0_0x0.DebugPtr;
  (this->BlendableStructType).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DataID).Value = (param_1->DataID).Value;
  this->DataType = param_1->DataType;
  this->DataContainerType = param_1->DataContainerType;
  pUVar2 = (param_1->DataTypeObject).field0_0x0.DebugPtr;
  (this->DataTypeObject).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  return this;
}

// operator== @ 14d545240

bool __thiscall
FCameraObjectInterfaceParameterDefinition::operator==
          (FCameraObjectInterfaceParameterDefinition *this,
          FCameraObjectInterfaceParameterDefinition *param_1)

{
  if ((((((this->ParameterName == param_1->ParameterName) &&
         ((((this->ParameterGuid).D == (param_1->ParameterGuid).D &&
           (this->ParameterGuid).C == (param_1->ParameterGuid).C) &&
          (this->ParameterGuid).B == (param_1->ParameterGuid).B) &&
          (param_1->ParameterGuid).A == (this->ParameterGuid).A)) &&
        (this->ParameterType == param_1->ParameterType)) &&
       (((this->VariableID).Value == (param_1->VariableID).Value &&
        (this->VariableType == param_1->VariableType)))) &&
      (((this->BlendableStructType).field0_0x0.DebugPtr ==
        (param_1->BlendableStructType).field0_0x0.DebugPtr &&
       (((this->DataID).Value == (param_1->DataID).Value && (this->DataType == param_1->DataType))))
      )) && ((this->DataContainerType == param_1->DataContainerType &&
             ((this->DataTypeObject).field0_0x0.DebugPtr ==
              (param_1->DataTypeObject).field0_0x0.DebugPtr)))) {
    return true;
  }
  return false;
}

