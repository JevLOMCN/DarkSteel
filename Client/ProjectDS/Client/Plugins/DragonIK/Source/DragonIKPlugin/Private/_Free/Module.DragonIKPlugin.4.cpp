// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 19

// `dynamic_initializer_for_'StatPtr_STAT_DragonFeetSolver_Eval'' @ 1413c9b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DragonFeetSolver_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DragonFeetSolver_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_DragonFeetSolver_Eval>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DragonFeetSolver_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DragonFeetSolver_Eval,*pFVar1,
               L"DragonFeetSolver Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DragonPhysicsSolver_Eval'' @ 1413c9ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DragonPhysicsSolver_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DragonPhysicsSolver_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_DragonPhysicsSolver_Eval>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DragonPhysicsSolver_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DragonPhysicsSolver_Eval,*pFVar1,
               L"DragonPhysicsSolver Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// ConstructItems<DragonChainLink,DragonChainLink,int> @ 14d2b4e00

void __cdecl
ConstructItems<DragonChainLink,DragonChainLink,int>
          (void *param_1,DragonChainLink *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  double *pdVar2;
  float fVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  float *pfVar5;
  float *pfVar6;
  
  if (param_3 != 0) {
    pfVar5 = &param_2->Length;
    pfVar6 = (float *)((longlong)param_1 + 0x18);
    do {
      dVar4 = *(double *)(pfVar5 + -4);
      pFVar1 = (ForAnyElementType *)(pfVar6 + 4);
      pdVar2 = (double *)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)pfVar5);
      *pdVar2 = (((DragonChainLink *)(pfVar5 + -6))->Position).field0_0x0._s_0.X;
      pdVar2[1] = dVar4;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pfVar5) =
           *(undefined8 *)(pfVar5 + -2);
      *pfVar6 = *pfVar5;
      *(FCompactPoseBoneIndex *)(pfVar6 + 1) = *(FCompactPoseBoneIndex *)(pfVar5 + 1);
      pfVar6[2] = pfVar5[2];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      fVar3 = pfVar5[6];
      _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pfVar5 + 4))->AllocatorInstance).Data;
      pfVar6[6] = fVar3;
      if (fVar3 == 0.0) {
        pfVar6[7] = 0.0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)fVar3,0,pFVar1,(int)fVar3,(int *)(pfVar6 + 7));
        memcpy(pFVar1->Data,_Src,(longlong)(int)fVar3 << 2);
      }
      pfVar6 = pfVar6 + 0xe;
      pfVar5 = pfVar5 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FBoneTransform,int> @ 14d2b50a0

