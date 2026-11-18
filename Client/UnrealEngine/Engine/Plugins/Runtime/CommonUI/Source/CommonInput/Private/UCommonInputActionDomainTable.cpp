// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 6

// StaticClass @ 14a76d2c0

UClass * __cdecl UCommonInputActionDomainTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputActionDomainTable",
               &Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton,
               StaticRegisterNativesUCommonInputActionDomainTable,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonInputActionDomainTable>,
               InternalVTableHelperCtorCaller<UCommonInputActionDomainTable>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton;
}

// UCommonInputActionDomainTable @ 14a7719c0

UCommonInputActionDomainTable * __thiscall
UCommonInputActionDomainTable::UCommonInputActionDomainTable
          (UCommonInputActionDomainTable *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->InputMode = Game;
  this->MouseCaptureMode = CapturePermanently;
  this->_padding_ = (longlong)&___7UCommonInputActionDomainTable__6B_;
  (this->ActionDomains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionDomains).ArrayNum = 0;
  (this->ActionDomains).ArrayMax = 0;
  this->bHideCursorDuringViewportCapture = true;
  return this;
}

// UCommonInputActionDomainTable @ 14a771a00

UCommonInputActionDomainTable * __thiscall
UCommonInputActionDomainTable::UCommonInputActionDomainTable
          (UCommonInputActionDomainTable *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->InputMode = Game;
  this->MouseCaptureMode = CapturePermanently;
  this->_padding_ = (longlong)&___7UCommonInputActionDomainTable__6B_;
  (this->ActionDomains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionDomains).ArrayNum = 0;
  (this->ActionDomains).ArrayMax = 0;
  this->bHideCursorDuringViewportCapture = true;
  return this;
}

// ~UCommonInputActionDomainTable @ 14a7724e0

void __thiscall
UCommonInputActionDomainTable::~UCommonInputActionDomainTable(UCommonInputActionDomainTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCommonInputActionDomainTable__6B_;
  pFVar1 = (this->ActionDomains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14a775c20

UClass * __cdecl UCommonInputActionDomainTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonInputActionDomainTable",
               &Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton,
               StaticRegisterNativesUCommonInputActionDomainTable,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonInputActionDomainTable>,
               InternalVTableHelperCtorCaller<UCommonInputActionDomainTable>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputActionDomainTable.InnerSingleton;
}

// StaticRegisterNativesUCommonInputActionDomainTable @ 14a7791c0

void __cdecl UCommonInputActionDomainTable::StaticRegisterNativesUCommonInputActionDomainTable(void)

{
  return;
}

