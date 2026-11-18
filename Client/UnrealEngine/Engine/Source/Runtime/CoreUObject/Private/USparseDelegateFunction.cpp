// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// StaticClass @ 141f522a0

UClass * __cdecl USparseDelegateFunction::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"SparseDelegateFunction",
               &Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton,
               StaticRegisterNativesUSparseDelegateFunction,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_USparseDelegateFunction,L"Engine",
               InternalConstructor<USparseDelegateFunction>,
               InternalVTableHelperCtorCaller<USparseDelegateFunction>,local_res10,
               UDelegateFunction::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton;
}

// USparseDelegateFunction @ 141f67f10

USparseDelegateFunction * __thiscall
USparseDelegateFunction::USparseDelegateFunction
          (USparseDelegateFunction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USparseDelegateFunction__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->OwningClassName).ComparisonIndex = 0;
  (this->OwningClassName).Number = 0;
  (this->DelegateName).ComparisonIndex = 0;
  (this->DelegateName).Number = 0;
  return this;
}

// USparseDelegateFunction @ 141f67f80

USparseDelegateFunction * __thiscall
USparseDelegateFunction::USparseDelegateFunction
          (USparseDelegateFunction *this,FObjectInitializer *param_1,UFunction *param_2,
          EFunctionFlags param_3,ulong64 param_4)

{
  UStruct::UStruct((UStruct *)this,param_1,(UStruct *)param_2,param_4,0);
  *(EFunctionFlags *)&this->_padding_ = param_3;
  this->_padding_ = (longlong)&___7USparseDelegateFunction__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  (this->OwningClassName).ComparisonIndex = 0;
  (this->OwningClassName).Number = 0;
  (this->DelegateName).ComparisonIndex = 0;
  (this->DelegateName).Number = 0;
  return this;
}

// USparseDelegateFunction @ 141f68000

USparseDelegateFunction * __thiscall
USparseDelegateFunction::USparseDelegateFunction
          (USparseDelegateFunction *this,UFunction *param_1,EFunctionFlags param_2,ulong64 param_3)

{
  UFunction::UFunction((UFunction *)this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7USparseDelegateFunction__6B_;
  (this->OwningClassName).ComparisonIndex = 0;
  (this->OwningClassName).Number = 0;
  (this->DelegateName).ComparisonIndex = 0;
  (this->DelegateName).Number = 0;
  return this;
}

// ~USparseDelegateFunction @ 141f69180

void __thiscall USparseDelegateFunction::~USparseDelegateFunction(USparseDelegateFunction *this)

{
  this->_padding_ = (longlong)&___7UFunction__6B_;
  UStruct::~UStruct((UStruct *)this);
  return;
}

// GetPrivateStaticClass @ 141f85110

UClass * __cdecl USparseDelegateFunction::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"SparseDelegateFunction",
               &Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton,
               StaticRegisterNativesUSparseDelegateFunction,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_USparseDelegateFunction,L"Engine",
               InternalConstructor<USparseDelegateFunction>,
               InternalVTableHelperCtorCaller<USparseDelegateFunction>,local_res10,
               UDelegateFunction::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_USparseDelegateFunction.InnerSingleton;
}

// Serialize @ 141f9dd90

void __thiscall USparseDelegateFunction::Serialize(USparseDelegateFunction *this,FArchive *param_1)

{
  UFunction::Serialize((UFunction *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->OwningClassName);
                    /* WARNING: Could not recover jumptable at 0x000141f9ddcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->DelegateName);
  return;
}

// Serialize @ 141f9dde0

void __thiscall
USparseDelegateFunction::Serialize(USparseDelegateFunction *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UFunction::Serialize((UFunction *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x178))(pFVar1,&this->OwningClassName);
  (**(code **)(*(longlong *)pFVar1 + 0x178))(pFVar1,&this->DelegateName);
  return;
}

// StaticRegisterNativesUSparseDelegateFunction @ 141fade40

void __cdecl USparseDelegateFunction::StaticRegisterNativesUSparseDelegateFunction(void)

{
  return;
}

