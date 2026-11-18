// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 6

// StaticClass @ 14cd91e60

UClass * __cdecl UGeometryScriptDebug::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptDebug.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptDebug",
               &Z_Registration_Info_UClass_UGeometryScriptDebug.InnerSingleton,
               StaticRegisterNativesUGeometryScriptDebug,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryScriptDebug>,
               InternalVTableHelperCtorCaller<UGeometryScriptDebug>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptDebug.InnerSingleton;
}

// UGeometryScriptDebug @ 14cda5c80

UGeometryScriptDebug * __thiscall
UGeometryScriptDebug::UGeometryScriptDebug(UGeometryScriptDebug *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryScriptDebug__6B_;
  (this->Messages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Messages).ArrayNum = 0;
  (this->Messages).ArrayMax = 0;
  return this;
}

// UGeometryScriptDebug @ 14cda5cc0

UGeometryScriptDebug * __thiscall
UGeometryScriptDebug::UGeometryScriptDebug(UGeometryScriptDebug *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryScriptDebug__6B_;
  (this->Messages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Messages).ArrayNum = 0;
  (this->Messages).ArrayMax = 0;
  return this;
}

// ~UGeometryScriptDebug @ 14cda69a0

void __thiscall UGeometryScriptDebug::~UGeometryScriptDebug(UGeometryScriptDebug *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGeometryScriptDebug__6B_;
  DestructItems<FGeometryScriptDebugMessage,int>
            ((FGeometryScriptDebugMessage *)(this->Messages).AllocatorInstance.Data,
             (this->Messages).ArrayNum);
  pFVar1 = (this->Messages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cdd8270

UClass * __cdecl UGeometryScriptDebug::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptDebug.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptDebug",
               &Z_Registration_Info_UClass_UGeometryScriptDebug.InnerSingleton,
               StaticRegisterNativesUGeometryScriptDebug,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryScriptDebug>,
               InternalVTableHelperCtorCaller<UGeometryScriptDebug>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptDebug.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptDebug @ 14cde7090

void __cdecl UGeometryScriptDebug::StaticRegisterNativesUGeometryScriptDebug(void)

{
  return;
}

