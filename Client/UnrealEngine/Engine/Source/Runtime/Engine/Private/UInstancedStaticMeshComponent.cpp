// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 171

// StaticClass @ 14727be90

UClass * __cdecl UInstancedStaticMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInstancedStaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUInstancedStaticMeshComponent,0xa00,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UInstancedStaticMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInstancedStaticMeshComponent.InnerSingleton;
}

// GetPrivateStaticClass @ 1472810a0

UClass * __cdecl UInstancedStaticMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInstancedStaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUInstancedStaticMeshComponent,0xa00,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UInstancedStaticMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInstancedStaticMeshComponent.InnerSingleton;
}

// Serialize @ 147281410

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::Serialize
          (UInstancedStaticMeshComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUInstancedStaticMeshComponent @ 147281570

void __cdecl UInstancedStaticMeshComponent::StaticRegisterNativesUInstancedStaticMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddInstance @ 147282780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInstancedStaticMeshComponent::execAddInstance(UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined4 uVar14;
  double *pdVar15;
  undefined1 auStack_c8 [32];
  int local_a8 [4];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
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
  local_98 = (double)fVar2;
  dStack_90 = (double)fVar5;
  local_88 = (double)fVar8;
  dStack_80 = (double)fVar11;
  local_68 = (double)fVar9;
  dStack_60 = (double)fVar12;
  local_78._8_4_ = SUB84((double)fVar6,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_48 = (double)fVar10;
  dStack_40 = (double)fVar13;
  local_58._8_4_ = SUB84((double)fVar7,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8[0] = 0;
  pdVar15 = &local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar14 = (**(code **)(*(longlong *)param_1 + 0xbb0))(param_1,pdVar15,local_a8[0] != 0);
  *(undefined4 *)param_3 = uVar14;
  return;
}

// execAddInstanceWorldSpace @ 1472828e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInstancedStaticMeshComponent::execAddInstanceWorldSpace
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined4 uVar14;
  double *pdVar15;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
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
  local_88 = (double)fVar2;
  dStack_80 = (double)fVar5;
  local_78 = (double)fVar8;
  dStack_70 = (double)fVar11;
  local_58 = (double)fVar9;
  dStack_50 = (double)fVar12;
  local_68._8_4_ = SUB84((double)fVar6,0);
  local_68._0_8_ = (double)fVar3;
  local_68._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_38 = (double)fVar10;
  dStack_30 = (double)fVar13;
  local_48._8_4_ = SUB84((double)fVar7,0);
  local_48._0_8_ = (double)fVar4;
  local_48._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pdVar15 = &local_88;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar14 = (**(code **)(*(longlong *)param_1 + 0xbb0))(param_1,pdVar15,1);
  *(undefined4 *)param_3 = uVar14;
  return;
}

// execAddInstances @ 147282a00

void __cdecl
UInstancedStaticMeshComponent::execAddInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  void *local_58;
  undefined8 local_50;
  void *local_48 [2];
  
  local_58 = (void *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  ppvVar3 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 3000))
                     (param_1,local_48,ppvVar3,bVar4,bVar5,local_res18[0] != 0);
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execBatchUpdateInstancesTransform @ 147282c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInstancedStaticMeshComponent::execBatchUpdateInstancesTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined1 uVar12;
  double *pdVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [4];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_b8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_bc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_bc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_bc);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98 = (double)fVar6;
  dStack_90 = (double)fVar9;
  local_78 = (double)fVar7;
  dStack_70 = (double)fVar10;
  local_88._8_4_ = SUB84((double)fVar4,0);
  local_88._0_8_ = (double)fVar2;
  local_88._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_58 = (double)fVar8;
  dStack_50 = (double)fVar11;
  local_68._8_4_ = SUB84((double)fVar5,0);
  local_68._0_8_ = (double)fVar3;
  local_68._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_c8 = 0;
  pdVar13 = &local_a8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  bVar14 = local_c8 != 0;
  local_c4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c4);
  }
  bVar15 = local_c4 != 0;
  local_c0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_d8 = local_c0 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8 = bVar14;
  local_e0 = bVar15;
  uVar12 = (**(code **)(*(longlong *)param_1 + 0xc10))(param_1,local_b8[0],local_bc,pdVar13);
  *(undefined1 *)param_3 = uVar12;
  return;
}

// execBatchUpdateInstancesTransforms @ 147282e80

void __cdecl
UInstancedStaticMeshComponent::execBatchUpdateInstancesTransforms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  void *local_48;
  undefined8 local_40;
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  ppvVar3 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xc08))
                    (param_1,local_res20[0],ppvVar3,bVar4,bVar5,local_res18[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execClearInstances @ 147283090

void __cdecl
UInstancedStaticMeshComponent::execClearInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001472830a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xc38))();
  return;
}

// execGetCullDistances @ 147283170

void __cdecl
UInstancedStaticMeshComponent::execGetCullDistances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res8 [8];
  uchar local_res10 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_res8;
  if (puVar5 != (uchar *)0x0) {
    puVar6 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[0x2d].field_0x9;
  uVar3 = param_1[0x2d].field_0xa;
  uVar4 = param_1[0x2d].field_0xb;
  puVar6[0] = param_1[0x2d].field_0x8;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  uVar2 = param_1[0x2d].field_0xd;
  uVar3 = param_1[0x2d].field_0xe;
  uVar4 = param_1[0x2d].field_0xf;
  puVar5[0] = param_1[0x2d].field_0xc;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  return;
}

// execGetInstanceCount @ 147283260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UInstancedStaticMeshComponent::execGetInstanceCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetInstanceCount((UInstancedStaticMeshComponent *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetInstanceTransform @ 1472832a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UInstancedStaticMeshComponent::execGetInstanceTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  bool bVar12;
  TTransform<double> *pTVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4 [3];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a4[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a4);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_98.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_98.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_98.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = 0;
  pTVar13 = &local_98;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar13 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar12 = GetInstanceTransform
                     ((UInstancedStaticMeshComponent *)param_1,local_a4[0],pTVar13,local_a8 != 0);
  *(bool *)param_3 = bVar12;
  return;
}

// execGetInstancesOverlappingBox @ 147283440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInstancedStaticMeshComponent::execGetInstancesOverlappingBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  undefined1 auStack_a8 [32];
  int local_88 [2];
  void *local_80 [2];
  uchar local_70 [48];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_88[0] = 0;
  puVar3 = local_70;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0xc48))(param_1,local_80,puVar3,local_88[0] != 0);
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_80[0] != (void *)0x0) {
    FMemory::Free(local_80[0]);
  }
  return;
}

// execGetInstancesOverlappingSphere @ 147283590

void __cdecl
UInstancedStaticMeshComponent::execGetInstancesOverlappingSphere
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  int local_res8 [2];
  undefined4 local_res10 [2];
  void *local_48 [2];
  uchar local_38 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0xc40))
                     (param_1,local_48,puVar3,local_res10[0],local_res8[0] != 0);
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  return;
}

// execGetLODDistanceScale @ 147283720

void __cdecl
UInstancedStaticMeshComponent::execGetLODDistanceScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x2d);
  return;
}

// execIsValidInstance @ 147283800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UInstancedStaticMeshComponent::execIsValidInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsValidInstance((UInstancedStaticMeshComponent *)param_1,local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execRemoveInstance @ 1472838d0

void __cdecl
UInstancedStaticMeshComponent::execRemoveInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xc20))(param_1,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execRemoveInstances @ 147283970

void __cdecl
UInstancedStaticMeshComponent::execRemoveInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar3 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xc30))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetCullDistances @ 147283b80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UInstancedStaticMeshComponent::execSetCullDistances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCullDistances((UInstancedStaticMeshComponent *)param_1,local_res20[0],local_res10[0]);
  return;
}

// execSetCustomDataValue @ 147283c50

void __cdecl
UInstancedStaticMeshComponent::execSetCustomDataValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xbc8))
                    (param_1,local_res20[0],local_res18[0],local_res10[0],local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSetLODDistanceScale @ 147283db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UInstancedStaticMeshComponent::execSetLODDistanceScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLODDistanceScale((UInstancedStaticMeshComponent *)param_1,local_res10[0]);
  return;
}

// execSetNumCustomDataFloats @ 147283e40

void __cdecl
UInstancedStaticMeshComponent::execSetNumCustomDataFloats
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xbd0))(param_1,local_res8[0]);
  return;
}

// execUpdateInstanceTransform @ 147283ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInstancedStaticMeshComponent::execUpdateInstanceTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined1 uVar12;
  double *pdVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_ac = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ac,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ac);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98 = (double)fVar6;
  dStack_90 = (double)fVar9;
  local_78 = (double)fVar7;
  dStack_70 = (double)fVar10;
  local_88._8_4_ = SUB84((double)fVar4,0);
  local_88._0_8_ = (double)fVar2;
  local_88._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_58 = (double)fVar8;
  dStack_50 = (double)fVar11;
  local_68._8_4_ = SUB84((double)fVar5,0);
  local_68._0_8_ = (double)fVar3;
  local_68._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8 = 0;
  pdVar13 = &local_a8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  bVar14 = local_b8 != 0;
  local_b4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  bVar15 = local_b4 != 0;
  local_b0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_c0 = local_b0 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = bVar15;
  uVar12 = (**(code **)(*(longlong *)param_1 + 0xbf0))(param_1,local_ac,pdVar13,bVar14);
  *(undefined1 *)param_3 = uVar12;
  return;
}

// <lambda_1> @ 147cc2370

<lambda_1> * __thiscall
`UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon'::__l5::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  *(int *)this = param_1->InstancingRandomSeed;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->AdditionalRandomSeeds).ArrayNum;
  _Src = (param_1->AdditionalRandomSeeds).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x10) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x14));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// UInstancedStaticMeshComponent @ 147cc6ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UInstancedStaticMeshComponent * __thiscall
UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
          (UInstancedStaticMeshComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->PerInstanceSMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->PerInstanceSMData).ArrayNum = 0;
  (this->PerInstanceSMData).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  (this->PerInstancePrevTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstancePrevTransform).ArrayNum = 0;
  (this->PerInstancePrevTransform).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UInstancedStaticMeshComponent__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bIsInstanceDataApplyCompleted = '\x01';
  this->InstancingRandomSeed = 0;
  (this->PerInstanceSMCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceSMCustomData).ArrayNum = 0;
  (this->PerInstanceSMCustomData).ArrayMax = 0;
  (this->AdditionalRandomSeeds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRandomSeeds).ArrayNum = 0;
  (this->AdditionalRandomSeeds).ArrayMax = 0;
  this->InstanceLODDistanceScale = 1.0;
  (this->InstanceReorderTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceReorderTable).ArrayNum = 0;
  (this->InstanceReorderTable).ArrayMax = 0;
  (this->CachedConservativeInstanceBounds).IsValid = '\0';
  (this->AsyncDestroyPhysicsStatePayload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncDestroyPhysicsStatePayload).ArrayNum = 0;
  (this->AsyncDestroyPhysicsStatePayload).ArrayMax = 0;
  (this->InstanceBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceBodies).ArrayNum = 0;
  (this->InstanceBodies).ArrayMax = 0;
  FPrimitiveInstanceDataManager::FPrimitiveInstanceDataManager
            (&this->PrimitiveInstanceDataManager,(UPrimitiveComponent *)this);
  (this->CachedMappings).ArrayNum = 0;
  (this->CachedMappings).ArrayMax = 0;
  this->CachedBounds[0].Value.Origin.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[0].Value.Origin.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[0].Value.Origin.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[0].Value.BoxExtent.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[0].Value.BoxExtent.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[0].Value.BoxExtent.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[0].Value.SphereRadius = 0.0;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->CachedMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[0].Hash = 0;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[1].Hash = 0;
  this->CachedBounds[1].Value.Origin.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[1].Value.SphereRadius = 0.0;
  this->CachedBounds[2].bIsValid = false;
  this->CachedBounds[2].Hash = 0;
  this->CachedBounds[2].Value.Origin.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[2].Value.Origin.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[2].Value.Origin.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[2].Value.BoxExtent.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[2].Value.BoxExtent.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[2].Value.BoxExtent.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[2].Value.SphereRadius = 0.0;
  this->bNavigationCachedBoundsUpdated = false;
  return this;
}

// UInstancedStaticMeshComponent @ 147cc70f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UInstancedStaticMeshComponent * __thiscall
UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
          (UInstancedStaticMeshComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte bVar4;
  TAtomic<FMinimalName> TVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UInstancedStaticMeshComponent *pUVar9;
  FUObjectItem *pFVar10;
  FUObjectItem *this_00;
  
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->PerInstanceSMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->PerInstanceSMData).ArrayNum = 0;
  (this->PerInstanceSMData).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  (this->PerInstancePrevTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstancePrevTransform).ArrayNum = 0;
  (this->PerInstancePrevTransform).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UInstancedStaticMeshComponent__6B_;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar6;
  (this->PreviousComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar7;
  (this->PreviousComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar8;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar6;
  (this->PreviousComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar7;
  (this->PreviousComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar8;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar6;
  (this->PreviousComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  (this->PreviousComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar8;
  (this->PerInstanceSMCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceSMCustomData).ArrayNum = 0;
  (this->PerInstanceSMCustomData).ArrayMax = 0;
  (this->AdditionalRandomSeeds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRandomSeeds).ArrayNum = 0;
  (this->AdditionalRandomSeeds).ArrayMax = 0;
  this->bIsInstanceDataApplyCompleted = '\x01';
  (this->InstanceReorderTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceReorderTable).ArrayNum = 0;
  (this->InstanceReorderTable).ArrayMax = 0;
  (this->CachedConservativeInstanceBounds).IsValid = '\0';
  (this->AsyncDestroyPhysicsStatePayload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncDestroyPhysicsStatePayload).ArrayNum = 0;
  (this->AsyncDestroyPhysicsStatePayload).ArrayMax = 0;
  (this->InstanceBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceBodies).ArrayNum = 0;
  (this->InstanceBodies).ArrayMax = 0;
  this->InstancingRandomSeed = 0;
  this->InstanceLODDistanceScale = 1.0;
  FPrimitiveInstanceDataManager::FPrimitiveInstanceDataManager
            (&this->PrimitiveInstanceDataManager,(UPrimitiveComponent *)this);
  (this->CachedMappings).ArrayNum = 0;
  (this->CachedMappings).ArrayMax = 0;
  this->CachedBounds[0].Value.Origin.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[0].Value.Origin.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[0].Value.Origin.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[0].Value.BoxExtent.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[0].Value.BoxExtent.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[0].Value.BoxExtent.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[0].Value.SphereRadius = 0.0;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->CachedMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[0].Hash = 0;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[1].Hash = 0;
  this->CachedBounds[1].Value.Origin.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[1].Value.SphereRadius = 0.0;
  this->CachedBounds[2].bIsValid = false;
  this->CachedBounds[2].Hash = 0;
  this->CachedBounds[2].Value.Origin.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[2].Value.Origin.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[2].Value.Origin.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[2].Value.BoxExtent.field0_0x0._s_0.X = 0.0;
  this->CachedBounds[2].Value.BoxExtent.field0_0x0._s_0.Y = 0.0;
  this->CachedBounds[2].Value.BoxExtent.field0_0x0._s_0.Z = 0.0;
  this->CachedBounds[2].Value.SphereRadius = 0.0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar2 = *pbVar2 & 0xfe;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 7);
  *pbVar2 = *pbVar2 & 0xf9;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar2 = *pbVar2 | 0x10;
  puVar3 = &this->field_0x718;
  this->bUseGpuLodSelection = '\x01';
  this->bIsUpdatingBounds = '\0';
  this->bInheritPerInstanceData = '\0';
  this->bNavigationCachedBoundsUpdated = false;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  pUVar9 = (UInstancedStaticMeshComponent *)
           UStaticMeshComponent::AdditionalStatObject((UStaticMeshComponent *)this);
  if (pUVar9 == (UInstancedStaticMeshComponent *)0x0) {
    pUVar9 = this;
  }
  pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar9->_padding_ + 4));
  TVar5 = ((pFVar10->StatID).StatIdPtr)->Name;
  if ((TVar5._0_4_ == 0) && (TVar5._4_4_ == 0)) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar9->_padding_ + 4));
    FUObjectItem::CreateStatID(this_00);
  }
  (this->StatId).StatIdPtr = (pFVar10->StatID).StatIdPtr;
  return this;
}

// ~UInstancedStaticMeshComponent @ 147cc9790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent(UInstancedStaticMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UInstancedStaticMeshComponent__6B_;
  pFVar1 = (this->CachedMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveInstanceDataManager::~FPrimitiveInstanceDataManager(&this->PrimitiveInstanceDataManager)
  ;
  pFVar1 = (this->InstanceBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AsyncDestroyPhysicsStatePayload).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceReorderTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalRandomSeeds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceSMCustomData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstancePrevTransform).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceSMData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISMInstanceManager__6B_;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// operator() @ 147ccb9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FISMInstanceUpdateChangeSet *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  UStaticMesh *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TMatrix<double> *pTVar11;
  TBoxSphereBounds<double,double> *pTVar12;
  TStridedView<UE::Math::TMatrix<double>,int> *pTVar13;
  uint uVar14;
  UInstancedStaticMeshComponent *this_01;
  longlong lVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auStack_298 [32];
  TMatrix<double> *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  TStridedView<UE::Math::TMatrix<double>,int> local_268;
  TStridedView<UE::Math::TMatrix<double>,int> local_258;
  TArrayView<UE::Math::TMatrix<double>,int> local_248;
  TTransform<double> local_238;
  TStridedView<UE::Math::TMatrix<double>,int> local_1d8;
  TStridedView<UE::Math::TMatrix<double>,int> local_1c8;
  TBoxSphereBounds<double,double> local_1b8;
  TVector<double>_u_0 local_180;
  double local_168;
  double local_160;
  double local_158;
  undefined1 local_150;
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118;
  TVector<double>_u_0 local_110;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_298;
  this_01 = *(UInstancedStaticMeshComponent **)this;
  UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon(this_01,param_1);
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  lVar3 = *(longlong *)this;
  if ((((*(byte *)(lVar3 + 0x718) & 0x40) == 0) || (GConservativeBoundsThreshold < 0)) ||
     (*(int *)(lVar3 + 0x660) <= GConservativeBoundsThreshold)) {
    *(double *)(lVar3 + 0x750) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(lVar3 + 0x758) = uVar8;
    *(double *)(lVar3 + 0x760) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined1 *)(lVar3 + 0x768) = 0;
    *(undefined8 *)(lVar3 + 0x738) = *(undefined8 *)(lVar3 + 0x750);
    *(undefined8 *)(lVar3 + 0x740) = *(undefined8 *)(lVar3 + 0x758);
    *(undefined8 *)(lVar3 + 0x748) = *(undefined8 *)(lVar3 + 0x760);
    pTVar13 = MakeStridedView<TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_>_&,UE::Math::TMatrix<double>,FInstancedStaticMeshInstanceData,0,0>
                        (&local_1c8,
                         (TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)this + 0x658),(pdm_a8878dc7)0x0);
    local_258.FirstElementPtr = pTVar13->FirstElementPtr;
    local_258.BytesBetweenElements = pTVar13->BytesBetweenElements;
    local_258.NumElements = pTVar13->NumElements;
    FISMInstanceUpdateChangeSet::SetInstanceTransforms(param_1,&local_258);
  }
  else {
    if ((char)param_1->_padding_ == '\0') {
      if (*(char *)(lVar3 + 0x768) == '\0') {
        dVar19 = *(double *)(lVar3 + 0x138) + *(double *)(lVar3 + 0x120);
        dVar16 = *(double *)(lVar3 + 0x120) - *(double *)(lVar3 + 0x138);
        dVar7 = *(double *)(lVar3 + 0x110) + *(double *)(lVar3 + 0x128);
        dVar2 = *(double *)(lVar3 + 0x110) - *(double *)(lVar3 + 0x128);
        dVar1 = *(double *)(lVar3 + 0x118) + *(double *)(lVar3 + 0x130);
        dVar17 = *(double *)(lVar3 + 0x118) - *(double *)(lVar3 + 0x130);
        if (((dVar7 - dVar2 != 0.0) || (dVar1 - dVar17 != 0.0)) || (dVar19 - dVar16 != 0.0)) {
          auVar18._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                *(uint *)(lVar3 + 0x234),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                *(uint *)(lVar3 + 0x230));
          auVar18._8_4_ = _UNK_15061cc88 & *(uint *)(lVar3 + 0x238);
          auVar18._12_4_ = _UNK_15061cc8c & *(uint *)(lVar3 + 0x23c);
          local_150 = 1;
          lVar15 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(_UNK_15061cc8c & *(uint *)(lVar3 + 0x24c),
                                     _UNK_15061cc88 & *(uint *)(lVar3 + 0x248)));
          auVar6._8_4_ = (int)lVar15;
          auVar6._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                           *(uint *)(lVar3 + 0x244),
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                           *(uint *)(lVar3 + 0x240)));
          auVar6._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
          uVar14 = movmskpd((int)this_01,auVar6);
          lVar15 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar18._8_8_);
          auVar5._8_4_ = (int)lVar15;
          auVar5._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar18._0_8_);
          auVar5._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
          iVar10 = movmskpd(GConservativeBoundsThreshold,auVar5);
          local_180._s_0.X = dVar2;
          local_180._s_0.Y = dVar17;
          local_180._s_0.Z = dVar16;
          local_168 = dVar7;
          local_160 = dVar1;
          local_158 = dVar19;
          if ((uVar14 & 0x3fffffff) == 0 && iVar10 == 0) {
            local_238.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_238.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_238.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_238.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_238.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_238.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast
                      ((TTransform<double> *)(lVar3 + 0x1f0),&local_238);
          }
          pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_238,&local_d8);
          UE::Math::TBox<double>::TransformBy
                    ((TBox<double> *)&local_180._s_0,(TBox<double> *)&local_110._s_0,pTVar11);
          lVar3 = *(longlong *)this;
          *(double *)(lVar3 + 0x738) = local_110._s_0.X;
          *(double *)(lVar3 + 0x740) = local_110._s_0.Y;
          *(double *)(lVar3 + 0x748) = local_110._s_0.Z;
          *(undefined8 *)(lVar3 + 0x750) = uStack_f8;
          *(undefined8 *)(lVar3 + 0x758) = local_f0;
          *(undefined8 *)(lVar3 + 0x760) = uStack_e8;
          *(undefined8 *)(lVar3 + 0x768) = local_e0;
        }
      }
    }
    else {
      *(double *)(lVar3 + 0x750) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(lVar3 + 0x758) = uVar8;
      *(double *)(lVar3 + 0x760) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined1 *)(lVar3 + 0x768) = 0;
      *(undefined8 *)(lVar3 + 0x738) = *(undefined8 *)(lVar3 + 0x750);
      *(undefined8 *)(lVar3 + 0x740) = *(undefined8 *)(lVar3 + 0x758);
      *(undefined8 *)(lVar3 + 0x748) = *(undefined8 *)(lVar3 + 0x760);
    }
    lVar3 = *(longlong *)this;
    this_00 = *(UStaticMesh **)(lVar3 + 0x5a0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pTVar12 = UStaticMesh::GetBounds(this_00,&local_1b8);
    local_130 = (pTVar12->Origin).field0_0x0._s_0.X;
    dVar1 = (pTVar12->BoxExtent).field0_0x0._s_0.X;
    dVar2 = (pTVar12->BoxExtent).field0_0x0._s_0.Y;
    local_148._s_0.X = local_130 - dVar1;
    local_128 = (pTVar12->Origin).field0_0x0._s_0.Y;
    local_130 = local_130 + dVar1;
    dVar1 = (pTVar12->BoxExtent).field0_0x0._s_0.Z;
    local_120 = (pTVar12->Origin).field0_0x0._s_0.Z;
    local_148._s_0.Y = local_128 - dVar2;
    local_128 = local_128 + dVar2;
    local_118 = 1;
    local_148._s_0.Z = local_120 - dVar1;
    local_120 = local_120 + dVar1;
    pTVar13 = MakeStridedView<TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_>_&,UE::Math::TMatrix<double>,FInstancedStaticMeshInstanceData,0,0>
                        (&local_1d8,
                         (TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)this + 0x658),(pdm_a8878dc7)0x0);
    local_268.FirstElementPtr = pTVar13->FirstElementPtr;
    local_268.BytesBetweenElements = pTVar13->BytesBetweenElements;
    local_268.NumElements = pTVar13->NumElements;
    FISMInstanceUpdateChangeSet::SetInstanceTransforms
              (param_1,&local_268,(TBox<double> *)&local_148._s_0,(TBox<double> *)(lVar3 + 0x738));
  }
  local_278 = *(TMatrix<double> **)(*(longlong *)this + 0x668);
  iVar10 = *(int *)(*(longlong *)this + 0x670);
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_248._12_4_ = uStack_26c;
  local_248.ArrayNum = iVar10;
  local_248.DataPtr = local_278;
  iStack_270 = iVar10;
  FISMInstanceUpdateChangeSet::SetInstancePrevTransforms(param_1,&local_248);
  return;
}

// operator() @ 147ccc0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>::operator()
          (void *this)

{
  uint uVar1;
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.Base = local_218;
  local_238.CurPos = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.End = (wchar_t *)local_18;
  UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,(UObject *)0x0,&local_238);
  uVar1 = CityHash32((char *)local_238.Base,
                     (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1) * 2);
  if (uVar1 == 0) {
    uVar1 = 0x2a;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return uVar1;
}

// operator() @ 147ccd2d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`UInstancedStaticMeshComponent::RemoveInstances'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  if ((param_1->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar2 = *(int *)(param_1->AllocatorInstance).Data;
  if ((-1 < iVar2) && (iVar2 < *(int *)(lVar3 + 0x660))) {
    lVar3 = *(longlong *)this;
    uVar9 = param_1->ArrayNum - 1;
    uVar7 = 0;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar2 = param_1->ArrayNum;
    pFVar8 = (param_1->AllocatorInstance).Data;
    if ((-1 < *(int *)(pFVar8 + ((longlong)iVar2 + -1) * 4)) &&
       (*(int *)(pFVar8 + ((longlong)iVar2 + -1) * 4) < *(int *)(lVar3 + 0x660))) {
      pFVar1 = pFVar8 + (longlong)iVar2 * 4;
      while( true ) {
        if (param_1->ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar8 == pFVar1) break;
        UInstancedStaticMeshComponent::RemoveInstanceInternal
                  (*(UInstancedStaticMeshComponent **)this,*(int *)pFVar8,false,false,true);
        pFVar8 = pFVar8 + 4;
      }
      return true;
    }
  }
  return false;
}

// operator() @ 147ccd560

void __thiscall
`UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon'::__l5::<lambda_1>::operator()
          (void *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  fVar2 = __real_3f800000;
  uVar9 = *(uint *)this;
  uVar6 = 0;
  if (*(int *)((longlong)this + 0x10) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = **(uint **)((longlong)this + 8);
  }
  uVar8 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    do {
      if (uVar8 == uVar7) {
        uVar9 = 0;
        if ((int)uVar6 < *(int *)((longlong)this + 0x10)) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar5 = (longlong)(int)uVar6;
        uVar6 = uVar6 + 1;
        uVar9 = *(uint *)(*(longlong *)((longlong)this + 8) + 4 + lVar5 * 8);
        if (((int)uVar6 < 0) || (*(int *)((longlong)this + 0x10) <= (int)uVar6)) {
          uVar7 = 0xffffffff;
        }
        else {
          if (((int)uVar6 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar7 = *(uint *)(*(longlong *)((longlong)this + 8) + (longlong)(int)uVar6 * 8);
        }
      }
      uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
      uVar4 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(float *)((param_1->AllocatorInstance).Data + lVar10) =
           (float)(uVar9 >> 9 | 0x3f800000) - fVar2;
      lVar10 = lVar10 + 4;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return;
}

// AddInstance @ 147cd1a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
UInstancedStaticMeshComponent::AddInstance
          (UInstancedStaticMeshComponent *this,TTransform<double> *param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = AddInstanceInternal(this,(this->PerInstanceSMData).ArrayNum,
                              (FInstancedStaticMeshInstanceData *)0x0,param_1,param_2);
  return iVar1;
}

// AddInstanceById @ 147cd1a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveInstanceId __thiscall
UInstancedStaticMeshComponent::AddInstanceById
          (UInstancedStaticMeshComponent *this,TTransform<double> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined7 in_register_00000081;
  bool in_R9B;
  
  if ((this->PrimitiveInstanceDataManager).Mode == ExternalLegacyData) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0xefe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FPrimitiveInstanceId)iVar3;
    }
  }
  AddInstanceInternal(this,(this->PerInstanceSMData).ArrayNum,
                      (FInstancedStaticMeshInstanceData *)0x0,
                      (TTransform<double> *)CONCAT71(in_register_00000081,param_2),in_R9B);
  FInstanceIdIndexMap::IndexToId
            ((FInstanceIdIndexMap *)&this->PrimitiveInstanceDataManager,(int)param_1);
  return (FPrimitiveInstanceId)(int)param_1;
}

// AddInstanceInternal @ 147cd1b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UInstancedStaticMeshComponent::AddInstanceInternal
          (UInstancedStaticMeshComponent *this,int param_1,FInstancedStaticMeshInstanceData *param_2
          ,TTransform<double> *param_3,bool param_4)

{
  int *piVar1;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined3 uVar18;
  uint uVar19;
  bool bVar20;
  byte bVar21;
  char cVar22;
  int iVar23;
  int iVar24;
  TTransform<double> *pTVar25;
  longlong lVar26;
  undefined1 auStackY_1d8 [32];
  FInstanceIndexUpdateData local_188;
  FInstanceIndexUpdateData *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int> local_168;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FPrimitiveInstanceDataManager::Add
            (&this->PrimitiveInstanceDataManager,param_1,
             param_2 != (FInstancedStaticMeshInstanceData *)0x0);
  if (param_2 == (FInstancedStaticMeshInstanceData *)0x0) {
    iVar23 = (this->PerInstanceSMData).ArrayNum;
    piVar1 = &(this->PerInstanceSMData).ArrayMax;
    if (iVar23 == *piVar1) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1080,&(this->PerInstanceSMData).AllocatorInstance,piVar1);
    }
    param_2 = (FInstancedStaticMeshInstanceData *)
              ((this->PerInstanceSMData).AllocatorInstance.Data + (longlong)iVar23 * 0x80);
    (this->PerInstanceSMData).ArrayNum = iVar23 + 1;
    DefaultConstructItems<FInstancedStaticMeshInstanceData,int>(param_2,1);
  }
  if (param_4) {
    pTVar25 = UE::Math::TTransform<double>::GetRelativeTransform
                        (param_3,&local_98,(TTransform<double> *)&this->_padding_);
  }
  else {
    pTVar25 = &local_158;
    local_158.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_158.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_158.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_158.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_158.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_158.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_158.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_158.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_158.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_158.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_158.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_158.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
  }
  local_f8.Rotation.XY.m128d_f64[0] = (pTVar25->Rotation).XY.m128d_f64[0];
  local_f8.Rotation.XY.m128d_f64[1] = (pTVar25->Rotation).XY.m128d_f64[1];
  local_f8.Rotation.ZW.m128d_f64[0] = (pTVar25->Rotation).ZW.m128d_f64[0];
  local_f8.Rotation.ZW.m128d_f64[1] = (pTVar25->Rotation).ZW.m128d_f64[1];
  local_f8.Translation.XY.m128d_f64[0] = (pTVar25->Translation).XY.m128d_f64[0];
  local_f8.Translation.XY.m128d_f64[1] = (pTVar25->Translation).XY.m128d_f64[1];
  local_f8.Scale3D.XY.m128d_f64[0] = (pTVar25->Scale3D).XY.m128d_f64[0];
  local_f8.Scale3D.XY.m128d_f64[1] = (pTVar25->Scale3D).XY.m128d_f64[1];
  local_f8.Translation.ZW.m128d_f64[0] = (pTVar25->Translation).ZW.m128d_f64[0];
  local_f8.Translation.ZW.m128d_f64[1] = (pTVar25->Translation).ZW.m128d_f64[1];
  local_f8.Scale3D.ZW.m128d_f64[0] = (pTVar25->Scale3D).ZW.m128d_f64[0];
  local_f8.Scale3D.ZW.m128d_f64[1] = (pTVar25->Scale3D).ZW.m128d_f64[1];
  SetupNewInstanceData(this,param_2,param_1,&local_f8);
  iVar23 = this->NumCustomDataFloats;
  iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar23,&(this->PerInstanceSMCustomData).AllocatorInstance,
                      &(this->PerInstanceSMCustomData).ArrayNum,
                      &(this->PerInstanceSMCustomData).ArrayMax);
  memset((this->PerInstanceSMCustomData).AllocatorInstance.Data + (longlong)iVar24 * 4,0,
         (longlong)iVar23 << 2);
  if (this->bHasPreviousTransforms != '\0') {
    pTVar2 = &this->PerInstancePrevTransform;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= param_2) &&
       (param_2 < pFVar4 + (longlong)(this->PerInstancePrevTransform).ArrayMax * 0x80)) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar20) {
        pcVar6 = (code *)swi(3);
        iVar23 = (*pcVar6)();
        return iVar23;
      }
    }
    iVar23 = (this->PerInstancePrevTransform).ArrayNum;
    piVar1 = &(this->PerInstancePrevTransform).ArrayMax;
    if (iVar23 == *piVar1) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1080,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PerInstancePrevTransform).ArrayNum = iVar23 + 1;
    uVar10 = *(undefined8 *)((longlong)param_2 + 8);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    lVar26 = (longlong)iVar23 * 0x80;
    *(undefined8 *)(pFVar5 + lVar26) = *(undefined8 *)param_2;
    *(undefined8 *)(pFVar5 + lVar26 + 8) = uVar10;
    uVar10 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)(pFVar5 + lVar26 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)(pFVar5 + lVar26 + 0x10 + 8) = uVar10;
    uVar10 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)(pFVar5 + lVar26 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)(pFVar5 + lVar26 + 0x20 + 8) = uVar10;
    uVar10 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)(pFVar5 + lVar26 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)(pFVar5 + lVar26 + 0x30 + 8) = uVar10;
    uVar10 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)(pFVar5 + lVar26 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)(pFVar5 + lVar26 + 0x40 + 8) = uVar10;
    uVar10 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)(pFVar5 + lVar26 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)(pFVar5 + lVar26 + 0x50 + 8) = uVar10;
    uVar7 = *(undefined4 *)((longlong)param_2 + 100);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x68);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x6c);
    pFVar4 = pFVar5 + lVar26 + 0x60;
    *(undefined4 *)pFVar4 = *(undefined4 *)((longlong)param_2 + 0x60);
    *(undefined4 *)(pFVar4 + 4) = uVar7;
    *(undefined4 *)(pFVar4 + 8) = uVar8;
    *(undefined4 *)(pFVar4 + 0xc) = uVar9;
    uVar10 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)(pFVar5 + lVar26 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)(pFVar5 + lVar26 + 0x70 + 8) = uVar10;
  }
  bVar21 = (**(code **)(this->_padding_ + 0x4e0))(this);
  this->bNavigationCachedBoundsUpdated = false;
  bVar3 = *(byte *)((longlong)&this->_padding_ + 2);
  *(byte *)((longlong)&this->_padding_ + 2) = (bVar21 << 6 ^ bVar3) & 0x40 ^ bVar3;
  if (((bVar21 & 1) != 0) && ((this->_padding_ & 1) != 0)) {
    if ((this->PerInstanceSMData).ArrayNum == 1) {
      FNavigationSystem::RegisterComponent((UActorComponent *)this);
    }
    cVar22 = (**(code **)(this->_padding_ + 0xc88))(this);
    if (cVar22 == '\0') {
      (**(code **)(this->_padding_ + 0xc80))(this);
    }
    else {
      (**(code **)(this->_padding_ + 0xc70))(this,param_1);
    }
  }
  bVar20 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                     ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                      &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated);
  if (bVar20) {
    local_178 = &local_188;
    uStack_170 = 1;
    local_168._12_4_ = uStack_16c;
    local_168.ArrayNum = 1;
    local_188.Type = Added;
    local_188.OldIndex = -1;
    local_188.Index = param_1;
    local_168.DataPtr = local_178;
    TMulticastDelegate<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
    ::Broadcast(&FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,this,&local_168);
  }
  bVar20 = this->CachedBounds[1].bIsValid;
  uVar18 = *(undefined3 *)&this->CachedBounds[1].field_0x1;
  uVar19 = this->CachedBounds[1].Hash;
  dVar11 = this->CachedBounds[1].Value.Origin.field0_0x0._s_0.X;
  dVar12 = this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Y;
  dVar13 = this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Z;
  dVar14 = this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.X;
  dVar15 = this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Y;
  dVar16 = this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Z;
  dVar17 = this->CachedBounds[1].Value.SphereRadius;
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[2].bIsValid = false;
  if (this->bNavigationCachedBoundsUpdated != false) {
    this->CachedBounds[1].bIsValid = bVar20;
    *(undefined3 *)&this->CachedBounds[1].field_0x1 = uVar18;
    this->CachedBounds[1].Hash = uVar19;
    this->CachedBounds[1].Value.Origin.field0_0x0._s_0.X = dVar11;
    this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Y = dVar12;
    this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Z = dVar13;
    this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.X = dVar14;
    this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Y = dVar15;
    this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Z = dVar16;
    this->CachedBounds[1].Value.SphereRadius = dVar17;
  }
  return param_1;
}

// AddInstances @ 147cd29e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UInstancedStaticMeshComponent::AddInstances
          (UInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          bool param_3,bool param_4)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  pTVar2 = (TTransform<double> *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pTVar2;
  AddInstancesInternal(this,__return_storage_ptr__,&local_18,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// AddInstancesById @ 147cd2a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> * __thiscall
UInstancedStaticMeshComponent::AddInstancesById
          (UInstancedStaticMeshComponent *this,
          TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_38;
  
  if ((this->PrimitiveInstanceDataManager).Mode == ExternalLegacyData) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0xef5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AddInstancesInternal(this,&local_50,&local_38,true,param_2,param_3);
  iVar7 = local_50.ArrayNum;
  pFVar1 = local_50.AllocatorInstance.Data + (longlong)iVar7 * 4;
  FVar8.Data = local_50.AllocatorInstance.Data;
  while( true ) {
    if (local_50.ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    FInstanceIdIndexMap::IndexToId
              ((FInstanceIdIndexMap *)&this->PrimitiveInstanceDataManager,(int)local_res10);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_58[0] = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)local_58) &&
       ((FScriptContainerElement *)local_58 <
        pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar8.Data = FVar8.Data + 4;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         local_58[0];
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddInstancesInternal @ 147cd2c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UInstancedStaticMeshComponent::AddInstancesInternal
          (UInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,bool param_2,bool param_3,
          bool param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  TTransform<double> *pTVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  longlong *plVar22;
  UInstancedStaticMeshComponent *pUVar23;
  TTransform<double> *this_00;
  bool bVar24;
  undefined1 auStackY_2d8 [32];
  int local_284;
  char local_280;
  undefined1 local_27f [7];
  ForAnyElementType local_278;
  undefined8 local_270;
  TTransform<double> *local_268;
  UInstancedStaticMeshComponent *local_260;
  TArray<int,TSizedDefaultAllocator<32>_> *local_258;
  undefined1 local_250 [4];
  int local_24c;
  undefined4 local_248;
  TTransform<double> *local_240;
  undefined1 *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FDestructionSentinel local_218;
  undefined1 *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FReadAccessScope local_1d8;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TBoxSphereBounds<double,double> local_f8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar24 = -1 < CpuChannel->Enabled;
  local_280 = param_2;
  local_260 = this;
  local_258 = __return_storage_ptr__;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3729,"UInstancedStaticMeshComponent::AddInstancesInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0xe91);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3729);
  }
  if (__CsvProfilerStat3730 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive
              ("UInstancedStaticMeshComponent_AddInstancesInternal");
    __CsvProfilerStat3730 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("UInstancedStaticMeshComponent_AddInstancesInternal",
             "CSV_UInstancedStaticMeshComponent_AddInstancesInternal");
  uVar19 = param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_2) {
    if ((int)uVar19 < 0) goto LAB_147cd3431;
    if (0 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar19,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
  }
  local_284 = (this->PerInstanceSMData).ArrayNum;
  iVar17 = uVar19 * this->NumCustomDataFloats;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar17,&(this->PerInstanceSMCustomData).AllocatorInstance,
                      &(this->PerInstanceSMCustomData).ArrayNum,
                      &(this->PerInstanceSMCustomData).ArrayMax);
  memset((this->PerInstanceSMCustomData).AllocatorInstance.Data + (longlong)iVar11 * 4,0,
         (longlong)iVar17 << 2);
  uVar18 = local_284 + uVar19;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if ((this->PerInstanceSMData).ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar18,&(this->PerInstanceSMData).AllocatorInstance,
               (this->PerInstanceSMData).ArrayNum,&(this->PerInstanceSMData).ArrayMax);
  }
  if (((int)uVar18 < 1) ||
     (bVar7 = UStaticMeshComponent::IsNavigationRelevant((UStaticMeshComponent *)this), !bVar7)) {
    bVar14 = 0;
  }
  else {
    bVar14 = 0x40;
  }
  *(byte *)((longlong)&this->_padding_ + 2) =
       *(byte *)((longlong)&this->_padding_ + 2) & 0xbf | bVar14;
  if (((param_4) && (bVar14 != 0)) && ((this->_padding_ & 1) != 0)) {
    bVar7 = true;
    cVar8 = (**(code **)(this->_padding_ + 0xc88))(this);
    if (cVar8 != '\0') {
      bVar4 = true;
      bVar9 = true;
      local_278.Data = (FScriptContainerElement *)0x0;
      local_270 = 0;
      if ((int)uVar19 < 0) {
LAB_147cd3431:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if (0 < (int)uVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar19,&local_278,0,(int *)((longlong)&local_270 + 4));
        bVar4 = true;
      }
      goto LAB_147cd2eb9;
    }
  }
  else {
    bVar7 = false;
  }
  bVar9 = false;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  bVar4 = false;
LAB_147cd2eb9:
  this_00 = param_1->DataPtr;
  local_240 = this_00 + (int)uVar19;
  pUVar23 = this;
  local_268 = this_00;
  if (this_00 != local_240) {
    do {
      iVar11 = (this->PerInstanceSMData).ArrayNum;
      local_268 = this_00;
      if (iVar11 == (this->PerInstanceSMData).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,&(this->PerInstanceSMData).AllocatorInstance,
                            &(this->PerInstanceSMData).ArrayMax);
      }
      (this->PerInstanceSMData).ArrayNum = iVar11 + 1;
      pFVar20 = (this->PerInstanceSMData).AllocatorInstance.Data + (longlong)iVar11 * 0x80;
      DefaultConstructItems<FInstancedStaticMeshInstanceData,int>(pFVar20,1);
      FPrimitiveInstanceDataManager::Add
                (&this->PrimitiveInstanceDataManager,(this->PerInstanceSMData).ArrayNum + -1,false);
      if (param_3) {
        pTVar12 = UE::Math::TTransform<double>::GetRelativeTransform
                            (this_00,&local_b8,(TTransform<double> *)&this->_padding_);
      }
      else {
        pTVar12 = &local_1b8;
        local_1b8.Rotation.XY.m128d_f64[0] = (this_00->Rotation).XY.m128d_f64[0];
        local_1b8.Rotation.XY.m128d_f64[1] = (this_00->Rotation).XY.m128d_f64[1];
        local_1b8.Rotation.ZW.m128d_f64[0] = (this_00->Rotation).ZW.m128d_f64[0];
        local_1b8.Rotation.ZW.m128d_f64[1] = (this_00->Rotation).ZW.m128d_f64[1];
        local_1b8.Translation.XY.m128d_f64[0] = (this_00->Translation).XY.m128d_f64[0];
        local_1b8.Translation.XY.m128d_f64[1] = (this_00->Translation).XY.m128d_f64[1];
        local_1b8.Translation.ZW.m128d_f64[0] = (this_00->Translation).ZW.m128d_f64[0];
        local_1b8.Translation.ZW.m128d_f64[1] = (this_00->Translation).ZW.m128d_f64[1];
        local_1b8.Scale3D.XY.m128d_f64[0] = (this_00->Scale3D).XY.m128d_f64[0];
        local_1b8.Scale3D.XY.m128d_f64[1] = (this_00->Scale3D).XY.m128d_f64[1];
        local_1b8.Scale3D.ZW.m128d_f64[0] = (this_00->Scale3D).ZW.m128d_f64[0];
        local_1b8.Scale3D.ZW.m128d_f64[1] = (this_00->Scale3D).ZW.m128d_f64[1];
      }
      local_158.Rotation.XY.m128d_f64[0] = (pTVar12->Rotation).XY.m128d_f64[0];
      local_158.Rotation.XY.m128d_f64[1] = (pTVar12->Rotation).XY.m128d_f64[1];
      local_158.Rotation.ZW.m128d_f64[0] = (pTVar12->Rotation).ZW.m128d_f64[0];
      local_158.Rotation.ZW.m128d_f64[1] = (pTVar12->Rotation).ZW.m128d_f64[1];
      local_158.Translation.XY.m128d_f64[0] = (pTVar12->Translation).XY.m128d_f64[0];
      local_158.Translation.XY.m128d_f64[1] = (pTVar12->Translation).XY.m128d_f64[1];
      local_158.Scale3D.XY.m128d_f64[0] = (pTVar12->Scale3D).XY.m128d_f64[0];
      local_158.Scale3D.XY.m128d_f64[1] = (pTVar12->Scale3D).XY.m128d_f64[1];
      local_158.Translation.ZW.m128d_f64[0] = (pTVar12->Translation).ZW.m128d_f64[0];
      local_158.Translation.ZW.m128d_f64[1] = (pTVar12->Translation).ZW.m128d_f64[1];
      local_158.Scale3D.ZW.m128d_f64[0] = (pTVar12->Scale3D).ZW.m128d_f64[0];
      local_158.Scale3D.ZW.m128d_f64[1] = (pTVar12->Scale3D).ZW.m128d_f64[1];
      SetupNewInstanceData(this,(FInstancedStaticMeshInstanceData *)pFVar20,local_284,&local_158);
      pTVar13 = local_258;
      if (local_280 != '\0') {
        pFVar20 = (local_258->AllocatorInstance).Data;
        if (((pFVar20 <= (FScriptContainerElement *)&local_284) &&
            ((FScriptContainerElement *)&local_284 < pFVar20 + (longlong)local_258->ArrayMax * 4))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar1 = (code *)swi(3);
          pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar13;
        }
        iVar11 = pTVar13->ArrayNum;
        if (iVar11 == pTVar13->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pFVar20 = (pTVar13->AllocatorInstance).Data;
        pTVar13->ArrayNum = iVar11 + 1;
        *(int *)(pFVar20 + (longlong)iVar11 * 4) = local_284;
      }
      if (bVar7) {
        if ((this->PerInstanceSMData).ArrayNum == 1) {
          GetOrCalcBounds(this,&local_f8,(TTransform<double> *)&this->_padding_,Navigation);
          FNavigationSystem::RegisterComponent((UActorComponent *)this);
        }
        if (bVar4) {
          iVar11 = (int)local_270;
          if ((int)local_270 == local_270._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&local_278,(int *)((longlong)&local_270 + 4));
          }
          local_270 = CONCAT44(local_270._4_4_,iVar11 + 1);
          dVar2 = (this_00->Rotation).XY.m128d_f64[1];
          lVar15 = (longlong)iVar11 * 0x60;
          *(double *)(local_278.Data + lVar15) = (this_00->Rotation).XY.m128d_f64[0];
          *(double *)(local_278.Data + lVar15 + 8) = dVar2;
          dVar2 = (this_00->Rotation).ZW.m128d_f64[1];
          *(double *)(local_278.Data + lVar15 + 0x10) = (this_00->Rotation).ZW.m128d_f64[0];
          *(double *)(local_278.Data + lVar15 + 0x10 + 8) = dVar2;
          dVar2 = (this_00->Translation).XY.m128d_f64[1];
          *(double *)(local_278.Data + lVar15 + 0x20) = (this_00->Translation).XY.m128d_f64[0];
          *(double *)(local_278.Data + lVar15 + 0x20 + 8) = dVar2;
          dVar2 = (this_00->Translation).ZW.m128d_f64[1];
          *(double *)(local_278.Data + lVar15 + 0x30) = (this_00->Translation).ZW.m128d_f64[0];
          *(double *)(local_278.Data + lVar15 + 0x30 + 8) = dVar2;
          dVar2 = (this_00->Scale3D).XY.m128d_f64[1];
          *(double *)(local_278.Data + lVar15 + 0x40) = (this_00->Scale3D).XY.m128d_f64[0];
          *(double *)(local_278.Data + lVar15 + 0x40 + 8) = dVar2;
          dVar2 = (this_00->Scale3D).ZW.m128d_f64[1];
          *(double *)(local_278.Data + lVar15 + 0x50) = (this_00->Scale3D).ZW.m128d_f64[0];
          *(double *)(local_278.Data + lVar15 + 0x50 + 8) = dVar2;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,&local_1d8);
      uVar5 = FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._16_4_;
      uVar16 = (ulonglong)(int)FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._16_4_;
      plVar22 = (longlong *)
                (uVar16 * 0x10 + FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._8_8_);
      plVar21 = (longlong *)FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._8_8_;
      while( true ) {
        if ((int)uVar16 != uVar5) {
          local_27f[0] = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_27f);
          uVar16 = (ulonglong)(uint)FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._16_4_;
        }
        if (plVar21 == plVar22) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1d8);
          goto LAB_147cd3317;
        }
        if (((int)plVar21[1] != 0) && (*plVar21 != 0)) break;
        plVar21 = plVar21 + 2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1d8);
      local_24c = local_284;
      local_238 = local_250;
      local_250[0] = 0;
      local_248 = 0xffffffff;
      uStack_230 = 1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,
                 (FWriteAccessScope *)&local_218);
      puVar6 = local_238;
      bVar9 = false;
      FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._28_4_ =
           FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._28_4_ + 1;
      uVar19 = FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._16_4_ - 1;
      if (-1 < (int)uVar19) {
        uVar3 = CONCAT44(uStack_22c,uStack_230);
        lVar15 = (longlong)(int)uVar19 << 4;
        bVar9 = false;
        do {
          uVar18 = 0;
          if ((int)uVar19 < (int)FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._16_4_) {
            uVar18 = ~uVar19 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar1 = (code *)swi(3);
            pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar13;
          }
          if ((*(int *)(lVar15 + 8 + FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._8_8_) ==
               0) || (*(longlong **)
                       (lVar15 + FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._8_8_) ==
                      (longlong *)0x0)) {
LAB_147cd32c6:
            bVar9 = true;
          }
          else {
            local_1f8 = puVar6;
            uStack_1f0 = uVar3;
            cVar8 = (**(code **)(**(longlong **)
                                   (lVar15 + FInstancedStaticMeshDelegates::OnInstanceIndexUpdated.
                                             _8_8_) + 0x68))();
            if (cVar8 == '\0') goto LAB_147cd32c6;
          }
          lVar15 = lVar15 + -0x10;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._28_4_ =
           FInstancedStaticMeshDelegates::OnInstanceIndexUpdated._28_4_ + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,false);
      }
      if (local_218.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
      }
LAB_147cd3317:
      local_284 = local_284 + 1;
      this_00 = local_268 + 1;
      pUVar23 = local_260;
      local_268 = this_00;
      bVar9 = bVar4;
    } while (this_00 != local_240);
  }
  if (bVar7) {
    if (bVar9) {
      pcVar1 = *(code **)(pUVar23->_padding_ + 0xc78);
      iVar11 = (int)local_270;
      local_228 = local_278.Data;
      if (((int)local_270 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar13;
      }
      iStack_220 = iVar11;
      local_1e8 = (undefined4)local_228;
      uStack_1e4 = local_228._4_4_;
      iStack_1e0 = iVar11;
      uStack_1dc = uStack_21c;
      (*pcVar1)(pUVar23,&local_1e8);
    }
    else {
      (**(code **)(pUVar23->_padding_ + 0xc80))(pUVar23);
    }
  }
  pUVar23->CachedBounds[0].bIsValid = false;
  pUVar23->CachedBounds[1].bIsValid = false;
  pUVar23->CachedBounds[2].bIsValid = false;
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  FCsvProfiler::EndExclusiveStat("UInstancedStaticMeshComponent_AddInstancesInternal");
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_258;
}

// ApplyComponentInstanceData @ 147cd5090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::ApplyComponentInstanceData
          (UInstancedStaticMeshComponent *this,FInstancedStaticMeshComponentInstanceData *param_1)

{
  return;
}

// ApplyInheritedPerInstanceData @ 147cd5310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::ApplyInheritedPerInstanceData
          (UInstancedStaticMeshComponent *this,UInstancedStaticMeshComponent *param_1)

{
  int *piVar1;
  TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  
  if ((param_1 == (UInstancedStaticMeshComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xdb2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = &this->PerInstanceSMData;
  if (pTVar2 != &param_1->PerInstanceSMData) {
    iVar3 = (this->PerInstanceSMData).ArrayMax;
    piVar1 = &(this->PerInstanceSMData).ArrayMax;
    iVar4 = (param_1->PerInstanceSMData).ArrayNum;
    _Src = (param_1->PerInstanceSMData).AllocatorInstance.Data;
    (this->PerInstanceSMData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 7);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->PerInstanceSMCustomData,&param_1->PerInstanceSMCustomData);
  this->NumCustomDataFloats = param_1->NumCustomDataFloats;
  return;
}

// BatchUpdateInstancesData @ 147cd5590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::BatchUpdateInstancesData
          (UInstancedStaticMeshComponent *this,int param_1,int param_2,
          FInstancedStaticMeshInstanceData *param_3,bool param_4,bool param_5)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FInstancedStaticMeshInstanceData *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStackY_328 [32];
  ForAnyElementType local_2f0;
  int local_2e8 [4];
  longlong *local_2d8;
  FInstancedStaticMeshInstanceData *local_2d0;
  longlong local_2c8;
  undefined8 local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  lVar14 = (longlong)param_2;
  uVar18 = (ulonglong)param_1;
  if ((((param_1 < 0) || (iVar11 = (this->PerInstanceSMData).ArrayNum, iVar11 <= param_1)) ||
      (iVar12 = param_1 + -1 + param_2, iVar12 < 0)) || (iVar11 <= iVar12)) {
    return false;
  }
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[2].bIsValid = false;
  local_2e8[2] = param_1;
  local_2d0 = param_3;
  if (((this->_padding_ & 0x400000) == 0) || (plVar1 = &this->_padding_, (*plVar1 & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    local_2d8 = plVar1;
    cVar6 = (**(code **)(this->_padding_ + 0xc88))(this);
    if (cVar6 != '\0') {
      bVar5 = true;
      local_2f0.Data = (FScriptContainerElement *)0x0;
      local_2e8[0] = 0;
      local_2e8[1] = 0;
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      bVar9 = true;
      bVar4 = true;
      if (0 < param_2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,param_2,&local_2f0,0,local_2e8 + 1);
        bVar9 = true;
        bVar5 = true;
        local_2d8 = plVar1;
        bVar4 = true;
      }
      goto LAB_147cd56d6;
    }
  }
  bVar4 = false;
  local_2d8 = &this->_padding_;
  bVar5 = false;
  local_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8[0] = 0;
  local_2e8[1] = 0;
LAB_147cd56d6:
  if (0 < param_2) {
    local_2c8 = uVar18 * 0x80 - (longlong)local_2d0;
    pFVar16 = local_2d0;
    do {
      uVar17 = (uint)uVar18;
      uVar10 = 0;
      if ((int)uVar17 < (this->PerInstanceSMData).ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      pFVar15 = (this->PerInstanceSMData).AllocatorInstance.Data + local_2c8 +
                (longlong)(pFVar16->Transform).M;
      if (bVar4) {
        UE::Math::TTransform<double>::SetFromMatrix(&local_178,(TMatrix<double> *)pFVar15);
        local_238.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_238.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_238.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_238.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_238.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_238.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_238.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_238.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_238.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_238.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_238.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_238.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_238.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_238.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_238.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_238.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_238.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_238,&local_178,(TTransform<double> *)&this->_padding_);
        UE::Math::TTransform<double>::SetFromMatrix
                  (&local_118,&local_2d0[(int)(uVar17 - local_2e8[2])].Transform);
        local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1d8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1d8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1d8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1d8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_1d8,&local_118,(TTransform<double> *)&this->_padding_);
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x60,0x10,2,&local_2f0,local_2e8,local_2e8 + 1);
        pFVar13 = local_2f0.Data + (longlong)iVar11 * 0x60;
        *(double *)pFVar13 = local_238.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar13 + 8) = local_238.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar13 + 0x10) = local_238.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar13 + 0x18) = local_238.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar13 + 0x20) = local_238.Translation.XY.m128d_f64[0];
        *(double *)(pFVar13 + 0x28) = local_238.Translation.XY.m128d_f64[1];
        *(double *)(pFVar13 + 0x30) = local_238.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar13 + 0x38) = local_238.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar13 + 0x40) = local_238.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar13 + 0x48) = local_238.Scale3D.XY.m128d_f64[1];
        *(double *)(pFVar13 + 0x50) = local_238.Scale3D.ZW.m128d_f64[0];
        *(double *)(pFVar13 + 0x58) = local_238.Scale3D.ZW.m128d_f64[1];
        *(double *)(pFVar13 + 0x60) = local_1d8.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar13 + 0x68) = local_1d8.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar13 + 0x70) = local_1d8.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar13 + 0x78) = local_1d8.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar13 + 0x80) = local_1d8.Translation.XY.m128d_f64[0];
        *(double *)(pFVar13 + 0x88) = local_1d8.Translation.XY.m128d_f64[1];
        *(double *)(pFVar13 + 0x90) = local_1d8.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar13 + 0x98) = local_1d8.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar13 + 0xa0) = local_1d8.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar13 + 0xa8) = local_1d8.Scale3D.XY.m128d_f64[1];
        *(double *)(pFVar13 + 0xb0) = local_1d8.Scale3D.ZW.m128d_f64[0];
        *(double *)(pFVar13 + 0xb8) = local_1d8.Scale3D.ZW.m128d_f64[1];
        bVar4 = bVar5;
      }
      dVar3 = (pFVar16->Transform).M[0][1];
      *(double *)&pFVar15->field_0x0 = (pFVar16->Transform).M[0][0];
      *(double *)(pFVar15 + 8) = dVar3;
      dVar3 = (pFVar16->Transform).M[0][3];
      *(double *)(pFVar15 + 0x10) = (pFVar16->Transform).M[0][2];
      *(double *)(pFVar15 + 0x18) = dVar3;
      dVar3 = (pFVar16->Transform).M[1][1];
      *(double *)(pFVar15 + 0x20) = (pFVar16->Transform).M[1][0];
      *(double *)(pFVar15 + 0x28) = dVar3;
      dVar3 = (pFVar16->Transform).M[1][3];
      *(double *)(pFVar15 + 0x30) = (pFVar16->Transform).M[1][2];
      *(double *)(pFVar15 + 0x38) = dVar3;
      dVar3 = (pFVar16->Transform).M[2][1];
      *(double *)(pFVar15 + 0x40) = (pFVar16->Transform).M[2][0];
      *(double *)(pFVar15 + 0x48) = dVar3;
      dVar3 = (pFVar16->Transform).M[2][3];
      *(double *)(pFVar15 + 0x50) = (pFVar16->Transform).M[2][2];
      *(double *)(pFVar15 + 0x58) = dVar3;
      dVar3 = (pFVar16->Transform).M[3][1];
      *(double *)(pFVar15 + 0x60) = (pFVar16->Transform).M[3][0];
      *(double *)(pFVar15 + 0x68) = dVar3;
      dVar3 = (pFVar16->Transform).M[3][3];
      *(double *)(pFVar15 + 0x70) = (pFVar16->Transform).M[3][2];
      *(double *)(pFVar15 + 0x78) = dVar3;
      FPrimitiveInstanceDataManager::TransformChanged(&this->PrimitiveInstanceDataManager,uVar17);
      if ((*local_2d8 & 8) != 0) {
        UE::Math::TTransform<double>::SetFromMatrix(&local_b8,(TMatrix<double> *)pFVar15);
        local_298.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_298.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_298.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_298.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_298.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_298.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_298.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_298.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_298.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_298.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_298.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_298.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_298.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_298.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_298.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_298.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_298.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_298.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_298,&local_b8,(TTransform<double> *)&this->_padding_);
        UpdateInstanceBodyTransform(this,uVar17,&local_298,param_5);
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      pFVar16 = pFVar16 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (bVar9) {
    if (bVar4) {
      pcVar2 = *(code **)(this->_padding_ + 0xc78);
      iVar11 = local_2e8[0];
      local_2b8 = local_2f0.Data;
      if ((local_2e8[0] < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      iStack_2b0 = iVar11;
      local_2a8 = (undefined4)local_2b8;
      uStack_2a4 = local_2b8._4_4_;
      iStack_2a0 = iVar11;
      uStack_29c = uStack_2ac;
      (*pcVar2)(this,&local_2a8);
    }
    else {
      (**(code **)(this->_padding_ + 0xc80))(this);
    }
  }
  if (param_4) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  if (local_2f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data);
  }
  return true;
}

// BatchUpdateInstancesTransform @ 147cd5ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::BatchUpdateInstancesTransform
          (UInstancedStaticMeshComponent *this,int param_1,int param_2,TTransform<double> *param_3,
          bool param_4,bool param_5,bool param_6)

{
  longlong *plVar1;
  double adVar2 [2];
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  TTransform<double> *pTVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auStackY_558 [32];
  ForAnyElementType local_520;
  int local_518 [2];
  longlong *local_510;
  longlong local_508;
  FScriptContainerElement *local_500;
  undefined8 local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  int iStack_4e0;
  undefined4 uStack_4dc;
  TTransform<double> local_4d8;
  undefined1 local_478 [16];
  double local_468;
  undefined8 uStack_460;
  undefined1 local_458 [16];
  double local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  double local_428;
  undefined8 uStack_420;
  double local_418;
  double dStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  uVar25 = (ulonglong)param_1;
  if ((((param_1 < 0) || (iVar20 = (this->PerInstanceSMData).ArrayNum, iVar20 <= param_1)) ||
      (iVar22 = param_2 + param_1 + -1, iVar22 < 0)) || (iVar20 <= iVar22)) {
    return false;
  }
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[2].bIsValid = false;
  if (((this->_padding_ & 0x400000) == 0) || (plVar1 = &this->_padding_, (*plVar1 & 1) == 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    local_510 = plVar1;
    cVar15 = (**(code **)(this->_padding_ + 0xc88))(this);
    if (cVar15 != '\0') {
      bVar14 = true;
      local_520.Data = (FScriptContainerElement *)0x0;
      local_518[0] = 0;
      local_518[1] = 0;
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      bVar18 = true;
      if (0 < param_2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,param_2,&local_520,0,local_518 + 1);
        bVar18 = true;
        bVar14 = true;
        local_510 = plVar1;
      }
      goto LAB_147cd5cd7;
    }
  }
  bVar14 = false;
  local_510 = &this->_padding_;
  local_520.Data = (FScriptContainerElement *)0x0;
  local_518[0] = 0;
  local_518[1] = 0;
LAB_147cd5cd7:
  if ((longlong)uVar25 < (longlong)(param_2 + param_1)) {
    lVar27 = uVar25 << 7;
    lVar26 = (longlong)(param_2 + param_1) - uVar25;
    do {
      uVar24 = (uint)uVar25;
      uVar19 = 0;
      if ((int)uVar24 < (this->PerInstanceSMData).ArrayNum) {
        uVar19 = ~uVar24 >> 0x1f;
      }
      local_508 = lVar26;
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        uVar17 = (*pcVar3)();
        return (bool)uVar17;
      }
      local_500 = (this->PerInstanceSMData).AllocatorInstance.Data + lVar27;
      if (bVar14) {
        UE::Math::TTransform<double>::SetFromMatrix(&local_1b8,(TMatrix<double> *)local_500);
        local_278.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_278.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_278.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_278.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_278.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_278.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_278.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_278.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_278.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_278.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_278,&local_1b8,(TTransform<double> *)&this->_padding_);
        if (param_4) {
          local_218 = *(undefined4 *)(param_3->Rotation).XY.m128d_f64;
          uStack_214 = *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 4);
          uStack_210 = *(undefined4 *)((param_3->Rotation).XY.m128d_f64 + 1);
          uStack_20c = *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 0xc);
          local_208 = *(undefined4 *)(param_3->Rotation).ZW.m128d_f64;
          uStack_204 = *(undefined4 *)((longlong)(param_3->Rotation).ZW.m128d_f64 + 4);
          uStack_200 = *(undefined4 *)((param_3->Rotation).ZW.m128d_f64 + 1);
          uStack_1fc = *(undefined4 *)((longlong)(param_3->Rotation).ZW.m128d_f64 + 0xc);
          local_1f8 = *(undefined4 *)(param_3->Translation).XY.m128d_f64;
          uStack_1f4 = *(undefined4 *)((longlong)(param_3->Translation).XY.m128d_f64 + 4);
          uStack_1f0 = *(undefined4 *)((param_3->Translation).XY.m128d_f64 + 1);
          uStack_1ec = *(undefined4 *)((longlong)(param_3->Translation).XY.m128d_f64 + 0xc);
          local_1e8 = *(undefined4 *)(param_3->Translation).ZW.m128d_f64;
          uStack_1e4 = *(undefined4 *)((longlong)(param_3->Translation).ZW.m128d_f64 + 4);
          uStack_1e0 = *(undefined4 *)((param_3->Translation).ZW.m128d_f64 + 1);
          uStack_1dc = *(undefined4 *)((longlong)(param_3->Translation).ZW.m128d_f64 + 0xc);
          local_1d8 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
          uStack_1d4 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
          uStack_1d0 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
          uStack_1cc = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
          local_1c8 = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
          uStack_1c4 = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
          uStack_1c0 = *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
          uStack_1bc = *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
        }
        else {
          local_3f8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_3f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_3f8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_3f8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_3f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_3f8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_3f8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_3f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_3f8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_3f8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_3f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_3f8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_3f8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_3f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_3f8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_3f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_3f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_3f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_3f8,param_3,(TTransform<double> *)&this->_padding_);
          local_218 = local_3f8.Rotation.XY.m128d_f64[0]._0_4_;
          uStack_214 = local_3f8.Rotation.XY.m128d_f64[0]._4_4_;
          uStack_210 = local_3f8.Rotation.XY.m128d_f64[1]._0_4_;
          uStack_20c = local_3f8.Rotation.XY.m128d_f64[1]._4_4_;
          local_208 = local_3f8.Rotation.ZW.m128d_f64[0]._0_4_;
          uStack_204 = local_3f8.Rotation.ZW.m128d_f64[0]._4_4_;
          uStack_200 = local_3f8.Rotation.ZW.m128d_f64[1]._0_4_;
          uStack_1fc = local_3f8.Rotation.ZW.m128d_f64[1]._4_4_;
          local_1f8 = local_3f8.Translation.XY.m128d_f64[0]._0_4_;
          uStack_1f4 = local_3f8.Translation.XY.m128d_f64[0]._4_4_;
          uStack_1f0 = local_3f8.Translation.XY.m128d_f64[1]._0_4_;
          uStack_1ec = local_3f8.Translation.XY.m128d_f64[1]._4_4_;
          local_1e8 = local_3f8.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_1e4 = local_3f8.Translation.ZW.m128d_f64[0]._4_4_;
          uStack_1e0 = local_3f8.Translation.ZW.m128d_f64[1]._0_4_;
          uStack_1dc = local_3f8.Translation.ZW.m128d_f64[1]._4_4_;
          local_1d8 = local_3f8.Scale3D.XY.m128d_f64[0]._0_4_;
          uStack_1d4 = local_3f8.Scale3D.XY.m128d_f64[0]._4_4_;
          uStack_1d0 = local_3f8.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_1cc = local_3f8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_1c8 = local_3f8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_1c4 = local_3f8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uStack_1c0 = local_3f8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uStack_1bc = local_3f8.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        iVar20 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x60,0x10,2,&local_520,local_518,local_518 + 1);
        pFVar23 = local_520.Data + (longlong)iVar20 * 0x60;
        *(double *)pFVar23 = local_278.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar23 + 8) = local_278.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar23 + 0x10) = local_278.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar23 + 0x18) = local_278.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar23 + 0x20) = local_278.Translation.XY.m128d_f64[0];
        *(double *)(pFVar23 + 0x28) = local_278.Translation.XY.m128d_f64[1];
        *(double *)(pFVar23 + 0x30) = local_278.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar23 + 0x38) = local_278.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar23 + 0x40) = local_278.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar23 + 0x48) = local_278.Scale3D.XY.m128d_f64[1];
        *(double *)(pFVar23 + 0x50) = local_278.Scale3D.ZW.m128d_f64[0];
        *(double *)(pFVar23 + 0x58) = local_278.Scale3D.ZW.m128d_f64[1];
        *(ulonglong *)(pFVar23 + 0x60) = CONCAT44(uStack_214,local_218);
        *(ulonglong *)(pFVar23 + 0x68) = CONCAT44(uStack_20c,uStack_210);
        *(ulonglong *)(pFVar23 + 0x70) = CONCAT44(uStack_204,local_208);
        *(ulonglong *)(pFVar23 + 0x78) = CONCAT44(uStack_1fc,uStack_200);
        *(ulonglong *)(pFVar23 + 0x80) = CONCAT44(uStack_1f4,local_1f8);
        *(ulonglong *)(pFVar23 + 0x88) = CONCAT44(uStack_1ec,uStack_1f0);
        *(ulonglong *)(pFVar23 + 0x90) = CONCAT44(uStack_1e4,local_1e8);
        *(ulonglong *)(pFVar23 + 0x98) = CONCAT44(uStack_1dc,uStack_1e0);
        *(ulonglong *)(pFVar23 + 0xa0) = CONCAT44(uStack_1d4,local_1d8);
        *(ulonglong *)(pFVar23 + 0xa8) = CONCAT44(uStack_1cc,uStack_1d0);
        *(ulonglong *)(pFVar23 + 0xb0) = CONCAT44(uStack_1c4,local_1c8);
        *(ulonglong *)(pFVar23 + 0xb8) = CONCAT44(uStack_1bc,uStack_1c0);
        lVar26 = local_508;
      }
      if (param_4) {
        pTVar21 = UE::Math::TTransform<double>::GetRelativeTransform
                            (param_3,&local_158,(TTransform<double> *)&this->_padding_);
      }
      else {
        pTVar21 = &local_4d8;
        local_4d8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
        local_4d8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
        local_4d8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
        local_4d8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
        local_4d8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
        local_4d8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
        local_4d8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
        local_4d8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
        local_4d8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
        local_4d8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
        local_4d8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
        local_4d8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
      }
      local_338.Rotation.XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
      local_338.Rotation.XY.m128d_f64[1] = (pTVar21->Rotation).XY.m128d_f64[1];
      dVar13 = local_338.Rotation.XY.m128d_f64[1] + local_338.Rotation.XY.m128d_f64[1];
      local_338.Rotation.ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
      local_338.Rotation.ZW.m128d_f64[1] = (pTVar21->Rotation).ZW.m128d_f64[1];
      dVar7 = local_338.Rotation.XY.m128d_f64[0] *
              (local_338.Rotation.XY.m128d_f64[0] + local_338.Rotation.XY.m128d_f64[0]);
      local_418 = (pTVar21->Translation).XY.m128d_f64[0];
      dStack_410 = (pTVar21->Translation).XY.m128d_f64[1];
      dVar4 = local_338.Rotation.ZW.m128d_f64[0] + local_338.Rotation.ZW.m128d_f64[0];
      dVar5 = local_338.Rotation.ZW.m128d_f64[1] *
              (local_338.Rotation.XY.m128d_f64[0] + local_338.Rotation.XY.m128d_f64[0]);
      local_338.Translation.XY.m128d_f64[0] = local_418;
      local_338.Translation.XY.m128d_f64[1] = dStack_410;
      local_408 = *(undefined4 *)(pTVar21->Translation).ZW.m128d_f64;
      uStack_404 = *(undefined4 *)((longlong)(pTVar21->Translation).ZW.m128d_f64 + 4);
      local_338.Translation.ZW.m128d_f64[0]._0_4_ = local_408;
      local_338.Translation.ZW.m128d_f64[0]._4_4_ = uStack_404;
      local_338.Translation.ZW.m128d_f64[1] = (pTVar21->Translation).ZW.m128d_f64[1];
      adVar2 = *&(pTVar21->Scale3D).XY.m128d_f64;
      dVar8 = (local_338.Rotation.ZW.m128d_f64[1] * dVar4 +
              dVar13 * local_338.Rotation.XY.m128d_f64[0]) * adVar2[0];
      dVar35 = adVar2[1];
      local_448 = (dVar5 + dVar4 * local_338.Rotation.XY.m128d_f64[1]) * dVar35;
      dVar9 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
              (local_338.Rotation.ZW.m128d_f64[0] * dVar4 +
              local_338.Rotation.XY.m128d_f64[1] * dVar13)) * adVar2[0];
      dVar10 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
               (local_338.Rotation.ZW.m128d_f64[0] * dVar4 + dVar7)) * dVar35;
      local_338.Scale3D.XY.m128d_f64[0] = adVar2[0];
      local_338.Scale3D.XY.m128d_f64[1] = adVar2[1];
      local_338.Scale3D.ZW.m128d_f64 = *&(pTVar21->Scale3D).ZW.m128d_f64;
      auVar34 = blendpd((undefined1  [16])adVar2,(undefined1  [16])local_338.Scale3D.ZW.m128d_f64,2)
      ;
      dVar12 = local_338.Scale3D.ZW.m128d_f64[0];
      dVar35 = dVar35 * (dVar13 * local_338.Rotation.XY.m128d_f64[0] -
                        local_338.Rotation.ZW.m128d_f64[1] * dVar4);
      dVar5 = dVar12 * (dVar4 * local_338.Rotation.XY.m128d_f64[1] - dVar5);
      local_428 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                  (dVar7 + local_338.Rotation.XY.m128d_f64[1] * dVar13)) * dVar12;
      uVar30 = SUB84(dVar8,0);
      uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
      local_468 = auVar34._0_8_ *
                  (local_338.Rotation.XY.m128d_f64[0] * dVar4 -
                  dVar13 * local_338.Rotation.ZW.m128d_f64[1]);
      dVar12 = (dVar13 * local_338.Rotation.ZW.m128d_f64[1] +
               local_338.Rotation.XY.m128d_f64[0] * dVar4) * dVar12;
      uVar28 = SUB84(dVar10,0);
      uVar29 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uStack_460 = 0;
      local_478._8_4_ = uVar30;
      local_478._0_8_ = dVar9;
      local_478._12_4_ = uVar31;
      local_458._8_4_ = uVar28;
      local_458._0_8_ = dVar35;
      local_458._12_4_ = uVar29;
      uStack_440 = 0;
      uStack_400 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      uStack_3fc = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      uVar32 = SUB84(dVar5,0);
      uVar33 = (undefined4)((ulonglong)dVar5 >> 0x20);
      local_438._8_4_ = uVar32;
      local_438._0_8_ = dVar12;
      local_438._12_4_ = uVar33;
      uStack_420 = 0;
      auVar6._8_4_ = uVar30;
      auVar6._0_8_ = dVar9;
      auVar6._12_4_ = uVar31;
      *(undefined1 (*) [16])&local_500->field_0x0 = auVar6;
      *(double *)(local_500 + 0x10) = local_468;
      *(undefined8 *)(local_500 + 0x18) = 0;
      auVar34._8_4_ = uVar28;
      auVar34._0_8_ = dVar35;
      auVar34._12_4_ = uVar29;
      *(undefined1 (*) [16])(local_500 + 0x20) = auVar34;
      *(double *)(local_500 + 0x30) = local_448;
      *(undefined8 *)(local_500 + 0x38) = 0;
      auVar11._8_4_ = uVar32;
      auVar11._0_8_ = dVar12;
      auVar11._12_4_ = uVar33;
      *(undefined1 (*) [16])(local_500 + 0x40) = auVar11;
      *(double *)(local_500 + 0x50) = local_428;
      *(undefined8 *)(local_500 + 0x58) = 0;
      *(double *)(local_500 + 0x60) = local_418;
      *(double *)(local_500 + 0x68) = dStack_410;
      *(undefined4 *)(local_500 + 0x70) = local_408;
      *(undefined4 *)(local_500 + 0x74) = uStack_404;
      *(undefined4 *)(local_500 + 0x78) = uStack_400;
      *(undefined4 *)(local_500 + 0x7c) = uStack_3fc;
      FPrimitiveInstanceDataManager::TransformChanged(&this->PrimitiveInstanceDataManager,uVar24);
      if ((*local_510 & 8) != 0) {
        if (param_4) {
          local_2d8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_3->Rotation).XY.m128d_f64
          ;
          local_2d8.Rotation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 4);
          local_2d8.Rotation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((param_3->Rotation).XY.m128d_f64 + 1);
          local_2d8.Rotation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 0xc);
          local_2d8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_3->Rotation).ZW.m128d_f64
          ;
          local_2d8.Rotation.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Rotation).ZW.m128d_f64 + 4);
          local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((param_3->Rotation).ZW.m128d_f64 + 1);
          local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Rotation).ZW.m128d_f64 + 0xc);
          local_2d8.Translation.XY.m128d_f64[0]._0_4_ =
               *(undefined4 *)(param_3->Translation).XY.m128d_f64;
          local_2d8.Translation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Translation).XY.m128d_f64 + 4);
          local_2d8.Translation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((param_3->Translation).XY.m128d_f64 + 1);
          local_2d8.Translation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Translation).XY.m128d_f64 + 0xc);
          local_2d8.Translation.ZW.m128d_f64[0]._0_4_ =
               *(undefined4 *)(param_3->Translation).ZW.m128d_f64;
          local_2d8.Translation.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Translation).ZW.m128d_f64 + 4);
          local_2d8.Translation.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((param_3->Translation).ZW.m128d_f64 + 1);
          local_2d8.Translation.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Translation).ZW.m128d_f64 + 0xc);
          local_2d8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
          local_2d8.Scale3D.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
          local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
          local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
          local_2d8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_3->Scale3D).ZW.m128d_f64;
          local_2d8.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4);
          local_2d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((param_3->Scale3D).ZW.m128d_f64 + 1);
          local_2d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc);
        }
        else {
          local_398.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_398.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_398.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_398.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_398.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_398.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_398.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_398.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_398.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_398.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_398.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_398.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_398.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_398.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_398.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_398.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_398.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_398.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_398,&local_338,(TTransform<double> *)&this->_padding_);
          local_2d8.Rotation.XY.m128d_f64[0]._0_4_ = local_398.Rotation.XY.m128d_f64[0]._0_4_;
          local_2d8.Rotation.XY.m128d_f64[0]._4_4_ = local_398.Rotation.XY.m128d_f64[0]._4_4_;
          local_2d8.Rotation.XY.m128d_f64[1]._0_4_ = local_398.Rotation.XY.m128d_f64[1]._0_4_;
          local_2d8.Rotation.XY.m128d_f64[1]._4_4_ = local_398.Rotation.XY.m128d_f64[1]._4_4_;
          local_2d8.Rotation.ZW.m128d_f64[0]._0_4_ = local_398.Rotation.ZW.m128d_f64[0]._0_4_;
          local_2d8.Rotation.ZW.m128d_f64[0]._4_4_ = local_398.Rotation.ZW.m128d_f64[0]._4_4_;
          local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ = local_398.Rotation.ZW.m128d_f64[1]._0_4_;
          local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ = local_398.Rotation.ZW.m128d_f64[1]._4_4_;
          local_2d8.Translation.XY.m128d_f64[0]._0_4_ = local_398.Translation.XY.m128d_f64[0]._0_4_;
          local_2d8.Translation.XY.m128d_f64[0]._4_4_ = local_398.Translation.XY.m128d_f64[0]._4_4_;
          local_2d8.Translation.XY.m128d_f64[1]._0_4_ = local_398.Translation.XY.m128d_f64[1]._0_4_;
          local_2d8.Translation.XY.m128d_f64[1]._4_4_ = local_398.Translation.XY.m128d_f64[1]._4_4_;
          local_2d8.Translation.ZW.m128d_f64[0]._0_4_ = local_398.Translation.ZW.m128d_f64[0]._0_4_;
          local_2d8.Translation.ZW.m128d_f64[0]._4_4_ = local_398.Translation.ZW.m128d_f64[0]._4_4_;
          local_2d8.Translation.ZW.m128d_f64[1]._0_4_ = local_398.Translation.ZW.m128d_f64[1]._0_4_;
          local_2d8.Translation.ZW.m128d_f64[1]._4_4_ = local_398.Translation.ZW.m128d_f64[1]._4_4_;
          local_2d8.Scale3D.XY.m128d_f64[0]._0_4_ = local_398.Scale3D.XY.m128d_f64[0]._0_4_;
          local_2d8.Scale3D.XY.m128d_f64[0]._4_4_ = local_398.Scale3D.XY.m128d_f64[0]._4_4_;
          local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ = local_398.Scale3D.XY.m128d_f64[1]._0_4_;
          local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ = local_398.Scale3D.XY.m128d_f64[1]._4_4_;
          local_2d8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_398.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_2d8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_398.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_2d8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_398.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_2d8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_398.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        UpdateInstanceBodyTransform(this,uVar24,&local_2d8,param_6);
      }
      uVar25 = (ulonglong)(uVar24 + 1);
      lVar27 = lVar27 + 0x80;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    local_508 = 0;
  }
  if (bVar18) {
    if (bVar14) {
      pcVar3 = *(code **)(this->_padding_ + 0xc78);
      iVar20 = local_518[0];
      local_4f8 = local_520.Data;
      if ((local_518[0] < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        uVar17 = (*pcVar3)();
        return (bool)uVar17;
      }
      iStack_4f0 = iVar20;
      local_4e8 = (undefined4)local_4f8;
      uStack_4e4 = local_4f8._4_4_;
      iStack_4e0 = iVar20;
      uStack_4dc = uStack_4ec;
      (*pcVar3)(this,&local_4e8);
    }
    else {
      (**(code **)(this->_padding_ + 0xc80))(this);
    }
  }
  if (param_5) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  if (local_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data);
  }
  return true;
}

// BatchUpdateInstancesTransforms @ 147cd6610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::BatchUpdateInstancesTransforms
          (UInstancedStaticMeshComponent *this,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          bool param_5,bool param_6)

{
  longlong *plVar1;
  double adVar2 [2];
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 uVar23;
  char cVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  TTransform<double> *pTVar29;
  FScriptContainerElement *pFVar30;
  int iVar31;
  TTransform<double> *this_00;
  ulonglong uVar32;
  longlong lVar33;
  TTransform<double> *this_01;
  uint uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar42;
  undefined1 auVar41 [16];
  undefined1 auStackY_6c8 [32];
  ForAnyElementType local_690;
  int local_688 [2];
  longlong local_680;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_678;
  int local_670;
  FScriptContainerElement *local_668;
  longlong *local_660;
  longlong local_658;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_650;
  ulonglong local_648;
  FScriptContainerElement *local_640;
  undefined8 local_638;
  int iStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  int iStack_620;
  undefined4 uStack_61c;
  TTransform<double> local_618;
  TTransform<double> local_5b8;
  undefined1 local_558 [16];
  double local_548;
  undefined8 uStack_540;
  undefined1 local_538 [16];
  double local_528;
  undefined8 uStack_520;
  undefined1 local_518 [16];
  double local_508;
  undefined8 uStack_500;
  double local_4f8;
  double dStack_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined1 local_4d8 [16];
  double local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  undefined8 uStack_4a0;
  undefined1 local_498 [16];
  double local_488;
  undefined8 uStack_480;
  double local_478;
  double dStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  uVar32 = (ulonglong)param_1;
  local_678 = param_3;
  local_650 = param_2;
  if ((param_2->ArrayNum != param_3->ArrayNum) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewInstancesTransforms.Num() == NewInstancesPrevTransforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                          ,0x1156,L""), bVar22)) {
    pcVar5 = (code *)swi(3);
    uVar23 = (*pcVar5)();
    return (bool)uVar23;
  }
  if ((((param_1 < 0) || (iVar28 = (this->PerInstanceSMData).ArrayNum, iVar28 <= param_1)) ||
      (iVar31 = param_2->ArrayNum + -1 + param_1, iVar31 < 0)) || (iVar28 <= iVar31)) {
    return false;
  }
  iVar28 = (this->PerInstancePrevTransform).ArrayNum;
  if ((((iVar28 <= param_1) || (iVar31 = local_678->ArrayNum + -1 + param_1, iVar31 < 0)) ||
      (iVar28 <= iVar31)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("PerInstancePrevTransform.IsValidIndex(StartInstanceIndex) && PerInstancePrevTransform.IsValidIndex(StartInstanceIndex + NewInstancesPrevTransforms.Num() - 1)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                          ,0x115f,L""), bVar22)) {
    pcVar5 = (code *)swi(3);
    uVar23 = (*pcVar5)();
    return (bool)uVar23;
  }
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[2].bIsValid = false;
  if (((this->_padding_ & 0x400000) == 0) || (plVar1 = &this->_padding_, (*plVar1 & 1) == 0)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
    local_660 = plVar1;
    cVar24 = (**(code **)(this->_padding_ + 0xc88))(this);
    if (cVar24 != '\0') {
      uVar4 = param_2->ArrayNum;
      bVar20 = true;
      local_690.Data = (FScriptContainerElement *)0x0;
      local_688[0] = 0;
      local_688[1] = 0;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      bVar22 = true;
      if (0 < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar4,&local_690,0,local_688 + 1);
        bVar22 = true;
        bVar20 = true;
        local_660 = plVar1;
      }
      goto LAB_147cd67da;
    }
  }
  bVar20 = false;
  local_660 = &this->_padding_;
  local_690.Data = (FScriptContainerElement *)0x0;
  local_688[0] = 0;
  local_688[1] = 0;
LAB_147cd67da:
  iVar28 = param_2->ArrayNum;
  if (0 < iVar28) {
    lVar33 = uVar32 << 7;
    local_670 = -param_1;
    local_680 = 0;
    local_658 = 0;
    local_648 = uVar32;
    do {
      lVar21 = local_658;
      uVar4 = (uint)uVar32;
      uVar34 = local_670 + uVar4;
      uVar26 = 0;
      uVar27 = uVar26;
      if ((int)uVar34 < iVar28) {
        uVar27 = ~uVar34 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar5 = (code *)swi(3);
        uVar23 = (*pcVar5)();
        return (bool)uVar23;
      }
      this_00 = (TTransform<double> *)((local_650->AllocatorInstance).Data + lVar21);
      uVar27 = uVar26;
      if ((int)uVar34 < local_678->ArrayNum) {
        uVar27 = ~uVar34 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar5 = (code *)swi(3);
        uVar23 = (*pcVar5)();
        return (bool)uVar23;
      }
      this_01 = (TTransform<double> *)((local_678->AllocatorInstance).Data + local_658);
      uVar27 = uVar26;
      if ((int)uVar4 < (this->PerInstanceSMData).ArrayNum) {
        uVar27 = ~uVar4 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar5 = (code *)swi(3);
        uVar23 = (*pcVar5)();
        return (bool)uVar23;
      }
      local_668 = (this->PerInstanceSMData).AllocatorInstance.Data + lVar33;
      if ((int)uVar4 < (this->PerInstancePrevTransform).ArrayNum) {
        uVar26 = ~uVar4 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar5 = (code *)swi(3);
        uVar23 = (*pcVar5)();
        return (bool)uVar23;
      }
      local_640 = (this->PerInstancePrevTransform).AllocatorInstance.Data + lVar33;
      if (bVar20) {
        UE::Math::TTransform<double>::SetFromMatrix(&local_218,(TMatrix<double> *)local_668);
        local_2d8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2d8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_2d8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2d8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2d8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2d8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_2d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_2d8,&local_218,(TTransform<double> *)&this->_padding_);
        if (param_4) {
          local_278 = *(undefined4 *)(this_00->Rotation).XY.m128d_f64;
          uStack_274 = *(undefined4 *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4);
          uStack_270 = *(undefined4 *)((this_00->Rotation).XY.m128d_f64 + 1);
          uStack_26c = *(undefined4 *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc);
          local_268 = *(undefined4 *)(this_00->Rotation).ZW.m128d_f64;
          uStack_264 = *(undefined4 *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 4);
          uStack_260 = *(undefined4 *)((this_00->Rotation).ZW.m128d_f64 + 1);
          uStack_25c = *(undefined4 *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 0xc);
          local_258 = *(undefined4 *)(this_00->Translation).XY.m128d_f64;
          uStack_254 = *(undefined4 *)((longlong)(this_00->Translation).XY.m128d_f64 + 4);
          uStack_250 = *(undefined4 *)((this_00->Translation).XY.m128d_f64 + 1);
          uStack_24c = *(undefined4 *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc);
          local_248 = *(undefined4 *)(this_00->Translation).ZW.m128d_f64;
          uStack_244 = *(undefined4 *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4);
          uStack_240 = *(undefined4 *)((this_00->Translation).ZW.m128d_f64 + 1);
          uStack_23c = *(undefined4 *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc);
          local_238 = *(undefined4 *)(this_00->Scale3D).XY.m128d_f64;
          uStack_234 = *(undefined4 *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4);
          uStack_230 = *(undefined4 *)((this_00->Scale3D).XY.m128d_f64 + 1);
          uStack_22c = *(undefined4 *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc);
          local_228 = *(undefined4 *)(this_00->Scale3D).ZW.m128d_f64;
          uStack_224 = *(undefined4 *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4);
          uStack_220 = *(undefined4 *)((this_00->Scale3D).ZW.m128d_f64 + 1);
          uStack_21c = *(undefined4 *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc);
        }
        else {
          local_458.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_458.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_458.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_458.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_458.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_458.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_458.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_458.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_458.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_458.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_458.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_458.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_458.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_458.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_458.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_458.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_458.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_458.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_458,this_00,(TTransform<double> *)&this->_padding_);
          local_278 = local_458.Rotation.XY.m128d_f64[0]._0_4_;
          uStack_274 = local_458.Rotation.XY.m128d_f64[0]._4_4_;
          uStack_270 = local_458.Rotation.XY.m128d_f64[1]._0_4_;
          uStack_26c = local_458.Rotation.XY.m128d_f64[1]._4_4_;
          local_268 = local_458.Rotation.ZW.m128d_f64[0]._0_4_;
          uStack_264 = local_458.Rotation.ZW.m128d_f64[0]._4_4_;
          uStack_260 = local_458.Rotation.ZW.m128d_f64[1]._0_4_;
          uStack_25c = local_458.Rotation.ZW.m128d_f64[1]._4_4_;
          local_258 = local_458.Translation.XY.m128d_f64[0]._0_4_;
          uStack_254 = local_458.Translation.XY.m128d_f64[0]._4_4_;
          uStack_250 = local_458.Translation.XY.m128d_f64[1]._0_4_;
          uStack_24c = local_458.Translation.XY.m128d_f64[1]._4_4_;
          local_248 = local_458.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_244 = local_458.Translation.ZW.m128d_f64[0]._4_4_;
          uStack_240 = local_458.Translation.ZW.m128d_f64[1]._0_4_;
          uStack_23c = local_458.Translation.ZW.m128d_f64[1]._4_4_;
          local_238 = local_458.Scale3D.XY.m128d_f64[0]._0_4_;
          uStack_234 = local_458.Scale3D.XY.m128d_f64[0]._4_4_;
          uStack_230 = local_458.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_22c = local_458.Scale3D.XY.m128d_f64[1]._4_4_;
          local_228 = local_458.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_224 = local_458.Scale3D.ZW.m128d_f64[0]._4_4_;
          uStack_220 = local_458.Scale3D.ZW.m128d_f64[1]._0_4_;
          uStack_21c = local_458.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        iVar28 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x60,0x10,2,&local_690,local_688,local_688 + 1);
        pFVar30 = local_690.Data + (longlong)iVar28 * 0x60;
        *(double *)pFVar30 = local_2d8.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar30 + 8) = local_2d8.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar30 + 0x10) = local_2d8.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar30 + 0x18) = local_2d8.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar30 + 0x20) = local_2d8.Translation.XY.m128d_f64[0];
        *(double *)(pFVar30 + 0x28) = local_2d8.Translation.XY.m128d_f64[1];
        *(double *)(pFVar30 + 0x30) = local_2d8.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar30 + 0x38) = local_2d8.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar30 + 0x40) = local_2d8.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar30 + 0x48) = local_2d8.Scale3D.XY.m128d_f64[1];
        *(double *)(pFVar30 + 0x50) = local_2d8.Scale3D.ZW.m128d_f64[0];
        *(double *)(pFVar30 + 0x58) = local_2d8.Scale3D.ZW.m128d_f64[1];
        *(ulonglong *)(pFVar30 + 0x60) = CONCAT44(uStack_274,local_278);
        *(ulonglong *)(pFVar30 + 0x68) = CONCAT44(uStack_26c,uStack_270);
        *(ulonglong *)(pFVar30 + 0x70) = CONCAT44(uStack_264,local_268);
        *(ulonglong *)(pFVar30 + 0x78) = CONCAT44(uStack_25c,uStack_260);
        *(ulonglong *)(pFVar30 + 0x80) = CONCAT44(uStack_254,local_258);
        *(ulonglong *)(pFVar30 + 0x88) = CONCAT44(uStack_24c,uStack_250);
        *(ulonglong *)(pFVar30 + 0x90) = CONCAT44(uStack_244,local_248);
        *(ulonglong *)(pFVar30 + 0x98) = CONCAT44(uStack_23c,uStack_240);
        *(ulonglong *)(pFVar30 + 0xa0) = CONCAT44(uStack_234,local_238);
        *(ulonglong *)(pFVar30 + 0xa8) = CONCAT44(uStack_22c,uStack_230);
        *(ulonglong *)(pFVar30 + 0xb0) = CONCAT44(uStack_224,local_228);
        *(ulonglong *)(pFVar30 + 0xb8) = CONCAT44(uStack_21c,uStack_220);
      }
      if (param_4) {
        pTVar29 = UE::Math::TTransform<double>::GetRelativeTransform
                            (this_00,&local_1b8,(TTransform<double> *)&this->_padding_);
      }
      else {
        pTVar29 = &local_618;
        local_618.Rotation.XY.m128d_f64[0] = (this_00->Rotation).XY.m128d_f64[0];
        local_618.Rotation.XY.m128d_f64[1] = (this_00->Rotation).XY.m128d_f64[1];
        local_618.Rotation.ZW.m128d_f64[0] = (this_00->Rotation).ZW.m128d_f64[0];
        local_618.Rotation.ZW.m128d_f64[1] = (this_00->Rotation).ZW.m128d_f64[1];
        local_618.Translation.XY.m128d_f64[0] = (this_00->Translation).XY.m128d_f64[0];
        local_618.Translation.XY.m128d_f64[1] = (this_00->Translation).XY.m128d_f64[1];
        local_618.Translation.ZW.m128d_f64[0] = (this_00->Translation).ZW.m128d_f64[0];
        local_618.Translation.ZW.m128d_f64[1] = (this_00->Translation).ZW.m128d_f64[1];
        local_618.Scale3D.XY.m128d_f64[0] = (this_00->Scale3D).XY.m128d_f64[0];
        local_618.Scale3D.XY.m128d_f64[1] = (this_00->Scale3D).XY.m128d_f64[1];
        local_618.Scale3D.ZW.m128d_f64[0] = (this_00->Scale3D).ZW.m128d_f64[0];
        local_618.Scale3D.ZW.m128d_f64[1] = (this_00->Scale3D).ZW.m128d_f64[1];
      }
      local_398.Rotation.XY.m128d_f64[0] = (pTVar29->Rotation).XY.m128d_f64[0];
      local_398.Rotation.XY.m128d_f64[1] = (pTVar29->Rotation).XY.m128d_f64[1];
      dVar17 = local_398.Rotation.XY.m128d_f64[1] + local_398.Rotation.XY.m128d_f64[1];
      local_398.Rotation.ZW.m128d_f64[0] = (pTVar29->Rotation).ZW.m128d_f64[0];
      local_398.Rotation.ZW.m128d_f64[1] = (pTVar29->Rotation).ZW.m128d_f64[1];
      dVar10 = (local_398.Rotation.XY.m128d_f64[0] + local_398.Rotation.XY.m128d_f64[0]) *
               local_398.Rotation.XY.m128d_f64[0];
      local_4f8 = (pTVar29->Translation).XY.m128d_f64[0];
      dStack_4f0 = (pTVar29->Translation).XY.m128d_f64[1];
      dVar6 = local_398.Rotation.ZW.m128d_f64[0] + local_398.Rotation.ZW.m128d_f64[0];
      dVar7 = local_398.Rotation.ZW.m128d_f64[1] *
              (local_398.Rotation.XY.m128d_f64[0] + local_398.Rotation.XY.m128d_f64[0]);
      local_398.Translation.XY.m128d_f64[0] = local_4f8;
      local_398.Translation.XY.m128d_f64[1] = dStack_4f0;
      local_4e8 = *(undefined4 *)(pTVar29->Translation).ZW.m128d_f64;
      uStack_4e4 = *(undefined4 *)((longlong)(pTVar29->Translation).ZW.m128d_f64 + 4);
      local_398.Translation.ZW.m128d_f64[0]._0_4_ = local_4e8;
      local_398.Translation.ZW.m128d_f64[0]._4_4_ = uStack_4e4;
      local_398.Translation.ZW.m128d_f64[1] = (pTVar29->Translation).ZW.m128d_f64[1];
      adVar2 = *&(pTVar29->Scale3D).XY.m128d_f64;
      dVar11 = (local_398.Rotation.ZW.m128d_f64[1] * dVar6 +
               dVar17 * local_398.Rotation.XY.m128d_f64[0]) * adVar2[0];
      dVar42 = adVar2[1];
      local_528 = (dVar7 + dVar6 * local_398.Rotation.XY.m128d_f64[1]) * dVar42;
      dVar12 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
               (dVar6 * local_398.Rotation.ZW.m128d_f64[0] +
               dVar17 * local_398.Rotation.XY.m128d_f64[1])) * adVar2[0];
      dVar13 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
               (dVar6 * local_398.Rotation.ZW.m128d_f64[0] + dVar10)) * dVar42;
      local_398.Scale3D.XY.m128d_f64[0] = adVar2[0];
      local_398.Scale3D.XY.m128d_f64[1] = adVar2[1];
      local_398.Scale3D.ZW.m128d_f64 = *&(pTVar29->Scale3D).ZW.m128d_f64;
      auVar41 = blendpd((undefined1  [16])adVar2,(undefined1  [16])local_398.Scale3D.ZW.m128d_f64,2)
      ;
      dVar16 = local_398.Scale3D.ZW.m128d_f64[0];
      dVar42 = dVar42 * (dVar17 * local_398.Rotation.XY.m128d_f64[0] -
                        local_398.Rotation.ZW.m128d_f64[1] * dVar6);
      dVar7 = dVar16 * (dVar6 * local_398.Rotation.XY.m128d_f64[1] - dVar7);
      local_508 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                  (dVar10 + dVar17 * local_398.Rotation.XY.m128d_f64[1])) * dVar16;
      uVar37 = SUB84(dVar11,0);
      uVar38 = (undefined4)((ulonglong)dVar11 >> 0x20);
      local_548 = auVar41._0_8_ *
                  (local_398.Rotation.XY.m128d_f64[0] * dVar6 -
                  dVar17 * local_398.Rotation.ZW.m128d_f64[1]);
      dVar16 = (dVar17 * local_398.Rotation.ZW.m128d_f64[1] +
               local_398.Rotation.XY.m128d_f64[0] * dVar6) * dVar16;
      uVar35 = SUB84(dVar13,0);
      uVar36 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uStack_540 = 0;
      local_558._8_4_ = uVar37;
      local_558._0_8_ = dVar12;
      local_558._12_4_ = uVar38;
      local_538._8_4_ = uVar35;
      local_538._0_8_ = dVar42;
      local_538._12_4_ = uVar36;
      uStack_520 = 0;
      uStack_4e0 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      uStack_4dc = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      uVar39 = SUB84(dVar7,0);
      uVar40 = (undefined4)((ulonglong)dVar7 >> 0x20);
      local_518._8_4_ = uVar39;
      local_518._0_8_ = dVar16;
      local_518._12_4_ = uVar40;
      uStack_500 = 0;
      auVar3._8_4_ = uVar37;
      auVar3._0_8_ = dVar12;
      auVar3._12_4_ = uVar38;
      *(undefined1 (*) [16])&local_668->field_0x0 = auVar3;
      *(double *)(local_668 + 0x10) = local_548;
      *(undefined8 *)(local_668 + 0x18) = 0;
      auVar41._8_4_ = uVar35;
      auVar41._0_8_ = dVar42;
      auVar41._12_4_ = uVar36;
      *(undefined1 (*) [16])(local_668 + 0x20) = auVar41;
      *(double *)(local_668 + 0x30) = local_528;
      *(undefined8 *)(local_668 + 0x38) = 0;
      auVar14._8_4_ = uVar39;
      auVar14._0_8_ = dVar16;
      auVar14._12_4_ = uVar40;
      *(undefined1 (*) [16])(local_668 + 0x40) = auVar14;
      *(double *)(local_668 + 0x50) = local_508;
      *(undefined8 *)(local_668 + 0x58) = 0;
      *(double *)(local_668 + 0x60) = local_4f8;
      *(double *)(local_668 + 0x68) = dStack_4f0;
      *(undefined4 *)(local_668 + 0x70) = local_4e8;
      *(undefined4 *)(local_668 + 0x74) = uStack_4e4;
      *(undefined4 *)(local_668 + 0x78) = uStack_4e0;
      *(undefined4 *)(local_668 + 0x7c) = uStack_4dc;
      FPrimitiveInstanceDataManager::TransformChanged(&this->PrimitiveInstanceDataManager,uVar4);
      if (param_4) {
        pTVar29 = UE::Math::TTransform<double>::GetRelativeTransform
                            (this_01,&local_158,(TTransform<double> *)&this->_padding_);
      }
      else {
        pTVar29 = &local_5b8;
        local_5b8.Rotation.XY.m128d_f64[0] = (this_01->Rotation).XY.m128d_f64[0];
        local_5b8.Rotation.XY.m128d_f64[1] = (this_01->Rotation).XY.m128d_f64[1];
        local_5b8.Rotation.ZW.m128d_f64[0] = (this_01->Rotation).ZW.m128d_f64[0];
        local_5b8.Rotation.ZW.m128d_f64[1] = (this_01->Rotation).ZW.m128d_f64[1];
        local_5b8.Translation.XY.m128d_f64[0] = (this_01->Translation).XY.m128d_f64[0];
        local_5b8.Translation.XY.m128d_f64[1] = (this_01->Translation).XY.m128d_f64[1];
        local_5b8.Translation.ZW.m128d_f64[0] = (this_01->Translation).ZW.m128d_f64[0];
        local_5b8.Translation.ZW.m128d_f64[1] = (this_01->Translation).ZW.m128d_f64[1];
        local_5b8.Scale3D.XY.m128d_f64[0] = (this_01->Scale3D).XY.m128d_f64[0];
        local_5b8.Scale3D.XY.m128d_f64[1] = (this_01->Scale3D).XY.m128d_f64[1];
        local_5b8.Scale3D.ZW.m128d_f64[0] = (this_01->Scale3D).ZW.m128d_f64[0];
        local_5b8.Scale3D.ZW.m128d_f64[1] = (this_01->Scale3D).ZW.m128d_f64[1];
      }
      dVar17 = (pTVar29->Rotation).XY.m128d_f64[0];
      dVar18 = (pTVar29->Rotation).XY.m128d_f64[1];
      dVar7 = (pTVar29->Rotation).ZW.m128d_f64[0];
      dVar19 = (pTVar29->Rotation).ZW.m128d_f64[1];
      auVar41 = *(undefined1 (*) [16])(pTVar29->Scale3D).ZW.m128d_f64;
      auVar3 = *(undefined1 (*) [16])(pTVar29->Scale3D).XY.m128d_f64;
      local_478 = (pTVar29->Translation).XY.m128d_f64[0];
      dStack_470 = (pTVar29->Translation).XY.m128d_f64[1];
      local_468 = *(undefined4 *)(pTVar29->Translation).ZW.m128d_f64;
      uStack_464 = *(undefined4 *)((longlong)(pTVar29->Translation).ZW.m128d_f64 + 4);
      dVar6 = dVar7 + dVar7;
      dVar16 = dVar18 + dVar18;
      dVar10 = (dVar17 + dVar17) * dVar17;
      dVar11 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar6 * dVar7 + dVar16 * dVar18)
               ) * auVar3._0_8_;
      dVar42 = auVar3._8_8_;
      dVar12 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar6 * dVar7 + dVar10)) *
               dVar42;
      dVar7 = dVar19 * (dVar17 + dVar17);
      dVar13 = auVar41._0_8_;
      local_488 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar10 + dVar16 * dVar18)) *
                  dVar13;
      dVar10 = (dVar19 * dVar6 + dVar16 * dVar17) * auVar3._0_8_;
      local_4a8 = (dVar7 + dVar6 * dVar18) * dVar42;
      uStack_480 = 0;
      auVar41 = blendpd(auVar3,auVar41,2);
      dVar42 = dVar42 * (dVar16 * dVar17 - dVar19 * dVar6);
      dVar7 = dVar13 * (dVar6 * dVar18 - dVar7);
      uVar37 = SUB84(dVar10,0);
      uVar38 = (undefined4)((ulonglong)dVar10 >> 0x20);
      local_4c8 = auVar41._0_8_ * (dVar17 * dVar6 - dVar16 * dVar19);
      uStack_460 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      uStack_45c = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      dVar13 = (dVar16 * dVar19 + dVar17 * dVar6) * dVar13;
      uVar39 = SUB84(dVar7,0);
      uVar40 = (undefined4)((ulonglong)dVar7 >> 0x20);
      uVar35 = SUB84(dVar12,0);
      uVar36 = (undefined4)((ulonglong)dVar12 >> 0x20);
      local_498._8_4_ = uVar39;
      local_498._0_8_ = dVar13;
      local_498._12_4_ = uVar40;
      local_4d8._8_4_ = uVar37;
      local_4d8._0_8_ = dVar11;
      local_4d8._12_4_ = uVar38;
      uStack_4c0 = 0;
      local_4b8._8_4_ = uVar35;
      local_4b8._0_8_ = dVar42;
      local_4b8._12_4_ = uVar36;
      uStack_4a0 = 0;
      auVar9._8_4_ = uVar37;
      auVar9._0_8_ = dVar11;
      auVar9._12_4_ = uVar38;
      *(undefined1 (*) [16])local_640 = auVar9;
      *(double *)&local_640[0x10].field_0x0 = local_4c8;
      *(undefined8 *)(local_640 + 0x18) = 0;
      auVar8._8_4_ = uVar35;
      auVar8._0_8_ = dVar42;
      auVar8._12_4_ = uVar36;
      *(undefined1 (*) [16])(local_640 + 0x20) = auVar8;
      *(double *)&local_640[0x30].field_0x0 = local_4a8;
      *(undefined8 *)(local_640 + 0x38) = 0;
      auVar15._8_4_ = uVar39;
      auVar15._0_8_ = dVar13;
      auVar15._12_4_ = uVar40;
      *(undefined1 (*) [16])(local_640 + 0x40) = auVar15;
      *(double *)&local_640[0x50].field_0x0 = local_488;
      *(undefined8 *)(local_640 + 0x58) = 0;
      *(double *)&local_640[0x60].field_0x0 = local_478;
      *(double *)(local_640 + 0x68) = dStack_470;
      *(undefined4 *)&local_640[0x70].field_0x0 = local_468;
      *(undefined4 *)(local_640 + 0x74) = uStack_464;
      *(undefined4 *)(local_640 + 0x78) = uStack_460;
      *(undefined4 *)(local_640 + 0x7c) = uStack_45c;
      if ((*local_660 & 8) != 0) {
        if (param_4) {
          local_338.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(this_00->Rotation).XY.m128d_f64
          ;
          local_338.Rotation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4);
          local_338.Rotation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((this_00->Rotation).XY.m128d_f64 + 1);
          local_338.Rotation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc);
          local_338.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(this_00->Rotation).ZW.m128d_f64
          ;
          local_338.Rotation.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 4);
          local_338.Rotation.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((this_00->Rotation).ZW.m128d_f64 + 1);
          local_338.Rotation.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 0xc);
          local_338.Translation.XY.m128d_f64[0]._0_4_ =
               *(undefined4 *)(this_00->Translation).XY.m128d_f64;
          local_338.Translation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Translation).XY.m128d_f64 + 4);
          local_338.Translation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((this_00->Translation).XY.m128d_f64 + 1);
          local_338.Translation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc);
          local_338.Translation.ZW.m128d_f64[0]._0_4_ =
               *(undefined4 *)(this_00->Translation).ZW.m128d_f64;
          local_338.Translation.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4);
          local_338.Translation.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((this_00->Translation).ZW.m128d_f64 + 1);
          local_338.Translation.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc);
          local_338.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(this_00->Scale3D).XY.m128d_f64;
          local_338.Scale3D.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4);
          local_338.Scale3D.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((this_00->Scale3D).XY.m128d_f64 + 1);
          local_338.Scale3D.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc);
          local_338.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(this_00->Scale3D).ZW.m128d_f64;
          local_338.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4);
          local_338.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((this_00->Scale3D).ZW.m128d_f64 + 1);
          local_338.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc);
        }
        else {
          local_3f8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_3f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_3f8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_3f8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_3f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_3f8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_3f8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_3f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_3f8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_3f8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_3f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_3f8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_3f8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_3f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_3f8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_3f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_3f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_3f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_3f8,&local_398,(TTransform<double> *)&this->_padding_);
          local_338.Rotation.XY.m128d_f64[0]._0_4_ = local_3f8.Rotation.XY.m128d_f64[0]._0_4_;
          local_338.Rotation.XY.m128d_f64[0]._4_4_ = local_3f8.Rotation.XY.m128d_f64[0]._4_4_;
          local_338.Rotation.XY.m128d_f64[1]._0_4_ = local_3f8.Rotation.XY.m128d_f64[1]._0_4_;
          local_338.Rotation.XY.m128d_f64[1]._4_4_ = local_3f8.Rotation.XY.m128d_f64[1]._4_4_;
          local_338.Rotation.ZW.m128d_f64[0]._0_4_ = local_3f8.Rotation.ZW.m128d_f64[0]._0_4_;
          local_338.Rotation.ZW.m128d_f64[0]._4_4_ = local_3f8.Rotation.ZW.m128d_f64[0]._4_4_;
          local_338.Rotation.ZW.m128d_f64[1]._0_4_ = local_3f8.Rotation.ZW.m128d_f64[1]._0_4_;
          local_338.Rotation.ZW.m128d_f64[1]._4_4_ = local_3f8.Rotation.ZW.m128d_f64[1]._4_4_;
          local_338.Translation.XY.m128d_f64[0]._0_4_ = local_3f8.Translation.XY.m128d_f64[0]._0_4_;
          local_338.Translation.XY.m128d_f64[0]._4_4_ = local_3f8.Translation.XY.m128d_f64[0]._4_4_;
          local_338.Translation.XY.m128d_f64[1]._0_4_ = local_3f8.Translation.XY.m128d_f64[1]._0_4_;
          local_338.Translation.XY.m128d_f64[1]._4_4_ = local_3f8.Translation.XY.m128d_f64[1]._4_4_;
          local_338.Translation.ZW.m128d_f64[0]._0_4_ = local_3f8.Translation.ZW.m128d_f64[0]._0_4_;
          local_338.Translation.ZW.m128d_f64[0]._4_4_ = local_3f8.Translation.ZW.m128d_f64[0]._4_4_;
          local_338.Translation.ZW.m128d_f64[1]._0_4_ = local_3f8.Translation.ZW.m128d_f64[1]._0_4_;
          local_338.Translation.ZW.m128d_f64[1]._4_4_ = local_3f8.Translation.ZW.m128d_f64[1]._4_4_;
          local_338.Scale3D.XY.m128d_f64[0]._0_4_ = local_3f8.Scale3D.XY.m128d_f64[0]._0_4_;
          local_338.Scale3D.XY.m128d_f64[0]._4_4_ = local_3f8.Scale3D.XY.m128d_f64[0]._4_4_;
          local_338.Scale3D.XY.m128d_f64[1]._0_4_ = local_3f8.Scale3D.XY.m128d_f64[1]._0_4_;
          local_338.Scale3D.XY.m128d_f64[1]._4_4_ = local_3f8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_338.Scale3D.ZW.m128d_f64[0]._0_4_ = local_3f8.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_338.Scale3D.ZW.m128d_f64[0]._4_4_ = local_3f8.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_338.Scale3D.ZW.m128d_f64[1]._0_4_ = local_3f8.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_338.Scale3D.ZW.m128d_f64[1]._4_4_ = local_3f8.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        UpdateInstanceBodyTransform(this,uVar4,&local_338,param_6);
      }
      uVar32 = (ulonglong)(uVar4 + 1);
      lVar33 = lVar33 + 0x80;
      local_680 = local_680 + 1;
      local_658 = local_658 + 0x60;
      iVar28 = local_650->ArrayNum;
    } while ((int)(local_670 + uVar4 + 1) < iVar28);
  }
  if (bVar22) {
    if (bVar20) {
      pcVar5 = *(code **)(this->_padding_ + 0xc78);
      iVar28 = local_688[0];
      local_638 = local_690.Data;
      if ((local_688[0] < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar22)) {
        pcVar5 = (code *)swi(3);
        uVar23 = (*pcVar5)();
        return (bool)uVar23;
      }
      iStack_630 = iVar28;
      local_628 = (undefined4)local_638;
      uStack_624 = local_638._4_4_;
      iStack_620 = iVar28;
      uStack_61c = uStack_62c;
      (*pcVar5)(this,&local_628);
    }
    else {
      (**(code **)(this->_padding_ + 0xc80))(this);
    }
  }
  if (param_5) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  if (local_690.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.Data);
  }
  return true;
}

// BatchUpdateInstancesTransforms @ 147cd7310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::BatchUpdateInstancesTransforms
          (UInstancedStaticMeshComponent *this,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  pTVar2 = (TTransform<double> *)(param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pTVar2;
  bVar4 = BatchUpdateInstancesTransformsInternal(this,param_1,&local_18,param_3,param_4,param_5);
  return bVar4;
}

// BatchUpdateInstancesTransforms @ 147cd73c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::BatchUpdateInstancesTransforms
          (UInstancedStaticMeshComponent *this,int param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  bool bVar1;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = BatchUpdateInstancesTransformsInternal(this,param_1,&local_18,param_3,param_4,param_5);
  return bVar1;
}

// BatchUpdateInstancesTransformsInternal @ 147cd74b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::BatchUpdateInstancesTransformsInternal
          (UInstancedStaticMeshComponent *this,int param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  double adVar1 [2];
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TArrayView<UE::Math::TTransform<double>_const_,int> TVar6;
  TArrayView<UE::Math::TTransform<double>_const_,int> TVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TArrayView<UE::Math::TTransform<double>_const_,int> TVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  TTransform<double> *pTVar22;
  TTransform<double> *pTVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  TTransform<double> *this_00;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  bool bVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auStackY_538 [32];
  ForAnyElementType local_500;
  int local_4f8 [2];
  TArrayView<UE::Math::TTransform<double>_const_,int> *local_4f0;
  undefined8 local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  int iStack_4d0;
  undefined4 uStack_4cc;
  TTransform<double> local_4c8;
  undefined1 local_468 [16];
  TTransform<double> *local_458;
  undefined8 uStack_450;
  undefined1 local_448 [16];
  TTransform<double> *local_438;
  undefined8 uStack_430;
  undefined1 local_428 [16];
  TTransform<double> *local_418;
  undefined8 uStack_410;
  TTransform<double> *local_408;
  double dStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  int iStack_3f0;
  undefined4 uStack_3ec;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_538;
  uVar27 = (ulonglong)param_1;
  local_4f0 = param_2;
  if (!__CsvProfilerStat4533) {
    FCsvProfilerTrace::OutputInlineStatExclusive
              ("UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms");
    __CsvProfilerStat4533 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms",
             "CSV_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms");
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4534,
               "UInstancedStaticMeshComponent::BatchUpdateInstancesTransforms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x11b6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4534);
  }
  if ((-1 < param_1) && (iVar21 = (this->PerInstanceSMData).ArrayNum, param_1 < iVar21)) {
    iVar2 = param_2->ArrayNum;
    iVar24 = param_1 + -1 + iVar2;
    if ((-1 < iVar24) && (iVar24 < iVar21)) {
      this->CachedBounds[0].bIsValid = false;
      this->CachedBounds[1].bIsValid = false;
      this->CachedBounds[2].bIsValid = false;
      if (((this->_padding_ & 0x400000) == 0) || ((this->_padding_ & 1) == 0)) {
        bVar19 = false;
LAB_147cd7646:
        bVar15 = false;
        local_500.Data = (FScriptContainerElement *)0x0;
        local_4f8[0] = 0;
        local_4f8[1] = 0;
      }
      else {
        bVar19 = true;
        cVar16 = (**(code **)(this->_padding_ + 0xc88))(this);
        if (cVar16 == '\0') goto LAB_147cd7646;
        bVar15 = true;
        uVar20 = iVar2 * 2;
        local_500.Data = (FScriptContainerElement *)0x0;
        local_4f8[0] = 0;
        local_4f8[1] = 0;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        bVar19 = true;
        if (0 < (int)uVar20) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,uVar20,&local_500,0,local_4f8 + 1);
          bVar19 = true;
          bVar15 = true;
        }
      }
      this_00 = local_4f0->DataPtr;
      pTVar22 = this_00 + local_4f0->ArrayNum;
      if (this_00 != pTVar22) {
        lVar28 = uVar27 << 7;
        do {
          uVar26 = (uint)uVar27;
          uVar20 = 0;
          if ((int)uVar26 < (this->PerInstanceSMData).ArrayNum) {
            uVar20 = ~uVar26 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
          local_4f0 = (TArrayView<UE::Math::TTransform<double>_const_,int> *)
                      ((this->PerInstanceSMData).AllocatorInstance.Data + lVar28);
          if (bVar15) {
            UE::Math::TTransform<double>::SetFromMatrix(&local_1a8,(TMatrix<double> *)local_4f0);
            local_268.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_268.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_268.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_268.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_268.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_268.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_268.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_268.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_268.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_268.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_268.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_268.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_268.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_268.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_268.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_268.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_268,&local_1a8,(TTransform<double> *)&this->_padding_);
            if (param_3) {
              local_208 = *(undefined4 *)(this_00->Rotation).XY.m128d_f64;
              uStack_204 = *(undefined4 *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4);
              uStack_200 = *(undefined4 *)((this_00->Rotation).XY.m128d_f64 + 1);
              uStack_1fc = *(undefined4 *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc);
              local_1f8 = *(undefined4 *)(this_00->Rotation).ZW.m128d_f64;
              uStack_1f4 = *(undefined4 *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 4);
              uStack_1f0 = *(undefined4 *)((this_00->Rotation).ZW.m128d_f64 + 1);
              uStack_1ec = *(undefined4 *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 0xc);
              local_1e8 = *(undefined4 *)(this_00->Translation).XY.m128d_f64;
              uStack_1e4 = *(undefined4 *)((longlong)(this_00->Translation).XY.m128d_f64 + 4);
              uStack_1e0 = *(undefined4 *)((this_00->Translation).XY.m128d_f64 + 1);
              uStack_1dc = *(undefined4 *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc);
              local_1d8 = *(undefined4 *)(this_00->Translation).ZW.m128d_f64;
              uStack_1d4 = *(undefined4 *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4);
              uStack_1d0 = *(undefined4 *)((this_00->Translation).ZW.m128d_f64 + 1);
              uStack_1cc = *(undefined4 *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc);
              local_1c8 = *(undefined4 *)(this_00->Scale3D).XY.m128d_f64;
              uStack_1c4 = *(undefined4 *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4);
              uStack_1c0 = *(undefined4 *)((this_00->Scale3D).XY.m128d_f64 + 1);
              uStack_1bc = *(undefined4 *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc);
              local_1b8 = *(undefined4 *)(this_00->Scale3D).ZW.m128d_f64;
              uStack_1b4 = *(undefined4 *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4);
              uStack_1b0 = *(undefined4 *)((this_00->Scale3D).ZW.m128d_f64 + 1);
              uStack_1ac = *(undefined4 *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc);
            }
            else {
              local_3e8.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_3e8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_3e8.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_3e8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_3e8.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_3e8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_3e8.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_3e8.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_3e8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_3e8.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_3e8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_3e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_3e8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_3e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply
                        (&local_3e8,this_00,(TTransform<double> *)&this->_padding_);
              local_208 = local_3e8.Rotation.XY.m128d_f64[0]._0_4_;
              uStack_204 = local_3e8.Rotation.XY.m128d_f64[0]._4_4_;
              uStack_200 = local_3e8.Rotation.XY.m128d_f64[1]._0_4_;
              uStack_1fc = local_3e8.Rotation.XY.m128d_f64[1]._4_4_;
              local_1f8 = local_3e8.Rotation.ZW.m128d_f64[0]._0_4_;
              uStack_1f4 = local_3e8.Rotation.ZW.m128d_f64[0]._4_4_;
              uStack_1f0 = local_3e8.Rotation.ZW.m128d_f64[1]._0_4_;
              uStack_1ec = local_3e8.Rotation.ZW.m128d_f64[1]._4_4_;
              local_1e8 = local_3e8.Translation.XY.m128d_f64[0]._0_4_;
              uStack_1e4 = local_3e8.Translation.XY.m128d_f64[0]._4_4_;
              uStack_1e0 = local_3e8.Translation.XY.m128d_f64[1]._0_4_;
              uStack_1dc = local_3e8.Translation.XY.m128d_f64[1]._4_4_;
              local_1d8 = local_3e8.Translation.ZW.m128d_f64[0]._0_4_;
              uStack_1d4 = local_3e8.Translation.ZW.m128d_f64[0]._4_4_;
              uStack_1d0 = local_3e8.Translation.ZW.m128d_f64[1]._0_4_;
              uStack_1cc = local_3e8.Translation.ZW.m128d_f64[1]._4_4_;
              local_1c8 = local_3e8.Scale3D.XY.m128d_f64[0]._0_4_;
              uStack_1c4 = local_3e8.Scale3D.XY.m128d_f64[0]._4_4_;
              uStack_1c0 = local_3e8.Scale3D.XY.m128d_f64[1]._0_4_;
              uStack_1bc = local_3e8.Scale3D.XY.m128d_f64[1]._4_4_;
              local_1b8 = local_3e8.Scale3D.ZW.m128d_f64[0]._0_4_;
              uStack_1b4 = local_3e8.Scale3D.ZW.m128d_f64[0]._4_4_;
              uStack_1b0 = local_3e8.Scale3D.ZW.m128d_f64[1]._0_4_;
              uStack_1ac = local_3e8.Scale3D.ZW.m128d_f64[1]._4_4_;
            }
            iVar21 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,2,&local_500,local_4f8,local_4f8 + 1);
            pFVar25 = local_500.Data + (longlong)iVar21 * 0x60;
            *(double *)pFVar25 = local_268.Rotation.XY.m128d_f64[0];
            *(double *)(pFVar25 + 8) = local_268.Rotation.XY.m128d_f64[1];
            *(double *)(pFVar25 + 0x10) = local_268.Rotation.ZW.m128d_f64[0];
            *(double *)(pFVar25 + 0x18) = local_268.Rotation.ZW.m128d_f64[1];
            *(double *)(pFVar25 + 0x20) = local_268.Translation.XY.m128d_f64[0];
            *(double *)(pFVar25 + 0x28) = local_268.Translation.XY.m128d_f64[1];
            *(double *)(pFVar25 + 0x30) = local_268.Translation.ZW.m128d_f64[0];
            *(double *)(pFVar25 + 0x38) = local_268.Translation.ZW.m128d_f64[1];
            *(double *)(pFVar25 + 0x40) = local_268.Scale3D.XY.m128d_f64[0];
            *(double *)(pFVar25 + 0x48) = local_268.Scale3D.XY.m128d_f64[1];
            *(double *)(pFVar25 + 0x50) = local_268.Scale3D.ZW.m128d_f64[0];
            *(double *)(pFVar25 + 0x58) = local_268.Scale3D.ZW.m128d_f64[1];
            *(ulonglong *)(pFVar25 + 0x60) = CONCAT44(uStack_204,local_208);
            *(ulonglong *)(pFVar25 + 0x68) = CONCAT44(uStack_1fc,uStack_200);
            *(ulonglong *)(pFVar25 + 0x70) = CONCAT44(uStack_1f4,local_1f8);
            *(ulonglong *)(pFVar25 + 0x78) = CONCAT44(uStack_1ec,uStack_1f0);
            *(ulonglong *)(pFVar25 + 0x80) = CONCAT44(uStack_1e4,local_1e8);
            *(ulonglong *)(pFVar25 + 0x88) = CONCAT44(uStack_1dc,uStack_1e0);
            *(ulonglong *)(pFVar25 + 0x90) = CONCAT44(uStack_1d4,local_1d8);
            *(ulonglong *)(pFVar25 + 0x98) = CONCAT44(uStack_1cc,uStack_1d0);
            *(ulonglong *)(pFVar25 + 0xa0) = CONCAT44(uStack_1c4,local_1c8);
            *(ulonglong *)(pFVar25 + 0xa8) = CONCAT44(uStack_1bc,uStack_1c0);
            *(ulonglong *)(pFVar25 + 0xb0) = CONCAT44(uStack_1b4,local_1b8);
            *(ulonglong *)(pFVar25 + 0xb8) = CONCAT44(uStack_1ac,uStack_1b0);
          }
          if (param_3) {
            pTVar23 = UE::Math::TTransform<double>::GetRelativeTransform
                                (this_00,&local_148,(TTransform<double> *)&this->_padding_);
          }
          else {
            pTVar23 = &local_4c8;
            local_4c8.Rotation.XY.m128d_f64[0] = (this_00->Rotation).XY.m128d_f64[0];
            local_4c8.Rotation.XY.m128d_f64[1] = (this_00->Rotation).XY.m128d_f64[1];
            local_4c8.Rotation.ZW.m128d_f64[0] = (this_00->Rotation).ZW.m128d_f64[0];
            local_4c8.Rotation.ZW.m128d_f64[1] = (this_00->Rotation).ZW.m128d_f64[1];
            local_4c8.Translation.XY.m128d_f64[0] = (this_00->Translation).XY.m128d_f64[0];
            local_4c8.Translation.XY.m128d_f64[1] = (this_00->Translation).XY.m128d_f64[1];
            local_4c8.Translation.ZW.m128d_f64[0] = (this_00->Translation).ZW.m128d_f64[0];
            local_4c8.Translation.ZW.m128d_f64[1] = (this_00->Translation).ZW.m128d_f64[1];
            local_4c8.Scale3D.XY.m128d_f64[0] = (this_00->Scale3D).XY.m128d_f64[0];
            local_4c8.Scale3D.XY.m128d_f64[1] = (this_00->Scale3D).XY.m128d_f64[1];
            local_4c8.Scale3D.ZW.m128d_f64[0] = (this_00->Scale3D).ZW.m128d_f64[0];
            local_4c8.Scale3D.ZW.m128d_f64[1] = (this_00->Scale3D).ZW.m128d_f64[1];
          }
          local_328.Rotation.XY.m128d_f64[0] = (pTVar23->Rotation).XY.m128d_f64[0];
          local_328.Rotation.XY.m128d_f64[1] = (pTVar23->Rotation).XY.m128d_f64[1];
          dVar14 = local_328.Rotation.XY.m128d_f64[1] + local_328.Rotation.XY.m128d_f64[1];
          local_328.Rotation.ZW.m128d_f64[0] = (pTVar23->Rotation).ZW.m128d_f64[0];
          local_328.Rotation.ZW.m128d_f64[1] = (pTVar23->Rotation).ZW.m128d_f64[1];
          dVar8 = local_328.Rotation.XY.m128d_f64[0] *
                  (local_328.Rotation.XY.m128d_f64[0] + local_328.Rotation.XY.m128d_f64[0]);
          local_408 = (TTransform<double> *)(pTVar23->Translation).XY.m128d_f64[0];
          dStack_400 = (pTVar23->Translation).XY.m128d_f64[1];
          dVar4 = local_328.Rotation.ZW.m128d_f64[0] + local_328.Rotation.ZW.m128d_f64[0];
          dVar5 = local_328.Rotation.ZW.m128d_f64[1] *
                  (local_328.Rotation.XY.m128d_f64[0] + local_328.Rotation.XY.m128d_f64[0]);
          local_328.Translation.XY.m128d_f64[0] = (double)local_408;
          local_328.Translation.XY.m128d_f64[1] = dStack_400;
          local_3f8 = *(undefined4 *)(pTVar23->Translation).ZW.m128d_f64;
          uStack_3f4 = *(undefined4 *)((longlong)(pTVar23->Translation).ZW.m128d_f64 + 4);
          local_328.Translation.ZW.m128d_f64[0]._0_4_ = local_3f8;
          local_328.Translation.ZW.m128d_f64[0]._4_4_ = uStack_3f4;
          local_328.Translation.ZW.m128d_f64[1] = (pTVar23->Translation).ZW.m128d_f64[1];
          adVar1 = *&(pTVar23->Scale3D).XY.m128d_f64;
          dVar9 = (local_328.Rotation.ZW.m128d_f64[1] * dVar4 +
                  dVar14 * local_328.Rotation.XY.m128d_f64[0]) * adVar1[0];
          dVar37 = adVar1[1];
          local_438 = (TTransform<double> *)
                      ((dVar5 + dVar4 * local_328.Rotation.XY.m128d_f64[1]) * dVar37);
          dVar10 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                   (local_328.Rotation.ZW.m128d_f64[0] * dVar4 +
                   local_328.Rotation.XY.m128d_f64[1] * dVar14)) * adVar1[0];
          dVar11 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                   (local_328.Rotation.ZW.m128d_f64[0] * dVar4 + dVar8)) * dVar37;
          local_328.Scale3D.XY.m128d_f64[0] = adVar1[0];
          local_328.Scale3D.XY.m128d_f64[1] = adVar1[1];
          local_328.Scale3D.ZW.m128d_f64 = *&(pTVar23->Scale3D).ZW.m128d_f64;
          auVar36 = blendpd((undefined1  [16])adVar1,
                            (undefined1  [16])local_328.Scale3D.ZW.m128d_f64,2);
          dVar13 = local_328.Scale3D.ZW.m128d_f64[0];
          dVar37 = dVar37 * (dVar14 * local_328.Rotation.XY.m128d_f64[0] -
                            local_328.Rotation.ZW.m128d_f64[1] * dVar4);
          dVar5 = dVar13 * (dVar4 * local_328.Rotation.XY.m128d_f64[1] - dVar5);
          local_418 = (TTransform<double> *)
                      ((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                       (dVar8 + local_328.Rotation.XY.m128d_f64[1] * dVar14)) * dVar13);
          uVar32 = SUB84(dVar9,0);
          uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
          local_458 = (TTransform<double> *)
                      (auVar36._0_8_ *
                      (local_328.Rotation.XY.m128d_f64[0] * dVar4 -
                      dVar14 * local_328.Rotation.ZW.m128d_f64[1]));
          dVar13 = (dVar14 * local_328.Rotation.ZW.m128d_f64[1] +
                   local_328.Rotation.XY.m128d_f64[0] * dVar4) * dVar13;
          uVar30 = SUB84(dVar11,0);
          uVar31 = (undefined4)((ulonglong)dVar11 >> 0x20);
          uStack_450 = 0;
          local_468._8_4_ = uVar32;
          local_468._0_8_ = dVar10;
          local_468._12_4_ = uVar33;
          local_448._8_4_ = uVar30;
          local_448._0_8_ = dVar37;
          local_448._12_4_ = uVar31;
          uStack_430 = 0;
          iStack_3f0 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          uStack_3ec = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          uVar34 = SUB84(dVar5,0);
          uVar35 = (undefined4)((ulonglong)dVar5 >> 0x20);
          local_428._8_4_ = uVar34;
          local_428._0_8_ = dVar13;
          local_428._12_4_ = uVar35;
          uStack_410 = 0;
          TVar7.ArrayNum = uVar32;
          TVar7.DataPtr = (TTransform<double> *)dVar10;
          TVar7._12_4_ = uVar33;
          *local_4f0 = TVar7;
          local_4f0[1].DataPtr = local_458;
          *(undefined8 *)&local_4f0[1].ArrayNum = 0;
          TVar6.ArrayNum = uVar30;
          TVar6.DataPtr = (TTransform<double> *)dVar37;
          TVar6._12_4_ = uVar31;
          local_4f0[2] = TVar6;
          local_4f0[3].DataPtr = local_438;
          *(undefined8 *)&local_4f0[3].ArrayNum = 0;
          TVar12.ArrayNum = uVar34;
          TVar12.DataPtr = (TTransform<double> *)dVar13;
          TVar12._12_4_ = uVar35;
          local_4f0[4] = TVar12;
          local_4f0[5].DataPtr = local_418;
          *(undefined8 *)&local_4f0[5].ArrayNum = 0;
          local_4f0[6].DataPtr = local_408;
          *(double *)&local_4f0[6].ArrayNum = dStack_400;
          *(undefined4 *)&local_4f0[7].DataPtr = local_3f8;
          *(undefined4 *)((longlong)&local_4f0[7].DataPtr + 4) = uStack_3f4;
          local_4f0[7].ArrayNum = iStack_3f0;
          *(undefined4 *)&local_4f0[7].field_0xc = uStack_3ec;
          FPrimitiveInstanceDataManager::TransformChanged
                    (&this->PrimitiveInstanceDataManager,uVar26);
          if ((this->_padding_ & 8) != 0) {
            if (param_3) {
              local_2c8.Rotation.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(this_00->Rotation).XY.m128d_f64;
              local_2c8.Rotation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4);
              local_2c8.Rotation.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((this_00->Rotation).XY.m128d_f64 + 1);
              local_2c8.Rotation.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc);
              local_2c8.Rotation.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(this_00->Rotation).ZW.m128d_f64;
              local_2c8.Rotation.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 4);
              local_2c8.Rotation.ZW.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((this_00->Rotation).ZW.m128d_f64 + 1);
              local_2c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 0xc);
              local_2c8.Translation.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(this_00->Translation).XY.m128d_f64;
              local_2c8.Translation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Translation).XY.m128d_f64 + 4);
              local_2c8.Translation.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((this_00->Translation).XY.m128d_f64 + 1);
              local_2c8.Translation.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc);
              local_2c8.Translation.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(this_00->Translation).ZW.m128d_f64;
              local_2c8.Translation.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4);
              local_2c8.Translation.ZW.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((this_00->Translation).ZW.m128d_f64 + 1);
              local_2c8.Translation.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc);
              local_2c8.Scale3D.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(this_00->Scale3D).XY.m128d_f64;
              local_2c8.Scale3D.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4);
              local_2c8.Scale3D.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((this_00->Scale3D).XY.m128d_f64 + 1);
              local_2c8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc);
              local_2c8.Scale3D.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(this_00->Scale3D).ZW.m128d_f64;
              local_2c8.Scale3D.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4);
              local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((this_00->Scale3D).ZW.m128d_f64 + 1);
              local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc);
            }
            else {
              local_388.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_388.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_388.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_388.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_388.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_388.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_388.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_388.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_388.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_388.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_388.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_388.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_388.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_388.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_388.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_388.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply
                        (&local_388,&local_328,(TTransform<double> *)&this->_padding_);
              local_2c8.Rotation.XY.m128d_f64[0]._0_4_ = local_388.Rotation.XY.m128d_f64[0]._0_4_;
              local_2c8.Rotation.XY.m128d_f64[0]._4_4_ = local_388.Rotation.XY.m128d_f64[0]._4_4_;
              local_2c8.Rotation.XY.m128d_f64[1]._0_4_ = local_388.Rotation.XY.m128d_f64[1]._0_4_;
              local_2c8.Rotation.XY.m128d_f64[1]._4_4_ = local_388.Rotation.XY.m128d_f64[1]._4_4_;
              local_2c8.Rotation.ZW.m128d_f64[0]._0_4_ = local_388.Rotation.ZW.m128d_f64[0]._0_4_;
              local_2c8.Rotation.ZW.m128d_f64[0]._4_4_ = local_388.Rotation.ZW.m128d_f64[0]._4_4_;
              local_2c8.Rotation.ZW.m128d_f64[1]._0_4_ = local_388.Rotation.ZW.m128d_f64[1]._0_4_;
              local_2c8.Rotation.ZW.m128d_f64[1]._4_4_ = local_388.Rotation.ZW.m128d_f64[1]._4_4_;
              local_2c8.Translation.XY.m128d_f64[0]._0_4_ =
                   local_388.Translation.XY.m128d_f64[0]._0_4_;
              local_2c8.Translation.XY.m128d_f64[0]._4_4_ =
                   local_388.Translation.XY.m128d_f64[0]._4_4_;
              local_2c8.Translation.XY.m128d_f64[1]._0_4_ =
                   local_388.Translation.XY.m128d_f64[1]._0_4_;
              local_2c8.Translation.XY.m128d_f64[1]._4_4_ =
                   local_388.Translation.XY.m128d_f64[1]._4_4_;
              local_2c8.Translation.ZW.m128d_f64[0]._0_4_ =
                   local_388.Translation.ZW.m128d_f64[0]._0_4_;
              local_2c8.Translation.ZW.m128d_f64[0]._4_4_ =
                   local_388.Translation.ZW.m128d_f64[0]._4_4_;
              local_2c8.Translation.ZW.m128d_f64[1]._0_4_ =
                   local_388.Translation.ZW.m128d_f64[1]._0_4_;
              local_2c8.Translation.ZW.m128d_f64[1]._4_4_ =
                   local_388.Translation.ZW.m128d_f64[1]._4_4_;
              local_2c8.Scale3D.XY.m128d_f64[0]._0_4_ = local_388.Scale3D.XY.m128d_f64[0]._0_4_;
              local_2c8.Scale3D.XY.m128d_f64[0]._4_4_ = local_388.Scale3D.XY.m128d_f64[0]._4_4_;
              local_2c8.Scale3D.XY.m128d_f64[1]._0_4_ = local_388.Scale3D.XY.m128d_f64[1]._0_4_;
              local_2c8.Scale3D.XY.m128d_f64[1]._4_4_ = local_388.Scale3D.XY.m128d_f64[1]._4_4_;
              local_2c8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_388.Scale3D.ZW.m128d_f64[0]._0_4_;
              local_2c8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_388.Scale3D.ZW.m128d_f64[0]._4_4_;
              local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_388.Scale3D.ZW.m128d_f64[1]._0_4_;
              local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_388.Scale3D.ZW.m128d_f64[1]._4_4_;
            }
            UpdateInstanceBodyTransform(this,uVar26,&local_2c8,param_5);
          }
          uVar27 = (ulonglong)(uVar26 + 1);
          lVar28 = lVar28 + 0x80;
          this_00 = this_00 + 1;
        } while (this_00 != pTVar22);
      }
      if (bVar19) {
        if (bVar15) {
          pcVar3 = *(code **)(this->_padding_ + 0xc78);
          iVar21 = local_4f8[0];
          local_4e8 = local_500.Data;
          if ((local_4f8[0] < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar19)) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
          iStack_4e0 = iVar21;
          local_4d8 = (undefined4)local_4e8;
          uStack_4d4 = local_4e8._4_4_;
          iStack_4d0 = iVar21;
          uStack_4cc = uStack_4dc;
          (*pcVar3)(this,&local_4d8);
        }
        else {
          (**(code **)(this->_padding_ + 0xc80))(this);
        }
      }
      if (param_4) {
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      }
      bVar19 = true;
      if (local_500.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.Data);
      }
      goto LAB_147cd7dac;
    }
  }
  bVar19 = false;
LAB_147cd7dac:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndExclusiveStat("UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms");
  return bVar19;
}

// BeginDestroy @ 147cd7fa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UInstancedStaticMeshComponent::BeginDestroy(UInstancedStaticMeshComponent *this)

{
  bool bVar1;
  FInstanceIndexUpdateData local_28;
  TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int> local_18;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated);
  if (bVar1) {
    local_28.Index = (this->PerInstanceSMData).ArrayNum + -1;
    local_18.ArrayNum = 1;
    local_18.DataPtr = &local_28;
    local_28.Type = Destroyed;
    local_28.OldIndex = -1;
    TMulticastDelegate<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
    ::Broadcast(&FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,this,&local_18);
  }
  UStaticMeshComponent::BeginDestroy((UStaticMeshComponent *)this);
  return;
}

// BuildComponentInstanceData @ 147cdcbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::BuildComponentInstanceData
          (UInstancedStaticMeshComponent *this,EShaderPlatform param_1,
          FInstanceUpdateComponentDesc *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  UStaticMesh *this_00;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UInstancedStaticMeshComponent::BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
  FVar17;
  double *pdVar18;
  TBoxSphereBounds<double,double> *pTVar19;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar20;
  longlong *plVar21;
  FNameEntryId FVar22;
  FName FVar23;
  ushort uVar24;
  undefined1 auStackY_228 [32];
  FColor_u_0 local_1c8;
  FLLMScope local_1c4;
  LARGE_INTEGER local_1c0;
  FName local_1b8;
  FName local_1b0;
  FMemScope local_1a0;
  FStatMessage local_198;
  FName local_188;
  FName local_180;
  TVector2<float>_u_0 local_178;
  undefined8 uStack_170;
  TBoxSphereBounds<double,double> local_168;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [128];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_228;
  FLLMScope::FLLMScope(&local_1c4,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_1a0,InstancedMesh,true);
  uVar24 = 2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UInstancedStaticMeshComponent::BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
         )0x0) {
      pFVar16 = ::FName::FName(&local_188,"STAT_UInstancedStaticMeshComponent_BuildRenderData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData,*pFVar16,
                 L"STAT_UInstancedStaticMeshComponent_BuildRenderData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData;
  if (StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UInstancedStaticMeshComponent::BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
       )0x0) {
    pFVar16 = ::FName::FName(&local_180,"STAT_UInstancedStaticMeshComponent_BuildRenderData");
    FVar17 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UInstancedStaticMeshComponent::BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData,*pFVar16,
                          L"STAT_UInstancedStaticMeshComponent_BuildRenderData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  bVar12 = false;
  bVar14 = false;
  FVar23 = *(FName *)FVar17;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar20 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar22.Value;
        local_1b8.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0xae1);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c0.s.LowPart = FVar22.Value;
      local_1c0.s.HighPart = uVar20;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar13 = true;
      goto LAB_147cdcda7;
    }
  }
  bVar13 = false;
  FVar23 = local_1b0;
LAB_147cdcda7:
  UPrimitiveComponent::GetUsedMaterialPropertyDesc
            ((UPrimitiveComponent *)this,(FPrimitiveMaterialPropertyDescriptor *)&local_178._s_0,
             param_1);
  (param_2->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0 = local_178;
  (param_2->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement =
       (float)(undefined4)uStack_170;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasWorldPositionOffset = (bool)uStack_170._4_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPixelAnimation = (bool)uStack_170._5_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData = (bool)uStack_170._6_1_;
  (param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom = (bool)uStack_170._7_1_;
  if (((param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData == false) ||
     (this->NumCustomDataFloats == 0)) {
    uVar24 = 0;
  }
  iVar8 = (this->PerInstancePrevTransform).ArrayNum;
  uVar24 = (ushort)FReadOnlyCVARCache::bAllowStaticLighting << 4 | uVar24 |
           (ushort)((param_2->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom & 1);
  if ((((0 < iVar8) && (iVar8 == (this->PerInstanceSMData).ArrayNum)) &&
      (uVar24 = uVar24 | 4, *(char *)((longlong)&this->_padding_ + 3) == '\0')) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Flags.bHasPerInstanceDynamicData || Mobility != EComponentMobility::Static"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                          ,0x14d9,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (param_2->Flags).Packed = uVar24;
  param_2->ComponentMobility = (uint)*(byte *)((longlong)&this->_padding_ + 3);
  pdVar18 = (double *)(**(code **)(this->_padding_ + 0x808))(this,local_f8);
  dVar2 = pdVar18[1];
  (param_2->PrimitiveLocalToWorld).M[0][0] = *pdVar18;
  (param_2->PrimitiveLocalToWorld).M[0][1] = dVar2;
  dVar2 = pdVar18[3];
  (param_2->PrimitiveLocalToWorld).M[0][2] = pdVar18[2];
  (param_2->PrimitiveLocalToWorld).M[0][3] = dVar2;
  dVar2 = pdVar18[5];
  (param_2->PrimitiveLocalToWorld).M[1][0] = pdVar18[4];
  (param_2->PrimitiveLocalToWorld).M[1][1] = dVar2;
  dVar2 = pdVar18[7];
  (param_2->PrimitiveLocalToWorld).M[1][2] = pdVar18[6];
  (param_2->PrimitiveLocalToWorld).M[1][3] = dVar2;
  dVar2 = pdVar18[9];
  (param_2->PrimitiveLocalToWorld).M[2][0] = pdVar18[8];
  (param_2->PrimitiveLocalToWorld).M[2][1] = dVar2;
  dVar2 = pdVar18[0xb];
  (param_2->PrimitiveLocalToWorld).M[2][2] = pdVar18[10];
  (param_2->PrimitiveLocalToWorld).M[2][3] = dVar2;
  dVar2 = pdVar18[0xd];
  (param_2->PrimitiveLocalToWorld).M[3][0] = pdVar18[0xc];
  (param_2->PrimitiveLocalToWorld).M[3][1] = dVar2;
  dVar2 = pdVar18[0xf];
  (param_2->PrimitiveLocalToWorld).M[3][2] = pdVar18[0xe];
  (param_2->PrimitiveLocalToWorld).M[3][3] = dVar2;
  this_00 = (UStaticMesh *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pTVar19 = UStaticMesh::GetBounds(this_00,&local_168);
  dVar2 = (pTVar19->Origin).field0_0x0._s_0.X;
  dVar3 = (pTVar19->BoxExtent).field0_0x0._s_0.X;
  dVar4 = (pTVar19->Origin).field0_0x0._s_0.Y;
  dVar5 = (pTVar19->BoxExtent).field0_0x0._s_0.Y;
  dVar6 = (pTVar19->BoxExtent).field0_0x0._s_0.Z;
  dVar7 = (pTVar19->Origin).field0_0x0._s_0.Z;
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.X = (float)(dVar2 - dVar3);
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.Y = (float)(dVar4 - dVar5);
  (param_2->StaticMeshBounds).Min.field0_0x0._s_0.Z = (float)(dVar7 - dVar6);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.X = (float)(dVar3 + dVar2);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.Y = (float)(dVar5 + dVar4);
  (param_2->StaticMeshBounds).Max.field0_0x0._s_0.Z = (float)(dVar6 + dVar7);
  param_2->NumProxyInstances = (this->PerInstanceSMData).ArrayNum;
  param_2->NumSourceInstances = (this->PerInstanceSMData).ArrayNum;
  param_2->NumCustomDataFloats = this->NumCustomDataFloats;
  local_128 = *(longlong *)&param_2->BuildChangeSet;
  uVar11 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x8;
  local_118 = *(longlong *)&(param_2->BuildChangeSet).field_0x10;
  uStack_110 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x18;
  uVar10 = *(undefined8 *)&(param_2->BuildChangeSet).field_0x20;
  plStack_100 = *(longlong **)&(param_2->BuildChangeSet).field_0x28;
  *(code **)&param_2->BuildChangeSet =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>,void,FISMInstanceUpdateChangeSet_&>
       ::Call;
  *(undefined8 *)&(param_2->BuildChangeSet).field_0x8 = uStack_120;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x10 = 0x518eca78;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x14 = 1;
  *(UInstancedStaticMeshComponent **)&(param_2->BuildChangeSet).field_0x18 = this;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x20 = (undefined4)local_108;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x24 = local_108._4_4_;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x28 = 0;
  *(undefined4 *)&(param_2->BuildChangeSet).field_0x2c = 0;
  local_108 = uVar10;
  uStack_120 = uVar11;
  if (local_128 != 0) {
    plVar21 = &local_118;
    if (plStack_100 != (longlong *)0x0) {
      plVar21 = plStack_100;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar13) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_198.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_198.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c0);
      local_198.StatData.Pad[4] = '\0';
      local_198.StatData.Pad[5] = '\0';
      local_198.StatData.Pad[6] = '\0';
      local_198.StatData.Pad[7] = '\0';
      local_198.StatData.Pad[0] = local_1c0.s.LowPart._0_1_;
      local_198.StatData.Pad[1] = local_1c0.s.LowPart._1_1_;
      local_198.StatData.Pad[2] = local_1c0.s.LowPart._2_1_;
      local_198.StatData.Pad[3] = local_1c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_198);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_1a0);
  FLLMScope::~FLLMScope(&local_1c4);
  return;
}

// BuildComponentInstanceData @ 147cdd1e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::BuildComponentInstanceData
          (UInstancedStaticMeshComponent *this,Type param_1,FInstanceUpdateComponentDesc *param_2)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(this->_padding_ + 0xca0);
  if (param_1 == Num) {
                    /* WARNING: Could not recover jumptable at 0x000147cdd1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(this,0x9b);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147cdd205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(this,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1]);
  return;
}

// BuildInstanceDataDeltaChangeSetCommon @ 147cdd5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon
          (UInstancedStaticMeshComponent *this,FISMInstanceUpdateChangeSet *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  FMeshMapBuildData *pFVar22;
  longlong *plVar23;
  longlong lVar24;
  int *piVar25;
  uint uVar26;
  FMeshMapBuildData *pFVar27;
  FMeshMapBuildData *pFVar28;
  undefined1 auStackY_138 [32];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  UInstancedStaticMeshComponent *local_e0;
  TArrayView<float_const_,int> local_d8;
  code *local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar27 = (FMeshMapBuildData *)0x0;
  local_e0 = this;
  if ((param_1->_padding_ & 0x10000) != 0) {
    if ((this->InstancingRandomSeed == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstancingRandomSeed != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                            ,0xaa4,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar20 = (this->AdditionalRandomSeeds).ArrayNum;
    iVar3 = this->InstancingRandomSeed;
    pFVar4 = (this->AdditionalRandomSeeds).AllocatorInstance.Data;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = CONCAT44(local_e8._4_4_,iVar20);
    if (iVar20 == 0) {
      local_e8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar20,0,&local_f0,iVar20,(int *)((longlong)&local_e8 + 4));
      memcpy(local_f0.Data,pFVar4,(longlong)iVar20 << 3);
    }
    local_c8 = (code *)0x0;
    puVar21 = FMemory::Malloc(0x20,8);
    *puVar21 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon'::`5'::<lambda_1>,0,1>
                ::_vftable_;
    *(int *)(puVar21 + 1) = iVar3;
    puVar21[2] = 0;
    puVar21[2] = local_f0.Data;
    local_f0.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar21 + 3) = (undefined4)local_e8;
    *(undefined4 *)((longlong)puVar21 + 0x1c) = local_e8._4_4_;
    lVar24 = param_1->_padding_;
    lVar14 = param_1->_padding_;
    lVar15 = param_1->_padding_;
    uVar11 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    lVar16 = param_1->_padding_;
    uVar12 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    lVar5 = param_1->_padding_;
    plVar13 = (longlong *)param_1->_padding_;
    if ((int *)(puVar21 + 1) != (int *)0x0) {
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon'::__l5::<lambda_1>,void,TArray<float,TSizedDefaultAllocator<32>_>_&>
                 ::Call;
    }
    param_1->_padding_ = (longlong)local_c8;
    param_1->_padding_ = lStack_c0;
    uStack_a0._0_4_ = SUB84(puVar21,0);
    uStack_a0._4_4_ = (undefined4)((ulonglong)puVar21 >> 0x20);
    *(undefined4 *)&param_1->_padding_ = local_b8;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = uStack_b4;
    *(undefined4 *)&param_1->_padding_ = uStack_b0;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = uStack_ac;
    *(undefined4 *)&param_1->_padding_ = (undefined4)local_a8;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_a8._4_4_;
    *(undefined4 *)&param_1->_padding_ = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = uStack_a0._4_4_;
    local_e8 = 0;
    local_b8 = (int)lVar15;
    uStack_b4 = uVar11;
    uStack_b0 = (int)lVar16;
    uStack_ac = uVar12;
    local_a8 = lVar5;
    uStack_a0 = plVar13;
    local_c8 = (code *)lVar24;
    lStack_c0 = lVar14;
    if (lVar24 != 0) {
      plVar23 = (longlong *)&local_b8;
      if (plVar13 != (longlong *)0x0) {
        plVar23 = plVar13;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
  }
  if ((param_1->_padding_ & 0x100000) != 0) {
    pFVar22 = pFVar27;
    if (0 < (int)this->_padding_) {
      pFVar22 = UStaticMeshComponent::GetMeshMapBuildData
                          ((UStaticMeshComponent *)this,
                           (FStaticMeshComponentLODInfo *)this->_padding_,false);
    }
    dVar17 = __real_bff0000000000000;
    if (0 < param_1->PostUpdateNumInstances) {
      pFVar28 = pFVar27;
      do {
        uVar26 = (uint)pFVar27;
        dVar7 = dVar17;
        dVar8 = dVar17;
        dVar9 = dVar17;
        dVar10 = dVar17;
        if (((pFVar22 != (FMeshMapBuildData *)0x0) && (-1 < (int)uVar26)) &&
           ((int)uVar26 < (pFVar22->PerInstanceLightmapData).ArrayNum)) {
          uVar19 = 0;
          if ((int)uVar26 < (pFVar22->PerInstanceLightmapData).ArrayNum) {
            uVar19 = ~uVar26 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (pFVar22->PerInstanceLightmapData).AllocatorInstance.Data;
          fVar1 = *(float *)(pFVar4 + (longlong)&(pFVar28->LightMap).Reference);
          fVar2 = *(float *)(pFVar4 + 4 + (longlong)&(pFVar28->LightMap).Reference);
          uVar19 = 0;
          if ((int)uVar26 < (pFVar22->PerInstanceLightmapData).ArrayNum) {
            uVar19 = ~uVar26 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (pFVar22->PerInstanceLightmapData).AllocatorInstance.Data;
          dVar7 = (double)fVar1;
          dVar8 = (double)fVar2;
          dVar9 = (double)*(float *)(pFVar4 + (longlong)&(pFVar28->ShadowMap).Reference);
          dVar10 = (double)*(float *)(pFVar4 + 4 + (longlong)&(pFVar28->ShadowMap).Reference);
        }
        piVar25 = (int *)((longlong)&param_1->_padding_ + 4);
        iVar20 = (int)param_1->_padding_;
        if (iVar20 == *piVar25) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1010,(ForAnyElementType *)&param_1->_padding_,piVar25);
        }
        pFVar27 = (FMeshMapBuildData *)(ulonglong)(uVar26 + 1);
        *(int *)&param_1->_padding_ = iVar20 + 1;
        lVar24 = (longlong)iVar20;
        pFVar28 = (FMeshMapBuildData *)&pFVar28->IrrelevantLights;
        lVar5 = param_1->_padding_;
        *(float *)(lVar5 + lVar24 * 0x10) = (float)dVar7;
        *(float *)(lVar5 + lVar24 * 0x10 + 4) = (float)dVar8;
        *(float *)(lVar5 + lVar24 * 0x10 + 8) = (float)dVar9;
        *(float *)(lVar5 + lVar24 * 0x10 + 0xc) = (float)dVar10;
        this = local_e0;
      } while ((int)(uVar26 + 1) < param_1->PostUpdateNumInstances);
    }
  }
  iVar20 = (this->PerInstanceSMCustomData).ArrayNum;
  iVar3 = this->NumCustomDataFloats;
  pFVar4 = (this->PerInstanceSMCustomData).AllocatorInstance.Data;
  if ((iVar20 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_d8.DataPtr = (float *)pFVar4;
  local_d8.ArrayNum = iVar20;
  FISMInstanceUpdateChangeSet::SetCustomData(param_1,&local_d8,iVar3);
  return;
}

// BuildLegacyRenderData @ 147cdda70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::BuildLegacyRenderData
          (UInstancedStaticMeshComponent *this,FStaticMeshInstanceData *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  FStaticMeshInstanceData *this_00;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::BuildLegacyRenderData(FStaticMeshInstanceData_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
  FVar16;
  double *pdVar17;
  FMeshMapBuildData *pFVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  uint local_1e4;
  uint local_1e0;
  longlong local_1d8;
  FLLMScope local_1d0 [2];
  longlong local_1c8;
  FColor_u_0 local_1c0 [2];
  FMeshMapBuildData *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  FName local_1a0;
  FStaticMeshInstanceData *local_198;
  FName local_190;
  FName local_188;
  FScriptContainerElement *local_178;
  FMemScope local_170;
  TVector2<double>_u_0 local_168;
  TVector2<double>_u_0 local_158;
  FName local_148;
  FName local_140;
  TMatrix<float> local_138;
  undefined1 local_f8 [192];
  
  local_198 = param_1;
  FLLMScope::FLLMScope(local_1d0,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_170,InstancedMesh,true);
  uVar21 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::BuildLegacyRenderData(FStaticMeshInstanceData_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
         )0x0) {
      pFVar15 = ::FName::FName(&local_148,"STAT_UInstancedStaticMeshComponent_BuildRenderData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData,*pFVar15,
                 L"STAT_UInstancedStaticMeshComponent_BuildRenderData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData;
  if (StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::BuildLegacyRenderData(FStaticMeshInstanceData_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
       )0x0) {
    pFVar15 = ::FName::FName(&local_140,"STAT_UInstancedStaticMeshComponent_BuildRenderData");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::BuildLegacyRenderData(FStaticMeshInstanceData_&)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_BuildRenderData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UInstancedStaticMeshComponent_BuildRenderData,*pFVar15,
                          L"STAT_UInstancedStaticMeshComponent_BuildRenderData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar6 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c0[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0xa50);
        bVar6 = true;
        bVar7 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar10 = true;
      goto LAB_147cddc2c;
    }
  }
  bVar7 = bVar11;
  bVar6 = bVar10;
  bVar10 = false;
  local_190 = local_188;
  FVar19 = local_188;
LAB_147cddc2c:
  iVar14 = (this->PerInstanceSMData).ArrayNum;
  lVar23 = (longlong)iVar14;
  if (iVar14 != 0) {
    FStaticMeshInstanceData::AllocateInstances(param_1,iVar14,this->NumCustomDataFloats,None,true);
    local_1b8 = (FMeshMapBuildData *)0x0;
    if (0 < (int)this->_padding_) {
      local_1b8 = UStaticMeshComponent::GetMeshMapBuildData
                            ((UStaticMeshComponent *)this,
                             (FStaticMeshComponentLODInfo *)this->_padding_,false);
    }
    if ((this->InstancingRandomSeed == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstancingRandomSeed != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                            ,0xa65,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1e0 = this->InstancingRandomSeed;
    if ((this->AdditionalRandomSeeds).ArrayNum < 1) {
      local_1e4 = 0xffffffff;
    }
    else {
      local_1e4 = *(uint *)(this->AdditionalRandomSeeds).AllocatorInstance.Data;
    }
    pdVar17 = (double *)(**(code **)(this->_padding_ + 0xc58))(this,local_f8);
    dVar9 = _UNK_15076c718;
    dVar8 = ___xmm_bff0000000000000bff0000000000000;
    uVar20 = 0;
    dVar1 = *pdVar17;
    dVar2 = pdVar17[1];
    dVar3 = pdVar17[2];
    local_1b0 = lVar23;
    if (0 < iVar14) {
      local_1a8 = 0;
      local_1d8 = 0;
      local_1c8 = 0;
      pFVar18 = local_1b8;
      do {
        lVar24 = local_1a8;
        uVar12 = uVar20;
        if ((-1 < (int)uVar20) && ((int)uVar20 < (this->InstanceReorderTable).ArrayNum)) {
          uVar12 = 0;
          if ((int)uVar20 < (this->InstanceReorderTable).ArrayNum) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar23 = local_1b0;
          uVar12 = *(uint *)((this->InstanceReorderTable).AllocatorInstance.Data + lVar24 * 4);
        }
        lVar24 = local_1c8;
        if (uVar12 != 0xffffffff) {
          if (uVar20 == local_1e4) {
            uVar13 = 0;
            if ((int)uVar21 < (this->AdditionalRandomSeeds).ArrayNum) {
              uVar13 = ~uVar21 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar23 = (longlong)(int)uVar21;
            uVar21 = uVar21 + 1;
            local_1e0 = *(uint *)((this->AdditionalRandomSeeds).AllocatorInstance.Data +
                                 lVar23 * 8 + 4);
            if (((int)uVar21 < 0) || ((this->AdditionalRandomSeeds).ArrayNum <= (int)uVar21)) {
              local_1e4 = 0xffffffff;
            }
            else {
              if (((int)uVar21 < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_1e4 = *(uint *)((this->AdditionalRandomSeeds).AllocatorInstance.Data +
                                   (longlong)(int)uVar21 * 8);
            }
          }
          uVar22 = ~uVar20 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar20 < (this->PerInstanceSMData).ArrayNum) {
            uVar13 = uVar22;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_178 = (this->PerInstanceSMData).AllocatorInstance.Data;
          local_158._s_0.X = dVar8;
          local_158._s_0.Y = dVar9;
          local_168._s_0.X = dVar8;
          local_168._s_0.Y = dVar9;
          if (((pFVar18 != (FMeshMapBuildData *)0x0) && (-1 < (int)uVar20)) &&
             ((int)uVar20 < (pFVar18->PerInstanceLightmapData).ArrayNum)) {
            uVar13 = 0;
            if ((int)uVar20 < (pFVar18->PerInstanceLightmapData).ArrayNum) {
              uVar13 = uVar22;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar18->PerInstanceLightmapData).AllocatorInstance.Data;
            local_158._s_0.X = (double)*(float *)(pFVar4 + local_1d8);
            uVar13 = 0;
            if ((int)uVar20 < (pFVar18->PerInstanceLightmapData).ArrayNum) {
              uVar13 = uVar22;
            }
            local_158._s_0.Y = (double)*(float *)(pFVar4 + local_1d8 + 4);
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar18->PerInstanceLightmapData).AllocatorInstance.Data;
            local_168._s_0.X = (double)*(float *)(pFVar4 + local_1d8 + 8);
            local_168._s_0.Y = (double)*(float *)(pFVar4 + local_1d8 + 0xc);
          }
          lVar24 = local_1c8;
          local_1e0 = local_1e0 * 0xbb38435 + 0x3619636b;
          local_138.M[0][0] = (float)*(double *)(local_178 + local_1c8);
          local_138.M[0][1] = (float)*(double *)(local_178 + local_1c8 + 8);
          local_138.M[0][2] = (float)*(double *)(local_178 + local_1c8 + 0x10);
          local_138.M[0][3] = (float)*(double *)(local_178 + local_1c8 + 0x10 + 8);
          local_138.M[1][0] = (float)*(double *)(local_178 + local_1c8 + 0x20);
          local_138.M[1][1] = (float)*(double *)(local_178 + local_1c8 + 0x20 + 8);
          local_138.M[1][2] = (float)*(double *)(local_178 + local_1c8 + 0x30);
          local_138.M[1][3] = (float)*(double *)(local_178 + local_1c8 + 0x30 + 8);
          local_138.M[2][0] = (float)*(double *)(local_178 + local_1c8 + 0x40);
          local_138.M[2][1] = (float)*(double *)(local_178 + local_1c8 + 0x40 + 8);
          local_138.M[2][2] = (float)*(double *)(local_178 + local_1c8 + 0x50);
          local_138.M[2][3] = (float)*(double *)(local_178 + local_1c8 + 0x50 + 8);
          local_138.M[3][2] = (float)(*(double *)(local_178 + local_1c8 + 0x70) - dVar3);
          local_138.M[3][3] = (float)*(double *)(local_178 + local_1c8 + 0x78);
          local_138.M[3][0] = (float)(*(double *)(local_178 + local_1c8 + 0x60) - dVar1);
          local_138.M[3][1] = (float)(*(double *)(local_178 + local_1c8 + 0x68) - dVar2);
          FStaticMeshInstanceData::SetInstance
                    (local_198,uVar12,&local_138,
                     (float)(local_1e0 >> 9 | 0x3f800000) - __real_3f800000,
                     (TVector2<double> *)&local_158._s_0,(TVector2<double> *)&local_168._s_0);
          this_00 = local_198;
          iVar14 = this->NumCustomDataFloats;
          iVar25 = 0;
          lVar23 = local_1b0;
          if (0 < iVar14) {
            do {
              uVar13 = iVar14 * uVar20 + iVar25;
              uVar22 = 0;
              if ((int)uVar13 < (this->PerInstanceSMCustomData).ArrayNum) {
                uVar22 = ~uVar13 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FStaticMeshInstanceData::SetInstanceCustomDataInternal
                        (this_00,uVar12,iVar25,
                         *(float *)((this->PerInstanceSMCustomData).AllocatorInstance.Data +
                                   (longlong)(int)uVar13 * 4));
              iVar14 = this->NumCustomDataFloats;
              iVar25 = iVar25 + 1;
              lVar23 = local_1b0;
              pFVar18 = local_1b8;
              lVar24 = local_1c8;
            } while (iVar25 < iVar14);
          }
        }
        local_1c8 = lVar24 + 0x80;
        local_1a8 = local_1a8 + 1;
        local_1d8 = local_1d8 + 0x10;
        uVar20 = uVar20 + 1;
        FVar19 = local_190;
      } while (local_1a8 < lVar23);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_170);
  FLLMScope::~FLLMScope(local_1d0);
  return;
}

// BuildTextureStreamingDataImpl @ 147cde370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::BuildTextureStreamingDataImpl
          (UInstancedStaticMeshComponent *this,ETextureStreamingBuildType param_1,Type param_2,
          Type param_3,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4,
          bool *param_5)

{
  return true;
}

// CalcAndCacheNavigationBounds @ 147ce2ac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::CalcAndCacheNavigationBounds(UInstancedStaticMeshComponent *this)

{
  TBoxSphereBounds<double,double> local_48;
  
  GetOrCalcBounds(this,&local_48,(TTransform<double> *)&this->_padding_,Navigation);
  return;
}

// CalcBounds @ 147ce3100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UInstancedStaticMeshComponent::CalcBounds
          (UInstancedStaticMeshComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined4 in_EAX;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  EBoundsCacheType EVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  if ((bool)this->bIsUpdatingBounds) {
    EVar17 = Component;
    goto LAB_147ce3276;
  }
  dVar19 = (param_1->Translation).ZW.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar20 = (param_1->Translation).ZW.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar22 = (param_1->Translation).XY.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar23 = (param_1->Translation).XY.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  lVar18 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar20,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar18;
  auVar2._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  uVar14 = movmskpd((int)this,auVar2);
  lVar18 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar23,0) & _UNK_15061cc88));
  auVar7._8_4_ = (int)lVar18;
  auVar7._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar13 = movmskpd(in_EAX,auVar7);
  if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
    dVar10 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar11 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar22 = (param_1->Rotation).XY.m128d_f64[0];
    dVar23 = (param_1->Rotation).XY.m128d_f64[1];
    dVar21 = dVar10 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar24 = dVar11 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar10 = dVar10 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar11 = dVar11 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar19 = dVar22 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar20 = dVar23 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar22 = dVar22 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar23 = dVar23 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar24,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar18;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar15 = movmskpd(0,auVar3);
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar18;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar14 = movmskpd(iVar13,auVar4);
    uVar16 = iVar15 << 2 | uVar14;
    if (uVar16 != 0) {
      lVar18 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar11,0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar18;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar10,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar16 = movmskpd(uVar16,auVar5);
      lVar18 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar23,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar18;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar22,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar14 = movmskpd(uVar14,auVar9);
      if ((uVar16 & 0x3fffffff) != 0 || uVar14 != 0) goto LAB_147ce3253;
    }
    dVar19 = (param_1->Scale3D).ZW.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar20 = (param_1->Scale3D).ZW.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar22 = (param_1->Scale3D).XY.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar23 = (param_1->Scale3D).XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar18;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar6._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar16 = movmskpd(0,auVar6);
    lVar18 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar23,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar18;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar13 = movmskpd(uVar14,auVar8);
    if ((uVar16 & 0x3fffffff) != 0 || iVar13 != 0) goto LAB_147ce3253;
    bVar12 = true;
  }
  else {
LAB_147ce3253:
    bVar12 = false;
  }
  EVar17 = Other;
  if (bVar12) {
    EVar17 = Local;
  }
LAB_147ce3276:
  GetOrCalcBounds(this,__return_storage_ptr__,param_1,EVar17);
  dVar22 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dVar20 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y * dVar22;
  dVar19 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  auVar1._8_4_ = SUB84(dVar20,0);
  auVar1._0_8_ = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X * dVar22;
  auVar1._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->BoxExtent).field0_0x0 = auVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar22 * dVar19;
  __return_storage_ptr__->SphereRadius =
       (double)*(float *)((longlong)&this->_padding_ + 4) * __return_storage_ptr__->SphereRadius;
  return __return_storage_ptr__;
}

// CalcBoundsImpl @ 147ce32d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UInstancedStaticMeshComponent::CalcBoundsImpl
          (UInstancedStaticMeshComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1,
          TBox<double> *param_2)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  TBoxSphereBounds<double,double> *pTVar13;
  TBox<double> *pTVar14;
  TVector<double>_u_0 *pTVar15;
  uint uVar16;
  bool bVar17;
  undefined1 in_XMM2 [16];
  double dVar18;
  double dVar19;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  TVector<double>_u_0 local_2c8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  char local_290;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  TVector<double>_u_0 local_250;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  TBoxSphereBounds<double,double> local_218;
  TBox<double> local_1e0;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3155,"UInstancedStaticMeshComponent::CalcBoundsImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0xc53);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3155);
  }
  if (((this->PerInstanceSMData).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("PerInstanceSMData.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                          ,0xc54,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
    return pTVar13;
  }
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_1a8);
  dVar10 = __real_3fd0000000000000;
  dVar1 = __real_3fe0000000000000;
  uVar16 = 0;
  local_290 = '\0';
  if (0 < (this->PerInstanceSMData).ArrayNum) {
    do {
      iVar2 = (this->PerInstanceSMData).ArrayNum;
      uVar12 = 0;
      if ((int)uVar16 < iVar2) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_2d8 = (longlong)(int)uVar16;
        local_2d0 = (longlong)iVar2;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          pTVar13 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
          return pTVar13;
        }
      }
      VectorMatrixMultiply
                (&local_128,
                 (TMatrix<double> *)
                 ((this->PerInstanceSMData).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x80),
                 &local_1a8);
      pTVar14 = UE::Math::TBox<double>::TransformBy(param_2,&local_1e0,&local_128);
      dVar5 = (pTVar14->Max).field0_0x0._s_0.Y - (pTVar14->Min).field0_0x0._s_0.Y;
      dVar19 = (pTVar14->Max).field0_0x0._s_0.X - (pTVar14->Min).field0_0x0._s_0.X;
      dVar18 = (pTVar14->Max).field0_0x0._s_0.Z - (pTVar14->Min).field0_0x0._s_0.Z;
      local_268 = dVar5 * dVar1;
      local_270 = dVar19 * dVar1;
      local_288._s_0.Y = local_268 + (pTVar14->Min).field0_0x0._s_0.Y;
      local_260 = dVar18 * dVar1;
      local_288._s_0.X = local_270 + (pTVar14->Min).field0_0x0._s_0.X;
      local_288._s_0.Z = local_260 + (pTVar14->Min).field0_0x0._s_0.Z;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (dVar5 * dVar5 + dVar19 * dVar19 + dVar18 * dVar18) * dVar10;
      in_XMM2 = sqrtpd(in_XMM2,auVar4);
      local_258 = in_XMM2._0_8_;
      if (local_290 == '\0') {
        local_2c8._s_0.X = local_288._s_0.X;
        local_2c8._s_0.Y = local_288._s_0.Y;
        local_2c8._s_0.Z = local_288._s_0.Z;
        dStack_2b0 = local_270;
        local_2a8 = local_268;
        dStack_2a0 = local_260;
        local_298 = in_XMM2._0_8_;
        local_290 = '\x01';
      }
      else {
        pTVar13 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)&local_2c8._s_0,&local_218,
                             (TBoxSphereBounds<double,double> *)&local_288._s_0);
        dVar18 = (pTVar13->Origin).field0_0x0._s_0.X;
        dVar19 = (pTVar13->Origin).field0_0x0._s_0.Y;
        dVar6 = (pTVar13->Origin).field0_0x0._s_0.Z;
        dVar7 = (pTVar13->BoxExtent).field0_0x0._s_0.X;
        dVar8 = (pTVar13->BoxExtent).field0_0x0._s_0.Y;
        dVar9 = (pTVar13->BoxExtent).field0_0x0._s_0.Z;
        dVar5 = pTVar13->SphereRadius;
        if ((local_290 == '\0') &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          pTVar13 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
          return pTVar13;
        }
        local_2c8._s_0.X = dVar18;
        local_2c8._s_0.Y = dVar19;
        local_2c8._s_0.Z = dVar6;
        dStack_2b0 = dVar7;
        local_2a8 = dVar8;
        dStack_2a0 = dVar9;
        local_298 = dVar5;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (this->PerInstanceSMData).ArrayNum);
  }
  pTVar15 = &local_2c8;
  if (local_290 == '\0') {
    pTVar15 = &local_250;
  }
  local_220 = 0;
  local_250._s_0.X = 0.0;
  local_250._s_0.Y = 0.0;
  local_250._s_0.Z = 0.0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  dVar1 = pTVar15->XYZ[1];
  dVar10 = pTVar15->XYZ[2];
  dVar5 = pTVar15->XYZ[3];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar15->_s_0).X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar18 = pTVar15->XYZ[4];
  dVar19 = pTVar15->XYZ[5];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar10;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar5;
  dVar1 = pTVar15->XYZ[6];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar18;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar19;
  __return_storage_ptr__->SphereRadius = dVar1;
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// CalcBoundsImpl @ 147ce3680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UInstancedStaticMeshComponent::CalcBoundsImpl
          (UInstancedStaticMeshComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UStaticMesh *this_00;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  TBoxSphereBounds<double,double> *pTVar8;
  undefined1 auStack_e8 [32];
  TBoxSphereBounds<double,double> local_c8;
  undefined1 local_90 [24];
  TVector<double>_u_0 TStack_78;
  double local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    if (0 < (this->PerInstanceSMData).ArrayNum) {
      if (param_2) {
        FInstancedStaticMeshComponentHelper::
        GetInstanceNavigationBounds<UInstancedStaticMeshComponent>((TBox<double> *)local_90,this);
      }
      else {
        this_00 = (UStaticMesh *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pTVar8 = UStaticMesh::GetBounds(this_00,&local_c8);
        dVar3 = (pTVar8->BoxExtent).field0_0x0._s_0.Y;
        dVar1 = (pTVar8->BoxExtent).field0_0x0._s_0.X;
        dVar2 = (pTVar8->BoxExtent).field0_0x0._s_0.Z;
        local_90._0_8_ = (pTVar8->Origin).field0_0x0._s_0.X - dVar1;
        local_90._8_8_ = (pTVar8->Origin).field0_0x0._s_0.Y - dVar3;
        TStack_78._s_0.Y = dVar3 + (pTVar8->Origin).field0_0x0._s_0.Y;
        TStack_78._s_0.X = dVar1 + (pTVar8->Origin).field0_0x0._s_0.X;
        local_90._16_8_ = (pTVar8->Origin).field0_0x0._s_0.Z - dVar2;
        TStack_78._s_0.Z = dVar2 + (pTVar8->Origin).field0_0x0._s_0.Z;
        local_c8.SphereRadius = (double)CONCAT71(local_c8.SphereRadius._1_7_,'\x01');
        local_60 = local_c8.SphereRadius;
      }
      uVar6 = (ulonglong)TStack_78._s_0.Z >> 0x20;
      uVar5 = (ulonglong)TStack_78._s_0.X >> 0x20;
      uVar4 = (ulonglong)local_90._8_8_ >> 0x20;
      local_c8.SphereRadius._0_1_ = SUB81(local_60,0);
      local_90._8_4_ = (int)local_90._8_8_;
      local_90._12_4_ = (int)uVar4;
      unique0x100000d1 = SUB84(TStack_78._s_0.X,0);
      unique0x100000d5 = (int)uVar5;
      TStack_78._16_4_ = SUB84(TStack_78._s_0.Z,0);
      TStack_78._20_4_ = (int)uVar6;
      if (local_c8.SphereRadius._0_1_ != '\0') {
        local_c8.SphereRadius = local_60;
        CalcBoundsImpl(this,__return_storage_ptr__,param_1,(TBox<double> *)local_90);
        return __return_storage_ptr__;
      }
    }
  }
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  dVar3 = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar3;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// CanEditSMInstance @ 147ce3db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::CanEditSMInstance
          (UInstancedStaticMeshComponent *this,FSMInstanceId *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ISMComponent != (UInstancedStaticMeshComponent *)&this[-1]._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x1713,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = UActorComponent::IsEditableWhenInherited((UActorComponent *)&this[-1]._padding_);
  return bVar2;
}

// CanEditSimulatePhysics @ 147ce3e00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::CanEditSimulatePhysics(UInstancedStaticMeshComponent *this)

{
  return false;
}

// CanMoveSMInstance @ 147ce3f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::CanMoveSMInstance
          (UInstancedStaticMeshComponent *this,FSMInstanceId *param_1,ETypedElementWorldType param_2
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1->ISMComponent != (UInstancedStaticMeshComponent *)&this[-1]._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x1719,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_2 != Editor) && (*(char *)((longlong)&param_1->ISMComponent->_padding_ + 3) != '\x02'))
  {
    return false;
  }
  return true;
}

// ClearAllInstanceBodies @ 147ce4240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::ClearAllInstanceBodies(UInstancedStaticMeshComponent *this)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  FBodyInstance *this_00;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::ClearAllInstanceBodies(void)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies>
  FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FName FVar17;
  bool bVar18;
  FName local_res10;
  FName local_res18;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2945,"UInstancedStaticMeshComponent::ClearAllInstanceBodies"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0xb81);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2945);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::ClearAllInstanceBodies(void)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res10,
                               "STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies,*pFVar10,
                 L"STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies;
  if (StatPtr_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::ClearAllInstanceBodies(void)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res18,
                             "STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies");
    FVar11 = (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::ClearAllInstanceBodies(void)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies,
                          *pFVar10,L"STAT_UInstancedStaticMeshComponent_ClearAllInstanceBodies",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar6 = false;
  bVar9 = false;
  FVar13 = FVar16.ComparisonIndex.Value;
  uVar12 = FVar16.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_147ce440e:
    bVar7 = false;
    FVar16.ComparisonIndex.Value = 0;
    FVar16.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0xb82);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ce440e;
    local_res10.ComparisonIndex.Value = FVar13.Value;
    local_res10.Number = uVar12;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar7 = true;
  }
  pTVar3 = (this->StatId).StatIdPtr;
  bVar4 = false;
  bVar8 = false;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0xb83);
        bVar4 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.ComparisonIndex.Value = FVar13.Value;
      local_res10.Number = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_147ce44df;
    }
  }
  bVar5 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_147ce44df:
  FVar17 = (FName)(this->InstanceBodies).AllocatorInstance.Data;
  iVar2 = (this->InstanceBodies).ArrayNum;
  FVar15 = (FName)((longlong)FVar17 + (longlong)iVar2 * 8);
  local_res18 = FVar15;
  while( true ) {
    if ((this->InstanceBodies).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar17 == FVar15) break;
    if (*(FBodyInstance **)FVar17 != (FBodyInstance *)0x0) {
      FBodyInstance::TermBody(*(FBodyInstance **)FVar17,false);
      this_00 = *(FBodyInstance **)FVar17;
      FVar15 = local_res18;
      if (this_00 != (FBodyInstance *)0x0) {
        FBodyInstance::~FBodyInstance(this_00);
        ::operator_delete(this_00,400);
        FVar15 = local_res18;
      }
    }
    FVar17 = (FName)((longlong)FVar17 + 8);
  }
  piVar1 = &(this->InstanceBodies).ArrayMax;
  (this->InstanceBodies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InstanceBodies).AllocatorInstance,0,piVar1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ClearInstanceSelection @ 147ce4880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::ClearInstanceSelection(UInstancedStaticMeshComponent *this)

{
  return;
}

// ClearInstances @ 147ce4d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInstancedStaticMeshComponent::ClearInstances(UInstancedStaticMeshComponent *this)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  FInstanceIndexUpdateData local_28;
  TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int> local_18;
  
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[2].bIsValid = false;
  iVar3 = (this->PerInstanceSMData).ArrayNum;
  if (((this->_padding_ & 0x400000) == 0) || ((this->_padding_ & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    cVar5 = (**(code **)(this->_padding_ + 0xc88))();
    if (cVar5 != '\0') {
      PartialNavigateUpdateForCurrentInstances(this);
    }
  }
  piVar1 = &(this->PerInstanceSMData).ArrayMax;
  (this->PerInstanceSMData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,&(this->PerInstanceSMData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PerInstanceSMCustomData).ArrayMax;
  (this->PerInstanceSMCustomData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PerInstanceSMCustomData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->InstanceReorderTable).ArrayMax;
  (this->InstanceReorderTable).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->InstanceReorderTable).AllocatorInstance,0,piVar1);
  }
  this->ProxySize = 0;
  ClearAllInstanceBodies(this);
  FPrimitiveInstanceDataManager::Invalidate
            (&this->PrimitiveInstanceDataManager,(this->PerInstanceSMData).ArrayNum);
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated);
  if (bVar6) {
    local_18.ArrayNum = 1;
    local_28.Index = iVar3 + -1;
    local_18.DataPtr = &local_28;
    local_28.Type = Cleared;
    local_28.OldIndex = -1;
    TMulticastDelegate<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
    ::Broadcast(&FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,this,&local_18);
  }
  if (bVar4) {
    FNavigationSystem::UnregisterComponent((UActorComponent *)this);
    pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar2 = *pbVar2 & 0xbf;
  }
  return;
}

// CollectPSOPrecacheData @ 147ce5290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::CollectPSOPrecacheData
          (UInstancedStaticMeshComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  UObject *pUVar1;
  UStaticMesh *this_00;
  bool bVar2;
  FStaticMeshRenderData *pFVar3;
  FVertexFactoryType *pFVar4;
  code *local_158;
  undefined4 *local_150;
  undefined4 local_148 [2];
  TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1> *local_140;
  UInstancedStaticMeshComponent *local_138;
  FMaterialAudit local_128;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar1);
  }
  else if (pUVar1 == (UObject *)0x0) {
    return;
  }
  this_00 = (UStaticMesh *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar3 = UStaticMesh::GetRenderData(this_00);
  if (pFVar3 != (FStaticMeshRenderData *)0x0) {
    bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                        (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
    pUVar1 = (UObject *)this->_padding_;
    local_140 = &FInstancedStaticMeshComponentHelper::DummyStaticMeshInstanceBuffer;
    if (bVar2) {
      local_140 = (TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1>
                   *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_148[0] = *(undefined4 *)&pUVar1[0xb].field_0x8;
    local_128.bCompatibleWithLumenCardSharing = '\0';
    local_128.bHasSky = '\0';
    local_128.bHasMasked = '\0';
    local_128.bHasAnyError = '\0';
    local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.AssetName.Data.ArrayNum = 0;
    local_128.AssetName.Data.ArrayMax = 0;
    local_128.Entries.AllocatorInstance.SecondaryData =
         (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
    local_128.Entries.ArrayNum = 0;
    local_128.Entries.ArrayMax = 4;
    local_128.FallbackMaterial = (UMaterialInterface *)0x0;
    local_138 = this;
    bVar2 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UInstancedStaticMeshComponent>
                      (this,&local_128);
    pFVar4 = &FNaniteVertexFactory::StaticType;
    local_150 = local_148;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<UInstancedStaticMeshComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                ::Call;
    if (!bVar2) {
      pFVar4 = &FInstancedStaticMeshVertexFactory::StaticType;
    }
    FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<UInstancedStaticMeshComponent>
              (this,pFVar4,param_1,
               (TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
                *)&local_158,param_2);
    if (local_128.Entries.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
      FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
    }
    if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ComponentOverlapComponentImpl @ 147ce5440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::ComponentOverlapComponentImpl
          (UInstancedStaticMeshComponent *this,UPrimitiveComponent *param_1,TVector<double> *param_2
          ,TQuat<double> *param_3,FCollisionQueryParams *param_4)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FBodyInstance *this_00;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    this_00 = (FBodyInstance *)(**(code **)(*(longlong *)param_1 + 0x818))(param_1,0,1,0xffffffff);
    if (this_00 != (FBodyInstance *)0x0) {
      bVar2 = FBodyInstance::OverlapTestForBodiesImpl<TSizedDefaultAllocator<32>_>
                        (this_00,param_2,param_3,&this->InstanceBodies,false);
      return bVar2;
    }
  }
  else if (2 < (byte)LogCollision._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCollision);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ComponentOverlapMultiImpl @ 147ce5530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::ComponentOverlapMultiImpl
          (UInstancedStaticMeshComponent *this,
          TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TVector<double> *param_3,TQuat<double> *param_4,ECollisionChannel param_5,
          FComponentQueryParams *param_6,FCollisionObjectQueryParams *param_7)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  int extraout_EAX;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  ForElementType<unsigned_int> FVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  bool bVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [8];
  FCollisionObjectQueryParams *local_190;
  TQuat<double> *local_188;
  TVector<double> *local_180;
  UWorld *local_178;
  FCollisionResponseContainer_u_0 local_170;
  undefined1 local_148 [17];
  bool local_137;
  bool local_136;
  bool local_135;
  bool local_134;
  bool local_133;
  bool local_132;
  bool local_131;
  bool local_130;
  EQueryMobilityType local_12c;
  uchar local_128;
  TStatId local_120;
  bool local_118;
  bool local_117;
  ForElementType<unsigned_int> local_110;
  int local_e8;
  int local_e4;
  ForElementType<unsigned_int> local_e0;
  int local_c8;
  int local_c4;
  FCollisionEnabledMask local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_188 = param_4;
  piVar1 = &param_1->ArrayMax;
  local_190 = param_7;
  iVar6 = *piVar1;
  param_1->ArrayNum = 0;
  piVar9 = piVar1;
  local_180 = param_3;
  local_178 = param_2;
  if (iVar6 < 0) {
    piVar9 = (int *)&DAT_00000048;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&param_1->AllocatorInstance,0,piVar1);
    iVar6 = extraout_EAX;
  }
  auVar16._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)&this->_padding_ + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_);
  auVar16._8_4_ = _UNK_15061cc88 & (uint)this->_padding_;
  auVar16._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  lVar15 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4),
                             _UNK_15061cc88 & (uint)this->_padding_));
  auVar4._8_4_ = (int)lVar15;
  auVar4._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)((longlong)&this->_padding_ + 4),
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   (uint)this->_padding_));
  auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
  uVar8 = movmskpd((int)piVar9,auVar4);
  lVar15 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar16._8_8_);
  auVar3._8_4_ = (int)lVar15;
  auVar3._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar16._0_8_);
  auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
  iVar6 = movmskpd(iVar6,auVar3);
  if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
    local_b8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_b8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_b8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_b8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast((TTransform<double> *)&this->_padding_,&local_b8);
  }
  puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x5c8))(this);
  FCollisionResponseContainer::FCollisionResponseContainer
            ((FCollisionResponseContainer *)&local_170._s_0);
  local_170._0_8_ = *puVar7;
  local_170._8_8_ = puVar7[1];
  local_148._0_8_ = param_6->_padding_;
  local_170._16_8_ = puVar7[2];
  local_170._24_8_ = puVar7[3];
  local_e8 = (int)param_6->_padding_;
  lVar15 = (longlong)local_e8;
  local_148._8_8_ = param_6->_padding_;
  local_148[0x10] = (undefined1)param_6->_padding_;
  local_137 = *(bool *)((longlong)&param_6->_padding_ + 1);
  local_136 = *(bool *)((longlong)&param_6->_padding_ + 2);
  local_135 = *(bool *)((longlong)&param_6->_padding_ + 3);
  local_134 = *(bool *)((longlong)&param_6->_padding_ + 4);
  local_133 = *(bool *)((longlong)&param_6->_padding_ + 5);
  local_132 = *(bool *)((longlong)&param_6->_padding_ + 6);
  local_131 = *(bool *)((longlong)&param_6->_padding_ + 7);
  local_130 = SUB81(param_6->_padding_,0);
  local_12c = *(EQueryMobilityType *)((longlong)&param_6->_padding_ + 4);
  local_128 = (uchar)param_6->_padding_;
  local_120.StatIdPtr = (TStatIdData *)param_6->_padding_;
  local_118 = SUB81(param_6->_padding_,0);
  local_117 = *(bool *)((longlong)&param_6->_padding_ + 1);
  plVar14 = (longlong *)param_6->_padding_;
  if ((longlong *)param_6->_padding_ == (longlong *)0x0) {
    plVar14 = &param_6->_padding_;
  }
  local_110.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if (local_e8 == 0) {
    local_e4 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,local_e8,0,&local_110,local_e8,&local_e4);
    FVar10 = (ForElementType<unsigned_int>)&local_110;
    if (local_110.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_110.SecondaryData;
    }
    memcpy((void *)FVar10,plVar14,lVar15 << 2);
  }
  local_c8 = (int)param_6->_padding_;
  lVar15 = (longlong)local_c8;
  local_e0.SecondaryData = (ForElementType<unsigned_int>)0x0;
  plVar14 = (longlong *)param_6->_padding_;
  if ((longlong *)param_6->_padding_ == (longlong *)0x0) {
    plVar14 = &param_6->_padding_;
  }
  if (local_c8 == 0) {
    local_c4 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,local_c8,0,&local_e0,local_c8,&local_c4);
    FVar10 = (ForElementType<unsigned_int>)&local_e0;
    if (local_e0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_e0.SecondaryData;
    }
    memcpy((void *)FVar10,plVar14,lVar15 << 2);
  }
  local_c0.Bits = (param_6->ShapeCollisionMask).Bits;
  FCollisionQueryParams::AddIgnoredComponent
            ((FCollisionQueryParams *)local_148,(UPrimitiveComponent *)this);
  pFVar11 = (this->InstanceBodies).AllocatorInstance.Data;
  bVar12 = false;
  bVar13 = false;
  iVar6 = (this->InstanceBodies).ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar6 * 8;
  while( true ) {
    if ((this->InstanceBodies).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FBodyInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_198);
    }
    if (pFVar11 == pFVar2) break;
    if (*(FBodyInstance **)pFVar11 != (FBodyInstance *)0x0) {
      bVar5 = FBodyInstance::OverlapMulti
                        (*(FBodyInstance **)pFVar11,param_1,local_178,&local_b8,local_180,local_188,
                         param_5,(FComponentQueryParams *)local_148,
                         (FCollisionResponseParams *)&local_170._s_0,local_190);
      bVar13 = bVar12;
      if (bVar5) {
        bVar12 = true;
        bVar13 = true;
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  if (local_e0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e0.SecondaryData);
  }
  if (local_110.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_110.SecondaryData);
  }
  return bVar13;
}

// CreateAllInstanceBodies @ 147ce7130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::CreateAllInstanceBodies(UInstancedStaticMeshComponent *this)

{
  FScriptContainerElement *_Dst;
  int *piVar1;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::CreateAllInstanceBodies(void)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies>
  FVar17;
  UBodySetup *pUVar18;
  UWorld *pUVar19;
  FBodyInstance *this_00;
  FBodyInstance *pFVar20;
  longlong lVar21;
  FName FVar22;
  FName FVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStackY_248 [32];
  FBodyInstance *local_1e0;
  FName local_1d8;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1c0;
  FInitBodySpawnParams local_1b0;
  FColor_u_0 local_1ac;
  FColor_u_0 local_1a8 [2];
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  UBodySetup *local_180;
  FName local_178;
  FName local_168;
  longlong local_158;
  FPhysScene_Chaos *local_150;
  FName local_148;
  FName local_140;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  double local_128;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2873,
               "UInstancedStaticMeshComponent::CreateAllInstanceBodies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0xb39);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2873);
  }
  if (__CsvProfilerStat2874 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive
              ("UInstancedStaticMeshComponent_CreateAllInstanceBodies");
    __CsvProfilerStat2874 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("UInstancedStaticMeshComponent_CreateAllInstanceBodies",
             "CSV_UInstancedStaticMeshComponent_CreateAllInstanceBodies");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::CreateAllInstanceBodies(void)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies>
         )0x0) {
      pFVar16 = ::FName::FName(&local_148,
                               "STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies,*pFVar16,
                 L"STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies;
  if (StatPtr_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::CreateAllInstanceBodies(void)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies>
       )0x0) {
    pFVar16 = ::FName::FName(&local_140,"STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies"
                            );
    FVar17 = (FThreadSafeStaticStat<_protected:_void___cdecl_UInstancedStaticMeshComponent::CreateAllInstanceBodies(void)_::_2_::FStat_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies,
                          *pFVar16,L"STAT_UInstancedStaticMeshComponent_CreateAllInstanceBodies",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar7 = false;
  bVar9 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar13 = false;
  bVar6 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_147ce7341:
    bVar9 = bVar6;
    bVar7 = bVar13;
    bVar13 = false;
    local_188 = local_178;
    FVar23 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1ac.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1ac._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar9 = true;
      bVar13 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0xb3b);
        bVar7 = true;
        bVar9 = true;
        bVar13 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ce7341;
    local_1d8 = FVar23;
    local_188 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar13 = true;
  }
  pTVar4 = (this->StatId).StatIdPtr;
  bVar6 = false;
  bVar8 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar12 = false;
  bVar14 = false;
  FVar22 = *(FName *)&pTVar4->Name;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_147ce740f:
    bVar8 = bVar14;
    bVar6 = bVar12;
    bVar12 = false;
    local_190 = local_168;
    FVar22 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8[0]._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_198.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0xb3c);
        bVar6 = true;
        bVar8 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ce740f;
    local_1d8 = FVar22;
    local_190 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar12 = true;
  }
  uVar3 = (this->PerInstanceSMData).ArrayNum;
  lVar26 = (longlong)(int)uVar3;
  piVar1 = &(this->InstanceBodies).ArrayNum;
  if ((*piVar1 != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceBodies.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                          ,0xb3f,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar18 = (UBodySetup *)(**(code **)(this->_padding_ + 0x800))(this);
  local_180 = pUVar18;
  if (pUVar18 == (UBodySetup *)0x0) {
    if (2 < (byte)LogStaticMesh._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
    }
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar3,&(this->InstanceBodies).AllocatorInstance,
                        &(this->InstanceBodies).ArrayNum,&(this->InstanceBodies).ArrayMax);
    memset((this->InstanceBodies).AllocatorInstance.Data + (longlong)iVar15 * 8,0,lVar26 * 8);
    goto LAB_147ce7b57;
  }
  pUVar19 = (UWorld *)this->_padding_;
  if (pUVar19 == (UWorld *)0x0) {
    pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  local_150 = pUVar19->PhysicsScene;
  bVar14 = FBodyInstance::GetOverrideWalkableSlopeOnInstance((FBodyInstance *)&this->_padding_);
  if (!bVar14) {
    FBodyInstance::SetWalkableSlopeOverride
              ((FBodyInstance *)&this->_padding_,&pUVar18->WalkableSlopeOverride,false);
  }
  pTVar2 = &this->InstanceBodies;
  iVar15 = (this->InstanceBodies).ArrayNum;
  if (iVar15 < (int)uVar3) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3 - iVar15,&pTVar2->AllocatorInstance,piVar1,&(this->InstanceBodies).ArrayMax
              );
    goto LAB_147ce74ef;
  }
  if ((int)uVar3 < 0) goto LAB_147ce7bf7;
  if ((int)uVar3 < iVar15) {
    uVar24 = iVar15 - uVar3;
    if (((int)(uVar24 | uVar3) < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar24 == 0) goto LAB_147ce74ef;
    _Dst = (pTVar2->AllocatorInstance).Data + lVar26 * 8;
    iVar15 = ((this->InstanceBodies).ArrayNum - uVar24) - uVar3;
    if (iVar15 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)uVar24 * 8,(longlong)iVar15 << 3);
    }
    piVar1 = &(this->InstanceBodies).ArrayNum;
    *piVar1 = *piVar1 - uVar24;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,(this->InstanceBodies).ArrayNum,
               &(this->InstanceBodies).ArrayMax);
  }
  else {
LAB_147ce74ef:
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 0;
    if ((int)uVar3 < 0) {
LAB_147ce7bf7:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar24 = 0;
  local_158 = lVar26;
  if ((int)uVar3 < 1) {
    local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ArrayNum = 0;
    local_1c0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&local_1d0.AllocatorInstance,0,&local_1d0.ArrayMax);
    local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ArrayNum = 0;
    local_1c0.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar3,&local_1c0.AllocatorInstance,0,&local_1c0.ArrayMax);
    pUVar18 = local_180;
    dVar11 = __real_3f1a36e2e0000000;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_1d8.ComparisonIndex.Value = 0;
    local_1d8.Number = 0;
    do {
      FVar23 = local_1d8;
      uVar25 = ~uVar24 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar24 < (this->PerInstanceSMData).ArrayNum) {
        uVar28 = uVar25;
      }
      if ((uVar28 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Math::TTransform<double>::SetFromMatrix
                (&local_b8,
                 (TMatrix<double> *)
                 ((this->PerInstanceSMData).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x80));
      local_118.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_118.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_118.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_118.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_118.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_118,&local_b8,(TTransform<double> *)&this->_padding_);
      local_128 = local_118.Scale3D.ZW.m128d_f64[0];
      local_138 = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
      uStack_134 = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
      uStack_130 = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
      uStack_12c = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
      if (((dVar11 <= (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_ & uVar10,
                                       local_118.Scale3D.XY.m128d_f64[0]._0_4_ & uVar3) &&
            (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_ & uVar10,
                             local_118.Scale3D.XY.m128d_f64[0]._0_4_ & uVar3) != dVar11) ||
          (dVar11 <= (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[1]._4_4_ & uVar10,
                                      local_118.Scale3D.XY.m128d_f64[1]._0_4_ & uVar3) &&
           (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[1]._4_4_ & uVar10,
                            local_118.Scale3D.XY.m128d_f64[1]._0_4_ & uVar3) != dVar11)) ||
         (uVar28 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar3,
         uVar29 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar10,
         dVar11 <= (double)CONCAT44(uVar29,uVar28) && (double)CONCAT44(uVar29,uVar28) != dVar11)) {
        this_00 = ::operator_new(400);
        pFVar20 = (FBodyInstance *)0x0;
        if (this_00 != (FBodyInstance *)0x0) {
          pFVar20 = FBodyInstance::FBodyInstance(this_00);
        }
        local_1e0 = pFVar20;
        if (((local_1d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e0) &&
            ((FScriptContainerElement *)&local_1e0 <
             local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar15 = local_1d0.ArrayNum;
        if (local_1d0.ArrayNum == local_1d0.ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_1d0.AllocatorInstance,&local_1d0.ArrayMax);
        }
        pFVar20 = local_1e0;
        local_1d0.ArrayNum = iVar15 + 1;
        *(FBodyInstance **)(local_1d0.AllocatorInstance.Data + (longlong)iVar15 * 8) = local_1e0;
        uVar28 = 0;
        if ((int)uVar24 < (this->InstanceBodies).ArrayNum) {
          uVar28 = uVar25;
        }
        if ((uVar28 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FBodyInstance **)((this->InstanceBodies).AllocatorInstance.Data + (longlong)local_1d8 * 8)
             = pFVar20;
        FBodyInstance::CopyBodyInstancePropertiesFrom(local_1e0,(FBodyInstance *)&this->_padding_);
        local_1e0->InstanceBodyIndex = uVar24;
        *(byte *)&local_1e0->_padding_ = (byte)local_1e0->_padding_ & 0xdf;
        *(byte *)&local_1e0->_padding_ = (byte)local_1e0->_padding_ & 0xfe;
        if (*(char *)((longlong)&this->_padding_ + 3) == '\x02') {
          FInitBodySpawnParams::FInitBodySpawnParams(&local_1b0,(UPrimitiveComponent *)0x0);
          FBodyInstance::InitBody
                    (local_1e0,pUVar18,&local_118,(UPrimitiveComponent *)this,local_150,&local_1b0,
                     (IPhysicsBodyInstanceOwner *)0x0);
        }
        else {
          if (((local_1c0.AllocatorInstance.Data <= &local_118) &&
              (&local_118 <
               (TTransform<double> *)
               (local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayMax * 0x60))) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar15 = local_1c0.ArrayNum;
          if (local_1c0.ArrayNum == local_1c0.ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&local_1c0.AllocatorInstance,&local_1c0.ArrayMax);
          }
          local_1c0.ArrayNum = iVar15 + 1;
          lVar21 = (longlong)iVar15 * 0x60;
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21) =
               local_118.Rotation.XY.m128d_f64[0];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 8) =
               local_118.Rotation.XY.m128d_f64[1];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x10) =
               local_118.Rotation.ZW.m128d_f64[0];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x10 + 8) =
               local_118.Rotation.ZW.m128d_f64[1];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x20) =
               local_118.Translation.XY.m128d_f64[0];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x20 + 8) =
               local_118.Translation.XY.m128d_f64[1];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x30) =
               local_118.Translation.ZW.m128d_f64[0];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x30 + 8) =
               local_118.Translation.ZW.m128d_f64[1];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x40) =
               local_118.Scale3D.XY.m128d_f64[0];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x40 + 8) =
               local_118.Scale3D.XY.m128d_f64[1];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x50) =
               local_118.Scale3D.ZW.m128d_f64[0];
          *(double *)(local_1c0.AllocatorInstance.Data + lVar21 + 0x50 + 8) =
               local_118.Scale3D.ZW.m128d_f64[1];
        }
      }
      else {
        uVar28 = 0;
        if ((int)uVar24 < (this->InstanceBodies).ArrayNum) {
          uVar28 = uVar25;
        }
        if ((uVar28 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)((this->InstanceBodies).AllocatorInstance.Data + (longlong)FVar23 * 8) = 0;
        local_1d8 = FVar23;
      }
      local_1d8 = (FName)((longlong)local_1d8 + 1);
      uVar24 = uVar24 + 1;
      FVar22 = local_190;
      FVar23 = local_188;
    } while ((longlong)local_1d8 < lVar26);
  }
  if ((0 < local_1d0.ArrayNum) && (*(char *)((longlong)&this->_padding_ + 3) != '\x02')) {
    pUVar19 = (UWorld *)this->_padding_;
    if (pUVar19 == (UWorld *)0x0) {
      pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    FBodyInstance::InitStaticBodies
              (&local_1d0,&local_1c0,local_180,(UPrimitiveComponent *)this,pUVar19->PhysicsScene,
               (IPhysicsBodyInstanceOwner *)0x0);
  }
  if ((TTransform<double> *)local_1c0.AllocatorInstance.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
LAB_147ce7b57:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  FCsvProfiler::EndExclusiveStat("UInstancedStaticMeshComponent_CreateAllInstanceBodies");
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateHitProxyData @ 147ce8b20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::CreateHitProxyData
          (UInstancedStaticMeshComponent *this,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_1)

{
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  return;
}

// CreateSceneProxy @ 147ceb120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UInstancedStaticMeshComponent::CreateSceneProxy(UInstancedStaticMeshComponent *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  FPrimitiveSceneProxy *pFVar6;
  longlong *plVar7;
  undefined1 auStackY_158 [32];
  FLLMScope local_128 [2];
  FMemScope local_120;
  undefined1 local_118 [232];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FLLMScope::FLLMScope(local_128,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_120,InstancedMesh,true);
  (this->PrimitiveInstanceDataManager).bComponentMarkedDirty = '\0';
  pFVar6 = (FPrimitiveSceneProxy *)0x0;
  this->ProxySize = 0;
  pTVar3 = CVarAllowCreateEmptyISMs.Ref;
  if ((this->PerInstanceSMData).ArrayNum < 1) {
    bVar4 = IsInParallelGameThread();
    if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
      return pFVar6;
    }
    if (pTVar3->ShadowedValue[0] == 0) goto LAB_147ceb2cb;
  }
  if ((this->InstancingRandomSeed == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstancingRandomSeed != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xa27,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar6;
  }
  pFVar6 = UStaticMeshComponent::CreateSceneProxy((UStaticMeshComponent *)this);
  if (pFVar6 != (FPrimitiveSceneProxy *)0x0) {
    local_118._160_8_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_118._156_2_ = 0;
    local_118._168_4_ = 0.0;
    local_118[0xac] = false;
    local_118[0xad] = false;
    local_118[0xae] = false;
    local_118[0xaf] = false;
    local_118._184_4_ = 0;
    local_118._192_8_ = 0;
    local_30 = (longlong *)0x0;
    pcVar2 = *(code **)(this->_padding_ + 0xca0);
    local_118._128_4_ = Movable;
    local_118._132_4_ = 3.4028235e+38;
    local_118._136_4_ = 3.4028235e+38;
    local_118._140_4_ = 3.4028235e+38;
    local_118._144_4_ = -3.4028235e+38;
    local_118._148_4_ = -3.4028235e+38;
    local_118._152_4_ = -3.4028235e+38;
    local_118._176_4_ = -1;
    local_118._180_4_ = -1;
    EVar5 = FSceneInterface::GetShaderPlatform(pFVar6->Scene);
    (*pcVar2)(this,EVar5,local_118);
    FPrimitiveInstanceDataManager::FlushChanges
              (&this->PrimitiveInstanceDataManager,(FInstanceUpdateComponentDesc *)local_118,true);
    if (local_118._192_8_ != 0) {
      plVar7 = (longlong *)(local_118 + 0xd0);
      if (local_30 != (longlong *)0x0) {
        plVar7 = local_30;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
LAB_147ceb2cb:
  FMemScope::~FMemScope(&local_120);
  FLLMScope::~FLLMScope(local_128);
  return pFVar6;
}

// CreateStaticMeshSceneProxy @ 147ceb510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UInstancedStaticMeshComponent::CreateStaticMeshSceneProxy
          (UInstancedStaticMeshComponent *this,FMaterialAudit *param_1,bool param_2)

{
  bool bVar1;
  EPSOPrecacheProxyCreationStrategy EVar2;
  FSceneInterface *pFVar3;
  FSceneProxy *this_00;
  FInstancedStaticMeshSceneProxy *pFVar4;
  UWorld *pUVar5;
  FLLMScope local_res20 [2];
  FMemScope local_28;
  TSharedPtr<FISMCInstanceDataSceneProxy,1> local_20;
  
  FLLMScope::FLLMScope(local_res20,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_28,InstancedMesh,true);
  bVar1 = UPrimitiveComponent::CheckPSOPrecachingAndBoostPriority((UPrimitiveComponent *)this,High);
  if ((bVar1) && (EVar2 = GetPSOPrecacheProxyCreationStrategy(), EVar2 == DelayUntilPSOPrecached)) {
    if (5 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this,(FString *)&local_20,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_20.Object != (FISMCInstanceDataSceneProxy *)0x0) {
        FMemory::Free(local_20.Object);
      }
    }
  }
  else {
    pFVar3 = UActorComponent::GetScene((UActorComponent *)this);
    if (pFVar3 == (FSceneInterface *)0x0) {
      local_20.Object = (FISMCInstanceDataSceneProxy *)0x0;
      local_20.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FPrimitiveInstanceDataManager::GetOrCreateProxy
                (&this->PrimitiveInstanceDataManager,&local_20,pFVar3->FeatureLevel);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.SharedReferenceCount.ReferenceController);
    if (param_2) {
      this_00 = ::operator_new(0xc20);
      if (this_00 != (FSceneProxy *)0x0) {
        pFVar4 = (FInstancedStaticMeshSceneProxy *)
                 Nanite::FSceneProxy::FSceneProxy(this_00,param_1,this);
        goto LAB_147ceb5c1;
      }
    }
    else {
      pFVar4 = ::operator_new(0xdb0);
      if (pFVar4 != (FInstancedStaticMeshSceneProxy *)0x0) {
        pUVar5 = (UWorld *)this->_padding_;
        if (pUVar5 == (UWorld *)0x0) {
          pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        pFVar4 = FInstancedStaticMeshSceneProxy::FInstancedStaticMeshSceneProxy
                           (pFVar4,this,(uint)(pUVar5->FeatureLevel).Value);
        goto LAB_147ceb5c1;
      }
    }
  }
  pFVar4 = (FInstancedStaticMeshSceneProxy *)0x0;
LAB_147ceb5c1:
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res20);
  return (FPrimitiveSceneProxy *)pFVar4;
}

// DeleteSMInstances @ 147ced3c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::DeleteSMInstances
          (UInstancedStaticMeshComponent *this,TArrayView<FSMInstanceId_const_,int> *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  FSMInstanceId *pFVar9;
  FSMInstanceId *pFVar10;
  ForAnyElementType local_18;
  int local_10;
  int iStack_c;
  
  uVar1 = param_1->ArrayNum;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iStack_c = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&local_18,0,&iStack_c);
  }
  pFVar10 = param_1->DataPtr;
  plVar8 = &this[-1]._padding_;
  pFVar9 = pFVar10 + (int)uVar1;
  if (pFVar10 != pFVar9) {
    pFVar7 = (FScriptContainerElement *)&pFVar10->InstanceIndex;
    do {
      if (pFVar10->ISMComponent != (UInstancedStaticMeshComponent *)plVar8) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceId.ISMComponent == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                           ,0x1744,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((local_18.Data <= pFVar7) && (pFVar7 < local_18.Data + (longlong)iStack_c * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if (local_10 == iStack_c) {
        local_10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_18,&iStack_c);
      }
      lVar6 = (longlong)local_10;
      pFVar10 = pFVar10 + 1;
      local_10 = local_10 + 1;
      iVar2 = *(int *)pFVar7;
      pFVar7 = pFVar7 + 0x10;
      *(int *)(local_18.Data + lVar6 * 4) = iVar2;
    } while (pFVar10 != pFVar9);
  }
  uVar5 = (**(code **)(*plVar8 + 0xc30))(plVar8,&local_18);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (bool)uVar5;
}

// DoCustomNavigableGeometryExport @ 147cedf20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::DoCustomNavigableGeometryExport
          (UInstancedStaticMeshComponent *this,FNavigableGeometryExport *param_1)

{
  undefined1 *this_00;
  UStaticMesh *this_01;
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UNavCollisionBase *pUVar4;
  undefined1 *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = &this[-1].PrimitiveInstanceDataManager.field_0x10;
  local_78 = _vcall__3216__flat______;
  uStack_70 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInstancedStaticMeshComponent____A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    puVar2[3] = 0;
    local_res8 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = local_78;
    puVar2[5] = CONCAT44(uStack_6c,uStack_70);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  this_01 = (UStaticMesh *)this->_padding_;
  if (this_01 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pUVar4 = UStaticMesh::GetNavCollision(this_01);
    if (pUVar4 != (UNavCollisionBase *)0x0) {
      pUVar4 = UStaticMesh::GetNavCollision(this_01);
      bVar1 = UStaticMeshComponent::ShouldExportAsObstacle((UStaticMeshComponent *)this_00,pUVar4);
      if (!bVar1) {
        if (pUVar4->bHasConvexGeometry == 0) {
          if ((this_01->BodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0) {
            (**(code **)((longlong)*param_1 + 0x28))(param_1);
          }
        }
        else {
          (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&UE::Math::TTransform<double>::Identity);
        }
        (**(code **)((longlong)*param_1 + 0x40))(param_1,&local_58);
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return false;
}

// DuplicateSMInstances @ 147cf1d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::DuplicateSMInstances
          (UInstancedStaticMeshComponent *this,TArrayView<FSMInstanceId_const_,int> *param_1,
          TArray<FSMInstanceId,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FSMInstanceId *pFVar11;
  FSMInstanceId *pFVar12;
  undefined4 *puVar13;
  TTransform<double> *pTVar14;
  longlong *this_00;
  undefined1 local_res10 [8];
  TTransform<double> *in_stack_ffffffffffffff78;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  undefined4 *local_48;
  ulonglong local_40;
  longlong *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = param_1->ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iStack_4c = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    in_stack_ffffffffffffff78 =
         (TTransform<double> *)((ulonglong)in_stack_ffffffffffffff78 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar3,&local_58,0,&iStack_4c);
  }
  pFVar11 = param_1->DataPtr;
  this_00 = &this[-1]._padding_;
  pFVar12 = pFVar11 + (int)uVar3;
  for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 1) {
    if ((pFVar11->ISMComponent != (UInstancedStaticMeshComponent *)this_00) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceId.ISMComponent == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                           ,0x1752,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((local_58.Data <
         (FScriptContainerElement *)
         ((longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64 + 1)) &&
       (&UE::Math::TTransform<double>::Identity <
        (TTransform<double> *)(local_58.Data + (longlong)iStack_4c * 0x60))) {
      in_stack_ffffffffffffff78 = &UE::Math::TTransform<double>::Identity;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    if (local_50 == iStack_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_58,&iStack_4c);
    }
    lVar10 = (longlong)local_50;
    local_50 = local_50 + 1;
    pTVar14 = (TTransform<double> *)(local_58.Data + lVar10 * 0x60);
    *&(pTVar14->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(pTVar14->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(pTVar14->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(pTVar14->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(pTVar14->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(pTVar14->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    GetInstanceTransform
              ((UInstancedStaticMeshComponent *)this_00,pFVar11->InstanceIndex,pTVar14,false);
  }
  (**(code **)(*this_00 + 3000))
            (this_00,&local_48,&local_58,1,(ulonglong)in_stack_ffffffffffffff78 & 0xffffffffffffff00
             ,1);
  iVar8 = (int)local_40;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_40 & 0xffffffff);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < iVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar8,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar8 = (int)local_40;
  puVar2 = local_48 + iVar8;
  puVar13 = local_48;
  while( true ) {
    if ((int)local_40 != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar13 == puVar2) break;
    uStack_30 = *puVar13;
    pFVar4 = (param_2->AllocatorInstance).Data;
    local_38 = this_00;
    if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar9 + 1;
    puVar13 = puVar13 + 1;
    pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(longlong **)pFVar4 = local_38;
    *(ulonglong *)(pFVar4 + 8) = CONCAT44(uStack_2c,uStack_30);
  }
  if (local_48 != (undefined4 *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return true;
}

// FullNavigationUpdate @ 147cf83e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::FullNavigationUpdate(UInstancedStaticMeshComponent *this)

{
  longlong *plVar1;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.UpdateComponentData,&FStack_28);
  plVar1 = (longlong *)0x0;
  if (FNavigationSystem::Delegates.UpdateComponentData._16_4_ != 0) {
    plVar1 = (longlong *)FNavigationSystem::Delegates.UpdateComponentData._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// GetAllPhysicsObjects @ 147cfa680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UInstancedStaticMeshComponent::GetAllPhysicsObjects
          (UInstancedStaticMeshComponent *this,
          TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  undefined8 local_18 [2];
  
  iVar8 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (uint)this->_padding_;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)this->_padding_) {
    do {
      local_18[0] = (**(code **)(this->_padding_ + 0x10))(this,iVar8);
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      iVar8 = iVar8 + 1;
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_18[0];
    } while (iVar8 < (int)this->_padding_);
  }
  return __return_storage_ptr__;
}

// GetBodyInstance @ 147cfab80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FBodyInstance * __thiscall
UInstancedStaticMeshComponent::GetBodyInstance
          (UInstancedStaticMeshComponent *this,FName param_1,bool param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBodyInstance *pFVar4;
  
  if ((-1 < param_3) && (param_3 < (this->InstanceBodies).ArrayNum)) {
    uVar3 = 0;
    if (param_3 < (this->InstanceBodies).ArrayNum) {
      uVar3 = (uint)~param_3 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBodyInstance *)(*pcVar1)();
        return pFVar4;
      }
    }
    return *(FBodyInstance **)
            ((this->InstanceBodies).AllocatorInstance.Data + (longlong)param_3 * 8);
  }
  return (FBodyInstance *)&this->_padding_;
}

// GetComponentChildElements @ 147cfb7b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::GetComponentChildElements
          (UInstancedStaticMeshComponent *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  return;
}

// GetComponentInstanceData @ 147cfb7c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
UInstancedStaticMeshComponent::GetComponentInstanceData
          (UInstancedStaticMeshComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  return __return_storage_ptr__;
}

// GetInstanceCount @ 147d06240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UInstancedStaticMeshComponent::GetInstanceCount(UInstancedStaticMeshComponent *this)

{
  return (this->PerInstanceSMData).ArrayNum;
}

// GetInstanceDataSceneProxy @ 147d06250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedPtr<FISMCInstanceDataSceneProxy,1> * __thiscall
UInstancedStaticMeshComponent::GetInstanceDataSceneProxy(UInstancedStaticMeshComponent *this)

{
  return &(this->PrimitiveInstanceDataManager).Proxy;
}

// GetInstanceNavigationBounds @ 147d06580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBox<double> * __thiscall
UInstancedStaticMeshComponent::GetInstanceNavigationBounds
          (UInstancedStaticMeshComponent *this,TBox<double> *__return_storage_ptr__)

{
  FInstancedStaticMeshComponentHelper::GetInstanceNavigationBounds<UInstancedStaticMeshComponent>
            (__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// GetInstancePrevTransform @ 147d065b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::GetInstancePrevTransform
          (UInstancedStaticMeshComponent *this,int param_1,TTransform<double> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((param_1 < 0) || ((this->PerInstancePrevTransform).ArrayNum <= param_1)) {
    bVar3 = false;
  }
  else {
    iVar1 = (this->PerInstancePrevTransform).ArrayNum;
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_f8 = (longlong)param_1;
      local_f0 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    UE::Math::TTransform<double>::SetFromMatrix
              (&local_e8,
               (TMatrix<double> *)
               ((this->PerInstancePrevTransform).AllocatorInstance.Data + (longlong)param_1 * 0x80))
    ;
    (param_2->Rotation).XY.m128d_f64[0] = local_e8.Rotation.XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = local_e8.Rotation.XY.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = local_e8.Rotation.ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = local_e8.Rotation.ZW.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = local_e8.Translation.XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = local_e8.Translation.XY.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = local_e8.Translation.ZW.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = local_e8.Scale3D.XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = local_e8.Scale3D.XY.m128d_f64[1];
    (param_2->Scale3D).ZW.m128d_f64[0] = local_e8.Scale3D.ZW.m128d_f64[0];
    (param_2->Scale3D).ZW.m128d_f64[1] = local_e8.Scale3D.ZW.m128d_f64[1];
    if (param_3) {
      local_88.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_88.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_88.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_88.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_88.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_88.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_88,param_2,(TTransform<double> *)&this->_padding_);
      (param_2->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      (param_2->Scale3D).ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetInstanceTransform @ 147d06b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::GetInstanceTransform
          (UInstancedStaticMeshComponent *this,int param_1,TTransform<double> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((param_1 < 0) || ((this->PerInstanceSMData).ArrayNum <= param_1)) {
    bVar3 = false;
  }
  else {
    iVar1 = (this->PerInstanceSMData).ArrayNum;
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_f8 = (longlong)param_1;
      local_f0 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    UE::Math::TTransform<double>::SetFromMatrix
              (&local_e8,
               (TMatrix<double> *)
               ((this->PerInstanceSMData).AllocatorInstance.Data + (longlong)param_1 * 0x80));
    (param_2->Rotation).XY.m128d_f64[0] = local_e8.Rotation.XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = local_e8.Rotation.XY.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = local_e8.Rotation.ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = local_e8.Rotation.ZW.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = local_e8.Translation.XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = local_e8.Translation.XY.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = local_e8.Translation.ZW.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = local_e8.Scale3D.XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = local_e8.Scale3D.XY.m128d_f64[1];
    (param_2->Scale3D).ZW.m128d_f64[0] = local_e8.Scale3D.ZW.m128d_f64[0];
    (param_2->Scale3D).ZW.m128d_f64[1] = local_e8.Scale3D.ZW.m128d_f64[1];
    if (param_3) {
      local_88.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_88.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_88.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_88.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_88.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_88.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_88,param_2,(TTransform<double> *)&this->_padding_);
      (param_2->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
      (param_2->Scale3D).ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetInstancesMinMaxScale @ 147d07240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::GetInstancesMinMaxScale
          (UInstancedStaticMeshComponent *this,TVector<double> *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 in_XMM3 [16];
  double dVar15;
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  
  if ((this->PerInstanceSMData).ArrayNum < 1) {
    (param_1->field0_0x0)._s_0.X = 1.0;
    (param_1->field0_0x0)._s_0.Y = 1.0;
    (param_1->field0_0x0)._s_0.Z = 1.0;
    (param_2->field0_0x0)._s_0.X = 1.0;
    (param_2->field0_0x0)._s_0.Y = 1.0;
    (param_2->field0_0x0)._s_0.Z = 1.0;
    return;
  }
  (param_1->field0_0x0)._s_0.X = 3.4028234663852886e+38;
  uVar9 = 0;
  (param_1->field0_0x0)._s_0.Y = 3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Z = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.X = -3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Y = -3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Z = -3.4028234663852886e+38;
  dVar6 = __real_3e45798ee0000000;
  if (0 < (this->PerInstanceSMData).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->PerInstanceSMData).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->PerInstanceSMData).AllocatorInstance.Data;
      dVar14 = *(double *)(pFVar1 + lVar10) * *(double *)(pFVar1 + lVar10) +
               *(double *)(pFVar1 + lVar10 + 8) * *(double *)(pFVar1 + lVar10 + 8) +
               *(double *)(pFVar1 + lVar10 + 0x10) * *(double *)(pFVar1 + lVar10 + 0x10);
      if (dVar14 <= dVar6) {
        in_XMM4 = ZEXT816(0);
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar14;
        in_XMM4 = sqrtpd(in_XMM4,auVar3);
      }
      dVar14 = *(double *)(pFVar1 + lVar10 + 0x28) * *(double *)(pFVar1 + lVar10 + 0x28) +
               *(double *)(pFVar1 + lVar10 + 0x20) * *(double *)(pFVar1 + lVar10 + 0x20) +
               *(double *)(pFVar1 + lVar10 + 0x30) * *(double *)(pFVar1 + lVar10 + 0x30);
      if (dVar14 <= dVar6) {
        in_XMM5 = ZEXT816(0);
      }
      else {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar14;
        in_XMM5 = sqrtpd(in_XMM5,auVar4);
      }
      dVar14 = *(double *)(pFVar1 + lVar10 + 0x48) * *(double *)(pFVar1 + lVar10 + 0x48) +
               *(double *)(pFVar1 + lVar10 + 0x40) * *(double *)(pFVar1 + lVar10 + 0x40) +
               *(double *)(pFVar1 + lVar10 + 0x50) * *(double *)(pFVar1 + lVar10 + 0x50);
      if (dVar14 <= dVar6) {
        in_XMM3 = ZEXT816(0);
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar14;
        in_XMM3 = sqrtpd(in_XMM3,auVar5);
      }
      dVar14 = (param_1->field0_0x0)._s_0.X;
      dVar13 = in_XMM5._0_8_;
      dVar15 = (param_1->field0_0x0)._s_0.Y;
      dVar12 = dVar13;
      if (dVar15 <= dVar13) {
        dVar12 = dVar15;
      }
      dVar15 = in_XMM4._0_8_;
      if (dVar15 <= dVar14) {
        dVar14 = dVar15;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x80;
      (param_1->field0_0x0)._s_0.Y = dVar12;
      (param_1->field0_0x0)._s_0.X = dVar14;
      dVar11 = in_XMM3._0_8_;
      dVar14 = (param_1->field0_0x0)._s_0.Z;
      dVar12 = dVar11;
      if (dVar14 <= dVar11) {
        dVar12 = dVar14;
      }
      (param_1->field0_0x0)._s_0.Z = dVar12;
      dVar14 = (param_2->field0_0x0)._s_0.Y;
      dVar12 = (param_2->field0_0x0)._s_0.Z;
      if (dVar14 <= dVar13) {
        dVar14 = dVar13;
      }
      dVar13 = (param_2->field0_0x0)._s_0.X;
      if (dVar15 <= dVar13) {
        in_XMM4._0_8_ = dVar13;
      }
      if (dVar12 <= dVar11) {
        dVar12 = dVar11;
      }
      (param_2->field0_0x0)._s_0.Y = dVar14;
      (param_2->field0_0x0)._s_0.X = in_XMM4._0_8_;
      (param_2->field0_0x0)._s_0.Z = dVar12;
    } while ((int)uVar9 < (this->PerInstanceSMData).ArrayNum);
  }
  return;
}

// GetInstancesOverlappingBox @ 147d077f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UInstancedStaticMeshComponent::GetInstancesOverlappingBox
          (UInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TBox<double> *param_1,
          bool param_2)

{
  UInstancedStaticMeshComponent *this_00;
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong extraout_RAX;
  TMatrix<double> *pTVar24;
  TBoxSphereBounds<double,double> *pTVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  UInstancedStaticMeshComponent *pUVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auStack_378 [32];
  uint *local_358;
  FScriptContainerElement *local_350;
  longlong local_348;
  longlong local_340;
  undefined8 local_338;
  uint local_328 [2];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  double local_300;
  double dStack_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [16];
  double dStack_2d8;
  undefined8 local_2d0;
  double dStack_2c8;
  double dStack_2c0;
  undefined1 local_2b8;
  undefined7 uStack_2b7;
  TTransform<double> local_2a8;
  TBoxSphereBounds<double,double> local_248;
  TVector<double>_u_0 local_210;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  char local_1a8;
  TVector<double>_u_0 local_1a0;
  double dStack_188;
  double local_180;
  double dStack_178;
  undefined8 local_170;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  uVar23 = __security_cookie.value ^ (ulonglong)auStack_378;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (UInstancedStaticMeshComponent *)this->_padding_;
  pUVar29 = this;
  local_e8 = uVar23;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UInstancedStaticMeshComponent *)0x0) {
      return __return_storage_ptr__;
    }
    pUVar29 = this_00;
    UE::GC::MarkAsReachable((UObject *)this_00);
    uVar23 = extraout_RAX;
  }
  uVar19 = _UNK_15061cc8c;
  uVar18 = _UNK_15061cc88;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (this_00 != (UInstancedStaticMeshComponent *)0x0) {
    local_210._s_0.X = (param_1->Min).field0_0x0._s_0.X;
    local_210._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
    local_210._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    dStack_1f8 = (param_1->Max).field0_0x0._s_0.X;
    local_1f0 = (param_1->Max).field0_0x0._s_0.Y;
    dStack_1e8 = (param_1->Max).field0_0x0._s_0.Z;
    local_1e0._0_1_ = param_1->IsValid;
    local_1e0._1_1_ = param_1->Pad[0];
    local_1e0._2_1_ = param_1->Pad[1];
    local_1e0._3_1_ = param_1->Pad[2];
    local_1e0._4_1_ = param_1->Pad[3];
    local_1e0._5_1_ = param_1->Pad[4];
    local_1e0._6_1_ = param_1->Pad[5];
    local_1e0._7_1_ = param_1->Pad[6];
    if (param_2) {
      auVar31._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)&this->_padding_ + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_);
      auVar31._8_4_ = _UNK_15061cc88 & (uint)this->_padding_;
      auVar31._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
      lVar30 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar31._8_8_);
      auVar3._8_4_ = (int)lVar30;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar31._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      uVar28 = movmskpd((int)pUVar29,auVar3);
      auVar32._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)&this->_padding_ + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_);
      auVar32._8_4_ = _UNK_15061cc88 & (uint)this->_padding_;
      auVar32._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
      lVar30 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar32._8_8_);
      auVar2._8_4_ = (int)lVar30;
      auVar2._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar32._0_8_);
      auVar2._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      iVar21 = movmskpd((int)uVar23,auVar2);
      if ((uVar28 & 0x3fffffff) == 0 && iVar21 == 0) {
        local_2a8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_2a8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_2a8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_2a8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_2a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_2a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast((TTransform<double> *)&this->_padding_,&local_2a8)
        ;
      }
      pTVar24 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_2a8,&local_168);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)&local_210._s_0,(TBox<double> *)&local_1a0._s_0,pTVar24);
      local_210._s_0.X = local_1a0._s_0.X;
      local_210._s_0.Y = local_1a0._s_0.Y;
      local_210._s_0.Z = local_1a0._s_0.Z;
      dStack_1f8 = dStack_188;
      local_1f0 = local_180;
      dStack_1e8 = dStack_178;
      local_1e0 = local_170;
    }
    pTVar25 = UStaticMesh::GetBounds((UStaticMesh *)this_00,&local_248);
    local_1a8 = '\x01';
    local_328[0] = 0;
    local_1c0 = (pTVar25->BoxExtent).field0_0x0._s_0.X;
    local_1d8 = (pTVar25->Origin).field0_0x0._s_0.X - local_1c0;
    dStack_1b8 = (pTVar25->BoxExtent).field0_0x0._s_0.Y;
    local_1b0 = (pTVar25->BoxExtent).field0_0x0._s_0.Z;
    dStack_1d0 = (pTVar25->Origin).field0_0x0._s_0.Y - dStack_1b8;
    local_1c0 = local_1c0 + (pTVar25->Origin).field0_0x0._s_0.X;
    dStack_1b8 = dStack_1b8 + (pTVar25->Origin).field0_0x0._s_0.Y;
    local_1c8 = (pTVar25->Origin).field0_0x0._s_0.Z - local_1b0;
    local_1b0 = local_1b0 + (pTVar25->Origin).field0_0x0._s_0.Z;
    if (0 < (this->PerInstanceSMData).ArrayNum) {
      do {
        uVar28 = local_328[0];
        iVar21 = (this->PerInstanceSMData).ArrayNum;
        uVar22 = 0;
        if ((int)local_328[0] < iVar21) {
          uVar22 = ~local_328[0] >> 0x1f;
        }
        if (uVar22 == 0) {
          local_358 = (uint *)(longlong)(int)local_328[0];
          local_350 = (FScriptContainerElement *)(longlong)iVar21;
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar1 = (code *)swi(3);
            pTVar26 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar26;
          }
        }
        pFVar27 = (this->PerInstanceSMData).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x80;
        if (local_1a8 == '\0') {
          dVar5 = 0.0;
          dVar4 = 0.0;
          dVar10 = 0.0;
          local_2f0 = 0;
          dStack_2f8 = 0.0;
          dVar33 = 0.0;
          local_300 = 0.0;
        }
        else {
          local_2b8 = 1;
          dVar4 = (local_1c0 + local_1d8) * ___xmm_3fe00000000000003fe0000000000000;
          dVar33 = (dStack_1b8 + dStack_1d0) * _UNK_150689678;
          dVar5 = (local_1b0 + local_1c8) * ___xmm_3fe00000000000003fe0000000000000;
          dVar8 = (local_1c0 - local_1d8) * ___xmm_3fe00000000000003fe0000000000000;
          dVar9 = (dStack_1b8 - dStack_1d0) * _UNK_150689678;
          dVar12 = (local_1b0 - local_1c8) * ___xmm_3fe00000000000003fe0000000000000;
          dVar6 = *(double *)(pFVar27 + 0x20) * dVar33 + *(double *)pFVar27 * dVar4 +
                  *(double *)(pFVar27 + 0x40) * dVar5 + *(double *)(pFVar27 + 0x60);
          dVar7 = *(double *)(pFVar27 + 0x28) * dVar33 + *(double *)(pFVar27 + 8) * dVar4 +
                  *(double *)(pFVar27 + 0x48) * dVar5 + *(double *)(pFVar27 + 0x68);
          dVar10 = *(double *)pFVar27 * dVar8;
          dVar11 = *(double *)(pFVar27 + 8) * dVar8;
          dVar8 = *(double *)(pFVar27 + 0x10) * dVar8;
          dVar14 = *(double *)(pFVar27 + 0x20) * dVar9;
          dVar15 = *(double *)(pFVar27 + 0x28) * dVar9;
          dVar9 = *(double *)(pFVar27 + 0x30) * dVar9;
          dVar34 = *(double *)(pFVar27 + 0x30) * dVar33 + *(double *)(pFVar27 + 0x10) * dVar4 +
                   *(double *)(pFVar27 + 0x50) * dVar5 + *(double *)(pFVar27 + 0x70);
          dVar4 = *(double *)(pFVar27 + 0x40) * dVar12;
          dVar33 = *(double *)(pFVar27 + 0x48) * dVar12;
          dVar12 = *(double *)(pFVar27 + 0x50) * dVar12;
          dVar10 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar17,
                                    SUB84(dVar14,0) & uVar16) +
                   (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar17,
                                    SUB84(dVar10,0) & uVar16) +
                   (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar17,
                                    SUB84(dVar4,0) & uVar16);
          dVar11 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar19,
                                    SUB84(dVar15,0) & uVar18) +
                   (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar19,
                                    SUB84(dVar11,0) & uVar18) +
                   (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar19,
                                    SUB84(dVar33,0) & uVar18);
          dVar33 = dVar6 - dVar10;
          dVar5 = dVar7 - dVar11;
          dStack_2f8 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar17,
                                        SUB84(dVar9,0) & uVar16) +
                       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar17,
                                        SUB84(dVar8,0) & uVar16) +
                       (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar17,
                                        SUB84(dVar12,0) & uVar16);
          dVar10 = dVar10 + dVar6;
          dVar11 = dVar11 + dVar7;
          dVar4 = dVar34 - dStack_2f8;
          auVar13._8_4_ = SUB84(dVar11,0);
          auVar13._0_8_ = dVar10;
          auVar13._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          dStack_2c8 = auVar13._8_8_;
          dStack_2f8 = dStack_2f8 + dVar34;
          local_2f0 = CONCAT71(uStack_2b7,1);
          local_2e8._8_4_ = SUB84(dVar5,0);
          local_2e8._0_8_ = dVar33;
          local_2e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          local_300 = dStack_2c8;
          dStack_2d8 = dVar4;
          dStack_2c0 = dStack_2f8;
          local_2d0 = dVar10;
        }
        local_310._8_4_ = SUB84(dVar10,0);
        local_310._0_8_ = dVar4;
        local_310._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_320._8_4_ = SUB84(dVar5,0);
        local_320._0_8_ = dVar33;
        local_320._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        if (((((local_210._s_0.X <= dVar10) && (dVar33 <= dStack_1f8)) &&
             (local_210._s_0.Y <= local_300)) &&
            ((dVar5 <= local_1f0 && (local_210._s_0.Z <= dStack_2f8)))) && (dVar4 <= dStack_1e8)) {
          pFVar27 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar27 <= (FScriptContainerElement *)local_328) &&
             ((FScriptContainerElement *)local_328 <
              pFVar27 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
            local_340 = (longlong)__return_storage_ptr__->ArrayNum;
            local_338 = 4;
            local_358 = local_328;
            local_350 = pFVar27;
            local_348 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar20) {
              pcVar1 = (code *)swi(3);
              pTVar26 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
              return pTVar26;
            }
          }
          iVar21 = __return_storage_ptr__->ArrayNum;
          if (iVar21 == __return_storage_ptr__->ArrayMax) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          pFVar27 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar21 + 1;
          *(uint *)(pFVar27 + (longlong)iVar21 * 4) = local_328[0];
        }
        local_328[0] = local_328[0] + 1;
      } while ((int)local_328[0] < (this->PerInstanceSMData).ArrayNum);
    }
  }
  return __return_storage_ptr__;
}

// GetInstancesOverlappingSphere @ 147d08300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UInstancedStaticMeshComponent::GetInstancesOverlappingSphere
          (UInstancedStaticMeshComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TVector<double> *param_1,
          float param_2,bool param_3)

{
  double dVar1;
  UInstancedStaticMeshComponent *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  undefined1 *extraout_RAX;
  undefined1 *puVar15;
  TBoxSphereBounds<double,double> *pTVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  UInstancedStaticMeshComponent *pUVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auVar81 [16];
  uint local_1b8 [2];
  undefined1 local_1b0 [16];
  double local_1a0;
  double dStack_198;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  TTransform<double> local_158;
  TBoxSphereBounds<double,double> local_f8 [4];
  undefined1 auVar57 [16];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (UInstancedStaticMeshComponent *)this->_padding_;
  puVar15 = (undefined1 *)register0x00000020;
  pUVar19 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UInstancedStaticMeshComponent *)0x0) {
      return __return_storage_ptr__;
    }
    pUVar19 = this_00;
    UE::GC::MarkAsReachable((UObject *)this_00);
    puVar15 = extraout_RAX;
  }
  uVar11 = _UNK_15061cc8c;
  uVar10 = _UNK_15061cc88;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (this_00 != (UInstancedStaticMeshComponent *)0x0) {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = (param_1->field0_0x0)._s_0.X;
    dVar7 = (param_1->field0_0x0)._s_0.Y;
    local_1b0 = *(undefined1 (*) [16])&param_1->field0_0x0;
    dStack_198 = (double)param_2;
    local_1a0 = dVar1;
    if (param_3) {
      auVar44._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar44._8_4_ = (uint)this->_padding_ & _UNK_15061cc88;
      auVar44._12_4_ = *(uint *)((longlong)&this->_padding_ + 4) & _UNK_15061cc8c;
      auVar48._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar48._8_4_ = (uint)this->_padding_ & _UNK_15061cc88;
      auVar48._12_4_ = *(uint *)((longlong)&this->_padding_ + 4) & _UNK_15061cc8c;
      auVar50._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar44._8_8_);
      auVar50._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar44._0_8_);
      uVar18 = movmskpd((int)pUVar19,auVar50);
      auVar32._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar48._8_8_);
      auVar32._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar48._0_8_);
      iVar13 = movmskpd((int)puVar15,auVar32);
      if ((uVar18 & 0x3fffffff) == 0 && iVar13 == 0) {
        uVar59 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar65 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar66 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar67 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar61 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar62 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar63 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar77 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar78 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar79 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar80 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar75 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar76 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar18 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar72 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar73 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar74 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar68 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar69 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar70 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar71 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_158.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_158.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_158.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_158.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_158.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_158.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast((TTransform<double> *)&this->_padding_,&local_158)
        ;
        uVar61 = local_158.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar62 = local_158.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar63 = local_158.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar64 = local_158.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar59 = local_158.Rotation.XY.m128d_f64[0]._0_4_;
        uVar65 = local_158.Rotation.XY.m128d_f64[0]._4_4_;
        uVar66 = local_158.Rotation.XY.m128d_f64[1]._0_4_;
        uVar67 = local_158.Rotation.XY.m128d_f64[1]._4_4_;
        uVar68 = local_158.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar69 = local_158.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar70 = local_158.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar71 = local_158.Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar18 = local_158.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar72 = local_158.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar73 = local_158.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar74 = local_158.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar75 = local_158.Translation.ZW.m128d_f64[0]._0_4_;
        uVar76 = local_158.Translation.ZW.m128d_f64[0]._4_4_;
        uVar77 = local_158.Translation.XY.m128d_f64[0]._0_4_;
        uVar78 = local_158.Translation.XY.m128d_f64[0]._4_4_;
        uVar79 = local_158.Translation.XY.m128d_f64[1]._0_4_;
        uVar80 = local_158.Translation.XY.m128d_f64[1]._4_4_;
      }
      dVar6 = dVar6 * (double)CONCAT44(uVar72,uVar18);
      dVar7 = dVar7 * (double)CONCAT44(uVar74,uVar73);
      uVar58 = SUB84(dVar7,0);
      uVar60 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar45._4_4_ = uVar65;
      auVar45._0_4_ = uVar59;
      auVar45._8_4_ = uVar66;
      auVar45._12_4_ = uVar67;
      dVar21 = auVar45._8_8_;
      auVar5._8_4_ = uVar58;
      auVar5._0_8_ = dVar6;
      auVar5._12_4_ = uVar60;
      auVar54._8_4_ = uVar58;
      auVar54._0_8_ = dVar6;
      auVar54._12_4_ = uVar60;
      auVar31._8_4_ = uVar58;
      auVar31._0_8_ = dVar6;
      auVar31._12_4_ = uVar60;
      dVar1 = dVar1 * (double)CONCAT44(uVar69,uVar68);
      dVar53 = (double)CONCAT44(uVar71,uVar70) * 0.0;
      auVar22._8_4_ = uVar61;
      auVar22._0_8_ = dVar21;
      auVar22._12_4_ = uVar62;
      auVar49._4_4_ = uVar65;
      auVar49._0_4_ = uVar59;
      auVar49._8_4_ = uVar66;
      auVar49._12_4_ = uVar67;
      auVar4._8_4_ = SUB84(dVar53,0);
      auVar4._0_8_ = dVar1;
      auVar4._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      auVar32 = blendpd(auVar31,auVar4,2);
      auVar8._4_4_ = uVar62;
      auVar8._0_4_ = uVar61;
      auVar8._8_4_ = uVar63;
      auVar8._12_4_ = uVar64;
      auVar50 = blendpd(auVar49,auVar8,2);
      auVar55._0_8_ = auVar54._8_8_ * (double)CONCAT44(uVar65,uVar59) - dVar21 * dVar6;
      auVar55._8_8_ = dVar1 * (double)CONCAT44(uVar67,uVar66) - auVar22._8_8_ * dVar7;
      auVar33._0_8_ = auVar32._0_8_ * (double)CONCAT44(uVar62,uVar61) - auVar50._0_8_ * dVar1;
      auVar33._8_8_ = auVar32._8_8_ * (double)CONCAT44(uVar64,uVar63) - auVar50._8_8_ * dVar53;
      auVar32 = blendpd(auVar55,auVar33,2);
      dVar7 = auVar55._8_8_ + auVar55._8_8_;
      dVar53 = auVar33._0_8_ + auVar33._0_8_;
      uVar58 = SUB84(dVar53,0);
      uVar60 = (undefined4)((ulonglong)dVar53 >> 0x20);
      auVar56._0_8_ = auVar32._0_8_ + auVar32._0_8_;
      auVar56._8_8_ = auVar32._8_8_ + auVar32._8_8_;
      auVar41._8_4_ = uVar58;
      auVar41._0_8_ = dVar7;
      auVar41._12_4_ = uVar60;
      auVar23._8_4_ = uVar58;
      auVar23._0_8_ = dVar7;
      auVar23._12_4_ = uVar60;
      auVar34._8_4_ = uVar58;
      auVar34._0_8_ = dVar7;
      auVar34._12_4_ = uVar60;
      auVar32 = blendpd(auVar34,auVar56,2);
      auVar42._0_8_ = auVar41._8_8_ * (double)CONCAT44(uVar65,uVar59) - dVar7 * dVar21;
      auVar42._8_8_ =
           auVar56._0_8_ * (double)CONCAT44(uVar67,uVar66) -
           auVar23._8_8_ * (double)CONCAT44(uVar62,uVar61);
      auVar24._8_4_ = SUB84(auVar56._8_8_,0);
      auVar24._0_8_ = auVar56._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
      auVar35._0_8_ =
           auVar32._0_8_ * (double)CONCAT44(uVar62,uVar61) - auVar56._0_8_ * auVar50._0_8_;
      auVar35._8_8_ =
           auVar32._8_8_ * (double)CONCAT44(uVar64,uVar63) - auVar24._8_8_ * auVar50._8_8_;
      local_190._8_8_ = auVar5._8_8_;
      auVar25._8_4_ = SUB84(auVar42._8_8_,0);
      auVar25._0_8_ = auVar42._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      auVar51._0_8_ = CONCAT44(uVar14 & uVar72,uVar9 & uVar18);
      auVar51._8_4_ = uVar10 & uVar73;
      auVar51._12_4_ = uVar11 & uVar74;
      auVar50 = blendpd(auVar42,auVar35,2);
      auVar81._0_8_ = CONCAT44(uVar14 & uVar69,uVar9 & uVar68);
      auVar81._8_4_ = uVar10 & uVar70;
      auVar81._12_4_ = uVar11 & uVar71;
      auVar26._8_4_ = auVar51._8_4_;
      auVar26._0_8_ = auVar51._0_8_;
      auVar26._12_4_ = auVar51._12_4_;
      auVar27._8_8_ = auVar81._0_8_;
      auVar27._0_8_ = auVar26._8_8_;
      auVar36._8_8_ = auVar51._0_8_;
      auVar36._0_8_ = auVar81._0_8_;
      auVar43._8_4_ = auVar51._8_4_;
      auVar43._0_8_ = auVar51._0_8_;
      auVar43._12_4_ = auVar51._12_4_;
      auVar32 = maxpd(auVar43,auVar27);
      auVar28._8_4_ = auVar51._8_4_;
      auVar28._0_8_ = auVar51._0_8_;
      auVar28._12_4_ = auVar51._12_4_;
      auVar52._8_8_ = auVar81._8_8_;
      auVar52._0_8_ = auVar51._8_8_;
      auVar44 = maxpd(auVar32,auVar36);
      auVar32 = blendpd(auVar28,auVar81,2);
      local_1a0 = auVar56._0_8_ * (double)CONCAT44(uVar64,uVar63) + dVar1 + auVar50._0_8_ +
                  (double)CONCAT44(uVar76,uVar75);
      dVar1 = dVar7 * (double)CONCAT44(uVar64,uVar63) + dVar6 + auVar25._8_8_ +
              (double)CONCAT44(uVar78,uVar77);
      dVar6 = dVar53 * (double)CONCAT44(uVar64,uVar63) + (double)local_190._8_8_ + auVar35._0_8_ +
              (double)CONCAT44(uVar80,uVar79);
      uVar59 = SUB84(dVar6,0);
      uVar61 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar37._8_4_ = auVar81._8_4_;
      auVar37._0_8_ = auVar81._0_8_;
      auVar37._12_4_ = auVar81._12_4_;
      auVar32 = maxpd(auVar37,auVar32);
      local_190._8_4_ = uVar59;
      local_190._0_8_ = dVar1;
      local_190._12_4_ = uVar61;
      maxpd(auVar32,auVar52);
      local_1b0._8_4_ = uVar59;
      local_1b0._0_8_ = dVar1;
      local_1b0._12_4_ = uVar61;
      dStack_198 = (double)(float)auVar44._0_8_ * dStack_198;
      local_180 = local_1a0;
    }
    pTVar16 = UStaticMesh::GetBounds((UStaticMesh *)this_00,local_f8);
    dVar7 = __real_3f1a36e2e0000000;
    dVar6 = __real_3ff0000000000000;
    local_1b8[0] = 0;
    local_178 = (pTVar16->Origin).field0_0x0._s_0.X;
    dStack_170 = (pTVar16->Origin).field0_0x0._s_0.Y;
    local_168 = (pTVar16->Origin).field0_0x0._s_0.Z;
    dVar1 = pTVar16->SphereRadius;
    if (0 < (this->PerInstanceSMData).ArrayNum) {
      do {
        uVar9 = local_1b8[0];
        uVar14 = 0;
        if ((int)local_1b8[0] < (this->PerInstanceSMData).ArrayNum) {
          uVar14 = ~local_1b8[0] >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar17;
        }
        pFVar2 = (this->PerInstanceSMData).AllocatorInstance.Data;
        lVar20 = (longlong)(int)uVar9 * 0x80;
        auVar29._8_4_ = SUB84(dStack_170,0);
        auVar29._0_8_ = dStack_170;
        auVar29._12_4_ = (int)((ulonglong)dStack_170 >> 0x20);
        auVar38._8_4_ = SUB84(local_168,0);
        auVar38._0_8_ = local_168;
        auVar38._12_4_ = (int)((ulonglong)local_168 >> 0x20);
        auVar39._8_4_ = SUB84(dVar6,0);
        auVar39._0_8_ = dVar6;
        auVar39._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar46._0_8_ = *(double *)(pFVar2 + lVar20 + 0x30) * *(double *)(pFVar2 + lVar20 + 0x30);
        auVar46._8_8_ = 0;
        dVar21 = local_1a0 -
                 (*(double *)(pFVar2 + lVar20 + 0x30) * dStack_170 +
                  local_178 * *(double *)(pFVar2 + lVar20 + 0x10) +
                  *(double *)(pFVar2 + lVar20 + 0x50) * local_168 +
                 *(double *)(pFVar2 + lVar20 + 0x70) * dVar6);
        dVar53 = *(double *)(pFVar2 + lVar20 + 0x48) * *(double *)(pFVar2 + lVar20 + 0x48) +
                 *(double *)(pFVar2 + lVar20 + 0x40) * *(double *)(pFVar2 + lVar20 + 0x40) +
                 *(double *)(pFVar2 + lVar20 + 0x50) * *(double *)(pFVar2 + lVar20 + 0x50);
        dVar47 = *(double *)(pFVar2 + lVar20 + 0x28) * *(double *)(pFVar2 + lVar20 + 0x28) +
                 *(double *)(pFVar2 + lVar20 + 0x20) * *(double *)(pFVar2 + lVar20 + 0x20) +
                 auVar46._0_8_;
        dVar30 = (double)local_1b0._0_8_ -
                 (local_178 * *(double *)(pFVar2 + lVar20) +
                  dStack_170 * *(double *)(pFVar2 + lVar20 + 0x20) +
                  local_168 * *(double *)(pFVar2 + lVar20 + 0x40) +
                 dVar6 * *(double *)(pFVar2 + lVar20 + 0x60));
        if (dVar53 <= dVar47) {
          dVar53 = dVar47;
        }
        dVar47 = *(double *)(pFVar2 + lVar20 + 8) * *(double *)(pFVar2 + lVar20 + 8) +
                 *(double *)(pFVar2 + lVar20) * *(double *)(pFVar2 + lVar20) +
                 *(double *)(pFVar2 + lVar20 + 0x10) * *(double *)(pFVar2 + lVar20 + 0x10);
        dVar40 = (double)local_1b0._8_8_ -
                 (local_178 * *(double *)(pFVar2 + lVar20 + 8) +
                  auVar29._8_8_ * *(double *)(pFVar2 + lVar20 + 0x20 + 8) +
                  auVar38._8_8_ * *(double *)(pFVar2 + lVar20 + 0x40 + 8) +
                 auVar39._8_8_ * *(double *)(pFVar2 + lVar20 + 0x60 + 8));
        if (dVar53 <= dVar47) {
          dVar53 = dVar47;
        }
        auVar57._8_8_ = 0;
        auVar57._0_8_ = dVar53;
        auVar32 = sqrtpd(auVar46,auVar57);
        dVar53 = auVar32._0_8_ * dVar1 + dStack_198 + dVar7;
        if (dVar53 <= 0.0) {
          dVar53 = 0.0;
        }
        if (dVar40 * dVar40 + dVar30 * dVar30 + dVar21 * dVar21 <= dVar53 * dVar53) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_1b8) &&
              ((FScriptContainerElement *)local_1b8 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar17;
          }
          iVar13 = __return_storage_ptr__->ArrayNum;
          if (iVar13 == __return_storage_ptr__->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar13 + 1;
          *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 4) =
               local_1b8[0];
        }
        local_1b8[0] = local_1b8[0] + 1;
      } while ((int)local_1b8[0] < (this->PerInstanceSMData).ArrayNum);
    }
  }
  return __return_storage_ptr__;
}

// GetLightAndShadowMapMemoryUsage @ 147d08d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::GetLightAndShadowMapMemoryUsage
          (UInstancedStaticMeshComponent *this,int *param_1,int *param_2)

{
  int iVar1;
  
  UStaticMeshComponent::GetLightAndShadowMapMemoryUsage
            ((UStaticMeshComponent *)this,param_1,param_2);
  iVar1 = (this->PerInstanceSMData).ArrayNum;
  *param_1 = iVar1 * *param_1;
  *param_2 = iVar1 * *param_2;
  return;
}

// GetMaterialStreamingData @ 147d08ff0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::GetMaterialStreamingData
          (UInstancedStaticMeshComponent *this,int param_1,FPrimitiveMaterialInfo *param_2)

{
  UStaticMesh *this_00;
  UMaterialInterface *pUVar1;
  FMeshUVChannelInfo *pFVar2;
  
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    pUVar1 = UStaticMeshComponent::GetMaterial((UStaticMeshComponent *)this,param_1);
    param_2->Material = pUVar1;
    this_00 = (UStaticMesh *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar2 = UStaticMesh::GetUVChannelData(this_00,param_1);
    param_2->UVChannelData = pFVar2;
    param_2->PackedRelativeBox = 0xffff0000;
  }
  if (((param_2->Material != (UMaterialInterface *)0x0) &&
      (param_2->UVChannelData != (FMeshUVChannelInfo *)0x0)) && (param_2->PackedRelativeBox != 0)) {
    return true;
  }
  return false;
}

// GetNavigationBounds @ 147d095b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBox<double> * __thiscall
UInstancedStaticMeshComponent::GetNavigationBounds
          (UInstancedStaticMeshComponent *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  bool bVar8;
  TBox<double> *pTVar9;
  
  if ((char)(this->InstanceReorderTable).ArrayNum == '\0') {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5138689870130053248>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\InstancedStaticMeshComponent.h"
                       ,0x80,"!bCheckValid || bIsValid");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar9 = (TBox<double> *)(*pcVar7)();
      return pTVar9;
    }
  }
  dVar1 = (this->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Y;
  dVar2 = (this->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.Y;
  dVar3 = (double)this->ProxySize;
  dVar4 = (this->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.Z;
  dVar5 = (this->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.X;
  dVar6 = (this->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar3 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar5 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2 - dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar5 + dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2 + dVar1;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetNavigationData @ 147d09690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::GetNavigationData
          (UInstancedStaticMeshComponent *this,FNavigationRelevantData *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  puVar1 = &this[-1].PrimitiveInstanceDataManager.field_0x10;
  local_78 = _vcall__3216__flat______;
  uStack_70 = 0;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInstancedStaticMeshComponent____A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    puVar2[3] = 0;
    local_res8 = puVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = local_78;
    puVar2[5] = CONCAT44(uStack_6c,uStack_70);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FInstancedStaticMeshComponentHelper::GetNavigationData<UInstancedStaticMeshComponent>
            ((UInstancedStaticMeshComponent *)puVar1,param_1,
             (TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// GetNavigationPerInstanceTransforms @ 147d09850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::GetNavigationPerInstanceTransforms
          (UInstancedStaticMeshComponent *this,TBox<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  TBox<double> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  double dVar17;
  undefined1 auStack_268 [32];
  TTransform<double> *pTStack_248;
  TTransform<double> *pTStack_240;
  longlong lStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [8];
  double dStack_210;
  double dStack_208;
  double dStack_200;
  TVector<double>_u_0 TStack_1f8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  TTransform<double> TStack_1b8;
  TBox<double> TStack_158;
  TTransform<double> TStack_118;
  TBox<double> TStack_b8;
  ulonglong uStack_80;
  
  uStack_80 = __security_cookie.value ^ (ulonglong)auStack_268;
  FInstancedStaticMeshComponentHelper::GetInstanceNavigationBounds<UInstancedStaticMeshComponent>
            (&TStack_158,this);
  if (TStack_158.IsValid != '\0') {
    UE::Math::TBox<double>::InverseTransformBy
              (param_1,(TBox<double> *)&TStack_1f8._s_0,(TTransform<double> *)&this->_padding_);
    dVar10 = __real_3fe0000000000000;
    iVar4 = (this->PerInstanceSMData).ArrayNum;
    pFVar15 = (this->PerInstanceSMData).AllocatorInstance.Data;
    pFVar16 = pFVar15 + (longlong)iVar4 * 0x80;
    while( true ) {
      if ((this->PerInstanceSMData).ArrayNum != iVar4) {
        auStack_218[0] = 0;
        `TCheckedPointerIterator<FInstancedStaticMeshInstanceData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_218);
      }
      if (pFVar15 == pFVar16) break;
      UE::Math::TTransform<double>::SetFromMatrix(&TStack_118,(TMatrix<double> *)pFVar15);
      dStack_210 = TStack_118.Scale3D.XY.m128d_f64[0];
      dStack_208 = TStack_118.Scale3D.XY.m128d_f64[1];
      dStack_200 = TStack_118.Scale3D.ZW.m128d_f64[0];
      if (((TStack_118.Scale3D.XY.m128d_f64[0] != 0.0) ||
          (TStack_118.Scale3D.XY.m128d_f64[1] != 0.0)) ||
         (TStack_118.Scale3D.ZW.m128d_f64[0] != 0.0)) {
        pTVar13 = UE::Math::TBox<double>::TransformBy
                            (&TStack_158,&TStack_b8,(TMatrix<double> *)pFVar15);
        dVar1 = (pTVar13->Min).field0_0x0._s_0.Z;
        dVar2 = (pTVar13->Min).field0_0x0._s_0.X;
        dVar3 = (pTVar13->Min).field0_0x0._s_0.Y;
        dVar9 = ((pTVar13->Max).field0_0x0._s_0.Z - dVar1) * dVar10;
        dVar8 = ((pTVar13->Max).field0_0x0._s_0.Y - dVar3) * dVar10;
        dVar17 = ((pTVar13->Max).field0_0x0._s_0.X - dVar2) * dVar10;
        if ((((TStack_1f8._s_0.X <= dVar2 + dVar17 + dVar17) && (dVar2 <= dStack_1e0)) &&
            ((TStack_1f8._s_0.Y <= dVar3 + dVar8 + dVar8 &&
             ((dVar3 <= dStack_1d8 && (TStack_1f8._s_0.Z <= dVar1 + dVar9 + dVar9)))))) &&
           (dVar1 <= dStack_1d0)) {
          TStack_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          TStack_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
          ;
          TStack_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          TStack_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          TStack_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
          ;
          TStack_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          TStack_1b8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          TStack_1b8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          TStack_1b8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          TStack_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          TStack_1b8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          TStack_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          TStack_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          TStack_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          TStack_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          TStack_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          TStack_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          TStack_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&TStack_1b8,&TStack_118,(TTransform<double> *)&this->_padding_);
          pTVar5 = (TTransform<double> *)(param_2->AllocatorInstance).Data;
          if ((pTVar5 <= &TStack_1b8) && (&TStack_1b8 < pTVar5 + param_2->ArrayMax)) {
            lStack_230 = (longlong)param_2->ArrayNum;
            uStack_228 = 0x60;
            pTStack_248 = &TStack_1b8;
            pTStack_240 = pTVar5;
            lStack_238 = (longlong)param_2->ArrayMax;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar12 = param_2->ArrayNum;
          if (iVar12 == param_2->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar12 + 1;
          pFVar6 = (param_2->AllocatorInstance).Data;
          lVar14 = (longlong)iVar12 * 0x60;
          *(double *)(pFVar6 + lVar14) = TStack_1b8.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 8) = TStack_1b8.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x10) = TStack_1b8.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x10 + 8) = TStack_1b8.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x20) = TStack_1b8.Translation.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x20 + 8) = TStack_1b8.Translation.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x30) = TStack_1b8.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x30 + 8) = TStack_1b8.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x40) = TStack_1b8.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x40 + 8) = TStack_1b8.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x50) = TStack_1b8.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x50 + 8) = TStack_1b8.Scale3D.ZW.m128d_f64[1];
        }
      }
      pFVar15 = pFVar15 + 0x80;
    }
  }
  return;
}

// GetNumRenderInstances @ 147d09890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
UInstancedStaticMeshComponent::GetNumRenderInstances(UInstancedStaticMeshComponent *this)

{
  return (this->PerInstanceSMData).ArrayNum;
}

// GetOrCalcBounds @ 147d098f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UInstancedStaticMeshComponent::GetOrCalcBounds
          (UInstancedStaticMeshComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1,
          EBoundsCacheType param_2)

{
  double *pdVar1;
  FBoundsCacheElement *pFVar2;
  FBoundsCacheElement *pFVar3;
  double *pdVar4;
  UStaticMesh *this_00;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined3 uVar10;
  bool bVar11;
  UWorld *this_01;
  ulong64 uVar12;
  uint *puVar13;
  TBoxSphereBounds<double,double> *pTVar14;
  TBoxSphereBounds<double,double> *pTVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_268 [32];
  TVector<double>_u_0 local_238;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TVector<double>_u_0 local_1a8;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined8 local_178;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140;
  undefined7 uStack_13f;
  TBoxSphereBounds<double,double> local_120;
  TBoxSphereBounds<double,double> local_e8;
  undefined1 local_b0 [24];
  char acStack_98 [32];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar20 = (ulonglong)param_2;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    if (0 < (this->PerInstanceSMData).ArrayNum) {
      if (param_2 == Navigation) {
        FInstancedStaticMeshComponentHelper::
        GetInstanceNavigationBounds<UInstancedStaticMeshComponent>
                  ((TBox<double> *)&local_1a8._s_0,this);
        uVar21 = (undefined4)local_178;
        uVar22 = (undefined4)((ulonglong)local_178 >> 0x20);
      }
      else {
        this_00 = (UStaticMesh *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pTVar15 = UStaticMesh::GetBounds(this_00,&local_120);
        local_140 = 1;
        uVar21 = (undefined4)CONCAT71(uStack_13f,1);
        uVar22 = (undefined4)((uint7)uStack_13f >> 0x18);
        local_188 = (pTVar15->BoxExtent).field0_0x0._s_0.Y;
        dStack_190 = (pTVar15->BoxExtent).field0_0x0._s_0.X;
        dStack_180 = (pTVar15->BoxExtent).field0_0x0._s_0.Z;
        local_1a8._s_0.X = (pTVar15->Origin).field0_0x0._s_0.X - dStack_190;
        local_1a8._s_0.Y = (pTVar15->Origin).field0_0x0._s_0.Y - local_188;
        local_188 = local_188 + (pTVar15->Origin).field0_0x0._s_0.Y;
        dStack_190 = dStack_190 + (pTVar15->Origin).field0_0x0._s_0.X;
        local_1a8._s_0.Z = (pTVar15->Origin).field0_0x0._s_0.Z - dStack_180;
        dStack_180 = dStack_180 + (pTVar15->Origin).field0_0x0._s_0.Z;
        local_170._8_4_ = SUB84(local_1a8._s_0.Y,0);
        local_170._0_8_ = local_1a8._s_0.X;
        local_170._12_4_ = (int)((ulonglong)local_1a8._s_0.Y >> 0x20);
        local_150._8_4_ = SUB84(dStack_180,0);
        local_150._0_8_ = local_188;
        local_150._12_4_ = (int)((ulonglong)dStack_180 >> 0x20);
        local_160._8_4_ = SUB84(dStack_190,0);
        local_160._0_8_ = local_1a8._s_0.Z;
        local_160._12_4_ = (int)((ulonglong)dStack_190 >> 0x20);
      }
      local_208._0_1_ = (char)uVar21;
      local_b0._8_4_ = SUB84(local_1a8._s_0.Y,0);
      local_b0._0_8_ = local_1a8._s_0.X;
      local_b0._12_4_ = (int)((ulonglong)local_1a8._s_0.Y >> 0x20);
      unique0x10000432 = SUB84(dStack_190,0);
      local_b0._16_8_ = local_1a8._s_0.Z;
      unique0x10000436 = (int)((ulonglong)dStack_190 >> 0x20);
      acStack_98._16_4_ = SUB84(dStack_180,0);
      acStack_98._8_8_ = local_188;
      acStack_98._20_4_ = (int)((ulonglong)dStack_180 >> 0x20);
      acStack_98[0x1c] = (char)uVar22;
      acStack_98[0x1d] = (char)((uint)uVar22 >> 8);
      acStack_98[0x1e] = (char)((uint)uVar22 >> 0x10);
      acStack_98[0x1f] = (char)((uint)uVar22 >> 0x18);
      acStack_98[0x18] = (char)uVar21;
      acStack_98[0x19] = (char)((uint)uVar21 >> 8);
      acStack_98[0x1a] = (char)((uint)uVar21 >> 0x10);
      acStack_98[0x1b] = (char)((uint)uVar21 >> 0x18);
      if (local_208._0_1_ != '\0') {
        this_01 = (UWorld *)this->_padding_;
        local_208 = (double)CONCAT44(uVar22,uVar21);
        if (((this_01 == (UWorld *)0x0) &&
            (this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
            this_01 == (UWorld *)0x0)) || (bVar11 = UWorld::IsGameWorld(this_01), !bVar11)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((param_2 == Other) || (((this->_padding_ & 1) == 0 && (!bVar11)))) {
          CalcBoundsImpl(this,(TBoxSphereBounds<double,double> *)&local_238._s_0,param_1,
                         (TBox<double> *)local_b0);
          if (param_2 == Navigation) {
            this->CachedBounds[1].Value.Origin.field0_0x0._s_0.X = local_238._s_0.X;
            this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Y = local_238._s_0.Y;
            this->CachedBounds[1].bIsValid = true;
            this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Z = local_238._s_0.Z;
            this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.X = dStack_220;
            this->CachedBounds[1].Hash = 0;
            this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Y = local_218;
            this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.Z = dStack_210;
            this->CachedBounds[1].Value.SphereRadius = local_208;
          }
          (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_238._s_0.X;
          (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_238._s_0.Y;
          (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_238._s_0.Z;
          (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_220;
          (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_218;
          (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_210;
          __return_storage_ptr__->SphereRadius = local_208;
          return __return_storage_ptr__;
        }
        local_200 = (param_1->Translation).XY.m128d_f64[0];
        dStack_1f8 = (param_1->Translation).XY.m128d_f64[1];
        local_1f0 = (param_1->Translation).ZW.m128d_f64[0];
        local_1b8 = (param_1->Rotation).ZW.m128d_f64[0];
        dStack_1b0 = (param_1->Rotation).ZW.m128d_f64[1];
        local_1c8 = (param_1->Rotation).XY.m128d_f64[0];
        dStack_1c0 = (param_1->Rotation).XY.m128d_f64[1];
        local_1e8 = (param_1->Scale3D).XY.m128d_f64[0];
        dStack_1e0 = (param_1->Scale3D).XY.m128d_f64[1];
        local_1d8 = (param_1->Scale3D).ZW.m128d_f64[0];
        uVar12 = CityHash64WithSeed((char *)&local_200,0x18,0);
        uVar12 = CityHash64WithSeed((char *)&local_1c8,0x20,uVar12);
        uVar12 = CityHash64WithSeed((char *)&local_1e8,0x18,uVar12);
        uVar12 = CityHash64WithSeed(local_b0,0x18,uVar12);
        uVar12 = CityHash64WithSeed(acStack_98,0x18,uVar12);
        uVar19 = (uint)(uVar12 >> 0x20) ^ (uint)uVar12;
        if ((this->CachedBounds[uVar20].bIsValid == false) ||
           (this->CachedBounds[uVar20].Hash != uVar19)) {
          uVar16 = 0;
          puVar13 = &this->CachedBounds[0].Hash;
          uVar18 = uVar16;
          do {
            iVar17 = (int)uVar18;
            if (((uVar16 != uVar20) && (((FBoundsCacheElement *)(puVar13 + -1))->bIsValid != false))
               && (*puVar13 == uVar19)) {
              pFVar2 = this->CachedBounds + iVar17;
              uVar10 = *(undefined3 *)&pFVar2->field_0x1;
              uVar19 = pFVar2->Hash;
              dVar6 = (pFVar2->Value).Origin.field0_0x0._s_0.X;
              pFVar3 = this->CachedBounds + uVar20;
              pFVar3->bIsValid = pFVar2->bIsValid;
              *(undefined3 *)&pFVar3->field_0x1 = uVar10;
              pFVar3->Hash = uVar19;
              (pFVar3->Value).Origin.field0_0x0._s_0.X = dVar6;
              pdVar1 = &this->CachedBounds[iVar17].Value.Origin.field0_0x0._s_0.Y;
              dVar6 = pdVar1[1];
              pdVar4 = &this->CachedBounds[uVar20].Value.Origin.field0_0x0._s_0.Y;
              *pdVar4 = *pdVar1;
              pdVar4[1] = dVar6;
              pTVar15 = &this->CachedBounds[iVar17].Value;
              dVar6 = (pTVar15->BoxExtent).field0_0x0._s_0.Y;
              pTVar14 = &this->CachedBounds[uVar20].Value;
              (pTVar14->BoxExtent).field0_0x0._s_0.X = (pTVar15->BoxExtent).field0_0x0._s_0.X;
              (pTVar14->BoxExtent).field0_0x0._s_0.Y = dVar6;
              pdVar1 = &this->CachedBounds[iVar17].Value.BoxExtent.field0_0x0._s_0.Z;
              uVar7 = pdVar1[1];
              pdVar4 = &this->CachedBounds[uVar20].Value.BoxExtent.field0_0x0._s_0.Z;
              *pdVar4 = *pdVar1;
              pdVar4[1] = (double)uVar7;
              if ((this->CachedBounds[uVar20].bIsValid == false) &&
                 (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<5138689870130053248>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\InstancedStaticMeshComponent.h"
                                      ,0x80,"!bCheckValid || bIsValid"), bVar11)) {
                pcVar5 = (code *)swi(3);
                pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
                return pTVar15;
              }
              goto LAB_147d09bff;
            }
            uVar18 = (ulonglong)(iVar17 + 1);
            uVar16 = uVar16 + 1;
            puVar13 = puVar13 + 0x10;
          } while ((longlong)uVar16 < 3);
          pTVar14 = CalcBoundsImpl(this,&local_e8,param_1,(TBox<double> *)local_b0);
          this->CachedBounds[uVar20].bIsValid = true;
          dVar6 = (pTVar14->Origin).field0_0x0._s_0.Y;
          pTVar15 = &this->CachedBounds[uVar20].Value;
          (pTVar15->Origin).field0_0x0._s_0.X = (pTVar14->Origin).field0_0x0._s_0.X;
          (pTVar15->Origin).field0_0x0._s_0.Y = dVar6;
          dVar6 = (pTVar14->BoxExtent).field0_0x0._s_0.X;
          pdVar1 = &this->CachedBounds[uVar20].Value.Origin.field0_0x0._s_0.Z;
          *pdVar1 = (pTVar14->Origin).field0_0x0._s_0.Z;
          pdVar1[1] = dVar6;
          dVar6 = (pTVar14->BoxExtent).field0_0x0._s_0.Z;
          pdVar1 = &this->CachedBounds[uVar20].Value.BoxExtent.field0_0x0._s_0.Y;
          *pdVar1 = (pTVar14->BoxExtent).field0_0x0._s_0.Y;
          pdVar1[1] = dVar6;
          this->CachedBounds[uVar20].Value.SphereRadius = pTVar14->SphereRadius;
          this->CachedBounds[uVar20].Hash = uVar19;
        }
LAB_147d09bff:
        pTVar15 = &this->CachedBounds[uVar20].Value;
        dVar6 = (pTVar15->Origin).field0_0x0._s_0.Y;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar15->Origin).field0_0x0._s_0.X;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar6;
        pdVar1 = &this->CachedBounds[uVar20].Value.Origin.field0_0x0._s_0.Z;
        dVar6 = pdVar1[1];
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = *pdVar1;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar6;
        pdVar1 = &this->CachedBounds[uVar20].Value.BoxExtent.field0_0x0._s_0.Y;
        dVar6 = pdVar1[1];
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = *pdVar1;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar6;
        __return_storage_ptr__->SphereRadius = this->CachedBounds[uVar20].Value.SphereRadius;
        return __return_storage_ptr__;
      }
    }
  }
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar6 = (param_1->Translation).ZW.m128d_f64[0];
  dVar8 = (param_1->Translation).XY.m128d_f64[0];
  dVar9 = (param_1->Translation).XY.m128d_f64[1];
  acStack_98._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  acStack_98._12_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar22 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  if (param_2 == Navigation) {
    this->CachedBounds[1].Value.Origin.field0_0x0._s_0.X = dVar8;
    this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Y = dVar9;
    this->CachedBounds[1].bIsValid = true;
    this->CachedBounds[1].Value.Origin.field0_0x0._s_0.Z = dVar6;
    this->CachedBounds[1].Value.BoxExtent.field0_0x0._s_0.X = (double)uVar7;
    this->CachedBounds[1].Hash = 0;
    *(undefined4 *)((longlong)&this->CachedBounds[1].Value.BoxExtent.field0_0x0 + 8) =
         acStack_98._8_4_;
    *(undefined4 *)((longlong)&this->CachedBounds[1].Value.BoxExtent.field0_0x0 + 0xc) =
         acStack_98._12_4_;
    *(undefined4 *)((longlong)&this->CachedBounds[1].Value.BoxExtent.field0_0x0 + 0x10) = uVar21;
    *(undefined4 *)((longlong)&this->CachedBounds[1].Value.BoxExtent.field0_0x0 + 0x14) = uVar22;
    this->CachedBounds[1].Value.SphereRadius = 0.0;
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar8;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar9;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar6;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (double)uVar7;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = acStack_98._8_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0xc) =
       acStack_98._12_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x10) = uVar21;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 0x14) = uVar22;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// GetOrCreateInstanceDataSceneProxy @ 147d09df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FISMCInstanceDataSceneProxy,1> * __thiscall
UInstancedStaticMeshComponent::GetOrCreateInstanceDataSceneProxy
          (UInstancedStaticMeshComponent *this,
          TSharedPtr<FISMCInstanceDataSceneProxy,1> *__return_storage_ptr__)

{
  FSceneInterface *pFVar1;
  
  pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
  if (pFVar1 != (FSceneInterface *)0x0) {
    FPrimitiveInstanceDataManager::GetOrCreateProxy
              (&this->PrimitiveInstanceDataManager,__return_storage_ptr__,pFVar1->FeatureLevel);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FISMCInstanceDataSceneProxy *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPhysicsObjectById @ 147d0baf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPhysicsObject * __thiscall
UInstancedStaticMeshComponent::GetPhysicsObjectById(UInstancedStaticMeshComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPhysicsObject *pFVar4;
  FSingleParticlePhysicsProxy *pFVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar7 = (uint)~param_1 >> 0x1f;
    uVar3 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar3 = uVar7;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPhysicsObject *)(*pcVar1)();
      return pFVar4;
    }
    if (*(longlong *)(this->_padding_ + lVar6 * 8) != 0) {
      uVar3 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPhysicsObject *)(*pcVar1)();
        return pFVar4;
      }
      pFVar5 = FBodyInstance::GetPhysicsActor(*(FBodyInstance **)(this->_padding_ + lVar6 * 8));
      if (pFVar5 != (FSingleParticlePhysicsProxy *)0x0) {
        uVar3 = 0;
        if (param_1 < (int)this->_padding_) {
          uVar3 = uVar7;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FPhysicsObject *)(*pcVar1)();
          return pFVar4;
        }
        pFVar5 = FBodyInstance::GetPhysicsActor(*(FBodyInstance **)(this->_padding_ + lVar6 * 8));
        return (pFVar5->Reference).Ptr;
      }
    }
  }
  return (FPhysicsObject *)0x0;
}

// GetRenderIndex @ 147d0cef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
UInstancedStaticMeshComponent::GetRenderIndex(UInstancedStaticMeshComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->InstanceReorderTable).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->InstanceReorderTable).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->InstanceReorderTable).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return param_1;
}

// GetRenderMatrix @ 147d0cf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TMatrix<double> * __thiscall
UInstancedStaticMeshComponent::GetRenderMatrix
          (UInstancedStaticMeshComponent *this,TMatrix<double> *__return_storage_ptr__)

{
  double *pdVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  pdVar1 = (double *)(**(code **)(this->_padding_ + 0xc58))(this,local_f8);
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_78.Translation.XY.m128d_f64[0] = *pdVar1;
  local_78.Translation.XY.m128d_f64[1] = pdVar1[1];
  local_78.Translation.ZW.m128d_f64[0] = pdVar1[2];
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78.Rotation.XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
  local_78.Rotation.XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
  local_78.Rotation.ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
  local_78.Rotation.ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
  local_78.Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
  local_78.Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
  local_78.Scale3D.ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
  local_78.Scale3D.ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_d8,&local_78,(TTransform<double> *)&this->_padding_)
  ;
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_d8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 147d0da80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::GetResourceSizeEx
          (UInstancedStaticMeshComponent *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  UPrimitiveComponent::GetResourceSizeEx((UPrimitiveComponent *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->InstanceBodies).ArrayMax << 3);
  uVar7 = 0;
  if (0 < (this->InstanceBodies).ArrayNum) {
    lVar5 = 0;
    do {
      uVar6 = ~uVar7 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar7 < (this->InstanceBodies).ArrayNum) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)((this->InstanceBodies).AllocatorInstance.Data + lVar5 * 8) != 0) {
        uVar3 = 0;
        if ((int)uVar7 < (this->InstanceBodies).ArrayNum) {
          uVar3 = uVar6;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar2 = FBodyInstance::IsValidBodyInstance
                          (*(FBodyInstance **)
                            ((this->InstanceBodies).AllocatorInstance.Data + lVar5 * 8));
        if (bVar2) {
          uVar3 = 0;
          if ((int)uVar7 < (this->InstanceBodies).ArrayNum) {
            uVar3 = uVar6;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FBodyInstance::GetBodyInstanceResourceSizeEx
                    (*(FBodyInstance **)((this->InstanceBodies).AllocatorInstance.Data + lVar5 * 8),
                     param_1);
        }
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1;
    } while ((int)uVar7 < (this->InstanceBodies).ArrayNum);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->PerInstanceSMData).ArrayMax << 7);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->PerInstanceSMCustomData).ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->InstanceReorderTable).ArrayMax << 2);
  uVar4 = FPrimitiveInstanceDataManager::GetAllocatedSize(&this->PrimitiveInstanceDataManager);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar4);
  return;
}

// GetSMInstanceTransform @ 147d0dc70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::GetSMInstanceTransform
          (UInstancedStaticMeshComponent *this,FSMInstanceId *param_1,TTransform<double> *param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ISMComponent != (UInstancedStaticMeshComponent *)&this[-1]._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x171f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = GetInstanceTransform
                    ((UInstancedStaticMeshComponent *)&this[-1]._padding_,param_1->InstanceIndex,
                     param_2,param_3);
  return bVar2;
}

// GetStreamingRenderAssetInfo @ 147d0eac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::GetStreamingRenderAssetInfo
          (UInstancedStaticMeshComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  if (((this->PerInstanceSMData).ArrayNum < 1) && ((double)this->_padding_ <= 0.0)) {
    return;
  }
  UStaticMeshComponent::GetStreamingRenderAssetInfo((UStaticMeshComponent *)this,param_1,param_2);
  return;
}

// GetTextureStreamingTransformScale @ 147d0f760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

float __thiscall
UInstancedStaticMeshComponent::GetTextureStreamingTransformScale
          (UInstancedStaticMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  
  if ((this->PerInstanceSMData).ArrayNum < 1) {
    return __real_3f800000;
  }
  fVar18 = UStaticMeshComponent::GetTextureStreamingTransformScale((UStaticMeshComponent *)this);
  uVar16 = 0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  if (0 < (this->PerInstanceSMData).ArrayNum) {
    lVar17 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar16 < (this->PerInstanceSMData).ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        fVar18 = (float)(*pcVar11)();
        return fVar18;
      }
      pFVar10 = (this->PerInstanceSMData).AllocatorInstance.Data;
      uVar16 = uVar16 + 1;
      lVar2 = lVar17 + 0x40;
      lVar3 = lVar17 + 0x20;
      lVar4 = lVar17 + 0x28;
      lVar5 = lVar17 + 0x30;
      lVar6 = lVar17 + 0x48;
      lVar7 = lVar17 + 0x50;
      pFVar1 = pFVar10 + lVar17;
      lVar8 = lVar17 + 8;
      lVar9 = lVar17 + 0x10;
      lVar17 = lVar17 + 0x80;
      auVar19._0_8_ = *(double *)(pFVar10 + lVar3) * *(double *)(pFVar10 + lVar3);
      auVar19._8_8_ = 0;
      dVar13 = *(double *)(pFVar10 + lVar4) * *(double *)(pFVar10 + lVar4) + auVar19._0_8_ +
               *(double *)(pFVar10 + lVar5) * *(double *)(pFVar10 + lVar5);
      dVar21 = *(double *)(pFVar10 + lVar6) * *(double *)(pFVar10 + lVar6) +
               *(double *)(pFVar10 + lVar2) * *(double *)(pFVar10 + lVar2) +
               *(double *)(pFVar10 + lVar7) * *(double *)(pFVar10 + lVar7);
      if (dVar13 <= dVar21) {
        dVar13 = dVar21;
      }
      dVar21 = *(double *)(pFVar10 + lVar8) * *(double *)(pFVar10 + lVar8) +
               *(double *)pFVar1 * *(double *)pFVar1 +
               *(double *)(pFVar10 + lVar9) * *(double *)(pFVar10 + lVar9);
      if (dVar13 <= dVar21) {
        dVar13 = dVar21;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar13;
      auVar19 = sqrtpd(auVar19,auVar12);
      fVar20 = (float)auVar19._0_8_;
      fVar23 = fVar23 + fVar20;
      fVar22 = fVar22 + fVar20 * fVar20;
    } while ((int)uVar16 < (this->PerInstanceSMData).ArrayNum);
    if (__real_322bcc77 < fVar23) {
      fVar18 = fVar18 * (fVar22 / fVar23);
    }
  }
  return fVar18;
}

// GetTranslatedInstanceSpaceOrigin @ 147d0f940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TVector<double> * __thiscall
UInstancedStaticMeshComponent::GetTranslatedInstanceSpaceOrigin
          (UInstancedStaticMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// InitInstanceBody @ 147d16690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::InitInstanceBody
          (UInstancedStaticMeshComponent *this,int param_1,FBodyInstance *param_2,
          FBodyInstance *param_3,bool param_4,UBodySetup *param_5)

{
  UObject *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UWorld *pUVar6;
  undefined1 auStackY_198 [32];
  undefined4 local_158;
  FName local_154;
  FName local_14c;
  FString local_140;
  FString local_130;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158 = 0;
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UObject *)0x0) {
LAB_147d168ae:
      if ((byte)LogStaticMesh._0_1_ < 3) {
        return;
      }
      lVar2 = this->_padding_;
      if (lVar2 != 0) {
        local_154 = *(FName *)(lVar2 + 0x18);
        ::FName::ToString(&local_154,&local_130);
      }
      local_14c = (FName)this->_padding_;
      ::FName::ToString(&local_14c,&local_140);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (lVar2 == 0) {
        return;
      }
      if (local_130.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
      return;
    }
    UE::GC::MarkAsReachable(pUVar1);
  }
  else if (pUVar1 == (UObject *)0x0) goto LAB_147d168ae;
  if (((this->PerInstanceSMData).ArrayNum <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceIdx < PerInstanceSMData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xb15,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->InstanceBodies).ArrayNum <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceIdx < InstanceBodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xb16,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == (FBodyInstance *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceBodyInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xb17,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_3 == (FBodyInstance *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReferenceBodyInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xb18,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_5 == (UBodySetup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BodySetup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xb19,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = 0;
  if (param_1 < (this->PerInstanceSMData).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Math::TTransform<double>::SetFromMatrix
            (&local_b8,
             (TMatrix<double> *)
             ((this->PerInstanceSMData).AllocatorInstance.Data + (longlong)param_1 * 0x80));
  local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_118.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_118,&local_b8,(TTransform<double> *)&this->_padding_);
  if (param_4) {
    FBodyInstance::CopyRuntimeBodyInstancePropertiesFrom(param_2,param_3);
  }
  else {
    FBodyInstance::CopyBodyInstancePropertiesFrom(param_2,param_3);
  }
  *(byte *)&param_2->_padding_ = (byte)param_2->_padding_ & 0xde;
  param_2->InstanceBodyIndex = param_1;
  FInitBodySpawnParams::FInitBodySpawnParams
            ((FInitBodySpawnParams *)&local_158,(UPrimitiveComponent *)0x0);
  pUVar6 = (UWorld *)this->_padding_;
  if (pUVar6 == (UWorld *)0x0) {
    pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  FBodyInstance::InitBody
            (param_2,param_5,&local_118,(UPrimitiveComponent *)this,pUVar6->PhysicsScene,
             (FInitBodySpawnParams *)&local_158,(IPhysicsBodyInstanceOwner *)0x0);
  return;
}

// InitInstanceBody @ 147d169f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::InitInstanceBody
          (UInstancedStaticMeshComponent *this,int param_1,FBodyInstance *param_2)

{
  UBodySetup *pUVar1;
  
  pUVar1 = (UBodySetup *)(**(code **)(this->_padding_ + 0x800))();
  InitInstanceBody(this,param_1,param_2,(FBodyInstance *)&this->_padding_,false,pUVar1);
  return;
}

// InitializeInstancingRandomSeed @ 147d19c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::InitializeInstancingRandomSeed
          (UInstancedStaticMeshComponent *this,bool param_1)

{
  int iVar1;
  int iVar2;
  UInstancedStaticMeshComponent *local_res8;
  
  local_res8 = this;
  if (param_1) {
    iVar1 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>::
            operator()(&local_res8);
    while ((this->InstancingRandomSeed == 0 || (this->InstancingRandomSeed == iVar1))) {
      iVar2 = rand();
      this->InstancingRandomSeed = iVar2;
    }
  }
  else if (this->InstancingRandomSeed == 0) {
    iVar1 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>::
            operator()(&local_res8);
    this->InstancingRandomSeed = iVar1;
    return;
  }
  return;
}

// InvalidateCachedBounds @ 147d19f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::InvalidateCachedBounds(UInstancedStaticMeshComponent *this)

{
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[2].bIsValid = false;
  return;
}

// InvalidateInstanceDataTracking @ 147d19fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::InvalidateInstanceDataTracking(UInstancedStaticMeshComponent *this)

{
  FPrimitiveInstanceDataManager::Invalidate
            (&this->PrimitiveInstanceDataManager,(this->PerInstanceSMData).ArrayNum);
  return;
}

// IsHLODRelevant @ 147d1a390

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UInstancedStaticMeshComponent::IsHLODRelevant(UInstancedStaticMeshComponent *this)

{
  bool bVar1;
  
  if ((this->PerInstanceSMData).ArrayNum == 0) {
    return false;
  }
  bVar1 = UStaticMeshComponent::IsHLODRelevant((UStaticMeshComponent *)this);
  return bVar1;
}

// IsInstanceSelected @ 147d1a3e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::IsInstanceSelected(UInstancedStaticMeshComponent *this,int param_1)

{
  return false;
}

// IsNavigationRelevant @ 147d1a410

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::IsNavigationRelevant(UInstancedStaticMeshComponent *this)

{
  bool bVar1;
  
  if (0 < (this->PerInstanceSMData).ArrayNum) {
    bVar1 = UStaticMeshComponent::IsNavigationRelevant((UStaticMeshComponent *)this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsValidId @ 147d1a660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::IsValidId
          (UInstancedStaticMeshComponent *this,FPrimitiveInstanceId param_1)

{
  bool bVar1;
  
  bVar1 = FInstanceIdIndexMap::IsValidId
                    ((FInstanceIdIndexMap *)&this->PrimitiveInstanceDataManager,param_1);
  return bVar1;
}

// IsValidInstance @ 147d1a690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::IsValidInstance(UInstancedStaticMeshComponent *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->PerInstanceSMData).ArrayNum)) {
    return true;
  }
  return false;
}

// LineTraceComponent @ 147d1a6c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::LineTraceComponent
          (UInstancedStaticMeshComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionQueryParams *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FHitResult *pFVar10;
  UWorld *pUVar11;
  FHitResult *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  float fVar16;
  undefined1 local_res8 [8];
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_168;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  FHitResult local_148;
  
  fVar16 = __real_7f7fffff;
  bVar15 = false;
  memset(&local_148,0,0x100);
  pFVar14 = (this->InstanceBodies).AllocatorInstance.Data;
  iVar9 = (this->InstanceBodies).ArrayNum;
  uStack_14b = 0;
  uStack_149 = 0;
  local_158 = 0;
  pFVar1 = pFVar14 + (longlong)iVar9 * 8;
  uStack_14c = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_150 = 0xffffffff;
  local_148.HitObjectHandle.InstanceIndex = -1;
  local_148.HitObjectHandle.ResolutionStatus = Invalid;
  local_148.HitObjectHandle._29_3_ = 0;
  local_148.Time = 1.0;
  local_148.MyItem = -1;
  local_148.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  while( true ) {
    if ((this->InstanceBodies).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar1) break;
    if (((*(FBodyInstance **)pFVar14 != (FBodyInstance *)0x0) &&
        (bVar8 = FBodyInstance::LineTrace
                           (*(FBodyInstance **)pFVar14,&local_148,param_2,param_3,
                            param_4->bTraceComplex,param_4->bReturnPhysicalMaterial), bVar8)) &&
       (bVar15 = true, local_148.Time < fVar16)) {
      lVar13 = 2;
      pFVar10 = param_1;
      pFVar12 = &local_148;
      do {
        fVar16 = pFVar12->Time;
        fVar6 = pFVar12->Distance;
        iVar7 = pFVar12->_padding_;
        uVar2 = *(undefined8 *)&pFVar12->Location;
        uVar3 = *(undefined8 *)&(pFVar12->Location).field_0x8;
        pFVar10->FaceIndex = pFVar12->FaceIndex;
        pFVar10->Time = fVar16;
        pFVar10->Distance = fVar6;
        pFVar10->_padding_ = iVar7;
        uVar4 = *(undefined8 *)&(pFVar12->Location).field_0x10;
        uVar5 = *(undefined8 *)&pFVar12->ImpactPoint;
        *(undefined8 *)&pFVar10->Location = uVar2;
        *(undefined8 *)&(pFVar10->Location).field_0x8 = uVar3;
        uVar2 = *(undefined8 *)&(pFVar12->ImpactPoint).field_0x8;
        uVar3 = *(undefined8 *)&(pFVar12->ImpactPoint).field_0x10;
        *(undefined8 *)&(pFVar10->Location).field_0x10 = uVar4;
        *(undefined8 *)&pFVar10->ImpactPoint = uVar5;
        uVar4 = *(undefined8 *)&pFVar12->Normal;
        uVar5 = *(undefined8 *)&(pFVar12->Normal).field_0x8;
        *(undefined8 *)&(pFVar10->ImpactPoint).field_0x8 = uVar2;
        *(undefined8 *)&(pFVar10->ImpactPoint).field_0x10 = uVar3;
        uVar2 = *(undefined8 *)&(pFVar12->Normal).field_0x10;
        uVar3 = *(undefined8 *)&pFVar12->ImpactNormal;
        *(undefined8 *)&pFVar10->Normal = uVar4;
        *(undefined8 *)&(pFVar10->Normal).field_0x8 = uVar5;
        uVar4 = *(undefined8 *)&(pFVar12->ImpactNormal).field_0x8;
        uVar5 = *(undefined8 *)&(pFVar12->ImpactNormal).field_0x10;
        *(undefined8 *)&(pFVar10->Normal).field_0x10 = uVar2;
        *(undefined8 *)&pFVar10->ImpactNormal = uVar3;
        uVar2 = *(undefined8 *)&pFVar12->TraceStart;
        uVar3 = *(undefined8 *)&(pFVar12->TraceStart).field_0x8;
        *(undefined8 *)&(pFVar10->ImpactNormal).field_0x8 = uVar4;
        *(undefined8 *)&(pFVar10->ImpactNormal).field_0x10 = uVar5;
        *(undefined8 *)&pFVar10->TraceStart = uVar2;
        *(undefined8 *)&(pFVar10->TraceStart).field_0x8 = uVar3;
        lVar13 = lVar13 + -1;
        pFVar10 = (FHitResult *)&(pFVar10->TraceStart).field_0x10;
        pFVar12 = (FHitResult *)&(pFVar12->TraceStart).field_0x10;
        fVar16 = local_148.Time;
      } while (lVar13 != 0);
    }
    pFVar14 = pFVar14 + 8;
  }
  pUVar11 = (UWorld *)this->_padding_;
  if ((pUVar11 == (UWorld *)0x0) &&
     (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar11 == (UWorld *)0x0)) {
    return bVar15;
  }
  if (((pUVar11->bDebugDrawAllTraceTags != false) ||
      ((pUVar11->DebugDrawTraceTag != (FName)0x0 &&
       (pUVar11->DebugDrawTraceTag == param_4->TraceTag)))) && (bVar8 = IsInGameThread(), bVar8)) {
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    if (bVar15 != false) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,8,&local_168.AllocatorInstance,&local_168.ArrayMax);
      local_168.ArrayNum = iVar9 + 1;
      FHitResult::FHitResult
                ((FHitResult *)(local_168.AllocatorInstance.Data + (longlong)iVar9 * 0x100),param_1)
      ;
    }
    fVar16 = DebugLineLifetime;
    pUVar11 = (UWorld *)this->_padding_;
    if (pUVar11 == (UWorld *)0x0) {
      pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    DrawLineTraces(pUVar11,param_2,param_3,&local_168,fVar16);
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
  }
  return bVar15;
}

// MakeInstanceDataFlags @ 147d1aad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstanceDataFlags __thiscall
UInstancedStaticMeshComponent::MakeInstanceDataFlags
          (UInstancedStaticMeshComponent *this,bool param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  undefined7 in_register_00000011;
  ushort *puVar6;
  char in_R9B;
  
  puVar6 = (ushort *)CONCAT71(in_register_00000011,param_1);
  if ((in_R9B == '\0') || (this->NumCustomDataFloats == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
  }
  iVar2 = (this->PerInstancePrevTransform).ArrayNum;
  uVar5 = (ushort)FReadOnlyCVARCache::bAllowStaticLighting << 4 | (ushort)param_2 | uVar5;
  if ((iVar2 < 1) || (iVar2 != (this->PerInstanceSMData).ArrayNum)) {
    *puVar6 = uVar5;
  }
  else {
    cVar1 = *(char *)((longlong)&this->_padding_ + 3);
    *puVar6 = uVar5 | 4;
    if (cVar1 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Flags.bHasPerInstanceDynamicData || Mobility != EComponentMobility::Static"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0x14d9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (FInstanceDataFlags)uVar5;
      }
    }
  }
  return (FInstanceDataFlags)(ushort)puVar6;
}

// NotifySMInstanceMovementEnded @ 147d1b740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::NotifySMInstanceMovementEnded
          (UInstancedStaticMeshComponent *this,FSMInstanceId *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ISMComponent != (UInstancedStaticMeshComponent *)&this[-1]._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x1735,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// NotifySMInstanceMovementOngoing @ 147d1b790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::NotifySMInstanceMovementOngoing
          (UInstancedStaticMeshComponent *this,FSMInstanceId *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ISMComponent != (UInstancedStaticMeshComponent *)&this[-1]._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x1730,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// NotifySMInstanceMovementStarted @ 147d1b7e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::NotifySMInstanceMovementStarted
          (UInstancedStaticMeshComponent *this,FSMInstanceId *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ISMComponent != (UInstancedStaticMeshComponent *)&this[-1]._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x172b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// NotifySMInstanceSelectionChanged @ 147d1b830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::NotifySMInstanceSelectionChanged
          (UInstancedStaticMeshComponent *this,FSMInstanceId *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ISMComponent != (UInstancedStaticMeshComponent *)&this[-1]._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x173a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnAsyncDestroyPhysicsState @ 147d1b8c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::OnAsyncDestroyPhysicsState
          (UInstancedStaticMeshComponent *this,FTimeout *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FBodyInstance *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3010,
               "UInstancedStaticMeshComponent::OnAsyncDestroyPhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0xbc2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3010);
  }
  if ((*(int *)((longlong)&(this->CachedConservativeInstanceBounds).Max.field0_0x0 + 8) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceBodies.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xbc5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pdVar8 = &(this->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.Y;
  puVar7 = (undefined8 *)*pdVar8;
  iVar3 = *(int *)((longlong)&(this->CachedConservativeInstanceBounds).Min.field0_0x0 + 0x10);
  puVar2 = puVar7 + iVar3;
  while( true ) {
    if (*(int *)((longlong)&(this->CachedConservativeInstanceBounds).Min.field0_0x0 + 0x10) != iVar3
       ) {
      `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar7 == puVar2) break;
    if ((FBodyInstance *)*puVar7 != (FBodyInstance *)0x0) {
      FBodyInstance::TermBody((FBodyInstance *)*puVar7,false);
      this_00 = (FBodyInstance *)*puVar7;
      if (this_00 != (FBodyInstance *)0x0) {
        FBodyInstance::~FBodyInstance(this_00);
        ::operator_delete(this_00,400);
      }
    }
    puVar7 = puVar7 + 1;
  }
  piVar1 = (int *)((longlong)&(this->CachedConservativeInstanceBounds).Min.field0_0x0 + 0x14);
  *(undefined4 *)((longlong)&(this->CachedConservativeInstanceBounds).Min.field0_0x0 + 0x10) = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pdVar8,0,piVar1);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// OnAsyncDestroyPhysicsStateBegin_GameThread @ 147d1ba20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::OnAsyncDestroyPhysicsStateBegin_GameThread
          (UInstancedStaticMeshComponent *this)

{
  byte *pbVar1;
  TVector<double> *pTVar2;
  double *pdVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  
  UActorComponent::OnAsyncDestroyPhysicsStateBegin_GameThread((UActorComponent *)this);
  if (*(int *)((longlong)&(this->CachedConservativeInstanceBounds).Min.field0_0x0 + 0x10) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncDestroyPhysicsStatePayload.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0xbba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = &(this->CachedConservativeInstanceBounds).Max;
  pdVar3 = &(this->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.Y;
  if ((TVector<double> *)pdVar3 != pTVar2) {
    if ((void *)*pdVar3 != (void *)0x0) {
      FMemory::Free((void *)*pdVar3);
    }
    *pdVar3 = (pTVar2->field0_0x0)._s_0.X;
    (pTVar2->field0_0x0)._s_0.X = 0.0;
    *(undefined4 *)((longlong)&(this->CachedConservativeInstanceBounds).Min.field0_0x0 + 0x10) =
         *(undefined4 *)((longlong)&(this->CachedConservativeInstanceBounds).Max.field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->CachedConservativeInstanceBounds).Min.field0_0x0 + 0x14) =
         *(undefined4 *)((longlong)&(this->CachedConservativeInstanceBounds).Max.field0_0x0 + 0xc);
    (this->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Y = 0.0;
  }
  cVar6 = (**(code **)((longlong)this[-1].CachedBounds[2].Value.Origin.field0_0x0._s_0.Z + 0x4e0))
                    ((undefined1 *)
                     ((longlong)&this[-1].CachedBounds[2].Value.Origin.field0_0x0 + 0x10));
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 ^ (cVar6 << 6 ^ *(byte *)((longlong)&this->_padding_ + 2)) & 0x40;
  return;
}

// OnCreatePhysicsState @ 147d1bae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::OnCreatePhysicsState(UInstancedStaticMeshComponent *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UWorld *pUVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2964,"UInstancedStaticMeshComponent::OnCreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0xb94);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2964);
  }
  if (((this->InstanceBodies).ArrayNum != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceBodies.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xb95,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = (UWorld *)this->_padding_;
  if (pUVar5 == (UWorld *)0x0) {
    pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (pUVar5->PhysicsScene != (FPhysScene_Chaos *)0x0) {
    CreateAllInstanceBodies(this);
    UActorComponent::OnCreatePhysicsState((UActorComponent *)this);
    cVar4 = (**(code **)(this->_padding_ + 0x4e0))(this);
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    *(byte *)((longlong)&this->_padding_ + 2) = (cVar4 << 6 ^ bVar1) & 0x40 ^ bVar1;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnDestroyPhysicsState @ 147d1bbd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::OnDestroyPhysicsState(UInstancedStaticMeshComponent *this)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2986,"UInstancedStaticMeshComponent::OnDestroyPhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0xbaa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2986);
  }
  UActorComponent::OnDestroyPhysicsState((UActorComponent *)this);
  ClearAllInstanceBodies(this);
  cVar2 = (**(code **)(this->_padding_ + 0x4e0))(this);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  *(byte *)((longlong)&this->_padding_ + 2) = (cVar2 << 6 ^ bVar1) & 0x40 ^ bVar1;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnPostLoadPerInstanceData @ 147d1c130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::OnPostLoadPerInstanceData(UInstancedStaticMeshComponent *this)

{
  UWorld *this_00;
  int iVar1;
  ULevel *pUVar2;
  ULevel *pUVar3;
  bool bVar4;
  UInstancedStaticMeshComponent *local_res8;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5407,
               "UInstancedStaticMeshComponent::OnPostLoadPerInstanceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x151f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5407);
  }
  if (((this->_padding_ & 0x30) == 0) && (local_res8 = this, this->InstancingRandomSeed == 0)) {
    iVar1 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>::
            operator()(&local_res8);
    this->InstancingRandomSeed = iVar1;
  }
  if (((((AActor *)this->_padding_ != (AActor *)0x0) &&
       (pUVar2 = AActor::GetLevel((AActor *)this->_padding_), pUVar2 != (ULevel *)0x0)) &&
      (this_00 = (pUVar2->OwningWorld).field0_0x0.DebugPtr, this_00 != (UWorld *)0x0)) &&
     ((pUVar3 = UWorld::GetActiveLightingScenario(this_00), pUVar3 != (ULevel *)0x0 &&
      (pUVar3 != pUVar2)))) {
    FPrimitiveInstanceDataManager::BakedLightingDataChangedAll(&this->PrimitiveInstanceDataManager);
  }
  if (!bVar4) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// OnRegister @ 147d1c6d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UInstancedStaticMeshComponent::OnRegister(UInstancedStaticMeshComponent *this)

{
  longlong lVar1;
  double dVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  bool bVar8;
  UInstancedStaticMeshComponent *local_res8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5060,"UInstancedStaticMeshComponent::OnRegister()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x13c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5060);
  }
  UStaticMeshComponent::OnRegister((UStaticMeshComponent *)this);
  pvVar3 = ThreadLocalStoragePointer;
  dVar2 = (double)this->_padding_;
  uVar7 = (ulonglong)_tls_index;
  (this->PreviousComponentTransform).Rotation.XY.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar7 * 8);
  (this->PreviousComponentTransform).Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Translation.XY.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Translation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Scale3D.XY.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar6 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar6,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((this->_padding_ & 0x30) == 0)) {
    local_res8 = this;
    if (this->InstancingRandomSeed == 0) {
      iVar5 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>::
              operator()(&local_res8);
      this->InstancingRandomSeed = iVar5;
    }
    FPrimitiveInstanceDataManager::OnRegister
              (&this->PrimitiveInstanceDataManager,(this->PerInstanceSMData).ArrayNum);
  }
  if (((this->_padding_ & 0x400000) != 0) &&
     (cVar4 = (**(code **)(this->_padding_ + 0xc88))(this), cVar4 != '\0')) {
    PartialNavigateUpdateForCurrentInstances(this);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUnregister @ 147d1c880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UInstancedStaticMeshComponent::OnUnregister(UInstancedStaticMeshComponent *this)

{
  char cVar1;
  
  if ((this->_padding_ & 0x400000) != 0) {
    cVar1 = (**(code **)(this->_padding_ + 0xc88))();
    if (cVar1 != '\0') {
      PartialNavigateUpdateForCurrentInstances(this);
    }
  }
  UStaticMeshComponent::OnUnregister((UStaticMeshComponent *)this);
  return;
}

// OnUpdateTransform @ 147d1c8c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::OnUpdateTransform
          (UInstancedStaticMeshComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  UPrimitiveComponent::OnUpdateTransform
            ((UPrimitiveComponent *)this,param_1 | SkipPhysicsUpdate,param_2);
  UpdateComponentTransform(this,param_1,param_2);
  return;
}

// OverlapComponent @ 147d1cdd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::OverlapComponent
          (UInstancedStaticMeshComponent *this,TVector<double> *param_1,TQuat<double> *param_2,
          FCollisionShape *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->InstanceBodies).AllocatorInstance.Data;
  iVar2 = (this->InstanceBodies).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InstanceBodies).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FBodyInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(FBodyInstance **)pFVar4 != (FBodyInstance *)0x0) &&
       (bVar3 = FBodyInstance::OverlapTest
                          (*(FBodyInstance **)pFVar4,param_1,param_2,param_3,(FMTDResult *)0x0,false
                          ), bVar3)) {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// PartialNavigateUpdateForCurrentInstances @ 147d1d0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::PartialNavigateUpdateForCurrentInstances
          (UInstancedStaticMeshComponent *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_118;
  undefined8 local_110;
  undefined8 local_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  cVar2 = (**(code **)(this->_padding_ + 0x4e0))();
  if (cVar2 != '\0') {
    uVar4 = (this->PerInstanceSMData).ArrayNum;
    if (uVar4 != 0) {
      uVar7 = 0;
      local_118.Data = (FScriptContainerElement *)0x0;
      local_110 = 0;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if (0 < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar4,&local_118,0,(int *)((longlong)&local_110 + 4));
      }
      if (0 < (this->PerInstanceSMData).ArrayNum) {
        do {
          uVar4 = 0;
          if ((int)uVar7 < (this->PerInstanceSMData).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UE::Math::TTransform<double>::SetFromMatrix
                    (&local_88,
                     (TMatrix<double> *)
                     ((this->PerInstanceSMData).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x80
                     ));
          local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_e8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_e8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_e8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_e8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_e8,&local_88,(TTransform<double> *)&this->_padding_);
          if (((local_118.Data <= &local_e8) &&
              (&local_e8 < (TTransform<double> *)(local_118.Data + (longlong)local_110._4_4_ * 0x60)
              )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = (int)local_110;
          if ((int)local_110 == local_110._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&local_118,(int *)((longlong)&local_110 + 4));
          }
          local_110 = CONCAT44(local_110._4_4_,iVar5 + 1);
          uVar7 = uVar7 + 1;
          lVar6 = (longlong)iVar5 * 0x60;
          *(double *)(local_118.Data + lVar6) = local_e8.Rotation.XY.m128d_f64[0];
          *(double *)(local_118.Data + lVar6 + 8) = local_e8.Rotation.XY.m128d_f64[1];
          *(double *)(local_118.Data + lVar6 + 0x10) = local_e8.Rotation.ZW.m128d_f64[0];
          *(double *)(local_118.Data + lVar6 + 0x10 + 8) = local_e8.Rotation.ZW.m128d_f64[1];
          *(double *)(local_118.Data + lVar6 + 0x20) = local_e8.Translation.XY.m128d_f64[0];
          *(double *)(local_118.Data + lVar6 + 0x20 + 8) = local_e8.Translation.XY.m128d_f64[1];
          *(double *)(local_118.Data + lVar6 + 0x30) = local_e8.Translation.ZW.m128d_f64[0];
          *(double *)(local_118.Data + lVar6 + 0x30 + 8) = local_e8.Translation.ZW.m128d_f64[1];
          *(double *)(local_118.Data + lVar6 + 0x40) = local_e8.Scale3D.XY.m128d_f64[0];
          *(double *)(local_118.Data + lVar6 + 0x40 + 8) = local_e8.Scale3D.XY.m128d_f64[1];
          *(double *)(local_118.Data + lVar6 + 0x50) = local_e8.Scale3D.ZW.m128d_f64[0];
          *(double *)(local_118.Data + lVar6 + 0x50 + 8) = local_e8.Scale3D.ZW.m128d_f64[1];
        } while ((int)uVar7 < (this->PerInstanceSMData).ArrayNum);
      }
      iVar5 = (int)local_110;
      pcVar1 = *(code **)(this->_padding_ + 0xc78);
      local_108 = (TTransform<double> *)local_118.Data;
      if (((int)local_110 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iStack_100 = iVar5;
      local_f8 = (undefined4)local_108;
      uStack_f4 = local_108._4_4_;
      iStack_f0 = iVar5;
      uStack_ec = uStack_fc;
      (*pcVar1)(this,&local_f8);
      if ((TTransform<double> *)local_118.Data != (TTransform<double> *)0x0) {
        FMemory::Free(local_118.Data);
      }
    }
  }
  return;
}

// PartialNavigationUpdate @ 147d1d570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::PartialNavigationUpdate
          (UInstancedStaticMeshComponent *this,int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined4 uStack_e0;
  TTransform<double> local_d8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5452,
               "UInstancedStaticMeshComponent::PartialNavigationUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x154c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5452);
  }
  cVar1 = (**(code **)(this->_padding_ + 0x4e0))(this);
  if (cVar1 != '\0') {
    local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_d8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar2 = GetInstanceTransform(this,param_1,&local_d8,true);
    if (bVar2) {
      local_e8 = &local_78;
      local_78 = local_d8.Rotation.XY.m128d_f64[0];
      dStack_70 = local_d8.Rotation.XY.m128d_f64[1];
      local_58 = local_d8.Translation.XY.m128d_f64[0];
      dStack_50 = local_d8.Translation.XY.m128d_f64[1];
      local_68 = local_d8.Rotation.ZW.m128d_f64[0];
      dStack_60 = local_d8.Rotation.ZW.m128d_f64[1];
      local_38 = local_d8.Scale3D.XY.m128d_f64[0];
      dStack_30 = local_d8.Scale3D.XY.m128d_f64[1];
      local_48 = local_d8.Translation.ZW.m128d_f64[0];
      dStack_40 = local_d8.Translation.ZW.m128d_f64[1];
      uStack_e0 = 1;
      local_28 = local_d8.Scale3D.ZW.m128d_f64[0]._0_4_;
      uStack_24 = local_d8.Scale3D.ZW.m128d_f64[0]._4_4_;
      uStack_20 = local_d8.Scale3D.ZW.m128d_f64[1]._0_4_;
      uStack_1c = local_d8.Scale3D.ZW.m128d_f64[1]._4_4_;
      (**(code **)(this->_padding_ + 0xc78))(this,&local_e8);
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PartialNavigationUpdates @ 147d1d710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::PartialNavigationUpdates
          (UInstancedStaticMeshComponent *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  char cVar5;
  bool bVar6;
  TMatrix<double> *pTVar7;
  TBox<double> *pTVar8;
  longlong lVar9;
  TTransform<double> *this_00;
  TTransform<double> *pTVar10;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1c8;
  int local_1c0;
  int iStack_1bc;
  TBox<double> *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TArrayView<UE::Math::TBox<double>_const_,int> local_1a8;
  TBoxSphereBounds<double,double> local_198;
  TVector<double>_u_0 local_160;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  TBox<double> local_128;
  undefined1 local_f0 [56];
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  cVar5 = (**(code **)(this->_padding_ + 0x4e0))();
  if (cVar5 == '\0') {
    return;
  }
  uVar2 = param_1->ArrayNum;
  if (uVar2 == 0) {
    return;
  }
  FInstancedStaticMeshComponentHelper::GetInstanceNavigationBounds<UInstancedStaticMeshComponent>
            (&local_128,this);
  pTVar4 = CVarISMInvalidateCachedNavigationBoundsOnPartialNavigationUpdates.Ref;
  if (local_128.IsValid == '\0') {
    return;
  }
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar9 = 4;
    if (!bVar6) goto LAB_147d1d7a9;
  }
  lVar9 = 0;
LAB_147d1d7a9:
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar9) != 0) {
    this->CachedBounds[1].bIsValid = false;
  }
  GetOrCalcBounds(this,&local_198,(TTransform<double> *)&this->_padding_,Navigation);
  this->bNavigationCachedBoundsUpdated = true;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  iStack_1bc = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar2,&local_1c8,0,&iStack_1bc);
  }
  this_00 = param_1->DataPtr;
  pTVar10 = this_00 + (int)uVar2;
  iVar1 = local_1c0;
  for (; local_1c0 = iVar1, this_00 != pTVar10; this_00 = this_00 + 1) {
    pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_b8);
    UE::Math::TBox<double>::TransformBy(&local_128,(TBox<double> *)&local_160._s_0,pTVar7);
    if (local_1c0 == iStack_1bc) {
      local_1c0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&local_1c8,&iStack_1bc);
    }
    iVar1 = local_1c0 + 1;
    lVar9 = (longlong)local_1c0 * 0x38;
    *(double *)(local_1c8.Data + lVar9) = local_160._s_0.X;
    *(double *)(local_1c8.Data + lVar9 + 8) = local_160._s_0.Y;
    *(double *)(local_1c8.Data + lVar9 + 0x10) = local_160._s_0.Z;
    *(undefined8 *)(local_1c8.Data + lVar9 + 0x10 + 8) = uStack_148;
    *(undefined8 *)(local_1c8.Data + lVar9 + 0x20) = local_140;
    *(undefined8 *)(local_1c8.Data + lVar9 + 0x20 + 8) = uStack_138;
    *(undefined8 *)(local_1c8.Data + lVar9 + 0x30) = local_130;
  }
  local_1b8 = (TBox<double> *)local_1c8.Data;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_1b0 = iVar1;
  pTVar8 = (TBox<double> *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_,local_f0);
  local_1a8._12_4_ = uStack_1ac;
  local_1a8.ArrayNum = iStack_1b0;
  local_1a8.DataPtr = local_1b8;
  FNavigationSystem::OnObjectBoundsChanged((UObject *)this,pTVar8,&local_1a8);
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  return;
}

// PostLoad @ 147d1dba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInstancedStaticMeshComponent::PostLoad(UInstancedStaticMeshComponent *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  undefined4 uVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ULevel *this_01;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iStack_70;
  FString local_68;
  FString local_58 [2];
  
  UStaticMeshComponent::PostLoad((UStaticMeshComponent *)this);
  this_01 = UActorComponent::GetComponentLevel((UActorComponent *)this);
  if ((this_01 != (ULevel *)0x0) && (bVar5 = ULevel::IsInstancedLevel(this_01), bVar5)) {
    this->CachedBounds[0].bIsValid = false;
    this->CachedBounds[1].bIsValid = false;
    this->CachedBounds[2].bIsValid = false;
  }
  iVar7 = (this->PerInstanceSMData).ArrayNum;
  this_00 = &this->PerInstanceSMCustomData;
  iVar6 = (this->PerInstanceSMCustomData).ArrayNum;
  if ((iVar7 * this->NumCustomDataFloats != iVar6) && (0 < iVar7)) {
    if (iVar6 == 0) {
      if (2 < (byte)LogStaticMesh._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                (this_00,this->NumCustomDataFloats * (this->PerInstanceSMData).ArrayNum);
    }
    else {
      if (2 < (byte)LogStaticMesh._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,local_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
        if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
        }
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      uVar4 = (this->PerInstanceSMCustomData).ArrayNum;
      iVar6 = (this->PerInstanceSMCustomData).ArrayNum / (this->PerInstanceSMData).ArrayNum;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->PerInstanceSMCustomData).ArrayNum = 0;
      (this->PerInstanceSMCustomData).ArrayMax = 0;
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                (this_00,this->NumCustomDataFloats * (this->PerInstanceSMData).ArrayNum);
      iVar7 = this->NumCustomDataFloats;
      if (iVar6 < this->NumCustomDataFloats) {
        iVar7 = iVar6;
      }
      iVar13 = 0;
      if (0 < (this->PerInstanceSMData).ArrayNum) {
        iVar12 = 0;
        do {
          iVar9 = 0;
          if (0 < iVar7) {
            pFVar10 = pFVar3 + (longlong)iVar12 * 4;
            do {
              uVar8 = 0;
              if (iVar12 + iVar9 < (int)uVar4) {
                uVar8 = (uint)~(iVar12 + iVar9) >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar1 = *(undefined4 *)pFVar10;
              uVar11 = iVar13 * this->NumCustomDataFloats + iVar9;
              uVar8 = 0;
              if ((int)uVar11 < (this->PerInstanceSMCustomData).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar9 = iVar9 + 1;
              pFVar10 = pFVar10 + 4;
              *(undefined4 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) = uVar1
              ;
            } while (iVar9 < iVar7);
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + iVar6;
        } while (iVar13 < (this->PerInstanceSMData).ArrayNum);
      }
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
  }
  if ((this->_padding_ & 0x30) == 0) {
    FPrimitiveInstanceDataManager::PostLoad
              (&this->PrimitiveInstanceDataManager,(this->PerInstanceSMData).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x000147d1defa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc98))(this);
  return;
}

// PreAllocateInstancesMemory @ 147d1e9f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::PreAllocateInstancesMemory
          (UInstancedStaticMeshComponent *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (this->PerInstanceSMData).ArrayNum;
  uVar1 = iVar2 + param_1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->PerInstanceSMData).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar1,&(this->PerInstanceSMData).AllocatorInstance,iVar2,
               &(this->PerInstanceSMData).ArrayMax);
  }
  iVar2 = (this->PerInstanceSMCustomData).ArrayNum;
  uVar1 = param_1 * this->NumCustomDataFloats + iVar2;
  if (-1 < (int)uVar1) {
    if ((this->PerInstanceSMCustomData).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,&(this->PerInstanceSMCustomData).AllocatorInstance,iVar2,
                 &(this->PerInstanceSMCustomData).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// PreApplyComponentInstanceData @ 147d1eaa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::PreApplyComponentInstanceData
          (UInstancedStaticMeshComponent *this,FInstancedStaticMeshComponentInstanceData *param_1)

{
  return;
}

// PreSave @ 147d1eab0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::PreSave
          (UInstancedStaticMeshComponent *this,FObjectPreSaveContext param_1)

{
  bool bVar1;
  FScriptContainerElement *local_res10;
  TBoxSphereBounds<double,double> local_48;
  
  local_res10 = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10 + 0x9c) = *(int *)(local_res10 + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)&local_res10);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((bVar1) || ((this->_padding_ & 1) == 0)) {
    this->CachedBounds[0].bIsValid = false;
    this->CachedBounds[1].bIsValid = false;
    this->CachedBounds[2].bIsValid = false;
  }
  else {
    GetOrCalcBounds(this,&local_48,&UE::Math::TTransform<double>::Identity,Local);
    GetOrCalcBounds(this,&local_48,(TTransform<double> *)&this->_padding_,Component);
    GetOrCalcBounds(this,&local_48,(TTransform<double> *)&this->_padding_,Navigation);
  }
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    InitializeInstancingRandomSeed
              (this,*(longlong *)
                     (((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data + 0x10) == 0);
  }
  return;
}

// PropagateLightingScenarioChange @ 147d1f480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::PropagateLightingScenarioChange(UInstancedStaticMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FString local_38;
  FComponentRecreateRenderStateContext local_28;
  
  local_28.ScenesToUpdateAllPrimitiveSceneInfos =
       (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
  local_28.Component = (UActorComponent *)0x0;
  local_28.ComponentInterface = (IPrimitiveComponent *)0x0;
  if ((this == (UInstancedStaticMeshComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                         ,0x28,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                       ,0x29,L"%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->_padding_ & 3) == 3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
    local_28.Component = (UActorComponent *)this;
    UpdateAllPrimitiveSceneInfosForSingleComponent
              ((UActorComponent *)this,local_28.ScenesToUpdateAllPrimitiveSceneInfos);
  }
  FPrimitiveInstanceDataManager::BakedLightingDataChangedAll(&this->PrimitiveInstanceDataManager);
  FComponentRecreateRenderStateContext::~FComponentRecreateRenderStateContext(&local_28);
  return;
}

// RecreateInstanceBody @ 147d1fd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::RecreateInstanceBody(UInstancedStaticMeshComponent *this,int param_1)

{
  FBodyInstance *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBodyInstance *this_01;
  FBodyInstance *pFVar4;
  UBodySetup *pUVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStackY_128 [32];
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  if (-1 < param_1) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
    lVar6 = (longlong)param_1;
    if (param_1 < (this->InstanceBodies).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
      pFVar4 = (FBodyInstance *)0x0;
      uVar3 = 0;
      if (param_1 < (this->InstanceBodies).ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(FBodyInstance **)((this->InstanceBodies).AllocatorInstance.Data + lVar6 * 8);
      if (this_00 != (FBodyInstance *)0x0) {
        uVar3 = 0;
        if (param_1 < (this->PerInstanceSMData).ArrayNum) {
          uVar3 = uVar7;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Math::TTransform<double>::SetFromMatrix
                  (&local_98,
                   (TMatrix<double> *)
                   ((this->PerInstanceSMData).AllocatorInstance.Data + lVar6 * 0x80));
        local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_f8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_f8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_f8,&local_98,(TTransform<double> *)&this->_padding_);
        this_01 = ::operator_new(400);
        if (this_01 != (FBodyInstance *)0x0) {
          pFVar4 = FBodyInstance::FBodyInstance(this_01);
        }
        pUVar5 = FBodyInstance::GetBodySetup(this_00);
        InitInstanceBody(this,param_1,pFVar4,this_00,true,pUVar5);
        uVar3 = 0;
        if (param_1 < (this->InstanceBodies).ArrayNum) {
          uVar3 = uVar7;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(FBodyInstance **)((this->InstanceBodies).AllocatorInstance.Data + lVar6 * 8) = pFVar4;
        FBodyInstance::TermBody(this_00,false);
        FBodyInstance::~FBodyInstance(this_00);
        ::operator_delete(this_00,400);
      }
    }
  }
  return;
}

// RemoveInstance @ 147d23150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::RemoveInstance(UInstancedStaticMeshComponent *this,int param_1)

{
  bool bVar1;
  
  bVar1 = RemoveInstanceInternal(this,param_1,false,false,true);
  return bVar1;
}

// RemoveInstanceInternal @ 147d23170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::RemoveInstanceInternal
          (UInstancedStaticMeshComponent *this,int param_1,bool param_2,bool param_3,bool param_4)

{
  int *piVar1;
  TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  byte *pbVar3;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FBodyInstance *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData> FVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *_Src;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStackY_158 [32];
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined1 local_ec [24];
  ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData> local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  int iStack_c4;
  uint local_c0;
  FScriptContainerElement *local_b8;
  ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData> local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData> local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int> local_88;
  TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int> local_78;
  ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData> local_68;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  pTVar10 = CVarISMForceRemoveAtSwap.Ref;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar22 = (ulonglong)param_1;
  if ((param_3) || (this->bSupportRemoveAtSwap != '\0')) {
LAB_147d23219:
    bVar11 = true;
    bVar9 = true;
    FPrimitiveInstanceDataManager::RemoveAtSwap(&this->PrimitiveInstanceDataManager,param_1);
  }
  else {
    bVar11 = IsInParallelGameThread();
    if ((!bVar11) &&
       ((bVar11 = IsInGameThread(), !bVar11 &&
        (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar11)))) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    if (pTVar10->ShadowedValue[0] != 0) goto LAB_147d23219;
    bVar11 = false;
    bVar9 = false;
    FPrimitiveInstanceDataManager::RemoveAt(&this->PrimitiveInstanceDataManager,param_1);
  }
  bVar8 = true;
  uVar23 = 0;
  uVar16 = 0;
  uVar17 = 0;
  if (((!param_2) && (-1 < param_1)) && (param_1 < (this->PerInstanceSMData).ArrayNum)) {
    if (((param_4) && ((this->_padding_ & 0x400000) != 0)) && ((this->_padding_ & 1) != 0)) {
      cVar13 = (**(code **)(this->_padding_ + 0xc88))(this);
      if (cVar13 != '\0') {
        (**(code **)(this->_padding_ + 0xc70))(this,param_1);
      }
    }
    else {
      bVar8 = false;
    }
    pTVar2 = &this->PerInstanceSMData;
    iVar24 = (this->PerInstanceSMData).ArrayNum;
    uVar25 = ~param_1;
    if (bVar11) {
      uVar15 = uVar23;
      if (param_1 < iVar24) {
        uVar15 = uVar25 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iVar5 = (this->PerInstanceSMData).ArrayNum;
      pFVar20 = (pTVar2->AllocatorInstance).Data;
      iVar24 = iVar5 + uVar25;
      if (1 < iVar24) {
        iVar24 = 1;
      }
      if (iVar24 != 0) {
        memmove(pFVar20 + uVar22 * 0x80,pFVar20 + (longlong)(iVar5 - iVar24) * 0x80,
                (longlong)iVar24 << 7);
      }
      piVar1 = &(this->PerInstanceSMData).ArrayNum;
      *piVar1 = *piVar1 + -1;
      uVar25 = this->NumCustomDataFloats;
      uVar26 = param_1 * uVar25;
      uVar15 = uVar17;
      if ((int)(uVar26 + uVar25) <= (this->PerInstanceSMCustomData).ArrayNum) {
        uVar15 = ~(uVar26 | uVar25) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      if (uVar25 != 0) {
        iVar24 = (this->PerInstanceSMCustomData).ArrayNum;
        pFVar20 = (this->PerInstanceSMCustomData).AllocatorInstance.Data;
        uVar15 = (iVar24 - uVar25) - uVar26;
        if ((int)uVar25 < (int)uVar15) {
          uVar15 = uVar25;
        }
        if (uVar15 != 0) {
          memmove(pFVar20 + (longlong)(int)uVar26 * 4,pFVar20 + (longlong)(int)(iVar24 - uVar15) * 4
                  ,(longlong)(int)uVar15 << 2);
        }
        piVar1 = &(this->PerInstanceSMCustomData).ArrayNum;
        *piVar1 = *piVar1 - uVar25;
      }
    }
    else {
      uVar15 = uVar17;
      if (param_1 < iVar24) {
        uVar15 = uVar25 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      pFVar20 = (pTVar2->AllocatorInstance).Data + uVar22 * 0x80;
      iVar24 = (this->PerInstanceSMData).ArrayNum + uVar25;
      if (iVar24 != 0) {
        memmove(pFVar20,pFVar20 + 0x80,(longlong)iVar24 << 7);
      }
      piVar1 = &(this->PerInstanceSMData).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,&pTVar2->AllocatorInstance,(this->PerInstanceSMData).ArrayNum,
                 &(this->PerInstanceSMData).ArrayMax);
      uVar25 = this->NumCustomDataFloats;
      uVar26 = param_1 * uVar25;
      uVar15 = uVar16;
      if ((int)(uVar26 + uVar25) <= (this->PerInstanceSMCustomData).ArrayNum) {
        uVar15 = ~(uVar26 | uVar25) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      bVar11 = bVar9;
      if (uVar25 != 0) {
        pFVar20 = (this->PerInstanceSMCustomData).AllocatorInstance.Data + (longlong)(int)uVar26 * 4
        ;
        iVar24 = ((this->PerInstanceSMCustomData).ArrayNum - uVar25) - uVar26;
        if (iVar24 != 0) {
          memmove(pFVar20,pFVar20 + (longlong)(int)uVar25 * 4,(longlong)iVar24 << 2);
        }
        piVar1 = &(this->PerInstanceSMCustomData).ArrayNum;
        *piVar1 = *piVar1 - uVar25;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->PerInstanceSMCustomData).AllocatorInstance,
                   (this->PerInstanceSMCustomData).ArrayNum,
                   &(this->PerInstanceSMCustomData).ArrayMax);
      }
    }
    if (bVar8) {
      if ((this->PerInstanceSMData).ArrayNum == 0) {
        pbVar3 = (byte *)((longlong)&this->_padding_ + 2);
        *pbVar3 = *pbVar3 & 0xbf;
        FNavigationSystem::UnregisterComponent((UActorComponent *)this);
      }
      else {
        cVar13 = (**(code **)(this->_padding_ + 0xc88))();
        if (cVar13 == '\0') {
          (**(code **)(this->_padding_ + 0xc80))(this);
        }
      }
    }
  }
  if (this->bHasPreviousTransforms == '\0') goto LAB_147d23673;
  pTVar4 = &this->PerInstancePrevTransform;
  iVar24 = (this->PerInstancePrevTransform).ArrayNum;
  uVar25 = ~param_1;
  if (bVar11) {
    uVar15 = uVar16;
    if (param_1 < iVar24) {
      uVar15 = uVar25 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    iVar5 = (this->PerInstancePrevTransform).ArrayNum;
    pFVar20 = (pTVar4->AllocatorInstance).Data;
    iVar24 = iVar5 + uVar25;
    if (1 < iVar24) {
      iVar24 = 1;
    }
    if (iVar24 != 0) {
      _Src = pFVar20 + (longlong)(iVar5 - iVar24) * 0x80;
      pFVar20 = pFVar20 + uVar22 * 0x80;
LAB_147d23648:
      memmove(pFVar20,_Src,(longlong)iVar24 << 7);
    }
  }
  else {
    uVar15 = uVar16;
    if (param_1 < iVar24) {
      uVar15 = uVar25 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    pFVar20 = (pTVar4->AllocatorInstance).Data + uVar22 * 0x80;
    iVar24 = (this->PerInstancePrevTransform).ArrayNum + uVar25;
    if (iVar24 != 0) {
      _Src = pFVar20 + 0x80;
      goto LAB_147d23648;
    }
  }
  piVar1 = &(this->PerInstancePrevTransform).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x80,0x10,&pTVar4->AllocatorInstance,(this->PerInstancePrevTransform).ArrayNum,
             &(this->PerInstancePrevTransform).ArrayMax);
LAB_147d23673:
  local_f0 = (this->PerInstanceSMData).ArrayNum;
  if ((((this->_padding_ & 8) != 0) && (-1 < param_1)) &&
     (param_1 < (this->InstanceBodies).ArrayNum)) {
    uVar26 = ~param_1;
    uVar15 = uVar26 >> 0x1f;
    uVar25 = uVar16;
    if (param_1 < (this->InstanceBodies).ArrayNum) {
      uVar25 = uVar15;
    }
    if ((uVar25 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    pFVar20 = (this->InstanceBodies).AllocatorInstance.Data;
    pFVar6 = *(FBodyInstance **)(pFVar20 + uVar22 * 8);
    pFVar20 = pFVar20 + uVar22 * 8;
    local_b8 = pFVar20;
    if (pFVar6 != (FBodyInstance *)0x0) {
      FBodyInstance::TermBody(pFVar6,false);
      pFVar6 = *(FBodyInstance **)pFVar20;
      if (pFVar6 != (FBodyInstance *)0x0) {
        FBodyInstance::~FBodyInstance(pFVar6);
        ::operator_delete(pFVar6,400);
      }
      *(undefined8 *)local_b8 = 0;
    }
    if ((bVar9) && (param_1 != local_f0)) {
      uVar25 = uVar23;
      if (param_1 < (this->InstanceBodies).ArrayNum) {
        uVar25 = uVar15;
      }
      if ((uVar25 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iVar5 = (this->InstanceBodies).ArrayNum;
      pFVar20 = (this->InstanceBodies).AllocatorInstance.Data;
      iVar24 = iVar5 + uVar26;
      if (1 < iVar24) {
        iVar24 = 1;
      }
      if (iVar24 != 0) {
        memmove(pFVar20 + uVar22 * 8,pFVar20 + (longlong)(iVar5 - iVar24) * 8,(longlong)iVar24 << 3)
        ;
      }
      iVar24 = (this->InstanceBodies).ArrayNum + -1;
      (this->InstanceBodies).ArrayNum = iVar24;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->InstanceBodies).AllocatorInstance,iVar24,
                 &(this->InstanceBodies).ArrayMax);
      if (param_1 < (this->InstanceBodies).ArrayNum) {
        uVar23 = uVar15;
      }
      if ((uVar23 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      if (*(longlong *)((this->InstanceBodies).AllocatorInstance.Data + uVar22 * 8) != 0) {
        if (param_1 < (this->InstanceBodies).ArrayNum) {
          uVar16 = uVar15;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        *(int *)(*(longlong *)((this->InstanceBodies).AllocatorInstance.Data + uVar22 * 8) + 0xc) =
             param_1;
      }
    }
    else {
      if (param_1 < (this->InstanceBodies).ArrayNum) {
        uVar16 = uVar15;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      pFVar20 = (this->InstanceBodies).AllocatorInstance.Data + uVar22 * 8;
      iVar24 = (this->InstanceBodies).ArrayNum + uVar26;
      if (iVar24 != 0) {
        memmove(pFVar20,pFVar20 + 8,(longlong)iVar24 << 3);
      }
      iVar24 = (this->InstanceBodies).ArrayNum + -1;
      (this->InstanceBodies).ArrayNum = iVar24;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->InstanceBodies).AllocatorInstance,iVar24,
                 &(this->InstanceBodies).ArrayMax);
      if (param_1 < (this->InstanceBodies).ArrayNum) {
        lVar19 = uVar22 * 8;
        uVar23 = param_1;
        do {
          uVar16 = uVar17;
          if ((int)uVar23 < (this->InstanceBodies).ArrayNum) {
            uVar16 = ~uVar23 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if (*(longlong *)((this->InstanceBodies).AllocatorInstance.Data + lVar19) != 0) {
            uVar16 = uVar17;
            if ((int)uVar23 < (this->InstanceBodies).ArrayNum) {
              uVar16 = ~uVar23 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            *(uint *)(*(longlong *)((this->InstanceBodies).AllocatorInstance.Data + lVar19) + 0xc) =
                 uVar23;
          }
          uVar23 = uVar23 + 1;
          lVar19 = lVar19 + 8;
        } while ((int)uVar23 < (this->InstanceBodies).ArrayNum);
      }
    }
  }
  iVar24 = local_f0;
  bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                     ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                      &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated);
  if (bVar11) {
    if (bVar9) {
      local_68.SecondaryData =
           (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0;
      local_44 = 2;
      local_ec[0] = '\x01';
      local_48 = 0;
      local_ec[8] = 0xff;
      local_ec[9] = 0xff;
      local_ec[10] = 0xff;
      local_ec[0xb] = 0xff;
      local_ec._4_4_ = param_1;
      if ((&local_68 <=
           (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData> *)local_ec) &&
         (local_ec < &local_68.SecondaryData)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar17 = local_48;
        if (local_48 == local_44) {
          uVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>_>
                             (0x40c,&local_68,(int *)&local_44);
        }
      }
      local_48 = uVar17 + 1;
      FVar18 = (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)&local_68;
      if (local_68.SecondaryData !=
          (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0) {
        FVar18 = local_68.SecondaryData;
      }
      *(ulonglong *)((longlong)FVar18 + (longlong)(int)uVar17 * 0xc) =
           CONCAT44(local_ec._4_4_,local_ec._0_4_);
      *(undefined4 *)((uchar *)((longlong)FVar18 + 8) + (longlong)(int)uVar17 * 0xc) =
           local_ec._8_4_;
      if (param_1 != iVar24) {
        local_ec[0xc] = '\x02';
        FVar18 = (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)&local_68;
        if (local_68.SecondaryData !=
            (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0) {
          FVar18 = local_68.SecondaryData;
        }
        local_ec._16_4_ = param_1;
        local_ec._20_4_ = iVar24;
        if ((ulonglong)FVar18 <= local_ec + 0xc) {
          FVar18 = (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)
                   &local_68;
          if (local_68.SecondaryData !=
              (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0) {
            FVar18 = local_68.SecondaryData;
          }
          if ((local_ec + 0xc < (undefined1 *)((longlong)FVar18 + (longlong)(int)local_44 * 0xc)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        if (local_48 == local_44) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>_>
                               (0x40c,&local_68,(int *)&local_44);
        }
        lVar19 = (longlong)(int)local_48;
        FVar18 = (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)&local_68;
        if (local_68.SecondaryData !=
            (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0) {
          FVar18 = local_68.SecondaryData;
        }
        local_48 = local_48 + 1;
        *(ulonglong *)((longlong)FVar18 + lVar19 * 0xc) = CONCAT44(local_ec._16_4_,local_ec._12_4_);
        *(undefined4 *)((uchar *)((longlong)FVar18 + 8) + lVar19 * 0xc) = local_ec._20_4_;
      }
      uVar23 = local_48;
      local_a8 = (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)&local_68;
      if (local_68.SecondaryData !=
          (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0) {
        local_a8 = local_68.SecondaryData;
      }
      if (((int)local_48 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      uStack_a0 = uVar23;
      local_88._12_4_ = uStack_9c;
      local_88.ArrayNum = uVar23;
      local_88.DataPtr = (FInstanceIndexUpdateData *)local_a8;
      TMulticastDelegate<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
      ::Broadcast(&FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,this,&local_88);
      FVar21.Data = (FScriptContainerElement *)local_68.SecondaryData;
    }
    else {
      local_100.Data = (FScriptContainerElement *)0x0;
      uVar23 = ((this->PerInstanceSMData).ArrayNum - param_1) + 1;
      local_f8 = 0;
      local_f4 = 0;
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      if (0 < (int)uVar23) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar23,&local_100,0,&local_f4);
      }
      local_d4._0_1_ = 1;
      local_cc = 0xffffffff;
      local_d4._4_4_ = param_1;
      if (((local_100.Data <= (longlong)local_ec + 0x18U) &&
          ((FScriptContainerElement *)(local_ec + 0x18) < local_100.Data + (longlong)local_f4 * 0xc)
          ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      if (local_f8 == local_f4) {
        local_f8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_100,&local_f4);
      }
      iVar24 = local_f8 + 1;
      *(ulonglong *)(local_100.Data + (longlong)local_f8 * 0xc) =
           CONCAT44(local_d4._4_4_,local_d4._0_4_);
      *(undefined4 *)(local_100.Data + (longlong)local_f8 * 0xc + 8) = local_cc;
      local_f8 = iVar24;
      if (param_1 < (this->PerInstanceSMData).ArrayNum) {
        do {
          iStack_c4 = (int)uVar22;
          uVar23 = iStack_c4 + 1;
          uVar22 = (ulonglong)uVar23;
          local_c8 = CONCAT31(local_c8._1_3_,2);
          local_c0 = uVar23;
          if (((local_100.Data <= &local_c8) &&
              ((FScriptContainerElement *)&local_c8 < local_100.Data + (longlong)local_f4 * 0xc)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if (local_f8 == local_f4) {
            local_f8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&local_100,&local_f4);
          }
          iVar24 = local_f8 + 1;
          *(ulonglong *)(local_100.Data + (longlong)local_f8 * 0xc) = CONCAT44(iStack_c4,local_c8);
          *(uint *)(local_100.Data + (longlong)local_f8 * 0xc + 8) = local_c0;
          local_f8 = iVar24;
        } while ((int)uVar23 < (this->PerInstanceSMData).ArrayNum);
      }
      iVar24 = local_f8;
      local_98 = (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)
                 local_100.Data;
      if ((local_f8 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iStack_90 = iVar24;
      local_78._12_4_ = uStack_8c;
      local_78.ArrayNum = iVar24;
      local_78.DataPtr = (FInstanceIndexUpdateData *)local_98;
      TMulticastDelegate<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
      ::Broadcast(&FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,this,&local_78);
      FVar21.Data = local_100.Data;
    }
    if ((ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)FVar21.Data !=
        (ForElementType<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData>)0x0) {
      FMemory::Free(FVar21.Data);
    }
  }
  this->CachedBounds[0].bIsValid = false;
  this->CachedBounds[1].bIsValid = false;
  this->CachedBounds[2].bIsValid = false;
  return true;
}

// RemoveInstances @ 147d24280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::RemoveInstances
          (UInstancedStaticMeshComponent *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147d24286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0xc28))(this,param_1,0);
  return (bool)uVar1;
}

// RemoveInstances @ 147d242a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::RemoveInstances
          (UInstancedStaticMeshComponent *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  longlong lVar2;
  FIdentityFunctor local_res10 [16];
  UInstancedStaticMeshComponent *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayNum = param_1->ArrayNum;
  lVar2 = (longlong)local_18.ArrayNum;
  if (local_18.ArrayNum == 0) {
    return false;
  }
  local_res20 = this;
  if (param_2) {
    bVar1 = `UInstancedStaticMeshComponent::RemoveInstances'::__l2::<lambda_1>::operator()
                      (&local_res20,param_1);
    return bVar1;
  }
  _Src = (param_1->AllocatorInstance).Data;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
             &local_18.ArrayMax);
  memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 << 2);
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
            ((int *)local_18.AllocatorInstance.Data,local_18.ArrayNum,local_res10[0],
             (TGreater<int> *)local_res10);
  bVar1 = `UInstancedStaticMeshComponent::RemoveInstances'::__l2::<lambda_1>::operator()
                    (&local_res20,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// RemoveInstancesById @ 147d24380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::RemoveInstancesById
          (UInstancedStaticMeshComponent *this,TArrayView<FPrimitiveInstanceId_const_,int> *param_1,
          bool param_2)

{
  FPrimitiveInstanceId *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FPrimitiveInstanceId *pFVar6;
  
  if (((this->PrimitiveInstanceDataManager).Mode == ExternalLegacyData) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xf16,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = param_1->DataPtr;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  do {
    if (pFVar6 == pFVar1) {
      return;
    }
    uVar5 = pFVar6->Id;
    if (*(int *)&(this->PrimitiveInstanceDataManager).field_0x8 != 0) {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&(this->PrimitiveInstanceDataManager).field_0x18) {
        uVar4 = ~uVar5 >> 0x1f;
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
      uVar5 = *(uint *)(*(longlong *)&(this->PrimitiveInstanceDataManager).field_0x10 +
                       (longlong)(int)uVar5 * 4);
    }
    RemoveInstanceInternal(this,uVar5,false,true,param_2);
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// SelectInstance @ 147d27aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SelectInstance
          (UInstancedStaticMeshComponent *this,bool param_1,int param_2,int param_3)

{
  return;
}

// SendRenderInstanceData_Concurrent @ 147d27ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SendRenderInstanceData_Concurrent
          (UInstancedStaticMeshComponent *this)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  FCachedSystemScalabilityCVars *pFVar6;
  UWorld *pUVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [232];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  UActorComponent::SendRenderInstanceData_Concurrent((UActorComponent *)this);
  (this->PrimitiveInstanceDataManager).bComponentMarkedDirty = '\0';
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  pFVar6 = GetCachedScalabilityCVars();
  if ((int)(uint)bVar2 <= pFVar6->DetailMode) {
    bVar4 = USceneComponent::ShouldRender((USceneComponent *)this);
    if ((((bVar4) || ((this->_padding_ & 0x2000000000000000) != 0)) ||
        ((this->_padding_ & 0x8000000000000) != 0)) || ((this->_padding_ & 0x20000) != 0)) {
      if (this->_padding_ == 0) {
        (**(code **)(this->_padding_ + 0x5b0))(this);
        pUVar7 = (UWorld *)this->_padding_;
        if (pUVar7 == (UWorld *)0x0) {
          pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        (**(code **)(pUVar7->Scene->_padding_ + 8))(pUVar7->Scene,this);
        UPrimitiveComponent::ConditionalNotifyStreamingPrimitiveUpdated_Concurrent
                  ((UPrimitiveComponent *)this);
      }
      else {
        local_108._160_8_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_108._128_4_ = Movable;
        local_108._132_4_ = 3.4028235e+38;
        local_108._136_4_ = 3.4028235e+38;
        pcVar3 = *(code **)(this->_padding_ + 0xca0);
        local_108._140_4_ = 3.4028235e+38;
        local_108._144_4_ = -3.4028235e+38;
        local_108._148_4_ = -3.4028235e+38;
        local_108._152_4_ = -3.4028235e+38;
        local_108._156_2_ = 0;
        local_108._168_4_ = 0.0;
        local_108[0xac] = false;
        local_108[0xad] = false;
        local_108[0xae] = false;
        local_108[0xaf] = false;
        local_108._176_4_ = -1;
        local_108._180_4_ = -1;
        local_108._184_4_ = 0;
        local_108._192_8_ = 0;
        local_20 = (longlong *)0x0;
        EVar5 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)(this->_padding_ + 0x220));
        (*pcVar3)(this,EVar5);
        bVar4 = FPrimitiveInstanceDataManager::FlushChanges
                          (&this->PrimitiveInstanceDataManager,
                           (FInstanceUpdateComponentDesc *)local_108,false);
        if (bVar4) {
          (**(code **)(this->_padding_ + 0x5b0))(this);
          pUVar7 = (UWorld *)this->_padding_;
          if (pUVar7 == (UWorld *)0x0) {
            pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          }
          (**(code **)(pUVar7->Scene->_padding_ + 0xb0))(pUVar7->Scene,this);
        }
        if (local_108._192_8_ != 0) {
          plVar8 = (longlong *)(local_108 + 0xd0);
          if (local_20 != (longlong *)0x0) {
            plVar8 = local_20;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
  }
  return;
}

// Serialize @ 147d286c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::Serialize(UInstancedStaticMeshComponent *this,FArchive *param_1)

{
  int *piVar1;
  TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  uint *puVar6;
  void *_Src;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  UObject *this_00;
  UClass *pUVar11;
  uint uVar12;
  byte bVar13;
  bool bVar14;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  FMemScope local_78;
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_> local_60 [2];
  
  FLLMScope::FLLMScope(local_res8,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_78,InstancedMesh,true);
  UStaticMeshComponent::Serialize((UStaticMeshComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMobileObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  bVar14 = SUB41(uVar12,0);
  iVar10 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((10 < iVar10) ||
     (iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID),
     0x17 < iVar10)) {
    puVar4 = *(ulonglong **)&param_1->field_0x8;
    puVar6 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar6) {
      local_res10[0] = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res10[0] = uVar12;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar12 = local_res10[0];
      if ((param_1->field_0x28 & 1) == 0) goto LAB_147d287fc;
    }
    else {
      uVar12 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar6;
    }
    bVar14 = uVar12 != 0;
  }
LAB_147d287fc:
  this_00 = UObject::GetArchetype((UObject *)this);
  if (this_00 == (UObject *)0x0) {
LAB_147d2882f:
    this_00 = (UObject *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    iVar10 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar11->_padding_)) goto LAB_147d2882f;
  }
  if ((((this->bInheritPerInstanceData == '\0') && ((this->_padding_ & 0x200000) != 0)) ||
      (this_00 == (UObject *)0x0)) ||
     (((bVar9 = UObject::IsInBlueprint(this_00), !bVar9 ||
       (bVar9 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
       bVar9)) || ((param_1->field_0x29 & 1) == 0)))) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  bVar9 = (bool)(bVar13 ^ 1);
  puVar6 = (uint *)*plVar5;
  if ((param_1->field_0x28 & 1) == 0) {
    if (puVar6 + 1 <= (uint *)plVar5[1]) goto LAB_147d2891a;
    local_res18[0] = (uint)bVar9;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147d28ad8;
    bVar9 = local_res18[0] != 0;
LAB_147d28932:
    local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60[0].ArrayNum = 0;
    local_60[0].ArrayMax = 0;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    if (bVar9) {
      TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_>::BulkSerialize
                (local_60,param_1,
                 (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec);
      iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
      if (0x27 < iVar10) {
        TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize(&local_70,param_1,false);
      }
    }
    if (bVar13 == 0) {
      if (bVar9) {
        pTVar2 = &this->PerInstanceSMData;
        if (pTVar2 != local_60) {
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (pTVar2->AllocatorInstance).Data = local_60[0].AllocatorInstance.Data;
          (this->PerInstanceSMData).ArrayNum = local_60[0].ArrayNum;
          (this->PerInstanceSMData).ArrayMax = local_60[0].ArrayMax;
          local_60[0].ArrayNum = 0;
          local_60[0].ArrayMax = 0;
          local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        pTVar3 = &this->PerInstanceSMCustomData;
        if (pTVar3 != &local_70) {
          pFVar7 = (pTVar3->AllocatorInstance).Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (pTVar3->AllocatorInstance).Data = local_70.AllocatorInstance.Data;
          (this->PerInstanceSMCustomData).ArrayNum = local_70.ArrayNum;
          (this->PerInstanceSMCustomData).ArrayMax = local_70.ArrayMax;
          local_70.ArrayNum = 0;
          local_70.ArrayMax = 0;
          local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
      }
    }
    else {
      if ((this_00 == (UObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InArchetype",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                             ,0xdb2,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar2 = &this->PerInstanceSMData;
      if (pTVar2 != (TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_> *)
                    &this_00[0x28].field_0x18) {
        iVar10 = *(int *)&this_00[0x28].field_0x20;
        piVar1 = &(this->PerInstanceSMData).ArrayMax;
        _Src = *(void **)&this_00[0x28].field_0x18;
        (this->PerInstanceSMData).ArrayNum = iVar10;
        if ((iVar10 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,iVar10,*piVar1,&pTVar2->AllocatorInstance,iVar10,piVar1);
          if (iVar10 != 0) {
            memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar10 << 7);
          }
        }
      }
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (&this->PerInstanceSMCustomData,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)&this_00[0x2c].field_0x8);
      this->NumCustomDataFloats = *(int *)(this_00 + 0x2c);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].AllocatorInstance.Data);
    }
  }
  else {
    if ((uint *)plVar5[1] < puVar6 + 1) {
      local_res20[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      if (1 < local_res20[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar12 = local_res20[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_147d28924;
    }
    else {
LAB_147d2891a:
      uVar12 = *puVar6;
      *plVar5 = (longlong)(puVar6 + 1);
LAB_147d28924:
      bVar9 = uVar12 != 0;
      if ((param_1->field_0x28 & 1) != 0) goto LAB_147d28932;
    }
LAB_147d28ad8:
    if (bVar9 != false) {
      TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_>::BulkSerialize
                (&this->PerInstanceSMData,param_1,
                 (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec);
      TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize
                (&this->PerInstanceSMCustomData,param_1,false);
    }
  }
  if ((bVar14 != false) &&
     (((iVar10 = FArchiveState::CustomVer
                           ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
       10 < iVar10 ||
       (iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID),
       0x17 < iVar10)) && ((param_1->field_0x28 & 1) != 0)))) {
    FPrimitiveInstanceDataManager::ReadCookedRenderData(&this->PrimitiveInstanceDataManager,param_1)
    ;
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SerializeRenderData @ 147d28b80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SerializeRenderData
          (UInstancedStaticMeshComponent *this,FArchive *param_1)

{
  if ((param_1->field_0x28 & 1) != 0) {
    FPrimitiveInstanceDataManager::ReadCookedRenderData(&this->PrimitiveInstanceDataManager,param_1)
    ;
    return;
  }
  return;
}

// SetBakedLightingDataChanged @ 147d28bc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetBakedLightingDataChanged
          (UInstancedStaticMeshComponent *this,int param_1)

{
  FPrimitiveInstanceDataManager::BakedLightingDataChanged
            (&this->PrimitiveInstanceDataManager,param_1);
  return;
}

// SetBakedLightingDataChangedAll @ 147d28be0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetBakedLightingDataChangedAll(UInstancedStaticMeshComponent *this)

{
  FPrimitiveInstanceDataManager::BakedLightingDataChangedAll(&this->PrimitiveInstanceDataManager);
  return;
}

// SetCullDistances @ 147d28c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetCullDistances
          (UInstancedStaticMeshComponent *this,int param_1,int param_2)

{
  FSceneInterface *pFVar1;
  
  if ((this->InstanceStartCullDistance != param_1) || (this->InstanceEndCullDistance != param_2)) {
    this->InstanceStartCullDistance = param_1;
    this->InstanceEndCullDistance = param_2;
    pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
    if ((pFVar1 != (FSceneInterface *)0x0) && (this->_padding_ != 0)) {
      pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
      (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,this);
    }
  }
  return;
}

// SetCustomData @ 147d28e80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::SetCustomData
          (UInstancedStaticMeshComponent *this,int param_1,int param_2,
          TArrayView<float_const_,int> *param_3,bool param_4)

{
  int iVar1;
  float *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar6 = param_1 * this->NumCustomDataFloats;
  if (((this->PerInstanceSMCustomData).ArrayNum < (int)(param_3->ArrayNum + uVar6)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerInstanceSMCustomData.Num() >= (CustomDataIndexStart + CustomDataFloats.Num()) && CustomDataFloats.GetTypeSize() == PerInstanceSMCustomData.GetTypeSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xf7a,
                         L"CustomDataFloats and offset must fit within PerInstanceSMCustomData"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar1 = param_3->ArrayNum;
  if (iVar1 == 0) {
    return false;
  }
  if (((param_2 < param_1) || (param_1 < 0)) || ((this->PerInstanceSMData).ArrayNum <= param_2)) {
    local_res10[0] = 0;
    bVar3 = `UInstancedStaticMeshComponent::SetCustomData'::__l15::<lambda_1>::operator()
                      (local_res10);
    if (!bVar3) {
      return false;
    }
  }
  if (((param_2 - param_1) + 1) * this->NumCustomDataFloats != iVar1) {
    local_res8[0] = 0;
    bVar3 = `UInstancedStaticMeshComponent::SetCustomData'::__l18::<lambda_2>::operator()
                      (local_res8);
    if (!bVar3) {
      return false;
    }
  }
  _Src = param_3->DataPtr;
  uVar5 = 0;
  if ((int)uVar6 < (this->PerInstanceSMCustomData).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  memcpy((this->PerInstanceSMCustomData).AllocatorInstance.Data + (longlong)(int)uVar6 * 4,_Src,
         (longlong)iVar1 << 2);
  for (; param_1 <= param_2; param_1 = param_1 + 1) {
    FPrimitiveInstanceDataManager::CustomDataChanged(&this->PrimitiveInstanceDataManager,param_1);
  }
  if (param_4) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return true;
}

// SetCustomData @ 147d29010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::SetCustomData
          (UInstancedStaticMeshComponent *this,int param_1,TArrayView<float_const_,int> *param_2,
          bool param_3)

{
  int iVar1;
  int iVar2;
  float *_Src;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  
  if (((-1 < param_1) && (param_1 < (this->PerInstanceSMData).ArrayNum)) &&
     (iVar1 = param_2->ArrayNum, iVar1 != 0)) {
    iVar2 = this->NumCustomDataFloats;
    _Src = param_2->DataPtr;
    iVar4 = iVar2;
    if (iVar1 < iVar2) {
      iVar4 = iVar1;
    }
    uVar8 = iVar2 * param_1;
    uVar7 = 0;
    if ((int)uVar8 < (this->PerInstanceSMCustomData).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    memcpy((this->PerInstanceSMCustomData).AllocatorInstance.Data + (longlong)(int)uVar8 * 4,_Src,
           (longlong)iVar4 << 2);
    FPrimitiveInstanceDataManager::CustomDataChanged(&this->PrimitiveInstanceDataManager,param_1);
    if (param_3) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    return true;
  }
  return false;
}

// SetCustomDataById @ 147d29120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetCustomDataById
          (UInstancedStaticMeshComponent *this,TArrayView<FPrimitiveInstanceId_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_38;
  int iStack_30;
  
  if (((this->PrimitiveInstanceDataManager).Mode == ExternalLegacyData) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xf05,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->ArrayNum * this->NumCustomDataFloats != param_2->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceIds.Num() * NumCustomDataFloats == CustomDataFloats.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xf06,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar6 = this->NumCustomDataFloats;
      uVar4 = *(uint *)((longlong)&param_1->DataPtr->Id + lVar9);
      uVar7 = (ulonglong)(int)uVar4;
      pcVar2 = *(code **)(this->_padding_ + 0xbe0);
      pfVar1 = param_2->DataPtr;
      if (iVar6 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(int *)&(this->PrimitiveInstanceDataManager).field_0x8 != 0) {
        uVar5 = 0;
        if ((int)uVar4 < *(int *)&(this->PrimitiveInstanceDataManager).field_0x18) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar7 = (ulonglong)
                *(uint *)(*(longlong *)&(this->PrimitiveInstanceDataManager).field_0x10 + uVar7 * 4)
        ;
      }
      iStack_30 = iVar6;
      local_38 = pfVar1 + (int)(iVar6 * uVar8);
      (*pcVar2)(this,uVar7 & 0xffffffff,&local_38,0);
      iVar6 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < iVar6);
  }
  return;
}

// SetCustomDataValue @ 147d29440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::SetCustomDataValue
          (UInstancedStaticMeshComponent *this,int param_1,int param_2,float param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((((param_1 < 0) || ((this->PerInstanceSMData).ArrayNum <= param_1)) || (param_2 < 0)) ||
     (this->NumCustomDataFloats <= param_2)) {
    bVar2 = false;
  }
  else {
    FPrimitiveInstanceDataManager::CustomDataChanged(&this->PrimitiveInstanceDataManager,param_1);
    uVar5 = param_1 * this->NumCustomDataFloats + param_2;
    uVar4 = 0;
    if ((int)uVar5 < (this->PerInstanceSMCustomData).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *(float *)((this->PerInstanceSMCustomData).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) =
         param_3;
    if (param_4) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    bVar2 = true;
  }
  return bVar2;
}

// SetCustomDataValueById @ 147d29530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetCustomDataValueById
          (UInstancedStaticMeshComponent *this,FPrimitiveInstanceId param_1,int param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->PrimitiveInstanceDataManager).Mode == ExternalLegacyData) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0xf10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(this->_padding_ + 0xbc8);
  iVar3 = FInstanceIdIndexMap::IdToIndex
                    ((FInstanceIdIndexMap *)&this->PrimitiveInstanceDataManager,param_1);
  (*pcVar1)(this,iVar3,param_2,param_3,0);
  return;
}

// SetHasPerInstancePrevTransforms @ 147d299f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetHasPerInstancePrevTransforms
          (UInstancedStaticMeshComponent *this,bool param_1)

{
  int *piVar1;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (param_1 != this->bHasPreviousTransforms) {
    pTVar2 = &this->PerInstancePrevTransform;
    this->field_0x718 = this->field_0x718 & 0xdf | param_1 << 5;
    if (param_1) {
      uVar3 = (this->PerInstanceSMData).ArrayNum;
      if ((this->PerInstancePrevTransform).ArrayNum != uVar3) {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        piVar1 = &(this->PerInstancePrevTransform).ArrayMax;
        (this->PerInstancePrevTransform).ArrayNum = 0;
        if (*piVar1 != uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
        }
        iVar4 = (this->PerInstanceSMData).ArrayNum;
        pFVar10 = (this->PerInstanceSMData).AllocatorInstance.Data;
        pFVar11 = pFVar10 + (longlong)iVar4 * 0x80;
        while( true ) {
          if ((this->PerInstanceSMData).ArrayNum != iVar4) {
            local_b8[0] = 0;
            `TCheckedPointerIterator<FInstancedStaticMeshInstanceData_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_b8);
          }
          if (pFVar10 == pFVar11) break;
          local_a8 = *(undefined8 *)pFVar10;
          uStack_a0 = *(undefined8 *)(pFVar10 + 8);
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          local_98 = *(undefined8 *)(pFVar10 + 0x10);
          uStack_90 = *(undefined8 *)(pFVar10 + 0x18);
          local_88 = *(undefined8 *)(pFVar10 + 0x20);
          uStack_80 = *(undefined8 *)(pFVar10 + 0x28);
          local_78 = *(undefined8 *)(pFVar10 + 0x30);
          uStack_70 = *(undefined8 *)(pFVar10 + 0x38);
          local_68 = *(undefined8 *)(pFVar10 + 0x40);
          uStack_60 = *(undefined8 *)(pFVar10 + 0x48);
          local_58 = *(undefined8 *)(pFVar10 + 0x50);
          uStack_50 = *(undefined8 *)(pFVar10 + 0x58);
          local_48 = *(undefined8 *)(pFVar10 + 0x60);
          uStack_40 = *(undefined8 *)(pFVar10 + 0x68);
          local_38 = *(undefined8 *)(pFVar10 + 0x70);
          uStack_30 = *(undefined8 *)(pFVar10 + 0x78);
          if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 < pFVar5 + (longlong)*piVar1 * 0x80)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (this->PerInstancePrevTransform).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1080,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->PerInstancePrevTransform).ArrayNum = iVar8 + 1;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          lVar9 = (longlong)iVar8 * 0x80;
          pFVar10 = pFVar10 + 0x80;
          *(undefined8 *)(pFVar5 + lVar9) = local_a8;
          *(undefined8 *)(pFVar5 + lVar9 + 8) = uStack_a0;
          *(undefined8 *)(pFVar5 + lVar9 + 0x10) = local_98;
          *(undefined8 *)(pFVar5 + lVar9 + 0x10 + 8) = uStack_90;
          *(undefined8 *)(pFVar5 + lVar9 + 0x20) = local_88;
          *(undefined8 *)(pFVar5 + lVar9 + 0x20 + 8) = uStack_80;
          *(undefined8 *)(pFVar5 + lVar9 + 0x30) = local_78;
          *(undefined8 *)(pFVar5 + lVar9 + 0x30 + 8) = uStack_70;
          *(undefined8 *)(pFVar5 + lVar9 + 0x40) = local_68;
          *(undefined8 *)(pFVar5 + lVar9 + 0x40 + 8) = uStack_60;
          *(undefined8 *)(pFVar5 + lVar9 + 0x50) = local_58;
          *(undefined8 *)(pFVar5 + lVar9 + 0x50 + 8) = uStack_50;
          *(undefined8 *)(pFVar5 + lVar9 + 0x60) = local_48;
          *(undefined8 *)(pFVar5 + lVar9 + 0x60 + 8) = uStack_40;
          *(undefined8 *)(pFVar5 + lVar9 + 0x70) = local_38;
          *(undefined8 *)(pFVar5 + lVar9 + 0x70 + 8) = uStack_30;
        }
      }
    }
    else {
      piVar1 = &(this->PerInstancePrevTransform).ArrayMax;
      (this->PerInstancePrevTransform).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
  }
  return;
}

// SetLODDistanceScale @ 147d2a2d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetLODDistanceScale
          (UInstancedStaticMeshComponent *this,float param_1)

{
  if (param_1 != this->InstanceLODDistanceScale) {
    this->InstanceLODDistanceScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetNumCustomDataFloats @ 147d2a300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetNumCustomDataFloats
          (UInstancedStaticMeshComponent *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (0 < param_1) {
    iVar2 = param_1;
  }
  if (iVar2 != this->NumCustomDataFloats) {
    this->NumCustomDataFloats = iVar2;
    uVar3 = iVar2 * (this->PerInstanceSMData).ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &(this->PerInstanceSMCustomData).ArrayMax;
    (this->PerInstanceSMCustomData).ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&(this->PerInstanceSMCustomData).AllocatorInstance,0,piVar1);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->PerInstanceSMCustomData,
               this->NumCustomDataFloats * (this->PerInstanceSMData).ArrayNum,Default);
    FPrimitiveInstanceDataManager::NumCustomDataChanged(&this->PrimitiveInstanceDataManager);
  }
  return;
}

// SetPreviousTransformById @ 147d2b0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetPreviousTransformById
          (UInstancedStaticMeshComponent *this,FPrimitiveInstanceId param_1,
          TTransform<double> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  TMatrix<double> *pTVar9;
  longlong lVar10;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TMatrix<double> local_118;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (((this->PrimitiveInstanceDataManager).Mode == ExternalLegacyData) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xf25,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->bHasPreviousTransforms == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHasPreviousTransforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0xf26,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = FInstanceIdIndexMap::IdToIndex
                    ((FInstanceIdIndexMap *)&this->PrimitiveInstanceDataManager,param_1);
  if (param_3) {
    pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform
                       (param_2,&local_98,(TTransform<double> *)&this->_padding_);
  }
  else {
    pTVar8 = &local_1d8;
    local_1d8.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    local_1d8.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
    local_1d8.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    local_1d8.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
    local_1d8.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    local_1d8.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
    local_1d8.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    local_1d8.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
    local_1d8.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    local_1d8.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
    local_1d8.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    local_1d8.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  }
  local_178.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
  local_178.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
  local_178.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
  local_178.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
  local_178.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
  local_178.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
  local_178.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
  local_178.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
  local_178.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
  local_178.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
  local_178.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
  local_178.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
  pTVar9 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_178,&local_118);
  iVar2 = (this->PerInstancePrevTransform).ArrayNum;
  local_248 = pTVar9->M[0][2];
  dStack_240 = pTVar9->M[0][3];
  local_238 = pTVar9->M[1][0];
  dStack_230 = pTVar9->M[1][1];
  local_258 = *(undefined4 *)pTVar9->M[0];
  uStack_254 = *(undefined4 *)((longlong)pTVar9->M[0] + 4);
  uStack_250 = *(undefined4 *)(pTVar9->M[0] + 1);
  uStack_24c = *(undefined4 *)((longlong)pTVar9->M[0] + 0xc);
  local_228 = pTVar9->M[1][2];
  dStack_220 = pTVar9->M[1][3];
  local_208 = pTVar9->M[2][2];
  dStack_200 = pTVar9->M[2][3];
  local_218 = pTVar9->M[2][0];
  dStack_210 = pTVar9->M[2][1];
  local_1e8 = pTVar9->M[3][2];
  dStack_1e0 = pTVar9->M[3][3];
  local_1f8 = pTVar9->M[3][0];
  dStack_1f0 = pTVar9->M[3][1];
  uVar7 = 0;
  if ((int)uVar6 < iVar2) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_268 = (longlong)(int)uVar6, local_260 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->PerInstancePrevTransform).AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar6 * 0x80;
  pFVar1 = pFVar3 + lVar10;
  *(undefined4 *)pFVar1 = local_258;
  *(undefined4 *)(pFVar1 + 4) = uStack_254;
  *(undefined4 *)(pFVar1 + 8) = uStack_250;
  *(undefined4 *)(pFVar1 + 0xc) = uStack_24c;
  *(double *)(pFVar3 + lVar10 + 0x10) = local_248;
  *(double *)(pFVar3 + lVar10 + 0x10 + 8) = dStack_240;
  *(double *)(pFVar3 + lVar10 + 0x20) = local_238;
  *(double *)(pFVar3 + lVar10 + 0x20 + 8) = dStack_230;
  *(double *)(pFVar3 + lVar10 + 0x30) = local_228;
  *(double *)(pFVar3 + lVar10 + 0x30 + 8) = dStack_220;
  *(double *)(pFVar3 + lVar10 + 0x40) = local_218;
  *(double *)(pFVar3 + lVar10 + 0x40 + 8) = dStack_210;
  *(double *)(pFVar3 + lVar10 + 0x50) = local_208;
  *(double *)(pFVar3 + lVar10 + 0x50 + 8) = dStack_200;
  *(double *)(pFVar3 + lVar10 + 0x60) = local_1f8;
  *(double *)(pFVar3 + lVar10 + 0x60 + 8) = dStack_1f0;
  *(double *)(pFVar3 + lVar10 + 0x70) = local_1e8;
  *(double *)(pFVar3 + lVar10 + 0x70 + 8) = dStack_1e0;
  FPrimitiveInstanceDataManager::TransformChanged(&this->PrimitiveInstanceDataManager,param_1);
  return;
}

// SetSMInstanceTransform @ 147d2b600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::SetSMInstanceTransform
          (UInstancedStaticMeshComponent *this,FSMInstanceId *param_1,TTransform<double> *param_2,
          bool param_3,bool param_4,bool param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  plVar1 = &this[-1]._padding_;
  if (param_1->ISMComponent != (UInstancedStaticMeshComponent *)plVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceId.ISMComponent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x1725,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147d2b68d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0xbf0))(plVar1,param_1->InstanceIndex,param_2,param_3);
  return (bool)uVar4;
}

// SetupNewInstanceData @ 147d2bda0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::SetupNewInstanceData
          (UInstancedStaticMeshComponent *this,FInstancedStaticMeshInstanceData *param_1,int param_2
          ,TTransform<double> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TMatrix<double> *pTVar7;
  FBodyInstance *this_00;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  FBodyInstance *local_res8;
  undefined8 local_a8;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  double local_90;
  TMatrix<double> local_88;
  
  pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(param_3,&local_88);
  dVar4 = pTVar7->M[0][1];
  (param_1->Transform).M[0][0] = pTVar7->M[0][0];
  (param_1->Transform).M[0][1] = dVar4;
  dVar4 = pTVar7->M[0][3];
  (param_1->Transform).M[0][2] = pTVar7->M[0][2];
  (param_1->Transform).M[0][3] = dVar4;
  dVar4 = pTVar7->M[1][1];
  (param_1->Transform).M[1][0] = pTVar7->M[1][0];
  (param_1->Transform).M[1][1] = dVar4;
  dVar4 = pTVar7->M[1][3];
  (param_1->Transform).M[1][2] = pTVar7->M[1][2];
  (param_1->Transform).M[1][3] = dVar4;
  dVar4 = pTVar7->M[2][1];
  (param_1->Transform).M[2][0] = pTVar7->M[2][0];
  (param_1->Transform).M[2][1] = dVar4;
  dVar4 = pTVar7->M[2][3];
  (param_1->Transform).M[2][2] = pTVar7->M[2][2];
  (param_1->Transform).M[2][3] = dVar4;
  dVar4 = pTVar7->M[3][1];
  (param_1->Transform).M[3][0] = pTVar7->M[3][0];
  (param_1->Transform).M[3][1] = dVar4;
  dVar4 = pTVar7->M[3][3];
  (param_1->Transform).M[3][2] = pTVar7->M[3][2];
  (param_1->Transform).M[3][3] = dVar4;
  FPrimitiveInstanceDataManager::TransformChanged(&this->PrimitiveInstanceDataManager,param_2);
  if (((this->_padding_ & 8) != 0) && ((this->_padding_ == 0 || ((this->_padding_ & 0x18) != 0x10)))
     ) {
    local_90 = (param_3->Scale3D).ZW.m128d_f64[0];
    local_a0 = *(uint *)(param_3->Scale3D).XY.m128d_f64;
    uStack_9c = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
    uStack_98 = *(uint *)((param_3->Scale3D).XY.m128d_f64 + 1);
    uStack_94 = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
    if ((__real_3f1a36e2e0000000 <=
         (double)CONCAT44(uStack_9c & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_a0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
         (double)CONCAT44(uStack_9c & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_a0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
         __real_3f1a36e2e0000000) ||
       ((__real_3f1a36e2e0000000 <=
         (double)CONCAT44(uStack_94 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uStack_98 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
         (double)CONCAT44(uStack_94 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uStack_98 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
         __real_3f1a36e2e0000000 ||
        (uVar9 = SUB84(local_90,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar10 = (uint)((ulonglong)local_90 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
        (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000)))) {
      this_00 = ::operator_new(400);
      local_res8 = (FBodyInstance *)0x0;
      if (this_00 != (FBodyInstance *)0x0) {
        local_res8 = FBodyInstance::FBodyInstance(this_00);
      }
      iVar6 = TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_>::Insert
                        (&this->InstanceBodies,&local_res8,param_2);
      if (param_2 != iVar6) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InInstanceIndex == BodyIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                           ,0x1375,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      InitInstanceBody(this,iVar6,local_res8);
    }
    else {
      pTVar8 = &this->InstanceBodies;
      local_a8 = 0;
      pFVar2 = (pTVar8->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_a8) &&
         ((FScriptContainerElement *)&local_a8 <
          pFVar2 + (longlong)(this->InstanceBodies).ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = (this->InstanceBodies).ArrayNum;
      piVar1 = &(this->InstanceBodies).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->InstanceBodies).ArrayNum = iVar6 + 1;
      pFVar2 = (pTVar8->AllocatorInstance).Data + (longlong)param_2 * 8;
      memmove(pFVar2 + 8,pFVar2,(longlong)(iVar6 - param_2) << 3);
      *(undefined8 *)((pTVar8->AllocatorInstance).Data + (longlong)param_2 * 8) = local_a8;
    }
  }
  return;
}

// ShouldCreatePhysicsState @ 147d2d760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::ShouldCreatePhysicsState(UInstancedStaticMeshComponent *this)

{
  UObject *pUVar1;
  char cVar2;
  int iVar3;
  
  if (this->bDisableCollision != '\0') {
    return false;
  }
  if ((this->_padding_ & 1) == 0) {
    if (*(int *)((longlong)&this->_padding_ + 4) != 1) {
      return false;
    }
    cVar2 = (**(code **)this->_padding_)(&this->_padding_);
    if (cVar2 == '\0') {
      return false;
    }
  }
  if (((this->_padding_ & 0x40000000) == 0) && ((UObject *)this->_padding_ != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    pUVar1 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    cVar2 = (**(code **)(*(longlong *)(pUVar1 + 6) + 0x10))();
    if (cVar2 == '\0') {
      if (((this->_padding_ & 0x4000000) == 0) &&
         (iVar3 = (**(code **)(this->_padding_ + 0x5e0))(this), iVar3 == 0)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// ShouldInheritPerInstanceData @ 147d2d870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::ShouldInheritPerInstanceData
          (UInstancedStaticMeshComponent *this,UInstancedStaticMeshComponent *param_1)

{
  bool bVar1;
  
  if (((this->bInheritPerInstanceData != '\0') || ((this->_padding_ & 0x200000) == 0)) &&
     (param_1 != (UInstancedStaticMeshComponent *)0x0)) {
    bVar1 = UObject::IsInBlueprint((UObject *)param_1);
    if (bVar1) {
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar1) {
        return true;
      }
    }
  }
  return false;
}

// ShouldInheritPerInstanceData @ 147d2d8d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::ShouldInheritPerInstanceData(UInstancedStaticMeshComponent *this)

{
  int iVar1;
  bool bVar2;
  UObject *this_00;
  UClass *pUVar3;
  
  this_00 = UObject::GetArchetype((UObject *)this);
  if (this_00 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_147d2d90f;
  }
  this_00 = (UObject *)0x0;
LAB_147d2d90f:
  if (((this->bInheritPerInstanceData != '\0') || ((this->_padding_ & 0x200000) == 0)) &&
     (this_00 != (UObject *)0x0)) {
    bVar2 = UObject::IsInBlueprint(this_00);
    if (bVar2) {
      bVar2 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar2) {
        return true;
      }
    }
  }
  return false;
}

// ShouldSkipDirtyAreaOnAddOrRemove @ 147d2d9c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::ShouldSkipDirtyAreaOnAddOrRemove(UInstancedStaticMeshComponent *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147d2d9ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)&this[-1].PrimitiveInstanceDataManager.field_0x10 + 0xc88))();
  return (bool)uVar1;
}

// SupportsRemoveSwap @ 147d32b30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::SupportsRemoveSwap(UInstancedStaticMeshComponent *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarISMForceRemoveAtSwap.Ref;
  if (this->bSupportRemoveAtSwap == '\0') {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
    }
    if (pTVar2->ShadowedValue[0] == 0) {
      return false;
    }
  }
  return true;
}

// SweepComponent @ 147d32bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::SweepComponent
          (UInstancedStaticMeshComponent *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TQuat<double> *param_4,FCollisionShape *param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  bool bVar10;
  FHitResult *pFVar11;
  FHitResult *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  FHitResult local_128;
  
  bVar15 = false;
  memset(&local_128,0,0x100);
  pFVar14 = (this->InstanceBodies).AllocatorInstance.Data;
  iVar2 = (this->InstanceBodies).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar2 * 8;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  while( true ) {
    if ((this->InstanceBodies).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar1) break;
    if (*(FBodyInstance **)pFVar14 != (FBodyInstance *)0x0) {
      bVar10 = FBodyInstance::Sweep
                         (*(FBodyInstance **)pFVar14,&local_128,param_2,param_3,param_4,param_5,
                          param_6);
      if (bVar10) {
        if ((bVar15 == false) || (local_128.Time < param_1->Time)) {
          lVar13 = 2;
          pFVar11 = param_1;
          pFVar12 = &local_128;
          do {
            fVar7 = pFVar12->Time;
            fVar8 = pFVar12->Distance;
            iVar9 = pFVar12->_padding_;
            uVar3 = *(undefined8 *)&pFVar12->Location;
            uVar4 = *(undefined8 *)&(pFVar12->Location).field_0x8;
            pFVar11->FaceIndex = pFVar12->FaceIndex;
            pFVar11->Time = fVar7;
            pFVar11->Distance = fVar8;
            pFVar11->_padding_ = iVar9;
            uVar5 = *(undefined8 *)&(pFVar12->Location).field_0x10;
            uVar6 = *(undefined8 *)&pFVar12->ImpactPoint;
            *(undefined8 *)&pFVar11->Location = uVar3;
            *(undefined8 *)&(pFVar11->Location).field_0x8 = uVar4;
            uVar3 = *(undefined8 *)&(pFVar12->ImpactPoint).field_0x8;
            uVar4 = *(undefined8 *)&(pFVar12->ImpactPoint).field_0x10;
            *(undefined8 *)&(pFVar11->Location).field_0x10 = uVar5;
            *(undefined8 *)&pFVar11->ImpactPoint = uVar6;
            uVar5 = *(undefined8 *)&pFVar12->Normal;
            uVar6 = *(undefined8 *)&(pFVar12->Normal).field_0x8;
            *(undefined8 *)&(pFVar11->ImpactPoint).field_0x8 = uVar3;
            *(undefined8 *)&(pFVar11->ImpactPoint).field_0x10 = uVar4;
            uVar3 = *(undefined8 *)&(pFVar12->Normal).field_0x10;
            uVar4 = *(undefined8 *)&pFVar12->ImpactNormal;
            *(undefined8 *)&pFVar11->Normal = uVar5;
            *(undefined8 *)&(pFVar11->Normal).field_0x8 = uVar6;
            uVar5 = *(undefined8 *)&(pFVar12->ImpactNormal).field_0x8;
            uVar6 = *(undefined8 *)&(pFVar12->ImpactNormal).field_0x10;
            *(undefined8 *)&(pFVar11->Normal).field_0x10 = uVar3;
            *(undefined8 *)&pFVar11->ImpactNormal = uVar4;
            uVar3 = *(undefined8 *)&pFVar12->TraceStart;
            uVar4 = *(undefined8 *)&(pFVar12->TraceStart).field_0x8;
            *(undefined8 *)&(pFVar11->ImpactNormal).field_0x8 = uVar5;
            *(undefined8 *)&(pFVar11->ImpactNormal).field_0x10 = uVar6;
            *(undefined8 *)&pFVar11->TraceStart = uVar3;
            *(undefined8 *)&(pFVar11->TraceStart).field_0x8 = uVar4;
            lVar13 = lVar13 + -1;
            pFVar11 = (FHitResult *)&(pFVar11->TraceStart).field_0x10;
            pFVar12 = (FHitResult *)&(pFVar12->TraceStart).field_0x10;
          } while (lVar13 != 0);
        }
        bVar15 = true;
      }
    }
    pFVar14 = pFVar14 + 8;
  }
  return bVar15;
}

// UpdateBounds @ 147d358c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInstancedStaticMeshComponent::UpdateBounds(UInstancedStaticMeshComponent *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  TMatrix<double> *pTVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auStack_188 [32];
  byte local_168 [16];
  undefined1 local_158 [24];
  TVector<double>_u_0 TStack_140;
  double local_128;
  code *local_118;
  undefined **local_108;
  UInstancedStaticMeshComponent *pUStack_100;
  byte *local_f8;
  undefined ***local_f0;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_168[0] = this->bIsUpdatingBounds;
  local_158._16_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UInstancedStaticMeshComponent::UpdateBounds'::`2'::<lambda_1>,0,0>::
        _vftable_;
  TStack_140._s_0.Y = (double)local_168;
  this->bIsUpdatingBounds = '\x01';
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`UInstancedStaticMeshComponent::UpdateBounds'::__l2::<lambda_1>,void>
              ::Call;
  local_f0 = (undefined ***)0x0;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UInstancedStaticMeshComponent::UpdateBounds'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  TStack_140._s_0.X = (double)this;
  pUStack_100 = this;
  local_f8 = (byte *)TStack_140._s_0.Y;
  iVar9 = (**(code **)(this->_padding_ + 0xc68))(this);
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (iVar9 == 0) {
    local_158._16_8_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    TStack_140._s_0.X = (double)uVar5;
    TStack_140._8_4_ = (undefined4)uVar6;
    TStack_140._12_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    TStack_140._16_4_ = (undefined4)uVar7;
    TStack_140._20_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    this->_padding_ = local_158._16_8_;
    this->_padding_ = uVar5;
    *(undefined4 *)&this->_padding_ = TStack_140._8_4_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = TStack_140._12_4_;
    *(undefined4 *)&this->_padding_ = TStack_140._16_4_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = TStack_140._20_4_;
    this->_padding_ = 0;
    local_128 = 0.0;
    TStack_140._8_8_ = uVar6;
  }
  else if ((this->bUseConservativeBounds == '\0') ||
          ((this->CachedConservativeInstanceBounds).IsValid == '\0')) {
    USceneComponent::UpdateBounds((USceneComponent *)this);
  }
  else {
    pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale
                        ((TTransform<double> *)&this->_padding_,&local_e8);
    UE::Math::TBox<double>::TransformBy
              (&this->CachedConservativeInstanceBounds,(TBox<double> *)local_158,pTVar10);
    dVar4 = TStack_140._s_0.Y - (double)local_158._8_8_;
    dVar3 = TStack_140._s_0.X - (double)local_158._0_8_;
    dVar2 = (double)CONCAT44(TStack_140._20_4_,TStack_140._16_4_) - (double)local_158._16_8_;
    dVar16 = dVar4 * __real_3fe0000000000000;
    dVar1 = dVar3 * __real_3fe0000000000000;
    dVar15 = dVar2 * __real_3fe0000000000000;
    auVar13._0_8_ = dVar1 + (double)local_158._0_8_;
    auVar13._8_8_ = 0;
    this->_padding_ = (longlong)auVar13._0_8_;
    this->_padding_ = (longlong)(dVar16 + (double)local_158._8_8_);
    this->_padding_ = (longlong)(dVar15 + (double)local_158._16_8_);
    this->_padding_ = (longlong)dVar1;
    this->_padding_ = (longlong)dVar16;
    this->_padding_ = (longlong)dVar15;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2) * __real_3fd0000000000000;
    auVar14 = sqrtpd(auVar13,auVar14);
    this->_padding_ = auVar14._0_8_;
  }
  if ((*(char *)((longlong)&this->_padding_ + 2) < '\0') &&
     (((this->_padding_ & 1) != 0 || (*(int *)((longlong)&this->_padding_ + 4) == 1)))) {
    GetOrCalcBounds(this,(TBoxSphereBounds<double,double> *)local_158,
                    (TTransform<double> *)&this->_padding_,Navigation);
  }
  UE::Core::Private::Function::CheckCallable(local_118);
  pcVar8 = local_118;
  pppuVar12 = &local_108;
  if (local_f0 != (undefined ***)0x0) {
    pppuVar12 = local_f0;
  }
  plVar11 = (longlong *)(*(code *)(*pppuVar12)[1])();
  if (pcVar8 == UE::Core::Private::Function::
                TFunctionRefCaller<`UInstancedStaticMeshComponent::UpdateBounds'::__l2::<lambda_1>,void>
                ::Call) {
    *(byte *)(*plVar11 + 0x718) = *(char *)plVar11[1] << 7 | *(byte *)(*plVar11 + 0x718) & 0x7f;
  }
  else {
    (*pcVar8)(plVar11);
  }
  if (local_118 != (code *)0x0) {
    pppuVar12 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar12 = local_f0;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return;
}

// UpdateComponentTransform @ 147d36330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::UpdateComponentTransform
          (UInstancedStaticMeshComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 auStackY_298 [32];
  ForAnyElementType local_260;
  int local_258 [4];
  undefined8 local_248;
  int iStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  cVar4 = (**(code **)(this->_padding_ + 0x4e0))();
  if ((cVar4 == '\0') || (cVar4 = (**(code **)(this->_padding_ + 0xc88))(), cVar4 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((this->_padding_ & 8) == 0) || ((param_1 & SkipPhysicsUpdate) != None)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar6) || (bVar3)) {
    local_260.Data = (FScriptContainerElement *)0x0;
    local_258[0] = 0;
    local_258[1] = 0;
    if (bVar6) {
      uVar10 = (this->PerInstanceSMData).ArrayNum;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if (0 < (int)uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar10,&local_260,0,local_258 + 1);
      }
    }
    uVar10 = 0;
    if (0 < (this->PerInstanceSMData).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar10 < (this->PerInstanceSMData).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Math::TTransform<double>::SetFromMatrix
                  (&local_108,
                   (TMatrix<double> *)
                   ((this->PerInstanceSMData).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x80)
                  );
        local_228.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_228.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_228.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_228.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_228.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_228.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_228.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_228.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_228.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_228.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_228.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_228,&local_108,(TTransform<double> *)&this->_padding_);
        if (bVar6) {
          uVar7 = 0;
          if ((int)uVar10 < (this->PerInstanceSMData).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UE::Math::TTransform<double>::SetFromMatrix
                    (&local_a8,
                     (TMatrix<double> *)
                     ((this->PerInstanceSMData).AllocatorInstance.Data +
                     (longlong)(int)uVar10 * 0x80));
          local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1c8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1c8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_1c8,&local_a8,&this->PreviousComponentTransform);
          local_168 = local_228.Rotation.XY.m128d_f64[0];
          dStack_160 = local_228.Rotation.XY.m128d_f64[1];
          local_158 = local_228.Rotation.ZW.m128d_f64[0];
          dStack_150 = local_228.Rotation.ZW.m128d_f64[1];
          local_148 = local_228.Translation.XY.m128d_f64[0];
          dStack_140 = local_228.Translation.XY.m128d_f64[1];
          local_138 = local_228.Translation.ZW.m128d_f64[0];
          dStack_130 = local_228.Translation.ZW.m128d_f64[1];
          local_128 = local_228.Scale3D.XY.m128d_f64[0];
          dStack_120 = local_228.Scale3D.XY.m128d_f64[1];
          local_118 = local_228.Scale3D.ZW.m128d_f64[0];
          dStack_110 = local_228.Scale3D.ZW.m128d_f64[1];
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x60,0x10,2,&local_260,local_258,local_258 + 1);
          pFVar9 = local_260.Data + (longlong)iVar8 * 0x60;
          *(double *)pFVar9 = local_1c8.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar9 + 8) = local_1c8.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar9 + 0x10) = local_1c8.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar9 + 0x18) = local_1c8.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar9 + 0x20) = local_1c8.Translation.XY.m128d_f64[0];
          *(double *)(pFVar9 + 0x28) = local_1c8.Translation.XY.m128d_f64[1];
          *(double *)(pFVar9 + 0x30) = local_1c8.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar9 + 0x38) = local_1c8.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar9 + 0x40) = local_1c8.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar9 + 0x48) = local_1c8.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar9 + 0x50) = local_1c8.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar9 + 0x58) = local_1c8.Scale3D.ZW.m128d_f64[1];
          *(double *)(pFVar9 + 0x60) = local_168;
          *(double *)(pFVar9 + 0x68) = dStack_160;
          *(double *)(pFVar9 + 0x70) = local_158;
          *(double *)(pFVar9 + 0x78) = dStack_150;
          *(double *)(pFVar9 + 0x80) = local_148;
          *(double *)(pFVar9 + 0x88) = dStack_140;
          *(double *)(pFVar9 + 0x90) = local_138;
          *(double *)(pFVar9 + 0x98) = dStack_130;
          *(double *)(pFVar9 + 0xa0) = local_128;
          *(double *)(pFVar9 + 0xa8) = dStack_120;
          *(double *)(pFVar9 + 0xb0) = local_118;
          *(double *)(pFVar9 + 0xb8) = dStack_110;
        }
        if (bVar3) {
          UpdateInstanceBodyTransform(this,uVar10,&local_228,param_2 == TeleportPhysics);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (this->PerInstanceSMData).ArrayNum);
    }
    if (bVar6) {
      iVar8 = local_258[0];
      pcVar1 = *(code **)(this->_padding_ + 0xc78);
      local_248 = local_260.Data;
      if ((local_258[0] < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iStack_240 = iVar8;
      local_238 = (undefined4)local_248;
      uStack_234 = local_248._4_4_;
      iStack_230 = iVar8;
      uStack_22c = uStack_23c;
      (*pcVar1)(this,&local_238);
    }
    if (local_260.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data);
    }
  }
  FPrimitiveInstanceDataManager::PrimitiveTransformChanged(&this->PrimitiveInstanceDataManager);
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Rotation.XY.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Translation.XY.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Translation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Scale3D.XY.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->PreviousComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->PreviousComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return;
}

// UpdateInstanceBodyTransform @ 147d374f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::UpdateInstanceBodyTransform
          (UInstancedStaticMeshComponent *this,int param_1,TTransform<double> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBodyInstance *this_00;
  FBodyInstance *pFVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  TVector<double>_u_0 local_48;
  double local_20;
  
  lVar5 = (longlong)param_1;
  if (((this->_padding_ & 8) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPhysicsStateCreated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0x10f8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((-1 < param_1) && (param_1 < (this->InstanceBodies).ArrayNum)) {
    pFVar4 = (FBodyInstance *)0x0;
    uVar6 = 0;
    if (param_1 < (this->InstanceBodies).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_20 = (param_2->Scale3D).ZW.m128d_f64[0];
    pFVar1 = (this->InstanceBodies).AllocatorInstance.Data;
    uVar6 = *(uint *)(param_2->Scale3D).XY.m128d_f64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (uVar6 = SUB84(local_20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)local_20 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
       (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) {
      if (*(FBodyInstance **)(pFVar1 + lVar5 * 8) == (FBodyInstance *)0x0) {
        this_00 = ::operator_new(400);
        if (this_00 != (FBodyInstance *)0x0) {
          pFVar4 = FBodyInstance::FBodyInstance(this_00);
        }
        *(FBodyInstance **)(pFVar1 + lVar5 * 8) = pFVar4;
        InitInstanceBody(this,param_1,pFVar4);
      }
      else {
        FBodyInstance::SetBodyTransform
                  (*(FBodyInstance **)(pFVar1 + lVar5 * 8),param_2,param_3,true);
        local_48._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
        local_48._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
        local_48._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
        FBodyInstance::UpdateBodyScale
                  (*(FBodyInstance **)(pFVar1 + lVar5 * 8),(TVector<double> *)&local_48._s_0,false);
      }
    }
    else if (*(FBodyInstance **)(pFVar1 + lVar5 * 8) != (FBodyInstance *)0x0) {
      FBodyInstance::TermBody(*(FBodyInstance **)(pFVar1 + lVar5 * 8),false);
      pFVar4 = *(FBodyInstance **)(pFVar1 + lVar5 * 8);
      if (pFVar4 != (FBodyInstance *)0x0) {
        FBodyInstance::~FBodyInstance(pFVar4);
        ::operator_delete(pFVar4,400);
      }
      *(undefined8 *)(pFVar1 + lVar5 * 8) = 0;
    }
  }
  return;
}

// UpdateInstanceTransform @ 147d37fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInstancedStaticMeshComponent::UpdateInstanceTransform
          (UInstancedStaticMeshComponent *this,int param_1,TTransform<double> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  TTransform<double> *pTVar9;
  TMatrix<double> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_478 [32];
  longlong local_458;
  longlong local_450;
  TTransform<double> *local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  TTransform<double> local_428;
  TMatrix<double> local_3c8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_478;
  if ((param_1 < 0) || ((this->PerInstanceSMData).ArrayNum <= param_1)) {
    bVar5 = false;
  }
  else {
    this->CachedBounds[0].bIsValid = false;
    this->CachedBounds[1].bIsValid = false;
    this->CachedBounds[2].bIsValid = false;
    iVar2 = (this->PerInstanceSMData).ArrayNum;
    uVar8 = 0;
    if (param_1 < iVar2) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_458 = (longlong)param_1;
      local_450 = (longlong)iVar2;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar11 = (this->PerInstanceSMData).AllocatorInstance.Data + (longlong)param_1 * 0x80;
    UE::Math::TTransform<double>::SetFromMatrix(&local_108,(TMatrix<double> *)pFVar11);
    if (param_3) {
      pTVar9 = UE::Math::TTransform<double>::GetRelativeTransform
                         (param_2,&local_a8,(TTransform<double> *)&this->_padding_);
    }
    else {
      pTVar9 = &local_428;
      local_428.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      local_428.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
      local_428.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      local_428.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
      local_428.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_428.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_428.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_428.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      local_428.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      local_428.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
      local_428.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      local_428.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
    }
    local_288.Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
    local_288.Rotation.XY.m128d_f64[1] = (pTVar9->Rotation).XY.m128d_f64[1];
    local_288.Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
    local_288.Rotation.ZW.m128d_f64[1] = (pTVar9->Rotation).ZW.m128d_f64[1];
    plVar1 = &this->_padding_;
    local_288.Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
    local_288.Translation.XY.m128d_f64[1] = (pTVar9->Translation).XY.m128d_f64[1];
    local_288.Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
    local_288.Translation.ZW.m128d_f64[1] = (pTVar9->Translation).ZW.m128d_f64[1];
    local_288.Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
    local_288.Scale3D.XY.m128d_f64[1] = (pTVar9->Scale3D).XY.m128d_f64[1];
    local_288.Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
    local_288.Scale3D.ZW.m128d_f64[1] = (pTVar9->Scale3D).ZW.m128d_f64[1];
    pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_288,&local_3c8);
    dVar4 = pTVar10->M[0][1];
    *(double *)&pFVar11->field_0x0 = pTVar10->M[0][0];
    *(double *)(pFVar11 + 8) = dVar4;
    dVar4 = pTVar10->M[0][3];
    *(double *)(pFVar11 + 0x10) = pTVar10->M[0][2];
    *(double *)(pFVar11 + 0x18) = dVar4;
    dVar4 = pTVar10->M[1][1];
    *(double *)(pFVar11 + 0x20) = pTVar10->M[1][0];
    *(double *)(pFVar11 + 0x28) = dVar4;
    dVar4 = pTVar10->M[1][3];
    *(double *)(pFVar11 + 0x30) = pTVar10->M[1][2];
    *(double *)(pFVar11 + 0x38) = dVar4;
    dVar4 = pTVar10->M[2][1];
    *(double *)(pFVar11 + 0x40) = pTVar10->M[2][0];
    *(double *)(pFVar11 + 0x48) = dVar4;
    dVar4 = pTVar10->M[2][3];
    *(double *)(pFVar11 + 0x50) = pTVar10->M[2][2];
    *(double *)(pFVar11 + 0x58) = dVar4;
    dVar4 = pTVar10->M[3][1];
    *(double *)(pFVar11 + 0x60) = pTVar10->M[3][0];
    *(double *)(pFVar11 + 0x68) = dVar4;
    dVar4 = pTVar10->M[3][3];
    *(double *)(pFVar11 + 0x70) = pTVar10->M[3][2];
    *(double *)(pFVar11 + 0x78) = dVar4;
    FPrimitiveInstanceDataManager::TransformChanged(&this->PrimitiveInstanceDataManager,param_1);
    if ((this->_padding_ & 8) != 0) {
      if (param_3) {
        local_228.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
        local_228.Rotation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
        local_228.Rotation.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
        local_228.Rotation.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
        local_228.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
        local_228.Rotation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
        local_228.Rotation.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
        local_228.Rotation.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
        local_228.Translation.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(param_2->Translation).XY.m128d_f64;
        local_228.Translation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
        local_228.Translation.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
        local_228.Translation.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
        local_228.Translation.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
        local_228.Translation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
        local_228.Translation.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
        local_228.Translation.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
        local_228.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
        local_228.Scale3D.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
        local_228.Scale3D.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
        local_228.Scale3D.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
        local_228.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
        local_228.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
        local_228.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
        local_228.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        local_348.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_348.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_348.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_348.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_348.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_348.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_348.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_348.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_348.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_348.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_348.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_348.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_348.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_348.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_348.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_348.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_348,&local_288,(TTransform<double> *)plVar1);
        local_228.Rotation.XY.m128d_f64[0]._0_4_ = local_348.Rotation.XY.m128d_f64[0]._0_4_;
        local_228.Rotation.XY.m128d_f64[0]._4_4_ = local_348.Rotation.XY.m128d_f64[0]._4_4_;
        local_228.Rotation.XY.m128d_f64[1]._0_4_ = local_348.Rotation.XY.m128d_f64[1]._0_4_;
        local_228.Rotation.XY.m128d_f64[1]._4_4_ = local_348.Rotation.XY.m128d_f64[1]._4_4_;
        local_228.Rotation.ZW.m128d_f64[0]._0_4_ = local_348.Rotation.ZW.m128d_f64[0]._0_4_;
        local_228.Rotation.ZW.m128d_f64[0]._4_4_ = local_348.Rotation.ZW.m128d_f64[0]._4_4_;
        local_228.Rotation.ZW.m128d_f64[1]._0_4_ = local_348.Rotation.ZW.m128d_f64[1]._0_4_;
        local_228.Rotation.ZW.m128d_f64[1]._4_4_ = local_348.Rotation.ZW.m128d_f64[1]._4_4_;
        local_228.Translation.XY.m128d_f64[0]._0_4_ = local_348.Translation.XY.m128d_f64[0]._0_4_;
        local_228.Translation.XY.m128d_f64[0]._4_4_ = local_348.Translation.XY.m128d_f64[0]._4_4_;
        local_228.Translation.XY.m128d_f64[1]._0_4_ = local_348.Translation.XY.m128d_f64[1]._0_4_;
        local_228.Translation.XY.m128d_f64[1]._4_4_ = local_348.Translation.XY.m128d_f64[1]._4_4_;
        local_228.Translation.ZW.m128d_f64[0]._0_4_ = local_348.Translation.ZW.m128d_f64[0]._0_4_;
        local_228.Translation.ZW.m128d_f64[0]._4_4_ = local_348.Translation.ZW.m128d_f64[0]._4_4_;
        local_228.Translation.ZW.m128d_f64[1]._0_4_ = local_348.Translation.ZW.m128d_f64[1]._0_4_;
        local_228.Translation.ZW.m128d_f64[1]._4_4_ = local_348.Translation.ZW.m128d_f64[1]._4_4_;
        local_228.Scale3D.XY.m128d_f64[0]._0_4_ = local_348.Scale3D.XY.m128d_f64[0]._0_4_;
        local_228.Scale3D.XY.m128d_f64[0]._4_4_ = local_348.Scale3D.XY.m128d_f64[0]._4_4_;
        local_228.Scale3D.XY.m128d_f64[1]._0_4_ = local_348.Scale3D.XY.m128d_f64[1]._0_4_;
        local_228.Scale3D.XY.m128d_f64[1]._4_4_ = local_348.Scale3D.XY.m128d_f64[1]._4_4_;
        local_228.Scale3D.ZW.m128d_f64[0]._0_4_ = local_348.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_228.Scale3D.ZW.m128d_f64[0]._4_4_ = local_348.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_228.Scale3D.ZW.m128d_f64[1]._0_4_ = local_348.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_228.Scale3D.ZW.m128d_f64[1]._4_4_ = local_348.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      UpdateInstanceBodyTransform(this,param_1,&local_228,param_5);
    }
    local_438 = (TTransform<double> *)CONCAT44(local_438._4_4_,(undefined4)local_438);
    if (((this->_padding_ & 0x400000) != 0) &&
       (local_438 = (TTransform<double> *)CONCAT44(local_438._4_4_,(undefined4)local_438),
       (this->_padding_ & 1) != 0)) {
      cVar7 = (**(code **)(this->_padding_ + 0xc88))(this);
      if (cVar7 == '\0') {
        (**(code **)(this->_padding_ + 0xc80))(this);
      }
      else {
        pcVar3 = *(code **)(this->_padding_ + 0xc78);
        local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_1c8,&local_108,(TTransform<double> *)plVar1);
        if (param_3) {
          local_168 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
          uStack_164 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
          uStack_160 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
          uStack_15c = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
          local_158 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
          uStack_154 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
          uStack_150 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
          uStack_14c = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
          local_148 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
          uStack_144 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
          uStack_140 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
          uStack_13c = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
          local_138 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
          uStack_134 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
          uStack_130 = *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
          uStack_12c = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
          local_128 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
          uStack_124 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
          uStack_120 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
          uStack_11c = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
          local_118 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
          uStack_114 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
          uStack_110 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
          uStack_10c = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
        }
        else {
          local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_2e8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_2e8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_2e8,param_2,(TTransform<double> *)plVar1);
          local_168 = local_2e8.Rotation.XY.m128d_f64[0]._0_4_;
          uStack_164 = local_2e8.Rotation.XY.m128d_f64[0]._4_4_;
          uStack_160 = local_2e8.Rotation.XY.m128d_f64[1]._0_4_;
          uStack_15c = local_2e8.Rotation.XY.m128d_f64[1]._4_4_;
          local_158 = local_2e8.Rotation.ZW.m128d_f64[0]._0_4_;
          uStack_154 = local_2e8.Rotation.ZW.m128d_f64[0]._4_4_;
          uStack_150 = local_2e8.Rotation.ZW.m128d_f64[1]._0_4_;
          uStack_14c = local_2e8.Rotation.ZW.m128d_f64[1]._4_4_;
          local_148 = local_2e8.Translation.XY.m128d_f64[0]._0_4_;
          uStack_144 = local_2e8.Translation.XY.m128d_f64[0]._4_4_;
          uStack_140 = local_2e8.Translation.XY.m128d_f64[1]._0_4_;
          uStack_13c = local_2e8.Translation.XY.m128d_f64[1]._4_4_;
          local_138 = local_2e8.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_134 = local_2e8.Translation.ZW.m128d_f64[0]._4_4_;
          uStack_130 = local_2e8.Translation.ZW.m128d_f64[1]._0_4_;
          uStack_12c = local_2e8.Translation.ZW.m128d_f64[1]._4_4_;
          local_128 = local_2e8.Scale3D.XY.m128d_f64[0]._0_4_;
          uStack_124 = local_2e8.Scale3D.XY.m128d_f64[0]._4_4_;
          uStack_120 = local_2e8.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_11c = local_2e8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_118 = local_2e8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_114 = local_2e8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uStack_110 = local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uStack_10c = local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        local_448 = &local_1c8;
        uStack_440 = 2;
        uStack_430 = 2;
        uStack_42c = uStack_43c;
        local_438 = local_448;
        (*pcVar3)(this,&local_438);
      }
    }
    if (param_4) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
    bVar5 = true;
  }
  return bVar5;
}

// UpdateInstanceTransformById @ 147d38460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UInstancedStaticMeshComponent::UpdateInstanceTransformById
          (UInstancedStaticMeshComponent *this,FPrimitiveInstanceId param_1,
          TTransform<double> *param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->PrimitiveInstanceDataManager).Mode == ExternalLegacyData) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimitiveInstanceDataManager.GetMode() != FPrimitiveInstanceDataManager::EMode::ExternalLegacyData"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0xf1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(this->_padding_ + 0xbf0);
  iVar3 = FInstanceIdIndexMap::IdToIndex
                    ((FInstanceIdIndexMap *)&this->PrimitiveInstanceDataManager,param_1);
  (*pcVar1)(this,iVar3,param_2,param_3,0,param_4);
  return;
}

// operator() @ 15051b790

bool __thiscall
`UInstancedStaticMeshComponent::SetCustomData'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1853197200457207681>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1853197200457207681>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051b7d0

bool __thiscall
`UInstancedStaticMeshComponent::SetCustomData'::__l18::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1853197200457207686>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1853197200457207686>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

