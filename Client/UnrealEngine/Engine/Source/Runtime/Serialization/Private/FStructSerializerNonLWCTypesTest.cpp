// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 3

// StaticStruct @ 148b85900

UScriptStruct * __cdecl FStructSerializerNonLWCTypesTest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest,
                         (UObject *)pUVar1,L"StructSerializerNonLWCTypesTest");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton;
}

// FStructSerializerNonLWCTypesTest @ 148b9e210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStructSerializerNonLWCTypesTest * __thiscall
FStructSerializerNonLWCTypesTest::FStructSerializerNonLWCTypesTest
          (FStructSerializerNonLWCTypesTest *this)

{
  TMap<FString,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>_>
  *this_00;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float (*pafVar4) [4];
  ulong64 uVar5;
  ulong64 uVar6;
  bool bVar7;
  int iVar8;
  FStructSerializerNonLWCTypesTest *pFVar9;
  undefined1 local_res8 [16];
  TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> local_res18;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  bool local_ac [12];
  FString *local_a0;
  undefined8 *local_98;
  FString local_90;
  FString *local_80;
  undefined4 *local_78;
  FString local_70;
  FString *local_60;
  undefined4 *local_58;
  FString local_50 [2];
  
  uVar6 = _UNK_15076c058;
  uVar5 = ___xmm_4080000040400000400000003f800000;
  (this->Vector).field0_0x0._s_0.X = 1.25;
  (this->Vector).field0_0x0._s_0.Y = 2.5;
  (this->Vector).field0_0x0._s_0.Z = 3.75;
  (this->Transform).Rotation.m128_u64[0] = uVar5;
  (this->Transform).Rotation.m128_u64[1] = uVar6;
  this_00 = &this->StrToVec;
  (this->Vector2D).field0_0x0._s_0.X = 2.25;
  pTVar1 = &this->VectorArray;
  (this->Vector2D).field0_0x0._s_0.Y = 3.5;
  (this->Vector4).field0_0x0._s_0.X = 0.5;
  (this->Vector4).field0_0x0._s_0.Y = 1.25;
  (this->Vector4).field0_0x0._s_0.Z = 2.5;
  (this->Vector4).field0_0x0._s_0.W = 3.75;
  (this->Matrix).M[0][0] = 1.25;
  (this->Matrix).M[0][1] = 2.25;
  (this->Matrix).M[0][2] = 3.25;
  (this->Matrix).M[0][3] = 0.0;
  (this->Matrix).M[1][0] = 4.25;
  (this->Matrix).M[1][1] = 5.5;
  pafVar4 = (this->Matrix).M;
  *(float *)((longlong)(pafVar4 + 1) + 8) = 6.5;
  *(float *)((longlong)(pafVar4 + 1) + 0xc) = 0.0;
  (this->Matrix).M[2][0] = 7.25;
  (this->Matrix).M[2][1] = 8.25;
  pafVar4 = (this->Matrix).M;
  *(float *)((longlong)(pafVar4 + 2) + 8) = 9.25;
  *(float *)((longlong)(pafVar4 + 2) + 0xc) = 0.0;
  (this->Matrix).M[3][0] = 1.0;
  (this->Matrix).M[3][1] = 2.0;
  (this->Matrix).M[3][2] = 3.0;
  (this->Matrix).M[3][3] = 1.0;
  *(undefined4 *)&(this->Plane)._padding_ = 0x3e800000;
  *(undefined4 *)((longlong)&(this->Plane)._padding_ + 4) = 0x3fa00000;
  (this->Plane)._padding_ = 0x40100000;
  (this->Plane).W = 3.25;
  (this->Quat).X = 0.25;
  (this->Quat).Y = 0.5;
  (this->Quat).Z = 0.75;
  (this->Quat).W = 1.0;
  (this->Rotator).Pitch = 2.25;
  (this->Rotator).Yaw = 2.25;
  (this->Rotator).Roll = 2.25;
  (this->Transform).Translation = GlobalVectorConstants::FloatZero;
  (this->Transform).Scale3D = GlobalVectorConstants::Float1110;
  (this->Box).IsValid = '\x01';
  (this->Box).Min.field0_0x0._s_0.X = 1.0;
  (this->Box).Min.field0_0x0._s_0.Y = 2.0;
  (this->Box).Min.field0_0x0._s_0.Z = 3.0;
  (this->Box).Max.field0_0x0._s_0.X = 5.0;
  (this->Box).Max.field0_0x0._s_0.Y = 6.0;
  (this->Box).Max.field0_0x0._s_0.Z = 7.0;
  (this->Box2D).bIsValid = true;
  local_e0 = 0x41200000;
  uStack_dc = 0x41a00000;
  (this->Box2D).Min.field0_0x0 = (TVector2<float>_u_0)0x41a0000041200000;
  local_d8 = 0x41f00000;
  uStack_d4 = 0x42200000;
  (this->Box2D).Max.field0_0x0 = (TVector2<float>_u_0)0x4220000041f00000;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.X = 1.0;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.Y = 2.0;
  (this->BoxSphereBounds).Origin.field0_0x0._s_0.Z = 3.0;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X = 10.0;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y = 10.0;
  (this->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z = 10.0;
  (this->BoxSphereBounds).SphereRadius = 20.0;
  this->Float = 5.25;
  this->Double = 1.114;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->VectorArray).ArrayNum = 0;
  (this->VectorArray).ArrayMax = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x8 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x20 = 0;
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
  (this->OrientedBox).ExtentX = 10.0;
  (this->OrientedBox).ExtentY = 20.0;
  (this->OrientedBox).ExtentZ = 30.0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_f8 = 0x3f800000;
  uStack_f4 = 0x40000000;
  local_f0 = 0x40400000;
  if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
     ((FScriptContainerElement *)&local_f8 < pFVar2 + (longlong)(this->VectorArray).ArrayMax * 0xc))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FStructSerializerNonLWCTypesTest *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar8 = (this->VectorArray).ArrayNum;
  if (iVar8 == (this->VectorArray).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar1->AllocatorInstance,&(this->VectorArray).ArrayMax);
  }
  (this->VectorArray).ArrayNum = iVar8 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_ec = 0xbf800000;
  uStack_e8 = 0xc0000000;
  local_e4 = 0xc0400000;
  *(ulonglong *)(pFVar2 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_f4,local_f8);
  *(undefined4 *)(pFVar2 + (longlong)iVar8 * 0xc + 8) = local_f0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_ec) &&
     ((FScriptContainerElement *)&local_ec < pFVar2 + (longlong)(this->VectorArray).ArrayMax * 0xc))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FStructSerializerNonLWCTypesTest *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar8 = (this->VectorArray).ArrayNum;
  if (iVar8 == (this->VectorArray).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar1->AllocatorInstance,&(this->VectorArray).ArrayMax);
  }
  (this->VectorArray).ArrayNum = iVar8 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_d0 = 0;
  local_c8 = 0;
  *(ulonglong *)(pFVar2 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_e8,local_ec);
  *(undefined4 *)(pFVar2 + (longlong)iVar8 * 0xc + 8) = local_e4;
  ::FString::FString(&local_90,L"V000");
  local_a0 = &local_90;
  local_98 = &local_d0;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            ((TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> *)local_res8,
             (bool *)&local_a0);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  local_c4 = 0x3f800000;
  local_c0 = 0x40000000;
  local_bc = 0x40400000;
  ::FString::FString(&local_70,L"V123");
  local_80 = &local_70;
  local_78 = &local_c4;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            ((TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FString_&&,UE::Math::TVector<float>_&&> *)(local_res8 + 8)
             ,(bool *)&local_80);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  local_b8 = 0x40c00000;
  local_b4 = 0x40c00000;
  local_b0 = 0x40c00000;
  ::FString::FString(local_50,L"V666");
  local_60 = local_50;
  local_58 = &local_b8;
  TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,UE::Math::TVector<float>_&&>_>
            ((TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
              *)this_00,&local_res18,(bool *)&local_60);
  if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
  }
  local_ac[0] = false;
  local_ac[1] = false;
  local_ac[2] = true;
  local_ac[3] = true;
  local_ac[4] = false;
  local_ac[5] = false;
  local_ac[6] = true;
  local_ac[7] = true;
  local_ac[8] = false;
  local_ac[9] = false;
  local_ac[10] = true;
  local_ac[0xb] = true;
  TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>::
  Emplace<UE::Math::TVector<float>_>(&this->VectorSet,(TVector<float> *)&local_res18.Value,local_ac)
  ;
  return this;
}

// ~FStructSerializerNonLWCTypesTest @ 148ba0700

void __thiscall
FStructSerializerNonLWCTypesTest::~FStructSerializerNonLWCTypesTest
          (FStructSerializerNonLWCTypesTest *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  (this->VectorSet).HashSize = 0;
  FVar1 = (this->VectorSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VectorSet).Elements);
  *(undefined4 *)&(this->StrToVec).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StrToVec).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StrToVec);
  pFVar3 = (this->VectorArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

