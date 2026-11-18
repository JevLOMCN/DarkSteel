// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147ba7bc0

UScriptStruct * __cdecl FCollisionResponseContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollisionResponseContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCollisionResponseContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponseContainer,(UObject *)pUVar1,
                         L"CollisionResponseContainer");
  }
  return Z_Registration_Info_UScriptStruct_FCollisionResponseContainer.OuterSingleton;
}

// FCollisionResponseContainer @ 1482d8710

FCollisionResponseContainer * __thiscall
FCollisionResponseContainer::FCollisionResponseContainer
          (FCollisionResponseContainer *this,ECollisionResponse param_1)

{
  SetAllChannels(this,param_1);
  return this;
}

// FCollisionResponseContainer @ 1482d8730

FCollisionResponseContainer * __thiscall
FCollisionResponseContainer::FCollisionResponseContainer(FCollisionResponseContainer *this)

{
  undefined8 uVar1;
  
  uVar1 = DefaultResponseContainer.field0_0x0._8_8_;
  *(undefined8 *)&this->field0_0x0 = DefaultResponseContainer.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&this->field0_0x0 + 8) = uVar1;
  uVar1 = DefaultResponseContainer.field0_0x0._24_8_;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x10) = DefaultResponseContainer.field0_0x0._16_8_;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x18) = uVar1;
  return this;
}

// CreateMinContainer @ 1482f1960

FCollisionResponseContainer * __cdecl
FCollisionResponseContainer::CreateMinContainer
          (FCollisionResponseContainer *__return_storage_ptr__,FCollisionResponseContainer *param_1,
          FCollisionResponseContainer *param_2)

