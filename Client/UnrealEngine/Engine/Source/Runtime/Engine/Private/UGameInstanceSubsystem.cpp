// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// UGameInstanceSubsystem @ 148809f00

UGameInstanceSubsystem * __thiscall
UGameInstanceSubsystem::UGameInstanceSubsystem(UGameInstanceSubsystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UGameInstanceSubsystem__6B_;
  return this;
}

// UGameInstanceSubsystem @ 148809f30

UGameInstanceSubsystem * __thiscall
UGameInstanceSubsystem::UGameInstanceSubsystem(UGameInstanceSubsystem *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UGameInstanceSubsystem__6B_;
  return this;
}

// ~UGameInstanceSubsystem @ 14880d390

void __thiscall UGameInstanceSubsystem::~UGameInstanceSubsystem(UGameInstanceSubsystem *this)

{
  *(undefined ***)this = &___7USubsystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetGameInstance @ 14883e130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstance * __thiscall UGameInstanceSubsystem::GetGameInstance(UGameInstanceSubsystem *this)

{
  int iVar1;
  UGameInstance *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = *(UGameInstance **)&this->field_0x20;
  if (pUVar2 != (UGameInstance *)0x0) {
    pUVar3 = Z_Construct_UClass_UGameInstance_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UGameInstance *)0x0;
}

// GetPrivateStaticClass @ 148840790

UClass * __cdecl UGameInstanceSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameInstanceSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameInstanceSubsystem",
               &Z_Registration_Info_UClass_UGameInstanceSubsystem.InnerSingleton,
               StaticRegisterNativesUGameInstanceSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UGameInstanceSubsystem>,
               InternalVTableHelperCtorCaller<UGameInstanceSubsystem>,local_res8,
               USubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameInstanceSubsystem.InnerSingleton;
}

// StaticRegisterNativesUGameInstanceSubsystem @ 14885ac50

void __cdecl UGameInstanceSubsystem::StaticRegisterNativesUGameInstanceSubsystem(void)

{
  return;
}

