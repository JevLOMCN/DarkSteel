// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 79

// Construct<FFootPlacementPelvisSettings> @ 14a709440

void __cdecl UE::CoreUObject::Private::Construct<FFootPlacementPelvisSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43af0000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x1010200;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return;
}

// ConstructForTests<FFootPlacementPelvisSettings> @ 14a709480

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFootPlacementPelvisSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43af0000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x1010200;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return;
}

// Destruct<FFootPlacementPelvisSettings> @ 14a7094c0

void __cdecl UE::CoreUObject::Private::Destruct<FFootPlacementPelvisSettings>(void *param_1)

{
  return;
}

// Copy<FFootPlacementPelvisSettings> @ 14a709540

bool __cdecl
UE::CoreUObject::Private::Copy<FFootPlacementPelvisSettings>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FFootPlacementRootDefinition> @ 14a7095d0

void __cdecl UE::CoreUObject::Private::Construct<FFootPlacementRootDefinition>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// ConstructForTests<FFootPlacementRootDefinition> @ 14a709610

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFootPlacementRootDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// Destruct<FFootPlacementRootDefinition> @ 14a709640

void __cdecl UE::CoreUObject::Private::Destruct<FFootPlacementRootDefinition>(void *param_1)

{
  return;
}

// Copy<FFootPlacementRootDefinition> @ 14a709650

bool __cdecl
UE::CoreUObject::Private::Copy<FFootPlacementRootDefinition>
          (void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 8);
      *(uint *)((longlong)param_1 + 8) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 8)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 8) =
           (*(uint *)((longlong)param_1 + lVar2 + 8) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 0x18);
      *(uint *)((longlong)param_1 + 0x18) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 0x18)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 0x18) =
           (*(uint *)((longlong)param_1 + lVar2 + 0x18) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x1c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_WarpTest> @ 14a709700

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_WarpTest>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_WarpTest__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// ConstructForTests<FAnimNode_WarpTest> @ 14a7097c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_WarpTest>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined ***)param_1 = &___7FAnimNode_WarpTest__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// Destruct<FAnimNode_WarpTest> @ 14a709850

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_WarpTest>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_WarpTest> @ 14a709880

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_WarpTest>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0x60);
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x68) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x78) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x88) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x98) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
    param_1 = (void *)((longlong)param_1 + 0xb0);
    param_2 = (void *)((longlong)param_2 + 0xb0);
  }
  return true;
}

// Construct<FFootPlacementTraceSettings> @ 14a709a70

void __cdecl UE::CoreUObject::Private::Construct<FFootPlacementTraceSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x100;
  *(undefined4 *)param_1 = 0xc2960000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41200000;
  return;
}

// ConstructForTests<FFootPlacementTraceSettings> @ 14a709aa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFootPlacementTraceSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0xc2960000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40a00000;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41200000;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x100;
  return;
}

// Destruct<FFootPlacementTraceSettings> @ 14a709ad0

void __cdecl UE::CoreUObject::Private::Destruct<FFootPlacementTraceSettings>(void *param_1)

{
  return;
}

// Copy<FFootPlacementTraceSettings> @ 14a709b20

bool __cdecl
UE::CoreUObject::Private::Copy<FFootPlacementTraceSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FFootPlacementInterpolationSettings> @ 14a70d080

void __cdecl UE::CoreUObject::Private::Construct<FFootPlacementInterpolationSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x10001;
  *(undefined4 *)param_1 = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  return;
}

// ConstructForTests<FFootPlacementInterpolationSettings> @ 14a70d0e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFootPlacementInterpolationSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x28) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// Destruct<FFootPlacementInterpolationSettings> @ 14a70d140

void __cdecl UE::CoreUObject::Private::Destruct<FFootPlacementInterpolationSettings>(void *param_1)

{
  return;
}

// Copy<FFootPlacementInterpolationSettings> @ 14a70d150

bool __cdecl
UE::CoreUObject::Private::Copy<FFootPlacementInterpolationSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar7 + 0x28 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x28) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x2c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_StrideWarping> @ 14a70d1e0

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_StrideWarping>(void *param_1)

{
  memset(param_1,0,0x248);
  FAnimNode_StrideWarping::FAnimNode_StrideWarping(param_1);
  return;
}

// ConstructForTests<FAnimNode_StrideWarping> @ 14a70d210

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_StrideWarping>(void *param_1)

{
  undefined8 uVar1;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase(param_1);
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_StrideWarping__6B_;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xd0) = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X
  ;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
  *(double *)((longlong)param_1 + 0xe0) = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z
  ;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined2 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x140) = 2;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x148) = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x150) = uVar1;
  *(double *)((longlong)param_1 + 0x158) = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x160) = 2;
  uVar1 = UE::Math::TVector<double>::DownVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x168) = UE::Math::TVector<double>::DownVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x170) = uVar1;
  *(double *)((longlong)param_1 + 0x178) = UE::Math::TVector<double>::DownVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0x4024000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0x3f847ae147ae147b;
  *(undefined4 *)((longlong)param_1 + 0x180) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x188) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 400) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 3;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined4 *)((longlong)param_1 + 0x220) = 0;
  *(undefined1 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)((longlong)param_1 + 0x200) = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x228) =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x230) = uVar1;
  *(double *)((longlong)param_1 + 0x238) =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0x3f800000;
  return;
}

// Destruct<FAnimNode_StrideWarping> @ 14a70d220

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_StrideWarping>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x210));
  }
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  *(undefined ***)param_1 = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_StrideWarping> @ 14a70d280

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_StrideWarping>(void *param_1,void *param_2,int param_3)

