// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 382

// ConstructForTests<FIKRetargetPelvisMotionOpSettings> @ 14dee1f20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetPelvisMotionOpSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FIKRetargetPelvisMotionOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x60) = dVar2;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x78) = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
  *(double *)((longlong)param_1 + 0x80) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xb0) = uVar1;
  *(double *)((longlong)param_1 + 0xb8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 200) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xd0) = uVar1;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x110) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x118) = uVar1;
  *(double *)((longlong)param_1 + 0x120) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x128) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x130) = dVar2;
  *(double *)((longlong)param_1 + 0x138) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// Destruct<FIKRetargetPelvisMotionOpSettings> @ 14dee1f30

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetPelvisMotionOpSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// SerializeArchive<FIKRetargetPelvisMotionOpSettings> @ 14dee1fb0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FIKRetargetPelvisMotionOpSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UScriptStruct *this;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                         (UObject *)pUVar2,L"IKRetargetPelvisMotionOpSettings");
  }
  this = Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                         (UObject *)pUVar2,L"IKRetargetPelvisMotionOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this,param_1,param_2,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,iVar1);
  }
  return true;
}

// Copy<FIKRetargetPelvisMotionOpSettings> @ 14dee3ca0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetPelvisMotionOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  UObject *pUVar3;
  FIKRetargetOpSettingsBase *pFVar4;
  undefined3 uVar5;
  bool bVar6;
  int iVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
    uVar1 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold =
         (uVar1 ^ ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold) &
         0x80000000 ^ uVar1;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold ^ uVar1) &
         0x7fffffff ^ ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->bDebugDraw;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    uVar1 = (uint)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         (uVar1 ^ (uint)((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_) &
         0x80000000 ^ uVar1;
    *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         ((uint)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_ ^ uVar1) &
         0x7fffffff ^ (uint)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    *(undefined4 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ + 4) =
         *(undefined4 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_ + 4);
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->_padding_;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->field_0xd = uVar5;
    lVar2 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->_padding_;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->_padding_ = lVar2;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->field_0xd = uVar5;
    lVar2 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->_padding_;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->_padding_ = lVar2;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->Controller).Object;
    iVar7 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->LODThreshold;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->_padding_;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->LODThreshold = iVar7;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->Controller).Object;
    iVar7 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->LODThreshold;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->_padding_;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->LODThreshold = iVar7;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->_padding_;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->field_0xd;
    pUVar3 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->Controller).Object = pUVar3;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->_padding_;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xf0))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xf0))->_padding_;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xf0))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xf0))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xf0))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xf0))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xf0))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xf0))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xf0))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xf0))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x108))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x108))->_padding_;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x108))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x108))->field_0xd;
    pUVar3 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x108))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x108))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x108))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x108))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x108))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x108))->Controller).Object = pUVar3;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x120))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x120))->_padding_;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x120))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x120))->field_0xd;
    pUVar3 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x120))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x120))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x120))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x120))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x120))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x120))->Controller).Object = pUVar3;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x138))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x138))->_padding_;
    pFVar4 = (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x138);
    param_2 = &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x138))->Controller;
    *(char *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x138))->LODThreshold =
         (char)pFVar4->LODThreshold;
    param_1 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x138))->Controller;
  }
  return true;
}

// Construct<FTargetChainSettings> @ 14dee3fb0

void __cdecl UE::CoreUObject::Private::Construct<FTargetChainSettings>(void *param_1)

{
  memset(param_1,0,0xb8);
  FTargetChainSettings::FTargetChainSettings(param_1);
  return;
}

// ConstructForTests<FTargetChainSettings> @ 14dee4060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTargetChainSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined2 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x80) = dVar2;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  return;
}

// Construct<FIKRigBodyMoverSettings> @ 14dee40f0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigBodyMoverSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigBodyMoverSettings__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  return;
}

// Destruct<FTargetChainSettings> @ 14dee4160

void __cdecl UE::CoreUObject::Private::Destruct<FTargetChainSettings>(void *param_1)

{
  return;
}

// ConstructForTests<FIKRigBodyMoverSettings> @ 14dee4170

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigBodyMoverSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined ***)param_1 = &___7FIKRigBodyMoverSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  return;
}

// Destruct<FIKRigBodyMoverSettings> @ 14dee4220

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigBodyMoverSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Copy<FTargetChainSettings> @ 14dee5430

bool __cdecl
UE::CoreUObject::Private::Copy<FTargetChainSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  
  if (param_3 != 0) {
    puVar24 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar24);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[4];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      uVar10 = puVar1[8];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      uVar14 = puVar1[0xc];
      uVar15 = puVar1[0xd];
      uVar16 = puVar1[0xe];
      uVar17 = puVar1[0xf];
      uVar18 = puVar1[0x10];
      uVar19 = puVar1[0x11];
      uVar20 = puVar1[0x12];
      uVar21 = puVar1[0x13];
      uVar22 = puVar1[0x14];
      uVar23 = puVar1[0x15];
      uVar2 = puVar1[0x16];
      *puVar24 = *puVar1;
      puVar24[1] = uVar3;
      puVar24[2] = uVar4;
      puVar24[3] = uVar5;
      puVar24[4] = uVar6;
      puVar24[5] = uVar7;
      puVar24[6] = uVar8;
      puVar24[7] = uVar9;
      puVar24[8] = uVar10;
      puVar24[9] = uVar11;
      puVar24[10] = uVar12;
      puVar24[0xb] = uVar13;
      puVar24[0xc] = uVar14;
      puVar24[0xd] = uVar15;
      puVar24[0xe] = uVar16;
      puVar24[0xf] = uVar17;
      puVar24[0x10] = uVar18;
      puVar24[0x11] = uVar19;
      puVar24[0x12] = uVar20;
      puVar24[0x13] = uVar21;
      puVar24[0x14] = uVar22;
      puVar24[0x15] = uVar23;
      puVar24[0x16] = uVar2;
      param_3 = param_3 + -1;
      puVar24 = puVar24 + 0x17;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRigBodyMoverSettings> @ 14dee5600

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigBodyMoverSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x1c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x20) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x24) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x28) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x2c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x30) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x34) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x38) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
  }
  return true;
}

// Construct<FIKRigSolverSettingsBase> @ 14dee6220

void __cdecl UE::CoreUObject::Private::Construct<FIKRigSolverSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSolverSettingsBase__6B_;
  return;
}

// ConstructForTests<FIKRigSolverSettingsBase> @ 14dee6240

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigSolverSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSolverSettingsBase__6B_;
  return;
}

// Destruct<FIKRigSolverSettingsBase> @ 14dee6360

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigSolverSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Construct<FIKRetargetSpeedPlantingOp> @ 14dee6380

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetSpeedPlantingOp>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetSpeedPlantingOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetSpeedPlantingOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x402e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x406f400000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// ConstructForTests<FIKRetargetSpeedPlantingOp> @ 14dee6410

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetSpeedPlantingOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetSpeedPlantingOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetSpeedPlantingOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x402e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x406f400000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FIKRetargetSpeedPlantingOp> @ 14dee6490

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetSpeedPlantingOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRigSolverSettingsBase> @ 14dee64f0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigSolverSettingsBase>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Copy<FIKRetargetSpeedPlantingOp> @ 14dee6500

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetSpeedPlantingOp>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetSpeedPlantingOpSettings::operator=
              ((FIKRetargetSpeedPlantingOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetSpeedPlantingOpSettings *)((longlong)param_2 + 0x20));
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x68);
    *(undefined1 *)((longlong)param_1 + 0x60) = *(undefined1 *)((longlong)param_2 + 0x60);
    if (pFVar3 != (ForAnyElementType *)((longlong)param_2 + 0x68)) {
      iVar2 = *(int *)((longlong)param_2 + 0x70);
      piVar1 = (int *)((longlong)param_1 + 0x74);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x68))->Data;
      *(int *)((longlong)param_1 + 0x70) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,iVar2,*piVar1,pFVar3,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar3->Data,_Src,(longlong)iVar2 * 0x68);
        }
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x78);
    param_2 = (void *)((longlong)param_2 + 0x78);
  }
  return true;
}

// Construct<FCurveRemapPair> @ 14dee6760

void __cdecl UE::CoreUObject::Private::Construct<FCurveRemapPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCurveRemapPair> @ 14dee6770

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCurveRemapPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCurveRemapPair> @ 14dee6780

void __cdecl UE::CoreUObject::Private::Destruct<FCurveRemapPair>(void *param_1)

{
  return;
}

// Copy<FCurveRemapPair> @ 14dee7000

bool __cdecl
UE::CoreUObject::Private::Copy<FCurveRemapPair>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTargetChainIKSettings> @ 14dee7800

void __cdecl UE::CoreUObject::Private::Construct<FTargetChainIKSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x60) = dVar2;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// ConstructForTests<FTargetChainIKSettings> @ 14dee7970

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTargetChainIKSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x60) = dVar2;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Destruct<FTargetChainIKSettings> @ 14dee7a00

void __cdecl UE::CoreUObject::Private::Destruct<FTargetChainIKSettings>(void *param_1)

{
  return;
}

// Construct<FIKRetargetIKChainsOp> @ 14dee7b50

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetIKChainsOp>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetIKChainsOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetIKChainsOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FIKRetargetIKChainsOp> @ 14dee7ce0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetIKChainsOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetIKChainsOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetIKChainsOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FIKRetargetIKChainsOp> @ 14dee7e60

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetIKChainsOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FTargetChainIKSettings> @ 14dee7f00

bool __cdecl
UE::CoreUObject::Private::Copy<FTargetChainIKSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  if (param_3 != 0) {
    lVar17 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar17 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar17 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x70 + (longlong)param_1);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar17 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar16;
      param_1 = (void *)((longlong)param_1 + 0x80);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRetargetIKChainsOp> @ 14dee7fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetIKChainsOp>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetIKChainsOpSettings::operator=
              ((FIKRetargetIKChainsOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetIKChainsOpSettings *)((longlong)param_2 + 0x20));
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x60);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x60)) {
      iVar3 = *(int *)((longlong)param_2 + 0x68);
      piVar2 = (int *)((longlong)param_1 + 0x6c);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x60))->Data;
      *(int *)((longlong)param_1 + 0x68) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf0,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0xf0);
        }
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x70);
    param_2 = (void *)((longlong)param_2 + 0x70);
  }
  return true;
}

// Construct<FIKRigBodyMoverGoalSettings> @ 14dee8360

void __cdecl UE::CoreUObject::Private::Construct<FIKRigBodyMoverGoalSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigBodyMoverGoalSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FIKRigBodyMoverGoalSettings> @ 14dee8390

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigBodyMoverGoalSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigBodyMoverGoalSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FIKRigBodyMoverGoalSettings> @ 14dee83c0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigBodyMoverGoalSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Copy<FIKRigBodyMoverGoalSettings> @ 14dee8420

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigBodyMoverGoalSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FIKRigBoneSettingsBase> @ 14dee87c0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigBoneSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigBoneSettingsBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FIKRigBoneSettingsBase> @ 14dee8820

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigBoneSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigBoneSettingsBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FIKRigBoneSettingsBase> @ 14dee8880

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigBoneSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Construct<FIKRetargetSpeedPlantingOpSettings> @ 14dee88a0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetSpeedPlantingOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetSpeedPlantingOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x402e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x406f400000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FIKRetargetSpeedPlantingOpSettings> @ 14dee8f90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetSpeedPlantingOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetSpeedPlantingOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x402e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x406f400000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FIKRetargetSpeedPlantingOpSettings> @ 14dee9070

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetSpeedPlantingOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRigBoneSettingsBase> @ 14dee9330

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigBoneSettingsBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined8 *)((longlong)pvVar1 + 8) =
           *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRetargetSpeedPlantingOpSettings> @ 14dee9380

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetSpeedPlantingOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  FIKRetargetOpSettingsBase *pFVar1;
  bool *pbVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  undefined3 uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    pFVar1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18);
    if (pFVar1 != (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18)) {
      iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
      pbVar2 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw;
      _Src = (FScriptContainerElement *)
             ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
      ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold = iVar3;
      if ((iVar3 == 0) && (*(int *)pbVar2 == 0)) {
        *(undefined4 *)pbVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,*(int *)pbVar2,(ForAnyElementType *)pFVar1,iVar3,(int *)pbVar2);
        if (iVar3 != 0) {
          memcpy((FScriptContainerElement *)pFVar1->_padding_,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->field_0xd = uVar5;
    param_1 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller;
    param_2 = &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller;
  }
  return true;
}

// Construct<FIKRetargetCopyBasePoseOp> @ 14dee96c0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetCopyBasePoseOp>(void *param_1)

{
  memset(param_1,0,200);
  FIKRetargetCopyBasePoseOp::FIKRetargetCopyBasePoseOp(param_1);
  return;
}

// ConstructForTests<FIKRetargetCopyBasePoseOp> @ 14dee97f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetCopyBasePoseOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetCopyBasePoseOp__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetCopyBasePoseOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// Destruct<FIKRetargetCopyBasePoseOp> @ 14dee9840

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetCopyBasePoseOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetCopyBasePoseOp> @ 14dee9900

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetCopyBasePoseOp>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetCopyBasePoseOpSettings::operator=
              ((FIKRetargetCopyBasePoseOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetCopyBasePoseOpSettings *)((longlong)param_2 + 0x20));
    this = (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)((longlong)param_1 + 0x68);
    if (this != (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)((longlong)param_2 + 0x68)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)param_1 + 0xa0),
                 (int *)((longlong)param_1 + 0xb0),
                 (ForElementType<FSetElementId> *)((longlong)param_2 + 0xa0),
                 *(int *)((longlong)param_2 + 0xb0));
      iVar1 = *(int *)((longlong)param_2 + 0x70);
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar1);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar1,(ForAnyElementType *)this,(int *)((longlong)param_1 + 0x70),
                 (int *)((longlong)param_1 + 0x74));
      *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x98);
      *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
      if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x78) !=
          (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x78)) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x78),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x78));
      }
      if (iVar1 != 0) {
        memcpy(*(void **)this,*(void **)((longlong)param_2 + 0x68),(longlong)iVar1 << 4);
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb8),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xb8));
    param_2 = (void *)((longlong)param_2 + 200);
    param_1 = (void *)((longlong)param_1 + 200);
  }
  return true;
}

// Construct<FTargetChainFKSettings> @ 14dee9ab0

void __cdecl UE::CoreUObject::Private::Construct<FTargetChainFKSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FTargetChainFKSettings> @ 14dee9ae0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTargetChainFKSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// Destruct<FTargetChainFKSettings> @ 14dee9b50

void __cdecl UE::CoreUObject::Private::Destruct<FTargetChainFKSettings>(void *param_1)

{
  return;
}

// Construct<FIKRetargetIKChainsOpSettings> @ 14dee9c10

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetIKChainsOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetIKChainsOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x101;
  return;
}

// ConstructForTests<FIKRetargetIKChainsOpSettings> @ 14dee9c70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetIKChainsOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetIKChainsOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x101;
  return;
}

// Destruct<FIKRetargetIKChainsOpSettings> @ 14dee9cc0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetIKChainsOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FTargetChainFKSettings> @ 14dee9d10

bool __cdecl
UE::CoreUObject::Private::Copy<FTargetChainFKSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// SerializeArchive<FIKRetargetIKChainsOpSettings> @ 14dee9d50

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FIKRetargetIKChainsOpSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UScriptStruct *this;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,(UObject *)pUVar2,
                         L"IKRetargetIKChainsOpSettings");
  }
  this = Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,(UObject *)pUVar2,
                         L"IKRetargetIKChainsOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this,param_1,param_2,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,iVar1);
  }
  return true;
}

// Copy<FIKRetargetIKChainsOpSettings> @ 14dee9e70

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetIKChainsOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  FIKRetargetOpSettingsBase *pFVar1;
  bool *pbVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  undefined3 uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    pFVar1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18);
    if (pFVar1 != (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18)) {
      iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
      pbVar2 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw;
      _Src = (FScriptContainerElement *)
             ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
      ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold = iVar3;
      if ((iVar3 == 0) && (*(int *)pbVar2 == 0)) {
        *(undefined4 *)pbVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar3,*(int *)pbVar2,(ForAnyElementType *)pFVar1,iVar3,(int *)pbVar2);
        if (iVar3 != 0) {
          memcpy((FScriptContainerElement *)pFVar1->_padding_,_Src,(longlong)iVar3 * 0xa0);
        }
      }
    }
    *(undefined1 *)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         *(undefined1 *)
          &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    *(undefined1 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object + 1)
         = *(undefined1 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object + 1);
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->field_0xd = uVar5;
    param_1 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller;
    param_2 = &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller;
  }
  return true;
}

// Construct<FIKRigGoalSettingsBase> @ 14deea1b0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigGoalSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigGoalSettingsBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FIKRigGoalSettingsBase> @ 14deea1d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigGoalSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigGoalSettingsBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FIKRigGoalSettingsBase> @ 14deea2a0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigGoalSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Construct<FRetargetSpeedPlantingSettings> @ 14deea300