void __cdecl DefaultConstructItems<FBoneTransform,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double *pdVar4;
  
  if (param_2 != 0) {
    pdVar4 = (double *)((longlong)param_1 + 0x20);
    do {
      *(undefined4 *)(pdVar4 + -4) = 0xffffffff;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
      pdVar4[-2] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      pdVar4[-1] = (double)fVar1;
      *pdVar4 = (double)fVar2;
      pdVar4[1] = (double)fVar3;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      pdVar4[2] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      pdVar4[3] = (double)fVar1;
      pdVar4[4] = (double)fVar2;
      pdVar4[5] = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      pdVar4[6] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      pdVar4[7] = (double)fVar1;
      pdVar4[8] = (double)fVar2;
      pdVar4[9] = (double)fVar3;
      param_2 = param_2 + -1;
      pdVar4 = pdVar4 + 0xe;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FChinaDragonChainLink,int> @ 14d2b5110

void __cdecl DefaultConstructItems<FChinaDragonChainLink,int>(void *param_1,int param_2)

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
  undefined1 (*pauVar15) [16];
  
  if (param_2 != 0) {
    pauVar15 = (undefined1 (*) [16])((longlong)param_1 + 0x70);
    do {
      *(double (*) [2])(pauVar15 + -7) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pauVar15 + -6) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(pauVar15 + -5) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pauVar15 + -4) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pauVar15 + -3) = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
      ;
      *(double (*) [2])(pauVar15 + -2) = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
      ;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      pauVar15[-1] = auVar3;
      auVar4._8_4_ = SUB84((double)fVar2,0);
      auVar4._0_8_ = (double)fVar1;
      auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      *pauVar15 = auVar4;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      pauVar15[1] = auVar5;
      auVar6._8_4_ = SUB84((double)fVar2,0);
      auVar6._0_8_ = (double)fVar1;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[2] = auVar6;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      pauVar15[3] = auVar7;
      auVar8._8_4_ = SUB84((double)fVar2,0);
      auVar8._0_8_ = (double)fVar1;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[4] = auVar8;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      pauVar15[5] = auVar9;
      auVar10._8_4_ = SUB84((double)fVar2,0);
      auVar10._0_8_ = (double)fVar1;
      auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[6] = auVar10;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar11._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      pauVar15[7] = auVar11;
      auVar12._8_4_ = SUB84((double)fVar2,0);
      auVar12._0_8_ = (double)fVar1;
      auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[8] = auVar12;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar13._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      pauVar15[9] = auVar13;
      auVar14._8_4_ = SUB84((double)fVar2,0);
      auVar14._0_8_ = (double)fVar1;
      auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      pauVar15[10] = auVar14;
      *(undefined8 *)(pauVar15[0xc] + 8) = 0;
      *(undefined8 *)pauVar15[0xd] = 0xffffffffffffffff;
      *(undefined8 *)(pauVar15[0xd] + 8) = 0xbff0000000000000;
      *(undefined8 *)pauVar15[0xe] = 0;
      *(undefined8 *)(pauVar15[0xe] + 8) = 0;
      *(undefined8 *)pauVar15[0xf] = 0;
      *(undefined8 *)(pauVar15[0xf] + 8) = 0;
      param_2 = param_2 + -1;
      pauVar15 = pauVar15 + 0x17;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDragonData_HitPairs,int> @ 14d2b5280

void __cdecl DefaultConstructItems<FDragonData_HitPairs,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x1cc;
    do {
      memset((void *)(lVar1 + -0x1cc),0,0x100);
      *(undefined8 *)(lVar1 + -0x114) = 0;
      *(undefined8 *)(lVar1 + -0x10c) = 0;
      *(undefined4 *)(lVar1 + -0x1c8) = 0x3f800000;
      *(undefined4 *)(lVar1 + -0x128) = 0xffffffff;
      *(undefined8 *)(lVar1 + -0x104) = 0;
      *(undefined8 *)(lVar1 + -0xfc) = 0xffffffff;
      memset((void *)(lVar1 + -0xb4),0,0x100);
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + -0xb0) = 0x3f800000;
      *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0xffffffff;
      memset((void *)(lVar1 + 100),0,0x100);
      *(undefined8 *)(lVar1 + 0x11c) = 0;
      *(undefined8 *)(lVar1 + 0x124) = 0;
      *(undefined4 *)(lVar1 + 0x68) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
      *(undefined8 *)(lVar1 + 300) = 0;
      *(undefined8 *)(lVar1 + 0x134) = 0xffffffff;
      memset((void *)(lVar1 + 0x17c),0,0x100);
      *(undefined8 *)(lVar1 + 0x234) = 0;
      *(undefined8 *)(lVar1 + 0x23c) = 0;
      *(undefined4 *)(lVar1 + 0x180) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0x220) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x244) = 0;
      *(undefined8 *)(lVar1 + 0x24c) = 0xffffffff;
      memset((void *)(lVar1 + 0x294),0,0x100);
      *(undefined4 *)(lVar1 + 0x298) = 0x3f800000;
      *(undefined8 *)(lVar1 + 0x34c) = 0;
      *(undefined8 *)(lVar1 + 0x354) = 0;
      *(undefined4 *)(lVar1 + 0x338) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x35c) = 0;
      *(undefined8 *)(lVar1 + 0x364) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x3ac) = 0;
      *(undefined8 *)(lVar1 + 0x3b4) = 0;
      *(undefined8 *)(lVar1 + 0x3bc) = 0;
      *(undefined8 *)(lVar1 + 0x3c4) = 0;
      *(undefined8 *)(lVar1 + 0x3cc) = 0;
      *(undefined8 *)(lVar1 + 0x3d4) = 0;
      *(undefined8 *)(lVar1 + 0x3dc) = 0;
      *(undefined8 *)(lVar1 + 0x3e4) = 0;
      *(undefined8 *)(lVar1 + 0x3ec) = 0;
      *(undefined8 *)(lVar1 + 0x3f4) = 0;
      *(undefined8 *)(lVar1 + 0x3fc) = 0;
      *(undefined8 *)(lVar1 + 0x404) = 0;
      *(undefined8 *)(lVar1 + 0x40c) = 0;
      *(undefined8 *)(lVar1 + 0x414) = 0;
      *(undefined8 *)(lVar1 + 0x41c) = 0;
      *(undefined8 *)(lVar1 + 0x424) = 0;
      lVar1 = lVar1 + 0x5f8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDragonData_SpineFeetPair,int> @ 14d2b54e0