{
  float *pfVar1;
  FInputRange *pFVar2;
  FAlphaBlend *pFVar3;
  FAlphaBlend *pFVar4;
  FName *pFVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  UCurveFloat *_Src;
  FName FVar10;
  undefined8 uVar11;
  longlong lVar12;
  TObjectPtr<UCurveFloat>_u_0 TVar13;
  bool bVar14;
  undefined2 uVar15;
  EAlphaBlendOption EVar16;
  float fVar17;
  undefined4 uVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  EAnimAlphaInputType EVar23;
  undefined6 uVar24;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FAnimNode_SkeletalControlBase::operator=(param_1,param_2);
    pFVar3 = &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).
              AlphaBlend;
    *(char *)&((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->_padding_ =
         (char)((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->_padding_;
    uVar11 = *(undefined8 *)
              &((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->ComponentPose;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->_padding_ =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->_padding_;
    *(undefined8 *)&((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->ComponentPose =
         uVar11;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->ComponentPose).field_0x8 =
         *(undefined8 *)
          &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->ComponentPose).field_0x8;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->LODThreshold =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->LODThreshold;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->ActualAlpha =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->ActualAlpha;
    bVar14 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->bAlphaBoolEnabled;
    uVar15 = *(undefined2 *)
              &((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->field_0x2a;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaInputType =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaInputType;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->bAlphaBoolEnabled = bVar14;
    *(undefined2 *)&((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->field_0x2a =
         uVar15;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBias).Scale;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->Alpha =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->Alpha;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBias).Scale = fVar6;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBias).Bias;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBias).Bias =
         (float)(((uint)fVar6 ^
                 (uint)(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBias
                       ).Bias) & 0x80000000 ^ (uint)fVar6);
    fVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBias).Bias;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBias).Bias =
         (float)(((uint)fVar7 ^ (uint)fVar6) & 0x7fffffff ^ (uint)fVar7);
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).BlendInTime =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).BlendInTime;
    EVar16 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
             BlendOption;
    bVar14 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
             bInitialized;
    uVar15 = *(undefined2 *)
              &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
               field_0xa;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).BlendOutTime =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).BlendOutTime
    ;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).BlendOption =
         EVar16;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).bInitialized =
         bVar14;
    *(undefined2 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).field_0xa =
         uVar15;
    uVar8 = *(uint *)&(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend)
                      .field_0xc;
    *(uint *)&(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).
              field_0xc =
         (uVar8 ^ *(uint *)&(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->
                            AlphaBoolBlend).field_0xc) & 0x80000000 ^ uVar8;
    uVar9 = *(uint *)&(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend)
                      .field_0xc;
    *(uint *)&(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).
              field_0xc = (uVar9 ^ uVar8) & 0x7fffffff ^ uVar9;
    pFVar4 = &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
              AlphaBlend;
    *(undefined4 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).CustomCurve.
      field0_0x0 = *(undefined4 *)
                    &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                     CustomCurve.field0_0x0;
    if (pFVar3 != pFVar4) {
      fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
              AlphaBlend.BlendTime;
      pfVar1 = &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).
                AlphaBlend.AlphaLerp;
      _Src = (pFVar4->CustomCurve).field0_0x0.DebugPtr;
      fVar7 = *pfVar1;
      (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
      BlendTime = fVar6;
      if ((fVar6 == 0.0) && (fVar7 == 0.0)) {
        *pfVar1 = 0.0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,(int)fVar6,(int)fVar7,(ForAnyElementType *)pFVar3,(int)fVar6,(int *)pfVar1
                  );
        if (fVar6 != 0.0) {
          memcpy((pFVar3->CustomCurve).field0_0x0.DebugPtr,_Src,(longlong)(int)fVar6 * 0x30);
        }
      }
    }
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
            AlphaBlend.BlendTimeRemaining;
    fVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
            AlphaBlend.BlendedValue;
    fVar17 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
             AlphaBlend.BeginValue;
    pFVar5 = &((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaCurveName;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    AlphaBlend = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                 AlphaBlend.AlphaBlend;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    BlendTimeRemaining = fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    BlendedValue = fVar7;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    BeginValue = fVar17;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    DesiredValue = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                   AlphaBlend.DesiredValue;
    uVar18 = *(undefined4 *)
              &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
               AlphaBlend.field_0x2c;
    FVar10 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaCurveName;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    CachedDesiredBlendedValue =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).AlphaBlend.
         CachedDesiredBlendedValue;
    *(undefined4 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
      field_0x2c = uVar18;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaCurveName = FVar10;
    bVar14 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
             bClampResult;
    bVar19 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
             bInterpResult;
    bVar20 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
             bInitialized;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            InRange.Min;
    uVar11 = *(undefined8 *)
              &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
               InRange.Max;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).bMapRange =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
         bMapRange;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).bClampResult
         = bVar14;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).
    bInterpResult = bVar19;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).bInitialized
         = bVar20;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).InRange.Min
         = fVar6;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).InRange.
      Max = uVar11;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).Bias
    ;
    fVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            ClampMin;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).OutRange.
      Max = *(undefined8 *)
             &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
              OutRange.Max;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).Bias = fVar6
    ;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).ClampMin =
         fVar7;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            InterpSpeedIncreasing;
    fVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            InterpSpeedDecreasing;
    fVar17 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
             InterpolatedResult;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).ClampMax =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
         ClampMax;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).
    InterpSpeedIncreasing = fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).
    InterpSpeedDecreasing = fVar7;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).
    InterpolatedResult = fVar17;
    iVar21 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->BoneTransforms).ArrayNum
    ;
    iVar22 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->BoneTransforms).ArrayMax
    ;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->BoneTransforms).AllocatorInstance
    .Data = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->BoneTransforms).
            AllocatorInstance.Data;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->BoneTransforms).ArrayNum = iVar21
    ;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->BoneTransforms).ArrayMax = iVar22
    ;
    lVar12 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->_padding_;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->_padding_ =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->_padding_;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->_padding_ = lVar12;
    uVar11 = *(undefined8 *)
              &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->ComponentPose).
               field_0x8;
    *(undefined8 *)&((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->ComponentPose =
         *(undefined8 *)&((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->ComponentPose
    ;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->ComponentPose).field_0x8 =
         uVar11;
    fVar6 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->ActualAlpha;
    EVar23 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaInputType;
    bVar14 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->bAlphaBoolEnabled;
    uVar15 = *(undefined2 *)
              &((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->field_0x2a;
    fVar7 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->Alpha;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->LODThreshold =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->LODThreshold;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->ActualAlpha = fVar6;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaInputType = EVar23;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->bAlphaBoolEnabled = bVar14;
    *(undefined2 *)&((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->field_0x2a =
         uVar15;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->Alpha = fVar7;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            BlendInTime;
    fVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            BlendOutTime;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBias =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBias;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).BlendInTime =
         fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).BlendOutTime =
         fVar7;
    bVar14 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
             bInitialized;
    uVar24 = *(undefined6 *)
              &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
               field_0xa;
    TVar13 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
             CustomCurve.field0_0x0;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).BlendOption =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).BlendOption;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).bInitialized =
         bVar14;
    *(undefined6 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).field_0xa =
         uVar24;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).CustomCurve.
    field0_0x0 = TVar13;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            AlphaBlend.BlendTime;
    fVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            AlphaBlend.AlphaLerp;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
    CustomCurve.field0_0x0 =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).AlphaBlend.
         CustomCurve.field0_0x0;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
    BlendTime = fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
    AlphaLerp = fVar7;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            AlphaBlend.BlendTimeRemaining;
    fVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            AlphaBlend.BlendedValue;
    fVar17 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
             AlphaBlend.BeginValue;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
    AlphaBlend = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
                 AlphaBlend.AlphaBlend;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
    BlendTimeRemaining = fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
    BlendedValue = fVar7;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
    BeginValue = fVar17;
    *(undefined1 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
      DesiredValue =
         *(undefined1 *)
          &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).AlphaBlend
           .DesiredValue;
    *(undefined1 *)
     ((longlong)
      &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
       DesiredValue + 1) =
         *(undefined1 *)
          ((longlong)
           &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            AlphaBlend.DesiredValue + 1);
    *(undefined1 *)
     ((longlong)
      &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
       DesiredValue + 2) =
         *(undefined1 *)
          ((longlong)
           &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            AlphaBlend.DesiredValue + 2);
    *(undefined1 *)
     ((longlong)
      &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
       DesiredValue + 3) =
         *(undefined1 *)
          ((longlong)
           &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
            AlphaBlend.DesiredValue + 3);
    uVar18 = *(undefined4 *)
              &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).
               AlphaBlend.field_0x2c;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
    CachedDesiredBlendedValue =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaBoolBlend).AlphaBlend.
         CachedDesiredBlendedValue;
    *(undefined4 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaBoolBlend).AlphaBlend.
      field_0x2c = uVar18;
    if (pFVar5 != &((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaCurveName) {
      iVar21._0_1_ = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->
                     AlphaScaleBiasClamp).bMapRange;
      iVar21._1_1_ = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->
                     AlphaScaleBiasClamp).bClampResult;
      iVar21._2_1_ = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->
                     AlphaScaleBiasClamp).bInterpResult;
      iVar21._3_1_ = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->
                     AlphaScaleBiasClamp).bInitialized;
      pFVar2 = &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).
                InRange;
      FVar10 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaCurveName;
      fVar6 = pFVar2->Min;
      (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).bMapRange
           = (bool)(undefined1)iVar21;
      (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).
      bClampResult = (bool)iVar21._1_1_;
      (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).
      bInterpResult = (bool)iVar21._2_1_;
      (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).
      bInitialized = (bool)iVar21._3_1_;
      if ((iVar21 == 0) && (fVar6 == 0.0)) {
        pFVar2->Min = 0.0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,iVar21,(int)fVar6,(ForAnyElementType *)pFVar5,iVar21,(int *)pFVar2);
        if (iVar21 != 0) {
          memcpy((void *)*pFVar5,(void *)FVar10,(longlong)iVar21 * 0x70);
        }
      }
    }
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).InRange.
      Max = *(undefined8 *)
             &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBiasClamp).
              InRange.Max;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBiasClamp).Bias
    ;
    fVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBiasClamp).
            ClampMin;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).OutRange.
      Max = *(undefined8 *)
             &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBiasClamp).
              OutRange.Max;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).Bias = fVar6
    ;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).ClampMin =
         fVar7;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBiasClamp).
            InterpSpeedIncreasing;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).ClampMax =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBiasClamp).
         ClampMax;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).
    InterpSpeedIncreasing = fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).
    InterpSpeedDecreasing =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBiasClamp).
         InterpSpeedDecreasing;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->AlphaScaleBiasClamp).
    InterpolatedResult =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->AlphaScaleBiasClamp).
         InterpolatedResult;
    param_1 = &((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->BoneTransforms;
    param_2 = &((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->BoneTransforms;
  }
  return true;
}

// Construct<FStrideWarpingFootDefinition> @ 14a70d9c0

void __cdecl UE::CoreUObject::Private::Construct<FStrideWarpingFootDefinition>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x7fffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  return;
}

// ConstructForTests<FStrideWarpingFootDefinition> @ 14a70da10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FStrideWarpingFootDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  return;
}

