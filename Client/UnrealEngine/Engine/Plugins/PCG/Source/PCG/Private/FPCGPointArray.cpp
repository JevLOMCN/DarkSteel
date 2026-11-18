// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// ~FPCGPointArray @ 149891190

void __thiscall FPCGPointArray::~FPCGPointArray(FPCGPointArray *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MetadataEntry).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Seed).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Steepness).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Color).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundsMax).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundsMin).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Density).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Transform).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 149892710

/* WARNING: Type propagation algorithm not settling */

FPCGPointArray * __thiscall FPCGPointArray::operator=(FPCGPointArray *this,FPCGPointArray *param_1)

{
  int *piVar1;
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  if (this != param_1) {
    iVar3 = (param_1->Transform).Values.ArrayNum;
    piVar1 = &(this->Transform).Values.ArrayMax;
    pFVar5 = (param_1->Transform).Values.AllocatorInstance.Data;
    iVar4 = *piVar1;
    (this->Transform).Values.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar3,iVar4,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Transform).Values.AllocatorInstance.Data,pFVar5,(longlong)iVar3 * 0x60);
      }
    }
  }
  dVar6 = (param_1->Transform).Value.Rotation.XY.m128d_f64[1];
  (this->Transform).Value.Rotation.XY.m128d_f64[0] =
       (param_1->Transform).Value.Rotation.XY.m128d_f64[0];
  (this->Transform).Value.Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Value.Rotation.ZW.m128d_f64[1];
  (this->Transform).Value.Rotation.ZW.m128d_f64[0] =
       (param_1->Transform).Value.Rotation.ZW.m128d_f64[0];
  (this->Transform).Value.Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Value.Translation.XY.m128d_f64[1];
  (this->Transform).Value.Translation.XY.m128d_f64[0] =
       (param_1->Transform).Value.Translation.XY.m128d_f64[0];
  (this->Transform).Value.Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Value.Translation.ZW.m128d_f64[1];
  (this->Transform).Value.Translation.ZW.m128d_f64[0] =
       (param_1->Transform).Value.Translation.ZW.m128d_f64[0];
  (this->Transform).Value.Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Value.Scale3D.XY.m128d_f64[1];
  (this->Transform).Value.Scale3D.XY.m128d_f64[0] =
       (param_1->Transform).Value.Scale3D.XY.m128d_f64[0];
  (this->Transform).Value.Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Value.Scale3D.ZW.m128d_f64[1];
  (this->Transform).Value.Scale3D.ZW.m128d_f64[0] =
       (param_1->Transform).Value.Scale3D.ZW.m128d_f64[0];
  (this->Transform).Value.Scale3D.ZW.m128d_f64[1] = dVar6;
  (this->Transform).NumValues = (param_1->Transform).NumValues;
  FPCGPointArrayProperty<float>::operator=(&this->Density,&param_1->Density);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->BoundsMin).Values,&(param_1->BoundsMin).Values);
  dVar6 = (param_1->BoundsMin).Value.field0_0x0._s_0.Y;
  (this->BoundsMin).Value.field0_0x0._s_0.X = (param_1->BoundsMin).Value.field0_0x0._s_0.X;
  (this->BoundsMin).Value.field0_0x0._s_0.Y = dVar6;
  (this->BoundsMin).Value.field0_0x0._s_0.Z = (param_1->BoundsMin).Value.field0_0x0._s_0.Z;
  (this->BoundsMin).NumValues = (param_1->BoundsMin).NumValues;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->BoundsMax).Values,&(param_1->BoundsMax).Values);
  dVar6 = (param_1->BoundsMax).Value.field0_0x0._s_0.Y;
  pFVar2 = &this->Color;
  (this->BoundsMax).Value.field0_0x0._s_0.X = (param_1->BoundsMax).Value.field0_0x0._s_0.X;
  (this->BoundsMax).Value.field0_0x0._s_0.Y = dVar6;
  (this->BoundsMax).Value.field0_0x0._s_0.Z = (param_1->BoundsMax).Value.field0_0x0._s_0.Z;
  (this->BoundsMax).NumValues = (param_1->BoundsMax).NumValues;
  if (pFVar2 != &param_1->Color) {
    iVar3 = (param_1->Color).Values.ArrayNum;
    piVar1 = &(this->Color).Values.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = (param_1->Color).Values.AllocatorInstance.Data;
    (this->Color).Values.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Values).AllocatorInstance.Data,pFVar5,(longlong)iVar3 << 5);
      }
    }
  }
  dVar6 = (param_1->Color).Value.field0_0x0._s_0.Y;
  (this->Color).Value.field0_0x0._s_0.X = (param_1->Color).Value.field0_0x0._s_0.X;
  (this->Color).Value.field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->Color).Value.field0_0x0._s_0.W;
  (this->Color).Value.field0_0x0._s_0.Z = (param_1->Color).Value.field0_0x0._s_0.Z;
  (this->Color).Value.field0_0x0._s_0.W = dVar6;
  (this->Color).NumValues = (param_1->Color).NumValues;
  FPCGPointArrayProperty<float>::operator=(&this->Steepness,&param_1->Steepness);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&(this->Seed).Values,&(param_1->Seed).Values);
  (this->Seed).Value = (param_1->Seed).Value;
  (this->Seed).NumValues = (param_1->Seed).NumValues;
  TArray<__int64,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MetadataEntry).Values,&(param_1->MetadataEntry).Values);
  (this->MetadataEntry).Value = (param_1->MetadataEntry).Value;
  (this->MetadataEntry).NumValues = (param_1->MetadataEntry).NumValues;
  this->NumPoints = param_1->NumPoints;
  this->bInitializedValues = param_1->bInitializedValues;
  return this;
}

