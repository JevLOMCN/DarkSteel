// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149723800

UClass * __cdecl UPCGGraphCompilationData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphCompilationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphCompilationData",
               &Z_Registration_Info_UClass_UPCGGraphCompilationData.InnerSingleton,
               StaticRegisterNativesUPCGGraphCompilationData,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGraphCompilationData>,
               InternalVTableHelperCtorCaller<UPCGGraphCompilationData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphCompilationData.InnerSingleton;
}

// UPCGGraphCompilationData @ 149725740

UPCGGraphCompilationData * __thiscall
UPCGGraphCompilationData::UPCGGraphCompilationData
          (UPCGGraphCompilationData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGraphCompilationData__6B_;
  *(undefined8 *)&this->Tasks = 0;
  *(undefined8 *)&(this->Tasks).field_0x8 = 0;
  *(undefined8 *)&(this->Tasks).field_0x20 = 0;
  *(undefined4 *)&(this->Tasks).field_0x28 = 0;
  *(undefined4 *)&(this->Tasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->Tasks).field_0x34 = 0;
  *(undefined4 *)&(this->Tasks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Tasks).field_0x40 = 0;
  *(undefined4 *)&(this->Tasks).field_0x48 = 0;
  *(undefined8 *)&this->StackContexts = 0;
  *(undefined8 *)&(this->StackContexts).field_0x8 = 0;
  *(undefined8 *)&(this->StackContexts).field_0x20 = 0;
  *(undefined4 *)&(this->StackContexts).field_0x28 = 0;
  *(undefined4 *)&(this->StackContexts).field_0x2c = 0x80;
  *(undefined4 *)&(this->StackContexts).field_0x34 = 0;
  *(undefined4 *)&(this->StackContexts).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StackContexts).field_0x40 = 0;
  *(undefined4 *)&(this->StackContexts).field_0x48 = 0;
  *(undefined8 *)&this->ComputeGraphs = 0;
  *(undefined8 *)&(this->ComputeGraphs).field_0x8 = 0;
  *(undefined8 *)&(this->ComputeGraphs).field_0x20 = 0;
  *(undefined4 *)&(this->ComputeGraphs).field_0x28 = 0;
  *(undefined4 *)&(this->ComputeGraphs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComputeGraphs).field_0x34 = 0;
  *(undefined4 *)&(this->ComputeGraphs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComputeGraphs).field_0x40 = 0;
  *(undefined4 *)&(this->ComputeGraphs).field_0x48 = 0;
  return this;
}

// UPCGGraphCompilationData @ 149725820

UPCGGraphCompilationData * __thiscall
UPCGGraphCompilationData::UPCGGraphCompilationData
          (UPCGGraphCompilationData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGraphCompilationData__6B_;
  *(undefined8 *)&this->Tasks = 0;
  *(undefined8 *)&(this->Tasks).field_0x8 = 0;
  *(undefined8 *)&(this->Tasks).field_0x20 = 0;
  *(undefined4 *)&(this->Tasks).field_0x28 = 0;
  *(undefined4 *)&(this->Tasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->Tasks).field_0x34 = 0;
  *(undefined4 *)&(this->Tasks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Tasks).field_0x40 = 0;
  *(undefined4 *)&(this->Tasks).field_0x48 = 0;
  *(undefined8 *)&this->StackContexts = 0;
  *(undefined8 *)&(this->StackContexts).field_0x8 = 0;
  *(undefined8 *)&(this->StackContexts).field_0x20 = 0;
  *(undefined4 *)&(this->StackContexts).field_0x28 = 0;
  *(undefined4 *)&(this->StackContexts).field_0x2c = 0x80;
  *(undefined4 *)&(this->StackContexts).field_0x34 = 0;
  *(undefined4 *)&(this->StackContexts).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StackContexts).field_0x40 = 0;
  *(undefined4 *)&(this->StackContexts).field_0x48 = 0;
  *(undefined8 *)&this->ComputeGraphs = 0;
  *(undefined8 *)&(this->ComputeGraphs).field_0x8 = 0;
  *(undefined8 *)&(this->ComputeGraphs).field_0x20 = 0;
  *(undefined4 *)&(this->ComputeGraphs).field_0x28 = 0;
  *(undefined4 *)&(this->ComputeGraphs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComputeGraphs).field_0x34 = 0;
  *(undefined4 *)&(this->ComputeGraphs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComputeGraphs).field_0x40 = 0;
  *(undefined4 *)&(this->ComputeGraphs).field_0x48 = 0;
  return this;
}

// ~UPCGGraphCompilationData @ 149725eb0

void __thiscall UPCGGraphCompilationData::~UPCGGraphCompilationData(UPCGGraphCompilationData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGGraphCompilationData__6B_;
  *(undefined4 *)&(this->ComputeGraphs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ComputeGraphs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGComputeGraphs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGComputeGraphs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGComputeGraphs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComputeGraphs);
  *(undefined4 *)&(this->StackContexts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StackContexts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGStackContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGStackContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGStackContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StackContexts);
  *(undefined4 *)&(this->Tasks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Tasks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGGraphTasks>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGGraphTasks>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGGraphTasks>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Tasks);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149727390

UClass * __cdecl UPCGGraphCompilationData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphCompilationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphCompilationData",
               &Z_Registration_Info_UClass_UPCGGraphCompilationData.InnerSingleton,
               StaticRegisterNativesUPCGGraphCompilationData,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGraphCompilationData>,
               InternalVTableHelperCtorCaller<UPCGGraphCompilationData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphCompilationData.InnerSingleton;
}

// StaticRegisterNativesUPCGGraphCompilationData @ 149728000

void __cdecl UPCGGraphCompilationData::StaticRegisterNativesUPCGGraphCompilationData(void)

{
  return;
}