// Destruct<FStrideWarpingFootDefinition> @ 14a70da50

void __cdecl UE::CoreUObject::Private::Destruct<FStrideWarpingFootDefinition>(void *param_1)

{
  return;
}

// Copy<FStrideWarpingFootDefinition> @ 14a70da60

bool __cdecl
UE::CoreUObject::Private::Copy<FStrideWarpingFootDefinition>
          (void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 8);
      *(uint *)((longlong)param_1 + 8) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 8)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 8) =
           (*(uint *)((longlong)param_1 + lVar2 + 8) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 0x18);
      *(uint *)((longlong)param_1 + 0x18) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 0x18)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 0x18) =
           (*(uint *)((longlong)param_1 + lVar2 + 0x18) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x1c);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x20);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 0x28);
      *(uint *)((longlong)param_1 + 0x28) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 0x28)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 0x28) =
           (*(uint *)((longlong)param_1 + lVar2 + 0x28) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x2c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_Steering> @ 14a70e4f0

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_Steering>(void *param_1)

{
  memset(param_1,0,0x1b0);
  FAnimNode_Steering::FAnimNode_Steering(param_1);
  return;
}

// ConstructForTests<FAnimNode_Steering> @ 14a70e520

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_Steering>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase(param_1);
  *(undefined ***)param_1 = &___7FAnimNode_Steering__6B_;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0xd0) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0xd8) = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0xe0) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0xe8) = dVar10;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0x3fc00000;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x130) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x138) = uVar9;
  *(double *)((longlong)param_1 + 0x140) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x150) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x160) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x170) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x180) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 400) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1a0) = auVar8;
  return;
}

// Destruct<FAnimNode_Steering> @ 14a70e530

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_Steering>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_Steering> @ 14a7126a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_Steering>(void *param_1,void *param_2,int param_3)