// StaticStruct @ 149f1a8d0

UScriptStruct * __cdecl FPCGPointArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPointArray.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPointArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPointArray,(UObject *)pUVar1,L"PCGPointArray"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FPCGPointArray.OuterSingleton;
}

// FPCGPointArray @ 149f31490

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPCGPointArray * __thiscall FPCGPointArray::FPCGPointArray(FPCGPointArray *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  float fVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  long64 lVar26;
  bool bVar27;
  FPCGPointArray *pFVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  long64 local_d0;
  undefined1 local_c8 [16];
  
  uVar32 = 0;
  (this->Transform).Values.ArrayNum = 0;
  (this->Transform).Values.ArrayMax = 0;
  (this->Transform).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Value.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Value.Rotation.XY.m128d_f64[1] = (double)fVar4;
  fVar20 = __real_3f800000;
  (this->Transform).Value.Rotation.ZW.m128d_f64[0] = (double)fVar5;
  (this->Transform).Value.Rotation.ZW.m128d_f64[1] = (double)fVar6;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Value.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Value.Translation.XY.m128d_f64[1] = (double)fVar4;
  uVar21 = __xmm_80000000000000008000000000000000;
  (this->Transform).Value.Translation.ZW.m128d_f64[0] = (double)fVar5;
  (this->Transform).Value.Translation.ZW.m128d_f64[1] = (double)fVar6;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Value.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Value.Scale3D.XY.m128d_f64[1] = (double)fVar4;
  (this->Transform).Value.Scale3D.ZW.m128d_f64[0] = (double)fVar5;
  (this->Transform).Value.Scale3D.ZW.m128d_f64[1] = (double)fVar6;
  (this->Density).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Density).Values.ArrayNum = 0;
  (this->Density).Values.ArrayMax = 0;
  (this->BoundsMin).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsMin).Values.ArrayNum = 0;
  (this->BoundsMin).Values.ArrayMax = 0;
  (this->BoundsMax).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsMax).Values.ArrayNum = 0;
  (this->BoundsMax).Values.ArrayMax = 0;
  (this->Color).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Color).Values.ArrayNum = 0;
  (this->Color).Values.ArrayMax = 0;
  (this->Color).Value.field0_0x0._s_0.X = 0.0;
  (this->Color).Value.field0_0x0._s_0.Y = 0.0;
  (this->Color).Value.field0_0x0._s_0.Z = 0.0;
  (this->Color).Value.field0_0x0._s_0.W = 1.0;
  (this->Steepness).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Steepness).Values.ArrayNum = 0;
  (this->Steepness).Values.ArrayMax = 0;
  (this->Seed).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Seed).Values.ArrayNum = 0;
  (this->Seed).Values.ArrayMax = 0;
  (this->MetadataEntry).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataEntry).Values.ArrayNum = 0;
  (this->MetadataEntry).Values.ArrayMax = 0;
  this->NumPoints = 0;
  this->bInitializedValues = false;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar37 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar38 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar39 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar40 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[0];
  uVar41 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar42 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar43 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar44 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar45 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar46 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar47 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar48 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar36 = (uint)uVar21;
  uVar30 = (uint)((ulonglong)uVar21 >> 0x20);
  local_130._s_0.X =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                              0x20) ^ uVar30,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar36);
  local_130._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                              0x20) ^ uVar30,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar36);
  iVar29 = (this->Transform).Values.ArrayNum;
  local_118._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_118._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_f8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_f0 = _UNK_150689688;
  local_e8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_e0 = _UNK_150689688;
  local_130._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar30,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar36);
  local_118._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_d8 = 0x3f000000;
  local_d0 = -1;
  uVar31 = uVar32;
  uVar34 = uVar32;
  if (0 < iVar29) {
    do {
      uVar30 = (uint)uVar31;
      auVar35._8_4_ = uVar45;
      auVar35._0_8_ = (double)fVar9;
      auVar35._12_4_ = uVar46;
      uVar36 = 0;
      if ((int)uVar30 < iVar29) {
        uVar36 = ~uVar30 >> 0x1f;
      }
      local_c8._8_4_ = uVar47;
      local_c8._0_8_ = (double)fVar6;
      local_c8._12_4_ = uVar48;
      if ((uVar36 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar3 = (code *)swi(3);
        pFVar28 = (FPCGPointArray *)(*pcVar3)();
        return pFVar28;
      }
      pFVar1 = (this->Transform).Values.AllocatorInstance.Data;
      auVar10._8_4_ = uVar37;
      auVar10._0_8_ = (double)fVar7;
      auVar10._12_4_ = uVar38;
      *(undefined1 (*) [16])(pFVar1 + uVar34) = auVar10;
      auVar17._8_4_ = uVar39;
      auVar17._0_8_ = (double)fVar4;
      auVar17._12_4_ = uVar40;
      *(undefined1 (*) [16])(pFVar1 + uVar34 + 0x10) = auVar17;
      auVar18._8_4_ = uVar41;
      auVar18._0_8_ = (double)fVar8;
      auVar18._12_4_ = uVar42;
      *(undefined1 (*) [16])(pFVar1 + uVar34 + 0x20) = auVar18;
      auVar19._8_4_ = uVar43;
      auVar19._0_8_ = (double)fVar5;
      auVar19._12_4_ = uVar44;
      *(undefined1 (*) [16])(pFVar1 + uVar34 + 0x30) = auVar19;
      *(undefined1 (*) [16])(pFVar1 + uVar34 + 0x40) = auVar35;
      *(undefined8 *)(pFVar1 + uVar34 + 0x50) = local_c8._0_8_;
      *(undefined8 *)(pFVar1 + uVar34 + 0x50 + 8) = local_c8._8_8_;
      iVar29 = (this->Transform).Values.ArrayNum;
      uVar31 = (ulonglong)(uVar30 + 1);
      uVar34 = uVar34 + 0x60;
    } while ((int)(uVar30 + 1) < iVar29);
  }
  auVar11._8_4_ = uVar37;
  auVar11._0_8_ = (double)fVar7;
  auVar11._12_4_ = uVar38;
  *(undefined1 (*) [16])(this->Transform).Value.Rotation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = uVar39;
  auVar12._0_8_ = (double)fVar4;
  auVar12._12_4_ = uVar40;
  *(undefined1 (*) [16])(this->Transform).Value.Rotation.ZW.m128d_f64 = auVar12;
  auVar13._8_4_ = uVar41;
  auVar13._0_8_ = (double)fVar8;
  auVar13._12_4_ = uVar42;
  *(undefined1 (*) [16])(this->Transform).Value.Translation.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = uVar43;
  auVar14._0_8_ = (double)fVar5;
  auVar14._12_4_ = uVar44;
  *(undefined1 (*) [16])(this->Transform).Value.Translation.ZW.m128d_f64 = auVar14;
  auVar15._8_4_ = uVar45;
  auVar15._0_8_ = (double)fVar9;
  auVar15._12_4_ = uVar46;
  *(undefined1 (*) [16])(this->Transform).Value.Scale3D.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = uVar47;
  auVar16._0_8_ = (double)fVar6;
  auVar16._12_4_ = uVar48;
  *(undefined1 (*) [16])(this->Transform).Value.Scale3D.ZW.m128d_f64 = auVar16;
  iVar29 = (this->Density).Values.ArrayNum;
  uVar36 = 0;
  uVar31 = uVar32;
  uVar34 = uVar32;
  if (0 < iVar29) {
    do {
      uVar33 = (uint)uVar34;
      uVar30 = uVar36;
      if ((int)uVar33 < iVar29) {
        uVar30 = ~uVar33 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar3 = (code *)swi(3);
        pFVar28 = (FPCGPointArray *)(*pcVar3)();
        return pFVar28;
      }
      *(float *)((this->Density).Values.AllocatorInstance.Data + uVar31) = fVar20;
      iVar29 = (this->Density).Values.ArrayNum;
      uVar31 = uVar31 + 4;
      uVar34 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < iVar29);
  }
  (this->Density).Value = fVar20;
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetValue
            (&this->BoundsMin,(TVector<double> *)&local_130._s_0);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetValue
            (&this->BoundsMax,(TVector<double> *)&local_118._s_0);
  iVar29 = (this->Color).Values.ArrayNum;
  uVar31 = uVar32;
  uVar34 = uVar32;
  if (0 < iVar29) {
    do {
      dVar25 = dStack_e0;
      dVar24 = local_e8;
      dVar23 = dStack_f0;
      dVar22 = local_f8;
      uVar33 = (uint)uVar34;
      uVar30 = uVar36;
      if ((int)uVar33 < iVar29) {
        uVar30 = ~uVar33 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar3 = (code *)swi(3);
        pFVar28 = (FPCGPointArray *)(*pcVar3)();
        return pFVar28;
      }
      pFVar2 = (this->Color).Values.AllocatorInstance.Data;
      pFVar1 = pFVar2 + uVar31;
      *(double *)pFVar1 = dVar22;
      *(double *)(pFVar1 + 8) = dVar23;
      pFVar2 = pFVar2 + uVar31 + 0x10;
      *(double *)pFVar2 = dVar24;
      *(double *)(pFVar2 + 8) = dVar25;
      iVar29 = (this->Color).Values.ArrayNum;
      uVar31 = uVar31 + 0x20;
      uVar34 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < iVar29);
  }
  (this->Color).Value.field0_0x0._s_0.X = local_f8;
  (this->Color).Value.field0_0x0._s_0.Y = dStack_f0;
  (this->Color).Value.field0_0x0._s_0.Z = local_e8;
  (this->Color).Value.field0_0x0._s_0.W = dStack_e0;
  iVar29 = (this->Steepness).Values.ArrayNum;
  uVar31 = uVar32;
  uVar34 = uVar32;
  if (0 < iVar29) {
    do {
      uVar37 = (float)local_d8;
      uVar33 = (uint)uVar34;
      uVar30 = uVar36;
      if ((int)uVar33 < iVar29) {
        uVar30 = ~uVar33 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar3 = (code *)swi(3);
        pFVar28 = (FPCGPointArray *)(*pcVar3)();
        return pFVar28;
      }
      *(undefined4 *)((this->Steepness).Values.AllocatorInstance.Data + uVar31) = uVar37;
      iVar29 = (this->Steepness).Values.ArrayNum;
      uVar31 = uVar31 + 4;
      uVar34 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < iVar29);
  }
  (this->Steepness).Value = (float)local_d8;
  iVar29 = (this->Seed).Values.ArrayNum;
  uVar31 = uVar32;
  uVar34 = uVar32;
  if (0 < iVar29) {
    do {
      uVar37 = local_d8._4_4_;
      uVar33 = (uint)uVar34;
      uVar30 = uVar36;
      if ((int)uVar33 < iVar29) {
        uVar30 = ~uVar33 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar3 = (code *)swi(3);
        pFVar28 = (FPCGPointArray *)(*pcVar3)();
        return pFVar28;
      }
      *(undefined4 *)((this->Seed).Values.AllocatorInstance.Data + uVar31) = uVar37;
      iVar29 = (this->Seed).Values.ArrayNum;
      uVar31 = uVar31 + 4;
      uVar34 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < iVar29);
  }
  (this->Seed).Value = local_d8._4_4_;
  iVar29 = (this->MetadataEntry).Values.ArrayNum;
  uVar31 = uVar32;
  if (0 < iVar29) {
    do {
      lVar26 = local_d0;
      uVar33 = (uint)uVar31;
      uVar30 = uVar36;
      if ((int)uVar33 < iVar29) {
        uVar30 = ~uVar33 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar3 = (code *)swi(3);
        pFVar28 = (FPCGPointArray *)(*pcVar3)();
        return pFVar28;
      }
      *(long64 *)((this->MetadataEntry).Values.AllocatorInstance.Data + uVar32) = lVar26;
      uVar32 = uVar32 + 8;
      iVar29 = (this->MetadataEntry).Values.ArrayNum;
      uVar31 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < iVar29);
  }
  (this->MetadataEntry).Value = local_d0;
  return this;
}

