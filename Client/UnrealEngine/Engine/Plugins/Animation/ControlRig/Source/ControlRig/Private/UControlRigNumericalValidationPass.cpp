// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticClass @ 14a48d8c0

UClass * __cdecl UControlRigNumericalValidationPass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigNumericalValidationPass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigNumericalValidationPass",
               &Z_Registration_Info_UClass_UControlRigNumericalValidationPass.InnerSingleton,
               StaticRegisterNativesUControlRigNumericalValidationPass,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigNumericalValidationPass>,
               InternalVTableHelperCtorCaller<UControlRigNumericalValidationPass>,local_res8,
               UControlRigValidationPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigNumericalValidationPass.InnerSingleton;
}

// UControlRigNumericalValidationPass @ 14a517b10

UControlRigNumericalValidationPass * __thiscall
UControlRigNumericalValidationPass::UControlRigNumericalValidationPass
          (UControlRigNumericalValidationPass *this,FVTableHelper *param_1)

{
  UControlRigValidationPass::UControlRigValidationPass((UControlRigValidationPass *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigNumericalValidationPass__6B_;
  (this->EventNameA).ComparisonIndex = 0;
  (this->EventNameA).Number = 0;
  (this->EventNameB).ComparisonIndex = 0;
  (this->EventNameB).Number = 0;
  (this->Pose).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pose).Elements.ArrayNum = 0;
  (this->Pose).Elements.ArrayMax = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  (this->Pose).HierarchyTopologyVersion = -1;
  (this->Pose).PoseHash = -1;
  (this->Pose).CachedPoseHash = -1;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  return this;
}

// UControlRigNumericalValidationPass @ 14a517ba0

UControlRigNumericalValidationPass * __thiscall
UControlRigNumericalValidationPass::UControlRigNumericalValidationPass
          (UControlRigNumericalValidationPass *this,FObjectInitializer *param_1)

{
  UControlRigValidationPass::UControlRigValidationPass((UControlRigValidationPass *)this,param_1);
  this->bCheckControls = true;
  this->bCheckBones = true;
  this->_padding_ = (longlong)&___7UControlRigNumericalValidationPass__6B_;
  *(undefined8 *)&(this->EventNameA).Number = 0;
  (this->EventNameB).Number = 0;
  (this->Pose).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pose).Elements.ArrayNum = 0;
  (this->Pose).Elements.ArrayMax = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  this->bCheckCurves = true;
  this->TranslationPrecision = 0.01;
  this->RotationPrecision = 0.01;
  this->ScalePrecision = 0.001;
  this->CurvePrecision = 0.01;
  (this->EventNameA).ComparisonIndex = 0;
  (this->Pose).HierarchyTopologyVersion = -1;
  (this->Pose).PoseHash = -1;
  (this->Pose).CachedPoseHash = -1;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  return this;
}

// ~UControlRigNumericalValidationPass @ 14a518cb0

void __thiscall
UControlRigNumericalValidationPass::~UControlRigNumericalValidationPass
          (UControlRigNumericalValidationPass *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UControlRigNumericalValidationPass__6B_;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Pose).KeyToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Pose).KeyToIndex);
  pFVar2 = (this->Pose).Elements.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UControlRigValidationPass::~UControlRigValidationPass((UControlRigValidationPass *)this);
  return;
}

// GetPrivateStaticClass @ 14a531390

UClass * __cdecl UControlRigNumericalValidationPass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigNumericalValidationPass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigNumericalValidationPass",
               &Z_Registration_Info_UClass_UControlRigNumericalValidationPass.InnerSingleton,
               StaticRegisterNativesUControlRigNumericalValidationPass,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigNumericalValidationPass>,
               InternalVTableHelperCtorCaller<UControlRigNumericalValidationPass>,local_res8,
               UControlRigValidationPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigNumericalValidationPass.InnerSingleton;
}

// OnEvent @ 14a5328d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigNumericalValidationPass::OnEvent
          (UControlRigNumericalValidationPass *this,UControlRig *param_1,FName *param_2,
          FControlRigValidationContext *param_3)