{
  UCurveFloat *pUVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  undefined2 uVar8;
  float fVar9;
  EAlphaBlendOption EVar10;
  bool bVar11;
  bool bVar12;
  undefined4 uVar13;
  float fVar14;
  int iVar15;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FAnimNode_SkeletalControlBase::operator=(param_1,param_2);
    uVar3 = *(undefined8 *)
             &((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->ComponentPose;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->_padding_ =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->_padding_;
    *(undefined8 *)&((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->ComponentPose =
         uVar3;
    iVar5 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->LODThreshold;
    fVar6 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->ActualAlpha;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->ComponentPose).field_0x8 =
         *(undefined8 *)
          &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->ComponentPose).field_0x8;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->LODThreshold = iVar5;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->ActualAlpha = fVar6;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaInputType =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaInputType;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->Alpha =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->Alpha;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBias).Scale =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBias).Scale;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBias).Bias =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBias).Bias;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).BlendInTime =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).BlendInTime;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).BlendOutTime =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).BlendOutTime
    ;
    bVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
            bInitialized;
    uVar8 = *(undefined2 *)
             &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
              field_0xa;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).BlendOption =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).BlendOption;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).bInitialized =
         bVar7;
    *(undefined2 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).field_0xa =
         uVar8;
    *(undefined4 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).field_0xc =
         *(undefined4 *)
          &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).field_0xc;
    *(undefined4 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).CustomCurve.
      field0_0x0 = *(undefined4 *)
                    &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                     CustomCurve.field0_0x0;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                 AlphaBlend.CustomCurve.field0_0x0.DebugPtr, pUVar1 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    CustomCurve.field0_0x0 =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).AlphaBlend.
         CustomCurve.field0_0x0;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)
                  &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                   AlphaBlend.BlendTime, pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
            AlphaBlend.AlphaLerp;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    BlendTime = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                AlphaBlend.BlendTime;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    AlphaLerp = fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    AlphaBlend = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                 AlphaBlend.AlphaBlend;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
            AlphaBlend.BeginValue;
    fVar9 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
            AlphaBlend.DesiredValue;
    EVar10 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
             AlphaBlend.BlendOption;
    bVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
            AlphaBlend.bNeedsToResetAlpha;
    bVar11 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
             AlphaBlend.bNeedsToResetBlendTime;
    bVar12 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
             AlphaBlend.bNeedsToResetCachedDesiredBlendedValue;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    BlendedValue = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
                   AlphaBlend.BlendedValue;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    BeginValue = fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    DesiredValue = fVar9;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    BlendOption = EVar10;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    bNeedsToResetAlpha = bVar7;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    bNeedsToResetBlendTime = bVar11;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    bNeedsToResetCachedDesiredBlendedValue = bVar12;
    uVar13 = *(undefined4 *)
              &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).
               AlphaBlend.field_0x2c;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
    CachedDesiredBlendedValue =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaBoolBlend).AlphaBlend.
         CachedDesiredBlendedValue;
    *(undefined4 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaBoolBlend).AlphaBlend.
      field_0x2c = uVar13;
    bVar7 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            bClampResult;
    bVar11 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
             bInterpResult;
    bVar12 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
             bInitialized;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            InRange.Min;
    uVar3 = *(undefined8 *)
             &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
              InRange.Max;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).bMapRange =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
         bMapRange;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).bClampResult
         = bVar7;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).
    bInterpResult = bVar11;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).bInitialized
         = bVar12;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).InRange.Min
         = fVar6;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).InRange.
      Max = uVar3;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).Bias
    ;
    fVar9 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            ClampMin;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).OutRange.
      Max = *(undefined8 *)
             &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
              OutRange.Max;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).Bias = fVar6
    ;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).ClampMin =
         fVar9;
    fVar6 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            InterpSpeedIncreasing;
    fVar9 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
            InterpSpeedDecreasing;
    fVar14 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
             InterpolatedResult;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).ClampMax =
         (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->AlphaScaleBiasClamp).
         ClampMax;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).
    InterpSpeedIncreasing = fVar6;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).
    InterpSpeedDecreasing = fVar9;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->AlphaScaleBiasClamp).
    InterpolatedResult = fVar14;
    iVar5 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->BoneTransforms).ArrayNum;
    iVar15 = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->BoneTransforms).ArrayMax
    ;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->BoneTransforms).AllocatorInstance
    .Data = (((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 200))->BoneTransforms).
            AllocatorInstance.Data;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->BoneTransforms).ArrayNum = iVar5;
    (((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 200))->BoneTransforms).ArrayMax = iVar15
    ;
    lVar4 = ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->_padding_;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->_padding_ =
         ((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->_padding_;
    ((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->_padding_ = lVar4;
    uVar3 = *(undefined8 *)
             &(((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->ComponentPose).
              field_0x8;
    *(undefined8 *)&((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->ComponentPose =
         *(undefined8 *)&((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->ComponentPose
    ;
    *(undefined8 *)
     &(((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->ComponentPose).field_0x8 =
         uVar3;
    param_1 = &((FAnimNode_SkeletalControlBase *)((longlong)param_1 + 400))->LODThreshold;
    param_2 = &((FAnimNode_SkeletalControlBase *)((longlong)param_2 + 400))->LODThreshold;
  }
  return true;
}

// Construct<FAnimNode_SlopeWarping> @ 14a712af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_SlopeWarping>(void *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase(param_1);
  uVar7 = _UNK_15066df7c;
  uVar6 = _UNK_15066df78;
  uVar3 = __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = (uint)__xmm_80000000000000008000000000000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_SlopeWarping__6B_;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  uVar5 = UE::Math::TVector<double>::UpVector.field0_0x0._4_4_ ^ uVar3;
  uVar6 = UE::Math::TVector<double>::UpVector.field0_0x0._8_4_ ^ uVar6;
  uVar7 = UE::Math::TVector<double>::UpVector.field0_0x0._12_4_ ^ uVar7;
  uVar8 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
  uVar1 = (ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20;
  *(uint *)((longlong)param_1 + 0x180) =
       UE::Math::TVector<double>::UpVector.field0_0x0._0_4_ ^ uVar2;
  *(uint *)((longlong)param_1 + 0x184) = uVar5;
  *(uint *)((longlong)param_1 + 0x188) = uVar6;
  *(uint *)((longlong)param_1 + 0x18c) = uVar7;
  *(ulonglong *)((longlong)param_1 + 400) = CONCAT44((uint)uVar1 ^ uVar3,uVar8 ^ uVar2);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x198) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = uVar4;
  *(double *)((longlong)param_1 + 0x1a8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined2 *)((longlong)param_1 + 0x250) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)((longlong)param_1 + 600) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0x42480000;
  *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) & 0xffffffc3 | 3;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  return;
}

// ConstructForTests<FAnimNode_SlopeWarping> @ 14a712b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_SlopeWarping>(void *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase(param_1);
  uVar7 = _UNK_15066df7c;
  uVar6 = _UNK_15066df78;
  uVar3 = __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = (uint)__xmm_80000000000000008000000000000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_SlopeWarping__6B_;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  uVar5 = UE::Math::TVector<double>::UpVector.field0_0x0._4_4_ ^ uVar3;
  uVar6 = UE::Math::TVector<double>::UpVector.field0_0x0._8_4_ ^ uVar6;
  uVar7 = UE::Math::TVector<double>::UpVector.field0_0x0._12_4_ ^ uVar7;
  uVar8 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
  uVar1 = (ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20;
  *(uint *)((longlong)param_1 + 0x180) =
       UE::Math::TVector<double>::UpVector.field0_0x0._0_4_ ^ uVar2;
  *(uint *)((longlong)param_1 + 0x184) = uVar5;
  *(uint *)((longlong)param_1 + 0x188) = uVar6;
  *(uint *)((longlong)param_1 + 0x18c) = uVar7;
  *(ulonglong *)((longlong)param_1 + 400) = CONCAT44((uint)uVar1 ^ uVar3,uVar8 ^ uVar2);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x198) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = uVar4;
  *(double *)((longlong)param_1 + 0x1a8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined2 *)((longlong)param_1 + 0x250) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)((longlong)param_1 + 600) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a8) = 0x42480000;
  *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) & 0xffffffc3 | 3;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  return;
}

// Destruct<FAnimNode_SlopeWarping> @ 14a712b10

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_SlopeWarping>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  *(undefined ***)param_1 = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_SlopeWarping> @ 14a712bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_SlopeWarping>(void *param_1,void *param_2,int param_3)

{
  FAnimNode_SlopeWarping *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FAnimNode_SlopeWarping::operator=
                (this,(FAnimNode_SlopeWarping *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSlopeWarpingFootData> @ 14a712c90

void __cdecl UE::CoreUObject::Private::Construct<FSlopeWarpingFootData>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
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
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// ConstructForTests<FSlopeWarpingFootData> @ 14a712d00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlopeWarpingFootData>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
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
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// Destruct<FSlopeWarpingFootData> @ 14a712d70

void __cdecl UE::CoreUObject::Private::Destruct<FSlopeWarpingFootData>(void *param_1)

{
  return;
}

// Copy<FSlopeWarpingFootData> @ 14a712d80

bool __cdecl
UE::CoreUObject::Private::Copy<FSlopeWarpingFootData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
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
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x90) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
    param_1 = (undefined4 *)((longlong)param_1 + 0xb0);
    param_2 = (undefined4 *)((longlong)param_2 + 0xb0);
  }
  return true;
}

// Construct<FSlopeWarpingFootDefinition> @ 14a712e70

void __cdecl UE::CoreUObject::Private::Construct<FSlopeWarpingFootDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 2;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x40800000;
  return;
}

// ConstructForTests<FSlopeWarpingFootDefinition> @ 14a712eb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlopeWarpingFootDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 2;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x40800000;
  return;
}

// Destruct<FSlopeWarpingFootDefinition> @ 14a712ef0

void __cdecl UE::CoreUObject::Private::Destruct<FSlopeWarpingFootDefinition>(void *param_1)

{
  return;
}

// Copy<FSlopeWarpingFootDefinition> @ 14a712f00

bool __cdecl
UE::CoreUObject::Private::Copy<FSlopeWarpingFootDefinition>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 8);
      *(uint *)((longlong)param_1 + 8) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 8)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 8) =
           (*(uint *)((longlong)param_1 + lVar2 + 8) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 0x18);
      *(uint *)((longlong)param_1 + 0x18) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 0x18)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 0x18) =
           (*(uint *)((longlong)param_1 + lVar2 + 0x18) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x24);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_OverrideRootMotion> @ 14a7138e0

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_OverrideRootMotion>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_OverrideRootMotion__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FAnimNode_OverrideRootMotion> @ 14a713920

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_OverrideRootMotion>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_OverrideRootMotion__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FAnimNode_OverrideRootMotion> @ 14a713950

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_OverrideRootMotion>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_OverrideRootMotion> @ 14a713970

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_OverrideRootMotion>
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

