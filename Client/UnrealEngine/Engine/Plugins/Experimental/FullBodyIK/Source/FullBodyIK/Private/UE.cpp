// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 33

// Construct<FRigUnit_FullbodyIK> @ 14df6bcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_FullbodyIK>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  __m128 _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_FullbodyIK__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x1e;
  *(undefined1 *)((longlong)param_1 + 0x66) = 1;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar4;
  _Var10 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar5;
  uVar12 = _UNK_151444f58;
  uVar11 = ___xmm_0000000000000000403e000000000000;
  dVar9 = (double)_Var10.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = (double)_Var10.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xc0) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd0) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar11;
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar12;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  FRigUnit_FullbodyIK_WorkData::FRigUnit_FullbodyIK_WorkData
            ((FRigUnit_FullbodyIK_WorkData *)((longlong)param_1 + 0xf0));
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return;
}

// ConstructForTests<FRigUnit_FullbodyIK> @ 14df6bd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_FullbodyIK>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  __m128 _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_FullbodyIK__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x1e;
  *(undefined1 *)((longlong)param_1 + 0x66) = 1;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar4;
  _Var10 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar5;
  uVar12 = _UNK_151444f58;
  uVar11 = ___xmm_0000000000000000403e000000000000;
  dVar9 = (double)_Var10.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = (double)_Var10.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xc0) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd0) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar11;
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar12;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  FRigUnit_FullbodyIK_WorkData::FRigUnit_FullbodyIK_WorkData
            ((FRigUnit_FullbodyIK_WorkData *)((longlong)param_1 + 0xf0));
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return;
}

// Destruct<FRigUnit_FullbodyIK> @ 14df6bd90

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_FullbodyIK>(void *param_1)

{
  FRigUnit_FullbodyIK_WorkData::~FRigUnit_FullbodyIK_WorkData
            ((FRigUnit_FullbodyIK_WorkData *)((longlong)param_1 + 0xf0));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_FullbodyIK> @ 14df6be60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_FullbodyIK>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FFBIKEndEffector *pFVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar4 = (FFBIKEndEffector *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FFBIKEndEffector,FFBIKEndEffector,int>(pFVar1->Data,pFVar4,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x30);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x30)) {
      iVar3 = *(int *)((longlong)param_2 + 0x38);
      piVar2 = (int *)((longlong)param_1 + 0x3c);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x30))->Data;
      *(int *)((longlong)param_1 + 0x38) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0xa0);
        }
      }
    }
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
    *(undefined2 *)((longlong)param_1 + 100) = *(undefined2 *)((longlong)param_2 + 100);
    *(undefined1 *)((longlong)param_1 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x66);
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x78) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x88) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x98) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0xa8);
    *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
    *(undefined8 *)((longlong)param_1 + 0xa8) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0xb8);
    *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0xb8) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 200);
    *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
    *(undefined8 *)((longlong)param_1 + 200) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0xd8);
    *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
    *(undefined8 *)((longlong)param_1 + 0xd8) = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_2 + 0xe8);
    *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0xe0);
    *(undefined8 *)((longlong)param_1 + 0xe8) = uVar5;
    FRigUnit_FullbodyIK_WorkData::operator=
              ((FRigUnit_FullbodyIK_WorkData *)((longlong)param_1 + 0xf0),
               (FRigUnit_FullbodyIK_WorkData *)((longlong)param_2 + 0xf0));
    param_1 = (void *)((longlong)param_1 + 0x2a0);
    param_2 = (void *)((longlong)param_2 + 0x2a0);
  }
  return true;
}

// Construct<FRigUnit_FullbodyIK_WorkData> @ 14df6c080

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_FullbodyIK_WorkData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  FJacobianSolverBase::FJacobianSolverBase((FJacobianSolverBase *)((longlong)param_1 + 0x120));
  *(undefined ***)((longlong)param_1 + 0x120) = &___7FJacobianSolver_FullbodyIK__6B_;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  return;
}

// ConstructForTests<FRigUnit_FullbodyIK_WorkData> @ 14df6c090

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_FullbodyIK_WorkData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  FJacobianSolverBase::FJacobianSolverBase((FJacobianSolverBase *)((longlong)param_1 + 0x120));
  *(undefined ***)((longlong)param_1 + 0x120) = &___7FJacobianSolver_FullbodyIK__6B_;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  return;
}

// Destruct<FRigUnit_FullbodyIK_WorkData> @ 14df6c0a0

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_FullbodyIK_WorkData>(void *param_1)

