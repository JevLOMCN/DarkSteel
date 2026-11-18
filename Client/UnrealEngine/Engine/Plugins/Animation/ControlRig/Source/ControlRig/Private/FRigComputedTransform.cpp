// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a2c7b50

UScriptStruct * __cdecl FRigComputedTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigComputedTransform.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigComputedTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigComputedTransform,(UObject *)pUVar1,
                         L"RigComputedTransform");
  }
  return Z_Registration_Info_UScriptStruct_FRigComputedTransform.OuterSingleton;
}

// operator= @ 14a2dfd30

FRigComputedTransform * __thiscall
FRigComputedTransform::operator=(FRigComputedTransform *this,FRigComputedTransform *param_1)

{
  TTransform<double> *pTVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  
  if (this->Storage != (TTransform<double> *)0x0) {
    pTVar3 = Get(param_1);
    pTVar1 = this->Storage;
    dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
    (pTVar1->Rotation).XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
    (pTVar1->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
    (pTVar1->Rotation).ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
    (pTVar1->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
    (pTVar1->Translation).XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
    (pTVar1->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
    (pTVar1->Translation).ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
    (pTVar1->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
    (pTVar1->Scale3D).XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
    (pTVar1->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
    (pTVar1->Scale3D).ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
    (pTVar1->Scale3D).ZW.m128d_f64[1] = dVar2;
  }
  return this;
}

// Equals @ 14a301480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRigComputedTransform::Equals(TTransform<double> *param_1,TTransform<double> *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_EAX;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  
  dVar5 = (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  dVar6 = (double)param_3;
  dVar7 = (param_1->Translation).ZW.m128d_f64[0] - (param_2->Translation).ZW.m128d_f64[0];
  uVar16 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar5 = (param_1->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
  if ((((double)CONCAT44(uVar17,uVar16) < dVar6 || (double)CONCAT44(uVar17,uVar16) == dVar6) &&
      (uVar16 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar17 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar17,uVar16) < dVar6 || (double)CONCAT44(uVar17,uVar16) == dVar6)) &&
     (uVar16 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar17 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar17,uVar16) < dVar6 || (double)CONCAT44(uVar17,uVar16) == dVar6)) {
    dVar11 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar12 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar13 = (param_1->Rotation).XY.m128d_f64[0];
    dVar15 = (param_1->Rotation).XY.m128d_f64[1];
    dVar14 = (param_2->Rotation).ZW.m128d_f64[0] + dVar11;
    dVar8 = (param_2->Rotation).ZW.m128d_f64[1] + dVar12;
    dVar11 = dVar11 - (param_2->Rotation).ZW.m128d_f64[0];
    dVar12 = dVar12 - (param_2->Rotation).ZW.m128d_f64[1];
    dVar5 = (param_2->Rotation).XY.m128d_f64[0] + dVar13;
    dVar7 = (param_2->Rotation).XY.m128d_f64[1] + dVar15;
    dVar13 = dVar13 - (param_2->Rotation).XY.m128d_f64[0];
    dVar15 = dVar15 - (param_2->Rotation).XY.m128d_f64[1];
    lVar10 = -(ulonglong)
              (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                                        SUB84(dVar12,0) & _UNK_15061cc88));
    auVar1._8_4_ = (int)lVar10;
    auVar1._0_8_ = -(ulonglong)
                    (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar11,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar1._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    iVar9 = movmskpd((int)param_1,auVar1);
    lVar10 = -(ulonglong)
              (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                                        SUB84(dVar15,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar10;
    auVar2._0_8_ = -(ulonglong)
                    (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar13,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar16 = movmskpd(in_EAX,auVar2);
    uVar17 = iVar9 << 2 | uVar16;
    if (uVar17 != 0) {
      lVar10 = -(ulonglong)
                (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                                          SUB84(dVar8,0) & _UNK_15061cc88));
      auVar3._8_4_ = (int)lVar10;
      auVar3._0_8_ = -(ulonglong)
                      (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar14,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      uVar17 = movmskpd(uVar17,auVar3);
      lVar10 = -(ulonglong)
                (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                                          SUB84(dVar7,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar10;
      auVar4._0_8_ = -(ulonglong)
                      (dVar6 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar5,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      iVar9 = movmskpd(uVar16,auVar4);
      if ((uVar17 & 0x3fffffff) != 0 || iVar9 != 0) {
        return false;
      }
    }
    dVar7 = (param_1->Scale3D).ZW.m128d_f64[0] - (param_2->Scale3D).ZW.m128d_f64[0];
    dVar14 = (param_1->Scale3D).XY.m128d_f64[0] - (param_2->Scale3D).XY.m128d_f64[0];
    dVar5 = (param_1->Scale3D).XY.m128d_f64[1] - (param_2->Scale3D).XY.m128d_f64[1];
    if ((((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar6)
        && (uVar16 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar17 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar17,uVar16) < dVar6 || (double)CONCAT44(uVar17,uVar16) == dVar6)) &&
       (uVar16 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar17 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar17,uVar16) < dVar6 || (double)CONCAT44(uVar17,uVar16) == dVar6)) {
      return true;
    }
  }
  return false;
}

// Get @ 14a307640

TTransform<double> * __thiscall FRigComputedTransform::Get(FRigComputedTransform *this)

{
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  
  pTVar3 = this->Storage;
  if (pTVar3 == (TTransform<double> *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548617551>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x2b1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTransform<double> *)(*pcVar1)();
      return pTVar3;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        DefaultTransform.Rotation.XY = UE::Math::TTransform<double>::Identity.Rotation.XY;
        DefaultTransform.Rotation.ZW = UE::Math::TTransform<double>::Identity.Rotation.ZW;
        DefaultTransform.Translation.XY = UE::Math::TTransform<double>::Identity.Translation.XY;
        DefaultTransform.Translation.ZW = UE::Math::TTransform<double>::Identity.Translation.ZW;
        DefaultTransform.Scale3D.XY = UE::Math::TTransform<double>::Identity.Scale3D.XY;
        DefaultTransform.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar3 = &DefaultTransform;
  }
  return pTVar3;
}

// LinkStorage @ 14a329d40

void __thiscall
FRigComputedTransform::LinkStorage
          (FRigComputedTransform *this,TArrayView<UE::Math::TTransform<double>,int> *param_1)

{
  int iVar1;
  
  iVar1 = this->StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) {
    this->Storage = param_1->DataPtr + iVar1;
  }
  return;
}

// Load @ 14a32aae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERepresentation": Some values do not have unique names */

void __thiscall
FRigComputedTransform::Load
          (FRigComputedTransform *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2
          ,FRigTransformDirtyState *param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  TTransform<double> *pTVar4;
  bool *pbVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  FRigCompactTransform local_a8 [2];
  undefined1 local_98 [40];
  double dStack_70;
  __m128d local_68;
  undefined1 local_58 [24];
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar6 = false;
  local_98._0_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_98._16_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  stack0xffffffffffffff88 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_68.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_58._0_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  stack0xffffffffffffffb8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((int)param_2->ControlRigVersion < 0x23) {
    UE::Math::operator<<(param_1,(TQuat<double> *)local_98);
    UE::Math::operator<<(param_1,(TVector<double> *)(local_98 + 0x20));
    UE::Math::operator<<(param_1,(TVector<double> *)local_58);
    if ((param_1->field_0x28 & 1) != 0) {
      local_68.m128d_f64[1] = 0.0;
      dStack_40 = 0.0;
    }
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      local_a8[0].Transform = (TTransform<double> *)((ulonglong)local_a8[0].Transform._4_4_ << 0x20)
      ;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a8,4);
      if (1 < (uint)local_a8[0].Transform) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        bVar6 = (uint)local_a8[0].Transform != 0;
      }
    }
    else {
      bVar6 = *(int *)*puVar3 != 0;
      *puVar3 = (ulonglong)piVar1;
    }
    goto LAB_14a32ac7b;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    local_a8[0].Transform = local_a8[0].Transform & 0xffffffff00000000;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a8,4);
    if (1 < (uint)local_a8[0].Transform) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) goto LAB_14a32ac58;
  }
  else {
    local_a8[0].Transform._0_4_ = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
LAB_14a32ac58:
    bVar6 = (uint)local_a8[0].Transform != 0;
    if (bVar6) goto LAB_14a32ac7b;
  }
  local_a8[0].Transform = (TTransform<double> *)local_98;
  FRigCompactTransform::Load(local_a8,param_1,param_2,(ERepresentation *)0x0);
LAB_14a32ac7b:
  pTVar4 = this->Storage;
  if (pTVar4 != (TTransform<double> *)0x0) {
    (pTVar4->Rotation).XY.m128d_f64[0] = (double)local_98._0_8_;
    (pTVar4->Rotation).XY.m128d_f64[1] = (double)local_98._8_8_;
    (pTVar4->Rotation).ZW.m128d_f64[0] = (double)local_98._16_8_;
    (pTVar4->Rotation).ZW.m128d_f64[1] = (double)local_98._24_8_;
    (pTVar4->Translation).XY.m128d_f64[0] = (double)local_98._32_8_;
    (pTVar4->Translation).XY.m128d_f64[1] = dStack_70;
    (pTVar4->Translation).ZW.m128d_f64[0] = local_68.m128d_f64[0];
    (pTVar4->Translation).ZW.m128d_f64[1] = local_68.m128d_f64[1];
    (pTVar4->Scale3D).XY.m128d_f64[0] = (double)local_58._0_8_;
    (pTVar4->Scale3D).XY.m128d_f64[1] = (double)local_58._8_8_;
    (pTVar4->Scale3D).ZW.m128d_f64[0] = (double)local_58._16_8_;
    (pTVar4->Scale3D).ZW.m128d_f64[1] = dStack_40;
  }
  pbVar5 = param_3->Storage;
  if ((pbVar5 != (bool *)0x0) && (*pbVar5 != bVar6)) {
    *pbVar5 = bVar6;
  }
  return;
}

// Save @ 14a344920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERepresentation": Some values do not have unique names */

void __thiscall
FRigComputedTransform::Save
          (FRigComputedTransform *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2
          ,FRigTransformDirtyState *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  bool *pbVar7;
  char cVar8;
  undefined1 auStackY_b8 [32];
  uint local_88 [2];
  FRigCompactTransform local_80;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pTVar6 = Get(this);
  pbVar7 = param_3->Storage;
  local_78.Rotation.XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
  local_78.Rotation.XY.m128d_f64[1] = (pTVar6->Rotation).XY.m128d_f64[1];
  local_78.Rotation.ZW.m128d_f64[0] = (pTVar6->Rotation).ZW.m128d_f64[0];
  local_78.Rotation.ZW.m128d_f64[1] = (pTVar6->Rotation).ZW.m128d_f64[1];
  local_78.Translation.XY.m128d_f64[0] = (pTVar6->Translation).XY.m128d_f64[0];
  local_78.Translation.XY.m128d_f64[1] = (pTVar6->Translation).XY.m128d_f64[1];
  local_78.Translation.ZW.m128d_f64[0] = (pTVar6->Translation).ZW.m128d_f64[0];
  local_78.Translation.ZW.m128d_f64[1] = (pTVar6->Translation).ZW.m128d_f64[1];
  local_78.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar6->Scale3D).XY.m128d_f64;
  local_78.Scale3D.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar6->Scale3D).XY.m128d_f64 + 4);
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar6->Scale3D).XY.m128d_f64 + 1);
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar6->Scale3D).XY.m128d_f64 + 0xc);
  local_78.Scale3D.ZW.m128d_f64[0] = (pTVar6->Scale3D).ZW.m128d_f64[0];
  local_78.Scale3D.ZW.m128d_f64[1] = (pTVar6->Scale3D).ZW.m128d_f64[1];
  if (pbVar7 == (bool *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557919968548617693>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x223,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pbVar7 = &bDefaultDirtyFlag;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  cVar8 = *pbVar7;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_88[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_88[0] = (uint)((bool)cVar8 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_88,4);
    if (1 < local_88[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_88[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14a344a32;
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  cVar8 = uVar2 != 0;
LAB_14a344a32:
  if (cVar8 == '\0') {
    local_80.Transform = &local_78;
    FRigCompactTransform::Save(&local_80,param_1,param_2,(ERepresentation *)0x0);
  }
  return;
}

// UnlinkStorage @ 14a35bc60

void __thiscall
FRigComputedTransform::UnlinkStorage
          (FRigComputedTransform *this,
          FRigReusableElementStorage<UE::Math::TTransform<double>_> *param_1)

{
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&this->StorageIndex,&this->Storage);
  return;
}

