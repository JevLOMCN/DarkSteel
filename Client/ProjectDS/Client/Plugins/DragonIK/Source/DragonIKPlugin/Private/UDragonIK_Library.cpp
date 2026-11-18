// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 56

// StaticClass @ 14d2aecd0

UClass * __cdecl UDragonIK_Library::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIK_Library.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIK_Library",
               &Z_Registration_Info_UClass_UDragonIK_Library.InnerSingleton,
               StaticRegisterNativesUDragonIK_Library,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDragonIK_Library>,
               InternalVTableHelperCtorCaller<UDragonIK_Library>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIK_Library.InnerSingleton;
}

// UDragonIK_Library @ 14d2b0910

UDragonIK_Library * __thiscall
UDragonIK_Library::UDragonIK_Library(UDragonIK_Library *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Lock_Forward_Axis = true;
  this->_padding_ = (longlong)&___7UDragonIK_Library__6B_;
  return this;
}

// UDragonIK_Library @ 14d2b0940

UDragonIK_Library * __thiscall
UDragonIK_Library::UDragonIK_Library(UDragonIK_Library *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Lock_Forward_Axis = true;
  this->_padding_ = (longlong)&___7UDragonIK_Library__6B_;
  return this;
}

// ~UDragonIK_Library @ 14d2b0a60

void __thiscall UDragonIK_Library::~UDragonIK_Library(UDragonIK_Library *this)

{
  this->_padding_ = (longlong)&___7UDragonIK_Library__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d2b0da0

UClass * __cdecl UDragonIK_Library::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIK_Library.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIK_Library",
               &Z_Registration_Info_UClass_UDragonIK_Library.InnerSingleton,
               StaticRegisterNativesUDragonIK_Library,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDragonIK_Library>,
               InternalVTableHelperCtorCaller<UDragonIK_Library>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIK_Library.InnerSingleton;
}

// StaticRegisterNativesUDragonIK_Library @ 14d2b16d0

void __cdecl UDragonIK_Library::StaticRegisterNativesUDragonIK_Library(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDragonIK_Library_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCustomLookRotation @ 14d2b23b0

void __cdecl
UDragonIK_Library::execCustomLookRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TRotator<double> local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_68._s_0.X = local_98;
  local_68._s_0.Y = dStack_90;
  local_68._s_0.Z = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48._s_0.X = local_80;
  local_48._s_0.Y = dStack_78;
  local_48._s_0.Z = local_70;
  pTVar3 = CustomLookRotation(&local_28,(TVector<double> *)&local_48._s_0,
                              (TVector<double> *)&local_68._s_0);
  dVar2 = pTVar3->Yaw;
  *(double *)param_3 = pTVar3->Pitch;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = pTVar3->Roll;
  return;
}

// execLookAtRotation_V3 @ 14d2b2890

void __cdecl
UDragonIK_Library::execLookAtRotation_V3(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TRotator<double> local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_88._s_0.X = local_d8;
  local_88._s_0.Y = dStack_d0;
  local_88._s_0.Z = local_c8;
  local_68._s_0.X = local_c0;
  local_68._s_0.Y = dStack_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68._s_0.Z = local_b0;
  local_48._s_0.X = local_a8;
  local_48._s_0.Y = dStack_a0;
  local_48._s_0.Z = local_98;
  pTVar3 = LookAtRotation_V3(&local_28,(TVector<double> *)&local_48._s_0,
                             (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_88._s_0);
  dVar2 = pTVar3->Yaw;
  *(double *)param_3 = pTVar3->Pitch;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = pTVar3->Roll;
  return;
}

// execLookAtVector_V2 @ 14d2b2a10

void __cdecl UDragonIK_Library::execLookAtVector_V2(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TRotator<double> local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_88._s_0.X = local_d8;
  local_88._s_0.Y = dStack_d0;
  local_88._s_0.Z = local_c8;
  local_68._s_0.X = local_c0;
  local_68._s_0.Y = dStack_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68._s_0.Z = local_b0;
  local_48._s_0.X = local_a8;
  local_48._s_0.Y = dStack_a0;
  local_48._s_0.Z = local_98;
  pTVar3 = LookAtVector_V2(&local_28,(TVector<double> *)&local_48._s_0,
                           (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_88._s_0);
  dVar2 = pTVar3->Yaw;
  *(double *)param_3 = pTVar3->Pitch;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = pTVar3->Roll;
  return;
}

// execQuatLookXatLocation @ 14d2b3910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIK_Library::execQuatLookXatLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  TTransform<double> *pTVar15;
  TTransform<double> *pTVar16;
  TVector<double> *pTVar17;
  undefined1 auStack_128 [32];
  TVector<double> local_108;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_e8.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_e8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_e8.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_e8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_e8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_e8.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_e8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_e8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_e8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar16 = &local_e8;
  if (pTVar15 != (TTransform<double> *)0x0) {
    pTVar16 = pTVar15;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pTVar17 = &local_108;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar17 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar15 = QuatLookXatLocation(&local_88,pTVar16,pTVar17);
  dVar14 = (pTVar15->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar15->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar14;
  dVar14 = (pTVar15->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar15->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar14;
  dVar14 = (pTVar15->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar15->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar14;
  dVar14 = (pTVar15->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar15->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar14;
  dVar14 = (pTVar15->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar15->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar14;
  dVar14 = (pTVar15->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar15->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar14;
  return;
}

// BackwardReachLimited @ 14d335550

void __cdecl
UDragonIK_Library::BackwardReachLimited
          (TVector<double> *param_1,
          TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  int local_res8;
  double dStack_220;
  TVector<double>_u_0 local_1e8;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  TVector<double>_u_0 local_1a8;
  double local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  
  dVar12 = (param_1->field0_0x0)._s_0.X;
  dVar14 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  uVar28 = param_2->ArrayNum - 1;
  uVar26 = 0;
  if ((int)uVar28 < param_2->ArrayNum) {
    uVar26 = ~uVar28 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar4 + (longlong)(int)uVar28 * 0xa0;
  *(double *)pFVar1 = dVar12;
  *(double *)(pFVar1 + 8) = dVar14;
  *(double *)(pFVar4 + (longlong)(int)uVar28 * 0xa0 + 0x10) = dVar3;
  iVar27 = param_2->ArrayNum;
  if (0 < iVar27 + -1) {
    uVar35 = SUB84(__real_3e45798ee0000000,0);
    uVar36 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    uVar41 = (undefined4)__real_3ff0000000000000;
    uVar37 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_res8 = 1;
    lVar29 = 0;
    uVar26 = 0;
    do {
      uVar31 = ~uVar26 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar26 < iVar27) {
        uVar28 = uVar31;
      }
      if ((uVar28 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar2 = *(float *)((param_2->AllocatorInstance).Data + lVar29 + 0x50);
      uVar28 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar28 = uVar31;
      }
      if ((uVar28 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar28 = uVar26 + 1;
      uVar30 = ~uVar28 >> 0x1f;
      dVar3 = *(double *)(pFVar1 + lVar29 + 0x10);
      pFVar1 = pFVar1 + lVar29;
      dVar12 = *(double *)pFVar1;
      dVar14 = *(double *)(pFVar1 + 8);
      uVar25 = 0;
      if (local_res8 < param_2->ArrayNum) {
        uVar25 = uVar30;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auVar22._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      auVar22._0_8_ =
           CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                    UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      auVar22._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_1e8._s_0.Z = (double)*(undefined8 *)(pFVar1 + lVar29 + 0xb0);
      pFVar1 = pFVar1 + lVar29 + 0xa0;
      dVar15 = local_1e8._s_0.Z - dVar3;
      dVar13 = *(double *)(pFVar1 + 8) - dVar14;
      dVar11 = *(double *)pFVar1 - dVar12;
      dVar32 = dVar13 * dVar13 + dVar11 * dVar11 + dVar15 * dVar15;
      dVar16 = dVar11;
      dVar17 = dVar13;
      uVar21 = dVar15;
      if ((dVar32 != (double)CONCAT44(uVar37,uVar41)) &&
         (dVar16 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_),
         dVar17 = auVar22._8_8_, uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         (double)CONCAT44(uVar36,uVar35) <= dVar32)) {
        dVar32 = (double)CONCAT44(uVar37,uVar41) / SQRT(dVar32);
        dVar16 = dVar11 * dVar32;
        dVar17 = dVar13 * dVar32;
        uVar21 = dVar15 * dVar32;
      }
      dVar11 = (double)fVar2;
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      dVar12 = (dVar16 * dVar11 + dVar12) - *(double *)(pFVar1 + lVar29);
      dVar14 = (dVar17 * dVar11 + dVar14) - *(double *)(pFVar1 + lVar29 + 8);
      dVar3 = ((double)uVar21 * dVar11 + dVar3) - *(double *)(pFVar1 + lVar29 + 0x10);
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar19 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      dVar32 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      pFVar5 = (param_2->AllocatorInstance).Data;
      pFVar4 = pFVar5 + lVar29 + 0x58;
      local_188._s_0.X = (double)*(undefined8 *)pFVar4;
      local_188._s_0.Y = (double)*(undefined8 *)(pFVar4 + 8);
      local_188._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar29 + 0x68);
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)(pFVar1 + lVar29 + 0x30),(TVector<double> *)&local_1e8._s_0,
                 (TVector<double> *)&local_188._s_0);
      dVar15 = dVar3 * local_1e8._s_0.Y - dVar14 * local_1e8._s_0.Z;
      dVar11 = dVar12 * local_1e8._s_0.Z - dVar3 * local_1e8._s_0.X;
      dVar13 = dVar14 * local_1e8._s_0.X - dVar12 * local_1e8._s_0.Y;
      dVar33 = dVar11 * dVar11 + dVar15 * dVar15 + dVar13 * dVar13;
      dVar17 = dVar15;
      dVar16 = dVar11;
      uVar21 = dVar13;
      if ((dVar33 != (double)CONCAT44(uVar37,uVar41)) &&
         (dVar17 = dVar32, dVar16 = dVar19, uVar21 = uVar23, __real_3e45798ee0000000 <= dVar33)) {
        local_190 = (double)CONCAT44(uVar37,uVar41) / SQRT(dVar33);
        dVar17 = dVar15 * local_190;
        dVar16 = dVar11 * local_190;
        uVar21 = dVar13 * local_190;
      }
      dVar3 = dVar12 * local_1e8._s_0.X + dVar14 * local_1e8._s_0.Y + dVar3 * local_1e8._s_0.Z;
      dVar12 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar3) &&
         (dVar12 = dVar3, (double)CONCAT44(uVar37,uVar41) <= dVar3)) {
        dVar12 = (double)CONCAT44(uVar37,uVar41);
      }
      acos(dVar12);
      __libm_sse2_sincos_();
      dVar17 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar17;
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = uVar31;
      }
      dVar16 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar16;
      dVar3 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)uVar21;
      dVar12 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      uVar41 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
      uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
      uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
      uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
      uVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
      uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
      uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
      uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
      uVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
      uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
      uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
      uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
      pFVar1 = pFVar4 + lVar29 + 0x40;
      dVar14 = *(double *)pFVar1;
      dVar11 = *(double *)(pFVar1 + 8);
      pFVar4 = pFVar4 + lVar29 + 0x30;
      dVar13 = *(double *)pFVar4;
      dVar15 = *(double *)(pFVar4 + 8);
      uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
      uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
      uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
      uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
      uVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
      uVar38 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
      uVar39 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
      uVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = uVar31;
      }
      dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar32 = dVar17 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar12 * dVar13 +
               dVar16 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar3 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar19 = dVar17 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar12 * dVar15 +
               dVar16 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar3 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar55 = SUB84(dVar19,0);
      uVar56 = (undefined4)((ulonglong)dVar19 >> 0x20);
      dVar19 = dVar17 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar12 * dVar14 + dVar16 * dVar13 * dVar33 +
               dVar3 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar3 = dVar17 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar12 * dVar11 + dVar16 * dVar15 * dVar34 +
              dVar3 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar18._8_4_ = uVar55;
      auVar18._0_8_ = dVar32;
      auVar18._12_4_ = uVar56;
      local_148._8_4_ = uVar55;
      local_148._0_8_ = dVar32;
      local_148._12_4_ = uVar56;
      local_138._8_4_ = SUB84(dVar3,0);
      local_138._0_8_ = dVar19;
      local_138._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      if (uVar25 == 0) {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
        uVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar41 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        uVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar38 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar39 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
      }
      iVar27 = param_2->ArrayNum;
      uVar25 = 0;
      if ((int)uVar26 < iVar27) {
        uVar25 = uVar31;
      }
      if (uVar25 == 0) {
        iVar27 = 0x506106c8;
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
        uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
        uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
        uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
        uVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._0_4_;
        uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]._4_4_;
        uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._0_4_;
        uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]._4_4_;
        uVar41 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
        uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
        uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
        uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
        dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        uVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
        uVar38 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
        uVar39 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
        uVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
        uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
        uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
        uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
        uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_f8 = *(double *)(pFVar1 + lVar29 + 0x40);
      dStack_f0 = *(double *)(pFVar1 + lVar29 + 0x40 + 8);
      local_108 = *(double *)(pFVar1 + lVar29 + 0x30);
      dStack_100 = *(double *)(pFVar1 + lVar29 + 0x30 + 8);
      auVar8._8_4_ = (int)-(ulonglong)(dStack_f0 == dVar3);
      auVar8._0_8_ = -(ulonglong)(local_f8 == dVar19);
      auVar8._12_4_ = (int)(-(ulonglong)(dStack_f0 == dVar3) >> 0x20);
      iVar27 = movmskpd(iVar27,auVar8);
      dVar12 = auVar18._8_8_;
      auVar10._8_4_ = (int)-(ulonglong)(dStack_100 == dVar12);
      auVar10._0_8_ = -(ulonglong)(local_108 == dVar32);
      auVar10._12_4_ = (int)(-(ulonglong)(dStack_100 == dVar12) >> 0x20);
      uVar25 = movmskpd((int)pFVar1,auVar10);
      dVar14 = UE::Math::TQuat<double>::Identity.X;
      dVar11 = UE::Math::TQuat<double>::Identity.Y;
      dVar13 = UE::Math::TQuat<double>::Identity.Z;
      dVar15 = UE::Math::TQuat<double>::Identity.W;
      if ((iVar27 << 2 | uVar25) != 0xf) {
        dVar17 = local_f8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar20 = dStack_f0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar15 = local_108 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar16 = dStack_100 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        auVar9._8_4_ = uVar55;
        auVar9._0_8_ = dVar12;
        auVar9._12_4_ = uVar56;
        dStack_220 = auVar9._8_8_;
        dVar14 = dVar32 * dVar20 * (double)CONCAT44(uVar38,uVar37) + dVar3 * dVar15 +
                 dVar12 * dVar17 * (double)CONCAT44(uVar42,uVar41) +
                 dVar19 * dVar16 * (double)CONCAT44(uVar45,uVar35);
        dVar11 = dVar32 * dVar17 * (double)CONCAT44(uVar40,uVar39) + dVar3 * dVar16 +
                 dStack_220 * dVar20 * (double)CONCAT44(uVar44,uVar43) +
                 dVar19 * dVar15 * (double)CONCAT44(uVar47,uVar46);
        dVar13 = dVar32 * dVar16 * (double)CONCAT44(uVar49,uVar48) + dVar3 * dVar17 +
                 dVar12 * dVar15 * dVar33 + dVar19 * dVar20 * (double)CONCAT44(uVar52,uVar36);
        dVar15 = dVar32 * dVar15 * (double)CONCAT44(uVar51,uVar50) + dVar3 * dVar20 +
                 dStack_220 * dVar16 * dVar34 + dVar19 * dVar17 * (double)CONCAT44(uVar54,uVar53);
      }
      uVar35 = (undefined4)((ulonglong)dVar15 >> 0x20);
      uVar36 = (undefined4)((ulonglong)dVar11 >> 0x20);
      local_1b8._8_4_ = SUB84(dVar15,0);
      local_1b8._0_8_ = dVar13;
      local_1b8._12_4_ = uVar35;
      local_1c8._8_4_ = SUB84(dVar11,0);
      local_1c8._0_8_ = dVar14;
      local_1c8._12_4_ = uVar36;
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      local_128._8_4_ = SUB84(dVar11,0);
      local_128._0_8_ = dVar14;
      local_128._12_4_ = uVar36;
      pFVar1 = pFVar4 + lVar29 + 0x30;
      *(undefined8 *)pFVar1 = local_148._0_8_;
      *(undefined8 *)(pFVar1 + 8) = local_148._8_8_;
      pFVar4 = pFVar4 + lVar29 + 0x40;
      *(undefined8 *)pFVar4 = local_138._0_8_;
      *(undefined8 *)(pFVar4 + 8) = local_138._8_8_;
      local_118._8_4_ = SUB84(dVar15,0);
      local_118._0_8_ = dVar13;
      local_118._12_4_ = uVar35;
      SolverRotateChildren(param_2,uVar26,(TQuat<double> *)local_128);
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      uVar26 = 0;
      if ((int)uVar28 < param_2->ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_2->AllocatorInstance).Data;
      pFVar5 = pFVar6 + lVar29 + 0xb8;
      local_168._s_0.X = (double)*(undefined8 *)pFVar5;
      local_168._s_0.Y = (double)*(undefined8 *)(pFVar5 + 8);
      local_168._s_0.Z = (double)*(undefined8 *)(pFVar6 + lVar29 + 200);
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)(pFVar4 + lVar29 + 0x30),(TVector<double> *)&local_1a8._s_0,
                 (TVector<double> *)&local_168._s_0);
      dVar3 = local_1a8._s_0.X + *(double *)(pFVar1 + lVar29);
      dVar12 = local_1a8._s_0.Y + *(double *)(pFVar1 + lVar29 + 8);
      dVar14 = local_1a8._s_0.Z + *(double *)(pFVar1 + lVar29 + 0x10);
      uVar26 = 0;
      if ((int)uVar28 < param_2->ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_res8 = local_res8 + 1;
      *(double *)(pFVar1 + lVar29 + 0xa0) = dVar3;
      *(double *)(pFVar1 + lVar29 + 0xa8) = dVar12;
      *(double *)(pFVar1 + lVar29 + 0xb0) = dVar14;
      iVar27 = param_2->ArrayNum;
      uVar41 = (undefined4)__real_3ff0000000000000;
      uVar37 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar35 = SUB84(__real_3e45798ee0000000,0);
      uVar36 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      lVar29 = lVar29 + 0xa0;
      uVar26 = uVar28;
    } while ((int)uVar28 < iVar27 + -1);
  }
  return;
}

// Constructor @ 14d336f10

UDragonIK_Library * __cdecl UDragonIK_Library::Constructor(void)

{
  return (UDragonIK_Library *)0x0;
}

// CustomLookRotation @ 14d337ce0

TRotator<double> * __cdecl
UDragonIK_Library::CustomLookRotation
          (TRotator<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  TQuat<double> local_a8 [5];
  
  dVar14 = (param_2->field0_0x0)._s_0.Z;
  dVar12 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_1->field0_0x0)._s_0.X;
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  dVar16 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar11 = dVar9 * dVar9 + dVar8 * dVar8 + dVar12 * dVar12;
  uVar17 = dVar12;
  uVar20 = dVar9;
  uVar2 = dVar8;
  if ((dVar11 != __real_3ff0000000000000) &&
     (uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar11)) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    uVar17 = dVar12 * dVar11;
    uVar20 = dVar9 * dVar11;
    uVar2 = dVar8 * dVar11;
  }
  dVar12 = (double)uVar20 * dVar1 + (double)uVar2 * dVar16 + (double)uVar17 * dVar14;
  dVar16 = dVar16 - dVar12 * (double)uVar2;
  dVar1 = dVar1 - dVar12 * (double)uVar20;
  dVar14 = dVar14 - dVar12 * (double)uVar17;
  dVar12 = dVar1 * dVar1 + dVar16 * dVar16 + dVar14 * dVar14;
  uVar3 = dVar16;
  uVar4 = dVar1;
  uVar5 = dVar14;
  if ((dVar12 != __real_3ff0000000000000) &&
     (uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar12)) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    uVar3 = dVar16 * dVar12;
    uVar4 = dVar1 * dVar12;
    uVar5 = dVar14 * dVar12;
  }
  dVar14 = (double)uVar2 * (double)uVar2 + (double)uVar20 * (double)uVar20 +
           (double)uVar17 * (double)uVar17;
  uVar18 = uVar17;
  uVar6 = uVar2;
  uVar7 = uVar20;
  if ((dVar14 != __real_3ff0000000000000) &&
     (uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar14)) {
    dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
    uVar18 = (double)uVar17 * dVar14;
    uVar6 = (double)uVar2 * dVar14;
    uVar7 = (double)uVar20 * dVar14;
  }
  dVar16 = (double)uVar4 * (double)uVar18 - (double)uVar5 * (double)uVar7;
  dVar14 = (double)uVar3 * (double)uVar7 - (double)uVar4 * (double)uVar6;
  dVar12 = (double)uVar5 * (double)uVar6 - (double)uVar3 * (double)uVar18;
  fVar23 = (float)dVar16;
  fVar24 = (float)dVar14;
  fVar21 = (float)dVar12;
  fVar19 = (float)(double)uVar6;
  fVar13 = (float)(dVar16 * (double)uVar18 - dVar14 * (double)uVar6);
  fVar26 = (float)(dVar14 * (double)uVar7 - dVar12 * (double)uVar18);
  fVar10 = (float)(double)uVar18;
  fVar22 = (float)(dVar12 * (double)uVar6 - dVar16 * (double)uVar7);
  fVar15 = fVar13 + fVar23 + fVar10;
  fVar25 = (float)(double)uVar7;
  if (fVar15 <= 0.0) {
    if ((fVar23 < fVar13) || (fVar23 < fVar10)) {
      if (fVar13 <= fVar10) {
        fVar10 = SQRT(((fVar10 + __real_3f800000) - fVar23) - fVar13);
        fVar13 = __real_3f000000 / fVar10;
        local_a8[0].X = (double)((fVar24 + fVar19) * fVar13);
        local_a8[0].Y = (double)(fVar13 * (fVar22 + fVar25));
        local_a8[0].Z = (double)(fVar10 * __real_3f000000);
        local_a8[0].W = (double)((fVar21 - fVar26) * fVar13);
      }
      else {
        fVar10 = SQRT(((fVar13 + __real_3f800000) - fVar23) - fVar10);
        fVar13 = __real_3f000000 / fVar10;
        local_a8[0].X = (double)((fVar21 + fVar26) * fVar13);
        local_a8[0].Y = (double)(fVar10 * __real_3f000000);
        local_a8[0].Z = (double)(fVar13 * (fVar22 + fVar25));
        local_a8[0].W = (double)((fVar19 - fVar24) * fVar13);
      }
    }
    else {
      fVar10 = SQRT(((fVar23 + __real_3f800000) - fVar13) - fVar10);
      fVar13 = __real_3f000000 / fVar10;
      local_a8[0].X = (double)(fVar10 * __real_3f000000);
      local_a8[0].Y = (double)((fVar21 + fVar26) * fVar13);
      local_a8[0].Z = (double)((fVar24 + fVar19) * fVar13);
      local_a8[0].W = (double)((fVar22 - fVar25) * fVar13);
    }
  }
  else {
    fVar10 = SQRT(fVar15 + __real_3f800000);
    fVar13 = __real_3f000000 / fVar10;
    local_a8[0].W = (double)(fVar10 * __real_3f000000);
    local_a8[0].X = (double)((fVar22 - fVar25) * fVar13);
    local_a8[0].Y = (double)((fVar19 - fVar24) * fVar13);
    local_a8[0].Z = (double)((fVar21 - fVar26) * fVar13);
  }
  UE::Math::TRotator<double>::TRotator<double>(__return_storage_ptr__,local_a8);
  return __return_storage_ptr__;
}

// EstablishParentChildRelationship @ 14d339160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIK_Library::EstablishParentChildRelationship
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TTransform<double> *param_4)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UE::Math::TTransform<double>::GetRelativeTransform(param_3,&local_78,param_1);
  (param_3->Rotation).XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
  (param_3->Rotation).XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
  (param_3->Rotation).ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
  (param_3->Rotation).ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
  (param_3->Translation).XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
  (param_3->Translation).XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
  (param_3->Translation).ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
  (param_3->Translation).ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
  (param_3->Scale3D).XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
  (param_3->Scale3D).XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
  (param_3->Scale3D).ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
  (param_3->Scale3D).ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
  return;
}

// Evaluate_CCDIK_Modified @ 14d33bca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIK_Library::Evaluate_CCDIK_Modified
          (bool param_1,FComponentSpacePoseContext *param_2,USkeletalMeshComponent *param_3,
          FBoneReference *param_4,FBoneReference *param_5,float param_6,int param_7,bool param_8,
          bool param_9,TTransform<double> *param_10,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_11,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_12)

{
  FCSPose<FCompactPose> *this;
  double *pdVar1;
  FWeakObjectPtr *pFVar2;
  FCompactPoseBoneIndex FVar3;
  undefined4 uVar4;
  FCompactPoseBoneIndex *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined1 auVar22 [12];
  double dVar23;
  double dVar24;
  float fVar25;
  ForAnyElementType FVar26;
  ForAnyElementType FVar27;
  int iVar28;
  ForElementType<unsigned_int> FVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  bool bVar33;
  FCompactPoseBoneIndex FVar34;
  int iVar35;
  int iVar36;
  undefined4 extraout_var;
  TTransform<double> *pTVar37;
  longlong lVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  longlong lVar42;
  FScriptContainerElement *pFVar43;
  FWeakObjectPtr FVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar78;
  double dVar79;
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar84;
  undefined1 auVar83 [16];
  undefined4 uVar85;
  FCompactPoseBoneIndex FVar86;
  int iVar87;
  FCompactPoseBoneIndex FVar88;
  int iVar89;
  FCompactPoseBoneIndex FVar90;
  FCompactPoseBoneIndex FVar91;
  float fVar92;
  FCompactPoseBoneIndex FVar93;
  FCompactPoseBoneIndex FVar94;
  undefined4 uVar95;
  FCompactPoseBoneIndex FVar96;
  undefined4 uVar97;
  FCompactPoseBoneIndex FVar98;
  undefined4 uVar99;
  FCompactPoseBoneIndex FVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  FCompactPoseBoneIndex FVar103;
  undefined4 uVar104;
  FCompactPoseBoneIndex FVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  FCompactPoseBoneIndex FVar108;
  FCompactPoseBoneIndex FVar109;
  FCompactPoseBoneIndex FVar110;
  undefined4 uVar111;
  FCompactPoseBoneIndex FVar112;
  undefined4 uVar113;
  FCompactPoseBoneIndex FVar114;
  FCompactPoseBoneIndex FVar115;
  undefined4 uVar116;
  FCompactPoseBoneIndex FVar117;
  undefined4 uVar118;
  FCompactPoseBoneIndex FVar119;
  undefined4 uVar120;
  FCompactPoseBoneIndex FVar121;
  undefined4 uVar122;
  FCompactPoseBoneIndex FVar123;
  undefined4 uVar124;
  FCompactPoseBoneIndex FVar125;
  undefined4 uVar126;
  FCompactPoseBoneIndex FVar127;
  undefined4 uVar128;
  undefined4 uVar129;
  undefined4 uVar130;
  undefined4 uVar131;
  undefined4 uVar132;
  float fVar133;
  undefined1 auStackY_608 [32];
  TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> local_5b8;
  uint local_5a8;
  char local_5a4;
  undefined1 local_5a0 [8];
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> local_598;
  int local_588;
  ForElementType<unsigned_int> local_580;
  longlong local_578;
  FCompactPoseBoneIndex local_570;
  FCompactPoseBoneIndex local_56c;
  FWeakObjectPtr local_568;
  FWeakObjectPtr local_560;
  undefined1 local_558 [16];
  longlong local_548;
  undefined1 local_540 [24];
  int local_528;
  int iStack_524;
  ForElementType<unsigned_int> FStack_520;
  double local_518;
  FWeakObjectPtr local_510;
  FWeakObjectPtr FStack_508;
  FWeakObjectPtr local_500;
  FReferenceSkeleton *local_4f8;
  ForAnyElementType FStack_4f0;
  double local_4e8;
  ForAnyElementType local_4e0;
  double dStack_4d8;
  ForAnyElementType local_4d0;
  undefined8 local_4c8;
  ForAnyElementType FStack_4c0;
  TVector<double>_u_0 local_4b8;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  FCompactPoseBoneIndex local_470;
  FCompactPoseBoneIndex FStack_46c;
  FCompactPoseBoneIndex FStack_468;
  FCompactPoseBoneIndex FStack_464;
  double local_460;
  FSkelMeshRefPoseOverride *local_458;
  FSharedReferencer<1> FStack_450;
  double local_448;
  double local_440;
  double dStack_438;
  double local_430;
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_410;
  TVector<double>_u_0 local_3f8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  float local_3a8;
  undefined4 local_388;
  uint local_384;
  double local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  void *local_368;
  undefined8 local_360;
  TVector<double>_u_0 local_358;
  FSkelMeshRefPoseOverride *local_340;
  TReferenceControllerBase<1> *pTStack_338;
  double local_330;
  FCompactPoseBoneIndex local_328;
  FCompactPoseBoneIndex FStack_324;
  FCompactPoseBoneIndex FStack_320;
  FCompactPoseBoneIndex FStack_31c;
  FCompactPoseBoneIndex local_318;
  FCompactPoseBoneIndex FStack_314;
  FCompactPoseBoneIndex FStack_310;
  FCompactPoseBoneIndex FStack_30c;
  undefined4 local_308;
  FCompactPoseBoneIndex local_2e8;
  undefined4 local_2e4;
  double local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  void *local_2c8;
  undefined8 local_2c0;
  TQuat<double> local_2b8;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  undefined8 uVar67;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_608;
  this = &param_2->Pose;
  local_208.Rotation.XY.m128d_f64[0] = (param_10->Rotation).XY.m128d_f64[0];
  local_208.Rotation.XY.m128d_f64[1] = (param_10->Rotation).XY.m128d_f64[1];
  local_208.Rotation.ZW.m128d_f64[0] = (param_10->Rotation).ZW.m128d_f64[0];
  local_208.Rotation.ZW.m128d_f64[1] = (param_10->Rotation).ZW.m128d_f64[1];
  local_208.Translation.XY.m128d_f64[0] = (param_10->Translation).XY.m128d_f64[0];
  local_208.Translation.XY.m128d_f64[1] = (param_10->Translation).XY.m128d_f64[1];
  local_208.Translation.ZW.m128d_f64[0] = (param_10->Translation).ZW.m128d_f64[0];
  local_208.Translation.ZW.m128d_f64[1] = (param_10->Translation).ZW.m128d_f64[1];
  local_208.Scale3D.XY.m128d_f64[0] = (param_10->Scale3D).XY.m128d_f64[0];
  local_208.Scale3D.XY.m128d_f64[1] = (param_10->Scale3D).XY.m128d_f64[1];
  local_208.Scale3D.ZW.m128d_f64[0] = (param_10->Scale3D).ZW.m128d_f64[0];
  local_208.Scale3D.ZW.m128d_f64[1] = (param_10->Scale3D).ZW.m128d_f64[1];
  local_568 = (FWeakObjectPtr)param_12;
  local_5a4 = param_1;
  local_580 = (ForElementType<unsigned_int>)param_2;
  FVar34 = FBoneReference::GetCompactPoseIndex(param_4,(FBoneContainer *)local_540);
  FAnimationRuntime::ConvertBoneSpaceTransformToCS
            ((TTransform<double> *)(param_2->_padding_ + 0x20),this,&local_208,
             *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar34),BCS_WorldSpace);
  local_410._s_0.Z = local_208.Translation.ZW.m128d_f64[0];
  local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_410._s_0.X = local_208.Translation.XY.m128d_f64[0];
  local_410._s_0.Y = local_208.Translation.XY.m128d_f64[1];
  local_598.ArrayNum = 0;
  local_598.ArrayMax = 0;
  FBoneReference::GetCompactPoseIndex(param_4,(FBoneContainer *)&local_56c);
  FBoneReference::GetCompactPoseIndex(param_5,(FBoneContainer *)local_5a0);
  do {
    if (((local_598.AllocatorInstance.Data <= (FCompactPoseBoneIndex *)local_5a0) &&
        ((FScriptContainerElement *)local_5a0 <
         local_598.AllocatorInstance.Data + (longlong)local_598.ArrayMax * 4)) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar33)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar35 = local_598.ArrayNum;
    if (local_598.ArrayNum == local_598.ArrayMax) {
      iVar35 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_598.AllocatorInstance,&local_598.ArrayMax);
    }
    local_598.ArrayNum = iVar35 + 1;
    memmove((FCompactPoseBoneIndex *)(local_598.AllocatorInstance.Data + 4),
            local_598.AllocatorInstance.Data,(longlong)iVar35 << 2);
    *(undefined4 *)local_598.AllocatorInstance.Data = local_5a0._0_4_;
    FBoneContainer::GetParentBoneIndex
              (*(FBoneContainer **)&(param_2->Pose).Pose.field_0x10,&local_570);
    local_5a0._0_4_ = local_570;
  } while (local_570 != local_56c);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert
            (&local_598,(FCompactPoseBoneIndex *)local_5a0,0);
  iVar35 = local_598.ArrayNum;
  fVar133 = 0.0;
  uVar47 = local_598._8_8_ & 0xffffffff;
  if (param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,local_598.ArrayNum,&param_11->AllocatorInstance,&param_11->ArrayNum,
               &param_11->ArrayMax);
  }
  local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b8.ArrayNum = 0;
  local_5b8.ArrayMax = 0;
  if (iVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar47);
  }
  iVar36 = local_598.ArrayNum;
  if (0 < iVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,iVar35,&local_5b8.AllocatorInstance,0,&local_5b8.ArrayMax);
    iVar36 = local_598.ArrayNum;
  }
  if ((iVar36 < 1) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar33)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar26.Data = local_598.AllocatorInstance.Data;
  pTVar37 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (this,*(FCompactPoseBoneIndex *)local_598.AllocatorInstance.Data);
  FVar34 = *(FCompactPoseBoneIndex *)(pTVar37->Rotation).XY.m128d_f64;
  FVar93 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Rotation).XY.m128d_f64 + 4);
  FVar94 = *(FCompactPoseBoneIndex *)((pTVar37->Rotation).XY.m128d_f64 + 1);
  FVar96 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Rotation).XY.m128d_f64 + 0xc);
  FVar98 = *(FCompactPoseBoneIndex *)(pTVar37->Rotation).ZW.m128d_f64;
  FVar100 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Rotation).ZW.m128d_f64 + 4);
  FVar103 = *(FCompactPoseBoneIndex *)((pTVar37->Rotation).ZW.m128d_f64 + 1);
  FVar105 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Rotation).ZW.m128d_f64 + 0xc);
  FVar86 = *(FCompactPoseBoneIndex *)(pTVar37->Translation).XY.m128d_f64;
  FVar88 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Translation).XY.m128d_f64 + 4);
  FVar90 = *(FCompactPoseBoneIndex *)((pTVar37->Translation).XY.m128d_f64 + 1);
  FVar91 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Translation).XY.m128d_f64 + 0xc);
  FVar108 = *(FCompactPoseBoneIndex *)(pTVar37->Translation).ZW.m128d_f64;
  FVar109 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + 4);
  FVar110 = *(FCompactPoseBoneIndex *)((pTVar37->Translation).ZW.m128d_f64 + 1);
  FVar112 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + 0xc);
  FVar114 = *(FCompactPoseBoneIndex *)(pTVar37->Scale3D).XY.m128d_f64;
  FVar115 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Scale3D).XY.m128d_f64 + 4);
  FVar117 = *(FCompactPoseBoneIndex *)((pTVar37->Scale3D).XY.m128d_f64 + 1);
  FVar119 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Scale3D).XY.m128d_f64 + 0xc);
  FVar121 = *(FCompactPoseBoneIndex *)(pTVar37->Scale3D).ZW.m128d_f64;
  FVar123 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + 4);
  FVar125 = *(FCompactPoseBoneIndex *)((pTVar37->Scale3D).ZW.m128d_f64 + 1);
  FVar127 = *(FCompactPoseBoneIndex *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + 0xc);
  FCSPose<FCompactPose>::GetLocalSpaceTransform
            (this,&local_1a8,*(FCompactPoseBoneIndex *)FVar26.Data);
  if (!param_1) {
    if ((param_11->ArrayNum < 1) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar43 = (param_11->AllocatorInstance).Data;
    FVar34 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x10);
    FVar93 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x14);
    FVar94 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x18);
    FVar96 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x1c);
    FVar98 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x20);
    FVar100 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x24);
    FVar103 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x28);
    FVar105 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x2c);
    FVar86 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x30);
    FVar88 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x34);
    FVar90 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x38);
    FVar91 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x3c);
    FVar108 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x40);
    FVar109 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x44);
    FVar110 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x48);
    FVar112 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x4c);
    FVar114 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x50);
    FVar115 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x54);
    FVar117 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x58);
    FVar119 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x5c);
    FVar121 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x60);
    FVar123 = *(FCompactPoseBoneIndex *)(pFVar43 + 100);
    FVar125 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x68);
    FVar127 = *(FCompactPoseBoneIndex *)(pFVar43 + 0x6c);
  }
  FVar3 = *(FCompactPoseBoneIndex *)FVar26.Data;
  if ((param_11->ArrayNum < 1) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar33)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar79 = __real_bff0000000000000;
  pFVar5 = (FCompactPoseBoneIndex *)(param_11->AllocatorInstance).Data;
  local_460 = (double)CONCAT44(FVar109,FVar108);
  local_540._8_8_ = __real_bff0000000000000;
  *pFVar5 = FVar3;
  pFVar5[4] = FVar34;
  pFVar5[5] = FVar93;
  pFVar5[6] = FVar94;
  pFVar5[7] = FVar96;
  local_308 = 0;
  pFVar5[8] = FVar98;
  pFVar5[9] = FVar100;
  pFVar5[10] = FVar103;
  pFVar5[0xb] = FVar105;
  local_2e4 = 0;
  pFVar5[0xc] = FVar86;
  pFVar5[0xd] = FVar88;
  pFVar5[0xe] = FVar90;
  pFVar5[0xf] = FVar91;
  local_2c8 = (void *)0x0;
  pFVar5[0x10] = FVar108;
  pFVar5[0x11] = FVar109;
  pFVar5[0x12] = FVar110;
  pFVar5[0x13] = FVar112;
  local_2c0 = 0;
  pFVar5[0x14] = FVar114;
  pFVar5[0x15] = FVar115;
  pFVar5[0x16] = FVar117;
  pFVar5[0x17] = FVar119;
  pFVar5[0x18] = FVar121;
  pFVar5[0x19] = FVar123;
  pFVar5[0x1a] = FVar125;
  pFVar5[0x1b] = FVar127;
  local_448 = local_1a8.Translation.ZW.m128d_f64[0];
  local_330 = local_1a8.Translation.ZW.m128d_f64[0];
  local_2e8 = *(FCompactPoseBoneIndex *)FVar26.Data;
  local_2e0 = dVar79;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_458 = (FSkelMeshRefPoseOverride *)local_1a8.Translation.XY.m128d_f64[0];
  FStack_450.ReferenceController =
       (TReferenceControllerBase<1> *)local_1a8.Translation.XY.m128d_f64[1];
  local_340 = (FSkelMeshRefPoseOverride *)local_1a8.Translation.XY.m128d_f64[0];
  pTStack_338 = (TReferenceControllerBase<1> *)local_1a8.Translation.XY.m128d_f64[1];
  local_470 = FVar86;
  FStack_46c = FVar88;
  FStack_468 = FVar90;
  FStack_464 = FVar91;
  local_358._0_4_ = FVar86;
  local_358._4_4_ = FVar88;
  local_358._8_4_ = FVar90;
  local_358._12_4_ = FVar91;
  local_358._s_0.Z = local_460;
  local_328 = FVar34;
  FStack_324 = FVar93;
  FStack_320 = FVar94;
  FStack_31c = FVar96;
  local_318 = FVar98;
  FStack_314 = FVar100;
  FStack_310 = FVar103;
  FStack_30c = FVar105;
  if (((local_5b8.AllocatorInstance.Data <= &local_358) &&
      (&local_358 <
       (TVector<double>_u_0 *)
       (local_5b8.AllocatorInstance.Data + (longlong)local_5b8.ArrayMax * 0xa0))) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar33)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar36 = local_5b8.ArrayNum;
  if (local_5b8.ArrayNum == local_5b8.ArrayMax) {
    iVar36 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10a0,&local_5b8.AllocatorInstance,&local_5b8.ArrayMax);
  }
  local_5b8.ArrayNum = iVar36 + 1;
  FCCDIK_Modified_ChainLink::FCCDIK_Modified_ChainLink
            ((FCCDIK_Modified_ChainLink *)
             (local_5b8.AllocatorInstance.Data + (longlong)iVar36 * 0xa0),
             (FCCDIK_Modified_ChainLink *)&local_358._s_0);
  if (local_2c8 != (void *)0x0) {
    FMemory::Free(local_2c8);
  }
  FVar29 = local_580;
  fVar25 = __real_322bcc77;
  local_560.ObjectIndex = 1;
  local_560.ObjectSerialNumber = 0;
  local_5a8 = 1;
  if (1 < iVar35) {
    do {
      uVar40 = local_5a8;
      uVar39 = 0;
      if ((int)local_5a8 < local_598.ArrayNum) {
        uVar39 = ~local_5a8 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar26.Data = local_598.AllocatorInstance.Data;
      lVar45 = (longlong)(int)uVar40;
      pTVar37 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          ((FCSPose<FCompactPose> *)((longlong)FVar29 + 0x20),
                           *(FCompactPoseBoneIndex *)(local_598.AllocatorInstance.Data + lVar45 * 4)
                          );
      uVar85 = *(undefined4 *)(pTVar37->Rotation).XY.m128d_f64;
      uVar102 = *(undefined4 *)((longlong)(pTVar37->Rotation).XY.m128d_f64 + 4);
      uVar107 = *(undefined4 *)((pTVar37->Rotation).XY.m128d_f64 + 1);
      uVar111 = *(undefined4 *)((longlong)(pTVar37->Rotation).XY.m128d_f64 + 0xc);
      uVar113 = *(undefined4 *)(pTVar37->Rotation).ZW.m128d_f64;
      uVar116 = *(undefined4 *)((longlong)(pTVar37->Rotation).ZW.m128d_f64 + 4);
      uVar118 = *(undefined4 *)((pTVar37->Rotation).ZW.m128d_f64 + 1);
      uVar120 = *(undefined4 *)((longlong)(pTVar37->Rotation).ZW.m128d_f64 + 0xc);
      iVar36 = *(int *)(pTVar37->Translation).XY.m128d_f64;
      iVar87 = *(int *)((longlong)(pTVar37->Translation).XY.m128d_f64 + 4);
      uVar95 = *(undefined4 *)((pTVar37->Translation).XY.m128d_f64 + 1);
      uVar97 = *(undefined4 *)((longlong)(pTVar37->Translation).XY.m128d_f64 + 0xc);
      uVar99 = *(undefined4 *)(pTVar37->Translation).ZW.m128d_f64;
      uVar101 = *(undefined4 *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + 4);
      uVar104 = *(undefined4 *)((pTVar37->Translation).ZW.m128d_f64 + 1);
      uVar106 = *(undefined4 *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + 0xc);
      uVar122 = *(undefined4 *)(pTVar37->Scale3D).XY.m128d_f64;
      uVar124 = *(undefined4 *)((longlong)(pTVar37->Scale3D).XY.m128d_f64 + 4);
      uVar126 = *(undefined4 *)((pTVar37->Scale3D).XY.m128d_f64 + 1);
      uVar128 = *(undefined4 *)((longlong)(pTVar37->Scale3D).XY.m128d_f64 + 0xc);
      uVar129 = *(undefined4 *)(pTVar37->Scale3D).ZW.m128d_f64;
      uVar130 = *(undefined4 *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + 4);
      uVar131 = *(undefined4 *)((pTVar37->Scale3D).ZW.m128d_f64 + 1);
      uVar132 = *(undefined4 *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + 0xc);
      FCSPose<FCompactPose>::GetLocalSpaceTransform
                ((FCSPose<FCompactPose> *)((longlong)FVar29 + 0x20),&local_148,
                 *(FCompactPoseBoneIndex *)(FVar26.Data + lVar45 * 4));
      uVar67 = extraout_XMM0._8_8_;
      if (local_5a4 == '\0') {
        lVar42 = (longlong)(int)local_5a8;
        uVar40 = 0;
        if ((int)local_5a8 < param_11->ArrayNum) {
          uVar40 = ~local_5a8 >> 0x1f;
        }
        if (uVar40 == 0) {
          bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar67 = extraout_XMM0_00._8_8_;
          if (bVar33) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar6 = (param_11->AllocatorInstance).Data;
        lVar42 = lVar42 * 0x70;
        pFVar43 = pFVar6 + lVar42 + 0x10;
        uVar85 = *(undefined4 *)pFVar43;
        uVar102 = *(undefined4 *)(pFVar43 + 4);
        uVar107 = *(undefined4 *)(pFVar43 + 8);
        uVar111 = *(undefined4 *)(pFVar43 + 0xc);
        pFVar43 = pFVar6 + lVar42 + 0x20;
        uVar113 = *(undefined4 *)pFVar43;
        uVar116 = *(undefined4 *)(pFVar43 + 4);
        uVar118 = *(undefined4 *)(pFVar43 + 8);
        uVar120 = *(undefined4 *)(pFVar43 + 0xc);
        pFVar43 = pFVar6 + lVar42 + 0x30;
        iVar36 = *(int *)pFVar43;
        iVar87 = *(int *)(pFVar43 + 4);
        uVar95 = *(undefined4 *)(pFVar43 + 8);
        uVar97 = *(undefined4 *)(pFVar43 + 0xc);
        pFVar43 = pFVar6 + lVar42 + 0x40;
        uVar99 = *(undefined4 *)pFVar43;
        uVar101 = *(undefined4 *)(pFVar43 + 4);
        uVar104 = *(undefined4 *)(pFVar43 + 8);
        uVar106 = *(undefined4 *)(pFVar43 + 0xc);
        pFVar43 = pFVar6 + lVar42 + 0x50;
        uVar122 = *(undefined4 *)pFVar43;
        uVar124 = *(undefined4 *)(pFVar43 + 4);
        uVar126 = *(undefined4 *)(pFVar43 + 8);
        uVar128 = *(undefined4 *)(pFVar43 + 0xc);
        pFVar6 = pFVar6 + lVar42 + 0x60;
        uVar129 = *(undefined4 *)pFVar6;
        uVar130 = *(undefined4 *)(pFVar6 + 4);
        uVar131 = *(undefined4 *)(pFVar6 + 8);
        uVar132 = *(undefined4 *)(pFVar6 + 0xc);
      }
      lVar42 = (longlong)(int)local_5a8;
      uVar4 = *(undefined4 *)(FVar26.Data + lVar45 * 4);
      local_518 = (double)CONCAT44(uVar101,uVar99);
      uVar40 = 0;
      if ((int)local_5a8 < param_11->ArrayNum) {
        uVar40 = ~local_5a8 >> 0x1f;
      }
      local_528 = iVar36;
      iStack_524 = iVar87;
      FStack_520._0_4_ = uVar95;
      FStack_520._4_4_ = uVar97;
      if (uVar40 == 0) {
        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar67 = extraout_XMM0_01._8_8_;
        if (bVar33) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = (param_11->AllocatorInstance).Data;
      lVar42 = lVar42 * 0x70;
      *(undefined4 *)(pFVar6 + lVar42) = uVar4;
      pFVar43 = pFVar6 + lVar42 + 0x10;
      *(undefined4 *)pFVar43 = uVar85;
      *(undefined4 *)(pFVar43 + 4) = uVar102;
      *(undefined4 *)(pFVar43 + 8) = uVar107;
      *(undefined4 *)(pFVar43 + 0xc) = uVar111;
      pFVar43 = pFVar6 + lVar42 + 0x20;
      *(undefined4 *)pFVar43 = uVar113;
      *(undefined4 *)(pFVar43 + 4) = uVar116;
      *(undefined4 *)(pFVar43 + 8) = uVar118;
      *(undefined4 *)(pFVar43 + 0xc) = uVar120;
      pFVar43 = pFVar6 + lVar42 + 0x30;
      *(int *)pFVar43 = iVar36;
      *(int *)(pFVar43 + 4) = iVar87;
      *(undefined4 *)(pFVar43 + 8) = uVar95;
      *(undefined4 *)(pFVar43 + 0xc) = uVar97;
      pFVar43 = pFVar6 + lVar42 + 0x40;
      *(undefined4 *)pFVar43 = uVar99;
      *(undefined4 *)(pFVar43 + 4) = uVar101;
      *(undefined4 *)(pFVar43 + 8) = uVar104;
      *(undefined4 *)(pFVar43 + 0xc) = uVar106;
      pFVar43 = pFVar6 + lVar42 + 0x50;
      *(undefined4 *)pFVar43 = uVar122;
      *(undefined4 *)(pFVar43 + 4) = uVar124;
      *(undefined4 *)(pFVar43 + 8) = uVar126;
      *(undefined4 *)(pFVar43 + 0xc) = uVar128;
      pFVar6 = pFVar6 + lVar42 + 0x60;
      *(undefined4 *)pFVar6 = uVar129;
      *(undefined4 *)(pFVar6 + 4) = uVar130;
      *(undefined4 *)(pFVar6 + 8) = uVar131;
      *(undefined4 *)(pFVar6 + 0xc) = uVar132;
      uVar39 = local_5a8 - 1;
      uVar40 = 0;
      if ((int)uVar39 < param_11->ArrayNum) {
        uVar40 = ~uVar39 >> 0x1f;
      }
      if (uVar40 == 0) {
        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar67 = extraout_XMM0_02._8_8_;
        if (bVar33) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      auVar22._4_8_ = uVar67;
      auVar22._0_4_ = iVar87;
      auVar58._0_8_ = auVar22._0_8_ << 0x20;
      auVar58._8_4_ = uVar95;
      auVar58._12_4_ = uVar97;
      pFVar6 = (param_11->AllocatorInstance).Data;
      pFVar43 = pFVar6 + (longlong)(int)uVar39 * 0x70 + 0x30;
      local_298 = *(double *)pFVar43;
      dStack_290 = *(double *)(pFVar43 + 8);
      local_288 = *(double *)(pFVar6 + (longlong)(int)uVar39 * 0x70 + 0x40);
      dVar68 = local_298 - (double)CONCAT44(iVar87,iVar36);
      dVar78 = dStack_290 - auVar58._8_8_;
      fVar92 = (float)SQRT(dVar78 * dVar78 + dVar68 * dVar68 +
                           (local_288 - local_518) * (local_288 - local_518));
      if (fVar92 <= fVar25) {
        uVar39 = local_5b8.ArrayNum - 1;
        uVar40 = 0;
        if ((int)uVar39 < local_5b8.ArrayNum) {
          uVar40 = ~uVar39 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar43 = local_5b8.AllocatorInstance.Data + (longlong)(int)uVar39 * 0xa0 + 0x90;
                    /* WARNING: Load size is inaccurate */
        if (((*pFVar43 <= (FScriptContainerElement *)&local_5a8) &&
            ((FScriptContainerElement *)&local_5a8 <
             *pFVar43 + (longlong)*(int *)(pFVar43 + 0xc) * 4)) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar33)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar36 = *(int *)(pFVar43 + 8);
        if (iVar36 == *(int *)(pFVar43 + 0xc)) {
          iVar36 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar43,(int *)(pFVar43 + 0xc));
        }
        *(int *)(pFVar43 + 8) = iVar36 + 1;
                    /* WARNING: Load size is inaccurate */
        *(uint *)(*pFVar43 + (longlong)iVar36 * 4) = local_5a8;
      }
      else {
        local_430 = local_148.Translation.ZW.m128d_f64[0];
        local_3d0 = local_148.Translation.ZW.m128d_f64[0];
        local_388 = *(undefined4 *)(FVar26.Data + lVar45 * 4);
        local_384 = local_5a8;
        local_3f8._s_0.Z = local_518;
        local_380 = dVar79;
        local_378 = 0;
        uStack_370 = 0;
        local_368 = (void *)0x0;
        local_360 = 0;
        local_440 = local_148.Translation.XY.m128d_f64[0];
        dStack_438 = local_148.Translation.XY.m128d_f64[1];
        local_3e0 = local_148.Translation.XY.m128d_f64[0];
        dStack_3d8 = local_148.Translation.XY.m128d_f64[1];
        local_3f8._0_4_ = iVar36;
        local_3f8._4_4_ = iVar87;
        local_3f8._8_4_ = uVar95;
        local_3f8._12_4_ = uVar97;
        local_3c8 = uVar85;
        uStack_3c4 = uVar102;
        uStack_3c0 = uVar107;
        uStack_3bc = uVar111;
        local_3b8 = uVar113;
        uStack_3b4 = uVar116;
        uStack_3b0 = uVar118;
        uStack_3ac = uVar120;
        local_3a8 = fVar92;
        if (((local_5b8.AllocatorInstance.Data <= &local_3f8) &&
            (&local_3f8 <
             (TVector<double>_u_0 *)
             (local_5b8.AllocatorInstance.Data + (longlong)local_5b8.ArrayMax * 0xa0))) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar33)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar36 = local_5b8.ArrayNum;
        if (local_5b8.ArrayNum == local_5b8.ArrayMax) {
          iVar36 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10a0,&local_5b8.AllocatorInstance,&local_5b8.ArrayMax);
        }
        local_5b8.ArrayNum = iVar36 + 1;
        FCCDIK_Modified_ChainLink::FCCDIK_Modified_ChainLink
                  ((FCCDIK_Modified_ChainLink *)
                   (local_5b8.AllocatorInstance.Data + (longlong)iVar36 * 0xa0),
                   (FCCDIK_Modified_ChainLink *)&local_3f8._s_0);
        if (local_368 != (void *)0x0) {
          FMemory::Free(local_368);
        }
        fVar133 = fVar133 + fVar92;
      }
      local_5a8 = local_5a8 + 1;
    } while ((int)local_5a8 < iVar35);
  }
  uVar40 = 0;
  if (0 < local_5b8.ArrayNum + -1) {
    lVar42 = 0;
    lVar45 = 0;
    do {
      uVar39 = 0;
      if ((int)uVar40 < param_11->ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_11->AllocatorInstance).Data;
      pFVar43 = pFVar6 + lVar45 + 0x10;
      pFVar6 = pFVar6 + lVar45 + 0x20;
      local_2b8.X = *(double *)pFVar43 *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_2b8.Y = *(double *)(pFVar43 + 8) *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar39 = 0;
      if ((int)(uVar40 + 1) < param_11->ArrayNum) {
        uVar39 = ~(uVar40 + 1) >> 0x1f;
      }
      local_2b8.Z = *(double *)pFVar6 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
      ;
      local_2b8.W = *(double *)(pFVar6 + 8) *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_11->AllocatorInstance).Data;
                    /* WARNING: Load size is inaccurate */
      pFVar43 = pFVar6 + lVar45 + 0xa0;
      local_4e0.Data = *pFVar43;
      dStack_4d8 = *(double *)(pFVar43 + 8);
                    /* WARNING: Load size is inaccurate */
      local_4d0.Data = pFVar6[lVar45 + 0xb0];
      uVar39 = 0;
      if ((int)uVar40 < param_11->ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_11->AllocatorInstance).Data;
      pFVar43 = pFVar6 + lVar45 + 0x30;
      local_220 = *(double *)pFVar43;
      dStack_218 = *(double *)(pFVar43 + 8);
      local_210 = *(double *)(pFVar6 + lVar45 + 0x40);
      local_4b8._s_0.X = (double)local_4e0.Data - local_220;
      local_4b8._s_0.Y = dStack_4d8 - dStack_218;
      local_4b8._s_0.Z = (double)local_4d0.Data - local_210;
      UE::Math::TQuat<double>::RotateVector
                (&local_2b8,(TVector<double> *)&local_428._s_0,(TVector<double> *)&local_4b8._s_0);
      uVar20 = local_428._s_0.Z;
      uVar17 = local_428._s_0.Y;
      uVar67 = local_428._s_0.X;
      uVar39 = 0;
      if ((int)uVar40 < local_5b8.ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar40 = uVar40 + 1;
      lVar45 = lVar45 + 0x70;
      *(undefined8 *)(local_5b8.AllocatorInstance.Data + lVar42 + 0x58) = uVar67;
      *(undefined8 *)(local_5b8.AllocatorInstance.Data + lVar42 + 0x58 + 8) = uVar17;
      *(undefined8 *)(local_5b8.AllocatorInstance.Data + lVar42 + 0x68) = uVar20;
      lVar42 = lVar42 + 0xa0;
    } while ((int)uVar40 < local_5b8.ArrayNum + -1);
  }
  iVar35 = local_5b8.ArrayNum;
  lVar45 = (longlong)local_5b8.ArrayNum;
  local_588 = local_5b8.ArrayNum;
  bVar33 = Solve_Modified_CCDIK
                     (&local_5b8,(TVector<double> *)&local_410._s_0,fVar133,param_6,param_7);
  if (bVar33) {
    local_5a0._4_4_ = 0;
    local_578 = lVar45;
    if (0 < iVar35) {
      lVar45 = 0;
      do {
        uVar40 = 0;
        if ((int)local_5a0._4_4_ < local_5b8.ArrayNum) {
          uVar40 = (uint)~local_5a0._4_4_ >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar26.Data = local_5b8.AllocatorInstance.Data;
        uVar40 = *(uint *)(local_5b8.AllocatorInstance.Data + lVar45 + 0x74);
        uVar39 = 0;
        if ((int)uVar40 < param_11->ArrayNum) {
          uVar39 = ~uVar40 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_11->AllocatorInstance).Data;
        lVar42 = 0;
        uVar17 = *(undefined8 *)(FVar26.Data + lVar45 + 8);
        uVar67 = *(undefined8 *)(FVar26.Data + lVar45 + 0x10);
        uVar39 = 0;
        pFVar43 = pFVar6 + (longlong)(int)uVar40 * 0x70 + 0x30;
        *(undefined8 *)pFVar43 = *(undefined8 *)(FVar26.Data + lVar45);
        *(undefined8 *)(pFVar43 + 8) = uVar17;
        pFVar6 = pFVar6 + (longlong)(int)uVar40 * 0x70 + 0x40;
        *(undefined8 *)pFVar6 = uVar67;
        *(undefined8 *)(pFVar6 + 8) = 0;
        iVar35 = *(int *)(FVar26.Data + lVar45 + 0x98);
        if (0 < (longlong)iVar35) {
          do {
            uVar40 = 0;
            if ((int)uVar39 < *(int *)(FVar26.Data + lVar45 + 0x98)) {
              uVar40 = ~uVar39 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar40 = *(uint *)(*(longlong *)(FVar26.Data + lVar45 + 0x90) + lVar42 * 4);
            uVar41 = 0;
            if ((int)uVar40 < param_11->ArrayNum) {
              uVar41 = ~uVar40 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (param_11->AllocatorInstance).Data;
            uVar39 = uVar39 + 1;
            uVar17 = *(undefined8 *)(FVar26.Data + lVar45 + 8);
            lVar42 = lVar42 + 1;
            uVar67 = *(undefined8 *)(FVar26.Data + lVar45 + 0x10);
            pFVar43 = pFVar6 + (longlong)(int)uVar40 * 0x70 + 0x30;
            *(undefined8 *)pFVar43 = *(undefined8 *)(FVar26.Data + lVar45);
            *(undefined8 *)(pFVar43 + 8) = uVar17;
            pFVar6 = pFVar6 + (longlong)(int)uVar40 * 0x70 + 0x40;
            *(undefined8 *)pFVar6 = uVar67;
            *(undefined8 *)(pFVar6 + 8) = 0;
          } while (lVar42 < iVar35);
        }
        lVar45 = lVar45 + 0xa0;
        local_5a0._4_4_ = local_5a0._4_4_ + 1;
        local_578 = local_578 + -1;
      } while (local_578 != 0);
      local_578 = 0;
      iVar35 = local_588;
    }
    local_578 = CONCAT44(local_578._4_4_,iVar35 + -1);
    local_5a0._4_4_ = 0;
    if (0 < iVar35 + -1) {
      iVar87 = SUB84(__real_3ff0000000000000,0);
      iVar89 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_580 = (ForElementType<unsigned_int>)((longlong)local_580 + 0x20);
      uVar85 = SUB84(__real_3e45798ee0000000,0);
      uVar102 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      local_4c8 = __real_3ff0000000000000;
      FStack_4c0.Data = (FScriptContainerElement *)0x0;
      lVar45 = 0;
      local_548 = 0;
      local_588 = 1;
      iVar35 = iVar87;
      iVar36 = iVar89;
      do {
        lVar42 = local_548;
        iVar28 = local_588;
        uVar40 = local_5a0._4_4_;
        uVar39 = 0;
        if ((int)local_5a0._4_4_ < local_5b8.ArrayNum) {
          uVar39 = (uint)~local_5a0._4_4_ >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar33) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        FVar26.Data = local_5b8.AllocatorInstance.Data;
        uVar41 = ~(uVar40 + 1) >> 0x1f;
        uVar39 = 0;
        if (iVar28 < local_5b8.ArrayNum) {
          uVar39 = uVar41;
        }
        if ((uVar39 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar27.Data = local_5b8.AllocatorInstance.Data;
        pTVar37 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            ((FCSPose<FCompactPose> *)local_580,
                             *(FCompactPoseBoneIndex *)
                              (local_5b8.AllocatorInstance.Data + lVar45 + 0x110));
        dVar79 = (pTVar37->Translation).XY.m128d_f64[0];
        dVar68 = (pTVar37->Translation).XY.m128d_f64[1];
        auVar58 = *(undefined1 (*) [16])(pTVar37->Translation).ZW.m128d_f64;
        local_280 = dVar79;
        dStack_278 = dVar68;
        pTVar37 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            ((FCSPose<FCompactPose> *)local_580,
                             *(FCompactPoseBoneIndex *)(FVar26.Data + lVar45 + 0x70));
        uVar107 = 0;
        uVar111 = 0;
        local_268 = (pTVar37->Translation).XY.m128d_f64[0];
        dStack_260 = (pTVar37->Translation).XY.m128d_f64[1];
        local_258 = (pTVar37->Translation).ZW.m128d_f64[0];
        uVar67 = dVar79 - local_268;
        uVar17 = dVar68 - dStack_260;
        local_270 = auVar58._0_8_;
        uVar20 = local_270 - local_258;
        local_558._8_4_ = auVar58._8_4_;
        local_558._0_8_ = uVar20;
        local_558._12_4_ = auVar58._12_4_;
        dVar79 = (double)uVar17 * (double)uVar17 + (double)uVar67 * (double)uVar67 +
                 (double)uVar20 * (double)uVar20;
        if (dVar79 != (double)CONCAT44(iVar89,iVar87)) {
          uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if ((double)CONCAT44(uVar102,uVar85) <= dVar79) {
            local_480 = (double)CONCAT44(iVar36,iVar35) / SQRT(dVar79);
            uVar107 = auVar58._8_4_;
            uVar111 = auVar58._12_4_;
            uVar30 = (double)uVar67 * local_480;
            uVar31 = (double)uVar17 * local_480;
            uVar32 = (double)uVar20 * local_480;
          }
          uVar20 = uVar32;
          uVar17 = uVar31;
          uVar67 = uVar30;
          local_558._8_4_ = uVar107;
          local_558._0_8_ = uVar20;
          local_558._12_4_ = uVar111;
        }
        FVar44 = local_568;
        if (0 < *(int *)((longlong)local_568 + 8)) {
          uVar39 = 0;
          if ((int)(uVar40 + 1) < *(int *)((longlong)local_568 + 8)) {
            uVar39 = uVar41;
          }
          if ((uVar39 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar44 = local_568;
          pdVar1 = (double *)(*(longlong *)local_568 + 0xa0 + lVar42);
          local_4f8 = (FReferenceSkeleton *)*pdVar1;
          FStack_4f0.Data = (FScriptContainerElement *)pdVar1[1];
          local_4e8 = *(double *)(*(longlong *)local_568 + 0xb0 + lVar42);
          uVar39 = 0;
          if ((int)uVar40 < *(int *)((longlong)local_568 + 8)) {
            uVar39 = ~uVar40 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pdVar1 = (double *)(*(longlong *)FVar44 + 0x30 + lVar42);
          local_250 = *pdVar1;
          dStack_248 = pdVar1[1];
          local_240 = *(double *)(*(longlong *)FVar44 + 0x40 + lVar42);
          uVar67 = (double)local_4f8 - local_250;
          uVar20 = local_4e8 - local_240;
          uVar17 = (double)FStack_4f0.Data - dStack_248;
          dVar79 = (double)uVar17 * (double)uVar17 + (double)uVar67 * (double)uVar67 +
                   (double)uVar20 * (double)uVar20;
          if (dVar79 != (double)CONCAT44(iVar89,iVar87)) {
            if (dVar79 < (double)CONCAT44(uVar102,uVar85)) {
              local_558._8_8_ = 0;
              local_558._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar67 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              goto LAB_14d33cf10;
            }
            local_488 = (double)CONCAT44(iVar36,iVar35) / SQRT(dVar79);
            uVar67 = (double)uVar67 * local_488;
            uVar17 = (double)uVar17 * local_488;
            uVar20 = (double)uVar20 * local_488;
          }
          local_558._8_8_ = 0;
          local_558._0_8_ = uVar20;
        }
LAB_14d33cf10:
        dVar78 = *(double *)(FVar27.Data + lVar45 + 0xa0) - *(double *)(FVar26.Data + lVar45);
        dVar79 = *(double *)(FVar27.Data + lVar45 + 0xa8) - *(double *)(FVar26.Data + lVar45 + 8);
        dVar68 = *(double *)(FVar27.Data + lVar45 + 0xb0) - *(double *)(FVar26.Data + lVar45 + 0x10)
        ;
        local_478 = (double)CONCAT44(iVar36,iVar35) /
                    SQRT(dVar79 * dVar79 + dVar78 * dVar78 + dVar68 * dVar68);
        dVar68 = dVar68 * local_478;
        dVar79 = local_478 * dVar79;
        dVar78 = local_478 * dVar78;
        if (0 < *(int *)((longlong)FVar44 + 8)) {
          uVar39 = 0;
          if ((int)(uVar40 + 1) < param_11->ArrayNum) {
            uVar39 = ~(uVar40 + 1) >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar43 = (param_11->AllocatorInstance).Data;
          pFVar2 = (FWeakObjectPtr *)(pFVar43 + lVar42 + 0xa0);
          local_510 = *pFVar2;
          FStack_508 = pFVar2[1];
          local_500 = *(FWeakObjectPtr *)(pFVar43 + lVar42 + 0xb0);
          uVar39 = 0;
          if ((int)uVar40 < param_11->ArrayNum) {
            uVar39 = ~uVar40 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_11->AllocatorInstance).Data;
          pFVar43 = pFVar6 + lVar42 + 0x30;
          local_238 = *(double *)pFVar43;
          dStack_230 = *(double *)(pFVar43 + 8);
          local_228 = *(double *)(pFVar6 + lVar42 + 0x40);
          dVar78 = (double)local_510 - local_238;
          dVar68 = (double)local_500 - local_228;
          dVar79 = (double)FStack_508 - dStack_230;
          local_490 = (double)CONCAT44(iVar36,iVar35) /
                      SQRT(dVar79 * dVar79 + dVar78 * dVar78 + dVar68 * dVar68);
          dVar68 = local_490 * dVar68;
          dVar78 = local_490 * dVar78;
          dVar79 = local_490 * dVar79;
        }
        dVar18 = dVar68 * (double)uVar17 - dVar79 * (double)uVar20;
        dVar19 = dVar78 * (double)uVar20 - dVar68 * (double)uVar67;
        dVar21 = dVar79 * (double)uVar67 - dVar78 * (double)uVar17;
        dVar13 = dVar19 * dVar19 + dVar18 * dVar18 + dVar21 * dVar21;
        uVar20 = dVar18;
        uVar30 = dVar19;
        uVar31 = dVar21;
        if ((dVar13 != __real_3ff0000000000000) &&
           (uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           __real_3e45798ee0000000 <= dVar13)) {
          local_498 = local_4c8 / SQRT(dVar13);
          uVar20 = dVar18 * local_498;
          uVar30 = dVar19 * local_498;
          uVar31 = dVar21 * local_498;
        }
        dVar68 = dVar79 * (double)uVar17 + dVar78 * (double)uVar67 +
                 dVar68 * (double)local_558._0_8_;
        dVar79 = (double)local_540._8_8_;
        if (((double)local_540._8_8_ <= dVar68) &&
           (dVar79 = dVar68, __real_3ff0000000000000 <= dVar68)) {
          dVar79 = __real_3ff0000000000000;
        }
        acos(dVar79);
        __libm_sse2_sincos_();
        uVar39 = *(uint *)(FVar26.Data + lVar45 + 0x74);
        dVar79 = extraout_XMM0_03._0_8_;
        dVar68 = (double)uVar20 * dVar79;
        dVar78 = (double)uVar30 * dVar79;
        dVar79 = (double)uVar31 * dVar79;
        uVar41 = 0;
        if ((int)uVar39 < param_11->ArrayNum) {
          uVar41 = ~uVar39 >> 0x1f;
        }
        dVar13 = extraout_XMM0_03._8_8_;
        if ((uVar41 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar43 = (param_11->AllocatorInstance).Data;
        lVar38 = (longlong)(int)uVar39 * 0x70;
        uVar116 = extraout_XMM0_03._8_4_;
        uVar118 = extraout_XMM0_03._12_4_;
        auVar52._8_4_ = uVar116;
        auVar52._0_8_ = dVar13;
        auVar52._12_4_ = uVar118;
        uVar102 = SUB84(dVar78,0);
        uVar107 = (undefined4)((ulonglong)dVar78 >> 0x20);
        uVar46 = 0;
        uVar111 = SUB84(dVar79,0);
        uVar113 = (undefined4)((ulonglong)dVar79 >> 0x20);
        auVar69._8_4_ = uVar102;
        auVar69._0_8_ = dVar78;
        auVar69._12_4_ = uVar107;
        dVar23 = *(double *)(pFVar43 + lVar38 + 0x10);
        dVar24 = *(double *)(pFVar43 + lVar38 + 0x10 + 8);
        dVar80 = *(double *)(pFVar43 + lVar38 + 0x20);
        dVar84 = *(double *)(pFVar43 + lVar38 + 0x20 + 8);
        auVar53._8_4_ = uVar111;
        auVar53._0_8_ = dVar79;
        auVar53._12_4_ = uVar113;
        auVar70._8_4_ = uVar102;
        auVar70._0_8_ = dVar78;
        auVar70._12_4_ = uVar107;
        dVar19 = dVar68 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar13 * dVar80 +
                 dVar78 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar79 * dVar84 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar21 = dVar68 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 auVar52._8_8_ * dVar84 +
                 auVar69._8_8_ * dVar24 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 auVar53._8_8_ * dVar80 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar85 = (undefined4)((ulonglong)dVar21 >> 0x20);
        auVar54._8_4_ = uVar116;
        auVar54._0_8_ = dVar13;
        auVar54._12_4_ = uVar118;
        auVar55._8_4_ = uVar111;
        auVar55._0_8_ = dVar79;
        auVar55._12_4_ = uVar113;
        auVar71._8_4_ = SUB84(dVar21,0);
        auVar71._0_8_ = dVar19;
        auVar71._12_4_ = uVar85;
        dVar18 = dVar68 * dVar80 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar54._8_8_ * dVar24 +
                 auVar70._8_8_ * dVar84 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar55._8_8_ * dVar23 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar73._8_4_ = SUB84(dVar18,0);
        auVar73._0_8_ =
             dVar68 * dVar84 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar13 * dVar23 +
             dVar78 * dVar80 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar79 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar73._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        *(undefined1 (*) [16])(pFVar43 + lVar38 + 0x10) = auVar73;
        auVar14._8_4_ = SUB84(dVar21,0);
        auVar14._0_8_ = dVar19;
        auVar14._12_4_ = uVar85;
        *(undefined1 (*) [16])(pFVar43 + lVar38 + 0x20) = auVar14;
        dVar18 = *(double *)(pFVar43 + lVar38 + 0x10);
        dVar23 = *(double *)(pFVar43 + lVar38 + 0x10 + 8);
        auVar72._0_8_ = dVar19 * dVar19 + dVar18 * dVar18;
        auVar72._8_8_ = auVar71._8_8_ * dVar21 + dVar23 * dVar23;
        auVar56._8_4_ = SUB84(auVar72._8_8_,0);
        auVar56._0_8_ = auVar72._0_8_;
        auVar56._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
        auVar57._0_8_ = auVar56._8_8_ + auVar72._0_8_;
        auVar57._8_8_ = auVar72._0_8_ + auVar72._8_8_;
        auVar73 = sqrtpd(auVar72,auVar57);
        uVar48 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar57._0_8_);
        uVar50 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar57._8_8_);
        uVar49 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar57._0_8_);
        uVar51 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar57._8_8_);
        auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar73);
        auVar73 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar73);
        auVar59._0_8_ = uVar49 & (ulonglong)(auVar58._0_8_ * dVar18);
        uVar47 = uVar51 & (ulonglong)(auVar58._8_8_ * dVar23);
        auVar59._8_4_ = (undefined4)uVar47;
        auVar59._12_4_ = (undefined4)(uVar47 >> 0x20);
        auVar81._0_8_ = uVar48 & (ulonglong)(auVar73._0_8_ * dVar19);
        uVar47 = uVar50 & (ulonglong)(auVar73._8_8_ * dVar21);
        auVar81._8_4_ = (undefined4)uVar47;
        auVar81._12_4_ = (undefined4)(uVar47 >> 0x20);
        auVar15._4_4_ =
             ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar15._0_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar15._8_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar15._12_4_ =
             ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        uVar39 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        uVar41 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        uVar8 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        uVar9 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(pFVar43 + lVar38 + 0x10) = auVar59 | auVar15;
        auVar10._4_4_ = ~(uint)(uVar48 >> 0x20) & uVar41;
        auVar10._0_4_ = ~(uint)uVar48 & uVar39;
        auVar10._8_4_ = ~(uint)uVar50 & uVar8;
        auVar10._12_4_ = ~(uint)(uVar50 >> 0x20) & uVar9;
        *(undefined1 (*) [16])(pFVar43 + lVar38 + 0x20) = auVar81 | auVar10;
        iVar35 = *(int *)(FVar26.Data + lVar45 + 0x98);
        uVar47 = uVar46;
        if (0 < (longlong)iVar35) {
          do {
            uVar39 = (uint)uVar47;
            uVar40 = 0;
            if ((int)uVar39 < *(int *)(FVar26.Data + lVar45 + 0x98)) {
              uVar40 = ~uVar39 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar40 = *(uint *)(*(longlong *)(FVar26.Data + lVar45 + 0x90) + uVar46 * 4);
            uVar41 = 0;
            if ((int)uVar40 < param_11->ArrayNum) {
              uVar41 = ~uVar40 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar43 = (param_11->AllocatorInstance).Data;
            auVar82._8_4_ = SUB84(dVar68,0);
            auVar82._0_8_ = dVar68;
            auVar82._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
            lVar42 = (longlong)(int)uVar40 * 0x70;
            auVar60._8_4_ = uVar116;
            auVar60._0_8_ = dVar13;
            auVar60._12_4_ = uVar118;
            auVar74._8_4_ = uVar102;
            auVar74._0_8_ = dVar78;
            auVar74._12_4_ = uVar107;
            uVar46 = uVar46 + 1;
            dVar19 = *(double *)(pFVar43 + lVar42 + 0x10);
            dVar21 = *(double *)(pFVar43 + lVar42 + 0x10 + 8);
            dVar23 = *(double *)(pFVar43 + lVar42 + 0x20);
            dVar24 = *(double *)(pFVar43 + lVar42 + 0x20 + 8);
            auVar61._8_4_ = uVar111;
            auVar61._0_8_ = dVar79;
            auVar61._12_4_ = uVar113;
            auVar75._8_4_ = uVar102;
            auVar75._0_8_ = dVar78;
            auVar75._12_4_ = uVar107;
            dVar80 = dVar68 * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar13 * dVar23 +
                     dVar78 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar79 * dVar24 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar84 = auVar82._8_8_ * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     auVar60._8_8_ * dVar24 +
                     auVar74._8_8_ * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     auVar61._8_8_ * dVar23 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar62._8_4_ = uVar116;
            auVar62._0_8_ = dVar13;
            auVar62._12_4_ = uVar118;
            auVar63._8_4_ = uVar111;
            auVar63._0_8_ = dVar79;
            auVar63._12_4_ = uVar113;
            auVar76._8_4_ = SUB84(dVar84,0);
            auVar76._0_8_ = dVar80;
            auVar76._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
            dVar18 = dVar68 * dVar23 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     auVar62._8_8_ * dVar21 +
                     auVar75._8_8_ * dVar24 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     auVar63._8_8_ * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            auVar11._8_4_ = SUB84(dVar18,0);
            auVar11._0_8_ =
                 dVar68 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar13 * dVar19 +
                 dVar78 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar79 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            auVar11._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            *(undefined1 (*) [16])(pFVar43 + lVar42 + 0x10) = auVar11;
            *(double *)(pFVar43 + lVar42 + 0x20) = dVar80;
            *(double *)(pFVar43 + lVar42 + 0x20 + 8) = dVar84;
            dVar18 = *(double *)(pFVar43 + lVar42 + 0x10);
            dVar19 = *(double *)(pFVar43 + lVar42 + 0x10 + 8);
            auVar77._0_8_ = dVar80 * dVar80 + dVar18 * dVar18;
            auVar77._8_8_ = auVar76._8_8_ * dVar84 + dVar19 * dVar19;
            auVar64._8_4_ = SUB84(auVar77._8_8_,0);
            auVar64._0_8_ = auVar77._0_8_;
            auVar64._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
            auVar65._0_8_ = auVar64._8_8_ + auVar77._0_8_;
            auVar65._8_8_ = auVar77._0_8_ + auVar77._8_8_;
            auVar73 = sqrtpd(auVar77,auVar65);
            uVar48 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar65._0_8_);
            uVar50 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar65._8_8_);
            uVar49 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar65._0_8_);
            uVar51 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar65._8_8_);
            auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar73)
            ;
            auVar73 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar73)
            ;
            auVar66._0_8_ = uVar49 & (ulonglong)(auVar58._0_8_ * dVar18);
            uVar47 = uVar51 & (ulonglong)(auVar58._8_8_ * dVar19);
            auVar66._8_4_ = (undefined4)uVar47;
            auVar66._12_4_ = (undefined4)(uVar47 >> 0x20);
            auVar83._0_8_ = uVar48 & (ulonglong)(auVar73._0_8_ * dVar80);
            uVar47 = uVar50 & (ulonglong)(auVar73._8_8_ * dVar84);
            auVar83._8_4_ = (undefined4)uVar47;
            auVar83._12_4_ = (undefined4)(uVar47 >> 0x20);
            auVar16._4_4_ =
                 ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar16._0_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
            auVar16._8_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
            auVar16._12_4_ =
                 ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            auVar12._4_4_ =
                 ~(uint)(uVar48 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            auVar12._0_4_ = ~(uint)uVar48 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            auVar12._8_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            auVar12._12_4_ =
                 ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            *(undefined1 (*) [16])(pFVar43 + lVar42 + 0x10) = auVar66 | auVar16;
            *(undefined1 (*) [16])(pFVar43 + lVar42 + 0x20) = auVar83 | auVar12;
            lVar42 = local_548;
            uVar47 = (ulonglong)(uVar39 + 1);
            uVar40 = local_5a0._4_4_;
          } while ((longlong)uVar46 < (longlong)iVar35);
        }
        local_560 = (FWeakObjectPtr)((longlong)local_560 + 1);
        local_5a0._4_4_ = uVar40 + 1;
        local_548 = lVar42 + 0x70;
        lVar45 = lVar45 + 0xa0;
        iVar87 = SUB84(__real_3ff0000000000000,0);
        iVar89 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_588 = local_588 + 1;
        uVar85 = SUB84(__real_3e45798ee0000000,0);
        uVar102 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        iVar35 = (int)local_4c8;
        iVar36 = local_4c8._4_4_;
      } while ((int)local_5a0._4_4_ < (int)local_578);
    }
  }
  DestructItems<FCCDIK_Modified_ChainLink,int>
            ((FCCDIK_Modified_ChainLink *)local_5b8.AllocatorInstance.Data,local_5b8.ArrayNum);
  if ((TVector<double>_u_0 *)local_5b8.AllocatorInstance.Data != (TVector<double>_u_0 *)0x0) {
    FMemory::Free(local_5b8.AllocatorInstance.Data);
  }
  if ((FCompactPoseBoneIndex *)local_598.AllocatorInstance.Data != (FCompactPoseBoneIndex *)0x0) {
    FMemory::Free(local_598.AllocatorInstance.Data);
  }
  return;
}

// Evaluate_ConsecutiveBoneRotations @ 14d33d6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UDragonIK_Library::Evaluate_ConsecutiveBoneRotations
          (FComponentSpacePoseContext *param_1,USkeletalMeshComponent *param_2,
          TTransform<double> *param_3,
          TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *param_4,
          FRuntimeFloatCurve *param_5,FBoneReference *param_6,FBoneReference *param_7,float param_8,
          TRotator<double> *param_9,TTransform<double> *param_10,FAxis *param_11,float param_12,
          float param_13,float param_14,float param_15,float param_16,float param_17,bool param_18,
          TTransform<double> *param_19,FRuntimeFloatCurve *param_20,float param_21,bool param_22,
          bool param_23,float param_24,TTransform<double> *param_25,bool param_26,
          EInputTransformSpace_DragonIK param_27,TArray<FName,TSizedDefaultAllocator<32>_> *param_28
          ,TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_29)

{
  __m128d *p_Var1;
  double *pdVar2;
  FBoneContainer *pFVar3;
  FCompactPoseBoneIndex *pFVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [12];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  ForAnyElementType FVar25;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar26;
  FRuntimeFloatCurve *pFVar27;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar28;
  bool bVar29;
  FCompactPoseBoneIndex FVar30;
  int iVar31;
  int iVar32;
  undefined4 extraout_var;
  TTransform<double> *pTVar33;
  FRichCurve *pFVar34;
  uint uVar35;
  FWeakObjectPtr FVar36;
  FCSPose<FCompactPose> *pFVar37;
  ulonglong uVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong lVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar59;
  undefined1 extraout_XMM0 [16];
  undefined8 uVar60;
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined4 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uVar88;
  uint uVar89;
  uint uVar90;
  float fVar91;
  ForAnyElementType FVar92;
  double dVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  float fVar97;
  int iVar98;
  undefined4 uVar99;
  float fVar100;
  int iVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  int iVar107;
  int iVar108;
  undefined1 auStackY_cf8 [32];
  ForAnyElementType local_ca0;
  undefined8 local_c98;
  uint local_c90 [2];
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> local_c88;
  undefined1 local_c78 [4];
  undefined1 local_c74 [20];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_c60;
  FCompactPoseBoneIndex local_c58;
  FCompactPoseBoneIndex local_c54;
  int local_c50;
  float local_c4c;
  uint local_c48;
  FWeakObjectPtr local_c40;
  FWeakObjectPtr local_c38;
  FBoneReference local_c30;
  undefined1 local_c20 [8];
  ForAnyElementType FStack_c18;
  TTransform<double> *local_c10;
  ForAnyElementType local_c08;
  FRuntimeFloatCurve *local_c00;
  ForAnyElementType local_bf8;
  undefined1 local_bf0 [8];
  ForAnyElementType FStack_be8;
  uint local_bd8;
  uint uStack_bd4;
  uint uStack_bd0;
  uint uStack_bcc;
  FScriptContainerElement *local_bc8;
  undefined1 local_bb8 [16];
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *local_ba8;
  undefined1 local_ba0 [16];
  FSkelMeshRefPoseOverride *local_b90;
  FWeakObjectPtr local_b88;
  FWeakObjectPtr FStack_b80;
  FWeakObjectPtr local_b78;
  ForAnyElementType local_b68;
  double dStack_b60;
  ForAnyElementType local_b58;
  ForAnyElementType local_b48;
  double dStack_b40;
  undefined4 local_b38;
  int iStack_b34;
  int iStack_b30;
  int iStack_b2c;
  ForAnyElementType local_b28;
  double dStack_b20;
  undefined4 local_b18;
  undefined4 uStack_b14;
  int iStack_b10;
  int iStack_b0c;
  double local_b08;
  double dStack_b00;
  double local_af8;
  double local_af0;
  double dStack_ae8;
  double local_ae0;
  double local_ad8;
  FSkelMeshRefPoseOverride *pFStack_ad0;
  FSharedReferencer<1> local_ac8;
  undefined4 local_ac0;
  int iStack_abc;
  int iStack_ab8;
  int iStack_ab4;
  FScriptContainerElement *local_ab0;
  TRotator<double> local_aa8;
  TVector<double>_u_0 local_a88;
  TVector<double>_u_0 local_a68;
  undefined4 local_a48;
  int iStack_a44;
  int iStack_a40;
  int iStack_a3c;
  FScriptContainerElement *local_a38;
  TRotator<double> local_a28;
  TVector<double>_u_0 local_a08;
  TVector<double>_u_0 local_9e8;
  TRotator<double> local_9c8;
  undefined1 local_9a8 [16];
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  double local_978;
  double dStack_970;
  double local_968 [2];
  double local_958 [2];
  TVector<double>_u_0 local_948;
  double local_930;
  FSkelMeshRefPoseOverride *pFStack_928;
  TReferenceControllerBase<1> *local_920;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  float local_8f8;
  undefined4 local_8d8;
  uint local_8d4;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  void *local_8b8;
  undefined8 local_8b0;
  TVector<double>_u_0 local_8a8;
  double local_890;
  double dStack_888;
  double local_880;
  double local_878;
  double dStack_870;
  double local_868;
  double dStack_860;
  undefined4 local_858;
  FCompactPoseBoneIndex local_838;
  undefined4 local_834;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 uStack_820;
  void *local_818;
  undefined8 local_810;
  undefined1 local_808 [16];
  undefined1 local_7f8 [16];
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  double dStack_7b0;
  TVector<double>_u_0 local_7a8;
  double dStack_790;
  TVector<double>_u_0 local_788;
  double dStack_770;
  TQuat<double> local_768;
  TQuat<double> local_748;
  double local_728;
  double dStack_720;
  double local_718;
  double local_710;
  double dStack_708;
  double local_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  FScriptContainerElement *local_6e0;
  double dStack_6d8;
  double local_6d0;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  TRotator<double> local_6b0;
  undefined8 local_698;
  undefined8 uStack_690;
  double local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  double local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  double local_658;
  double local_650;
  double dStack_648;
  double local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  double local_628;
  FScriptContainerElement *local_620;
  double dStack_618;
  FScriptContainerElement *local_610;
  TTransform<double> local_608;
  TTransform<double> local_5a8;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  TQuat<double> local_4e8;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  FCompactPoseBoneIndex local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined4 local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_cf8;
  pFVar3 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
  local_bf8.Data = (FScriptContainerElement *)param_20;
  local_c00 = param_5;
  local_c38 = (FWeakObjectPtr)param_11;
  local_c08.Data = (FScriptContainerElement *)param_9;
  local_c40 = (FWeakObjectPtr)param_19;
  local_c20 = *(undefined1 (*) [8])&param_6->BoneName;
  FStack_c18.Data = *(FScriptContainerElement **)&param_6->field_0x8;
  local_c60 = param_28;
  local_c10 = param_25;
  if (1 < param_28->ArrayNum) {
    local_c20 = *(undefined1 (*) [8])(param_28->AllocatorInstance).Data;
    FStack_c18.Data = (FScriptContainerElement *)0xffffffff7fffffff;
  }
  local_c74._12_8_ = param_1;
  local_ba8 = param_4;
  FBoneReference::Initialize((FBoneReference *)local_c20,pFVar3);
  local_bf0 = *(undefined1 (*) [8])&param_7->BoneName;
  FStack_be8.Data = *(FScriptContainerElement **)&param_7->field_0x8;
  iVar31 = local_c60->ArrayNum;
  if (1 < iVar31) {
    uVar40 = iVar31 - 1;
    uVar35 = 0;
    if ((int)uVar40 < iVar31) {
      uVar35 = ~uVar40 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_bf0 = *(undefined1 (*) [8])
                 ((local_c60->AllocatorInstance).Data + (longlong)(int)uVar40 * 8);
    FStack_be8.Data = (FScriptContainerElement *)0xffffffff7fffffff;
  }
  uVar38 = 0;
  FBoneReference::Initialize((FBoneReference *)local_bf0,pFVar3);
  local_408.Rotation.XY.m128d_f64[0] = (param_10->Rotation).XY.m128d_f64[0];
  local_408.Rotation.XY.m128d_f64[1] = (param_10->Rotation).XY.m128d_f64[1];
  local_408.Rotation.ZW.m128d_f64[0] = (param_10->Rotation).ZW.m128d_f64[0];
  local_408.Rotation.ZW.m128d_f64[1] = (param_10->Rotation).ZW.m128d_f64[1];
  local_408.Translation.XY.m128d_f64[0] = (param_10->Translation).XY.m128d_f64[0];
  local_408.Translation.XY.m128d_f64[1] = (param_10->Translation).XY.m128d_f64[1];
  local_408.Translation.ZW.m128d_f64[0] = (param_10->Translation).ZW.m128d_f64[0];
  local_408.Translation.ZW.m128d_f64[1] = (param_10->Translation).ZW.m128d_f64[1];
  local_408.Scale3D.XY.m128d_f64[0] = (param_10->Scale3D).XY.m128d_f64[0];
  local_408.Scale3D.XY.m128d_f64[1] = (param_10->Scale3D).XY.m128d_f64[1];
  local_408.Scale3D.ZW.m128d_f64[0] = (param_10->Scale3D).ZW.m128d_f64[0];
  local_408.Scale3D.ZW.m128d_f64[1] = (param_10->Scale3D).ZW.m128d_f64[1];
  FVar30 = FBoneReference::GetCompactPoseIndex
                     ((FBoneReference *)local_c20,(FBoneContainer *)local_bb8);
  FAnimationRuntime::ConvertBoneSpaceTransformToCS
            (param_3,&param_1->Pose,&local_408,
             *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar30),BCS_WorldSpace);
  pTVar26 = local_c60;
  if (param_27 == ENUM_ComponentSpaceSystem) {
    local_610 = (FScriptContainerElement *)(local_c10->Translation).ZW.m128d_f64[0];
    local_620 = (FScriptContainerElement *)(local_c10->Translation).XY.m128d_f64[0];
    dStack_618 = (local_c10->Translation).XY.m128d_f64[1];
    local_408.Translation.ZW.m128d_f64[1] = 0.0;
    local_408.Translation.XY.m128d_f64[0] = (double)local_620;
    local_408.Translation.XY.m128d_f64[1] = dStack_618;
    local_408.Translation.ZW.m128d_f64[0] = (double)local_610;
  }
  local_c88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar31 = local_c60->ArrayNum;
  local_c88.ArrayNum = 0;
  local_c88.ArrayMax = 0;
  uVar41 = uVar38;
  local_b68.Data = (FScriptContainerElement *)local_408.Translation.XY.m128d_f64[0];
  dStack_b60 = local_408.Translation.XY.m128d_f64[1];
  local_b58.Data = (FScriptContainerElement *)local_408.Translation.ZW.m128d_f64[0];
  if (iVar31 < 2) {
    FBoneReference::GetCompactPoseIndex((FBoneReference *)local_c20,(FBoneContainer *)&local_c54);
    FBoneReference::GetCompactPoseIndex((FBoneReference *)local_bf0,(FBoneContainer *)local_c78);
    do {
      if (((local_c88.AllocatorInstance.Data <= (FCompactPoseBoneIndex *)local_c78) &&
          ((FScriptContainerElement *)local_c78 <
           local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayMax * 4)) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar31 = local_c88.ArrayNum;
      if (local_c88.ArrayNum == local_c88.ArrayMax) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_c88.AllocatorInstance,&local_c88.ArrayMax);
      }
      local_c88.ArrayNum = iVar31 + 1;
      memmove((FCompactPoseBoneIndex *)(local_c88.AllocatorInstance.Data + 4),
              local_c88.AllocatorInstance.Data,(longlong)iVar31 << 2);
      *(undefined1 (*) [4])local_c88.AllocatorInstance.Data = local_c78;
      FBoneContainer::GetParentBoneIndex
                (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,&local_c58);
      local_c78 = (undefined1  [4])local_c58;
    } while (local_c58 != local_c54);
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert
              (&local_c88,(FCompactPoseBoneIndex *)local_c78,0);
  }
  else {
    do {
      uVar40 = (uint)uVar38;
      uVar35 = 0;
      if ((int)uVar40 < iVar31) {
        uVar35 = ~uVar40 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_c30.BoneName = *(FName *)((pTVar26->AllocatorInstance).Data + uVar41);
      local_c30.bUseSkeletonIndex = 0;
      local_c30.BoneIndex = -1;
      local_c30.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      uVar35 = 0;
      if ((int)uVar40 < pTVar26->ArrayNum) {
        uVar35 = ~uVar40 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_c30.BoneName = *(FName *)((pTVar26->AllocatorInstance).Data + uVar41);
      local_c30.bUseSkeletonIndex = 0;
      local_c30.BoneIndex = -1;
      local_c30.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      FBoneReference::Initialize(&local_c30,pFVar3);
      FBoneReference::GetCompactPoseIndex(&local_c30,(FBoneContainer *)local_c74);
      if (((local_c88.AllocatorInstance.Data <= (FCompactPoseBoneIndex *)local_c74) &&
          ((FScriptContainerElement *)local_c74 <
           local_c88.AllocatorInstance.Data + (longlong)local_c88.ArrayMax * 4)) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar31 = local_c88.ArrayNum;
      if (local_c88.ArrayNum == local_c88.ArrayMax) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_c88.AllocatorInstance,&local_c88.ArrayMax);
      }
      uVar38 = (ulonglong)(uVar40 + 1);
      local_c88.ArrayNum = iVar31 + 1;
      *(undefined4 *)(local_c88.AllocatorInstance.Data + (longlong)iVar31 * 4) = local_c74._0_4_;
      iVar31 = pTVar26->ArrayNum;
      param_1 = (FComponentSpacePoseContext *)local_c74._12_8_;
      uVar41 = uVar41 + 8;
    } while ((int)(uVar40 + 1) < iVar31);
  }
  iVar31 = local_c88.ArrayNum;
  uVar38 = local_c88._8_8_ & 0xffffffff;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x70,0x10,local_c88.ArrayNum,&param_29->AllocatorInstance,&param_29->ArrayNum,
             &param_29->ArrayMax);
  local_ca0.Data = (FScriptContainerElement *)0x0;
  local_c98 = 0;
  if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar38);
  }
  if (0 < iVar31) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,iVar31,&local_ca0,0,(int *)((longlong)&local_c98 + 4));
  }
  if ((local_c88.ArrayNum < 1) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar92.Data = local_c88.AllocatorInstance.Data;
  pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,*(FCompactPoseBoneIndex *)local_c88.AllocatorInstance.Data);
  local_c74._4_8_ =
       FCSPose<FCompactPose>::GetComponentSpaceTransform
                 (&param_1->Pose,*(FCompactPoseBoneIndex *)FVar92.Data);
  dVar61 = (pTVar33->Rotation).XY.m128d_f64[0];
  dVar77 = (pTVar33->Rotation).XY.m128d_f64[1];
  dVar17 = (pTVar33->Rotation).ZW.m128d_f64[0];
  dVar93 = (pTVar33->Rotation).ZW.m128d_f64[1];
  dVar62 = (pTVar33->Translation).XY.m128d_f64[0];
  dVar15 = (pTVar33->Translation).XY.m128d_f64[1];
  dVar13 = (pTVar33->Translation).ZW.m128d_f64[0];
  dVar14 = (pTVar33->Translation).ZW.m128d_f64[1];
  dVar76 = (pTVar33->Scale3D).XY.m128d_f64[0];
  dVar8 = (pTVar33->Scale3D).XY.m128d_f64[1];
  dVar9 = (pTVar33->Scale3D).ZW.m128d_f64[0];
  dVar10 = (pTVar33->Scale3D).ZW.m128d_f64[1];
  FVar30 = *(FCompactPoseBoneIndex *)FVar92.Data;
  local_2e8 = FVar30;
  local_2d8 = dVar61;
  dStack_2d0 = dVar77;
  local_2c8 = dVar17;
  dStack_2c0 = dVar93;
  local_2b8 = dVar62;
  dStack_2b0 = dVar15;
  local_2a8 = dVar13;
  dStack_2a0 = dVar14;
  local_298 = dVar76;
  dStack_290 = dVar8;
  local_288 = dVar9;
  dStack_280 = dVar10;
  if ((param_29->ArrayNum < 1) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar23 = __real_bff0000000000000;
  pFVar4 = (FCompactPoseBoneIndex *)(param_29->AllocatorInstance).Data;
  local_830 = __real_bff0000000000000;
  local_858 = 0;
  *pFVar4 = FVar30;
  *(double *)(pFVar4 + 4) = dVar61;
  *(double *)(pFVar4 + 6) = dVar77;
  local_834 = 0;
  *(double *)(pFVar4 + 8) = dVar17;
  *(double *)(pFVar4 + 10) = dVar93;
  local_818 = (void *)0x0;
  *(double *)(pFVar4 + 0xc) = dVar62;
  *(double *)(pFVar4 + 0xe) = dVar15;
  local_810 = 0;
  *(double *)(pFVar4 + 0x10) = dVar13;
  *(double *)(pFVar4 + 0x12) = dVar14;
  *(double *)(pFVar4 + 0x14) = dVar76;
  *(double *)(pFVar4 + 0x16) = dVar8;
  *(double *)(pFVar4 + 0x18) = dVar9;
  *(double *)(pFVar4 + 0x1a) = dVar10;
  local_b08 = (pTVar33->Translation).XY.m128d_f64[0];
  dStack_b00 = (pTVar33->Translation).XY.m128d_f64[1];
  local_878 = (pTVar33->Rotation).XY.m128d_f64[0];
  dStack_870 = (pTVar33->Rotation).XY.m128d_f64[1];
  local_ae0 = (((VectorRegister4Double *)(local_c74._4_8_ + 0x20))->ZW).m128d_f64[0];
  local_af0 = (((VectorRegister4Double *)(local_c74._4_8_ + 0x20))->XY).m128d_f64[0];
  dStack_ae8 = (((VectorRegister4Double *)(local_c74._4_8_ + 0x20))->XY).m128d_f64[1];
  local_868 = (pTVar33->Rotation).ZW.m128d_f64[0];
  dStack_860 = (pTVar33->Rotation).ZW.m128d_f64[1];
  local_af8 = (pTVar33->Translation).ZW.m128d_f64[0];
  local_838 = *(FCompactPoseBoneIndex *)FVar92.Data;
  local_828 = 0;
  uStack_820 = 0;
  local_8a8._s_0.X = local_b08;
  local_8a8._s_0.Y = dStack_b00;
  local_8a8._s_0.Z = local_af8;
  local_890 = local_af0;
  dStack_888 = dStack_ae8;
  local_880 = local_ae0;
  if (((local_ca0.Data <= &local_8a8) &&
      (&local_8a8 < (TVector<double>_u_0 *)(local_ca0.Data + (longlong)local_c98._4_4_ * 0xa0))) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar32 = (int)local_c98;
  if ((int)local_c98 == local_c98._4_4_) {
    iVar32 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10a0,&local_ca0,(int *)((longlong)&local_c98 + 4));
  }
  local_c98 = CONCAT44(local_c98._4_4_,iVar32 + 1);
  FCCDIK_Modified_ChainLink::FCCDIK_Modified_ChainLink
            ((FCCDIK_Modified_ChainLink *)(local_ca0.Data + (longlong)iVar32 * 0xa0),
             (FCCDIK_Modified_ChainLink *)&local_8a8._s_0);
  if (local_818 != (void *)0x0) {
    FMemory::Free(local_818);
  }
  fVar91 = __real_322bcc77;
  local_c90[0] = 1;
  if (1 < iVar31) {
    local_c74._4_8_ = &param_1->Pose;
    do {
      uVar60 = local_c74._4_8_;
      uVar35 = local_c90[0];
      uVar40 = 0;
      if ((int)local_c90[0] < local_c88.ArrayNum) {
        uVar40 = ~local_c90[0] >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar92.Data = local_c88.AllocatorInstance.Data;
      lVar44 = (longlong)(int)uVar35;
      pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          ((FCSPose<FCompactPose> *)uVar60,
                           *(FCompactPoseBoneIndex *)(local_c88.AllocatorInstance.Data + lVar44 * 4)
                          );
      FCSPose<FCompactPose>::GetLocalSpaceTransform
                ((FCSPose<FCompactPose> *)uVar60,&local_148,
                 *(FCompactPoseBoneIndex *)(FVar92.Data + lVar44 * 4));
      auVar52 = *(undefined1 (*) [16])(pTVar33->Translation).XY.m128d_f64;
      auVar65 = *(undefined1 (*) [16])(pTVar33->Translation).ZW.m128d_f64;
      lVar42 = (longlong)(int)local_c90[0];
      dVar61 = (pTVar33->Rotation).XY.m128d_f64[0];
      dVar77 = (pTVar33->Rotation).XY.m128d_f64[1];
      dVar17 = (pTVar33->Rotation).ZW.m128d_f64[0];
      dVar93 = (pTVar33->Rotation).ZW.m128d_f64[1];
      dVar62 = (pTVar33->Scale3D).XY.m128d_f64[0];
      dVar15 = (pTVar33->Scale3D).XY.m128d_f64[1];
      dVar13 = (pTVar33->Scale3D).ZW.m128d_f64[0];
      dVar14 = (pTVar33->Scale3D).ZW.m128d_f64[1];
      uVar82 = *(undefined4 *)(FVar92.Data + lVar44 * 4);
      local_b90 = auVar65._0_8_;
      uVar35 = 0;
      if ((int)local_c90[0] < param_29->ArrayNum) {
        uVar35 = ~local_c90[0] >> 0x1f;
      }
      auVar49 = auVar65;
      local_ba0 = auVar52;
      local_278 = uVar82;
      local_268 = dVar61;
      dStack_260 = dVar77;
      local_258 = dVar17;
      dStack_250 = dVar93;
      local_248 = auVar52;
      local_238 = auVar65;
      local_228 = dVar62;
      dStack_220 = dVar15;
      local_218 = dVar13;
      dStack_210 = dVar14;
      if ((uVar35 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         auVar49 = extraout_XMM0, bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar60 = auVar49._8_8_;
      pFVar39 = (param_29->AllocatorInstance).Data;
      lVar42 = lVar42 * 0x70;
      *(undefined4 *)(pFVar39 + lVar42) = uVar82;
      *(double *)(pFVar39 + lVar42 + 0x10) = dVar61;
      *(double *)(pFVar39 + lVar42 + 0x10 + 8) = dVar77;
      *(double *)(pFVar39 + lVar42 + 0x20) = dVar17;
      *(double *)(pFVar39 + lVar42 + 0x20 + 8) = dVar93;
      *(undefined1 (*) [16])(pFVar39 + lVar42 + 0x30) = auVar52;
      *(undefined1 (*) [16])(pFVar39 + lVar42 + 0x40) = auVar65;
      *(double *)(pFVar39 + lVar42 + 0x50) = dVar62;
      *(double *)(pFVar39 + lVar42 + 0x50 + 8) = dVar15;
      *(double *)(pFVar39 + lVar42 + 0x60) = dVar13;
      *(double *)(pFVar39 + lVar42 + 0x60 + 8) = dVar14;
      uVar40 = local_c90[0] - 1;
      uVar35 = 0;
      if ((int)uVar40 < param_29->ArrayNum) {
        uVar35 = ~uVar40 >> 0x1f;
      }
      if (uVar35 == 0) {
        bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar60 = extraout_XMM0_00._8_8_;
        if (bVar29) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      auVar18._4_8_ = uVar60;
      auVar18._0_4_ = auVar52._4_4_;
      auVar65._0_8_ = auVar18._0_8_ << 0x20;
      auVar65._8_4_ = auVar52._8_4_;
      auVar65._12_4_ = auVar52._12_4_;
      pFVar5 = (param_29->AllocatorInstance).Data;
      pFVar39 = pFVar5 + (longlong)(int)uVar40 * 0x70 + 0x30;
      local_728 = *(double *)pFVar39;
      dStack_720 = *(double *)(pFVar39 + 8);
      local_718 = *(double *)(pFVar5 + (longlong)(int)uVar40 * 0x70 + 0x40);
      dVar61 = local_728 - auVar52._0_8_;
      dVar77 = dStack_720 - auVar65._8_8_;
      fVar81 = (float)SQRT(dVar77 * dVar77 + dVar61 * dVar61 +
                           (local_718 - (double)local_b90) * (local_718 - (double)local_b90));
      if (fVar81 <= fVar91) {
        uVar40 = (int)local_c98 - 1;
        uVar35 = 0;
        if ((int)uVar40 < (int)local_c98) {
          uVar35 = ~uVar40 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar39 = local_ca0.Data + (longlong)(int)uVar40 * 0xa0 + 0x90;
                    /* WARNING: Load size is inaccurate */
        if (((*pFVar39 <= (FScriptContainerElement *)local_c90) &&
            ((FScriptContainerElement *)local_c90 < *pFVar39 + (longlong)*(int *)(pFVar39 + 0xc) * 4
            )) && (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar32 = *(int *)(pFVar39 + 8);
        if (iVar32 == *(int *)(pFVar39 + 0xc)) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar39,(int *)(pFVar39 + 0xc));
        }
        *(int *)(pFVar39 + 8) = iVar32 + 1;
                    /* WARNING: Load size is inaccurate */
        *(uint *)(*pFVar39 + (longlong)iVar32 * 4) = local_c90[0];
      }
      else {
        local_918 = (pTVar33->Rotation).XY.m128d_f64[0];
        dStack_910 = (pTVar33->Rotation).XY.m128d_f64[1];
        local_908 = (pTVar33->Rotation).ZW.m128d_f64[0];
        dStack_900 = (pTVar33->Rotation).ZW.m128d_f64[1];
        local_ac8.ReferenceController =
             (TReferenceControllerBase<1> *)local_148.Translation.ZW.m128d_f64[0];
        local_920 = (TReferenceControllerBase<1> *)local_148.Translation.ZW.m128d_f64[0];
        local_8d8 = *(undefined4 *)(FVar92.Data + lVar44 * 4);
        local_8d4 = local_c90[0];
        local_948._s_0.Z = (double)local_b90;
        local_8d0 = uVar23;
        local_8c8 = 0;
        uStack_8c0 = 0;
        local_8b8 = (void *)0x0;
        local_8b0 = 0;
        local_ad8 = local_148.Translation.XY.m128d_f64[0];
        pFStack_ad0 = (FSkelMeshRefPoseOverride *)local_148.Translation.XY.m128d_f64[1];
        local_930 = local_148.Translation.XY.m128d_f64[0];
        pFStack_928 = (FSkelMeshRefPoseOverride *)local_148.Translation.XY.m128d_f64[1];
        local_948._0_16_ = auVar52;
        local_8f8 = fVar81;
        if (((local_ca0.Data <= &local_948) &&
            (&local_948 < (TVector<double>_u_0 *)(local_ca0.Data + (longlong)local_c98._4_4_ * 0xa0)
            )) && (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar32 = (int)local_c98;
        if ((int)local_c98 == local_c98._4_4_) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10a0,&local_ca0,(int *)((longlong)&local_c98 + 4));
        }
        local_c98 = CONCAT44(local_c98._4_4_,iVar32 + 1);
        FCCDIK_Modified_ChainLink::FCCDIK_Modified_ChainLink
                  ((FCCDIK_Modified_ChainLink *)(local_ca0.Data + (longlong)iVar32 * 0xa0),
                   (FCCDIK_Modified_ChainLink *)&local_948._s_0);
        if (local_8b8 != (void *)0x0) {
          FMemory::Free(local_8b8);
        }
      }
      local_c90[0] = local_c90[0] + 1;
      param_1 = (FComponentSpacePoseContext *)local_c74._12_8_;
    } while ((int)local_c90[0] < iVar31);
  }
  uVar43 = 0;
  iVar31 = (int)local_c98;
  local_c50 = (int)local_c98;
  uVar40 = local_c88.ArrayNum - 1;
  uVar35 = 0;
  if ((int)uVar40 < local_c88.ArrayNum) {
    uVar35 = ~uVar40 >> 0x1f;
  }
  if ((uVar35 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,
                       *(FCompactPoseBoneIndex *)
                        (local_c88.AllocatorInstance.Data + (longlong)(int)uVar40 * 4));
  local_548 = (pTVar33->Rotation).XY.m128d_f64[0];
  dStack_540 = (pTVar33->Rotation).XY.m128d_f64[1];
  local_538 = (pTVar33->Rotation).ZW.m128d_f64[0];
  dStack_530 = (pTVar33->Rotation).ZW.m128d_f64[1];
  uVar82 = *(undefined4 *)(pTVar33->Translation).XY.m128d_f64;
  iVar32 = *(int *)((longlong)(pTVar33->Translation).XY.m128d_f64 + 4);
  iVar107 = *(int *)((pTVar33->Translation).XY.m128d_f64 + 1);
  iVar108 = *(int *)((longlong)(pTVar33->Translation).XY.m128d_f64 + 0xc);
  local_b48.Data = (FScriptContainerElement *)(pTVar33->Translation).ZW.m128d_f64[0];
  dStack_b40 = (pTVar33->Translation).ZW.m128d_f64[1];
  local_508 = (pTVar33->Scale3D).XY.m128d_f64[0];
  dStack_500 = (pTVar33->Scale3D).XY.m128d_f64[1];
  local_4f8 = (pTVar33->Scale3D).ZW.m128d_f64[0];
  dStack_4f0 = (pTVar33->Scale3D).ZW.m128d_f64[1];
  local_b38 = uVar82;
  iStack_b34 = iVar32;
  iStack_b30 = iVar107;
  iStack_b2c = iVar108;
  if ((local_c88.ArrayNum < 1) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,*(FCompactPoseBoneIndex *)local_c88.AllocatorInstance.Data);
  uVar38 = (ulonglong)(int)local_c98;
  uVar35 = iVar31 - 1;
  FVar92.Data = (FScriptContainerElement *)(pTVar33->Rotation).XY.m128d_f64[0];
  dVar77 = (pTVar33->Rotation).XY.m128d_f64[1];
  uVar105 = *(undefined4 *)(pTVar33->Rotation).ZW.m128d_f64;
  uVar106 = *(undefined4 *)((longlong)(pTVar33->Rotation).ZW.m128d_f64 + 4);
  iVar98 = *(int *)((pTVar33->Rotation).ZW.m128d_f64 + 1);
  iVar101 = *(int *)((longlong)(pTVar33->Rotation).ZW.m128d_f64 + 0xc);
  local_508 = (pTVar33->Scale3D).XY.m128d_f64[0];
  dStack_500 = (pTVar33->Scale3D).XY.m128d_f64[1];
  local_4f8 = (pTVar33->Scale3D).ZW.m128d_f64[0];
  dStack_4f0 = (pTVar33->Scale3D).ZW.m128d_f64[1];
  dVar17 = (pTVar33->Translation).XY.m128d_f64[0];
  dVar93 = (pTVar33->Translation).XY.m128d_f64[1];
  dVar61 = (pTVar33->Translation).ZW.m128d_f64[0];
  uVar40 = ~uVar35 >> 0x1f;
  uVar88 = 0;
  if ((int)uVar35 < (int)local_c98) {
    uVar88 = uVar40;
  }
  local_c74._12_4_ = uVar40;
  local_b28.Data = FVar92.Data;
  dStack_b20 = dVar77;
  local_b18 = uVar105;
  uStack_b14 = uVar106;
  iStack_b10 = iVar98;
  iStack_b0c = iVar101;
  if (uVar88 == 0) {
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar29) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar38 = local_c98 & 0xffffffff;
  }
  uVar88 = 0;
  if ((int)uVar35 < (int)uVar38) {
    uVar88 = uVar40;
  }
  if (uVar88 == 0) {
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar29) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar38 = local_c98 & 0xffffffff;
  }
  local_6f8 = (((VectorRegister4Double *)((longlong)local_c40 + 0x20))->XY).m128d_f64[0];
  dStack_6f0 = *(double *)((longlong)local_c40 + 0x28);
  local_6e8 = ((__m128d *)((longlong)local_c40 + 0x30))->m128d_f64[0];
  dVar62 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_808._8_4_ = SUB84(dVar62,0);
  local_808._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_808._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
  dVar15 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_7f8._8_4_ = SUB84(dVar15,0);
  local_7f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_7f8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  dVar13 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar14 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_710 = dVar17;
  dStack_708 = dVar93;
  local_700 = dVar61;
  if (0 < iVar31) {
    local_c48 = iVar31 - 1;
    local_bb8._8_8_ = &param_1->Pose;
    lVar42 = 0;
    uVar105 = 0;
    uVar106 = 0;
    local_c4c = __real_3f800000 / (float)iVar31;
    local_c74._4_8_ = (TTransform<double> *)0x0;
    do {
      uVar35 = local_c48;
      fVar81 = local_c4c;
      fVar91 = __real_3f800000;
      uVar40 = 0;
      if ((int)uVar43 < (int)uVar38) {
        uVar40 = ~uVar43 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar25.Data = local_ca0.Data;
      pFVar34 = FRuntimeFloatCurve::GetRichCurve(local_c00);
      fVar47 = FRichCurve::Eval(pFVar34,(float)(int)uVar43 * fVar81,0.0);
      pFVar34 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)local_bf8.Data);
      fVar81 = FRichCurve::Eval(pFVar34,(float)(int)uVar43 * fVar81,0.0);
      uVar48 = SUB84(local_b58.Data,0);
      uVar59 = (undefined4)((ulonglong)local_b58.Data >> 0x20);
      FVar92.Data = local_b68.Data;
      dVar61 = dStack_b60;
      if (uVar43 == uVar35) {
        local_6d0 = (local_c10->Translation).ZW.m128d_f64[0];
        FVar92.Data = (FScriptContainerElement *)(local_c10->Translation).XY.m128d_f64[0];
        dVar61 = (local_c10->Translation).XY.m128d_f64[1];
        uVar48 = SUB84(local_6d0,0);
        uVar59 = (undefined4)((ulonglong)local_6d0 >> 0x20);
        local_6e0 = FVar92.Data;
        dStack_6d8 = dVar61;
      }
      if (uVar43 == 0) {
        local_ab0 = local_b48.Data;
        dVar17 = *(double *)local_c08.Data;
        dVar93 = *(double *)(local_c08.Data + 8);
        dVar77 = *(double *)(local_c08.Data + 0x10);
        dVar62 = *(double *)local_c38;
        dVar15 = *(double *)((longlong)local_c38 + 8);
        dVar13 = *(double *)((longlong)local_c38 + 0x10);
        dVar14 = *(double *)((longlong)local_c38 + 0x18);
        local_bc8 = local_b48.Data;
        local_ac0 = uVar82;
        iStack_abc = iVar32;
        iStack_ab8 = iVar107;
        iStack_ab4 = iVar108;
        if ((param_29->ArrayNum < 1) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar39 = (param_29->AllocatorInstance).Data;
        local_a68._s_0.Z = (double)local_bc8;
        local_608.Rotation.XY.m128d_f64[0] = *(double *)(pFVar39 + 0x10);
        local_608.Rotation.XY.m128d_f64[1] = *(double *)(pFVar39 + 0x18);
        local_608.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar39 + 0x20);
        local_608.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar39 + 0x28);
        local_608.Translation.XY.m128d_f64[0] = *(double *)(pFVar39 + 0x30);
        local_608.Translation.XY.m128d_f64[1] = *(double *)(pFVar39 + 0x38);
        local_608.Translation.ZW.m128d_f64[0] = *(double *)(pFVar39 + 0x40);
        local_608.Translation.ZW.m128d_f64[1] = *(double *)(pFVar39 + 0x48);
        local_608.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar39 + 0x50);
        local_608.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar39 + 0x58);
        local_608.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar39 + 0x60);
        local_608.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar39 + 0x68);
        local_a88._s_0.Z = (double)CONCAT44(uVar59,uVar48);
        local_aa8.Pitch = dVar17;
        local_aa8.Yaw = dVar93;
        local_aa8.Roll = dVar77;
        local_a88._s_0.X = (double)FVar92.Data;
        local_a88._s_0.Y = dVar61;
        local_a68._0_4_ = uVar82;
        local_a68._4_4_ = iVar32;
        local_a68._8_4_ = iVar107;
        local_a68._12_4_ = iVar108;
        local_7a8._s_0.X = dVar62;
        local_7a8._s_0.Y = dVar15;
        local_7a8._s_0.Z = dVar13;
        dStack_790 = dVar14;
        pTVar33 = LookAt_Processor(&local_4c8,&local_608,(TVector<double> *)&local_a68._s_0,
                                   (TVector<double> *)&local_a88._s_0,(FAxis *)&local_7a8._s_0,
                                   __real_42a00000,&local_aa8,param_22,fVar91,fVar91);
        uVar105 = (undefined4)local_c74._4_8_;
        uVar106 = SUB84(local_c74._4_8_,4);
        local_808 = *(undefined1 (*) [16])(pTVar33->Rotation).XY.m128d_f64;
        local_7f8 = *(undefined1 (*) [16])(pTVar33->Rotation).ZW.m128d_f64;
        local_7e8 = (pTVar33->Translation).XY.m128d_f64[0];
        dStack_7e0 = (pTVar33->Translation).XY.m128d_f64[1];
        local_7d8 = (pTVar33->Translation).ZW.m128d_f64[0];
        dStack_7d0 = (pTVar33->Translation).ZW.m128d_f64[1];
        local_7c8 = (pTVar33->Scale3D).XY.m128d_f64[0];
        dStack_7c0 = (pTVar33->Scale3D).XY.m128d_f64[1];
        local_7b8 = (pTVar33->Scale3D).ZW.m128d_f64[0];
        dStack_7b0 = (pTVar33->Scale3D).ZW.m128d_f64[1];
      }
      uVar40 = *(uint *)(FVar25.Data + lVar42 + 0x74);
      uVar88 = 0;
      if ((int)uVar40 < param_29->ArrayNum) {
        uVar88 = ~uVar40 >> 0x1f;
      }
      if ((uVar88 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (param_29->AllocatorInstance).Data;
      pFVar39 = pFVar5 + (longlong)(int)uVar40 * 0x70 + 0x10;
      local_748.X = *(double *)pFVar39;
      local_748.Y = *(double *)(pFVar39 + 8);
      pFVar5 = pFVar5 + (longlong)(int)uVar40 * 0x70 + 0x20;
      local_748.Z = *(double *)pFVar5;
      local_748.W = *(double *)(pFVar5 + 8);
      UE::Math::TQuat<double>::Rotator(&local_748,&local_6b0);
      fVar47 = fVar47 * param_12;
      uVar94 = *(undefined4 *)local_c08.Data;
      uVar95 = *(undefined4 *)(local_c08.Data + 4);
      uVar96 = *(undefined4 *)(local_c08.Data + 8);
      uVar99 = *(undefined4 *)(local_c08.Data + 0xc);
      dVar77 = *(double *)(local_c08.Data + 0x10);
      fVar102 = param_21;
      if (param_23) {
        if (uVar43 != uVar35) goto LAB_14d33ebbe;
        local_bc8 = (FScriptContainerElement *)CONCAT44(uVar106,uVar105);
        uVar94 = 0;
        uVar95 = 0;
        uVar96 = 0;
        uVar99 = 0;
        dVar77 = (double)CONCAT44(uVar106,uVar105);
        fVar47 = param_24;
        fVar81 = fVar91;
LAB_14d33ea2e:
        fVar102 = fVar91;
        if (!param_26) goto LAB_14d33ebbe;
        uVar35 = *(uint *)(FVar25.Data + lVar42 + 0x74);
        uVar40 = 0;
        if ((int)uVar35 < param_29->ArrayNum) {
          uVar40 = ~uVar35 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar93 = local_408.Rotation.ZW.m128d_f64[1];
        dVar17 = local_408.Rotation.ZW.m128d_f64[0];
        dVar77 = local_408.Rotation.XY.m128d_f64[1];
        dVar61 = local_408.Rotation.XY.m128d_f64[0];
        pFVar39 = (param_29->AllocatorInstance).Data;
        uVar40 = *(uint *)(FVar25.Data + lVar42 + 0x74);
        uVar88 = 0;
        if ((int)uVar40 < param_29->ArrayNum) {
          uVar88 = ~uVar40 >> 0x1f;
        }
        if ((uVar88 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar33 = (TTransform<double> *)(param_29->AllocatorInstance).Data;
        auVar69._8_4_ = SUB84(dVar61,0);
        auVar69._0_8_ = dVar61;
        auVar69._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        FVar36 = (FWeakObjectPtr)((longlong)(int)uVar40 * 0x70);
        auVar52._8_4_ = SUB84(dVar93,0);
        auVar52._0_8_ = dVar93;
        auVar52._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
        auVar63._8_4_ = SUB84(dVar77,0);
        auVar63._0_8_ = dVar77;
        auVar63._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
        pdVar2 = (double *)
                 ((longlong)(pTVar33->Rotation).XY.m128d_f64 +
                 (longlong)((__m128d *)((longlong)FVar36 + 0x10))->m128d_f64);
        dVar19 = *pdVar2;
        dVar20 = pdVar2[1];
        pdVar2 = (double *)
                 ((longlong)(((VectorRegister4Double *)((longlong)FVar36 + 0x20))->XY).m128d_f64 +
                 (longlong)&(pTVar33->Rotation).XY);
        dVar21 = *pdVar2;
        dVar22 = pdVar2[1];
        dVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        dVar76 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
        auVar49._8_4_ = SUB84(dVar17,0);
        auVar49._0_8_ = dVar17;
        auVar49._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        pFVar5 = pFVar39 + (longlong)(int)uVar35 * 0x70 + 0x10;
        *(double *)pFVar5 =
             dVar61 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar93 * dVar19 +
             dVar77 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar17 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        *(double *)(pFVar5 + 8) =
             dVar61 * dVar21 * dVar76 + dVar93 * dVar20 + dVar77 * dVar22 * dVar8 +
             dVar17 * dVar19 * dVar10;
        pFVar39 = pFVar39 + (longlong)(int)uVar35 * 0x70 + 0x20;
        *(double *)pFVar39 =
             dVar61 * dVar20 * dVar62 + dVar93 * dVar21 + dVar77 * dVar19 * dVar15 +
             dVar17 * dVar22 * dVar13;
        *(double *)(pFVar39 + 8) =
             auVar69._8_8_ * dVar19 * dVar14 + auVar52._8_8_ * dVar22 +
             auVar63._8_8_ * dVar20 * dVar9 + auVar49._8_8_ * dVar21 * dVar11;
        iVar31 = local_c50;
      }
      else {
        fVar91 = param_21;
        if (uVar43 == uVar35) goto LAB_14d33ea2e;
LAB_14d33ebbe:
        uVar35 = *(uint *)(FVar25.Data + lVar42 + 0x74);
        dVar17 = *(double *)local_c38;
        dVar93 = *(double *)((longlong)local_c38 + 8);
        dVar62 = *(double *)((longlong)local_c38 + 0x10);
        dVar15 = *(double *)((longlong)local_c38 + 0x18);
        local_a38 = local_b48.Data;
        local_bc8 = local_b48.Data;
        uVar40 = 0;
        if ((int)uVar35 < param_29->ArrayNum) {
          uVar40 = ~uVar35 >> 0x1f;
        }
        local_a48 = uVar82;
        iStack_a44 = iVar32;
        iStack_a40 = iVar107;
        iStack_a3c = iVar108;
        if ((uVar40 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar39 = (param_29->AllocatorInstance).Data;
        lVar44 = (longlong)(int)uVar35 * 0x70;
        local_9e8._s_0.Z = (double)local_bc8;
        local_5a8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar39 + lVar44 + 0x10);
        local_5a8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar39 + lVar44 + 0x10 + 8);
        local_5a8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar39 + lVar44 + 0x20);
        local_5a8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar39 + lVar44 + 0x20 + 8);
        local_5a8.Translation.XY.m128d_f64[0] = *(double *)(pFVar39 + lVar44 + 0x30);
        local_5a8.Translation.XY.m128d_f64[1] = *(double *)(pFVar39 + lVar44 + 0x30 + 8);
        local_5a8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar39 + lVar44 + 0x40);
        local_5a8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar39 + lVar44 + 0x40 + 8);
        local_5a8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar39 + lVar44 + 0x50);
        local_5a8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar39 + lVar44 + 0x50 + 8);
        local_5a8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar39 + lVar44 + 0x60);
        local_5a8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar39 + lVar44 + 0x60 + 8);
        local_a08._s_0.Z = (double)CONCAT44(uVar59,uVar48);
        local_a28.Pitch._0_4_ = uVar94;
        local_a28.Pitch._4_4_ = uVar95;
        local_a28.Yaw._0_4_ = uVar96;
        local_a28.Yaw._4_4_ = uVar99;
        local_a28.Roll = dVar77;
        local_a08._s_0.X = (double)FVar92.Data;
        local_a08._s_0.Y = dVar61;
        local_9e8._0_4_ = uVar82;
        local_9e8._4_4_ = iVar32;
        local_9e8._8_4_ = iVar107;
        local_9e8._12_4_ = iVar108;
        local_788._s_0.X = dVar17;
        local_788._s_0.Y = dVar93;
        local_788._s_0.Z = dVar62;
        dStack_770 = dVar15;
        pTVar33 = LookAt_Processor(&local_468,&local_5a8,(TVector<double> *)&local_9e8._s_0,
                                   (TVector<double> *)&local_a08._s_0,(FAxis *)&local_788._s_0,
                                   fVar47,&local_a28,param_22,fVar102,fVar81);
        uVar35 = *(uint *)(FVar25.Data + lVar42 + 0x74);
        dVar61 = (pTVar33->Rotation).XY.m128d_f64[0];
        dVar77 = (pTVar33->Rotation).XY.m128d_f64[1];
        dVar17 = (pTVar33->Rotation).ZW.m128d_f64[0];
        dVar93 = (pTVar33->Rotation).ZW.m128d_f64[1];
        dVar62 = (pTVar33->Translation).XY.m128d_f64[0];
        dVar15 = (pTVar33->Translation).XY.m128d_f64[1];
        dVar13 = (pTVar33->Translation).ZW.m128d_f64[0];
        dVar14 = (pTVar33->Translation).ZW.m128d_f64[1];
        dVar76 = (pTVar33->Scale3D).XY.m128d_f64[0];
        dVar8 = (pTVar33->Scale3D).XY.m128d_f64[1];
        dVar9 = (pTVar33->Scale3D).ZW.m128d_f64[0];
        dVar10 = (pTVar33->Scale3D).ZW.m128d_f64[1];
        uVar40 = 0;
        if ((int)uVar35 < param_29->ArrayNum) {
          uVar40 = ~uVar35 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar33 = (TTransform<double> *)(param_29->AllocatorInstance).Data;
        FVar36 = (FWeakObjectPtr)((longlong)(int)uVar35 * 0x70);
        pdVar2 = (double *)
                 ((longlong)(pTVar33->Rotation).XY.m128d_f64 +
                 (longlong)((__m128d *)((longlong)FVar36 + 0x10))->m128d_f64);
        *pdVar2 = dVar61;
        pdVar2[1] = dVar77;
        pdVar2 = (double *)
                 ((longlong)(((VectorRegister4Double *)((longlong)FVar36 + 0x20))->XY).m128d_f64 +
                 (longlong)&(pTVar33->Rotation).XY);
        *pdVar2 = dVar17;
        pdVar2[1] = dVar93;
        pdVar2 = (double *)
                 ((longlong)(pTVar33->Rotation).XY.m128d_f64 +
                 (longlong)((__m128d *)((longlong)FVar36 + 0x30))->m128d_f64);
        *pdVar2 = dVar62;
        pdVar2[1] = dVar15;
        pdVar2 = (double *)
                 ((longlong)(((VectorRegister4Double *)((longlong)FVar36 + 0x40))->XY).m128d_f64 +
                 (longlong)&(pTVar33->Rotation).XY);
        *pdVar2 = dVar13;
        pdVar2[1] = dVar14;
        pdVar2 = (double *)
                 ((longlong)(pTVar33->Rotation).XY.m128d_f64 +
                 (longlong)((__m128d *)((longlong)FVar36 + 0x50))->m128d_f64);
        *pdVar2 = dVar76;
        pdVar2[1] = dVar8;
        pdVar2 = (double *)
                 ((longlong)(pTVar33->Rotation).XY.m128d_f64 +
                 (longlong)
                 (((TTransform<double> *)((longlong)FVar36 + 0x60))->Rotation).XY.m128d_f64);
        *pdVar2 = dVar9;
        pdVar2[1] = dVar10;
      }
      if ((param_18) && (uVar43 == 0)) {
        uVar35 = *(uint *)(FVar25.Data + lVar42 + 0x74);
        uVar40 = 0;
        if ((int)uVar35 < param_29->ArrayNum) {
          uVar40 = ~uVar35 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_6b8 = ((__m128d *)((longlong)local_c40 + 0x30))->m128d_f64[0];
        local_6c8 = (((VectorRegister4Double *)((longlong)local_c40 + 0x20))->XY).m128d_f64[0];
        dStack_6c0 = *(double *)((longlong)local_c40 + 0x28);
        pFVar5 = (param_29->AllocatorInstance).Data;
        pFVar39 = pFVar5 + (longlong)(int)uVar35 * 0x70 + 0x30;
        *(double *)pFVar39 = local_6c8;
        *(double *)(pFVar39 + 8) = dStack_6c0;
        pFVar5 = pFVar5 + (longlong)(int)uVar35 * 0x70 + 0x40;
        *(double *)pFVar5 = local_6b8;
        *(double *)(pFVar5 + 8) = 0.0;
        uVar35 = *(uint *)(FVar25.Data + lVar42 + 0x74);
        uVar40 = 0;
        if ((int)uVar35 < param_29->ArrayNum) {
          uVar40 = ~uVar35 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_29->AllocatorInstance).Data;
        pTVar33 = (TTransform<double> *)
                  UE::Math::TRotator<double>::Quaternion(&local_6b0,&local_4e8);
        auVar52 = *(undefined1 (*) [16])(pTVar33->Rotation).XY.m128d_f64;
        dVar19 = *(double *)local_c40;
        dVar20 = *(double *)((longlong)local_c40 + 8);
        dVar21 = ((__m128d *)((longlong)local_c40 + 0x10))->m128d_f64[0];
        dVar22 = *(double *)((longlong)local_c40 + 0x18);
        auVar65 = *(undefined1 (*) [16])(pTVar33->Rotation).ZW.m128d_f64;
        dVar8 = auVar52._0_8_;
        auVar70._8_4_ = auVar52._0_4_;
        auVar70._0_8_ = dVar8;
        auVar70._12_4_ = auVar52._4_4_;
        dVar11 = auVar65._8_8_;
        dVar93 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
        dVar10 = auVar65._0_8_;
        dVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        dVar9 = auVar52._8_8_;
        auVar50._8_4_ = auVar65._0_4_;
        auVar50._0_8_ = dVar10;
        auVar50._12_4_ = auVar65._4_4_;
        dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        dVar77 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar76 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        pFVar39 = pFVar5 + (longlong)(int)uVar35 * 0x70 + 0x10;
        *(double *)pFVar39 =
             dVar8 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar19 * dVar11 +
             dVar21 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar10 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        *(double *)(pFVar39 + 8) =
             dVar8 * dVar21 * dVar93 + dVar20 * dVar11 + dVar22 * dVar9 * dVar15 +
             dVar10 * dVar19 * dVar14;
        pFVar5 = pFVar5 + (longlong)(int)uVar35 * 0x70 + 0x20;
        *(double *)pFVar5 =
             dVar8 * dVar20 * dVar61 + dVar21 * dVar11 + dVar19 * dVar9 * dVar77 +
             dVar10 * dVar22 * dVar17;
        *(double *)(pFVar5 + 8) =
             auVar70._8_8_ * dVar19 * dVar62 + dVar22 * dVar11 + dVar20 * dVar9 * dVar13 +
             auVar50._8_8_ * dVar21 * dVar76;
        FVar36 = local_c40;
      }
      iVar32 = FVar36.ObjectIndex;
      fVar91 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar47 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar97 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar100 = GlobalVectorConstants::Float0001.m128_f32[3];
      fVar81 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar102 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar103 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar104 = GlobalVectorConstants::Float1110.m128_f32[3];
      dVar61 = (double)fVar97;
      dVar77 = (double)fVar100;
      uVar82 = (undefined4)((ulonglong)dVar77 >> 0x20);
      dVar17 = (double)fVar91;
      dVar93 = (double)fVar47;
      uVar105 = (undefined4)((ulonglong)dVar93 >> 0x20);
      dVar62 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dVar15 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      uVar106 = (undefined4)((ulonglong)dVar15 >> 0x20);
      local_968[0] = (double)fVar81;
      local_968[1] = (double)fVar102;
      local_3a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar93,0);
      local_3a8.Rotation.XY.m128d_f64[0] = dVar17;
      local_3a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar105;
      local_978 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_970 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_3a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar77,0);
      local_3a8.Rotation.ZW.m128d_f64[0] = dVar61;
      local_3a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar82;
      local_958[0] = (double)fVar103;
      local_958[1] = (double)fVar104;
      local_3a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar15,0);
      local_3a8.Translation.XY.m128d_f64[0] = dVar62;
      local_3a8.Translation.XY.m128d_f64[1]._4_4_ = uVar106;
      local_9a8._8_4_ = SUB84(dVar93,0);
      local_9a8._0_8_ = dVar17;
      local_9a8._12_4_ = uVar105;
      local_998._8_4_ = SUB84(dVar77,0);
      local_998._0_8_ = dVar61;
      local_998._12_4_ = uVar82;
      local_988._8_4_ = SUB84(dVar15,0);
      local_988._0_8_ = dVar62;
      local_988._12_4_ = uVar106;
      local_3a8.Translation.ZW.m128d_f64[0] = local_978;
      local_3a8.Translation.ZW.m128d_f64[1] = dStack_970;
      local_3a8.Scale3D.XY.m128d_f64 = local_968;
      local_3a8.Scale3D.ZW.m128d_f64 = local_958;
      if (0 < *(int *)(FVar25.Data + lVar42 + 0x74)) {
        uVar40 = *(int *)(FVar25.Data + lVar42 + 0x74) - 1;
        uVar35 = 0;
        if ((int)uVar40 < param_29->ArrayNum) {
          uVar35 = ~uVar40 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar44 = (longlong)(int)uVar40 * 0x70;
        pFVar39 = (param_29->AllocatorInstance).Data;
        local_3a8.Rotation.XY.m128d_f64 = *(double (*) [2])(pFVar39 + lVar44 + 0x10);
        local_3a8.Rotation.ZW.m128d_f64 = *(double (*) [2])(pFVar39 + lVar44 + 0x20);
        local_3a8.Translation.XY.m128d_f64 = *(double (*) [2])(pFVar39 + lVar44 + 0x30);
        local_3a8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar39 + lVar44 + 0x40);
        local_3a8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar39 + lVar44 + 0x40 + 8);
        local_3a8.Scale3D.XY.m128d_f64 = *(double (*) [2])(pFVar39 + lVar44 + 0x50);
        local_3a8.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pFVar39 + lVar44 + 0x60);
        uVar40 = *(int *)(FVar25.Data + lVar42 + 0x74) - 1;
        uVar35 = 0;
        if ((int)uVar40 < local_c88.ArrayNum) {
          uVar35 = ~uVar40 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar37 = (FCSPose<FCompactPose> *)local_bb8._8_8_;
        pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            ((FCSPose<FCompactPose> *)local_bb8._8_8_,
                             *(FCompactPoseBoneIndex *)
                              (local_c88.AllocatorInstance.Data + (longlong)(int)uVar40 * 4));
        iVar32 = (int)pFVar37;
        fVar91 = GlobalVectorConstants::Float0001.m128_f32[0];
        fVar47 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar97 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar100 = GlobalVectorConstants::Float0001.m128_f32[3];
        fVar81 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar102 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar103 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar104 = GlobalVectorConstants::Float1110.m128_f32[3];
        dVar17 = (pTVar33->Rotation).XY.m128d_f64[0];
        dVar93 = (pTVar33->Rotation).XY.m128d_f64[1];
        local_9a8 = *(undefined1 (*) [16])(pTVar33->Rotation).XY.m128d_f64;
        p_Var1 = &(pTVar33->Rotation).ZW;
        dVar61 = p_Var1->m128d_f64[0];
        dVar77 = (pTVar33->Rotation).ZW.m128d_f64[1];
        local_998 = *(undefined1 (*) [16])p_Var1->m128d_f64;
        dVar62 = (pTVar33->Translation).XY.m128d_f64[0];
        dVar15 = (pTVar33->Translation).XY.m128d_f64[1];
        local_988 = *(undefined1 (*) [16])(pTVar33->Translation).XY.m128d_f64;
        local_978 = (pTVar33->Translation).ZW.m128d_f64[0];
        dStack_970 = (pTVar33->Translation).ZW.m128d_f64[1];
        local_968 = *&(pTVar33->Scale3D).XY.m128d_f64;
        local_958 = *&(pTVar33->Scale3D).ZW.m128d_f64;
      }
      auVar71._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_958[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_958[0]._0_4_);
      auVar71._8_4_ = _UNK_15061cc88 & local_958[1]._0_4_;
      auVar71._12_4_ = _UNK_15061cc8c & local_958[1]._4_4_;
      auVar64._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar71._8_8_);
      auVar64._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar71._0_8_);
      uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_968[0]._0_4_;
      uVar88 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_968[0]._4_4_;
      uVar89 = _UNK_15061cc88 & local_968[1]._0_4_;
      uVar90 = _UNK_15061cc8c & local_968[1]._4_4_;
      uVar35 = movmskpd(iVar32,auVar64);
      auVar51._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
            (double)CONCAT44(uVar90,uVar89));
      auVar51._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
            (double)CONCAT44(uVar88,uVar40));
      iVar32 = movmskpd((int)pTVar33,auVar51);
      if ((uVar35 & 0x3fffffff) == 0 && iVar32 == 0) {
        local_348.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_348.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_348.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_348.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_348.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        local_348.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
      }
      else {
        dVar61 = dVar61 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar77 = dVar77 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar106 = (undefined4)((ulonglong)dVar77 >> 0x20);
        dVar17 = dVar17 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar93 = dVar93 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar82 = SUB84(dVar93,0);
        uVar105 = (undefined4)((ulonglong)dVar93 >> 0x20);
        local_348.Rotation.XY.m128d_f64[1]._0_4_ = uVar82;
        local_348.Rotation.XY.m128d_f64[0] = dVar17;
        local_348.Rotation.XY.m128d_f64[1]._4_4_ = uVar105;
        lVar44 = -(ulonglong)
                  ((double)CONCAT44(uVar88,uVar40) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar46 = -(ulonglong)
                  ((double)CONCAT44(uVar90,uVar89) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar12._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar12._0_8_ = local_958[0];
        auVar12._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar12);
        lVar45 = -(ulonglong)
                  ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                    local_958[0]._4_4_,
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                    local_958[0]._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        (undefined1  [16])local_968);
        local_bd8 = ~(uint)lVar44 & auVar65._0_4_;
        uStack_bd4 = ~(uint)((ulonglong)lVar44 >> 0x20) & auVar65._4_4_;
        uStack_bd0 = ~(uint)lVar46 & auVar65._8_4_;
        uStack_bcc = ~(uint)((ulonglong)lVar46 >> 0x20) & auVar65._12_4_;
        auVar83._8_4_ = uVar82;
        auVar83._0_8_ = dVar17;
        auVar83._12_4_ = uVar105;
        dVar62 = dVar62 * (double)CONCAT44(uStack_bd4,local_bd8);
        dVar15 = dVar15 * (double)CONCAT44(uStack_bcc,uStack_bd0);
        uVar48 = (undefined4)((ulonglong)dVar15 >> 0x20);
        local_348.Scale3D.ZW.m128d_f64[0] =
             (double)CONCAT44(~(uint)((ulonglong)lVar45 >> 0x20) & auVar52._4_4_,
                              ~(uint)lVar45 & auVar52._0_4_);
        auVar72._8_4_ = uVar82;
        auVar72._0_8_ = dVar17;
        auVar72._12_4_ = uVar105;
        dVar76 = auVar72._8_8_;
        auVar53._8_4_ = SUB84(dVar61,0);
        auVar53._0_8_ = dVar76;
        auVar53._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        local_b88 = (FWeakObjectPtr)(local_978 * local_348.Scale3D.ZW.m128d_f64[0]);
        FStack_b80 = (FWeakObjectPtr)(dStack_970 * 0.0);
        auVar16._8_4_ = SUB84(dVar77,0);
        auVar16._0_8_ = dVar61;
        auVar16._12_4_ = uVar106;
        auVar65 = blendpd(auVar83,auVar16,2);
        auVar66._8_4_ = SUB84(dVar15,0);
        auVar66._0_8_ = dVar62;
        auVar66._12_4_ = uVar48;
        auVar24._8_4_ = FStack_b80.ObjectIndex;
        auVar24._12_4_ = FStack_b80.ObjectSerialNumber;
        auVar24._0_4_ = local_b88.ObjectIndex;
        auVar24._4_4_ = local_b88.ObjectSerialNumber;
        auVar85._8_4_ = SUB84(dVar15,0);
        auVar85._0_8_ = dVar62;
        auVar85._12_4_ = uVar48;
        auVar52 = blendpd(auVar66,auVar24,2);
        auVar86._0_8_ = auVar85._8_8_ * dVar17 - dVar76 * dVar62;
        auVar86._8_8_ = (double)local_b88 * dVar93 - auVar53._8_8_ * dVar15;
        auVar67._0_8_ = auVar52._0_8_ * dVar61 - auVar65._0_8_ * (double)local_b88;
        auVar67._8_8_ = auVar52._8_8_ * dVar77 - auVar65._8_8_ * (double)FStack_b80;
        dVar13 = auVar86._8_8_ + auVar86._8_8_;
        dVar14 = auVar67._0_8_ + auVar67._0_8_;
        uVar82 = SUB84(dVar14,0);
        uVar105 = (undefined4)((ulonglong)dVar14 >> 0x20);
        auVar52 = blendpd(auVar86,auVar67,2);
        auVar87._0_8_ = auVar52._0_8_ + auVar52._0_8_;
        auVar87._8_8_ = auVar52._8_8_ + auVar52._8_8_;
        auVar78._8_4_ = uVar82;
        auVar78._0_8_ = dVar13;
        auVar78._12_4_ = uVar105;
        auVar54._8_4_ = uVar82;
        auVar54._0_8_ = dVar13;
        auVar54._12_4_ = uVar105;
        auVar73._8_4_ = uVar82;
        auVar73._0_8_ = dVar13;
        auVar73._12_4_ = uVar105;
        auVar52 = blendpd(auVar73,auVar87,2);
        auVar79._0_8_ = auVar78._8_8_ * dVar17 - dVar13 * dVar76;
        auVar79._8_8_ = auVar87._0_8_ * dVar93 - auVar54._8_8_ * dVar61;
        auVar55._8_4_ = SUB84(auVar87._8_8_,0);
        auVar55._0_8_ = auVar87._0_8_;
        auVar55._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
        auVar74._0_8_ = auVar52._0_8_ * dVar61 - auVar87._0_8_ * auVar65._0_8_;
        auVar74._8_8_ = auVar52._8_8_ * dVar77 - auVar55._8_8_ * auVar65._8_8_;
        auVar56._8_4_ = SUB84(auVar79._8_8_,0);
        auVar56._0_8_ = auVar79._0_8_;
        auVar56._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
        auVar52 = blendpd(auVar79,auVar74,2);
        local_348.Scale3D.XY.m128d_f64[0]._4_4_ = uStack_bd4;
        local_348.Scale3D.XY.m128d_f64[0]._0_4_ = local_bd8;
        local_348.Scale3D.XY.m128d_f64[1]._0_4_ = uStack_bd0;
        local_348.Scale3D.XY.m128d_f64[1]._4_4_ = uStack_bcc;
        local_348.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar77,0);
        local_348.Rotation.ZW.m128d_f64[0] = dVar61;
        local_348.Rotation.ZW.m128d_f64[1]._4_4_ = uVar106;
        local_348.Translation.XY.m128d_f64[1] = 0.0 - (dVar14 * dVar77 + dVar15 + auVar74._0_8_);
        local_348.Translation.XY.m128d_f64[0] = 0.0 - (dVar13 * dVar77 + dVar62 + auVar56._8_8_);
        local_348.Translation.ZW.m128d_f64[1] = 0.0;
        local_348.Translation.ZW.m128d_f64[0] =
             0.0 - (auVar87._0_8_ * dVar77 + (double)local_b88 + auVar52._0_8_);
        local_348.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      local_1a8.Rotation.XY.m128d_f64[0] = (double)fVar91;
      local_1a8.Rotation.XY.m128d_f64[1] = (double)fVar47;
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)fVar97;
      local_1a8.Rotation.ZW.m128d_f64[1] = (double)fVar100;
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)fVar81;
      local_1a8.Scale3D.XY.m128d_f64[1] = (double)fVar102;
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)fVar103;
      local_1a8.Scale3D.ZW.m128d_f64[1] = (double)fVar104;
      UE::Math::TTransform<double>::Multiply(&local_1a8,&local_348,&local_3a8);
      uVar35 = *(uint *)(FVar25.Data + lVar42 + 0x74);
      uVar40 = 0;
      if ((int)uVar35 < param_29->ArrayNum) {
        uVar40 = ~uVar35 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar40 = *(uint *)(FVar25.Data + lVar42 + 0x74);
      pFVar39 = (param_29->AllocatorInstance).Data;
      uVar88 = 0;
      if ((int)uVar40 < param_29->ArrayNum) {
        uVar88 = ~uVar40 >> 0x1f;
      }
      if ((uVar88 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_208,
                 (TTransform<double> *)
                 ((param_29->AllocatorInstance).Data + (longlong)(int)uVar40 * 0x70 + 0x10),
                 &local_1a8);
      local_b78 = (FWeakObjectPtr)local_208.Translation.ZW.m128d_f64[0];
      uVar43 = uVar43 + 1;
      local_b88 = (FWeakObjectPtr)local_208.Translation.XY.m128d_f64[0];
      FStack_b80 = (FWeakObjectPtr)local_208.Translation.XY.m128d_f64[1];
      lVar42 = lVar42 + 0xa0;
      *(double *)(pFVar39 + (longlong)(int)uVar35 * 0x70 + 0x30) =
           local_208.Translation.XY.m128d_f64[0];
      *(double *)(pFVar39 + (longlong)(int)uVar35 * 0x70 + 0x38) =
           local_208.Translation.XY.m128d_f64[1];
      *(double *)(pFVar39 + (longlong)(int)uVar35 * 0x70 + 0x40) =
           local_208.Translation.ZW.m128d_f64[0];
      *(undefined8 *)(pFVar39 + (longlong)(int)uVar35 * 0x70 + 0x48) = 0;
      if (iVar31 <= (int)uVar43) goto LAB_14d33f58e;
      uVar38 = local_c98 & 0xffffffff;
      uVar105 = (undefined4)local_c74._4_8_;
      uVar106 = SUB84(local_c74._4_8_,4);
      uVar82 = local_b38;
      iVar32 = iStack_b34;
      iVar107 = iStack_b30;
      iVar108 = iStack_b2c;
    } while( true );
  }
LAB_14d33f5b4:
  fVar81 = __real_3f800000;
  dVar61 = (double)CONCAT44(uVar106,uVar105) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar17 = (double)CONCAT44(iVar101,iVar98) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar93 = (double)FVar92.Data * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar77 = dVar77 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar84._8_4_ = SUB84(dVar17,0);
  auVar84._0_8_ = dVar61;
  auVar84._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar80._8_4_ = SUB84(dVar13,0);
  auVar80._0_8_ = dVar13;
  auVar80._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar57._8_4_ = SUB84(dVar15,0);
  auVar57._0_8_ = dVar15;
  auVar57._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar68._8_4_ = SUB84(dVar62,0);
  auVar68._0_8_ = dVar62;
  auVar68._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
  auVar75._8_4_ = SUB84(dVar77,0);
  auVar75._0_8_ = dVar93;
  auVar75._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
  auVar58._8_4_ = SUB84(dVar14,0);
  auVar58._0_8_ = dVar14;
  auVar58._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_768.X = dVar13 * auVar84._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar15 * dVar93 +
                dVar62 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar14 * auVar75._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_768.Y = auVar80._8_8_ * dVar61 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar57._8_8_ * dVar77 +
                auVar68._8_8_ * dVar17 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar58._8_8_ * dVar93 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_768.Z = dVar13 * auVar75._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar15 * dVar61 +
                dVar62 * dVar93 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar14 * auVar84._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_768.W = dVar13 * dVar93 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar15 * dVar17 +
                dVar62 * dVar77 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar14 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  UE::Math::TRotator<double>::TRotator<double>(&local_9c8,&local_768);
  fVar47 = (float)(double)CONCAT44((uint)((ulonglong)local_9c8.Yaw >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(local_9c8.Yaw,0) ^
                                   (uint)__xmm_80000000000000008000000000000000);
  fVar91 = (float)(double)CONCAT44((uint)((ulonglong)local_9c8.Roll >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_9c8.Roll,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff) - param_13;
  if (__real_447a0000 <= fVar91) {
    fVar91 = __real_447a0000;
  }
  if (fVar91 <= __real_00000000) {
    fVar91 = __real_00000000;
  }
  fVar102 = fVar81;
  if (0 < (int)uVar35) {
    uVar43 = 0;
    if ((int)uVar35 < param_29->ArrayNum) {
      uVar43 = uVar40;
    }
    if ((uVar43 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (param_29->AllocatorInstance).Data;
    pFVar39 = pFVar5 + (longlong)(int)uVar35 * 0x70 + 0x30;
    local_698 = *(undefined8 *)pFVar39;
    uStack_690 = *(undefined8 *)(pFVar39 + 8);
    local_688 = *(double *)(pFVar5 + (longlong)(int)uVar35 * 0x70 + 0x40);
    iVar32 = -1;
    if (local_688 < (double)local_b58.Data) {
      iVar32 = 1;
    }
    fVar102 = (float)iVar32;
  }
  uVar35 = 0;
  if (0 < iVar31) {
    lVar42 = 0;
    dVar93 = (double)param_16;
    dVar62 = (double)fVar47;
    dVar77 = (*(double *)((longlong)local_c38 + 8) *
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
             *(double *)((longlong)local_c38 + 0x10) *
             UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) * dVar93 * dVar62;
    dVar17 = (double)(float)((uint)fVar47 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
             (double)param_17;
    dVar61 = (*(double *)((longlong)local_c38 + 0x10) *
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
             *(double *)local_c38 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) * dVar93
             * dVar62;
    dVar62 = (*(double *)local_c38 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
             *(double *)((longlong)local_c38 + 8) *
             UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) * dVar93 * dVar62;
    do {
      uVar40 = 0;
      if ((int)uVar35 < (int)local_c98) {
        uVar40 = ~uVar35 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar92.Data = local_ca0.Data;
      uVar40 = *(uint *)(local_ca0.Data + lVar42 + 0x74);
      if (fVar102 == fVar81) {
        uVar43 = 0;
        if ((int)uVar40 < param_29->ArrayNum) {
          uVar43 = ~uVar40 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar93 = (double)fVar91 * (double)param_14;
        local_680 = 0;
        uStack_678 = 0;
        local_670 = dVar93;
      }
      else {
        uVar43 = 0;
        if ((int)uVar40 < param_29->ArrayNum) {
          uVar43 = ~uVar40 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar93 = (double)fVar91 * (double)param_15;
        local_668 = 0;
        uStack_660 = 0;
        local_658 = dVar93;
      }
      pFVar39 = (param_29->AllocatorInstance).Data;
      lVar44 = (longlong)(int)uVar40 * 0x70;
      dVar15 = *(double *)(pFVar39 + lVar44 + 0x40);
      dVar13 = *(double *)(pFVar39 + lVar44 + 0x40 + 8);
      uVar23 = *(undefined8 *)(pFVar39 + lVar44 + 0x30 + 8);
      *(undefined8 *)(pFVar39 + lVar44 + 0x30) = *(undefined8 *)(pFVar39 + lVar44 + 0x30);
      *(undefined8 *)(pFVar39 + lVar44 + 0x30 + 8) = uVar23;
      *(double *)(pFVar39 + lVar44 + 0x40) = dVar93 + dVar15;
      *(double *)(pFVar39 + lVar44 + 0x40 + 8) = dVar13 + 0.0;
      uVar40 = *(uint *)(FVar92.Data + lVar42 + 0x74);
      uVar43 = 0;
      if ((int)uVar40 < param_29->ArrayNum) {
        uVar43 = ~uVar40 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar39 = (param_29->AllocatorInstance).Data;
      lVar44 = (longlong)(int)uVar40 * 0x70;
      dVar15 = *(double *)(pFVar39 + lVar44 + 0x30 + 8);
      dVar93 = *(double *)(pFVar39 + lVar44 + 0x40);
      dVar13 = *(double *)(pFVar39 + lVar44 + 0x40 + 8);
      *(double *)(pFVar39 + lVar44 + 0x30) = dVar77 + *(double *)(pFVar39 + lVar44 + 0x30);
      *(double *)(pFVar39 + lVar44 + 0x30 + 8) = dVar61 + dVar15;
      *(double *)(pFVar39 + lVar44 + 0x40) = dVar62 + dVar93;
      *(double *)(pFVar39 + lVar44 + 0x40 + 8) = dVar13 + 0.0;
      uVar40 = *(uint *)(FVar92.Data + lVar42 + 0x74);
      uVar43 = 0;
      if ((int)uVar40 < param_29->ArrayNum) {
        uVar43 = ~uVar40 >> 0x1f;
      }
      local_650 = dVar77;
      dStack_648 = dVar61;
      local_640 = dVar62;
      if ((uVar43 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar39 = (param_29->AllocatorInstance).Data;
      lVar44 = (longlong)(int)uVar40 * 0x70;
      local_638 = 0;
      uStack_630 = 0;
      uVar35 = uVar35 + 1;
      lVar42 = lVar42 + 0xa0;
      dVar93 = *(double *)(pFVar39 + lVar44 + 0x40);
      dVar15 = *(double *)(pFVar39 + lVar44 + 0x40 + 8);
      uVar23 = *(undefined8 *)(pFVar39 + lVar44 + 0x30 + 8);
      *(undefined8 *)(pFVar39 + lVar44 + 0x30) = *(undefined8 *)(pFVar39 + lVar44 + 0x30);
      *(undefined8 *)(pFVar39 + lVar44 + 0x30 + 8) = uVar23;
      *(double *)(pFVar39 + lVar44 + 0x40) = dVar17 + dVar93;
      *(double *)(pFVar39 + lVar44 + 0x40 + 8) = dVar15 + 0.0;
      local_628 = dVar17;
    } while ((int)uVar35 < iVar31);
  }
  DestructItems<FCCDIK_Modified_ChainLink,int>
            ((FCCDIK_Modified_ChainLink *)local_ca0.Data,(int)local_c98);
  if ((TVector<double>_u_0 *)local_ca0.Data != (TVector<double>_u_0 *)0x0) {
    FMemory::Free(local_ca0.Data);
  }
  if ((FCompactPoseBoneIndex *)local_c88.AllocatorInstance.Data != (FCompactPoseBoneIndex *)0x0) {
    FMemory::Free(local_c88.AllocatorInstance.Data);
  }
  pTVar28 = local_ba8;
  DestructItems<FDragonData_SpineFeetPair,int>
            ((FDragonData_SpineFeetPair *)(local_ba8->AllocatorInstance).Data,local_ba8->ArrayNum);
  pFVar39 = (pTVar28->AllocatorInstance).Data;
  if (pFVar39 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar39);
  }
  pFVar27 = local_c00;
  pFVar39 = (local_c00->EditorCurveData).Keys.AllocatorInstance.Data;
  if (pFVar39 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar39);
  }
  (pFVar27->EditorCurveData)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar6 = (void *)(pFVar27->EditorCurveData)._padding_;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  *(undefined4 *)&(pFVar27->EditorCurveData)._padding_ = 0;
  pvVar6 = (void *)(pFVar27->EditorCurveData)._padding_;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(pFVar27->EditorCurveData)._padding_);
  FVar92.Data = local_bf8.Data;
  if (*(void **)(local_bf8.Data + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)(local_bf8.Data + 0x70));
  }
  *(undefined ***)FVar92.Data = &___7FIndexedCurve__6B_;
  if (*(void **)(FVar92.Data + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)(FVar92.Data + 0x58));
  }
  *(undefined4 *)(FVar92.Data + 0x50) = 0;
  if (*(void **)(FVar92.Data + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)(FVar92.Data + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(FVar92.Data + 8));
  pFVar39 = (local_c60->AllocatorInstance).Data;
  if (pFVar39 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar39);
  }
  return;
LAB_14d33f58e:
  uVar35 = iVar31 - 1;
  uVar105 = local_b18;
  uVar106 = uStack_b14;
  iVar98 = iStack_b10;
  iVar101 = iStack_b0c;
  uVar40 = local_c74._12_4_;
  dVar13 = (double)local_808._0_8_;
  dVar62 = (double)local_808._8_8_;
  dVar14 = (double)local_7f8._0_8_;
  dVar15 = (double)local_7f8._8_8_;
  FVar92.Data = local_b28.Data;
  dVar77 = dStack_b20;
  goto LAB_14d33f5b4;
}

// Evaluate_TwoBoneIK_Direct_Modified @ 14d33fc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified
          (FComponentSpacePoseContext *param_1,USkeletalMeshComponent *param_2,
          ArmIKParamStruct *param_3,FDragonData_ArmsData *param_4,float *param_5,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_6)

{
  __m128d *p_Var1;
  TVector<double> *pTVar2;
  undefined8 uVar3;
  ForElementType<unsigned_int> FVar4;
  FCompactPoseBoneIndex *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  ulonglong uVar24;
  double *pdVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double adVar36 [2];
  float fVar37;
  bool bVar38;
  FCompactPoseBoneIndex FVar39;
  int iVar40;
  undefined4 uVar41;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  int iVar42;
  undefined4 extraout_var;
  TTransform<double> *pTVar43;
  TQuat<double> *pTVar44;
  TRotator<double> *pTVar46;
  TTransform<double> *pTVar47;
  TTransform<double> *pTVar48;
  undefined4 uVar49;
  uint uVar50;
  int iVar51;
  uint uVar52;
  TVector<double>_u_0 *this;
  longlong lVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  ulonglong uVar57;
  float fVar58;
  double dVar59;
  FScriptContainerElement *pFVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar60;
  double dVar61;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  FScriptContainerElement *pFVar88;
  undefined1 auVar85 [16];
  FWeakObjectPtr extraout_XMM0_Qb;
  FWeakObjectPtr FVar89;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar90;
  double dVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  double dVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  double dVar112;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar113;
  undefined8 uVar114;
  double dVar115;
  undefined4 uVar122;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined4 uVar123;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined4 uVar124;
  undefined4 uVar125;
  uint uVar126;
  float fVar127;
  double dVar128;
  undefined8 uVar129;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  double adVar133 [2];
  undefined1 auVar134 [16];
  undefined8 uVar135;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  FScriptContainerElement *pFVar139;
  double dVar140;
  undefined8 uVar141;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  uint uVar147;
  uint uVar148;
  uint uVar149;
  uint uVar150;
  uint uVar151;
  uint uVar152;
  int iVar153;
  undefined4 uVar154;
  undefined1 auStackY_2dc8 [32];
  TTransform<double> *pTVar155;
  TTransform<double> *pTVar156;
  TTransform<double> *pTVar157;
  FCompactPoseBoneIndex local_2d58;
  FCompactPoseBoneIndex local_2d54;
  FCompactPoseBoneIndex local_2d50;
  float local_2d4c;
  TReferenceControllerBase<1> *local_2d48;
  TReferenceControllerBase<1> *pTStack_2d40;
  undefined8 local_2d38;
  ForElementType<unsigned_int> FStack_2d30;
  FWeakObjectPtr local_2d28;
  FWeakObjectPtr FStack_2d20;
  FWeakObjectPtr local_2d18;
  FWeakObjectPtr FStack_2d10;
  ForAnyElementType local_2d08;
  ForAnyElementType FStack_2d00;
  TRotator<double> local_2cf8;
  FWeakObjectPtr local_2ce0;
  FWeakObjectPtr FStack_2cd8;
  FWeakObjectPtr local_2cd0;
  FWeakObjectPtr FStack_2cc8;
  ForAnyElementType local_2cc0;
  ForAnyElementType FStack_2cb8;
  ForAnyElementType local_2cb0;
  TTransform<double> local_2ca8;
  ForElementType<unsigned_int> local_2c48;
  ForElementType<unsigned_int> FStack_2c40;
  TReferenceControllerBase<1> *local_2c38;
  FWeakObjectPtr local_2c30;
  FWeakObjectPtr FStack_2c28;
  undefined1 local_2c18 [16];
  TVector<double>_u_0 local_2c08;
  ForElementType<unsigned_int> local_2bf0;
  ForElementType<unsigned_int> FStack_2be8;
  FScriptContainerElement *local_2be0;
  FScriptContainerElement *pFStack_2bd8;
  FScriptContainerElement *local_2bd0;
  FScriptContainerElement *pFStack_2bc8;
  TRotator<double> local_2bc0;
  TTransform<double> local_2ba8;
  undefined1 local_2b48 [8];
  undefined1 local_2b40 [16];
  double local_2b30;
  TVector<double>_u_0 local_2b28;
  TVector<double>_u_0 local_2b10;
  TVector<double>_u_0 local_2af8;
  TVector<double>_u_0 local_2ae0;
  TVector<double>_u_0 local_2ac8;
  double local_2ab0;
  ForAnyElementType FStack_2aa8;
  double local_2aa0;
  undefined1 local_2a98 [16];
  ForElementType<unsigned_int> local_2a88;
  ForElementType<unsigned_int> local_2a80;
  ForElementType<unsigned_int> FStack_2a78;
  FScriptContainerElement *local_2a70;
  double local_2a68;
  FSkelMeshRefPoseOverride *pFStack_2a60;
  FSharedReferencer<1> local_2a58;
  undefined4 local_2a50;
  int iStack_2a4c;
  undefined4 uStack_2a48;
  int iStack_2a44;
  FScriptContainerElement *local_2a40;
  TVector<double>_u_0 local_2a38;
  undefined1 local_2a18 [16];
  double local_2a08;
  double dStack_2a00;
  TVector<double>_u_0 local_29f8;
  undefined4 uStack_29e0;
  undefined4 uStack_29dc;
  TQuat<double> local_29d8;
  double local_29b8;
  double local_29b0;
  double local_29a8;
  double local_29a0;
  double local_2998;
  double local_2990;
  FSkelMeshRefPoseOverride *pFStack_2988;
  TReferenceControllerBase<1> *local_2980;
  FSkelMeshRefPoseOverride *pFStack_2978;
  TReferenceControllerBase<1> *local_2970;
  TReferenceControllerBase<1> *pTStack_2968;
  FScriptContainerElement *local_2960;
  FScriptContainerElement *pFStack_2958;
  double local_2950 [2];
  double local_2940;
  double local_2938;
  double dStack_2930;
  double local_2928;
  double local_2920;
  double dStack_2918;
  double local_2910;
  double local_2908;
  double dStack_2900;
  double local_28f8;
  double local_28f0;
  double dStack_28e8;
  double local_28e0;
  double local_28d8;
  double dStack_28d0;
  double local_28c8;
  TVector<double>_u_0 local_28c0;
  TVector<double>_u_0 local_28a8;
  TVector<double>_u_0 local_2888;
  double local_2868;
  FSkelMeshRefPoseOverride *pFStack_2860;
  TReferenceControllerBase<1> *local_2858;
  undefined1 local_2848 [16];
  double local_2838;
  TVector<double>_u_0 local_2828;
  TVector<double>_u_0 local_2808;
  double local_27e8 [2];
  double local_27d8;
  double local_27d0;
  double local_27c8;
  undefined1 local_27c0 [16];
  TReferenceControllerBase<1> *local_27b0;
  double local_27a8;
  FWeakObjectPtr local_27a0;
  FWeakObjectPtr FStack_2798;
  FWeakObjectPtr local_2790;
  FWeakObjectPtr FStack_2788;
  TTransform<double> local_2778;
  TQuat<double> local_2718;
  TQuat<double> local_26f8;
  TQuat<double> local_26d8;
  TQuat<double> local_26b8;
  TVector<double>_u_0 local_2698;
  undefined4 uStack_2680;
  undefined4 uStack_267c;
  TQuat<double> local_2678;
  TQuat<double> local_2658;
  undefined1 local_2638 [16];
  ForElementType<unsigned_int> local_2628;
  double local_2620;
  FSkelMeshRefPoseOverride *pFStack_2618;
  TReferenceControllerBase<1> *local_2610;
  undefined1 local_2608 [16];
  ForElementType<unsigned_int> local_25f8;
  double local_25f0;
  double dStack_25e8;
  double local_25e0;
  undefined1 local_25d8 [16];
  ForElementType<unsigned_int> local_25c8;
  undefined1 local_25c0 [16];
  ForElementType<unsigned_int> local_25b0;
  undefined1 local_25a8 [16];
  TReferenceControllerBase<1> *local_2598;
  undefined1 local_2590 [16];
  FScriptContainerElement *local_2580;
  undefined1 local_2578 [16];
  FScriptContainerElement *local_2568;
  double local_2560;
  double dStack_2558;
  double local_2550;
  undefined1 local_2548 [16];
  ForElementType<unsigned_int> local_2538;
  undefined1 local_2530 [16];
  double local_2520;
  undefined1 local_2518 [16];
  double local_2508;
  double local_2500;
  FScriptContainerElement *pFStack_24f8;
  double local_24f0;
  ForElementType<unsigned_int> local_24e8;
  ForElementType<unsigned_int> FStack_24e0;
  FScriptContainerElement *local_24d8;
  double local_24d0;
  FScriptContainerElement *pFStack_24c8;
  double local_24c0;
  undefined1 local_24b8 [16];
  undefined8 local_24a8;
  double local_24a0;
  FScriptContainerElement *pFStack_2498;
  double local_2490;
  double local_2488;
  FSkelMeshRefPoseOverride *pFStack_2480;
  TReferenceControllerBase<1> *local_2478;
  ForElementType<unsigned_int> local_2470;
  ForElementType<unsigned_int> FStack_2468;
  FScriptContainerElement *local_2460;
  ForElementType<unsigned_int> local_2458;
  ForElementType<unsigned_int> FStack_2450;
  FScriptContainerElement *local_2448;
  FScriptContainerElement *local_2440;
  FScriptContainerElement *pFStack_2438;
  ForElementType<unsigned_int> local_2430;
  double local_2428;
  FSkelMeshRefPoseOverride *pFStack_2420;
  TReferenceControllerBase<1> *local_2418;
  undefined1 local_2410 [16];
  FScriptContainerElement *local_2400;
  undefined1 local_23f8 [16];
  TReferenceControllerBase<1> *local_23e8;
  FScriptContainerElement *local_23e0;
  FScriptContainerElement *pFStack_23d8;
  ForElementType<unsigned_int> local_23d0;
  undefined1 local_23c8 [16];
  FScriptContainerElement *local_23b8;
  undefined1 local_23b0 [16];
  FScriptContainerElement *local_23a0;
  undefined1 local_2398 [16];
  double local_2388;
  double local_2380;
  double dStack_2378;
  double local_2370;
  double local_2368;
  double dStack_2360;
  double local_2358;
  TVector<double> local_2350;
  TVector<double> local_2338;
  double local_2320;
  double dStack_2318;
  double local_2310;
  double local_2308;
  double dStack_2300;
  double local_22f8;
  double local_22f0;
  double dStack_22e8;
  double local_22e0;
  double local_22d8;
  double dStack_22d0;
  double local_22c8;
  double dStack_22c0;
  double local_22b8;
  double dStack_22b0;
  double local_22a8;
  double dStack_22a0;
  double local_2298;
  double dStack_2290;
  double local_2288;
  double dStack_2280;
  TTransform<double> local_2278;
  TTransform<double> local_2218;
  TTransform<double> local_21b8;
  TTransform<double> local_2158;
  TTransform<double> local_20f8;
  TTransform<double> local_2098;
  TTransform<double> local_2038;
  TTransform<double> local_1fd8;
  TTransform<double> local_1f78;
  TTransform<double> local_1f18;
  TTransform<double> local_1eb8;
  TTransform<double> local_1e58;
  TTransform<double> local_1df8;
  TTransform<double> local_1d98;
  TTransform<double> local_1d38;
  TTransform<double> local_1cd8;
  TTransform<double> local_1c78;
  TTransform<double> local_1c18;
  TTransform<double> local_1bb8;
  TTransform<double> local_1b58;
  TTransform<double> local_1af8;
  TTransform<double> local_1a98;
  TTransform<double> local_1a38;
  TTransform<double> local_19d8;
  TTransform<double> local_1978;
  TTransform<double> local_1918;
  TTransform<double> local_18b8;
  TTransform<double> local_1858;
  TTransform<double> local_17f8;
  TTransform<double> local_1798;
  TTransform<double> local_1738;
  TTransform<double> local_16d8;
  TTransform<double> local_1678;
  TTransform<double> local_1618;
  TTransform<double> local_15b8;
  TTransform<double> local_1558;
  TTransform<double> local_14f8;
  TTransform<double> local_1498;
  TTransform<double> local_1438;
  TTransform<double> local_13d8;
  TTransform<double> local_1378;
  TTransform<double> local_1318;
  TTransform<double> local_12b8;
  TTransform<double> local_1258;
  TTransform<double> local_11f8;
  double local_1198;
  double dStack_1190;
  double local_1188;
  double dStack_1180;
  TRotator<double> local_1178;
  TQuat<double> local_1158;
  TQuat<double> local_1138;
  TQuat<double> local_1118;
  TQuat<double> local_10f8;
  TQuat<double> local_10d8;
  TQuat<double> local_10b8;
  TQuat<double> local_1098;
  TQuat<double> local_1078;
  TTransform<double> local_1058;
  TTransform<double> local_ff8;
  TTransform<double> local_f98;
  TTransform<double> local_f38;
  TTransform<double> local_ed8;
  TTransform<double> local_e78;
  TTransform<double> local_e18;
  TTransform<double> local_db8;
  TTransform<double> local_d58;
  TTransform<double> local_cf8;
  TTransform<double> local_c98;
  TTransform<double> local_c38;
  TTransform<double> local_bd8;
  TTransform<double> local_b78;
  FCompactPoseBoneIndex local_b18;
  undefined4 uStack_b14;
  undefined8 uStack_b10;
  FWeakObjectPtr local_b08;
  FWeakObjectPtr FStack_b00;
  FWeakObjectPtr local_af8;
  FWeakObjectPtr FStack_af0;
  ForElementType<unsigned_int> local_ae8;
  ForElementType<unsigned_int> FStack_ae0;
  FScriptContainerElement *local_ad8;
  FScriptContainerElement *pFStack_ad0;
  FScriptContainerElement *local_ac8;
  FScriptContainerElement *pFStack_ac0;
  ForElementType<unsigned_int> local_ab8;
  ForElementType<unsigned_int> FStack_ab0;
  FCompactPoseBoneIndex local_aa8;
  undefined4 uStack_aa4;
  undefined8 uStack_aa0;
  double local_a98;
  double dStack_a90;
  double local_a88;
  double dStack_a80;
  double local_a78;
  double dStack_a70;
  double local_a68;
  double dStack_a60;
  double local_a58;
  double dStack_a50;
  double local_a48;
  double dStack_a40;
  FCompactPoseBoneIndex local_a38;
  undefined4 uStack_a34;
  undefined8 uStack_a30;
  double local_a28;
  double dStack_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  double dStack_a00;
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  double dStack_9e0;
  FScriptContainerElement *local_9d8;
  FScriptContainerElement *pFStack_9d0;
  FCompactPoseBoneIndex local_9c8;
  undefined4 uStack_9c4;
  undefined8 uStack_9c0;
  double local_9b8;
  double dStack_9b0;
  double local_9a8;
  double dStack_9a0;
  double local_998;
  FSkelMeshRefPoseOverride *pFStack_990;
  TReferenceControllerBase<1> *local_988;
  FSkelMeshRefPoseOverride *pFStack_980;
  TReferenceControllerBase<1> *local_978;
  TReferenceControllerBase<1> *pTStack_970;
  FScriptContainerElement *local_968;
  FScriptContainerElement *pFStack_960;
  FCompactPoseBoneIndex local_958;
  undefined4 uStack_954;
  undefined8 uStack_950;
  double local_948;
  double dStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  FCompactPoseBoneIndex local_8e8;
  undefined4 uStack_8e4;
  undefined8 uStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  double dStack_8c0;
  double local_8b8;
  double dStack_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  FCompactPoseBoneIndex local_878;
  undefined4 uStack_874;
  undefined8 uStack_870;
  double local_868;
  double dStack_860;
  double local_858;
  double dStack_850;
  double local_848;
  double dStack_840;
  double local_838;
  double dStack_830;
  double local_828;
  double dStack_820;
  double local_818;
  double dStack_810;
  TTransform<double> local_808;
  TTransform<double> local_7a8;
  TTransform<double> local_748;
  TTransform<double> local_6e8;
  TTransform<double> local_688;
  TTransform<double> local_628;
  TTransform<double> local_5c8;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  TQuat<double> *pTVar45;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2dc8;
  FBoneReference::GetCompactPoseIndex(&param_3->FeetBone,(FBoneContainer *)&local_2d54);
  FBoneReference::GetCompactPoseIndex(&param_3->KneeBone,(FBoneContainer *)&local_2d58);
  FBoneReference::GetCompactPoseIndex(&param_3->ThighBone,(FBoneContainer *)&local_2d50);
  uVar149 = __xmm_80000000000000008000000000000000._4_4_;
  uVar50 = (uint)__xmm_80000000000000008000000000000000;
  uVar148 = _UNK_15061cc8c;
  uVar147 = _UNK_15061cc88;
  uVar126 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar52 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar59 = __real_3e45798ee0000000;
  local_cf8.Rotation.XY.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_cf8.Rotation.XY.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_cf8.Rotation.ZW.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_cf8.Rotation.ZW.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  uVar124 = SUB84(__real_3e45798ee0000000,0);
  uVar125 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  local_b78.Rotation.XY.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_b78.Rotation.XY.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_b78.Rotation.ZW.m128d_f64[0] =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_b78.Rotation.ZW.m128d_f64[1] =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_b78.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_b78.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_b78.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_b78.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_cf8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_cf8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_cf8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_cf8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (((!(BADTYPE)(param_4->Clavicle_Bone).bUseSkeletonIndex) &&
      ((param_4->Clavicle_Bone).CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) &&
     (param_3->Separate_Arms_Logic_Used != false)) {
    FVar39 = FBoneReference::GetCompactPoseIndex
                       (&param_4->Clavicle_Bone,(FBoneContainer *)local_2b48);
    FVar39 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar39);
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,FVar39);
    local_508.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_508.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_508.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_508.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_508.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_508.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_508.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_508.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_508.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_508.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_508.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_508.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_508,pTVar43,&param_3->transform_offset);
    dVar91 = local_508.Translation.ZW.m128d_f64[0];
    dVar140 = local_508.Translation.XY.m128d_f64[1];
    dVar115 = local_508.Translation.XY.m128d_f64[0];
    adVar36[1] = local_508.Translation.XY.m128d_f64[1];
    adVar36[0] = local_508.Translation.XY.m128d_f64[0];
    local_cf8.Rotation.XY.m128d_f64[1] = local_508.Rotation.XY.m128d_f64[1];
    local_cf8.Rotation.XY.m128d_f64[0] = local_508.Rotation.XY.m128d_f64[0];
    local_cf8.Rotation.ZW.m128d_f64[1] = local_508.Rotation.ZW.m128d_f64[1];
    local_cf8.Rotation.ZW.m128d_f64[0] = local_508.Rotation.ZW.m128d_f64[0];
    local_cf8.Scale3D.XY.m128d_f64[1] = local_508.Scale3D.XY.m128d_f64[1];
    local_cf8.Scale3D.XY.m128d_f64[0] = local_508.Scale3D.XY.m128d_f64[0];
    local_cf8.Scale3D.ZW.m128d_f64[1] = local_508.Scale3D.ZW.m128d_f64[1];
    local_cf8.Scale3D.ZW.m128d_f64[0] = local_508.Scale3D.ZW.m128d_f64[0];
    auVar13._4_8_ = local_508.Scale3D.ZW.m128d_f64[1];
    auVar13._0_4_ = (int)((ulonglong)local_508.Translation.XY.m128d_f64[0] >> 0x20);
    auVar96._0_8_ = auVar13._0_8_ << 0x20;
    auVar96._8_4_ = SUB84(local_508.Translation.XY.m128d_f64[1],0);
    auVar96._12_4_ = (int)((ulonglong)local_508.Translation.XY.m128d_f64[1] >> 0x20);
    local_27d8 = local_508.Translation.ZW.m128d_f64[0];
    local_cf8.Translation.ZW.m128d_f64[1] = local_508.Translation.ZW.m128d_f64[1];
    local_cf8.Translation.ZW.m128d_f64[0] = local_508.Translation.ZW.m128d_f64[0];
    local_2380 = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[0];
    dStack_2378 = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[1];
    local_2370 = (param_3->Shoulder_Trans).Translation.ZW.m128d_f64[0];
    local_2b40._0_8_ = local_508.Translation.XY.m128d_f64[0] - local_2380;
    local_2b40._8_8_ = auVar96._8_8_ - dStack_2378;
    local_2b30 = local_508.Translation.ZW.m128d_f64[0] - local_2370;
    local_27e8 = adVar36;
    local_cf8.Translation.XY.m128d_f64 = adVar36;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)(local_2b48 + 8),&local_2338,dVar59,
               &UE::Math::TVector<double>::ZeroVector);
    local_2940 = dVar91;
    local_2368 = (param_3->ThighTransform).Translation.XY.m128d_f64[0];
    dStack_2360 = (param_3->ThighTransform).Translation.XY.m128d_f64[1];
    local_2358 = (param_3->ThighTransform).Translation.ZW.m128d_f64[0];
    local_2b28._s_0.X = dVar115 - local_2368;
    local_2b28._s_0.Y = dVar140 - dStack_2360;
    local_2b28._s_0.Z = dVar91 - local_2358;
    local_2950 = adVar36;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_2b28._s_0,&local_2350,dVar59,
               &UE::Math::TVector<double>::ZeroVector);
    pTVar44 = UE::Math::TQuat<double>::FindBetweenVectors(&local_1098,&local_2338,&local_2350);
    UE::Math::TQuat<double>::Rotator(pTVar44,&local_2cf8);
    if (param_3->clavicle_only_bend_if_limit == false) {
      uVar3 = *(undefined8 *)&(param_4->Inner_Clavicle_Vertical_Limit).field0_0x0;
      uVar114 = *(undefined8 *)((longlong)&(param_4->Inner_Clavicle_Vertical_Limit).field0_0x0 + 8);
      local_2cf8.Pitch =
           FMath::ClampAngle<double>
                     (local_2cf8.Pitch,
                      (double)CONCAT44((uint)((ulonglong)uVar114 >> 0x20) & uVar126,
                                       (uint)uVar114 & uVar52),
                      (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126 ^ uVar149,
                                       (uint)uVar3 & uVar52 ^ uVar50));
      uVar3 = *(undefined8 *)((longlong)&(param_4->Inner_Clavicle_Side_Limit).field0_0x0 + 8);
      uVar114 = *(undefined8 *)&(param_4->Inner_Clavicle_Side_Limit).field0_0x0;
      dVar59 = FMath::ClampAngle<double>
                         (local_2cf8.Yaw,
                          (double)CONCAT44((uint)((ulonglong)uVar114 >> 0x20) & uVar126,
                                           (uint)uVar114 & uVar52),
                          (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126 ^ uVar149,
                                           (uint)uVar3 & uVar52 ^ uVar50));
      if (local_2cf8.Pitch <= 0.0) {
        uVar3 = *(undefined8 *)&(param_4->Inner_Clavicle_Vertical_Limit).field0_0x0;
        local_2cf8.Pitch =
             local_2cf8.Pitch +
             (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126,(uint)uVar3 & uVar52);
      }
      else {
        uVar3 = *(undefined8 *)((longlong)&(param_4->Inner_Clavicle_Vertical_Limit).field0_0x0 + 8);
        local_2cf8.Pitch =
             local_2cf8.Pitch -
             (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126,(uint)uVar3 & uVar52);
      }
      if (dVar59 <= 0.0) {
        uVar3 = *(undefined8 *)((longlong)&(param_4->Inner_Clavicle_Side_Limit).field0_0x0 + 8);
        local_2cf8.Yaw =
             (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126,(uint)uVar3 & uVar52) +
             dVar59;
      }
      else {
        uVar3 = *(undefined8 *)&(param_4->Inner_Clavicle_Side_Limit).field0_0x0;
        local_2cf8.Yaw =
             dVar59 - (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126,
                                       (uint)uVar3 & uVar52);
      }
    }
    else {
      local_28f0 = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[0];
      dStack_28e8 = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[1];
      local_28e0 = (param_3->Shoulder_Trans).Translation.ZW.m128d_f64[0];
      local_28d8 = (param_3->ThighTransform).Translation.XY.m128d_f64[0];
      dStack_28d0 = (param_3->ThighTransform).Translation.XY.m128d_f64[1];
      local_28c8 = (param_3->ThighTransform).Translation.ZW.m128d_f64[0];
      local_2920 = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[0];
      dStack_2918 = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[1];
      local_2910 = (param_3->Shoulder_Trans).Translation.ZW.m128d_f64[0];
      local_2908 = (param_3->Knee_Trans).Translation.XY.m128d_f64[0];
      dStack_2900 = (param_3->Knee_Trans).Translation.XY.m128d_f64[1];
      local_28f8 = (param_3->Knee_Trans).Translation.ZW.m128d_f64[0];
      local_2938 = (param_3->Knee_Trans).Translation.XY.m128d_f64[0];
      dStack_2930 = (param_3->Knee_Trans).Translation.XY.m128d_f64[1];
      local_2928 = (param_3->Knee_Trans).Translation.ZW.m128d_f64[0];
      local_2320 = (param_3->Hand_Trans).Translation.XY.m128d_f64[0];
      dStack_2318 = (param_3->Hand_Trans).Translation.XY.m128d_f64[1];
      local_2310 = (param_3->Hand_Trans).Translation.ZW.m128d_f64[0];
      local_2308 = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[0];
      dStack_2300 = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[1];
      local_22f8 = (param_3->Shoulder_Trans).Translation.ZW.m128d_f64[0];
      local_22f0 = local_cf8.Translation.XY.m128d_f64[0];
      dStack_22e8 = local_cf8.Translation.XY.m128d_f64[1];
      local_22e0 = local_cf8.Translation.ZW.m128d_f64[0];
      dVar59 = SQRT((dStack_2300 - local_cf8.Translation.XY.m128d_f64[1]) *
                    (dStack_2300 - local_cf8.Translation.XY.m128d_f64[1]) +
                    (local_2308 - local_cf8.Translation.XY.m128d_f64[0]) *
                    (local_2308 - local_cf8.Translation.XY.m128d_f64[0]) +
                    (local_22f8 - local_cf8.Translation.ZW.m128d_f64[0]) *
                    (local_22f8 - local_cf8.Translation.ZW.m128d_f64[0]));
      fVar113 = (float)(dVar59 + dVar59);
      uVar124 = SUB84(__real_3e45798ee0000000,0);
      uVar125 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      fVar90 = (float)(SQRT((dStack_28e8 - dStack_28d0) * (dStack_28e8 - dStack_28d0) +
                            (local_28f0 - local_28d8) * (local_28f0 - local_28d8) +
                            (local_28e0 - local_28c8) * (local_28e0 - local_28c8)) -
                      (SQRT((dStack_2930 - dStack_2318) * (dStack_2930 - dStack_2318) +
                            (local_2938 - local_2320) * (local_2938 - local_2320) +
                            (local_2928 - local_2310) * (local_2928 - local_2310)) +
                      SQRT((dStack_2918 - dStack_2900) * (dStack_2918 - dStack_2900) +
                           (local_2920 - local_2908) * (local_2920 - local_2908) +
                           (local_2910 - local_28f8) * (local_2910 - local_28f8))));
      if (fVar113 <= fVar90) {
        fVar90 = fVar113;
      }
      if (fVar90 <= __real_00000000) {
        fVar90 = __real_00000000;
      }
      dVar59 = (double)(fVar90 / fVar113);
      local_2cf8.Yaw = local_2cf8.Yaw * dVar59;
      local_2cf8.Roll = local_2cf8.Roll * dVar59;
      local_2cf8.Pitch = local_2cf8.Pitch * dVar59;
      uVar50 = (uint)__xmm_80000000000000008000000000000000;
      uVar149 = __xmm_80000000000000008000000000000000._4_4_;
    }
    fVar90 = (float)(param_4->Outer_Clavicle_Side_Limit).field0_0x0._s_0.Y;
    fVar113 = (float)(param_4->Outer_Clavicle_Side_Limit).field0_0x0._s_0.X;
    if (__real_4333e666 <= fVar90) {
      fVar90 = __real_4333e666;
    }
    if (__real_4333e666 <= fVar113) {
      fVar113 = __real_4333e666;
    }
    if (fVar90 <= __real_c333e666) {
      fVar90 = __real_c333e666;
    }
    if (fVar113 <= __real_c333e666) {
      fVar113 = __real_c333e666;
    }
    (param_4->Outer_Clavicle_Side_Limit).field0_0x0._s_0.X = (double)fVar113;
    (param_4->Outer_Clavicle_Side_Limit).field0_0x0._s_0.Y = (double)fVar90;
    uVar3 = *(undefined8 *)&(param_4->Outer_Clavicle_Vertical_Limit).field0_0x0;
    uVar114 = *(undefined8 *)((longlong)&(param_4->Outer_Clavicle_Vertical_Limit).field0_0x0 + 8);
    local_2cf8.Pitch =
         FMath::ClampAngle<double>
                   (local_2cf8.Pitch,
                    (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126 ^ uVar149,
                                     (uint)uVar3 & uVar52 ^ uVar50),
                    (double)CONCAT44((uint)((ulonglong)uVar114 >> 0x20) & uVar126,
                                     (uint)uVar114 & uVar52));
    uVar3 = *(undefined8 *)&(param_4->Outer_Clavicle_Side_Limit).field0_0x0;
    uVar114 = *(undefined8 *)((longlong)&(param_4->Outer_Clavicle_Side_Limit).field0_0x0 + 8);
    local_2cf8.Roll = 0.0;
    local_2cf8.Yaw =
         FMath::ClampAngle<double>
                   (local_2cf8.Yaw,
                    (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126 ^ uVar149,
                                     (uint)uVar3 & uVar52 ^ uVar50),
                    (double)CONCAT44((uint)((ulonglong)uVar114 >> 0x20) & uVar126,
                                     (uint)uVar114 & uVar52));
    uVar3 = *(undefined8 *)&(param_4->Outer_Clavicle_Vertical_Limit).field0_0x0;
    if ((local_2cf8.Pitch !=
         (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126 ^ uVar149,
                          (uint)uVar3 & uVar52 ^ uVar50)) &&
       (uVar3 = *(undefined8 *)((longlong)&(param_4->Outer_Clavicle_Vertical_Limit).field0_0x0 + 8),
       local_2cf8.Pitch !=
       (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126,(uint)uVar3 & uVar52))) {
      (param_4->last_clavicle_rotation).Pitch = local_2cf8.Pitch;
    }
    uVar3 = *(undefined8 *)&(param_4->Outer_Clavicle_Side_Limit).field0_0x0;
    if ((local_2cf8.Yaw !=
         (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126 ^ uVar149,
                          (uint)uVar3 & uVar52 ^ uVar50)) &&
       (uVar3 = *(undefined8 *)((longlong)&(param_4->Outer_Clavicle_Side_Limit).field0_0x0 + 8),
       local_2cf8.Yaw !=
       (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar126,(uint)uVar3 & uVar52))) {
      (param_4->last_clavicle_rotation).Yaw = local_2cf8.Yaw;
    }
    (param_4->last_clavicle_rotation).Roll = local_2cf8.Roll;
    pTVar44 = UE::Math::TRotator<double>::Quaternion(&param_4->last_clavicle_rotation,&local_1078);
    local_2718.X = local_cf8.Rotation.XY.m128d_f64[0];
    local_2718.Y = local_cf8.Rotation.XY.m128d_f64[1];
    local_2718.Z = local_cf8.Rotation.ZW.m128d_f64[0];
    local_2718.W = local_cf8.Rotation.ZW.m128d_f64[1];
    pTVar44 = UE::Math::TQuat<double>::operator*(pTVar44,&local_10b8,&local_2718);
    local_cf8.Rotation.ZW.m128d_f64[0] = pTVar44->Z;
    local_cf8.Rotation.ZW.m128d_f64[1] = pTVar44->W;
    local_cf8.Rotation.XY.m128d_f64[0] = pTVar44->X;
    local_cf8.Rotation.XY.m128d_f64[1] = pTVar44->Y;
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,FVar39);
    pTVar43 = UE::Math::TTransform<double>::Inverse(pTVar43,&local_148);
    local_748.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_748.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_748.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_748.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_748.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_748.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_748.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_748.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_748.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_748.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_748.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_748.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_748,pTVar43,&local_cf8);
    pFVar5 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
    local_b78.Rotation.XY.m128d_f64[0] = local_748.Rotation.XY.m128d_f64[0];
    local_b78.Rotation.XY.m128d_f64[1] = local_748.Rotation.XY.m128d_f64[1];
    local_b78.Rotation.ZW.m128d_f64[0] = local_748.Rotation.ZW.m128d_f64[0];
    local_b78.Rotation.ZW.m128d_f64[1] = local_748.Rotation.ZW.m128d_f64[1];
    local_b78.Translation.XY.m128d_f64[1] = local_748.Translation.XY.m128d_f64[1];
    local_b78.Translation.XY.m128d_f64[0] = local_748.Translation.XY.m128d_f64[0];
    local_b78.Translation.ZW.m128d_f64[1] = local_748.Translation.ZW.m128d_f64[1];
    local_b78.Translation.ZW.m128d_f64[0] = local_748.Translation.ZW.m128d_f64[0];
    local_b78.Scale3D.XY.m128d_f64[1] = local_748.Scale3D.XY.m128d_f64[1];
    local_b78.Scale3D.XY.m128d_f64[0] = local_748.Scale3D.XY.m128d_f64[0];
    local_b78.Scale3D.ZW.m128d_f64[1] = local_748.Scale3D.ZW.m128d_f64[1];
    local_b78.Scale3D.ZW.m128d_f64[0] = local_748.Scale3D.ZW.m128d_f64[0];
    local_948 = local_cf8.Rotation.XY.m128d_f64[0];
    dStack_940 = local_cf8.Rotation.XY.m128d_f64[1];
    local_938 = local_cf8.Rotation.ZW.m128d_f64[0];
    dStack_930 = local_cf8.Rotation.ZW.m128d_f64[1];
    local_928 = local_cf8.Translation.XY.m128d_f64[0];
    dStack_920 = local_cf8.Translation.XY.m128d_f64[1];
    local_918 = local_cf8.Translation.ZW.m128d_f64[0];
    dStack_910 = local_cf8.Translation.ZW.m128d_f64[1];
    local_908 = local_cf8.Scale3D.XY.m128d_f64[0];
    dStack_900 = local_cf8.Scale3D.XY.m128d_f64[1];
    local_8f8 = local_cf8.Scale3D.ZW.m128d_f64[0];
    dStack_8f0 = local_cf8.Scale3D.ZW.m128d_f64[1];
    local_958 = FVar39;
    if (((pFVar5 <= &local_958) && (&local_958 < pFVar5 + (longlong)param_6->ArrayMax * 0x1c)) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar38)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar40 = param_6->ArrayNum;
    if (iVar40 == param_6->ArrayMax) {
      iVar40 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    param_6->ArrayNum = iVar40 + 1;
    lVar53 = (longlong)iVar40 * 0x70;
    pFVar139 = (param_6->AllocatorInstance).Data;
    *(ulonglong *)(pFVar139 + lVar53) = CONCAT44(uStack_954,local_958);
    *(undefined8 *)(pFVar139 + lVar53 + 8) = uStack_950;
    *(double *)(pFVar139 + lVar53 + 0x10) = local_948;
    *(double *)(pFVar139 + lVar53 + 0x10 + 8) = dStack_940;
    *(double *)(pFVar139 + lVar53 + 0x20) = local_938;
    *(double *)(pFVar139 + lVar53 + 0x20 + 8) = dStack_930;
    *(double *)(pFVar139 + lVar53 + 0x30) = local_928;
    *(double *)(pFVar139 + lVar53 + 0x30 + 8) = dStack_920;
    *(double *)(pFVar139 + lVar53 + 0x40) = local_918;
    *(double *)(pFVar139 + lVar53 + 0x40 + 8) = dStack_910;
    *(double *)(pFVar139 + lVar53 + 0x50) = local_908;
    *(double *)(pFVar139 + lVar53 + 0x50 + 8) = dStack_900;
    *(double *)(pFVar139 + lVar53 + 0x60) = local_8f8;
    *(double *)(pFVar139 + lVar53 + 0x60 + 8) = dStack_8f0;
  }
  FCSPose<FCompactPose>::GetLocalSpaceTransform(&param_1->Pose,&local_268,local_2d54);
  local_e18.Rotation.XY.m128d_f64[0] = (param_3->Knee_Trans).Rotation.XY.m128d_f64[0];
  local_e18.Rotation.XY.m128d_f64[1] = *(double *)((param_3->Knee_Trans).Rotation.XY.m128d_f64 + 1);
  local_e18.Rotation.ZW.m128d_f64[0] = (param_3->Knee_Trans).Rotation.ZW.m128d_f64[0];
  local_e18.Rotation.ZW.m128d_f64[1] = *(double *)((param_3->Knee_Trans).Rotation.ZW.m128d_f64 + 1);
  local_e18.Translation.XY.m128d_f64[0] = (param_3->Knee_Trans).Translation.XY.m128d_f64[0];
  local_e18.Translation.XY.m128d_f64[1] =
       *(double *)((param_3->Knee_Trans).Translation.XY.m128d_f64 + 1);
  local_e18.Translation.ZW.m128d_f64[0] = (param_3->Knee_Trans).Translation.ZW.m128d_f64[0];
  local_e18.Translation.ZW.m128d_f64[1] = (param_3->Knee_Trans).Translation.ZW.m128d_f64[1];
  local_e18.Scale3D.XY.m128d_f64[0] = (param_3->Knee_Trans).Scale3D.XY.m128d_f64[0];
  local_e18.Scale3D.XY.m128d_f64[1] = (param_3->Knee_Trans).Scale3D.XY.m128d_f64[1];
  local_e18.Scale3D.ZW.m128d_f64[0] = (param_3->Knee_Trans).Scale3D.ZW.m128d_f64[0];
  local_e18.Scale3D.ZW.m128d_f64[1] = *(double *)((param_3->Knee_Trans).Scale3D.ZW.m128d_f64 + 1);
  local_2ba8.Rotation.XY.m128d_f64[0] = (param_3->Shoulder_Trans).Rotation.XY.m128d_f64[0];
  local_2ba8.Rotation.XY.m128d_f64[1] =
       *(double *)((param_3->Shoulder_Trans).Rotation.XY.m128d_f64 + 1);
  local_2ba8.Rotation.ZW.m128d_f64[0] = (param_3->Shoulder_Trans).Rotation.ZW.m128d_f64[0];
  local_2ba8.Rotation.ZW.m128d_f64[1] =
       *(double *)((param_3->Shoulder_Trans).Rotation.ZW.m128d_f64 + 1);
  local_2ba8.Translation.XY.m128d_f64[0] = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[0];
  local_2ba8.Translation.XY.m128d_f64[1] = (param_3->Shoulder_Trans).Translation.XY.m128d_f64[1];
  local_2ba8.Translation.ZW.m128d_f64[0] = (param_3->Shoulder_Trans).Translation.ZW.m128d_f64[0];
  local_2ba8.Translation.ZW.m128d_f64[1] = (param_3->Shoulder_Trans).Translation.ZW.m128d_f64[1];
  local_2ba8.Scale3D.XY.m128d_f64[0] = (param_3->Shoulder_Trans).Scale3D.XY.m128d_f64[0];
  local_2ba8.Scale3D.XY.m128d_f64[1] =
       *(double *)((param_3->Shoulder_Trans).Scale3D.XY.m128d_f64 + 1);
  local_2ba8.Scale3D.ZW.m128d_f64[0] = (param_3->Shoulder_Trans).Scale3D.ZW.m128d_f64[0];
  local_2ba8.Scale3D.ZW.m128d_f64[1] =
       *(double *)((param_3->Shoulder_Trans).Scale3D.ZW.m128d_f64 + 1);
  local_2ca8.Rotation.XY.m128d_f64[0] = (param_3->Hand_Trans).Rotation.XY.m128d_f64[0];
  local_2ca8.Rotation.XY.m128d_f64[1] = (param_3->Hand_Trans).Rotation.XY.m128d_f64[1];
  local_2ca8.Rotation.ZW.m128d_f64[0] = (param_3->Hand_Trans).Rotation.ZW.m128d_f64[0];
  local_2ca8.Rotation.ZW.m128d_f64[1] = (param_3->Hand_Trans).Rotation.ZW.m128d_f64[1];
  local_2ca8.Translation.XY.m128d_f64[0] = (param_3->Hand_Trans).Translation.XY.m128d_f64[0];
  local_2ca8.Translation.XY.m128d_f64[1] = (param_3->Hand_Trans).Translation.XY.m128d_f64[1];
  local_2ca8.Translation.ZW.m128d_f64[0] = (param_3->Hand_Trans).Translation.ZW.m128d_f64[0];
  local_2ca8.Translation.ZW.m128d_f64[1] = (param_3->Hand_Trans).Translation.ZW.m128d_f64[1];
  local_2ca8.Scale3D.XY.m128d_f64[0] = (param_3->Hand_Trans).Scale3D.XY.m128d_f64[0];
  local_2ca8.Scale3D.XY.m128d_f64[1] = (param_3->Hand_Trans).Scale3D.XY.m128d_f64[1];
  local_2ca8.Scale3D.ZW.m128d_f64[0] = (param_3->Hand_Trans).Scale3D.ZW.m128d_f64[0];
  local_2ca8.Scale3D.ZW.m128d_f64[1] = (param_3->Hand_Trans).Scale3D.ZW.m128d_f64[1];
  if (((!(BADTYPE)(param_4->Clavicle_Bone).bUseSkeletonIndex) &&
      ((param_4->Clavicle_Bone).CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) &&
     (param_3->Separate_Arms_Logic_Used != false)) {
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
    local_568.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_568.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_568.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_568.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_568.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_568.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_568.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_568.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_568.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_568.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_568.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_568.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_568,pTVar43,&local_b78);
    local_e18.Rotation.XY.m128d_f64[0] = local_568.Rotation.XY.m128d_f64[0];
    local_e18.Rotation.XY.m128d_f64[1] = local_568.Rotation.XY.m128d_f64[1];
    local_e18.Rotation.ZW.m128d_f64[0] = local_568.Rotation.ZW.m128d_f64[0];
    local_e18.Rotation.ZW.m128d_f64[1] = local_568.Rotation.ZW.m128d_f64[1];
    local_e18.Translation.XY.m128d_f64[0] = local_568.Translation.XY.m128d_f64[0];
    local_e18.Translation.XY.m128d_f64[1] = local_568.Translation.XY.m128d_f64[1];
    local_e18.Translation.ZW.m128d_f64[0] = local_568.Translation.ZW.m128d_f64[0];
    local_e18.Translation.ZW.m128d_f64[1] = local_568.Translation.ZW.m128d_f64[1];
    local_e18.Scale3D.XY.m128d_f64[0] = local_568.Scale3D.XY.m128d_f64[0];
    local_e18.Scale3D.XY.m128d_f64[1] = local_568.Scale3D.XY.m128d_f64[1];
    local_e18.Scale3D.ZW.m128d_f64[0] = local_568.Scale3D.ZW.m128d_f64[0];
    local_e18.Scale3D.ZW.m128d_f64[1] = local_568.Scale3D.ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d50);
    local_5c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_5c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_5c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_5c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_5c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_5c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_5c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_5c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_5c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_5c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_5c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_5c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_5c8,pTVar43,&local_b78);
    local_2ba8.Rotation.XY.m128d_f64[0] = local_5c8.Rotation.XY.m128d_f64[0];
    local_2ba8.Rotation.XY.m128d_f64[1] = local_5c8.Rotation.XY.m128d_f64[1];
    local_2ba8.Rotation.ZW.m128d_f64[0] = local_5c8.Rotation.ZW.m128d_f64[0];
    local_2ba8.Rotation.ZW.m128d_f64[1] = local_5c8.Rotation.ZW.m128d_f64[1];
    local_2ba8.Translation.XY.m128d_f64[0] = local_5c8.Translation.XY.m128d_f64[0];
    local_2ba8.Translation.XY.m128d_f64[1] = local_5c8.Translation.XY.m128d_f64[1];
    local_2ba8.Translation.ZW.m128d_f64[0] = local_5c8.Translation.ZW.m128d_f64[0];
    local_2ba8.Translation.ZW.m128d_f64[1] = local_5c8.Translation.ZW.m128d_f64[1];
    local_2ba8.Scale3D.XY.m128d_f64[0] = local_5c8.Scale3D.XY.m128d_f64[0];
    local_2ba8.Scale3D.XY.m128d_f64[1] = local_5c8.Scale3D.XY.m128d_f64[1];
    local_2ba8.Scale3D.ZW.m128d_f64[0] = local_5c8.Scale3D.ZW.m128d_f64[0];
    local_2ba8.Scale3D.ZW.m128d_f64[1] = local_5c8.Scale3D.ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d54);
    local_628.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_628.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_628.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_628.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_628.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_628.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_628.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_628.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_628.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_628.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_628.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_628.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_628,pTVar43,&local_b78);
    local_2ca8.Rotation.XY.m128d_f64[0] = local_628.Rotation.XY.m128d_f64[0];
    local_2ca8.Rotation.XY.m128d_f64[1] = local_628.Rotation.XY.m128d_f64[1];
    local_2ca8.Rotation.ZW.m128d_f64[0] = local_628.Rotation.ZW.m128d_f64[0];
    local_2ca8.Rotation.ZW.m128d_f64[1] = local_628.Rotation.ZW.m128d_f64[1];
    local_2ca8.Translation.XY.m128d_f64[0] = local_628.Translation.XY.m128d_f64[0];
    local_2ca8.Translation.XY.m128d_f64[1] = local_628.Translation.XY.m128d_f64[1];
    local_2ca8.Translation.ZW.m128d_f64[0] = local_628.Translation.ZW.m128d_f64[0];
    local_2ca8.Translation.ZW.m128d_f64[1] = local_628.Translation.ZW.m128d_f64[1];
    local_2ca8.Scale3D.XY.m128d_f64[0] = local_628.Scale3D.XY.m128d_f64[0];
    local_2ca8.Scale3D.XY.m128d_f64[1] = local_628.Scale3D.XY.m128d_f64[1];
    local_2ca8.Scale3D.ZW.m128d_f64[0] = local_628.Scale3D.ZW.m128d_f64[0];
    local_2ca8.Scale3D.ZW.m128d_f64[1] = local_628.Scale3D.ZW.m128d_f64[1];
  }
  pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
  local_2778.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
  local_2778.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
  local_2778.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
  local_2778.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
  local_2778.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
  local_2778.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
  dVar59 = (pTVar43->Translation).ZW.m128d_f64[0];
  local_2778.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
  local_2778.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
  local_2778.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
  local_2778.Translation.ZW.m128d_f64[0]._0_4_ = SUB84(dVar59,0);
  local_2778.Translation.ZW.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)dVar59 >> 0x20);
  local_2778.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
  local_2778.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
  pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d54);
  local_2a98._8_8_ = local_2ba8.Translation.XY.m128d_f64[1];
  local_2a98._0_8_ = local_2ba8.Translation.XY.m128d_f64[0];
  local_2d28 = (FWeakObjectPtr)(pTVar43->Rotation).XY.m128d_f64[0];
  FStack_2d20 = *(FWeakObjectPtr *)((pTVar43->Rotation).XY.m128d_f64 + 1);
  local_2ca8.Rotation.XY.m128d_f64 = *&(pTVar43->Rotation).XY.m128d_f64;
  p_Var1 = &(pTVar43->Rotation).ZW;
  local_2d18 = (FWeakObjectPtr)p_Var1->m128d_f64[0];
  FStack_2d10 = *(FWeakObjectPtr *)((pTVar43->Rotation).ZW.m128d_f64 + 1);
  local_2ca8.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
  local_2298 = (pTVar43->Scale3D).XY.m128d_f64[0];
  dStack_2290 = (pTVar43->Scale3D).XY.m128d_f64[1];
  local_22b8 = (pTVar43->Translation).XY.m128d_f64[0];
  dStack_22b0 = (pTVar43->Translation).XY.m128d_f64[1];
  local_2d08.Data = (FScriptContainerElement *)(pTVar43->Scale3D).XY.m128d_f64[0];
  FStack_2d00.Data = (FScriptContainerElement *)(pTVar43->Scale3D).XY.m128d_f64[1];
  local_2d48 = (TReferenceControllerBase<1> *)(pTVar43->Scale3D).ZW.m128d_f64[0];
  pTStack_2d40 = (TReferenceControllerBase<1> *)(pTVar43->Scale3D).ZW.m128d_f64[1];
  local_2288 = (pTVar43->Scale3D).ZW.m128d_f64[0];
  dStack_2280 = (pTVar43->Scale3D).ZW.m128d_f64[1];
  local_2a80 = (ForElementType<unsigned_int>)local_e18.Translation.XY.m128d_f64[0];
  FStack_2a78 = (ForElementType<unsigned_int>)local_e18.Translation.XY.m128d_f64[1];
  local_22a8 = (pTVar43->Translation).ZW.m128d_f64[0];
  dStack_22a0 = (pTVar43->Translation).ZW.m128d_f64[1];
  local_2a70 = (FScriptContainerElement *)local_e18.Translation.ZW.m128d_f64[0];
  local_2a58.ReferenceController =
       (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
  local_2b10._s_0.X =
       local_2ca8.Translation.XY.m128d_f64[0] - local_2ba8.Translation.XY.m128d_f64[0];
  local_2610 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
  local_2a68 = local_2ca8.Translation.XY.m128d_f64[0];
  pFStack_2a60 = (FSkelMeshRefPoseOverride *)local_2ca8.Translation.XY.m128d_f64[1];
  local_2620 = local_2ca8.Translation.XY.m128d_f64[0];
  pFStack_2618 = (FSkelMeshRefPoseOverride *)local_2ca8.Translation.XY.m128d_f64[1];
  auVar14._4_8_ = local_2ca8.Translation.XY.m128d_f64[1];
  auVar14._0_4_ = (int)((ulonglong)local_2ba8.Translation.XY.m128d_f64[0] >> 0x20);
  auVar131._0_8_ = auVar14._0_8_ << 0x20;
  auVar131._8_4_ = SUB84(local_2ba8.Translation.XY.m128d_f64[1],0);
  auVar131._12_4_ = (int)((ulonglong)local_2ba8.Translation.XY.m128d_f64[1] >> 0x20);
  local_2b10._s_0.Z =
       local_2ca8.Translation.ZW.m128d_f64[0] - local_2ba8.Translation.ZW.m128d_f64[0];
  local_2b10._s_0.Y = local_2ca8.Translation.XY.m128d_f64[1] - auVar131._8_8_;
  local_2a88 = (ForElementType<unsigned_int>)local_2ba8.Translation.ZW.m128d_f64[0];
  local_2628 = (ForElementType<unsigned_int>)local_2ba8.Translation.ZW.m128d_f64[0];
  local_25f8 = (ForElementType<unsigned_int>)local_2ba8.Translation.ZW.m128d_f64[0];
  local_25f0 = (param_3->ThighTransform).Translation.XY.m128d_f64[0];
  dStack_25e8 = (param_3->ThighTransform).Translation.XY.m128d_f64[1];
  local_25e0 = (param_3->ThighTransform).Translation.ZW.m128d_f64[0];
  local_2af8._s_0.X = local_25f0 - local_2ba8.Translation.XY.m128d_f64[0];
  local_2af8._s_0.Y = dStack_25e8 - local_2ba8.Translation.XY.m128d_f64[1];
  local_25c8 = (ForElementType<unsigned_int>)local_2ba8.Translation.ZW.m128d_f64[0];
  local_2af8._s_0.Z = local_25e0 - local_2ba8.Translation.ZW.m128d_f64[0];
  local_2638 = local_2a98;
  local_2608 = local_2a98;
  local_25d8 = local_2a98;
  UE::Math::TQuat<double>::FindBetweenVectors
            (&local_1158,(TVector<double> *)&local_2af8._s_0,(TVector<double> *)&local_2b10._s_0);
  pTVar2 = &param_3->LookAt_Axis_Input;
  local_bd8.Rotation.XY.m128d_f64[0] = local_e18.Rotation.XY.m128d_f64[0];
  local_bd8.Rotation.XY.m128d_f64[1] = local_e18.Rotation.XY.m128d_f64[1];
  pTVar44 = &local_29d8;
  local_bd8.Rotation.ZW.m128d_f64[0] = local_e18.Rotation.ZW.m128d_f64[0];
  local_bd8.Rotation.ZW.m128d_f64[1] = local_e18.Rotation.ZW.m128d_f64[1];
  local_bd8.Translation.XY.m128d_f64[0] = local_e18.Translation.XY.m128d_f64[0];
  local_bd8.Translation.XY.m128d_f64[1] = local_e18.Translation.XY.m128d_f64[1];
  local_bd8.Translation.ZW.m128d_f64[0] = local_e18.Translation.ZW.m128d_f64[0];
  local_bd8.Translation.ZW.m128d_f64[1] = local_e18.Translation.ZW.m128d_f64[1];
  local_bd8.Scale3D.XY.m128d_f64[0] = local_e18.Scale3D.XY.m128d_f64[0];
  local_bd8.Scale3D.XY.m128d_f64[1] = local_e18.Scale3D.XY.m128d_f64[1];
  local_bd8.Scale3D.ZW.m128d_f64[0] = local_e18.Scale3D.ZW.m128d_f64[0];
  local_bd8.Scale3D.ZW.m128d_f64[1] = local_e18.Scale3D.ZW.m128d_f64[1];
  pTVar45 = UE::Math::TQuat<double>::FindBetweenNormals
                      (pTVar44,pTVar2,&param_3->Reference_Constant_Forward_Axis_Input);
  uVar41 = SUB84(pTVar45,0);
  uVar49 = SUB84(pTVar44,0);
  local_2590._8_8_ = local_e18.Translation.XY.m128d_f64[1];
  local_2590._0_8_ = local_e18.Translation.XY.m128d_f64[0];
  uVar123 = (undefined4)((ulonglong)local_e18.Translation.XY.m128d_f64[1] >> 0x20);
  local_25c0._8_8_ = local_2ba8.Translation.XY.m128d_f64[1];
  local_25c0._0_8_ = local_2ba8.Translation.XY.m128d_f64[0];
  uVar122 = SUB84(local_2ba8.Translation.XY.m128d_f64[1],0);
  uVar154 = (undefined4)((ulonglong)local_2ba8.Translation.XY.m128d_f64[1] >> 0x20);
  local_25a8._8_8_ = local_2ca8.Translation.XY.m128d_f64[1];
  local_25a8._0_8_ = local_2ca8.Translation.XY.m128d_f64[0];
  local_448.Translation.XY.m128d_f64[0] =
       (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
  local_448.Translation.XY.m128d_f64[1] =
       (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
  local_448.Translation.ZW.m128d_f64[0] =
       (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
  local_448.Translation.ZW.m128d_f64[1] =
       (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
  local_448.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0];
  local_448.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1];
  local_448.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0];
  local_448.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1];
  local_448.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_448.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_22d8 = UE::Math::TQuat<double>::Identity.X;
  dStack_22d0 = UE::Math::TQuat<double>::Identity.Y;
  local_448.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_448.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_22c8 = UE::Math::TQuat<double>::Identity.Z;
  dStack_22c0 = UE::Math::TQuat<double>::Identity.W;
  local_2398 = *(undefined1 (*) [16])&(param_3->Elbow_Pole_Offset).field0_0x0;
  local_2388 = (param_3->Elbow_Pole_Offset).field0_0x0._s_0.Z;
  local_2580 = (FScriptContainerElement *)local_e18.Translation.ZW.m128d_f64[0];
  local_2568 = (FScriptContainerElement *)local_e18.Translation.ZW.m128d_f64[0];
  local_2598 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
  auVar15._4_8_ = local_2ca8.Translation.ZW.m128d_f64[1];
  auVar15._0_4_ = (int)((ulonglong)local_2ca8.Translation.XY.m128d_f64[0] >> 0x20);
  auVar67._0_8_ = auVar15._0_8_ << 0x20;
  auVar67._8_4_ = SUB84(local_2ca8.Translation.XY.m128d_f64[1],0);
  auVar67._12_4_ = (int)((ulonglong)local_2ca8.Translation.XY.m128d_f64[1] >> 0x20);
  local_25b0 = (ForElementType<unsigned_int>)local_2ba8.Translation.ZW.m128d_f64[0];
  auVar16._4_8_ = local_2ca8.Translation.XY.m128d_f64[1];
  auVar16._0_4_ = local_2398._4_4_;
  auVar63._0_8_ = auVar16._0_8_ << 0x20;
  auVar63._8_4_ = local_2398._8_4_;
  auVar63._12_4_ = local_2398._12_4_;
  uVar114 = (local_2ba8.Translation.ZW.m128d_f64[0] + local_2ca8.Translation.ZW.m128d_f64[0] +
            local_e18.Translation.ZW.m128d_f64[0]) * __real_3fd5555555555555 -
            (local_e18.Translation.ZW.m128d_f64[0] + local_2388);
  auVar17._4_8_ = local_e18.Translation.ZW.m128d_f64[1];
  auVar17._0_4_ = (int)((ulonglong)local_e18.Translation.XY.m128d_f64[0] >> 0x20);
  auVar92._0_8_ = auVar17._0_8_ << 0x20;
  auVar92._8_4_ = SUB84(local_e18.Translation.XY.m128d_f64[1],0);
  auVar92._12_4_ = uVar123;
  auVar93._0_8_ = local_2590._4_8_ << 0x20;
  auVar93._8_4_ = SUB84(local_e18.Translation.XY.m128d_f64[1],0);
  auVar93._12_4_ = uVar123;
  uVar141 = (local_2ba8.Translation.XY.m128d_f64[1] + auVar67._8_8_ + auVar92._8_8_) *
            __real_3fd5555555555555 - (auVar93._8_8_ + auVar63._8_8_);
  local_2c18._8_4_ = uVar122;
  local_2c18._0_8_ = uVar141;
  local_2c18._12_4_ = uVar154;
  uVar3 = (local_2ba8.Translation.XY.m128d_f64[0] + local_2ca8.Translation.XY.m128d_f64[0] +
          local_e18.Translation.XY.m128d_f64[0]) * __real_3fd5555555555555 -
          (local_e18.Translation.XY.m128d_f64[0] + local_2398._0_8_);
  unique0x100010b9 = uVar122;
  local_2c30 = (FWeakObjectPtr)uVar3;
  unique0x100010bd = uVar154;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = __real_3ff0000000000000;
  dVar59 = (double)uVar141 * (double)uVar141 + (double)uVar3 * (double)uVar3 +
           (double)uVar114 * (double)uVar114;
  if (dVar59 != __real_3ff0000000000000) {
    if ((double)CONCAT44(uVar125,uVar124) <= dVar59) {
      auVar64._8_4_ = uVar122;
      auVar64._0_8_ = dVar59;
      auVar64._12_4_ = uVar154;
      local_27d0 = __real_3ff0000000000000 / SQRT(dVar59);
      uVar3 = (double)uVar3 * local_27d0;
      uVar141 = (double)uVar141 * local_27d0;
      uVar114 = local_27d0 * (double)uVar114;
      uVar9 = local_2ba8.Translation.XY.m128d_f64[1];
    }
    else {
      auVar64._8_8_ = 0;
      auVar64._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2cb0.Data =
           (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar141 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar114 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    uVar124 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_2c18._8_4_ = (int)uVar9;
    local_2c18._0_8_ = uVar141;
    local_2c18._12_4_ = uVar124;
    unique0x100010dd = (int)uVar9;
    local_2c30 = (FWeakObjectPtr)uVar3;
    unique0x100010e1 = uVar124;
  }
  auVar142._8_8_ = local_2778.Translation.XY.m128d_f64[1];
  auVar142._0_8_ = local_2778.Translation.XY.m128d_f64[0];
  local_2578 = local_2590;
  local_2d38 = (ForElementType<unsigned_int>)uVar114;
  if (param_3->is_reach_mode == false) {
    local_24e8 = (ForElementType<unsigned_int>)local_bd8.Translation.XY.m128d_f64[0];
    FStack_24e0 = (ForElementType<unsigned_int>)local_bd8.Translation.XY.m128d_f64[1];
    local_bd8.Translation.XY.m128d_f64[0] =
         local_bd8.Translation.XY.m128d_f64[0] - (double)uVar3 * __real_408f400000000000;
    local_24d8 = (FScriptContainerElement *)local_bd8.Translation.ZW.m128d_f64[0];
    pFVar139 = (FScriptContainerElement *)
               (local_bd8.Translation.XY.m128d_f64[1] - (double)uVar141 * __real_408f400000000000);
    local_bd8.Translation.ZW.m128d_f64[0] =
         local_bd8.Translation.ZW.m128d_f64[0] - (double)uVar114 * __real_408f400000000000;
    local_24d0 = local_bd8.Translation.XY.m128d_f64[0];
    pFStack_24c8 = pFVar139;
    local_24c0 = local_bd8.Translation.ZW.m128d_f64[0];
  }
  else {
    if (param_3->Use_NSEW_Poles == false) {
      auVar19._4_8_ = auVar64._8_8_;
      auVar19._0_4_ = (int)((ulonglong)local_2778.Translation.XY.m128d_f64[0] >> 0x20);
      auVar65._0_8_ = auVar19._0_8_ << 0x20;
      auVar65._8_4_ = SUB84(local_2778.Translation.XY.m128d_f64[1],0);
      auVar65._12_4_ = (int)((ulonglong)local_2778.Translation.XY.m128d_f64[1] >> 0x20);
      local_bd8.Translation.XY.m128d_f64[0] =
           local_2398._0_8_ * __real_4024000000000000 + local_2778.Translation.XY.m128d_f64[0];
      local_bd8.Translation.ZW.m128d_f64[0] =
           local_2388 * __real_4024000000000000 +
           (double)CONCAT44(local_2778.Translation.ZW.m128d_f64[0]._4_4_,
                            local_2778.Translation.ZW.m128d_f64[0]._0_4_);
      pFVar139 = (FScriptContainerElement *)
                 (local_2398._8_8_ * __real_4024000000000000 + auVar65._8_8_);
      local_2530 = local_2398;
      local_2520 = local_2388;
      local_2518 = auVar142;
      local_2508 = (double)CONCAT44(local_2778.Translation.ZW.m128d_f64[0]._4_4_,
                                    local_2778.Translation.ZW.m128d_f64[0]._0_4_);
      local_2500 = local_bd8.Translation.XY.m128d_f64[0];
      pFStack_24f8 = pFVar139;
      local_24f0 = local_bd8.Translation.ZW.m128d_f64[0];
    }
    else {
      local_2cb0.Data = (FScriptContainerElement *)(param_3->LookAt_Axis_Input).field0_0x0._s_0.Z;
      auVar96 = *(undefined1 (*) [16])&pTVar2->field0_0x0;
      this = &local_2ae0;
      local_2560 = (param_3->ThighTransform).Translation.XY.m128d_f64[0];
      dVar60 = (param_3->ThighTransform).Translation.XY.m128d_f64[1];
      local_2550 = (param_3->ThighTransform).Translation.ZW.m128d_f64[0];
      dVar59 = (param_3->LookAt_Axis_Input).field0_0x0._s_0.Z;
      local_2ae0._s_0.X = local_2560 - local_2ba8.Translation.XY.m128d_f64[0];
      dVar115 = (param_3->Up_Vector_Val).field0_0x0._s_0.Y;
      dVar140 = (param_3->LookAt_Axis_Input).field0_0x0._s_0.Y;
      dVar91 = (param_3->Up_Vector_Val).field0_0x0._s_0.Z;
      dVar128 = (pTVar2->field0_0x0)._s_0.X;
      dVar61 = (param_3->Up_Vector_Val).field0_0x0._s_0.X;
      local_2ae0._s_0.Z = local_2550 - local_2ba8.Translation.ZW.m128d_f64[0];
      local_2ae0._s_0.Y = dVar60 - local_2ba8.Translation.XY.m128d_f64[1];
      local_2538 = (ForElementType<unsigned_int>)local_2ba8.Translation.ZW.m128d_f64[0];
      dStack_2558 = dVar60;
      local_2548 = local_25c0;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&this->_s_0,(TVector<double> *)&local_2ac8._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      uVar49 = SUB84(this,0);
      auVar18._4_8_ = dVar60;
      auVar18._0_4_ = auVar96._4_4_;
      auVar94._0_8_ = auVar18._0_8_ << 0x20;
      auVar94._8_4_ = auVar96._8_4_;
      auVar94._12_4_ = auVar96._12_4_;
      dVar60 = UKismetMathLibrary::DegAcos
                         (local_2ac8._s_0.Y * auVar94._8_8_ + local_2ac8._s_0.X * auVar96._0_8_ +
                          local_2ac8._s_0.Z * (double)local_2cb0.Data);
      local_2d4c = (float)(dVar60 * __real_3f76c16c16c16c17);
      dVar59 = UKismetMathLibrary::DegAcos
                         ((dVar61 * dVar59 - dVar128 * dVar91) * local_2ac8._s_0.Y +
                          (dVar91 * dVar140 - dVar115 * dVar59) * local_2ac8._s_0.X +
                          (dVar128 * dVar115 - dVar61 * dVar140) * local_2ac8._s_0.Z);
      dVar115 = (double)local_2d4c;
      dVar59 = (double)(float)(dVar59 * __real_3f76c16c16c16c17);
      if (param_4->is_this_right_hand == false) {
        dVar140 = (param_4->South_Pole_Offset).field0_0x0._s_0.X;
        dVar91 = (param_4->West_Pole_Offset).field0_0x0._s_0.Y * __real_4024000000000000;
        dVar61 = (param_4->South_Pole_Offset).field0_0x0._s_0.Y * __real_4024000000000000;
        dVar60 = (param_4->West_Pole_Offset).field0_0x0._s_0.Z * __real_4024000000000000;
        dVar103 = (param_4->South_Pole_Offset).field0_0x0._s_0.Z * __real_4024000000000000;
        dVar128 = (param_4->West_Pole_Offset).field0_0x0._s_0.X * __real_4024000000000000;
        dVar61 = ((param_4->East_Pole_Offset).field0_0x0._s_0.Y * __real_4024000000000000 - dVar91)
                 * dVar115 + dVar91 +
                 ((param_4->North_Pole_Offset).field0_0x0._s_0.Y * __real_4024000000000000 - dVar61)
                 * dVar59 + dVar61;
        local_bd8.Translation.ZW.m128d_f64[0] =
             ((param_4->East_Pole_Offset).field0_0x0._s_0.Z * __real_4024000000000000 - dVar60) *
             dVar115 + dVar60 +
             ((param_4->North_Pole_Offset).field0_0x0._s_0.Z * __real_4024000000000000 - dVar103) *
             dVar59 + dVar103;
        dVar91 = (param_4->North_Pole_Offset).field0_0x0._s_0.X;
        dVar128 = ((param_4->East_Pole_Offset).field0_0x0._s_0.X * __real_4024000000000000 - dVar128
                  ) * dVar115 + dVar128;
      }
      else {
        dVar140 = (param_4->North_Pole_Offset).field0_0x0._s_0.X;
        dVar61 = (param_4->North_Pole_Offset).field0_0x0._s_0.Y * __real_4024000000000000;
        dVar60 = (param_4->East_Pole_Offset).field0_0x0._s_0.Y * __real_4024000000000000;
        dVar103 = (param_4->East_Pole_Offset).field0_0x0._s_0.Z * __real_4024000000000000;
        dVar91 = (param_4->North_Pole_Offset).field0_0x0._s_0.Z * __real_4024000000000000;
        dVar128 = (param_4->East_Pole_Offset).field0_0x0._s_0.X * __real_4024000000000000;
        dVar61 = ((param_4->South_Pole_Offset).field0_0x0._s_0.Y * __real_4024000000000000 - dVar61)
                 * dVar59 + dVar61 +
                 ((param_4->West_Pole_Offset).field0_0x0._s_0.Y * __real_4024000000000000 - dVar60)
                 * dVar115 + dVar60;
        local_bd8.Translation.ZW.m128d_f64[0] =
             ((param_4->South_Pole_Offset).field0_0x0._s_0.Z * __real_4024000000000000 - dVar91) *
             dVar59 + dVar91 +
             ((param_4->West_Pole_Offset).field0_0x0._s_0.Z * __real_4024000000000000 - dVar103) *
             dVar115 + dVar103;
        dVar91 = (param_4->South_Pole_Offset).field0_0x0._s_0.X;
        dVar128 = ((param_4->West_Pole_Offset).field0_0x0._s_0.X * __real_4024000000000000 - dVar128
                  ) * dVar115 + dVar128;
      }
      auVar142._8_8_ = local_2778.Translation.XY.m128d_f64[1];
      auVar142._0_8_ = local_2778.Translation.XY.m128d_f64[0];
      pFVar139 = (FScriptContainerElement *)(dVar61 * __real_3fe0000000000000);
      local_bd8.Translation.ZW.m128d_f64[0] =
           local_bd8.Translation.ZW.m128d_f64[0] * __real_3fe0000000000000;
      local_bd8.Translation.XY.m128d_f64[0] =
           (dVar128 +
           (dVar91 * __real_4024000000000000 - dVar140 * __real_4024000000000000) * dVar59 +
           dVar140 * __real_4024000000000000) * __real_3fe0000000000000;
      uVar41 = extraout_EAX;
      uVar52 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar126 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar147 = _UNK_15061cc88;
      uVar148 = _UNK_15061cc8c;
      local_2ab0 = local_bd8.Translation.XY.m128d_f64[0];
      FStack_2aa8.Data = pFVar139;
      local_2aa0 = local_bd8.Translation.ZW.m128d_f64[0];
    }
    uVar3 = local_2c30;
    uVar141 = local_2c18._0_8_;
  }
  if (param_3->Auto_Calculated_Poles != false) {
    local_bd8.Translation.XY.m128d_f64[0] = auVar142._0_8_ - (double)uVar3 * __real_40c3880000000000
    ;
    pFVar139 = (FScriptContainerElement *)
               (auVar142._8_8_ - (double)uVar141 * __real_40c3880000000000);
    local_24a8 = CONCAT44(local_2778.Translation.ZW.m128d_f64[0]._4_4_,
                          local_2778.Translation.ZW.m128d_f64[0]._0_4_);
    local_bd8.Translation.ZW.m128d_f64[0] =
         (double)CONCAT44(local_2778.Translation.ZW.m128d_f64[0]._4_4_,
                          local_2778.Translation.ZW.m128d_f64[0]._0_4_) -
         (double)local_2d38 * __real_40c3880000000000;
    local_24b8 = auVar142;
    local_24a0 = local_bd8.Translation.XY.m128d_f64[0];
    pFStack_2498 = pFVar139;
    local_2490 = local_bd8.Translation.ZW.m128d_f64[0];
  }
  local_bd8.Translation.XY.m128d_f64[0] =
       (param_3->Extra_Elbow_Pole_Offset).field0_0x0._s_0.X + local_bd8.Translation.XY.m128d_f64[0];
  local_bd8.Translation.XY.m128d_f64[1] =
       (param_3->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Y + (double)pFVar139;
  auVar96 = *(undefined1 (*) [16])(param_3->mesh_component_transform).Scale3D.ZW.m128d_f64;
  local_bd8.Translation.ZW.m128d_f64[0] =
       (param_3->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Z + local_bd8.Translation.ZW.m128d_f64[0];
  auVar131 = *(undefined1 (*) [16])(param_3->mesh_component_transform).Scale3D.XY.m128d_f64;
  local_bd8.Translation.ZW.m128d_f64[1] = 0.0;
  auVar104._0_8_ = (double)CONCAT44(auVar96._4_4_ & uVar126,auVar96._0_4_ & uVar52);
  auVar104._8_4_ = auVar96._8_4_ & uVar147;
  auVar104._12_4_ = auVar96._12_4_ & uVar148;
  uVar149 = auVar131._0_4_ & uVar52;
  uVar150 = auVar131._4_4_ & uVar126;
  uVar151 = auVar131._8_4_ & uVar147;
  uVar152 = auVar131._12_4_ & uVar148;
  auVar95._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar104._8_8_);
  auVar95._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar104._0_8_);
  uVar50 = movmskpd(uVar49,auVar95);
  auVar66._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar152,uVar151))
  ;
  auVar66._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar150,uVar149))
  ;
  iVar40 = movmskpd(uVar41,auVar66);
  if ((uVar50 & 0x3fffffff) == 0 && iVar40 == 0) {
    local_688.Rotation.XY.m128d_f64[1] =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_688.Rotation.XY.m128d_f64[0] =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_688.Rotation.ZW.m128d_f64[1] =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_688.Rotation.ZW.m128d_f64[0] =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_688.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_688.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_688.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_688.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    dVar61 = (double)CONCAT44(local_29d8.Z._4_4_,local_29d8.Z._0_4_) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar60 = (double)CONCAT44(local_29d8.W._4_4_,local_29d8.W._0_4_) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar125 = SUB84(dVar60,0);
    uVar122 = (undefined4)((ulonglong)dVar60 >> 0x20);
    dVar103 = (double)CONCAT44(local_29d8.X._4_4_,local_29d8.X._0_4_) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar12 = (double)CONCAT44(local_29d8.Y._4_4_,local_29d8.Y._0_4_) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar123 = SUB84(dVar12,0);
    uVar154 = (undefined4)((ulonglong)dVar12 >> 0x20);
    local_688.Rotation.XY.m128d_f64[1]._0_4_ = uVar123;
    local_688.Rotation.XY.m128d_f64[0] = dVar103;
    local_688.Rotation.XY.m128d_f64[1]._4_4_ = uVar154;
    lVar53 = -(ulonglong)
              ((double)CONCAT44(uVar150,uVar149) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar56 = -(ulonglong)
              ((double)CONCAT44(uVar152,uVar151) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar7._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar7._0_8_ = auVar96._0_8_;
    auVar7._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar67 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
    lVar54 = -(ulonglong)
              ((double)CONCAT44(uVar126 & auVar96._4_4_,uVar52 & auVar96._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar131);
    auVar130._8_4_ = uVar123;
    auVar130._0_8_ = dVar103;
    auVar130._12_4_ = uVar154;
    local_688.Rotation.ZW.m128d_f64[1]._0_4_ = uVar125;
    local_688.Rotation.ZW.m128d_f64[0] = dVar61;
    local_688.Rotation.ZW.m128d_f64[1]._4_4_ = uVar122;
    local_688.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar53 & auVar96._0_4_;
    local_688.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar53 >> 0x20) & auVar96._4_4_;
    local_688.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar56 & auVar96._8_4_;
    local_688.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar56 >> 0x20) & auVar96._12_4_;
    auVar136._8_4_ = uVar125;
    auVar136._0_8_ = dVar61;
    auVar136._12_4_ = uVar122;
    dVar140 = (param_3->mesh_component_transform).Translation.XY.m128d_f64[0] *
              (double)CONCAT44(local_688.Scale3D.XY.m128d_f64[0]._4_4_,
                               local_688.Scale3D.XY.m128d_f64[0]._0_4_);
    dVar91 = (param_3->mesh_component_transform).Translation.XY.m128d_f64[1] *
             (double)CONCAT44(local_688.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_688.Scale3D.XY.m128d_f64[1]._0_4_);
    uVar124 = (undefined4)((ulonglong)dVar91 >> 0x20);
    local_688.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar54 >> 0x20) & auVar67._4_4_,
                          ~(uint)lVar54 & auVar67._0_4_);
    auVar105._8_4_ = uVar123;
    auVar105._0_8_ = dVar103;
    auVar105._12_4_ = uVar154;
    dVar112 = auVar105._8_8_;
    auVar68._8_4_ = SUB84(dVar61,0);
    auVar68._0_8_ = dVar112;
    auVar68._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
    dVar128 = (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0] *
              local_688.Scale3D.ZW.m128d_f64[0];
    dVar59 = (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1] * 0.0;
    auVar11._8_4_ = uVar125;
    auVar11._0_8_ = dVar61;
    auVar11._12_4_ = uVar122;
    auVar131 = blendpd(auVar130,auVar11,2);
    auVar143._8_4_ = SUB84(dVar91,0);
    auVar143._0_8_ = dVar140;
    auVar143._12_4_ = uVar124;
    auVar97._8_4_ = SUB84(dVar91,0);
    auVar97._0_8_ = dVar140;
    auVar97._12_4_ = uVar124;
    auVar10._8_4_ = SUB84(dVar59,0);
    auVar10._0_8_ = dVar128;
    auVar10._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    auVar96 = blendpd(auVar97,auVar10,2);
    auVar144._0_8_ = auVar143._8_8_ * dVar103 - dVar112 * dVar140;
    auVar144._8_8_ = dVar128 * dVar12 - auVar68._8_8_ * dVar91;
    auVar98._0_8_ = auVar96._0_8_ * dVar61 - auVar131._0_8_ * dVar128;
    auVar98._8_8_ = auVar96._8_8_ * dVar60 - auVar131._8_8_ * dVar59;
    dVar59 = auVar144._8_8_ + auVar144._8_8_;
    dVar115 = auVar98._0_8_ + auVar98._0_8_;
    uVar124 = SUB84(dVar115,0);
    uVar125 = (undefined4)((ulonglong)dVar115 >> 0x20);
    auVar96 = blendpd(auVar144,auVar98,2);
    auVar145._0_8_ = auVar96._0_8_ + auVar96._0_8_;
    auVar145._8_8_ = auVar96._8_8_ + auVar96._8_8_;
    auVar116._8_4_ = uVar124;
    auVar116._0_8_ = dVar59;
    auVar116._12_4_ = uVar125;
    auVar69._8_4_ = uVar124;
    auVar69._0_8_ = dVar59;
    auVar69._12_4_ = uVar125;
    auVar106._8_4_ = uVar124;
    auVar106._0_8_ = dVar59;
    auVar106._12_4_ = uVar125;
    auVar96 = blendpd(auVar106,auVar145,2);
    auVar117._0_8_ = auVar116._8_8_ * dVar103 - dVar59 * dVar112;
    auVar117._8_8_ = auVar145._0_8_ * dVar12 - auVar69._8_8_ * dVar61;
    auVar70._8_4_ = SUB84(auVar145._8_8_,0);
    auVar70._0_8_ = auVar145._0_8_;
    auVar70._12_4_ = (int)((ulonglong)auVar145._8_8_ >> 0x20);
    auVar107._0_8_ = auVar96._0_8_ * dVar61 - auVar145._0_8_ * auVar131._0_8_;
    auVar107._8_8_ = auVar96._8_8_ * dVar60 - auVar70._8_8_ * auVar131._8_8_;
    auVar71._8_4_ = SUB84(auVar117._8_8_,0);
    auVar71._0_8_ = auVar117._0_8_;
    auVar71._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
    auVar96 = blendpd(auVar117,auVar107,2);
    local_688.Translation.XY.m128d_f64[1] = 0.0 - (dVar115 * dVar60 + dVar91 + auVar107._0_8_);
    local_688.Translation.XY.m128d_f64[0] =
         0.0 - (dVar59 * auVar136._8_8_ + dVar140 + auVar71._8_8_);
    local_688.Translation.ZW.m128d_f64[1] = 0.0;
    local_688.Translation.ZW.m128d_f64[0] =
         0.0 - (auVar145._0_8_ * auVar136._8_8_ + dVar128 + auVar96._0_8_);
    local_688.Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_388.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_388.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_388.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_388.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_388.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_388.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_388.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_388,&local_448,&local_688);
  local_6e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_6e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_6e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_6e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_6e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_6e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_6e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_6e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_6e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_6e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_6e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_6e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_6e8,&local_bd8,&local_388);
  fVar90 = __real_3f800000;
  local_bd8.Translation.XY.m128d_f64[0] = local_6e8.Translation.XY.m128d_f64[0];
  local_bd8.Translation.XY.m128d_f64[1] = local_6e8.Translation.XY.m128d_f64[1];
  local_bd8.Translation.ZW.m128d_f64[0] = local_6e8.Translation.ZW.m128d_f64[0];
  local_bd8.Translation.ZW.m128d_f64[1] = local_6e8.Translation.ZW.m128d_f64[1];
  local_28a8._s_0.X = local_6e8.Translation.XY.m128d_f64[0];
  local_28a8._s_0.Y = local_6e8.Translation.XY.m128d_f64[1];
  local_28a8._s_0.Z = local_6e8.Translation.ZW.m128d_f64[0];
  local_bd8.Rotation.XY.m128d_f64[0] = local_6e8.Rotation.XY.m128d_f64[0];
  local_bd8.Rotation.XY.m128d_f64[1] = local_6e8.Rotation.XY.m128d_f64[1];
  local_bd8.Rotation.ZW.m128d_f64[0] = local_6e8.Rotation.ZW.m128d_f64[0];
  local_bd8.Rotation.ZW.m128d_f64[1] = local_6e8.Rotation.ZW.m128d_f64[1];
  local_e18.Translation.XY.m128d_f64[0] = (double)local_2a80;
  local_e18.Translation.XY.m128d_f64[1] = (double)FStack_2a78;
  local_2ca8.Translation.XY.m128d_f64[0] = local_2a68;
  local_2ca8.Translation.XY.m128d_f64[1] = (double)pFStack_2a60;
  local_bd8.Scale3D.XY.m128d_f64[0] = local_6e8.Scale3D.XY.m128d_f64[0];
  local_bd8.Scale3D.XY.m128d_f64[1] = local_6e8.Scale3D.XY.m128d_f64[1];
  local_bd8.Scale3D.ZW.m128d_f64[0] = local_6e8.Scale3D.ZW.m128d_f64[0];
  local_bd8.Scale3D.ZW.m128d_f64[1] = local_6e8.Scale3D.ZW.m128d_f64[1];
  local_2ba8.Translation.XY.m128d_f64[0] = (double)local_2a98._0_8_;
  local_2ba8.Translation.XY.m128d_f64[1] = (double)local_2a98._8_8_;
  local_2ba8.Translation.ZW.m128d_f64[0] = (double)local_2a88;
  local_2ba8.Translation.ZW.m128d_f64[1] = 0.0;
  local_e18.Translation.ZW.m128d_f64[0] = (double)local_2a70;
  local_e18.Translation.ZW.m128d_f64[1] = 0.0;
  local_2ca8.Translation.ZW.m128d_f64[0] = (double)local_2a58.ReferenceController;
  local_2ca8.Translation.ZW.m128d_f64[1] = 0.0;
  local_28c0._s_0.X = (param_3->ThighTransform).Translation.XY.m128d_f64[0];
  local_28c0._s_0.Y = (param_3->ThighTransform).Translation.XY.m128d_f64[1];
  local_28c0._s_0.Z = (param_3->ThighTransform).Translation.ZW.m128d_f64[0];
  uVar124 = *(undefined4 *)(param_3->Common_Spine_Modified_Transform).Translation.XY.m128d_f64;
  iVar40 = *(int *)((longlong)(param_3->Common_Spine_Modified_Transform).Translation.XY.m128d_f64 +
                   4);
  uVar125 = *(undefined4 *)((param_3->Common_Spine_Modified_Transform).Translation.XY.m128d_f64 + 1)
  ;
  iVar153 = *(int *)((longlong)(param_3->Common_Spine_Modified_Transform).Translation.XY.m128d_f64 +
                    0xc);
  local_2a40 = (FScriptContainerElement *)
               (param_3->Common_Spine_Modified_Transform).Translation.ZW.m128d_f64[0];
  fVar113 = __real_42b40000;
  if (param_4->is_this_right_hand != false) {
    fVar113 = __real_c2b40000;
  }
  FVar4 = *(ForElementType<unsigned_int> *)&param_3->custom_arm_size;
  fVar58 = param_4->Stretch_lower_arm_Priorty;
  if (__real_3f800000 <= param_4->Stretch_lower_arm_Priorty) {
    fVar58 = __real_3f800000;
  }
  local_2d38._0_1_ = FVar4._0_1_;
  if (fVar58 <= __real_00000000) {
    fVar58 = __real_00000000;
  }
  local_2488 = local_2a68;
  pFStack_2480 = pFStack_2a60;
  local_2478 = local_2a58.ReferenceController;
  local_2460 = local_2a70;
  local_2470 = local_2a80;
  FStack_2468 = FStack_2a78;
  local_2458 = local_2a80;
  FStack_2450 = FStack_2a78;
  local_2448 = local_2a70;
  local_2440 = (FScriptContainerElement *)local_2a98._0_8_;
  pFStack_2438 = (FScriptContainerElement *)local_2a98._8_8_;
  local_2430 = local_2a88;
  fVar127 = (float)SQRT(((double)pFStack_2a60 - (double)FStack_2a78) *
                        ((double)pFStack_2a60 - (double)FStack_2a78) +
                        (local_2a68 - (double)local_2a80) * (local_2a68 - (double)local_2a80) +
                        ((double)local_2a58.ReferenceController - (double)local_2a70) *
                        ((double)local_2a58.ReferenceController - (double)local_2a70));
  local_2d38._4_4_ =
       (float)SQRT(((double)FStack_2a78 - (double)local_2a98._8_8_) *
                   ((double)FStack_2a78 - (double)local_2a98._8_8_) +
                   ((double)local_2a80 - (double)local_2a98._0_8_) *
                   ((double)local_2a80 - (double)local_2a98._0_8_) +
                   ((double)local_2a70 - (double)local_2a88) *
                   ((double)local_2a70 - (double)local_2a88));
  if ((uchar)local_2d38 != '\0') {
    fVar127 = (param_3->custom_arm_size).custom_lowerArm_length;
    local_2d38._4_4_ = FVar4._4_4_;
  }
  local_1678.Rotation.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0]
  ;
  local_1678.Rotation.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1]
  ;
  local_1678.Rotation.XY.m128d_f64[0] = (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0]
  ;
  local_1678.Rotation.XY.m128d_f64[1] = (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1]
  ;
  local_1678.Translation.ZW.m128d_f64[0] =
       (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
  local_1678.Translation.ZW.m128d_f64[1] =
       (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
  pTVar43 = &local_1678;
  local_1678.Translation.XY.m128d_f64[0] =
       (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
  local_1678.Translation.XY.m128d_f64[1] =
       (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
  local_1678.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0];
  local_1678.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1];
  local_1678.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0];
  local_1678.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1];
  local_2a50 = uVar124;
  iStack_2a4c = iVar40;
  uStack_2a48 = uVar125;
  iStack_2a44 = iVar153;
  fVar37 = local_2d38._4_4_;
  local_2d38 = FVar4;
  Solve_Modified_Direct_TwoBoneIK_3
            (pTVar43,fVar113,&local_2ba8,&local_e18,&local_2ca8,(TVector<double> *)&local_28a8._s_0,
             (TVector<double> *)&local_28c0._s_0,fVar37,fVar127,param_3->bAllowHandStretching,
             __real_3f800000,param_4->Max_Stretch_Ratio,fVar58 + fVar58,
             param_3->up_arm_twist_technique);
  local_2d38 = (ForElementType<unsigned_int>)UE::Math::TRotator<double>::ZeroRotator.Roll;
  if (param_3->override_hand_rotation != false) {
    local_7a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_7a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_7a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_7a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_7a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_7a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_7a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_7a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_7a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_7a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_7a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_7a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_7a8,&local_268,&local_e18);
    dVar128 = (param_3->ThighTransform).Rotation.ZW.m128d_f64[0];
    dVar61 = (param_3->ThighTransform).Rotation.ZW.m128d_f64[1];
    dVar60 = (param_3->ThighTransform).Rotation.XY.m128d_f64[0];
    dVar103 = (param_3->ThighTransform).Rotation.XY.m128d_f64[1];
    dVar115 = (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar140 = (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar91 = (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar59 = (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar118._8_4_ = SUB84(dVar59,0);
    auVar118._0_8_ = dVar91;
    auVar118._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    auVar72._8_4_ = SUB84(dVar91,0);
    auVar72._0_8_ = dVar91;
    auVar72._12_4_ = (int)((ulonglong)dVar91 >> 0x20);
    local_26f8.Z = local_2ca8.Rotation.ZW.m128d_f64[0];
    local_26f8.W = local_2ca8.Rotation.ZW.m128d_f64[1];
    local_2a08 = dVar115 * dVar103 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                 + dVar128 * auVar118._8_8_ +
                 dVar60 * dVar140 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                 + dVar91 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]
    ;
    dStack_2a00 = dVar115 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar61 * dVar59 +
                  dVar103 * dVar140 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar91 * dVar128 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
    ;
    dVar59 = dVar115 * dVar128 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar103 * dVar59 +
             dVar61 * dVar140 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar72._8_8_ * dVar60 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_26f8.X = local_2ca8.Rotation.XY.m128d_f64[0];
    local_26f8.Y = local_2ca8.Rotation.XY.m128d_f64[1];
    local_2a18._8_4_ = SUB84(dVar59,0);
    local_2a18._0_8_ =
         dVar115 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar60 * auVar118._8_8_ +
         dVar128 * dVar140 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar91 * dVar103 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_2a18._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    if (param_3->rotation_method == ENUM_AdditiveRotation) {
      local_2658.X = (param_3->ThighTransform).Rotation.XY.m128d_f64[0];
      local_2658.Y = (param_3->ThighTransform).Rotation.XY.m128d_f64[1];
      local_2658.Z = (param_3->ThighTransform).Rotation.ZW.m128d_f64[0];
      local_2658.W = (param_3->ThighTransform).Rotation.ZW.m128d_f64[1];
      local_2678.X = local_2ca8.Rotation.XY.m128d_f64[0];
      local_2678.Y = local_2ca8.Rotation.XY.m128d_f64[1];
      local_2678.Z = local_2ca8.Rotation.ZW.m128d_f64[0];
      local_2678.W = local_2ca8.Rotation.ZW.m128d_f64[1];
      pTVar44 = UE::Math::TQuat<double>::operator*(&local_2658,&local_1138,&local_2678);
      local_2a18._0_8_ = pTVar44->X;
      local_2a18._8_8_ = pTVar44->Y;
      local_2a08 = pTVar44->Z;
      dStack_2a00 = pTVar44->W;
    }
    auVar119._0_8_ = (double)param_3->arm_alpha;
    auVar119._8_8_ = 0;
    pTVar44 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (&local_1118,&local_26f8,(TQuat<double> *)local_2a18,auVar119._0_8_);
    dVar34 = local_7a8.Rotation.ZW.m128d_f64[1];
    dVar33 = local_7a8.Rotation.ZW.m128d_f64[0];
    dVar32 = local_7a8.Rotation.XY.m128d_f64[1];
    dVar31 = local_7a8.Rotation.XY.m128d_f64[0];
    dVar115 = (param_3->Up_Vector_Val).field0_0x0._s_0.X;
    dVar140 = (param_3->Up_Vector_Val).field0_0x0._s_0.Y;
    local_1198 = pTVar44->X;
    dStack_1190 = pTVar44->Y;
    dVar59 = (param_3->Up_Vector_Val).field0_0x0._s_0.Z;
    local_1188 = pTVar44->Z;
    dStack_1180 = pTVar44->W;
    dVar91 = local_1198 * local_1198 + local_1188 * local_1188;
    dVar128 = dStack_1190 * dStack_1190 + dStack_1180 * dStack_1180;
    auVar73._8_4_ = SUB84(dVar128,0);
    auVar73._0_8_ = dVar91;
    auVar73._12_4_ = (int)((ulonglong)dVar128 >> 0x20);
    auVar74._0_8_ = auVar73._8_8_ + dVar91;
    auVar74._8_8_ = dVar91 + dVar128;
    auVar96 = sqrtpd(auVar119,auVar74);
    local_27c8 = __real_3e45798ee0000000;
    auVar131 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar96);
    uVar55 = -(ulonglong)(__real_3e45798ee0000000 <= auVar74._0_8_);
    uVar57 = -(ulonglong)(__real_3e45798ee0000000 <= auVar74._8_8_);
    uVar52 = (uint)(uVar55 >> 0x20);
    uVar126 = (uint)(uVar57 >> 0x20);
    auVar137._0_8_ = uVar55 & (ulonglong)(auVar131._0_8_ * local_1198);
    uVar24 = uVar57 & (ulonglong)(auVar131._8_8_ * dStack_1190);
    auVar137._8_4_ = (undefined4)uVar24;
    auVar137._12_4_ = (undefined4)(uVar24 >> 0x20);
    auVar99._0_4_ = ~(uint)uVar55 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar99._4_4_ =
         ~uVar52 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar99._8_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar99._12_4_ =
         ~uVar126 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_2ca8.Rotation.XY.m128d_f64 = (double  [2])(auVar137 | auVar99);
    auVar96 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar96);
    auVar108._0_4_ = ~(uint)uVar55 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar108._4_4_ =
         ~uVar52 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar108._8_4_ = ~(uint)uVar57 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar108._12_4_ =
         ~uVar126 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_2bf0 = (ForElementType<unsigned_int>)local_7a8.Translation.XY.m128d_f64[0];
    FStack_2be8 = (ForElementType<unsigned_int>)local_7a8.Translation.XY.m128d_f64[1];
    local_2bd0 = (FScriptContainerElement *)local_7a8.Translation.ZW.m128d_f64[0];
    pFStack_2bc8 = (FScriptContainerElement *)local_7a8.Translation.ZW.m128d_f64[1];
    local_2be0 = (FScriptContainerElement *)local_7a8.Scale3D.XY.m128d_f64[0];
    pFStack_2bd8 = (FScriptContainerElement *)local_7a8.Scale3D.XY.m128d_f64[1];
    local_2c18._8_8_ = local_7a8.Scale3D.ZW.m128d_f64[1];
    local_2c18._0_8_ = local_7a8.Scale3D.ZW.m128d_f64[0];
    local_2990 = local_2ca8.Translation.XY.m128d_f64[0];
    pFStack_2988 = (FSkelMeshRefPoseOverride *)local_2ca8.Translation.XY.m128d_f64[1];
    local_2980 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
    pFStack_2978 = (FSkelMeshRefPoseOverride *)local_2ca8.Translation.ZW.m128d_f64[1];
    local_2970 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[0];
    pTStack_2968 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[1];
    local_2960 = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[0];
    pFStack_2958 = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[1];
    local_2790 = (FWeakObjectPtr)local_e18.Rotation.XY.m128d_f64[0];
    FStack_2788 = (FWeakObjectPtr)local_e18.Rotation.XY.m128d_f64[1];
    local_27a0 = (FWeakObjectPtr)local_e18.Rotation.ZW.m128d_f64[0];
    FStack_2798 = (FWeakObjectPtr)local_e18.Rotation.ZW.m128d_f64[1];
    local_2ce0 = (FWeakObjectPtr)local_e18.Translation.XY.m128d_f64[0];
    FStack_2cd8 = (FWeakObjectPtr)local_e18.Translation.XY.m128d_f64[1];
    local_2cd0 = (FWeakObjectPtr)local_e18.Translation.ZW.m128d_f64[0];
    FStack_2cc8 = (FWeakObjectPtr)local_e18.Translation.ZW.m128d_f64[1];
    local_2c48 = (ForElementType<unsigned_int>)local_e18.Scale3D.XY.m128d_f64[0];
    FStack_2c40 = (ForElementType<unsigned_int>)local_e18.Scale3D.XY.m128d_f64[1];
    auVar100._0_8_ = (ulonglong)(auVar96._0_8_ * local_1188) & uVar55;
    uVar57 = (ulonglong)(auVar96._8_8_ * dStack_1180) & uVar57;
    auVar100._8_4_ = (undefined4)uVar57;
    auVar100._12_4_ = (undefined4)(uVar57 >> 0x20);
    _local_2d38 = (double  [2])(auVar108 | auVar100);
    local_2cc0.Data = (FScriptContainerElement *)local_e18.Scale3D.ZW.m128d_f64[0];
    FStack_2cb8.Data = (FScriptContainerElement *)local_e18.Scale3D.ZW.m128d_f64[1];
    local_2ca8.Rotation.ZW.m128d_f64 = _local_2d38;
    _local_2c30 = local_2ca8.Rotation.XY.m128d_f64;
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d54);
    dVar91 = (pTVar43->Rotation).XY.m128d_f64[0];
    dVar128 = (pTVar43->Rotation).XY.m128d_f64[1];
    dVar61 = (pTVar43->Rotation).ZW.m128d_f64[0];
    dVar60 = (pTVar43->Rotation).ZW.m128d_f64[1];
    dVar103 = (pTVar43->Translation).XY.m128d_f64[0];
    dVar12 = (pTVar43->Translation).XY.m128d_f64[1];
    dVar112 = (pTVar43->Translation).ZW.m128d_f64[0];
    dVar26 = (pTVar43->Translation).ZW.m128d_f64[1];
    dVar27 = (pTVar43->Scale3D).XY.m128d_f64[0];
    dVar28 = (pTVar43->Scale3D).XY.m128d_f64[1];
    dVar29 = (pTVar43->Scale3D).ZW.m128d_f64[0];
    dVar30 = (pTVar43->Scale3D).ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
    local_1618.Translation.XY.m128d_f64[0] = (double)local_2bf0;
    local_1618.Translation.XY.m128d_f64[1] = (double)FStack_2be8;
    local_1618.Translation.ZW.m128d_f64[0] = (double)local_2bd0;
    local_1618.Translation.ZW.m128d_f64[1] = (double)pFStack_2bc8;
    local_1618.Scale3D.XY.m128d_f64[0] = (double)local_2be0;
    local_1618.Scale3D.XY.m128d_f64[1] = (double)pFStack_2bd8;
    local_1618.Scale3D.ZW.m128d_f64[0] = (double)local_2c18._0_8_;
    local_1618.Scale3D.ZW.m128d_f64[1] = (double)local_2c18._8_8_;
    local_15b8.Rotation.XY.m128d_f64[0] = (double)local_2c30;
    local_15b8.Rotation.XY.m128d_f64[1] = (double)FStack_2c28;
    local_15b8.Translation.ZW.m128d_f64[0] = (double)local_2980;
    local_15b8.Translation.ZW.m128d_f64[1] = (double)pFStack_2978;
    local_15b8.Rotation.ZW.m128d_f64[0] = (double)local_2d38;
    local_15b8.Rotation.ZW.m128d_f64[1] = (double)FStack_2d30;
    local_15b8.Scale3D.ZW.m128d_f64[0] = (double)local_2960;
    local_15b8.Scale3D.ZW.m128d_f64[1] = (double)pFStack_2958;
    local_15b8.Translation.XY.m128d_f64[0] = local_2990;
    local_15b8.Translation.XY.m128d_f64[1] = (double)pFStack_2988;
    local_1558.Rotation.ZW.m128d_f64[0] = (double)local_27a0;
    local_1558.Rotation.ZW.m128d_f64[1] = (double)FStack_2798;
    local_15b8.Scale3D.XY.m128d_f64[0] = (double)local_2970;
    local_15b8.Scale3D.XY.m128d_f64[1] = (double)pTStack_2968;
    local_1558.Translation.ZW.m128d_f64[0] = (double)local_2cd0;
    local_1558.Translation.ZW.m128d_f64[1] = (double)FStack_2cc8;
    local_1558.Rotation.XY.m128d_f64[0] = (double)local_2790;
    local_1558.Rotation.XY.m128d_f64[1] = (double)FStack_2788;
    local_1558.Scale3D.ZW.m128d_f64[0] = (double)local_2cc0.Data;
    local_1558.Scale3D.ZW.m128d_f64[1] = (double)FStack_2cb8.Data;
    local_1498.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
    local_1498.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
    local_1558.Translation.XY.m128d_f64[0] = (double)local_2ce0;
    local_1558.Translation.XY.m128d_f64[1] = (double)FStack_2cd8;
    local_1498.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_1498.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_1558.Scale3D.XY.m128d_f64[0] = (double)local_2c48;
    local_1558.Scale3D.XY.m128d_f64[1] = (double)FStack_2c40;
    local_1498.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_1498.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
    local_1498.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
    local_1498.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
    local_1498.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_1498.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_1498.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_1498.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
    local_1438.Rotation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0];
    local_1438.Rotation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1];
    local_1438.Rotation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0];
    local_1438.Rotation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1];
    local_1438.Translation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
    local_1438.Translation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
    local_1438.Translation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
    local_1438.Translation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
    local_1438.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0]
    ;
    local_1438.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1]
    ;
    local_1438.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0]
    ;
    local_1438.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1]
    ;
    local_1618.Rotation.XY.m128d_f64[0] = dVar31;
    local_1618.Rotation.XY.m128d_f64[1] = dVar32;
    local_1618.Rotation.ZW.m128d_f64[0] = dVar33;
    local_1618.Rotation.ZW.m128d_f64[1] = dVar34;
    local_2888._s_0.X = dVar115;
    local_2888._s_0.Y = dVar140;
    local_2888._s_0.Z = dVar59;
    local_14f8.Rotation.XY.m128d_f64[0] = dVar91;
    local_14f8.Rotation.XY.m128d_f64[1] = dVar128;
    local_14f8.Rotation.ZW.m128d_f64[0] = dVar61;
    local_14f8.Rotation.ZW.m128d_f64[1] = dVar60;
    local_14f8.Translation.XY.m128d_f64[0] = dVar103;
    local_14f8.Translation.XY.m128d_f64[1] = dVar12;
    local_14f8.Translation.ZW.m128d_f64[0] = dVar112;
    local_14f8.Translation.ZW.m128d_f64[1] = dVar26;
    local_14f8.Scale3D.XY.m128d_f64[0] = dVar27;
    local_14f8.Scale3D.XY.m128d_f64[1] = dVar28;
    local_14f8.Scale3D.ZW.m128d_f64[0] = dVar29;
    local_14f8.Scale3D.ZW.m128d_f64[1] = dVar30;
    pTVar46 = GetHandYaw(&local_1178,true,param_4,&local_1438,&local_1498,&local_14f8,&local_1558,
                         &local_15b8,&local_1618,(TVector<double> *)&local_2888._s_0);
    local_2cb0.Data = (FScriptContainerElement *)pTVar46->Roll;
    local_2cc0.Data = (FScriptContainerElement *)pTVar46->Pitch;
    FStack_2cb8.Data = (FScriptContainerElement *)pTVar46->Yaw;
    local_2d38 = (ForElementType<unsigned_int>)local_2cb0.Data;
    uVar124 = local_2a50;
    iVar40 = iStack_2a4c;
    uVar125 = uStack_2a48;
    iVar153 = iStack_2a44;
    fVar90 = __real_3f800000;
    goto LAB_14d3421b5;
  }
  local_27a8 = __real_3f1a36e2e0000000;
  dVar59 = (param_3->Extra_Hand_Offset).Translation.ZW.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar115 = (param_3->Extra_Hand_Offset).Translation.ZW.m128d_f64[1] -
            UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar140 = (param_3->Extra_Hand_Offset).Translation.XY.m128d_f64[0] -
            UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar91 = (param_3->Extra_Hand_Offset).Translation.XY.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  auVar101._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & uVar126,SUB84(dVar59,0) & uVar52);
  auVar101._8_4_ = SUB84(dVar115,0) & uVar147;
  auVar101._12_4_ = (uint)((ulonglong)dVar115 >> 0x20) & uVar148;
  uVar122 = SUB84(__real_3f1a36e2e0000000,0);
  auVar75._8_4_ = uVar122;
  auVar75._0_8_ = __real_3f1a36e2e0000000;
  uVar123 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar75._12_4_ = uVar123;
  auVar109._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar140 >> 0x20) & uVar126,SUB84(dVar140,0) & uVar52);
  auVar109._8_4_ = SUB84(dVar91,0) & uVar147;
  auVar109._12_4_ = (uint)((ulonglong)dVar91 >> 0x20) & uVar148;
  auVar76._8_8_ = -(ulonglong)(auVar75._8_8_ < auVar101._8_8_);
  auVar76._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar101._0_8_);
  uVar50 = movmskpd((int)pTVar43,auVar76);
  auVar120._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar109._8_8_);
  auVar120._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar109._0_8_);
  iVar42 = movmskpd(extraout_EAX_00,auVar120);
  if ((uVar50 & 0x3fffffff) == 0 && iVar42 == 0) {
    local_2998 = __real_3f1a36e2e0000000;
    dVar59 = (param_3->Extra_Hand_Offset).Rotation.ZW.m128d_f64[0];
    dVar115 = (param_3->Extra_Hand_Offset).Rotation.ZW.m128d_f64[1];
    dVar140 = (param_3->Extra_Hand_Offset).Rotation.XY.m128d_f64[0];
    dVar91 = (param_3->Extra_Hand_Offset).Rotation.XY.m128d_f64[1];
    dVar128 = dVar59 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar61 = dVar115 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar59 = dVar59 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar115 = dVar115 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    auVar110._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar128 >> 0x20) & uVar126,SUB84(dVar128,0) & uVar52);
    auVar110._8_4_ = SUB84(dVar61,0) & uVar147;
    auVar110._12_4_ = (uint)((ulonglong)dVar61 >> 0x20) & uVar148;
    dVar128 = dVar140 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar61 = dVar91 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar140 = dVar140 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar91 = dVar91 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    auVar77._8_4_ = uVar122;
    auVar77._0_8_ = __real_3f1a36e2e0000000;
    auVar77._12_4_ = uVar123;
    auVar121._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar128 >> 0x20) & uVar126,SUB84(dVar128,0) & uVar52);
    auVar121._8_4_ = SUB84(dVar61,0) & uVar147;
    auVar121._12_4_ = (uint)((ulonglong)dVar61 >> 0x20) & uVar148;
    auVar78._8_8_ = -(ulonglong)(auVar77._8_8_ < auVar110._8_8_);
    auVar78._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar110._0_8_);
    iVar51 = movmskpd(0,auVar78);
    auVar138._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar140 >> 0x20) & uVar126,SUB84(dVar140,0) & uVar52);
    auVar138._8_4_ = SUB84(dVar91,0) & uVar147;
    auVar138._12_4_ = (uint)((ulonglong)dVar91 >> 0x20) & uVar148;
    auVar79._8_4_ = uVar122;
    auVar79._0_8_ = __real_3f1a36e2e0000000;
    auVar79._12_4_ = uVar123;
    auVar146._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & uVar126,SUB84(dVar59,0) & uVar52);
    auVar146._8_4_ = SUB84(dVar115,0) & uVar147;
    auVar146._12_4_ = (uint)((ulonglong)dVar115 >> 0x20) & uVar148;
    auVar80._8_8_ = -(ulonglong)(auVar79._8_8_ < auVar121._8_8_);
    auVar80._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar121._0_8_);
    uVar50 = movmskpd(iVar42,auVar80);
    uVar149 = iVar51 << 2 | uVar50;
    if (uVar149 != 0) {
      auVar81._8_4_ = uVar122;
      auVar81._0_8_ = __real_3f1a36e2e0000000;
      auVar81._12_4_ = uVar123;
      auVar82._8_8_ = -(ulonglong)(auVar81._8_8_ < auVar146._8_8_);
      auVar82._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar146._0_8_);
      uVar149 = movmskpd(uVar149,auVar82);
      auVar132._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar138._8_8_);
      auVar132._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar138._0_8_);
      uVar50 = movmskpd(uVar50,auVar132);
      if ((uVar149 & 0x3fffffff) != 0 || uVar50 != 0) goto LAB_14d34215a;
    }
    local_29b8 = __real_3f1a36e2e0000000;
    dVar59 = (param_3->Extra_Hand_Offset).Scale3D.ZW.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar115 = (param_3->Extra_Hand_Offset).Scale3D.ZW.m128d_f64[1] -
              UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar140 = (param_3->Extra_Hand_Offset).Scale3D.XY.m128d_f64[0] -
              UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar91 = (param_3->Extra_Hand_Offset).Scale3D.XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    auVar102._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & uVar126,SUB84(dVar59,0) & uVar52);
    auVar102._8_4_ = SUB84(dVar115,0) & uVar147;
    auVar102._12_4_ = (uint)((ulonglong)dVar115 >> 0x20) & uVar148;
    auVar83._8_4_ = uVar122;
    auVar83._0_8_ = __real_3f1a36e2e0000000;
    auVar83._12_4_ = uVar123;
    auVar111._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar140 >> 0x20) & uVar126,SUB84(dVar140,0) & uVar52);
    auVar111._8_4_ = SUB84(dVar91,0) & uVar147;
    auVar111._12_4_ = (uint)((ulonglong)dVar91 >> 0x20) & uVar148;
    auVar84._8_8_ = -(ulonglong)(auVar83._8_8_ < auVar102._8_8_);
    auVar84._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar102._0_8_);
    uVar52 = movmskpd(0,auVar84);
    lVar53 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar111._8_8_);
    auVar8._8_4_ = (int)lVar53;
    auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar111._0_8_);
    auVar8._12_4_ = (int)((ulonglong)lVar53 >> 0x20);
    iVar42 = movmskpd(uVar50,auVar8);
    if ((uVar52 & 0x3fffffff) != 0 || iVar42 != 0) goto LAB_14d34215a;
    local_3e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_3e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_3e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_3e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_3e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_3e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_3e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_3e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_3e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_3e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_3e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_3e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_3e8,&local_268,&local_e18);
    local_2ca8.Rotation.XY.m128d_f64[0] = local_3e8.Rotation.XY.m128d_f64[0];
    local_2ca8.Rotation.XY.m128d_f64[1] = local_3e8.Rotation.XY.m128d_f64[1];
    local_2ca8.Rotation.ZW.m128d_f64[0] = local_3e8.Rotation.ZW.m128d_f64[0];
    local_2ca8.Rotation.ZW.m128d_f64[1] = local_3e8.Rotation.ZW.m128d_f64[1];
  }
  else {
LAB_14d34215a:
    local_26b8.X = (param_3->Extra_Hand_Offset).Rotation.XY.m128d_f64[0];
    local_26b8.Y = (param_3->Extra_Hand_Offset).Rotation.XY.m128d_f64[1];
    local_26b8.Z = (param_3->Extra_Hand_Offset).Rotation.ZW.m128d_f64[0];
    local_26b8.W = (param_3->Extra_Hand_Offset).Rotation.ZW.m128d_f64[1];
    local_26d8.X = local_2ca8.Rotation.XY.m128d_f64[0];
    local_26d8.Y = local_2ca8.Rotation.XY.m128d_f64[1];
    local_26d8.Z = local_2ca8.Rotation.ZW.m128d_f64[0];
    local_26d8.W = local_2ca8.Rotation.ZW.m128d_f64[1];
    pTVar44 = UE::Math::TQuat<double>::operator*(&local_26b8,&local_10f8,&local_26d8);
    local_2ca8.Rotation.ZW.m128d_f64[0] = pTVar44->Z;
    local_2ca8.Rotation.ZW.m128d_f64[1] = pTVar44->W;
    local_2ca8.Rotation.XY.m128d_f64[0] = pTVar44->X;
    local_2ca8.Rotation.XY.m128d_f64[1] = pTVar44->Y;
  }
LAB_14d3421b5:
  if (param_4->accurate_hand_rotation == false) {
    pFVar5 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
    local_9b8 = local_2ca8.Rotation.XY.m128d_f64[0];
    dStack_9b0 = local_2ca8.Rotation.XY.m128d_f64[1];
    local_9a8 = local_2ca8.Rotation.ZW.m128d_f64[0];
    dStack_9a0 = local_2ca8.Rotation.ZW.m128d_f64[1];
    local_9c8 = local_2d54;
    local_998 = local_2ca8.Translation.XY.m128d_f64[0];
    pFStack_990 = (FSkelMeshRefPoseOverride *)local_2ca8.Translation.XY.m128d_f64[1];
    local_988 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
    pFStack_980 = (FSkelMeshRefPoseOverride *)local_2ca8.Translation.ZW.m128d_f64[1];
    local_978 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[0];
    pTStack_970 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[1];
    local_968 = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[0];
    pFStack_960 = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[1];
    if (((pFVar5 <= &local_9c8) && (&local_9c8 < pFVar5 + (longlong)param_6->ArrayMax * 0x1c)) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar38)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar40 = param_6->ArrayNum;
    if (iVar40 == param_6->ArrayMax) {
      iVar40 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    param_6->ArrayNum = iVar40 + 1;
    lVar53 = (longlong)iVar40 * 0x70;
    pFVar139 = (param_6->AllocatorInstance).Data;
    *(ulonglong *)(pFVar139 + lVar53) = CONCAT44(uStack_9c4,local_9c8);
    *(undefined8 *)(pFVar139 + lVar53 + 8) = uStack_9c0;
    *(double *)(pFVar139 + lVar53 + 0x10) = local_9b8;
    *(double *)(pFVar139 + lVar53 + 0x10 + 8) = dStack_9b0;
    *(double *)(pFVar139 + lVar53 + 0x20) = local_9a8;
    *(double *)(pFVar139 + lVar53 + 0x20 + 8) = dStack_9a0;
    *(double *)(pFVar139 + lVar53 + 0x30) = local_998;
    *(FSkelMeshRefPoseOverride **)(pFVar139 + lVar53 + 0x30 + 8) = pFStack_990;
    *(TReferenceControllerBase<1> **)(pFVar139 + lVar53 + 0x40) = local_988;
    *(FSkelMeshRefPoseOverride **)(pFVar139 + lVar53 + 0x40 + 8) = pFStack_980;
    *(TReferenceControllerBase<1> **)(pFVar139 + lVar53 + 0x50) = local_978;
    *(TReferenceControllerBase<1> **)(pFVar139 + lVar53 + 0x50 + 8) = pTStack_970;
    pFVar62 = local_968;
    pFVar88 = pFStack_960;
  }
  else {
    FAxis::FAxis((FAxis *)&local_29f8._s_0,&UE::Math::TVector<double>::ForwardVector);
    local_29f8._s_0.X = (param_4->Local_Direction_Axis).field0_0x0._s_0.X;
    local_29f8._s_0.Y = (param_4->Local_Direction_Axis).field0_0x0._s_0.Y;
    local_29f8._16_4_ =
         *(undefined4 *)((longlong)&(param_4->Local_Direction_Axis).field0_0x0 + 0x10);
    local_29f8._20_4_ =
         *(undefined4 *)((longlong)&(param_4->Local_Direction_Axis).field0_0x0 + 0x14);
    local_2418 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
    local_2848 = ZEXT416(0);
    local_2cb0.Data = local_2a40;
    uStack_29e0 = CONCAT31(uStack_29e0._1_3_,param_4->relative_axis == false);
    local_2838 = 0.0;
    uStack_2680 = uStack_29e0;
    uStack_267c = uStack_29dc;
    local_2828._s_0.Z = (double)local_2a40;
    local_2858 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
    local_2c38 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
    local_2808._s_0.Z = local_2ca8.Translation.ZW.m128d_f64[0];
    local_13d8.Rotation.ZW.m128d_f64[0] = (double)local_2d18;
    local_13d8.Rotation.ZW.m128d_f64[1] = (double)FStack_2d10;
    local_13d8.Scale3D.XY.m128d_f64[0] = (double)local_2d08.Data;
    local_13d8.Scale3D.XY.m128d_f64[1] = (double)FStack_2d00.Data;
    local_13d8.Rotation.XY.m128d_f64[0] = (double)local_2d28;
    local_13d8.Rotation.XY.m128d_f64[1] = (double)FStack_2d20;
    local_2428 = local_2ca8.Translation.XY.m128d_f64[0];
    pFStack_2420 = (FSkelMeshRefPoseOverride *)local_2ca8.Translation.XY.m128d_f64[1];
    local_2868 = local_2ca8.Translation.XY.m128d_f64[0];
    pFStack_2860 = (FSkelMeshRefPoseOverride *)local_2ca8.Translation.XY.m128d_f64[1];
    local_2808._s_0.X = local_2ca8.Translation.XY.m128d_f64[0];
    local_2808._s_0.Y = local_2ca8.Translation.XY.m128d_f64[1];
    local_13d8.Translation.XY.m128d_f64[0] = local_2ca8.Translation.XY.m128d_f64[0];
    local_13d8.Translation.XY.m128d_f64[1] = local_2ca8.Translation.XY.m128d_f64[1];
    local_13d8.Translation.ZW.m128d_f64[0] = local_2ca8.Translation.ZW.m128d_f64[0];
    local_13d8.Translation.ZW.m128d_f64[1] = 0.0;
    local_13d8.Scale3D.ZW.m128d_f64[0] = (double)local_2d48;
    local_13d8.Scale3D.ZW.m128d_f64[1] = (double)pTStack_2d40;
    local_2828._0_4_ = uVar124;
    local_2828._4_4_ = iVar40;
    local_2828._8_4_ = uVar125;
    local_2828._12_4_ = iVar153;
    local_2698._s_0.X = local_29f8._s_0.X;
    local_2698._s_0.Y = local_29f8._s_0.Y;
    local_2698._16_4_ = local_29f8._16_4_;
    local_2698._20_4_ = local_29f8._20_4_;
    LookAt_Processor(&local_1378,&local_13d8,(TVector<double> *)&local_2808._s_0,
                     (TVector<double> *)&local_2828._s_0,(FAxis *)&local_2698._s_0,
                     param_3->Hand_Clamp_Value,(TRotator<double> *)local_2848,true,fVar90,fVar90);
    pFVar5 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
    local_a28 = local_1378.Rotation.XY.m128d_f64[0];
    dStack_a20 = local_1378.Rotation.XY.m128d_f64[1];
    local_a18 = local_1378.Rotation.ZW.m128d_f64[0];
    dStack_a10 = local_1378.Rotation.ZW.m128d_f64[1];
    local_a38 = local_2d54;
    local_a08 = local_1378.Translation.XY.m128d_f64[0];
    dStack_a00 = local_1378.Translation.XY.m128d_f64[1];
    local_9f8 = local_1378.Translation.ZW.m128d_f64[0];
    dStack_9f0 = local_1378.Translation.ZW.m128d_f64[1];
    local_9e8 = local_1378.Scale3D.XY.m128d_f64[0];
    dStack_9e0 = local_1378.Scale3D.XY.m128d_f64[1];
    local_9d8 = (FScriptContainerElement *)local_1378.Scale3D.ZW.m128d_f64[0];
    pFStack_9d0 = (FScriptContainerElement *)local_1378.Scale3D.ZW.m128d_f64[1];
    if (((pFVar5 <= &local_a38) && (&local_a38 < pFVar5 + (longlong)param_6->ArrayMax * 0x1c)) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar38)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar40 = param_6->ArrayNum;
    if (iVar40 == param_6->ArrayMax) {
      iVar40 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    param_6->ArrayNum = iVar40 + 1;
    lVar53 = (longlong)iVar40 * 0x70;
    pFVar139 = (param_6->AllocatorInstance).Data;
    *(ulonglong *)(pFVar139 + lVar53) = CONCAT44(uStack_a34,local_a38);
    *(undefined8 *)(pFVar139 + lVar53 + 8) = uStack_a30;
    *(double *)(pFVar139 + lVar53 + 0x10) = local_a28;
    *(double *)(pFVar139 + lVar53 + 0x10 + 8) = dStack_a20;
    *(double *)(pFVar139 + lVar53 + 0x20) = local_a18;
    *(double *)(pFVar139 + lVar53 + 0x20 + 8) = dStack_a10;
    *(double *)(pFVar139 + lVar53 + 0x30) = local_a08;
    *(double *)(pFVar139 + lVar53 + 0x30 + 8) = dStack_a00;
    *(double *)(pFVar139 + lVar53 + 0x40) = local_9f8;
    *(double *)(pFVar139 + lVar53 + 0x40 + 8) = dStack_9f0;
    *(double *)(pFVar139 + lVar53 + 0x50) = local_9e8;
    *(double *)(pFVar139 + lVar53 + 0x50 + 8) = dStack_9e0;
    pFVar62 = local_9d8;
    pFVar88 = pFStack_9d0;
  }
  *(FScriptContainerElement **)(pFVar139 + lVar53 + 0x60) = pFVar62;
  *(FScriptContainerElement **)(pFVar139 + lVar53 + 0x60 + 8) = pFVar88;
  local_db8.Rotation.XY.m128d_f64[0] = local_e18.Rotation.XY.m128d_f64[0];
  local_db8.Rotation.XY.m128d_f64[1] = local_e18.Rotation.XY.m128d_f64[1];
  local_db8.Translation.XY.m128d_f64[0] = local_e18.Translation.XY.m128d_f64[0];
  local_db8.Translation.XY.m128d_f64[1] = local_e18.Translation.XY.m128d_f64[1];
  local_db8.Scale3D.XY.m128d_f64[0] = local_e18.Scale3D.XY.m128d_f64[0];
  local_db8.Scale3D.XY.m128d_f64[1] = local_e18.Scale3D.XY.m128d_f64[1];
  local_d58.Rotation.XY.m128d_f64[0] = local_2ba8.Rotation.XY.m128d_f64[0];
  local_d58.Rotation.XY.m128d_f64[1] = local_2ba8.Rotation.XY.m128d_f64[1];
  local_d58.Translation.XY.m128d_f64[0] = local_2ba8.Translation.XY.m128d_f64[0];
  local_d58.Translation.XY.m128d_f64[1] = local_2ba8.Translation.XY.m128d_f64[1];
  local_d58.Scale3D.XY.m128d_f64[0] = local_2ba8.Scale3D.XY.m128d_f64[0];
  local_d58.Scale3D.XY.m128d_f64[1] = local_2ba8.Scale3D.XY.m128d_f64[1];
  local_db8.Rotation.ZW.m128d_f64[0] = local_e18.Rotation.ZW.m128d_f64[0];
  local_db8.Rotation.ZW.m128d_f64[1] = local_e18.Rotation.ZW.m128d_f64[1];
  local_c98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c98.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_db8.Translation.ZW.m128d_f64[0] = local_e18.Translation.ZW.m128d_f64[0];
  local_db8.Translation.ZW.m128d_f64[1] = local_e18.Translation.ZW.m128d_f64[1];
  adVar133[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  adVar133[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_db8.Scale3D.ZW.m128d_f64[0] = local_e18.Scale3D.ZW.m128d_f64[0];
  local_db8.Scale3D.ZW.m128d_f64[1] = local_e18.Scale3D.ZW.m128d_f64[1];
  uVar124 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar125 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d58.Rotation.ZW.m128d_f64[0] = local_2ba8.Rotation.ZW.m128d_f64[0];
  local_d58.Rotation.ZW.m128d_f64[1] = local_2ba8.Rotation.ZW.m128d_f64[1];
  local_c98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c98.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_d58.Translation.ZW.m128d_f64[0] = local_2ba8.Translation.ZW.m128d_f64[0];
  local_d58.Translation.ZW.m128d_f64[1] = local_2ba8.Translation.ZW.m128d_f64[1];
  local_c98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c98.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_d58.Scale3D.ZW.m128d_f64[0] = local_2ba8.Scale3D.ZW.m128d_f64[0];
  local_d58.Scale3D.ZW.m128d_f64[1] = local_2ba8.Scale3D.ZW.m128d_f64[1];
  local_c98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c98.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_c38.Translation.XY.m128d_f64[1]._0_4_ = uVar124;
  local_c38.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c38.Translation.XY.m128d_f64[1]._4_4_ = uVar125;
  local_c98.Translation.XY.m128d_f64[1]._0_4_ = uVar124;
  local_c98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c98.Translation.XY.m128d_f64[1]._4_4_ = uVar125;
  local_c98.Rotation.ZW.m128d_f64 = adVar133;
  local_c38.Rotation.XY.m128d_f64[0] = local_c98.Rotation.XY.m128d_f64[0];
  local_c38.Rotation.XY.m128d_f64[1] = local_c98.Rotation.XY.m128d_f64[1];
  local_c38.Rotation.ZW.m128d_f64 = adVar133;
  local_c38.Translation.ZW.m128d_f64[0] = local_c98.Translation.ZW.m128d_f64[0];
  local_c38.Translation.ZW.m128d_f64[1] = local_c98.Translation.ZW.m128d_f64[1];
  local_c38.Scale3D.XY.m128d_f64[0] = local_c98.Scale3D.XY.m128d_f64[0];
  local_c38.Scale3D.XY.m128d_f64[1] = local_c98.Scale3D.XY.m128d_f64[1];
  local_c38.Scale3D.ZW.m128d_f64[0] = local_c98.Scale3D.ZW.m128d_f64[0];
  local_c38.Scale3D.ZW.m128d_f64[1] = local_c98.Scale3D.ZW.m128d_f64[1];
  if ((!(BADTYPE)(param_3->twist_elbow_bone).bUseSkeletonIndex) &&
     ((param_3->twist_elbow_bone).CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) {
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,(param_3->twist_elbow_bone).CachedCompactPoseIndex);
    local_c38.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_c38.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
    local_c38.Rotation.ZW.m128d_f64 = *&(pTVar43->Rotation).ZW.m128d_f64;
    local_c38.Translation.XY.m128d_f64 = *&(pTVar43->Translation).XY.m128d_f64;
    local_c38.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_c38.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_c38.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_c38.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_c38.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_c38.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
  }
  dVar59 = adVar133[1];
  if ((!(BADTYPE)(param_3->twist_shoulder_bone).bUseSkeletonIndex) &&
     ((param_3->twist_shoulder_bone).CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) {
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,(param_3->twist_shoulder_bone).CachedCompactPoseIndex);
    dVar59 = adVar133[1];
    local_c98.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_c98.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
    local_c98.Rotation.ZW.m128d_f64 = *&(pTVar43->Rotation).ZW.m128d_f64;
    local_c98.Translation.XY.m128d_f64 = *&(pTVar43->Translation).XY.m128d_f64;
    local_c98.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_c98.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_c98.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_c98.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_c98.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_c98.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
  }
  local_2410._8_8_ = local_e18.Translation.XY.m128d_f64[1];
  local_2410._0_8_ = local_e18.Translation.XY.m128d_f64[0];
  local_23f8._8_8_ = local_2ca8.Translation.XY.m128d_f64[1];
  local_23f8._0_8_ = local_2ca8.Translation.XY.m128d_f64[0];
  auVar20._4_8_ = dVar59;
  auVar20._0_4_ = (int)((ulonglong)local_e18.Translation.XY.m128d_f64[0] >> 0x20);
  auVar134._0_8_ = auVar20._0_8_ << 0x20;
  auVar134._8_4_ = SUB84(local_e18.Translation.XY.m128d_f64[1],0);
  auVar134._12_4_ = (int)((ulonglong)local_e18.Translation.XY.m128d_f64[1] >> 0x20);
  uVar124 = SUB84(__real_3ff0000000000000,0);
  uVar125 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_23e8 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
  local_2400 = (FScriptContainerElement *)local_e18.Translation.ZW.m128d_f64[0];
  local_2c08._s_0.Z = local_e18.Translation.ZW.m128d_f64[0] - local_2ca8.Translation.ZW.m128d_f64[0]
  ;
  auVar21._4_8_ = local_2ca8.Translation.ZW.m128d_f64[1];
  auVar21._0_4_ = (int)((ulonglong)local_2ca8.Translation.XY.m128d_f64[0] >> 0x20);
  auVar85._0_8_ = auVar21._0_8_ << 0x20;
  auVar85._8_4_ = SUB84(local_2ca8.Translation.XY.m128d_f64[1],0);
  auVar85._12_4_ = (int)((ulonglong)local_2ca8.Translation.XY.m128d_f64[1] >> 0x20);
  local_2c08._s_0.Y = auVar134._8_8_ - auVar85._8_8_;
  local_2c08._s_0.X = local_e18.Translation.XY.m128d_f64[0] - local_2ca8.Translation.XY.m128d_f64[0]
  ;
  dVar59 = local_2c08._s_0.X * local_2c08._s_0.X + local_2c08._s_0.Y * local_2c08._s_0.Y +
           local_2c08._s_0.Z * local_2c08._s_0.Z;
  if (dVar59 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar59) {
      local_29b0 = __real_3ff0000000000000 / SQRT(dVar59);
      local_2c08._s_0.X = local_2c08._s_0.X * local_29b0;
      local_2c08._s_0.Y = local_2c08._s_0.Y * local_29b0;
      local_2c08._s_0.Z = local_2c08._s_0.Z * local_29b0;
    }
    else {
      local_2c08._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2c08._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2c08._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  UE::Math::TVector<double>::ToOrientationQuat((TVector<double> *)&local_2c08._s_0,&local_10d8);
  uVar122 = SUB84(__real_bff0000000000000,0);
  uVar123 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  FVar89 = (FWeakObjectPtr)local_db8.Rotation.XY.m128d_f64[1];
  if (param_3->Let_Arm_Twist_With_Hand != false) {
    if ((!(BADTYPE)(param_3->twist_elbow_bone).bUseSkeletonIndex) &&
       ((param_3->twist_elbow_bone).CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) {
      pTVar43 = UE::Math::TTransform<double>::Inverse(&local_2778,&local_208);
      local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_328.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_328.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_328.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_328.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_328.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_328.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_328,pTVar43,&local_db8);
      local_808.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_808.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_808.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_808.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_808.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_808.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_808.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_808.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_808.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_808.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_808.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_808.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_808,&local_c38,&local_328);
      dVar35 = local_2ca8.Translation.ZW.m128d_f64[1];
      dVar34 = local_2ca8.Translation.ZW.m128d_f64[0];
      dVar33 = local_2ca8.Translation.XY.m128d_f64[1];
      dVar32 = local_2ca8.Translation.XY.m128d_f64[0];
      dVar28 = local_2ca8.Rotation.XY.m128d_f64[0];
      dVar29 = local_2ca8.Rotation.XY.m128d_f64[1];
      dVar30 = local_2ca8.Rotation.ZW.m128d_f64[0];
      dVar31 = local_2ca8.Rotation.ZW.m128d_f64[1];
      local_2d18 = (FWeakObjectPtr)local_808.Rotation.XY.m128d_f64[0];
      FStack_2d10 = (FWeakObjectPtr)local_808.Rotation.XY.m128d_f64[1];
      local_c38.Rotation.XY.m128d_f64[0] = local_808.Rotation.XY.m128d_f64[0];
      local_c38.Rotation.XY.m128d_f64[1] = local_808.Rotation.XY.m128d_f64[1];
      local_2d28 = (FWeakObjectPtr)local_808.Rotation.ZW.m128d_f64[0];
      FStack_2d20 = (FWeakObjectPtr)local_808.Rotation.ZW.m128d_f64[1];
      local_c38.Rotation.ZW.m128d_f64[0] = local_808.Rotation.ZW.m128d_f64[0];
      local_c38.Rotation.ZW.m128d_f64[1] = local_808.Rotation.ZW.m128d_f64[1];
      local_2cc0.Data = (FScriptContainerElement *)local_808.Translation.XY.m128d_f64[0];
      FStack_2cb8.Data = (FScriptContainerElement *)local_808.Translation.XY.m128d_f64[1];
      local_c38.Translation.XY.m128d_f64[0] = local_808.Translation.XY.m128d_f64[0];
      local_c38.Translation.XY.m128d_f64[1] = local_808.Translation.XY.m128d_f64[1];
      local_2c48 = (ForElementType<unsigned_int>)local_808.Translation.ZW.m128d_f64[0];
      FStack_2c40 = (ForElementType<unsigned_int>)local_808.Translation.ZW.m128d_f64[1];
      local_c38.Translation.ZW.m128d_f64[0] = local_808.Translation.ZW.m128d_f64[0];
      local_c38.Translation.ZW.m128d_f64[1] = local_808.Translation.ZW.m128d_f64[1];
      local_2cd0 = (FWeakObjectPtr)local_808.Scale3D.XY.m128d_f64[0];
      FStack_2cc8 = (FWeakObjectPtr)local_808.Scale3D.XY.m128d_f64[1];
      local_c38.Scale3D.XY.m128d_f64[0] = local_808.Scale3D.XY.m128d_f64[0];
      local_c38.Scale3D.XY.m128d_f64[1] = local_808.Scale3D.XY.m128d_f64[1];
      local_2ce0 = (FWeakObjectPtr)local_808.Scale3D.ZW.m128d_f64[0];
      FStack_2cd8 = (FWeakObjectPtr)local_808.Scale3D.ZW.m128d_f64[1];
      local_c38.Scale3D.ZW.m128d_f64[0] = local_808.Scale3D.ZW.m128d_f64[0];
      local_c38.Scale3D.ZW.m128d_f64[1] = local_808.Scale3D.ZW.m128d_f64[1];
      local_2d48 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[0];
      pTStack_2d40 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[1];
      local_2d08.Data = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[0];
      FStack_2d00.Data = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[1];
      pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d54);
      dVar59 = (pTVar43->Rotation).XY.m128d_f64[0];
      dVar115 = (pTVar43->Rotation).XY.m128d_f64[1];
      dVar140 = (pTVar43->Rotation).ZW.m128d_f64[0];
      dVar91 = (pTVar43->Rotation).ZW.m128d_f64[1];
      dVar128 = (pTVar43->Translation).XY.m128d_f64[0];
      dVar61 = (pTVar43->Translation).XY.m128d_f64[1];
      dVar60 = (pTVar43->Translation).ZW.m128d_f64[0];
      dVar103 = (pTVar43->Translation).ZW.m128d_f64[1];
      dVar12 = (pTVar43->Scale3D).XY.m128d_f64[0];
      dVar112 = (pTVar43->Scale3D).XY.m128d_f64[1];
      dVar26 = (pTVar43->Scale3D).ZW.m128d_f64[0];
      dVar27 = (pTVar43->Scale3D).ZW.m128d_f64[1];
      pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (&param_1->Pose,(param_3->twist_elbow_bone).CachedCompactPoseIndex);
      local_1318.Scale3D.XY.m128d_f64[0] = (double)local_2d48;
      local_1318.Scale3D.XY.m128d_f64[1] = (double)pTStack_2d40;
      local_1318.Scale3D.ZW.m128d_f64[0] = (double)local_2d08.Data;
      local_1318.Scale3D.ZW.m128d_f64[1] = (double)FStack_2d00.Data;
      local_11f8.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
      local_11f8.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
      local_12b8.Rotation.XY.m128d_f64[0] = (double)local_2d18;
      local_12b8.Rotation.XY.m128d_f64[1] = (double)FStack_2d10;
      local_11f8.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
      local_11f8.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
      local_12b8.Rotation.ZW.m128d_f64[0] = (double)local_2d28;
      local_12b8.Rotation.ZW.m128d_f64[1] = (double)FStack_2d20;
      local_11f8.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
      local_11f8.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
      local_12b8.Translation.XY.m128d_f64[0] = (double)local_2cc0.Data;
      local_12b8.Translation.XY.m128d_f64[1] = (double)FStack_2cb8.Data;
      local_2218.Rotation.ZW.m128d_f64[0] =
           (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0];
      local_2218.Rotation.ZW.m128d_f64[1] =
           (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1];
      local_12b8.Translation.ZW.m128d_f64[0] = (double)local_2c48;
      local_12b8.Translation.ZW.m128d_f64[1] = (double)FStack_2c40;
      local_2218.Translation.ZW.m128d_f64[0] =
           (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
      local_2218.Translation.ZW.m128d_f64[1] =
           (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
      local_12b8.Scale3D.XY.m128d_f64[0] = (double)local_2cd0;
      local_12b8.Scale3D.XY.m128d_f64[1] = (double)FStack_2cc8;
      local_2218.Scale3D.ZW.m128d_f64[0] =
           (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0];
      local_2218.Scale3D.ZW.m128d_f64[1] =
           (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1];
      local_12b8.Scale3D.ZW.m128d_f64[0] = (double)local_2ce0;
      local_12b8.Scale3D.ZW.m128d_f64[1] = (double)FStack_2cd8;
      local_11f8.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
      local_11f8.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
      local_11f8.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
      local_11f8.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
      local_11f8.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
      local_11f8.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
      local_2218.Rotation.XY.m128d_f64[0] =
           (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0];
      local_2218.Rotation.XY.m128d_f64[1] =
           (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1];
      local_2218.Translation.XY.m128d_f64[0] =
           (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
      local_2218.Translation.XY.m128d_f64[1] =
           (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
      local_2218.Scale3D.XY.m128d_f64[0] =
           (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0];
      local_2218.Scale3D.XY.m128d_f64[1] =
           (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1];
      local_1318.Rotation.XY.m128d_f64[0] = dVar28;
      local_1318.Rotation.XY.m128d_f64[1] = dVar29;
      local_1318.Rotation.ZW.m128d_f64[0] = dVar30;
      local_1318.Rotation.ZW.m128d_f64[1] = dVar31;
      local_1318.Translation.XY.m128d_f64[0] = dVar32;
      local_1318.Translation.XY.m128d_f64[1] = dVar33;
      local_1318.Translation.ZW.m128d_f64[0] = dVar34;
      local_1318.Translation.ZW.m128d_f64[1] = dVar35;
      local_1258.Rotation.XY.m128d_f64[0] = dVar59;
      local_1258.Rotation.XY.m128d_f64[1] = dVar115;
      local_1258.Rotation.ZW.m128d_f64[0] = dVar140;
      local_1258.Rotation.ZW.m128d_f64[1] = dVar91;
      local_1258.Translation.XY.m128d_f64[0] = dVar128;
      local_1258.Translation.XY.m128d_f64[1] = dVar61;
      local_1258.Translation.ZW.m128d_f64[0] = dVar60;
      local_1258.Translation.ZW.m128d_f64[1] = dVar103;
      local_1258.Scale3D.XY.m128d_f64[0] = dVar12;
      local_1258.Scale3D.XY.m128d_f64[1] = dVar112;
      local_1258.Scale3D.ZW.m128d_f64[0] = dVar26;
      local_1258.Scale3D.ZW.m128d_f64[1] = dVar27;
      pTVar43 = SetArmYaw(&local_ff8,param_4->invert_lower_twist,param_4->is_this_right_hand,
                          (float)(double)local_2d38,&local_2218,&local_11f8,&local_1258,&local_12b8,
                          &local_1318);
      local_c38.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
      local_c38.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
      local_c38.Rotation.ZW.m128d_f64 = *&(pTVar43->Rotation).ZW.m128d_f64;
      local_c38.Translation.XY.m128d_f64 = *&(pTVar43->Translation).XY.m128d_f64;
      local_c38.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
      local_c38.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
      local_c38.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
      local_c38.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
      local_c38.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
      local_c38.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
      local_aa8 = (param_3->twist_elbow_bone).CachedCompactPoseIndex;
      pFVar5 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
      local_a98 = (pTVar43->Rotation).XY.m128d_f64[0];
      dStack_a90 = (pTVar43->Rotation).XY.m128d_f64[1];
      local_a88 = (pTVar43->Rotation).ZW.m128d_f64[0];
      dStack_a80 = (pTVar43->Rotation).ZW.m128d_f64[1];
      local_a78 = (pTVar43->Translation).XY.m128d_f64[0];
      dStack_a70 = (pTVar43->Translation).XY.m128d_f64[1];
      local_a68 = (pTVar43->Translation).ZW.m128d_f64[0];
      dStack_a60 = (pTVar43->Translation).ZW.m128d_f64[1];
      local_a58 = (pTVar43->Scale3D).XY.m128d_f64[0];
      dStack_a50 = (pTVar43->Scale3D).XY.m128d_f64[1];
      local_a48 = (pTVar43->Scale3D).ZW.m128d_f64[0];
      dStack_a40 = (pTVar43->Scale3D).ZW.m128d_f64[1];
      if ((pFVar5 <= &local_aa8) &&
         ((&local_aa8 < pFVar5 + (longlong)param_6->ArrayMax * 0x1c &&
          (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar38)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar40 = param_6->ArrayNum;
      if (iVar40 == param_6->ArrayMax) {
        iVar40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar40 + 1;
      lVar53 = (longlong)iVar40 * 0x70;
      pFVar139 = (param_6->AllocatorInstance).Data;
      *(ulonglong *)(pFVar139 + lVar53) = CONCAT44(uStack_aa4,local_aa8);
      *(undefined8 *)(pFVar139 + lVar53 + 8) = uStack_aa0;
      *(double *)(pFVar139 + lVar53 + 0x10) = local_a98;
      *(double *)(pFVar139 + lVar53 + 0x10 + 8) = dStack_a90;
      *(double *)(pFVar139 + lVar53 + 0x20) = local_a88;
      *(double *)(pFVar139 + lVar53 + 0x20 + 8) = dStack_a80;
      *(double *)(pFVar139 + lVar53 + 0x30) = local_a78;
      *(double *)(pFVar139 + lVar53 + 0x30 + 8) = dStack_a70;
      *(double *)(pFVar139 + lVar53 + 0x40) = local_a68;
      *(double *)(pFVar139 + lVar53 + 0x40 + 8) = dStack_a60;
      *(double *)(pFVar139 + lVar53 + 0x50) = local_a58;
      *(double *)(pFVar139 + lVar53 + 0x50 + 8) = dStack_a50;
      *(double *)(pFVar139 + lVar53 + 0x60) = local_a48;
      *(double *)(pFVar139 + lVar53 + 0x60 + 8) = dStack_a40;
    }
    dVar35 = local_2ca8.Translation.ZW.m128d_f64[1];
    dVar34 = local_2ca8.Translation.ZW.m128d_f64[0];
    dVar33 = local_2ca8.Translation.XY.m128d_f64[1];
    dVar32 = local_2ca8.Translation.XY.m128d_f64[0];
    dVar28 = local_2ca8.Rotation.XY.m128d_f64[0];
    dVar29 = local_2ca8.Rotation.XY.m128d_f64[1];
    dVar30 = local_2ca8.Rotation.ZW.m128d_f64[0];
    dVar31 = local_2ca8.Rotation.ZW.m128d_f64[1];
    local_2d48 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[0];
    pTStack_2d40 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[1];
    local_2d08.Data = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[0];
    FStack_2d00.Data = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[1];
    local_2d18 = (FWeakObjectPtr)local_e18.Rotation.XY.m128d_f64[0];
    FStack_2d10 = (FWeakObjectPtr)local_e18.Rotation.XY.m128d_f64[1];
    local_2d28 = (FWeakObjectPtr)local_e18.Rotation.ZW.m128d_f64[0];
    FStack_2d20 = (FWeakObjectPtr)local_e18.Rotation.ZW.m128d_f64[1];
    local_2cc0.Data = (FScriptContainerElement *)local_e18.Translation.XY.m128d_f64[0];
    FStack_2cb8.Data = (FScriptContainerElement *)local_e18.Translation.XY.m128d_f64[1];
    local_2c48 = (ForElementType<unsigned_int>)local_e18.Translation.ZW.m128d_f64[0];
    FStack_2c40 = (ForElementType<unsigned_int>)local_e18.Translation.ZW.m128d_f64[1];
    local_2cd0 = (FWeakObjectPtr)local_e18.Scale3D.XY.m128d_f64[0];
    FStack_2cc8 = (FWeakObjectPtr)local_e18.Scale3D.XY.m128d_f64[1];
    local_2ce0 = (FWeakObjectPtr)local_e18.Scale3D.ZW.m128d_f64[0];
    FStack_2cd8 = (FWeakObjectPtr)local_e18.Scale3D.ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d54);
    dVar59 = (pTVar43->Rotation).XY.m128d_f64[0];
    dVar115 = (pTVar43->Rotation).XY.m128d_f64[1];
    dVar140 = (pTVar43->Rotation).ZW.m128d_f64[0];
    dVar91 = (pTVar43->Rotation).ZW.m128d_f64[1];
    dVar128 = (pTVar43->Translation).XY.m128d_f64[0];
    dVar61 = (pTVar43->Translation).XY.m128d_f64[1];
    dVar60 = (pTVar43->Translation).ZW.m128d_f64[0];
    dVar103 = (pTVar43->Translation).ZW.m128d_f64[1];
    dVar12 = (pTVar43->Scale3D).XY.m128d_f64[0];
    dVar112 = (pTVar43->Scale3D).XY.m128d_f64[1];
    dVar26 = (pTVar43->Scale3D).ZW.m128d_f64[0];
    dVar27 = (pTVar43->Scale3D).ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
    local_21b8.Scale3D.XY.m128d_f64[0] = (double)local_2d48;
    local_21b8.Scale3D.XY.m128d_f64[1] = (double)pTStack_2d40;
    local_21b8.Scale3D.ZW.m128d_f64[0] = (double)local_2d08.Data;
    local_21b8.Scale3D.ZW.m128d_f64[1] = (double)FStack_2d00.Data;
    local_1e58.Rotation.XY.m128d_f64[0] = (double)local_2d18;
    local_1e58.Rotation.XY.m128d_f64[1] = (double)FStack_2d10;
    local_1e58.Rotation.ZW.m128d_f64[0] = (double)local_2d28;
    local_1e58.Rotation.ZW.m128d_f64[1] = (double)FStack_2d20;
    local_1e58.Translation.XY.m128d_f64[0] = (double)local_2cc0.Data;
    local_1e58.Translation.XY.m128d_f64[1] = (double)FStack_2cb8.Data;
    local_1e58.Translation.ZW.m128d_f64[0] = (double)local_2c48;
    local_1e58.Translation.ZW.m128d_f64[1] = (double)FStack_2c40;
    local_1e58.Scale3D.XY.m128d_f64[0] = (double)local_2cd0;
    local_1e58.Scale3D.XY.m128d_f64[1] = (double)FStack_2cc8;
    local_1738.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_1738.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
    local_1e58.Scale3D.ZW.m128d_f64[0] = (double)local_2ce0;
    local_1e58.Scale3D.ZW.m128d_f64[1] = (double)FStack_2cd8;
    local_1738.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
    local_1738.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
    local_1738.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
    local_1738.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
    local_1738.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_1738.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_1738.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_1738.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_1738.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_1738.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
    local_1798.Rotation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0];
    local_1798.Rotation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1];
    local_1798.Rotation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0];
    local_1798.Rotation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1];
    local_1798.Translation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
    local_1798.Translation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
    local_1798.Translation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
    local_1798.Translation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
    local_1798.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0]
    ;
    local_1798.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1]
    ;
    local_1798.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0]
    ;
    local_1798.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1]
    ;
    local_21b8.Rotation.XY.m128d_f64[0] = dVar28;
    local_21b8.Rotation.XY.m128d_f64[1] = dVar29;
    local_21b8.Rotation.ZW.m128d_f64[0] = dVar30;
    local_21b8.Rotation.ZW.m128d_f64[1] = dVar31;
    local_21b8.Translation.XY.m128d_f64[0] = dVar32;
    local_21b8.Translation.XY.m128d_f64[1] = dVar33;
    local_21b8.Translation.ZW.m128d_f64[0] = dVar34;
    local_21b8.Translation.ZW.m128d_f64[1] = dVar35;
    FVar4 = local_2d38;
    local_16d8.Rotation.XY.m128d_f64[0] = dVar59;
    local_16d8.Rotation.XY.m128d_f64[1] = dVar115;
    local_16d8.Rotation.ZW.m128d_f64[0] = dVar140;
    local_16d8.Rotation.ZW.m128d_f64[1] = dVar91;
    local_16d8.Translation.XY.m128d_f64[0] = dVar128;
    local_16d8.Translation.XY.m128d_f64[1] = dVar61;
    local_16d8.Translation.ZW.m128d_f64[0] = dVar60;
    local_16d8.Translation.ZW.m128d_f64[1] = dVar103;
    local_16d8.Scale3D.XY.m128d_f64[0] = dVar12;
    local_16d8.Scale3D.XY.m128d_f64[1] = dVar112;
    local_16d8.Scale3D.ZW.m128d_f64[0] = dVar26;
    local_16d8.Scale3D.ZW.m128d_f64[1] = dVar27;
    pTVar43 = SetArmYaw(&local_f98,param_4->invert_lower_twist,param_4->is_this_right_hand,
                        (float)(double)local_2d38,&local_1798,&local_1738,&local_16d8,&local_1e58,
                        &local_21b8);
    local_db8.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_db8.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
    local_db8.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
    local_db8.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
    local_db8.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
    local_db8.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
    local_db8.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_db8.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_db8.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_db8.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_db8.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_db8.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
    dVar115 = local_db8.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
              local_e18.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              local_db8.Rotation.ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1] *
              local_e18.Rotation.ZW.m128d_f64[1] +
              local_db8.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
              local_e18.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              local_db8.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0] *
              local_e18.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar59 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar115) &&
       (dVar59 = dVar115, __real_3ff0000000000000 <= dVar115)) {
      dVar59 = __real_3ff0000000000000;
    }
    dVar59 = acos(dVar59);
    fVar113 = __real_43b40000;
    for (fVar90 = (float)(dVar59 * __real_405ca5dc1a63c1f8); __real_43340000 < fVar90;
        fVar90 = fVar90 + __real_c3b40000) {
    }
    for (; fVar90 < __real_c3340000; fVar90 = fVar90 + __real_43b40000) {
    }
    fVar58 = FGenericPlatformMath::Fmod(__real_430c0000,__real_43b40000);
    if (fVar58 < 0.0) {
      fVar58 = fVar58 + fVar113;
    }
    fVar58 = fVar58 * __real_3f000000;
    fVar127 = FGenericPlatformMath::Fmod(fVar58 - __real_428c0000,fVar113);
    if (fVar127 < 0.0) {
      fVar127 = fVar127 + fVar113;
    }
    fVar113 = UE::Math::TRotator<float>::NormalizeAxis(fVar90 - fVar127);
    if (fVar113 <= fVar58) {
      if (fVar113 < (float)((uint)fVar58 ^ __xmm_80000000800000008000000080000000)) {
        fVar90 = fVar127 - fVar58;
      }
    }
    else {
      fVar90 = fVar127 + fVar58;
    }
    UE::Math::TRotator<float>::NormalizeAxis(fVar90);
    dVar59 = FMath::UnwindDegrees<double>((double)FVar4);
    fVar90 = (float)(double)CONCAT44(*(uint *)((longlong)&(param_4->ForeArm_Angle_Limit).field0_0x0
                                              + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     *(uint *)&(param_4->ForeArm_Angle_Limit).field0_0x0 &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (__real_4333e666 <= fVar90) {
      fVar90 = __real_4333e666;
    }
    fVar113 = (float)(double)CONCAT44(*(uint *)((longlong)&(param_4->ForeArm_Angle_Limit).field0_0x0
                                               + 0xc) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                                      ,*(uint *)((longlong)
                                                 &(param_4->ForeArm_Angle_Limit).field0_0x0 + 8) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (fVar90 <= __real_3c23d70a) {
      fVar90 = __real_3c23d70a;
    }
    if (__real_4333e666 <= fVar113) {
      fVar113 = __real_4333e666;
    }
    dVar115 = (double)fVar90;
    if (fVar113 <= __real_3c23d70a) {
      fVar113 = __real_3c23d70a;
    }
    dVar140 = (double)fVar113;
    if (((dVar115 <= 0.0) || (dVar140 <= 0.0)) ||
       ((dVar115 = (double)CONCAT44((uint)((ulonglong)dVar115 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar115,0) ^ (uint)__xmm_80000000000000008000000000000000)
        , dVar59 = FMath::ClampAngle<double>(dVar59,dVar115,dVar140), dVar59 != dVar115 &&
        (dVar59 != dVar140)))) {
      param_4->last_forarm_angle = (float)dVar59;
    }
    dVar35 = local_2ca8.Translation.ZW.m128d_f64[1];
    dVar34 = local_2ca8.Translation.ZW.m128d_f64[0];
    dVar33 = local_2ca8.Translation.XY.m128d_f64[1];
    dVar32 = local_2ca8.Translation.XY.m128d_f64[0];
    dVar28 = local_2ca8.Rotation.XY.m128d_f64[0];
    dVar29 = local_2ca8.Rotation.XY.m128d_f64[1];
    dVar30 = local_2ca8.Rotation.ZW.m128d_f64[0];
    dVar31 = local_2ca8.Rotation.ZW.m128d_f64[1];
    local_2d48 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[0];
    pTStack_2d40 = (TReferenceControllerBase<1> *)local_2ca8.Scale3D.XY.m128d_f64[1];
    local_2d08.Data = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[0];
    FStack_2d00.Data = (FScriptContainerElement *)local_2ca8.Scale3D.ZW.m128d_f64[1];
    local_2d18 = (FWeakObjectPtr)local_e18.Rotation.XY.m128d_f64[0];
    FStack_2d10 = (FWeakObjectPtr)local_e18.Rotation.XY.m128d_f64[1];
    local_2d28 = (FWeakObjectPtr)local_e18.Rotation.ZW.m128d_f64[0];
    FStack_2d20 = (FWeakObjectPtr)local_e18.Rotation.ZW.m128d_f64[1];
    local_2cc0.Data = (FScriptContainerElement *)local_e18.Translation.XY.m128d_f64[0];
    FStack_2cb8.Data = (FScriptContainerElement *)local_e18.Translation.XY.m128d_f64[1];
    local_2c48 = (ForElementType<unsigned_int>)local_e18.Translation.ZW.m128d_f64[0];
    FStack_2c40 = (ForElementType<unsigned_int>)local_e18.Translation.ZW.m128d_f64[1];
    local_2cd0 = (FWeakObjectPtr)local_e18.Scale3D.XY.m128d_f64[0];
    FStack_2cc8 = (FWeakObjectPtr)local_e18.Scale3D.XY.m128d_f64[1];
    local_2ce0 = (FWeakObjectPtr)local_e18.Scale3D.ZW.m128d_f64[0];
    FStack_2cd8 = (FWeakObjectPtr)local_e18.Scale3D.ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d54);
    dVar59 = (pTVar43->Rotation).XY.m128d_f64[0];
    dVar115 = (pTVar43->Rotation).XY.m128d_f64[1];
    dVar140 = (pTVar43->Rotation).ZW.m128d_f64[0];
    dVar91 = (pTVar43->Rotation).ZW.m128d_f64[1];
    dVar128 = (pTVar43->Translation).XY.m128d_f64[0];
    dVar61 = (pTVar43->Translation).XY.m128d_f64[1];
    dVar60 = (pTVar43->Translation).ZW.m128d_f64[0];
    dVar103 = (pTVar43->Translation).ZW.m128d_f64[1];
    dVar12 = (pTVar43->Scale3D).XY.m128d_f64[0];
    dVar112 = (pTVar43->Scale3D).XY.m128d_f64[1];
    dVar26 = (pTVar43->Scale3D).ZW.m128d_f64[0];
    dVar27 = (pTVar43->Scale3D).ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
    local_17f8.Scale3D.XY.m128d_f64[0] = (double)local_2d48;
    local_17f8.Scale3D.XY.m128d_f64[1] = (double)pTStack_2d40;
    local_17f8.Scale3D.ZW.m128d_f64[0] = (double)local_2d08.Data;
    local_17f8.Scale3D.ZW.m128d_f64[1] = (double)FStack_2d00.Data;
    local_2038.Rotation.XY.m128d_f64[0] = (double)local_2d18;
    local_2038.Rotation.XY.m128d_f64[1] = (double)FStack_2d10;
    local_2038.Rotation.ZW.m128d_f64[0] = (double)local_2d28;
    local_2038.Rotation.ZW.m128d_f64[1] = (double)FStack_2d20;
    local_2038.Translation.XY.m128d_f64[0] = (double)local_2cc0.Data;
    local_2038.Translation.XY.m128d_f64[1] = (double)FStack_2cb8.Data;
    local_2038.Translation.ZW.m128d_f64[0] = (double)local_2c48;
    local_2038.Translation.ZW.m128d_f64[1] = (double)FStack_2c40;
    local_2038.Scale3D.XY.m128d_f64[0] = (double)local_2cd0;
    local_2038.Scale3D.XY.m128d_f64[1] = (double)FStack_2cc8;
    local_1978.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_1978.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
    local_2038.Scale3D.ZW.m128d_f64[0] = (double)local_2ce0;
    local_2038.Scale3D.ZW.m128d_f64[1] = (double)FStack_2cd8;
    local_1978.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
    local_1978.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
    local_1978.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
    local_1978.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
    local_1978.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_1978.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_1978.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_1978.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_1978.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_1978.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
    local_19d8.Rotation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0];
    local_19d8.Rotation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1];
    local_19d8.Rotation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0];
    local_19d8.Rotation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1];
    local_19d8.Translation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
    local_19d8.Translation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
    local_19d8.Translation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
    local_19d8.Translation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
    local_19d8.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0]
    ;
    local_19d8.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1]
    ;
    local_19d8.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0]
    ;
    local_19d8.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1]
    ;
    local_17f8.Rotation.XY.m128d_f64[0] = dVar28;
    local_17f8.Rotation.XY.m128d_f64[1] = dVar29;
    local_17f8.Rotation.ZW.m128d_f64[0] = dVar30;
    local_17f8.Rotation.ZW.m128d_f64[1] = dVar31;
    local_17f8.Translation.XY.m128d_f64[0] = dVar32;
    local_17f8.Translation.XY.m128d_f64[1] = dVar33;
    local_17f8.Translation.ZW.m128d_f64[0] = dVar34;
    local_17f8.Translation.ZW.m128d_f64[1] = dVar35;
    local_1918.Rotation.XY.m128d_f64[0] = dVar59;
    local_1918.Rotation.XY.m128d_f64[1] = dVar115;
    local_1918.Rotation.ZW.m128d_f64[0] = dVar140;
    local_1918.Rotation.ZW.m128d_f64[1] = dVar91;
    local_1918.Translation.XY.m128d_f64[0] = dVar128;
    local_1918.Translation.XY.m128d_f64[1] = dVar61;
    local_1918.Translation.ZW.m128d_f64[0] = dVar60;
    local_1918.Translation.ZW.m128d_f64[1] = dVar103;
    local_1918.Scale3D.XY.m128d_f64[0] = dVar12;
    local_1918.Scale3D.XY.m128d_f64[1] = dVar112;
    local_1918.Scale3D.ZW.m128d_f64[0] = dVar26;
    local_1918.Scale3D.ZW.m128d_f64[1] = dVar27;
    pTVar43 = SetArmYaw(&local_1058,param_4->invert_lower_twist,param_4->is_this_right_hand,
                        param_4->last_forarm_angle,&local_19d8,&local_1978,&local_1918,&local_2038,
                        &local_17f8);
    uVar124 = SUB84(__real_3ff0000000000000,0);
    uVar125 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar122 = SUB84(__real_bff0000000000000,0);
    uVar123 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    local_db8.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_db8.Rotation.XY.m128d_f64[1] = *(double *)((pTVar43->Rotation).XY.m128d_f64 + 1);
    local_db8.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
    local_db8.Rotation.ZW.m128d_f64[1] = *(double *)((pTVar43->Rotation).ZW.m128d_f64 + 1);
    local_db8.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
    local_db8.Translation.XY.m128d_f64[1] = *(double *)((pTVar43->Translation).XY.m128d_f64 + 1);
    local_db8.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_db8.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_db8.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_db8.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_db8.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_db8.Scale3D.ZW.m128d_f64[1] = *(double *)((pTVar43->Scale3D).ZW.m128d_f64 + 1);
    FVar89 = extraout_XMM0_Qb;
  }
  local_23c8._8_8_ = local_e18.Translation.XY.m128d_f64[1];
  local_23c8._0_8_ = local_e18.Translation.XY.m128d_f64[0];
  auVar22._4_4_ = FVar89.ObjectIndex;
  auVar22._8_4_ = FVar89.ObjectSerialNumber;
  auVar22._0_4_ = (int)((ulonglong)local_e18.Translation.XY.m128d_f64[0] >> 0x20);
  auVar86._0_8_ = auVar22._0_8_ << 0x20;
  auVar86._8_4_ = SUB84(local_e18.Translation.XY.m128d_f64[1],0);
  auVar86._12_4_ = (int)((ulonglong)local_e18.Translation.XY.m128d_f64[1] >> 0x20);
  dVar59 = local_2ba8.Translation.XY.m128d_f64[1] - auVar86._8_8_;
  local_23d0 = (ForElementType<unsigned_int>)local_2ba8.Translation.ZW.m128d_f64[0];
  dVar115 = local_2ba8.Translation.ZW.m128d_f64[0] - local_e18.Translation.ZW.m128d_f64[0];
  local_23b8 = (FScriptContainerElement *)local_e18.Translation.ZW.m128d_f64[0];
  local_23e0 = (FScriptContainerElement *)local_2ba8.Translation.XY.m128d_f64[0];
  pFStack_23d8 = (FScriptContainerElement *)local_2ba8.Translation.XY.m128d_f64[1];
  dVar91 = local_2ba8.Translation.XY.m128d_f64[0] - local_e18.Translation.XY.m128d_f64[0];
  dVar140 = dVar91 * dVar91 + dVar59 * dVar59 + dVar115 * dVar115;
  uVar3 = dVar59;
  uVar114 = dVar115;
  uVar141 = dVar91;
  if ((dVar140 != (double)CONCAT44(uVar125,uVar124)) &&
     (uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar114 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar141 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar140)) {
    local_29a8 = (double)CONCAT44(uVar125,uVar124) / SQRT(dVar140);
    uVar3 = dVar59 * local_29a8;
    uVar114 = dVar115 * local_29a8;
    uVar141 = dVar91 * local_29a8;
  }
  local_27c0._8_8_ = local_2ca8.Translation.XY.m128d_f64[1];
  local_27c0._0_8_ = local_2ca8.Translation.XY.m128d_f64[0];
  local_27b0 = (TReferenceControllerBase<1> *)local_2ca8.Translation.ZW.m128d_f64[0];
  local_23a0 = (FScriptContainerElement *)local_e18.Translation.ZW.m128d_f64[0];
  uVar135 = local_e18.Translation.ZW.m128d_f64[0] - local_2ca8.Translation.ZW.m128d_f64[0];
  auVar23._4_8_ = local_2ca8.Translation.ZW.m128d_f64[1];
  auVar23._0_4_ = (int)((ulonglong)local_2ca8.Translation.XY.m128d_f64[0] >> 0x20);
  auVar87._0_8_ = auVar23._0_8_ << 0x20;
  auVar87._8_4_ = SUB84(local_2ca8.Translation.XY.m128d_f64[1],0);
  auVar87._12_4_ = (int)((ulonglong)local_2ca8.Translation.XY.m128d_f64[1] >> 0x20);
  uVar9 = local_e18.Translation.XY.m128d_f64[1] - auVar87._8_8_;
  uVar129 = local_e18.Translation.XY.m128d_f64[0] - local_2ca8.Translation.XY.m128d_f64[0];
  dVar59 = (double)uVar129 * (double)uVar129 + (double)uVar9 * (double)uVar9 +
           (double)uVar135 * (double)uVar135;
  if (dVar59 != (double)CONCAT44(uVar125,uVar124)) {
    if (__real_3e45798ee0000000 <= dVar59) {
      local_29a0 = (double)CONCAT44(uVar125,uVar124) / SQRT(dVar59);
      uVar129 = (double)uVar129 * local_29a0;
      uVar9 = (double)uVar9 * local_29a0;
      uVar135 = (double)uVar135 * local_29a0;
    }
    else {
      local_2a38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar135 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar129 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
  }
  dVar59 = (double)uVar9 * (double)uVar3 + (double)uVar129 * (double)uVar141 +
           (double)uVar135 * (double)uVar114;
  dVar115 = (double)CONCAT44(uVar123,uVar122);
  if (((double)CONCAT44(uVar123,uVar122) <= dVar59) &&
     (dVar115 = dVar59, (double)CONCAT44(uVar125,uVar124) <= dVar59)) {
    dVar115 = (double)CONCAT44(uVar125,uVar124);
  }
  local_2bf0 = (ForElementType<unsigned_int>)local_db8.Scale3D.ZW.m128d_f64[0];
  FStack_2be8 = (ForElementType<unsigned_int>)local_db8.Scale3D.ZW.m128d_f64[1];
  local_2be0 = (FScriptContainerElement *)local_db8.Translation.ZW.m128d_f64[0];
  pFStack_2bd8 = (FScriptContainerElement *)local_db8.Translation.ZW.m128d_f64[1];
  local_2bd0 = (FScriptContainerElement *)local_db8.Scale3D.XY.m128d_f64[0];
  pFStack_2bc8 = (FScriptContainerElement *)local_db8.Scale3D.XY.m128d_f64[1];
  local_23b0 = local_23c8;
  local_2c18._0_8_ = local_db8.Rotation.XY.m128d_f64[0];
  local_2c18._8_8_ = local_db8.Rotation.XY.m128d_f64[1];
  local_2c30 = (FWeakObjectPtr)local_db8.Rotation.ZW.m128d_f64[0];
  FStack_2c28 = (FWeakObjectPtr)local_db8.Rotation.ZW.m128d_f64[1];
  local_2d38 = (ForElementType<unsigned_int>)local_db8.Translation.XY.m128d_f64[0];
  FStack_2d30 = (ForElementType<unsigned_int>)local_db8.Translation.XY.m128d_f64[1];
  dVar115 = acos(dVar115);
  local_1af8.Rotation.ZW.m128d_f64[1] = local_d58.Rotation.ZW.m128d_f64[1];
  local_1af8.Rotation.ZW.m128d_f64[0] = local_d58.Rotation.ZW.m128d_f64[0];
  local_1af8.Rotation.XY.m128d_f64[1] = local_d58.Rotation.XY.m128d_f64[1];
  local_1af8.Rotation.XY.m128d_f64[0] = local_d58.Rotation.XY.m128d_f64[0];
  local_2a38._s_0.X = (param_3->Up_Vector_Val).field0_0x0._s_0.X;
  local_2a38._s_0.Y = (param_3->Up_Vector_Val).field0_0x0._s_0.Y;
  dVar59 = (param_3->Up_Vector_Val).field0_0x0._s_0.Z;
  local_2d4c = (float)((double)CONCAT44(uVar125,uVar124) - dVar115 * ___real_3fde8ec8a4aeacc4);
  if (__real_3f800000 <= local_2d4c) {
    local_2d4c = __real_3f800000;
  }
  if (local_2d4c <= __real_00000000) {
    local_2d4c = __real_00000000;
  }
  local_2d48 = (TReferenceControllerBase<1> *)local_d58.Translation.XY.m128d_f64[0];
  pTStack_2d40 = (TReferenceControllerBase<1> *)local_d58.Translation.XY.m128d_f64[1];
  local_2d08.Data = (FScriptContainerElement *)local_d58.Translation.ZW.m128d_f64[0];
  FStack_2d00.Data = (FScriptContainerElement *)local_d58.Translation.ZW.m128d_f64[1];
  local_2d18 = (FWeakObjectPtr)local_d58.Scale3D.XY.m128d_f64[0];
  FStack_2d10 = (FWeakObjectPtr)local_d58.Scale3D.XY.m128d_f64[1];
  local_2d28 = (FWeakObjectPtr)local_d58.Scale3D.ZW.m128d_f64[0];
  FStack_2d20 = (FWeakObjectPtr)local_d58.Scale3D.ZW.m128d_f64[1];
  pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
  dVar115 = (pTVar43->Rotation).XY.m128d_f64[0];
  dVar140 = (pTVar43->Rotation).XY.m128d_f64[1];
  dVar91 = (pTVar43->Rotation).ZW.m128d_f64[0];
  dVar128 = (pTVar43->Rotation).ZW.m128d_f64[1];
  dVar61 = (pTVar43->Translation).XY.m128d_f64[0];
  dVar60 = (pTVar43->Translation).XY.m128d_f64[1];
  dVar103 = (pTVar43->Translation).ZW.m128d_f64[0];
  dVar12 = (pTVar43->Translation).ZW.m128d_f64[1];
  dVar112 = (pTVar43->Scale3D).XY.m128d_f64[0];
  dVar26 = (pTVar43->Scale3D).XY.m128d_f64[1];
  dVar27 = (pTVar43->Scale3D).ZW.m128d_f64[0];
  dVar28 = (pTVar43->Scale3D).ZW.m128d_f64[1];
  pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d50);
  local_1a38.Rotation.XY.m128d_f64[0] = (double)local_2c18._0_8_;
  local_1a38.Rotation.XY.m128d_f64[1] = (double)local_2c18._8_8_;
  local_1a98.Rotation.XY.m128d_f64[0] = (double)local_2c18._0_8_;
  local_1a98.Rotation.XY.m128d_f64[1] = (double)local_2c18._8_8_;
  local_1a38.Rotation.ZW.m128d_f64[0] = (double)local_2c30;
  local_1a38.Rotation.ZW.m128d_f64[1] = (double)FStack_2c28;
  local_1a98.Rotation.ZW.m128d_f64[0] = (double)local_2c30;
  local_1a98.Rotation.ZW.m128d_f64[1] = (double)FStack_2c28;
  local_1af8.Translation.XY.m128d_f64[0] = (double)local_2d48;
  local_1af8.Translation.XY.m128d_f64[1] = (double)pTStack_2d40;
  local_1af8.Translation.ZW.m128d_f64[0] = (double)local_2d08.Data;
  local_1af8.Translation.ZW.m128d_f64[1] = (double)FStack_2d00.Data;
  local_1af8.Scale3D.XY.m128d_f64[0] = (double)local_2d18;
  local_1af8.Scale3D.XY.m128d_f64[1] = (double)FStack_2d10;
  local_1bb8.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
  local_1bb8.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
  local_1af8.Scale3D.ZW.m128d_f64[0] = (double)local_2d28;
  local_1af8.Scale3D.ZW.m128d_f64[1] = (double)FStack_2d20;
  local_1bb8.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
  local_1bb8.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
  local_1bb8.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
  local_1bb8.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
  local_1bb8.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
  local_1bb8.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
  local_1bb8.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
  local_1bb8.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
  local_1bb8.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
  local_1bb8.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
  local_1c18.Rotation.XY.m128d_f64[0] = (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0]
  ;
  local_1c18.Rotation.XY.m128d_f64[1] = (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1]
  ;
  local_1a38.Translation.XY.m128d_f64[0] = (double)local_2d38;
  local_1a38.Translation.XY.m128d_f64[1] = (double)FStack_2d30;
  local_1a38.Translation.ZW.m128d_f64[0] = (double)local_2be0;
  local_1a38.Translation.ZW.m128d_f64[1] = (double)pFStack_2bd8;
  local_1a38.Scale3D.XY.m128d_f64[0] = (double)local_2bd0;
  local_1a38.Scale3D.XY.m128d_f64[1] = (double)pFStack_2bc8;
  local_1a38.Scale3D.ZW.m128d_f64[0] = (double)local_2bf0;
  local_1a38.Scale3D.ZW.m128d_f64[1] = (double)FStack_2be8;
  local_1a98.Translation.XY.m128d_f64[0] = (double)local_2d38;
  local_1a98.Translation.XY.m128d_f64[1] = (double)FStack_2d30;
  local_1a98.Translation.ZW.m128d_f64[0] = (double)local_2be0;
  local_1a98.Translation.ZW.m128d_f64[1] = (double)pFStack_2bd8;
  local_1a98.Scale3D.XY.m128d_f64[0] = (double)local_2bd0;
  local_1a98.Scale3D.XY.m128d_f64[1] = (double)pFStack_2bc8;
  local_1a98.Scale3D.ZW.m128d_f64[0] = (double)local_2bf0;
  local_1a98.Scale3D.ZW.m128d_f64[1] = (double)FStack_2be8;
  local_1c18.Rotation.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0]
  ;
  local_1c18.Rotation.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1]
  ;
  local_1c18.Translation.XY.m128d_f64[0] =
       (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
  local_1c18.Translation.XY.m128d_f64[1] =
       (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
  local_1c18.Translation.ZW.m128d_f64[0] =
       (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
  local_1c18.Translation.ZW.m128d_f64[1] =
       (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
  local_1c18.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0];
  local_1c18.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1];
  local_1c18.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0];
  local_1c18.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1];
  local_2a38._s_0.Z = dVar59;
  local_1b58.Rotation.XY.m128d_f64[0] = dVar115;
  local_1b58.Rotation.XY.m128d_f64[1] = dVar140;
  local_1b58.Rotation.ZW.m128d_f64[0] = dVar91;
  local_1b58.Rotation.ZW.m128d_f64[1] = dVar128;
  local_1b58.Translation.XY.m128d_f64[0] = dVar61;
  local_1b58.Translation.XY.m128d_f64[1] = dVar60;
  local_1b58.Translation.ZW.m128d_f64[0] = dVar103;
  local_1b58.Translation.ZW.m128d_f64[1] = dVar12;
  local_1b58.Scale3D.XY.m128d_f64[0] = dVar112;
  local_1b58.Scale3D.XY.m128d_f64[1] = dVar26;
  local_1b58.Scale3D.ZW.m128d_f64[0] = dVar27;
  local_1b58.Scale3D.ZW.m128d_f64[1] = dVar28;
  GetHandYaw(&local_2bc0,false,param_4,&local_1c18,&local_1bb8,&local_1b58,&local_1af8,&local_1a98,
             &local_1a38,(TVector<double> *)&local_2a38._s_0);
  uVar126 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar52 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_2d48 = (TReferenceControllerBase<1> *)(param_4->Shoulder_Inner_Clamp).field0_0x0._s_0.X;
  pdVar25 = &(param_4->Shoulder_Inner_Clamp).field0_0x0._s_0.Y;
  pTStack_2d40 = (TReferenceControllerBase<1> *)*pdVar25;
  uVar50 = *(uint *)&(param_4->Shoulder_Inner_Clamp).field0_0x0 &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar149 = *(uint *)((longlong)&(param_4->Shoulder_Inner_Clamp).field0_0x0 + 4) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar147 = *(uint *)pdVar25 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar148 = *(uint *)((longlong)&(param_4->Shoulder_Inner_Clamp).field0_0x0 + 0xc) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((0.0 <= (double)CONCAT44(uVar149,uVar50) && (double)CONCAT44(uVar149,uVar50) != 0.0) &&
     (0.0 <= (double)CONCAT44(uVar148,uVar147) && (double)CONCAT44(uVar148,uVar147) != 0.0)) {
    local_2bc0.Roll =
         FMath::ClampAngle<double>
                   (local_2bc0.Roll,(double)CONCAT44(uVar149,uVar50),
                    (double)CONCAT44(uVar148 ^ __xmm_80000000000000008000000000000000._4_4_,
                                     uVar147 ^ (uint)__xmm_80000000000000008000000000000000));
    if (local_2bc0.Roll <= 0.0) {
      local_2bc0.Roll = local_2bc0.Roll + (double)CONCAT44(uVar148,uVar147);
    }
    else {
      local_2bc0.Roll = local_2bc0.Roll - (double)CONCAT44(uVar149,uVar50);
    }
  }
  if ((!(BADTYPE)(param_3->twist_shoulder_bone).bUseSkeletonIndex) &&
     ((param_3->twist_shoulder_bone).CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) {
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d50);
    pTVar43 = UE::Math::TTransform<double>::Inverse(pTVar43,&local_1a8);
    local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_2c8,pTVar43,&local_d58);
    local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_4a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_4a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_4a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_4a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_4a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_4a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_4a8,&local_c98,&local_2c8);
    dVar35 = local_e18.Translation.ZW.m128d_f64[1];
    dVar34 = local_e18.Translation.ZW.m128d_f64[0];
    dVar33 = local_e18.Translation.XY.m128d_f64[1];
    dVar32 = local_e18.Translation.XY.m128d_f64[0];
    dVar31 = local_e18.Rotation.ZW.m128d_f64[1];
    dVar30 = local_e18.Rotation.ZW.m128d_f64[0];
    dVar29 = local_e18.Rotation.XY.m128d_f64[1];
    dVar28 = local_e18.Rotation.XY.m128d_f64[0];
    local_2d18 = (FWeakObjectPtr)local_4a8.Rotation.XY.m128d_f64[0];
    FStack_2d10 = (FWeakObjectPtr)local_4a8.Rotation.XY.m128d_f64[1];
    local_c98.Rotation.XY.m128d_f64[0] = local_4a8.Rotation.XY.m128d_f64[0];
    local_c98.Rotation.XY.m128d_f64[1] = local_4a8.Rotation.XY.m128d_f64[1];
    local_2d28 = (FWeakObjectPtr)local_4a8.Rotation.ZW.m128d_f64[0];
    FStack_2d20 = (FWeakObjectPtr)local_4a8.Rotation.ZW.m128d_f64[1];
    local_c98.Rotation.ZW.m128d_f64[0] = local_4a8.Rotation.ZW.m128d_f64[0];
    local_c98.Rotation.ZW.m128d_f64[1] = local_4a8.Rotation.ZW.m128d_f64[1];
    local_2cc0.Data = (FScriptContainerElement *)local_4a8.Translation.XY.m128d_f64[0];
    FStack_2cb8.Data = (FScriptContainerElement *)local_4a8.Translation.XY.m128d_f64[1];
    local_c98.Translation.XY.m128d_f64[0] = local_4a8.Translation.XY.m128d_f64[0];
    local_c98.Translation.XY.m128d_f64[1] = local_4a8.Translation.XY.m128d_f64[1];
    local_2c48 = (ForElementType<unsigned_int>)local_4a8.Translation.ZW.m128d_f64[0];
    FStack_2c40 = (ForElementType<unsigned_int>)local_4a8.Translation.ZW.m128d_f64[1];
    local_c98.Translation.ZW.m128d_f64[0] = local_4a8.Translation.ZW.m128d_f64[0];
    local_c98.Translation.ZW.m128d_f64[1] = local_4a8.Translation.ZW.m128d_f64[1];
    local_2cd0 = (FWeakObjectPtr)local_4a8.Scale3D.XY.m128d_f64[0];
    FStack_2cc8 = (FWeakObjectPtr)local_4a8.Scale3D.XY.m128d_f64[1];
    local_c98.Scale3D.XY.m128d_f64[0] = local_4a8.Scale3D.XY.m128d_f64[0];
    local_c98.Scale3D.XY.m128d_f64[1] = local_4a8.Scale3D.XY.m128d_f64[1];
    local_2ce0 = (FWeakObjectPtr)local_4a8.Scale3D.ZW.m128d_f64[0];
    FStack_2cd8 = (FWeakObjectPtr)local_4a8.Scale3D.ZW.m128d_f64[1];
    local_c98.Scale3D.ZW.m128d_f64[0] = local_4a8.Scale3D.ZW.m128d_f64[0];
    local_c98.Scale3D.ZW.m128d_f64[1] = local_4a8.Scale3D.ZW.m128d_f64[1];
    local_2d48 = (TReferenceControllerBase<1> *)local_e18.Scale3D.XY.m128d_f64[0];
    pTStack_2d40 = (TReferenceControllerBase<1> *)local_e18.Scale3D.XY.m128d_f64[1];
    local_2d08.Data = (FScriptContainerElement *)local_e18.Scale3D.ZW.m128d_f64[0];
    FStack_2d00.Data = (FScriptContainerElement *)local_e18.Scale3D.ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
    dVar59 = (pTVar43->Rotation).XY.m128d_f64[0];
    dVar115 = (pTVar43->Rotation).XY.m128d_f64[1];
    dVar140 = (pTVar43->Rotation).ZW.m128d_f64[0];
    dVar91 = (pTVar43->Rotation).ZW.m128d_f64[1];
    dVar128 = (pTVar43->Translation).XY.m128d_f64[0];
    dVar61 = (pTVar43->Translation).XY.m128d_f64[1];
    dVar60 = (pTVar43->Translation).ZW.m128d_f64[0];
    dVar103 = (pTVar43->Translation).ZW.m128d_f64[1];
    dVar12 = (pTVar43->Scale3D).XY.m128d_f64[0];
    dVar112 = (pTVar43->Scale3D).XY.m128d_f64[1];
    dVar26 = (pTVar43->Scale3D).ZW.m128d_f64[0];
    dVar27 = (pTVar43->Scale3D).ZW.m128d_f64[1];
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,(param_3->twist_shoulder_bone).CachedCompactPoseIndex);
    local_1c78.Scale3D.XY.m128d_f64[0] = (double)local_2d48;
    local_1c78.Scale3D.XY.m128d_f64[1] = (double)pTStack_2d40;
    local_1c78.Scale3D.ZW.m128d_f64[0] = (double)local_2d08.Data;
    local_1c78.Scale3D.ZW.m128d_f64[1] = (double)FStack_2d00.Data;
    local_1d98.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
    local_1d98.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
    local_1cd8.Rotation.XY.m128d_f64[0] = (double)local_2d18;
    local_1cd8.Rotation.XY.m128d_f64[1] = (double)FStack_2d10;
    local_1d98.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_1d98.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_1cd8.Rotation.ZW.m128d_f64[0] = (double)local_2d28;
    local_1cd8.Rotation.ZW.m128d_f64[1] = (double)FStack_2d20;
    local_1d98.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_1d98.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
    local_1cd8.Translation.XY.m128d_f64[0] = (double)local_2cc0.Data;
    local_1cd8.Translation.XY.m128d_f64[1] = (double)FStack_2cb8.Data;
    local_2278.Rotation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0];
    local_2278.Rotation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1];
    local_1cd8.Translation.ZW.m128d_f64[0] = (double)local_2c48;
    local_1cd8.Translation.ZW.m128d_f64[1] = (double)FStack_2c40;
    local_2278.Translation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
    local_2278.Translation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
    local_1cd8.Scale3D.XY.m128d_f64[0] = (double)local_2cd0;
    local_1cd8.Scale3D.XY.m128d_f64[1] = (double)FStack_2cc8;
    local_2278.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0]
    ;
    local_2278.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1]
    ;
    local_1cd8.Scale3D.ZW.m128d_f64[0] = (double)local_2ce0;
    local_1cd8.Scale3D.ZW.m128d_f64[1] = (double)FStack_2cd8;
    local_1d98.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_1d98.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
    local_1d98.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
    local_1d98.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
    local_1d98.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_1d98.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_2278.Rotation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0];
    local_2278.Rotation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1];
    local_2278.Translation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
    local_2278.Translation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
    local_2278.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0]
    ;
    local_2278.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1]
    ;
    local_1c78.Rotation.XY.m128d_f64[0] = dVar28;
    local_1c78.Rotation.XY.m128d_f64[1] = dVar29;
    local_1c78.Rotation.ZW.m128d_f64[0] = dVar30;
    local_1c78.Rotation.ZW.m128d_f64[1] = dVar31;
    local_1c78.Translation.XY.m128d_f64[0] = dVar32;
    local_1c78.Translation.XY.m128d_f64[1] = dVar33;
    local_1c78.Translation.ZW.m128d_f64[0] = dVar34;
    local_1c78.Translation.ZW.m128d_f64[1] = dVar35;
    local_1d38.Rotation.XY.m128d_f64[0] = dVar59;
    local_1d38.Rotation.XY.m128d_f64[1] = dVar115;
    local_1d38.Rotation.ZW.m128d_f64[0] = dVar140;
    local_1d38.Rotation.ZW.m128d_f64[1] = dVar91;
    local_1d38.Translation.XY.m128d_f64[0] = dVar128;
    local_1d38.Translation.XY.m128d_f64[1] = dVar61;
    local_1d38.Translation.ZW.m128d_f64[0] = dVar60;
    local_1d38.Translation.ZW.m128d_f64[1] = dVar103;
    local_1d38.Scale3D.XY.m128d_f64[0] = dVar12;
    local_1d38.Scale3D.XY.m128d_f64[1] = dVar112;
    local_1d38.Scale3D.ZW.m128d_f64[0] = dVar26;
    local_1d38.Scale3D.ZW.m128d_f64[1] = dVar27;
    pTVar43 = SetArmYaw(&local_f38,param_4->invert_lower_twist,param_4->is_this_right_hand,
                        (float)((double)local_2d4c * local_2bc0.Roll),&local_2278,&local_1d98,
                        &local_1d38,&local_1cd8,&local_1c78);
    local_c98.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
    local_c98.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
    local_c98.Rotation.ZW.m128d_f64 = *&(pTVar43->Rotation).ZW.m128d_f64;
    local_c98.Translation.XY.m128d_f64 = *&(pTVar43->Translation).XY.m128d_f64;
    pFVar5 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
    local_c98.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
    local_c98.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
    local_c98.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
    local_c98.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_c98.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
    local_c98.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
    local_8e8 = (param_3->twist_shoulder_bone).CachedCompactPoseIndex;
    local_8d8 = (pTVar43->Rotation).XY.m128d_f64[0];
    dStack_8d0 = (pTVar43->Rotation).XY.m128d_f64[1];
    local_8c8 = (pTVar43->Rotation).ZW.m128d_f64[0];
    dStack_8c0 = (pTVar43->Rotation).ZW.m128d_f64[1];
    local_8b8 = (pTVar43->Translation).XY.m128d_f64[0];
    dStack_8b0 = (pTVar43->Translation).XY.m128d_f64[1];
    local_8a8 = (pTVar43->Translation).ZW.m128d_f64[0];
    dStack_8a0 = (pTVar43->Translation).ZW.m128d_f64[1];
    local_898 = (pTVar43->Scale3D).XY.m128d_f64[0];
    dStack_890 = (pTVar43->Scale3D).XY.m128d_f64[1];
    local_888 = (pTVar43->Scale3D).ZW.m128d_f64[0];
    dStack_880 = (pTVar43->Scale3D).ZW.m128d_f64[1];
    if ((pFVar5 <= &local_8e8) &&
       ((&local_8e8 < pFVar5 + (longlong)param_6->ArrayMax * 0x1c &&
        (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar38)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar40 = param_6->ArrayNum;
    if (iVar40 == param_6->ArrayMax) {
      iVar40 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    uVar126 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar52 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    param_6->ArrayNum = iVar40 + 1;
    lVar53 = (longlong)iVar40 * 0x70;
    pFVar139 = (param_6->AllocatorInstance).Data;
    *(ulonglong *)(pFVar139 + lVar53) = CONCAT44(uStack_8e4,local_8e8);
    *(undefined8 *)(pFVar139 + lVar53 + 8) = uStack_8e0;
    *(double *)(pFVar139 + lVar53 + 0x10) = local_8d8;
    *(double *)(pFVar139 + lVar53 + 0x10 + 8) = dStack_8d0;
    *(double *)(pFVar139 + lVar53 + 0x20) = local_8c8;
    *(double *)(pFVar139 + lVar53 + 0x20 + 8) = dStack_8c0;
    *(double *)(pFVar139 + lVar53 + 0x30) = local_8b8;
    *(double *)(pFVar139 + lVar53 + 0x30 + 8) = dStack_8b0;
    *(double *)(pFVar139 + lVar53 + 0x40) = local_8a8;
    *(double *)(pFVar139 + lVar53 + 0x40 + 8) = dStack_8a0;
    *(double *)(pFVar139 + lVar53 + 0x50) = local_898;
    *(double *)(pFVar139 + lVar53 + 0x50 + 8) = dStack_890;
    *(double *)(pFVar139 + lVar53 + 0x60) = local_888;
    *(double *)(pFVar139 + lVar53 + 0x60 + 8) = dStack_880;
  }
  fVar90 = (float)(double)CONCAT44(*(uint *)((longlong)&(param_4->Shoulder_Outer_Clamp).field0_0x0 +
                                            0xc) & uVar126,
                                   *(uint *)((longlong)&(param_4->Shoulder_Outer_Clamp).field0_0x0 +
                                            8) & uVar52);
  if (__real_4333e666 <= fVar90) {
    fVar90 = __real_4333e666;
  }
  if (fVar90 <= __real_3c23d70a) {
    fVar90 = __real_3c23d70a;
  }
  fVar113 = (float)(double)CONCAT44(*(uint *)((longlong)&(param_4->Shoulder_Outer_Clamp).field0_0x0
                                             + 4) & uVar126,
                                    *(uint *)&(param_4->Shoulder_Outer_Clamp).field0_0x0 & uVar52);
  if (__real_4333e666 <= fVar113) {
    fVar113 = __real_4333e666;
  }
  if (fVar113 <= __real_3c23d70a) {
    fVar113 = __real_3c23d70a;
  }
  fVar113 = (float)((uint)fVar113 ^ __xmm_80000000800000008000000080000000);
  local_2bc0.Roll = FMath::ClampAngle<double>(local_2bc0.Roll,(double)fVar113,(double)fVar90);
  dVar103 = local_db8.Translation.ZW.m128d_f64[1];
  dVar60 = local_db8.Translation.ZW.m128d_f64[0];
  dVar61 = local_db8.Translation.XY.m128d_f64[1];
  dVar128 = local_db8.Translation.XY.m128d_f64[0];
  dVar91 = local_db8.Rotation.ZW.m128d_f64[1];
  dVar140 = local_db8.Rotation.ZW.m128d_f64[0];
  dVar115 = local_db8.Rotation.XY.m128d_f64[1];
  dVar59 = local_db8.Rotation.XY.m128d_f64[0];
  if ((local_2bc0.Roll != (double)fVar113) && (local_2bc0.Roll != (double)fVar90)) {
    *param_5 = (float)local_2bc0.Roll;
  }
  local_2d48 = (TReferenceControllerBase<1> *)local_db8.Scale3D.XY.m128d_f64[0];
  pTStack_2d40 = (TReferenceControllerBase<1> *)local_db8.Scale3D.XY.m128d_f64[1];
  local_2d08.Data = (FScriptContainerElement *)local_db8.Scale3D.ZW.m128d_f64[0];
  FStack_2d00.Data = (FScriptContainerElement *)local_db8.Scale3D.ZW.m128d_f64[1];
  local_2d18 = (FWeakObjectPtr)local_d58.Rotation.XY.m128d_f64[0];
  FStack_2d10 = (FWeakObjectPtr)local_d58.Rotation.XY.m128d_f64[1];
  local_2d28 = (FWeakObjectPtr)local_d58.Rotation.ZW.m128d_f64[0];
  FStack_2d20 = (FWeakObjectPtr)local_d58.Rotation.ZW.m128d_f64[1];
  local_2cc0.Data = (FScriptContainerElement *)local_d58.Translation.XY.m128d_f64[0];
  FStack_2cb8.Data = (FScriptContainerElement *)local_d58.Translation.XY.m128d_f64[1];
  local_2c48 = (ForElementType<unsigned_int>)local_d58.Translation.ZW.m128d_f64[0];
  FStack_2c40 = (ForElementType<unsigned_int>)local_d58.Translation.ZW.m128d_f64[1];
  local_2cd0 = (FWeakObjectPtr)local_d58.Scale3D.XY.m128d_f64[0];
  FStack_2cc8 = (FWeakObjectPtr)local_d58.Scale3D.XY.m128d_f64[1];
  local_2ce0 = (FWeakObjectPtr)local_d58.Scale3D.ZW.m128d_f64[0];
  FStack_2cd8 = (FWeakObjectPtr)local_d58.Scale3D.ZW.m128d_f64[1];
  if (param_3->should_shoulder_twist_if_inward == false) {
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
    dVar12 = (pTVar43->Rotation).XY.m128d_f64[0];
    dVar112 = (pTVar43->Rotation).XY.m128d_f64[1];
    dVar26 = (pTVar43->Rotation).ZW.m128d_f64[0];
    dVar27 = (pTVar43->Rotation).ZW.m128d_f64[1];
    dVar28 = (pTVar43->Translation).XY.m128d_f64[0];
    dVar29 = (pTVar43->Translation).XY.m128d_f64[1];
    dVar30 = (pTVar43->Translation).ZW.m128d_f64[0];
    dVar31 = (pTVar43->Translation).ZW.m128d_f64[1];
    dVar32 = (pTVar43->Scale3D).XY.m128d_f64[0];
    dVar33 = (pTVar43->Scale3D).XY.m128d_f64[1];
    dVar34 = (pTVar43->Scale3D).ZW.m128d_f64[0];
    dVar35 = (pTVar43->Scale3D).ZW.m128d_f64[1];
    pTVar47 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d50);
    pTVar43 = &local_e78;
    local_20f8.Scale3D.XY.m128d_f64[0] = (double)local_2d48;
    local_20f8.Scale3D.XY.m128d_f64[1] = (double)pTStack_2d40;
    local_20f8.Scale3D.ZW.m128d_f64[0] = (double)local_2d08.Data;
    local_20f8.Scale3D.ZW.m128d_f64[1] = (double)FStack_2d00.Data;
    local_2098.Rotation.XY.m128d_f64[0] = (double)local_2d18;
    local_2098.Rotation.XY.m128d_f64[1] = (double)FStack_2d10;
    local_2098.Rotation.ZW.m128d_f64[0] = (double)local_2d28;
    local_2098.Rotation.ZW.m128d_f64[1] = (double)FStack_2d20;
    local_2098.Translation.XY.m128d_f64[0] = (double)local_2cc0.Data;
    local_2098.Translation.XY.m128d_f64[1] = (double)FStack_2cb8.Data;
    local_2098.Translation.ZW.m128d_f64[0] = (double)local_2c48;
    local_2098.Translation.ZW.m128d_f64[1] = (double)FStack_2c40;
    local_2098.Scale3D.XY.m128d_f64[0] = (double)local_2cd0;
    local_2098.Scale3D.XY.m128d_f64[1] = (double)FStack_2cc8;
    local_1df8.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
    local_1df8.Rotation.XY.m128d_f64[1] = (pTVar47->Rotation).XY.m128d_f64[1];
    local_1df8.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
    local_1df8.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
    local_1df8.Scale3D.XY.m128d_f64[0] = (pTVar47->Scale3D).XY.m128d_f64[0];
    local_1df8.Scale3D.XY.m128d_f64[1] = (pTVar47->Scale3D).XY.m128d_f64[1];
    local_2098.Scale3D.ZW.m128d_f64[0] = (double)local_2ce0;
    local_2098.Scale3D.ZW.m128d_f64[1] = (double)FStack_2cd8;
    local_1df8.Rotation.ZW.m128d_f64[0] = (pTVar47->Rotation).ZW.m128d_f64[0];
    local_1df8.Rotation.ZW.m128d_f64[1] = (pTVar47->Rotation).ZW.m128d_f64[1];
    local_18b8.Rotation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0];
    local_18b8.Rotation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1];
    local_1df8.Translation.ZW.m128d_f64[0] = (pTVar47->Translation).ZW.m128d_f64[0];
    local_1df8.Translation.ZW.m128d_f64[1] = (pTVar47->Translation).ZW.m128d_f64[1];
    local_18b8.Translation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
    local_18b8.Translation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
    local_1df8.Scale3D.ZW.m128d_f64[0] = (pTVar47->Scale3D).ZW.m128d_f64[0];
    local_1df8.Scale3D.ZW.m128d_f64[1] = (pTVar47->Scale3D).ZW.m128d_f64[1];
    pTVar47 = &local_20f8;
    pTVar157 = &local_2098;
    pTVar156 = &local_1eb8;
    local_18b8.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0]
    ;
    local_18b8.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1]
    ;
    local_18b8.Rotation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0];
    local_18b8.Rotation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1];
    pTVar155 = &local_1df8;
    fVar90 = local_2d4c * *param_5;
    pTVar48 = &local_18b8;
    local_18b8.Translation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
    local_18b8.Translation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
    local_18b8.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0]
    ;
    local_18b8.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1]
    ;
    local_20f8.Rotation.XY.m128d_f64[0] = dVar59;
    local_20f8.Rotation.XY.m128d_f64[1] = dVar115;
    local_20f8.Rotation.ZW.m128d_f64[0] = dVar140;
    local_20f8.Rotation.ZW.m128d_f64[1] = dVar91;
    local_20f8.Translation.XY.m128d_f64[0] = dVar128;
    local_20f8.Translation.XY.m128d_f64[1] = dVar61;
    local_20f8.Translation.ZW.m128d_f64[0] = dVar60;
    local_20f8.Translation.ZW.m128d_f64[1] = dVar103;
    local_1eb8.Rotation.XY.m128d_f64[0] = dVar12;
    local_1eb8.Rotation.XY.m128d_f64[1] = dVar112;
    local_1eb8.Rotation.ZW.m128d_f64[0] = dVar26;
    local_1eb8.Rotation.ZW.m128d_f64[1] = dVar27;
    local_1eb8.Translation.XY.m128d_f64[0] = dVar28;
    local_1eb8.Translation.XY.m128d_f64[1] = dVar29;
    local_1eb8.Translation.ZW.m128d_f64[0] = dVar30;
    local_1eb8.Translation.ZW.m128d_f64[1] = dVar31;
    local_1eb8.Scale3D.XY.m128d_f64[0] = dVar32;
    local_1eb8.Scale3D.XY.m128d_f64[1] = dVar33;
    local_1eb8.Scale3D.ZW.m128d_f64[0] = dVar34;
    local_1eb8.Scale3D.ZW.m128d_f64[1] = dVar35;
  }
  else {
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d58);
    dVar12 = (pTVar43->Rotation).XY.m128d_f64[0];
    dVar112 = (pTVar43->Rotation).XY.m128d_f64[1];
    dVar26 = (pTVar43->Rotation).ZW.m128d_f64[0];
    dVar27 = (pTVar43->Rotation).ZW.m128d_f64[1];
    dVar28 = (pTVar43->Translation).XY.m128d_f64[0];
    dVar29 = (pTVar43->Translation).XY.m128d_f64[1];
    dVar30 = (pTVar43->Translation).ZW.m128d_f64[0];
    dVar31 = (pTVar43->Translation).ZW.m128d_f64[1];
    dVar32 = (pTVar43->Scale3D).XY.m128d_f64[0];
    dVar33 = (pTVar43->Scale3D).XY.m128d_f64[1];
    dVar34 = (pTVar43->Scale3D).ZW.m128d_f64[0];
    dVar35 = (pTVar43->Scale3D).ZW.m128d_f64[1];
    pTVar47 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_2d50);
    pTVar43 = &local_ed8;
    fVar90 = *param_5;
    local_1f18.Scale3D.XY.m128d_f64[0] = (double)local_2d48;
    local_1f18.Scale3D.XY.m128d_f64[1] = (double)pTStack_2d40;
    local_1f18.Scale3D.ZW.m128d_f64[0] = (double)local_2d08.Data;
    local_1f18.Scale3D.ZW.m128d_f64[1] = (double)FStack_2d00.Data;
    local_1f78.Rotation.XY.m128d_f64[0] = (double)local_2d18;
    local_1f78.Rotation.XY.m128d_f64[1] = (double)FStack_2d10;
    local_1f78.Rotation.ZW.m128d_f64[0] = (double)local_2d28;
    local_1f78.Rotation.ZW.m128d_f64[1] = (double)FStack_2d20;
    local_1f78.Translation.XY.m128d_f64[0] = (double)local_2cc0.Data;
    local_1f78.Translation.XY.m128d_f64[1] = (double)FStack_2cb8.Data;
    local_1f78.Translation.ZW.m128d_f64[0] = (double)local_2c48;
    local_1f78.Translation.ZW.m128d_f64[1] = (double)FStack_2c40;
    local_1f78.Scale3D.XY.m128d_f64[0] = (double)local_2cd0;
    local_1f78.Scale3D.XY.m128d_f64[1] = (double)FStack_2cc8;
    local_2158.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
    local_2158.Rotation.XY.m128d_f64[1] = (pTVar47->Rotation).XY.m128d_f64[1];
    local_1f78.Scale3D.ZW.m128d_f64[0] = (double)local_2ce0;
    local_1f78.Scale3D.ZW.m128d_f64[1] = (double)FStack_2cd8;
    local_2158.Rotation.ZW.m128d_f64[0] = (pTVar47->Rotation).ZW.m128d_f64[0];
    local_2158.Rotation.ZW.m128d_f64[1] = (pTVar47->Rotation).ZW.m128d_f64[1];
    local_2158.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
    local_2158.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
    local_2158.Translation.ZW.m128d_f64[0] = (pTVar47->Translation).ZW.m128d_f64[0];
    local_2158.Translation.ZW.m128d_f64[1] = (pTVar47->Translation).ZW.m128d_f64[1];
    local_2158.Scale3D.XY.m128d_f64[0] = (pTVar47->Scale3D).XY.m128d_f64[0];
    local_2158.Scale3D.XY.m128d_f64[1] = (pTVar47->Scale3D).XY.m128d_f64[1];
    local_2158.Scale3D.ZW.m128d_f64[0] = (pTVar47->Scale3D).ZW.m128d_f64[0];
    local_2158.Scale3D.ZW.m128d_f64[1] = (pTVar47->Scale3D).ZW.m128d_f64[1];
    pTVar47 = &local_1f18;
    pTVar157 = &local_1f78;
    pTVar156 = &local_1fd8;
    local_1858.Rotation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[0];
    local_1858.Rotation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.XY.m128d_f64[1];
    local_1858.Rotation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[0];
    local_1858.Rotation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Rotation.ZW.m128d_f64[1];
    pTVar155 = &local_2158;
    local_1858.Translation.XY.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[0];
    local_1858.Translation.XY.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.XY.m128d_f64[1];
    local_1858.Translation.ZW.m128d_f64[0] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[0];
    local_1858.Translation.ZW.m128d_f64[1] =
         (param_3->mesh_component_transform).Translation.ZW.m128d_f64[1];
    local_1858.Scale3D.XY.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[0]
    ;
    local_1858.Scale3D.XY.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.XY.m128d_f64[1]
    ;
    local_1858.Scale3D.ZW.m128d_f64[0] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[0]
    ;
    local_1858.Scale3D.ZW.m128d_f64[1] = (param_3->mesh_component_transform).Scale3D.ZW.m128d_f64[1]
    ;
    pTVar48 = &local_1858;
    local_1f18.Rotation.XY.m128d_f64[0] = dVar59;
    local_1f18.Rotation.XY.m128d_f64[1] = dVar115;
    local_1f18.Rotation.ZW.m128d_f64[0] = dVar140;
    local_1f18.Rotation.ZW.m128d_f64[1] = dVar91;
    local_1f18.Translation.XY.m128d_f64[0] = dVar128;
    local_1f18.Translation.XY.m128d_f64[1] = dVar61;
    local_1f18.Translation.ZW.m128d_f64[0] = dVar60;
    local_1f18.Translation.ZW.m128d_f64[1] = dVar103;
    local_1fd8.Rotation.XY.m128d_f64[0] = dVar12;
    local_1fd8.Rotation.XY.m128d_f64[1] = dVar112;
    local_1fd8.Rotation.ZW.m128d_f64[0] = dVar26;
    local_1fd8.Rotation.ZW.m128d_f64[1] = dVar27;
    local_1fd8.Translation.XY.m128d_f64[0] = dVar28;
    local_1fd8.Translation.XY.m128d_f64[1] = dVar29;
    local_1fd8.Translation.ZW.m128d_f64[0] = dVar30;
    local_1fd8.Translation.ZW.m128d_f64[1] = dVar31;
    local_1fd8.Scale3D.XY.m128d_f64[0] = dVar32;
    local_1fd8.Scale3D.XY.m128d_f64[1] = dVar33;
    local_1fd8.Scale3D.ZW.m128d_f64[0] = dVar34;
    local_1fd8.Scale3D.ZW.m128d_f64[1] = dVar35;
  }
  pTVar43 = SetArmYaw(pTVar43,param_4->invert_upper_twist,param_4->is_this_right_hand,fVar90,pTVar48
                      ,pTVar155,pTVar156,pTVar157,pTVar47);
  pFVar5 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
  local_d58.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
  local_d58.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
  local_d58.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
  local_d58.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
  local_d58.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
  local_d58.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
  local_d58.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
  local_d58.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
  local_d58.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
  local_d58.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
  local_d58.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
  local_d58.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
  local_878 = local_2d50;
  local_868 = local_d58.Rotation.XY.m128d_f64[0];
  dStack_860 = local_d58.Rotation.XY.m128d_f64[1];
  local_858 = local_d58.Rotation.ZW.m128d_f64[0];
  dStack_850 = local_d58.Rotation.ZW.m128d_f64[1];
  local_848 = local_d58.Translation.XY.m128d_f64[0];
  dStack_840 = local_d58.Translation.XY.m128d_f64[1];
  local_838 = local_d58.Translation.ZW.m128d_f64[0];
  dStack_830 = local_d58.Translation.ZW.m128d_f64[1];
  local_828 = local_d58.Scale3D.XY.m128d_f64[0];
  dStack_820 = local_d58.Scale3D.XY.m128d_f64[1];
  local_818 = local_d58.Scale3D.ZW.m128d_f64[0];
  dStack_810 = local_d58.Scale3D.ZW.m128d_f64[1];
  if (((pFVar5 <= &local_878) && (&local_878 < pFVar5 + (longlong)param_6->ArrayMax * 0x1c)) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar38)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar40 = param_6->ArrayNum;
  if (iVar40 == param_6->ArrayMax) {
    iVar40 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
  }
  param_6->ArrayNum = iVar40 + 1;
  lVar53 = (longlong)iVar40 * 0x70;
  pFVar139 = (param_6->AllocatorInstance).Data;
  *(ulonglong *)(pFVar139 + lVar53) = CONCAT44(uStack_874,local_878);
  *(undefined8 *)(pFVar139 + lVar53 + 8) = uStack_870;
  *(double *)(pFVar139 + lVar53 + 0x10) = local_868;
  *(double *)(pFVar139 + lVar53 + 0x10 + 8) = dStack_860;
  *(double *)(pFVar139 + lVar53 + 0x20) = local_858;
  *(double *)(pFVar139 + lVar53 + 0x20 + 8) = dStack_850;
  *(double *)(pFVar139 + lVar53 + 0x30) = local_848;
  *(double *)(pFVar139 + lVar53 + 0x30 + 8) = dStack_840;
  *(double *)(pFVar139 + lVar53 + 0x40) = local_838;
  *(double *)(pFVar139 + lVar53 + 0x40 + 8) = dStack_830;
  *(double *)(pFVar139 + lVar53 + 0x50) = local_828;
  *(double *)(pFVar139 + lVar53 + 0x50 + 8) = dStack_820;
  *(double *)(pFVar139 + lVar53 + 0x60) = local_818;
  *(double *)(pFVar139 + lVar53 + 0x60 + 8) = dStack_810;
  pFVar5 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
  local_b08 = (FWeakObjectPtr)local_db8.Rotation.XY.m128d_f64[0];
  FStack_b00 = (FWeakObjectPtr)local_db8.Rotation.XY.m128d_f64[1];
  local_af8 = (FWeakObjectPtr)local_db8.Rotation.ZW.m128d_f64[0];
  FStack_af0 = (FWeakObjectPtr)local_db8.Rotation.ZW.m128d_f64[1];
  local_b18 = local_2d58;
  local_ae8 = (ForElementType<unsigned_int>)local_db8.Translation.XY.m128d_f64[0];
  FStack_ae0 = (ForElementType<unsigned_int>)local_db8.Translation.XY.m128d_f64[1];
  local_ad8 = (FScriptContainerElement *)local_db8.Translation.ZW.m128d_f64[0];
  pFStack_ad0 = (FScriptContainerElement *)local_db8.Translation.ZW.m128d_f64[1];
  local_ac8 = (FScriptContainerElement *)local_db8.Scale3D.XY.m128d_f64[0];
  pFStack_ac0 = (FScriptContainerElement *)local_db8.Scale3D.XY.m128d_f64[1];
  local_ab8 = (ForElementType<unsigned_int>)local_db8.Scale3D.ZW.m128d_f64[0];
  FStack_ab0 = (ForElementType<unsigned_int>)local_db8.Scale3D.ZW.m128d_f64[1];
  if (((pFVar5 <= &local_b18) && (&local_b18 < pFVar5 + (longlong)param_6->ArrayMax * 0x1c)) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar38)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar40 = param_6->ArrayNum;
  if (iVar40 == param_6->ArrayMax) {
    iVar40 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
  }
  param_6->ArrayNum = iVar40 + 1;
  lVar53 = (longlong)iVar40 * 0x70;
  pFVar139 = (param_6->AllocatorInstance).Data;
  *(ulonglong *)(pFVar139 + lVar53) = CONCAT44(uStack_b14,local_b18);
  *(undefined8 *)(pFVar139 + lVar53 + 8) = uStack_b10;
  *(FWeakObjectPtr *)(pFVar139 + lVar53 + 0x10) = local_b08;
  ((FWeakObjectPtr *)(pFVar139 + lVar53 + 0x10))[1] = FStack_b00;
  *(FWeakObjectPtr *)(pFVar139 + lVar53 + 0x20) = local_af8;
  ((FWeakObjectPtr *)(pFVar139 + lVar53 + 0x20))[1] = FStack_af0;
  *(ForElementType<unsigned_int> *)(pFVar139 + lVar53 + 0x30) = local_ae8;
  ((ForElementType<unsigned_int> *)(pFVar139 + lVar53 + 0x30))[1] = FStack_ae0;
  *(FScriptContainerElement **)(pFVar139 + lVar53 + 0x40) = local_ad8;
  *(FScriptContainerElement **)(pFVar139 + lVar53 + 0x40 + 8) = pFStack_ad0;
  *(FScriptContainerElement **)(pFVar139 + lVar53 + 0x50) = local_ac8;
  *(FScriptContainerElement **)(pFVar139 + lVar53 + 0x50 + 8) = pFStack_ac0;
  *(ForElementType<unsigned_int> *)(pFVar139 + lVar53 + 0x60) = local_ab8;
  ((ForElementType<unsigned_int> *)(pFVar139 + lVar53 + 0x60))[1] = FStack_ab0;
  return;
}

// Evaluate_TwoBoneIK_Modified @ 14d344680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UDragonIK_Library::Evaluate_TwoBoneIK_Modified
          (FComponentSpacePoseContext *param_1,USkeletalMeshComponent *param_2,
          TTransform<double> *param_3,FBoneReference *param_4,FBoneReference *param_5,
          FBoneReference *param_6,TTransform<double> *param_7,TVector<double> *param_8,
          TVector<double> *param_9,TVector<double> *param_10,TVector<double> *param_11,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_12)

{
  TArray<int,TSizedDefaultAllocator<32>_> TVar1;
  FCompactPoseBoneIndex *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  FWeakObjectPtr FVar11;
  FSkelMeshRefPoseOverride *pFVar12;
  FSkelMeshRefPoseOverride *pFVar13;
  FScriptContainerElement *pFVar14;
  double adVar15 [2];
  double adVar16 [2];
  bool bVar17;
  int iVar18;
  TTransform<double> *pTVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStackY_718 [32];
  FCompactPoseBoneIndex local_6b8;
  FCompactPoseBoneIndex local_6b4;
  FCompactPoseBoneIndex local_6b0;
  FWeakObjectPtr local_6a8;
  uchar auStack_6a0 [8];
  ForElementType<unsigned_int> local_698;
  ForElementType<unsigned_int> FStack_690;
  FWeakObjectPtr local_688;
  double local_678 [2];
  FWeakObjectPtr local_668;
  ForAnyElementType local_660;
  ForAnyElementType FStack_658;
  ForAnyElementType local_650;
  undefined1 local_648 [16];
  ForAnyElementType local_638;
  TVector<double>_u_0 local_630;
  TVector<double>_u_0 local_618;
  TTransform<double> local_5f8;
  TTransform<double> local_598;
  TTransform<double> local_538;
  TVector<double>_u_0 local_4d8;
  TVector<double>_u_0 local_4c0;
  TVector<double>_u_0 local_4a8;
  TQuat<double> local_488;
  TArray<int,TSizedDefaultAllocator<32>_> local_468;
  FScriptContainerElement *local_458;
  double local_450 [2];
  FWeakObjectPtr local_440;
  double local_438 [2];
  FWeakObjectPtr local_428;
  double local_420;
  double dStack_418;
  double local_410;
  double local_408 [2];
  FWeakObjectPtr local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  FScriptContainerElement *local_3c0;
  FSkelMeshRefPoseOverride *pFStack_3b8;
  FSkelMeshRefPoseOverride *local_3b0;
  double local_3a8;
  double dStack_3a0;
  FWeakObjectPtr local_398;
  TArray<int,TSizedDefaultAllocator<32>_> local_390;
  FScriptContainerElement *local_380;
  FScriptContainerElement *local_378;
  FSkelMeshRefPoseOverride *pFStack_370;
  FSkelMeshRefPoseOverride *local_368;
  TTransform<double> local_358;
  FCompactPoseBoneIndex local_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  FScriptContainerElement *local_2c8;
  FSkelMeshRefPoseOverride *pFStack_2c0;
  FSkelMeshRefPoseOverride *local_2b8;
  TReferenceControllerBase<1> *pTStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  FCompactPoseBoneIndex local_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  FWeakObjectPtr local_248;
  FWeakObjectPtr FStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  FCompactPoseBoneIndex local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  FScriptContainerElement *local_1e8;
  double dStack_1e0;
  FScriptContainerElement *local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_718;
  local_698 = (ForElementType<unsigned_int>)param_10;
  local_6a8 = (FWeakObjectPtr)param_11;
  if (((((!(BADTYPE)param_4->bUseSkeletonIndex) &&
        (param_4->CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) &&
       (!(BADTYPE)param_5->bUseSkeletonIndex)) &&
      ((param_5->CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff &&
       (!(BADTYPE)param_6->bUseSkeletonIndex)))) &&
     (param_6->CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) {
    FBoneReference::GetCompactPoseIndex(param_4,(FBoneContainer *)&local_6b0);
    FBoneReference::GetCompactPoseIndex(param_5,(FBoneContainer *)&local_6b4);
    FBoneReference::GetCompactPoseIndex(param_6,(FBoneContainer *)&local_6b8);
    pTVar19 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_6b4);
    local_598.Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
    local_598.Rotation.XY.m128d_f64[1] = (pTVar19->Rotation).XY.m128d_f64[1];
    local_598.Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
    local_598.Rotation.ZW.m128d_f64[1] = (pTVar19->Rotation).ZW.m128d_f64[1];
    dVar23 = (pTVar19->Translation).XY.m128d_f64[0];
    dVar31 = (pTVar19->Translation).XY.m128d_f64[1];
    local_678 = *&(pTVar19->Translation).XY.m128d_f64;
    FVar11 = (FWeakObjectPtr)(pTVar19->Translation).ZW.m128d_f64[0];
    local_598.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
    local_598.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
    local_598.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
    local_598.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
    pTVar19 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_6b8);
    local_5f8.Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
    local_5f8.Rotation.XY.m128d_f64[1] = (pTVar19->Rotation).XY.m128d_f64[1];
    local_5f8.Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
    local_5f8.Rotation.ZW.m128d_f64[1] = (pTVar19->Rotation).ZW.m128d_f64[1];
    pFVar3 = (FScriptContainerElement *)(pTVar19->Translation).XY.m128d_f64[0];
    pFVar12 = (FSkelMeshRefPoseOverride *)(pTVar19->Translation).XY.m128d_f64[1];
    pFVar13 = (FSkelMeshRefPoseOverride *)(pTVar19->Translation).ZW.m128d_f64[0];
    local_5f8.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
    local_5f8.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
    local_5f8.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
    local_5f8.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
    local_660.Data = pFVar3;
    FStack_658.Data = (FScriptContainerElement *)pFVar12;
    pTVar19 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_6b0);
    local_538.Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
    local_538.Rotation.XY.m128d_f64[1] = (pTVar19->Rotation).XY.m128d_f64[1];
    local_538.Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
    local_538.Rotation.ZW.m128d_f64[1] = (pTVar19->Rotation).ZW.m128d_f64[1];
    TVar1 = *(TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar19->Translation).XY.m128d_f64;
    pFVar14 = (FScriptContainerElement *)(pTVar19->Translation).ZW.m128d_f64[0];
    local_538.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
    local_538.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
    local_538.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
    local_538.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
    local_648 = (undefined1  [16])TVar1;
    local_3c0 = pFVar3;
    pFStack_3b8 = pFVar12;
    local_3b0 = pFVar13;
    local_3a8 = dVar23;
    dStack_3a0 = dVar31;
    local_398 = FVar11;
    local_390 = TVar1;
    local_380 = pFVar14;
    UE::Math::TQuat<double>::FindBetweenNormals
              (&local_488,(TVector<double> *)local_698,(TVector<double> *)local_6a8);
    local_148.Rotation.XY.m128d_f64[0] = local_488.X;
    local_148.Rotation.XY.m128d_f64[1] = local_488.Y;
    local_358.Translation.XY.m128d_f64[0] = (param_9->field0_0x0)._s_0.X;
    local_358.Translation.XY.m128d_f64[1] = (param_9->field0_0x0)._s_0.Y;
    local_148.Rotation.ZW.m128d_f64[0] = local_488.Z;
    local_148.Rotation.ZW.m128d_f64[1] = local_488.W;
    local_358.Translation.ZW.m128d_f64[0] = (param_9->field0_0x0)._s_0.Z;
    local_358.Translation.ZW.m128d_f64[1] = 0.0;
    local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_148.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_358.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_148.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_358.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_148.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_148.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_358.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_358.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    UE::Math::TTransform<double>::Multiply(&local_1a8,&local_358,&local_148);
    adVar15 = local_678;
    local_358.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
    local_358.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
    local_358.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
    local_358.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
    local_358.Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
    local_358.Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
    local_358.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
    local_358.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
    dVar23 = local_678[0];
    dVar31 = local_678[1];
    local_358.Translation.XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
    local_358.Translation.XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
    local_358.Translation.ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
    local_358.Translation.ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
    local_420 = local_1a8.Translation.XY.m128d_f64[0];
    dStack_418 = local_1a8.Translation.XY.m128d_f64[1];
    local_450[0] = local_678[0];
    local_450[1] = local_678[1];
    local_630._s_0.X =
         ((double)pFVar3 + (double)TVar1.AllocatorInstance.Data.Data + dVar23) *
         __real_3fd5555555555555 - (dVar23 + local_1a8.Translation.XY.m128d_f64[0]);
    auVar7._4_8_ = dVar31;
    auVar7._0_4_ = TVar1.AllocatorInstance.Data._4_4_;
    auVar24._0_8_ = auVar7._0_8_ << 0x20;
    auVar24._8_4_ = TVar1.ArrayNum;
    auVar24._12_4_ = TVar1.ArrayMax;
    auVar8._4_8_ = TVar1._8_8_;
    auVar8._0_4_ = local_678[0]._4_4_;
    auVar25._0_8_ = auVar8._0_8_ << 0x20;
    auVar25._8_4_ = local_678[1]._0_4_;
    auVar25._12_4_ = local_678[1]._4_4_;
    local_438[0] = local_678[0];
    local_438[1] = local_678[1];
    auVar9._4_8_ = pFVar12;
    auVar9._0_4_ = local_678[0]._4_4_;
    auVar34._0_8_ = auVar9._0_8_ << 0x20;
    auVar34._8_4_ = local_678[1]._0_4_;
    auVar34._12_4_ = local_678[1]._4_4_;
    local_410 = local_1a8.Translation.ZW.m128d_f64[0];
    local_630._s_0.Y =
         ((double)pFVar12 + auVar24._8_8_ + auVar34._8_8_) * __real_3fd5555555555555 -
         (auVar25._8_8_ + local_1a8.Translation.XY.m128d_f64[1]);
    local_630._s_0.Z =
         ((double)pFVar13 + (double)pFVar14 + (double)FVar11) * __real_3fd5555555555555 -
         ((double)FVar11 + local_1a8.Translation.ZW.m128d_f64[0]);
    local_468 = TVar1;
    local_458 = pFVar14;
    local_440 = FVar11;
    local_428 = FVar11;
    local_378 = pFVar3;
    pFStack_370 = pFVar12;
    local_368 = pFVar13;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_630._s_0,(TVector<double> *)&local_618._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    adVar16 = local_678;
    auVar41._0_8_ =
         (param_3->Rotation).ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar41._8_8_ =
         (param_3->Rotation).ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_4a8._s_0.Y = dVar31 - local_618._s_0.Y * __real_4059000000000000;
    local_4a8._s_0.X = dVar23 - local_618._s_0.X * __real_4059000000000000;
    local_678[0] = adVar15[0];
    local_678[1] = adVar15[1];
    local_408[0] = local_678[0];
    local_408[1] = local_678[1];
    local_678[0] = adVar15[0];
    local_678[1] = adVar15[1];
    local_598.Translation.XY.m128d_f64[0] = local_678[0];
    local_598.Translation.XY.m128d_f64[1] = local_678[1];
    local_4a8._s_0.Z = (double)FVar11 - local_618._s_0.Z * __real_4059000000000000;
    dVar23 = (param_3->Rotation).XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar31 = (param_3->Rotation).XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_4c0._s_0.X = (param_7->Translation).XY.m128d_f64[0];
    local_4c0._s_0.Y = (param_7->Translation).XY.m128d_f64[1];
    local_5f8.Translation.ZW.m128d_f64[1] = 0.0;
    local_4c0._s_0.Z = (param_7->Translation).ZW.m128d_f64[0];
    dVar5 = local_4c0._s_0.X - (param_3->Translation).XY.m128d_f64[0];
    dVar6 = local_4c0._s_0.Y - (param_3->Translation).XY.m128d_f64[1];
    uVar46 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auStack_6a0[0] = '\0';
    auStack_6a0[1] = '\0';
    auStack_6a0[2] = '\0';
    auStack_6a0[3] = '\0';
    auStack_6a0[4] = '\0';
    auStack_6a0[5] = '\0';
    auStack_6a0[6] = '\0';
    auStack_6a0[7] = '\0';
    auVar38._8_4_ = SUB84(dVar31,0);
    auVar38._0_8_ = dVar23;
    auVar38._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    local_598.Translation.ZW.m128d_f64[1] = 0.0;
    auVar50._8_4_ = SUB84(dVar6,0);
    auVar50._0_8_ = dVar5;
    auVar50._12_4_ = uVar46;
    local_538.Translation.ZW.m128d_f64[1] = 0.0;
    dVar32 = local_4c0._s_0.Z - (param_3->Translation).ZW.m128d_f64[0];
    auVar39 = blendpd(auVar38,auVar41,2);
    auVar26._8_4_ = SUB84(auVar41._0_8_,0);
    auVar26._0_8_ = dVar31;
    auVar26._12_4_ = (int)((ulonglong)auVar41._0_8_ >> 0x20);
    auVar35._8_4_ = SUB84(dVar6,0);
    auVar35._0_8_ = dVar5;
    auVar35._12_4_ = uVar46;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = dVar32;
    auVar36 = blendpd(auVar35,auVar36,2);
    auVar51._0_8_ = auVar50._8_8_ * dVar23 - dVar31 * dVar5;
    auVar51._8_8_ = dVar32 * dVar31 - auVar26._8_8_ * dVar6;
    auVar37._0_8_ = auVar36._0_8_ * auVar41._0_8_ - auVar39._0_8_ * dVar32;
    auVar37._8_8_ = auVar36._8_8_ * auVar41._8_8_ - auVar39._8_8_ * 0.0;
    auVar36 = blendpd(auVar51,auVar37,2);
    dVar33 = auVar51._8_8_ + auVar51._8_8_;
    dVar40 = auVar37._0_8_ + auVar37._0_8_;
    uVar46 = SUB84(dVar40,0);
    uVar47 = (undefined4)((ulonglong)dVar40 >> 0x20);
    auVar52._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar52._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    auVar48._8_4_ = uVar46;
    auVar48._0_8_ = dVar33;
    auVar48._12_4_ = uVar47;
    auVar27._8_4_ = uVar46;
    auVar27._0_8_ = dVar33;
    auVar27._12_4_ = uVar47;
    auVar44._8_4_ = uVar46;
    auVar44._0_8_ = dVar33;
    auVar44._12_4_ = uVar47;
    auVar36 = blendpd(auVar44,auVar52,2);
    auVar49._0_8_ = auVar48._8_8_ * dVar23 - dVar33 * dVar31;
    auVar49._8_8_ = auVar52._0_8_ * dVar31 - auVar27._8_8_ * auVar41._0_8_;
    auVar28._8_4_ = SUB84(auVar52._8_8_,0);
    auVar28._0_8_ = auVar52._0_8_;
    auVar28._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
    auVar42._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(param_3->Scale3D).XY.m128d_f64);
    auVar42._8_4_ = _UNK_15061cc88 & *(uint *)((param_3->Scale3D).XY.m128d_f64 + 1);
    auVar42._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
    auVar45._0_8_ = auVar36._0_8_ * auVar41._0_8_ - auVar52._0_8_ * auVar39._0_8_;
    auVar45._8_8_ = auVar36._8_8_ * auVar41._8_8_ - auVar28._8_8_ * auVar39._8_8_;
    auVar36 = *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64;
    lVar20 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar36._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar36._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64);
    lVar21 = -(ulonglong)(auVar42._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar22 = -(ulonglong)(auVar42._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar43._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar39._4_4_,
                          ~(uint)lVar21 & auVar39._0_4_);
    auVar43._8_4_ = ~(uint)lVar22 & auVar39._8_4_;
    auVar43._12_4_ = ~(uint)((ulonglong)lVar22 >> 0x20) & auVar39._12_4_;
    auVar29._8_4_ = SUB84(auVar49._8_8_,0);
    auVar29._0_8_ = auVar49._0_8_;
    auVar29._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
    auVar39._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar39._0_8_ = auVar36._0_8_;
    auVar39._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
    local_4d8._s_0.X = auVar43._0_8_ * (dVar33 * auVar41._8_8_ + dVar5 + auVar29._8_8_);
    local_4d8._s_0.Y = auVar43._8_8_ * (dVar40 * auVar41._8_8_ + dVar6 + auVar45._0_8_);
    auVar39 = blendpd(auVar49,auVar45,2);
    auVar10._4_8_ = auVar36._8_8_;
    auVar10._0_4_ = adVar16[0]._4_4_;
    auVar30._0_8_ = auVar10._0_8_ << 0x20;
    auVar30._8_4_ = adVar16[1]._0_4_;
    auVar30._12_4_ = adVar16[1]._4_4_;
    dVar23 = (double)local_660.Data - adVar16[0];
    dVar40 = (double)FStack_658.Data - auVar30._8_8_;
    local_4d8._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar36._4_4_,
                          ~(uint)lVar20 & auVar36._0_4_) *
         (auVar52._0_8_ * auVar41._8_8_ + dVar32 + auVar39._0_8_);
    local_678[0] = adVar16[0];
    local_678[1] = adVar16[1];
    local_698 = (ForElementType<unsigned_int>)local_678[0];
    FStack_690 = (ForElementType<unsigned_int>)local_678[1];
    dVar33 = adVar16[0] - (double)local_648._0_8_;
    dVar31 = adVar16[1] - (double)local_648._8_8_;
    local_6a8 = FVar11;
    local_688 = FVar11;
    local_678 = adVar16;
    local_668 = FVar11;
    local_650.Data = (FScriptContainerElement *)pFVar13;
    local_638.Data = pFVar14;
    local_5f8.Translation.XY.m128d_f64[0] = (double)pFVar3;
    local_5f8.Translation.XY.m128d_f64[1] = (double)pFVar12;
    local_5f8.Translation.ZW.m128d_f64[0] = (double)pFVar13;
    local_598.Translation.ZW.m128d_f64[0] = (double)FVar11;
    local_538.Translation.XY.m128d_f64 = (double  [2])TVar1;
    local_538.Translation.ZW.m128d_f64[0] = (double)pFVar14;
    local_3f8 = FVar11;
    local_3f0 = local_4a8._s_0.X;
    dStack_3e8 = local_4a8._s_0.Y;
    local_3e0 = local_4a8._s_0.Z;
    local_3d8 = local_4c0._s_0.X;
    dStack_3d0 = local_4c0._s_0.Y;
    local_3c8 = local_4c0._s_0.Z;
    Solve_Modified_TwoBoneIK_3
              (&local_538,&local_598,&local_5f8,(TVector<double> *)&local_4a8._s_0,
               (TVector<double> *)&local_4c0._s_0,(TVector<double> *)&local_4d8._s_0,
               (float)SQRT(dVar31 * dVar31 + dVar33 * dVar33 +
                           ((double)FVar11 - (double)pFVar14) * ((double)FVar11 - (double)pFVar14)),
               (float)SQRT(dVar40 * dVar40 + dVar23 * dVar23 +
                           ((double)pFVar13 - (double)FVar11) * ((double)pFVar13 - (double)FVar11)),
               false,__real_3f800000,__real_3f800000);
    pFVar2 = (FCompactPoseBoneIndex *)(param_12->AllocatorInstance).Data;
    local_2e8 = local_5f8.Rotation.XY.m128d_f64[0];
    dStack_2e0 = local_5f8.Rotation.XY.m128d_f64[1];
    local_2d8 = local_5f8.Rotation.ZW.m128d_f64[0];
    dStack_2d0 = local_5f8.Rotation.ZW.m128d_f64[1];
    local_2f8 = local_6b8;
    local_2c8 = (FScriptContainerElement *)local_5f8.Translation.XY.m128d_f64[0];
    pFStack_2c0 = (FSkelMeshRefPoseOverride *)local_5f8.Translation.XY.m128d_f64[1];
    local_2b8 = (FSkelMeshRefPoseOverride *)local_5f8.Translation.ZW.m128d_f64[0];
    pTStack_2b0 = (TReferenceControllerBase<1> *)local_5f8.Translation.ZW.m128d_f64[1];
    local_2a8 = local_5f8.Scale3D.XY.m128d_f64[0];
    dStack_2a0 = local_5f8.Scale3D.XY.m128d_f64[1];
    local_298 = local_5f8.Scale3D.ZW.m128d_f64[0];
    dStack_290 = local_5f8.Scale3D.ZW.m128d_f64[1];
    if ((pFVar2 <= &local_2f8) && (&local_2f8 < pFVar2 + (longlong)param_12->ArrayMax * 0x1c)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar18 = param_12->ArrayNum;
    if (iVar18 == param_12->ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_12->AllocatorInstance,&param_12->ArrayMax);
    }
    param_12->ArrayNum = iVar18 + 1;
    lVar20 = (longlong)iVar18 * 0x70;
    pFVar3 = (param_12->AllocatorInstance).Data;
    *(ulonglong *)(pFVar3 + lVar20) = CONCAT44(uStack_2f4,local_2f8);
    *(undefined8 *)(pFVar3 + lVar20 + 8) = uStack_2f0;
    *(double *)(pFVar3 + lVar20 + 0x10) = local_2e8;
    *(double *)(pFVar3 + lVar20 + 0x10 + 8) = dStack_2e0;
    *(double *)(pFVar3 + lVar20 + 0x20) = local_2d8;
    *(double *)(pFVar3 + lVar20 + 0x20 + 8) = dStack_2d0;
    *(FScriptContainerElement **)(pFVar3 + lVar20 + 0x30) = local_2c8;
    *(FSkelMeshRefPoseOverride **)(pFVar3 + lVar20 + 0x30 + 8) = pFStack_2c0;
    *(FSkelMeshRefPoseOverride **)(pFVar3 + lVar20 + 0x40) = local_2b8;
    *(TReferenceControllerBase<1> **)(pFVar3 + lVar20 + 0x40 + 8) = pTStack_2b0;
    *(double *)(pFVar3 + lVar20 + 0x50) = local_2a8;
    *(double *)(pFVar3 + lVar20 + 0x50 + 8) = dStack_2a0;
    *(double *)(pFVar3 + lVar20 + 0x60) = local_298;
    *(double *)(pFVar3 + lVar20 + 0x60 + 8) = dStack_290;
    pFVar2 = (FCompactPoseBoneIndex *)(param_12->AllocatorInstance).Data;
    local_278 = local_598.Rotation.XY.m128d_f64[0];
    dStack_270 = local_598.Rotation.XY.m128d_f64[1];
    local_268 = local_598.Rotation.ZW.m128d_f64[0];
    dStack_260 = local_598.Rotation.ZW.m128d_f64[1];
    local_288 = local_6b4;
    local_258 = local_598.Translation.XY.m128d_f64[0];
    dStack_250 = local_598.Translation.XY.m128d_f64[1];
    local_248 = (FWeakObjectPtr)local_598.Translation.ZW.m128d_f64[0];
    FStack_240 = (FWeakObjectPtr)local_598.Translation.ZW.m128d_f64[1];
    local_238 = local_598.Scale3D.XY.m128d_f64[0];
    dStack_230 = local_598.Scale3D.XY.m128d_f64[1];
    local_228 = local_598.Scale3D.ZW.m128d_f64[0];
    dStack_220 = local_598.Scale3D.ZW.m128d_f64[1];
    if ((pFVar2 <= &local_288) && (&local_288 < pFVar2 + (longlong)param_12->ArrayMax * 0x1c)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar18 = param_12->ArrayNum;
    if (iVar18 == param_12->ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_12->AllocatorInstance,&param_12->ArrayMax);
    }
    param_12->ArrayNum = iVar18 + 1;
    lVar20 = (longlong)iVar18 * 0x70;
    pFVar3 = (param_12->AllocatorInstance).Data;
    *(ulonglong *)(pFVar3 + lVar20) = CONCAT44(uStack_284,local_288);
    *(undefined8 *)(pFVar3 + lVar20 + 8) = uStack_280;
    *(double *)(pFVar3 + lVar20 + 0x10) = local_278;
    *(double *)(pFVar3 + lVar20 + 0x10 + 8) = dStack_270;
    *(double *)(pFVar3 + lVar20 + 0x20) = local_268;
    *(double *)(pFVar3 + lVar20 + 0x20 + 8) = dStack_260;
    *(double *)(pFVar3 + lVar20 + 0x30) = local_258;
    *(double *)(pFVar3 + lVar20 + 0x30 + 8) = dStack_250;
    *(FWeakObjectPtr *)(pFVar3 + lVar20 + 0x40) = local_248;
    ((FWeakObjectPtr *)(pFVar3 + lVar20 + 0x40))[1] = FStack_240;
    *(double *)(pFVar3 + lVar20 + 0x50) = local_238;
    *(double *)(pFVar3 + lVar20 + 0x50 + 8) = dStack_230;
    *(double *)(pFVar3 + lVar20 + 0x60) = local_228;
    *(double *)(pFVar3 + lVar20 + 0x60 + 8) = dStack_220;
    pFVar2 = (FCompactPoseBoneIndex *)(param_12->AllocatorInstance).Data;
    local_208 = local_538.Rotation.XY.m128d_f64[0];
    dStack_200 = local_538.Rotation.XY.m128d_f64[1];
    local_1f8 = local_538.Rotation.ZW.m128d_f64[0];
    dStack_1f0 = local_538.Rotation.ZW.m128d_f64[1];
    local_218 = local_6b0;
    local_1e8 = (FScriptContainerElement *)local_538.Translation.XY.m128d_f64[0];
    dStack_1e0 = local_538.Translation.XY.m128d_f64[1];
    local_1d8 = (FScriptContainerElement *)local_538.Translation.ZW.m128d_f64[0];
    dStack_1d0 = local_538.Translation.ZW.m128d_f64[1];
    local_1c8 = local_538.Scale3D.XY.m128d_f64[0];
    dStack_1c0 = local_538.Scale3D.XY.m128d_f64[1];
    local_1b8 = local_538.Scale3D.ZW.m128d_f64[0];
    dStack_1b0 = local_538.Scale3D.ZW.m128d_f64[1];
    if ((pFVar2 <= &local_218) && (&local_218 < pFVar2 + (longlong)param_12->ArrayMax * 0x1c)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar18 = param_12->ArrayNum;
    if (iVar18 == param_12->ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_12->AllocatorInstance,&param_12->ArrayMax);
    }
    param_12->ArrayNum = iVar18 + 1;
    lVar20 = (longlong)iVar18 * 0x70;
    pFVar3 = (param_12->AllocatorInstance).Data;
    *(ulonglong *)(pFVar3 + lVar20) = CONCAT44(uStack_214,local_218);
    *(undefined8 *)(pFVar3 + lVar20 + 8) = uStack_210;
    *(double *)(pFVar3 + lVar20 + 0x10) = local_208;
    *(double *)(pFVar3 + lVar20 + 0x10 + 8) = dStack_200;
    *(double *)(pFVar3 + lVar20 + 0x20) = local_1f8;
    *(double *)(pFVar3 + lVar20 + 0x20 + 8) = dStack_1f0;
    *(FScriptContainerElement **)(pFVar3 + lVar20 + 0x30) = local_1e8;
    *(double *)(pFVar3 + lVar20 + 0x30 + 8) = dStack_1e0;
    *(FScriptContainerElement **)(pFVar3 + lVar20 + 0x40) = local_1d8;
    *(double *)(pFVar3 + lVar20 + 0x40 + 8) = dStack_1d0;
    *(double *)(pFVar3 + lVar20 + 0x50) = local_1c8;
    *(double *)(pFVar3 + lVar20 + 0x50 + 8) = dStack_1c0;
    *(double *)(pFVar3 + lVar20 + 0x60) = local_1b8;
    *(double *)(pFVar3 + lVar20 + 0x60 + 8) = dStack_1b0;
  }
  return;
}

// GetBoneLengthBetweenBones @ 14d346cc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl
UDragonIK_Library::GetBoneLengthBetweenBones
          (USkeletalMeshComponent *param_1,FName param_2,FName param_3)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FName FVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  FName local_res8;
  undefined1 local_res20 [8];
  double local_78;
  TVector<double>_u_0 local_70 [3];
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    iVar5 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)param_1);
    iVar6 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_1,param_2);
    if (((iVar6 != -1) &&
        (iVar6 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_1,param_3),
        iVar6 != -1)) &&
       (bVar4 = USkinnedMeshComponent::BoneIsChildOf
                          ((USkinnedMeshComponent *)param_1,param_3,param_2),
       dVar3 = __real_3f1a36e2e0000000, uVar2 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       uVar1 = (uint)__xmm_7fffffffffffffff7fffffffffffffff, bVar4)) {
      iVar6 = 0;
      fVar17 = 0.0;
      local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      if (iVar5 < 1) {
        return 0.0;
      }
      do {
        USkinnedMeshComponent::GetBoneName((USkinnedMeshComponent *)param_1,(int)&local_res8);
        USkinnedMeshComponent::GetBoneLocation
                  ((USkinnedMeshComponent *)param_1,(TVector<double> *)&local_70[0]._s_0,local_res8,
                   WorldSpace);
        dVar9 = (double)CONCAT44(uVar14,uVar13) -
                (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar2,SUB84(dVar9,0) & uVar1
                                    )) {
          dVar9 = (double)CONCAT44(uVar16,uVar15);
        }
        else {
          dVar9 = (double)CONCAT44(uVar16,uVar15);
          dVar10 = (double)CONCAT44(uVar16,uVar15) -
                   (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          if (((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar2,SUB84(dVar10,0) & uVar1)
               <= dVar3) &&
             ((double)CONCAT44((uint)((ulonglong)
                                      (local_78 -
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) >>
                                     0x20) & uVar2,
                               SUB84(local_78 -
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0) &
                               uVar1) <= dVar3)) {
            auVar12._4_4_ = local_70[0]._4_4_;
            auVar12._0_4_ = local_70[0]._0_4_;
            auVar12._8_4_ = local_70[0]._8_4_;
            auVar12._12_4_ = local_70[0]._12_4_;
            local_78 = (double)local_70[0]._16_8_;
            dVar9 = auVar12._8_8_;
            uVar13 = local_70[0]._0_4_;
            uVar14 = local_70[0]._4_4_;
          }
        }
        dVar10 = (double)CONCAT44(local_70[0]._4_4_,local_70[0]._0_4_) -
                 (double)CONCAT44(uVar14,uVar13);
        dVar9 = (double)CONCAT44(local_70[0]._12_4_,local_70[0]._8_4_) - dVar9;
        auVar11._0_8_ =
             dVar9 * dVar9 + dVar10 * dVar10 +
             ((double)local_70[0]._16_8_ - local_78) * ((double)local_70[0]._16_8_ - local_78);
        auVar11._8_8_ = 0;
        auVar12 = sqrtpd(auVar11,auVar11);
        fVar17 = (float)(auVar12._0_8_ + (double)fVar17);
        if (local_res8 == param_2) {
          return fVar17;
        }
        FVar8 = USkinnedMeshComponent::GetParentBone
                          ((USkinnedMeshComponent *)param_1,(FName)local_res20);
        iVar7 = USkinnedMeshComponent::GetBoneIndex
                          ((USkinnedMeshComponent *)param_1,*(FName *)FVar8);
        if (iVar7 == -1) {
          return fVar17;
        }
        iVar6 = iVar6 + 1;
        local_78 = (double)local_70[0]._16_8_;
        uVar13 = local_70[0]._0_4_;
        uVar14 = local_70[0]._4_4_;
        uVar15 = local_70[0]._8_4_;
        uVar16 = local_70[0]._12_4_;
      } while (iVar6 < iVar5);
      return fVar17;
    }
  }
  return 0.0;
}

// GetHandYaw @ 14d346ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRotator<double> * __cdecl
UDragonIK_Library::GetHandYaw
          (TRotator<double> *__return_storage_ptr__,bool param_1,FDragonData_ArmsData *param_2,
          TTransform<double> *param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          TTransform<double> *param_6,TTransform<double> *param_7,TTransform<double> *param_8,
          TVector<double> *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  __m128d _Var20;
  __m128d _Var21;
  int iVar22;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  TQuat<double> *pTVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  TVector<double>_u_0 *this;
  TTransform<double> *pTVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar49;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar75;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined4 uVar81;
  undefined8 uVar82;
  double dVar83;
  undefined8 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uVar88;
  float fVar89;
  uint uVar90;
  uint uVar91;
  undefined4 uVar92;
  uint uVar93;
  float fVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  undefined8 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined4 uVar105;
  undefined4 uVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auStack_578 [32];
  char local_558;
  TVector<double>_u_0 local_548;
  TTransform<double> *local_528;
  undefined1 local_518 [8];
  uint uStack_510;
  uint uStack_50c;
  double local_508;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [8];
  undefined8 uStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8 [2];
  double local_498 [2];
  undefined1 local_488 [32];
  undefined1 local_468 [8];
  uint uStack_460;
  uint uStack_45c;
  double local_458 [2];
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  uVar17 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar13 = __real_3e45798ee0000000;
  dVar31 = __real_3ff0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_578;
  local_388.Rotation.XY.m128d_f64[0] = (param_7->Rotation).XY.m128d_f64[0];
  local_388.Rotation.XY.m128d_f64[1] = (param_7->Rotation).XY.m128d_f64[1];
  local_388.Rotation.ZW.m128d_f64[0] = (param_7->Rotation).ZW.m128d_f64[0];
  local_388.Rotation.ZW.m128d_f64[1] = (param_7->Rotation).ZW.m128d_f64[1];
  local_388.Translation.XY.m128d_f64[0] = (param_7->Translation).XY.m128d_f64[0];
  local_388.Translation.XY.m128d_f64[1] = (param_7->Translation).XY.m128d_f64[1];
  local_388.Scale3D.XY.m128d_f64[0] = (param_7->Scale3D).XY.m128d_f64[0];
  local_388.Scale3D.XY.m128d_f64[1] = (param_7->Scale3D).XY.m128d_f64[1];
  local_508 = (param_7->Translation).ZW.m128d_f64[0];
  uVar82 = local_388.Translation.XY.m128d_f64[0] - (param_6->Translation).XY.m128d_f64[0];
  local_388.Scale3D.ZW.m128d_f64[0] = (param_7->Scale3D).ZW.m128d_f64[0];
  local_388.Scale3D.ZW.m128d_f64[1] = (param_7->Scale3D).ZW.m128d_f64[1];
  local_4b8 = (param_6->Translation).ZW.m128d_f64[0];
  uVar3 = local_388.Translation.XY.m128d_f64[1] - (param_6->Translation).XY.m128d_f64[1];
  uVar4 = local_508 - local_4b8;
  local_528 = param_8;
  dVar61 = (double)uVar3 * (double)uVar3 + (double)uVar82 * (double)uVar82 +
           (double)uVar4 * (double)uVar4;
  if (dVar61 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar61) {
      local_4e8 = __real_3ff0000000000000 / SQRT(dVar61);
      uVar3 = (double)uVar3 * local_4e8;
      uVar4 = (double)uVar4 * local_4e8;
      uVar82 = (double)uVar82 * local_4e8;
    }
    else {
      local_4b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar82 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
  }
  auVar64._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(param_7->Scale3D).ZW.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(param_7->Scale3D).ZW.m128d_f64);
  auVar64._8_4_ = _UNK_15061cc88 & *(uint *)((param_7->Scale3D).ZW.m128d_f64 + 1);
  auVar64._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_7->Scale3D).ZW.m128d_f64 + 0xc);
  local_388.Translation.XY.m128d_f64[0] =
       (double)uVar82 * __real_408f400000000000 + local_388.Translation.XY.m128d_f64[0];
  local_508 = (double)uVar4 * __real_408f400000000000 + local_508;
  local_388.Translation.XY.m128d_f64[1] =
       (double)uVar3 * __real_408f400000000000 + local_388.Translation.XY.m128d_f64[1];
  local_388.Translation.ZW.m128d_f64[1] = 0.0;
  auVar51._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar64._8_8_);
  auVar51._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar64._0_8_);
  uVar24 = movmskpd((int)__return_storage_ptr__,auVar51);
  auVar65._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(param_7->Scale3D).XY.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(param_7->Scale3D).XY.m128d_f64);
  auVar65._8_4_ = _UNK_15061cc88 & *(uint *)((param_7->Scale3D).XY.m128d_f64 + 1);
  auVar65._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_7->Scale3D).XY.m128d_f64 + 0xc);
  auVar33._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar65._8_8_);
  auVar33._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar65._0_8_);
  iVar22 = movmskpd((int)param_8,auVar33);
  local_558 = param_1;
  if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
    local_3e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_3e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_3e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_3e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_3e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_3e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_388.Translation.ZW.m128d_f64[0] = local_508;
  }
  else {
    local_388.Translation.ZW.m128d_f64[0] = local_508;
    UE::Math::TTransform<double>::InverseFast(param_7,&local_3e8);
  }
  local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_208,&local_3e8,local_528);
  local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_448.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_448.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_448.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_448.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_448.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_448.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_448.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_448.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_448,&local_388,&local_208);
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar82 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar14 = __real_bff0000000000000;
  local_388.Rotation.XY.m128d_f64[0] = local_448.Rotation.XY.m128d_f64[0];
  local_388.Rotation.XY.m128d_f64[1] = local_448.Rotation.XY.m128d_f64[1];
  local_388.Scale3D.XY.m128d_f64[0] = local_448.Scale3D.XY.m128d_f64[0];
  local_388.Scale3D.XY.m128d_f64[1] = local_448.Scale3D.XY.m128d_f64[1];
  local_388.Rotation.ZW.m128d_f64[0] = local_448.Rotation.ZW.m128d_f64[0];
  local_388.Rotation.ZW.m128d_f64[1] = local_448.Rotation.ZW.m128d_f64[1];
  dVar83 = (param_7->Translation).XY.m128d_f64[0] - (param_6->Translation).XY.m128d_f64[0];
  local_388.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
  local_388.Scale3D.ZW.m128d_f64[1] = local_448.Scale3D.ZW.m128d_f64[1];
  dVar61 = (param_7->Translation).XY.m128d_f64[1] - (param_6->Translation).XY.m128d_f64[1];
  dVar63 = (param_7->Translation).ZW.m128d_f64[0] - (param_6->Translation).ZW.m128d_f64[0];
  local_388.Translation.XY.m128d_f64[0] = local_448.Translation.XY.m128d_f64[0];
  local_388.Translation.XY.m128d_f64[1] = local_448.Translation.XY.m128d_f64[1];
  local_388.Translation.ZW.m128d_f64[0] = local_448.Translation.ZW.m128d_f64[0];
  local_388.Translation.ZW.m128d_f64[1] = local_448.Translation.ZW.m128d_f64[1];
  dVar62 = dVar61 * dVar61 + dVar83 * dVar83 + dVar63 * dVar63;
  uVar3 = dVar61;
  uVar4 = dVar63;
  uVar84 = dVar83;
  if ((dVar62 != dVar31) &&
     (uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar84 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X, dVar13 <= dVar62)) {
    local_528 = (TTransform<double> *)(dVar31 / SQRT(dVar62));
    uVar3 = dVar61 * (double)local_528;
    uVar4 = dVar63 * (double)local_528;
    uVar84 = dVar83 * (double)local_528;
  }
  local_508 = (param_7->Translation).ZW.m128d_f64[0];
  uVar8 = local_448.Translation.XY.m128d_f64[0] - (param_7->Translation).XY.m128d_f64[0];
  uVar5 = local_448.Translation.XY.m128d_f64[1] - (param_7->Translation).XY.m128d_f64[1];
  uVar98 = local_448.Translation.ZW.m128d_f64[0] - local_508;
  dVar61 = (double)uVar5 * (double)uVar5 + (double)uVar8 * (double)uVar8 +
           (double)uVar98 * (double)uVar98;
  if (dVar61 != dVar31) {
    if (dVar13 <= dVar61) {
      local_528 = (TTransform<double> *)(dVar31 / SQRT(dVar61));
      uVar8 = (double)uVar8 * (double)local_528;
      uVar5 = (double)uVar5 * (double)local_528;
      uVar98 = (double)uVar98 * (double)local_528;
    }
    else {
      local_508 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  dVar63 = (double)uVar5 * (double)uVar3 + (double)uVar8 * (double)uVar84 +
           (double)uVar98 * (double)uVar4;
  dVar61 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar63) && (dVar61 = dVar63, dVar31 <= dVar63)) {
    dVar61 = dVar31;
  }
  dVar61 = acos(dVar61);
  fVar107 = (float)(dVar61 * __real_404ca5dc1a63c1f8);
  dVar61 = (double)uVar5 * (param_9->field0_0x0)._s_0.Y +
           (double)uVar8 * (param_9->field0_0x0)._s_0.X +
           (double)uVar98 * (param_9->field0_0x0)._s_0.Z;
  local_4e8 = (double)CONCAT44(local_4e8._4_4_,fVar107);
  if ((dVar14 <= dVar61) && (dVar14 = dVar61, dVar31 <= dVar61)) {
    dVar14 = dVar31;
  }
  dVar61 = acos(dVar14);
  local_3e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_3e8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_4c8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  uStack_4c0 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_3e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_528 = (TTransform<double> *)
              CONCAT44(local_528._4_4_,(float)(dVar61 * __real_404ca5dc1a63c1f8));
  local_518 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  _uStack_510 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_3e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_3e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_548._s_0.X = (param_7->Translation).XY.m128d_f64[0] - (param_6->Translation).XY.m128d_f64[0]
  ;
  local_3e8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_548._s_0.Z = (param_7->Translation).ZW.m128d_f64[0] - (param_6->Translation).ZW.m128d_f64[0]
  ;
  local_548._s_0.Y = (param_7->Translation).XY.m128d_f64[1] - (param_6->Translation).XY.m128d_f64[1]
  ;
  dVar61 = local_548._s_0.Y * local_548._s_0.Y + local_548._s_0.X * local_548._s_0.X +
           local_548._s_0.Z * local_548._s_0.Z;
  if (dVar61 != dVar31) {
    if (dVar13 <= dVar61) {
      local_4f8 = dVar31 / SQRT(dVar61);
      local_548._s_0.X = local_4f8 * local_548._s_0.X;
      local_548._s_0.Y = local_4f8 * local_548._s_0.Y;
      local_548._s_0.Z = local_4f8 * local_548._s_0.Z;
    }
    else {
      local_548._s_0.X = (double)uVar82;
      local_548._s_0.Y = (double)uVar18;
      local_548._s_0.Z = (double)uVar19;
    }
  }
  pTVar23 = UE::Math::TVector<double>::ToOrientationQuat
                      ((TVector<double> *)&local_548._s_0,(TQuat<double> *)local_488);
  _Var21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var20 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  uVar24 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  uVar88 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  uVar90 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  uVar91 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  local_3e8.Rotation.XY.m128d_f64[0] = pTVar23->X;
  local_3e8.Rotation.XY.m128d_f64[1] = pTVar23->Y;
  local_3e8.Rotation.ZW.m128d_f64[0] = pTVar23->Z;
  local_3e8.Rotation.ZW.m128d_f64[1] = pTVar23->W;
  dVar61 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  uVar25 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  local_268.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_4a8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_4a8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_498[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_498[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_548._s_0.X = (param_5->Translation).XY.m128d_f64[0] - (param_4->Translation).XY.m128d_f64[0]
  ;
  local_268.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_548._s_0.Y = (param_5->Translation).XY.m128d_f64[1] - (param_4->Translation).XY.m128d_f64[1]
  ;
  local_548._s_0.Z = (param_5->Translation).ZW.m128d_f64[0] - (param_4->Translation).ZW.m128d_f64[0]
  ;
  local_468 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  _uStack_460 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_458[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_458[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  dVar63 = local_548._s_0.Y * local_548._s_0.Y + local_548._s_0.X * local_548._s_0.X +
           local_548._s_0.Z * local_548._s_0.Z;
  if (dVar63 != dVar31) {
    if (dVar13 <= dVar63) {
      local_4f8 = dVar31 / SQRT(dVar63);
      local_548._s_0.X = local_4f8 * local_548._s_0.X;
      local_548._s_0.Y = local_4f8 * local_548._s_0.Y;
      local_548._s_0.Z = local_4f8 * local_548._s_0.Z;
    }
    else {
      local_548._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_548._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_548._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  pTVar23 = UE::Math::TVector<double>::ToOrientationQuat
                      ((TVector<double> *)&local_548._s_0,(TQuat<double> *)local_488);
  fVar108 = __real_42b40000;
  fVar76 = fVar107;
  if (__real_43340000 <= fVar107) {
    fVar76 = __real_43340000;
  }
  dVar63 = pTVar23->X;
  dVar14 = pTVar23->Y;
  dVar31 = pTVar23->Z;
  dVar13 = pTVar23->W;
  local_4d8._0_8_ = pTVar23->Z;
  local_4d8._8_8_ = pTVar23->W;
  if (fVar76 <= __real_42b40000) {
    fVar76 = __real_42b40000;
  }
  local_4f8 = dVar63;
  dStack_4f0 = dVar14;
  UKismetMathLibrary::NormalizeToRange
            ((double)fVar76,__real_4056800000000000,__real_4066800000000000);
  local_548._0_16_ = ZEXT816(0);
  this = &local_548;
  local_548._s_0.Z = __real_c066800000000000;
  pTVar23 = UE::Math::TRotator<double>::Quaternion
                      ((TRotator<double> *)&this->_s_0,(TQuat<double> *)local_488);
  local_488._0_8_ = CONCAT44(uVar15 & _Var21.m128d_f64[0]._4_4_,uVar26 & _Var21.m128d_f64[0]._0_4_);
  local_488._8_4_ = uVar16 & _Var21.m128d_f64[1]._0_4_;
  local_488._12_4_ = uVar17 & uVar25;
  local_548._s_0.X = (double)CONCAT44(uVar15 & uVar88,uVar26 & uVar24);
  local_548._8_4_ = uVar16 & uVar90;
  local_548._12_4_ = uVar17 & uVar91;
  auVar50._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < local_488._8_8_);
  auVar50._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < (double)local_488._0_8_);
  uVar25 = movmskpd((int)this,auVar50);
  auVar32._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < local_548._8_8_);
  auVar32._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < local_548._s_0.X);
  iVar22 = movmskpd((int)pTVar23,auVar32);
  if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
    local_448.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_448.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_448.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_448.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_448.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_448.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    dVar62 = (double)CONCAT44(local_548._12_4_,local_548._8_4_);
    lVar28 = -(ulonglong)
              (local_548._s_0.X <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar30 = -(ulonglong)(dVar62 <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar1._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar1._0_8_ = dVar61;
    auVar1._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar1);
    lVar29 = -(ulonglong)
              ((double)CONCAT44(uVar15 & _Var21.m128d_f64[0]._4_4_,
                                uVar26 & _Var21.m128d_f64[0]._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    dVar63 = dVar63 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar14 = dVar14 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar105 = SUB84(dVar14,0);
    uVar106 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    (undefined1  [16])_Var20.m128d_f64);
    dVar31 = dVar31 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar13 = dVar13 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar92 = (undefined4)((ulonglong)dVar13 >> 0x20);
    local_448.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar28 & auVar51._0_4_;
    local_448.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar28 >> 0x20) & auVar51._4_4_;
    local_448.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar30 & auVar51._8_4_;
    local_448.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar51._12_4_;
    auVar85._8_4_ = uVar105;
    auVar85._0_8_ = dVar63;
    auVar85._12_4_ = uVar106;
    auVar12._8_4_ = SUB84(dVar13,0);
    auVar12._0_8_ = dVar31;
    auVar12._12_4_ = uVar92;
    auVar51 = blendpd(auVar85,auVar12,2);
    dVar83 = (double)CONCAT44(local_448.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_448.Scale3D.XY.m128d_f64[0]._0_4_) * local_4a8[0];
    dVar6 = (double)CONCAT44(local_448.Scale3D.XY.m128d_f64[1]._4_4_,
                             local_448.Scale3D.XY.m128d_f64[1]._0_4_) * local_4a8[1];
    uVar49 = (undefined4)((ulonglong)dVar6 >> 0x20);
    local_448.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar33._4_4_,
                          ~(uint)lVar29 & auVar33._0_4_);
    auVar66._8_4_ = uVar105;
    auVar66._0_8_ = dVar63;
    auVar66._12_4_ = uVar106;
    dVar75 = auVar66._8_8_;
    auVar34._8_4_ = SUB84(dVar31,0);
    auVar34._0_8_ = dVar75;
    auVar34._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    auVar99._8_4_ = SUB84(dVar6,0);
    auVar99._0_8_ = dVar83;
    auVar99._12_4_ = uVar49;
    dVar11 = local_448.Scale3D.ZW.m128d_f64[0] * local_498[0];
    dVar61 = local_498[1] * 0.0;
    auVar52._8_4_ = SUB84(dVar6,0);
    auVar52._0_8_ = dVar83;
    auVar52._12_4_ = uVar49;
    auVar9._8_4_ = SUB84(dVar61,0);
    auVar9._0_8_ = dVar11;
    auVar9._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
    auVar33 = blendpd(auVar52,auVar9,2);
    auVar100._0_8_ = auVar99._8_8_ * dVar63 - dVar75 * dVar83;
    auVar100._8_8_ = dVar11 * dVar14 - auVar34._8_8_ * dVar6;
    auVar53._0_8_ = auVar33._0_8_ * dVar31 - auVar51._0_8_ * dVar11;
    auVar53._8_8_ = auVar33._8_8_ * dVar13 - auVar51._8_8_ * dVar61;
    dVar61 = auVar100._8_8_ + auVar100._8_8_;
    dVar62 = auVar53._0_8_ + auVar53._0_8_;
    uVar49 = SUB84(dVar62,0);
    uVar81 = (undefined4)((ulonglong)dVar62 >> 0x20);
    auVar33 = blendpd(auVar100,auVar53,2);
    auVar101._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar101._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    auVar77._8_4_ = uVar49;
    auVar77._0_8_ = dVar61;
    auVar77._12_4_ = uVar81;
    auVar35._8_4_ = uVar49;
    auVar35._0_8_ = dVar61;
    auVar35._12_4_ = uVar81;
    auVar67._8_4_ = uVar49;
    auVar67._0_8_ = dVar61;
    auVar67._12_4_ = uVar81;
    auVar33 = blendpd(auVar67,auVar101,2);
    auVar78._0_8_ = auVar77._8_8_ * dVar63 - dVar61 * dVar75;
    auVar78._8_8_ = auVar101._0_8_ * dVar14 - auVar35._8_8_ * dVar31;
    auVar36._8_4_ = SUB84(auVar101._8_8_,0);
    auVar36._0_8_ = auVar101._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar101._8_8_ >> 0x20);
    auVar68._0_8_ = auVar33._0_8_ * dVar31 - auVar101._0_8_ * auVar51._0_8_;
    auVar68._8_8_ = auVar33._8_8_ * dVar13 - auVar36._8_8_ * auVar51._8_8_;
    auVar37._8_4_ = SUB84(auVar78._8_8_,0);
    auVar37._0_8_ = auVar78._0_8_;
    auVar37._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
    auVar33 = blendpd(auVar78,auVar68,2);
    local_448.Translation.ZW.m128d_f64[1] = 0.0;
    local_448.Translation.ZW.m128d_f64[0] = 0.0 - (auVar101._0_8_ * dVar13 + dVar11 + auVar33._0_8_)
    ;
    local_448.Rotation.XY.m128d_f64[1]._0_4_ = uVar105;
    local_448.Rotation.XY.m128d_f64[0] = dVar63;
    local_448.Rotation.XY.m128d_f64[1]._4_4_ = uVar106;
    local_448.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
    local_448.Rotation.ZW.m128d_f64[0] = dVar31;
    local_448.Rotation.ZW.m128d_f64[1]._4_4_ = uVar92;
    local_448.Translation.XY.m128d_f64[1] = 0.0 - (dVar62 * dVar13 + dVar6 + auVar68._0_8_);
    local_448.Translation.XY.m128d_f64[0] = 0.0 - (dVar61 * dVar13 + dVar83 + auVar37._8_8_);
    local_448.Scale3D.ZW.m128d_f64[1] = 0.0;
    uVar24 = local_468._0_4_;
    uVar88 = local_468._4_4_;
    uVar90 = uStack_460;
    uVar91 = uStack_45c;
    fVar107 = local_4e8._0_4_;
    fVar108 = __real_42b40000;
    dVar61 = local_458[0];
  }
  pTVar27 = &local_328;
  local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_328.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_328.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_328.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_328.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_328.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_328.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(pTVar27,param_5,&local_448);
  auVar54._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < (double)local_488._8_8_);
  auVar54._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < (double)local_488._0_8_);
  auVar38._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < local_548._s_0.Y);
  auVar38._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < local_548._s_0.X);
  uVar25 = movmskpd((int)pTVar27,auVar54);
  iVar22 = movmskpd(extraout_EAX,auVar38);
  if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
    local_448.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_448.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_448.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_448.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_448.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_448.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    lVar28 = -(ulonglong)
              ((double)CONCAT44(uVar15 & (uint)((ulonglong)dVar61 >> 0x20),uVar26 & SUB84(dVar61,0))
              <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar7._4_4_ = uVar88;
    auVar7._0_4_ = uVar24;
    auVar7._8_4_ = uVar90;
    auVar7._12_4_ = uVar91;
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar7);
    lVar29 = -(ulonglong)
              ((double)CONCAT44(uVar15 & uVar88,uVar26 & uVar24) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar30 = -(ulonglong)
              ((double)CONCAT44(uVar17 & uVar91,uVar16 & uVar90) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    local_448.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar29 & auVar33._0_4_;
    local_448.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar29 >> 0x20) & auVar33._4_4_;
    local_448.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar30 & auVar33._8_4_;
    local_448.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar33._12_4_;
    auVar2._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar2._0_8_ = dVar61;
    auVar2._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar2);
    dVar61 = (double)CONCAT44(local_448.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_448.Scale3D.XY.m128d_f64[0]._0_4_) * local_4a8[0];
    dVar63 = (double)CONCAT44(local_448.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_448.Scale3D.XY.m128d_f64[1]._0_4_) * local_4a8[1];
    uVar81 = SUB84(dVar63,0);
    uVar92 = (undefined4)((ulonglong)dVar63 >> 0x20);
    local_448.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar33._4_4_,
                          ~(uint)lVar28 & auVar33._0_4_);
    local_4f8 = local_4f8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dStack_4f0 = dStack_4f0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_4d8._0_8_ =
         (double)local_4d8._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_4d8._8_8_ =
         (double)local_4d8._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar69._8_4_ = SUB84(dStack_4f0,0);
    auVar69._0_8_ = local_4f8;
    uVar49 = (undefined4)((ulonglong)dStack_4f0 >> 0x20);
    auVar69._12_4_ = uVar49;
    auVar86._8_4_ = SUB84(dStack_4f0,0);
    auVar86._0_8_ = local_4f8;
    auVar86._12_4_ = uVar49;
    auVar51 = blendpd(auVar86,local_4d8,2);
    dVar14 = local_448.Scale3D.ZW.m128d_f64[0] * local_498[0];
    uVar49 = SUB84(local_498[1] * 0.0,0);
    uVar105 = (undefined4)((ulonglong)(local_498[1] * 0.0) >> 0x20);
    auVar102._8_4_ = uVar81;
    auVar102._0_8_ = dVar61;
    auVar102._12_4_ = uVar92;
    auVar55._8_4_ = uVar81;
    auVar55._0_8_ = dVar61;
    auVar55._12_4_ = uVar92;
    auVar10._8_4_ = uVar49;
    auVar10._0_8_ = dVar14;
    auVar10._12_4_ = uVar105;
    auVar33 = blendpd(auVar55,auVar10,2);
    auVar39._8_4_ = uVar81;
    auVar39._0_8_ = dVar61;
    auVar39._12_4_ = uVar92;
    auVar103._0_8_ = auVar102._8_8_ * local_4f8 - dVar61 * auVar69._8_8_;
    auVar103._8_8_ = dVar14 * dStack_4f0 - auVar39._8_8_ * (double)local_4d8._0_8_;
    auVar40._8_4_ = uVar49;
    auVar40._0_8_ = dVar14;
    auVar40._12_4_ = uVar105;
    auVar56._0_8_ = auVar33._0_8_ * (double)local_4d8._0_8_ - dVar14 * auVar51._0_8_;
    auVar56._8_8_ = auVar33._8_8_ * (double)local_4d8._8_8_ - auVar40._8_8_ * auVar51._8_8_;
    dVar31 = auVar103._8_8_ + auVar103._8_8_;
    dVar13 = auVar56._0_8_ + auVar56._0_8_;
    uVar49 = SUB84(dVar13,0);
    uVar81 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar33 = blendpd(auVar103,auVar56,2);
    auVar104._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar104._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    auVar79._8_4_ = uVar49;
    auVar79._0_8_ = dVar31;
    auVar79._12_4_ = uVar81;
    auVar41._8_4_ = uVar49;
    auVar41._0_8_ = dVar31;
    auVar41._12_4_ = uVar81;
    auVar70._8_4_ = uVar49;
    auVar70._0_8_ = dVar31;
    auVar70._12_4_ = uVar81;
    auVar33 = blendpd(auVar70,auVar104,2);
    auVar80._0_8_ = auVar79._8_8_ * local_4f8 - dVar31 * auVar69._8_8_;
    auVar80._8_8_ = auVar104._0_8_ * dStack_4f0 - auVar41._8_8_ * (double)local_4d8._0_8_;
    auVar42._8_4_ = SUB84(auVar104._8_8_,0);
    auVar42._0_8_ = auVar104._0_8_;
    auVar42._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
    auVar71._0_8_ = auVar33._0_8_ * (double)local_4d8._0_8_ - auVar104._0_8_ * auVar51._0_8_;
    auVar71._8_8_ = auVar33._8_8_ * (double)local_4d8._8_8_ - auVar42._8_8_ * auVar51._8_8_;
    auVar43._8_4_ = SUB84(auVar80._8_8_,0);
    auVar43._0_8_ = auVar80._0_8_;
    auVar43._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
    auVar33 = blendpd(auVar80,auVar71,2);
    local_448.Translation.XY.m128d_f64[1] =
         0.0 - (dVar13 * (double)local_4d8._8_8_ + dVar63 + auVar71._0_8_);
    local_448.Translation.XY.m128d_f64[0] =
         0.0 - (dVar31 * (double)local_4d8._8_8_ + dVar61 + auVar43._8_8_);
    local_448.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_448.Rotation.XY.m128d_f64[1] = dStack_4f0;
    local_448.Rotation.XY.m128d_f64[0] = local_4f8;
    local_448.Rotation.ZW.m128d_f64[1] = (double)local_4d8._8_8_;
    local_448.Rotation.ZW.m128d_f64[0] = (double)local_4d8._0_8_;
    local_448.Translation.ZW.m128d_f64[1] = 0.0;
    local_448.Translation.ZW.m128d_f64[0] =
         0.0 - (auVar104._0_8_ * (double)local_4d8._8_8_ + dVar14 + auVar33._0_8_);
  }
  pTVar27 = &local_1a8;
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(pTVar27,param_4,&local_448);
  uVar93 = uVar26 & local_518._0_4_;
  uVar95 = uVar15 & local_518._4_4_;
  uVar96 = uVar16 & uStack_510;
  uVar97 = uVar17 & uStack_50c;
  uVar88 = uVar26 & local_4c8._0_4_;
  uVar90 = uVar15 & local_4c8._4_4_;
  uVar91 = uVar16 & (uint)uStack_4c0;
  uVar25 = uVar17 & uStack_4c0._4_4_;
  auVar57._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < (double)CONCAT44(uVar97,uVar96));
  auVar57._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < (double)CONCAT44(uVar95,uVar93));
  uVar24 = movmskpd((int)pTVar27,auVar57);
  auVar44._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar25,uVar91));
  auVar44._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar90,uVar88));
  iVar22 = movmskpd(extraout_EAX_00,auVar44);
  if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
    local_448.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_448.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_448.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_448.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_448.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_448.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&local_3e8,&local_448);
  }
  pTVar27 = &local_2c8;
  local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(pTVar27,param_7,&local_448);
  auVar58._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < (double)CONCAT44(uVar97,uVar96));
  auVar58._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < (double)CONCAT44(uVar95,uVar93));
  uVar24 = movmskpd((int)pTVar27,auVar58);
  auVar45._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar25,uVar91));
  auVar45._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar90,uVar88));
  iVar22 = movmskpd(extraout_EAX_01,auVar45);
  if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
    local_448.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_448.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_448.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_448.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_448.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_448.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&local_3e8,&local_448);
  }
  pTVar27 = &local_148;
  local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(pTVar27,param_6,&local_448);
  auVar72._0_8_ =
       (double)CONCAT44(uVar15 & local_328.Scale3D.ZW.m128d_f64[0]._4_4_,
                        uVar26 & local_328.Scale3D.ZW.m128d_f64[0]._0_4_);
  auVar72._8_4_ = uVar16 & local_328.Scale3D.ZW.m128d_f64[1]._0_4_;
  auVar72._12_4_ = uVar17 & local_328.Scale3D.ZW.m128d_f64[1]._4_4_;
  auVar59._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar72._8_8_);
  auVar59._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar72._0_8_);
  uVar24 = movmskpd((int)pTVar27,auVar59);
  auVar73._0_8_ =
       (double)CONCAT44(uVar15 & local_328.Scale3D.XY.m128d_f64[0]._4_4_,
                        uVar26 & local_328.Scale3D.XY.m128d_f64[0]._0_4_);
  auVar73._8_4_ = uVar16 & local_328.Scale3D.XY.m128d_f64[1]._0_4_;
  auVar73._12_4_ = uVar17 & local_328.Scale3D.XY.m128d_f64[1]._4_4_;
  auVar46._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar73._8_8_);
  auVar46._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar73._0_8_);
  iVar22 = movmskpd(extraout_EAX_02,auVar46);
  if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
    local_3e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_3e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_3e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_3e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_3e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_3e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&local_328,&local_3e8);
  }
  pTVar27 = &local_448;
  local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_448.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_448.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_448.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_448.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_448.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_448.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_448.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_448.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  UE::Math::TTransform<double>::Multiply(pTVar27,&local_3e8,&local_1a8);
  dVar13 = local_448.Rotation.XY.m128d_f64[1];
  dVar31 = local_448.Rotation.XY.m128d_f64[0];
  auVar74._0_8_ =
       (double)CONCAT44(uVar15 & local_2c8.Scale3D.ZW.m128d_f64[0]._4_4_,
                        uVar26 & local_2c8.Scale3D.ZW.m128d_f64[0]._0_4_);
  auVar74._8_4_ = uVar16 & local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_;
  auVar74._12_4_ = uVar17 & local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_;
  auVar109._0_8_ =
       (double)CONCAT44(uVar15 & local_2c8.Scale3D.XY.m128d_f64[0]._4_4_,
                        uVar26 & local_2c8.Scale3D.XY.m128d_f64[0]._0_4_);
  auVar109._8_4_ = uVar16 & local_2c8.Scale3D.XY.m128d_f64[1]._0_4_;
  auVar109._12_4_ = uVar17 & local_2c8.Scale3D.XY.m128d_f64[1]._4_4_;
  auVar60._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar74._8_8_);
  auVar60._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar74._0_8_);
  uVar26 = movmskpd((int)pTVar27,auVar60);
  auVar47._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar109._8_8_);
  auVar47._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar109._0_8_);
  iVar22 = movmskpd(extraout_EAX_03,auVar47);
  if ((uVar26 & 0x3fffffff) == 0 && iVar22 == 0) {
    local_268.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_268.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_268.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_268.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_268.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_268.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&local_2c8,&local_268);
  }
  local_3e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_3e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_3e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_3e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_3e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_3e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_3e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_3e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_3e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_3e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_3e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  UE::Math::TTransform<double>::Multiply(&local_3e8,&local_268,&local_148);
  dVar61 = local_3e8.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar63 = local_3e8.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar14 = local_3e8.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar62 = local_3e8.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar87._8_4_ = SUB84(dVar61,0);
  auVar87._0_8_ = dVar61;
  auVar87._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
  auVar48._8_4_ = SUB84(dVar14,0);
  auVar48._0_8_ = dVar14;
  auVar48._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_4b8 = dVar61 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              local_448.Rotation.ZW.m128d_f64[0] * dVar62 +
              dVar31 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar14 * local_448.Rotation.ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dStack_4b0 = dVar61 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               local_448.Rotation.ZW.m128d_f64[1] * dVar62 +
               dVar13 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar14 * local_448.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uStack_4c0 = auVar87._8_8_ * local_448.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar13 * dVar62 +
               local_448.Rotation.ZW.m128d_f64[1] * dVar63 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar48._8_8_ * dVar31 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_4c8 = (undefined1  [8])
              (dVar61 * local_448.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar31 * dVar62 +
               local_448.Rotation.ZW.m128d_f64[0] * dVar63 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar14 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_4c8,(TRotator<double> *)local_518);
  fVar94 = local_528._0_4_;
  fVar76 = local_528._0_4_;
  if (fVar108 <= local_528._0_4_) {
    fVar76 = fVar108;
  }
  fVar89 = (float)local_508;
  if (fVar76 <= 0.0) {
    fVar76 = 0.0;
  }
  UKismetMathLibrary::NormalizeToRange((double)fVar76,0.0,__real_4056800000000000);
  if (__real_43340000 <= fVar94) {
    fVar94 = __real_43340000;
  }
  if (fVar94 <= fVar108) {
    fVar94 = fVar108;
  }
  UKismetMathLibrary::NormalizeToRange
            ((double)fVar94,__real_4056800000000000,__real_4066800000000000);
  if (fVar108 <= fVar107) {
    fVar89 = param_2->Twist_Offset_Reverse - fVar89;
  }
  if (local_558 == '\0') {
    dVar31 = (double)fVar89;
  }
  else if ((fVar107 < __real_42aa0000) || (___real_42e60000 < fVar107)) {
    dVar31 = (double)fVar89;
    (param_2->last_hand_rotation).Roll = dVar31;
  }
  else {
    dVar31 = (param_2->last_hand_rotation).Roll;
  }
  __return_storage_ptr__->Roll = dVar31;
  __return_storage_ptr__->Pitch = 0.0;
  __return_storage_ptr__->Yaw = 0.0;
  return __return_storage_ptr__;
}

// GetLimitedLocalRotation @ 14d348650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __cdecl
UDragonIK_Library::GetLimitedLocalRotation
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          bool *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  int iVar17;
  TQuat<double> *pTVar18;
  int iVar19;
  TQuat<double> *__return_storage_ptr___00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  TVector<double>_u_0 local_f8;
  undefined1 local_d8 [24];
  double dStack_c0;
  TQuat<double> local_b8;
  TQuat<double> local_98 [4];
  
  uVar1 = param_2->X;
  uVar3 = param_2->Y;
  dVar12 = param_2->Z;
  dVar13 = param_2->W;
  dVar14 = param_1->X;
  dVar15 = param_1->Y;
  uVar2 = param_1->Z;
  uVar4 = param_1->W;
  uVar25 = (undefined4)uVar4;
  uVar26 = (undefined4)((ulonglong)uVar4 >> 0x20);
  auVar20._8_4_ = uVar25;
  auVar20._0_8_ = uVar4;
  auVar20._12_4_ = uVar26;
  auVar21._8_4_ = (int)uVar1;
  auVar21._0_8_ = uVar3;
  auVar21._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_f8._s_0.Z = 0.0;
  dVar8 = dVar13 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          (double)uVar4 * (double)uVar1 +
          dVar15 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          (double)uVar3 * (double)uVar2 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar9 = dVar12 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar20._8_8_ * (double)uVar3 +
          dVar15 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar21._8_8_ * (double)uVar2 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar22._8_4_ = uVar25;
  auVar22._0_8_ = uVar4;
  auVar22._12_4_ = uVar26;
  local_f8._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_f8._s_0.Y = _UNK_15061cbc8;
  dVar11 = (double)uVar3 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + (double)uVar4 * dVar12 +
           dVar15 * (double)uVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar13 * (double)uVar2 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar12 = (double)uVar1 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + auVar22._8_8_ * dVar13 +
           dVar15 * (double)uVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar12 * (double)uVar2 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_d8._8_4_ = SUB84(dVar9,0);
  local_d8._0_8_ = dVar8;
  local_d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  unique0x100005a1 = SUB84(dVar12,0);
  local_d8._16_8_ = dVar11;
  unique0x100005a5 = (int)((ulonglong)dVar12 >> 0x20);
  LimitSwing(&local_b8,(TQuat<double> *)local_d8,(TVector<double> *)&local_f8._s_0,__real_43340000);
  local_f8._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_f8._s_0.Y = _UNK_15061cbc8;
  local_d8._8_8_ = _UNK_15061cbc8;
  local_d8._0_8_ = ___xmm_3ff00000000000000000000000000000;
  __return_storage_ptr___00 = &local_b8;
  local_98[0].X = local_b8.X;
  local_98[0].Y = local_b8.Y;
  local_f8._s_0.Z = 0.0;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dStack_c0;
  stack0xffffffffffffff38 = auVar16 << 0x40;
  local_98[0].Z = local_b8.Z;
  local_98[0].W = local_b8.W;
  pTVar18 = LimitTwist(__return_storage_ptr___00,local_98,(TVector<double> *)local_d8,
                       (TVector<double> *)&local_f8._s_0,0.0);
  auVar10._8_4_ = (int)-(ulonglong)(dVar12 != local_b8.W);
  auVar10._0_8_ = -(ulonglong)(dVar11 != local_b8.Z);
  auVar10._12_4_ = (int)(-(ulonglong)(dVar12 != local_b8.W) >> 0x20);
  iVar19 = movmskpd((int)__return_storage_ptr___00,auVar10);
  auVar7._8_4_ = (int)-(ulonglong)(dVar9 != local_b8.Y);
  auVar7._0_8_ = -(ulonglong)(dVar8 != local_b8.X);
  auVar7._12_4_ = (int)(-(ulonglong)(dVar9 != local_b8.Y) >> 0x20);
  iVar17 = movmskpd((int)pTVar18,auVar7);
  *param_3 = iVar19 << 2 != 0 || iVar17 != 0;
  if (iVar19 << 2 == 0 && iVar17 == 0) {
    dVar8 = param_2->Y;
    dVar9 = param_2->Z;
    dVar11 = param_2->W;
    __return_storage_ptr__->X = param_2->X;
    __return_storage_ptr__->Y = dVar8;
    __return_storage_ptr__->Z = dVar9;
    __return_storage_ptr__->W = dVar11;
  }
  else {
    auVar23._8_4_ = uVar25;
    auVar23._0_8_ = uVar4;
    auVar23._12_4_ = uVar26;
    auVar24._8_4_ = SUB84(local_b8.X,0);
    auVar24._0_8_ = local_b8.Y;
    auVar24._12_4_ = (int)((ulonglong)local_b8.X >> 0x20);
    dVar8 = local_b8.W * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            (double)uVar4 * local_b8.X +
            local_b8.Z * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            local_b8.Y * (double)uVar2 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar9 = local_b8.Z * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            auVar23._8_8_ * local_b8.Y +
            local_b8.W * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar24._8_8_ * (double)uVar2 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar11 = local_b8.Y * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             local_b8.Z * (double)uVar4 +
             dVar15 * local_b8.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             local_b8.W * (double)uVar2 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar12 = local_b8.X * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             local_b8.W * (double)uVar4 +
             dVar15 * local_b8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             local_b8.Z * (double)uVar2 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar5._8_4_ = SUB84(dVar9,0);
    auVar5._0_8_ = dVar8;
    auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    __return_storage_ptr__->X = dVar8;
    __return_storage_ptr__->Y = (double)auVar5._8_8_;
    auVar6._8_4_ = SUB84(dVar12,0);
    auVar6._0_8_ = dVar11;
    auVar6._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    __return_storage_ptr__->Z = dVar11;
    __return_storage_ptr__->W = (double)auVar6._8_8_;
  }
  return __return_storage_ptr__;
}

// GetLimitedRotation @ 14d348910

TQuat<double> * __cdecl
UDragonIK_Library::GetLimitedRotation
          (TQuat<double> *__return_storage_ptr__,
          TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1,
          TQuat<double> *param_2,int param_3,TQuat<double> *param_4,bool *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  *param_5 = false;
  dVar1 = param_4->Y;
  dVar2 = param_4->Z;
  dVar3 = param_4->W;
  __return_storage_ptr__->X = param_4->X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetParentSolverPosition @ 14d348940

TVector<double> * __cdecl
UDragonIK_Library::GetParentSolverPosition
          (TVector<double> *__return_storage_ptr__,
          TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_2 < 1) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  uVar8 = 0;
  if ((int)(param_2 - 1U) < param_1->ArrayNum) {
    uVar8 = ~(param_2 - 1U) >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar4)();
      return pTVar9;
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)param_2 * 0xa0 + -0xa0;
  dVar5 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar3 + (longlong)param_2 * 0xa0 + -0x90);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetParentSolverRotation @ 14d348a20

TQuat<double> * __cdecl
UDragonIK_Library::GetParentSolverRotation
          (TQuat<double> *__return_storage_ptr__,
          TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TQuat<double> *pTVar9;
  
  dVar6 = UE::Math::TQuat<double>::Identity.W;
  dVar5 = UE::Math::TQuat<double>::Identity.Z;
  dVar4 = UE::Math::TQuat<double>::Identity.Y;
  if (param_2 < 1) {
    __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
    __return_storage_ptr__->Y = dVar4;
    __return_storage_ptr__->Z = dVar5;
    __return_storage_ptr__->W = dVar6;
    return __return_storage_ptr__;
  }
  uVar8 = 0;
  if ((int)(param_2 - 1U) < param_1->ArrayNum) {
    uVar8 = ~(param_2 - 1U) >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TQuat<double> *)(*pcVar3)();
      return pTVar9;
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)param_2 * 0xa0 + -0x70;
  dVar4 = *(double *)(pFVar1 + 8);
  pFVar2 = pFVar2 + (longlong)param_2 * 0xa0 + -0x60;
  dVar5 = *(double *)pFVar2;
  dVar6 = *(double *)(pFVar2 + 8);
  __return_storage_ptr__->X = *(double *)pFVar1;
  __return_storage_ptr__->Y = dVar4;
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = dVar6;
  return __return_storage_ptr__;
}

// IsBonePhysicsEnabled @ 14d34b790

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UDragonIK_Library::IsBonePhysicsEnabled(USkeletalMeshComponent *param_1,FName param_2)

{
  bool bVar1;
  int iVar2;
  UPhysicsAsset *pUVar3;
  FBodyInstance *this;
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)param_1);
    if (pUVar3 != (UPhysicsAsset *)0x0) {
      iVar2 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_1,param_2);
      if (iVar2 != -1) {
        this = (FBodyInstance *)
               (**(code **)(param_1->_padding_ + 0x818))(param_1,param_2,1,0xffffffff);
        if (this != (FBodyInstance *)0x0) {
          bVar1 = FBodyInstance::IsValidBodyInstance(this);
          if (bVar1) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// LimitFabrikBoneRotations @ 14d34dc30

void __cdecl
UDragonIK_Library::LimitFabrikBoneRotations
          (TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = param_1->ArrayNum;
  while( true ) {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 2) {
      return;
    }
    uVar4 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    uVar4 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// LimitForward @ 14d34ddd0

void __cdecl
UDragonIK_Library::LimitForward
          (int param_1,int param_2,
          TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar23;
  double dVar24;
  double dVar25;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TQuat<double> local_f8 [6];
  
  uVar21 = param_3->ArrayNum - 1;
  uVar20 = (ulonglong)param_1;
  uVar16 = 0;
  if ((int)uVar21 < param_3->ArrayNum) {
    uVar16 = ~uVar21 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar14 = __real_bff0000000000000;
  dVar13 = __real_3e45798ee0000000;
  dVar12 = __real_3ff0000000000000;
  iVar17 = param_3->ArrayNum;
  if (param_1 < iVar17 + -1) {
    lVar19 = uVar20 * 0xa0;
    do {
      uVar16 = (uint)uVar20;
      uVar22 = uVar16 + 1;
      uVar21 = 0;
      if ((int)uVar22 < iVar17) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      uVar18 = ~uVar16 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar16 < param_3->ArrayNum) {
        uVar21 = uVar18;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      dVar25 = *(double *)(pFVar1 + lVar19 + 0xa0) - *(double *)(pFVar2 + lVar19);
      dVar24 = *(double *)(pFVar1 + lVar19 + 0xa8) - *(double *)(pFVar2 + lVar19 + 8);
      dVar8 = *(double *)(pFVar1 + lVar19 + 0xb0) - *(double *)(pFVar2 + lVar19 + 0x10);
      uVar21 = 0;
      if ((int)uVar16 < param_3->ArrayNum) {
        uVar21 = uVar18;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      uVar21 = 0;
      if ((int)uVar16 < param_3->ArrayNum) {
        uVar21 = uVar18;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      pFVar2 = pFVar3 + lVar19 + 0x58;
      local_118._s_0.X = (double)*(undefined8 *)pFVar2;
      local_118._s_0.Y = (double)*(undefined8 *)(pFVar2 + 8);
      local_118._s_0.Z = (double)*(undefined8 *)(pFVar3 + lVar19 + 0x68);
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)(pFVar1 + lVar19 + 0x30),(TVector<double> *)&local_130._s_0,
                 (TVector<double> *)&local_118._s_0);
      dVar5 = local_130._s_0.Y * dVar8 - local_130._s_0.Z * dVar24;
      dVar6 = local_130._s_0.Z * dVar25 - local_130._s_0.X * dVar8;
      dVar7 = local_130._s_0.X * dVar24 - local_130._s_0.Y * dVar25;
      dVar23 = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7;
      uVar9 = dVar5;
      uVar10 = dVar6;
      uVar11 = dVar7;
      if ((dVar23 != dVar12) &&
         (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar13 <= dVar23)) {
        dVar23 = dVar12 / SQRT(dVar23);
        uVar9 = dVar5 * dVar23;
        uVar10 = dVar6 * dVar23;
        uVar11 = dVar7 * dVar23;
      }
      dVar24 = local_130._s_0.X * dVar25 + local_130._s_0.Y * dVar24 + local_130._s_0.Z * dVar8;
      dVar25 = dVar14;
      if ((dVar14 <= dVar24) && (dVar25 = dVar24, dVar12 <= dVar24)) {
        dVar25 = dVar12;
      }
      acos(dVar25);
      __libm_sse2_sincos_();
      local_f8[0].X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)uVar9;
      local_f8[0].Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)uVar10;
      local_f8[0].Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)uVar11;
      SolverRotate(param_3,uVar16,local_f8,false);
      iVar17 = param_3->ArrayNum;
      lVar19 = lVar19 + 0xa0;
      uVar20 = (ulonglong)uVar22;
    } while ((int)uVar22 < iVar17 + -1);
  }
  uVar16 = 0;
  if (param_2 < iVar17) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar16 = 0;
  if (param_2 < param_3->ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// LimitRotation @ 14d34e360

TQuat<double> * __cdecl
UDragonIK_Library::LimitRotation
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4,float param_5)

{
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  double dStack_50;
  TQuat<double> local_48;
  TQuat<double> local_28;
  
  local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_68._s_0.X = param_1->X;
  local_68._s_0.Y = param_1->Y;
  local_68._s_0.Z = param_1->Z;
  dStack_50 = param_1->W;
  LimitSwing(&local_48,(TQuat<double> *)&local_68._s_0,(TVector<double> *)&local_88._s_0,param_4);
  local_88._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_88._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_68._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_68._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_28.X = local_48.X;
  local_28.Y = local_48.Y;
  local_28.Z = local_48.Z;
  local_28.W = local_48.W;
  LimitTwist(__return_storage_ptr__,&local_28,(TVector<double> *)&local_68._s_0,
             (TVector<double> *)&local_88._s_0,param_5);
  return __return_storage_ptr__;
}

// LimitSwing @ 14d34e450

TQuat<double> * __cdecl
UDragonIK_Library::LimitSwing
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TVector<double> *param_2,
          float param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  TVector<double>_u_0 local_128;
  double local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  TQuat<double> local_c8 [6];
  
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  dVar8 = UE::Math::TQuat<double>::Identity.Z;
  dVar5 = UE::Math::TQuat<double>::Identity.Y;
  dVar1 = UE::Math::TQuat<double>::Identity.X;
  if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X != (param_2->field0_0x0)._s_0.X) ||
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y != (param_2->field0_0x0)._s_0.Y)) ||
     (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z != (param_2->field0_0x0)._s_0.Z)) {
    lVar13 = -(ulonglong)(param_1->W == UE::Math::TQuat<double>::Identity.W);
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)(param_1->Z == UE::Math::TQuat<double>::Identity.Z);
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar12 = movmskpd((int)__return_storage_ptr__,auVar2);
    lVar13 = -(ulonglong)(param_1->Y == UE::Math::TQuat<double>::Identity.Y);
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)(param_1->X == UE::Math::TQuat<double>::Identity.X);
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar11 = movmskpd((int)&stack0x00000000,auVar3);
    if (((iVar12 << 2 | uVar11) != 0xf) && (param_3 < __real_43340000)) {
      local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                (param_1,(TVector<double> *)&local_128._s_0,(TVector<double> *)&local_108._s_0);
      dVar14 = __real_3ff0000000000000;
      local_108._s_0.Z = __real_3ff0000000000000;
      local_108._s_0.X = 0.0;
      local_108._s_0.Y = 0.0;
      local_e8._s_0.X = local_128._s_0.X;
      local_e8._s_0.Y = local_128._s_0.Y;
      local_e8._s_0.Z = local_128._s_0.Z;
      local_128._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_128._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_128._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      SafeFromToRotation(local_c8,(TVector<double> *)&local_128._s_0,
                         (TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_108._s_0);
      local_e8._s_0.X = local_c8[0].X;
      local_e8._s_0.Y = local_c8[0].Y;
      local_e8._s_0.Z = local_c8[0].Z;
      dStack_d0 = local_c8[0].W;
      local_c8[0].X = dVar1;
      local_c8[0].Y = dVar5;
      local_c8[0].Z = dVar8;
      local_c8[0].W = dVar7;
      UnityRotateTowards((TQuat<double> *)&local_128._s_0,local_c8,(TQuat<double> *)&local_e8._s_0,
                         param_3);
      dVar7 = (param_2->field0_0x0)._s_0.X;
      dVar9 = (param_2->field0_0x0)._s_0.Y;
      dVar1 = (param_2->field0_0x0)._s_0.Z;
      dVar8 = dVar1 * local_128._s_0.Y - dVar9 * local_128._s_0.Z;
      local_e8._s_0.Z = dVar14;
      dVar8 = dVar8 + dVar8;
      dVar5 = dVar7 * local_128._s_0.Z - dVar1 * local_128._s_0.X;
      dVar5 = dVar5 + dVar5;
      dVar14 = dVar9 * local_128._s_0.X - dVar7 * local_128._s_0.Y;
      local_e8._s_0.X = 0.0;
      local_e8._s_0.Y = 0.0;
      dVar14 = dVar14 + dVar14;
      local_108._s_0.X =
           (local_128._s_0.Y * dVar14 - local_128._s_0.Z * dVar5) + local_110 * dVar8 + dVar7;
      local_108._s_0.Y =
           (local_128._s_0.Z * dVar8 - local_128._s_0.X * dVar14) + local_110 * dVar5 + dVar9;
      local_108._s_0.Z =
           (local_128._s_0.X * dVar5 - local_128._s_0.Y * dVar8) + local_110 * dVar14 + dVar1;
      SafeFromToRotation(local_c8,(TVector<double> *)&local_128._s_0,
                         (TVector<double> *)&local_108._s_0,(TVector<double> *)&local_e8._s_0);
      dVar7 = param_1->Z;
      dVar9 = param_1->W;
      dVar14 = param_1->X;
      dVar10 = param_1->Y;
      dVar1 = local_c8[0].X * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar14 * local_c8[0].W +
              dVar7 * local_c8[0].Y *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              local_c8[0].Z * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar5 = local_c8[0].X * dVar7 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar10 * local_c8[0].W +
              dVar9 * local_c8[0].Y *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              local_c8[0].Z * dVar14 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar8 = local_c8[0].X * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar7 * local_c8[0].W +
              dVar14 * local_c8[0].Y *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              local_c8[0].Z * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar7 = local_c8[0].X * dVar14 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar9 * local_c8[0].W +
              dVar10 * local_c8[0].Y *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              local_c8[0].Z * dVar7 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = dVar1;
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      __return_storage_ptr__->X = dVar1;
      __return_storage_ptr__->Y = (double)auVar4._8_8_;
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar8;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      __return_storage_ptr__->Z = dVar8;
      __return_storage_ptr__->W = (double)auVar6._8_8_;
      return __return_storage_ptr__;
    }
  }
  dVar1 = param_1->Y;
  dVar5 = param_1->Z;
  dVar8 = param_1->W;
  __return_storage_ptr__->X = param_1->X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = dVar8;
  return __return_storage_ptr__;
}

// LimitTwist @ 14d34e860

TQuat<double> * __cdecl
UDragonIK_Library::LimitTwist
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TQuat<double> *pTVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  TVector<double>_u_0 local_f8;
  undefined1 local_d8 [32];
  TVector<double>_u_0 local_b8;
  double dStack_a0;
  TVector<double>_u_0 local_98 [6];
  
  if (__real_43340000 <= param_4) {
    param_4 = __real_43340000;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  if (param_4 < __real_43340000) {
    local_98[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
    local_98[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
    local_98[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (param_1,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_98[0]._s_0);
    local_f8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_f8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_f8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    OrthoNormalize((TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_f8._s_0);
    local_d8._0_8_ = (param_3->field0_0x0)._s_0.X;
    local_d8._8_8_ = (param_3->field0_0x0)._s_0.Y;
    local_d8._16_8_ = (param_3->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (param_1,(TVector<double> *)&local_98[0]._s_0,(TVector<double> *)local_d8);
    OrthoNormalize((TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_98[0]._s_0);
    local_b8._s_0.Z = __real_3ff0000000000000;
    local_b8._s_0.X = 0.0;
    local_b8._s_0.Y = 0.0;
    local_d8._16_8_ = local_f8._s_0.Z;
    local_d8._8_8_ = local_f8._s_0.Y;
    local_d8._0_8_ = local_f8._s_0.X;
    local_f8._s_0.Z = (double)local_98[0]._16_8_;
    local_f8._s_0.X = (double)local_98[0]._0_8_;
    local_f8._s_0.Y = (double)local_98[0]._8_8_;
    pTVar11 = SafeFromToRotation((TQuat<double> *)&local_98[0]._s_0,
                                 (TVector<double> *)&local_f8._s_0,(TVector<double> *)local_d8,
                                 (TVector<double> *)&local_b8._s_0);
    local_b8._s_0.Z = param_1->Z;
    dStack_a0 = param_1->W;
    dVar2 = param_1->X;
    dVar6 = param_1->Y;
    dVar7 = pTVar11->X;
    dVar8 = pTVar11->Y;
    dVar9 = pTVar11->Z;
    dVar10 = pTVar11->W;
    dVar4 = dVar7 * dStack_a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar10 * dVar2 +
            local_b8._s_0.Z * dVar8 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar5 = dVar7 * local_b8._s_0.Z *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar10 * dVar6 +
            dStack_a0 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar2 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar14 = SUB84(dVar5,0);
    uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar5 = dVar7 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar10 * local_b8._s_0.Z +
            dVar2 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dStack_a0 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar2 = dVar7 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar10 * dStack_a0 +
            dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            local_b8._s_0.Z * dVar9 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar12 = SUB84(dVar2,0);
    uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (0.0 < param_4) {
      local_b8._s_0.X = param_1->X;
      local_b8._s_0.Y = param_1->Y;
      local_d8._8_4_ = uVar14;
      local_d8._0_8_ = dVar4;
      local_d8._12_4_ = uVar15;
      local_d8._24_4_ = uVar12;
      local_d8._16_8_ = dVar5;
      local_d8._28_4_ = uVar13;
      UnityRotateTowards(__return_storage_ptr__,(TQuat<double> *)local_d8,
                         (TQuat<double> *)&local_b8._s_0,param_4);
    }
    else {
      auVar3._8_4_ = uVar14;
      auVar3._0_8_ = dVar4;
      auVar3._12_4_ = uVar15;
      __return_storage_ptr__->X = dVar4;
      __return_storage_ptr__->Y = (double)auVar3._8_8_;
      auVar1._8_4_ = uVar12;
      auVar1._0_8_ = dVar5;
      auVar1._12_4_ = uVar13;
      __return_storage_ptr__->Z = dVar5;
      __return_storage_ptr__->W = (double)auVar1._8_8_;
    }
  }
  else {
    dVar5 = param_1->Y;
    dVar2 = param_1->Z;
    dVar4 = param_1->W;
    __return_storage_ptr__->X = param_1->X;
    __return_storage_ptr__->Y = dVar5;
    __return_storage_ptr__->Z = dVar2;
    __return_storage_ptr__->W = dVar4;
  }
  return __return_storage_ptr__;
}

// LookAtRotation_V3 @ 14d34ece0

TRotator<double> * __cdecl
UDragonIK_Library::LookAtRotation_V3
          (TRotator<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  TMatrix<double> local_1a8;
  TRotator<double> local_120;
  TQuat<double> local_108;
  TTransform<double> local_e8 [2];
  
  local_1a8.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_1a8.M[0][0] = (param_2->field0_0x0)._s_0.X - local_1a8.M[3][0];
  local_1a8.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_1a8.M[0][1] = (param_2->field0_0x0)._s_0.Y - local_1a8.M[3][1];
  local_1a8.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_1a8.M[0][2] = (param_2->field0_0x0)._s_0.Z - local_1a8.M[3][2];
  dVar21 = local_1a8.M[0][1] * local_1a8.M[0][1] + local_1a8.M[0][0] * local_1a8.M[0][0] +
           local_1a8.M[0][2] * local_1a8.M[0][2];
  if (__real_3e45798ee0000000 < dVar21) {
    dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
    local_1a8.M[0][0] = local_1a8.M[0][0] * dVar21;
    local_1a8.M[0][1] = local_1a8.M[0][1] * dVar21;
    local_1a8.M[0][2] = local_1a8.M[0][2] * dVar21;
  }
  dVar21 = (param_3->field0_0x0)._s_0.Z;
  dVar15 = (param_3->field0_0x0)._s_0.X;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  local_1a8.M[1][0] = dVar21 * local_1a8.M[0][1] - dVar1 * local_1a8.M[0][2];
  local_1a8.M[1][1] = dVar15 * local_1a8.M[0][2] - dVar21 * local_1a8.M[0][0];
  local_1a8.M[1][2] = dVar1 * local_1a8.M[0][0] - dVar15 * local_1a8.M[0][1];
  local_1a8.M[0][3] = 0.0;
  local_1a8.M[1][3] = 0.0;
  local_1a8.M[2][2] = local_1a8.M[0][1] * local_1a8.M[1][0] - local_1a8.M[0][0] * local_1a8.M[1][1];
  local_1a8.M[2][0] = local_1a8.M[0][2] * local_1a8.M[1][1] - local_1a8.M[0][1] * local_1a8.M[1][2];
  local_1a8.M[2][1] = local_1a8.M[0][0] * local_1a8.M[1][2] - local_1a8.M[0][2] * local_1a8.M[1][0];
  local_1a8.M[2][3] = 0.0;
  local_1a8.M[3][3] = __real_3ff0000000000000;
  UE::Math::TTransform<double>::SetFromMatrix(local_e8,&local_1a8);
  local_108.X = local_e8[0].Rotation.XY.m128d_f64[0];
  local_108.Y = local_e8[0].Rotation.XY.m128d_f64[1];
  local_108.Z = local_e8[0].Rotation.ZW.m128d_f64[0];
  local_108.W = local_e8[0].Rotation.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_108,&local_120);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_120.Roll;
  __return_storage_ptr__->Pitch = local_120.Pitch;
  __return_storage_ptr__->Yaw = local_120.Yaw;
  __return_storage_ptr__->Roll = local_120.Roll;
  auVar18._0_8_ = __return_storage_ptr__->Pitch;
  auVar18._8_8_ = __return_storage_ptr__->Yaw;
  auVar10 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar10 = roundpd(auVar16,auVar10,3);
  dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar17._0_8_ = auVar10._0_8_ * dVar3;
  dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar17._8_8_ = auVar10._8_8_ * dVar4;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_120.Roll;
  auVar10 = divpd(auVar11,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar21 = (double)auVar18._0_8_ - auVar17._0_8_;
  dVar15 = (double)auVar18._8_8_ - auVar17._8_8_;
  auVar18 = roundpd(auVar17,auVar10,3);
  dVar1 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar12._8_4_ = SUB84(dVar15,0);
  auVar12._0_8_ = dVar21;
  auVar12._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_120.Roll = local_120.Roll - auVar18._0_8_ * dVar1;
  dVar2 = 0.0 - auVar18._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar5 = -(ulonglong)(0.0 <= dVar21);
  uVar7 = -(ulonglong)(0.0 <= dVar15);
  auVar19._0_8_ = uVar5 & (ulonglong)dVar21;
  auVar19._8_4_ = (undefined4)(uVar7 & (ulonglong)dVar15);
  auVar19._12_4_ = (undefined4)((uVar7 & (ulonglong)dVar15) >> 0x20);
  dVar15 = auVar12._8_8_ + dVar4;
  uVar6 = -(ulonglong)(0.0 <= local_120.Roll);
  uVar8 = -(ulonglong)(0.0 <= dVar2);
  auVar23._0_4_ = ~(uint)uVar5 & SUB84(dVar21 + dVar3,0);
  auVar23._4_4_ = ~(uint)(uVar5 >> 0x20) & (uint)((ulonglong)(dVar21 + dVar3) >> 0x20);
  auVar23._8_4_ = ~(uint)uVar7 & SUB84(dVar15,0);
  auVar23._12_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
  auVar23 = auVar23 | auVar19;
  auVar22._0_8_ = (ulonglong)local_120.Roll & uVar6;
  auVar22._8_4_ = (undefined4)(uVar8 & (ulonglong)dVar2);
  auVar22._12_4_ = (undefined4)((uVar8 & (ulonglong)dVar2) >> 0x20);
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = local_120.Roll;
  auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar21 = auVar13._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar23._0_8_);
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar23._8_8_);
  auVar20._0_4_ = ~(uint)uVar6 & SUB84(local_120.Roll + dVar1,0);
  auVar20._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(local_120.Roll + dVar1) >> 0x20);
  auVar20._8_4_ = ~(uint)uVar8 & SUB84(dVar21,0);
  auVar20._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar21 >> 0x20);
  auVar20 = auVar20 | auVar22;
  uVar6 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar20._0_8_);
  auVar14._0_8_ = uVar7 & (ulonglong)(auVar23._0_8_ - dVar3);
  uVar5 = uVar9 & (ulonglong)(auVar23._8_8_ - dVar4);
  auVar14._8_4_ = (undefined4)uVar5;
  auVar14._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar10._4_4_ = ~(uint)(uVar7 >> 0x20) & auVar23._4_4_;
  auVar10._0_4_ = ~(uint)uVar7 & auVar23._0_4_;
  auVar10._8_4_ = ~(uint)uVar9 & auVar23._8_4_;
  auVar10._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar23._12_4_;
  __return_storage_ptr__->Pitch = (double)SUB168(auVar14 | auVar10,0);
  __return_storage_ptr__->Yaw = (double)SUB168(auVar14 | auVar10,8);
  __return_storage_ptr__->Roll =
       (double)(uVar6 & (ulonglong)(auVar20._0_8_ - dVar1) |
               CONCAT44(~(uint)(uVar6 >> 0x20) & auVar20._4_4_,~(uint)uVar6 & auVar20._0_4_));
  return __return_storage_ptr__;
}

// LookAtVector_V2 @ 14d34efc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRotator<double> * __cdecl
UDragonIK_Library::LookAtVector_V2
          (TRotator<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  TMatrix<double> *this;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  local_b8._8_4_ = SUB84(dVar1,0);
  local_b8._0_8_ = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  local_b8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  this = UE::Math::TRotationMatrix<double>::MakeFromXZ
                   (&local_98,(TVector<double> *)&local_b8._s_0,param_3);
  UE::Math::TMatrix<double>::Rotator(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// LookAt_Fabrik_Processor @ 14d34f040

TVector<double> * __cdecl
UDragonIK_Library::LookAt_Fabrik_Processor
          (TVector<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  
  dVar5 = __real_3e45798ee0000000;
  dVar4 = __real_3ff0000000000000;
  auVar21 = *(undefined1 (*) [16])&param_3->field0_0x0;
  dVar9 = (param_3->field0_0x0)._s_0.Z;
  dVar12 = (param_1->Rotation).ZW.m128d_f64[1];
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar10 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar14 = blendpd(auVar10,auVar11,2);
  dVar18 = auVar21._8_8_;
  dVar3 = auVar11._0_8_;
  auVar25._0_8_ = dVar18 * auVar10._0_8_ - auVar10._8_8_ * auVar21._0_8_;
  auVar25._8_8_ = dVar9 * auVar10._8_8_ - dVar3 * dVar18;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar9;
  auVar10 = blendpd(auVar21,auVar10,2);
  auVar15._0_8_ = auVar10._0_8_ * dVar3 - auVar14._0_8_ * dVar9;
  auVar15._8_8_ = auVar10._8_8_ * auVar11._8_8_ - auVar14._8_8_ * 0.0;
  auVar10 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar14 = blendpd(auVar25,auVar15,2);
  dVar2 = auVar25._8_8_ + auVar25._8_8_;
  dVar13 = auVar15._0_8_ + auVar15._0_8_;
  uVar22 = (undefined4)((ulonglong)dVar13 >> 0x20);
  auVar26._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar26._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  auVar19._8_4_ = SUB84(dVar13,0);
  auVar19._0_8_ = dVar2;
  auVar19._12_4_ = uVar22;
  auVar14._8_4_ = SUB84(dVar13,0);
  auVar14._0_8_ = dVar2;
  auVar14._12_4_ = uVar22;
  auVar14 = blendpd(auVar14,auVar26,2);
  auVar15 = blendpd(auVar10,auVar11,2);
  auVar20._0_8_ = auVar19._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar2;
  auVar20._8_8_ = auVar26._0_8_ * auVar10._8_8_ - dVar3 * dVar13;
  dVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  auVar17._0_8_ = auVar14._0_8_ * dVar3 - auVar15._0_8_ * auVar26._0_8_;
  auVar17._8_8_ = auVar14._8_8_ * auVar11._8_8_ - auVar15._8_8_ * auVar26._8_8_;
  auVar11._8_4_ = SUB84(auVar20._8_8_,0);
  auVar11._0_8_ = auVar20._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
  dVar3 = dVar2 * dVar12 + auVar21._0_8_ + auVar11._8_8_;
  dVar2 = dVar13 * dVar12 + dVar18 + auVar17._0_8_;
  auVar21 = blendpd(auVar20,auVar17,2);
  uVar24 = auVar26._0_8_ * dVar12 + dVar9 + auVar21._0_8_;
  dVar9 = dVar2 * dVar2 + dVar3 * dVar3 + (double)uVar24 * (double)uVar24;
  if (dVar9 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
      dVar3 = dVar3 * dVar9;
      dVar2 = dVar2 * dVar9;
      uVar24 = (double)uVar24 * dVar9;
    }
    else {
      dVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar3 = dVar16;
    }
  }
  dVar13 = (param_1->Translation).XY.m128d_f64[0] - (param_2->field0_0x0)._s_0.X;
  dVar9 = (param_1->Translation).ZW.m128d_f64[0] - (param_2->field0_0x0)._s_0.Z;
  dVar18 = (param_1->Translation).XY.m128d_f64[1] - (param_2->field0_0x0)._s_0.Y;
  dVar12 = dVar18 * dVar18 + dVar13 * dVar13 + dVar9 * dVar9;
  if (dVar12 != __real_3ff0000000000000) {
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (dVar12 < __real_3e45798ee0000000) goto LAB_14d34f33b;
    dVar16 = __real_3ff0000000000000 / SQRT(dVar12);
    dVar13 = dVar13 * dVar16;
    dVar18 = dVar18 * dVar16;
    dVar9 = dVar16 * dVar9;
  }
  uVar22 = SUB84(dVar18,0);
  uVar23 = (undefined4)((ulonglong)dVar18 >> 0x20);
  dVar16 = dVar13;
  uVar8 = dVar9;
LAB_14d34f33b:
  if (__real_43340000 <= param_4) {
    param_4 = __real_43340000;
  }
  auVar21._8_4_ = uVar22;
  auVar21._0_8_ = dVar16;
  auVar21._12_4_ = uVar23;
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar21;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar8;
  fVar27 = param_4 * __real_3c8efa35;
  dVar13 = dVar3 * (__return_storage_ptr__->field0_0x0)._s_0.X +
           dVar2 * (__return_storage_ptr__->field0_0x0)._s_0.Y +
           (double)uVar24 * (__return_storage_ptr__->field0_0x0)._s_0.Z;
  dVar9 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar13) && (dVar9 = dVar13, dVar4 <= dVar13)) {
    dVar9 = dVar4;
  }
  dVar9 = acos(dVar9);
  fVar28 = (float)dVar9;
  if (fVar27 < fVar28) {
    if ((fVar28 <= 0.0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DiffAngle_Forward > 0.f",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\DragonIK_Library.cpp"
                           ,0xa72,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar1)();
      return pTVar7;
    }
    dVar9 = (double)(fVar27 / fVar28);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((__return_storage_ptr__->field0_0x0)._s_0.X - dVar3) * dVar9 + dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((__return_storage_ptr__->field0_0x0)._s_0.Y - dVar2) * dVar9 + dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((__return_storage_ptr__->field0_0x0)._s_0.Z - (double)uVar24) * dVar9 + (double)uVar24;
    UE::Math::TVector<double>::Normalize(__return_storage_ptr__,dVar5);
  }
  return __return_storage_ptr__;
}

// LookAt_Function @ 14d34f470

TRotator<double> * __cdecl
UDragonIK_Library::LookAt_Function
          (TRotator<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->Translation).XY.m128d_f64[0];
  local_38[0]._16_8_ = (param_2->field0_0x0)._s_0.Z - (param_1->Translation).ZW.m128d_f64[0];
  local_38[0]._8_8_ = (param_2->field0_0x0)._s_0.Y - (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (double)local_38[0]._8_8_ * (double)local_38[0]._8_8_ + dVar2 * dVar2 +
          (double)local_38[0]._16_8_ * (double)local_38[0]._16_8_;
  if (dVar1 != __real_3ff0000000000000) {
    if (dVar1 < __real_3e45798ee0000000) {
      local_38[0]._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_38[0]._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_38[0]._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      local_38[0]._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14d34f525;
    }
    dVar1 = __real_3ff0000000000000 / SQRT(dVar1);
    dVar2 = dVar2 * dVar1;
    local_38[0]._8_8_ = (double)local_38[0]._8_8_ * dVar1;
    local_38[0]._16_8_ = dVar1 * (double)local_38[0]._16_8_;
  }
  local_38[0]._0_4_ = SUB84(dVar2,0);
  local_38[0]._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
LAB_14d34f525:
  local_58._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_58._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  CustomLookRotation(__return_storage_ptr__,(TVector<double> *)&local_38[0]._s_0,
                     (TVector<double> *)&local_58._s_0);
  return __return_storage_ptr__;
}

// LookAt_Processor @ 14d34f570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UDragonIK_Library::LookAt_Processor
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,FAxis *param_4,float param_5,
          TRotator<double> *param_6,bool param_7,float param_8,float param_9)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  bool bVar26;
  TVector<double> *pTVar27;
  TTransform<double> *pTVar28;
  TMatrix<double> *pTVar29;
  TQuat<double> *pTVar30;
  TQuat<double> *pTVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  float fVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  float fVar65;
  undefined1 auStack_428 [32];
  TVector<double>_u_0 local_408;
  float local_3f0;
  float local_3ec;
  TRotator<double> local_3e8;
  TVector<double>_u_0 local_3d0;
  TVector<double>_u_0 local_3b8;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  TVector<double>_u_0 local_378;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  double local_338;
  TVector<double>_u_0 local_330;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  TRotator<double> local_2e8;
  TRotator<double> local_2d0;
  TQuat<double> local_2b8;
  TVector<double> local_298;
  TQuat<double> local_278;
  TQuat<double> local_258;
  TQuat<double> local_238;
  TQuat<double> local_218;
  TQuat<double> local_1f8;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_428;
  auVar49 = *(undefined1 (*) [16])&param_3->field0_0x0;
  uVar58 = auVar49._8_4_;
  uVar59 = auVar49._12_4_;
  local_3ec = param_9;
  local_3d0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  pTVar27 = FAxis::GetTransformedAxis(param_4,&local_298,param_1);
  dVar53 = __real_3ff0000000000000;
  dVar34 = (pTVar27->field0_0x0)._s_0.X;
  dVar47 = (pTVar27->field0_0x0)._s_0.Y;
  dVar1 = (pTVar27->field0_0x0)._s_0.Z;
  local_358 = SUB84(__real_3e45798ee0000000,0);
  uStack_354 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  uStack_350 = 0;
  dVar50 = dVar47 * dVar47 + dVar34 * dVar34 + dVar1 * dVar1;
  if (dVar50 == __real_3ff0000000000000) {
    local_408._s_0.X = (pTVar27->field0_0x0)._s_0.X;
    local_408._s_0.Y = (pTVar27->field0_0x0)._s_0.Y;
    local_408._s_0.Z = (pTVar27->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar50) {
    local_318 = __real_3ff0000000000000 / SQRT(dVar50);
    local_408._s_0.X = dVar34 * local_318;
    local_408._s_0.Y = dVar47 * local_318;
    local_408._s_0.Z = dVar1 * local_318;
  }
  else {
    local_408._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_408._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_408._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  uVar16 = local_408._s_0.Z;
  uVar18 = local_408._s_0.Y;
  uVar17 = local_408._s_0.X;
  dVar34 = (param_2->field0_0x0)._s_0.X;
  dVar47 = (param_2->field0_0x0)._s_0.Y;
  uVar12 = auVar49._0_8_ - dVar34;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  uVar14 = auVar49._8_8_ - dVar47;
  uVar11 = local_3d0._s_0.Z - dVar1;
  dVar50 = (double)uVar14 * (double)uVar14 + (double)uVar12 * (double)uVar12 +
           (double)uVar11 * (double)uVar11;
  if (dVar50 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar50) {
      local_310 = __real_3ff0000000000000 / SQRT(dVar50);
      uVar12 = (double)uVar12 * local_310;
      uVar14 = (double)uVar14 * local_310;
      uVar11 = (double)uVar11 * local_310;
    }
    else {
      uVar58 = 0;
      uVar59 = 0;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  dVar1 = dVar1 - local_3d0._s_0.Z;
  dVar47 = dVar47 - auVar49._8_8_;
  dVar34 = dVar34 - (param_3->field0_0x0)._s_0.X;
  auVar49._0_8_ = dVar47 * dVar47 + dVar34 * dVar34 + dVar1 * dVar1;
  auVar49._8_8_ = 0.0;
  uVar19 = dVar1;
  uVar20 = dVar34;
  if ((auVar49._0_8_ != __real_3ff0000000000000) &&
     (uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= auVar49._0_8_)) {
    local_308 = __real_3ff0000000000000 / SQRT(auVar49._0_8_);
    uVar19 = dVar1 * local_308;
    uVar20 = dVar34 * local_308;
  }
  fVar65 = param_5;
  if (__real_43340000 <= param_5) {
    fVar65 = __real_43340000;
  }
  fVar65 = fVar65 * __real_3c8efa35;
  dVar47 = (double)uVar19 * local_408._s_0.Z + (double)uVar20 * local_408._s_0.X;
  dVar34 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar47) && (dVar34 = dVar47, __real_3ff0000000000000 <= dVar47)) {
    dVar34 = __real_3ff0000000000000;
  }
  local_338 = (double)uVar11;
  dVar34 = acos(dVar34);
  local_3f0 = (float)dVar34;
  if (fVar65 < local_3f0) {
    if ((local_3f0 <= 0.0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("DiffAngle > 0.f",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\DragonIK_Library.cpp"
                            ,0xaaf,L""), uVar16 = local_408._s_0.Z, uVar17 = local_408._s_0.X,
       uVar18 = local_408._s_0.Y, bVar26)) {
      pcVar10 = (code *)swi(3);
      pTVar28 = (TTransform<double> *)(*pcVar10)();
      return pTVar28;
    }
    dVar34 = (double)(fVar65 / local_3f0);
    dVar47 = ((double)uVar20 - (double)uVar17) * dVar34 + (double)uVar17;
    dVar1 = ((double)uVar19 - (double)uVar16) * dVar34 + (double)uVar16;
    dVar34 = (dVar53 - dVar34 * dVar53) * (double)uVar18;
    dVar34 = dVar34 * dVar34 + dVar47 * dVar47 + dVar1 * dVar1;
    if ((double)CONCAT44(uStack_354,local_358) <= dVar34 &&
        dVar34 != (double)CONCAT44(uStack_354,local_358)) {
      local_300 = dVar53 / SQRT(dVar34);
    }
  }
  dVar34 = (double)uVar14 * (double)uVar18 + (double)uVar12 * (double)uVar17 +
           (double)uVar11 * (double)uVar16;
  dVar47 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar34) && (dVar47 = dVar34, dVar53 <= dVar34)) {
    dVar47 = dVar53;
  }
  dVar34 = acos(dVar47);
  fVar60 = (float)dVar34;
  if (fVar65 < fVar60) {
    if ((fVar60 <= __real_00000000) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("DiffAngle_Forward > 0.f",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\DragonIK_Library.cpp"
                            ,0xabe,L""), uVar16 = local_408._s_0.Z, uVar17 = local_408._s_0.X,
       uVar18 = local_408._s_0.Y, bVar26)) {
      pcVar10 = (code *)swi(3);
      pTVar28 = (TTransform<double> *)(*pcVar10)();
      return pTVar28;
    }
    dVar34 = (double)(fVar65 / fVar60);
    uVar14 = ((double)uVar14 - (double)uVar18) * dVar34 + (double)uVar18;
    uVar11 = ((double)uVar11 - (double)uVar16) * dVar34 + (double)uVar16;
    uVar12 = ((double)uVar12 - (double)uVar17) * dVar34 + (double)uVar17;
    auVar49._8_4_ = uVar58;
    auVar49._0_8_ = (double)uVar12;
    auVar49._12_4_ = uVar59;
    dVar34 = (double)uVar14 * (double)uVar14 + (double)uVar12 * (double)uVar12 +
             (double)uVar11 * (double)uVar11;
    if ((double)CONCAT44(uStack_354,local_358) < dVar34) {
      dVar53 = dVar53 / SQRT(dVar34);
      uVar12 = dVar53 * (double)uVar12;
      uVar14 = dVar53 * (double)uVar14;
      uVar11 = dVar53 * (double)uVar11;
    }
  }
  uVar59 = uStack_354;
  uVar58 = local_358;
  local_378._s_0.Z = (double)param_8 * (double)uVar11;
  local_378._8_4_ = (int)uVar14;
  local_378._0_8_ = uVar12;
  local_378._12_4_ = (int)((ulonglong)uVar14 >> 0x20);
  UE::Math::TQuat<double>::FindBetweenNormals
            ((TQuat<double> *)local_398,(TVector<double> *)&local_408._s_0,
             (TVector<double> *)&local_378._s_0);
  dVar47 = _UNK_1512468d8;
  dVar34 = ___xmm_40590000000000004059000000000000;
  if (!param_7) {
    local_330._s_0.X = local_378._s_0.X * ___xmm_40590000000000004059000000000000;
    local_330._s_0.Y = local_378._s_0.Y * _UNK_1512468d8;
    local_330._s_0.Z = local_378._s_0.Z * ___xmm_40590000000000004059000000000000;
    pTVar29 = UE::Math::TRotationMatrix<double>::MakeFromX
                        (&local_1d8,(TVector<double> *)&local_330._s_0);
    UE::Math::TMatrix<double>::Rotator(pTVar29,&local_2e8);
    local_3d0._s_0.X = local_408._s_0.X * dVar34;
    local_3d0._s_0.Y = local_408._s_0.Y * dVar47;
    local_3d0._s_0.Z = local_408._s_0.Z * dVar34;
    pTVar29 = UE::Math::TRotationMatrix<double>::MakeFromX
                        (&local_158,(TVector<double> *)&local_3d0._s_0);
    UE::Math::TMatrix<double>::Rotator(pTVar29,&local_2d0);
    pTVar30 = UE::Math::TRotator<double>::Quaternion(&local_2e8,&local_278);
    pTVar31 = UE::Math::TRotator<double>::Quaternion(&local_2d0,&local_258);
    uVar2 = pTVar30->X;
    uVar6 = pTVar30->Y;
    uVar3 = pTVar30->Z;
    uVar7 = pTVar30->W;
    dVar34 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * pTVar31->X;
    dVar47 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] * pTVar31->Y;
    dVar50 = pTVar31->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar53 = pTVar31->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar48._8_4_ = (int)uVar2;
    auVar48._0_8_ = uVar2;
    auVar48._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    auVar51._8_4_ = (int)uVar7;
    auVar51._0_8_ = uVar7;
    auVar51._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
    auVar40._8_4_ = (int)uVar6;
    auVar40._0_8_ = uVar6;
    auVar40._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
    auVar35._8_4_ = (int)uVar3;
    auVar35._0_8_ = uVar3;
    auVar35._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
    auVar49._0_8_ =
         (double)uVar2 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         (double)uVar7 * dVar34 +
         (double)uVar6 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         (double)uVar3 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar49._8_8_ =
         auVar48._8_8_ * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
         auVar51._8_8_ * dVar47 +
         auVar40._8_8_ * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
         auVar35._8_8_ * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar1 = (double)uVar2 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
            + (double)uVar7 * dVar53 +
            (double)uVar6 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
            + (double)uVar3 * dVar50 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_388._8_4_ = SUB84(dVar1,0);
    local_388._0_8_ =
         (double)uVar2 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         (double)uVar7 * dVar50 +
         (double)uVar6 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         (double)uVar3 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_388._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_398 = auVar49;
  }
  UE::Math::TQuat<double>::FindBetweenNormals
            (&local_2b8,(TVector<double> *)&local_408._s_0,(TVector<double> *)&local_408._s_0);
  UE::Math::TQuat<double>::Euler((TQuat<double> *)local_398,(TVector<double> *)&local_3b8._s_0);
  dVar47 = (double)param_5;
  dVar34 = (double)(float)((uint)param_5 ^ __xmm_80000000800000008000000080000000);
  local_3b8._s_0.X = FMath::ClampAngle<double>(local_3b8._s_0.X,dVar34,dVar47);
  local_3b8._s_0.Y = FMath::ClampAngle<double>(local_3b8._s_0.Y,dVar34,dVar47);
  local_3b8._s_0.Z = FMath::ClampAngle<double>(local_3b8._s_0.Z,dVar34,dVar47);
  pTVar30 = UE::Math::TQuat<double>::MakeFromEuler(&local_238,(TVector<double> *)&local_3b8._s_0);
  local_398._0_8_ = pTVar30->X;
  local_398._8_8_ = pTVar30->Y;
  local_388._0_8_ = pTVar30->Z;
  local_388._8_8_ = pTVar30->W;
  pTVar30 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (&local_218,&local_2b8,(TQuat<double> *)local_398,(double)local_3ec);
  dVar34 = pTVar30->X;
  dVar47 = pTVar30->Y;
  dVar1 = pTVar30->Z;
  dVar50 = pTVar30->W;
  dVar53 = dVar1 * dVar1 + dVar34 * dVar34;
  dVar44 = dVar50 * dVar50 + dVar47 * dVar47;
  auVar36._8_4_ = SUB84(dVar44,0);
  auVar36._0_8_ = dVar53;
  auVar36._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  auVar37._0_8_ = auVar36._8_8_ + dVar53;
  auVar37._8_8_ = dVar53 + dVar44;
  auVar49 = sqrtpd(auVar49,auVar37);
  uVar32 = -(ulonglong)((double)CONCAT44(uVar59,uVar58) <= auVar37._0_8_);
  uVar33 = -(ulonglong)((double)CONCAT44(uVar59,uVar58) <= auVar37._8_8_);
  uVar54 = (uint)(uVar32 >> 0x20);
  uVar55 = (uint)(uVar33 >> 0x20);
  auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar49);
  auVar52._0_8_ = uVar32 & (ulonglong)(auVar51._0_8_ * dVar34);
  uVar21 = uVar33 & (ulonglong)(auVar51._8_8_ * dVar47);
  auVar52._8_4_ = (undefined4)uVar21;
  auVar52._12_4_ = (undefined4)(uVar21 >> 0x20);
  auVar41._0_4_ = ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar41._4_4_ =
       ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar41._8_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar41._12_4_ =
       ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_398 = auVar52 | auVar41;
  auVar49 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar49);
  auVar45._0_4_ = ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar45._4_4_ =
       ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar45._8_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar45._12_4_ =
       ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar42._0_8_ = (ulonglong)(auVar49._0_8_ * dVar1) & uVar32;
  uVar33 = (ulonglong)(auVar49._8_8_ * dVar50) & uVar33;
  auVar42._8_4_ = (undefined4)uVar33;
  auVar42._12_4_ = (undefined4)(uVar33 >> 0x20);
  local_388 = auVar45 | auVar42;
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_398,&local_3e8);
  local_3d0._s_0.X = param_6->Pitch;
  local_3d0._s_0.Y = param_6->Yaw;
  uVar61 = *(uint *)&param_6->Pitch & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar62 = *(uint *)((longlong)&param_6->Pitch + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar63 = (uint)__xmm_80000000000000008000000000000000;
  uVar64 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar54 = *(uint *)&param_6->Yaw & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar55 = *(uint *)((longlong)&param_6->Yaw + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar56 = SUB84(param_6->Roll,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar57 = (uint)((ulonglong)param_6->Roll >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (0.0 <= (double)CONCAT44(uVar62,uVar61) && (double)CONCAT44(uVar62,uVar61) != 0.0) {
    local_3e8.Pitch =
         FMath::ClampAngle<double>
                   (local_3e8.Pitch,(double)CONCAT44(uVar62,uVar61),
                    (double)CONCAT44(uVar62 ^ uVar64,uVar61 ^ uVar63));
    if (local_3e8.Pitch <= 0.0) {
      local_3e8.Pitch = local_3e8.Pitch + (double)CONCAT44(uVar62,uVar61);
    }
    else {
      local_3e8.Pitch = local_3e8.Pitch - (double)CONCAT44(uVar62,uVar61);
    }
  }
  if (0.0 <= (double)CONCAT44(uVar57,uVar56) && (double)CONCAT44(uVar57,uVar56) != 0.0) {
    local_3e8.Roll =
         FMath::ClampAngle<double>
                   (local_3e8.Roll,(double)CONCAT44(uVar57,uVar56),
                    (double)CONCAT44(uVar57 ^ uVar64,uVar56 ^ uVar63));
    if (local_3e8.Roll <= 0.0) {
      local_3e8.Roll = local_3e8.Roll + (double)CONCAT44(uVar57,uVar56);
    }
    else {
      local_3e8.Roll = local_3e8.Roll - (double)CONCAT44(uVar57,uVar56);
    }
  }
  if (0.0 <= (double)CONCAT44(uVar55,uVar54) && (double)CONCAT44(uVar55,uVar54) != 0.0) {
    local_3e8.Yaw =
         FMath::ClampAngle<double>
                   (local_3e8.Yaw,(double)CONCAT44(uVar55,uVar54),
                    (double)CONCAT44(uVar55 ^ uVar64,uVar54 ^ uVar63));
    if (local_3e8.Yaw <= 0.0) {
      local_3e8.Yaw = local_3e8.Yaw + (double)CONCAT44(uVar55,uVar54);
    }
    else {
      local_3e8.Yaw = local_3e8.Yaw - (double)CONCAT44(uVar55,uVar54);
    }
  }
  pTVar30 = UE::Math::TRotator<double>::Quaternion(&local_3e8,&local_1f8);
  dVar22 = (param_1->Rotation).XY.m128d_f64[0];
  dVar23 = (param_1->Rotation).XY.m128d_f64[1];
  dVar24 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar25 = (param_1->Rotation).ZW.m128d_f64[1];
  uVar4 = pTVar30->X;
  uVar8 = pTVar30->Y;
  uVar5 = pTVar30->Z;
  uVar9 = pTVar30->W;
  auVar46._8_4_ = (int)uVar4;
  auVar46._0_8_ = uVar4;
  auVar46._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar38._8_4_ = (int)uVar9;
  auVar38._0_8_ = uVar9;
  auVar38._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
  dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar43._8_4_ = (int)uVar8;
  auVar43._0_8_ = uVar8;
  auVar43._12_4_ = (int)((ulonglong)uVar8 >> 0x20);
  auVar39._8_4_ = (int)uVar5;
  auVar39._0_8_ = uVar5;
  auVar39._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  dVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar15 = (double)uVar4 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + (double)uVar9 * dVar23 +
           (double)uVar8 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + (double)uVar5 * dVar22 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar13._8_4_ = SUB84(dVar15,0);
  auVar13._0_8_ =
       (double)uVar4 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       (double)uVar9 * dVar22 +
       (double)uVar8 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       (double)uVar5 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar13;
  (param_1->Rotation).ZW.m128d_f64[0] =
       (double)uVar4 * dVar23 * dVar34 + (double)uVar9 * dVar24 + (double)uVar8 * dVar22 * dVar47 +
       (double)uVar5 * dVar25 * dVar1;
  (param_1->Rotation).ZW.m128d_f64[1] =
       auVar46._8_8_ * dVar22 * dVar50 + auVar38._8_8_ * dVar25 + auVar43._8_8_ * dVar23 * dVar53 +
       auVar39._8_8_ * dVar24 * dVar44;
  dVar34 = (param_1->Rotation).XY.m128d_f64[1];
  dVar47 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar34;
  dVar34 = (param_1->Translation).XY.m128d_f64[0];
  dVar50 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar47;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar47 = (param_1->Translation).ZW.m128d_f64[0];
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar34;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar50;
  dVar34 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar50 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar47;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar47 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar34;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar50;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar47;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// OrthoNormalize @ 14d354060

void __cdecl UDragonIK_Library::OrthoNormalize(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  dVar10 = __real_3ff0000000000000;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar8 == __real_3ff0000000000000) {
    uVar6 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    uVar7 = (param_1->field0_0x0)._s_0.X;
    uVar9 = (param_1->field0_0x0)._s_0.Z;
  }
  else {
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar6 = dVar3 * dVar8;
      uVar7 = dVar1 * dVar8;
      uVar9 = dVar2 * dVar8;
    }
  }
  auVar4._8_4_ = (int)uVar6;
  auVar4._0_8_ = uVar7;
  auVar4._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar4;
  (param_1->field0_0x0)._s_0.Z = (double)uVar9;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar8 = dVar2 * (param_1->field0_0x0)._s_0.Y + dVar1 * (param_1->field0_0x0)._s_0.X +
          dVar3 * (param_1->field0_0x0)._s_0.Z;
  dVar1 = dVar1 - dVar8 * (param_1->field0_0x0)._s_0.X;
  dVar2 = dVar2 - dVar8 * (param_1->field0_0x0)._s_0.Y;
  dVar3 = dVar3 - dVar8 * (param_1->field0_0x0)._s_0.Z;
  (param_2->field0_0x0)._s_0.X = dVar1;
  (param_2->field0_0x0)._s_0.Y = dVar2;
  (param_2->field0_0x0)._s_0.Z = dVar3;
  dVar8 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar8 == dVar10) {
    uVar9 = (param_2->field0_0x0)._s_0.Z;
    uVar6 = (param_2->field0_0x0)._s_0.X;
    uVar7 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  }
  else {
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar10 = dVar10 / SQRT(dVar8);
      uVar9 = dVar3 * dVar10;
      uVar6 = dVar10 * dVar1;
      uVar7 = dVar10 * dVar2;
    }
  }
  auVar5._8_4_ = (int)uVar7;
  auVar5._0_8_ = uVar6;
  auVar5._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined1 (*) [16])&param_2->field0_0x0 = auVar5;
  (param_2->field0_0x0)._s_0.Z = (double)uVar9;
  return;
}

// QuatFromToRotation @ 14d354c80

TQuat<double> * __cdecl
UDragonIK_Library::QuatFromToRotation
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 in_EAX;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  
  dVar7 = UE::Math::TQuat<double>::Identity.W;
  dVar5 = UE::Math::TQuat<double>::Identity.Z;
  dVar4 = UE::Math::TQuat<double>::Identity.Y;
  dVar8 = param_2->X;
  dVar13 = param_2->Y;
  dVar14 = param_2->Z;
  dVar15 = param_2->W;
  lVar18 = -(ulonglong)(param_1->W == dVar15);
  auVar1._8_4_ = (int)lVar18;
  auVar1._0_8_ = -(ulonglong)(param_1->Z == dVar14);
  auVar1._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar17 = movmskpd((int)param_1,auVar1);
  lVar18 = -(ulonglong)(param_1->Y == dVar13);
  auVar2._8_4_ = (int)lVar18;
  auVar2._0_8_ = -(ulonglong)(param_1->X == dVar8);
  auVar2._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  uVar16 = movmskpd(in_EAX,auVar2);
  if ((iVar17 << 2 | uVar16) == 0xf) {
    __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
    __return_storage_ptr__->Y = dVar4;
    __return_storage_ptr__->Z = dVar5;
    __return_storage_ptr__->W = dVar7;
  }
  else {
    dVar11 = param_1->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar12 = param_1->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar9 = param_1->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar10 = param_1->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar4 = dVar8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar15 * dVar9 +
            dVar13 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar5 = dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar15 * dVar10 +
            dVar13 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar14 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar7 = dVar8 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar15 * dVar11 +
            dVar13 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar14 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar8 = dVar8 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar15 * dVar12 +
            dVar13 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    __return_storage_ptr__->X = dVar4;
    __return_storage_ptr__->Y = (double)auVar3._8_8_;
    auVar6._8_4_ = SUB84(dVar8,0);
    auVar6._0_8_ = dVar7;
    auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    __return_storage_ptr__->Z = dVar7;
    __return_storage_ptr__->W = (double)auVar6._8_8_;
  }
  return __return_storage_ptr__;
}

// QuatLookXatLocalDirection @ 14d354de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UDragonIK_Library::QuatLookXatLocalDirection
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  uint uVar35;
  TVector<double>_u_0 local_d8 [2];
  TQuat<double> local_a8 [5];
  
  local_d8[0]._s_0.Z = 0.0;
  local_d8[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_d8[0]._s_0.Y = _UNK_150689518;
  UE::Math::TQuat<double>::FindBetweenNormals(local_a8,(TVector<double> *)&local_d8[0]._s_0,param_2)
  ;
  dVar30 = (param_1->Rotation).XY.m128d_f64[0];
  dVar8 = (param_1->Rotation).XY.m128d_f64[1];
  auVar27 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar9 = (param_1->Scale3D).ZW.m128d_f64[0];
  uVar11 = *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
  uVar12 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
  uVar13 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
  uVar14 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
  uVar15 = *(undefined4 *)(param_1->Translation).XY.m128d_f64;
  uVar16 = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 4);
  dVar10 = (param_1->Translation).ZW.m128d_f64[0];
  dVar25 = auVar27._8_8_;
  auVar32._8_4_ = auVar27._8_4_;
  auVar32._0_8_ = dVar25;
  auVar32._12_4_ = auVar27._12_4_;
  auVar31._8_8_ = local_a8[0].X;
  auVar31._0_8_ = local_a8[0].Y;
  dVar2 = auVar27._0_8_;
  auVar19._8_4_ = auVar27._0_4_;
  auVar19._0_8_ = dVar2;
  auVar19._12_4_ = auVar27._4_4_;
  dVar3 = dVar30 * local_a8[0].W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar25 * local_a8[0].X +
          local_a8[0].Z * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar2 * local_a8[0].Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar4 = dVar30 * local_a8[0].Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar32._8_8_ * local_a8[0].Y +
          local_a8[0].W * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar19._8_8_ * local_a8[0].X *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar20._8_4_ = SUB84(dVar4,0);
  auVar20._0_8_ = dVar3;
  auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar1 = dVar30 * local_a8[0].Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          local_a8[0].Z * dVar25 +
          dVar8 * local_a8[0].X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar2 * local_a8[0].W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar2 = dVar30 * local_a8[0].X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          local_a8[0].W * dVar25 +
          dVar8 * local_a8[0].Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar2 * local_a8[0].Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar26._8_4_ = SUB84(dVar2,0);
  auVar26._0_8_ = dVar1;
  auVar26._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar25 = dVar1 * dVar1 + dVar3 * dVar3;
  dVar30 = auVar26._8_8_ * dVar2 + auVar20._8_8_ * dVar4;
  auVar21._8_4_ = SUB84(dVar30,0);
  auVar21._0_8_ = dVar25;
  auVar21._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  auVar22._0_8_ = auVar21._8_8_ + dVar25;
  auVar22._8_8_ = dVar25 + dVar30;
  auVar32 = sqrtpd(auVar31,auVar22);
  uVar17 = -(ulonglong)(__real_3e45798ee0000000 <= auVar22._0_8_);
  uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= auVar22._8_8_);
  uVar34 = (uint)(uVar17 >> 0x20);
  uVar35 = (uint)(uVar18 >> 0x20);
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
  auVar33._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar33._4_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar33._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar33._12_4_ =
       ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar25 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  auVar28._0_8_ = uVar17 & (ulonglong)(auVar27._0_8_ * dVar1);
  uVar7 = uVar18 & (ulonglong)(auVar27._8_8_ * dVar2);
  auVar28._8_4_ = (undefined4)uVar7;
  auVar28._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
  auVar29._0_8_ = (ulonglong)(auVar27._0_8_ * dVar3) & uVar17;
  uVar7 = (ulonglong)(auVar27._8_8_ * dVar4) & uVar18;
  auVar29._8_4_ = (undefined4)uVar7;
  auVar29._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar27._4_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar27._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar27._8_4_ = ~(uint)uVar18 & SUB84(dVar25,0);
  auVar27._12_4_ = ~uVar35 & (uint)((ulonglong)dVar25 >> 0x20);
  auVar5._4_8_ = dVar25;
  auVar5._0_4_ = uVar16;
  auVar23._0_8_ = auVar5._0_8_ << 0x20;
  auVar23._8_4_ = *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1);
  auVar23._12_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar29 | auVar27;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar33 | auVar28;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar15;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar16;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = auVar23._8_8_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  auVar6._4_8_ = auVar23._8_8_;
  auVar6._0_4_ = uVar12;
  auVar24._0_8_ = auVar6._0_8_ << 0x20;
  auVar24._8_4_ = uVar13;
  auVar24._12_4_ = uVar14;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar11;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar12;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = auVar24._8_8_;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar9;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// QuatLookXatLocation @ 14d355040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UDragonIK_Library::QuatLookXatLocation
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined4 in_EAX;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  TTransform<double> local_108 [2];
  
  local_118 = (param_1->Translation).ZW.m128d_f64[0];
  dVar10 = (param_1->Translation).XY.m128d_f64[0] - (param_2->field0_0x0)._s_0.X;
  uVar8 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f847ae140000000 <= (double)CONCAT44(uVar9,uVar8) &&
        (double)CONCAT44(uVar9,uVar8) != __real_3f847ae140000000) ||
      (dVar10 = (param_1->Translation).XY.m128d_f64[1] - (param_2->field0_0x0)._s_0.Y,
      __real_3f847ae140000000 <
      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar10 = (double)local_118 - (param_2->field0_0x0)._s_0.Z,
     uVar8 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar9 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f847ae140000000 <= (double)CONCAT44(uVar9,uVar8) &&
     (double)CONCAT44(uVar9,uVar8) != __real_3f847ae140000000)) {
    auVar19._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(param_1->Scale3D).ZW.m128d_f64 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar19._8_4_ = *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88;
    auVar19._12_4_ = *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc) & _UNK_15061cc8c;
    auVar17._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(param_1->Scale3D).XY.m128d_f64 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar17._8_4_ = *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
    auVar17._12_4_ = *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
    auVar11._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar19._8_8_);
    auVar11._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar19._0_8_);
    uVar8 = movmskpd((int)__return_storage_ptr__,auVar11);
    lVar7 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar17._8_8_);
    auVar1._8_4_ = (int)lVar7;
    auVar1._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar17._0_8_);
    auVar1._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
    iVar6 = movmskpd(in_EAX,auVar1);
    if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
      local_108[0].Rotation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      local_108[0].Rotation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      local_108[0].Rotation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      local_108[0].Rotation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      local_108[0].Rotation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      local_108[0].Rotation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      local_108[0].Rotation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      local_108[0].Rotation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_108[0].Translation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      local_108[0].Translation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      local_108[0].Translation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      local_108[0].Translation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      local_108[0].Translation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      local_108[0].Translation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(param_1,local_108);
    }
    auVar1 = *(undefined1 (*) [16])&param_2->field0_0x0;
    dVar10 = (param_2->field0_0x0)._s_0.Z;
    dVar24 = auVar1._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar10;
    auVar11 = blendpd(auVar1,auVar2,2);
    auVar18._4_4_ = local_108[0].Rotation.XY.m128d_f64[0]._4_4_;
    auVar18._0_4_ = local_108[0].Rotation.XY.m128d_f64[0]._0_4_;
    auVar18._8_4_ = local_108[0].Rotation.XY.m128d_f64[1]._0_4_;
    auVar18._12_4_ = local_108[0].Rotation.XY.m128d_f64[1]._4_4_;
    auVar4._4_4_ = local_108[0].Rotation.ZW.m128d_f64[0]._4_4_;
    auVar4._0_4_ = local_108[0].Rotation.ZW.m128d_f64[0]._0_4_;
    auVar4._8_4_ = local_108[0].Rotation.ZW.m128d_f64[1]._0_4_;
    auVar4._12_4_ = local_108[0].Rotation.ZW.m128d_f64[1]._4_4_;
    auVar19 = blendpd(auVar18,auVar4,2);
    auVar22._0_8_ =
         dVar24 * (double)CONCAT44(local_108[0].Rotation.XY.m128d_f64[0]._4_4_,
                                   local_108[0].Rotation.XY.m128d_f64[0]._0_4_) -
         (double)CONCAT44(local_108[0].Rotation.XY.m128d_f64[1]._4_4_,
                          local_108[0].Rotation.XY.m128d_f64[1]._0_4_) * auVar1._0_8_;
    auVar22._8_8_ =
         dVar10 * (double)CONCAT44(local_108[0].Rotation.XY.m128d_f64[1]._4_4_,
                                   local_108[0].Rotation.XY.m128d_f64[1]._0_4_) -
         (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[0]._4_4_,
                          local_108[0].Rotation.ZW.m128d_f64[0]._0_4_) * dVar24;
    auVar12._0_8_ =
         auVar11._0_8_ *
         (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[0]._4_4_,
                          local_108[0].Rotation.ZW.m128d_f64[0]._0_4_) - auVar19._0_8_ * dVar10;
    auVar12._8_8_ =
         auVar11._8_8_ *
         (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[1]._4_4_,
                          local_108[0].Rotation.ZW.m128d_f64[1]._0_4_) - auVar19._8_8_ * 0.0;
    auVar11 = blendpd(auVar22,auVar12,2);
    auVar23._0_8_ = auVar11._0_8_ + auVar11._0_8_;
    auVar23._8_8_ = auVar11._8_8_ + auVar11._8_8_;
    dVar3 = auVar22._8_8_ + auVar22._8_8_;
    dVar21 = auVar12._0_8_ + auVar12._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
    auVar15._8_4_ = SUB84(dVar21,0);
    auVar15._0_8_ = dVar3;
    auVar15._12_4_ = uVar25;
    auVar13._8_4_ = SUB84(dVar21,0);
    auVar13._0_8_ = dVar3;
    auVar13._12_4_ = uVar25;
    auVar11 = blendpd(auVar13,auVar23,2);
    auVar16._0_8_ =
         auVar15._8_8_ *
         (double)CONCAT44(local_108[0].Rotation.XY.m128d_f64[0]._4_4_,
                          local_108[0].Rotation.XY.m128d_f64[0]._0_4_) -
         dVar3 * (double)CONCAT44(local_108[0].Rotation.XY.m128d_f64[1]._4_4_,
                                  local_108[0].Rotation.XY.m128d_f64[1]._0_4_);
    auVar16._8_8_ =
         auVar23._0_8_ *
         (double)CONCAT44(local_108[0].Rotation.XY.m128d_f64[1]._4_4_,
                          local_108[0].Rotation.XY.m128d_f64[1]._0_4_) -
         dVar21 * (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[0]._4_4_,
                                   local_108[0].Rotation.ZW.m128d_f64[0]._0_4_);
    auVar14._0_8_ =
         auVar11._0_8_ *
         (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[0]._4_4_,
                          local_108[0].Rotation.ZW.m128d_f64[0]._0_4_) -
         auVar23._0_8_ * auVar19._0_8_;
    auVar14._8_8_ =
         auVar11._8_8_ *
         (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[1]._4_4_,
                          local_108[0].Rotation.ZW.m128d_f64[1]._0_4_) -
         auVar23._8_8_ * auVar19._8_8_;
    auVar11 = blendpd(auVar16,auVar14,2);
    dVar3 = dVar3 * (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[1]._4_4_,
                                     local_108[0].Rotation.ZW.m128d_f64[1]._0_4_) + auVar1._0_8_ +
            auVar16._8_8_ +
            (double)CONCAT44(local_108[0].Translation.XY.m128d_f64[0]._4_4_,
                             local_108[0].Translation.XY.m128d_f64[0]._0_4_);
    dVar21 = dVar21 * (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[1]._4_4_,
                                       local_108[0].Rotation.ZW.m128d_f64[1]._0_4_) + dVar24 +
             auVar14._0_8_ +
             (double)CONCAT44(local_108[0].Translation.XY.m128d_f64[1]._4_4_,
                              local_108[0].Translation.XY.m128d_f64[1]._0_4_);
    uVar25 = SUB84(dVar21,0);
    uVar26 = (undefined4)((ulonglong)dVar21 >> 0x20);
    auVar5._4_8_ = dVar24;
    auVar5._0_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar20._0_8_ = auVar5._0_8_ << 0x20;
    auVar20._8_4_ = uVar25;
    auVar20._12_4_ = uVar26;
    local_118 = auVar23._0_8_ *
                (double)CONCAT44(local_108[0].Rotation.ZW.m128d_f64[1]._4_4_,
                                 local_108[0].Rotation.ZW.m128d_f64[1]._0_4_) + dVar10 +
                auVar11._0_8_ +
                (double)CONCAT44(local_108[0].Translation.ZW.m128d_f64[0]._4_4_,
                                 local_108[0].Translation.ZW.m128d_f64[0]._0_4_);
    dVar21 = auVar20._8_8_;
    dVar10 = dVar21 * dVar21 + dVar3 * dVar3 + (double)local_118 * (double)local_118;
    if (dVar10 == __real_3ff0000000000000) {
      unique0x10000436 = uVar25;
      local_128 = dVar3;
      unique0x1000043a = uVar26;
    }
    else if (__real_3e45798ee0000000 <= dVar10) {
      dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
      local_118 = (double)local_118 * dVar10;
      dStack_120 = dVar21 * dVar10;
      local_128 = dVar3 * dVar10;
    }
    else {
      dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    QuatLookXatLocalDirection(__return_storage_ptr__,param_1,(TVector<double> *)&local_128);
  }
  else {
    dVar10 = (param_1->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
    dVar10 = (param_1->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (param_1->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
    dVar10 = (param_1->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (param_1->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
    dVar10 = (param_1->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar10;
  }
  return __return_storage_ptr__;
}

// RectifyNaNRotator @ 14d355cd0

void __cdecl UDragonIK_Library::RectifyNaNRotator(TRotator<double> *param_1)

{
  int iVar1;
  
  iVar1 = _isnan(param_1->Pitch);
  if (iVar1 != 0) {
    param_1->Pitch = 0.0;
  }
  iVar1 = _isnan(param_1->Yaw);
  if (iVar1 != 0) {
    param_1->Yaw = 0.0;
  }
  iVar1 = _isnan(param_1->Roll);
  if (iVar1 != 0) {
    param_1->Roll = 0.0;
  }
  return;
}

// RemoveTwist @ 14d356610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIK_Library::RemoveTwist
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar24;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  TQuat<double> local_168;
  TQuat<double> local_148;
  TQuat<double> local_128;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_108,param_1);
  local_198 = local_108.Rotation.ZW.m128d_f64[0];
  dStack_190 = local_108.Rotation.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::ToSwingTwist
            ((TQuat<double> *)local_1a8,param_4,(TQuat<double> *)local_188,&local_148);
  dVar9 = __real_3e45798ee0000000;
  local_1b8 = __real_3e45798ee0000000;
  dVar23 = (double)local_188._0_8_ * (double)local_188._0_8_ +
           (double)local_178._0_8_ * (double)local_178._0_8_;
  dVar32 = (double)local_188._8_8_ * (double)local_188._8_8_ +
           (double)local_178._8_8_ * (double)local_178._8_8_;
  auVar42._8_4_ = SUB84(dVar32,0);
  auVar42._0_8_ = dVar23;
  auVar42._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar38._0_8_ = auVar42._8_8_ + dVar23;
  auVar38._8_8_ = dVar23 + dVar32;
  auVar39 = sqrtpd(in_XMM4,auVar38);
  uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= auVar38._0_8_);
  uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= auVar38._8_8_);
  uVar46 = (uint)(uVar11 >> 0x20);
  uVar47 = (uint)(uVar12 >> 0x20);
  auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
  auVar43._0_8_ = uVar11 & (ulonglong)(auVar42._0_8_ * (double)local_188._0_8_);
  uVar10 = uVar12 & (ulonglong)(auVar42._8_8_ * (double)local_188._8_8_);
  auVar43._8_4_ = (undefined4)uVar10;
  auVar43._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar25._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar25._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar25._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar25._12_4_ =
       ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_188 = auVar43 | auVar25;
  auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
  auVar37._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar37._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar37._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar37._12_4_ =
       ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_198 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_190 = (param_3->Rotation).ZW.m128d_f64[1];
  auVar26._0_8_ = (ulonglong)(auVar39._0_8_ * (double)local_178._0_8_) & uVar11;
  uVar12 = (ulonglong)(auVar39._8_8_ * (double)local_178._8_8_) & uVar12;
  auVar26._8_4_ = (undefined4)uVar12;
  auVar26._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar37 = auVar37 | auVar26;
  local_1a8 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  local_178 = auVar37;
  UE::Math::TQuat<double>::ToSwingTwist((TQuat<double> *)local_1a8,param_4,&local_128,&local_168);
  dVar23 = local_168.X * local_168.X + local_168.Z * local_168.Z;
  dVar32 = local_168.Y * local_168.Y + local_168.W * local_168.W;
  auVar15._8_4_ = SUB84(dVar32,0);
  auVar15._0_8_ = dVar23;
  auVar15._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar16._0_8_ = auVar15._8_8_ + dVar23;
  auVar16._8_8_ = dVar23 + dVar32;
  auVar38 = sqrtpd(auVar37,auVar16);
  uVar12 = -(ulonglong)(dVar9 <= auVar16._0_8_);
  uVar11 = -(ulonglong)(dVar9 <= auVar16._8_8_);
  uVar46 = (uint)(uVar12 >> 0x20);
  uVar47 = (uint)(uVar11 >> 0x20);
  auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
  auVar44._0_8_ = uVar12 & (ulonglong)(auVar39._0_8_ * local_168.X);
  uVar10 = uVar11 & (ulonglong)(auVar39._8_8_ * local_168.Y);
  auVar44._8_4_ = (undefined4)uVar10;
  auVar44._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar39 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar42 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar27._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar27._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar27._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar27._12_4_ =
       ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  dVar9 = auVar39._0_8_;
  dVar23 = auVar39._8_8_;
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
  auVar28._0_8_ = (ulonglong)(auVar38._0_8_ * local_168.Z) & uVar12;
  uVar10 = (ulonglong)(auVar38._8_8_ * local_168.W) & uVar11;
  auVar28._8_4_ = (undefined4)uVar10;
  auVar28._12_4_ = (undefined4)(uVar10 >> 0x20);
  dVar3 = auVar42._8_8_;
  auVar34._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar34._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar34._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar34._12_4_ =
       ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar2 = auVar42._0_8_;
  auVar29._8_4_ = auVar39._8_4_;
  auVar29._0_8_ = dVar23;
  auVar29._12_4_ = auVar39._12_4_;
  local_1b8 = SUB168(auVar44 | auVar27,0);
  dStack_1b0 = SUB168(auVar44 | auVar27,8);
  auVar17._8_4_ = auVar42._0_4_;
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = auVar42._4_4_;
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar6 = dVar9 * (double)local_178._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          (double)local_188._0_8_ * dVar3 +
          dVar23 * (double)local_178._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar2 * (double)local_188._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar7 = dVar9 * (double)local_178._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          (double)local_188._8_8_ * dVar3 +
          auVar29._8_8_ * (double)local_178._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar17._8_8_ * (double)local_188._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar32 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar8 = dVar9 * (double)local_188._8_8_ * dVar4 + dVar3 * (double)local_178._0_8_ +
          (double)local_188._0_8_ * dVar23 * dVar24 + dVar2 * (double)local_178._8_8_ * dVar32;
  dVar9 = dVar9 * (double)local_188._0_8_ * dVar5 + dVar3 * (double)local_178._8_8_ +
          (double)local_188._8_8_ * dVar23 * dVar33 + dVar2 * (double)local_178._0_8_ * dVar1;
  uVar48 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_1a8._0_8_ = SUB168(auVar34 | auVar28,0);
  local_1a8._8_8_ = SUB168(auVar34 | auVar28,8);
  auVar35._8_4_ = SUB84(dVar6,0);
  auVar35._0_8_ = dVar6;
  auVar35._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar40._8_4_ = SUB84(dVar9,0);
  auVar40._0_8_ = dVar8;
  auVar40._12_4_ = uVar48;
  dVar23 = auVar40._8_8_;
  auVar18._8_4_ = SUB84(dVar9,0);
  auVar18._0_8_ = dVar23;
  auVar18._12_4_ = uVar48;
  auVar30._8_4_ = SUB84(dVar7,0);
  auVar30._0_8_ = dVar7;
  auVar30._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar19._8_4_ = SUB84(dVar8,0);
  auVar19._0_8_ = dVar8;
  auVar19._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar36._0_8_ =
       dVar6 * (double)local_1a8._8_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar23 * local_1b8 +
       dVar7 * (double)local_1a8._0_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar8 * dStack_1b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar36._8_8_ =
       auVar35._8_8_ * (double)local_1a8._0_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + auVar18._8_8_ * dStack_1b0
       + auVar30._8_8_ * (double)local_1a8._8_8_ *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       auVar19._8_8_ * local_1b8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar36;
  dVar9 = dVar6 * local_1b8 * dVar5 + dVar9 * (double)local_1a8._8_8_ + dVar7 * dStack_1b0 * dVar33
          + dVar8 * (double)local_1a8._0_8_ * dVar1;
  auVar39._8_4_ = SUB84(dVar9,0);
  auVar39._0_8_ =
       dVar6 * dStack_1b0 * dVar4 + dVar23 * (double)local_1a8._0_8_ + dVar7 * local_1b8 * dVar24 +
       dVar8 * (double)local_1a8._8_8_ * dVar32;
  auVar39._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar39;
  dVar9 = (param_2->Rotation).XY.m128d_f64[0];
  dVar23 = (param_2->Rotation).XY.m128d_f64[1];
  dVar32 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar24 = dVar32 * dVar32 + dVar9 * dVar9;
  dVar33 = dVar1 * dVar1 + dVar23 * dVar23;
  auVar20._8_4_ = SUB84(dVar33,0);
  auVar20._0_8_ = dVar24;
  auVar20._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar21._0_8_ = auVar20._8_8_ + dVar24;
  auVar21._8_8_ = dVar24 + dVar33;
  auVar42 = sqrtpd(auVar36,auVar21);
  uVar12 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar21._0_8_);
  uVar13 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar21._8_8_);
  uVar11 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar21._0_8_);
  uVar14 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar21._8_8_);
  auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
  auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
  auVar22._0_8_ = (ulonglong)(auVar39._0_8_ * dVar9) & uVar11;
  uVar10 = uVar14 & (ulonglong)(auVar39._8_8_ * dVar23);
  auVar22._8_4_ = (undefined4)uVar10;
  auVar22._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar45._0_4_ = ~(uint)uVar11 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar45._4_4_ = ~(uint)(uVar11 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar45._8_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar45._12_4_ = ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  auVar41._0_8_ = uVar12 & (ulonglong)(auVar42._0_8_ * dVar32);
  uVar10 = uVar13 & (ulonglong)(auVar42._8_8_ * dVar1);
  auVar41._8_4_ = (undefined4)uVar10;
  auVar41._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar31._0_4_ = ~(uint)uVar12 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar31._4_4_ = ~(uint)(uVar12 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar31._8_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar31._12_4_ = ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar22 | auVar45;
  *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar41 | auVar31;
  return;
}

// SafeFromToRotation @ 14d3572c0

TQuat<double> * __cdecl
UDragonIK_Library::SafeFromToRotation
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar9;
  double dVar10;
  
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = dVar8 * dVar1 - (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Y;
  dVar3 = dVar10 * (param_1->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.X * dVar1;
  dVar4 = (param_1->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.Y - dVar10 * dVar8;
  dVar9 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
  uVar5 = dVar2;
  uVar6 = dVar3;
  uVar7 = dVar4;
  if ((dVar9 != __real_3ff0000000000000) &&
     (uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar9)) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    uVar5 = dVar2 * dVar9;
    uVar6 = dVar3 * dVar9;
    uVar7 = dVar4 * dVar9;
  }
  dVar10 = dVar10 * (param_1->field0_0x0)._s_0.X + dVar8 * (param_2->field0_0x0)._s_0.Y +
           dVar1 * (param_1->field0_0x0)._s_0.Z;
  dVar8 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar10) && (dVar8 = dVar10, __real_3ff0000000000000 <= dVar10)) {
    dVar8 = __real_3ff0000000000000;
  }
  acos(dVar8);
  __libm_sse2_sincos_();
  __return_storage_ptr__->X = extraout_XMM0_Qa * (double)uVar5;
  __return_storage_ptr__->Y = extraout_XMM0_Qa * (double)uVar6;
  __return_storage_ptr__->Z = extraout_XMM0_Qa * (double)uVar7;
  __return_storage_ptr__->W = extraout_XMM0_Qb;
  return __return_storage_ptr__;
}

// SetArmYaw @ 14d357910

TTransform<double> * __cdecl
UDragonIK_Library::SetArmYaw
          (TTransform<double> *__return_storage_ptr__,bool param_1,bool param_2,float param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,TTransform<double> *param_6,
          TTransform<double> *param_7,TTransform<double> *param_8)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  __m128d _Var27;
  TQuat<double> *pTVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  TQuat<double> local_e8;
  TVector<double>_u_0 local_c8 [8];
  
  dVar29 = (param_7->Rotation).XY.m128d_f64[1];
  dVar11 = (param_7->Rotation).ZW.m128d_f64[0];
  dVar12 = (param_7->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_7->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar29;
  dVar29 = (param_7->Translation).XY.m128d_f64[0];
  dVar14 = (param_7->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar11;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar12;
  dVar11 = (param_7->Translation).ZW.m128d_f64[0];
  dVar12 = (param_7->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar29;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar14;
  dVar29 = (param_7->Scale3D).XY.m128d_f64[0];
  dVar14 = (param_7->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar11;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar12;
  dVar12 = (param_7->Scale3D).ZW.m128d_f64[0];
  dVar15 = (param_7->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar29;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar14;
  dVar29 = (param_7->Translation).XY.m128d_f64[0];
  dVar11 = (param_7->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar12;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar15;
  local_c8[0]._0_8_ = (param_8->Translation).XY.m128d_f64[0] - dVar29;
  local_c8[0]._16_8_ =
       (param_8->Translation).ZW.m128d_f64[0] - (param_7->Translation).ZW.m128d_f64[0];
  local_c8[0]._8_8_ = (param_8->Translation).XY.m128d_f64[1] - dVar11;
  dVar29 = (double)local_c8[0]._8_8_ * (double)local_c8[0]._8_8_ +
           (double)local_c8[0]._0_8_ * (double)local_c8[0]._0_8_ +
           (double)local_c8[0]._16_8_ * (double)local_c8[0]._16_8_;
  if (dVar29 != __real_3ff0000000000000) {
    if (dVar29 < __real_3e45798ee0000000) {
      local_c8[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_c8[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_c8[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      dVar29 = __real_3ff0000000000000 / SQRT(dVar29);
      local_c8[0]._0_8_ = (double)local_c8[0]._0_8_ * dVar29;
      local_c8[0]._8_8_ = (double)local_c8[0]._8_8_ * dVar29;
      local_c8[0]._16_8_ = (double)local_c8[0]._16_8_ * dVar29;
    }
  }
  pTVar28 = UE::Math::TVector<double>::ToOrientationQuat
                      ((TVector<double> *)&local_c8[0]._s_0,&local_e8);
  _Var27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW;
  dVar1 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
  dVar4 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
  dVar7 = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
  dVar8 = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
  dVar30 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar31 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar16 = pTVar28->X;
  dVar17 = pTVar28->Y;
  dVar18 = pTVar28->Z;
  dVar19 = pTVar28->W;
  dVar11 = dVar16 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar12 = dVar17 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar32 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar14 = dVar18 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar15 = dVar19 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar29 = dVar11 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar15 * dVar8 +
           dVar12 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar14 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar29,0);
  auVar2._0_8_ = dVar11 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar15 * dVar7 +
                 dVar12 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar14 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar2;
  dVar29 = dVar11 * dVar7 * dVar31 + dVar15 * dVar4 + dVar12 * dVar8 * dVar33 +
           dVar14 * dVar1 * _Var27.m128d_f64[1];
  auVar10._8_4_ = SUB84(dVar29,0);
  auVar10._0_8_ =
       dVar11 * dVar8 * dVar30 + dVar15 * dVar1 + dVar12 * dVar7 * dVar32 +
       dVar14 * dVar4 * _Var27.m128d_f64[0];
  auVar10._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar10;
  local_c8[0]._16_8_ = (undefined8)((float)(int)((param_1 ^ 1) * 2 + -1) * param_3);
  local_c8[0]._0_16_ = ZEXT816(0);
  pTVar28 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_c8[0]._s_0,&local_e8);
  _Var27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW;
  dVar8 = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
  dVar20 = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
  dVar21 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
  dVar22 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
  dVar23 = pTVar28->X;
  dVar24 = pTVar28->Y;
  dVar25 = pTVar28->Z;
  dVar26 = pTVar28->W;
  dVar30 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar31 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar32 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar12 = dVar23 * dVar21 * dVar4 + dVar26 * dVar20 + dVar24 * dVar22 * dVar32 +
           dVar25 * dVar8 * dVar13;
  dVar29 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar12,0);
  auVar9._0_8_ = dVar23 * dVar22 * dVar30 + dVar26 * dVar8 + dVar24 * dVar21 * dVar31 +
                 dVar25 * dVar20 * dVar33;
  auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar9;
  dVar12 = _Var27.m128d_f64[0];
  dVar1 = _Var27.m128d_f64[1];
  dVar7 = dVar23 * dVar20 * dVar11 + dVar26 * dVar21 + dVar24 * dVar8 * dVar12 +
          dVar25 * dVar22 * dVar29;
  dVar8 = dVar23 * dVar8 * dVar15 + dVar26 * dVar22 + dVar24 * dVar20 * dVar1 +
          dVar25 * dVar21 * dVar14;
  auVar5._8_4_ = SUB84(dVar8,0);
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  dVar20 = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
  dVar21 = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
  dVar4 = dVar7 * dVar16 * dVar4 + dVar19 * dVar21 + dVar17 * dVar8 * dVar32 +
          dVar20 * dVar18 * dVar13;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar8 * dVar16 * dVar30 + dVar19 * dVar20 + dVar17 * dVar7 * dVar31 +
                 dVar21 * dVar18 * dVar33;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  dVar14 = dVar20 * dVar16 * dVar15 + dVar19 * dVar8 + dVar17 * dVar21 * dVar1 +
           dVar7 * dVar18 * dVar14;
  auVar6._8_4_ = SUB84(dVar14,0);
  auVar6._0_8_ = dVar21 * dVar16 * dVar11 + dVar19 * dVar7 + dVar17 * dVar20 * dVar12 +
                 dVar8 * dVar18 * dVar29;
  auVar6._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
  return __return_storage_ptr__;
}

// SolveJoint @ 14d358e30

TVector<double> * __cdecl
UDragonIK_Library::SolveJoint
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,float param_3)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  
  dVar4 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar3 = dVar6 * dVar6 + dVar4 * dVar4 + dVar1 * dVar1;
  uVar5 = dVar4;
  uVar7 = dVar6;
  uVar2 = dVar1;
  if ((dVar3 != __real_3ff0000000000000) &&
     (uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar3)) {
    dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
    uVar5 = dVar4 * dVar3;
    uVar7 = dVar6 * dVar3;
    uVar2 = dVar1 * dVar3;
  }
  dVar4 = (double)param_3;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * (double)uVar2 + (param_2->field0_0x0)._s_0.Z
  ;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 * (double)uVar5 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 * (double)uVar7 + dVar3;
  return __return_storage_ptr__;
}

// Solve_Modified_CCDIK @ 14d358f20

bool __cdecl
UDragonIK_Library::Solve_Modified_CCDIK
          (TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  int local_res8;
  
  iVar1 = param_1->ArrayNum;
  uVar18 = iVar1 - 1;
  uVar13 = ~uVar18 >> 0x1f;
  uVar11 = 0;
  if ((int)uVar18 < iVar1) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  lVar21 = (longlong)(int)uVar18;
  lVar16 = lVar21 * 0xa0;
  dVar5 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar2 + lVar16 + 8);
  dVar26 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar2 + lVar16);
  dVar22 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar2 + lVar16 + 0x10);
  auVar23._0_8_ = dVar22 * dVar22;
  auVar23._8_8_ = 0;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar5 * dVar5 + dVar26 * dVar26 + auVar23._0_8_;
  auVar24 = sqrtpd(auVar23,auVar24);
  if ((float)auVar24._0_8_ <= param_4) {
    bVar9 = false;
  }
  else {
    dVar5 = (param_2->field0_0x0)._s_0.X;
    dVar22 = (param_2->field0_0x0)._s_0.Y;
    uVar11 = 0;
    if ((int)uVar18 < param_1->ArrayNum) {
      uVar11 = uVar13;
    }
    dVar26 = (param_2->field0_0x0)._s_0.Z;
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    local_res8 = 0;
    pFVar2 = pFVar3 + lVar16;
    *(double *)pFVar2 = dVar5;
    *(double *)(pFVar2 + 8) = dVar22;
    *(double *)(pFVar3 + lVar16 + 0x10) = dVar26;
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar5 = __real_3ff0000000000000;
    if (0 < param_5) {
      lVar17 = lVar21 * 0xa0;
      do {
        uVar14 = uVar18;
        lVar20 = lVar17;
        for (uVar15 = iVar1 - 2; 0 < (int)uVar15; uVar15 = uVar15 - 1) {
          lVar19 = lVar20 + -0xa0;
          uVar12 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          uVar12 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar14 = uVar14 - 1;
          dVar22 = *(double *)(pFVar3 + lVar20 + 8);
          dVar29 = *(double *)(pFVar2 + lVar19) - *(double *)(pFVar3 + lVar20);
          dVar26 = *(double *)(pFVar3 + lVar20 + 0x10);
          dVar7 = *(double *)(pFVar2 + lVar20 + -0x98) - dVar22;
          dVar30 = *(double *)(pFVar2 + lVar20 + -0x90) - dVar26;
          dVar28 = (double)*(float *)(pFVar3 + lVar20 + 0x50);
          dVar27 = dVar5 / SQRT(dVar7 * dVar7 + dVar29 * dVar29 + dVar30 * dVar30);
          *(double *)(pFVar2 + lVar19) = dVar27 * dVar29 * dVar28 + *(double *)(pFVar3 + lVar20);
          *(double *)(pFVar2 + lVar20 + -0x98) = dVar7 * dVar27 * dVar28 + dVar22;
          *(double *)(pFVar2 + lVar20 + -0x90) = dVar28 * dVar30 * dVar27 + dVar26;
          lVar20 = lVar19;
        }
        uVar15 = 1;
        lVar20 = 1;
        if (1 < lVar21) {
          lVar19 = 0xa0;
          do {
            uVar14 = 0;
            if ((int)(uVar15 - 1) < param_1->ArrayNum) {
              uVar14 = -uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            uVar14 = 0;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar15 = uVar15 + 1;
            lVar20 = lVar20 + 1;
            dVar22 = *(double *)(pFVar2 + lVar19 + -0x98);
            dVar26 = *(double *)(pFVar2 + lVar19 + -0x90);
            dVar28 = *(double *)(pFVar3 + lVar19) - *(double *)(pFVar2 + lVar19 + -0xa0);
            dVar7 = *(double *)(pFVar3 + lVar19 + 8) - dVar22;
            dVar30 = *(double *)(pFVar3 + lVar19 + 0x10) - dVar26;
            dVar29 = dVar5 / SQRT(dVar7 * dVar7 + dVar28 * dVar28 + dVar30 * dVar30);
            dVar27 = (double)*(float *)(pFVar3 + lVar19 + 0x50);
            *(double *)(pFVar3 + lVar19) =
                 dVar28 * dVar29 * dVar27 + *(double *)(pFVar2 + lVar19 + -0xa0);
            *(double *)(pFVar3 + lVar19 + 8) = dVar7 * dVar29 * dVar27 + dVar22;
            *(double *)(pFVar3 + lVar19 + 0x10) = dVar27 * dVar30 * dVar29 + dVar26;
            lVar19 = lVar19 + 0xa0;
          } while (lVar20 < lVar21);
        }
        uVar15 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar15 = uVar13;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        uVar15 = 0;
        if (iVar1 + -2 < param_1->ArrayNum) {
          uVar15 = ~(iVar1 - 2U) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        dVar22 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar3 + lVar17 + -0x98);
        dVar26 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar3 + lVar17 + -0x90);
        dVar28 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar3 + lVar17 + -0xa0);
        auVar25._0_8_ = dVar26 * dVar26;
        auVar25._8_8_ = 0;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar22 * dVar22 + dVar28 * dVar28 + auVar25._0_8_;
        auVar24 = sqrtpd(auVar25,auVar6);
        dVar22 = (double)*(float *)(pFVar2 + lVar16 + 0x50) - auVar24._0_8_;
      } while ((param_4 <=
                (float)(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar8,
                                        SUB84(dVar22,0) & uVar11)) &&
              (local_res8 = local_res8 + 1, local_res8 < param_5));
    }
    bVar9 = true;
  }
  return bVar9;
}

// Solve_Modified_Direct_TwoBoneIK @ 14d359580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,float param_8,float param_9,bool param_10,float param_11,
          float param_12,float param_13)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  double local_138;
  TVector<double>_u_0 local_120;
  double local_108;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double dStack_c8;
  
  dVar13 = (param_1->field0_0x0)._s_0.Y;
  uVar2 = 0.0;
  dVar18 = (param_1->field0_0x0)._s_0.X;
  local_d0 = (param_5->field0_0x0)._s_0.X;
  dStack_c8 = (param_5->field0_0x0)._s_0.Y;
  local_108 = (param_5->field0_0x0)._s_0.Z;
  dVar10 = local_108 - (param_1->field0_0x0)._s_0.Z;
  dVar12 = dStack_c8 - dVar13;
  dVar8 = local_d0 - dVar18;
  dVar7 = dVar12 * dVar12 + dVar8 * dVar8 + dVar10 * dVar10;
  fVar11 = (float)SQRT(dVar7);
  fVar5 = param_8 + param_9;
  if (__real_38d1b717 <= fVar11) {
    uVar9 = dVar8;
    local_120._s_0.Z = dVar10;
    uVar14 = dVar12;
    if ((dVar7 != __real_3ff0000000000000) &&
       (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       local_120._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       __real_3e45798ee0000000 <= dVar7)) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar9 = dVar8 * dVar7;
      local_120._s_0.Z = dVar10 * dVar7;
      uVar14 = dVar12 * dVar7;
    }
    uVar15 = SUB84(local_120._s_0.Z,0);
    uVar16 = (undefined4)((ulonglong)local_120._s_0.Z >> 0x20);
    dVar12 = (double)uVar9;
    local_138 = (double)uVar14;
    local_100._s_0.Z = local_120._s_0.Z;
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
    local_100._s_0.Z = 0.0;
    local_138 = 0.0;
    uVar9 = __real_3ff0000000000000;
    fVar11 = __real_38d1b717;
    dVar12 = ___xmm_00000000000000003ff0000000000000;
    uVar14 = _UNK_150689518;
  }
  dVar18 = (param_4->field0_0x0)._s_0.X - dVar18;
  dVar13 = (param_4->field0_0x0)._s_0.Y - dVar13;
  dVar7 = (param_4->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  uVar3 = _UNK_15061cbc8;
  uVar19 = ___xmm_3ff00000000000000000000000000000;
  local_100._s_0.X = dVar12;
  local_100._s_0.Y = (double)uVar14;
  local_e8._s_0.Z = local_108;
  if (__real_322bcc76 <= (float)(dVar13 * dVar13 + dVar18 * dVar18 + dVar7 * dVar7)) {
    local_120._s_0.X = dVar7 * local_138 - dVar13 * local_100._s_0.Z;
    local_120._s_0.Y = dVar18 * local_100._s_0.Z - (double)uVar9 * dVar7;
    local_120._s_0.Z = dVar13 * (double)uVar9 - dVar18 * local_138;
    if (__real_3e45798ec0000000 <=
        local_120._s_0.Y * local_120._s_0.Y + local_120._s_0.X * local_120._s_0.X +
        local_120._s_0.Z * local_120._s_0.Z) {
      dVar8 = dVar13 * local_138 + dVar18 * (double)uVar9 + dVar7 * local_100._s_0.Z;
      uVar19 = dVar18 - dVar8 * (double)uVar9;
      uVar2 = dVar7 - dVar8 * local_100._s_0.Z;
      uVar3 = dVar13 - dVar8 * local_138;
      dVar13 = (double)uVar3 * (double)uVar3 + (double)uVar19 * (double)uVar19 +
               (double)uVar2 * (double)uVar2;
      if (__real_3e45798ee0000000 < dVar13) {
        dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
        uVar19 = dVar13 * (double)uVar19;
        uVar3 = dVar13 * (double)uVar3;
        uVar2 = dVar13 * (double)uVar2;
      }
    }
    else {
      UE::Math::TVector<double>::FindBestAxisVectors
                ((TVector<double> *)&local_100._s_0,(TVector<double> *)&local_120._s_0,
                 (TVector<double> *)&local_e8._s_0);
      uVar2 = local_e8._s_0.Z;
      uVar3 = local_e8._s_0.Y;
      uVar19 = local_e8._s_0.X;
    }
  }
  fVar4 = __real_3f800000;
  fVar17 = 0.0;
  if (((param_10) && (__real_38d1b717 < param_12 - param_11)) && (__real_38d1b717 < fVar5)) {
    fVar6 = (fVar11 / fVar5 - param_11) / (param_12 - param_11);
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar6 = fVar6 * (param_12 - __real_3f800000);
    if (__real_38d1b717 < fVar6) {
      param_9 = param_9 * ((__real_3f800000 - param_13) * fVar6 + __real_3f800000);
      fVar5 = fVar5 * (fVar6 + __real_3f800000);
      param_8 = param_8 * (fVar6 * param_13 + __real_3f800000);
    }
  }
  (param_7->field0_0x0)._s_0.X = local_d0;
  (param_7->field0_0x0)._s_0.Y = dStack_c8;
  (param_7->field0_0x0)._s_0.Z = local_108;
  dVar13 = (param_2->field0_0x0)._s_0.Y;
  (param_6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (param_6->field0_0x0)._s_0.Y = dVar13;
  (param_6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if (fVar5 <= fVar11) {
    dVar7 = (double)fVar5;
    dVar13 = (param_1->field0_0x0)._s_0.Y;
    dVar18 = (param_1->field0_0x0)._s_0.Z;
    (param_7->field0_0x0)._s_0.X = dVar12 * dVar7 + (param_1->field0_0x0)._s_0.X;
    (param_7->field0_0x0)._s_0.Y = (double)uVar14 * dVar7 + dVar13;
    dVar13 = (double)param_8;
    (param_7->field0_0x0)._s_0.Z = (double)CONCAT44(uVar16,uVar15) * dVar7 + dVar18;
    dVar18 = (double)CONCAT44(uVar16,uVar15) * dVar13 + (param_1->field0_0x0)._s_0.Z;
    dVar7 = (double)uVar14 * dVar13 + (param_1->field0_0x0)._s_0.Y;
    dVar13 = dVar12 * dVar13 + (param_1->field0_0x0)._s_0.X;
    goto LAB_14d359cc4;
  }
  fVar5 = (param_8 + param_8) * fVar11;
  if (fVar5 == 0.0) {
    fVar5 = 0.0;
    bVar1 = false;
LAB_14d359c33:
    fVar11 = fVar5;
    if (fVar4 <= fVar5) {
      fVar11 = fVar4;
    }
  }
  else {
    fVar5 = ((fVar11 * fVar11 + param_8 * param_8) - param_9 * param_9) / fVar5;
    bVar1 = fVar5 < 0.0;
    fVar11 = __real_bf800000;
    if (__real_bf800000 <= fVar5) goto LAB_14d359c33;
  }
  fVar11 = acosf(fVar11);
  fVar11 = sinf(fVar11);
  fVar11 = fVar11 * param_8;
  fVar5 = param_8 * param_8 - fVar11 * fVar11;
  if (0.0 < fVar5) {
    fVar17 = SQRT(fVar5);
  }
  if (bVar1) {
    fVar17 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
  }
  dVar13 = (double)fVar17;
  dVar8 = (double)fVar11;
  dVar18 = (double)CONCAT44(uVar16,uVar15) * dVar13 + (param_1->field0_0x0)._s_0.Z +
           (double)uVar2 * dVar8;
  dVar7 = (double)uVar14 * dVar13 + (param_1->field0_0x0)._s_0.Y + (double)uVar3 * dVar8;
  dVar13 = dVar12 * dVar13 + (param_1->field0_0x0)._s_0.X + (double)uVar19 * dVar8;
LAB_14d359cc4:
  (param_6->field0_0x0)._s_0.X = dVar13;
  (param_6->field0_0x0)._s_0.Y = dVar7;
  (param_6->field0_0x0)._s_0.Z = dVar18;
  return;
}

// Solve_Modified_Direct_TwoBoneIK_2 @ 14d359d20

void __cdecl
UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK_2
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,bool param_8,float param_9,float param_10,float param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = (param_2->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.X - dVar9;
  dVar9 = dVar9 - (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Z - dVar8;
  dVar8 = dVar8 - (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Y - dVar1;
  dVar1 = dVar1 - (param_1->field0_0x0)._s_0.Y;
  auVar4._0_8_ = dVar3 * dVar3;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + dVar7 * dVar7 + auVar4._0_8_;
  auVar5 = sqrtpd(auVar4,auVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar1 * dVar1 + dVar9 * dVar9 + dVar8 * dVar8;
  auVar6 = sqrtpd(auVar5,auVar6);
  Solve_Modified_Direct_TwoBoneIK
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(float)auVar6._0_8_,
             (float)auVar5._0_8_,param_8,param_9,param_10,param_11);
  return;
}

// Solve_Modified_Direct_TwoBoneIK_3 @ 14d359e30

void __cdecl
UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK_3
          (TTransform<double> *param_1,float param_2,TTransform<double> *param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,float param_8,float param_9,bool param_10,float param_11,
          float param_12,float param_13,bool param_14)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  TQuat<double> *pTVar18;
  TQuat<double> *pTVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar36;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar51;
  undefined1 auVar50 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar61;
  undefined1 auVar62 [16];
  double dVar60;
  double dVar64;
  undefined1 auVar63 [16];
  double dVar65;
  double local_218;
  double dStack_210;
  undefined8 local_208;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  double local_188;
  double local_180;
  double dStack_178;
  TRotator<double> local_170;
  TQuat<double> local_158;
  TRotator<double> local_138;
  TQuat<double> local_118;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  
  local_180 = (param_3->Translation).XY.m128d_f64[0];
  dStack_178 = (param_3->Translation).XY.m128d_f64[1];
  _local_1a8 = *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64;
  auVar39 = *(undefined1 (*) [16])(param_4->Translation).XY.m128d_f64;
  dVar55 = (param_5->Translation).XY.m128d_f64[0];
  dVar36 = (param_5->Translation).XY.m128d_f64[1];
  dVar1 = (param_3->Translation).ZW.m128d_f64[0];
  local_208 = (param_4->Translation).ZW.m128d_f64[0];
  _local_218 = auVar39;
  local_198 = dVar1;
  local_f8 = auVar39;
  Solve_Modified_Direct_TwoBoneIK
            ((TVector<double> *)&local_1a8,(TVector<double> *)&local_218,
             (TVector<double> *)&local_1c8._s_0,param_6,param_7,(TVector<double> *)&local_1e8._s_0,
             (TVector<double> *)&local_200._s_0,param_8,param_9,param_10,param_11,param_12,param_13)
  ;
  uVar17 = local_1e8._s_0.Z;
  uVar16 = local_1e8._s_0.Y;
  uVar15 = local_1e8._s_0.X;
  uVar14 = local_208;
  dVar6 = __real_3e45798ee0000000;
  dVar37 = __real_3ff0000000000000;
  dVar55 = dVar55 - auVar39._0_8_;
  local_e8._8_4_ = auVar39._8_4_;
  local_e8._0_8_ = auVar39._8_8_;
  local_e8._12_4_ = auVar39._12_4_;
  dVar36 = dVar36 - auVar39._8_8_;
  dVar22 = (param_5->Translation).ZW.m128d_f64[0] - (double)local_208;
  dVar64 = dVar36 * dVar36 + dVar55 * dVar55 + dVar22 * dVar22;
  local_208 = dVar22;
  local_218 = dVar55;
  dStack_210 = dVar36;
  if (dVar64 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar64) {
      dVar51 = __real_3ff0000000000000 / SQRT(dVar64);
      local_208 = dVar51 * dVar22;
      local_218 = dVar55 * dVar51;
      dStack_210 = dVar36 * dVar51;
    }
    else {
      local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_218 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      dStack_210 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    }
  }
  local_d8 = local_200._s_0.X;
  dStack_d0 = local_200._s_0.Y;
  dVar59 = local_200._s_0.X - local_1e8._s_0.X;
  local_188 = local_200._s_0.Z;
  dVar53 = local_200._s_0.Z - local_1e8._s_0.Z;
  dVar51 = local_200._s_0.Y - local_1e8._s_0.Y;
  dVar54 = dVar51 * dVar51 + dVar59 * dVar59 + dVar53 * dVar53;
  local_200._s_0.X = dVar59;
  local_200._s_0.Y = dVar51;
  local_200._s_0.Z = dVar53;
  if (dVar54 != __real_3ff0000000000000) {
    if (dVar54 < __real_3e45798ee0000000) {
      local_200._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_200._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_200._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_200._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_200._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      dVar60 = __real_3ff0000000000000 / SQRT(dVar54);
      local_200._s_0.X = dVar59 * dVar60;
      local_200._s_0.Y = dVar51 * dVar60;
      local_200._s_0.Z = dVar53 * dVar60;
    }
  }
  dVar60 = dVar55;
  dVar47 = dVar36;
  local_1c8._s_0.Z = dVar22;
  if ((dVar64 != __real_3ff0000000000000) &&
     (dVar60 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_),
     dVar47 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_),
     local_1c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar64)) {
    dVar64 = __real_3ff0000000000000 / SQRT(dVar64);
    dVar60 = dVar55 * dVar64;
    dVar47 = dVar36 * dVar64;
    local_1c8._s_0.Z = dVar22 * dVar64;
  }
  local_1e8._s_0.X = 0.0;
  local_1e8._s_0.Y = 0.0;
  local_1c8._8_4_ = SUB84(dVar47,0);
  local_1c8._0_8_ = dVar60;
  local_1c8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  local_1e8._s_0.Z = __real_3ff0000000000000;
  local_170.Roll = local_1c8._s_0.Z;
  CustomLookRotation(&local_170,(TVector<double> *)&local_1c8._s_0,
                     (TVector<double> *)&local_1e8._s_0);
  local_1e8._s_0.Z = dVar53;
  if (dVar54 != dVar37) {
    if (dVar6 <= dVar54) {
      dVar64 = dVar37 / SQRT(dVar54);
      dVar59 = dVar59 * dVar64;
      dVar51 = dVar51 * dVar64;
      local_1e8._s_0.Z = dVar53 * dVar64;
    }
    else {
      dVar59 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      dVar51 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_1e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  local_1c8._0_16_ = ZEXT816(0);
  local_1c8._s_0.Z = dVar37;
  local_1e8._s_0.X = dVar59;
  local_1e8._s_0.Y = dVar51;
  local_118.Z = local_1e8._s_0.Z;
  CustomLookRotation(&local_138,(TVector<double> *)&local_1e8._s_0,
                     (TVector<double> *)&local_1c8._s_0);
  pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_138,&local_118);
  pTVar19 = UE::Math::TRotator<double>::Quaternion(&local_170,(TQuat<double> *)&local_1c8._s_0);
  uVar2 = pTVar18->X;
  uVar4 = pTVar18->Y;
  dVar51 = pTVar18->Z;
  dVar54 = pTVar18->W;
  dVar64 = pTVar19->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar55 = pTVar19->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar22 = pTVar19->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar36 = pTVar19->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar62._8_4_ = (int)uVar2;
  auVar62._0_8_ = uVar2;
  auVar62._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar39._8_4_ = (int)uVar4;
  auVar39._0_8_ = uVar4;
  auVar39._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar56._0_8_ = dVar54 * dVar64;
  auVar56._8_8_ = dVar54 * dVar55;
  dVar59 = (double)uVar2 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + auVar56._0_8_ +
           (double)uVar4 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar51 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar53 = (double)uVar2 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + auVar56._8_8_ +
           (double)uVar4 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar51 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar60 = (double)uVar2 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + dVar54 * dVar22 +
           (double)uVar4 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
           + dVar51 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar64 = auVar62._8_8_ * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar54 * dVar36 +
           auVar39._8_8_ * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar51 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_1e8._s_0.X = dVar59;
  local_1e8._s_0.Y = dVar53;
  UE::Math::TQuat<double>::FindBetweenNormals
            (&local_158,(TVector<double> *)&local_218,(TVector<double> *)&local_200._s_0);
  if (param_14) {
    auVar23._8_4_ = SUB84(dVar64,0);
    auVar23._0_8_ = dVar60;
    auVar23._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
    dVar22 = dVar60 * dVar60 + dVar59 * dVar59;
    dVar36 = auVar23._8_8_ * dVar64 + dVar53 * dVar53;
    dVar55 = dVar36 + dVar22;
    dVar22 = dVar22 + dVar36;
    auVar7._8_4_ = SUB84(dVar22,0);
    auVar7._0_8_ = dVar55;
    auVar7._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    auVar39 = sqrtpd(auVar56,auVar7);
    uVar20 = -(ulonglong)(dVar6 <= dVar55);
    uVar21 = -(ulonglong)(dVar6 <= dVar22);
    auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
    dVar55 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dVar22 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    auVar24._0_4_ = ~(uint)uVar20 & SUB84(dVar55,0);
    auVar24._4_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)dVar55 >> 0x20);
    auVar24._8_4_ = ~(uint)uVar21 & SUB84(dVar22,0);
    auVar24._12_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
    auVar57._0_8_ = uVar20 & (ulonglong)(auVar56._0_8_ * dVar60);
    uVar13 = uVar21 & (ulonglong)(auVar56._8_8_ * dVar64);
    auVar57._8_4_ = (undefined4)uVar13;
    auVar57._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar57 = auVar57 | auVar24;
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
    auVar25._0_8_ = auVar39._0_8_ * local_1e8._s_0.X;
    auVar25._8_8_ = auVar39._8_8_ * local_1e8._s_0.Y;
  }
  else {
    dVar55 = local_158.Z * local_158.Z + local_158.X * local_158.X;
    dVar22 = local_158.W * local_158.W + local_158.Y * local_158.Y;
    dVar64 = dVar22 + dVar55;
    dVar55 = dVar55 + dVar22;
    auVar10._8_4_ = SUB84(dVar55,0);
    auVar10._0_8_ = dVar64;
    auVar10._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
    auVar39 = sqrtpd(auVar56,auVar10);
    uVar20 = -(ulonglong)(dVar6 <= dVar64);
    uVar21 = -(ulonglong)(dVar6 <= dVar55);
    auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
    dVar64 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dVar55 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    auVar58._0_8_ = uVar20 & (ulonglong)(auVar56._0_8_ * local_158.X);
    uVar13 = uVar21 & (ulonglong)(auVar56._8_8_ * local_158.Y);
    auVar58._8_4_ = (undefined4)uVar13;
    auVar58._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar26._0_4_ = ~(uint)uVar20 & SUB84(dVar64,0);
    auVar26._4_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)dVar64 >> 0x20);
    auVar26._8_4_ = ~(uint)uVar21 & SUB84(dVar55,0);
    auVar26._12_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar55 >> 0x20);
    auVar57 = auVar58 | auVar26;
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
    auVar25._0_8_ = auVar39._0_8_ * local_158.Z;
    auVar25._8_8_ = auVar39._8_8_ * local_158.W;
  }
  uVar44 = (uint)(uVar21 >> 0x20);
  uVar43 = (uint)(uVar20 >> 0x20);
  dVar53 = (param_4->Rotation).XY.m128d_f64[0];
  dVar60 = (param_4->Rotation).XY.m128d_f64[1];
  auVar27._0_4_ = auVar25._0_4_ & (uint)uVar20;
  auVar27._4_4_ = auVar25._4_4_ & uVar43;
  auVar27._8_4_ = auVar25._8_4_ & (uint)uVar21;
  auVar27._12_4_ = auVar25._12_4_ & uVar44;
  dVar47 = (param_4->Rotation).ZW.m128d_f64[0];
  dVar38 = (param_4->Rotation).ZW.m128d_f64[1];
  auVar63._0_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar63._4_4_ =
       ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar63._8_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar63._12_4_ =
       ~uVar44 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar48 = auVar57._0_8_;
  dVar52 = auVar57._8_8_;
  auVar28._8_4_ = auVar57._8_4_;
  auVar28._0_8_ = dVar52;
  auVar28._12_4_ = auVar57._12_4_;
  dVar61 = SUB168(auVar63 | auVar27,0);
  dVar65 = SUB168(auVar63 | auVar27,8);
  auVar40._8_4_ = auVar57._0_4_;
  auVar40._0_8_ = dVar48;
  auVar40._12_4_ = auVar57._4_4_;
  dVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar59 = dVar47 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar65 * dVar60 +
           dVar52 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar61 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar59,0);
  auVar11._0_8_ =
       dVar38 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar65 * dVar53 +
       dVar52 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar61 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar11._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
  *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64 = auVar11;
  (param_4->Rotation).ZW.m128d_f64[0] =
       dVar48 * dVar60 * dVar64 + dVar65 * dVar47 + dVar52 * dVar53 * dVar55 +
       dVar61 * dVar38 * dVar22;
  (param_4->Rotation).ZW.m128d_f64[1] =
       auVar40._8_8_ * dVar53 * dVar36 + dVar65 * dVar38 + auVar28._8_8_ * dVar60 * dVar51 +
       dVar61 * dVar47 * dVar54;
  (param_4->Translation).XY.m128d_f64[0] = (double)uVar15;
  (param_4->Translation).XY.m128d_f64[1] = (double)uVar16;
  (param_4->Translation).ZW.m128d_f64[0] = (double)uVar17;
  (param_4->Translation).ZW.m128d_f64[1] = 0.0;
  dVar55 = (double)uVar14 - (double)local_198;
  dVar64 = (double)local_f8._0_8_ - local_180;
  dVar36 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dVar51 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  dVar22 = (double)local_e8._0_8_ - dStack_178;
  dVar54 = dVar22 * dVar22 + dVar64 * dVar64 + dVar55 * dVar55;
  local_200._s_0.X = dVar64;
  local_200._s_0.Y = dVar22;
  local_200._s_0.Z = dVar55;
  if (dVar54 != dVar37) {
    if (dVar6 <= dVar54) {
      dVar59 = dVar37 / SQRT(dVar54);
      local_200._s_0.X = dVar59 * dVar64;
      local_200._s_0.Y = dVar59 * dVar22;
      local_200._s_0.Z = dVar59 * dVar55;
    }
    else {
      local_200._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_200._0_8_ = dVar36;
      local_200._8_8_ = dVar51;
    }
  }
  dVar47 = (double)uVar15 - local_180;
  dVar60 = (double)uVar17 - (double)local_198;
  dVar53 = (double)uVar16 - dStack_178;
  dVar59 = dVar53 * dVar53 + dVar47 * dVar47 + dVar60 * dVar60;
  if (dVar59 == dVar37) {
    dStack_210 = dVar53;
    local_218 = dVar47;
    local_208 = dVar60;
  }
  else if (dVar6 <= dVar59) {
    dVar38 = dVar37 / SQRT(dVar59);
    local_208 = dVar38 * dVar60;
    dStack_210 = dVar38 * dVar53;
    local_218 = dVar38 * dVar47;
  }
  else {
    dStack_210 = dVar51;
    local_218 = dVar36;
    local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  local_198 = dVar55;
  dVar38 = dVar64;
  dVar48 = dVar22;
  if ((dVar54 != dVar37) &&
     (local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar38 = dVar36,
     dVar48 = dVar51, dVar6 <= dVar54)) {
    dVar36 = dVar37 / SQRT(dVar54);
    local_198 = dVar55 * dVar36;
    dVar38 = dVar64 * dVar36;
    dVar48 = dVar22 * dVar36;
  }
  local_1c8._0_16_ = ZEXT816(0);
  unique0x10000f63 = SUB84(dVar48,0);
  local_1a8 = dVar38;
  unique0x10000f67 = (int)((ulonglong)dVar48 >> 0x20);
  local_1c8._s_0.Z = dVar37;
  local_118.Z = (double)local_198;
  CustomLookRotation(&local_138,(TVector<double> *)&local_1a8,(TVector<double> *)&local_1c8._s_0);
  local_198 = dVar60;
  if (dVar59 != dVar37) {
    if (dVar6 <= dVar59) {
      dVar64 = dVar37 / SQRT(dVar59);
      dVar47 = dVar47 * dVar64;
      dVar53 = dVar53 * dVar64;
      local_198 = dVar60 * dVar64;
    }
    else {
      dVar47 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      dVar53 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  local_1c8._0_16_ = ZEXT816(0);
  dStack_1a0 = dVar53;
  local_1a8 = dVar47;
  local_1c8._s_0.Z = dVar37;
  local_118.Z = (double)local_198;
  CustomLookRotation(&local_170,(TVector<double> *)&local_1a8,(TVector<double> *)&local_1c8._s_0);
  pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_170,&local_118);
  pTVar19 = UE::Math::TRotator<double>::Quaternion(&local_138,(TQuat<double> *)&local_1c8._s_0);
  uVar3 = pTVar18->X;
  uVar5 = pTVar18->Y;
  dVar37 = pTVar18->Z;
  dVar51 = pTVar18->W;
  dVar64 = pTVar19->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar55 = pTVar19->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar22 = pTVar19->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar36 = pTVar19->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar49._8_4_ = (int)uVar3;
  auVar49._0_8_ = uVar3;
  auVar49._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  auVar29._8_4_ = (int)uVar5;
  auVar29._0_8_ = uVar5;
  auVar29._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar41._0_8_ = dVar51 * dVar64;
  auVar41._8_8_ = dVar51 * dVar55;
  dVar54 = (double)uVar3 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + dVar51 * dVar22 +
           (double)uVar5 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
           + dVar37 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar51 = auVar49._8_8_ * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar51 * dVar36 +
           auVar29._8_8_ * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar37 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar55 = (double)uVar3 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + auVar41._0_8_ +
           (double)uVar5 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar37 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar64 = (double)uVar3 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + auVar41._8_8_ +
           (double)uVar5 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar37 * dVar64 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::FindBetweenNormals
            (&local_158,(TVector<double> *)&local_200._s_0,(TVector<double> *)&local_218);
  if (param_14) {
    auVar30._8_4_ = SUB84(dVar64,0);
    auVar30._0_8_ = dVar55;
    auVar30._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
    dVar36 = dVar55 * dVar55 + dVar54 * dVar54;
    dVar37 = auVar30._8_8_ * dVar64 + dVar51 * dVar51;
    dVar22 = dVar37 + dVar36;
    dVar36 = dVar36 + dVar37;
    auVar8._8_4_ = SUB84(dVar36,0);
    auVar8._0_8_ = dVar22;
    auVar8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    auVar39 = sqrtpd(auVar41,auVar8);
    uVar20 = -(ulonglong)(dVar6 <= dVar22);
    uVar21 = -(ulonglong)(dVar6 <= dVar36);
    auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
    dVar22 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dVar36 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    auVar31._0_4_ = ~(uint)uVar20 & SUB84(dVar22,0);
    auVar31._4_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
    auVar31._8_4_ = ~(uint)uVar21 & SUB84(dVar36,0);
    auVar31._12_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
    auVar45._0_8_ = uVar20 & (ulonglong)(auVar56._0_8_ * dVar54);
    uVar13 = uVar21 & (ulonglong)(auVar56._8_8_ * dVar51);
    auVar45._8_4_ = (undefined4)uVar13;
    auVar45._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar45 = auVar45 | auVar31;
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
    auVar32._0_8_ = auVar39._0_8_ * dVar55;
    auVar32._8_8_ = auVar39._8_8_ * dVar64;
  }
  else {
    dVar55 = local_158.Z * local_158.Z + local_158.X * local_158.X;
    dVar22 = local_158.W * local_158.W + local_158.Y * local_158.Y;
    dVar64 = dVar22 + dVar55;
    dVar55 = dVar55 + dVar22;
    auVar9._8_4_ = SUB84(dVar55,0);
    auVar9._0_8_ = dVar64;
    auVar9._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
    auVar39 = sqrtpd(auVar41,auVar9);
    uVar20 = -(ulonglong)(dVar6 <= dVar64);
    uVar21 = -(ulonglong)(dVar6 <= dVar55);
    auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
    dVar64 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dVar55 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    auVar46._0_8_ = uVar20 & (ulonglong)(auVar56._0_8_ * local_158.X);
    uVar13 = uVar21 & (ulonglong)(auVar56._8_8_ * local_158.Y);
    auVar46._8_4_ = (undefined4)uVar13;
    auVar46._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar33._0_4_ = ~(uint)uVar20 & SUB84(dVar64,0);
    auVar33._4_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)dVar64 >> 0x20);
    auVar33._8_4_ = ~(uint)uVar21 & SUB84(dVar55,0);
    auVar33._12_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar55 >> 0x20);
    auVar45 = auVar46 | auVar33;
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
    auVar32._0_8_ = auVar39._0_8_ * local_158.Z;
    auVar32._8_8_ = auVar39._8_8_ * local_158.W;
  }
  uVar44 = (uint)(uVar21 >> 0x20);
  uVar43 = (uint)(uVar20 >> 0x20);
  dVar54 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar59 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar53 = (param_3->Rotation).XY.m128d_f64[0];
  dVar60 = (param_3->Rotation).XY.m128d_f64[1];
  auVar34._0_4_ = auVar32._0_4_ & (uint)uVar20;
  auVar34._4_4_ = auVar32._4_4_ & uVar43;
  auVar34._8_4_ = auVar32._8_4_ & (uint)uVar21;
  auVar34._12_4_ = auVar32._12_4_ & uVar44;
  auVar50._0_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar50._4_4_ =
       ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar50._8_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar50._12_4_ =
       ~uVar44 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar47 = auVar45._0_8_;
  dVar38 = auVar45._8_8_;
  dVar48 = SUB168(auVar50 | auVar34,0);
  dVar52 = SUB168(auVar50 | auVar34,8);
  auVar35._8_4_ = auVar45._8_4_;
  auVar35._0_8_ = dVar38;
  auVar35._12_4_ = auVar45._12_4_;
  auVar42._8_4_ = auVar45._0_4_;
  auVar42._0_8_ = dVar47;
  auVar42._12_4_ = auVar45._4_4_;
  dVar64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar51 = dVar54 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar52 * dVar60 +
           dVar38 * dVar59 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar48 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar12._8_4_ = SUB84(dVar51,0);
  auVar12._0_8_ =
       dVar59 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar52 * dVar53 +
       dVar38 * dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar48 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar12._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar12;
  (param_3->Rotation).ZW.m128d_f64[0] =
       dVar47 * dVar60 * dVar64 + dVar52 * dVar54 + dVar38 * dVar53 * dVar55 +
       dVar48 * dVar59 * dVar22;
  (param_3->Rotation).ZW.m128d_f64[1] =
       auVar42._8_8_ * dVar53 * dVar36 + dVar52 * dVar59 + auVar35._8_8_ * dVar60 * dVar37 +
       dVar48 * dVar54 * dVar6;
  (param_3->Translation).XY.m128d_f64[0] = local_180;
  (param_3->Translation).XY.m128d_f64[1] = dStack_178;
  (param_3->Translation).ZW.m128d_f64[0] = dVar1;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  (param_5->Translation).XY.m128d_f64[0] = local_d8;
  (param_5->Translation).XY.m128d_f64[1] = dStack_d0;
  (param_5->Translation).ZW.m128d_f64[0] = local_188;
  (param_5->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// Solve_Modified_Direct_TwoBoneIK_4 @ 14d35aa90

void __cdecl
UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK_4
          (FDragonData_ArmSizeStruct *param_1,TTransform<double> *param_2,float param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,TTransform<double> *param_6,
          TVector<double> *param_7,TVector<double> *param_8,bool param_9,float param_10,
          float param_11,float param_12,bool param_13)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  TTransform<double> local_78;
  
  dVar4 = (param_5->Translation).ZW.m128d_f64[0];
  dVar2 = (param_6->Translation).XY.m128d_f64[0] - (param_5->Translation).XY.m128d_f64[0];
  dVar3 = (param_6->Translation).ZW.m128d_f64[0] - dVar4;
  dVar5 = (param_6->Translation).XY.m128d_f64[1] - (param_5->Translation).XY.m128d_f64[1];
  dVar4 = dVar4 - (param_4->Translation).ZW.m128d_f64[0];
  fVar6 = (float)SQRT(dVar5 * dVar5 + dVar2 * dVar2 + dVar3 * dVar3);
  dVar2 = (param_5->Translation).XY.m128d_f64[0] - (param_4->Translation).XY.m128d_f64[0];
  dVar3 = (param_5->Translation).XY.m128d_f64[1] - (param_4->Translation).XY.m128d_f64[1];
  fVar1 = (float)SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4);
  if (param_1->Use_Custom_Arm_Sizes != false) {
    fVar6 = param_1->custom_lowerArm_length;
    fVar1 = param_1->custom_upperArm_length;
  }
  local_78.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_78.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_78.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_78.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_78.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_78.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_78.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_78.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_78.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_78.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_78.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_78.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  Solve_Modified_Direct_TwoBoneIK_3
            (&local_78,param_3,param_4,param_5,param_6,param_7,param_8,fVar1,fVar6,param_9,param_10,
             param_11,param_12,param_13);
  return;
}

// SolverMove @ 14d35bbb0

void __cdecl
UDragonIK_Library::SolverMove
          (TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar10 = (ulonglong)param_2;
  iVar8 = param_1->ArrayNum;
  if (param_2 < iVar8) {
    lVar11 = uVar10 * 0xa0;
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar10 = (ulonglong)(uVar9 + 1);
      dVar5 = (param_3->field0_0x0)._s_0.Y;
      dVar4 = (param_3->field0_0x0)._s_0.Z;
      *(double *)(pFVar1 + lVar11) = *(double *)(pFVar1 + lVar11) + (param_3->field0_0x0)._s_0.X;
      dVar4 = dVar4 + *(double *)(pFVar1 + lVar11 + 8 + 8);
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = dVar5 + *(double *)(pFVar1 + lVar11 + 8);
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar11 + 8) = auVar3;
      iVar8 = param_1->ArrayNum;
      lVar11 = lVar11 + 0xa0;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  return;
}

// SolverMoveChildrenAroundPoint @ 14d35bc80

void __cdecl
UDragonIK_Library::SolverMoveChildrenAroundPoint
          (TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TQuat<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [3];
  
  iVar14 = param_1->ArrayNum;
  uVar13 = param_2 + 1;
  if ((int)uVar13 < iVar14) {
    lVar15 = (longlong)param_2 * 0xa0;
    lVar12 = (longlong)(int)uVar13 * 0xa0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < iVar14) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      uVar11 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar11 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      dVar1 = *(double *)(pFVar7 + lVar12);
      dVar2 = *(double *)(pFVar7 + lVar12 + 8);
      dVar3 = *(double *)(pFVar7 + lVar12 + 0x10);
      dVar4 = *(double *)(pFVar8 + lVar15);
      dVar5 = *(double *)(pFVar8 + lVar15 + 8);
      dVar6 = *(double *)(pFVar8 + lVar15 + 0x10);
      uVar11 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar11 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      local_a8._s_0.X = dVar1 - dVar4;
      local_a8._s_0.Y = dVar2 - dVar5;
      local_a8._s_0.Z = dVar3 - dVar6;
      UE::Math::TQuat<double>::RotateVector
                (param_3,(TVector<double> *)&local_88[0]._s_0,(TVector<double> *)&local_a8._s_0);
      uVar11 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      dVar1 = (double)local_88[0]._0_8_ + *(double *)(pFVar7 + lVar15);
      dVar2 = (double)local_88[0]._8_8_ + *(double *)(pFVar7 + lVar15 + 8);
      dVar3 = (double)local_88[0]._16_8_ + *(double *)(pFVar7 + lVar15 + 0x10);
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      uVar13 = uVar13 + 1;
      *(double *)(pFVar7 + lVar12) = dVar1;
      *(double *)(pFVar7 + lVar12 + 8) = dVar2;
      *(double *)(pFVar7 + lVar12 + 0x10) = dVar3;
      lVar12 = lVar12 + 0xa0;
      iVar14 = param_1->ArrayNum;
    } while ((int)uVar13 < iVar14);
  }
  return;
}

// SolverRotate @ 14d35bf20

void __cdecl
UDragonIK_Library::SolverRotate
          (TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TQuat<double> *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  
  uVar26 = (ulonglong)param_2;
  iVar24 = param_1->ArrayNum;
  if (param_2 < iVar24) {
    lVar27 = uVar26 * 0xa0;
    do {
      uVar25 = (uint)uVar26;
      uVar23 = 0;
      if ((int)uVar25 < iVar24) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      dVar14 = param_3->X;
      dVar15 = param_3->Y;
      dVar16 = param_3->Z;
      dVar17 = param_3->W;
      pFVar1 = pFVar2 + lVar27 + 0x40;
      dVar18 = *(double *)pFVar1;
      dVar19 = *(double *)(pFVar1 + 8);
      pFVar2 = pFVar2 + lVar27 + 0x30;
      dVar20 = *(double *)pFVar2;
      dVar21 = *(double *)(pFVar2 + 8);
      uVar23 = 0;
      if ((int)uVar25 < param_1->ArrayNum) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar13 = dVar14 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar21 * dVar17 +
               dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar16 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar11 = dVar14 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar19 * dVar17 +
               dVar21 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar16 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      auVar12._8_4_ = SUB84(dVar13,0);
      auVar12._0_8_ =
           dVar14 * dVar19 * dVar5 + dVar20 * dVar17 + dVar18 * dVar15 * dVar6 +
           dVar16 * dVar21 * dVar8;
      auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar27 + 0x30) = auVar12;
      auVar10._8_4_ = SUB84(dVar11,0);
      auVar10._0_8_ =
           dVar14 * dVar21 * dVar4 + dVar18 * dVar17 + dVar20 * dVar15 * dVar7 +
           dVar16 * dVar19 * dVar9;
      auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar27 + 0x40) = auVar10;
      if (!param_4) {
        return;
      }
      iVar24 = param_1->ArrayNum;
      uVar26 = (ulonglong)(uVar25 + 1);
      lVar27 = lVar27 + 0xa0;
    } while ((int)(uVar25 + 1) < iVar24);
  }
  return;
}

// SolverRotateChildren @ 14d35c170

void __cdecl
UDragonIK_Library::SolverRotateChildren
          (TArray<FCCDIK_Modified_ChainLink,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TQuat<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  
  uVar25 = param_2 + 1;
  iVar24 = param_1->ArrayNum;
  if ((int)uVar25 < iVar24) {
    lVar26 = (longlong)(int)uVar25 * 0xa0;
    do {
      uVar23 = 0;
      if ((int)uVar25 < iVar24) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      dVar14 = param_3->X;
      dVar15 = param_3->Y;
      dVar16 = param_3->Z;
      dVar17 = param_3->W;
      pFVar1 = pFVar2 + lVar26 + 0x40;
      dVar18 = *(double *)pFVar1;
      dVar19 = *(double *)(pFVar1 + 8);
      pFVar2 = pFVar2 + lVar26 + 0x30;
      dVar20 = *(double *)pFVar2;
      dVar21 = *(double *)(pFVar2 + 8);
      uVar23 = 0;
      if ((int)uVar25 < param_1->ArrayNum) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar13 = dVar14 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar21 * dVar17 +
               dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar16 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar11 = dVar14 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar19 * dVar17 +
               dVar21 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar16 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar25 = uVar25 + 1;
      auVar12._8_4_ = SUB84(dVar13,0);
      auVar12._0_8_ =
           dVar14 * dVar19 * dVar5 + dVar20 * dVar17 + dVar18 * dVar15 * dVar6 +
           dVar16 * dVar21 * dVar8;
      auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar26 + 0x30) = auVar12;
      auVar10._8_4_ = SUB84(dVar11,0);
      auVar10._0_8_ =
           dVar14 * dVar21 * dVar4 + dVar18 * dVar17 + dVar20 * dVar15 * dVar7 +
           dVar16 * dVar19 * dVar9;
      auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar26 + 0x40) = auVar10;
      iVar24 = param_1->ArrayNum;
      lVar26 = lVar26 + 0xa0;
    } while ((int)uVar25 < iVar24);
  }
  return;
}

// TraceSelectorFire @ 14d35d7a0

bool __cdecl
UDragonIK_Library::TraceSelectorFire
          (UDragonIKTraceManagerComponent *param_1,UObject *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,bool param_6,ETraceTypeQuery param_7,bool param_8,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_9,Type param_10,FHitResult *param_11,
          bool param_12,FLinearColor *param_13,FName param_14,FName param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  FHitResult *pFVar8;
  longlong lVar9;
  FDragonIKTraceMParams local_158;
  
  FDragonIKTraceMParams::FDragonIKTraceMParams(&local_158);
  local_158.StartLocation.field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_158.StartLocation.field0_0x0._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_158.StartLocation.field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_158.TraceType = !param_6;
  local_158.EndLocation.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_158.EndLocation.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_158.ChannelInput.Value = (undefined1)param_7;
  local_158.EndLocation.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  local_158.bone_text = param_15;
  local_158.is_line_type = param_6;
  local_158.TraceIdentifier = param_14;
  local_158.SphereRadius = param_5;
  if (param_1 != (UDragonIKTraceManagerComponent *)0x0) {
    param_1->hand_shaked = true;
    UDragonIKTraceManagerComponent::IssueTraceInput(param_1,&local_158);
    lVar9 = 2;
    pFVar8 = &local_158.hit_result;
    do {
      fVar5 = pFVar8->Time;
      fVar6 = pFVar8->Distance;
      iVar7 = pFVar8->_padding_;
      uVar1 = *(undefined8 *)&pFVar8->Location;
      uVar2 = *(undefined8 *)&(pFVar8->Location).field_0x8;
      param_11->FaceIndex = pFVar8->FaceIndex;
      param_11->Time = fVar5;
      param_11->Distance = fVar6;
      param_11->_padding_ = iVar7;
      uVar3 = *(undefined8 *)&(pFVar8->Location).field_0x10;
      uVar4 = *(undefined8 *)&pFVar8->ImpactPoint;
      *(undefined8 *)&param_11->Location = uVar1;
      *(undefined8 *)&(param_11->Location).field_0x8 = uVar2;
      uVar1 = *(undefined8 *)&(pFVar8->ImpactPoint).field_0x8;
      uVar2 = *(undefined8 *)&(pFVar8->ImpactPoint).field_0x10;
      *(undefined8 *)&(param_11->Location).field_0x10 = uVar3;
      *(undefined8 *)&param_11->ImpactPoint = uVar4;
      uVar3 = *(undefined8 *)&pFVar8->Normal;
      uVar4 = *(undefined8 *)&(pFVar8->Normal).field_0x8;
      *(undefined8 *)&(param_11->ImpactPoint).field_0x8 = uVar1;
      *(undefined8 *)&(param_11->ImpactPoint).field_0x10 = uVar2;
      uVar1 = *(undefined8 *)&(pFVar8->Normal).field_0x10;
      uVar2 = *(undefined8 *)&pFVar8->ImpactNormal;
      *(undefined8 *)&param_11->Normal = uVar3;
      *(undefined8 *)&(param_11->Normal).field_0x8 = uVar4;
      uVar3 = *(undefined8 *)&(pFVar8->ImpactNormal).field_0x8;
      uVar4 = *(undefined8 *)&(pFVar8->ImpactNormal).field_0x10;
      *(undefined8 *)&(param_11->Normal).field_0x10 = uVar1;
      *(undefined8 *)&param_11->ImpactNormal = uVar2;
      uVar1 = *(undefined8 *)&pFVar8->TraceStart;
      uVar2 = *(undefined8 *)&(pFVar8->TraceStart).field_0x8;
      *(undefined8 *)&(param_11->ImpactNormal).field_0x8 = uVar3;
      *(undefined8 *)&(param_11->ImpactNormal).field_0x10 = uVar4;
      *(undefined8 *)&param_11->TraceStart = uVar1;
      *(undefined8 *)&(param_11->TraceStart).field_0x8 = uVar2;
      lVar9 = lVar9 + -1;
      param_11 = (FHitResult *)&(param_11->TraceStart).field_0x10;
      pFVar8 = (FHitResult *)&(pFVar8->TraceStart).field_0x10;
    } while (lVar9 != 0);
  }
  return true;
}

// UnityLookRotation @ 14d35da20

TQuat<double> * __cdecl
UDragonIK_Library::UnityLookRotation
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  dVar7 = __real_3e45798ee0000000;
  dVar22 = (param_1->field0_0x0)._s_0.Z;
  dVar11 = (param_1->field0_0x0)._s_0.X;
  dVar17 = (param_1->field0_0x0)._s_0.Y;
  dVar15 = dVar17 * dVar17 + dVar11 * dVar11 + dVar22 * dVar22;
  if (dVar15 == __real_3ff0000000000000) {
    uVar1 = (param_1->field0_0x0)._s_0.X;
    uVar2 = (param_1->field0_0x0)._s_0.Y;
    uVar3 = (param_1->field0_0x0)._s_0.Z;
  }
  else {
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar15) {
      dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
      uVar1 = dVar11 * dVar15;
      uVar2 = dVar17 * dVar15;
      uVar3 = dVar22 * dVar15;
    }
  }
  dVar22 = (param_2->field0_0x0)._s_0.Z;
  dVar11 = (param_2->field0_0x0)._s_0.X;
  dVar17 = (param_2->field0_0x0)._s_0.Y;
  dVar15 = dVar17 * (double)uVar3 - dVar22 * (double)uVar2;
  dVar17 = dVar11 * (double)uVar2 - dVar17 * (double)uVar1;
  dVar22 = dVar22 * (double)uVar1 - dVar11 * (double)uVar3;
  fVar28 = (float)dVar15;
  fVar29 = (float)dVar22;
  fVar30 = (float)dVar17;
  fVar25 = (float)(double)uVar1;
  fVar21 = (float)(dVar22 * (double)uVar1 - dVar15 * (double)uVar2);
  fVar16 = (float)(dVar15 * (double)uVar3 - dVar17 * (double)uVar1);
  fVar31 = (float)(dVar17 * (double)uVar2 - dVar22 * (double)uVar3);
  fVar10 = (float)(double)uVar3;
  fVar19 = (float)(double)uVar2;
  auVar23 = ZEXT416((uint)fVar19);
  fVar14 = fVar16 + fVar28 + fVar10;
  if (fVar14 <= 0.0) {
    if ((fVar28 < fVar16) || (fVar28 < fVar10)) {
      if (fVar16 <= fVar10) {
        fVar10 = SQRT(((fVar10 + __real_3f800000) - fVar28) - fVar16);
        fVar14 = __real_3f000000 / fVar10;
        auVar23 = ZEXT416((uint)fVar14);
        fVar10 = fVar10 * __real_3f000000;
        __return_storage_ptr__->X = (double)((fVar25 + fVar30) * fVar14);
        __return_storage_ptr__->Y = (double)(fVar14 * (fVar21 + fVar19));
        __return_storage_ptr__->Z = (double)fVar10;
        dVar22 = (double)((fVar29 - fVar31) * fVar14);
      }
      else {
        fVar10 = SQRT(((fVar16 + __real_3f800000) - fVar28) - fVar10);
        fVar14 = __real_3f000000 / fVar10;
        fVar10 = fVar10 * __real_3f000000;
        __return_storage_ptr__->X = (double)((fVar29 + fVar31) * fVar14);
        __return_storage_ptr__->Y = (double)fVar10;
        __return_storage_ptr__->Z = (double)(fVar14 * (fVar21 + fVar19));
        dVar22 = (double)((fVar25 - fVar30) * fVar14);
      }
    }
    else {
      fVar10 = SQRT(((fVar28 + __real_3f800000) - fVar16) - fVar10);
      fVar14 = __real_3f000000 / fVar10;
      __return_storage_ptr__->X = (double)(fVar10 * __real_3f000000);
      __return_storage_ptr__->Y = (double)((fVar29 + fVar31) * fVar14);
      __return_storage_ptr__->Z = (double)((fVar25 + fVar30) * fVar14);
      dVar22 = (double)((fVar21 - fVar19) * fVar14);
    }
  }
  else {
    fVar14 = SQRT(fVar14 + __real_3f800000);
    fVar10 = __real_3f000000 / fVar14;
    fVar14 = fVar14 * __real_3f000000;
    __return_storage_ptr__->X = (double)((fVar21 - fVar19) * fVar10);
    __return_storage_ptr__->Y = (double)((fVar25 - fVar30) * fVar10);
    __return_storage_ptr__->Z = (double)((fVar29 - fVar31) * fVar10);
    dVar22 = (double)fVar14;
  }
  __return_storage_ptr__->W = dVar22;
  dVar17 = __return_storage_ptr__->Z;
  dVar15 = __return_storage_ptr__->W;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar11 = dVar17 * dVar17 + dVar5 * dVar5;
  dVar13 = dVar15 * dVar15 + dVar6 * dVar6;
  dVar22 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar20._8_4_ = SUB84(dVar11,0);
  auVar20._0_8_ = dVar22;
  auVar20._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar20 = sqrtpd(auVar23,auVar20);
  uVar8 = -(ulonglong)(dVar7 <= dVar22);
  uVar9 = -(ulonglong)(dVar7 <= dVar11);
  uVar26 = (uint)(uVar8 >> 0x20);
  uVar27 = (uint)(uVar9 >> 0x20);
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
  auVar24._0_8_ = uVar8 & (ulonglong)(auVar23._0_8_ * dVar5);
  uVar4 = uVar9 & (ulonglong)(auVar23._8_8_ * dVar6);
  auVar24._8_4_ = (undefined4)uVar4;
  auVar24._12_4_ = (undefined4)(uVar4 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
  auVar18._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar18._4_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar18._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar18._12_4_ =
       ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar20._0_8_ * dVar17) & uVar8;
  uVar9 = (ulonglong)(auVar20._8_8_ * dVar15) & uVar9;
  auVar12._8_4_ = (undefined4)uVar9;
  auVar12._12_4_ = (undefined4)(uVar9 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar24 | auVar23,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar24 | auVar23,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar18 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar18 | auVar12,8);
  return __return_storage_ptr__;
}

// UnityRotateTowards @ 14d35de10

TQuat<double> * __cdecl
UDragonIK_Library::UnityRotateTowards
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          float param_3)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TQuat<double> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  uint uVar19;
  uint uVar20;
  TQuat<double> local_48 [2];
  
  dVar13 = param_1->W * param_2->W + param_1->Z * param_2->Z +
           param_1->Y * param_2->Y + param_1->X * param_2->X;
  dVar13 = (dVar13 + dVar13) * dVar13 - __real_3ff0000000000000;
  dVar10 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar13) && (dVar10 = dVar13, __real_3ff0000000000000 <= dVar13)) {
    dVar10 = __real_3ff0000000000000;
  }
  dVar13 = acos(dVar10);
  if ((float)dVar13 == 0.0) {
    dVar13 = param_2->Y;
    dVar10 = param_2->Z;
    dVar2 = param_2->W;
    __return_storage_ptr__->X = param_2->X;
    __return_storage_ptr__->Y = dVar13;
    __return_storage_ptr__->Z = dVar10;
    __return_storage_ptr__->W = dVar2;
  }
  else {
    fVar18 = param_3 / (float)dVar13;
    if (__real_3f800000 <= fVar18) {
      fVar18 = __real_3f800000;
    }
    pTVar7 = UE::Math::TQuat<double>::Slerp_NotNormalized(local_48,param_1,param_2,(double)fVar18);
    dVar6 = __real_3e45798ee0000000;
    dVar13 = pTVar7->Y;
    __return_storage_ptr__->X = pTVar7->X;
    __return_storage_ptr__->Y = dVar13;
    dVar2 = pTVar7->Z;
    dVar3 = pTVar7->W;
    __return_storage_ptr__->Z = dVar2;
    __return_storage_ptr__->W = dVar3;
    dVar4 = __return_storage_ptr__->X;
    dVar5 = __return_storage_ptr__->Y;
    dVar10 = dVar2 * dVar2 + dVar4 * dVar4;
    dVar12 = dVar3 * dVar3 + dVar5 * dVar5;
    dVar13 = dVar12 + dVar10;
    dVar10 = dVar10 + dVar12;
    auVar15._8_4_ = SUB84(dVar10,0);
    auVar15._0_8_ = dVar13;
    auVar15._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar15 = sqrtpd(in_XMM4,auVar15);
    uVar8 = -(ulonglong)(dVar6 <= dVar13);
    uVar9 = -(ulonglong)(dVar6 <= dVar10);
    uVar19 = (uint)(uVar8 >> 0x20);
    uVar20 = (uint)(uVar9 >> 0x20);
    auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
    auVar17._0_8_ = uVar8 & (ulonglong)(auVar16._0_8_ * dVar4);
    uVar1 = uVar9 & (ulonglong)(auVar16._8_8_ * dVar5);
    auVar17._8_4_ = (undefined4)uVar1;
    auVar17._12_4_ = (undefined4)(uVar1 >> 0x20);
    auVar16._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar16._4_4_ =
         ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar16._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar16._12_4_ =
         ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
    auVar14._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar14._4_4_ =
         ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar14._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar14._12_4_ =
         ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    __return_storage_ptr__->X = (double)SUB168(auVar17 | auVar16,0);
    __return_storage_ptr__->Y = (double)SUB168(auVar17 | auVar16,8);
    auVar11._0_8_ = (ulonglong)(auVar15._0_8_ * dVar2) & uVar8;
    uVar9 = (ulonglong)(auVar15._8_8_ * dVar3) & uVar9;
    auVar11._8_4_ = (undefined4)uVar9;
    auVar11._12_4_ = (undefined4)(uVar9 >> 0x20);
    __return_storage_ptr__->Z = (double)SUB168(auVar14 | auVar11,0);
    __return_storage_ptr__->W = (double)SUB168(auVar14 | auVar11,8);
  }
  return __return_storage_ptr__;
}

