// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c51c0

UClass * __cdecl UTestInstanceDataObjectClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestInstanceDataObjectClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TestInstanceDataObjectClass",
               &Z_Registration_Info_UClass_UTestInstanceDataObjectClass.InnerSingleton,
               StaticRegisterNativesUTestInstanceDataObjectClass,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestInstanceDataObjectClass>,
               InternalVTableHelperCtorCaller<UTestInstanceDataObjectClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestInstanceDataObjectClass.InnerSingleton;
}

// UTestInstanceDataObjectClass @ 1422d00e0

UTestInstanceDataObjectClass * __thiscall
UTestInstanceDataObjectClass::UTestInstanceDataObjectClass
          (UTestInstanceDataObjectClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->A[0] = -1;
  this->A[1] = -1;
  this->_padding_ = (longlong)&___7UTestInstanceDataObjectClass__6B_;
  (this->Struct).Direction = None;
  (this->Struct).FullFlags = None;
  (this->Struct).GrainFromEnumClass = '\0';
  (this->Struct).FruitFromNamespace = None;
  (this->Struct).GrainTypeChange = '\0';
  (this->Struct).FruitTypeChange = None;
  (this->Struct).GrainTypeAndPropertyChange = '\0';
  (this->Struct).FruitTypeAndPropertyChange = None;
  (this->Struct).Point.X = 0;
  (this->Struct).Point.Y = 0;
  (this->Struct).Point.Z = 0;
  (this->Struct).Point.W = 0;
  this->A[2] = -1;
  this->A[3] = -1;
  this->B = -1.0;
  this->C = -1;
  this->D = -1;
  this->E = -1;
  (this->Struct).A = -1;
  (this->Struct).B = -1;
  (this->Struct).C = -1;
  (this->Struct).D = -1;
  (this->Struct).Bird = '\0';
  (this->Struct).Grain = '\0';
  (this->Struct).Fruit = None;
  return this;
}

// UTestInstanceDataObjectClass @ 1422d0160

UTestInstanceDataObjectClass * __thiscall
UTestInstanceDataObjectClass::UTestInstanceDataObjectClass
          (UTestInstanceDataObjectClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->A[0] = -1;
  this->A[1] = -1;
  this->_padding_ = (longlong)&___7UTestInstanceDataObjectClass__6B_;
  (this->Struct).Direction = None;
  (this->Struct).FullFlags = None;
  (this->Struct).GrainFromEnumClass = '\0';
  (this->Struct).FruitFromNamespace = None;
  (this->Struct).GrainTypeChange = '\0';
  (this->Struct).FruitTypeChange = None;
  (this->Struct).GrainTypeAndPropertyChange = '\0';
  (this->Struct).FruitTypeAndPropertyChange = None;
  (this->Struct).Point.X = 0;
  (this->Struct).Point.Y = 0;
  (this->Struct).Point.Z = 0;
  (this->Struct).Point.W = 0;
  this->A[2] = -1;
  this->A[3] = -1;
  this->B = -1.0;
  this->C = -1;
  this->D = -1;
  this->E = -1;
  (this->Struct).A = -1;
  (this->Struct).B = -1;
  (this->Struct).C = -1;
  (this->Struct).D = -1;
  (this->Struct).Bird = '\0';
  (this->Struct).Grain = '\0';
  (this->Struct).Fruit = None;
  return this;
}

// ~UTestInstanceDataObjectClass @ 1422d15d0

void __thiscall
UTestInstanceDataObjectClass::~UTestInstanceDataObjectClass(UTestInstanceDataObjectClass *this)

{
  this->_padding_ = (longlong)&___7UTestInstanceDataObjectClass__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d35f0

UClass * __cdecl UTestInstanceDataObjectClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestInstanceDataObjectClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TestInstanceDataObjectClass",
               &Z_Registration_Info_UClass_UTestInstanceDataObjectClass.InnerSingleton,
               StaticRegisterNativesUTestInstanceDataObjectClass,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestInstanceDataObjectClass>,
               InternalVTableHelperCtorCaller<UTestInstanceDataObjectClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestInstanceDataObjectClass.InnerSingleton;
}

// StaticRegisterNativesUTestInstanceDataObjectClass @ 1422e3e20

void __cdecl UTestInstanceDataObjectClass::StaticRegisterNativesUTestInstanceDataObjectClass(void)

{
  return;
}

