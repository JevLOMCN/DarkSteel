// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 5

// StaticStruct @ 148b873a0

UScriptStruct * __cdecl FStructSerializerLWCTypesTest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest,(UObject *)pUVar1,
                         L"StructSerializerLWCTypesTest");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton;
}

// FStructSerializerLWCTypesTest @ 148b9cf50

FStructSerializerLWCTypesTest * __thiscall
FStructSerializerLWCTypesTest::FStructSerializerLWCTypesTest
          (FStructSerializerLWCTypesTest *this,ENoInit param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->Vector4).field0_0x0._s_0.W = 1.0;
  (this->Vector4).field0_0x0._s_0.X = 0.0;
  (this->Vector4).field0_0x0._s_0.Y = 0.0;
  (this->Vector4).field0_0x0._s_0.Z = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Box).IsValid = '\0';
  (this->VectorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorArray).ArrayNum = 0;
  (this->VectorArray).ArrayMax = 0;
  *(undefined8 *)&this->StrToVec = 0;
  *(undefined8 *)&(this->StrToVec).field_0x8 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x20 = 0;
  (this->OrientedBox).AxisX.field0_0x0._s_0.X = 1.0;
  (this->OrientedBox).AxisY.field0_0x0._s_0.Y = 1.0;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.Z = 1.0;
  (this->OrientedBox).ExtentX = 1.0;
  (this->OrientedBox).ExtentY = 1.0;
  (this->OrientedBox).ExtentZ = 1.0;
  (this->OrientedBox).Center.field0_0x0._s_0.X = 0.0;
  (this->OrientedBox).Center.field0_0x0._s_0.Y = 0.0;
  (this->OrientedBox).Center.field0_0x0._s_0.Z = 0.0;
  (this->OrientedBox).AxisX.field0_0x0._s_0.Y = 0.0;
  (this->OrientedBox).AxisX.field0_0x0._s_0.Z = 0.0;
  (this->OrientedBox).AxisY.field0_0x0._s_0.X = 0.0;
  (this->OrientedBox).AxisY.field0_0x0._s_0.Z = 0.0;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.X = 0.0;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.Y = 0.0;
  *(undefined4 *)&(this->StrToVec).field_0x28 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToVec).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrToVec).field_0x34 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x40 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x48 = 0;
  *(undefined8 *)&(this->VectorSet).Elements = 0;
  *(undefined8 *)&(this->VectorSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VectorSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VectorSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VectorSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VectorSet).Elements.field_0x34 = 0;
  (this->VectorSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VectorSet).HashSize = 0;
  return this;
}

// FStructSerializerLWCTypesTest @ 148b9d0e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStructSerializerLWCTypesTest * __thiscall
FStructSerializerLWCTypesTest::FStructSerializerLWCTypesTest(FStructSerializerLWCTypesTest *this)

