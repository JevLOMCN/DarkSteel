// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472a7840

UClass * __cdecl UMaterialExpressionConstantDouble::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstantDouble",
               &Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstantDouble,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstantDouble>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstantDouble>,local_res8,
               UMaterialExpressionGenericConstant::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.InnerSingleton;
}

// UMaterialExpressionConstantDouble @ 1472ac820

UMaterialExpressionConstantDouble * __thiscall
UMaterialExpressionConstantDouble::UMaterialExpressionConstantDouble
          (UMaterialExpressionConstantDouble *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionConstantDouble__6B_;
  return this;
}

// ~UMaterialExpressionConstantDouble @ 1472af520

void __thiscall
UMaterialExpressionConstantDouble::~UMaterialExpressionConstantDouble
          (UMaterialExpressionConstantDouble *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionGenericConstant__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetConstantValue @ 1472b1840

FValue * __thiscall
UMaterialExpressionConstantDouble::GetConstantValue
          (UMaterialExpressionConstantDouble *this,FValue *__return_storage_ptr__)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValue *pFVar5;
  ForElementType<UE::Shader::FValueComponent> FVar6;
  double local_18 [2];
  
  local_18[0] = this->Value;
  pTVar1 = &__return_storage_ptr__->Component;
  (__return_storage_ptr__->Type).StructType = (FStructType *)0x0;
  (__return_storage_ptr__->Type).ObjectType.ComparisonIndex = 0;
  (__return_storage_ptr__->Type).ObjectType.Number = 0;
  (__return_storage_ptr__->Type).ValueType = Double1;
  (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (__return_storage_ptr__->Component).ArrayNum = 0;
  (__return_storage_ptr__->Component).ArrayMax = 0x10;
  if ((pTVar1 <= local_18) &&
     (local_18 < &(__return_storage_ptr__->Component).AllocatorInstance.SecondaryData)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FValue *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (__return_storage_ptr__->Component).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Component).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->Component).ArrayMax);
  }
  (__return_storage_ptr__->Component).ArrayNum = iVar4 + 1;
  FVar6 = (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar6 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(double *)((longlong)FVar6 + (longlong)iVar4 * 8) = local_18[0];
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1472b1a60

UClass * __cdecl UMaterialExpressionConstantDouble::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstantDouble",
               &Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstantDouble,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstantDouble>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstantDouble>,local_res8,
               UMaterialExpressionGenericConstant::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionConstantDouble @ 1472b4470

void __cdecl
UMaterialExpressionConstantDouble::StaticRegisterNativesUMaterialExpressionConstantDouble(void)

{
  return;
}

// UMaterialExpressionConstantDouble @ 148afb280

UMaterialExpressionConstantDouble * __thiscall
UMaterialExpressionConstantDouble::UMaterialExpressionConstantDouble
          (UMaterialExpressionConstantDouble *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionConstantDouble__6B_;
  return this;
}

