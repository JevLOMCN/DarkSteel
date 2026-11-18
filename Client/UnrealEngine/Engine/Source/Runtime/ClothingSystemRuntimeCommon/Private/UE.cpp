// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 30

// Construct<FClothTetherData> @ 148c09cc0

void __cdecl UE::CoreUObject::Private::Construct<FClothTetherData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FClothTetherData> @ 148c09cd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothTetherData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FClothTetherData> @ 148c09ce0

void __cdecl UE::CoreUObject::Private::Destruct<FClothTetherData>(void *param_1)

{
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> **)param_1,
             *(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// SerializeArchive<FClothTetherData> @ 148c09d20

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FClothTetherData>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UPackage *pUVar1;
  
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
      Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClothTetherData,(UObject *)pUVar1,
                           L"ClothTetherData");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton,param_1,
               param_2,(UStruct *)Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton,
               (uchar *)0x0,(UObject *)0x0);
  }
  TArrayPrivateFriend::
  Serialize<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,param_2);
  return true;
}

// Copy<FClothTetherData> @ 148c09da0

bool __cdecl
UE::CoreUObject::Private::Copy<FClothTetherData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)pFVar6->Data,
                   *(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pTVar5 = (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
                    (pFVar6->Data,pTVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPointWeightMap> @ 148c0a0e0

void __cdecl UE::CoreUObject::Private::Construct<FPointWeightMap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPointWeightMap> @ 148c0a0f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPointWeightMap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPointWeightMap> @ 148c0a100

void __cdecl UE::CoreUObject::Private::Destruct<FPointWeightMap>(void *param_1)

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

// Copy<FPointWeightMap> @ 148c0a120

bool __cdecl
UE::CoreUObject::Private::Copy<FPointWeightMap>(void *param_1,void *param_2,int param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<float,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FClothConfig_Legacy> @ 148c0a1f0

void __cdecl UE::CoreUObject::Private::Construct<FClothConfig_Legacy>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
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
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3fd99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3fd99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3fd99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3ff0000000000000;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3951b717;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3951b717;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x42f00000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x100) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x108) = uVar1;
  *(double *)((longlong)param_1 + 0x110) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  return;
}

// ConstructForTests<FClothConfig_Legacy> @ 148c0a200

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothConfig_Legacy>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
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
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3fd99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3fd99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3fd99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3fc99999a0000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3ff0000000000000;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3951b717;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3951b717;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x42f00000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x100) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x108) = uVar1;
  *(double *)((longlong)param_1 + 0x110) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  return;
}

// Destruct<FClothConfig_Legacy> @ 148c0a210

void __cdecl UE::CoreUObject::Private::Destruct<FClothConfig_Legacy>(void *param_1)

{
  return;
}

// Copy<FClothConfig_Legacy> @ 148c0a220

bool __cdecl
UE::CoreUObject::Private::Copy<FClothConfig_Legacy>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_138 [39];
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      lVar9 = 2;
      puVar5 = (undefined8 *)(lVar10 + (longlong)param_1);
      puVar6 = local_138;
      do {
        puVar8 = puVar6;
        puVar7 = puVar5;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar1;
        uVar1 = puVar7[4];
        uVar4 = puVar7[5];
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        uVar2 = puVar7[6];
        uVar3 = puVar7[7];
        puVar8[4] = uVar1;
        puVar8[5] = uVar4;
        uVar1 = puVar7[8];
        uVar4 = puVar7[9];
        puVar8[6] = uVar2;
        puVar8[7] = uVar3;
        uVar2 = puVar7[10];
        uVar3 = puVar7[0xb];
        puVar8[8] = uVar1;
        puVar8[9] = uVar4;
        uVar1 = puVar7[0xc];
        uVar4 = puVar7[0xd];
        puVar8[10] = uVar2;
        puVar8[0xb] = uVar3;
        uVar2 = puVar7[0xe];
        uVar3 = puVar7[0xf];
        puVar8[0xc] = uVar1;
        puVar8[0xd] = uVar4;
        puVar8[0xe] = uVar2;
        puVar8[0xf] = uVar3;
        lVar9 = lVar9 + -1;
        puVar5 = puVar7 + 0x10;
        puVar6 = puVar8 + 0x10;
      } while (lVar9 != 0);
      uVar1 = puVar7[0x11];
      lVar9 = 2;
      uVar2 = puVar7[0x12];
      uVar3 = puVar7[0x13];
      puVar8[0x10] = puVar7[0x10];
      puVar8[0x11] = uVar1;
      uVar1 = puVar7[0x14];
      uVar4 = puVar7[0x15];
      puVar8[0x12] = uVar2;
      puVar8[0x13] = uVar3;
      puVar8[0x14] = uVar1;
      puVar8[0x15] = uVar4;
      puVar5 = local_138;
      puVar6 = param_1;
      do {
        puVar8 = puVar6;
        puVar7 = puVar5;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar1;
        uVar1 = puVar7[4];
        uVar4 = puVar7[5];
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        uVar2 = puVar7[6];
        uVar3 = puVar7[7];
        puVar8[4] = uVar1;
        puVar8[5] = uVar4;
        uVar1 = puVar7[8];
        uVar4 = puVar7[9];
        puVar8[6] = uVar2;
        puVar8[7] = uVar3;
        uVar2 = puVar7[10];
        uVar3 = puVar7[0xb];
        puVar8[8] = uVar1;
        puVar8[9] = uVar4;
        uVar1 = puVar7[0xc];
        uVar4 = puVar7[0xd];
        puVar8[10] = uVar2;
        puVar8[0xb] = uVar3;
        uVar2 = puVar7[0xe];
        uVar3 = puVar7[0xf];
        puVar8[0xc] = uVar1;
        puVar8[0xd] = uVar4;
        puVar8[0xe] = uVar2;
        puVar8[0xf] = uVar3;
        lVar9 = lVar9 + -1;
        puVar5 = puVar7 + 0x10;
        puVar6 = puVar8 + 0x10;
      } while (lVar9 != 0);
      uVar1 = puVar7[0x11];
      param_1 = (void *)((longlong)param_1 + 0x130);
      uVar2 = puVar7[0x12];
      uVar3 = puVar7[0x13];
      puVar8[0x10] = puVar7[0x10];
      puVar8[0x11] = uVar1;
      uVar1 = puVar7[0x14];
      uVar4 = puVar7[0x15];
      puVar8[0x12] = uVar2;
      puVar8[0x13] = uVar3;
      puVar8[0x14] = uVar1;
      puVar8[0x15] = uVar4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FClothPhysicalMeshData> @ 148c0a460

