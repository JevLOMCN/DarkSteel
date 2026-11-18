// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149f1ec50

UClass * __cdecl UPCGManagedSplineMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedSplineMeshComponent",
               &Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedSplineMeshComponent,0x358,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedSplineMeshComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedSplineMeshComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton;
}

// UPCGManagedSplineMeshComponent @ 149f32b10

UPCGManagedSplineMeshComponent * __thiscall
UPCGManagedSplineMeshComponent::UPCGManagedSplineMeshComponent
          (UPCGManagedSplineMeshComponent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FUtf8String::Reset((FUtf8String *)&this->_padding_,0);
  this->_padding_ = (longlong)&___7UPCGManagedSplineMeshComponent__6B_;
  FSplineMeshComponentDescriptor::FSplineMeshComponentDescriptor(&this->Descriptor);
  FPCGSplineMeshParams::FPCGSplineMeshParams(&this->SplineMeshParams);
  (this->SettingsCrc).Value = 0;
  (this->SettingsCrc).bValid = false;
  return this;
}

// UPCGManagedSplineMeshComponent @ 149f32ba0

UPCGManagedSplineMeshComponent * __thiscall
UPCGManagedSplineMeshComponent::UPCGManagedSplineMeshComponent
          (UPCGManagedSplineMeshComponent *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FUtf8String::Reset((FUtf8String *)&this->_padding_,0);
  this->_padding_ = (longlong)&___7UPCGManagedSplineMeshComponent__6B_;
  FSplineMeshComponentDescriptor::FSplineMeshComponentDescriptor(&this->Descriptor);
  FPCGSplineMeshParams::FPCGSplineMeshParams(&this->SplineMeshParams);
  (this->SettingsCrc).Value = 0;
  (this->SettingsCrc).bValid = false;
  return this;
}

// ~UPCGManagedSplineMeshComponent @ 149f34a40

void __thiscall
UPCGManagedSplineMeshComponent::~UPCGManagedSplineMeshComponent
          (UPCGManagedSplineMeshComponent *this)

{
  this->_padding_ = (longlong)&___7UPCGManagedSplineMeshComponent__6B_;
  FSplineMeshComponentDescriptor::~FSplineMeshComponentDescriptor(&this->Descriptor);
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetComponent @ 149f48f10

USplineMeshComponent * __thiscall
UPCGManagedSplineMeshComponent::GetComponent(UPCGManagedSplineMeshComponent *this)

{
  int iVar1;
  USplineMeshComponent *pUVar2;
  UClass *pUVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1037,"UPCGManagedSplineMeshComponent::GetComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
               ,0x40d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1037);
  }
  pUVar2 = (USplineMeshComponent *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar2 != (USplineMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_149f48fb5;
    }
  }
  pUVar2 = (USplineMeshComponent *)0x0;
LAB_149f48fb5:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 149f4d970

UClass * __cdecl UPCGManagedSplineMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedSplineMeshComponent",
               &Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedSplineMeshComponent,0x358,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedSplineMeshComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedSplineMeshComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton;
}

// ResetComponent @ 149f5e400

void __thiscall UPCGManagedSplineMeshComponent::ResetComponent(UPCGManagedSplineMeshComponent *this)

{
  return;
}

// SetComponent @ 149f606d0

void __thiscall
UPCGManagedSplineMeshComponent::SetComponent
          (UPCGManagedSplineMeshComponent *this,USplineMeshComponent *param_1)

{
  USplineMeshComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USplineMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&this->_padding_,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUPCGManagedSplineMeshComponent @ 149f63a60

void __cdecl
UPCGManagedSplineMeshComponent::StaticRegisterNativesUPCGManagedSplineMeshComponent(void)

{
  return;
}

// SupportsComponentReset @ 149f63d00

bool __thiscall
UPCGManagedSplineMeshComponent::SupportsComponentReset(UPCGManagedSplineMeshComponent *this)

{
  return true;
}