{
  uchar *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  uchar *puVar69;
  uint uVar70;
  
  uVar68 = DefaultResponseContainer.field0_0x0._24_8_;
  uVar67 = DefaultResponseContainer.field0_0x0._16_8_;
  uVar66 = DefaultResponseContainer.field0_0x0._8_8_;
  uVar70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = DefaultResponseContainer.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar66;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar67;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x18) = uVar68;
  puVar69 = &(param_1->field0_0x0)._s_0.GameTraceChannel3;
  do {
    puVar1 = puVar69 + ((longlong)param_2 - (longlong)param_1) + -0x10;
    bVar2 = *puVar1;
    bVar3 = puVar1[1];
    bVar4 = puVar1[2];
    bVar5 = puVar1[3];
    bVar6 = puVar1[4];
    bVar7 = puVar1[5];
    bVar8 = puVar1[6];
    bVar9 = puVar1[7];
    bVar10 = puVar1[8];
    bVar11 = puVar1[9];
    bVar12 = puVar1[10];
    bVar13 = puVar1[0xb];
    bVar14 = puVar1[0xc];
    bVar15 = puVar1[0xd];
    bVar16 = puVar1[0xe];
    bVar17 = puVar1[0xf];
    uVar70 = uVar70 + 0x20;
    bVar18 = ((FCollisionResponseContainer_u_0_s_0 *)(puVar69 + -0x10))->WorldStatic;
    bVar19 = puVar69[-0xf];
    bVar20 = puVar69[-0xe];
    bVar21 = puVar69[-0xd];
    bVar22 = puVar69[-0xc];
    bVar23 = puVar69[-0xb];
    bVar24 = puVar69[-10];
    bVar25 = puVar69[-9];
    bVar26 = puVar69[-8];
    bVar27 = puVar69[-7];
    bVar28 = puVar69[-6];
    bVar29 = puVar69[-5];
    bVar30 = puVar69[-4];
    bVar31 = puVar69[-3];
    bVar32 = puVar69[-2];
    bVar33 = puVar69[-1];
    bVar34 = *puVar69;
    bVar35 = puVar69[1];
    bVar36 = puVar69[2];
    bVar37 = puVar69[3];
    bVar38 = puVar69[4];
    bVar39 = puVar69[5];
    bVar40 = puVar69[6];
    bVar41 = puVar69[7];
    bVar42 = puVar69[8];
    bVar43 = puVar69[9];
    bVar44 = puVar69[10];
    bVar45 = puVar69[0xb];
    bVar46 = puVar69[0xc];
    bVar47 = puVar69[0xd];
    bVar48 = puVar69[0xe];
    bVar49 = puVar69[0xf];
    puVar1 = puVar69 + 0x20;
    puVar69 = puVar69 + ((longlong)param_2 - (longlong)param_1);
    bVar50 = *puVar69;
    bVar51 = puVar69[1];
    bVar52 = puVar69[2];
    bVar53 = puVar69[3];
    bVar54 = puVar69[4];
    bVar55 = puVar69[5];
    bVar56 = puVar69[6];
    bVar57 = puVar69[7];
    bVar58 = puVar69[8];
    bVar59 = puVar69[9];
    bVar60 = puVar69[10];
    bVar61 = puVar69[0xb];
    bVar62 = puVar69[0xc];
    bVar63 = puVar69[0xd];
    bVar64 = puVar69[0xe];
    bVar65 = puVar69[0xf];
    puVar69 = puVar1 + (longlong)__return_storage_ptr__ + (-0x30 - (longlong)param_1);
    *puVar69 = (bVar2 < bVar18) * bVar2 | (bVar2 >= bVar18) * bVar18;
    puVar69[1] = (bVar3 < bVar19) * bVar3 | (bVar3 >= bVar19) * bVar19;
    puVar69[2] = (bVar4 < bVar20) * bVar4 | (bVar4 >= bVar20) * bVar20;
    puVar69[3] = (bVar5 < bVar21) * bVar5 | (bVar5 >= bVar21) * bVar21;
    puVar69[4] = (bVar6 < bVar22) * bVar6 | (bVar6 >= bVar22) * bVar22;
    puVar69[5] = (bVar7 < bVar23) * bVar7 | (bVar7 >= bVar23) * bVar23;
    puVar69[6] = (bVar8 < bVar24) * bVar8 | (bVar8 >= bVar24) * bVar24;
    puVar69[7] = (bVar9 < bVar25) * bVar9 | (bVar9 >= bVar25) * bVar25;
    puVar69[8] = (bVar10 < bVar26) * bVar10 | (bVar10 >= bVar26) * bVar26;
    puVar69[9] = (bVar11 < bVar27) * bVar11 | (bVar11 >= bVar27) * bVar27;
    puVar69[10] = (bVar12 < bVar28) * bVar12 | (bVar12 >= bVar28) * bVar28;
    puVar69[0xb] = (bVar13 < bVar29) * bVar13 | (bVar13 >= bVar29) * bVar29;
    puVar69[0xc] = (bVar14 < bVar30) * bVar14 | (bVar14 >= bVar30) * bVar30;
    puVar69[0xd] = (bVar15 < bVar31) * bVar15 | (bVar15 >= bVar31) * bVar31;
    puVar69[0xe] = (bVar16 < bVar32) * bVar16 | (bVar16 >= bVar32) * bVar32;
    puVar69[0xf] = (bVar17 < bVar33) * bVar17 | (bVar17 >= bVar33) * bVar33;
    puVar69 = puVar1 + (longlong)__return_storage_ptr__ + (-0x20 - (longlong)param_1);
    *puVar69 = (bVar50 < bVar34) * bVar50 | (bVar50 >= bVar34) * bVar34;
    puVar69[1] = (bVar51 < bVar35) * bVar51 | (bVar51 >= bVar35) * bVar35;
    puVar69[2] = (bVar52 < bVar36) * bVar52 | (bVar52 >= bVar36) * bVar36;
    puVar69[3] = (bVar53 < bVar37) * bVar53 | (bVar53 >= bVar37) * bVar37;
    puVar69[4] = (bVar54 < bVar38) * bVar54 | (bVar54 >= bVar38) * bVar38;
    puVar69[5] = (bVar55 < bVar39) * bVar55 | (bVar55 >= bVar39) * bVar39;
    puVar69[6] = (bVar56 < bVar40) * bVar56 | (bVar56 >= bVar40) * bVar40;
    puVar69[7] = (bVar57 < bVar41) * bVar57 | (bVar57 >= bVar41) * bVar41;
    puVar69[8] = (bVar58 < bVar42) * bVar58 | (bVar58 >= bVar42) * bVar42;
    puVar69[9] = (bVar59 < bVar43) * bVar59 | (bVar59 >= bVar43) * bVar43;
    puVar69[10] = (bVar60 < bVar44) * bVar60 | (bVar60 >= bVar44) * bVar44;
    puVar69[0xb] = (bVar61 < bVar45) * bVar61 | (bVar61 >= bVar45) * bVar45;
    puVar69[0xc] = (bVar62 < bVar46) * bVar62 | (bVar62 >= bVar46) * bVar46;
    puVar69[0xd] = (bVar63 < bVar47) * bVar63 | (bVar63 >= bVar47) * bVar47;
    puVar69[0xe] = (bVar64 < bVar48) * bVar64 | (bVar64 >= bVar48) * bVar48;
    puVar69[0xf] = (bVar65 < bVar49) * bVar65 | (bVar65 >= bVar49) * bVar49;
    puVar69 = puVar1;
  } while (uVar70 < 0x20);
  return __return_storage_ptr__;
}