void __cdecl UE::CoreUObject::Private::Construct<FClothPhysicalMeshData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  FClothPhysicalMeshData::ClearWeightMaps(param_1);
  return;
}

// ConstructForTests<FClothPhysicalMeshData> @ 148c0a470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothPhysicalMeshData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  FClothPhysicalMeshData::ClearWeightMaps(param_1);
  return;
}

// Destruct<FClothPhysicalMeshData> @ 148c0a4c0

void __cdecl UE::CoreUObject::Private::Destruct<FClothPhysicalMeshData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> **)
              ((longlong)param_1 + 0x100),*(int *)((longlong)param_1 + 0x108));
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> **)
              ((longlong)param_1 + 0xf0),*(int *)((longlong)param_1 + 0xf8));
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FClothPhysicalMeshData> @ 148c0a4d0

bool __cdecl
UE::CoreUObject::Private::Copy<FClothPhysicalMeshData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  int iVar3;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x30),
                (TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x30));
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80),
               (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x80));
    pTVar2 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x90);
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x90)) {
      iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x90))->ArrayNum;
      piVar1 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x90))->ArrayMax;
      _Src = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x90))->AllocatorInstance).Data;
      ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x4c,4,iVar3,*piVar1,(ForAnyElementType *)pTVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x4c);
        }
      }
    }
    this = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)((longlong)param_1 + 0xa0);
    if (this != (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)((longlong)param_2 + 0xa0)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0xd0))->ArrayNum,
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0xe0))->ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0xd0))->ArrayNum,
                 ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0xe0))->ArrayNum);
      iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0xa0))->ArrayNum;
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar3);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar3,(ForAnyElementType *)this,
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0xa0))->ArrayNum,
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0xa0))->ArrayMax);
      *(undefined4 *)
       &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xd0)
         )->AllocatorInstance).Data =
           *(undefined4 *)
            &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0xd0))->AllocatorInstance).Data;
      *(undefined4 *)
       ((longlong)
        &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_1 + 0xd0))->AllocatorInstance).Data + 4) =
           *(undefined4 *)
            ((longlong)
             &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0xd0))->AllocatorInstance).Data + 4);
      if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0xb0) !=
          (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0xb0)) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0xb0),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0xb0));
      }
      if (iVar3 != 0) {
        memcpy(*(void **)this,*(void **)((longlong)param_2 + 0xa0),(longlong)iVar3 * 0xc);
      }
    }
    FClothTetherData::operator=
              ((FClothTetherData *)((longlong)param_1 + 0xf0),
               (FClothTetherData *)((longlong)param_2 + 0xf0));
    FClothTetherData::operator=
              ((FClothTetherData *)((longlong)param_1 + 0x100),
               (FClothTetherData *)((longlong)param_2 + 0x100));
    *(undefined4 *)
     &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x110))
      ->AllocatorInstance).Data =
         *(undefined4 *)
          &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x110))->AllocatorInstance).Data;
    *(undefined4 *)
     ((longlong)
      &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x110)
        )->AllocatorInstance).Data + 4) =
         *(undefined4 *)
          ((longlong)
           &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x110))->AllocatorInstance).Data + 4);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
               &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x110))->ArrayNum,
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
               &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x110))->ArrayNum);
    param_1 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x120))->ArrayNum;
    param_2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x120))->ArrayNum;
  }
  return true;
}

