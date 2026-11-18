// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkControlRig
// Functions: 28

// Construct<FRigUnit_LiveLinkEvaluateBasicValue> @ 14d3605c0

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_LiveLinkEvaluateBasicValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkEvaluateBasicValue__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FRigUnit_LiveLinkEvaluateBasicValue> @ 14d3605e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_LiveLinkEvaluateBasicValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkEvaluateBasicValue__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FRigUnit_LiveLinkEvaluateBasicValue> @ 14d360600

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_LiveLinkEvaluateBasicValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_LiveLinkEvaluateBasicValue> @ 14d360620

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_LiveLinkEvaluateBasicValue>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FRigUnit_LiveLinkEvaluteFrameTransform> @ 14d360fb0

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_LiveLinkEvaluteFrameTransform>(void *param_1)

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
  
  memset((void *)((longlong)param_1 + 0x11),0,0xdf);
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkEvaluteFrameTransform__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xc0) = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd0) = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar14;
  return;
}

// ConstructForTests<FRigUnit_LiveLinkEvaluteFrameTransform> @ 14d3610a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_LiveLinkEvaluteFrameTransform>(void *param_1)

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
  
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkEvaluteFrameTransform__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xc0) = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd0) = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar14;
  return;
}

// Destruct<FRigUnit_LiveLinkEvaluteFrameTransform> @ 14d361170

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_LiveLinkEvaluteFrameTransform>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_LiveLinkEvaluteFrameTransform> @ 14d361190

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_LiveLinkEvaluteFrameTransform>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xa8);
    *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
    *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb8);
    *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 200);
    *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
    *(undefined8 *)((longlong)param_1 + 200) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xd8);
    *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
    *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xe8);
    *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0xe0);
    *(undefined8 *)((longlong)param_1 + 0xe8) = uVar1;
    param_1 = (void *)((longlong)param_1 + 0xf0);
    param_2 = (void *)((longlong)param_2 + 0xf0);
  }
  return true;
}

// Construct<FRigUnit_LiveLinkGetParameterValueByName> @ 14d361350

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_LiveLinkGetParameterValueByName>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkGetParameterValueByName__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FSubjectFrameHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigUnit_LiveLinkGetParameterValueByName> @ 14d361380

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_LiveLinkGetParameterValueByName>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkGetParameterValueByName__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FSubjectFrameHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FRigUnit_LiveLinkGetParameterValueByName> @ 14d3613b0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_LiveLinkGetParameterValueByName>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_LiveLinkGetParameterValueByName> @ 14d3613e0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_LiveLinkGetParameterValueByName>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined8 *)((longlong)pvVar4 + 0x20) = *(undefined8 *)((longlong)pvVar5 + 0x20);
    *(undefined4 *)((longlong)pvVar4 + 0x28) = *(undefined4 *)((longlong)pvVar5 + 0x28);
    pvVar4 = (void *)((longlong)pvVar4 + 0x30);
    pvVar5 = (void *)((longlong)pvVar5 + 0x30);
  }
  return true;
}

// Construct<FRigUnit_LiveLinkGetTransformByName> @ 14d3614d0

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_LiveLinkGetTransformByName>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
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
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined4 *)((longlong)param_1 + 0x89) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8f) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkGetTransformByName__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FSubjectFrameHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar8;
  return;
}

// ConstructForTests<FRigUnit_LiveLinkGetTransformByName> @ 14d361580

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_LiveLinkGetTransformByName>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkGetTransformByName__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FSubjectFrameHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
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
  return;
}

// Destruct<FRigUnit_LiveLinkGetTransformByName> @ 14d361600

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_LiveLinkGetTransformByName>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_LiveLinkGetTransformByName> @ 14d361630

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_LiveLinkGetTransformByName>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined8 *)((longlong)pvVar4 + 0x20) = *(undefined8 *)((longlong)pvVar5 + 0x20);
    *(undefined1 *)((longlong)pvVar4 + 0x28) = *(undefined1 *)((longlong)pvVar5 + 0x28);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x38);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = *(undefined8 *)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x48);
    *(undefined8 *)((longlong)pvVar4 + 0x40) = *(undefined8 *)((longlong)pvVar5 + 0x40);
    *(undefined8 *)((longlong)pvVar4 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x58);
    *(undefined8 *)((longlong)pvVar4 + 0x50) = *(undefined8 *)((longlong)pvVar5 + 0x50);
    *(undefined8 *)((longlong)pvVar4 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x68);
    *(undefined8 *)((longlong)pvVar4 + 0x60) = *(undefined8 *)((longlong)pvVar5 + 0x60);
    *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x78);
    *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)((longlong)pvVar5 + 0x70);
    *(undefined8 *)((longlong)pvVar4 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x88);
    *(undefined8 *)((longlong)pvVar4 + 0x80) = *(undefined8 *)((longlong)pvVar5 + 0x80);
    *(undefined8 *)((longlong)pvVar4 + 0x88) = uVar2;
    pvVar4 = (void *)((longlong)pvVar4 + 0x90);
    pvVar5 = (void *)((longlong)pvVar5 + 0x90);
  }
  return true;
}