void __cdecl UE::CoreUObject::Private::Construct<FRetargetSpeedPlantingSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FRetargetSpeedPlantingSettings> @ 14deea530

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRetargetSpeedPlantingSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FRetargetSpeedPlantingSettings> @ 14deeab50

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetSpeedPlantingSettings>(void *param_1)

{
  return;
}

// Copy<FIKRigGoalSettingsBase> @ 14deeb0c0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigGoalSettingsBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined8 *)((longlong)pvVar1 + 8) =
           *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FRetargetSpeedPlantingSettings> @ 14deeb2e0

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetSpeedPlantingSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIKRigSkeleton> @ 14deeb470

void __cdecl UE::CoreUObject::Private::Construct<FIKRigSkeleton>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FIKRigSkeleton> @ 14deeb4b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigSkeleton>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FIKRigSkeleton> @ 14deeb5b0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigSkeleton>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Construct<FIKRetargetCopyBasePoseOpSettings> @ 14deeb700

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetCopyBasePoseOpSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetCopyBasePoseOpSettings__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Copy<FIKRigSkeleton> @ 14deeb760

bool __cdecl UE::CoreUObject::Private::Copy<FIKRigSkeleton>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x30),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x30));
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x40),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x40));
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x50),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x50));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x60));
    param_2 = (void *)((longlong)param_2 + 0x70);
    param_1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70);
  }
  return true;
}

// ConstructForTests<FIKRetargetCopyBasePoseOpSettings> @ 14deeb810

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetCopyBasePoseOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FIKRetargetCopyBasePoseOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FIKRetargetCopyBasePoseOpSettings> @ 14deeb860

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetCopyBasePoseOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// SerializeArchive<FIKRetargetCopyBasePoseOpSettings> @ 14deeb8b0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FIKRetargetCopyBasePoseOpSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UScriptStruct *this;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings,
                         (UObject *)pUVar2,L"IKRetargetCopyBasePoseOpSettings");
  }
  this = Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings,
                         (UObject *)pUVar2,L"IKRetargetCopyBasePoseOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this,param_1,param_2,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,iVar1);
  }
  return true;
}

// Copy<FIKRetargetCopyBasePoseOpSettings> @ 14deeb990

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetCopyBasePoseOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  FIKRetargetOpSettingsBase *pFVar1;
  bool *pbVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    pFVar1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30);
    *(char *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ =
         (char)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
    *(undefined8 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ + 4) =
         *(undefined8 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_ + 4);
    uVar3 = *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->bDebugDraw;
    *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw =
         (uVar3 ^ *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw) &
         0x80000000 ^ uVar3;
    *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw =
         (*(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->bDebugDraw ^ uVar3) &
         0x7fffffff ^
         *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->bDebugDraw;
    *(undefined4 *)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         *(undefined4 *)
          &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    if (pFVar1 != (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30)) {
      iVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
      pbVar2 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw;
      _Src = (FScriptContainerElement *)
             ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
      ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold = iVar4;
      if ((iVar4 == 0) && (*(int *)pbVar2 == 0)) {
        *(undefined4 *)pbVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar4,*(int *)pbVar2,(ForAnyElementType *)pFVar1,iVar4,(int *)pbVar2);
        if (iVar4 != 0) {
          memcpy((FScriptContainerElement *)pFVar1->_padding_,_Src,(longlong)iVar4 << 4);
        }
      }
    }
    pFVar1 = (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x48);
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object =
         (pFVar1->Controller).Object;
    param_1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48);
  }
  return true;
}

// Construct<FTargetChainSpeedPlantSettings> @ 14deec010

void __cdecl UE::CoreUObject::Private::Construct<FTargetChainSpeedPlantSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// ConstructForTests<FTargetChainSpeedPlantSettings> @ 14deec820

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTargetChainSpeedPlantSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// Destruct<FTargetChainSpeedPlantSettings> @ 14deecc20

void __cdecl UE::CoreUObject::Private::Destruct<FTargetChainSpeedPlantSettings>(void *param_1)

{
  return;
}

// Copy<FTargetChainSpeedPlantSettings> @ 14deed070

bool __cdecl
UE::CoreUObject::Private::Copy<FTargetChainSpeedPlantSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRetargetIKChainSettings> @ 14deed170

void __cdecl UE::CoreUObject::Private::Construct<FRetargetIKChainSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  memset(param_1,0,0xa0);
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x80) = dVar2;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FRetargetIKChainSettings> @ 14deed420

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetIKChainSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x80) = dVar2;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3ff0000000000000;
  return;
}

// Destruct<FRetargetIKChainSettings> @ 14deed5d0

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetIKChainSettings>(void *param_1)

{
  return;
}

// SerializeArchive<FRetargetIKChainSettings> @ 14deed620

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FRetargetIKChainSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UScriptStruct *this;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetIKChainSettings,(UObject *)pUVar2,
                         L"RetargetIKChainSettings");
  }
  this = Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetIKChainSettings,(UObject *)pUVar2,
                         L"RetargetIKChainSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this,param_1,param_2,
             (UStruct *)Z_Registration_Info_UScriptStruct_FRetargetIKChainSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID),
     iVar1 < 8)) {
    *(undefined1 *)((longlong)param_2 + 0x40) = 1;
    return true;
  }
  return true;
}

// Copy<FRetargetIKChainSettings> @ 14deed750

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetIKChainSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  
  if (param_3 != 0) {
    puVar21 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar21);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      *puVar21 = *puVar1;
      puVar21[1] = uVar2;
      puVar21[2] = uVar3;
      puVar21[3] = uVar4;
      puVar21[4] = uVar5;
      puVar21[5] = uVar6;
      puVar21[6] = uVar7;
      puVar21[7] = uVar8;
      puVar21[8] = uVar9;
      puVar21[9] = uVar10;
      puVar21[10] = uVar11;
      puVar21[0xb] = uVar12;
      puVar21[0xc] = uVar13;
      puVar21[0xd] = uVar14;
      puVar21[0xe] = uVar15;
      puVar21[0xf] = uVar16;
      puVar21[0x10] = uVar17;
      puVar21[0x11] = uVar18;
      puVar21[0x12] = uVar19;
      puVar21[0x13] = uVar20;
      param_3 = param_3 + -1;
      puVar21 = puVar21 + 0x14;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIKRigSettingsBase> @ 14deed960

void __cdecl UE::CoreUObject::Private::Construct<FIKRigSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// ConstructForTests<FIKRigSettingsBase> @ 14deed9c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Construct<FIKRetargetScaleSourceOp> @ 14deed9e0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetScaleSourceOp>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetScaleSourceOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetScaleSourceOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  return;
}

// Destruct<FIKRigSettingsBase> @ 14deeda70

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// ConstructForTests<FIKRetargetScaleSourceOp> @ 14deeda90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetScaleSourceOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetScaleSourceOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetScaleSourceOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  return;
}

// Destruct<FIKRetargetScaleSourceOp> @ 14deedb10

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetScaleSourceOp>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRigSettingsBase> @ 14deedbe0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigSettingsBase>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Copy<FIKRetargetScaleSourceOp> @ 14deedbf0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetScaleSourceOp>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1d) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1d - (longlong)param_1));
    FIKRetargetScaleSourceOpSettings::operator=
              ((FIKRetargetScaleSourceOpSettings *)((longlong)pvVar1 + 0x20),
               (FIKRetargetScaleSourceOpSettings *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar1 + 0x58) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x5c) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x5c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x68);
  }
  return true;
}

// Construct<FIKRigInputSkeleton> @ 14deede60

void __cdecl UE::CoreUObject::Private::Construct<FIKRigInputSkeleton>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FIKRigInputSkeleton> @ 14deede90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigInputSkeleton>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FIKRigInputSkeleton> @ 14deeded0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigInputSkeleton>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FIKRigInputSkeleton> @ 14deee090

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigInputSkeleton>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x20),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20));
    pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30);
    param_2 = &((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30))->ArrayNum;
    (((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->AllocatorInstance).
    Data = (pTVar1->AllocatorInstance).Data;
    param_1 = &((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->ArrayNum;
  }
  return true;
}

// Construct<FRetargetChainMapping> @ 14deef3a0

void __cdecl UE::CoreUObject::Private::Construct<FRetargetChainMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Construct<FIKRetargetAlignPoleVectorOp> @ 14deef3c0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetAlignPoleVectorOp>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetAlignPoleVectorOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetAlignPoleVectorOpSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FRetargetChainMapping> @ 14deef440

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetChainMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FIKRetargetAlignPoleVectorOp> @ 14deef460

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetAlignPoleVectorOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetAlignPoleVectorOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetAlignPoleVectorOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FRetargetChainMapping> @ 14deef4d0

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetChainMapping>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct<FIKRetargetAlignPoleVectorOp> @ 14deef4f0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetAlignPoleVectorOp>(void *param_1)

{
  DestructItems<FPoleVectorMatcher,int>
            (*(FPoleVectorMatcher **)((longlong)param_1 + 0x70),*(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FRetargetChainMapping> @ 14deef500

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetChainMapping>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)((longlong)pFVar5 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar2[2].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar2[2].Data);
      }
      pFVar5[2].Data = pFVar2[2].Data;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar2[3].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar2[3].Data);
      }
      pFVar5[3].Data = pFVar2[3].Data;
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRetargetAlignPoleVectorOp> @ 14deef620

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetAlignPoleVectorOp>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FPoleVectorMatcher *pFVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetAlignPoleVectorOpSettings::operator=
              ((FIKRetargetAlignPoleVectorOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetAlignPoleVectorOpSettings *)((longlong)param_2 + 0x20));
    FRetargetChainMapping::operator=
              ((FRetargetChainMapping *)((longlong)param_1 + 0x50),
               (FRetargetChainMapping *)((longlong)param_2 + 0x50));
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x70);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x70)) {
      DestructItems<FPoleVectorMatcher,int>
                ((FPoleVectorMatcher *)pFVar4->Data,*(int *)((longlong)param_1 + 0x78));
      iVar2 = *(int *)((longlong)param_2 + 0x78);
      piVar1 = (int *)((longlong)param_1 + 0x7c);
      pFVar3 = (FPoleVectorMatcher *)((ForAnyElementType *)((longlong)param_2 + 0x70))->Data;
      *(int *)((longlong)param_1 + 0x78) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        ConstructItems<FPoleVectorMatcher,FPoleVectorMatcher,int>(pFVar4->Data,pFVar3,iVar2);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x80);
    param_2 = (void *)((longlong)param_2 + 0x80);
  }
  return true;
}

// Construct<FIKRetargetFloorConstraintOp> @ 14deef7c0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetFloorConstraintOp>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetFloorConstraintOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetFloorConstraintOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x4020000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4034000000000000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FIKRetargetFloorConstraintOp> @ 14deef880

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetFloorConstraintOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetFloorConstraintOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetFloorConstraintOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x4020000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FIKRetargetFloorConstraintOp> @ 14deef9b0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetFloorConstraintOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetFloorConstraintOp> @ 14deefa10

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetFloorConstraintOp>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetFloorConstraintOpSettings::operator=
              ((FIKRetargetFloorConstraintOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetFloorConstraintOpSettings *)((longlong)param_2 + 0x20));
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x58);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x58)) {
      iVar3 = *(int *)((longlong)param_2 + 0x60);
      piVar2 = (int *)((longlong)param_1 + 100);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x58))->Data;
      *(int *)((longlong)param_1 + 0x60) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 5);
        }
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x68);
    param_2 = (void *)((longlong)param_2 + 0x68);
  }
  return true;
}

// Construct<FIKRigSetTransform> @ 14deefdc0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigSetTransform>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined ***)param_1 = &___7FIKRigSetTransform__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigSetTransformSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// ConstructForTests<FIKRigSetTransform> @ 14deefe20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigSetTransform>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRigSetTransform__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigSetTransformSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// Construct<FIKRetargetScaleSourceOpSettings> @ 14deefeb0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetScaleSourceOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetScaleSourceOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

// Destruct<FIKRigSetTransform> @ 14deeff10

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigSetTransform>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigSettingsBase__6B_;
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  return;
}

// ConstructForTests<FIKRetargetScaleSourceOpSettings> @ 14deeff30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetScaleSourceOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetScaleSourceOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

// Destruct<FIKRetargetScaleSourceOpSettings> @ 14deeff80

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetScaleSourceOpSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRigSetTransform> @ 14def00b0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigSetTransform>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = param_1;
  pvVar2 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) = *(undefined1 *)((longlong)pvVar2 + 8);
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x28) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x2c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x30) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x34) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x38) = *(undefined4 *)((longlong)pvVar2 + 0x38);
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
    pvVar2 = (void *)((longlong)pvVar2 + 0x40);
  }
  return true;
}

// Copy<FIKRetargetScaleSourceOpSettings> @ 14def0180

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetScaleSourceOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  FIKRetargetOpSettingsBase *pFVar1;
  uint uVar2;
  FIKRetargetOpSettingsBase *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FIKRetargetOpSettingsBase *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FIKRetargetOpSettingsBase::operator=(this,pFVar1);
      this[1]._padding_ = pFVar1[1]._padding_;
      *(char *)&this[1].LODThreshold = (char)pFVar1[1].LODThreshold;
      *(undefined8 *)&this[1].bDebugDraw = *(undefined8 *)&pFVar1[1].bDebugDraw;
      uVar2 = *(uint *)((longlong)&pFVar1[1].Controller.Object + 4);
      *(uint *)((longlong)&this[1].Controller.Object + 4) =
           (uVar2 ^ *(uint *)((longlong)&this[1].Controller.Object + 4)) & 0x80000000 ^ uVar2;
      *(uint *)((longlong)&this[1].Controller.Object + 4) =
           (*(uint *)((longlong)&pFVar1[1].Controller.Object + 4) ^ uVar2) & 0x7fffffff ^
           *(uint *)((longlong)&pFVar1[1].Controller.Object + 4);
      *(int *)&this[2]._padding_ = (int)pFVar1[2]._padding_;
      *(undefined1 *)((longlong)&this[2]._padding_ + 4) =
           *(undefined1 *)((longlong)&pFVar1[2]._padding_ + 4);
      param_3 = param_3 + -1;
      this = (FIKRetargetOpSettingsBase *)&this[2].LODThreshold;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGoalBone> @ 14def0280

void __cdecl UE::CoreUObject::Private::Construct<FGoalBone>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FGoalBone> @ 14def02a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGoalBone>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FGoalBone> @ 14def0300

void __cdecl UE::CoreUObject::Private::Destruct<FGoalBone>(void *param_1)

{
  return;
}

// Copy<FGoalBone> @ 14def0310

bool __cdecl UE::CoreUObject::Private::Copy<FGoalBone>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRetargetChainPair> @ 14def11e0

void __cdecl UE::CoreUObject::Private::Construct<FRetargetChainPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Construct<FIKRetargetAlignPoleVectorOpSettings> @ 14def25f0

void __cdecl
UE::CoreUObject::Private::Construct<FIKRetargetAlignPoleVectorOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetAlignPoleVectorOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FRetargetChainPair> @ 14def2630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetChainPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FIKRetargetAlignPoleVectorOpSettings> @ 14def2d70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetAlignPoleVectorOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetAlignPoleVectorOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Destruct<FRetargetChainPair> @ 14def2da0

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetChainPair>(void *param_1)

{
  return;
}

// Destruct<FIKRetargetAlignPoleVectorOpSettings> @ 14def2df0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetAlignPoleVectorOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FRetargetChainPair> @ 14def2f10

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetChainPair>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRetargetAlignPoleVectorOpSettings> @ 14def2fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetAlignPoleVectorOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  int *piVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_);
    }
    piVar4 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
    if (piVar4 != &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold) {
      iVar2 = *(int *)&(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).
                       Object;
      piVar1 = (int *)((longlong)
                       &(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).
                        Object + 4);
      _Src = *(void **)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
      iVar3 = *piVar1;
      *(int *)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
           iVar2;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar2,iVar3,(ForAnyElementType *)piVar4,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(*(void **)piVar4,_Src,(longlong)iVar2 * 0x28);
        }
      }
    }
    param_1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30);
    param_2 = (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FIKRetargetFloorConstraintOpSettings> @ 14def33e0

void __cdecl
UE::CoreUObject::Private::Construct<FIKRetargetFloorConstraintOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetFloorConstraintOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x4020000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x4034000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FIKRetargetFloorConstraintOpSettings> @ 14def3430

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetFloorConstraintOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetFloorConstraintOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x4020000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FIKRetargetFloorConstraintOpSettings> @ 14def3480

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetFloorConstraintOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRetargetFloorConstraintOpSettings> @ 14def3cf0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetFloorConstraintOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  FIKRetargetOpSettingsBase *pFVar1;
  bool *pbVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    pFVar1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18);
    if (pFVar1 != (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18)) {
      iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
      pbVar2 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw;
      _Src = (FScriptContainerElement *)
             ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
      ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold = iVar3;
      if ((iVar3 == 0) && (*(int *)pbVar2 == 0)) {
        *(undefined4 *)pbVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,*(int *)pbVar2,(ForAnyElementType *)pFVar1,iVar3,(int *)pbVar2);
        if (iVar3 != 0) {
          memcpy((FScriptContainerElement *)pFVar1->_padding_,_Src,(longlong)iVar3 << 5);
        }
      }
    }
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    param_1 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold;
    param_2 = &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
  }
  return true;
}

