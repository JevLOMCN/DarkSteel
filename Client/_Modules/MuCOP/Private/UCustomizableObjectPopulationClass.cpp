// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 8

// StaticClass @ 14d364720

UClass * __cdecl UCustomizableObjectPopulationClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulationClass",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectPopulationClass,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPopulationClass>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulationClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton;
}

// UCustomizableObjectPopulationClass @ 14d3679c0

UCustomizableObjectPopulationClass * __thiscall
UCustomizableObjectPopulationClass::UCustomizableObjectPopulationClass
          (UCustomizableObjectPopulationClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulationClass__6B_;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->CustomizableObject).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  (this->Allowlist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allowlist).ArrayNum = 0;
  (this->Allowlist).ArrayMax = 0;
  (this->Blocklist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocklist).ArrayNum = 0;
  (this->Blocklist).ArrayMax = 0;
  (this->Characteristics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Characteristics).ArrayNum = 0;
  (this->Characteristics).ArrayMax = 0;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  (this->CustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->EditorCurve).field0_0x0.DebugPtr = (UCurveBase *)0x0;
  return this;
}

// UCustomizableObjectPopulationClass @ 14d367a30

UCustomizableObjectPopulationClass * __thiscall
UCustomizableObjectPopulationClass::UCustomizableObjectPopulationClass
          (UCustomizableObjectPopulationClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulationClass__6B_;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->CustomizableObject).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  (this->Allowlist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allowlist).ArrayNum = 0;
  (this->Allowlist).ArrayMax = 0;
  (this->Blocklist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocklist).ArrayNum = 0;
  (this->Blocklist).ArrayMax = 0;
  (this->Characteristics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Characteristics).ArrayNum = 0;
  (this->Characteristics).ArrayMax = 0;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  (this->CustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->EditorCurve).field0_0x0.DebugPtr = (UCurveBase *)0x0;
  return this;
}

// ~UCustomizableObjectPopulationClass @ 14d367ce0

void __thiscall
UCustomizableObjectPopulationClass::~UCustomizableObjectPopulationClass
          (UCustomizableObjectPopulationClass *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulationClass__6B_;
  DestructItems<FString,int>((FString *)(this->Tags).AllocatorInstance.Data,(this->Tags).ArrayNum);
  pFVar1 = (this->Tags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectPopulationCharacteristic,int>
            ((FCustomizableObjectPopulationCharacteristic *)
             (this->Characteristics).AllocatorInstance.Data,(this->Characteristics).ArrayNum);
  pFVar1 = (this->Characteristics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Blocklist).AllocatorInstance.Data,(this->Blocklist).ArrayNum);
  pFVar1 = (this->Blocklist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Allowlist).AllocatorInstance.Data,(this->Allowlist).ArrayNum);
  pFVar1 = (this->Allowlist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d36a140

UClass * __cdecl UCustomizableObjectPopulationClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulationClass",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectPopulationClass,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPopulationClass>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulationClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.InnerSingleton;
}

// Serialize @ 14d36ae60

void __thiscall
UCustomizableObjectPopulationClass::Serialize
          (UCustomizableObjectPopulationClass *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014d36ae80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&CustomizableObjectPopulation::FCustomizableObjectPopulationCustomVersion::GUID
            );
  return;
}

// Serialize @ 14d36ae90

void __thiscall
UCustomizableObjectPopulationClass::Serialize
          (UCustomizableObjectPopulationClass *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))
            (pFVar1,&CustomizableObjectPopulation::FCustomizableObjectPopulationCustomVersion::GUID)
  ;
  return;
}

// StaticRegisterNativesUCustomizableObjectPopulationClass @ 14d36b250

void __cdecl
UCustomizableObjectPopulationClass::StaticRegisterNativesUCustomizableObjectPopulationClass(void)

{
  return;
}

