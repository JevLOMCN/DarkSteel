// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472dba40

UClass * __cdecl UMaterialFunctionInterfaceEditorOnlyData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionInterfaceEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionInterfaceEditorOnlyData,0x28,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialFunctionInterfaceEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialFunctionInterfaceEditorOnlyData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.InnerSingleton;
}

// UMaterialFunctionInterfaceEditorOnlyData @ 1472e32b0

UMaterialFunctionInterfaceEditorOnlyData * __thiscall
UMaterialFunctionInterfaceEditorOnlyData::UMaterialFunctionInterfaceEditorOnlyData
          (UMaterialFunctionInterfaceEditorOnlyData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionInterfaceEditorOnlyData__6B_;
  return this;
}

// UMaterialFunctionInterfaceEditorOnlyData @ 1472e32e0

UMaterialFunctionInterfaceEditorOnlyData * __thiscall
UMaterialFunctionInterfaceEditorOnlyData::UMaterialFunctionInterfaceEditorOnlyData
          (UMaterialFunctionInterfaceEditorOnlyData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionInterfaceEditorOnlyData__6B_;
  return this;
}

// ~UMaterialFunctionInterfaceEditorOnlyData @ 1472e3b00

void __thiscall
UMaterialFunctionInterfaceEditorOnlyData::~UMaterialFunctionInterfaceEditorOnlyData
          (UMaterialFunctionInterfaceEditorOnlyData *this)

{
  *(undefined ***)this = &___7UMaterialFunctionInterfaceEditorOnlyData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472e7610

UClass * __cdecl UMaterialFunctionInterfaceEditorOnlyData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionInterfaceEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionInterfaceEditorOnlyData,0x28,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialFunctionInterfaceEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialFunctionInterfaceEditorOnlyData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.InnerSingleton;
}

// Serialize @ 1472e7770

void __thiscall
UMaterialFunctionInterfaceEditorOnlyData::Serialize
          (UMaterialFunctionInterfaceEditorOnlyData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUMaterialFunctionInterfaceEditorOnlyData @ 1472e7a90

void __cdecl
UMaterialFunctionInterfaceEditorOnlyData::
StaticRegisterNativesUMaterialFunctionInterfaceEditorOnlyData(void)

{
  return;
}

// Serialize @ 148b046f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialFunctionInterfaceEditorOnlyData::Serialize
          (UMaterialFunctionInterfaceEditorOnlyData *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

