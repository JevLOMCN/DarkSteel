// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146327130

UClass * __cdecl UNoiseField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNoiseField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"NoiseField",
               &Z_Registration_Info_UClass_UNoiseField.InnerSingleton,
               StaticRegisterNativesUNoiseField,0x130,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNoiseField>,
               InternalVTableHelperCtorCaller<UNoiseField>,local_res8,UFieldNodeFloat::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNoiseField.InnerSingleton;
}

// UNoiseField @ 14632b090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNoiseField * __thiscall UNoiseField::UNoiseField(UNoiseField *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UNoiseField @ 14632b9a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNoiseField::~UNoiseField(UNoiseField *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146330130

UClass * __cdecl UNoiseField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNoiseField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"NoiseField",
               &Z_Registration_Info_UClass_UNoiseField.InnerSingleton,
               StaticRegisterNativesUNoiseField,0x130,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNoiseField>,
               InternalVTableHelperCtorCaller<UNoiseField>,local_res8,UFieldNodeFloat::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNoiseField.InnerSingleton;
}

// NewEvaluationGraph @ 146331120

FFieldNodeBase * __thiscall
UNoiseField::NewEvaluationGraph
          (UNoiseField *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  FName FVar6;
  double dVar7;
  FName FVar8;
  double dVar9;
  FName FVar10;
  double dVar11;
  FName FVar12;
  double dVar13;
  FName FVar14;
  double dVar15;
  FName FVar16;
  bool bVar17;
  int iVar18;
  FFieldNodeBase *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  UNoiseField *local_98 [18];
  
  pFVar20 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar20 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar20 == pFVar3) {
LAB_146331155:
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_98[0] = this;
      if (((pFVar3 <= (FScriptContainerElement *)local_98) &&
          ((FScriptContainerElement *)local_98 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar4 = (code *)swi(3);
        pFVar19 = (FFieldNodeBase *)(*pcVar4)();
        return pFVar19;
      }
      iVar18 = param_1->ArrayNum;
      if (iVar18 == param_1->ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar18;
      }
      param_1->ArrayNum = iVar18 + 1;
      *(UNoiseField **)((param_1->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_98[0];
      pFVar19 = ::operator_new(0x80);
      if (pFVar19 == (FFieldNodeBase *)0x0) {
        pFVar19 = (FFieldNodeBase *)0x0;
      }
      else {
        fVar1 = this->MinRange;
        fVar2 = this->MaxRange;
        dVar5 = (this->Transform).Rotation.XY.m128d_f64[0];
        FVar6 = *(FName *)((this->Transform).Rotation.XY.m128d_f64 + 1);
        dVar7 = (this->Transform).Rotation.ZW.m128d_f64[0];
        FVar8 = *(FName *)((this->Transform).Rotation.ZW.m128d_f64 + 1);
        dVar9 = (this->Transform).Translation.XY.m128d_f64[0];
        FVar10 = *(FName *)((this->Transform).Translation.XY.m128d_f64 + 1);
        dVar11 = (this->Transform).Translation.ZW.m128d_f64[0];
        FVar12 = *(FName *)((this->Transform).Translation.ZW.m128d_f64 + 1);
        dVar13 = (this->Transform).Scale3D.XY.m128d_f64[0];
        FVar14 = *(FName *)((this->Transform).Scale3D.XY.m128d_f64 + 1);
        dVar15 = (this->Transform).Scale3D.ZW.m128d_f64[0];
        FVar16 = *(FName *)((this->Transform).Scale3D.ZW.m128d_f64 + 1);
        (pFVar19->Name).ComparisonIndex = 0;
        (pFVar19->Name).Number = 0;
        pFVar19->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar19->Name,"");
        pFVar19[2]._padding_ = (longlong)dVar5;
        pFVar19[2].Name = FVar6;
        pFVar19[3]._padding_ = (longlong)dVar7;
        pFVar19[3].Name = FVar8;
        pFVar19->_padding_ = (longlong)&___7FNoiseField__6B_;
        pFVar19[4]._padding_ = (longlong)dVar9;
        pFVar19[4].Name = FVar10;
        pFVar19[5]._padding_ = (longlong)dVar11;
        pFVar19[5].Name = FVar12;
        pFVar19[6]._padding_ = (longlong)dVar13;
        pFVar19[6].Name = FVar14;
        pFVar19[7]._padding_ = (longlong)dVar15;
        pFVar19[7].Name = FVar16;
        *(float *)&pFVar19[1]._padding_ = fVar1;
        *(float *)((longlong)&pFVar19[1]._padding_ + 4) = fVar2;
      }
      return pFVar19;
    }
    if (*(UNoiseField **)pFVar20 == this) {
      local_res8[0] = 0;
      bVar17 = `UNoiseField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar17) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146331155;
    }
    pFVar20 = pFVar20 + 8;
  } while( true );
}

// SetNoiseField @ 146333c70

UNoiseField * __thiscall
UNoiseField::SetNoiseField
          (UNoiseField *this,float param_1,float param_2,TTransform<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_3->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Translation).XY.m128d_f64[0];
  dVar2 = (param_3->Translation).XY.m128d_f64[1];
  this->MinRange = param_1;
  dVar3 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_3->Translation).ZW.m128d_f64[0];
  dVar4 = (param_3->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = dVar1;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar1 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar2 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = dVar3;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar3 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar4 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = dVar1;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar3;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar4;
  this->MaxRange = param_2;
  return this;
}

// StaticRegisterNativesUNoiseField @ 146334290

void __cdecl UNoiseField::StaticRegisterNativesUNoiseField(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNoiseField_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetNoiseField @ 146336470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UNoiseField::execSetNoiseField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94 [3];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_94[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_94);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x20 = local_98;
  *(undefined8 *)&param_1[5].field_0x8 = local_88._0_8_;
  *(undefined8 *)&param_1[5].field_0x10 = local_88._8_8_;
  *(undefined4 *)&param_1[4].field_0x24 = local_94[0];
  *(undefined8 *)&param_1[5].field_0x18 = local_78._0_8_;
  *(undefined8 *)&param_1[5].field_0x20 = local_78._8_8_;
  *(undefined8 *)(param_1 + 6) = local_68._0_8_;
  *(undefined8 *)&param_1[6].field_0x8 = local_68._8_8_;
  *(undefined8 *)&param_1[6].field_0x10 = local_58._0_8_;
  *(undefined8 *)&param_1[6].field_0x18 = local_58._8_8_;
  *(undefined8 *)&param_1[6].field_0x20 = local_48._0_8_;
  *(undefined8 *)(param_1 + 7) = local_48._8_8_;
  *(undefined8 *)&param_1[7].field_0x8 = local_38._0_8_;
  *(undefined8 *)&param_1[7].field_0x10 = local_38._8_8_;
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9ac0

bool __thiscall `UNoiseField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983637>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983637>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

