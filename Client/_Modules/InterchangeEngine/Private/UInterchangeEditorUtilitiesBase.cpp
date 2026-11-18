// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 9

// StaticClass @ 14e4cb3c0

UClass * __cdecl UInterchangeEditorUtilitiesBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeEditorUtilitiesBase",
               &Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton,
               StaticRegisterNativesUInterchangeEditorUtilitiesBase,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeEditorUtilitiesBase>,
               InternalVTableHelperCtorCaller<UInterchangeEditorUtilitiesBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton;
}

// UInterchangeEditorUtilitiesBase @ 14e4d8460

UInterchangeEditorUtilitiesBase * __thiscall
UInterchangeEditorUtilitiesBase::UInterchangeEditorUtilitiesBase
          (UInterchangeEditorUtilitiesBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeEditorUtilitiesBase__6B_;
  return this;
}

// UInterchangeEditorUtilitiesBase @ 14e4d8490

UInterchangeEditorUtilitiesBase * __thiscall
UInterchangeEditorUtilitiesBase::UInterchangeEditorUtilitiesBase
          (UInterchangeEditorUtilitiesBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeEditorUtilitiesBase__6B_;
  return this;
}

// ~UInterchangeEditorUtilitiesBase @ 14e4dacd0

void __thiscall
UInterchangeEditorUtilitiesBase::~UInterchangeEditorUtilitiesBase
          (UInterchangeEditorUtilitiesBase *this)

{
  *(undefined ***)this = &___7UInterchangeEditorUtilitiesBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClearEditorSelection @ 14e4e61d0

bool __thiscall
UInterchangeEditorUtilitiesBase::ClearEditorSelection(UInterchangeEditorUtilitiesBase *this)

{
  return false;
}

// GetPrivateStaticClass @ 14e4f7dc0

UClass * __cdecl UInterchangeEditorUtilitiesBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeEditorUtilitiesBase",
               &Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton,
               StaticRegisterNativesUInterchangeEditorUtilitiesBase,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeEditorUtilitiesBase>,
               InternalVTableHelperCtorCaller<UInterchangeEditorUtilitiesBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton;
}

// IsRuntimeOrPIE @ 14e4fee30

bool __thiscall
UInterchangeEditorUtilitiesBase::IsRuntimeOrPIE(UInterchangeEditorUtilitiesBase *this)

{
  return true;
}

// SaveAsset @ 14e5039f0

bool __thiscall
UInterchangeEditorUtilitiesBase::SaveAsset(UInterchangeEditorUtilitiesBase *this,UObject *param_1)

{
  return false;
}

// StaticRegisterNativesUInterchangeEditorUtilitiesBase @ 14e50aa50

void __cdecl
UInterchangeEditorUtilitiesBase::StaticRegisterNativesUInterchangeEditorUtilitiesBase(void)

{
  return;
}

