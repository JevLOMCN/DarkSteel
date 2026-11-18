// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 7

// StaticStruct @ 1462eb410

UScriptStruct * __cdecl FDataflowPhysicsSolverProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy,(UObject *)pUVar1,
                         L"DataflowPhysicsSolverProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton;
}

// FDataflowPhysicsSolverProxy @ 1462f2270

FDataflowPhysicsSolverProxy * __thiscall
FDataflowPhysicsSolverProxy::FDataflowPhysicsSolverProxy(FDataflowPhysicsSolverProxy *this)

{
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x24 = 0x80;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x54 = 0x80;
  *(undefined4 *)&this->field_0x5c = 0;
  *(undefined4 *)&this->field_0x58 = 0xffffffff;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7FDataflowPhysicsSolverProxy__6B_;
  return this;
}

// ~FDataflowPhysicsSolverProxy @ 1462f2d80

void __thiscall
FDataflowPhysicsSolverProxy::~FDataflowPhysicsSolverProxy(FDataflowPhysicsSolverProxy *this)

{
  *(undefined4 *)&this->field_0x70 = 0;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x28);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  return;
}

// AdvanceSolverDatas @ 1462f4260

void __thiscall
FDataflowPhysicsSolverProxy::AdvanceSolverDatas(FDataflowPhysicsSolverProxy *this,float param_1)

{
  return;
}

// GetScriptStruct @ 1462f6ed0

UScriptStruct * __thiscall
FDataflowPhysicsSolverProxy::GetScriptStruct(FDataflowPhysicsSolverProxy *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy,(UObject *)pUVar1,
                         L"DataflowPhysicsSolverProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton;
}

// GetTimeStep @ 1462f7b50

float __thiscall FDataflowPhysicsSolverProxy::GetTimeStep(FDataflowPhysicsSolverProxy *this)

{
  return __real_3d072b02;
}

// ReadRestartData @ 1462f9d60

void __thiscall FDataflowPhysicsSolverProxy::ReadRestartData(FDataflowPhysicsSolverProxy *this)

{
  return;
}

