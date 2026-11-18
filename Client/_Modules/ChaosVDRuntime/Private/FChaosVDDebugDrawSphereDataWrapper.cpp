// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436ce4f0

UScriptStruct * __cdecl FChaosVDDebugDrawSphereDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper,
                         (UObject *)pUVar1,L"ChaosVDDebugDrawSphereDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper.OuterSingleton;
}

// Serialize @ 1436dccf0

bool __thiscall
FChaosVDDebugDrawSphereDataWrapper::Serialize
          (FChaosVDDebugDrawSphereDataWrapper *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    FChaosVDDebugDrawShapeBase::SerializeBase_Internal((FChaosVDDebugDrawShapeBase *)this,param_1);
    UE::Math::operator<<(param_1,&this->Origin);
    pfVar1 = &this->Radius;
    pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
      }
    }
    else {
      *pfVar1 = *pfVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