// ReplaceChannels @ 14831dc50

bool __thiscall
FCollisionResponseContainer::ReplaceChannels
          (FCollisionResponseContainer *this,ECollisionResponse param_1,ECollisionResponse param_2)

{
  uchar uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  
  bVar2 = (this->field0_0x0)._s_0.WorldStatic == param_1;
  uVar1 = (uchar)param_2;
  if (bVar2) {
    (this->field0_0x0)._s_0.WorldStatic = uVar1;
  }
  bVar3 = (this->field0_0x0)._s_0.WorldDynamic == param_1;
  if (bVar3) {
    (this->field0_0x0)._s_0.WorldDynamic = uVar1;
  }
  bVar4 = (this->field0_0x0)._s_0.Pawn == param_1;
  if (bVar4) {
    (this->field0_0x0)._s_0.Pawn = uVar1;
  }
  bVar5 = (this->field0_0x0)._s_0.Visibility == param_1;
  if (bVar5) {
    (this->field0_0x0)._s_0.Visibility = uVar1;
  }
  bVar6 = (this->field0_0x0)._s_0.Camera == param_1;
  if (bVar6) {
    (this->field0_0x0)._s_0.Camera = uVar1;
  }
  bVar7 = (this->field0_0x0)._s_0.PhysicsBody == param_1;
  if (bVar7) {
    (this->field0_0x0)._s_0.PhysicsBody = uVar1;
  }
  bVar8 = (this->field0_0x0)._s_0.Vehicle == param_1;
  if (bVar8) {
    (this->field0_0x0)._s_0.Vehicle = uVar1;
  }
  bVar9 = (this->field0_0x0)._s_0.Destructible == param_1;
  if (bVar9) {
    (this->field0_0x0)._s_0.Destructible = uVar1;
  }
  bVar10 = (this->field0_0x0)._s_0.EngineTraceChannel1 == param_1;
  if (bVar10) {
    (this->field0_0x0)._s_0.EngineTraceChannel1 = uVar1;
  }
  bVar11 = (this->field0_0x0)._s_0.EngineTraceChannel2 == param_1;
  if (bVar11) {
    (this->field0_0x0)._s_0.EngineTraceChannel2 = uVar1;
  }
  bVar12 = (this->field0_0x0)._s_0.EngineTraceChannel3 == param_1;
  if (bVar12) {
    (this->field0_0x0)._s_0.EngineTraceChannel3 = uVar1;
  }
  bVar13 = (this->field0_0x0)._s_0.EngineTraceChannel4 == param_1;
  if (bVar13) {
    (this->field0_0x0)._s_0.EngineTraceChannel4 = uVar1;
  }
  bVar14 = (this->field0_0x0)._s_0.EngineTraceChannel5 == param_1;
  if (bVar14) {
    (this->field0_0x0)._s_0.EngineTraceChannel5 = uVar1;
  }
  bVar15 = (this->field0_0x0)._s_0.EngineTraceChannel6 == param_1;
  if (bVar15) {
    (this->field0_0x0)._s_0.EngineTraceChannel6 = uVar1;
  }
  bVar16 = (this->field0_0x0)._s_0.GameTraceChannel1 == param_1;
  if (bVar16) {
    (this->field0_0x0)._s_0.GameTraceChannel1 = uVar1;
  }
  bVar17 = (this->field0_0x0)._s_0.GameTraceChannel2 == param_1;
  if (bVar17) {
    (this->field0_0x0)._s_0.GameTraceChannel2 = uVar1;
  }
  bVar18 = (this->field0_0x0)._s_0.GameTraceChannel3 == param_1;
  if (bVar18) {
    (this->field0_0x0)._s_0.GameTraceChannel3 = uVar1;
  }
  bVar19 = (this->field0_0x0)._s_0.GameTraceChannel4 == param_1;
  if (bVar19) {
    (this->field0_0x0)._s_0.GameTraceChannel4 = uVar1;
  }
  bVar20 = (this->field0_0x0)._s_0.GameTraceChannel5 == param_1;
  if (bVar20) {
    (this->field0_0x0)._s_0.GameTraceChannel5 = uVar1;
  }
  bVar21 = (this->field0_0x0)._s_0.GameTraceChannel6 == param_1;
  if (bVar21) {
    (this->field0_0x0)._s_0.GameTraceChannel6 = uVar1;
  }
  bVar22 = (this->field0_0x0)._s_0.GameTraceChannel7 == param_1;
  if (bVar22) {
    (this->field0_0x0)._s_0.GameTraceChannel7 = uVar1;
  }
  bVar23 = (this->field0_0x0)._s_0.GameTraceChannel8 == param_1;
  if (bVar23) {
    (this->field0_0x0)._s_0.GameTraceChannel8 = uVar1;
  }
  bVar24 = (this->field0_0x0)._s_0.GameTraceChannel9 == param_1;
  if (bVar24) {
    (this->field0_0x0)._s_0.GameTraceChannel9 = uVar1;
  }
  bVar25 = (this->field0_0x0)._s_0.GameTraceChannel10 == param_1;
  if (bVar25) {
    (this->field0_0x0)._s_0.GameTraceChannel10 = uVar1;
  }
  bVar26 = (this->field0_0x0)._s_0.GameTraceChannel11 == param_1;
  if (bVar26) {
    (this->field0_0x0)._s_0.GameTraceChannel11 = uVar1;
  }
  bVar27 = (this->field0_0x0)._s_0.GameTraceChannel12 == param_1;
  if (bVar27) {
    (this->field0_0x0)._s_0.GameTraceChannel12 = uVar1;
  }
  bVar28 = (this->field0_0x0)._s_0.GameTraceChannel13 == param_1;
  if (bVar28) {
    (this->field0_0x0)._s_0.GameTraceChannel13 = uVar1;
  }
  bVar29 = (this->field0_0x0)._s_0.GameTraceChannel14 == param_1;
  if (bVar29) {
    (this->field0_0x0)._s_0.GameTraceChannel14 = uVar1;
  }
  bVar30 = (this->field0_0x0)._s_0.GameTraceChannel15 == param_1;
  if (bVar30) {
    (this->field0_0x0)._s_0.GameTraceChannel15 = uVar1;
  }
  bVar31 = (this->field0_0x0)._s_0.GameTraceChannel16 == param_1;
  if (bVar31) {
    (this->field0_0x0)._s_0.GameTraceChannel16 = uVar1;
  }
  bVar32 = (this->field0_0x0)._s_0.GameTraceChannel17 == param_1;
  if (bVar32) {
    (this->field0_0x0)._s_0.GameTraceChannel17 = uVar1;
  }
  if ((this->field0_0x0)._s_0.GameTraceChannel18 == param_1) {
    (this->field0_0x0)._s_0.GameTraceChannel18 = uVar1;
    return true;
  }
  return bVar32 || (bVar31 ||
                   (bVar30 ||
                   (bVar29 ||
                   (bVar28 ||
                   (bVar27 ||
                   (bVar26 ||
                   (bVar25 ||
                   (bVar24 ||
                   (bVar23 ||
                   (bVar22 ||
                   (bVar21 ||
                   (bVar20 ||
                   (bVar19 ||
                   (bVar18 ||
                   (bVar17 ||
                   (bVar16 ||
                   (bVar15 ||
                   (bVar14 ||
                   (bVar13 ||
                   (bVar12 ||
                   (bVar11 ||
                   (bVar10 ||
                   (bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2))))))
                   )))))))))))))))))))))));
}

