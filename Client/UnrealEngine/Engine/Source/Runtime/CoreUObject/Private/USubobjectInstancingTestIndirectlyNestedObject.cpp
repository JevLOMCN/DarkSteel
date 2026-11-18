// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c4f90

UClass * __cdecl USubobjectInstancingTestIndirectlyNestedObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestIndirectlyNestedObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestIndirectlyNestedObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestIndirectlyNestedObject.
                InnerSingleton,StaticRegisterNativesUSubobjectInstancingTestIndirectlyNestedObject,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingTestIndirectlyNestedObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestIndirectlyNestedObject>,
               local_res8,USubobjectInstancingTestObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestIndirectlyNestedObject.InnerSingleton;
}

// USubobjectInstancingTestIndirectlyNestedObject @ 1422ce9e0

USubobjectInstancingTestIndirectlyNestedObject * __thiscall
USubobjectInstancingTestIndirectlyNestedObject::USubobjectInstancingTestIndirectlyNestedObject
          (USubobjectInstancingTestIndirectlyNestedObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 100;
  this->_padding_ = (longlong)&___7USubobjectInstancingTestIndirectlyNestedObject__6B_;
  (this->InnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestDirectlyNestedObject *)0x0;
  return this;
}

// USubobjectInstancingTestIndirectlyNestedObject @ 1422cea20

USubobjectInstancingTestIndirectlyNestedObject * __thiscall
USubobjectInstancingTestIndirectlyNestedObject::USubobjectInstancingTestIndirectlyNestedObject
          (USubobjectInstancingTestIndirectlyNestedObject *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USubobjectInstancingTestDirectlyNestedObject *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar2);
  *(undefined4 *)&this->_padding_ = 100;
  this->_padding_ = (longlong)&___7USubobjectInstancingTestIndirectlyNestedObject__6B_;
  (this->InnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestDirectlyNestedObject *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"InnerObject");
  FVar1 = *pFVar3;
  pUVar4 = USubobjectInstancingTestDirectlyNestedObject::StaticClass();
  pUVar5 = (USubobjectInstancingTestDirectlyNestedObject *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (USubobjectInstancingTestDirectlyNestedObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->InnerObject).field0_0x0.DebugPtr = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar5->OwnerObject).field0_0x0.DebugPtr = (UObject *)this;
  return this;
}

// ~USubobjectInstancingTestIndirectlyNestedObject @ 1422d1470

void __thiscall
USubobjectInstancingTestIndirectlyNestedObject::~USubobjectInstancingTestIndirectlyNestedObject
          (USubobjectInstancingTestIndirectlyNestedObject *this)

{
  this->_padding_ = (longlong)&___7USubobjectInstancingTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d33d0

UClass * __cdecl USubobjectInstancingTestIndirectlyNestedObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestIndirectlyNestedObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestIndirectlyNestedObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestIndirectlyNestedObject.
                InnerSingleton,StaticRegisterNativesUSubobjectInstancingTestIndirectlyNestedObject,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingTestIndirectlyNestedObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestIndirectlyNestedObject>,
               local_res8,USubobjectInstancingTestObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestIndirectlyNestedObject.InnerSingleton;
}

// StaticRegisterNativesUSubobjectInstancingTestIndirectlyNestedObject @ 1422e3df0

void __cdecl
USubobjectInstancingTestIndirectlyNestedObject::
StaticRegisterNativesUSubobjectInstancingTestIndirectlyNestedObject(void)

{
  return;
}