// Construct<FRetargetDefinition> @ 14def3ee0

void __cdecl UE::CoreUObject::Private::Construct<FRetargetDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FRetargetDefinition> @ 14def3f00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FRetargetDefinition> @ 14def3fe0

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetDefinition>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FIKRigSetTransformSettings> @ 14def4000

void __cdecl UE::CoreUObject::Private::Construct<FIKRigSetTransformSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined ***)param_1 = &___7FIKRigSetTransformSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// ConstructForTests<FIKRigSetTransformSettings> @ 14def4040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigSetTransformSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined ***)param_1 = &___7FIKRigSetTransformSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Construct<FIKRetargetRunIKRigOp> @ 14def4080

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetRunIKRigOp>(void *param_1)

{
  memset(param_1,0,0x200);
  FIKRetargetRunIKRigOp::FIKRetargetRunIKRigOp(param_1);
  return;
}

// Destruct<FIKRigSetTransformSettings> @ 14def40b0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigSetTransformSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// ConstructForTests<FIKRetargetRunIKRigOp> @ 14def40d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetRunIKRigOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetRunIKRigOp__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetRunIKRigOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x88));
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0;
  return;
}

// Destruct<FIKRetargetRunIKRigOp> @ 14def40e0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetRunIKRigOp>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0;
  if (*(void **)((longlong)param_1 + 0x1f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1f0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1b0));
  FIKRigProcessor::~FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FRetargetDefinition> @ 14def41b0

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetDefinition>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 8);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      if (pFVar4 != pFVar3) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        _Src = pFVar3->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,4,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 0x30);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRigSetTransformSettings> @ 14def42a0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigSetTransformSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x1c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x20) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x24) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x24 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Copy<FIKRetargetRunIKRigOp> @ 14def4300

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetRunIKRigOp>(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetRunIKRigOpSettings::operator=
              ((FIKRetargetRunIKRigOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetRunIKRigOpSettings *)((longlong)param_2 + 0x20));
    FRetargetChainMapping::operator=
              ((FRetargetChainMapping *)((longlong)param_1 + 0x68),
               (FRetargetChainMapping *)((longlong)param_2 + 0x68));
    FIKRigProcessor::operator=
              ((FIKRigProcessor *)((longlong)param_1 + 0x88),
               (FIKRigProcessor *)((longlong)param_2 + 0x88));
    this = (TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)((longlong)param_1 + 0x1b0);
    if (this != (TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)((longlong)param_2 + 0x1b0)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)param_1 + 0x1e8),
                 (int *)((longlong)param_1 + 0x1f8),
                 (ForElementType<FSetElementId> *)((longlong)param_2 + 0x1e8),
                 *(int *)((longlong)param_2 + 0x1f8));
      iVar1 = *(int *)((longlong)param_2 + 0x1b8);
      TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar1);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar1,(ForAnyElementType *)this,(int *)((longlong)param_1 + 0x1b8),
                 (int *)((longlong)param_1 + 0x1bc));
      *(undefined4 *)((longlong)param_1 + 0x1e0) = *(undefined4 *)((longlong)param_2 + 0x1e0);
      *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)((longlong)param_2 + 0x1e4);
      if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x1c0) !=
          (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x1c0)) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x1c0),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x1c0));
      }
      if (iVar1 != 0) {
        memcpy(*(void **)this,*(void **)((longlong)param_2 + 0x1b0),(longlong)iVar1 * 0x14);
      }
    }
    param_2 = (void *)((longlong)param_2 + 0x200);
    param_1 = (void *)((longlong)param_1 + 0x200);
  }
  return true;
}

// Construct<FRigUnit_IKRig> @ 14def5220

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_IKRig>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_IKRig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x38));
  return;
}

// Construct<FRetargetPoleVectorSettings> @ 14def52a0

void __cdecl UE::CoreUObject::Private::Construct<FRetargetPoleVectorSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FRigUnit_IKRig> @ 14def52d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_IKRig>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_IKRig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x38));
  return;
}

// ConstructForTests<FRetargetPoleVectorSettings> @ 14def5310

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetPoleVectorSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigUnit_IKRig> @ 14def5340

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_IKRig>(void *param_1)

{
  FIKRigProcessor::~FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FRetargetPoleVectorSettings> @ 14def53a0

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetPoleVectorSettings>(void *param_1)

{
  return;
}

// Copy<FRigUnit_IKRig> @ 14def5480

bool __cdecl UE::CoreUObject::Private::Copy<FRigUnit_IKRig>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *_Src;
  void *pvVar6;
  
  pvVar6 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = *(UObject **)((longlong)pvVar6 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar5 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar5);
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar6 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar2 = (ForAnyElementType *)((longlong)pvVar6 + 0x18);
    *(undefined8 *)((longlong)pvVar6 + 0x10) =
         *(undefined8 *)((longlong)pvVar6 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (pFVar2 != pFVar1) {
      iVar4 = *(int *)((longlong)pvVar6 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar3 = (int *)((longlong)pvVar6 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar6 + 0x20) = iVar4;
      if ((iVar4 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,iVar4,*piVar3,pFVar2,iVar4,piVar3);
        if (iVar4 != 0) {
          memcpy(pFVar2->Data,_Src,(longlong)iVar4 << 7);
        }
      }
    }
    FIKRigWorkData::operator=
              ((FIKRigWorkData *)((longlong)pvVar6 + 0x28),
               (FIKRigWorkData *)((longlong)pvVar6 + (longlong)param_2 + (0x28 - (longlong)param_1))
              );
    pvVar6 = (void *)((longlong)pvVar6 + 0x160);
  }
  return true;
}

// Copy<FRetargetPoleVectorSettings> @ 14def5590

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetPoleVectorSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFloorConstraintChainSettings> @ 14def5610

void __cdecl UE::CoreUObject::Private::Construct<FFloorConstraintChainSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FFloorConstraintChainSettings> @ 14def5640

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFloorConstraintChainSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FFloorConstraintChainSettings> @ 14def5670

void __cdecl UE::CoreUObject::Private::Destruct<FFloorConstraintChainSettings>(void *param_1)

{
  return;
}

// Copy<FFloorConstraintChainSettings> @ 14def5770

bool __cdecl
UE::CoreUObject::Private::Copy<FFloorConstraintChainSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBoneChain> @ 14def5830

void __cdecl UE::CoreUObject::Private::Construct<FBoneChain>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FBoneChain> @ 14def5870

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBoneChain>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FBoneChain> @ 14def58b0

void __cdecl UE::CoreUObject::Private::Destruct<FBoneChain>(void *param_1)

{
  return;
}

// Construct<FIKRigPoleSolver> @ 14def5900

void __cdecl UE::CoreUObject::Private::Construct<FIKRigPoleSolver>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined ***)param_1 = &___7FIKRigPoleSolver__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigPoleSolverSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FIKRigPoleSolver> @ 14def59a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigPoleSolver>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRigPoleSolver__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigPoleSolverSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Construct<FIKRetargetRunIKRigOpSettings> @ 14def59f0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetRunIKRigOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32) = 0;
  *(undefined2 *)((longlong)param_1 + 0x36) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetRunIKRigOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0x101;
  return;
}

// Destruct<FIKRigPoleSolver> @ 14def5a50

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigPoleSolver>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigSettingsBase__6B_;
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  return;
}

// ConstructForTests<FIKRetargetRunIKRigOpSettings> @ 14def5aa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetRunIKRigOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetRunIKRigOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0x101;
  return;
}

// Destruct<FIKRetargetRunIKRigOpSettings> @ 14def5af0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetRunIKRigOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FBoneChain> @ 14def5b40

bool __cdecl UE::CoreUObject::Private::Copy<FBoneChain>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 0x10);
      *(uint *)((longlong)param_1 + 0x10) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 0x10)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 0x10) =
           (*(uint *)((longlong)param_1 + lVar2 + 0x10) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x14);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 0x20);
      *(uint *)((longlong)param_1 + 0x20) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 0x20)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 0x20) =
           (*(uint *)((longlong)param_1 + lVar2 + 0x20) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x24);
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x28);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRigPoleSolver> @ 14def5c10

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigPoleSolver>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) = *(undefined1 *)((longlong)pvVar1 + 8);
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x30) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0x38),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x38));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0x48),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x48));
    pvVar1 = (void *)((longlong)pvVar1 + 0x58);
    pvVar2 = (void *)((longlong)pvVar2 + 0x58);
  }
  return true;
}

// Copy<FIKRetargetRunIKRigOpSettings> @ 14def5d00

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetRunIKRigOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  bool bVar1;
  undefined3 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_);
    }
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)
               &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)
               &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold);
    *(char *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         (char)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    *(undefined1 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ + 1) =
         *(undefined1 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_ + 1);
    bVar1 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar2 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw = bVar1;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->field_0xd = uVar2;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).Object;
    param_1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48);
    param_2 = (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48);
  }
  return true;
}

// Construct<FIKRigGoalInput> @ 14def7000

void __cdecl UE::CoreUObject::Private::Construct<FIKRigGoalInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FIKRigGoalInput> @ 14def7060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigGoalInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3ff0000000000000;
  return;
}

// Destruct<FIKRigGoalInput> @ 14def70c0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigGoalInput>(void *param_1)

{
  return;
}

// Construct<FAnimNode_RetargetPoseFromMesh> @ 14def71d0

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_RetargetPoseFromMesh>(void *param_1)

{
  memset(param_1,0,0x380);
  FAnimNode_RetargetPoseFromMesh::FAnimNode_RetargetPoseFromMesh(param_1);
  return;
}

// ConstructForTests<FAnimNode_RetargetPoseFromMesh> @ 14def7200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_RetargetPoseFromMesh>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 uStackX_8;
  
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_RetargetPoseFromMesh__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x24);
  uStackX_8 = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)((longlong)param_1 + 0x38));
  *(undefined8 *)((longlong)param_1 + 0x160) = 0xffffffffffffffff;
  *(undefined2 *)((longlong)param_1 + 0x168) = 0x100;
  FIKRetargetProcessor::FIKRetargetProcessor((FIKRetargetProcessor *)((longlong)param_1 + 0x170));
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined8 *)((longlong)param_1 + 0x368) = 0;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  return;
}

// Destruct<FAnimNode_RetargetPoseFromMesh> @ 14def7220

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_RetargetPoseFromMesh>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x368) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x368));
  }
  if (*(void **)((longlong)param_1 + 0x358) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x358));
  }
  if (*(void **)((longlong)param_1 + 0x348) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x348));
  }
  FIKRetargetProcessor::~FIKRetargetProcessor((FIKRetargetProcessor *)((longlong)param_1 + 0x170));
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x68));
  DestructItems<FRetargetOpProfile,int>
            (*(FRetargetOpProfile **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FIKRigGoalInput> @ 14def7230

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigGoalInput>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  if (param_3 != 0) {
    lVar17 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar17 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar17 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x70 + (longlong)param_1);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar17 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar16;
      param_1 = (void *)((longlong)param_1 + 0x80);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// SerializeArchive<FAnimNode_RetargetPoseFromMesh> @ 14def7300

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FAnimNode_RetargetPoseFromMesh>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  return false;
}

// PostSerialize<FAnimNode_RetargetPoseFromMesh> @ 14def73a0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FAnimNode_RetargetPoseFromMesh>
          (FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FAnimNode_RetargetPoseFromMesh> @ 14def73f0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_RetargetPoseFromMesh>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar3;
    *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x30) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x30));
    }
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    FRetargetProfile::operator=
              ((FRetargetProfile *)((longlong)param_1 + 0x38),
               (FRetargetProfile *)((longlong)param_2 + 0x38));
    *(undefined4 *)((longlong)param_1 + 0x160) = *(undefined4 *)((longlong)param_2 + 0x160);
    *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
    *(undefined1 *)((longlong)param_1 + 0x168) = *(undefined1 *)((longlong)param_2 + 0x168);
    *(undefined1 *)((longlong)param_1 + 0x169) = *(undefined1 *)((longlong)param_2 + 0x169);
    FIKRetargetProcessor::operator=
              ((FIKRetargetProcessor *)((longlong)param_1 + 0x170),
               (FIKRetargetProcessor *)((longlong)param_2 + 0x170));
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x348),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x348));
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x358),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x358));
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x368);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x368)) {
      iVar2 = *(int *)((longlong)param_2 + 0x370);
      piVar1 = (int *)((longlong)param_1 + 0x374);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x368))->Data;
      *(int *)((longlong)param_1 + 0x370) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 3);
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x378) = *(undefined4 *)((longlong)param_2 + 0x378);
    *(undefined1 *)((longlong)param_1 + 0x37c) = *(undefined1 *)((longlong)param_2 + 0x37c);
    param_1 = (void *)((longlong)param_1 + 0x380);
    param_2 = (void *)((longlong)param_2 + 0x380);
  }
  return true;
}

// Construct<FIKRigGoalContainer> @ 14def83a0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigGoalContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FIKRigGoalContainer> @ 14def83c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigGoalContainer>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FIKRigGoalContainer> @ 14def8420

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigGoalContainer>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FIKRigPoleSolverSettings> @ 14def8480

void __cdecl UE::CoreUObject::Private::Construct<FIKRigPoleSolverSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined ***)param_1 = &___7FIKRigPoleSolverSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FIKRigPoleSolverSettings> @ 14def84b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigPoleSolverSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigPoleSolverSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  return;
}

// Construct<FIKRetargetRootMotionOp> @ 14def8520

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetRootMotionOp>(void *param_1)

{
  memset(param_1,0,0x290);
  FIKRetargetRootMotionOp::FIKRetargetRootMotionOp(param_1);
  return;
}

// Destruct<FIKRigPoleSolverSettings> @ 14def8550

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigPoleSolverSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// ConstructForTests<FIKRetargetRootMotionOp> @ 14def8570

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetRootMotionOp>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetRootMotionOp__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetRootMotionOpSettings__6B_;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x70) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x78) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x80) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x88) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x90) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x98) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xa0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xb0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xc0) = (double)fVar2;
  *(double *)((longlong)param_1 + 200) = (double)fVar3;
  *(undefined2 *)((longlong)param_1 + 0xd0) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0xffffffff;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x100) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x108) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x110) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x118) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x120) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x128) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x130) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x138) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x140) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x148) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x150) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x158) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x160) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x168) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x170) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x178) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x180) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x188) = (double)fVar1;
  *(double *)((longlong)param_1 + 400) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x198) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x1a0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x1a8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x1b0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x1b8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x1c0) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x1c8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x1d0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x1d8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x1e0) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x1e8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x1f0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x1f8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x200) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x208) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x210) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x218) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x220) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x228) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x230) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x238) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x240) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x248) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x250) = (double)fVar2;
  *(double *)((longlong)param_1 + 600) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x260) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x268) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x270) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x278) = (double)fVar3;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  return;
}