// SetAllChannels @ 148321180

bool __thiscall
FCollisionResponseContainer::SetAllChannels
          (FCollisionResponseContainer *this,ECollisionResponse param_1)

{
  uchar uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  
  bVar2 = (this->field0_0x0)._s_0.WorldStatic != param_1;
  uVar1 = (uchar)param_1;
  if (bVar2) {
    (this->field0_0x0)._s_0.WorldStatic = uVar1;
  }
  bVar3 = (this->field0_0x0)._s_0.WorldDynamic != param_1;
  if (bVar3) {
    (this->field0_0x0)._s_0.WorldDynamic = uVar1;
  }
  bVar4 = (this->field0_0x0)._s_0.Pawn != param_1;
  if (bVar4) {
    (this->field0_0x0)._s_0.Pawn = uVar1;
  }
  bVar5 = (this->field0_0x0)._s_0.Visibility != param_1;
  if (bVar5) {
    (this->field0_0x0)._s_0.Visibility = uVar1;
  }
  bVar6 = (this->field0_0x0)._s_0.Camera != param_1;
  if (bVar6) {
    (this->field0_0x0)._s_0.Camera = uVar1;
  }
  bVar7 = (this->field0_0x0)._s_0.PhysicsBody != param_1;
  if (bVar7) {
    (this->field0_0x0)._s_0.PhysicsBody = uVar1;
  }
  bVar8 = (this->field0_0x0)._s_0.Vehicle != param_1;
  if (bVar8) {
    (this->field0_0x0)._s_0.Vehicle = uVar1;
  }
  bVar9 = (this->field0_0x0)._s_0.Destructible != param_1;
  if (bVar9) {
    (this->field0_0x0)._s_0.Destructible = uVar1;
  }
  bVar10 = (this->field0_0x0)._s_0.EngineTraceChannel1 != param_1;
  if (bVar10) {
    (this->field0_0x0)._s_0.EngineTraceChannel1 = uVar1;
  }
  bVar11 = (this->field0_0x0)._s_0.EngineTraceChannel2 != param_1;
  if (bVar11) {
    (this->field0_0x0)._s_0.EngineTraceChannel2 = uVar1;
  }
  bVar12 = (this->field0_0x0)._s_0.EngineTraceChannel3 != param_1;
  if (bVar12) {
    (this->field0_0x0)._s_0.EngineTraceChannel3 = uVar1;
  }
  bVar13 = (this->field0_0x0)._s_0.EngineTraceChannel4 != param_1;
  if (bVar13) {
    (this->field0_0x0)._s_0.EngineTraceChannel4 = uVar1;
  }
  bVar14 = (this->field0_0x0)._s_0.EngineTraceChannel5 != param_1;
  if (bVar14) {
    (this->field0_0x0)._s_0.EngineTraceChannel5 = uVar1;
  }
  bVar15 = (this->field0_0x0)._s_0.EngineTraceChannel6 != param_1;
  if (bVar15) {
    (this->field0_0x0)._s_0.EngineTraceChannel6 = uVar1;
  }
  bVar16 = (this->field0_0x0)._s_0.GameTraceChannel1 != param_1;
  if (bVar16) {
    (this->field0_0x0)._s_0.GameTraceChannel1 = uVar1;
  }
  bVar17 = (this->field0_0x0)._s_0.GameTraceChannel2 != param_1;
  if (bVar17) {
    (this->field0_0x0)._s_0.GameTraceChannel2 = uVar1;
  }
  bVar18 = (this->field0_0x0)._s_0.GameTraceChannel3 != param_1;
  if (bVar18) {
    (this->field0_0x0)._s_0.GameTraceChannel3 = uVar1;
  }
  bVar19 = (this->field0_0x0)._s_0.GameTraceChannel4 != param_1;
  if (bVar19) {
    (this->field0_0x0)._s_0.GameTraceChannel4 = uVar1;
  }
  bVar20 = (this->field0_0x0)._s_0.GameTraceChannel5 != param_1;
  if (bVar20) {
    (this->field0_0x0)._s_0.GameTraceChannel5 = uVar1;
  }
  bVar21 = (this->field0_0x0)._s_0.GameTraceChannel6 != param_1;
  if (bVar21) {
    (this->field0_0x0)._s_0.GameTraceChannel6 = uVar1;
  }
  bVar22 = (this->field0_0x0)._s_0.GameTraceChannel7 != param_1;
  if (bVar22) {
    (this->field0_0x0)._s_0.GameTraceChannel7 = uVar1;
  }
  bVar23 = (this->field0_0x0)._s_0.GameTraceChannel8 != param_1;
  if (bVar23) {
    (this->field0_0x0)._s_0.GameTraceChannel8 = uVar1;
  }
  bVar24 = (this->field0_0x0)._s_0.GameTraceChannel9 != param_1;
  if (bVar24) {
    (this->field0_0x0)._s_0.GameTraceChannel9 = uVar1;
  }
  bVar25 = (this->field0_0x0)._s_0.GameTraceChannel10 != param_1;
  if (bVar25) {
    (this->field0_0x0)._s_0.GameTraceChannel10 = uVar1;
  }
  bVar26 = (this->field0_0x0)._s_0.GameTraceChannel11 != param_1;
  if (bVar26) {
    (this->field0_0x0)._s_0.GameTraceChannel11 = uVar1;
  }
  bVar27 = (this->field0_0x0)._s_0.GameTraceChannel12 != param_1;
  if (bVar27) {
    (this->field0_0x0)._s_0.GameTraceChannel12 = uVar1;
  }
  bVar28 = (this->field0_0x0)._s_0.GameTraceChannel13 != param_1;
  if (bVar28) {
    (this->field0_0x0)._s_0.GameTraceChannel13 = uVar1;
  }
  bVar29 = (this->field0_0x0)._s_0.GameTraceChannel14 != param_1;
  if (bVar29) {
    (this->field0_0x0)._s_0.GameTraceChannel14 = uVar1;
  }
  bVar30 = (this->field0_0x0)._s_0.GameTraceChannel15 != param_1;
  if (bVar30) {
    (this->field0_0x0)._s_0.GameTraceChannel15 = uVar1;
  }
  bVar31 = (this->field0_0x0)._s_0.GameTraceChannel16 != param_1;
  if (bVar31) {
    (this->field0_0x0)._s_0.GameTraceChannel16 = uVar1;
  }
  bVar32 = (this->field0_0x0)._s_0.GameTraceChannel17 != param_1;
  if (bVar32) {
    (this->field0_0x0)._s_0.GameTraceChannel17 = uVar1;
  }
  if ((this->field0_0x0)._s_0.GameTraceChannel18 != param_1) {
    (this->field0_0x0)._s_0.GameTraceChannel18 = uVar1;
    return true;
  }
  return bVar32 || (bVar31 ||
                   (bVar30 ||
                   (bVar29 ||
                   (bVar28 ||
                   (bVar27 ||
                   (bVar26 ||
                   (bVar25 ||
                   (bVar24 ||
                   (bVar23 ||
                   (bVar22 ||
                   (bVar21 ||
                   (bVar20 ||
                   (bVar19 ||
                   (bVar18 ||
                   (bVar17 ||
                   (bVar16 ||
                   (bVar15 ||
                   (bVar14 ||
                   (bVar13 ||
                   (bVar12 ||
                   (bVar11 ||
                   (bVar10 ||
                   (bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2))))))
                   )))))))))))))))))))))));
}

// SetResponse @ 148322920

bool __thiscall
FCollisionResponseContainer::SetResponse
          (FCollisionResponseContainer *this,ECollisionChannel param_1,ECollisionResponse param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(int)param_1;
  if ((uVar1 < 0x20) && ((this->field0_0x0).EnumArray[uVar1] != param_2)) {
    (this->field0_0x0).EnumArray[uVar1] = (uchar)param_2;
    return true;
  }
  return false;
}

