// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 8

// StaticClass @ 14cefe100

UClass * __cdecl URootMotionModifier_Scale::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_Scale",
               &Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_Scale,400,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier_Scale>,
               InternalVTableHelperCtorCaller<URootMotionModifier_Scale>,local_res8,
               URootMotionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton;
}

// URootMotionModifier_Scale @ 14cf052d0

URootMotionModifier_Scale * __thiscall
URootMotionModifier_Scale::URootMotionModifier_Scale
          (URootMotionModifier_Scale *this,FVTableHelper *param_1)

{
  URootMotionModifier::URootMotionModifier((URootMotionModifier *)this,param_1);
  *(undefined ***)this = &___7URootMotionModifier_Scale__6B_;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  return this;
}

// ~URootMotionModifier_Scale @ 14cf05b40

void __thiscall
URootMotionModifier_Scale::~URootMotionModifier_Scale(URootMotionModifier_Scale *this)

{
  *(undefined ***)this = &___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x150);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x138);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x120);
  UObject::~UObject((UObject *)this);
  return;
}

// AddRootMotionModifierScale @ 14cf07ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URootMotionModifier_Scale * __cdecl
URootMotionModifier_Scale::AddRootMotionModifierScale
          (UMotionWarpingComponent *param_1,UAnimSequenceBase *param_2,float param_3,float param_4,
          TVector<double> *param_5)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  URootMotionModifier_Scale *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_f8 [32];
  UAnimSequenceBase *local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (param_1 == (UMotionWarpingComponent *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3105938379292803730>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier.cpp"
                       ,0x292,"InMotionWarpingComp");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (URootMotionModifier_Scale *)(*pcVar2)();
      return pUVar5;
    }
    pUVar5 = (URootMotionModifier_Scale *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._8_8_ = param_1;
    pUVar5 = (URootMotionModifier_Scale *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar7 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    local_c8[0] = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UAnimSequenceBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar5->field_0x28,(FObjectPtr)local_c8);
    *(float *)&pUVar5->field_0x30 = param_3;
    *(float *)&pUVar5->field_0x34 = param_4;
    dVar3 = (param_5->field0_0x0)._s_0.Y;
    dVar1 = (param_5->field0_0x0)._s_0.Z;
    (pUVar5->Scale).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
    (pUVar5->Scale).field0_0x0._s_0.Y = dVar3;
    (pUVar5->Scale).field0_0x0._s_0.Z = dVar1;
    UMotionWarpingComponent::AddModifier(param_1,(URootMotionModifier *)pUVar5);
  }
  return pUVar5;
}

// GetPrivateStaticClass @ 14cf10c80

UClass * __cdecl URootMotionModifier_Scale::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_Scale",
               &Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_Scale,400,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier_Scale>,
               InternalVTableHelperCtorCaller<URootMotionModifier_Scale>,local_res8,
               URootMotionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton;
}

// ProcessRootMotion @ 14cf188e0

TTransform<double> * __thiscall
URootMotionModifier_Scale::ProcessRootMotion
          (URootMotionModifier_Scale *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,float param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).XY.m128d_f64[0];
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
  dVar3 = (param_1->Translation).ZW.m128d_f64[0];
  dVar5 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar6 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_1->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  dVar6 = (this->Scale).field0_0x0._s_0.X;
  dVar3 = (this->Scale).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar7;
  dVar1 = (this->Scale).field0_0x0._s_0.Z;
  dVar3 = dVar3 * (__return_storage_ptr__->Translation).XY.m128d_f64[1];
  dVar5 = (__return_storage_ptr__->Translation).ZW.m128d_f64[1] * 0.0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar6 * (__return_storage_ptr__->Translation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar2;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar1 * (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar4;
  return __return_storage_ptr__;
}

// StaticRegisterNativesURootMotionModifier_Scale @ 14cf1bfa0

void __cdecl URootMotionModifier_Scale::StaticRegisterNativesURootMotionModifier_Scale(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_URootMotionModifier_Scale_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddRootMotionModifierScale @ 14cf20ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
URootMotionModifier_Scale::execAddRootMotionModifierScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  UObject *pUVar5;
  UMotionWarpingComponent *this;
  bool bVar6;
  UClass *pUVar7;
  URootMotionModifier *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_158 [32];
  float local_128;
  float local_124;
  UObject *local_120;
  UMotionWarpingComponent *local_118;
  UObject *local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pUVar8 = (URootMotionModifier *)0x0;
  local_118 = (UMotionWarpingComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_120 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_124 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  local_128 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  this = local_118;
  pUVar5 = local_120;
  fVar4 = local_124;
  fVar3 = local_128;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_118 == (UMotionWarpingComponent *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3105938379292803730>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier.cpp"
                       ,0x292,"InMotionWarpingComp");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)local_118,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_e8,pUVar7);
    local_e8._8_8_ = this;
    pUVar8 = (URootMotionModifier *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
    if (local_e8._64_8_ != 0) {
      plVar9 = (longlong *)(local_e8 + 0x50);
      if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_e8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    local_110 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&(pUVar8->Animation).WeakPtr,(FObjectPtr)&local_110);
    pUVar8[1]._padding_ = local_108;
    pUVar8[1]._padding_ = lStack_100;
    pUVar8->StartTime = fVar4;
    pUVar8->EndTime = fVar3;
    pUVar8[1]._padding_ = local_f8;
    UMotionWarpingComponent::AddModifier(this,pUVar8);
  }
  *(URootMotionModifier **)param_3 = pUVar8;
  return;
}