// Allocate @ 149f3c390

void __thiscall FPCGPointArray::Allocate(FPCGPointArray *this,EPCGPointNativeProperties param_1)

{
  bool *pbVar1;
  
  pbVar1 = &this->bInitializedValues;
  if ((param_1 & Transform) != None) {
    FPCGPointArrayProperty<UE::Math::TTransform<double>_>::SetNum
              (&this->Transform,(this->Transform).NumValues,true,*pbVar1);
  }
  if ((param_1 & Density) != None) {
    FPCGPointArrayProperty<float>::SetNum(&this->Density,(this->Density).NumValues,true,*pbVar1);
  }
  if ((param_1 & BoundsMin) != None) {
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetNum
              (&this->BoundsMin,(this->BoundsMin).NumValues,true,*pbVar1);
  }
  if ((param_1 & BoundsMax) != None) {
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetNum
              (&this->BoundsMax,(this->BoundsMax).NumValues,true,*pbVar1);
  }
  pbVar1 = &this->bInitializedValues;
  if ((param_1 & Color) != None) {
    FPCGPointArrayProperty<UE::Math::TVector4<double>_>::SetNum
              (&this->Color,(this->Color).NumValues,true,*pbVar1);
  }
  if ((param_1 & Steepness) != None) {
    FPCGPointArrayProperty<float>::SetNum(&this->Steepness,(this->Steepness).NumValues,true,*pbVar1)
    ;
  }
  if ((param_1 & Seed) != None) {
    FPCGPointArrayProperty<int>::SetNum(&this->Seed,(this->Seed).NumValues,true,*pbVar1);
  }
  if ((char)param_1 < '\0') {
    FPCGPointArrayProperty<__int64>::SetNum
              (&this->MetadataEntry,(this->MetadataEntry).NumValues,true,this->bInitializedValues);
  }
  return;
}

