// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c4c90

UClass * __cdecl USubobjectInstancingTestDirectlyNestedObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestDirectlyNestedObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestDirectlyNestedObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestDirectlyNestedObject.
                InnerSingleton,StaticRegisterNativesUSubobjectInstancingTestDirectlyNestedObject,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingTestDirectlyNestedObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestDirectlyNestedObject>,
               local_res8,USubobjectInstancingTestObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestDirectlyNestedObject.InnerSingleton;
}

// USubobjectInstancingTestDirectlyNestedObject @ 1422ce8e0

USubobjectInstancingTestDirectlyNestedObject * __thiscall
USubobjectInstancingTestDirectlyNestedObject::USubobjectInstancingTestDirectlyNestedObject
          (USubobjectInstancingTestDirectlyNestedObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 100;
  this->_padding_ = (longlong)&___7USubobjectInstancingTestDirectlyNestedObject__6B_;
  (this->SelfRef).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OwnerObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->InnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  return this;
}

// USubobjectInstancingTestDirectlyNestedObject @ 1422ce920

USubobjectInstancingTestDirectlyNestedObject * __thiscall
USubobjectInstancingTestDirectlyNestedObject::USubobjectInstancingTestDirectlyNestedObject
          (USubobjectInstancingTestDirectlyNestedObject *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USubobjectInstancingTestObject *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar2);
  *(undefined4 *)&this->_padding_ = 100;
  this->_padding_ = (longlong)&___7USubobjectInstancingTestDirectlyNestedObject__6B_;
  (this->SelfRef).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OwnerObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->InnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (this->SelfRef).field0_0x0.DebugPtr = (UObject *)this;
  pFVar3 = ::FName::FName(&local_res8,L"InnerObject");
  FVar1 = *pFVar3;
  pUVar4 = USubobjectInstancingTestObject::StaticClass();
  pUVar5 = (USubobjectInstancingTestObject *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->InnerObject).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~USubobjectInstancingTestDirectlyNestedObject @ 1422d1450

void __thiscall
USubobjectInstancingTestDirectlyNestedObject::~USubobjectInstancingTestDirectlyNestedObject
          (USubobjectInstancingTestDirectlyNestedObject *this)

{
  this->_padding_ = (longlong)&___7USubobjectInstancingTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d3310

UClass * __cdecl USubobjectInstancingTestDirectlyNestedObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestDirectlyNestedObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestDirectlyNestedObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestDirectlyNestedObject.
                InnerSingleton,StaticRegisterNativesUSubobjectInstancingTestDirectlyNestedObject,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingTestDirectlyNestedObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestDirectlyNestedObject>,
               local_res8,USubobjectInstancingTestObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestDirectlyNestedObject.InnerSingleton;
}

// StaticRegisterNativesUSubobjectInstancingTestDirectlyNestedObject @ 1422e3de0

void __cdecl
USubobjectInstancingTestDirectlyNestedObject::
StaticRegisterNativesUSubobjectInstancingTestDirectlyNestedObject(void)

{
  return;
}

