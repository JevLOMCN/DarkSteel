// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8a6f90

UScriptStruct * __cdecl FRadialScatterPointsDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2,
                         (UObject *)pUVar1,L"RadialScatterPointsDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e8a7150

FName __thiscall
FRadialScatterPointsDataflowNode_v2::GetType(FRadialScatterPointsDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRadialScatterPointsDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e8a7190

bool __thiscall
FRadialScatterPointsDataflowNode_v2::IsA(FRadialScatterPointsDataflowNode_v2 *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FRadialScatterPointsDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a71f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a71f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a7216;
      }
    }
  }
  bVar5 = true;
LAB_14e8a7216:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a7290

FStructOnScope * __thiscall
FRadialScatterPointsDataflowNode_v2::NewStructOnScope(FRadialScatterPointsDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2,
                           (UObject *)pUVar2,L"RadialScatterPointsDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a7310

void __thiscall
FRadialScatterPointsDataflowNode_v2::SerializeInternal
          (FRadialScatterPointsDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2,
                         (UObject *)pUVar1,L"RadialScatterPointsDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a738d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a73d0

FName __thiscall
FRadialScatterPointsDataflowNode_v2::GetDisplayName(FRadialScatterPointsDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RadialScatterPoints");
  return in_RDX;
}

// GetCategory @ 14e8a7400

FName __thiscall
FRadialScatterPointsDataflowNode_v2::GetCategory(FRadialScatterPointsDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Point");
  return in_RDX;
}

// GetTags @ 14e8a75b0

FString * __thiscall
FRadialScatterPointsDataflowNode_v2::GetTags
          (FRadialScatterPointsDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a7660

UScriptStruct * __thiscall
FRadialScatterPointsDataflowNode_v2::TypedScriptStruct(FRadialScatterPointsDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_v2,
                         (UObject *)pUVar1,L"RadialScatterPointsDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FRadialScatterPointsDataflowNode_v2.OuterSingleton;
}

// GetRenderParametersImpl @ 14e8a7760

/* WARNING: Removing unreachable block (ram,0x00014e8a7987) */
/* WARNING: Removing unreachable block (ram,0x00014e8a7995) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FRadialScatterPointsDataflowNode_v2::GetRenderParametersImpl
          (FRadialScatterPointsDataflowNode_v2 *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName *pFVar6;
  FString *pFVar7;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = ::FName::FName(&local_res18,"3DView");
  ::FName::FName(&local_res10,"Points");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"TArray<FVector>");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"PointsRender");
  ::FString::FString(&local_68,pFVar7);
  _Src.Data = local_88.Data;
  lVar10 = (longlong)local_80;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_80);
  local_58 = FVar1;
  if (local_80 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_50,local_80,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar10 << 3);
  }
  local_40 = *pFVar5;
  pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar9 + 0x10) = local_58;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar9 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar9 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar9 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e8a7ef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRadialScatterPointsDataflowNode_v2::Evaluate
          (FRadialScatterPointsDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  code *pcVar5;
  float fVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  undefined1 *puVar10;
  TBox<double> *pTVar11;
  FDataflowInput *pFVar12;
  TVector<double> *pTVar13;
  uint *puVar14;
  int *piVar15;
  float *pfVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  float fVar31;
  double extraout_XMM0_Qa;
  double dVar32;
  double dVar33;
  double extraout_XMM0_Qb;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  undefined1 local_358;
  FIdentityFunctor local_357 [7];
  TArray<double,TSizedDefaultAllocator<32>_> local_350;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_340;
  TArray<double,TSizedDefaultAllocator<32>_> local_330;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  double local_310;
  float local_308;
  float local_304;
  TVector<double>_u_0 local_300;
  double local_2e8;
  double local_2e0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_2d8;
  FContext *local_2d0;
  FRadialScatterPointsDataflowNode_v2 *local_2c8;
  TVector<double>_u_0 local_2c0;
  FConnectionReference local_2a8;
  FConnectionReference local_290;
  FConnectionReference local_278;
  FConnectionReference local_260;
  FConnectionReference local_248;
  FConnectionReference local_230;
  FConnectionReference local_218;
  FConnectionReference local_200;
  FConnectionReference local_1e8;
  FConnectionReference local_1d0;
  FConnectionReference local_1b8;
  FConnectionReference local_1a0;
  FConnectionReference local_188;
  FConnectionReference local_170;
  TVector<double>_u_0 local_158;
  undefined1 local_140 [16];
  double local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  
  local_2d8 = &this->Points;
  local_2d0 = param_1;
  local_2c8 = this;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar10 == &this->Points) {
    pTVar11 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                        ((FDataflowNode *)this,param_1,&this->BoundingBox);
    uVar28 = 0;
    local_2a8.Index = -1;
    local_2a8.ContainerReference = (void *)0x0;
    auVar2 = *(undefined1 (*) [16])&(pTVar11->Min).field0_0x0;
    auVar3 = *(undefined1 (*) [16])((longlong)&(pTVar11->Min).field0_0x0 + 0x10);
    dVar36 = (pTVar11->Max).field0_0x0._s_0.Y;
    dVar34 = (pTVar11->Max).field0_0x0._s_0.Z;
    local_e8._0_1_ = pTVar11->IsValid;
    local_e8._1_1_ = pTVar11->Pad[0];
    local_e8._2_1_ = pTVar11->Pad[1];
    local_e8._3_1_ = pTVar11->Pad[2];
    local_e8._4_1_ = pTVar11->Pad[3];
    local_e8._5_1_ = pTVar11->Pad[4];
    local_e8._6_1_ = pTVar11->Pad[5];
    local_e8._7_1_ = pTVar11->Pad[6];
    local_2a8.Reference = &this->Center;
    local_118 = auVar2;
    local_108 = auVar3;
    local_f8 = dVar36;
    dStack_f0 = dVar34;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2a8);
    pTVar13 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar12,param_1,local_2a8.Reference);
    local_290.Index = -1;
    local_290.ContainerReference = (void *)0x0;
    dVar32 = (pTVar13->field0_0x0)._s_0.X;
    dVar33 = (pTVar13->field0_0x0)._s_0.Y;
    dVar38 = (pTVar13->field0_0x0)._s_0.Z;
    local_290.Reference = &this->Normal;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_290);
    pTVar13 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar12,param_1,local_290.Reference);
    local_278.Index = -1;
    local_278.ContainerReference = (void *)0x0;
    dVar37 = (pTVar13->field0_0x0)._s_0.Z;
    dVar35 = (pTVar13->field0_0x0)._s_0.X;
    dVar39 = (pTVar13->field0_0x0)._s_0.Y;
    local_278.Reference = &this->RandomSeed;
    local_2c0._s_0.Z = dVar37;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_278);
    puVar14 = (uint *)FDataflowInput::GetValue<int>(pFVar12,param_1,local_278.Reference);
    local_260.Index = -1;
    local_260.ContainerReference = (void *)0x0;
    uVar18 = *puVar14;
    local_260.Reference = &this->AngularSteps;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_260);
    piVar15 = FDataflowInput::GetValue<int>(pFVar12,param_1,local_260.Reference);
    local_248.Index = -1;
    iVar9 = *piVar15;
    lVar20 = (longlong)iVar9;
    local_248.Reference = &this->AngleOffset;
    local_248.ContainerReference = (void *)0x0;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_248);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_248.Reference);
    local_230.Index = -1;
    local_230.ContainerReference = (void *)0x0;
    local_230.Reference = &this->AngularNoise;
    local_310 = (double)CONCAT44(local_310._4_4_,*pfVar16);
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_230);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_230.Reference);
    local_218.Index = -1;
    local_218.ContainerReference = (void *)0x0;
    fVar31 = *pfVar16;
    local_218.Reference = &this->Radius;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_218);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_218.Reference);
    local_200.Index = -1;
    local_200.ContainerReference = (void *)0x0;
    local_320 = *pfVar16;
    local_200.Reference = &this->RadialSteps;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_200);
    piVar15 = FDataflowInput::GetValue<int>(pFVar12,param_1,local_200.Reference);
    local_1e8.Index = -1;
    local_1e8.ContainerReference = (void *)0x0;
    iVar4 = *piVar15;
    lVar30 = (longlong)iVar4;
    local_1e8.Reference = &this->RadialStepExponent;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1e8);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1e8.Reference);
    local_1d0.Index = -1;
    local_1d0.ContainerReference = (void *)0x0;
    fVar44 = *pfVar16;
    local_1d0.Reference = &this->RadialMinStep;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d0);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1d0.Reference);
    local_1b8.Index = -1;
    local_1b8.ContainerReference = (void *)0x0;
    local_318 = *pfVar16;
    local_1b8.Reference = &this->RadialNoise;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b8);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1b8.Reference);
    local_1a0.Index = -1;
    local_1a0.ContainerReference = (void *)0x0;
    local_31c = *pfVar16;
    local_1a0.Reference = &this->RadialVariability;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1a0);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_1a0.Reference);
    local_188.Index = -1;
    local_188.ContainerReference = (void *)0x0;
    local_314 = *pfVar16;
    local_188.Reference = &this->AngularVariability;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_188);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_188.Reference);
    local_170.Index = -1;
    local_170.ContainerReference = (void *)0x0;
    local_304 = *pfVar16;
    local_170.Reference = &this->AxialVariability;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_170);
    pfVar16 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_170.Reference);
    dVar7 = __real_3fe0000000000000;
    local_308 = *pfVar16;
    local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.ArrayNum = 0;
    local_340.ArrayMax = 0;
    local_2e0 = (double)(__real_40c90fdb / (float)iVar9);
    local_2e8 = (auVar2._0_8_ + auVar3._8_8_) * __real_3fe0000000000000 + dVar32;
    local_128._8_4_ = auVar2._8_4_;
    local_128._0_8_ = (auVar2._8_8_ + dVar36) * __real_3fe0000000000000 + dVar33;
    local_128._12_4_ = auVar2._12_4_;
    local_140._8_4_ = auVar3._8_4_;
    local_140._0_8_ = (auVar3._0_8_ + dVar34) * __real_3fe0000000000000 + dVar38;
    local_140._12_4_ = auVar3._12_4_;
    uVar42 = SUB84(__real_3ff0000000000000,0);
    uVar43 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar36 = dVar39 * dVar39 + dVar35 * dVar35 + local_2c0._s_0.Z * local_2c0._s_0.Z;
    local_300._s_0.X = dVar35;
    local_300._s_0.Y = dVar39;
    local_300._s_0.Z = dVar37;
    if (__real_3e45798ee0000000 < dVar36) {
      local_130 = __real_3ff0000000000000 / SQRT(dVar36);
      local_300._s_0.Y = dVar39 * local_130;
      local_300._s_0.Z = dVar37 * local_130;
      local_300._s_0.X = dVar35 * local_130;
    }
    local_158._s_0.Z = dVar38;
    UE::Math::TVector<double>::FindBestAxisVectors
              ((TVector<double> *)&local_300._s_0,(TVector<double> *)&local_158._s_0,
               (TVector<double> *)&local_2c0._s_0);
    local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.ArrayNum = 0;
    local_330.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_330,iVar9,Default);
    dVar37 = __real_3fa1df46a2529d39;
    dVar38 = __real_3f91df46a2529d39;
    fVar6 = __real_3f800000;
    uVar25 = 0;
    if (0 < iVar9) {
      uVar21 = uVar28;
      uVar22 = uVar28;
      do {
        uVar24 = (uint)uVar22;
        uVar18 = uVar18 * 0xbb38435 + 0x3619636b;
        uVar29 = uVar25;
        if ((int)uVar24 < local_330.ArrayNum) {
          uVar29 = ~uVar24 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar22 = (ulonglong)(uVar24 + 1);
        *(double *)(local_330.AllocatorInstance.Data + uVar21 * 8) =
             ((double)((float)(uVar18 >> 9 | 0x3f800000) - fVar6) * dVar37 - dVar38) *
             (double)fVar31;
        uVar21 = uVar21 + 1;
      } while ((longlong)uVar21 < lVar20);
    }
    local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_350.ArrayNum = 0;
    local_350.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_350,iVar4,Default);
    uVar40 = 0;
    uVar41 = 0;
    dVar38 = 0.0;
    if (0 < iVar4) {
      uVar29 = (uint)__xmm_80000000000000008000000000000000;
      uVar21 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      uVar22 = uVar28;
      uVar26 = uVar28;
      do {
        uVar24 = (uint)uVar26;
        fVar31 = powf((float)(int)(uVar24 + 1),fVar44);
        dVar37 = (double)fVar31 + dVar38;
        if (uVar24 == 0) {
          dVar37 = dVar37 * dVar7;
          dVar38 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^ (uint)uVar21,
                                    SUB84(dVar37,0) ^ uVar29);
        }
        uVar19 = uVar25;
        if ((int)uVar24 < local_350.ArrayNum) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar26 = (ulonglong)(uVar24 + 1);
        *(double *)(local_350.AllocatorInstance.Data + uVar22 * 8) = dVar37;
        uVar22 = uVar22 + 1;
      } while ((longlong)uVar22 < lVar30);
    }
    uVar21 = (ulonglong)local_350.ArrayNum;
    uVar29 = uVar25;
    if ((int)(local_350.ArrayNum - 1U) < local_350.ArrayNum) {
      uVar29 = ~(local_350.ArrayNum - 1U) >> 0x1f;
    }
    if (uVar29 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = local_350._8_8_ & 0xffffffff;
    }
    fVar31 = local_320;
    iVar9 = (int)uVar21;
    dVar37 = (double)local_320;
    pFVar1 = local_350.AllocatorInstance.Data + (longlong)iVar9 * 8;
    dVar38 = *(double *)(local_350.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 8);
    FVar27.Data = local_350.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar21 != iVar9) {
        local_358 = 0;
        `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_358);
        uVar21 = local_350._8_8_ & 0xffffffff;
      }
      if (FVar27.Data == pFVar1) break;
      *(double *)FVar27.Data = (dVar37 / dVar38) * *(double *)FVar27.Data;
      FVar27.Data = FVar27.Data + 8;
      uVar21 = local_350._8_8_ & 0xffffffff;
    }
    iVar9 = (int)uVar21;
    if (0 < lVar30) {
      dVar38 = (double)local_31c;
      uVar22 = uVar28;
      uVar26 = uVar28;
      do {
        uVar24 = (uint)uVar26;
        uVar29 = uVar25;
        if ((int)uVar24 < (int)uVar21) {
          uVar29 = ~uVar24 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar26 = (ulonglong)(uVar24 + 1);
        dVar37 = *(double *)(local_350.AllocatorInstance.Data + uVar22 * 8);
        if (dVar38 <= *(double *)(local_350.AllocatorInstance.Data + uVar22 * 8)) {
          dVar37 = dVar38;
        }
        uVar18 = uVar18 * 0xbb38435 + 0x3619636b;
        *(double *)(local_350.AllocatorInstance.Data + uVar22 * 8) =
             ((dVar37 + dVar38) * (double)((float)(uVar18 >> 9 | 0x3f800000) - fVar6) - dVar37) +
             *(double *)(local_350.AllocatorInstance.Data + uVar22 * 8);
        uVar22 = uVar22 + 1;
        uVar21 = local_350._8_8_ & 0xffffffff;
        iVar9 = local_350.ArrayNum;
      } while ((longlong)uVar22 < lVar30);
    }
    AlgoImpl::
    IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,TLess<void>_>_>
              ((double *)local_350.AllocatorInstance.Data,iVar9,local_357[0],
               (TLess<void> *)local_357);
    if (0 < lVar30) {
      dVar38 = (double)local_318;
      uVar21 = uVar28;
      uVar22 = uVar28;
      do {
        uVar25 = (uint)uVar21;
        dVar37 = dVar38;
        if (uVar25 == 0) {
          dVar37 = dVar38 * dVar7;
        }
        uVar19 = ~uVar25 >> 0x1f;
        uVar24 = 0;
        uVar29 = uVar24;
        if ((int)uVar25 < local_350.ArrayNum) {
          uVar29 = uVar19;
        }
        if ((uVar29 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(double *)(local_350.AllocatorInstance.Data + uVar22 * 8) -
            (double)CONCAT44(uVar41,uVar40) < dVar37) {
          uVar29 = uVar24;
          if ((int)uVar25 < local_350.ArrayNum) {
            uVar29 = uVar19;
          }
          if ((uVar29 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(double *)(local_350.AllocatorInstance.Data + uVar22 * 8) =
               dVar37 + (double)CONCAT44(uVar41,uVar40);
        }
        if ((int)uVar25 < local_350.ArrayNum) {
          uVar24 = uVar19;
        }
        if ((uVar24 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = (ulonglong)(uVar25 + 1);
        uVar40 = (undefined4)*(undefined8 *)(local_350.AllocatorInstance.Data + uVar22 * 8);
        uVar41 = (undefined4)
                 ((ulonglong)*(undefined8 *)(local_350.AllocatorInstance.Data + uVar22 * 8) >> 0x20)
        ;
        uVar22 = uVar22 + 1;
      } while ((longlong)uVar22 < lVar30);
    }
    fVar44 = __real_38d1b717;
    if (fVar31 <= fVar6) {
      fVar44 = 0.0;
    }
    if (fVar44 <= local_314) {
      fVar44 = local_314;
    }
    if (0 < lVar30) {
      local_310 = (double)(local_310._0_4_ * __real_3c8efa35);
      uVar21 = uVar28;
      do {
        uVar29 = (uint)uVar21;
        uVar25 = 0;
        if ((int)uVar29 < local_350.ArrayNum) {
          uVar25 = ~uVar29 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar25 = 0;
        lVar23 = 0;
        dVar38 = *(double *)(local_350.AllocatorInstance.Data + uVar28 * 8);
        if (0 < lVar20) {
          dVar37 = (double)local_308;
          do {
            uVar24 = 0;
            if ((int)uVar25 < local_330.ArrayNum) {
              uVar24 = ~uVar25 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar18 = (uVar18 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b;
            dVar36 = (double)(((float)(uVar18 >> 9 | 0x3f800000) - fVar6) * fVar44) + dVar38;
            __libm_sse2_sincos_();
            uVar18 = uVar18 * 0xbb38435 + 0x3619636b;
            dVar34 = (double)((float)(uVar18 >> 9 | 0x3f800000) - fVar6);
            dVar35 = ((dVar34 + dVar34) - (double)CONCAT44(uVar43,uVar42)) * dVar37;
            dVar39 = (local_158._s_0.X * extraout_XMM0_Qb + local_2c0._s_0.X * extraout_XMM0_Qa) *
                     dVar36 + local_2e8;
            dVar32 = local_300._s_0.X * dVar35;
            dVar33 = local_300._s_0.Y * dVar35;
            dVar34 = (local_158._s_0.Y * extraout_XMM0_Qb + local_2c0._s_0.Y * extraout_XMM0_Qa) *
                     dVar36 + (double)local_128._0_8_;
            dVar35 = local_300._s_0.Z * dVar35;
            dVar36 = (local_158._s_0.Z * extraout_XMM0_Qb + local_2c0._s_0.Z * extraout_XMM0_Qa) *
                     dVar36 + (double)local_140._0_8_;
            iVar9 = local_340.ArrayNum;
            if (local_340.ArrayNum == local_340.ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_340.AllocatorInstance,&local_340.ArrayMax);
            }
            uVar25 = uVar25 + 1;
            local_340.ArrayNum = iVar9 + 1;
            lVar23 = lVar23 + 1;
            lVar17 = (longlong)iVar9;
            *(double *)(local_340.AllocatorInstance.Data + lVar17 * 0x18) = dVar39 + dVar32;
            *(double *)(local_340.AllocatorInstance.Data + lVar17 * 0x18 + 8) = dVar34 + dVar33;
            *(double *)(local_340.AllocatorInstance.Data + lVar17 * 0x18 + 0x10) = dVar36 + dVar35;
            uVar42 = SUB84(__real_3ff0000000000000,0);
            uVar43 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          } while (lVar23 < lVar20);
        }
        uVar21 = (ulonglong)(uVar29 + 1);
        uVar28 = uVar28 + 1;
      } while ((longlong)uVar28 < lVar30);
    }
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)local_2c8,local_2d0,&local_340,local_2d8);
    if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.AllocatorInstance.Data);
    }
    if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.AllocatorInstance.Data);
    }
    if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.AllocatorInstance.Data);
    }
  }
  return;
}

// FRadialScatterPointsDataflowNode_v2 @ 14e9291b0

FRadialScatterPointsDataflowNode_v2 * __thiscall
FRadialScatterPointsDataflowNode_v2::FRadialScatterPointsDataflowNode_v2
          (FRadialScatterPointsDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  uchar *puVar1;
  byte *pbVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  FName this_00;
  FDataflowInput *pFVar10;
  FDataflowOutput *this_01;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  *(undefined ***)local_res8 = &___7FRadialScatterPointsDataflowNode_v2__6B_;
  pTVar3 = (TVector<double> *)((longlong)local_res8 + 0x280);
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  (((TBox<double> *)local_78.Reference)->Min).field0_0x0._s_0.X = 0.0;
  pTVar4 = (TVector<double> *)((longlong)local_res8 + 0x298);
  *(undefined8 *)((longlong)local_res8 + 0x250) = 0;
  piVar5 = (int *)((longlong)local_res8 + 0x2b0);
  *(undefined8 *)((longlong)local_res8 + 600) = 0;
  pfVar6 = (float *)((longlong)local_res8 + 0x2b8);
  (((TVector<double> *)((longlong)local_res8 + 0x260))->field0_0x0)._s_0.X = 0.0;
  pfVar7 = (float *)((longlong)local_res8 + 700);
  *(undefined8 *)((longlong)local_res8 + 0x268) = 0;
  piVar8 = (int *)((longlong)local_res8 + 0x2b4);
  *(undefined8 *)((longlong)local_res8 + 0x270) = 0;
  pfVar9 = (float *)((longlong)local_res8 + 0x2c0);
  *(uchar *)((longlong)local_res8 + 0x278) = '\0';
  puVar1 = (uchar *)((longlong)local_res8 + 0x279);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  ((uchar *)((longlong)local_res8 + 0x27d))[0] = '\0';
  ((uchar *)((longlong)local_res8 + 0x27d))[1] = '\0';
  *(uchar *)((longlong)local_res8 + 0x27f) = '\0';
  *(undefined8 *)((longlong)local_res8 + 0x2a8) = 0x3ff0000000000000;
  (pTVar3->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x288) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x290) = 0;
  (pTVar4->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x2a0) = 0;
  *piVar5 = 0;
  *pfVar6 = 0.0;
  *pfVar7 = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x2d4) = 0;
  *(float *)((longlong)local_res8 + 0x2dc) = 0.0;
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2e0))
  ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x2e8) = 0;
  *piVar8 = 5;
  *pfVar9 = 50.0;
  *(int *)((longlong)local_res8 + 0x2c4) = 5;
  *(float *)((longlong)local_res8 + 0x2c8) = 1.0;
  *(undefined8 *)((longlong)local_res8 + 0x2cc) = 0x3f800000;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar4;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar8;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar6;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar9;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x2c4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x2c8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x2cc);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x2d0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x2d4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x2d8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x2dc);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_58.Reference = (void *)((longlong)this_00 + 0x2e0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FRadialScatterPointsDataflowNode_v2 *)this_00;
}

// FRadialScatterPointsDataflowNode_v2 @ 14e9295b0

FRadialScatterPointsDataflowNode_v2 * __thiscall
FRadialScatterPointsDataflowNode_v2::FRadialScatterPointsDataflowNode_v2
          (FRadialScatterPointsDataflowNode_v2 *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FRadialScatterPointsDataflowNode_v2__6B_;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  (this->Normal).field0_0x0._s_0.Z = 1.0;
  (this->Center).field0_0x0._s_0.X = 0.0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  this->RandomSeed = 0;
  this->AngularSteps = 5;
  this->AngleOffset = 0.0;
  this->AngularNoise = 0.0;
  this->Radius = 50.0;
  this->RadialSteps = 5;
  this->RadialStepExponent = 1.0;
  this->RadialMinStep = 1.0;
  this->RadialNoise = 0.0;
  this->RadialVariability = 0.0;
  this->AngularVariability = 0.0;
  this->AxialVariability = 0.0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  return this;
}