{
  DestructItems<FJacobianDebugData,int>
            (*(FJacobianDebugData **)((longlong)param_1 + 0x1a0),*(int *)((longlong)param_1 + 0x1a8)
            );
  if (*(void **)((longlong)param_1 + 0x1a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a0));
  }
  FJacobianSolverBase::~FJacobianSolverBase((FJacobianSolverBase *)((longlong)param_1 + 0x120));
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xc0));
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x70));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  DestructItems<FFBIKLinkData,int>(*(FFBIKLinkData **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FRigUnit_FullbodyIK_WorkData> @ 14df6c0b0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_FullbodyIK_WorkData>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  int iVar3;
  FScriptContainerElement *_Src;
  TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint> *pTVar4;
  FJacobianDebugData *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    if ((TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0x10) !=
        (TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0x10)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))
                  ->ArrayNum,
                 &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))
                  ->ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40))
                  ->ArrayNum,
                 ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50))->
                 ArrayNum);
      TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0x10),
                  (TSparseArray<TSparseSetElement<TTuple<int,JacobianIK::FFBIKEffectorTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0x10));
    }
    pTVar1 = (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60);
    if (pTVar1 != (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x60)) {
      iVar3 = ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x60))->
              ArrayNum;
      piVar2 = &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60))->
                ArrayMax;
      _Src = (((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x60))->
             AllocatorInstance).Data;
      ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60))->ArrayNum =
           iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
        }
      }
    }
    this = (TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)((longlong)param_1 + 0x70);
    if (this != (TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)((longlong)param_2 + 0x70)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0))
                  ->ArrayNum,
                 &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb0))
                  ->ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa0))
                  ->ArrayNum,
                 ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xb0))->
                 ArrayNum);
      iVar3 = ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x70))->
              ArrayNum;
      TSparseArray<TSparseSetElement<TTuple<int,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar3);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar3,(ForAnyElementType *)this,
                 &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
                  ->ArrayNum,
                 &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
                  ->ArrayMax);
      *(undefined4 *)
       &(((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0))->
        AllocatorInstance).Data =
           *(undefined4 *)
            &(((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa0))->
             AllocatorInstance).Data;
      *(undefined4 *)
       ((longlong)
        &(((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0))->
         AllocatorInstance).Data + 4) =
           *(undefined4 *)
            ((longlong)
             &(((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa0))->
              AllocatorInstance).Data + 4);
      if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x80) !=
          (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x80)) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x80),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x80));
      }
      if (iVar3 != 0) {
        memcpy(*(void **)this,*(void **)((longlong)param_2 + 0x70),(longlong)iVar3 * 0x18);
      }
    }
    TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0xc0),
                (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0xc0));
    pTVar1 = (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x110);
    if (pTVar1 != (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x110))
    {
      iVar3 = ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x110))->
              ArrayNum;
      piVar2 = &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x110))->
                ArrayMax;
      pTVar4 = (TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint> *)
               (((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x110))->
               AllocatorInstance).Data;
      ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x110))->ArrayNum =
           iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,0x10,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        ConstructItems<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,int>
                  ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
      }
    }
    FJacobianSolverBase::operator=
              ((FJacobianSolverBase *)((longlong)param_1 + 0x120),
               (FJacobianSolverBase *)((longlong)param_2 + 0x120));
    pTVar1 = (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x1a0);
    if (pTVar1 != (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x1a0))
    {
      DestructItems<FJacobianDebugData,int>
                ((FJacobianDebugData *)(pTVar1->AllocatorInstance).Data,
                 ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x1a0))
                 ->ArrayNum);
      iVar3 = ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x1a0))->
              ArrayNum;
      piVar2 = &((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x1a0))->
                ArrayMax;
      pFVar5 = (FJacobianDebugData *)
               (((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x1a0))->
               AllocatorInstance).Data;
      ((TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x1a0))->ArrayNum =
           iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        ConstructItems<FJacobianDebugData,FJacobianDebugData,int>
                  ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
      }
    }
    param_1 = (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x1b0);
    param_2 = (TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x1b0);
  }
  return true;
}

// Construct<FFBIKEndEffector> @ 14df6c3d0

void __cdecl UE::CoreUObject::Private::Construct<FFBIKEndEffector>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1000;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x48) = dVar2;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 1000;
  return;
}

// ConstructForTests<FFBIKEndEffector> @ 14df6c440

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFBIKEndEffector>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1000;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x48) = dVar2;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 1000;
  return;
}

// Destruct<FFBIKEndEffector> @ 14df6c4b0

void __cdecl UE::CoreUObject::Private::Destruct<FFBIKEndEffector>(void *param_1)

{
  return;
}

// Copy<FFBIKEndEffector> @ 14df6c4c0

bool __cdecl
UE::CoreUObject::Private::Copy<FFBIKEndEffector>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  puVar3 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    uVar1 = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    puVar2[2] = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)(puVar2 + 5) =
         *(undefined4 *)((longlong)puVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)puVar2 + 0x2c) =
         *(undefined4 *)((longlong)puVar2 + (longlong)param_2 + (0x2c - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    puVar2[6] = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    puVar2[7] = uVar1;
    uVar1 = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    puVar2[8] = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    puVar2[9] = uVar1;
    *(undefined4 *)(puVar2 + 10) =
         *(undefined4 *)((longlong)puVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined4 *)((longlong)puVar2 + 0x54) =
         *(undefined4 *)((longlong)puVar2 + (longlong)param_2 + (0x54 - (longlong)param_1));
    *(undefined4 *)(puVar2 + 0xb) =
         *(undefined4 *)((longlong)puVar2 + (longlong)param_2 + (0x58 - (longlong)param_1));
    puVar2 = puVar2 + 0xc;
    puVar3 = puVar3 + 0xc;
  }
  return true;
}

