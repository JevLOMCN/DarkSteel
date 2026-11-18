// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b51ad90

UClass * __cdecl UDS_ModelEventItemImplByQuickSlotData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventItemImplByQuickSlotData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventItemImplByQuickSlotData",
               &Z_Registration_Info_UClass_UDS_ModelEventItemImplByQuickSlotData.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventItemImplByQuickSlotData,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventItemImplByQuickSlotData>,
               InternalVTableHelperCtorCaller<UDS_ModelEventItemImplByQuickSlotData>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventItemImplByQuickSlotData.InnerSingleton;
}

// UDS_ModelEventItemImplByQuickSlotData @ 14b522ab0

UDS_ModelEventItemImplByQuickSlotData * __thiscall
UDS_ModelEventItemImplByQuickSlotData::UDS_ModelEventItemImplByQuickSlotData
          (UDS_ModelEventItemImplByQuickSlotData *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ModelEventItemImplByQuickSlotData__6B_;
  return this;
}

// UDS_ModelEventItemImplByQuickSlotData @ 14b522ae0

UDS_ModelEventItemImplByQuickSlotData * __thiscall
UDS_ModelEventItemImplByQuickSlotData::UDS_ModelEventItemImplByQuickSlotData
          (UDS_ModelEventItemImplByQuickSlotData *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ModelEventItemImplByQuickSlotData__6B_;
  return this;
}

// ~UDS_ModelEventItemImplByQuickSlotData @ 14b5237e0

void __thiscall
UDS_ModelEventItemImplByQuickSlotData::~UDS_ModelEventItemImplByQuickSlotData
          (UDS_ModelEventItemImplByQuickSlotData *this)

{
  *(undefined ***)this = &___7UDS_ModelEventItemImplByQuickSlotData__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526be0

UClass * __cdecl UDS_ModelEventItemImplByQuickSlotData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventItemImplByQuickSlotData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventItemImplByQuickSlotData",
               &Z_Registration_Info_UClass_UDS_ModelEventItemImplByQuickSlotData.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventItemImplByQuickSlotData,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventItemImplByQuickSlotData>,
               InternalVTableHelperCtorCaller<UDS_ModelEventItemImplByQuickSlotData>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventItemImplByQuickSlotData.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventItemImplByQuickSlotData @ 14b5276a0

void __cdecl
UDS_ModelEventItemImplByQuickSlotData::StaticRegisterNativesUDS_ModelEventItemImplByQuickSlotData
          (void)

{
  return;
}