// CopyPropertiesTo @ 149f40310

void __thiscall
FPCGPointArray::CopyPropertiesTo
          (FPCGPointArray *this,FPCGPointArray *param_1,int param_2,int param_3,int param_4,
          EPCGPointNativeProperties param_5)

{
  if ((param_5 & Transform) != None) {
    FPCGPointArrayProperty<UE::Math::TTransform<double>_>::CopyTo
              (&this->Transform,&param_1->Transform,param_2,param_3,param_4);
  }
  if ((param_5 & Density) != None) {
    FPCGPointArrayProperty<float>::CopyTo(&this->Density,&param_1->Density,param_2,param_3,param_4);
  }
  if ((param_5 & BoundsMin) != None) {
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyTo
              (&this->BoundsMin,&param_1->BoundsMin,param_2,param_3,param_4);
  }
  if ((param_5 & BoundsMax) != None) {
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyTo
              (&this->BoundsMax,&param_1->BoundsMax,param_2,param_3,param_4);
  }
  if ((param_5 & Color) != None) {
    FPCGPointArrayProperty<UE::Math::TVector4<double>_>::CopyTo
              (&this->Color,&param_1->Color,param_2,param_3,param_4);
  }
  if ((param_5 & Steepness) != None) {
    FPCGPointArrayProperty<float>::CopyTo
              (&this->Steepness,&param_1->Steepness,param_2,param_3,param_4);
  }
  if ((param_5 & Seed) != None) {
    FPCGPointArrayProperty<int>::CopyTo(&this->Seed,&param_1->Seed,param_2,param_3,param_4);
  }
  if ((char)param_5 < '\0') {
    FPCGPointArrayProperty<__int64>::CopyTo
              (&this->MetadataEntry,&param_1->MetadataEntry,param_2,param_3,param_4);
  }
  return;
}

