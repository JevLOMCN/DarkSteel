// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2ec190

UClass * __cdecl UDatasmithAreaLightActorTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAreaLightActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithAreaLightActorTemplate,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithAreaLightActorTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithAreaLightActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton;
}

// UDatasmithAreaLightActorTemplate @ 14e2f44e0

UDatasmithAreaLightActorTemplate * __thiscall
UDatasmithAreaLightActorTemplate::UDatasmithAreaLightActorTemplate
          (UDatasmithAreaLightActorTemplate *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->IESTexture).SoftObjectPtr.field_0x18;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithAreaLightActorTemplate__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->IESTexture).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->IESTexture).SoftObjectPtr = 0;
  *(undefined8 *)&(this->IESTexture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->IESTexture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UDatasmithAreaLightActorTemplate @ 14e2f4530

UDatasmithAreaLightActorTemplate * __thiscall
UDatasmithAreaLightActorTemplate::UDatasmithAreaLightActorTemplate
          (UDatasmithAreaLightActorTemplate *this)

{
  undefined1 *this_00;
  UClass *this_01;
  
  UObject::UObject((UObject *)this);
  this_00 = &(this->IESTexture).SoftObjectPtr.field_0x18;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UDatasmithAreaLightActorTemplate__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->IESTexture).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->IESTexture).SoftObjectPtr = 0;
  *(undefined8 *)&(this->IESTexture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->IESTexture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = ADatasmithAreaLightActor::StaticClass();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  return this;
}

// ~UDatasmithAreaLightActorTemplate @ 14e2f5dc0