void __cdecl DefaultConstructItems<FDragonData_SpineFeetPair,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar4 + -2) = 0;
      *puVar4 = 0x7fffffff;
      puVar4[1] = 0xffffffff;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 10) = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(undefined8 *)(puVar4 + 0xe) = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      puVar4[0x12] = 0;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
      *(double *)(puVar4 + 0x16) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      *(double *)(puVar4 + 0x18) = (double)fVar1;
      *(double *)(puVar4 + 0x1a) = (double)fVar2;
      *(double *)(puVar4 + 0x1c) = (double)fVar3;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      *(double *)(puVar4 + 0x1e) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      *(double *)(puVar4 + 0x20) = (double)fVar1;
      *(double *)(puVar4 + 0x22) = (double)fVar2;
      *(double *)(puVar4 + 0x24) = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      *(double *)(puVar4 + 0x26) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      *(double *)(puVar4 + 0x28) = (double)fVar1;
      *(double *)(puVar4 + 0x2a) = (double)fVar2;
      *(double *)(puVar4 + 0x2c) = (double)fVar3;
      *(undefined8 *)(puVar4 + 0x2e) = 0;
      *(undefined8 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x32) = 0;
      *(undefined8 *)(puVar4 + 0x34) = 0;
      *(undefined8 *)(puVar4 + 0x36) = 0;
      *(undefined8 *)(puVar4 + 0x38) = 0;
      *(undefined8 *)(puVar4 + 0x3a) = 0;
      *(undefined8 *)(puVar4 + 0x3c) = 0;
      *(undefined8 *)(puVar4 + 0x3e) = 0;
      *(undefined8 *)(puVar4 + 0x40) = 0;
      *(undefined8 *)(puVar4 + 0x42) = 0;
      *(undefined8 *)(puVar4 + 0x44) = 0;
      *(undefined8 *)(puVar4 + 0x46) = 0;
      *(undefined8 *)(puVar4 + 0x48) = 0;
      *(undefined8 *)(puVar4 + 0x4a) = 0;
      *(undefined8 *)(puVar4 + 0x4c) = 0;
      *(undefined8 *)(puVar4 + 0x4e) = 0;
      *(undefined8 *)(puVar4 + 0x50) = 0;
      puVar4[0x52] = 0;
      param_2 = param_2 + -1;
      puVar4 = puVar4 + 0x5c;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int> @ 14d2b5600

void __cdecl
DefaultConstructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>(void *param_1,int param_2)

{
  __m128d _Var1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x68);
    do {
      *(double (*) [2])(puVar2 + -0xd) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(puVar2 + -0xb) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(puVar2 + -9) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(puVar2 + -7) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(puVar2 + -5) = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      *(undefined4 *)(puVar2 + 5) = 0;
      *(double (*) [2])(puVar2 + -3) = _Var1.m128d_f64;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1d] = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x2c;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<DragonChainLink,int> @ 14d2b5750

