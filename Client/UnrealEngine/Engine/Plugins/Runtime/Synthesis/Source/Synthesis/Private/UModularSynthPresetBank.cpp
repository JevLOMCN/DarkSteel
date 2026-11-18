// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 6

// StaticClass @ 14f0a7750

UClass * __cdecl UModularSynthPresetBank::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthPresetBank",
               &Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton,
               StaticRegisterNativesUModularSynthPresetBank,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModularSynthPresetBank>,
               InternalVTableHelperCtorCaller<UModularSynthPresetBank>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton;
}

// UModularSynthPresetBank @ 14f0b9a30

UModularSynthPresetBank * __thiscall
UModularSynthPresetBank::UModularSynthPresetBank
          (UModularSynthPresetBank *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModularSynthPresetBank__6B_;
  (this->Presets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Presets).ArrayNum = 0;
  (this->Presets).ArrayMax = 0;
  return this;
}

// UModularSynthPresetBank @ 14f0b9a70

UModularSynthPresetBank * __thiscall
UModularSynthPresetBank::UModularSynthPresetBank
          (UModularSynthPresetBank *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModularSynthPresetBank__6B_;
  (this->Presets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Presets).ArrayNum = 0;
  (this->Presets).ArrayMax = 0;
  return this;
}

// ~UModularSynthPresetBank @ 14f0c0090

void __thiscall UModularSynthPresetBank::~UModularSynthPresetBank(UModularSynthPresetBank *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UModularSynthPresetBank__6B_;
  DestructItems<FModularSynthPresetBankEntry,int>
            ((FModularSynthPresetBankEntry *)(this->Presets).AllocatorInstance.Data,
             (this->Presets).ArrayNum);
  pFVar1 = (this->Presets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14f0dc0e0

UClass * __cdecl UModularSynthPresetBank::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthPresetBank",
               &Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton,
               StaticRegisterNativesUModularSynthPresetBank,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModularSynthPresetBank>,
               InternalVTableHelperCtorCaller<UModularSynthPresetBank>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthPresetBank.InnerSingleton;
}

// StaticRegisterNativesUModularSynthPresetBank @ 14f1035e0

void __cdecl UModularSynthPresetBank::StaticRegisterNativesUModularSynthPresetBank(void)

{
  return;
}