// Construct<FClothConstraintSetup_Legacy> @ 148c0a710

void __cdecl UE::CoreUObject::Private::Construct<FClothConstraintSetup_Legacy>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// ConstructForTests<FClothConstraintSetup_Legacy> @ 148c0a740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FClothConstraintSetup_Legacy>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// Destruct<FClothConstraintSetup_Legacy> @ 148c0a770

void __cdecl UE::CoreUObject::Private::Destruct<FClothConstraintSetup_Legacy>(void *param_1)

{
  return;
}

// Copy<FClothConstraintSetup_Legacy> @ 148c0a780

bool __cdecl
UE::CoreUObject::Private::Copy<FClothConstraintSetup_Legacy>
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

// Construct<FClothParameterMask_Legacy> @ 148c0a9f0

void __cdecl UE::CoreUObject::Private::Construct<FClothParameterMask_Legacy>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FClothParameterMask_Legacy> @ 148c0aa20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothParameterMask_Legacy>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FClothParameterMask_Legacy> @ 148c0aa50

void __cdecl UE::CoreUObject::Private::Destruct<FClothParameterMask_Legacy>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FClothParameterMask_Legacy> @ 148c0aa70

bool __cdecl
UE::CoreUObject::Private::Copy<FClothParameterMask_Legacy>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_1 + lVar1 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar1 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x10);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x18),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar1 + 0x18));
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x28);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FClothLODDataCommon> @ 148c0ab50

void __cdecl UE::CoreUObject::Private::Construct<FClothLODDataCommon>(void *param_1)

{
  memset(param_1,0,0x158);
  FClothPhysicalMeshData::FClothPhysicalMeshData(param_1);
  *(undefined1 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x130) = 0;
  return;
}

// ConstructForTests<FClothLODDataCommon> @ 148c0abb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothLODDataCommon>(void *param_1)

{
  FClothPhysicalMeshData::FClothPhysicalMeshData(param_1);
  *(undefined1 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x130) = 0;
  return;
}

// Destruct<FClothLODDataCommon> @ 148c0ac00

void __cdecl UE::CoreUObject::Private::Destruct<FClothLODDataCommon>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  FClothPhysicalMeshData::~FClothPhysicalMeshData(param_1);
  return;
}

// SerializeArchive<FClothLODDataCommon> @ 148c0ac40

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FClothLODDataCommon>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UPackage *pUVar1;
  FArchive *pFVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FClothingAssetCustomVersion::GUID);
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
      Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClothLODDataCommon,(UObject *)pUVar1,
                           L"ClothLODDataCommon");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton,
               param_1,param_2,
               (UStruct *)Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton,
               (uchar *)0x0,(UObject *)0x0);
  }
  pFVar2 = TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
                     (param_1,(TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                              ((longlong)param_2 + 0x138));
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (pFVar2,(TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                    ((longlong)param_2 + 0x148));
  return true;
}

// Copy<FClothLODDataCommon> @ 148c0acf0

bool __cdecl
UE::CoreUObject::Private::Copy<FClothLODDataCommon>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FClothPhysicalMeshData::operator=(param_1,param_2);
    *(undefined1 *)
     &(((FClothPhysicalMeshData *)((longlong)param_1 + 0x128))->Vertices).AllocatorInstance.Data =
         *(undefined1 *)
          &(((FClothPhysicalMeshData *)((longlong)param_2 + 0x128))->Vertices).AllocatorInstance.
           Data;
    *(undefined4 *)
     ((longlong)
      &(((FClothPhysicalMeshData *)((longlong)param_1 + 0x128))->Vertices).AllocatorInstance.Data +
     4) = *(undefined4 *)
           ((longlong)
            &(((FClothPhysicalMeshData *)((longlong)param_2 + 0x128))->Vertices).AllocatorInstance.
             Data + 4);
    *(char *)&(((FClothPhysicalMeshData *)((longlong)param_1 + 0x128))->Vertices).ArrayNum =
         (char)(((FClothPhysicalMeshData *)((longlong)param_2 + 0x128))->Vertices).ArrayNum;
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               &((FClothPhysicalMeshData *)((longlong)param_1 + 0x128))->Normals,
               (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               &((FClothPhysicalMeshData *)((longlong)param_2 + 0x128))->Normals);
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               &((FClothPhysicalMeshData *)((longlong)param_1 + 0x128))->Indices,
               (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               &((FClothPhysicalMeshData *)((longlong)param_2 + 0x128))->Indices);
    param_2 = &((FClothPhysicalMeshData *)((longlong)param_2 + 0x128))->WeightMaps;
    param_1 = &((FClothPhysicalMeshData *)((longlong)param_1 + 0x128))->WeightMaps;
  }
  return true;
}

