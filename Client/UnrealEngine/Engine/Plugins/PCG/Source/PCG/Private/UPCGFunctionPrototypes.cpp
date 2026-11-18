// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// GetPrototypeWithNoParams @ 149b91890

UFunction * __cdecl UPCGFunctionPrototypes::GetPrototypeWithNoParams(void)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UFunction *pUVar3;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x15;
  local_18.DataPtr = L"PrototypeWithNoParams";
  pUVar1 = Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister();
  pUVar2 = Z_Construct_UClass_UFunction_NoRegister();
  pUVar3 = (UFunction *)StaticFindObject(pUVar2,(UObject *)pUVar1,&local_18,None);
  return pUVar3;
}

// StaticClass @ 149ce56b0

UClass * __cdecl UPCGFunctionPrototypes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFunctionPrototypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFunctionPrototypes",
               &Z_Registration_Info_UClass_UPCGFunctionPrototypes.InnerSingleton,
               StaticRegisterNativesUPCGFunctionPrototypes,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGFunctionPrototypes>,
               InternalVTableHelperCtorCaller<UPCGFunctionPrototypes>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFunctionPrototypes.InnerSingleton;
}

// UPCGFunctionPrototypes @ 149d341e0

UPCGFunctionPrototypes * __thiscall
UPCGFunctionPrototypes::UPCGFunctionPrototypes(UPCGFunctionPrototypes *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGFunctionPrototypes__6B_;
  return this;
}

// UPCGFunctionPrototypes @ 149d34210

UPCGFunctionPrototypes * __thiscall
UPCGFunctionPrototypes::UPCGFunctionPrototypes
          (UPCGFunctionPrototypes *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGFunctionPrototypes__6B_;
  return this;
}

// ~UPCGFunctionPrototypes @ 149d34f20

void __thiscall UPCGFunctionPrototypes::~UPCGFunctionPrototypes(UPCGFunctionPrototypes *this)

{
  *(undefined ***)this = &___7UPCGFunctionPrototypes__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 149d542a0

UClass * __cdecl UPCGFunctionPrototypes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFunctionPrototypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFunctionPrototypes",
               &Z_Registration_Info_UClass_UPCGFunctionPrototypes.InnerSingleton,
               StaticRegisterNativesUPCGFunctionPrototypes,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGFunctionPrototypes>,
               InternalVTableHelperCtorCaller<UPCGFunctionPrototypes>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFunctionPrototypes.InnerSingleton;
}

// StaticRegisterNativesUPCGFunctionPrototypes @ 149d661d0

void __cdecl UPCGFunctionPrototypes::StaticRegisterNativesUPCGFunctionPrototypes(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGFunctionPrototypes_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPrototypeWithNoParams @ 149d6fd10

void __cdecl
UPCGFunctionPrototypes::execPrototypeWithNoParams(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execPrototypeWithPointAndMetadata @ 149d6fd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGFunctionPrototypes::execPrototypeWithPointAndMetadata
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [2];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = 0x3f800000;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar2 = (uint)__xmm_80000000000000008000000000000000;
  uVar3 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar3,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar2);
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar3,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar2);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_70 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar3,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar2);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_28 = 0x3f000000;
  local_20 = 0xffffffffffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

