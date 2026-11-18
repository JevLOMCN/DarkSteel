// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1473205f0

UClass * __cdecl UPieFixupTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPieFixupTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PieFixupTestObject",
               &Z_Registration_Info_UClass_UPieFixupTestObject.InnerSingleton,
               StaticRegisterNativesUPieFixupTestObject,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPieFixupTestObject>,
               InternalVTableHelperCtorCaller<UPieFixupTestObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPieFixupTestObject.InnerSingleton;
}

// UPieFixupTestObject @ 147324a00

UPieFixupTestObject * __thiscall
UPieFixupTestObject::UPieFixupTestObject(UPieFixupTestObject *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->TypedPtr).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPieFixupTestObject__6B_;
  (this->Path).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Path).AssetPath.PackageName.Number = 0;
  (this->Path).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Path).AssetPath.AssetName.Number = 0;
  (this->Path).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).SubPathString.Data.ArrayNum = 0;
  (this->Path).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TypedPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TypedPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TypedPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TypedPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->Struct).TypedPtr.SoftObjectPtr.field_0x18;
  (this->Struct).Path.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Struct).Path.AssetPath.PackageName.Number = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Struct).TypedPtr.SoftObjectPtr.field_0x20 = 0;
  (this->Struct).Path.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Struct).Path.AssetPath.AssetName.Number = 0;
  (this->Struct).Path.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Struct).Path.SubPathString.Data.ArrayNum = 0;
  (this->Struct).Path.SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&(this->Struct).TypedPtr.SoftObjectPtr = 0;
  *(undefined8 *)&(this->Struct).TypedPtr.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Struct).TypedPtr.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Array).ArrayNum = 0;
  (this->Array).ArrayMax = 0;
  return this;
}

// UPieFixupTestObject @ 147324ab0

UPieFixupTestObject * __thiscall
UPieFixupTestObject::UPieFixupTestObject(UPieFixupTestObject *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->TypedPtr).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPieFixupTestObject__6B_;
  (this->Path).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Path).AssetPath.PackageName.Number = 0;
  (this->Path).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Path).AssetPath.AssetName.Number = 0;
  (this->Path).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).SubPathString.Data.ArrayNum = 0;
  (this->Path).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TypedPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TypedPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TypedPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TypedPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->Struct).TypedPtr.SoftObjectPtr.field_0x18;
  (this->Struct).Path.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Struct).Path.AssetPath.PackageName.Number = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Struct).TypedPtr.SoftObjectPtr.field_0x20 = 0;
  (this->Struct).Path.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Struct).Path.AssetPath.AssetName.Number = 0;
  (this->Struct).Path.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Struct).Path.SubPathString.Data.ArrayNum = 0;
  (this->Struct).Path.SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&(this->Struct).TypedPtr.SoftObjectPtr = 0;
  *(undefined8 *)&(this->Struct).TypedPtr.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Struct).TypedPtr.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Array).ArrayNum = 0;
  (this->Array).ArrayMax = 0;
  return this;
}

// ~UPieFixupTestObject @ 147325200

void __thiscall UPieFixupTestObject::~UPieFixupTestObject(UPieFixupTestObject *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPieFixupTestObject__6B_;
  DestructItems<FPieFixupStructWithSoftObjectPath,int>
            ((FPieFixupStructWithSoftObjectPath *)(this->Array).AllocatorInstance.Data,
             (this->Array).ArrayNum);
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Struct).TypedPtr.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->Struct).Path.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TypedPtr).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->Path).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473270e0

UClass * __cdecl UPieFixupTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPieFixupTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PieFixupTestObject",
               &Z_Registration_Info_UClass_UPieFixupTestObject.InnerSingleton,
               StaticRegisterNativesUPieFixupTestObject,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPieFixupTestObject>,
               InternalVTableHelperCtorCaller<UPieFixupTestObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPieFixupTestObject.InnerSingleton;
}

// StaticRegisterNativesUPieFixupTestObject @ 147328240

void __cdecl UPieFixupTestObject::StaticRegisterNativesUPieFixupTestObject(void)

{
  return;
}