{
  undefined1 *puVar1;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *this_01;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FStructSerializerLWCTypesTest *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  ForElementType<FSetElementId> FVar20;
  uint uVar21;
  ForElementType<FSetElementId> FVar22;
  double *pdVar23;
  void *pvVar24;
  double *pdVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  uint uVar29;
  uint local_138;
  uint uStack_134;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FSparseArrayAllocationInfo local_90;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  
  dVar12 = _UNK_15076bb88;
  dVar11 = ___xmm_40100000000000004008000000000000;
  dStack_110 = _UNK_150744178;
  local_118 = ___xmm_40000000000000003ff0000000000000;
  (this->Vector).field0_0x0._s_0.X = 1.25;
  (this->Vector2D).field0_0x0._s_0.X = 2.25;
  (this->Vector4).field0_0x0._s_0.X = 0.5;
  pdVar25 = (double *)0x0;
  (this->Vector4).field0_0x0._s_0.Y = 1.25;
  (this->Vector2D).field0_0x0._s_0.Y = 3.5;
  (this->Vector).field0_0x0._s_0.Y = 2.5;
  (this->Matrix).M[1][0] = 4.25;
  (this->Vector).field0_0x0._s_0.Z = 3.75;
  (this->Matrix).M[1][1] = 5.5;
  (this->Matrix).M[1][2] = 6.5;
  (this->Matrix).M[2][0] = 7.25;
  (this->Matrix).M[2][1] = 8.25;
  (this->Matrix).M[2][2] = 9.25;
  (this->Matrix).M[3][1] = 2.0;
  (this->Matrix).M[3][2] = 3.0;
  (this->Plane)._padding_ = 0x3fd0000000000000;
  (this->Quat).X = 0.25;
  (this->Vector4).field0_0x0._s_0.W = 3.75;
  (this->Quat).Z = 0.75;
  (this->Matrix).M[0][0] = 1.25;
  (this->Matrix).M[0][1] = 2.25;
  (this->Plane)._padding_ = 0x3ff4000000000000;
  (this->Plane)._padding_ = 0x4002000000000000;
  (this->Quat).Y = 0.5;
  (this->Rotator).Pitch = 2.25;
  (this->Rotator).Yaw = 2.25;
  (this->Rotator).Roll = 2.25;
  (this->Vector4).field0_0x0._s_0.Z = 2.5;
  (this->Matrix).M[0][2] = 3.25;
  (this->Matrix).M[0][3] = 0.0;
  (this->Matrix).M[1][3] = 0.0;
  (this->Matrix).M[2][3] = 0.0;
  (this->Matrix).M[3][0] = 1.0;
  (this->Matrix).M[3][3] = 1.0;
  (this->Plane).W = 3.25;
  (this->Quat).W = 1.0;
  (this->Transform).Rotation.XY.m128d_f64[0] = local_118;
  (this->Transform).Rotation.XY.m128d_f64[1] = dStack_110;
  (this->Transform).Rotation.ZW.m128d_f64[0] = dVar11;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar12;
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar8;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar9;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar10;
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar8;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  (this->Box).Min.field0_0x0._s_0.X = 1.0;
  (this->Box).Min.field0_0x0._s_0.Y = 2.0;
  (this->Box).Min.field0_0x0._s_0.Z = 3.0;
  (this->Box).Max.field0_0x0._s_0.X = 5.0;
  (this->Box).IsValid = '\x01';
  this_00 = &this->VectorSet;
  (this->Box).Max.field0_0x0._s_0.Y = 6.0;
  this_01 = &this->StrToVec;
  puVar1 = &(this->VectorSet).Elements.field_0x8;
  (this->Box).Max.field0_0x0._s_0.Z = 7.0;
  (this->Box2D).Min.field0_0x0._s_0.X = 10.0;
  (this->Box2D).Min.field0_0x0._s_0.Y = 20.0;
  (this->Box2D).Max.field0_0x0._s_0.X = 30.0;
  (this->Box2D).Max.field0_0x0._s_0.Y = 40.0;
  (this->Box2D).bIsValid = true;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.X = 1.0;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.Y = 2.0;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.Z = 3.0;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X = 10.0;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y = 10.0;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z = 10.0;
  pTVar2 = &this->VectorArray;
  (this->BoxSphereBounds).SphereRadius = 20.0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->VectorArray).ArrayNum = 0;
  (this->VectorArray).ArrayMax = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x8 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x20 = 0;
  this->Double = 1.114;
  this->Float = 5.25;
  *(undefined4 *)&(this->StrToVec).field_0x28 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToVec).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrToVec).field_0x34 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x40 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x48 = 0;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)&(this->VectorSet).Elements.field_0xc = 0;
  *(undefined8 *)&(this->VectorSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VectorSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VectorSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VectorSet).Elements.field_0x34 = 0;
  (this->VectorSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VectorSet).HashSize = 0;
  (this->OrientedBox).AxisX.field0_0x0._s_0.X = 1.0;
  (this->OrientedBox).AxisX.field0_0x0._s_0.Y = 1.0;
  (this->OrientedBox).AxisX.field0_0x0._s_0.Z = 1.0;
  (this->OrientedBox).AxisY.field0_0x0._s_0.X = 2.0;
  (this->OrientedBox).AxisY.field0_0x0._s_0.Y = 2.0;
  (this->OrientedBox).AxisY.field0_0x0._s_0.Z = 2.0;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.X = 3.0;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.Y = 3.0;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.Z = 3.0;
  (this->OrientedBox).Center.field0_0x0._s_0.X = 5.0;
  (this->OrientedBox).Center.field0_0x0._s_0.Y = 5.0;
  (this->OrientedBox).Center.field0_0x0._s_0.Z = 5.0;
  dVar11 = __real_4008000000000000;
  (this->OrientedBox).ExtentX = 10.0;
  (this->OrientedBox).ExtentY = 20.0;
  (this->OrientedBox).ExtentZ = 30.0;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_108 = dVar11;
  if (((pFVar4 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar4 + (longlong)(this->VectorArray).ArrayMax * 0x18)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar17 = (FStructSerializerLWCTypesTest *)(*pcVar7)();
    return pFVar17;
  }
  iVar14 = (this->VectorArray).ArrayNum;
  if (iVar14 == (this->VectorArray).ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,&(this->VectorArray).ArrayMax);
  }
  (this->VectorArray).ArrayNum = iVar14 + 1;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar14 * 0x18;
  *(double *)pFVar4 = local_118;
  *(double *)(pFVar4 + 8) = dStack_110;
  uStack_f8 = _UNK_15076c798;
  local_100 = ___xmm_c000000000000000bff0000000000000;
  *(double *)(pFVar5 + (longlong)iVar14 * 0x18 + 0x10) = local_108;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_f0 = __real_c008000000000000;
  if (((pFVar4 <= (FScriptContainerElement *)&local_100) &&
      ((FScriptContainerElement *)&local_100 <
       pFVar4 + (longlong)(this->VectorArray).ArrayMax * 0x18)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar17 = (FStructSerializerLWCTypesTest *)(*pcVar7)();
    return pFVar17;
  }
  iVar14 = (this->VectorArray).ArrayNum;
  if (iVar14 == (this->VectorArray).ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,&(this->VectorArray).ArrayMax);
  }
  (this->VectorArray).ArrayNum = iVar14 + 1;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar14 * 0x18;
  *(undefined8 *)pFVar4 = local_100;
  *(undefined8 *)(pFVar4 + 8) = uStack_f8;
  *(undefined8 *)(pFVar5 + (longlong)iVar14 * 0x18 + 0x10) = local_f0;
  local_80._s_0.Z = 0.0;
  local_80._s_0.X = 0.0;
  local_80._s_0.Y = 0.0;
  ::FString::FString(&local_c0,L"V000");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
              *)this_01,&local_c0,(TVector<double> *)&local_80._s_0);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  local_68._s_0.Z = dVar11;
  local_68._s_0.X = ___xmm_40000000000000003ff0000000000000;
  local_68._s_0.Y = _UNK_150744178;
  ::FString::FString(&local_b0,L"V123");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
              *)this_01,&local_b0,(TVector<double> *)&local_68._s_0);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  local_50._s_0.X = ___xmm_40180000000000004018000000000000;
  local_50._s_0.Y = _UNK_151c790d8;
  local_50._s_0.Z = __real_4018000000000000;
  ::FString::FString(&local_a0,L"V666");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
              *)this_01,&local_a0,(TVector<double> *)&local_50._s_0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  iVar14 = *(int *)&(this->VectorSet).Elements.field_0x34;
  if (iVar14 == 0) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)this_00,(int *)puVar1,
                        (int *)&(this->VectorSet).Elements.field_0xc);
    puVar1 = &(this->VectorSet).Elements.field_0x10;
    iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)puVar1,1);
    puVar26 = *(undefined1 **)&(this->VectorSet).Elements.field_0x20;
    uVar16 = iVar14 >> 0x1f & 0x1f;
    iVar14 = iVar14 + uVar16;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar1;
    }
    *(uint *)(puVar26 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar26 + (longlong)(iVar14 >> 5) * 4) &
         ~(1 << (((byte)iVar14 & 0x1f) - (char)uVar16 & 0x1f));
  }
  else {
    iVar15 = *(int *)&(this->VectorSet).Elements.field_0x30;
    lVar6 = *(longlong *)&this_00->Elements;
    iVar3 = *(int *)((longlong)iVar15 * 0x20 + 4 + lVar6);
    iVar14 = iVar14 + -1;
    *(int *)&(this->VectorSet).Elements.field_0x30 = iVar3;
    *(int *)&(this->VectorSet).Elements.field_0x34 = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_90,iVar15);
  pdVar23 = pdVar25;
  if (local_90.Pointer != (double *)0x0) {
    *(double *)local_90.Pointer = 10.0;
    *(double *)((longlong)local_90.Pointer + 8) = 11.0;
    *(double *)((longlong)local_90.Pointer + 0x10) = 12.0;
    *(undefined4 *)((longlong)local_90.Pointer + 0x18) = 0xffffffff;
    pdVar23 = local_90.Pointer;
  }
  uVar16 = FCrc::MemCrc_DEPRECATED(pdVar23,0x18,0);
  iVar14 = *(int *)&(this->VectorSet).Elements.field_0x8;
  iVar15 = *(int *)&(this->VectorSet).Elements.field_0x34;
  if ((iVar14 - iVar15 != 1) && (iVar14 != iVar15)) {
    FVar22 = (this->VectorSet).Hash.SecondaryData;
    if (FVar22 == (ForElementType<FSetElementId>)0x0) {
      FVar22 = (ForElementType<FSetElementId>)&(this->VectorSet).Hash;
    }
    iVar14 = *(int *)((longlong)FVar22 + (ulonglong)((this->VectorSet).HashSize - 1U & uVar16) * 4);
    if (iVar14 != -1) {
      lVar6 = *(longlong *)&this_00->Elements;
      do {
        lVar18 = (longlong)iVar14 * 0x20;
        if (((*pdVar23 == *(double *)(lVar18 + lVar6)) &&
            (pdVar23[1] == *(double *)(lVar18 + 8 + lVar6))) &&
           (pdVar23[2] == *(double *)(lVar18 + 0x10 + lVar6))) {
          if (iVar14 != -1) {
            memmove((void *)((longlong)iVar14 * 0x20 + *(longlong *)&this_00->Elements),pdVar23,0x18
                   );
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,local_90.Index,1);
            return this;
          }
          break;
        }
        iVar14 = *(int *)(lVar18 + 0x18 + lVar6);
      } while (iVar14 != -1);
    }
  }
  uVar29 = 1;
  uVar21 = *(int *)&(this->VectorSet).Elements.field_0x8 -
           *(int *)&(this->VectorSet).Elements.field_0x34;
  if (3 < uVar21) {
    uVar27 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar29 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar29 <= (this->VectorSet).HashSize)) {
    uVar16 = (this->VectorSet).HashSize - 1U & uVar16;
    *(uint *)((longlong)pdVar23 + 0x1c) = uVar16;
    FVar22 = (this->VectorSet).Hash.SecondaryData;
    if (FVar22 == (ForElementType<FSetElementId>)0x0) {
      FVar22 = (ForElementType<FSetElementId>)&(this->VectorSet).Hash;
    }
    uVar27 = (longlong)(this->VectorSet).HashSize - 1U & (longlong)(int)uVar16;
    *(undefined4 *)(pdVar23 + 3) = *(undefined4 *)((longlong)FVar22 + uVar27 * 4);
    *(int *)((longlong)FVar22 + uVar27 * 4) = local_90.Index;
    return this;
  }
  (this->VectorSet).HashSize = uVar29;
  if ((this->VectorSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->VectorSet).Hash.SecondaryData,0,0,4);
  }
  if (uVar29 == 0) goto LAB_148b9d9a5;
  uVar16 = uVar29;
  if (uVar29 < 2) {
    if ((this->VectorSet).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      uVar16 = 0;
      goto LAB_148b9d953;
    }
  }
  else {
LAB_148b9d953:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->VectorSet).Hash.SecondaryData,0,uVar16,4);
  }
  if (0 < (int)uVar29) {
    uVar27 = (ulonglong)uVar29;
    pdVar23 = pdVar25;
    do {
      FVar22 = (this->VectorSet).Hash.SecondaryData;
      FVar20 = (ForElementType<FSetElementId>)&(this->VectorSet).Hash;
      if (FVar22 != (ForElementType<FSetElementId>)0x0) {
        FVar20 = FVar22;
      }
      uVar19 = (ulonglong)pdVar23 & (longlong)(int)uVar29 - 1U;
      pdVar23 = (double *)((longlong)pdVar23 + 1);
      *(undefined4 *)((longlong)FVar20 + uVar19 * 4) = 0xffffffff;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
LAB_148b9d9a5:
  if ((this->VectorSet).HashSize != 0) {
    uVar16 = *(uint *)&(this->VectorSet).Elements.field_0x28;
    local_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->VectorSet).Elements.field_0x10;
    local_138 = 0;
    uStack_134 = 1;
    uStack_124 = 0;
    uStack_120 = 0;
    if (uVar16 != 0) {
      puVar28 = *(uint **)&(this->VectorSet).Elements.field_0x20;
      if (puVar28 == (uint *)0x0) {
        puVar28 = (uint *)local_e0.Array;
      }
      uVar21 = *puVar28;
      pdVar23 = pdVar25;
      while (uVar21 == 0) {
        iVar14 = (int)pdVar25;
        uStack_120 = (int)pdVar23 + 0x20;
        pdVar23 = (double *)(ulonglong)uStack_120;
        local_138 = iVar14 + 1;
        pdVar25 = (double *)(ulonglong)local_138;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_138)
        goto LAB_148b9da50;
        uVar21 = puVar28[(longlong)iVar14 + 1];
      }
      uStack_134 = -uVar21 & uVar21;
      uVar27 = (ulonglong)uStack_134 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uStack_124 = (int)lVar6 + -1 + uStack_120;
      pdVar25 = (double *)(ulonglong)uStack_124;
      if ((int)uVar16 < (int)uStack_124) {
LAB_148b9da50:
        pdVar25 = (double *)(ulonglong)uVar16;
        uStack_124 = uVar16;
      }
    }
    local_e0._padding_._0_4_ = local_138;
    local_e0._padding_._4_4_ = uStack_134;
    local_e0.UnvisitedBitMask = 0xffffffff;
    local_e0.CurrentBitIndex = uStack_124;
    local_e0._28_4_ = uStack_11c;
    local_e0.BaseBitIndex = uStack_120;
    if ((int)pdVar25 < (int)uVar16) {
      local_e8 = this_00;
      do {
        pvVar24 = (void *)((longlong)(int)pdVar25 * 0x20 + *(longlong *)&local_e8->Elements);
        uVar16 = FCrc::MemCrc_DEPRECATED(pvVar24,0x18,0);
        uVar16 = (this->VectorSet).HashSize - 1U & uVar16;
        *(uint *)((longlong)pvVar24 + 0x1c) = uVar16;
        FVar22 = (this->VectorSet).Hash.SecondaryData;
        FVar20 = (ForElementType<FSetElementId>)&(this->VectorSet).Hash;
        if (FVar22 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar22;
        }
        uVar27 = (longlong)(this->VectorSet).HashSize - 1U & (longlong)(int)uVar16;
        *(undefined4 *)((longlong)pvVar24 + 0x18) = *(undefined4 *)((longlong)FVar20 + uVar27 * 4);
        *(int *)((longlong)FVar20 + uVar27 * 4) = (int)pdVar25;
        local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
        pdVar25 = (double *)(ulonglong)(uint)local_e0.CurrentBitIndex;
      } while (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits);
    }
  }
  return this;
}

