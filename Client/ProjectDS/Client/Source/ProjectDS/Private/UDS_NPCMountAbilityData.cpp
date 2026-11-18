// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b545c10

UClass * __cdecl UDS_NPCMountAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountAbilityData",
               &Z_Registration_Info_UClass_UDS_NPCMountAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountAbilityData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCMountAbilityData>,
               InternalVTableHelperCtorCaller<UDS_NPCMountAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountAbilityData.InnerSingleton;
}

// UDS_NPCMountAbilityData @ 14b54a680

UDS_NPCMountAbilityData * __thiscall
UDS_NPCMountAbilityData::UDS_NPCMountAbilityData
          (UDS_NPCMountAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCMountAbilityData__6B_;
  *(undefined8 *)&(this->MountAnimEventDelegate).Delegate = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).Delegate.field_0x18 = 2;
  return this;
}

// UDS_NPCMountAbilityData @ 14b54a6c0

UDS_NPCMountAbilityData * __thiscall
UDS_NPCMountAbilityData::UDS_NPCMountAbilityData
          (UDS_NPCMountAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCMountAbilityData__6B_;
  *(undefined8 *)&(this->MountAnimEventDelegate).Delegate = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MountAnimEventDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_NPCMountAbilityData @ 14b54b410

void __thiscall UDS_NPCMountAbilityData::~UDS_NPCMountAbilityData(UDS_NPCMountAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_NPCMountAbilityData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MountAnimEventDelegate).Delegate.field_0x8,
             *(int *)&(this->MountAnimEventDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MountAnimEventDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MountAnimEventDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b54c800

UClass * __cdecl UDS_NPCMountAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountAbilityData",
               &Z_Registration_Info_UClass_UDS_NPCMountAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountAbilityData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCMountAbilityData>,
               InternalVTableHelperCtorCaller<UDS_NPCMountAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCMountAbilityData @ 14b54d740

void __cdecl UDS_NPCMountAbilityData::StaticRegisterNativesUDS_NPCMountAbilityData(void)

{
  return;
}

// Created @ 14ba3c270

void __thiscall UDS_NPCMountAbilityData::Created(UDS_NPCMountAbilityData *this)

{
  return;
}

// Deleted @ 14ba3cc60

void __thiscall UDS_NPCMountAbilityData::Deleted(UDS_NPCMountAbilityData *this)

{
  return;
}

// OnChangedCharState @ 14ba60400

void __thiscall
UDS_NPCMountAbilityData::OnChangedCharState
          (UDS_NPCMountAbilityData *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  return;
}

// ResetData @ 14ba68d90

void __thiscall UDS_NPCMountAbilityData::ResetData(UDS_NPCMountAbilityData *this)

{
  return;
}

