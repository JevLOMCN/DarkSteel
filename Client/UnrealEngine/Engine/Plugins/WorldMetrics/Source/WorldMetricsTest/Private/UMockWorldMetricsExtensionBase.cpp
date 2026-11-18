// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 11

// StaticClass @ 14f13a550

UClass * __cdecl UMockWorldMetricsExtensionBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionBase",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionBase>,local_res8,
               UWorldMetricsExtension::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton;
}

// UMockWorldMetricsExtensionBase @ 14f140b50

UMockWorldMetricsExtensionBase * __thiscall
UMockWorldMetricsExtensionBase::UMockWorldMetricsExtensionBase
          (UMockWorldMetricsExtensionBase *this,FVTableHelper *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  this->_padding_ = (longlong)&___7UMockWorldMetricsExtensionBase__6B_;
  this->InitializeCount = 0;
  this->DeinitializeCount = 0;
  this->OnAcquireCount = 0;
  this->OnReleaseCount = 0;
  return this;
}

// UMockWorldMetricsExtensionBase @ 14f140b90

UMockWorldMetricsExtensionBase * __thiscall
UMockWorldMetricsExtensionBase::UMockWorldMetricsExtensionBase
          (UMockWorldMetricsExtensionBase *this,FObjectInitializer *param_1)

{
  UWorldMetricsExtension::UWorldMetricsExtension((UWorldMetricsExtension *)this,param_1);
  this->_padding_ = (longlong)&___7UMockWorldMetricsExtensionBase__6B_;
  this->InitializeCount = 0;
  this->DeinitializeCount = 0;
  this->OnAcquireCount = 0;
  this->OnReleaseCount = 0;
  return this;
}

// ~UMockWorldMetricsExtensionBase @ 14f142740

void __thiscall
UMockWorldMetricsExtensionBase::~UMockWorldMetricsExtensionBase
          (UMockWorldMetricsExtensionBase *this)

{
  this->_padding_ = (longlong)&___7UMockWorldMetricsExtensionBase__6B_;
  UWorldMetricsExtension::~UWorldMetricsExtension((UWorldMetricsExtension *)this);
  return;
}

// Deinitialize @ 14f143c50

void __thiscall UMockWorldMetricsExtensionBase::Deinitialize(UMockWorldMetricsExtensionBase *this)

{
  FReadAccessScope local_28;
  
  this->DeinitializeCount = this->DeinitializeCount + 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnInitializeDeinitialize,
             &local_28);
  if ((OnInitializeDeinitialize._16_4_ != 0) && (OnInitializeDeinitialize._8_8_ != 0)) {
    (**(code **)(*(longlong *)OnInitializeDeinitialize._8_8_ + 0x68))
              (OnInitializeDeinitialize._8_8_,this,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// GetAllocatedSize @ 14f143d10

ulong64 __thiscall
UMockWorldMetricsExtensionBase::GetAllocatedSize(UMockWorldMetricsExtensionBase *this)

{
  return 0;
}

// GetPrivateStaticClass @ 14f144a90

UClass * __cdecl UMockWorldMetricsExtensionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsTest",L"MockWorldMetricsExtensionBase",
               &Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton,
               StaticRegisterNativesUMockWorldMetricsExtensionBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockWorldMetricsExtensionBase>,
               InternalVTableHelperCtorCaller<UMockWorldMetricsExtensionBase>,local_res8,
               UWorldMetricsExtension::StaticClass,UWorldMetricsSubsystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockWorldMetricsExtensionBase.InnerSingleton;
}

// Initialize @ 14f145180

void __thiscall UMockWorldMetricsExtensionBase::Initialize(UMockWorldMetricsExtensionBase *this)

{
  FReadAccessScope local_28;
  
  this->InitializeCount = this->InitializeCount + 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnInitializeDeinitialize,
             &local_28);
  if ((OnInitializeDeinitialize._16_4_ != 0) && (OnInitializeDeinitialize._8_8_ != 0)) {
    (**(code **)(*(longlong *)OnInitializeDeinitialize._8_8_ + 0x68))
              (OnInitializeDeinitialize._8_8_,this,1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnAcquire @ 14f145300

void __thiscall
UMockWorldMetricsExtensionBase::OnAcquire(UMockWorldMetricsExtensionBase *this,UObject *param_1)

{
  this->OnAcquireCount = this->OnAcquireCount + 1;
  return;
}

// OnRelease @ 14f145310

void __thiscall
UMockWorldMetricsExtensionBase::OnRelease(UMockWorldMetricsExtensionBase *this,UObject *param_1)

{
  this->OnReleaseCount = this->OnReleaseCount + 1;
  return;
}

// StaticRegisterNativesUMockWorldMetricsExtensionBase @ 14f1458c0

void __cdecl
UMockWorldMetricsExtensionBase::StaticRegisterNativesUMockWorldMetricsExtensionBase(void)

{
  return;
}