// Destruct<FIKRetargetRootMotionOp> @ 14def8580

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetRootMotionOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x280) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x280));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRigGoalContainer> @ 14def85e0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigGoalContainer>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      TArray<FIKRigGoal,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FIKRigGoal,TSizedDefaultAllocator<32>_> *)(puVar1 + 8),
                 (TArray<FIKRigGoal,TSizedDefaultAllocator<32>_> *)
                 (puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRigPoleSolverSettings> @ 14def8680

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigPoleSolverSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x20) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Copy<FIKRetargetRootMotionOp> @ 14def8710

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetRootMotionOp>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetRootMotionOpSettings::operator=
              ((FIKRetargetRootMotionOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetRootMotionOpSettings *)((longlong)param_2 + 0x20));
    *(undefined4 *)((longlong)param_1 + 0xf0) = *(undefined4 *)((longlong)param_2 + 0xf0);
    *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xf4);
    *(undefined4 *)((longlong)param_1 + 0xf8) = *(undefined4 *)((longlong)param_2 + 0xf8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x108);
    *(undefined8 *)((longlong)param_1 + 0x100) = *(undefined8 *)((longlong)param_2 + 0x100);
    *(undefined8 *)((longlong)param_1 + 0x108) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x118);
    *(undefined8 *)((longlong)param_1 + 0x110) = *(undefined8 *)((longlong)param_2 + 0x110);
    *(undefined8 *)((longlong)param_1 + 0x118) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x128);
    *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
    *(undefined8 *)((longlong)param_1 + 0x128) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x138);
    *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_2 + 0x130);
    *(undefined8 *)((longlong)param_1 + 0x138) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x148);
    *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)((longlong)param_2 + 0x140);
    *(undefined8 *)((longlong)param_1 + 0x148) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x158);
    *(undefined8 *)((longlong)param_1 + 0x150) = *(undefined8 *)((longlong)param_2 + 0x150);
    *(undefined8 *)((longlong)param_1 + 0x158) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x168);
    *(undefined8 *)((longlong)param_1 + 0x160) = *(undefined8 *)((longlong)param_2 + 0x160);
    *(undefined8 *)((longlong)param_1 + 0x168) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x178);
    *(undefined8 *)((longlong)param_1 + 0x170) = *(undefined8 *)((longlong)param_2 + 0x170);
    *(undefined8 *)((longlong)param_1 + 0x178) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x188);
    *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)((longlong)param_2 + 0x180);
    *(undefined8 *)((longlong)param_1 + 0x188) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x198);
    *(undefined8 *)((longlong)param_1 + 400) = *(undefined8 *)((longlong)param_2 + 400);
    *(undefined8 *)((longlong)param_1 + 0x198) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1a8);
    *(undefined8 *)((longlong)param_1 + 0x1a0) = *(undefined8 *)((longlong)param_2 + 0x1a0);
    *(undefined8 *)((longlong)param_1 + 0x1a8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1b8);
    *(undefined8 *)((longlong)param_1 + 0x1b0) = *(undefined8 *)((longlong)param_2 + 0x1b0);
    *(undefined8 *)((longlong)param_1 + 0x1b8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c8);
    *(undefined8 *)((longlong)param_1 + 0x1c0) = *(undefined8 *)((longlong)param_2 + 0x1c0);
    *(undefined8 *)((longlong)param_1 + 0x1c8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1d8);
    *(undefined8 *)((longlong)param_1 + 0x1d0) = *(undefined8 *)((longlong)param_2 + 0x1d0);
    *(undefined8 *)((longlong)param_1 + 0x1d8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1e8);
    *(undefined8 *)((longlong)param_1 + 0x1e0) = *(undefined8 *)((longlong)param_2 + 0x1e0);
    *(undefined8 *)((longlong)param_1 + 0x1e8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1f8);
    *(undefined8 *)((longlong)param_1 + 0x1f0) = *(undefined8 *)((longlong)param_2 + 0x1f0);
    *(undefined8 *)((longlong)param_1 + 0x1f8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x208);
    *(undefined8 *)((longlong)param_1 + 0x200) = *(undefined8 *)((longlong)param_2 + 0x200);
    *(undefined8 *)((longlong)param_1 + 0x208) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x218);
    *(undefined8 *)((longlong)param_1 + 0x210) = *(undefined8 *)((longlong)param_2 + 0x210);
    *(undefined8 *)((longlong)param_1 + 0x218) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x228);
    *(undefined8 *)((longlong)param_1 + 0x220) = *(undefined8 *)((longlong)param_2 + 0x220);
    *(undefined8 *)((longlong)param_1 + 0x228) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x238);
    *(undefined8 *)((longlong)param_1 + 0x230) = *(undefined8 *)((longlong)param_2 + 0x230);
    *(undefined8 *)((longlong)param_1 + 0x238) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x248);
    *(undefined8 *)((longlong)param_1 + 0x240) = *(undefined8 *)((longlong)param_2 + 0x240);
    *(undefined8 *)((longlong)param_1 + 0x248) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 600);
    *(undefined8 *)((longlong)param_1 + 0x250) = *(undefined8 *)((longlong)param_2 + 0x250);
    *(undefined8 *)((longlong)param_1 + 600) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x268);
    *(undefined8 *)((longlong)param_1 + 0x260) = *(undefined8 *)((longlong)param_2 + 0x260);
    *(undefined8 *)((longlong)param_1 + 0x268) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x278);
    *(undefined8 *)((longlong)param_1 + 0x270) = *(undefined8 *)((longlong)param_2 + 0x270);
    *(undefined8 *)((longlong)param_1 + 0x278) = uVar1;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x280),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x280));
    param_2 = (void *)((longlong)param_2 + 0x290);
    param_1 = (void *)((longlong)param_1 + 0x290);
  }
  return true;
}

// Construct<FIKRigWorkData> @ 14def9090

void __cdecl UE::CoreUObject::Private::Construct<FIKRigWorkData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FIKRigWorkData> @ 14def90b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigWorkData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FIKRigWorkData> @ 14def9150

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigWorkData>(void *param_1)

{
  FIKRigProcessor::~FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x10));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FIKRigWorkData> @ 14def9330

bool __cdecl UE::CoreUObject::Private::Copy<FIKRigWorkData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 5);
          }
        }
      }
      FIKRigProcessor::operator=((FIKRigProcessor *)(pFVar5 + 2),(FIKRigProcessor *)(pFVar2 + 2));
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 0x27;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRetargetProfile> @ 14def94a0

void __cdecl UE::CoreUObject::Private::Construct<FRetargetProfile>(void *param_1)

{
  memset(param_1,0,0x128);
  FRetargetProfile::FRetargetProfile(param_1);
  return;
}

// ConstructForTests<FRetargetProfile> @ 14def9510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetProfile>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x98) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar1;
  *(double *)((longlong)param_1 + 0xa8) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xb8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar1;
  *(double *)((longlong)param_1 + 200) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0xd0) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0xd8) = dVar2;
  *(double *)((longlong)param_1 + 0xe0) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 1;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  return;
}

// Destruct<FRetargetProfile> @ 14def9d30

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetProfile>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x30));
  DestructItems<FRetargetOpProfile,int>
            (*(FRetargetOpProfile **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FRetargetProfile> @ 14defa3d0

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetProfile>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FRetargetOpProfile *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar8);
      if (pFVar8 != pFVar2) {
        DestructItems<FRetargetOpProfile,int>
                  ((FRetargetOpProfile *)pFVar8->Data,*(int *)&pFVar8[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar5 = (FRetargetOpProfile *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar8,iVar3,piVar1);
          ConstructItems<FRetargetOpProfile,FRetargetOpProfile,int>(pFVar8->Data,pFVar5,iVar3);
        }
      }
      *(undefined1 *)&pFVar8[2].Data = *(undefined1 *)&pFVar2[2].Data;
      this = (TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(pFVar8 + 6);
      *(undefined8 *)((longlong)&pFVar8[2].Data + 4) =
           *(undefined8 *)((longlong)&pFVar2[2].Data + 4);
      *(undefined1 *)((longlong)&pFVar8[3].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[3].Data + 4);
      pFVar8[4].Data = pFVar2[4].Data;
      *(undefined1 *)&pFVar8[5].Data = *(undefined1 *)&pFVar2[5].Data;
      *(undefined1 *)((longlong)&pFVar8[5].Data + 1) =
           *(undefined1 *)((longlong)&pFVar2[5].Data + 1);
      if (this != (TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(pFVar2 + 6)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(pFVar8 + 0xd),(int *)(pFVar8 + 0xf),
                   (ForElementType<FSetElementId> *)(pFVar2 + 0xd),*(int *)&pFVar2[0xf].Data);
        iVar3 = *(int *)&pFVar2[7].Data;
        TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar3);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,iVar3,(ForAnyElementType *)this,(int *)(pFVar8 + 7),
                   (int *)((longlong)&pFVar8[7].Data + 4));
        *(undefined4 *)&pFVar8[0xc].Data = *(undefined4 *)&pFVar2[0xc].Data;
        *(undefined4 *)((longlong)&pFVar8[0xc].Data + 4) =
             *(undefined4 *)((longlong)&pFVar2[0xc].Data + 4);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar8 + 8) !=
            (TBitArray<FDefaultBitArrayAllocator> *)(pFVar2 + 8)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar8 + 8),
                     (TBitArray<FDefaultBitArrayAllocator> *)(pFVar2 + 8));
        }
        if (iVar3 != 0) {
          memcpy(*(void **)this,*(void **)(pFVar2 + 6),(longlong)iVar3 * 200);
        }
      }
      param_3 = param_3 + -1;
      *(undefined1 *)&pFVar8[0x10].Data = *(undefined1 *)&pFVar2[0x10].Data;
      pFVar6 = pFVar2[0x12].Data;
      pFVar8[0x11].Data = pFVar2[0x11].Data;
      pFVar8[0x12].Data = pFVar6;
      pFVar6 = pFVar2[0x14].Data;
      pFVar8[0x13].Data = pFVar2[0x13].Data;
      pFVar8[0x14].Data = pFVar6;
      pFVar6 = pFVar2[0x16].Data;
      pFVar8[0x15].Data = pFVar2[0x15].Data;
      pFVar8[0x16].Data = pFVar6;
      pFVar6 = pFVar2[0x18].Data;
      pFVar8[0x17].Data = pFVar2[0x17].Data;
      pFVar8[0x18].Data = pFVar6;
      pFVar6 = pFVar2[0x1a].Data;
      pFVar8[0x19].Data = pFVar2[0x19].Data;
      pFVar8[0x1a].Data = pFVar6;
      pFVar6 = pFVar2[0x1c].Data;
      pFVar8[0x1b].Data = pFVar2[0x1b].Data;
      pFVar8[0x1c].Data = pFVar6;
      pFVar8[0x1d].Data = pFVar2[0x1d].Data;
      *(undefined1 *)&pFVar8[0x1e].Data = *(undefined1 *)&pFVar2[0x1e].Data;
      uVar7 = *(undefined8 *)((longlong)&pFVar2[0x1f].Data + 4);
      *(undefined8 *)((longlong)&pFVar8[0x1e].Data + 4) =
           *(undefined8 *)((longlong)&pFVar2[0x1e].Data + 4);
      *(undefined8 *)((longlong)&pFVar8[0x1f].Data + 4) = uVar7;
      uVar7 = *(undefined8 *)((longlong)&pFVar2[0x21].Data + 4);
      *(undefined8 *)((longlong)&pFVar8[0x20].Data + 4) =
           *(undefined8 *)((longlong)&pFVar2[0x20].Data + 4);
      *(undefined8 *)((longlong)&pFVar8[0x21].Data + 4) = uVar7;
      uVar7 = *(undefined8 *)((longlong)&pFVar2[0x23].Data + 4);
      *(undefined8 *)((longlong)&pFVar8[0x22].Data + 4) =
           *(undefined8 *)((longlong)&pFVar2[0x22].Data + 4);
      *(undefined8 *)((longlong)&pFVar8[0x23].Data + 4) = uVar7;
      *(undefined4 *)((longlong)&pFVar8[0x24].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[0x24].Data + 4);
      pFVar8 = pFVar8 + 0x25;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIKRigGoal> @ 14defa810

void __cdecl UE::CoreUObject::Private::Construct<FIKRigGoal>(void *param_1)

{
  memset(param_1,0,0xb0);
  FIKRigGoal::FIKRigGoal(param_1);
  return;
}

// ConstructForTests<FIKRigGoal> @ 14defa8d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigGoal>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x48) = dVar2;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0x101;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x80) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x88) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x98) = dVar2;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// Destruct<FIKRigGoal> @ 14defa8e0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigGoal>(void *param_1)

{
  return;
}

// Construct<FIKRigLimbSolver> @ 14defa8f0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigLimbSolver>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined ***)param_1 = &___7FIKRigLimbSolver__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigLimbSolverSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f333333;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0x200;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Construct<FIKRetargetRootMotionOpSettings> @ 14defa990

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetRootMotionOpSettings>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  memset(param_1,0,0xd0);
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FIKRetargetRootMotionOpSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x70) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x78) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x80) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x88) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x90) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x98) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xa0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar3;
  *(undefined2 *)((longlong)param_1 + 0xb0) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  return;
}

// ConstructForTests<FIKRigLimbSolver> @ 14defaac0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigLimbSolver>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRigLimbSolver__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigLimbSolverSettings__6B_;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f333333;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0x200;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FIKRetargetRootMotionOpSettings> @ 14defab80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetRootMotionOpSettings>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FIKRetargetRootMotionOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x70) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x78) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x80) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x88) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x90) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x98) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xa0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar3;
  *(undefined2 *)((longlong)param_1 + 0xb0) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  return;
}

// Destruct<FIKRigLimbSolver> @ 14defacd0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigLimbSolver>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigSettingsBase__6B_;
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  return;
}

// Destruct<FIKRetargetRootMotionOpSettings> @ 14defada0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetRootMotionOpSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRigGoal> @ 14defae20

bool __cdecl UE::CoreUObject::Private::Copy<FIKRigGoal>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar4 = param_1;
    do {
      *puVar4 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      puVar4[1] = *(undefined8 *)((longlong)pvVar3 + 8);
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)((longlong)pvVar3 + 0x10);
      *(undefined8 *)((longlong)puVar4 + 0x14) = *(undefined8 *)((longlong)pvVar3 + 0x14);
      uVar1 = *(uint *)((longlong)pvVar3 + 0x1c);
      *(uint *)((longlong)puVar4 + 0x1c) =
           (uVar1 ^ *(uint *)((longlong)puVar4 + 0x1c)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)puVar4 + 0x1c) =
           (*(uint *)((longlong)pvVar3 + 0x1c) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)pvVar3 + 0x1c);
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)((longlong)pvVar3 + 0x20);
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x30);
      puVar4[5] = *(undefined8 *)((longlong)pvVar3 + 0x28);
      puVar4[6] = uVar2;
      puVar4[7] = *(undefined8 *)((longlong)pvVar3 + 0x38);
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x48);
      puVar4[8] = *(undefined8 *)((longlong)pvVar3 + 0x40);
      puVar4[9] = uVar2;
      puVar4[10] = *(undefined8 *)((longlong)pvVar3 + 0x50);
      *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)((longlong)pvVar3 + 0x58);
      *(undefined4 *)((longlong)puVar4 + 0x5c) = *(undefined4 *)((longlong)pvVar3 + 0x5c);
      *(undefined1 *)(puVar4 + 0xc) = *(undefined1 *)((longlong)pvVar3 + 0x60);
      *(undefined1 *)((longlong)puVar4 + 0x61) = *(undefined1 *)((longlong)pvVar3 + 0x61);
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x70);
      puVar4[0xd] = *(undefined8 *)((longlong)pvVar3 + 0x68);
      puVar4[0xe] = uVar2;
      puVar4[0xf] = *(undefined8 *)((longlong)pvVar3 + 0x78);
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x88);
      puVar4[0x10] = *(undefined8 *)((longlong)pvVar3 + 0x80);
      puVar4[0x11] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x98);
      puVar4[0x12] = *(undefined8 *)((longlong)pvVar3 + 0x90);
      puVar4[0x13] = uVar2;
      *(undefined1 *)(puVar4 + 0x14) = *(undefined1 *)((longlong)pvVar3 + 0xa0);
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0xb0);
      puVar4 = puVar4 + 0x16;
    } while (param_3 != 0);
  }
  return true;
}

// SerializeArchive<FIKRetargetRootMotionOpSettings> @ 14defafe0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FIKRetargetRootMotionOpSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UScriptStruct *this;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings,(UObject *)pUVar2
                         ,L"IKRetargetRootMotionOpSettings");
  }
  this = Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings,(UObject *)pUVar2
                         ,L"IKRetargetRootMotionOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this,param_1,param_2,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,iVar1);
  }
  return true;
}

// Copy<FIKRigLimbSolver> @ 14defb200

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigLimbSolver>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) = *(undefined1 *)((longlong)pvVar1 + 8);
    *(undefined4 *)((longlong)pvVar2 + 0x18) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x1c) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x20) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x24) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x28) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x2c) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x30) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x34) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x38) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x39) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x39 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x50) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    FLimbSolver::operator=
              ((FLimbSolver *)((longlong)pvVar2 + 0x58),(FLimbSolver *)((longlong)pvVar1 + 0x58));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0x70),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x70));
    pvVar1 = (void *)((longlong)pvVar1 + 0x80);
    pvVar2 = (void *)((longlong)pvVar2 + 0x80);
  }
  return true;
}

