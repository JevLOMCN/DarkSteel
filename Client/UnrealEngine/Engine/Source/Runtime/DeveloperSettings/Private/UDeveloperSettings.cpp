// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 10

// StaticClass @ 14241a820

UClass * __cdecl UDeveloperSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"DeveloperSettings",
               &Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton,
               StaticRegisterNativesUDeveloperSettings,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDeveloperSettings>,
               InternalVTableHelperCtorCaller<UDeveloperSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton;
}

// UDeveloperSettings @ 14241bd20

UDeveloperSettings * __thiscall
UDeveloperSettings::UDeveloperSettings(UDeveloperSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDeveloperSettings__6B_;
  (this->CategoryName).ComparisonIndex = 0;
  (this->CategoryName).Number = 0;
  (this->SectionName).ComparisonIndex = 0;
  (this->SectionName).Number = 0;
  return this;
}

// UDeveloperSettings @ 14241bd60

UDeveloperSettings * __thiscall
UDeveloperSettings::UDeveloperSettings(UDeveloperSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDeveloperSettings__6B_;
  (this->CategoryName).ComparisonIndex = 0;
  (this->CategoryName).Number = 0;
  (this->SectionName).ComparisonIndex = 0;
  (this->SectionName).Number = 0;
  return this;
}

// ~UDeveloperSettings @ 14241c0a0

void __thiscall UDeveloperSettings::~UDeveloperSettings(UDeveloperSettings *this)

{
  this->_padding_ = (longlong)&___7UDeveloperSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCategoryName @ 14241c9c0

FName __thiscall UDeveloperSettings::GetCategoryName(UDeveloperSettings *this)

{
  undefined4 uVar1;
  FName FVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FName FVar4;
  undefined4 extraout_var_05;
  EName EVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName in_RDX;
  int *piVar11;
  undefined1 local_res8 [8];
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar11 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&GeneralName,L"General");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar11 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&EditorSettingsName,L"EditorSettings");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar11 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&EditorPerProjectUserSettingsName,L"EditorPerProjectUserSettings");
    _Init_thread_footer(&::_TSS2);
  }
  FVar4 = this->CategoryName;
  if (this->CategoryName == (FName)0x0) {
    FVar2 = *(FName *)(this->_padding_ + 0xe8);
    FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
    if ((FVar2 == FVar4) ||
       (FVar3 = FNameEntryId::FromValidEName((EName)local_res8), FVar6.Number = 0,
       FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value), FVar2 == FVar6)
       ) {
      EVar5 = (EName)local_res8;
    }
    else {
      FVar4 = GeneralName;
      if ((FVar2 == EditorSettingsName) || (FVar2 == EditorPerProjectUserSettingsName))
      goto LAB_14241cb0e;
      FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
      FVar7.Number = 0;
      FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar3.Value);
      if ((((FVar2 == FVar7) ||
           (FVar3 = FNameEntryId::FromValidEName((EName)local_res8), FVar8.Number = 0,
           FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar3.Value),
           FVar2 == FVar8)) ||
          (FVar3 = FNameEntryId::FromValidEName((EName)local_res8), FVar9.Number = 0,
          FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar3.Value),
          FVar2 == FVar9)) ||
         (FVar3 = FNameEntryId::FromValidEName((EName)local_res8), FVar10.Number = 0,
         FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar3.Value),
         FVar2 == FVar10)) {
        EVar5 = (EName)local_res8;
      }
      else {
        FNameEntryId::FromValidEName((EName)local_res8);
        EVar5 = (EName)local_res8;
      }
    }
    FVar3 = FNameEntryId::FromValidEName(EVar5);
    uVar1 = *(undefined4 *)CONCAT44(extraout_var_05,FVar3.Value);
    *(uint *)((longlong)in_RDX + 4) = 0;
    *(undefined4 *)in_RDX = uVar1;
    return in_RDX;
  }
LAB_14241cb0e:
  *(FName *)in_RDX = FVar4;
  return in_RDX;
}

// GetContainerName @ 14241cc30

FName __thiscall UDeveloperSettings::GetContainerName(UDeveloperSettings *this)

{
  FName FVar1;
  FName FVar2;
  FName in_RDX;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProjectName,L"Project");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&EditorName,L"Editor");
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar3 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ::FName::FName(&EditorSettingsName,L"EditorSettings");
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*piVar3 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      ::FName::FName(&EditorPerProjectUserSettingsName,L"EditorPerProjectUserSettings");
      _Init_thread_footer(&::_TSS3);
    }
  }
  FVar1 = *(FName *)(this->_padding_ + 0xe8);
  if ((FVar1 == EditorSettingsName) ||
     (FVar2 = ProjectName, FVar1 == EditorPerProjectUserSettingsName)) {
    FVar2 = EditorName;
  }
  *(FName *)in_RDX = FVar2;
  return in_RDX;
}

// GetCustomSettingsWidget @ 14241cdf0

TSharedPtr<SWidget,1> * __thiscall
UDeveloperSettings::GetCustomSettingsWidget
          (UDeveloperSettings *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14241ce10

UClass * __cdecl UDeveloperSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"DeveloperSettings",
               &Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton,
               StaticRegisterNativesUDeveloperSettings,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDeveloperSettings>,
               InternalVTableHelperCtorCaller<UDeveloperSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeveloperSettings.InnerSingleton;
}

// GetSectionName @ 14241d0e0

FName __thiscall UDeveloperSettings::GetSectionName(UDeveloperSettings *this)

{
  FName in_RDX;
  
  if (this->SectionName != (FName)0x0) {
    *(FName *)in_RDX = this->SectionName;
    return in_RDX;
  }
  *(longlong *)in_RDX = *(longlong *)(this->_padding_ + 0x18);
  return in_RDX;
}

// StaticRegisterNativesUDeveloperSettings @ 14241d6b0

void __cdecl UDeveloperSettings::StaticRegisterNativesUDeveloperSettings(void)

{
  return;
}

