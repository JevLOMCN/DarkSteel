// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 13

// StaticClass @ 14421ecc0

UClass * __cdecl UAlwaysRelevantNetObjectFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"AlwaysRelevantNetObjectFilter",
               &Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton,
               StaticRegisterNativesUAlwaysRelevantNetObjectFilter,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAlwaysRelevantNetObjectFilter>,
               InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton;
}

// UAlwaysRelevantNetObjectFilter @ 144229f80

UAlwaysRelevantNetObjectFilter * __thiscall
UAlwaysRelevantNetObjectFilter::UAlwaysRelevantNetObjectFilter
          (UAlwaysRelevantNetObjectFilter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined ***)this = &___7UAlwaysRelevantNetObjectFilter__6B_;
  return this;
}

// UAlwaysRelevantNetObjectFilter @ 144229fd0

UAlwaysRelevantNetObjectFilter * __thiscall
UAlwaysRelevantNetObjectFilter::UAlwaysRelevantNetObjectFilter(UAlwaysRelevantNetObjectFilter *this)

{
  UObject::UObject((UObject *)this);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined ***)this = &___7UAlwaysRelevantNetObjectFilter__6B_;
  return this;
}

// ~UAlwaysRelevantNetObjectFilter @ 14422b360

void __thiscall
UAlwaysRelevantNetObjectFilter::~UAlwaysRelevantNetObjectFilter
          (UAlwaysRelevantNetObjectFilter *this)

{
  *(undefined ***)this = &___7UNetObjectFilter__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddObject @ 14422e850

bool __thiscall
UAlwaysRelevantNetObjectFilter::AddObject
          (UAlwaysRelevantNetObjectFilter *this,uint param_1,
          FNetObjectFilterAddObjectParams *param_2)

{
  return true;
}

// Filter @ 144238960

void __thiscall
UAlwaysRelevantNetObjectFilter::Filter
          (UAlwaysRelevantNetObjectFilter *this,FNetObjectFilteringParams *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  memset((param_1->OutAllowedObjects).Storage,0xff,
         (ulonglong)(param_1->OutAllowedObjects).WordCount << 2);
  uVar2 = (param_1->OutAllowedObjects).BitCount;
  if (uVar2 != 0) {
    puVar1 = (param_1->OutAllowedObjects).Storage + ((param_1->OutAllowedObjects).WordCount - 1);
    *puVar1 = *puVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  return;
}

// GetPrivateStaticClass @ 14423dcf0

UClass * __cdecl UAlwaysRelevantNetObjectFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"AlwaysRelevantNetObjectFilter",
               &Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton,
               StaticRegisterNativesUAlwaysRelevantNetObjectFilter,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAlwaysRelevantNetObjectFilter>,
               InternalVTableHelperCtorCaller<UAlwaysRelevantNetObjectFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAlwaysRelevantNetObjectFilter.InnerSingleton;
}

// OnDeinit @ 144245b90

void __thiscall UAlwaysRelevantNetObjectFilter::OnDeinit(UAlwaysRelevantNetObjectFilter *this)

{
  return;
}

// OnInit @ 144245ea0

void __thiscall
UAlwaysRelevantNetObjectFilter::OnInit
          (UAlwaysRelevantNetObjectFilter *this,FNetObjectFilterInitParams *param_1)

{
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144246a30

void __thiscall
UAlwaysRelevantNetObjectFilter::OnMaxInternalNetRefIndexIncreased
          (UAlwaysRelevantNetObjectFilter *this,uint param_1)

{
  return;
}

// RemoveObject @ 14424f270

void __thiscall
UAlwaysRelevantNetObjectFilter::RemoveObject
          (UAlwaysRelevantNetObjectFilter *this,uint param_1,FNetObjectFilteringInfo *param_2)

{
  return;
}

// StaticRegisterNativesUAlwaysRelevantNetObjectFilter @ 144254880

void __cdecl
UAlwaysRelevantNetObjectFilter::StaticRegisterNativesUAlwaysRelevantNetObjectFilter(void)

{
  return;
}

// UpdateObjects @ 14425a7d0

void __thiscall
UAlwaysRelevantNetObjectFilter::UpdateObjects
          (UAlwaysRelevantNetObjectFilter *this,FNetObjectFilterUpdateParams *param_1)

{
  return;
}

