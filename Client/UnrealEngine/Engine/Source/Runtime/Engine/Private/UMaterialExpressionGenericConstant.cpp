// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472a7780

UClass * __cdecl UMaterialExpressionGenericConstant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionGenericConstant",
               &Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionGenericConstant,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionGenericConstant>,
               InternalVTableHelperCtorCaller<UMaterialExpressionGenericConstant>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.InnerSingleton;
}

// UMaterialExpressionGenericConstant @ 1472ad8d0

UMaterialExpressionGenericConstant * __thiscall
UMaterialExpressionGenericConstant::UMaterialExpressionGenericConstant
          (UMaterialExpressionGenericConstant *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionGenericConstant__6B_;
  return this;
}

// ~UMaterialExpressionGenericConstant @ 1472af930

void __thiscall
UMaterialExpressionGenericConstant::~UMaterialExpressionGenericConstant
          (UMaterialExpressionGenericConstant *this)

{
  *(undefined ***)this = &___7UMaterialExpressionGenericConstant__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetConstantValue @ 1472b1950

FValue * __thiscall
UMaterialExpressionGenericConstant::GetConstantValue
          (UMaterialExpressionGenericConstant *this,FValue *__return_storage_ptr__)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialExpressionGenericConstant.h"
             ,0xf,L"Pure virtual not implemented (%s)");
  *(undefined8 *)&(__return_storage_ptr__->Type).field_0x11 = 0;
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[1] = '\0';
  (pTVar1->AllocatorInstance).InlineData[2] = '\0';
  (pTVar1->AllocatorInstance).InlineData[3] = '\0';
  (pTVar1->AllocatorInstance).InlineData[4] = '\0';
  (pTVar1->AllocatorInstance).InlineData[5] = '\0';
  (pTVar1->AllocatorInstance).InlineData[6] = '\0';
  (pTVar1->AllocatorInstance).InlineData[7] = '\0';
  (pTVar1->AllocatorInstance).InlineData[8] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[9] = '\0';
  (pTVar1->AllocatorInstance).InlineData[10] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0xb] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0xc] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0xd] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0xe] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0xf] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x10] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x11] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x12] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x13] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x14] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x15] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x16] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x17] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x18] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x19] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x1a] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x1b] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x1c] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x1d] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x1e] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x1f] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x20] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x21] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x22] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x23] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x24] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x25] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x26] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x27] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x28] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x29] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x2a] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x2b] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x2c] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x2d] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x2e] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x2f] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x30] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x31] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x32] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x33] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x34] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x35] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x36] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x37] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x38] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x39] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x3a] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x3b] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x3c] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x3d] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x3e] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x3f] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x40] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x41] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x42] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x43] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x44] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x45] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x46] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x47] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x48] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x49] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x4a] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x4b] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x4c] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x4d] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x4e] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x4f] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x50] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x51] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x52] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x53] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x54] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x55] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x56] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x57] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x58] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x59] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x5a] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x5b] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x5c] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x5d] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x5e] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x5f] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x60] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x61] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x62] = '\0';
  (pTVar1->AllocatorInstance).InlineData[99] = '\0';
  (pTVar1->AllocatorInstance).InlineData[100] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x65] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x66] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x67] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x68] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x69] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x6a] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x6b] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x6c] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x6d] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x6e] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x6f] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x70] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x71] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x72] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x73] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x74] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x75] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x76] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x77] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x78] = '\0';
  pTVar1 = &__return_storage_ptr__->Component;
  (pTVar1->AllocatorInstance).InlineData[0x79] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x7a] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x7b] = '\0';
  (pTVar1->AllocatorInstance).InlineData[0x7c] = '\0';
  (__return_storage_ptr__->Component).AllocatorInstance.InlineData[0x7d] = '\0';
  (__return_storage_ptr__->Component).AllocatorInstance.InlineData[0x7e] = '\0';
  (__return_storage_ptr__->Component).AllocatorInstance.InlineData[0x7f] = '\0';
  (__return_storage_ptr__->Type).StructType = (FStructType *)0x0;
  (__return_storage_ptr__->Type).ObjectType.ComparisonIndex = 0;
  (__return_storage_ptr__->Type).ObjectType.Number = 0;
  (__return_storage_ptr__->Type).ValueType = Void;
  (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  (__return_storage_ptr__->Component).ArrayNum = 0;
  (__return_storage_ptr__->Component).ArrayMax = 0x10;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1472b2d20

UClass * __cdecl UMaterialExpressionGenericConstant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionGenericConstant",
               &Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionGenericConstant,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionGenericConstant>,
               InternalVTableHelperCtorCaller<UMaterialExpressionGenericConstant>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionGenericConstant @ 1472b4600

void __cdecl
UMaterialExpressionGenericConstant::StaticRegisterNativesUMaterialExpressionGenericConstant(void)

{
  return;
}

// UMaterialExpressionGenericConstant @ 148afc650

UMaterialExpressionGenericConstant * __thiscall
UMaterialExpressionGenericConstant::UMaterialExpressionGenericConstant
          (UMaterialExpressionGenericConstant *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionGenericConstant__6B_;
  return this;
}

