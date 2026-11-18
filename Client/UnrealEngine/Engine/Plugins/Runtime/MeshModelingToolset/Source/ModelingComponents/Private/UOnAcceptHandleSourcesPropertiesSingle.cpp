// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// StaticClass @ 14caadf40

UClass * __cdecl UOnAcceptHandleSourcesPropertiesSingle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"OnAcceptHandleSourcesPropertiesSingle",
               &Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.InnerSingleton,
               StaticRegisterNativesUOnAcceptHandleSourcesPropertiesSingle,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnAcceptHandleSourcesPropertiesSingle>,
               InternalVTableHelperCtorCaller<UOnAcceptHandleSourcesPropertiesSingle>,local_res8,
               UOnAcceptHandleSourcesPropertiesBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.InnerSingleton;
}

// UOnAcceptHandleSourcesPropertiesSingle @ 14cace310

UOnAcceptHandleSourcesPropertiesSingle * __thiscall
UOnAcceptHandleSourcesPropertiesSingle::UOnAcceptHandleSourcesPropertiesSingle
          (UOnAcceptHandleSourcesPropertiesSingle *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UOnAcceptHandleSourcesPropertiesSingle__6B_;
  return this;
}

// UOnAcceptHandleSourcesPropertiesSingle @ 14cace340

UOnAcceptHandleSourcesPropertiesSingle * __thiscall
UOnAcceptHandleSourcesPropertiesSingle::UOnAcceptHandleSourcesPropertiesSingle
          (UOnAcceptHandleSourcesPropertiesSingle *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UOnAcceptHandleSourcesPropertiesSingle__6B_;
  return this;
}

// ~UOnAcceptHandleSourcesPropertiesSingle @ 14cad2610

void __thiscall
UOnAcceptHandleSourcesPropertiesSingle::~UOnAcceptHandleSourcesPropertiesSingle
          (UOnAcceptHandleSourcesPropertiesSingle *this)

{
  this->_padding_ = (longlong)&___7UOnAcceptHandleSourcesPropertiesBase__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetHandleInputs @ 14cb10280

EHandleSourcesMethod __thiscall
UOnAcceptHandleSourcesPropertiesSingle::GetHandleInputs
          (UOnAcceptHandleSourcesPropertiesSingle *this)

{
  return this->HandleInputs;
}

// GetPrivateStaticClass @ 14cb129a0

UClass * __cdecl UOnAcceptHandleSourcesPropertiesSingle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"OnAcceptHandleSourcesPropertiesSingle",
               &Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.InnerSingleton,
               StaticRegisterNativesUOnAcceptHandleSourcesPropertiesSingle,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnAcceptHandleSourcesPropertiesSingle>,
               InternalVTableHelperCtorCaller<UOnAcceptHandleSourcesPropertiesSingle>,local_res8,
               UOnAcceptHandleSourcesPropertiesBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.InnerSingleton;
}

// StaticRegisterNativesUOnAcceptHandleSourcesPropertiesSingle @ 14cb3ebb0

void __cdecl
UOnAcceptHandleSourcesPropertiesSingle::StaticRegisterNativesUOnAcceptHandleSourcesPropertiesSingle
          (void)

{
  return;
}

