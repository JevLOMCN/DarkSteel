// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436ce5d0

UScriptStruct * __cdecl FChaosVDDebugDrawImplicitObjectDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper,
                         (UObject *)pUVar1,L"ChaosVDDebugDrawImplicitObjectDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper.OuterSingleton
  ;
}

// Serialize @ 1436dcbc0

bool __thiscall
FChaosVDDebugDrawImplicitObjectDataWrapper::Serialize
          (FChaosVDDebugDrawImplicitObjectDataWrapper *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    FChaosVDDebugDrawShapeBase::SerializeBase_Internal((FChaosVDDebugDrawShapeBase *)this,param_1);
    puVar1 = &this->ImplicitObjectHash;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&this->ParentTransform);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

