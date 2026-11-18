// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b43a5c0

UClass * __cdecl UDS_CameraStateFreeView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateFreeView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateFreeView",
               &Z_Registration_Info_UClass_UDS_CameraStateFreeView.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateFreeView,0x330,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraStateFreeView>,
               InternalVTableHelperCtorCaller<UDS_CameraStateFreeView>,local_res8,
               UDS_CameraStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateFreeView.InnerSingleton;
}

// UDS_CameraStateFreeView @ 14b43be80

UDS_CameraStateFreeView * __thiscall
UDS_CameraStateFreeView::UDS_CameraStateFreeView
          (UDS_CameraStateFreeView *this,FVTableHelper *param_1)

{
  UDS_CameraStateBase::UDS_CameraStateBase((UDS_CameraStateBase *)this,param_1);
  *(undefined ***)this = &___7UDS_CameraStateFreeView__6B_;
  return this;
}

// ~UDS_CameraStateFreeView @ 14b43ccc0

void __thiscall UDS_CameraStateFreeView::~UDS_CameraStateFreeView(UDS_CameraStateFreeView *this)

{
  *(undefined ***)this = &___7UDS_CameraStateFreeView__6B_;
  UDS_CameraStateBase::~UDS_CameraStateBase((UDS_CameraStateBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b43de40

UClass * __cdecl UDS_CameraStateFreeView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateFreeView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateFreeView",
               &Z_Registration_Info_UClass_UDS_CameraStateFreeView.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateFreeView,0x330,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraStateFreeView>,
               InternalVTableHelperCtorCaller<UDS_CameraStateFreeView>,local_res8,
               UDS_CameraStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateFreeView.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraStateFreeView @ 14b43e850

void __cdecl UDS_CameraStateFreeView::StaticRegisterNativesUDS_CameraStateFreeView(void)

{
  return;
}

// UDS_CameraStateFreeView @ 14b8b2940

UDS_CameraStateFreeView * __thiscall
UDS_CameraStateFreeView::UDS_CameraStateFreeView
          (UDS_CameraStateFreeView *this,FObjectInitializer *param_1)

{
  UDS_CameraStateBase::UDS_CameraStateBase((UDS_CameraStateBase *)this,param_1);
  *(undefined ***)this = &___7UDS_CameraStateFreeView__6B_;
  return this;
}

// Tick @ 14b8ee1c0

void __thiscall UDS_CameraStateFreeView::Tick(UDS_CameraStateFreeView *this,float param_1)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  UObject *pUVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar20;
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  TVector2<double>_u_0 local_58 [5];
  
  bVar9 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&this->field_0x28,
                     (void *)0x0);
  if (bVar9) {
    return;
  }
  bVar9 = TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> *)&this->field_0x30,
                     (void *)0x0);
  if (!bVar9) {
    bVar9 = TWeakObjectPtr<UDS_CameraComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CameraComponent,FWeakObjectPtr> *)&this->field_0x38,
                       (void *)0x0);
    if (!bVar9) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      puVar1 = &this->field_0x268;
      puVar11 = (undefined8 *)(**(code **)(*(longlong *)pUVar10 + 0x7a8))(pUVar10,local_58);
      uVar8 = puVar11[1];
      *(undefined8 *)puVar1 = *puVar11;
      *(undefined8 *)&this->field_0x270 = uVar8;
      dVar2 = (double)puVar11[2];
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar2;
      *(double *)&this->field_0x278 = dVar2;
      auVar24 = *(undefined1 (*) [16])puVar1;
      auVar16 = divpd(auVar24,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar16 = roundpd(auVar22,auVar16,3);
      dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar23._0_8_ = auVar16._0_8_ * dVar6;
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar23._8_8_ = auVar16._8_8_ * dVar7;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar2;
      auVar16 = divpd(auVar16,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar21 = auVar24._0_8_ - auVar23._0_8_;
      dVar3 = auVar24._8_8_ - auVar23._8_8_;
      auVar24 = roundpd(auVar23,auVar16,3);
      dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar17._8_4_ = SUB84(dVar3,0);
      auVar17._0_8_ = dVar21;
      auVar17._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      dVar2 = dVar2 - auVar24._0_8_ * dVar4;
      dVar5 = 0.0 - auVar24._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      dVar20 = auVar17._8_8_ + dVar7;
      uVar12 = -(ulonglong)(0.0 <= dVar21);
      uVar14 = -(ulonglong)(0.0 <= dVar3);
      auVar25._0_8_ = uVar12 & (ulonglong)dVar21;
      auVar25._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar3);
      auVar25._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar3) >> 0x20);
      auVar28._0_4_ = ~(uint)uVar12 & SUB84(dVar21 + dVar6,0);
      auVar28._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar21 + dVar6) >> 0x20);
      auVar28._8_4_ = ~(uint)uVar14 & SUB84(dVar20,0);
      auVar28._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar20 >> 0x20);
      auVar28 = auVar28 | auVar25;
      auVar18._8_4_ = SUB84(dVar5,0);
      auVar18._0_8_ = dVar2;
      auVar18._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      dVar21 = auVar18._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar12 = -(ulonglong)(0.0 <= dVar2);
      uVar14 = -(ulonglong)(0.0 <= dVar5);
      auVar27._0_8_ = (ulonglong)dVar2 & uVar12;
      auVar27._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar5);
      auVar27._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar5) >> 0x20);
      auVar26._0_4_ = ~(uint)uVar12 & SUB84(dVar2 + dVar4,0);
      auVar26._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
      auVar26._8_4_ = ~(uint)uVar14 & SUB84(dVar21,0);
      auVar26._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar21 >> 0x20);
      auVar26 = auVar26 | auVar27;
      uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar26._0_8_);
      uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar28._0_8_);
      uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar28._8_8_);
      auVar19._0_8_ = uVar13 & (ulonglong)(auVar28._0_8_ - dVar6);
      uVar12 = uVar15 & (ulonglong)(auVar28._8_8_ - dVar7);
      auVar19._8_4_ = (undefined4)uVar12;
      auVar19._12_4_ = (undefined4)(uVar12 >> 0x20);
      auVar24._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar28._4_4_;
      auVar24._0_4_ = ~(uint)uVar13 & auVar28._0_4_;
      auVar24._8_4_ = ~(uint)uVar15 & auVar28._8_4_;
      auVar24._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar28._12_4_;
      *(undefined1 (*) [16])puVar1 = auVar19 | auVar24;
      *(ulonglong *)&this->field_0x278 =
           uVar14 & (ulonglong)(auVar26._0_8_ - dVar4) |
           CONCAT44(~(uint)(uVar14 >> 0x20) & auVar26._4_4_,~(uint)uVar14 & auVar26._0_4_);
      (**(code **)(*(longlong *)this + 0x330))(this);
      (**(code **)(*(longlong *)this + 0x338))(this);
      (**(code **)(*(longlong *)this + 0x340))(this);
      (**(code **)(*(longlong *)this + 0x348))(this);
      (**(code **)(*(longlong *)this + 0x350))(this);
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      if ((((pUVar10[0x34].field_0xc & 1) == 0) &&
          (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28),
          (pUVar10[0x34].field_0xc & 4) == 0)) &&
         (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28),
         (pUVar10[0x34].field_0xc & 0x40) == 0)) {
        pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        if (pUVar10[0x3d].field_0x21 == '\0') {
          local_58[0]._0_8_ = *(undefined8 *)&this->field_0x258;
          local_58[0]._8_8_ = *(undefined8 *)&this->field_0x260;
          UDS_CameraStateBase::SetAbsoluteMousePos
                    ((UDS_CameraStateBase *)this,(TVector2<double> *)&local_58[0]._s_0);
        }
      }
      else {
        (**(code **)(*(longlong *)this + 0x328))(this);
      }
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      (**(code **)(*(longlong *)pUVar10 + 0x7b0))(pUVar10,puVar1);
      return;
    }
    return;
  }
  return;
}