// Copy<FIKRetargetRootMotionOpSettings> @ 14defb340

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetRootMotionOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  UObject *pUVar2;
  longlong lVar3;
  FIKRetargetOpSettingsBase *pFVar4;
  undefined3 uVar5;
  bool bVar6;
  int iVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
    uVar1 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold =
         (uVar1 ^ ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold) &
         0x80000000 ^ uVar1;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold ^ uVar1) &
         0x7fffffff ^ ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->bDebugDraw;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    uVar1 = (uint)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         (uVar1 ^ (uint)((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_) &
         0x80000000 ^ uVar1;
    *(uint *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         ((uint)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_ ^ uVar1) &
         0x7fffffff ^ (uint)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    *(undefined4 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ + 4) =
         *(undefined4 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_ + 4);
    *(char *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold =
         (char)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    *(undefined8 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw =
         *(undefined8 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar1 = *(uint *)((longlong)
                      &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).
                       Object + 4);
    *(uint *)((longlong)
              &(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object + 4) =
         (uVar1 ^ *(uint *)((longlong)
                            &(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller)
                             .Object + 4)) & 0x80000000 ^ uVar1;
    *(uint *)((longlong)
              &(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object + 4) =
         (*(uint *)((longlong)
                    &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).Object
                   + 4) ^ uVar1) & 0x7fffffff ^
         *(uint *)((longlong)
                   &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).Object +
                  4);
    *(int *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->_padding_ =
         (int)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->_padding_;
    *(undefined1 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->_padding_ + 4) =
         *(undefined1 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->_padding_ + 4);
    *(undefined1 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->_padding_ + 5) =
         *(undefined1 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->_padding_ + 5);
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->field_0xd;
    pUVar2 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->Controller).Object = pUVar2;
    iVar7 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->LODThreshold;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->_padding_;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->LODThreshold = iVar7;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->field_0xd = uVar5;
    lVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->_padding_;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->_padding_ = lVar3;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->field_0xd;
    pUVar2 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->Controller).Object = pUVar2;
    iVar7 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->LODThreshold;
    bVar6 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->_padding_;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->LODThreshold = iVar7;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->bDebugDraw = bVar6;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->field_0xd = uVar5;
    lVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->_padding_;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->_padding_ = lVar3;
    *(char *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->LODThreshold =
         (char)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->LODThreshold;
    *(undefined1 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->LODThreshold + 1) =
         *(undefined1 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->LODThreshold + 1);
    *(undefined8 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->bDebugDraw =
         *(undefined8 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->bDebugDraw;
    *(undefined8 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->Controller).Object + 4)
         = *(undefined8 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->Controller).Object + 4);
    pFVar4 = (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0);
    param_2 = &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->Controller;
    *(undefined8 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->_padding_ + 4) =
         *(undefined8 *)((longlong)&pFVar4->_padding_ + 4);
    param_1 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->Controller;
  }
  return true;
}

// GetStructTypeHash<FIKRigGoal> @ 14defb620

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FIKRigGoal>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// Construct<FRetargetOpProfile> @ 14defba60

void __cdecl UE::CoreUObject::Private::Construct<FRetargetOpProfile>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FRetargetOpProfile> @ 14defbaa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetOpProfile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FRetargetOpProfile> @ 14defbae0

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetOpProfile>(void *param_1)

{
  if (*(UObject **)((longlong)param_1 + 0x18) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Construct<FLimbSolver> @ 14defbb60

void __cdecl UE::CoreUObject::Private::Construct<FLimbSolver>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FLimbSolver> @ 14defbb80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLimbSolver>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Copy<FRetargetOpProfile> @ 14defbc20

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetOpProfile>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  UObjectBase *this;
  UObjectBase *pUVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (FInstancedStruct *)((longlong)param_1 + lVar3 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      if ((FInstancedStruct *)((longlong)param_1 + 8) != pFVar1) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)((longlong)param_1 + 8),
                   (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                   *(uchar **)((longlong)param_1 + lVar3 + 0x10));
      }
      this = *(UObjectBase **)((longlong)param_1 + lVar3 + 0x18);
      pUVar2 = *(UObjectBase **)((longlong)param_1 + 0x18);
      if (this == (UObjectBase *)0x0) {
        if (pUVar2 != (UObjectBase *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
          *(undefined8 *)((longlong)param_1 + 0x18) = 0;
        }
      }
      else if (pUVar2 != this) {
        if (pUVar2 != (UObjectBase *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
        }
        UObjectBase::AddRef(this);
        *(UObjectBase **)((longlong)param_1 + 0x18) = this;
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FLimbSolver> @ 14defbce0

void __cdecl UE::CoreUObject::Private::Destruct<FLimbSolver>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FIKRetargetFKChainsOp> @ 14defbd00

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetFKChainsOp>(void *param_1)

{
  memset(param_1,0,0xd8);
  FIKRetargetFKChainsOp::FIKRetargetFKChainsOp(param_1);
  return;
}

// ConstructForTests<FIKRetargetFKChainsOp> @ 14defbd30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetFKChainsOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetFKChainsOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetFKChainsOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  return;
}

// Destruct<FIKRetargetFKChainsOp> @ 14defbd40

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetFKChainsOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  DestructItems<FChainPairFK,int>
            (*(FChainPairFK **)((longlong)param_1 + 0x88),*(int *)((longlong)param_1 + 0x90));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FLimbSolver> @ 14defbd60

bool __cdecl UE::CoreUObject::Private::Copy<FLimbSolver>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 8);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      if (pFVar4 != pFVar3) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        _Src = pFVar3->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 0x68);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRetargetFKChainsOp> @ 14defbe40

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetFKChainsOp>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChainPairFK *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetFKChainsOpSettings::operator=
              ((FIKRetargetFKChainsOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetFKChainsOpSettings *)((longlong)param_2 + 0x20));
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x88);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x88)) {
      DestructItems<FChainPairFK,int>
                ((FChainPairFK *)pFVar2->Data,*(int *)((longlong)param_1 + 0x90));
      iVar3 = *(int *)((longlong)param_2 + 0x90);
      piVar1 = (int *)((longlong)param_1 + 0x94);
      pFVar4 = (FChainPairFK *)((ForAnyElementType *)((longlong)param_2 + 0x88))->Data;
      *(int *)((longlong)param_1 + 0x90) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x100,0x10,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        ConstructItems<FChainPairFK,FChainPairFK,int>(pFVar2->Data,pFVar4,iVar3);
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x98),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x98));
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0xa8),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0xa8));
    FRetargetChainMapping::operator=
              ((FRetargetChainMapping *)((longlong)param_1 + 0xb8),
               (FRetargetChainMapping *)((longlong)param_2 + 0xb8));
    param_2 = (void *)((longlong)param_2 + 0xd8);
    param_1 = (void *)((longlong)param_1 + 0xd8);
  }
  return true;
}

// Construct<FIKRigLimbSolverSettings> @ 14defcf80

void __cdecl UE::CoreUObject::Private::Construct<FIKRigLimbSolverSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f333333;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  *(undefined ***)param_1 = &___7FIKRigLimbSolverSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FIKRigLimbSolverSettings> @ 14defcff0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigLimbSolverSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3c23d70a;
  *(undefined ***)param_1 = &___7FIKRigLimbSolverSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f333333;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FIKRigLimbSolverSettings> @ 14defd050

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigLimbSolverSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Construct<FIKRetargetAdditivePoseOp> @ 14defd070

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetAdditivePoseOp>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetAdditivePoseOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FIKRetargetAdditivePoseOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Copy<FIKRigLimbSolverSettings> @ 14defd110

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigLimbSolverSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0xc) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x14) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x20) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x24) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x29) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x29 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x30) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x38) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x40) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x40 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x48);
  }
  return true;
}

// ConstructForTests<FIKRetargetAdditivePoseOp> @ 14defd1b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetAdditivePoseOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetAdditivePoseOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FIKRetargetAdditivePoseOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3f800000;
  return;
}

// Destruct<FIKRetargetAdditivePoseOp> @ 14defd200

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetAdditivePoseOp>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x38) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x38));
    *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetAdditivePoseOp> @ 14defd400

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetAdditivePoseOp>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1d) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1d - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    FIKRetargetOpSettingsBase::operator=
              ((FIKRetargetOpSettingsBase *)((longlong)pvVar1 + 0x28),
               (FIKRetargetOpSettingsBase *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar1 + 0x40) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x48) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x48 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x50);
  }
  return true;
}

// Construct<FIKRetargetStrideWarpingOp> @ 14defd8e0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetStrideWarpingOp>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetStrideWarpingOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetStrideWarpingOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x4014000000000000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// ConstructForTests<FIKRetargetStrideWarpingOp> @ 14defd9a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetStrideWarpingOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetStrideWarpingOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetStrideWarpingOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FIKRetargetStrideWarpingOp> @ 14defda40

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetStrideWarpingOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetStrideWarpingOp> @ 14defdb40

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetStrideWarpingOp>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetStrideWarpingOpSettings::operator=
              ((FIKRetargetStrideWarpingOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetStrideWarpingOpSettings *)((longlong)param_2 + 0x20));
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x88);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x88)) {
      iVar4 = *(int *)((longlong)param_2 + 0x90);
      piVar1 = (int *)((longlong)param_1 + 0x94);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x88))->Data;
      *(int *)((longlong)param_1 + 0x90) = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,iVar4,*piVar1,pFVar2,iVar4,piVar1);
        if (iVar4 != 0) {
          memcpy(pFVar2->Data,_Src,(longlong)iVar4 * 0x70);
        }
      }
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x98) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x98));
    }
    puVar3 = (undefined8 *)((longlong)param_2 + 0x98);
    param_2 = (void *)((longlong)param_2 + 0xa0);
    *(undefined8 *)((longlong)param_1 + 0x98) = *puVar3;
    param_1 = (void *)((longlong)param_1 + 0xa0);
  }
  return true;
}

// Construct<FIKRetargetFKChainsOpSettings> @ 14defdc80

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetFKChainsOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32) = 0;
  *(undefined2 *)((longlong)param_1 + 0x36) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetFKChainsOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FIKRetargetFKChainsOpSettings> @ 14defdd70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetFKChainsOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetFKChainsOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FIKRetargetFKChainsOpSettings> @ 14defdf40

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetFKChainsOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Construct<FIKRetargetOpBase> @ 14defe0f0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetOpBase>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// ConstructForTests<FIKRetargetOpBase> @ 14defe120

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetOpBase>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Copy<FIKRetargetFKChainsOpSettings> @ 14defe150

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetFKChainsOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  bool bVar5;
  undefined3 uVar6;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_);
    }
    piVar1 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
    if (piVar1 != &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold) {
      iVar3 = *(int *)&(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).
                       Object;
      piVar2 = (int *)((longlong)
                       &(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).
                        Object + 4);
      _Src = *(void **)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
      iVar4 = *piVar2;
      *(int *)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
           iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,iVar4,(ForAnyElementType *)piVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(*(void **)piVar1,_Src,(longlong)iVar3 * 0x28);
        }
      }
    }
    *(char *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         (char)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    *(undefined1 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ + 1) =
         *(undefined1 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_ + 1);
    bVar5 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar6 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw = bVar5;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->field_0xd = uVar6;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).Object;
    FRetargetChainMapping::operator=
              ((FRetargetChainMapping *)((longlong)param_1 + 0x48),
               (FRetargetChainMapping *)((longlong)param_2 + 0x48));
    param_1 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->LODThreshold;
    param_2 = &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->LODThreshold;
  }
  return true;
}

// Destruct<FIKRetargetOpBase> @ 14defe290

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetOpBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetOpBase> @ 14defe370

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetOpBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1d) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1d - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FIKRetargetAdditivePoseOpSettings> @ 14defe7c0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetAdditivePoseOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetAdditivePoseOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FIKRetargetAdditivePoseOpSettings> @ 14defe8d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetAdditivePoseOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetAdditivePoseOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  return;
}

// Destruct<FIKRetargetAdditivePoseOpSettings> @ 14defe9e0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetAdditivePoseOpSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRetargetAdditivePoseOpSettings> @ 14defeaf0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetAdditivePoseOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  FIKRetargetOpSettingsBase *pFVar1;
  FIKRetargetOpSettingsBase *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FIKRetargetOpSettingsBase *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FIKRetargetOpSettingsBase::operator=(this,pFVar1);
      this[1]._padding_ = pFVar1[1]._padding_;
      this[1].LODThreshold = pFVar1[1].LODThreshold;
      param_3 = param_3 + -1;
      this = (FIKRetargetOpSettingsBase *)&this[1].Controller;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIKRigFullBodyIKSolver> @ 14defec00

void __cdecl UE::CoreUObject::Private::Construct<FIKRigFullBodyIKSolver>(void *param_1)

{
  memset(param_1,0,0xd8);
  FIKRigFullBodyIKSolver::FIKRigFullBodyIKSolver(param_1);
  return;
}

// ConstructForTests<FIKRigFullBodyIKSolver> @ 14defec30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigFullBodyIKSolver>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRigFullBodyIKSolver__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigFBIKSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined2 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3fa66666;
  return;
}

// Destruct<FIKRigFullBodyIKSolver> @ 14defec40

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigFullBodyIKSolver>(void *param_1)

{
  FPBIKSolver::~FPBIKSolver((FPBIKSolver *)((longlong)param_1 + 0x80));
  DestructItems<FIKRigFBIKBoneSettings,int>
            (*(FIKRigFBIKBoneSettings **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FIKRigFBIKGoalSettings,int>
            (*(FIKRigFBIKGoalSettings **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigSettingsBase__6B_;
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  return;
}

// Copy<FIKRigFullBodyIKSolver> @ 14defed10

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigFullBodyIKSolver>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FIKRigFBIKGoalSettings *pFVar4;
  FIKRigFBIKBoneSettings *pFVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  
  pvVar7 = param_1;
  pvVar8 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)pvVar7 + 0x60);
    *(undefined1 *)((longlong)pvVar7 + 8) = *(undefined1 *)((longlong)pvVar8 + 8);
    *(undefined8 *)((longlong)pvVar7 + 0x18) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar7 + 0x20) =
         *(undefined4 *)((longlong)pvVar7 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar7 + 0x24) =
         *(undefined4 *)((longlong)pvVar7 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar7 + 0x28) =
         *(undefined4 *)((longlong)pvVar7 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar7 + 0x2c) =
         *(undefined1 *)((longlong)pvVar7 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar7 + 0x2d) =
         *(undefined1 *)((longlong)pvVar7 + (longlong)param_2 + (0x2d - (longlong)param_1));
    uVar6 = *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x30) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x38) = uVar6;
    uVar6 = *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x40) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x48) = uVar6;
    *(undefined4 *)((longlong)pvVar7 + 0x50) =
         *(undefined4 *)((longlong)pvVar7 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar7 + 0x54) =
         *(undefined4 *)((longlong)pvVar7 + (longlong)param_2 + (0x54 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar7 + 0x58) =
         *(undefined4 *)((longlong)pvVar7 + (longlong)param_2 + (0x58 - (longlong)param_1));
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar8 + 0x60)) {
      DestructItems<FIKRigFBIKGoalSettings,int>
                ((FIKRigFBIKGoalSettings *)pFVar1->Data,*(int *)((longlong)pvVar7 + 0x68));
      iVar3 = *(int *)((longlong)pvVar8 + 0x68);
      piVar2 = (int *)((longlong)pvVar7 + 0x6c);
      pFVar4 = (FIKRigFBIKGoalSettings *)((ForAnyElementType *)((longlong)pvVar8 + 0x60))->Data;
      *(int *)((longlong)pvVar7 + 0x68) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FIKRigFBIKGoalSettings,FIKRigFBIKGoalSettings,int>(pFVar1->Data,pFVar4,iVar3)
        ;
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)pvVar7 + 0x70);
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar8 + 0x70)) {
      DestructItems<FIKRigFBIKBoneSettings,int>
                ((FIKRigFBIKBoneSettings *)pFVar1->Data,*(int *)((longlong)pvVar7 + 0x78));
      iVar3 = *(int *)((longlong)pvVar8 + 0x78);
      piVar2 = (int *)((longlong)pvVar7 + 0x7c);
      pFVar5 = (FIKRigFBIKBoneSettings *)((ForAnyElementType *)((longlong)pvVar8 + 0x70))->Data;
      *(int *)((longlong)pvVar7 + 0x78) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FIKRigFBIKBoneSettings,FIKRigFBIKBoneSettings,int>(pFVar1->Data,pFVar5,iVar3)
        ;
      }
    }
    *(undefined1 *)((longlong)pvVar7 + 0xc9) = 0;
    pvVar7 = (void *)((longlong)pvVar7 + 0xd8);
    pvVar8 = (void *)((longlong)pvVar8 + 0xd8);
  }
  return true;
}

// Construct<FLimbLink> @ 14defeee0

void __cdecl UE::CoreUObject::Private::Construct<FLimbLink>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FLimbLink> @ 14defef60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLimbLink>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FLimbLink> @ 14defefe0

void __cdecl UE::CoreUObject::Private::Destruct<FLimbLink>(void *param_1)

{
  return;
}

// Construct<FIKRetargetStrideWarpingOpSettings> @ 14deff0b0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetStrideWarpingOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x61) = 0;
  *(undefined2 *)((longlong)param_1 + 0x65) = 0;
  *(undefined1 *)((longlong)param_1 + 0x67) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetStrideWarpingOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4014000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// ConstructForTests<FIKRetargetStrideWarpingOpSettings> @ 14deff1f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetStrideWarpingOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetStrideWarpingOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4014000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Destruct<FIKRetargetStrideWarpingOpSettings> @ 14deff260

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetStrideWarpingOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FLimbLink> @ 14deff2b0

