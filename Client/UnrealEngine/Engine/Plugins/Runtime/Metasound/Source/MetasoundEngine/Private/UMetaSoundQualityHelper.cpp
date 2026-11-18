// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 7

// StaticClass @ 14b2dbf60

UClass * __cdecl UMetaSoundQualityHelper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundQualityHelper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundQualityHelper",
               &Z_Registration_Info_UClass_UMetaSoundQualityHelper.InnerSingleton,
               StaticRegisterNativesUMetaSoundQualityHelper,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetaSoundQualityHelper>,
               InternalVTableHelperCtorCaller<UMetaSoundQualityHelper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundQualityHelper.InnerSingleton;
}

// UMetaSoundQualityHelper @ 14b34c850

UMetaSoundQualityHelper * __thiscall
UMetaSoundQualityHelper::UMetaSoundQualityHelper
          (UMetaSoundQualityHelper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundQualityHelper__6B_;
  return this;
}

// UMetaSoundQualityHelper @ 14b34c880

UMetaSoundQualityHelper * __thiscall
UMetaSoundQualityHelper::UMetaSoundQualityHelper
          (UMetaSoundQualityHelper *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundQualityHelper__6B_;
  return this;
}

// ~UMetaSoundQualityHelper @ 14b352670

void __thiscall UMetaSoundQualityHelper::~UMetaSoundQualityHelper(UMetaSoundQualityHelper *this)

{
  *(undefined ***)this = &___7UMetaSoundQualityHelper__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b3bf590

UClass * __cdecl UMetaSoundQualityHelper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundQualityHelper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundQualityHelper",
               &Z_Registration_Info_UClass_UMetaSoundQualityHelper.InnerSingleton,
               StaticRegisterNativesUMetaSoundQualityHelper,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetaSoundQualityHelper>,
               InternalVTableHelperCtorCaller<UMetaSoundQualityHelper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundQualityHelper.InnerSingleton;
}

// StaticRegisterNativesUMetaSoundQualityHelper @ 14b3e1510

void __cdecl UMetaSoundQualityHelper::StaticRegisterNativesUMetaSoundQualityHelper(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMetaSoundQualityHelper_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetQualityNames @ 14b3f37b0

void __cdecl
UMetaSoundQualityHelper::execGetQualityNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

