// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b46a8f0

UClass * __cdecl UDS_CommonVisibilitySwitcherSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcherSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonVisibilitySwitcherSlot",
               &Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcherSlot.InnerSingleton,
               StaticRegisterNativesUDS_CommonVisibilitySwitcherSlot,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonVisibilitySwitcherSlot>,
               InternalVTableHelperCtorCaller<UDS_CommonVisibilitySwitcherSlot>,local_res8,
               UCommonVisibilitySwitcherSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcherSlot.InnerSingleton;
}

// UDS_CommonVisibilitySwitcherSlot @ 14b4706d0

UDS_CommonVisibilitySwitcherSlot * __thiscall
UDS_CommonVisibilitySwitcherSlot::UDS_CommonVisibilitySwitcherSlot
          (UDS_CommonVisibilitySwitcherSlot *this,FVTableHelper *param_1)

{
  UCommonVisibilitySwitcherSlot::UCommonVisibilitySwitcherSlot
            ((UCommonVisibilitySwitcherSlot *)this,param_1);
  *(undefined ***)this = &___7UDS_CommonVisibilitySwitcherSlot__6B_;
  return this;
}

// UDS_CommonVisibilitySwitcherSlot @ 14b470700

UDS_CommonVisibilitySwitcherSlot * __thiscall
UDS_CommonVisibilitySwitcherSlot::UDS_CommonVisibilitySwitcherSlot
          (UDS_CommonVisibilitySwitcherSlot *this,FObjectInitializer *param_1)

{
  UCommonVisibilitySwitcherSlot::UCommonVisibilitySwitcherSlot
            ((UCommonVisibilitySwitcherSlot *)this,param_1);
  *(undefined ***)this = &___7UDS_CommonVisibilitySwitcherSlot__6B_;
  return this;
}

// ~UDS_CommonVisibilitySwitcherSlot @ 14b4722e0

void __thiscall
UDS_CommonVisibilitySwitcherSlot::~UDS_CommonVisibilitySwitcherSlot
          (UDS_CommonVisibilitySwitcherSlot *this)

{
  *(undefined ***)this = &___7UDS_CommonVisibilitySwitcherSlot__6B_;
  UCommonVisibilitySwitcherSlot::~UCommonVisibilitySwitcherSlot
            ((UCommonVisibilitySwitcherSlot *)this);
  return;
}

// GetPrivateStaticClass @ 14b475060

UClass * __cdecl UDS_CommonVisibilitySwitcherSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcherSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonVisibilitySwitcherSlot",
               &Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcherSlot.InnerSingleton,
               StaticRegisterNativesUDS_CommonVisibilitySwitcherSlot,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonVisibilitySwitcherSlot>,
               InternalVTableHelperCtorCaller<UDS_CommonVisibilitySwitcherSlot>,local_res8,
               UCommonVisibilitySwitcherSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcherSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonVisibilitySwitcherSlot @ 14b476c40

void __cdecl
UDS_CommonVisibilitySwitcherSlot::StaticRegisterNativesUDS_CommonVisibilitySwitcherSlot(void)

{
  return;
}