bool __cdecl UE::CoreUObject::Private::Copy<FLimbLink>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  if (param_3 != 0) {
    lVar14 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar14 + 0x60 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar14 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar14 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar14 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x68);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// SerializeArchive<FIKRetargetStrideWarpingOpSettings> @ 14deff340

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FIKRetargetStrideWarpingOpSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UScriptStruct *this;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                         (UObject *)pUVar2,L"IKRetargetStrideWarpingOpSettings");
  }
  this = Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                         (UObject *)pUVar2,L"IKRetargetStrideWarpingOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this,param_1,param_2,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,iVar1);
  }
  return true;
}

// Copy<FIKRetargetStrideWarpingOpSettings> @ 14deff460

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetStrideWarpingOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  FIKRetargetOpSettingsBase *pFVar1;
  bool *pbVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  undefined3 uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    pFVar1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18);
    if (pFVar1 != (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18)) {
      iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
      pbVar2 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw;
      _Src = (FScriptContainerElement *)
             ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
      ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold = iVar3;
      if ((iVar3 == 0) && (*(int *)pbVar2 == 0)) {
        *(undefined4 *)pbVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,*(int *)pbVar2,(ForAnyElementType *)pFVar1,iVar3,(int *)pbVar2);
        if (iVar3 != 0) {
          memcpy((FScriptContainerElement *)pFVar1->_padding_,_Src,(longlong)iVar3 * 0xc);
        }
      }
    }
    *(undefined4 *)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         *(undefined4 *)
          &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    *(undefined4 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object + 4)
         = *(undefined4 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object + 4);
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->_padding_;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->Controller).Object;
    *(char *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->_padding_ =
         (char)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->_padding_;
    param_1 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->LODThreshold;
    param_2 = &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->LODThreshold;
  }
  return true;
}

// Construct<FRetargetFKChainSettings> @ 14deff5a0

void __cdecl UE::CoreUObject::Private::Construct<FRetargetFKChainSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FRetargetFKChainSettings> @ 14deff5d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetFKChainSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FRetargetFKChainSettings> @ 14deff600

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetFKChainSettings>(void *param_1)

{
  return;
}

// Construct<FIKRetargetOpSettingsBase> @ 14deff660

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetOpSettingsBase>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FIKRetargetOpSettingsBase> @ 14deff690

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetOpSettingsBase>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Copy<FRetargetFKChainSettings> @ 14deff6c0

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetFKChainSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FIKRetargetOpSettingsBase> @ 14deff700

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetOpSettingsBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRetargetOpSettingsBase> @ 14deff780

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetOpSettingsBase>(void *param_1,void *param_2,int param_3)

{
  UObjectBase *this;
  UObjectBase *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar2 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined1 *)((longlong)pvVar2 + 0xc) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0xc - (longlong)param_1));
    this = *(UObjectBase **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pUVar1 = *(UObjectBase **)((longlong)pvVar2 + 0x10);
    if (this == (UObjectBase *)0x0) {
      if (pUVar1 != (UObjectBase *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
        *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
      }
    }
    else if (pUVar1 != this) {
      if (pUVar1 != (UObjectBase *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
      }
      UObjectBase::AddRef(this);
      *(UObjectBase **)((longlong)pvVar2 + 0x10) = this;
    }
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FIKRetargetPinBoneOp> @ 14deff8a0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetPinBoneOp>(void *param_1)

{
  memset(param_1,0,0x120);
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetPinBoneOp__6B_;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  FIKRetargetPinBoneOpSettings::FIKRetargetPinBoneOpSettings
            ((FIKRetargetPinBoneOpSettings *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0x110) = 0;
  return;
}

// ConstructForTests<FIKRetargetPinBoneOp> @ 14deff8f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetPinBoneOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetPinBoneOp__6B_;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  FIKRetargetPinBoneOpSettings::FIKRetargetPinBoneOpSettings
            ((FIKRetargetPinBoneOpSettings *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0x110) = 0;
  return;
}

// Destruct<FIKRetargetPinBoneOp> @ 14deff940

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetPinBoneOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetPinBoneOp> @ 14deff990

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetPinBoneOp>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1d) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1d - (longlong)param_1));
    FIKRetargetPinBoneOpSettings::operator=
              ((FIKRetargetPinBoneOpSettings *)((longlong)pvVar1 + 0x20),
               (FIKRetargetPinBoneOpSettings *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x110) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x110 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x120);
  }
  return true;
}

// Construct<FIKRigFBIKSettings> @ 14deffa80

void __cdecl UE::CoreUObject::Private::Construct<FIKRigFBIKSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigFBIKSettings__6B_;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3fa66666;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41f00000;
  return;
}

// ConstructForTests<FIKRigFBIKSettings> @ 14deffb00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigFBIKSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x14;
  *(undefined ***)param_1 = &___7FIKRigFBIKSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3fa66666;
  return;
}

// Destruct<FIKRigFBIKSettings> @ 14deffbc0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigFBIKSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Copy<FIKRigFBIKSettings> @ 14deffbe0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigFBIKSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined4 *)((longlong)pvVar2 + 0x10) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x14) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x18) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x1c) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x1d) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x1d - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    *(undefined4 *)((longlong)pvVar2 + 0x40) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x44) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x44 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x48) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x50);
  }
  return true;
}

// Construct<FLimbSolverSettings> @ 14deffc70

void __cdecl UE::CoreUObject::Private::Construct<FLimbSolverSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FLimbSolverSettings__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xc;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f333333;
  *(undefined1 *)((longlong)param_1 + 0x29) = 2;
  return;
}

// ConstructForTests<FLimbSolverSettings> @ 14deffcc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLimbSolverSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3c23d70a;
  *(undefined ***)param_1 = &___7FLimbSolverSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f333333;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x200;
  return;
}

// Destruct<FLimbSolverSettings> @ 14deffd10

void __cdecl UE::CoreUObject::Private::Destruct<FLimbSolverSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Copy<FLimbSolverSettings> @ 14deffdb0

bool __cdecl
UE::CoreUObject::Private::Copy<FLimbSolverSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0xc) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x14) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x20) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x24) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x29) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x29 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FIKRetargetFilterBoneOp> @ 14defff30

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetFilterBoneOp>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetFilterBoneOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetFilterBoneOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff8000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4034000000000000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// ConstructForTests<FIKRetargetFilterBoneOp> @ 14df00000

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetFilterBoneOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetFilterBoneOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetFilterBoneOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff8000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Destruct<FIKRetargetFilterBoneOp> @ 14df00120

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetFilterBoneOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetFilterBoneOp> @ 14df00420

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetFilterBoneOp>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1d) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1d - (longlong)param_1));
    FIKRetargetFilterBoneOpSettings::operator=
              ((FIKRetargetFilterBoneOpSettings *)((longlong)pvVar1 + 0x20),
               (FIKRetargetFilterBoneOpSettings *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x68) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x68 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x70);
  }
  return true;
}

// Construct<FIKRetargetPose> @ 14df00680

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetPose>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffffff;
  return;
}

// ConstructForTests<FIKRetargetPose> @ 14df00720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetPose>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffffff;
  return;
}

// Destruct<FIKRetargetPose> @ 14df00770

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetPose>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FIKRetargetPose> @ 14df01230

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetPose>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  puVar5 = param_1;
  puVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar4 = puVar6[1];
    pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)puVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
    this = (TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)(puVar5 + 3);
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    puVar5[2] = puVar6[2];
    if (this != pTVar1) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(puVar5 + 10),(int *)(puVar5 + 0xc),
                 (ForElementType<FSetElementId> *)
                 ((longlong)puVar5 + (longlong)param_2 + (0x50 - (longlong)param_1)),
                 *(int *)((longlong)puVar5 + (longlong)param_2 + (0x60 - (longlong)param_1)));
      iVar3 = *(int *)((longlong)puVar5 + (longlong)param_2 + (0x20 - (longlong)param_1));
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar3);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar3,(ForAnyElementType *)this,(int *)(puVar5 + 4),
                 (int *)((longlong)puVar5 + 0x24));
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar5 + (longlong)param_2 + (0x28 - (longlong)param_1));
      *(undefined4 *)(puVar5 + 9) =
           *(undefined4 *)((longlong)puVar5 + (longlong)param_2 + (0x48 - (longlong)param_1));
      *(undefined4 *)((longlong)puVar5 + 0x4c) =
           *(undefined4 *)((longlong)puVar5 + (longlong)param_2 + (0x4c - (longlong)param_1));
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar5 + 5) != pTVar2) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar5 + 5),pTVar2);
      }
      if (iVar3 != 0) {
        memcpy(*(void **)this,*(void **)pTVar1,(longlong)iVar3 << 6);
      }
    }
    *(undefined4 *)(puVar5 + 0xd) =
         *(undefined4 *)((longlong)puVar5 + (longlong)param_2 + (0x68 - (longlong)param_1));
    puVar5 = puVar5 + 0xe;
    puVar6 = puVar6 + 0xe;
  }
  return true;
}

// Construct<FIKRetargetPinBoneOpSettings> @ 14df01650

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetPinBoneOpSettings>(void *param_1)

{
  memset(param_1,0,0xf0);
  FIKRetargetPinBoneOpSettings::FIKRetargetPinBoneOpSettings(param_1);
  return;
}

// ConstructForTests<FIKRetargetPinBoneOpSettings> @ 14df01690

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetPinBoneOpSettings>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FIKRetargetPinBoneOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x1000101;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x100;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x70) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x78) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x80) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x88) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x90) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x98) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xa0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0xb0) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xc0) = (double)fVar2;
  *(double *)((longlong)param_1 + 200) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xd0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xd8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xe0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xe8) = (double)fVar3;
  return;
}

// Destruct<FIKRetargetPinBoneOpSettings> @ 14df016e0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetPinBoneOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// SerializeArchive<FIKRetargetPinBoneOpSettings> @ 14df01730

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FIKRetargetPinBoneOpSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UScriptStruct *this;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings,(UObject *)pUVar2,
                         L"IKRetargetPinBoneOpSettings");
  }
  this = Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings,(UObject *)pUVar2,
                         L"IKRetargetPinBoneOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this,param_1,param_2,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,iVar1);
  }
  return true;
}

// Copy<FIKRetargetPinBoneOpSettings> @ 14df01930

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetPinBoneOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  UObject *pUVar2;
  int iVar3;
  bool bVar4;
  undefined3 uVar5;
  FIKRetargetOpSettingsBase *pFVar6;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    TArray<FPinBoneData,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FPinBoneData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x18),
               (TArray<FPinBoneData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x18));
    *(undefined1 *)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         *(undefined1 *)
          &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    *(undefined1 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object + 1)
         = *(undefined1 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object + 1);
    *(undefined1 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object + 2)
         = *(undefined1 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object + 2);
    *(undefined1 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object + 3)
         = *(undefined1 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object + 3);
    *(undefined1 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object + 4)
         = *(undefined1 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object + 4);
    *(undefined1 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object + 5)
         = *(undefined1 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object + 5);
    *(undefined1 *)
     ((longlong)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object + 6)
         = *(undefined1 *)
            ((longlong)
             &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object + 6);
    iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold = iVar3;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->field_0xd = uVar5;
    lVar1 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->_padding_;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->_padding_ = lVar1;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->field_0xd;
    pUVar2 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48))->Controller).Object = pUVar2;
    iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->LODThreshold;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->_padding_;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->LODThreshold = iVar3;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->field_0xd = uVar5;
    lVar1 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->_padding_;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x60))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x60))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->_padding_ = lVar1;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->field_0xd;
    pUVar2 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x78))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x78))->Controller).Object = pUVar2;
    iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->LODThreshold;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->_padding_;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->LODThreshold = iVar3;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->field_0xd = uVar5;
    lVar1 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->_padding_;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x90))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x90))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->_padding_ = lVar1;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->field_0xd;
    pUVar2 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xa8))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xa8))->Controller).Object = pUVar2;
    iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->LODThreshold;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->_padding_;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->LODThreshold = iVar3;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->field_0xd = uVar5;
    lVar1 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->_padding_;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xc0))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xc0))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->_padding_ = lVar1;
    pFVar6 = (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8);
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->field_0xd;
    pUVar2 = (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0xd8))->Controller).Object;
    param_2 = (void *)((longlong)param_2 + 0xf0);
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->LODThreshold = pFVar6->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->field_0xd = uVar5;
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xd8))->Controller).Object = pUVar2;
    param_1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0xf0);
  }
  return true;
}

// Construct<FRetargetStrideWarpChainSettings> @ 14df01a80

void __cdecl UE::CoreUObject::Private::Construct<FRetargetStrideWarpChainSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FRetargetStrideWarpChainSettings> @ 14df01aa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRetargetStrideWarpChainSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FRetargetStrideWarpChainSettings> @ 14df01ab0

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetStrideWarpChainSettings>(void *param_1)

{
  return;
}

// Copy<FRetargetStrideWarpChainSettings> @ 14df01c00

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetStrideWarpChainSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIKRigFBIKBoneSettings> @ 14df01c40

void __cdecl UE::CoreUObject::Private::Construct<FIKRigFBIKBoneSettings>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined ***)param_1 = &___7FIKRigFBIKBoneSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FIKRigFBIKBoneSettings> @ 14df01ca0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigFBIKBoneSettings>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigFBIKBoneSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FIKRigFBIKBoneSettings> @ 14df01cf0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigFBIKBoneSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Copy<FIKRigFBIKBoneSettings> @ 14df01eb0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigFBIKBoneSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined4 *)((longlong)pvVar2 + 0x10) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x14) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x18) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x1c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x20) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x24) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x28) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x2c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x30) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x34) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x38) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x3c) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x3c - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x50) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x58);
  }
  return true;
}

// Construct<FIKRigStretchLimbSolver> @ 14df01f70

void __cdecl UE::CoreUObject::Private::Construct<FIKRigStretchLimbSolver>(void *param_1)

{
  memset(param_1,0,0xe0);
  FIKRigStretchLimbSolver::FIKRigStretchLimbSolver(param_1);
  return;
}

// ConstructForTests<FIKRigStretchLimbSolver> @ 14df01fa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigStretchLimbSolver>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FIKRigStretchLimbSolver__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigStretchLimbSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3fee666666666666;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x4049000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  *(undefined4 *)((longlong)param_1 + 0x58) = 8;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  return;
}

// Destruct<FIKRigStretchLimbSolver> @ 14df01fb0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigStretchLimbSolver>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<FIKRigStretchLimbBoneSettings,int>
            (*(FIKRigStretchLimbBoneSettings **)((longlong)param_1 + 0x68),
             *(int *)((longlong)param_1 + 0x70));
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigSettingsBase__6B_;
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  return;
}

// Copy<FIKRigStretchLimbSolver> @ 14df02000

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigStretchLimbSolver>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FIKRigStretchLimbBoneSettings *pFVar4;
  FScriptContainerElement *_Src;
  void *pvVar5;
  void *pvVar6;
  
  pvVar5 = param_1;
  pvVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar5 + 8) = *(undefined1 *)((longlong)pvVar6 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)pvVar5 + 0x68);
    *(undefined8 *)((longlong)pvVar5 + 0x18) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x20) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x28) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x30) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x38) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x40) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x48) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x50) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x58) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x5c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x5c - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar5 + 0x60) =
         *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x60 - (longlong)param_1));
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0x68)) {
      DestructItems<FIKRigStretchLimbBoneSettings,int>
                ((FIKRigStretchLimbBoneSettings *)pFVar1->Data,*(int *)((longlong)pvVar5 + 0x70));
      iVar3 = *(int *)((longlong)pvVar6 + 0x70);
      piVar2 = (int *)((longlong)pvVar5 + 0x74);
      pFVar4 = (FIKRigStretchLimbBoneSettings *)
               ((ForAnyElementType *)((longlong)pvVar6 + 0x68))->Data;
      *(int *)((longlong)pvVar5 + 0x70) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FIKRigStretchLimbBoneSettings,FIKRigStretchLimbBoneSettings,int>
                  (pFVar1->Data,pFVar4,iVar3);
      }
    }
    *(undefined1 *)((longlong)pvVar5 + 0x78) = *(undefined1 *)((longlong)pvVar6 + 0x78);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x80),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 0x80));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x90),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 0x90));
    pFVar1 = (ForAnyElementType *)((longlong)pvVar5 + 0xa0);
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0xa0)) {
      iVar3 = *(int *)((longlong)pvVar6 + 0xa8);
      piVar2 = (int *)((longlong)pvVar5 + 0xac);
      _Src = ((ForAnyElementType *)((longlong)pvVar6 + 0xa0))->Data;
      *(int *)((longlong)pvVar5 + 0xa8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0x18);
        }
      }
    }
    TArray<double,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<double,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0xb0),
               (TArray<double,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 0xb0));
    *(undefined8 *)((longlong)pvVar5 + 0xc0) = *(undefined8 *)((longlong)pvVar6 + 0xc0);
    TArray<double,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<double,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 200),
               (TArray<double,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 200));
    *(undefined8 *)((longlong)pvVar5 + 0xd8) = *(undefined8 *)((longlong)pvVar6 + 0xd8);
    pvVar5 = (void *)((longlong)pvVar5 + 0xe0);
    pvVar6 = (void *)((longlong)pvVar6 + 0xe0);
  }
  return true;
}