// Construct<FAnimNode_OrientationWarping> @ 14a713b20

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_OrientationWarping>(void *param_1)

{
  memset(param_1,0,0x280);
  FAnimNode_OrientationWarping::FAnimNode_OrientationWarping(param_1);
  return;
}

// ConstructForTests<FAnimNode_OrientationWarping> @ 14a713b50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_OrientationWarping>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase(param_1);
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_OrientationWarping__6B_;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x42b40000;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined1 *)((longlong)param_1 + 0x134) = 3;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0x42340000;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x14e) = 0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x150) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x158) = uVar9;
  *(double *)((longlong)param_1 + 0x160) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x170) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x180) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 400) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1a0) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1b0) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1c0) = auVar8;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0xffffffff;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x1f8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar9;
  *(double *)((longlong)param_1 + 0x208) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x210) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x218) = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x220) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x228) = dVar10;
  *(undefined4 *)((longlong)param_1 + 0x230) = 0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x238) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x240) = uVar9;
  *(double *)((longlong)param_1 + 0x248) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x250) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x254))->_s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x268) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined1 *)((longlong)param_1 + 0x270) = 0;
  return;
}

// Destruct<FAnimNode_OrientationWarping> @ 14a713b60

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_OrientationWarping>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1e0));
  }
  if (*(void **)((longlong)param_1 + 0x1d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d0));
  }
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  *(undefined ***)param_1 = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_OrientationWarping> @ 14a713b70

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_OrientationWarping>
          (void *param_1,void *param_2,int param_3)

{
  FAnimNode_OrientationWarping *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FAnimNode_OrientationWarping::operator=
                (this,(FAnimNode_OrientationWarping *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_OffsetRootBone> @ 14a713bc0

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_OffsetRootBone>(void *param_1)

{
  memset(param_1,0,0x100);
  FAnimNode_OffsetRootBone::FAnimNode_OffsetRootBone(param_1);
  return;
}

// ConstructForTests<FAnimNode_OffsetRootBone> @ 14a713bf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_OffsetRootBone>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined ***)param_1 = &___7FAnimNode_OffsetRootBone__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0xb0) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0xb8) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0xc0) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 200) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xd0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
  *(double *)((longlong)param_1 + 0xe0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0xffff;
  return;
}

// Destruct<FAnimNode_OffsetRootBone> @ 14a713c00

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_OffsetRootBone>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_OffsetRootBone> @ 14a713c20

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_OffsetRootBone>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
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
    *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb8);
    *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 200);
    *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
    *(undefined8 *)((longlong)param_1 + 200) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xd8);
    *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
    *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0xe0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xf0);
    *(undefined8 *)((longlong)param_1 + 0xe8) = *(undefined8 *)((longlong)param_2 + 0xe8);
    *(undefined8 *)((longlong)param_1 + 0xf0) = uVar1;
    param_1 = (void *)((longlong)param_1 + 0x100);
    param_2 = (void *)((longlong)param_2 + 0x100);
  }
  return true;
}

// Construct<FAnimNode_FootPlacement> @ 14a713d30

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_FootPlacement>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase(param_1);
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_FootPlacement__6B_;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x7fffffff;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x43af0000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x1010200;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  *(undefined4 *)((longlong)param_1 + 300) = 0x420c0000;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f400000;
  *(undefined2 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0x160) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x17e) = 1;
  *(undefined4 *)((longlong)param_1 + 0x180) = 0xc2960000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x40a00000;
  *(undefined2 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 400) = 0x41200000;
  *(undefined2 *)((longlong)param_1 + 0x194) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x198) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = uVar1;
  *(double *)((longlong)param_1 + 0x1a8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x1b8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = uVar1;
  *(double *)((longlong)param_1 + 0x1c8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0;
  *(double (*) [2])((longlong)param_1 + 0x200) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x210) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x220) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x230) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x240) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x250) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x260) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x270) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x280) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x290) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2a0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2b0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2c0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2d0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2e0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2f0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x300) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x310) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 800) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x328) = uVar1;
  *(double *)((longlong)param_1 + 0x330) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x340) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x348) = uVar1;
  *(double *)((longlong)param_1 + 0x350) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x358) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x360) = uVar1;
  *(double *)((longlong)param_1 + 0x368) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x370) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x378) = uVar1;
  *(double *)((longlong)param_1 + 0x380) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x388) = 0;
  *(undefined4 *)((longlong)param_1 + 0x390) = 0;
  *(double (*) [2])((longlong)param_1 + 0x3a0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3b0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3c0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3d0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3e0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3f0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x400) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x408) = uVar1;
  *(double *)((longlong)param_1 + 0x410) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x418) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x420) = uVar1;
  *(double *)((longlong)param_1 + 0x428) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x430) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x438) = uVar1;
  *(double *)((longlong)param_1 + 0x440) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x450) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x458) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x460) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x468) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x470) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x478) = uVar1;
  *(double *)((longlong)param_1 + 0x480) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x488) = 0;
  *(undefined1 *)((longlong)param_1 + 0x490) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x4a0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x4a8) = uVar1;
  *(double *)((longlong)param_1 + 0x4b0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x4b8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x4c0) = uVar1;
  *(double *)((longlong)param_1 + 0x4c8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x4d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x508) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x500) = 0;
  *(undefined4 *)((longlong)param_1 + 0x510) = 0xffff;
  return;
}

// ConstructForTests<FAnimNode_FootPlacement> @ 14a713d40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_FootPlacement>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase(param_1);
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_FootPlacement__6B_;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x7fffffff;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x43af0000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x1010200;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  *(undefined4 *)((longlong)param_1 + 300) = 0x420c0000;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f400000;
  *(undefined2 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0x160) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x17e) = 1;
  *(undefined4 *)((longlong)param_1 + 0x180) = 0xc2960000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x40a00000;
  *(undefined2 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 400) = 0x41200000;
  *(undefined2 *)((longlong)param_1 + 0x194) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x198) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = uVar1;
  *(double *)((longlong)param_1 + 0x1a8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x1b8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = uVar1;
  *(double *)((longlong)param_1 + 0x1c8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0;
  *(double (*) [2])((longlong)param_1 + 0x200) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x210) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x220) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x230) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x240) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x250) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x260) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x270) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x280) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x290) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2a0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2b0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2c0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2d0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2e0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2f0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x300) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x310) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 800) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x328) = uVar1;
  *(double *)((longlong)param_1 + 0x330) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x340) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x348) = uVar1;
  *(double *)((longlong)param_1 + 0x350) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x358) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x360) = uVar1;
  *(double *)((longlong)param_1 + 0x368) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x370) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x378) = uVar1;
  *(double *)((longlong)param_1 + 0x380) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x388) = 0;
  *(undefined4 *)((longlong)param_1 + 0x390) = 0;
  *(double (*) [2])((longlong)param_1 + 0x3a0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3b0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3c0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3d0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3e0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x3f0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x400) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x408) = uVar1;
  *(double *)((longlong)param_1 + 0x410) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x418) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x420) = uVar1;
  *(double *)((longlong)param_1 + 0x428) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x430) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x438) = uVar1;
  *(double *)((longlong)param_1 + 0x440) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x450) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x458) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x460) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x468) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x470) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x478) = uVar1;
  *(double *)((longlong)param_1 + 0x480) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x488) = 0;
  *(undefined1 *)((longlong)param_1 + 0x490) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x4a0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x4a8) = uVar1;
  *(double *)((longlong)param_1 + 0x4b0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x4b8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x4c0) = uVar1;
  *(double *)((longlong)param_1 + 0x4c8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x4d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x508) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x500) = 0;
  *(undefined4 *)((longlong)param_1 + 0x510) = 0xffff;
  return;
}