{
  float fVar1;
  char cVar2;
  ushort uVar3;
  URigHierarchy *this_00;
  FRigVMDrawInterface *this_01;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  bool bVar8;
  int iVar9;
  FRigBaseElement *pFVar10;
  ulonglong uVar11;
  FCachedRigElement *this_02;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar41;
  double dVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar47;
  double dVar46;
  uint uVar48;
  uint uVar50;
  uint uVar51;
  uint uVar53;
  double dVar52;
  undefined1 auVar49 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auVar62 [16];
  uint uVar64;
  undefined1 auVar63 [16];
  uint uVar66;
  undefined1 auVar65 [16];
  float fVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined1 auStackY_348 [32];
  undefined1 local_308 [8];
  FScriptContainerElement *local_300;
  uint local_2f8;
  undefined1 local_2e8 [16];
  uint local_2c8;
  double local_2c0;
  double local_2b8;
  FRigElementKeyCollection local_2a8;
  FCachedRigElement *local_298;
  undefined1 local_288 [16];
  FString local_268;
  double local_258 [2];
  double local_248 [2];
  undefined1 local_238 [16];
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  undefined1 local_1e8 [32];
  FString local_1c8;
  TTransform<double> local_1b8;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  void *local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  if (*param_2 == this->EventNameA) {
    local_2a8.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.Keys.ArrayNum = 0;
    local_2a8.Keys.ArrayMax = 0;
    URigHierarchy::GetPose
              ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,(FRigPose *)local_158,false,All,
               &local_2a8,true);
    if (local_2a8.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Keys.AllocatorInstance.Data);
    }
    FRigPose::operator=(&this->Pose,(FRigPose *)local_158);
    local_f0 = 0;
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_138);
    if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._0_8_);
    }
  }
  else if (*param_2 == this->EventNameB) {
    this_02 = (FCachedRigElement *)(this->Pose).Elements.AllocatorInstance.Data;
    local_2c8 = (this->Pose).Elements.ArrayNum;
    uVar11 = (ulonglong)(int)local_2c8;
    uVar60 = (undefined4)__real_bff0000000000000;
    uVar61 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    uVar70 = (undefined4)__real_3ff0000000000000;
    uVar71 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_298 = (FCachedRigElement *)((longlong)this_02 + uVar11 * 0x110);
    fVar67 = __real_322bcc77;
    uVar64 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar66 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    while( true ) {
      if ((this->Pose).Elements.ArrayNum != (int)uVar11) {
        `TCheckedPointerIterator<FRigPoseElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_308);
      }
      if (this_02 == local_298) break;
      bVar8 = FCachedRigElement::UpdateCache
                        (this_02,(param_1->DynamicHierarchy).field0_0x0.DebugPtr);
      if (!bVar8) goto LAB_14a533178;
      local_2f8 = (this_02->Key).Name.Number;
      local_300 = *(FScriptContainerElement **)&this_02->Key;
      uVar3 = this_02->Index;
      uVar40 = 0xffffffff;
      if (uVar3 != 0xffff) {
        uVar40 = (uint)uVar3;
      }
      if ((ERigElementType)local_300 == Control) {
        cVar2 = this->bCheckControls;
LAB_14a532acb:
        if (cVar2 != '\0') {
          local_1b8.Rotation.XY.m128d_f64[0] = *(double *)&this_02[1].Key;
          local_1b8.Rotation.XY.m128d_f64[1] = *(double *)&this_02[1].Key.Name.Number;
          local_1b8.Rotation.ZW.m128d_f64[0] = *(double *)&this_02[1].ContainerVersion;
          local_1b8.Rotation.ZW.m128d_f64[1] = (double)this_02[1].Element;
          local_1b8.Translation.XY.m128d_f64[0] = *(double *)&this_02[2].Key;
          local_1b8.Translation.XY.m128d_f64[1] = *(double *)&this_02[2].Key.Name.Number;
          local_1b8.Translation.ZW.m128d_f64[0] = *(double *)&this_02[2].ContainerVersion;
          local_1b8.Translation.ZW.m128d_f64[1] = (double)this_02[2].Element;
          local_1b8.Scale3D.XY.m128d_f64[0] = *(double *)&this_02[3].Key;
          local_1b8.Scale3D.XY.m128d_f64[1] = *(double *)&this_02[3].Key.Name.Number;
          local_1b8.Scale3D.ZW.m128d_f64[0] = *(double *)&this_02[3].ContainerVersion;
          local_1b8.Scale3D.ZW.m128d_f64[1] = (double)this_02[3].Element;
          uVar40 = 0xffffffff;
          if (uVar3 != 0xffff) {
            uVar40 = (uint)uVar3;
          }
          URigHierarchy::GetGlobalTransformByIndex
                    ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,(TTransform<double> *)local_158
                     ,uVar40,false);
          local_258[0] = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
          local_258[1] = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
          auVar31._0_8_ =
               local_1b8.Rotation.XY.m128d_f64[0] * local_1b8.Rotation.XY.m128d_f64[0] +
               local_1b8.Rotation.ZW.m128d_f64[0] * local_1b8.Rotation.ZW.m128d_f64[0];
          auVar31._8_8_ =
               local_1b8.Rotation.XY.m128d_f64[1] * local_1b8.Rotation.XY.m128d_f64[1] +
               local_1b8.Rotation.ZW.m128d_f64[1] * local_1b8.Rotation.ZW.m128d_f64[1];
          auVar56._8_4_ = SUB84(auVar31._8_8_,0);
          auVar56._0_8_ = auVar31._0_8_;
          auVar56._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
          auVar19._0_8_ = auVar56._8_8_ + auVar31._0_8_;
          auVar19._8_8_ = auVar31._0_8_ + auVar31._8_8_;
          local_248[0] = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
          local_248[1] = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
          auVar32 = sqrtpd(auVar31,auVar19);
          uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= auVar19._0_8_);
          uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= auVar19._8_8_);
          uVar40 = (uint)(uVar12 >> 0x20);
          uVar41 = (uint)(uVar13 >> 0x20);
          auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
          auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
          auVar55._0_8_ = uVar12 & (ulonglong)(auVar54._0_8_ * local_1b8.Rotation.XY.m128d_f64[0]);
          uVar11 = uVar13 & (ulonglong)(auVar54._8_8_ * local_1b8.Rotation.XY.m128d_f64[1]);
          auVar55._8_4_ = (undefined4)uVar11;
          auVar55._12_4_ = (undefined4)(uVar11 >> 0x20);
          uVar43 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar20._0_4_ = ~(uint)uVar12 & uVar43;
          uVar44 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
          auVar20._4_4_ = ~uVar40 & uVar44;
          uVar45 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar20._8_4_ = ~(uint)uVar13 & uVar45;
          uVar47 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          auVar20._12_4_ = ~uVar41 & uVar47;
          local_1e8._0_16_ = auVar55 | auVar20;
          auVar69._0_8_ = (ulonglong)(auVar32._0_8_ * local_1b8.Rotation.ZW.m128d_f64[0]) & uVar12;
          uVar11 = (ulonglong)(auVar32._8_8_ * local_1b8.Rotation.ZW.m128d_f64[1]) & uVar13;
          auVar69._8_4_ = (undefined4)uVar11;
          auVar69._12_4_ = (undefined4)(uVar11 >> 0x20);
          auVar33._0_8_ = (double)local_158._0_8_ * (double)local_158._0_8_ + local_148 * local_148;
          auVar33._8_8_ =
               (double)local_158._8_8_ * (double)local_158._8_8_ + dStack_140 * dStack_140;
          uVar48 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          uVar50 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
          uVar51 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          uVar53 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          auVar21._8_4_ = SUB84(auVar33._8_8_,0);
          auVar21._0_8_ = auVar33._0_8_;
          auVar21._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
          auVar32._4_4_ = ~uVar40 & uVar50;
          auVar32._0_4_ = ~(uint)uVar12 & uVar48;
          auVar32._8_4_ = ~(uint)uVar13 & uVar51;
          auVar32._12_4_ = ~uVar41 & uVar53;
          auVar22._0_8_ = auVar21._8_8_ + auVar33._0_8_;
          auVar22._8_8_ = auVar33._0_8_ + auVar33._8_8_;
          auVar54 = sqrtpd(auVar33,auVar22);
          uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= auVar22._0_8_);
          uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= auVar22._8_8_);
          uVar40 = (uint)(uVar12 >> 0x20);
          uVar41 = (uint)(uVar13 >> 0x20);
          auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar54);
          auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar54);
          auVar23._0_4_ = ~(uint)uVar12 & uVar43;
          auVar23._4_4_ = ~uVar40 & uVar44;
          auVar23._8_4_ = ~(uint)uVar13 & uVar45;
          auVar23._12_4_ = ~uVar41 & uVar47;
          auVar57._0_8_ = uVar12 & (ulonglong)(auVar56._0_8_ * (double)local_158._0_8_);
          uVar11 = uVar13 & (ulonglong)(auVar56._8_8_ * (double)local_158._8_8_);
          auVar57._8_4_ = (undefined4)uVar11;
          auVar57._12_4_ = (undefined4)(uVar11 >> 0x20);
          auVar65._0_8_ = (ulonglong)(auVar54._0_8_ * local_148) & uVar12;
          uVar11 = (ulonglong)(auVar54._8_8_ * dStack_140) & uVar13;
          auVar65._8_4_ = (undefined4)uVar11;
          auVar65._12_4_ = (undefined4)(uVar11 >> 0x20);
          auVar54._4_4_ = ~uVar40 & uVar50;
          auVar54._0_4_ = ~(uint)uVar12 & uVar48;
          auVar54._8_4_ = ~(uint)uVar13 & uVar51;
          auVar54._12_4_ = ~uVar41 & uVar53;
          auVar65 = auVar65 | auVar54;
          dVar68 = (double)(this->TranslationPrecision + fVar67);
          dVar15 = local_1b8.Translation.XY.m128d_f64[0] - local_138;
          dVar42 = local_1b8.Translation.ZW.m128d_f64[0] - local_128;
          dVar38 = local_1b8.Translation.XY.m128d_f64[1] - dStack_130;
          dVar52 = SUB168(auVar69 | auVar32,8);
          dVar18 = dVar52;
          if ((double)CONCAT44(uVar61,uVar60) <= dVar52) {
            dVar46 = dVar52;
            if ((double)CONCAT44(uVar71,uVar70) <= dVar52) {
              dVar46 = (double)CONCAT44(uVar71,uVar70);
              dVar18 = dVar46;
            }
          }
          else {
            dVar46 = (double)CONCAT44(uVar61,uVar60);
            if ((double)CONCAT44(uVar71,uVar70) <= dVar52) {
              dVar18 = (double)CONCAT44(uVar71,uVar70);
            }
          }
          local_2e8 = auVar65;
          local_2b8 = dVar68;
          local_238 = auVar57 | auVar23;
          dVar16 = acos(dVar46);
          auVar5._4_8_ = SUB168(auVar57 | auVar23,8);
          auVar5._0_4_ = auVar65._4_4_;
          auVar58._0_8_ = auVar5._0_8_ << 0x20;
          auVar58._8_4_ = auVar65._8_4_;
          auVar58._12_4_ = auVar65._12_4_;
          dVar59 = auVar58._8_8_;
          dVar46 = dVar59;
          if ((double)CONCAT44(uVar61,uVar60) <= dVar59) {
            dVar17 = dVar59;
            if ((double)CONCAT44(uVar71,uVar70) <= dVar59) {
              dVar17 = (double)CONCAT44(uVar71,uVar70);
              dVar46 = dVar17;
            }
          }
          else {
            dVar17 = (double)CONCAT44(uVar61,uVar60);
            if ((double)CONCAT44(uVar71,uVar70) <= dVar59) {
              dVar46 = (double)CONCAT44(uVar71,uVar70);
            }
          }
          local_2c0 = (double)(this->RotationPrecision + __real_322bcc77);
          dVar17 = acos(dVar17);
          dVar16 = dVar16 * __real_4000000000000000 - dVar17 * __real_4000000000000000;
          bVar8 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar66,
                                   SUB84(dVar16,0) & uVar64) <= local_2c0 &&
                  ((double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar66,
                                    SUB84(dVar42,0) & uVar64) <= dVar68 &&
                  ((double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar66,
                                    SUB84(dVar38,0) & uVar64) <= dVar68 &&
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar66,
                                   SUB84(dVar15,0) & uVar64) <= dVar68));
          if (dVar52 < (double)CONCAT44(uVar61,uVar60)) {
            dVar18 = (double)CONCAT44(uVar61,uVar60);
          }
          dVar18 = acos(dVar18);
          dVar52 = __real_3e45798ee0000000;
          if (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)(dVar18 + dVar18) >> 0x20) & uVar66,
                               SUB84(dVar18 + dVar18,0) & uVar64)) {
LAB_14a532dbf:
            dVar16 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0];
            dVar59 = SUB168(auVar69 | auVar32,0);
            dVar52 = (double)GlobalVectorConstants::Float1000.m128_f32[2];
            dVar68 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_;
            dVar18 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_;
            auVar24._8_4_ = SUB84(dVar18,0);
            auVar24._0_8_ = dVar68;
            auVar24._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float1000.m128_f32[3],0);
            auVar4._0_8_ = dVar52;
            auVar4._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[3] >> 0x20);
            auVar25._0_8_ = dVar68 + dVar59 * dVar59;
            auVar25._8_8_ = auVar24._8_8_ + 0.0;
            auVar34._8_4_ = SUB84(auVar25._8_8_,0);
            auVar34._0_8_ = auVar25._0_8_;
            auVar34._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
            auVar35._0_8_ = auVar34._8_8_ + auVar25._0_8_;
            auVar35._8_8_ = auVar25._0_8_ + auVar25._8_8_;
            auVar32 = sqrtpd(auVar25,auVar35);
            uVar12 = -(ulonglong)(dVar16 <= auVar35._0_8_);
            uVar13 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar35._8_8_);
            auVar32 = divpd((undefined1  [16])local_248,auVar32);
            dVar15 = auVar32._0_8_ * (double)local_1e8._0_8_;
            dVar38 = auVar32._8_8_ * (double)local_1e8._8_8_;
            local_1e8._8_8_ = 0;
            local_1e8._0_8_ = local_2e8._0_8_;
            auVar62._0_8_ = uVar12 & (ulonglong)dVar15;
            uVar11 = uVar13 & (ulonglong)dVar38;
            auVar62._8_4_ = (undefined4)uVar11;
            auVar62._12_4_ = (undefined4)(uVar11 >> 0x20);
            uVar64 = SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
            auVar39._0_4_ = ~(uint)uVar12 & uVar64;
            uVar66 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20)
            ;
            auVar39._4_4_ = ~(uint)(uVar12 >> 0x20) & uVar66;
            uVar40 = SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
            auVar39._8_4_ = ~(uint)uVar13 & uVar40;
            uVar41 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20)
            ;
            auVar39._12_4_ = ~(uint)(uVar13 >> 0x20) & uVar41;
            dVar42 = (double)local_238._0_8_ * (double)local_238._0_8_;
            dVar46 = (double)local_238._8_8_ * (double)local_238._8_8_;
            auVar26._8_4_ = SUB84(dVar46,0);
            auVar26._0_8_ = dVar42;
            auVar26._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            dVar15 = dVar42 + (double)local_2e8._0_8_ * (double)local_2e8._0_8_;
            dVar38 = auVar26._8_8_ + 0.0;
            dVar42 = dVar42 + (double)local_2e8._0_8_ * (double)local_2e8._0_8_;
            dVar46 = dVar46 + 0.0;
            auVar36._8_4_ = SUB84(dVar38,0);
            auVar36._0_8_ = dVar15;
            auVar36._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
            auVar37._0_8_ = auVar36._8_8_ + dVar15;
            auVar37._8_8_ = dVar15 + dVar38;
            uVar11 = -(ulonglong)(dVar16 <= auVar37._0_8_);
            auVar54 = sqrtpd(auVar39,auVar37);
            auVar32 = divpd((undefined1  [16])local_248,auVar54);
            divpd((undefined1  [16])local_258,auVar54);
            dVar15 = SUB168(auVar62 | auVar39,0) -
                     (double)(uVar11 & (ulonglong)(auVar32._0_8_ * (double)local_238._0_8_) |
                             CONCAT44(~(uint)(uVar11 >> 0x20) & uVar66,~(uint)uVar11 & uVar64));
            auVar27._8_4_ = SUB84(dVar46,0);
            auVar27._0_8_ = dVar42;
            auVar27._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            auVar28._0_8_ = auVar27._8_8_ + dVar42;
            auVar28._8_8_ = dVar42 + dVar46;
            uVar13 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar28._8_8_);
            uVar12 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar28._0_8_);
            auVar32 = sqrtpd(auVar28,auVar28);
            local_288._0_4_ = SUB84(dVar52,0);
            local_288._4_4_ = (undefined4)((ulonglong)dVar52 >> 0x20);
            auVar56 = divpd((undefined1  [16])local_248,auVar32);
            auVar54 = divpd((undefined1  [16])local_258,auVar32);
            dVar52 = auVar56._8_8_ * (double)local_238._8_8_;
            uVar64 = (uint)(-(ulonglong)(dVar16 <= auVar28._0_8_) >> 0x20);
            auVar6._4_8_ = dVar52;
            auVar6._0_4_ = (uint)((ulonglong)(auVar56._0_8_ * (double)local_238._0_8_) >> 0x20) &
                           uVar64;
            auVar49._0_8_ = auVar6._0_8_ << 0x20;
            uVar11 = uVar13 & (ulonglong)dVar52;
            auVar49._8_4_ = (undefined4)uVar11;
            auVar49._12_4_ = (undefined4)(uVar11 >> 0x20);
            auVar7._4_8_ = uVar13;
            auVar7._0_4_ = ~uVar64 & uVar66;
            auVar63._0_8_ = auVar7._0_8_ << 0x20;
            auVar63._8_4_ = ~(uint)uVar13 & uVar40;
            auVar63._12_4_ = ~(uint)(uVar13 >> 0x20) & uVar41;
            uVar60 = (undefined4)__real_bff0000000000000;
            uVar61 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            dVar68 = dVar59 * dVar59 + dVar68;
            dVar18 = dVar18 + 0.0;
            auVar29._8_4_ = SUB84(dVar18,0);
            auVar29._0_8_ = dVar68;
            auVar29._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            dVar52 = SUB168(auVar62 | auVar39,8) - (double)(auVar49._8_8_ | auVar63._8_8_);
            auVar30._0_8_ = auVar29._8_8_ + dVar68;
            auVar30._8_8_ = dVar68 + dVar18;
            uVar11 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar30._0_8_);
            auVar32 = sqrtpd(auVar30,auVar30);
            auVar32 = divpd((undefined1  [16])local_258,auVar32);
            bVar8 = (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar52,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    <= local_2c0 &&
                    ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ) <= local_2c0 && bVar8);
            uVar70 = (undefined4)__real_3ff0000000000000;
            uVar71 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            dVar52 = (double)(uVar11 & (ulonglong)(auVar32._0_8_ * dVar59) |
                             CONCAT44(~(uint)(uVar11 >> 0x20) & local_288._4_4_,
                                      ~(uint)uVar11 & local_288._0_4_)) -
                     (double)(uVar12 & (ulonglong)((double)local_2e8._0_8_ * auVar54._0_8_) |
                             CONCAT44(~(uint)(uVar12 >> 0x20) & local_288._4_4_,
                                      ~(uint)uVar12 & local_288._0_4_));
            dVar68 = local_2b8;
            uVar64 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar66 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            local_288 = auVar4;
            if (local_2c0 <
                (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar52,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
              bVar8 = false;
            }
          }
          else {
            if (dVar59 < (double)CONCAT44(uVar61,uVar60)) {
              dVar46 = (double)CONCAT44(uVar61,uVar60);
            }
            dVar18 = acos(dVar46);
            if (dVar52 < (double)CONCAT44((uint)((ulonglong)(dVar18 + dVar18) >> 0x20) & uVar66,
                                          SUB84(dVar18 + dVar18,0) & uVar64)) goto LAB_14a532dbf;
          }
          if (dVar68 < (double)CONCAT44((uint)((ulonglong)
                                               (local_1b8.Scale3D.XY.m128d_f64[0] - local_118) >>
                                              0x20) & uVar66,
                                        SUB84(local_1b8.Scale3D.XY.m128d_f64[0] - local_118,0) &
                                        uVar64)) {
            bVar8 = false;
          }
          if (dVar68 < (double)CONCAT44((uint)((ulonglong)
                                               (local_1b8.Scale3D.XY.m128d_f64[1] - dStack_110) >>
                                              0x20) & uVar66,
                                        SUB84(local_1b8.Scale3D.XY.m128d_f64[1] - dStack_110,0) &
                                        uVar64)) {
            bVar8 = false;
          }
          if ((dVar68 < (double)CONCAT44((uint)((ulonglong)
                                                (local_1b8.Scale3D.ZW.m128d_f64[0] - local_108) >>
                                               0x20) & uVar66,
                                         SUB84(local_1b8.Scale3D.ZW.m128d_f64[0] - local_108,0) &
                                         uVar64)) || (fVar67 = __real_322bcc77, !bVar8)) {
            FControlRigValidationContext::GetDisplayNameForEvent
                      (param_3,&local_218,&this->EventNameA);
            FControlRigValidationContext::GetDisplayNameForEvent
                      (param_3,&local_228,&this->EventNameB);
            ::FString::PrintfImpl(&local_1c8,L"Poses don\'t match between %s and %s.");
            FControlRigValidationContext::Report
                      (param_3,Warning,(FRigElementKey *)&local_300,&local_1c8);
            this_00 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
            local_2a8.Keys.AllocatorInstance.Data = local_300;
            local_2a8.Keys.ArrayNum = local_2f8;
            iVar9 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&local_2a8,true);
            pFVar10 = URigHierarchy::Get(this_00,iVar9);
            bVar8 = URigHierarchy::IsSelected(this_00,pFVar10);
            fVar1 = __real_42480000;
            fVar67 = __real_bf800000;
            if ((bVar8) && (this_01 = param_3->DrawInterface, this_01 != (FRigVMDrawInterface *)0x0)
               ) {
              FRigVMDrawInterface::DrawAxes
                        (this_01,&UE::Math::TTransform<double>::Identity,&local_1b8,__real_42480000,
                         0.0,SDPG_Foreground,__real_bf800000);
              FRigVMDrawInterface::DrawAxes
                        (this_01,&UE::Math::TTransform<double>::Identity,
                         (TTransform<double> *)local_158,fVar1,0.0,SDPG_Foreground,fVar67);
            }
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            fVar67 = __real_322bcc77;
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
              fVar67 = __real_322bcc77;
            }
          }
        }
LAB_14a533178:
        this_02 = (FCachedRigElement *)&this_02[8].ContainerVersion;
        uVar11 = (ulonglong)local_2c8;
      }
      else {
        if ((ERigElementType)local_300 == Bone) {
          cVar2 = this->bCheckBones;
          goto LAB_14a532acb;
        }
        if (((ERigElementType)local_300 != Curve) ||
           (fVar1 = (float)this_02[8].Key.Name.ComparisonIndex.Value,
           fVar14 = URigHierarchy::GetCurveValueByIndex
                              ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,uVar40),
           (float)((uint)(fVar1 - fVar14) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
           this->CurvePrecision + fVar67)) goto LAB_14a533178;
        FControlRigValidationContext::GetDisplayNameForEvent(param_3,&local_1f8,&this->EventNameA);
        FControlRigValidationContext::GetDisplayNameForEvent(param_3,&local_208,&this->EventNameB);
        ::FString::PrintfImpl(&local_268,L"Values don\'t match between %s and %s.");
        FControlRigValidationContext::Report
                  (param_3,Warning,(FRigElementKey *)&local_300,&local_268);
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_14a533178;
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        this_02 = (FCachedRigElement *)&this_02[8].ContainerVersion;
        uVar11 = (ulonglong)local_2c8;
      }
    }
  }
  else {
    ::FString::FString(&local_268,
                       L"Numerical validation only works when running \'Backwards and Forwards\'");
    FControlRigValidationContext::Report(param_3,Info,&local_268);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnInitialize @ 14a533330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigNumericalValidationPass::OnInitialize
          (UControlRigNumericalValidationPass *this,UControlRig *param_1,
          FControlRigValidationContext *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014a533333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))();
  return;
}

// OnSubjectChanged @ 14a533340

/* WARNING: Removing unreachable block (ram,0x00014a533407) */
/* WARNING: Removing unreachable block (ram,0x00014a53343d) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigNumericalValidationPass::OnSubjectChanged
          (UControlRigNumericalValidationPass *this,UControlRig *param_1,
          FControlRigValidationContext *param_2)

{
  int iVar1;
  void *_Src;
  FName FVar2;
  longlong lVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  FVar2.ComparisonIndex.Value = 0;
  FVar2.Number = 0;
  iVar1 = (this->Pose).Elements.ArrayMax;
  (this->Pose).Elements.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,0,(ForAnyElementType *)&this->Pose,0,&(this->Pose).Elements.ArrayMax);
  }
  local_10 = (int)param_1->_padding_;
  lVar3 = (longlong)local_10;
  _Src = (void *)param_1->_padding_;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 << 3);
  }
  if (local_10 == 2) {
    this->EventNameA = *(FName *)local_18.Data;
    FVar2 = *(FName *)(local_18.Data + 8);
  }
  else {
    (this->EventNameA).ComparisonIndex = 0;
    (this->EventNameA).Number = 0;
  }
  this->EventNameB = FVar2;
  if ((FName *)local_18.Data != (FName *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// StaticRegisterNativesUControlRigNumericalValidationPass @ 14a5a3000

void __cdecl
UControlRigNumericalValidationPass::StaticRegisterNativesUControlRigNumericalValidationPass(void)

{
  return;
}