// Construct<FIKRetargetFilterBoneOpSettings> @ 14df023f0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetFilterBoneOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41) = 0;
  *(undefined2 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetFilterBoneOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff8000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x4034000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// ConstructForTests<FIKRetargetFilterBoneOpSettings> @ 14df02460

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetFilterBoneOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetFilterBoneOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff8000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Destruct<FIKRetargetFilterBoneOpSettings> @ 14df02500

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetFilterBoneOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRetargetFilterBoneOpSettings> @ 14df02d00

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetFilterBoneOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  FIKRetargetOpSettingsBase *pFVar1;
  bool *pbVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  undefined3 uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    pFVar1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18);
    if (pFVar1 != (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18)) {
      iVar3 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
      pbVar2 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->bDebugDraw;
      _Src = (FScriptContainerElement *)
             ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
      ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold = iVar3;
      if ((iVar3 == 0) && (*(int *)pbVar2 == 0)) {
        *(undefined4 *)pbVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,iVar3,*(int *)pbVar2,(ForAnyElementType *)pFVar1,iVar3,(int *)pbVar2);
        if (iVar3 != 0) {
          memcpy((FScriptContainerElement *)pFVar1->_padding_,_Src,(longlong)iVar3 << 7);
        }
      }
    }
    (((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
         (((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).Object;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->_padding_;
    bVar4 = ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->bDebugDraw;
    uVar5 = *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->field_0xd;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->LODThreshold =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->bDebugDraw = bVar4;
    *(undefined3 *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->field_0xd = uVar5;
    *(undefined1 *)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30))->Controller).Object =
         *(undefined1 *)
          &(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30))->Controller).Object;
    param_1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x48);
    param_2 = (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x48);
  }
  return true;
}

// Construct<FPinBoneData> @ 14df036f0

void __cdecl UE::CoreUObject::Private::Construct<FPinBoneData>(void *param_1)

{
  memset(param_1,0,0x170);
  FPinBoneData::FPinBoneData(param_1);
  return;
}

// ConstructForTests<FPinBoneData> @ 14df03720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPinBoneData>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined8 uVar21;
  
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar21;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xc0) = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd0) = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xf0) = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x100) = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x110) = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x120) = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x130) = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x140) = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x150) = auVar20;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  return;
}

// Destruct<FPinBoneData> @ 14df03730

void __cdecl UE::CoreUObject::Private::Destruct<FPinBoneData>(void *param_1)

{
  return;
}

// PostSerialize<FPinBoneData> @ 14df03780

void __cdecl UE::CoreUObject::Private::PostSerialize<FPinBoneData>(FArchive *param_1,void *param_2)

{
  int iVar1;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    if (iVar1 < 3) {
      *(undefined8 *)((longlong)param_2 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x160);
      *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_2 + 0x168);
    }
  }
  return;
}

// Construct<FIKRetargetStretchChainOp> @ 14df037d0

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetStretchChainOp>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetStretchChainOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetStretchChainOpSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FIKRetargetStretchChainOp> @ 14df03850

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetStretchChainOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetStretchChainOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetStretchChainOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FIKRetargetStretchChainOp> @ 14df038d0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetStretchChainOp>(void *param_1)

{
  DestructItems<FChainStretcher,int>
            (*(FChainStretcher **)((longlong)param_1 + 0x70),*(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FPinBoneData> @ 14df039d0

bool __cdecl UE::CoreUObject::Private::Copy<FPinBoneData>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar4 = param_1;
    do {
      *puVar4 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      uVar1 = *(uint *)((longlong)pvVar3 + 8);
      *(uint *)(puVar4 + 1) = (uVar1 ^ *(uint *)(puVar4 + 1)) & 0x80000000 ^ uVar1;
      *(uint *)(puVar4 + 1) =
           (*(uint *)((longlong)pvVar3 + 8) ^ uVar1) & 0x7fffffff ^ *(uint *)((longlong)pvVar3 + 8);
      *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)pvVar3 + 0xc);
      puVar4[2] = *(undefined8 *)((longlong)pvVar3 + 0x10);
      uVar1 = *(uint *)((longlong)pvVar3 + 0x18);
      *(uint *)(puVar4 + 3) = (uVar1 ^ *(uint *)(puVar4 + 3)) & 0x80000000 ^ uVar1;
      *(uint *)(puVar4 + 3) =
           (*(uint *)((longlong)pvVar3 + 0x18) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)pvVar3 + 0x18);
      *(undefined4 *)((longlong)puVar4 + 0x1c) = *(undefined4 *)((longlong)pvVar3 + 0x1c);
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x28);
      puVar4[4] = *(undefined8 *)((longlong)pvVar3 + 0x20);
      puVar4[5] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x38);
      puVar4[6] = *(undefined8 *)((longlong)pvVar3 + 0x30);
      puVar4[7] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x48);
      puVar4[8] = *(undefined8 *)((longlong)pvVar3 + 0x40);
      puVar4[9] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x58);
      puVar4[10] = *(undefined8 *)((longlong)pvVar3 + 0x50);
      puVar4[0xb] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x68);
      puVar4[0xc] = *(undefined8 *)((longlong)pvVar3 + 0x60);
      puVar4[0xd] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x78);
      puVar4[0xe] = *(undefined8 *)((longlong)pvVar3 + 0x70);
      puVar4[0xf] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x88);
      puVar4[0x10] = *(undefined8 *)((longlong)pvVar3 + 0x80);
      puVar4[0x11] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x98);
      puVar4[0x12] = *(undefined8 *)((longlong)pvVar3 + 0x90);
      puVar4[0x13] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0xa8);
      puVar4[0x14] = *(undefined8 *)((longlong)pvVar3 + 0xa0);
      puVar4[0x15] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0xb8);
      puVar4[0x16] = *(undefined8 *)((longlong)pvVar3 + 0xb0);
      puVar4[0x17] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 200);
      puVar4[0x18] = *(undefined8 *)((longlong)pvVar3 + 0xc0);
      puVar4[0x19] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0xd8);
      puVar4[0x1a] = *(undefined8 *)((longlong)pvVar3 + 0xd0);
      puVar4[0x1b] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0xe8);
      puVar4[0x1c] = *(undefined8 *)((longlong)pvVar3 + 0xe0);
      puVar4[0x1d] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0xf8);
      puVar4[0x1e] = *(undefined8 *)((longlong)pvVar3 + 0xf0);
      puVar4[0x1f] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x108);
      puVar4[0x20] = *(undefined8 *)((longlong)pvVar3 + 0x100);
      puVar4[0x21] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x118);
      puVar4[0x22] = *(undefined8 *)((longlong)pvVar3 + 0x110);
      puVar4[0x23] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x128);
      puVar4[0x24] = *(undefined8 *)((longlong)pvVar3 + 0x120);
      puVar4[0x25] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x138);
      puVar4[0x26] = *(undefined8 *)((longlong)pvVar3 + 0x130);
      puVar4[0x27] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x148);
      puVar4[0x28] = *(undefined8 *)((longlong)pvVar3 + 0x140);
      puVar4[0x29] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x158);
      puVar4[0x2a] = *(undefined8 *)((longlong)pvVar3 + 0x150);
      puVar4[0x2b] = uVar2;
      puVar4[0x2c] = *(undefined8 *)((longlong)pvVar3 + 0x160);
      puVar4[0x2d] = *(undefined8 *)((longlong)pvVar3 + 0x168);
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x170);
      puVar4 = puVar4 + 0x2e;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRetargetStretchChainOp> @ 14df03bd0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetStretchChainOp>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FChainStretcher *pFVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetStretchChainOpSettings::operator=
              ((FIKRetargetStretchChainOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetStretchChainOpSettings *)((longlong)param_2 + 0x20));
    FRetargetChainMapping::operator=
              ((FRetargetChainMapping *)((longlong)param_1 + 0x50),
               (FRetargetChainMapping *)((longlong)param_2 + 0x50));
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x70);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x70)) {
      DestructItems<FChainStretcher,int>
                ((FChainStretcher *)pFVar4->Data,*(int *)((longlong)param_1 + 0x78));
      iVar2 = *(int *)((longlong)param_2 + 0x78);
      piVar1 = (int *)((longlong)param_1 + 0x7c);
      pFVar3 = (FChainStretcher *)((ForAnyElementType *)((longlong)param_2 + 0x70))->Data;
      *(int *)((longlong)param_1 + 0x78) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        ConstructItems<FChainStretcher,FChainStretcher,int>(pFVar4->Data,pFVar3,iVar2);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x80);
    param_2 = (void *)((longlong)param_2 + 0x80);
  }
  return true;
}

// Construct<FIKRigFBIKGoalSettings> @ 14df03cf0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigFBIKGoalSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigFBIKGoalSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  return;
}

// ConstructForTests<FIKRigFBIKGoalSettings> @ 14df03d70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigFBIKGoalSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigFBIKGoalSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  return;
}

// Destruct<FIKRigFBIKGoalSettings> @ 14df03df0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigFBIKGoalSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Copy<FIKRigFBIKGoalSettings> @ 14df03e10

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigFBIKGoalSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x1c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x20) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x24) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x28) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FIKRigStretchLimbSettings> @ 14df03ec0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigStretchLimbSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined ***)param_1 = &___7FIKRigStretchLimbSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fee666666666666;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4049000000000000;
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x48) = 8;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// ConstructForTests<FIKRigStretchLimbSettings> @ 14df03f40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigStretchLimbSettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined ***)param_1 = &___7FIKRigStretchLimbSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fee666666666666;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4049000000000000;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x48) = 8;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// Destruct<FIKRigStretchLimbSettings> @ 14df03fb0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigStretchLimbSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Construct<FAnimNode_IKRig> @ 14df03fd0

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_IKRig>(void *param_1)

{
  float fVar1;
  
  FAnimNode_CustomProperty::FAnimNode_CustomProperty(param_1);
  fVar1 = __real_3e4ccccd;
  *(undefined ***)param_1 = &___7FAnimNode_IKRig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined2 *)((longlong)param_1 + 0x98) = 2;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  FAlphaBlend::FAlphaBlend((FAlphaBlend *)((longlong)param_1 + 0xa8),fVar1);
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0x41200000;
  FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x110));
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined4 *)((longlong)param_1 + 0x270) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x298) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0;
  return;
}

// ConstructForTests<FAnimNode_IKRig> @ 14df03fe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_IKRig>(void *param_1)

{
  float fVar1;
  
  FAnimNode_CustomProperty::FAnimNode_CustomProperty(param_1);
  fVar1 = __real_3e4ccccd;
  *(undefined ***)param_1 = &___7FAnimNode_IKRig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined2 *)((longlong)param_1 + 0x98) = 2;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  FAlphaBlend::FAlphaBlend((FAlphaBlend *)((longlong)param_1 + 0xa8),fVar1);
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0x41200000;
  FIKRigProcessor::FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x110));
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined4 *)((longlong)param_1 + 0x270) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x298) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0;
  return;
}

// Destruct<FAnimNode_IKRig> @ 14df03ff0

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_IKRig>(void *param_1)

{
  DestructItems<TFunction<void___cdecl(UObject_const_*)>,int>
            (*(TFunction<void___cdecl(UObject_const_*)> **)((longlong)param_1 + 0x2f0),
             *(int *)((longlong)param_1 + 0x2f8));
  if (*(void **)((longlong)param_1 + 0x2f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f0));
  }
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0;
  if (*(void **)((longlong)param_1 + 0x2e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2e0));
  }
  TSparseArray<TSparseSetElement<TTuple<FCompactPoseBoneIndex,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCompactPoseBoneIndex,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCompactPoseBoneIndex,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x2a0));
  *(undefined4 *)((longlong)param_1 + 0x290) = 0;
  if (*(void **)((longlong)param_1 + 0x288) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x288));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FIKRigGoal>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x248));
  if (*(void **)((longlong)param_1 + 0x238) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x238));
  }
  FIKRigProcessor::~FIKRigProcessor((FIKRigProcessor *)((longlong)param_1 + 0x110));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  FAnimNode_CustomProperty::~FAnimNode_CustomProperty(param_1);
  return;
}

// Copy<FIKRigStretchLimbSettings> @ 14df04000

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigStretchLimbSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x28) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x30) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x38) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x40) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x48) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x4c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x4c - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x50) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x50 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x58);
  }
  return true;
}

// Copy<FAnimNode_IKRig> @ 14df04090

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_IKRig>(void *param_1,void *param_2,int param_3)

{
  FAnimNode_IKRig *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FAnimNode_IKRig::operator=
                (this,(FAnimNode_IKRig *)(((longlong)param_2 - (longlong)param_1) + (longlong)this))
      ;
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFilterBoneData> @ 14df040e0

void __cdecl UE::CoreUObject::Private::Construct<FFilterBoneData>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7f) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// ConstructForTests<FFilterBoneData> @ 14df04180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFilterBoneData>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Destruct<FFilterBoneData> @ 14df041f0

void __cdecl UE::CoreUObject::Private::Destruct<FFilterBoneData>(void *param_1)

{
  return;
}

// Copy<FFilterBoneData> @ 14df04240

bool __cdecl
UE::CoreUObject::Private::Copy<FFilterBoneData>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      uVar1 = *(uint *)((longlong)param_1 + lVar3 + 8);
      *(uint *)((longlong)param_1 + 8) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 8)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 8) =
           (*(uint *)((longlong)param_1 + lVar3 + 8) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar3 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar3 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_1 + lVar3 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x80);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIKRetargetStretchChainOpSettings> @ 14df04690

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetStretchChainOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetStretchChainOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FIKRetargetStretchChainOpSettings> @ 14df046d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetStretchChainOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetStretchChainOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Destruct<FIKRetargetStretchChainOpSettings> @ 14df04700

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetStretchChainOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRetargetStretchChainOpSettings> @ 14df04750

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetStretchChainOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  int *piVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_);
    }
    piVar4 = &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold;
    ((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ =
         ((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
    if (piVar4 != &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold) {
      iVar2 = *(int *)&(((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->Controller).
                       Object;
      piVar1 = (int *)((longlong)
                       &(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).
                        Object + 4);
      _Src = *(void **)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold;
      iVar3 = *piVar1;
      *(int *)&(((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->Controller).Object =
           iVar2;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar2,iVar3,(ForAnyElementType *)piVar4,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(*(void **)piVar4,_Src,(longlong)iVar2 << 5);
        }
      }
    }
    param_1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30);
    param_2 = (FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FRetargetGlobalSettings> @ 14df04860

void __cdecl UE::CoreUObject::Private::Construct<FRetargetGlobalSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  return;
}

// ConstructForTests<FRetargetGlobalSettings> @ 14df048b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRetargetGlobalSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  return;
}

// Destruct<FRetargetGlobalSettings> @ 14df04930

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetGlobalSettings>(void *param_1)

{
  return;
}

// Construct<FIKRigStretchLimbBoneSettings> @ 14df049f0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigStretchLimbBoneSettings>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigStretchLimbBoneSettings__6B_;
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FIKRigStretchLimbBoneSettings> @ 14df04a30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRigStretchLimbBoneSettings>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigStretchLimbBoneSettings__6B_;
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FIKRigStretchLimbBoneSettings> @ 14df04a60

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigStretchLimbBoneSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSettingsBase__6B_;
  return;
}

// Copy<FRetargetGlobalSettings> @ 14df04a80

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetGlobalSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x34);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRigStretchLimbBoneSettings> @ 14df04ad0

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigStretchLimbBoneSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x28) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x30);
  }
  return true;
}

