// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 10

// StaticClass @ 14f13a490

UClass * __cdecl UMockWorldMetricBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricBase",
               &Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricBase,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricBase>,local_res8,
               UWorldMetricInterface::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton;
}

// UMockWorldMetricBase @ 14f140550

UMockWorldMetricBase * __thiscall
UMockWorldMetricBase::UMockWorldMetricBase(UMockWorldMetricBase *this,FVTableHelper *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UMockWorldMetricBase__6B_;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  this->InitializeCount = 0;
  this->DeinitializeCount = 0;
  this->UpdateCount = 0;
  return this;
}

// UMockWorldMetricBase @ 14f140590

UMockWorldMetricBase * __thiscall
UMockWorldMetricBase::UMockWorldMetricBase(UMockWorldMetricBase *this,FObjectInitializer *param_1)

{
  UWorldMetricInterface::UWorldMetricInterface((UWorldMetricInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UMockWorldMetricBase__6B_;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  this->InitializeCount = 0;
  this->DeinitializeCount = 0;
  this->UpdateCount = 0;
  return this;
}

// ~UMockWorldMetricBase @ 14f142480

void __thiscall UMockWorldMetricBase::~UMockWorldMetricBase(UMockWorldMetricBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMockWorldMetricBase__6B_;
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldMetricInterface::~UWorldMetricInterface((UWorldMetricInterface *)this);
  return;
}

// Deinitialize @ 14f143c40

void __thiscall UMockWorldMetricBase::Deinitialize(UMockWorldMetricBase *this)

{
  this->DeinitializeCount = this->DeinitializeCount + 1;
  return;
}

// GetAllocatedSize @ 14f143d00

ulong64 __thiscall UMockWorldMetricBase::GetAllocatedSize(UMockWorldMetricBase *this)

{
  return 0;
}

// GetPrivateStaticClass @ 14f144190

UClass * __cdecl UMockWorldMetricBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricBase",
               &Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricBase,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMockWorldMetricBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricBase>,local_res8,
               UWorldMetricInterface::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricBase.InnerSingleton;
}

// Initialize @ 14f145170

void __thiscall UMockWorldMetricBase::Initialize(UMockWorldMetricBase *this)

{
  this->InitializeCount = this->InitializeCount + 1;
  return;
}

// StaticRegisterNativesUMockWorldMetricBase @ 14f145800

void __cdecl UMockWorldMetricBase::StaticRegisterNativesUMockWorldMetricBase(void)

{
  return;
}

// Update @ 14f148c30

void __thiscall UMockWorldMetricBase::Update(UMockWorldMetricBase *this,float param_1)

{
  this->UpdateCount = this->UpdateCount + 1;
  return;
}