void __thiscall
UDatasmithAreaLightActorTemplate::~UDatasmithAreaLightActorTemplate
          (UDatasmithAreaLightActorTemplate *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithAreaLightActorTemplate__6B_;
  pvVar1 = *(void **)&(this->IESTexture).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UDatasmithAreaLightActorTemplate::Equals
          (UDatasmithAreaLightActorTemplate *this,UDatasmithObjectTemplate *param_1)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  uint uVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  UClass *pUVar15;
  uint uVar16;
  undefined1 *this_00;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar32;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  if (param_1 == (UDatasmithObjectTemplate *)0x0) {
    return false;
  }
  pUVar15 = StaticClass();
  dVar12 = __real_3f1a36e2e0000000;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_322bcc77;
  iVar14 = (int)pUVar15->_padding_;
  if (iVar14 <= *(int *)(param_1->_padding_ + 0x38)) {
    if ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar15->_padding_) {
      return false;
    }
    if ((((((this->LightType == (EDatasmithAreaLightActorType)param_1[1]._padding_) &&
           (this->LightShape ==
            *(EDatasmithAreaLightActorShape *)((longlong)&param_1[1]._padding_ + 1))) &&
          (dVar22 = (this->Dimensions).field0_0x0._s_0.X - (double)param_1[1]._padding_,
          (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)) &&
         (((dVar22 = (this->Dimensions).field0_0x0._s_0.Y - (double)param_1[1]._padding_,
           (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000 &&
           (auVar33 = ZEXT416((uint)__real_38d1b717),
           (float)((uint)((this->Color).field0_0x0._s_0.R - *(float *)&param_1[1]._padding_) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)) &&
          (((float)((uint)((this->Color).field0_0x0._s_0.G -
                          *(float *)((longlong)&param_1[1]._padding_ + 4)) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717 &&
           (((float)((uint)((this->Color).field0_0x0._s_0.B - *(float *)&param_1[1]._padding_) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717 &&
            ((float)((uint)((this->Color).field0_0x0._s_0.A -
                           *(float *)((longlong)&param_1[1]._padding_ + 4)) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)))))))) &&
        ((float)((uint)(this->Intensity - *(float *)&param_1[1].bIsActorTemplate) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
       ((this->IntensityUnits == param_1[1].field_0x2c &&
        ((float)((uint)(this->Temperature - *(float *)&param_1[2]._padding_) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))) {
      this_00 = &(this->IESTexture).SoftObjectPtr.field_0x8;
      bVar13 = FSoftObjectPath::operator==
                         ((FSoftObjectPath *)this_00,(FSoftObjectPath *)&param_1[2]._padding_);
      if ((bVar13) &&
         ((bVar1 = (byte)param_1[3]._padding_, this->bUseIESBrightness == (bool)bVar1 &&
          ((float)((uint)(this->IESBrightnessScale - *(float *)((longlong)&param_1[3]._padding_ + 4)
                         ) & uVar11) <= fVar10)))) {
        dVar22 = (this->Rotation).Pitch - (double)param_1[3]._padding_;
        dVar2 = (this->Rotation).Yaw - (double)param_1[3]._padding_;
        dVar3 = (this->Rotation).Roll - (double)param_1[3]._padding_;
        auVar23._8_4_ = SUB84(dVar2,0);
        auVar23._0_8_ = dVar22;
        auVar23._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        auVar24 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar33 = roundpd(auVar33,auVar24,3);
        dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar34._0_8_ = auVar33._0_8_ * dVar5;
        dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar34._8_8_ = auVar33._8_8_ * dVar6;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = dVar3;
        auVar33 = divpd(auVar25,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar22 = dVar22 - auVar34._0_8_;
        dVar2 = dVar2 - auVar34._8_8_;
        auVar33 = roundpd(auVar34,auVar33,3);
        dVar7 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        dVar8 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar26._8_4_ = SUB84(dVar2,0);
        auVar26._0_8_ = dVar22;
        auVar26._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        dVar32 = auVar26._8_8_ + dVar6;
        dVar3 = dVar3 - auVar33._0_8_ * dVar7;
        dVar4 = 0.0 - auVar33._8_8_ * dVar8;
        uVar17 = -(ulonglong)(0.0 <= dVar22);
        uVar18 = -(ulonglong)(0.0 <= dVar2);
        auVar35._0_8_ = uVar17 & (ulonglong)dVar22;
        auVar35._8_4_ = (undefined4)(uVar18 & (ulonglong)dVar2);
        auVar35._12_4_ = (undefined4)((uVar18 & (ulonglong)dVar2) >> 0x20);
        auVar39._0_4_ = ~(uint)uVar17 & SUB84(dVar22 + dVar5,0);
        auVar39._4_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)(dVar22 + dVar5) >> 0x20);
        auVar39._8_4_ = ~(uint)uVar18 & SUB84(dVar32,0);
        auVar39._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
        auVar39 = auVar39 | auVar35;
        auVar27._8_4_ = SUB84(dVar4,0);
        auVar27._0_8_ = dVar3;
        auVar27._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        dVar22 = auVar27._8_8_ + dVar8;
        uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar39._0_8_);
        uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar39._8_8_);
        uVar17 = -(ulonglong)(0.0 <= dVar3);
        uVar20 = -(ulonglong)(0.0 <= dVar4);
        auVar40._0_4_ = ~(uint)uVar17 & SUB84(dVar3 + dVar7,0);
        auVar40._4_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)(dVar3 + dVar7) >> 0x20);
        auVar40._8_4_ = ~(uint)uVar20 & SUB84(dVar22,0);
        auVar40._12_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
        auVar33._8_4_ = (int)((ulonglong)dVar4 & uVar20);
        auVar33._0_8_ = (ulonglong)dVar3 & uVar17;
        auVar33._12_4_ = (int)(((ulonglong)dVar4 & uVar20) >> 0x20);
        auVar40 = auVar40 | auVar33;
        auVar28._0_8_ = (ulonglong)(auVar39._0_8_ - dVar5) & uVar18;
        uVar17 = uVar19 & (ulonglong)(auVar39._8_8_ - dVar6);
        auVar28._8_4_ = (undefined4)uVar17;
        auVar28._12_4_ = (undefined4)(uVar17 >> 0x20);
        auVar36._0_4_ = ~(uint)uVar18 & auVar39._0_4_;
        auVar36._4_4_ = ~(uint)(uVar18 >> 0x20) & auVar39._4_4_;
        auVar36._8_4_ = ~(uint)uVar19 & auVar39._8_4_;
        auVar36._12_4_ = ~(uint)(uVar19 >> 0x20) & auVar39._12_4_;
        auVar28 = auVar28 | auVar36;
        auVar37._8_4_ = SUB84(dVar12,0);
        auVar37._0_8_ = dVar12;
        auVar37._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar29._0_8_ =
             (double)CONCAT44(auVar28._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar28._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar29._8_4_ = auVar28._8_4_ & _UNK_15061cc88;
        auVar29._12_4_ = auVar28._12_4_ & _UNK_15061cc8c;
        auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < auVar29._8_8_);
        auVar38._0_8_ = -(ulonglong)(dVar12 < auVar29._0_8_);
        uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar40._0_8_);
        uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar40._8_8_);
        iVar14 = movmskpd((uint)bVar1,auVar38);
        auVar30._0_8_ = uVar18 & (ulonglong)(auVar40._0_8_ - dVar7);
        uVar17 = uVar19 & (ulonglong)(auVar40._8_8_ - dVar8);
        auVar30._8_4_ = (undefined4)uVar17;
        auVar30._12_4_ = (undefined4)(uVar17 >> 0x20);
        auVar24._4_4_ = ~(uint)(uVar18 >> 0x20) & auVar40._4_4_;
        auVar24._0_4_ = ~(uint)uVar18 & auVar40._0_4_;
        auVar24._8_4_ = ~(uint)uVar19 & auVar40._8_4_;
        auVar24._12_4_ = ~(uint)(uVar19 >> 0x20) & auVar40._12_4_;
        auVar30 = auVar30 | auVar24;
        auVar31._0_8_ =
             (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
        auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
        lVar21 = -(ulonglong)(dVar12 < auVar31._8_8_);
        auVar9._8_4_ = (int)lVar21;
        auVar9._0_8_ = -(ulonglong)(dVar12 < auVar31._0_8_);
        auVar9._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        uVar16 = movmskpd((int)this_00,auVar9);
        if (((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) &&
           ((((float)((uint)(this->SourceRadius - *(float *)&param_1[3]._padding_) & uVar11) <=
              fVar10 &&
             ((float)((uint)(this->SourceLength - *(float *)((longlong)&param_1[3]._padding_ + 4)) &
                     uVar11) <= fVar10)) &&
            ((float)((uint)(this->AttenuationRadius - *(float *)&param_1[3].bIsActorTemplate) &
                    uVar11) <= fVar10)))) {
          return true;
        }
      }
    }
    return false;
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fbdc0

UClass * __cdecl UDatasmithAreaLightActorTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAreaLightActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithAreaLightActorTemplate,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithAreaLightActorTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithAreaLightActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton;
}

// Load @ 14e2fe0e0

void __thiscall
UDatasmithAreaLightActorTemplate::Load(UDatasmithAreaLightActorTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithAreaLightActorTemplate @ 14e2fec50

void __cdecl
UDatasmithAreaLightActorTemplate::StaticRegisterNativesUDatasmithAreaLightActorTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffa30

UObject * __thiscall
UDatasmithAreaLightActorTemplate::UpdateObject
          (UDatasmithAreaLightActorTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      param_1 = *(UObject **)&param_1[4].field_0x8;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = ADatasmithAreaLightActor::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return *(UObject **)(param_1 + 0xb);
    }
  }
  return (UObject *)0x0;
}