void __cdecl DestructItems<DragonChainLink,int>(DragonChainLink *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ChildZeroLengthTransformIndices;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ArmIKParamStruct @ 14d2b57f0

ArmIKParamStruct * __thiscall ArmIKParamStruct::ArmIKParamStruct(ArmIKParamStruct *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
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
  undefined1 auVar38 [16];
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar58;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->mesh_component_transform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->mesh_component_transform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->mesh_component_transform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->mesh_component_transform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->mesh_component_transform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->mesh_component_transform).Scale3D.ZW.m128d_f64 = auVar9;
  (this->FeetBone).BoneName.ComparisonIndex = 0;
  (this->FeetBone).BoneName.Number = 0;
  puVar1 = &(this->FeetBone).field_0x8;
  (this->FeetBone).BoneIndex = -1;
  (this->FeetBone).bUseSkeletonIndex = 0;
  (this->FeetBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->KneeBone).BoneName.ComparisonIndex = 0;
  (this->KneeBone).BoneName.Number = 0;
  puVar1 = &(this->KneeBone).field_0x8;
  (this->KneeBone).BoneIndex = -1;
  (this->KneeBone).bUseSkeletonIndex = 0;
  (this->KneeBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->ThighBone).BoneName.ComparisonIndex = 0;
  (this->ThighBone).BoneName.Number = 0;
  puVar1 = &(this->ThighBone).field_0x8;
  (this->ThighBone).BoneIndex = -1;
  (this->ThighBone).bUseSkeletonIndex = 0;
  (this->ThighBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->twist_elbow_bone).BoneName.ComparisonIndex = 0;
  (this->twist_elbow_bone).BoneName.Number = 0;
  puVar1 = &(this->twist_elbow_bone).field_0x8;
  (this->twist_elbow_bone).BoneIndex = -1;
  (this->twist_elbow_bone).bUseSkeletonIndex = 0;
  (this->twist_elbow_bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->twist_shoulder_bone).BoneName.ComparisonIndex = 0;
  (this->twist_shoulder_bone).BoneName.Number = 0;
  puVar1 = &(this->twist_shoulder_bone).field_0x8;
  (this->twist_shoulder_bone).BoneIndex = -1;
  (this->twist_shoulder_bone).bUseSkeletonIndex = 0;
  (this->twist_shoulder_bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ThighTransform).Rotation.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ThighTransform).Rotation.ZW.m128d_f64 = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ThighTransform).Translation.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ThighTransform).Translation.ZW.m128d_f64 = auVar13;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ThighTransform).Scale3D.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ThighTransform).Scale3D.ZW.m128d_f64 = auVar15;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Shoulder_Trans).Rotation.XY.m128d_f64 = auVar16;
  auVar17._8_4_ = SUB84((double)fVar3,0);
  auVar17._0_8_ = (double)fVar2;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Shoulder_Trans).Rotation.ZW.m128d_f64 = auVar17;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar18._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar18._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar18._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Shoulder_Trans).Translation.XY.m128d_f64 = auVar18;
  auVar19._8_4_ = SUB84((double)fVar3,0);
  auVar19._0_8_ = (double)fVar2;
  auVar19._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Shoulder_Trans).Translation.ZW.m128d_f64 = auVar19;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar20._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar20._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar20._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Shoulder_Trans).Scale3D.XY.m128d_f64 = auVar20;
  auVar21._8_4_ = SUB84((double)fVar3,0);
  auVar21._0_8_ = (double)fVar2;
  auVar21._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Shoulder_Trans).Scale3D.ZW.m128d_f64 = auVar21;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar22._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar22._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Trans).Rotation.XY.m128d_f64 = auVar22;
  auVar23._8_4_ = SUB84((double)fVar3,0);
  auVar23._0_8_ = (double)fVar2;
  auVar23._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Trans).Rotation.ZW.m128d_f64 = auVar23;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar24._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar24._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar24._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Trans).Translation.XY.m128d_f64 = auVar24;
  auVar25._8_4_ = SUB84((double)fVar3,0);
  auVar25._0_8_ = (double)fVar2;
  auVar25._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Trans).Translation.ZW.m128d_f64 = auVar25;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar26._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar26._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar26._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Trans).Scale3D.XY.m128d_f64 = auVar26;
  auVar27._8_4_ = SUB84((double)fVar3,0);
  auVar27._0_8_ = (double)fVar2;
  auVar27._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Trans).Scale3D.ZW.m128d_f64 = auVar27;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar28._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar28._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Hand_Trans).Rotation.XY.m128d_f64 = auVar28;
  auVar29._8_4_ = SUB84((double)fVar3,0);
  auVar29._0_8_ = (double)fVar2;
  auVar29._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Hand_Trans).Rotation.ZW.m128d_f64 = auVar29;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar30._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar30._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar30._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Hand_Trans).Translation.XY.m128d_f64 = auVar30;
  auVar31._8_4_ = SUB84((double)fVar3,0);
  auVar31._0_8_ = (double)fVar2;
  auVar31._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Hand_Trans).Translation.ZW.m128d_f64 = auVar31;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar32._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar32._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar32._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Hand_Trans).Scale3D.XY.m128d_f64 = auVar32;
  auVar33._8_4_ = SUB84((double)fVar3,0);
  auVar33._0_8_ = (double)fVar2;
  auVar33._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Hand_Trans).Scale3D.ZW.m128d_f64 = auVar33;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar34._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar34._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar34._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->transform_offset).Rotation.XY.m128d_f64 = auVar34;
  auVar35._8_4_ = SUB84((double)fVar3,0);
  auVar35._0_8_ = (double)fVar2;
  auVar35._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->transform_offset).Rotation.ZW.m128d_f64 = auVar35;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar36._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar36._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar36._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->transform_offset).Translation.XY.m128d_f64 = auVar36;
  auVar37._8_4_ = SUB84((double)fVar3,0);
  auVar37._0_8_ = (double)fVar2;
  auVar37._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->transform_offset).Translation.ZW.m128d_f64 = auVar37;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->transform_offset).Scale3D.XY.m128d_f64 = auVar38;
  auVar39._8_4_ = SUB84((double)fVar3,0);
  auVar39._0_8_ = (double)fVar2;
  auVar39._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->transform_offset).Scale3D.ZW.m128d_f64 = auVar39;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar40._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar40._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar40._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Common_Spine_Modified_Transform).Rotation.XY.m128d_f64 = auVar40;
  auVar41._8_4_ = SUB84((double)fVar3,0);
  auVar41._0_8_ = (double)fVar2;
  auVar41._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Common_Spine_Modified_Transform).Rotation.ZW.m128d_f64 = auVar41;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar42._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar42._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar42._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Common_Spine_Modified_Transform).Translation.XY.m128d_f64 = auVar42;
  auVar43._8_4_ = SUB84((double)fVar3,0);
  auVar43._0_8_ = (double)fVar2;
  auVar43._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Common_Spine_Modified_Transform).Translation.ZW.m128d_f64 = auVar43;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar44._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar44._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar44._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Common_Spine_Modified_Transform).Scale3D.XY.m128d_f64 = auVar44;
  auVar45._8_4_ = SUB84((double)fVar3,0);
  auVar45._0_8_ = (double)fVar2;
  auVar45._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Common_Spine_Modified_Transform).Scale3D.ZW.m128d_f64 = auVar45;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar46._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar46._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar46._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Extra_Hand_Offset).Rotation.XY.m128d_f64 = auVar46;
  auVar47._8_4_ = SUB84((double)fVar3,0);
  auVar47._0_8_ = (double)fVar2;
  auVar47._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Extra_Hand_Offset).Rotation.ZW.m128d_f64 = auVar47;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar48._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar48._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Extra_Hand_Offset).Translation.XY.m128d_f64 = auVar48;
  auVar49._8_4_ = SUB84((double)fVar3,0);
  auVar49._0_8_ = (double)fVar2;
  auVar49._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Extra_Hand_Offset).Translation.ZW.m128d_f64 = auVar49;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar50._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar50._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar50._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Extra_Hand_Offset).Scale3D.XY.m128d_f64 = auVar50;
  auVar51._8_4_ = SUB84((double)fVar3,0);
  auVar51._0_8_ = (double)fVar2;
  auVar51._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Extra_Hand_Offset).Scale3D.ZW.m128d_f64 = auVar51;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar52._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar52._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar52._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Transform_Default).Rotation.XY.m128d_f64 = auVar52;
  auVar53._8_4_ = SUB84((double)fVar3,0);
  auVar53._0_8_ = (double)fVar2;
  auVar53._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Transform_Default).Rotation.ZW.m128d_f64 = auVar53;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar54._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar54._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar54._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Transform_Default).Translation.XY.m128d_f64 = auVar54;
  auVar55._8_4_ = SUB84((double)fVar3,0);
  auVar55._0_8_ = (double)fVar2;
  auVar55._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Transform_Default).Translation.ZW.m128d_f64 = auVar55;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar56._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar56._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar56._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Transform_Default).Scale3D.XY.m128d_f64 = auVar56;
  auVar57._8_4_ = SUB84((double)fVar3,0);
  auVar57._0_8_ = (double)fVar2;
  auVar57._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Knee_Transform_Default).Scale3D.ZW.m128d_f64 = auVar57;
  (this->custom_arm_size).Use_Custom_Arm_Sizes = false;
  (this->custom_arm_size).custom_upperArm_length = 0.0;
  (this->custom_arm_size).custom_lowerArm_length = 0.0;
  this->Auto_Calculated_Poles = false;
  uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Y = (double)uVar58;
  uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Is_Frozen_Elbow = false;
  this->should_shoulder_twist_if_inward = false;
  this->clavicle_only_bend_if_limit = false;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Z = (double)uVar58;
  *&(this->Frozen_UpperArm_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_UpperArm_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_UpperArm_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_UpperArm_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_UpperArm_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_UpperArm_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Frozen_Elbow_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_Elbow_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_Elbow_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_Elbow_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_Elbow_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_Elbow_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// operator= @ 14d2b8ad0

DragonSpineOutput * __thiscall
DragonSpineOutput::operator=(DragonSpineOutput *this,DragonSpineOutput *param_1)

{
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  if (this != param_1) {
    DestructItems<DragonChainLink,int>
              ((DragonChainLink *)(this->chain_data).AllocatorInstance.Data,
               (this->chain_data).ArrayNum);
    pFVar5 = (this->chain_data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->chain_data).AllocatorInstance.Data = (param_1->chain_data).AllocatorInstance.Data;
    (param_1->chain_data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->chain_data).ArrayNum = (param_1->chain_data).ArrayNum;
    (this->chain_data).ArrayMax = (param_1->chain_data).ArrayMax;
    (param_1->chain_data).ArrayNum = 0;
    (param_1->chain_data).ArrayMax = 0;
  }
  pTVar1 = &param_1->BoneIndices;
  pTVar2 = &this->BoneIndices;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BoneIndices).ArrayNum = (param_1->BoneIndices).ArrayNum;
    (this->BoneIndices).ArrayMax = (param_1->BoneIndices).ArrayMax;
    (param_1->BoneIndices).ArrayNum = 0;
    (param_1->BoneIndices).ArrayMax = 0;
  }
  pTVar3 = &param_1->temp_transforms;
  pTVar4 = &this->temp_transforms;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->temp_transforms).ArrayNum = (param_1->temp_transforms).ArrayNum;
    (this->temp_transforms).ArrayMax = (param_1->temp_transforms).ArrayMax;
    (param_1->temp_transforms).ArrayNum = 0;
    (param_1->temp_transforms).ArrayMax = 0;
  }
  dVar6 = (param_1->SpineFirstEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->SpineFirstEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->SpineFirstEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->SpineFirstEffectorTransform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->SpineFirstEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->SpineFirstEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->SpineFirstEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->SpineFirstEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->SpineFirstEffectorTransform).Translation.XY.m128d_f64[1];
  (this->SpineFirstEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->SpineFirstEffectorTransform).Translation.XY.m128d_f64[0];
  (this->SpineFirstEffectorTransform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->SpineFirstEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->SpineFirstEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->SpineFirstEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->SpineFirstEffectorTransform).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->SpineFirstEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->SpineFirstEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->SpineFirstEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->SpineFirstEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->SpineFirstEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->SpineFirstEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->SpineFirstEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->SpineFirstEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->PelvicEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->PelvicEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->PelvicEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->PelvicEffectorTransform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->PelvicEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->PelvicEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->PelvicEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->PelvicEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->PelvicEffectorTransform).Translation.XY.m128d_f64[1];
  (this->PelvicEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->PelvicEffectorTransform).Translation.XY.m128d_f64[0];
  (this->PelvicEffectorTransform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->PelvicEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->PelvicEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->PelvicEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->PelvicEffectorTransform).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->PelvicEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->PelvicEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->PelvicEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->PelvicEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->PelvicEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->PelvicEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->PelvicEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->PelvicEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->RootDifference).field0_0x0._s_0.Y;
  (this->RootDifference).field0_0x0._s_0.X = (param_1->RootDifference).field0_0x0._s_0.X;
  (this->RootDifference).field0_0x0._s_0.Y = dVar6;
  (this->RootDifference).field0_0x0._s_0.Z = (param_1->RootDifference).field0_0x0._s_0.Z;
  this->is_moved = param_1->is_moved;
  this->NumChainLinks = param_1->NumChainLinks;
  return this;
}