// Destruct<FAnimNode_FootPlacement> @ 14a713d50

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_FootPlacement>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x4f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x4f0));
  }
  if (*(void **)((longlong)param_1 + 0x4e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x4e0));
  }
  if (*(void **)((longlong)param_1 + 0x4d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x4d0));
  }
  if (*(void **)((longlong)param_1 + 0x1d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d0));
  }
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  *(undefined ***)param_1 = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_FootPlacement> @ 14a713de0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_FootPlacement>(void *param_1,void *param_2,int param_3)

{
  FAnimNode_FootPlacement *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FAnimNode_FootPlacement::operator=
                (this,(FAnimNode_FootPlacement *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFootPlacementPlantSettings> @ 14a715350

void __cdecl UE::CoreUObject::Private::Construct<FFootPlacementPlantSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f400000;
  *(undefined4 *)param_1 = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x420c0000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x43480000;
  return;
}

// ConstructForTests<FFootPlacementPlantSettings> @ 14a7153b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFootPlacementPlantSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x420c0000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f400000;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FFootPlacementPlantSettings> @ 14a715410

void __cdecl UE::CoreUObject::Private::Destruct<FFootPlacementPlantSettings>(void *param_1)

{
  return;
}

// Copy<FFootPlacementPlantSettings> @ 14a715420

bool __cdecl
UE::CoreUObject::Private::Copy<FFootPlacementPlantSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FFootPlacemenLegDefinition> @ 14a7198b0

void __cdecl UE::CoreUObject::Private::Construct<FFootPlacemenLegDefinition>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x30) = 2;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FFootPlacemenLegDefinition> @ 14a719920

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFootPlacemenLegDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x30) = 2;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FFootPlacemenLegDefinition> @ 14a719980

void __cdecl UE::CoreUObject::Private::Destruct<FFootPlacemenLegDefinition>(void *param_1)

{
  return;
}

// Copy<FFootPlacemenLegDefinition> @ 14a719990