// ~FStructSerializerLWCTypesTest @ 148ba05d0

void __thiscall
FStructSerializerLWCTypesTest::~FStructSerializerLWCTypesTest(FStructSerializerLWCTypesTest *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  (this->VectorSet).HashSize = 0;
  FVar1 = (this->VectorSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VectorSet).Elements);
  *(undefined4 *)&(this->StrToVec).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StrToVec).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StrToVec);
  pFVar3 = (this->VectorArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator= @ 148ba15c0

FStructSerializerLWCTypesTest * __thiscall
FStructSerializerLWCTypesTest::operator=
          (FStructSerializerLWCTypesTest *this,FStructSerializerLWCTypesTest *param_1)

{
  double dVar1;
  longlong lVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  undefined7 uVar10;
  
  dVar1 = (param_1->Vector).field0_0x0._s_0.Y;
  (this->Vector).field0_0x0._s_0.X = (param_1->Vector).field0_0x0._s_0.X;
  (this->Vector).field0_0x0._s_0.Y = dVar1;
  (this->Vector).field0_0x0._s_0.Z = (param_1->Vector).field0_0x0._s_0.Z;
  dVar1 = (param_1->Vector2D).field0_0x0._s_0.Y;
  (this->Vector2D).field0_0x0._s_0.X = (param_1->Vector2D).field0_0x0._s_0.X;
  (this->Vector2D).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Vector4).field0_0x0._s_0.Y;
  (this->Vector4).field0_0x0._s_0.X = (param_1->Vector4).field0_0x0._s_0.X;
  (this->Vector4).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Vector4).field0_0x0._s_0.W;
  (this->Vector4).field0_0x0._s_0.Z = (param_1->Vector4).field0_0x0._s_0.Z;
  (this->Vector4).field0_0x0._s_0.W = dVar1;
  dVar1 = (param_1->Matrix).M[0][1];
  (this->Matrix).M[0][0] = (param_1->Matrix).M[0][0];
  (this->Matrix).M[0][1] = dVar1;
  dVar1 = (param_1->Matrix).M[0][3];
  (this->Matrix).M[0][2] = (param_1->Matrix).M[0][2];
  (this->Matrix).M[0][3] = dVar1;
  dVar1 = (param_1->Matrix).M[1][1];
  (this->Matrix).M[1][0] = (param_1->Matrix).M[1][0];
  (this->Matrix).M[1][1] = dVar1;
  dVar1 = (param_1->Matrix).M[1][3];
  (this->Matrix).M[1][2] = (param_1->Matrix).M[1][2];
  (this->Matrix).M[1][3] = dVar1;
  dVar1 = (param_1->Matrix).M[2][1];
  (this->Matrix).M[2][0] = (param_1->Matrix).M[2][0];
  (this->Matrix).M[2][1] = dVar1;
  dVar1 = (param_1->Matrix).M[2][3];
  (this->Matrix).M[2][2] = (param_1->Matrix).M[2][2];
  (this->Matrix).M[2][3] = dVar1;
  dVar1 = (param_1->Matrix).M[3][1];
  (this->Matrix).M[3][0] = (param_1->Matrix).M[3][0];
  (this->Matrix).M[3][1] = dVar1;
  dVar1 = (param_1->Matrix).M[3][3];
  (this->Matrix).M[3][2] = (param_1->Matrix).M[3][2];
  (this->Matrix).M[3][3] = dVar1;
  lVar2 = (param_1->Plane)._padding_;
  (this->Plane)._padding_ = (param_1->Plane)._padding_;
  (this->Plane)._padding_ = lVar2;
  dVar1 = (param_1->Plane).W;
  (this->Plane)._padding_ = (param_1->Plane)._padding_;
  (this->Plane).W = dVar1;
  dVar1 = (param_1->Quat).Y;
  (this->Quat).X = (param_1->Quat).X;
  (this->Quat).Y = dVar1;
  dVar1 = (param_1->Quat).W;
  (this->Quat).Z = (param_1->Quat).Z;
  (this->Quat).W = dVar1;
  dVar1 = (param_1->Rotator).Yaw;
  (this->Rotator).Pitch = (param_1->Rotator).Pitch;
  (this->Rotator).Yaw = dVar1;
  (this->Rotator).Roll = (param_1->Rotator).Roll;
  dVar1 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Box).Min.field0_0x0._s_0.Y;
  (this->Box).Min.field0_0x0._s_0.X = (param_1->Box).Min.field0_0x0._s_0.X;
  (this->Box).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Box).Max.field0_0x0._s_0.X;
  (this->Box).Min.field0_0x0._s_0.Z = (param_1->Box).Min.field0_0x0._s_0.Z;
  (this->Box).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Box).Max.field0_0x0._s_0.Z;
  (this->Box).Max.field0_0x0._s_0.Y = (param_1->Box).Max.field0_0x0._s_0.Y;
  (this->Box).Max.field0_0x0._s_0.Z = dVar1;
  uVar3 = (param_1->Box).Pad[0];
  uVar4 = (param_1->Box).Pad[1];
  uVar5 = (param_1->Box).Pad[2];
  uVar6 = (param_1->Box).Pad[3];
  uVar7 = (param_1->Box).Pad[4];
  uVar8 = (param_1->Box).Pad[5];
  uVar9 = (param_1->Box).Pad[6];
  (this->Box).IsValid = (param_1->Box).IsValid;
  (this->Box).Pad[0] = uVar3;
  (this->Box).Pad[1] = uVar4;
  (this->Box).Pad[2] = uVar5;
  (this->Box).Pad[3] = uVar6;
  (this->Box).Pad[4] = uVar7;
  (this->Box).Pad[5] = uVar8;
  (this->Box).Pad[6] = uVar9;
  dVar1 = (param_1->Box2D).Min.field0_0x0._s_0.Y;
  (this->Box2D).Min.field0_0x0._s_0.X = (param_1->Box2D).Min.field0_0x0._s_0.X;
  (this->Box2D).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Box2D).Max.field0_0x0._s_0.Y;
  (this->Box2D).Max.field0_0x0._s_0.X = (param_1->Box2D).Max.field0_0x0._s_0.X;
  (this->Box2D).Max.field0_0x0._s_0.Y = dVar1;
  uVar10 = *(undefined7 *)&(param_1->Box2D).field_0x21;
  (this->Box2D).bIsValid = (param_1->Box2D).bIsValid;
  *(undefined7 *)&(this->Box2D).field_0x21 = uVar10;
  dVar1 = (param_1->BoxSphereBounds).Origin.field0_0x0._s_0.Y;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.X =
       (param_1->BoxSphereBounds).Origin.field0_0x0._s_0.X;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.Z =
       (param_1->BoxSphereBounds).Origin.field0_0x0._s_0.Z;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->BoxSphereBounds).SphereRadius = (param_1->BoxSphereBounds).SphereRadius;
  dVar1 = (param_1->OrientedBox).Center.field0_0x0._s_0.Y;
  (this->OrientedBox).Center.field0_0x0._s_0.X = (param_1->OrientedBox).Center.field0_0x0._s_0.X;
  (this->OrientedBox).Center.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->OrientedBox).AxisX.field0_0x0._s_0.X;
  (this->OrientedBox).Center.field0_0x0._s_0.Z = (param_1->OrientedBox).Center.field0_0x0._s_0.Z;
  (this->OrientedBox).AxisX.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->OrientedBox).AxisX.field0_0x0._s_0.Z;
  (this->OrientedBox).AxisX.field0_0x0._s_0.Y = (param_1->OrientedBox).AxisX.field0_0x0._s_0.Y;
  (this->OrientedBox).AxisX.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->OrientedBox).AxisY.field0_0x0._s_0.Y;
  (this->OrientedBox).AxisY.field0_0x0._s_0.X = (param_1->OrientedBox).AxisY.field0_0x0._s_0.X;
  (this->OrientedBox).AxisY.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->OrientedBox).AxisZ.field0_0x0._s_0.X;
  (this->OrientedBox).AxisY.field0_0x0._s_0.Z = (param_1->OrientedBox).AxisY.field0_0x0._s_0.Z;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->OrientedBox).AxisZ.field0_0x0._s_0.Z;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.Y = (param_1->OrientedBox).AxisZ.field0_0x0._s_0.Y;
  (this->OrientedBox).AxisZ.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->OrientedBox).ExtentY;
  (this->OrientedBox).ExtentX = (param_1->OrientedBox).ExtentX;
  (this->OrientedBox).ExtentY = dVar1;
  (this->OrientedBox).ExtentZ = (param_1->OrientedBox).ExtentZ;
  this->Float = param_1->Float;
  this->Double = param_1->Double;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->VectorArray,&param_1->VectorArray);
  TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&this->StrToVec,
              (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&param_1->StrToVec);
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=(&this->VectorSet,&param_1->VectorSet);
  return this;
}