// `scalar_deleting_destructor' @ 14d2b8e20

void * __thiscall
FAnimNode_ChineseDragonSolver::_scalar_deleting_destructor_
          (FAnimNode_ChineseDragonSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->path_record).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FChinaDragonChainLink,int>
            ((FChinaDragonChainLink *)(this->Chain).AllocatorInstance.Data,(this->Chain).ArrayNum);
  pFVar1 = (this->Chain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Custom_Bone_Input).Custom_Bone_Structure.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2b8ec0

void * __thiscall
FAnimNode_DragonAimSolver::_scalar_deleting_destructor_
          (FAnimNode_DragonAimSolver *this,uint param_1)

{
  ~FAnimNode_DragonAimSolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2b8f00

void * __thiscall
FAnimNode_DragonFabrikSolver::_scalar_deleting_destructor_
          (FAnimNode_DragonFabrikSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChainBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneLengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainBoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2b8f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FAnimNode_DragonFeetSolver::_scalar_deleting_destructor_
          (FAnimNode_DragonFeetSolver *this,uint param_1)

{
  ~FAnimNode_DragonFeetSolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x9c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2b8fd0

void * __thiscall
FAnimNode_DragonPhysicsSolver::_scalar_deleting_destructor_
          (FAnimNode_DragonPhysicsSolver *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->dragon_phys_component).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->character_bone_transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->character_bone_references).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d2b9060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FAnimNode_DragonSpineSolver::_scalar_deleting_destructor_
          (FAnimNode_DragonSpineSolver *this,uint param_1)

{
  ~FAnimNode_DragonSpineSolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xed0);
  }
  return this;
}

