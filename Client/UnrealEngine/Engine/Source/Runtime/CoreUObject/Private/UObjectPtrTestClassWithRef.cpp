// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e493e0

UClass * __cdecl UObjectPtrTestClassWithRef::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrTestClassWithRef",
               &Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton,
               StaticRegisterNativesUObjectPtrTestClassWithRef,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UObjectPtrTestClassWithRef>,
               InternalVTableHelperCtorCaller<UObjectPtrTestClassWithRef>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton;
}

// UObjectPtrTestClassWithRef @ 141e57020

UObjectPtrTestClassWithRef * __thiscall
UObjectPtrTestClassWithRef::UObjectPtrTestClassWithRef
          (UObjectPtrTestClassWithRef *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectPtrTestClassWithRef__6B_;
  (this->ObjectPtr).field0_0x0.DebugPtr = (UObjectPtrTestClass *)0x0;
  (this->ObjectPtrNonNullable).field0_0x0.DebugPtr = (UObjectPtrTestClass *)0x0;
  (this->ObjectPtrAbstractNonNullable).field0_0x0.DebugPtr = (UObjectPtrAbstractTestClass *)0x0;
  (this->ArrayObjPtr).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayObjPtr).ArrayNum = 0;
  (this->ArrayObjPtr).ArrayMax = 0;
  return this;
}

// UObjectPtrTestClassWithRef @ 141e57060

UObjectPtrTestClassWithRef * __thiscall
UObjectPtrTestClassWithRef::UObjectPtrTestClassWithRef
          (UObjectPtrTestClassWithRef *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectPtrTestClassWithRef__6B_;
  (this->ObjectPtr).field0_0x0.DebugPtr = (UObjectPtrTestClass *)0x0;
  (this->ObjectPtrNonNullable).field0_0x0.DebugPtr = (UObjectPtrTestClass *)0x0;
  (this->ObjectPtrAbstractNonNullable).field0_0x0.DebugPtr = (UObjectPtrAbstractTestClass *)0x0;
  (this->ArrayObjPtr).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayObjPtr).ArrayNum = 0;
  (this->ArrayObjPtr).ArrayMax = 0;
  return this;
}

// ~UObjectPtrTestClassWithRef @ 141e57b50

void __thiscall
UObjectPtrTestClassWithRef::~UObjectPtrTestClassWithRef(UObjectPtrTestClassWithRef *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UObjectPtrTestClassWithRef__6B_;
  pFVar1 = (this->ArrayObjPtr).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5cf00

UClass * __cdecl UObjectPtrTestClassWithRef::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrTestClassWithRef",
               &Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton,
               StaticRegisterNativesUObjectPtrTestClassWithRef,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UObjectPtrTestClassWithRef>,
               InternalVTableHelperCtorCaller<UObjectPtrTestClassWithRef>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton;
}

// StaticRegisterNativesUObjectPtrTestClassWithRef @ 141e60820

void __cdecl UObjectPtrTestClassWithRef::StaticRegisterNativesUObjectPtrTestClassWithRef(void)

{
  return;
}