// Construct<FFBIKDebugOption> @ 14df6c570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FFBIKDebugOption>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  __m128 _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar4;
  _Var10 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar5;
  uVar12 = _UNK_151444f58;
  uVar11 = ___xmm_0000000000000000403e000000000000;
  dVar9 = (double)_Var10.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = (double)_Var10.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar11;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar12;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FFBIKDebugOption> @ 14df6c5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFBIKDebugOption>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  __m128 _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar4;
  _Var10 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar5;
  uVar12 = _UNK_151444f58;
  uVar11 = ___xmm_0000000000000000403e000000000000;
  dVar9 = (double)_Var10.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = (double)_Var10.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar11;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar12;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FFBIKDebugOption> @ 14df6c670

void __cdecl UE::CoreUObject::Private::Destruct<FFBIKDebugOption>(void *param_1)

{
  return;
}

// Copy<FFBIKDebugOption> @ 14df6c680

bool __cdecl
UE::CoreUObject::Private::Copy<FFBIKDebugOption>(void *param_1,void *param_2,int param_3)

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

// Construct<FMotionProcessInput> @ 14df6cb80

void __cdecl UE::CoreUObject::Private::Construct<FMotionProcessInput>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ConstructForTests<FMotionProcessInput> @ 14df6cb90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionProcessInput>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FMotionProcessInput> @ 14df6cba0

void __cdecl UE::CoreUObject::Private::Destruct<FMotionProcessInput>(void *param_1)

{
  return;
}

// Copy<FMotionProcessInput> @ 14df6cbb0

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionProcessInput>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSolverInput> @ 14df6cbe0

void __cdecl UE::CoreUObject::Private::Construct<FSolverInput>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x23) = 0;
  *(undefined4 *)param_1 = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x1e;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FSolverInput> @ 14df6cc30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSolverInput>(void *param_1)

{
  *(undefined4 *)param_1 = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x1e;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FSolverInput> @ 14df6cc80

void __cdecl UE::CoreUObject::Private::Destruct<FSolverInput>(void *param_1)

{
  return;
}

// Copy<FSolverInput> @ 14df6cc90

bool __cdecl UE::CoreUObject::Private::Copy<FSolverInput>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFBIKConstraintOption> @ 14df6ccd0

void __cdecl UE::CoreUObject::Private::Construct<FFBIKConstraintOption>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x68) = 0;
  uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
  *(double *)((longlong)param_1 + 0x80) = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x90) = dVar2;
  *(double *)((longlong)param_1 + 0x98) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  return;
}

// ConstructForTests<FFBIKConstraintOption> @ 14df6cce0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFBIKConstraintOption>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x68) = 0;
  uVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
  *(double *)((longlong)param_1 + 0x80) = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x90) = dVar2;
  *(double *)((longlong)param_1 + 0x98) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  return;
}

// Destruct<FFBIKConstraintOption> @ 14df6ccf0

void __cdecl UE::CoreUObject::Private::Destruct<FFBIKConstraintOption>(void *param_1)

{
  return;
}

// Copy<FFBIKConstraintOption> @ 14df6cd00

bool __cdecl
UE::CoreUObject::Private::Copy<FFBIKConstraintOption>(void *param_1,void *param_2,int param_3)

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

// Construct<FFBIKBoneLimit> @ 14df6cea0

void __cdecl UE::CoreUObject::Private::Construct<FFBIKBoneLimit>(void *param_1)

{
  *(undefined2 *)param_1 = 0x202;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 2;
  return;
}

// ConstructForTests<FFBIKBoneLimit> @ 14df6cec0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFBIKBoneLimit>(void *param_1)

{
  *(undefined2 *)param_1 = 0x202;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 2;
  return;
}

// Destruct<FFBIKBoneLimit> @ 14df6cee0

void __cdecl UE::CoreUObject::Private::Destruct<FFBIKBoneLimit>(void *param_1)

{
  return;
}

// Copy<FFBIKBoneLimit> @ 14df6cef0

bool __cdecl UE::CoreUObject::Private::Copy<FFBIKBoneLimit>(void *param_1,void *param_2,int param_3)

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

// DereferenceIfNecessary<FJacobianSolverBase,FJacobianSolverBase_*_&> @ 14df6ef40

FJacobianSolverBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<FJacobianSolverBase,FJacobianSolverBase_*_&>
          (FJacobianSolverBase **param_1)

{
  return *param_1;
}