// ClampRotateVector @ 14d2c65c0

TVector<double> * __cdecl
ClampRotateVector(TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
                 TVector<double> *param_2,TVector<double> *param_3,float param_4,float param_5,
                 float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double local_res18;
  double local_res20;
  double local_d8 [25];
  
  fVar9 = __real_3f800000;
  dVar16 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  local_res18 = (param_1->field0_0x0)._s_0.Z;
  dVar12 = (param_2->field0_0x0)._s_0.Y;
  local_d8[0] = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar6 = dVar2 - local_d8[0];
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  dVar15 = dVar3 - dVar4;
  dVar11 = dVar5 - local_res18;
  auVar13._0_8_ = dVar11 * dVar11;
  auVar13._8_8_ = 0;
  dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  auVar8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  auVar8._0_8_ = dVar11;
  auVar8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar7 = auVar8._8_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar15 * dVar15 + dVar6 * dVar6 + auVar13._0_8_;
  auVar14 = sqrtpd(auVar13,auVar14);
  dVar15 = dVar12 * dVar12 + dVar1 * dVar1 + dVar16 * dVar16;
  if (dVar15 == __real_3ff0000000000000) {
    dVar11 = SUB168(*(undefined1 (*) [16])&param_2->field0_0x0,0);
    dVar7 = SUB168(*(undefined1 (*) [16])&param_2->field0_0x0,8);
    uVar17 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar15) {
      dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
      dVar11 = dVar1 * dVar15;
      dVar7 = dVar12 * dVar15;
      uVar17 = dVar16 * dVar15;
    }
  }
  local_d8[0] = local_d8[0] - dVar2;
  local_res18 = local_res18 - dVar5;
  dVar4 = dVar4 - dVar3;
  dVar16 = dVar4 * dVar4 + local_d8[0] * local_d8[0] + local_res18 * local_res18;
  if (dVar16 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar16) {
      dVar16 = __real_3ff0000000000000 / SQRT(dVar16);
      local_d8[0] = local_d8[0] * dVar16;
      local_res18 = local_res18 * dVar16;
      dVar4 = dVar4 * dVar16;
    }
    else {
      local_d8[0] = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_res18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar4 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    }
  }
  local_res20 = __real_bff0000000000000;
  dVar16 = dVar4 * dVar7 + local_d8[0] * dVar11 + local_res18 * (double)uVar17;
  if ((__real_bff0000000000000 <= dVar16) &&
     (local_res20 = dVar16, __real_3ff0000000000000 <= dVar16)) {
    local_res20 = __real_3ff0000000000000;
  }
  dVar12 = dVar4 * (double)uVar17 - local_res18 * dVar7;
  dVar16 = local_res18 * dVar11 - local_d8[0] * (double)uVar17;
  dVar1 = local_d8[0] * dVar7 - dVar4 * dVar11;
  fVar19 = (float)(dVar16 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
                   dVar12 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
                  dVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z);
  fVar10 = ((float)((dVar11 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                    (double)uVar17 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) * dVar16
                    + ((double)uVar17 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                      dVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) * dVar12 +
                   (dVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                   dVar11 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) * dVar1) +
           __real_3f800000) * __real_3f000000;
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar20 = (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (__real_3f800000 <= fVar20) {
    fVar20 = __real_3f800000;
  }
  fVar18 = ((float)((uint)param_5 & __xmm_7fffffff7fffffff7fffffff7fffffff) -
           (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) * fVar10 +
           (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar10 = (fVar19 + __real_3f800000) * __real_3f000000;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar18 = ((((float)((uint)param_7 & __xmm_7fffffff7fffffff7fffffff7fffffff) -
             (float)((uint)param_6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) * fVar10 +
            (float)((uint)param_6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) - fVar18) * fVar20 +
           fVar18;
  dVar16 = acos(local_res20);
  fVar10 = (float)(dVar16 * __real_404ca5dc1a63c1f8);
  if ((float)(dVar16 * __real_404ca5dc1a63c1f8) <= fVar18) {
    fVar10 = fVar18;
  }
  fVar19 = fVar18 / fVar10;
  if (fVar9 <= fVar18 / fVar10) {
    fVar19 = fVar9;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  dVar16 = (double)fVar19;
  dVar7 = (dVar4 - dVar7) * dVar16 + dVar7;
  uVar17 = (local_res18 - (double)uVar17) * dVar16 + (double)uVar17;
  dVar11 = (local_d8[0] - dVar11) * dVar16 + dVar11;
  dVar16 = dVar7 * dVar7 + dVar11 * dVar11 + (double)uVar17 * (double)uVar17;
  if (dVar16 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar16) {
      dVar16 = __real_3ff0000000000000 / SQRT(dVar16);
      dVar7 = dVar7 * dVar16;
      uVar17 = (double)uVar17 * dVar16;
      dVar11 = dVar11 * dVar16;
    }
    else {
      dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      dVar7 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  dVar12 = (double)(float)auVar14._0_8_;
  dVar16 = (param_3->field0_0x0)._s_0.X;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7 * dVar12 + (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar11 * dVar12 + dVar16;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar17 * dVar12 + dVar1;
  return __return_storage_ptr__;
}

// ClampRotateVector @ 14d2c6b30

TVector<double> * __cdecl
ClampRotateVector(TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
                 TVector<double> *param_2,TVector<double> *param_3,float param_4,float param_5,
                 float param_6,float param_7,bool param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar22 = (param_3->field0_0x0)._s_0.X;
  dVar23 = (param_3->field0_0x0)._s_0.Y;
  dVar17 = (param_3->field0_0x0)._s_0.Z;
  dVar16 = (param_1->field0_0x0)._s_0.Y;
  dVar21 = dVar23 - dVar16;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar20 = dVar22 - dVar1;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar15 = dVar17 - dVar2;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  auVar18._0_8_ = dVar15 * dVar15;
  auVar18._8_8_ = 0;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar21 * dVar21 + dVar20 * dVar20 + auVar18._0_8_;
  auVar19 = sqrtpd(auVar18,auVar19);
  dVar21 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
  if (dVar21 == __real_3ff0000000000000) {
    uVar6 = (param_2->field0_0x0)._s_0.X;
    uVar7 = (param_2->field0_0x0)._s_0.Y;
    uVar8 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar21) {
      dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
      uVar6 = dVar3 * dVar21;
      uVar7 = dVar4 * dVar21;
      uVar8 = dVar5 * dVar21;
    }
  }
  dVar1 = dVar1 - dVar22;
  dVar16 = dVar16 - dVar23;
  dVar2 = dVar2 - dVar17;
  dVar22 = dVar16 * dVar16 + dVar1 * dVar1 + dVar2 * dVar2;
  uVar9 = dVar1;
  uVar10 = dVar16;
  uVar11 = dVar2;
  if ((dVar22 != __real_3ff0000000000000) &&
     (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar22)) {
    dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
    uVar9 = dVar1 * dVar22;
    uVar10 = dVar16 * dVar22;
    uVar11 = dVar2 * dVar22;
  }
  dVar23 = (double)uVar10 * (double)uVar7 + (double)uVar9 * (double)uVar6 +
           (double)uVar11 * (double)uVar8;
  dVar22 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar23) && (dVar22 = dVar23, __real_3ff0000000000000 <= dVar23)) {
    dVar22 = __real_3ff0000000000000;
  }
  dVar16 = acos(dVar22);
  dVar17 = (double)uVar10 * (double)uVar8 - (double)uVar11 * (double)uVar7;
  dVar23 = (double)uVar11 * (double)uVar6 - (double)uVar9 * (double)uVar8;
  dVar22 = (double)uVar9 * (double)uVar7 - (double)uVar10 * (double)uVar6;
  fVar25 = (float)(dVar23 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
                   dVar17 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
                  dVar22 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z);
  fVar14 = ((float)(((double)uVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                    (double)uVar8 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) * dVar23
                    + ((double)uVar8 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                      (double)uVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) *
                      dVar17 +
                   ((double)uVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                   (double)uVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) * dVar22)
           + __real_3f800000) * __real_3f000000;
  if (!param_8) {
    if (__real_42aa0000 <= param_5) {
      param_5 = __real_42aa0000;
    }
    if (__real_42aa0000 <= param_4) {
      param_4 = __real_42aa0000;
    }
    if (param_5 <= __real_c2aa0000) {
      param_5 = __real_c2aa0000;
    }
    if (param_4 <= __real_c2aa0000) {
      param_4 = __real_c2aa0000;
    }
  }
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar26 = (float)((uint)fVar25 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (__real_3f800000 <= fVar26) {
    fVar26 = __real_3f800000;
  }
  fVar24 = ((float)((uint)param_5 & __xmm_7fffffff7fffffff7fffffff7fffffff) -
           (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) * fVar14 +
           (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar14 = (fVar25 + __real_3f800000) * __real_3f000000;
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar24 = ((((float)((uint)param_7 & __xmm_7fffffff7fffffff7fffffff7fffffff) -
             (float)((uint)param_6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) * fVar14 +
            (float)((uint)param_6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) - fVar24) * fVar26 +
           fVar24;
  fVar14 = fVar24;
  if (fVar24 <= (float)(dVar16 * __real_404ca5dc1a63c1f8)) {
    fVar14 = (float)(dVar16 * __real_404ca5dc1a63c1f8);
  }
  fVar25 = fVar24 / fVar14;
  if (__real_3f800000 <= fVar24 / fVar14) {
    fVar25 = __real_3f800000;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  dVar23 = (double)fVar25;
  dVar22 = ((double)uVar10 - (double)uVar7) * dVar23 + (double)uVar7;
  dVar17 = ((double)uVar11 - (double)uVar8) * dVar23 + (double)uVar8;
  dVar23 = ((double)uVar9 - (double)uVar6) * dVar23 + (double)uVar6;
  dVar16 = dVar22 * dVar22 + dVar23 * dVar23 + dVar17 * dVar17;
  uVar6 = dVar22;
  uVar7 = dVar17;
  uVar8 = dVar23;
  if ((dVar16 != __real_3ff0000000000000) &&
     (uVar6 = uVar13, uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar8 = uVar12, __real_3e45798ee0000000 <= dVar16)) {
    dVar16 = __real_3ff0000000000000 / SQRT(dVar16);
    uVar6 = dVar22 * dVar16;
    uVar7 = dVar17 * dVar16;
    uVar8 = dVar23 * dVar16;
  }
  dVar17 = (double)(float)auVar19._0_8_;
  dVar22 = (param_3->field0_0x0)._s_0.Y;
  dVar23 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)uVar8 * dVar17 + (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6 * dVar17 + dVar22;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar7 * dVar17 + dVar23;
  return __return_storage_ptr__;
}

