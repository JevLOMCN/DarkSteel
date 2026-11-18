// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 14

// Construct<FAppleARKitLightEstimate> @ 14cfcb270

void __cdecl UE::CoreUObject::Private::Construct<FAppleARKitLightEstimate>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FAppleARKitLightEstimate> @ 14cfcb280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAppleARKitLightEstimate>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FAppleARKitLightEstimate> @ 14cfcb290

void __cdecl UE::CoreUObject::Private::Destruct<FAppleARKitLightEstimate>(void *param_1)

{
  return;
}

// Copy<FAppleARKitLightEstimate> @ 14cfcb2a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAppleARKitLightEstimate>(void *param_1,void *param_2,int param_3)

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

// Construct<FAppleARKitFrame> @ 14cfcb4d0

void __cdecl UE::CoreUObject::Private::Construct<FAppleARKitFrame>(void *param_1)

{
  memset(param_1,0,0x160);
  FAppleARKitFrame::FAppleARKitFrame(param_1);
  return;
}

// ConstructForTests<FAppleARKitFrame> @ 14cfcb500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAppleARKitFrame>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined8 *)param_1 = 0;
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  return;
}

// Destruct<FAppleARKitFrame> @ 14cfcb510

void __cdecl UE::CoreUObject::Private::Destruct<FAppleARKitFrame>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  if (*(void **)((longlong)param_1 + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x128));
  }
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
    return;
  }
  return;
}

// Copy<FAppleARKitFrame> @ 14cfcb570

bool __cdecl
UE::CoreUObject::Private::Copy<FAppleARKitFrame>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if (puVar1 != puVar3) {
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar3[2] = puVar1[2];
        uVar2 = puVar1[5];
        puVar3[4] = puVar1[4];
        puVar3[5] = uVar2;
        uVar2 = puVar1[7];
        puVar3[6] = puVar1[6];
        puVar3[7] = uVar2;
        uVar2 = puVar1[9];
        puVar3[8] = puVar1[8];
        puVar3[9] = uVar2;
        uVar2 = puVar1[0xb];
        puVar3[10] = puVar1[10];
        puVar3[0xb] = uVar2;
        uVar2 = puVar1[0xd];
        puVar3[0xc] = puVar1[0xc];
        puVar3[0xd] = uVar2;
        uVar2 = puVar1[0xf];
        puVar3[0xe] = puVar1[0xe];
        puVar3[0xf] = uVar2;
        uVar2 = puVar1[0x11];
        puVar3[0x10] = puVar1[0x10];
        puVar3[0x11] = uVar2;
        uVar2 = puVar1[0x13];
        puVar3[0x12] = puVar1[0x12];
        puVar3[0x13] = uVar2;
        uVar2 = puVar1[0x15];
        puVar3[0x14] = puVar1[0x14];
        puVar3[0x15] = uVar2;
        uVar2 = puVar1[0x17];
        puVar3[0x16] = puVar1[0x16];
        puVar3[0x17] = uVar2;
        uVar2 = puVar1[0x19];
        puVar3[0x18] = puVar1[0x18];
        puVar3[0x19] = uVar2;
        uVar2 = puVar1[0x1b];
        puVar3[0x1a] = puVar1[0x1a];
        puVar3[0x1b] = uVar2;
        uVar2 = puVar1[0x1d];
        puVar3[0x1c] = puVar1[0x1c];
        puVar3[0x1d] = uVar2;
        uVar2 = puVar1[0x1f];
        puVar3[0x1e] = puVar1[0x1e];
        puVar3[0x1f] = uVar2;
        puVar3[0x20] = puVar1[0x20];
        *(undefined4 *)(puVar3 + 0x21) = *(undefined4 *)(puVar1 + 0x21);
        *(undefined1 *)((longlong)puVar3 + 0x10c) = *(undefined1 *)((longlong)puVar1 + 0x10c);
        FARPose2D::operator=((FARPose2D *)(puVar3 + 0x22),(FARPose2D *)(puVar1 + 0x22));
      }
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x2c;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAppleARKitCamera> @ 14cfcb700

void __cdecl UE::CoreUObject::Private::Construct<FAppleARKitCamera>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined2 *)param_1 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x18) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x20) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x28) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
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

// ConstructForTests<FAppleARKitCamera> @ 14cfcb7c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAppleARKitCamera>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined2 *)param_1 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x18) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x20) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x28) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar3;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
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

// Destruct<FAppleARKitCamera> @ 14cfcb880

void __cdecl UE::CoreUObject::Private::Destruct<FAppleARKitCamera>(void *param_1)

{
  return;
}

// Copy<FAppleARKitCamera> @ 14cfcb890

bool __cdecl
UE::CoreUObject::Private::Copy<FAppleARKitCamera>(void *param_1,void *param_2,int param_3)

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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  
  if (param_3 != 0) {
    puVar29 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar29);
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
      uVar21 = puVar1[0x14];
      uVar22 = puVar1[0x15];
      uVar23 = puVar1[0x16];
      uVar24 = puVar1[0x17];
      uVar25 = puVar1[0x18];
      uVar26 = puVar1[0x19];
      uVar27 = puVar1[0x1a];
      uVar28 = puVar1[0x1b];
      *puVar29 = *puVar1;
      puVar29[1] = uVar2;
      puVar29[2] = uVar3;
      puVar29[3] = uVar4;
      puVar29[4] = uVar5;
      puVar29[5] = uVar6;
      puVar29[6] = uVar7;
      puVar29[7] = uVar8;
      puVar29[8] = uVar9;
      puVar29[9] = uVar10;
      puVar29[10] = uVar11;
      puVar29[0xb] = uVar12;
      puVar29[0xc] = uVar13;
      puVar29[0xd] = uVar14;
      puVar29[0xe] = uVar15;
      puVar29[0xf] = uVar16;
      puVar29[0x10] = uVar17;
      puVar29[0x11] = uVar18;
      puVar29[0x12] = uVar19;
      puVar29[0x13] = uVar20;
      puVar29[0x14] = uVar21;
      puVar29[0x15] = uVar22;
      puVar29[0x16] = uVar23;
      puVar29[0x17] = uVar24;
      puVar29[0x18] = uVar25;
      puVar29[0x19] = uVar26;
      puVar29[0x1a] = uVar27;
      puVar29[0x1b] = uVar28;
      param_3 = param_3 + -1;
      puVar29 = puVar29 + 0x1c;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FAppleARKitModule,FAppleARKitModule_*_&> @ 14cfcded0

FAppleARKitModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FAppleARKitModule,FAppleARKitModule_*_&>
          (FAppleARKitModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FAppleARKitSystem,FAppleARKitSystem_*_&> @ 14cfcdef0

FAppleARKitSystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<FAppleARKitSystem,FAppleARKitSystem_*_&>
          (FAppleARKitSystem **param_1)

{
  return *param_1;
}

