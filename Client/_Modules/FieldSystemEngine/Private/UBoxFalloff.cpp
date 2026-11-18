// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146326fa0

UClass * __cdecl UBoxFalloff::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoxFalloff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"BoxFalloff",
               &Z_Registration_Info_UClass_UBoxFalloff.InnerSingleton,
               StaticRegisterNativesUBoxFalloff,0x140,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBoxFalloff>,
               InternalVTableHelperCtorCaller<UBoxFalloff>,local_res8,UFieldNodeFloat::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoxFalloff.InnerSingleton;
}

// UBoxFalloff @ 14632a900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBoxFalloff * __thiscall UBoxFalloff::UBoxFalloff(UBoxFalloff *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
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

// ~UBoxFalloff @ 14632b600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBoxFalloff::~UBoxFalloff(UBoxFalloff *this)

{
  *(undefined ***)this = &UFieldNodeBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14632f840

UClass * __cdecl UBoxFalloff::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoxFalloff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"BoxFalloff",
               &Z_Registration_Info_UClass_UBoxFalloff.InnerSingleton,
               StaticRegisterNativesUBoxFalloff,0x140,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBoxFalloff>,
               InternalVTableHelperCtorCaller<UBoxFalloff>,local_res8,UFieldNodeFloat::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoxFalloff.InnerSingleton;
}

// NewEvaluationGraph @ 146330c70

/* WARNING: Type propagation algorithm not settling */

FFieldNodeBase * __thiscall
UBoxFalloff::NewEvaluationGraph
          (UBoxFalloff *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FFieldNodeBase *pFVar5;
  FBoxFalloff *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  UBoxFalloff *local_78 [2];
  TTransform<double> local_68;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar7 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar7 == pFVar1) {
LAB_146330cc0:
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_78[0] = this;
      if (((pFVar1 <= (FScriptContainerElement *)local_78) &&
          ((FScriptContainerElement *)local_78 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FFieldNodeBase *)(*pcVar2)();
        return pFVar5;
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar4;
      }
      param_1->ArrayNum = iVar4 + 1;
      *(UBoxFalloff **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_78[0];
      pFVar6 = ::operator_new(0x90);
      if (pFVar6 == (FBoxFalloff *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      local_68.Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
      local_68.Rotation.XY.m128d_f64[1] = (this->Transform).Rotation.XY.m128d_f64[1];
      local_68.Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
      local_68.Rotation.ZW.m128d_f64[1] = (this->Transform).Rotation.ZW.m128d_f64[1];
      local_68.Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
      local_68.Translation.XY.m128d_f64[1] = (this->Transform).Translation.XY.m128d_f64[1];
      local_68.Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
      local_68.Translation.ZW.m128d_f64[1] = (this->Transform).Translation.ZW.m128d_f64[1];
      local_68.Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
      local_68.Scale3D.XY.m128d_f64[1] = (this->Transform).Scale3D.XY.m128d_f64[1];
      local_68.Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
      local_68.Scale3D.ZW.m128d_f64[1] = (this->Transform).Scale3D.ZW.m128d_f64[1];
      pFVar6 = FBoxFalloff::FBoxFalloff
                         (pFVar6,this->Magnitude,this->MinRange,this->MaxRange,this->Default,
                          &local_68,(uint)(this->Falloff).Value);
      return (FFieldNodeBase *)pFVar6;
    }
    if (*(UBoxFalloff **)pFVar7 == this) {
      local_res8[0] = 0;
      bVar3 = `UBoxFalloff::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar3) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146330cc0;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// SetBoxFalloff @ 146333b20

UBoxFalloff * __thiscall
UBoxFalloff::SetBoxFalloff
          (UBoxFalloff *this,float param_1,float param_2,float param_3,float param_4,
          TTransform<double> *param_5,EFieldFalloffType param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  this->Default = param_4;
  this->Magnitude = param_1;
  dVar1 = (param_5->Rotation).XY.m128d_f64[1];
  dVar2 = (param_5->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_5->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_5->Translation).XY.m128d_f64[0];
  dVar4 = (param_5->Translation).XY.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_5->Translation).ZW.m128d_f64[0];
  dVar3 = (param_5->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = dVar1;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar4;
  dVar1 = (param_5->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_5->Scale3D).XY.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_5->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_5->Scale3D).ZW.m128d_f64[1];
  (this->Falloff).Value = (undefined1)param_6;
  (this->Transform).Scale3D.XY.m128d_f64[0] = dVar1;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
  this->MinRange = param_2;
  this->MaxRange = param_3;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  return this;
}

// StaticRegisterNativesUBoxFalloff @ 1463340b0

void __cdecl UBoxFalloff::StaticRegisterNativesUBoxFalloff(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UBoxFalloff_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetBoxFalloff @ 146335e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UBoxFalloff::execSetBoxFalloff(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [4];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a4 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a0 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_9c = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_9c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_9c);
  }
  local_98[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
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
  local_a8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x20 = local_a4;
  *(undefined4 *)&param_1[4].field_0x24 = local_a0;
  *(undefined4 *)(param_1 + 5) = local_9c;
  *(undefined8 *)&param_1[5].field_0x8 = local_88._0_8_;
  *(undefined8 *)&param_1[5].field_0x10 = local_88._8_8_;
  param_1[7].field_0x18 = local_a8[0];
  *(undefined4 *)&param_1[5].field_0x4 = local_98[0];
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

// operator() @ 1504e9a40

bool __thiscall `UBoxFalloff::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983613>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983613>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