// Construct<FRigUnit_LiveLinkEvaluteFrameAnimation> @ 14d361960

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_LiveLinkEvaluteFrameAnimation>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
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
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xad) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaf) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkEvaluteFrameAnimation__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar8;
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FSubjectFrameHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// ConstructForTests<FRigUnit_LiveLinkEvaluteFrameAnimation> @ 14d361a40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_LiveLinkEvaluteFrameAnimation>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkEvaluteFrameAnimation__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar8;
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FSubjectFrameHandle__6B_;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// Destruct<FRigUnit_LiveLinkEvaluteFrameAnimation> @ 14d361ad0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_LiveLinkEvaluteFrameAnimation>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa0));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_LiveLinkEvaluteFrameAnimation> @ 14d361b00

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_LiveLinkEvaluteFrameAnimation>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar4 + 8) = *(undefined8 *)((longlong)pvVar5 + 8);
    *(undefined1 *)((longlong)pvVar4 + 0x10) = *(undefined1 *)((longlong)pvVar5 + 0x10);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x1c);
    *(undefined8 *)((longlong)pvVar4 + 0x14) = *(undefined8 *)((longlong)pvVar5 + 0x14);
    *(undefined8 *)((longlong)pvVar4 + 0x1c) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x38);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = *(undefined8 *)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x48);
    *(undefined8 *)((longlong)pvVar4 + 0x40) = *(undefined8 *)((longlong)pvVar5 + 0x40);
    *(undefined8 *)((longlong)pvVar4 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x58);
    *(undefined8 *)((longlong)pvVar4 + 0x50) = *(undefined8 *)((longlong)pvVar5 + 0x50);
    *(undefined8 *)((longlong)pvVar4 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x68);
    *(undefined8 *)((longlong)pvVar4 + 0x60) = *(undefined8 *)((longlong)pvVar5 + 0x60);
    *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x78);
    *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)((longlong)pvVar5 + 0x70);
    *(undefined8 *)((longlong)pvVar4 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x88);
    *(undefined8 *)((longlong)pvVar4 + 0x80) = *(undefined8 *)((longlong)pvVar5 + 0x80);
    *(undefined8 *)((longlong)pvVar4 + 0x88) = uVar2;
    lVar1 = *(longlong *)((longlong)pvVar4 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x98 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0xa0);
    *(undefined8 *)((longlong)pvVar4 + 0x98) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0xa0) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0xb0);
    pvVar5 = (void *)((longlong)pvVar5 + 0xb0);
  }
  return true;
}

// Construct<FRigUnit_LiveLinkBase> @ 14d361ca0

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_LiveLinkBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkBase__6B_;
  return;
}

// ConstructForTests<FRigUnit_LiveLinkBase> @ 14d361cc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_LiveLinkBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkBase__6B_;
  return;
}

// Destruct<FRigUnit_LiveLinkBase> @ 14d361ce0

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_LiveLinkBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_LiveLinkBase> @ 14d361d00

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_LiveLinkBase>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FRigUnit_LiveLinkEvaluateInputDeviceValue> @ 14d361d50

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_LiveLinkEvaluateInputDeviceValue>(void *param_1)

{
  memset(param_1,0,0x130);
  FRigUnit_LiveLinkEvaluateInputDeviceValue::FRigUnit_LiveLinkEvaluateInputDeviceValue(param_1);
  return;
}

// ConstructForTests<FRigUnit_LiveLinkEvaluateInputDeviceValue> @ 14d361d80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_LiveLinkEvaluateInputDeviceValue>
          (void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_LiveLinkEvaluateInputDeviceValue__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  return;
}

// Destruct<FRigUnit_LiveLinkEvaluateInputDeviceValue> @ 14d361d90

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_LiveLinkEvaluateInputDeviceValue>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_LiveLinkEvaluateInputDeviceValue> @ 14d361df0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_LiveLinkEvaluateInputDeviceValue>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    FLiveLinkGamepadInputDeviceFrameData::operator=
              ((FLiveLinkGamepadInputDeviceFrameData *)((longlong)pvVar1 + 0x10),
               (FLiveLinkGamepadInputDeviceFrameData *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x130);
  }
  return true;
}