// Free @ 149f46480

void __thiscall FPCGPointArray::Free(FPCGPointArray *this,EPCGPointNativeProperties param_1)

{
  int iVar1;
  
  if ((param_1 & Transform) != None) {
    iVar1 = (this->Transform).Values.ArrayMax;
    (this->Transform).Values.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,(ForAnyElementType *)this,0,&(this->Transform).Values.ArrayMax);
    }
  }
  if ((param_1 & Density) != None) {
    iVar1 = (this->Density).Values.ArrayMax;
    (this->Density).Values.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->Density,0,&(this->Density).Values.ArrayMax);
    }
  }
  if ((param_1 & BoundsMin) != None) {
    iVar1 = (this->BoundsMin).Values.ArrayMax;
    (this->BoundsMin).Values.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->BoundsMin,0,&(this->BoundsMin).Values.ArrayMax
                );
    }
  }
  if ((param_1 & BoundsMax) != None) {
    iVar1 = (this->BoundsMax).Values.ArrayMax;
    (this->BoundsMax).Values.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->BoundsMax,0,&(this->BoundsMax).Values.ArrayMax
                );
    }
  }
  if ((param_1 & Color) != None) {
    iVar1 = (this->Color).Values.ArrayMax;
    (this->Color).Values.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,0,(ForAnyElementType *)&this->Color,0,&(this->Color).Values.ArrayMax);
    }
  }
  if ((param_1 & Steepness) != None) {
    iVar1 = (this->Steepness).Values.ArrayMax;
    (this->Steepness).Values.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->Steepness,0,&(this->Steepness).Values.ArrayMax);
    }
  }
  if ((param_1 & Seed) != None) {
    iVar1 = (this->Seed).Values.ArrayMax;
    (this->Seed).Values.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->Seed,0,&(this->Seed).Values.ArrayMax);
    }
  }
  if ((char)param_1 < '\0') {
    iVar1 = (this->MetadataEntry).Values.ArrayMax;
    (this->MetadataEntry).Values.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->MetadataEntry,0,
                 &(this->MetadataEntry).Values.ArrayMax);
    }
  }
  return;
}

