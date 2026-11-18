// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436ce560

UScriptStruct * __cdecl FChaosVDDebugDrawLineDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawLineDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawLineDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper,
                         (UObject *)pUVar1,L"ChaosVDDebugDrawLineDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDDebugDrawLineDataWrapper.OuterSingleton;
}

// Serialize @ 1436dcc70

bool __thiscall
FChaosVDDebugDrawLineDataWrapper::Serialize
          (FChaosVDDebugDrawLineDataWrapper *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    FChaosVDDebugDrawShapeBase::SerializeBase_Internal((FChaosVDDebugDrawShapeBase *)this,param_1);
    UE::Math::operator<<(param_1,&this->StartLocation);
    UE::Math::operator<<(param_1,&this->EndLocation);
    ::operator<<(param_1,&this->bIsArrow);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

