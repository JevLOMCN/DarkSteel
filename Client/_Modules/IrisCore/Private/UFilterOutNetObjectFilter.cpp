// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 12

// StaticClass @ 14421eff0

UClass * __cdecl UFilterOutNetObjectFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FilterOutNetObjectFilter",
               &Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton,
               StaticRegisterNativesUFilterOutNetObjectFilter,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFilterOutNetObjectFilter>,
               InternalVTableHelperCtorCaller<UFilterOutNetObjectFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton;
}

// UFilterOutNetObjectFilter @ 14422a100

UFilterOutNetObjectFilter * __thiscall
UFilterOutNetObjectFilter::UFilterOutNetObjectFilter
          (UFilterOutNetObjectFilter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined ***)this = &___7UFilterOutNetObjectFilter__6B_;
  return this;
}

// UFilterOutNetObjectFilter @ 14422a150

UFilterOutNetObjectFilter * __thiscall
UFilterOutNetObjectFilter::UFilterOutNetObjectFilter(UFilterOutNetObjectFilter *this)

{
  UObject::UObject((UObject *)this);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined ***)this = &___7UFilterOutNetObjectFilter__6B_;
  return this;
}

// ~UFilterOutNetObjectFilter @ 14422b3e0

void __thiscall
UFilterOutNetObjectFilter::~UFilterOutNetObjectFilter(UFilterOutNetObjectFilter *this)

{
  *(undefined ***)this = &___7UNetObjectFilter__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddObject @ 14422e860

bool __thiscall
UFilterOutNetObjectFilter::AddObject
          (UFilterOutNetObjectFilter *this,uint param_1,FNetObjectFilterAddObjectParams *param_2)

{
  return true;
}

// Filter @ 1442389b0

void __thiscall
UFilterOutNetObjectFilter::Filter
          (UFilterOutNetObjectFilter *this,FNetObjectFilteringParams *param_1)

{
  memset((param_1->OutAllowedObjects).Storage,0,
         (ulonglong)(param_1->OutAllowedObjects).WordCount << 2);
  return;
}

// GetPrivateStaticClass @ 14423df30

UClass * __cdecl UFilterOutNetObjectFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FilterOutNetObjectFilter",
               &Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton,
               StaticRegisterNativesUFilterOutNetObjectFilter,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFilterOutNetObjectFilter>,
               InternalVTableHelperCtorCaller<UFilterOutNetObjectFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterOutNetObjectFilter.InnerSingleton;
}

// OnDeinit @ 144245ba0

void __thiscall UFilterOutNetObjectFilter::OnDeinit(UFilterOutNetObjectFilter *this)

{
  return;
}

// OnInit @ 144245eb0

void __thiscall
UFilterOutNetObjectFilter::OnInit
          (UFilterOutNetObjectFilter *this,FNetObjectFilterInitParams *param_1)

{
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144246a40

void __thiscall
UFilterOutNetObjectFilter::OnMaxInternalNetRefIndexIncreased
          (UFilterOutNetObjectFilter *this,uint param_1)

{
  return;
}

// RemoveObject @ 14424f280

void __thiscall
UFilterOutNetObjectFilter::RemoveObject
          (UFilterOutNetObjectFilter *this,uint param_1,FNetObjectFilteringInfo *param_2)

{
  return;
}

// StaticRegisterNativesUFilterOutNetObjectFilter @ 1442548b0

void __cdecl UFilterOutNetObjectFilter::StaticRegisterNativesUFilterOutNetObjectFilter(void)

{
  return;
}