// GetAllocatedProperties @ 149f47c80

EPCGPointNativeProperties __thiscall FPCGPointArray::GetAllocatedProperties(FPCGPointArray *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  EPCGPointNativeProperties EVar5;
  EPCGPointNativeProperties EVar6;
  
  iVar1 = (this->Transform).Values.ArrayNum;
  if ((iVar1 != 0) && (iVar1 != (this->Transform).NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar1 = (this->Transform).Values.ArrayNum;
  iVar2 = (this->Density).Values.ArrayNum;
  EVar5 = (EPCGPointNativeProperties)(iVar1 != 0);
  if ((iVar2 != 0) && (iVar2 != (this->Density).NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  if ((this->Density).Values.ArrayNum != 0) {
    EVar5 = (iVar1 != 0) + Density;
  }
  iVar1 = (this->BoundsMin).Values.ArrayNum;
  if ((iVar1 != 0) && (iVar1 != (this->BoundsMin).NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar1 = (this->BoundsMax).Values.ArrayNum;
  EVar6 = EVar5 | BoundsMin;
  if ((this->BoundsMin).Values.ArrayNum == 0) {
    EVar6 = EVar5;
  }
  if ((iVar1 != 0) && (iVar1 != (this->BoundsMax).NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar1 = (this->Color).Values.ArrayNum;
  EVar5 = EVar6 | BoundsMax;
  if ((this->BoundsMax).Values.ArrayNum == 0) {
    EVar5 = EVar6;
  }
  if ((iVar1 != 0) && (iVar1 != (this->Color).NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar1 = (this->Steepness).Values.ArrayNum;
  EVar6 = EVar5 | Color;
  if ((this->Color).Values.ArrayNum == 0) {
    EVar6 = EVar5;
  }
  if ((iVar1 != 0) && (iVar1 != (this->Steepness).NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar1 = (this->Seed).Values.ArrayNum;
  EVar5 = EVar6 | Steepness;
  if ((this->Steepness).Values.ArrayNum == 0) {
    EVar5 = EVar6;
  }
  if ((iVar1 != 0) && (iVar1 != (this->Seed).NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar1 = (this->MetadataEntry).Values.ArrayNum;
  EVar6 = EVar5 | Seed;
  if ((this->Seed).Values.ArrayNum == 0) {
    EVar6 = EVar5;
  }
  if ((iVar1 != 0) && (iVar1 != (this->MetadataEntry).NumValues)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<581474658470068384>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                       ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  EVar5 = EVar6 | MetadataEntry;
  if ((this->MetadataEntry).Values.ArrayNum == 0) {
    EVar5 = EVar6;
  }
  return EVar5;
}

// GetTransformCopy @ 149f4f5b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FPCGPointArray::GetTransformCopy
          (FPCGPointArray *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  iVar1 = (this->Transform).Values.ArrayNum;
  if (((iVar1 != 0) && (iVar1 != (this->Transform).NumValues)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar6;
  }
  uVar8 = 0;
  if ((this->Transform).Values.ArrayNum == 0) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_78,(this->Transform).NumValues,Default);
    uVar9 = uVar8;
    if (0 < (this->Transform).NumValues) {
      do {
        local_58 = (this->Transform).Value.Rotation.ZW.m128d_f64[0];
        dStack_50 = (this->Transform).Value.Rotation.ZW.m128d_f64[1];
        uVar7 = (uint)uVar8;
        local_48 = (this->Transform).Value.Translation.XY.m128d_f64[0];
        dStack_40 = (this->Transform).Value.Translation.XY.m128d_f64[1];
        local_68 = *(undefined4 *)(this->Transform).Value.Rotation.XY.m128d_f64;
        uStack_64 = *(undefined4 *)((longlong)(this->Transform).Value.Rotation.XY.m128d_f64 + 4);
        uStack_60 = *(undefined4 *)((this->Transform).Value.Rotation.XY.m128d_f64 + 1);
        uStack_5c = *(undefined4 *)((longlong)(this->Transform).Value.Rotation.XY.m128d_f64 + 0xc);
        local_38 = (this->Transform).Value.Translation.ZW.m128d_f64[0];
        dStack_30 = (this->Transform).Value.Translation.ZW.m128d_f64[1];
        uVar5 = 0;
        if ((int)uVar7 < local_78.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        local_28 = (this->Transform).Value.Scale3D.XY.m128d_f64[0];
        dStack_20 = (this->Transform).Value.Scale3D.XY.m128d_f64[1];
        local_18 = (this->Transform).Value.Scale3D.ZW.m128d_f64[0];
        dStack_10 = (this->Transform).Value.Scale3D.ZW.m128d_f64[1];
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        pFVar2 = local_78.AllocatorInstance.Data + uVar9;
        *(undefined4 *)pFVar2 = local_68;
        *(undefined4 *)(pFVar2 + 4) = uStack_64;
        *(undefined4 *)(pFVar2 + 8) = uStack_60;
        *(undefined4 *)(pFVar2 + 0xc) = uStack_5c;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x10) = local_58;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x10 + 8) = dStack_50;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x20) = local_48;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x20 + 8) = dStack_40;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x30) = local_38;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x30 + 8) = dStack_30;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x40) = local_28;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x40 + 8) = dStack_20;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x50) = local_18;
        *(double *)(local_78.AllocatorInstance.Data + uVar9 + 0x50 + 8) = dStack_10;
        uVar9 = uVar9 + 0x60;
      } while ((int)(uVar7 + 1) < (this->Transform).NumValues);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_78.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_78.ArrayNum;
    __return_storage_ptr__->ArrayMax = local_78.ArrayMax;
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->Transform).Values.ArrayNum;
    pFVar2 = (this->Transform).Values.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,(longlong)iVar1 * 0x60);
    }
  }
  return __return_storage_ptr__;
}

// MoveRange @ 149f55f20

void __thiscall FPCGPointArray::MoveRange(FPCGPointArray *this,int param_1,int param_2,int param_3)

{
  if ((param_1 != param_2) && (0 < param_3)) {
    FPCGPointArrayProperty<UE::Math::TTransform<double>_>::MoveRange
              (&this->Transform,param_1,param_2,param_3);
    FPCGPointArrayProperty<float>::MoveRange(&this->Density,param_1,param_2,param_3);
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::MoveRange
              (&this->BoundsMin,param_1,param_2,param_3);
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::MoveRange
              (&this->BoundsMax,param_1,param_2,param_3);
    FPCGPointArrayProperty<UE::Math::TVector4<double>_>::MoveRange
              (&this->Color,param_1,param_2,param_3);
    FPCGPointArrayProperty<float>::MoveRange(&this->Steepness,param_1,param_2,param_3);
    FPCGPointArrayProperty<int>::MoveRange(&this->Seed,param_1,param_2,param_3);
    FPCGPointArrayProperty<__int64>::MoveRange(&this->MetadataEntry,param_1,param_2,param_3);
  }
  return;
}

// RemoveAt @ 149f5dd20

void __thiscall FPCGPointArray::RemoveAt(FPCGPointArray *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < this->NumPoints)) {
    this->NumPoints = this->NumPoints + -1;
    FPCGPointArrayProperty<UE::Math::TTransform<double>_>::RemoveAt(&this->Transform,param_1);
    FPCGPointArrayProperty<float>::RemoveAt(&this->Density,param_1);
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::RemoveAt(&this->BoundsMin,param_1);
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::RemoveAt(&this->BoundsMax,param_1);
    FPCGPointArrayProperty<UE::Math::TVector4<double>_>::RemoveAt(&this->Color,param_1);
    FPCGPointArrayProperty<float>::RemoveAt(&this->Steepness,param_1);
    FPCGPointArrayProperty<int>::RemoveAt(&this->Seed,param_1);
    FPCGPointArrayProperty<__int64>::RemoveAt(&this->MetadataEntry,param_1);
    if (this->NumPoints == 1) {
      this->bInitializedValues = false;
    }
  }
  return;
}

// Serialize @ 149f600e0

bool __thiscall FPCGPointArray::Serialize(FPCGPointArray *this,FArchive *param_1)

{
  int *piVar1;
  long64 *plVar2;
  undefined1 *puVar3;
  int *piVar4;
  long64 *plVar5;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  piVar1 = &this->NumPoints;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->Transform).NumValues;
  puVar3 = &param_1->field_0x2a;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&(this->Transform).Value);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this);
  FPCGPointArrayProperty<float>::Serialize(&this->Density,param_1);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::Serialize(&this->BoundsMin,param_1);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::Serialize(&this->BoundsMax,param_1);
  piVar1 = &(this->Color).NumValues;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&(this->Color).Value);
  TArrayPrivateFriend::Serialize<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>
            (param_1,&(this->Color).Values);
  FPCGPointArrayProperty<float>::Serialize(&this->Steepness,param_1);
  piVar1 = &(this->Seed).NumValues;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->Seed).Value;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&(this->Seed).Values);
  piVar1 = &(this->MetadataEntry).NumValues;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar2 = &(this->MetadataEntry).Value;
  plVar5 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar2);
    }
  }
  else {
    *plVar2 = *plVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  TArrayPrivateFriend::Serialize<__int64,TSizedDefaultAllocator<32>_>
            (param_1,&(this->MetadataEntry).Values);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return true;
}

// SetNumPoints @ 149f60f60

void __thiscall FPCGPointArray::SetNumPoints(FPCGPointArray *this,int param_1,bool param_2)

{
  this->bInitializedValues = param_2;
  this->NumPoints = param_1;
  FPCGPointArrayProperty<UE::Math::TTransform<double>_>::SetNum
            (&this->Transform,param_1,false,param_2);
  FPCGPointArrayProperty<float>::SetNum
            (&this->Density,this->NumPoints,false,this->bInitializedValues);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetNum
            (&this->BoundsMin,this->NumPoints,false,this->bInitializedValues);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetNum
            (&this->BoundsMax,this->NumPoints,false,this->bInitializedValues);
  FPCGPointArrayProperty<UE::Math::TVector4<double>_>::SetNum
            (&this->Color,this->NumPoints,false,this->bInitializedValues);
  FPCGPointArrayProperty<float>::SetNum
            (&this->Steepness,this->NumPoints,false,this->bInitializedValues);
  FPCGPointArrayProperty<int>::SetNum(&this->Seed,this->NumPoints,false,this->bInitializedValues);
  FPCGPointArrayProperty<__int64>::SetNum
            (&this->MetadataEntry,this->NumPoints,false,this->bInitializedValues);
  return;
}