bool __cdecl
UE::CoreUObject::Private::Copy<FFootPlacemenLegDefinition>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 8);
      *(uint *)((longlong)param_1 + 8) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 8)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 8) =
           (*(uint *)((longlong)param_1 + lVar2 + 8) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 0x18);
      *(uint *)((longlong)param_1 + 0x18) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 0x18)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 0x18) =
           (*(uint *)((longlong)param_1 + lVar2 + 0x18) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x1c);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x20);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 0x28);
      *(uint *)((longlong)param_1 + 0x28) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 0x28)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 0x28) =
           (*(uint *)((longlong)param_1 + lVar2 + 0x28) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x2c);
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x34);
      *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x3c);
      *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x44);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x4c);
    } while (param_3 != 0);
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 14a71a6f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x15) {
      iVar8 = 0x14;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x15) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 14a71a7c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (ushort param_1,ForElementType<float> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 14a71a890

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector<double>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 14a71a960

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x15) {
      iVar1 = 0x14;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 14a71a9e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 14a71aa60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// DamperImplicit @ 14a71e0c0

float __cdecl UE::Anim::OffsetRootBone::DamperImplicit(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  fVar1 = (param_2 * __real_3f317218) / (param_1 + param_3);
  fVar1 = __real_3f800000 -
          __real_3f800000 /
          (((fVar1 * __real_3e83b5ca + __real_3ee6ad0d) * fVar1 + __real_3f80f478) * fVar1 +
          __real_3f800000);
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// FindChainLengthRootBoneIndex @ 14a726be0

void __cdecl
UE::Anim::FootPlacement::FindChainLengthRootBoneIndex
          (FCompactPoseBoneIndex *param_1,int *param_2,FBoneContainer *param_3,
          FCompactPoseBoneIndex *param_4,float *param_5)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  FSkelMeshRefPoseOverride *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  float *pfVar10;
  bool bVar11;
  uint uVar12;
  FCompactPoseBoneIndex FVar13;
  undefined4 extraout_var;
  longlong lVar14;
  int iVar15;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  FCompactPoseBoneIndex local_res8 [2];
  FCompactPoseBoneIndex local_res20 [2];
  
  pfVar10 = param_5;
  *param_5 = 0.0;
  param_5._0_4_ = *param_1;
  if (param_5._0_4_ == (FCompactPoseBoneIndex)0xffffffff) {
    *param_4 = (FCompactPoseBoneIndex)0xffffffff;
    return;
  }
  FBoneContainer::GetParentBoneIndex(param_3,local_res8);
  iVar15 = *param_2;
  if (iVar15 < 1) {
    *param_4 = param_5._0_4_;
    return;
  }
  do {
    iVar15 = iVar15 + -1;
    if (local_res8[0] == (FCompactPoseBoneIndex)0xffffffff) break;
    pFVar3 = (param_3->RefPoseOverride).Object;
    if (pFVar3 == (FSkelMeshRefPoseOverride *)0x0) {
      pTVar16 = &param_3->RefSkeleton->FinalRefBonePose;
      pTVar9 = &param_3->RefSkeleton->FinalRefBonePose;
    }
    else {
      pTVar16 = &pFVar3->RefBonePoses;
      pTVar9 = &pFVar3->RefBonePoses;
    }
    uVar12 = 0;
    if ((int)param_5._0_4_ < (param_3->BoneIndicesArray).ArrayNum) {
      uVar12 = ~(uint)param_5._0_4_ >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(ushort *)
             ((param_3->BoneIndicesArray).AllocatorInstance.Data + (longlong)(int)param_5._0_4_ * 2)
    ;
    if ((pTVar9->ArrayNum <= (int)(uint)uVar2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pTVar16->AllocatorInstance).Data;
    lVar14 = (ulonglong)uVar2 * 0x60;
    pFVar1 = pFVar4 + lVar14 + 0x20;
    dVar6 = *(double *)pFVar1;
    dVar7 = *(double *)(pFVar1 + 8);
    dVar8 = *(double *)(pFVar4 + lVar14 + 0x30);
    param_5._0_4_ = local_res8[0];
    *pfVar10 = (float)SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8) + *pfVar10;
    FVar13 = FBoneContainer::GetParentBoneIndex(param_3,local_res20);
    local_res8[0] = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar13);
  } while (0 < iVar15);
  *param_4 = param_5._0_4_;
  return;
}

// FindPlantTraceImpact @ 14a727640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Anim::FootPlacement::FindPlantTraceImpact
          (FEvaluationContext *param_1,FFootPlacementTraceSettings *param_2,bool param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  UCharacterMovementComponent *pUVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TConsoleVariableData<bool> *pTVar13;
  bool bVar14;
  char cVar15;
  ECollisionChannel EVar16;
  TStatId TVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStackY_388 [32];
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 local_318;
  FCollisionShape local_300 [2];
  undefined8 local_2e0;
  undefined4 uStack_2d8;
  undefined1 uStack_2d4;
  undefined2 uStack_2d3;
  undefined1 uStack_2d1;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2a8;
  TQuat<double> local_288;
  undefined1 local_268 [48];
  double dStack_238;
  double local_230;
  double local_210;
  double dStack_208;
  double local_200;
  int local_1c4;
  FWeakObjectPtr local_1b0;
  FWeakObjectPtr FStack_1a8;
  IActorInstanceManagerInterface *local_1a0;
  undefined8 uStack_198;
  FCollisionQueryParams local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  dVar5 = (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[1];
  dVar1 = (param_1->OwningComponentToWorld).Translation.ZW.m128d_f64[0];
  (param_5->field0_0x0)._s_0.X = (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[0];
  (param_5->field0_0x0)._s_0.Y = dVar5;
  (param_5->field0_0x0)._s_0.Z = dVar1;
  local_288.X = (param_1->OwningComponentToWorld).Rotation.XY.m128d_f64[0];
  local_288.Y = (param_1->OwningComponentToWorld).Rotation.XY.m128d_f64[1];
  local_288.Z = (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[0];
  local_288.W = (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[1];
  local_2a8._s_0.Z = __real_3ff0000000000000;
  local_2a8._s_0.X = 0.0;
  local_2a8._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&local_288,(TVector<double> *)&local_330._s_0,(TVector<double> *)&local_2a8._s_0);
  (param_6->field0_0x0)._s_0.X = local_330._s_0.X;
  (param_6->field0_0x0)._s_0.Y = local_330._s_0.Y;
  (param_6->field0_0x0)._s_0.Z = local_330._s_0.Z;
  if (((param_1->World == (UWorld *)0x0) || (((uint)param_1->World->_padding_ >> 0x1e & 1) != 0)) ||
     (param_2->bEnabled == false)) {
    return false;
  }
  local_300[0].field1_0x4._0_4_ = param_2->SweepRadius;
  dVar7 = (double)param_2->StartOffset;
  lVar19 = 0;
  local_300[0].ShapeType = Sphere;
  local_148.OwnerTag.ComparisonIndex.Value = 0;
  local_148.OwnerTag.Number = 0;
  local_148.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_148.IgnoreComponents.ArrayNum = 0;
  auVar3 = *(undefined1 (*) [16])&(param_1->ApproachDirWS).field0_0x0;
  local_148.IgnoreComponents.ArrayMax = 8;
  dVar1 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
  dVar5 = auVar3._0_8_;
  local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  dVar26 = (double)param_2->EndOffset;
  local_148.IgnoreSourceObjects.ArrayNum = 0;
  local_148.IgnoreSourceObjects.ArrayMax = 4;
  local_148.MobilityType = Any;
  local_148.TraceTag.ComparisonIndex.Value = 0;
  local_148.TraceTag.Number = 0;
  local_318._s_0.X = dVar5 * dVar7 + (param_4->field0_0x0)._s_0.X;
  dVar6 = auVar3._8_8_;
  local_148.bFindInitialOverlaps = true;
  local_148.bReturnFaceIndex = false;
  local_148.bReturnPhysicalMaterial = false;
  local_148.bIgnoreBlocks = false;
  local_148.bComponentListUnique = true;
  local_148.IgnoreMask = '\0';
  local_148.bIgnoreTouches = false;
  local_148.bSkipNarrowPhase = false;
  local_318._s_0.Y = dVar6 * dVar7 + (param_4->field0_0x0)._s_0.Y;
  local_318._s_0.Z = dVar1 * dVar7 + (param_4->field0_0x0)._s_0.Z;
  local_2d0._s_0.X = dVar5 * dVar26 + (param_4->field0_0x0)._s_0.X;
  local_2d0._s_0.Y = dVar6 * dVar26 + (param_4->field0_0x0)._s_0.Y;
  local_2d0._s_0.Z = dVar1 * dVar26 + (param_4->field0_0x0)._s_0.Z;
  local_330._s_0.Z = dVar1;
  TVar17 = FCollisionQueryParams::GetUnknownStatId();
  local_148.StatId.StatIdPtr = *(TStatIdData **)&(TVar17.StatIdPtr)->Name;
  local_148.bDebugQuery = false;
  local_148.bTraceIntoSubComponents = true;
  local_148.bReplaceHitWithSubComponents = true;
  local_148.bTraceComplex = param_3;
  FCollisionQueryParams::AddIgnoredActor(&local_148,param_1->OwningActor);
  lVar18 = 0xd;
  if (!param_3) {
    lVar18 = 0x14;
  }
  EVar16 = UEngineTypes::ConvertToCollisionChannel
                     ((uint)*(byte *)((longlong)&param_2->StartOffset + lVar18));
  memset(local_268,0,0x100);
  fVar10 = __real_3f800000;
  uStack_2d3 = 0;
  uStack_2d1 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0xffffffff;
  local_1b0.ObjectIndex = 0;
  local_1b0.ObjectSerialNumber = 0;
  FStack_1a8.ObjectIndex = 0;
  FStack_1a8.ObjectSerialNumber = 0;
  uStack_2d4 = 0;
  uStack_198._0_4_ = -1;
  uStack_198._4_1_ = Invalid;
  uStack_198._5_3_ = 0;
  local_1a0 = (IActorInstanceManagerInterface *)0x0;
  local_268._4_4_ = 1.0;
  local_1c4 = -1;
  bVar14 = UWorld::SweepSingleByChannel
                     (param_1->World,(FHitResult *)local_268,(TVector<double> *)&local_318._s_0,
                      (TVector<double> *)&local_2d0._s_0,&UE::Math::TQuat<double>::Identity,EVar16,
                      local_300,&local_148,&FCollisionResponseParams::DefaultResponseParam);
  if (((bVar14) &&
      (pUVar4 = param_1->MovementComponent, pUVar4 != (UCharacterMovementComponent *)0x0)) &&
     (cVar15 = (**(code **)(*(longlong *)pUVar4 + 0x908))(pUVar4,local_268), cVar15 != '\0')) {
    (param_5->field0_0x0)._s_0.X = (double)local_268._40_8_;
    (param_5->field0_0x0)._s_0.Y = dStack_238;
    (param_5->field0_0x0)._s_0.Z = local_230;
    (param_6->field0_0x0)._s_0.X = local_210;
    (param_6->field0_0x0)._s_0.Y = dStack_208;
    (param_6->field0_0x0)._s_0.Z = local_200;
    pTVar13 = CVarAnimNodeFootPlacementDebugTraces.Ref;
    bVar14 = IsInParallelGameThread();
    if ((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) {
      lVar19 = 1;
    }
    fVar12 = __real_bf800000;
    fVar11 = __real_41200000;
    if (pTVar13->ShadowedValue[lVar19] != false) {
      FAnimInstanceProxy::AnimDrawDebugPoint
                ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,
                 (TVector<double> *)&local_318._s_0,__real_41200000,&FColor::Purple,false,
                 __real_bf800000,SDPG_Foreground);
      FAnimInstanceProxy::AnimDrawDebugPoint
                ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,param_5,fVar11,&FColor::Purple
                 ,false,fVar12,SDPG_Foreground);
      FAnimInstanceProxy::AnimDrawDebugLine
                ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,
                 (TVector<double> *)&local_318._s_0,param_5,&FColor::Purple,false,fVar12,fVar10,
                 SDPG_Foreground);
    }
    bVar14 = true;
    goto LAB_14a727ba9;
  }
  uVar29 = (uint)__xmm_80000000000000008000000000000000;
  uVar30 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  pUVar4 = param_1->MovementComponent;
  uVar31 = SUB84(dVar1,0) ^ uVar29;
  uVar32 = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar30;
  uVar27 = auVar3._0_4_ ^ uVar29;
  uVar28 = auVar3._4_4_ ^ uVar30;
  uVar29 = auVar3._8_4_ ^ uVar29;
  uVar30 = auVar3._12_4_ ^ uVar30;
  if (pUVar4 == (UCharacterMovementComponent *)0x0) {
    uVar20 = *(undefined4 *)(param_1->OwningComponentToWorld).Translation.ZW.m128d_f64;
    uVar21 = *(undefined4 *)
              ((longlong)(param_1->OwningComponentToWorld).Translation.ZW.m128d_f64 + 4);
LAB_14a727ad3:
    uVar22 = *(undefined4 *)(param_1->OwningComponentToWorld).Translation.XY.m128d_f64;
    uVar23 = *(undefined4 *)
              ((longlong)(param_1->OwningComponentToWorld).Translation.XY.m128d_f64 + 4);
    uVar24 = *(undefined4 *)((param_1->OwningComponentToWorld).Translation.XY.m128d_f64 + 1);
    uVar25 = *(undefined4 *)
              ((longlong)(param_1->OwningComponentToWorld).Translation.XY.m128d_f64 + 0xc);
  }
  else {
    if ((pUVar4->CurrentFloor).bBlockingHit == 0) {
      dVar7 = (param_1->OwningComponentToWorld).Translation.ZW.m128d_f64[0];
      uVar20 = SUB84(dVar7,0);
      uVar21 = (undefined4)((ulonglong)dVar7 >> 0x20);
      goto LAB_14a727ad3;
    }
    uVar22 = *(undefined4 *)&(pUVar4->CurrentFloor).HitResult.ImpactPoint;
    uVar23 = *(undefined4 *)&(pUVar4->CurrentFloor).HitResult.ImpactPoint.field_0x4;
    uVar24 = *(undefined4 *)&(pUVar4->CurrentFloor).HitResult.ImpactPoint.field_0x8;
    uVar25 = *(undefined4 *)&(pUVar4->CurrentFloor).HitResult.ImpactPoint.field_0xc;
    uVar2 = *(undefined8 *)&(pUVar4->CurrentFloor).HitResult.ImpactPoint.field_0x10;
    uVar20 = (undefined4)uVar2;
    uVar21 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  dVar8 = (param_4->field0_0x0)._s_0.X;
  dVar9 = (param_4->field0_0x0)._s_0.Y;
  bVar14 = false;
  dVar7 = (param_4->field0_0x0)._s_0.Z;
  local_330._s_0.Z = (double)CONCAT44(uVar21,uVar20);
  dVar26 = (((double)CONCAT44(uVar28,uVar27) * (double)CONCAT44(uVar23,uVar22) +
             (double)CONCAT44(uVar30,uVar29) * (double)CONCAT44(uVar25,uVar24) +
            (double)CONCAT44(uVar32,uVar31) * local_330._s_0.Z) -
           (dVar9 * (double)CONCAT44(uVar30,uVar29) + dVar8 * (double)CONCAT44(uVar28,uVar27) +
           dVar7 * (double)CONCAT44(uVar32,uVar31))) /
           (dVar6 * (double)CONCAT44(uVar30,uVar29) + dVar5 * (double)CONCAT44(uVar28,uVar27) +
           dVar1 * (double)CONCAT44(uVar32,uVar31));
  (param_5->field0_0x0)._s_0.X = dVar26 * dVar5 + dVar8;
  (param_5->field0_0x0)._s_0.Y = dVar26 * dVar6 + dVar9;
  (param_5->field0_0x0)._s_0.Z = dVar26 * dVar1 + dVar7;
  (param_6->field0_0x0)._s_0.X = (double)CONCAT44(uVar28,uVar27);
  (param_6->field0_0x0)._s_0.Y = (double)CONCAT44(uVar30,uVar29);
  (param_6->field0_0x0)._s_0.Z = (double)CONCAT44(uVar32,uVar31);
LAB_14a727ba9:
  if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar14;
}

// GetDistanceToPlaneAlongDirection @ 14a729470

float __cdecl
UE::Anim::FootPlacement::GetDistanceToPlaneAlongDirection
          (TVector<double> *param_1,TPlane<double> *param_2,TVector<double> *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)uVar1 ^ uVar9;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar6 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar10;
  uVar7 = (uint)*(undefined8 *)&param_3->field0_0x0 ^ uVar9;
  uVar8 = (uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) ^ uVar10;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  uVar9 = (uint)uVar1 ^ uVar9;
  uVar10 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar10;
  dVar4 = (param_2->W -
          ((double)param_2->_padding_ * dVar3 + (double)param_2->_padding_ * dVar2 +
          (double)param_2->_padding_ * (param_1->field0_0x0)._s_0.Z)) /
          ((double)CONCAT44(uVar6,uVar5) * (double)param_2->_padding_ +
           (double)CONCAT44(uVar8,uVar7) * (double)param_2->_padding_ +
          (double)CONCAT44(uVar10,uVar9) * (double)param_2->_padding_);
  return (float)(((param_1->field0_0x0)._s_0.Y - (dVar4 * (double)CONCAT44(uVar6,uVar5) + dVar3)) *
                 (double)CONCAT44(uVar6,uVar5) +
                 ((param_1->field0_0x0)._s_0.X - (dVar4 * (double)CONCAT44(uVar8,uVar7) + dVar2)) *
                 (double)CONCAT44(uVar8,uVar7) +
                ((param_1->field0_0x0)._s_0.Z -
                (dVar4 * (double)CONCAT44(uVar10,uVar9) + (param_1->field0_0x0)._s_0.Z)) *
                (double)CONCAT44(uVar10,uVar9));
}

// SignedAngleRadBetweenNormals @ 14a7307c0

float __cdecl
UE::Anim::SignedAngleRadBetweenNormals
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.X;
  fVar7 = (float)(dVar2 * dVar1 + dVar6 * dVar5 + dVar4 * dVar3);
  fVar8 = __real_bf800000;
  if ((__real_bf800000 <= fVar7) && (fVar8 = fVar7, __real_3f800000 <= fVar7)) {
    fVar8 = __real_3f800000;
  }
  fVar8 = acosf(fVar8);
  if ((float)((dVar5 * dVar4 - dVar6 * dVar3) * (param_3->field0_0x0)._s_0.Y +
              (dVar2 * dVar3 - dVar1 * dVar4) * (param_3->field0_0x0)._s_0.X +
             (dVar1 * dVar6 - dVar2 * dVar5) * (param_3->field0_0x0)._s_0.Z) < 0.0) {
    fVar8 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
  }
  return fVar8;
}

