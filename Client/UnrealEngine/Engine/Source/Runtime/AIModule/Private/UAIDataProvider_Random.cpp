// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f13000

UClass * __cdecl UAIDataProvider_Random::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider_Random",
               &Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton,
               StaticRegisterNativesUAIDataProvider_Random,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAIDataProvider_Random>,
               InternalVTableHelperCtorCaller<UAIDataProvider_Random>,local_res8,
               UAIDataProvider_QueryParams::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton;
}

// UAIDataProvider_Random @ 146f29fa0

UAIDataProvider_Random * __thiscall
UAIDataProvider_Random::UAIDataProvider_Random(UAIDataProvider_Random *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAIDataProvider_Random__6B_;
  return this;
}

// UAIDataProvider_Random @ 146f29fd0

UAIDataProvider_Random * __thiscall
UAIDataProvider_Random::UAIDataProvider_Random
          (UAIDataProvider_Random *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Max = 1.0;
  this->bInteger = '\0';
  this->_padding_ = (longlong)&___7UAIDataProvider_Random__6B_;
  this->_padding_ = 0;
  this->Min = 0.0;
  return this;
}

// ~UAIDataProvider_Random @ 146f2e680

void __thiscall UAIDataProvider_Random::~UAIDataProvider_Random(UAIDataProvider_Random *this)

{
  this->_padding_ = (longlong)&___7UAIDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BindData @ 146f35340

void __thiscall
UAIDataProvider_Random::BindData(UAIDataProvider_Random *this,UObject *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  UAISystem::RandomStream.Seed = UAISystem::RandomStream.Seed * 0xbb38435 + 0x3619636b;
  fVar2 = (this->Max - this->Min) *
          ((float)(UAISystem::RandomStream.Seed >> 9 | 0x3f800000) - __real_3f800000) + this->Min;
  iVar1 = (int)ROUND(fVar2 + fVar2 + __real_3f000000) >> 1;
  *(int *)((longlong)&this->_padding_ + 4) = iVar1;
  *(bool *)&this->_padding_ = iVar1 != 0;
  if (this->bInteger != 0) {
    *(float *)&this->_padding_ = (float)iVar1;
    return;
  }
  *(float *)&this->_padding_ = fVar2;
  return;
}

// GetPrivateStaticClass @ 146f577b0

UClass * __cdecl UAIDataProvider_Random::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider_Random",
               &Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton,
               StaticRegisterNativesUAIDataProvider_Random,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAIDataProvider_Random>,
               InternalVTableHelperCtorCaller<UAIDataProvider_Random>,local_res8,
               UAIDataProvider_QueryParams::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider_Random.InnerSingleton;
}

// StaticRegisterNativesUAIDataProvider_Random @ 146f76bd0

void __cdecl UAIDataProvider_Random::StaticRegisterNativesUAIDataProvider_Random(void)

{
  return;
}

// ToString @ 146f7a740

FString * __thiscall
UAIDataProvider_Random::ToString
          (UAIDataProvider_Random *this,FString *__return_storage_ptr__,FName param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Random number");
  return __return_storage_ptr__;
}