// Construct<FIKRetargetCurveRemapOp> @ 14df04e80

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetCurveRemapOp>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetCurveRemapOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetCurveRemapOpSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FIKRetargetCurveRemapOp> @ 14df04ef0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetCurveRemapOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetCurveRemapOp__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetCurveRemapOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FIKRetargetCurveRemapOp> @ 14df04f50

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetCurveRemapOp>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetCurveRemapOp> @ 14df05050

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetCurveRemapOp>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  FIKRetargetOpSettingsBase *this;
  
  if (param_3 != 0) {
    this = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x20);
    do {
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
      *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
      *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
      FIKRetargetOpSettingsBase::operator=
                (this,(FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x20));
      *(undefined1 *)&this[1]._padding_ = *(undefined1 *)((longlong)param_2 + 0x38);
      *(undefined1 *)((longlong)&this[1]._padding_ + 1) = *(undefined1 *)((longlong)param_2 + 0x39);
      TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_> *)&this[1].LODThreshold,
                 (TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40));
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x50);
      if (pFVar3 != (ForAnyElementType *)((longlong)param_2 + 0x50)) {
        iVar2 = *(int *)((longlong)param_2 + 0x58);
        piVar1 = (int *)((longlong)param_1 + 0x5c);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x50))->Data;
        *(int *)((longlong)param_1 + 0x58) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar2,*piVar1,pFVar3,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 4);
          }
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x60) = *(undefined1 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
      param_3 = param_3 + -1;
      param_2 = (void *)((longlong)param_2 + 0x70);
      param_1 = (void *)((longlong)param_1 + 0x70);
      this = (FIKRetargetOpSettingsBase *)&this[4].Controller;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIKRetargetPelvisMotionOp> @ 14df05550

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetPelvisMotionOp>(void *param_1)

{
  memset(param_1,0,0x2c0);
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRetargetPelvisMotionOp__6B_;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings
            ((FIKRetargetPelvisMotionOpSettings *)((longlong)param_1 + 0x20));
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  return;
}

// ConstructForTests<FIKRetargetPelvisMotionOp> @ 14df05970

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRetargetPelvisMotionOp>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetPelvisMotionOp__6B_;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings
            ((FIKRetargetPelvisMotionOpSettings *)((longlong)param_1 + 0x20));
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  return;
}

// Destruct<FIKRetargetPelvisMotionOp> @ 14df05ae0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetPelvisMotionOp>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x30) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x30));
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpBase__6B_;
  return;
}

// Copy<FIKRetargetPelvisMotionOp> @ 14df06440

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetPelvisMotionOp>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    FIKRetargetPelvisMotionOpSettings::operator=
              ((FIKRetargetPelvisMotionOpSettings *)((longlong)param_1 + 0x20),
               (FIKRetargetPelvisMotionOpSettings *)((longlong)param_2 + 0x20));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x178);
    *(undefined8 *)((longlong)param_1 + 0x170) = *(undefined8 *)((longlong)param_2 + 0x170);
    *(undefined8 *)((longlong)param_1 + 0x178) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x188);
    *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)((longlong)param_2 + 0x180);
    *(undefined8 *)((longlong)param_1 + 0x188) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x198);
    *(undefined8 *)((longlong)param_1 + 400) = *(undefined8 *)((longlong)param_2 + 400);
    *(undefined8 *)((longlong)param_1 + 0x198) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1a8);
    *(undefined8 *)((longlong)param_1 + 0x1a0) = *(undefined8 *)((longlong)param_2 + 0x1a0);
    *(undefined8 *)((longlong)param_1 + 0x1a8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1b8);
    *(undefined8 *)((longlong)param_1 + 0x1b0) = *(undefined8 *)((longlong)param_2 + 0x1b0);
    *(undefined8 *)((longlong)param_1 + 0x1b8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c8);
    *(undefined8 *)((longlong)param_1 + 0x1c0) = *(undefined8 *)((longlong)param_2 + 0x1c0);
    *(undefined8 *)((longlong)param_1 + 0x1c8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1d8);
    *(undefined8 *)((longlong)param_1 + 0x1d0) = *(undefined8 *)((longlong)param_2 + 0x1d0);
    *(undefined8 *)((longlong)param_1 + 0x1d8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1e8);
    *(undefined8 *)((longlong)param_1 + 0x1e0) = *(undefined8 *)((longlong)param_2 + 0x1e0);
    *(undefined8 *)((longlong)param_1 + 0x1e8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1f8);
    *(undefined8 *)((longlong)param_1 + 0x1f0) = *(undefined8 *)((longlong)param_2 + 0x1f0);
    *(undefined8 *)((longlong)param_1 + 0x1f8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x208);
    *(undefined8 *)((longlong)param_1 + 0x200) = *(undefined8 *)((longlong)param_2 + 0x200);
    *(undefined8 *)((longlong)param_1 + 0x208) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x218);
    *(undefined8 *)((longlong)param_1 + 0x210) = *(undefined8 *)((longlong)param_2 + 0x210);
    *(undefined8 *)((longlong)param_1 + 0x218) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x228);
    *(undefined8 *)((longlong)param_1 + 0x220) = *(undefined8 *)((longlong)param_2 + 0x220);
    *(undefined8 *)((longlong)param_1 + 0x228) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x238);
    *(undefined8 *)((longlong)param_1 + 0x230) = *(undefined8 *)((longlong)param_2 + 0x230);
    *(undefined8 *)((longlong)param_1 + 0x238) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x248);
    *(undefined8 *)((longlong)param_1 + 0x240) = *(undefined8 *)((longlong)param_2 + 0x240);
    *(undefined8 *)((longlong)param_1 + 0x248) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 600);
    *(undefined8 *)((longlong)param_1 + 0x250) = *(undefined8 *)((longlong)param_2 + 0x250);
    *(undefined8 *)((longlong)param_1 + 600) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x268);
    *(undefined8 *)((longlong)param_1 + 0x260) = *(undefined8 *)((longlong)param_2 + 0x260);
    *(undefined8 *)((longlong)param_1 + 0x268) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x278);
    *(undefined8 *)((longlong)param_1 + 0x270) = *(undefined8 *)((longlong)param_2 + 0x270);
    *(undefined8 *)((longlong)param_1 + 0x278) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x288);
    *(undefined8 *)((longlong)param_1 + 0x280) = *(undefined8 *)((longlong)param_2 + 0x280);
    *(undefined8 *)((longlong)param_1 + 0x288) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x298);
    *(undefined8 *)((longlong)param_1 + 0x290) = *(undefined8 *)((longlong)param_2 + 0x290);
    *(undefined8 *)((longlong)param_1 + 0x298) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x2a8);
    *(undefined8 *)((longlong)param_1 + 0x2a0) = *(undefined8 *)((longlong)param_2 + 0x2a0);
    *(undefined8 *)((longlong)param_1 + 0x2a8) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x2b0) = *(undefined8 *)((longlong)param_2 + 0x2b0);
    param_1 = (void *)((longlong)param_1 + 0x2c0);
    param_2 = (void *)((longlong)param_2 + 0x2c0);
  }
  return true;
}

// Construct<FRetargetStretchChainSettings> @ 14df06760

void __cdecl UE::CoreUObject::Private::Construct<FRetargetStretchChainSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FRetargetStretchChainSettings> @ 14df067d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRetargetStretchChainSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  return;
}

// Destruct<FRetargetStretchChainSettings> @ 14df06800

void __cdecl UE::CoreUObject::Private::Destruct<FRetargetStretchChainSettings>(void *param_1)

{
  return;
}

// Copy<FRetargetStretchChainSettings> @ 14df07930

bool __cdecl
UE::CoreUObject::Private::Copy<FRetargetStretchChainSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTargetRootSettings> @ 14df07a30

void __cdecl UE::CoreUObject::Private::Construct<FTargetRootSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x50) = dVar2;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3f800000;
  return;
}

// ConstructForTests<FTargetRootSettings> @ 14df07b40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTargetRootSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x50) = dVar2;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3f800000;
  return;
}

// Construct<FIKRigBodyMoverSolver> @ 14df07bc0

void __cdecl UE::CoreUObject::Private::Construct<FIKRigBodyMoverSolver>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FIKRigBodyMoverSolver__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigBodyMoverSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  return;
}

// Destruct<FTargetRootSettings> @ 14df07c50

void __cdecl UE::CoreUObject::Private::Destruct<FTargetRootSettings>(void *param_1)

{
  return;
}

// ConstructForTests<FIKRigBodyMoverSolver> @ 14df07c60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigBodyMoverSolver>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRigBodyMoverSolver__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigBodyMoverSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3f800000;
  return;
}

// Destruct<FIKRigBodyMoverSolver> @ 14df07ce0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigBodyMoverSolver>(void *param_1)

{
  DestructItems<FIKRigBodyMoverGoalSettings,int>
            (*(FIKRigBodyMoverGoalSettings **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIKRigSettingsBase__6B_;
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  return;
}

// Copy<FTargetRootSettings> @ 14df07df0

bool __cdecl
UE::CoreUObject::Private::Copy<FTargetRootSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  if (param_3 != 0) {
    lVar14 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar14 + 0x60 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar14 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar14 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar14 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x68);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FIKRigBodyMoverSolver> @ 14df07f20

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigBodyMoverSolver>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  FIKRigBodyMoverGoalSettings *pFVar5;
  void *pvVar6;
  ForAnyElementType *pFVar7;
  
  pvVar6 = param_1;
  pvVar3 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar7 = (ForAnyElementType *)((longlong)pvVar6 + 0x50);
    *(undefined1 *)((longlong)pvVar6 + 8) = *(undefined1 *)((longlong)pvVar3 + 8);
    *(undefined8 *)((longlong)pvVar6 + 0x18) =
         *(undefined8 *)((longlong)pvVar6 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x20) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x24) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x28) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x2c) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x30) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x34) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x38) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x3c) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x3c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x40) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x44) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x44 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar6 + 0x48) =
         *(undefined4 *)((longlong)pvVar6 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pFVar7 != (ForAnyElementType *)((longlong)pvVar3 + 0x50)) {
      DestructItems<FIKRigBodyMoverGoalSettings,int>
                ((FIKRigBodyMoverGoalSettings *)pFVar7->Data,*(int *)((longlong)pvVar6 + 0x58));
      iVar4 = *(int *)((longlong)pvVar3 + 0x58);
      piVar1 = (int *)((longlong)pvVar6 + 0x5c);
      pFVar5 = (FIKRigBodyMoverGoalSettings *)((ForAnyElementType *)((longlong)pvVar3 + 0x50))->Data
      ;
      *(int *)((longlong)pvVar6 + 0x58) = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar4,*piVar1,pFVar7,iVar4,piVar1);
        ConstructItems<FIKRigBodyMoverGoalSettings,FIKRigBodyMoverGoalSettings,int>
                  (pFVar7->Data,pFVar5,iVar4);
      }
    }
    puVar2 = (undefined4 *)((longlong)pvVar3 + 0x60);
    pvVar3 = (void *)((longlong)pvVar3 + 0x68);
    *(undefined4 *)((longlong)pvVar6 + 0x60) = *puVar2;
    pvVar6 = (void *)((longlong)pvVar6 + 0x68);
  }
  return true;
}

// Construct<FIKRigSolverBase> @ 14df08320

void __cdecl UE::CoreUObject::Private::Construct<FIKRigSolverBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FIKRigSolverBase> @ 14df085b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIKRigSolverBase>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  return;
}

// Destruct<FIKRigSolverBase> @ 14df08630

void __cdecl UE::CoreUObject::Private::Destruct<FIKRigSolverBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FIKRigSolverBase__6B_;
  return;
}

// Copy<FIKRigSolverBase> @ 14df08820

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRigSolverBase>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined1 *)((longlong)pvVar1 + 8) =
           *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIKRetargetCurveRemapOpSettings> @ 14df08b80

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetCurveRemapOpSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetCurveRemapOpSettings__6B_;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FIKRetargetCurveRemapOpSettings> @ 14df094b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FIKRetargetCurveRemapOpSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FIKRetargetCurveRemapOpSettings__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  return;
}

// Destruct<FIKRetargetCurveRemapOpSettings> @ 14df098d0

void __cdecl UE::CoreUObject::Private::Destruct<FIKRetargetCurveRemapOpSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FIKRetargetOpSettingsBase__6B_;
  if (*(UObject **)((longlong)param_1 + 0x10) != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)((longlong)param_1 + 0x10));
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Copy<FIKRetargetCurveRemapOpSettings> @ 14df0a080

bool __cdecl
UE::CoreUObject::Private::Copy<FIKRetargetCurveRemapOpSettings>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FIKRetargetOpSettingsBase::operator=(param_1,param_2);
    *(char *)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ =
         (char)((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_;
    *(undefined1 *)
     ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->_padding_ + 1) =
         *(undefined1 *)
          ((longlong)&((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->_padding_ + 1);
    TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_> *)
               &((FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x18))->LODThreshold,
               (TArray<FCurveRemapPair,TSizedDefaultAllocator<32>_> *)
               &((FIKRetargetOpSettingsBase *)((longlong)param_2 + 0x18))->LODThreshold);
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (FIKRetargetOpSettingsBase *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FIKRetargetPelvisMotionOpSettings> @ 14df0a110

void __cdecl UE::CoreUObject::Private::Construct<FIKRetargetPelvisMotionOpSettings>(void *param_1)

{
  memset(param_1,0,0x148);
  FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings(param_1);
  return;
}

// GetStructPtr<FIKRetargetOpBase> @ 14df0d320

/* WARNING: Removing unreachable block (ram,0x00014df0d3d6) */

FIKRetargetOpBase * __cdecl
UE::StructUtils::GetStructPtr<FIKRetargetOpBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FIKRetargetOpBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar2,
                         L"IKRetargetOpBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar2,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0
         ) {
        return (FIKRetargetOpBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FIKRetargetOpBase *)0x0;
  }
  return param_2;
}

// GetStructPtr<FIKRetargetPelvisMotionOp> @ 14df0d410

/* WARNING: Removing unreachable block (ram,0x00014df0d4c6) */

FIKRetargetPelvisMotionOp * __cdecl
UE::StructUtils::GetStructPtr<FIKRetargetPelvisMotionOp>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FIKRetargetPelvisMotionOp *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp,(UObject *)pUVar2,
                         L"IKRetargetPelvisMotionOp");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp,(UObject *)pUVar2,
                           L"IKRetargetPelvisMotionOp");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FIKRetargetPelvisMotionOp *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FIKRetargetPelvisMotionOp *)0x0;
  }
  return param_2;
}

// GetStructPtr<FIKRetargetScaleSourceOp> @ 14df0d500

/* WARNING: Removing unreachable block (ram,0x00014df0d5b6) */

FIKRetargetScaleSourceOp * __cdecl
UE::StructUtils::GetStructPtr<FIKRetargetScaleSourceOp>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FIKRetargetScaleSourceOp *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp,(UObject *)pUVar2,
                         L"IKRetargetScaleSourceOp");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp,(UObject *)pUVar2,
                           L"IKRetargetScaleSourceOp");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FIKRetargetScaleSourceOp *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FIKRetargetScaleSourceOp *)0x0;
  }
  return param_2;
}

// GetStructPtr<FIKRigSolverBase> @ 14df0d5f0

/* WARNING: Removing unreachable block (ram,0x00014df0d6a6) */

FIKRigSolverBase * __cdecl
UE::StructUtils::GetStructPtr<FIKRigSolverBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FIKRigSolverBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar2,
                         L"IKRigSolverBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar2,
                           L"IKRigSolverBase");
      if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        return (FIKRigSolverBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FIKRigSolverBase *)0x0;
  }
  return param_2;
}

// GetStructRef<FIKRetargetOpBase> @ 14df0d6e0

FIKRetargetOpBase * __cdecl
UE::StructUtils::GetStructRef<FIKRetargetOpBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FIKRetargetOpBase *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIKRetargetOpBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIKRetargetOpBase *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar5,
                         L"IKRetargetOpBase");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar5,
                         L"IKRetargetOpBase");
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_14df0d7db;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14df0d7db:
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar5,
                         L"IKRetargetOpBase");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FIKRetargetOpBase *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FIKRetargetOpSettingsBase> @ 14df0d8c0

FIKRetargetOpSettingsBase * __cdecl
UE::StructUtils::GetStructRef<FIKRetargetOpSettingsBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FIKRetargetOpSettingsBase *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIKRetargetOpSettingsBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIKRetargetOpSettingsBase *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase,(UObject *)pUVar5,
                         L"IKRetargetOpSettingsBase");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase,(UObject *)pUVar5,
                         L"IKRetargetOpSettingsBase");
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14df0d9bb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton)->
               _padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14df0d9bb:
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpSettingsBase,(UObject *)pUVar5,
                         L"IKRetargetOpSettingsBase");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FIKRetargetOpSettingsBase.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FIKRetargetOpSettingsBase *)(*pcVar2)();
  return pFVar4;
}

// GetStructRef<FIKRigSolverBase> @ 14df0daa0

FIKRigSolverBase * __cdecl
UE::StructUtils::GetStructRef<FIKRigSolverBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FIKRigSolverBase *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIKRigSolverBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIKRigSolverBase *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar5,
                         L"IKRigSolverBase");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar5,
                         L"IKRigSolverBase");
    if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_14df0db9b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14df0db9b:
  if (Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSolverBase,(UObject *)pUVar5,
                         L"IKRigSolverBase");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)Z_Registration_Info_UScriptStruct_FIKRigSolverBase.OuterSingleton
             ,&local_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FIKRigSolverBase *)(*pcVar2)();
  return pFVar4;
}

