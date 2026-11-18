// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// StaticStruct @ 14a4a9090

UScriptStruct * __cdecl FRigUnit_TransformConstraintPerItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraintPerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraintPerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem,
                         (UObject *)pUVar1,L"RigUnit_TransformConstraintPerItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TransformConstraintPerItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraintPerItem.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TransformConstraintPerItem.OuterSingleton;
}

// FRigUnit_TransformConstraintPerItem @ 14a516950

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_TransformConstraintPerItem * __thiscall
FRigUnit_TransformConstraintPerItem::FRigUnit_TransformConstraintPerItem
          (FRigUnit_TransformConstraintPerItem *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  uint local_18;
  
  (this->Item).Type = None;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_TransformConstraintPerItem__6B_;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  this->BaseTransformSpace = GlobalSpace;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_18 = CONCAT31(local_18._1_3_,1);
  (this->BaseTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->BaseTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->BaseTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->BaseTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->BaseTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->BaseTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->BaseTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->BaseTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  uVar4 = (ulonglong)local_18;
  (this->BaseTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  (this->WorkData).ConstraintData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).ConstraintData.ArrayNum = 0;
  (this->WorkData).ConstraintData.ArrayMax = 0;
  *(undefined8 *)&(this->WorkData).ConstraintDataToTargets = 0;
  *(undefined8 *)&(this->WorkData).ConstraintDataToTargets.field_0x8 = 0;
  *(undefined8 *)&(this->WorkData).ConstraintDataToTargets.field_0x20 = 0;
  this->bUseInitialTransforms = true;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x28 = 0;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x2c = 0x80;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x34 = 0;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorkData).ConstraintDataToTargets.field_0x40 = 0;
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x48 = 0;
  (this->BaseItem).Type = (char)uVar4;
  *(int3 *)&(this->BaseItem).field_0x1 = (int3)(uVar4 >> 8);
  (this->BaseItem).Name.ComparisonIndex = (FNameEntryId)(int)(uVar4 >> 0x20);
  (this->Item).Type = (char)uVar4;
  *(int3 *)&(this->Item).field_0x1 = (int3)(uVar4 >> 8);
  (this->Item).Name.ComparisonIndex = (FNameEntryId)(int)(uVar4 >> 0x20);
  (this->BaseItem).Name.Number = 0;
  (this->Item).Name.Number = 0;
  return this;
}

// ~FRigUnit_TransformConstraintPerItem @ 14a518c20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TransformConstraintPerItem::~FRigUnit_TransformConstraintPerItem
          (FRigUnit_TransformConstraintPerItem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->WorkData).ConstraintDataToTargets.field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorkData).ConstraintDataToTargets.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WorkData).ConstraintDataToTargets);
  DestructItems<FConstraintData,int>
            ((FConstraintData *)(this->WorkData).ConstraintData.AllocatorInstance.Data,
             (this->WorkData).ConstraintData.ArrayNum);
  pFVar2 = (this->WorkData).ConstraintData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Targets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  return;
}

// operator() @ 14a51b720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FRigUnit_TransformConstraintPerItem::StaticExecute'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ForAnyElementType *pFVar6;
  URigHierarchy *this_00;
  char *pcVar7;
  undefined8 *puVar8;
  double (*padVar9) [2];
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  FRigElementKey *pFVar15;
  TTransform<double> *pTVar16;
  FConstraintTarget *pFVar17;
  ETransformConstraintType EVar18;
  FRigElementKey *pFVar19;
  int iVar20;
  undefined1 auStackY_368 [32];
  TArrayView<FConstraintTarget_const_,int> local_328;
  FRigElementKey local_318;
  FRigElementKey local_308;
  FRigElementKey local_2f8;
  FRigElementKey local_2e8;
  FRigElementKey local_2d8;
  FRigElementKey local_2c8;
  FRigElementKey local_2b8;
  FRigElementKey local_2a8;
  FRigElementKey local_298;
  FRigElementKey local_28c;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pFVar6 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
  if (*(int *)((longlong)&pFVar6[1].Data + 4) < 0) {
    DestructItems<FConstraintData,int>((FConstraintData *)pFVar6->Data,*(int *)&pFVar6[1].Data);
    *(undefined4 *)&pFVar6[1].Data = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,0x10,0,pFVar6,0,piVar1);
    }
  }
  else {
    DestructItems<FConstraintData,int>((FConstraintData *)pFVar6->Data,*(int *)&pFVar6[1].Data);
    *(undefined4 *)&pFVar6[1].Data = 0;
  }
  iVar20 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **)
              ((longlong)this + 8));
  this_00 = *(URigHierarchy **)(*(longlong *)((longlong)this + 0x10) + 0x1c8);
  if (this_00 == (URigHierarchy *)0x0) {
    return;
  }
  pcVar7 = *(char **)((longlong)this + 0x18);
  bVar13 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pcVar7 + 4));
  if (!bVar13) {
    return;
  }
  if (*(longlong *)(pcVar7 + 4) == 0) {
    return;
  }
  if (*pcVar7 == '\0') {
    return;
  }
  iVar4 = *(int *)(*(longlong *)((longlong)this + 0x20) + 8);
  if (iVar4 < 1) {
    return;
  }
  puVar8 = *(undefined8 **)((longlong)this + 0x18);
  if (**(char **)((longlong)this + 0x28) == '\0') {
    local_308.Name.Number = *(uint *)(puVar8 + 1);
    local_308._0_8_ = *puVar8;
    iVar14 = URigHierarchy::GetIndex(this_00,&local_308,true);
    URigHierarchy::GetGlobalTransformByIndex(this_00,&local_98,iVar14,false);
  }
  else {
    local_318.Name.Number = *(uint *)(puVar8 + 1);
    local_318._0_8_ = *puVar8;
    iVar14 = URigHierarchy::GetIndex(this_00,&local_318,true);
    URigHierarchy::GetGlobalTransformByIndex(this_00,&local_f8,iVar14,true);
  }
  padVar9 = *(double (**) [2])((longlong)this + 0x40);
  puVar8 = *(undefined8 **)((longlong)this + 0x38);
  uVar5 = *(uint *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar2 = **(undefined8 **)((longlong)this + 0x18);
  if (**(char **)((longlong)this + 0x28) != '\0') {
    local_2f8._0_8_ = uVar2;
    local_2f8.Name.Number = uVar5;
    pFVar15 = URigHierarchy::GetFirstParent(this_00,&local_298,&local_2f8);
    cVar3 = **(char **)((longlong)this + 0x30);
    if (cVar3 == '\0') {
      local_2d8.Type = pFVar15->Type;
      local_2d8._1_3_ = *(undefined3 *)&pFVar15->field_0x1;
      local_2d8.Name.ComparisonIndex.Value = (pFVar15->Name).ComparisonIndex.Value;
      pFVar19 = &local_2d8;
      local_2d8.Name.Number = (pFVar15->Name).Number;
LAB_14a51b9f7:
      iVar14 = URigHierarchy::GetIndex(this_00,pFVar19,true);
      URigHierarchy::GetGlobalTransformByIndex(this_00,&local_278,iVar14,true);
      pTVar16 = &local_278;
    }
    else {
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          pTVar16 = &local_278;
          local_278.Rotation.XY.m128d_f64 = *padVar9;
          local_278.Rotation.ZW.m128d_f64 = padVar9[1];
          local_278.Translation.XY.m128d_f64 = padVar9[2];
          local_278.Translation.ZW.m128d_f64 = padVar9[3];
          local_278.Scale3D.XY.m128d_f64 = padVar9[4];
          local_278.Scale3D.ZW.m128d_f64 = padVar9[5];
          goto LAB_14a51bb25;
        }
        if (cVar3 == '\x03') {
          local_2e8._0_8_ = *puVar8;
          pFVar19 = &local_2e8;
          local_2e8.Name.Number = *(uint *)(puVar8 + 1);
          goto LAB_14a51b9f7;
        }
      }
      pTVar16 = &local_278;
      local_278.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_278.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_278.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_278.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_278.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_278.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    goto LAB_14a51bb25;
  }
  local_2c8._0_8_ = uVar2;
  local_2c8.Name.Number = uVar5;
  pFVar15 = URigHierarchy::GetFirstParent(this_00,&local_28c,&local_2c8);
  cVar3 = **(char **)((longlong)this + 0x30);
  if (cVar3 == '\0') {
    local_2a8.Type = pFVar15->Type;
    local_2a8._1_3_ = *(undefined3 *)&pFVar15->field_0x1;
    local_2a8.Name.ComparisonIndex.Value = (pFVar15->Name).ComparisonIndex.Value;
    pFVar19 = &local_2a8;
    local_2a8.Name.Number = (pFVar15->Name).Number;
LAB_14a51bb04:
    iVar14 = URigHierarchy::GetIndex(this_00,pFVar19,true);
    URigHierarchy::GetGlobalTransformByIndex(this_00,&local_218,iVar14,false);
  }
  else {
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
        local_218.Rotation.XY.m128d_f64 = *padVar9;
        local_218.Rotation.ZW.m128d_f64 = padVar9[1];
        local_218.Translation.XY.m128d_f64 = padVar9[2];
        local_218.Translation.ZW.m128d_f64 = padVar9[3];
        local_218.Scale3D.XY.m128d_f64 = padVar9[4];
        local_218.Scale3D.ZW.m128d_f64 = padVar9[5];
        goto LAB_14a51bb21;
      }
      if (cVar3 == '\x03') {
        local_2b8._0_8_ = *puVar8;
        pFVar19 = &local_2b8;
        local_2b8.Name.Number = *(uint *)(puVar8 + 1);
        goto LAB_14a51bb04;
      }
    }
    local_218.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_218.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_218.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_218.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_218.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_218.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
LAB_14a51bb21:
  pTVar16 = &local_218;
LAB_14a51bb25:
  local_1b8.Rotation.XY.m128d_f64[0] = (pTVar16->Rotation).XY.m128d_f64[0];
  local_1b8.Rotation.XY.m128d_f64[1] = (pTVar16->Rotation).XY.m128d_f64[1];
  local_1b8.Rotation.ZW.m128d_f64[0] = (pTVar16->Rotation).ZW.m128d_f64[0];
  local_1b8.Rotation.ZW.m128d_f64[1] = (pTVar16->Rotation).ZW.m128d_f64[1];
  local_1b8.Translation.XY.m128d_f64[0] = (pTVar16->Translation).XY.m128d_f64[0];
  local_1b8.Translation.XY.m128d_f64[1] = (pTVar16->Translation).XY.m128d_f64[1];
  local_1b8.Translation.ZW.m128d_f64[0] = (pTVar16->Translation).ZW.m128d_f64[0];
  local_1b8.Translation.ZW.m128d_f64[1] = (pTVar16->Translation).ZW.m128d_f64[1];
  local_1b8.Scale3D.XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
  local_1b8.Scale3D.XY.m128d_f64[1] = (pTVar16->Scale3D).XY.m128d_f64[1];
  local_1b8.Scale3D.ZW.m128d_f64[0] = (pTVar16->Scale3D).ZW.m128d_f64[0];
  local_1b8.Scale3D.ZW.m128d_f64[1] = (pTVar16->Scale3D).ZW.m128d_f64[1];
  local_328.DataPtr = (FConstraintTarget *)**(undefined8 **)((longlong)this + 0x20);
  local_328.ArrayNum = *(int *)(*(undefined8 **)((longlong)this + 0x20) + 1);
  if ((local_328.ArrayNum < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  do {
    pFVar17 = TArrayView<FConstraintTarget_const_,int>::operator[]
                        (*(TArrayView<FConstraintTarget_const_,int> **)((longlong)this + 0x20),
                         iVar20);
    if ((((pFVar17->Filter).TranslationFilter.bX == false) &&
        ((pFVar17->Filter).TranslationFilter.bY == false)) &&
       ((pFVar17->Filter).TranslationFilter.bZ == false)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    pFVar17 = TArrayView<FConstraintTarget_const_,int>::operator[]
                        (*(TArrayView<FConstraintTarget_const_,int> **)((longlong)this + 0x20),
                         iVar20);
    if ((((pFVar17->Filter).RotationFilter.bX == false) &&
        ((pFVar17->Filter).RotationFilter.bY == false)) &&
       ((pFVar17->Filter).RotationFilter.bZ == false)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    pFVar17 = TArrayView<FConstraintTarget_const_,int>::operator[]
                        (*(TArrayView<FConstraintTarget_const_,int> **)((longlong)this + 0x20),
                         iVar20);
    if ((((pFVar17->Filter).ScaleFilter.bX == false) && ((pFVar17->Filter).ScaleFilter.bY == false))
       && ((pFVar17->Filter).ScaleFilter.bZ == false)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar13) {
      if ((!bVar11) || (!bVar12)) {
        FRigUnit_TransformConstraintPerItem::AddConstraintData
                  (&local_328,Translation,iVar20,&local_158,&local_1b8,
                   *(TArray<FConstraintData,TSizedDefaultAllocator<32>_> **)this,
                   *(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
                    ((longlong)this + 8));
        goto LAB_14a51bc58;
      }
      EVar18 = Parent;
LAB_14a51bc97:
      FRigUnit_TransformConstraintPerItem::AddConstraintData
                (&local_328,EVar18,iVar20,&local_158,&local_1b8,
                 *(TArray<FConstraintData,TSizedDefaultAllocator<32>_> **)this,
                 *(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
                  ((longlong)this + 8));
    }
    else {
LAB_14a51bc58:
      if (bVar11) {
        FRigUnit_TransformConstraintPerItem::AddConstraintData
                  (&local_328,Rotation,iVar20,&local_158,&local_1b8,
                   *(TArray<FConstraintData,TSizedDefaultAllocator<32>_> **)this,
                   *(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
                    ((longlong)this + 8));
      }
      if (bVar12) {
        EVar18 = Scale;
        goto LAB_14a51bc97;
      }
    }
    iVar20 = iVar20 + 1;
    if (iVar4 <= iVar20) {
      return;
    }
  } while( true );
}

// AddConstraintData @ 14a51e110

/* WARNING: Removing unreachable block (ram,0x00014a51e262) */

void __cdecl
FRigUnit_TransformConstraintPerItem::AddConstraintData
          (TArrayView<FConstraintTarget_const_,int> *param_1,ETransformConstraintType param_2,
          int param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          TArray<FConstraintData,TSizedDefaultAllocator<32>_> *param_6,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_7)

{
  undefined2 uVar1;
  code *pcVar2;
  TArray<FConstraintData,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  FConstraintTarget *pFVar6;
  undefined8 *puVar7;
  FConstraintDescriptionEx *pFVar8;
  longlong lVar9;
  FConstraintData *this;
  uint local_res10 [2];
  int local_res18 [4];
  uint *local_58;
  int *local_50;
  undefined2 local_40;
  
  local_res18[0] = param_3;
  pFVar6 = TArrayView<FConstraintTarget_const_,int>::operator[](param_1,param_3);
  pTVar3 = param_6;
  uVar5 = param_6->ArrayNum;
  if (uVar5 == param_6->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10e0,&param_6->AllocatorInstance,&param_6->ArrayMax);
  }
  pTVar3->ArrayNum = uVar5 + 1;
  DefaultConstructItems<FConstraintData,int>
            ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xe0,1);
  local_res10[0] = uVar5;
  if ((uVar5 == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                         ,0x9e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar9 = (longlong)(int)local_res10[0];
  uVar5 = 0;
  if ((int)local_res10[0] < pTVar3->ArrayNum) {
    uVar5 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_40 = 0x101;
  this = (FConstraintData *)((pTVar3->AllocatorInstance).Data + lVar9 * 0xe0);
  puVar7 = ::operator_new(0x18);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *(undefined2 *)(puVar7 + 1) = local_40;
    *(undefined1 *)((longlong)puVar7 + 10) = 1;
    *puVar7 = &___7FTransformConstraintDescription__6B_;
    *(ETransformConstraintType *)(puVar7 + 2) = param_2;
  }
  pFVar8 = (this->Constraint).ConstraintDescription;
  if (pFVar8 != (FConstraintDescriptionEx *)0x0) {
    (**(code **)pFVar8->_padding_)(pFVar8,1);
    (this->Constraint).ConstraintDescription = (FConstraintDescriptionEx *)0x0;
  }
  (this->Constraint).Type = Transform;
  if (puVar7 != (undefined8 *)0x0) {
    pFVar8 = ::operator_new(0x18);
    if (pFVar8 != (FConstraintDescriptionEx *)0x0) {
      pFVar8->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
      uVar1 = *(undefined2 *)(puVar7 + 1);
      (pFVar8->AxesFilterOption).bX = (bool)(char)uVar1;
      (pFVar8->AxesFilterOption).bY = (bool)(char)((ushort)uVar1 >> 8);
      (pFVar8->AxesFilterOption).bZ = *(bool *)((longlong)puVar7 + 10);
      pFVar8->_padding_ = (longlong)&___7FTransformConstraintDescription__6B_;
      *(undefined1 *)&pFVar8[1]._padding_ = *(undefined1 *)(puVar7 + 2);
    }
    (this->Constraint).ConstraintDescription = pFVar8;
    (**(code **)*puVar7)(puVar7,1);
  }
  this->bMaintainOffset = pFVar6->bMaintainOffset;
  this->Weight = pFVar6->Weight;
  if (pFVar6->bMaintainOffset != false) {
    FConstraintData::SaveInverseOffset(this,param_4,&pFVar6->Transform,param_5);
  }
  local_58 = local_res10;
  local_50 = local_res18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             param_7,(TPairInitializer<int_const_&,int_const_&> *)&param_6,(bool *)&local_58);
  return;
}

// Execute @ 14a52ee50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TransformConstraintPerItem::Execute
          (FRigUnit_TransformConstraintPerItem *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FConstraintTarget_const_,int> local_18;
  
  local_18.DataPtr = (FConstraintTarget *)(this->Targets).AllocatorInstance.Data;
  iVar1 = (this->Targets).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&this->Item,this->BaseTransformSpace,&this->BaseTransform,&this->BaseItem,
                &local_18,this->bUseInitialTransforms,&this->WorkData);
  return;
}

// Execute @ 14a52ef00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TransformConstraintPerItem::Execute(FRigUnit_TransformConstraintPerItem *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FConstraintTarget_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_278.DataPtr = (FConstraintTarget *)(this->Targets).AllocatorInstance.Data;
  iVar1 = (this->Targets).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,this->BaseTransformSpace,
                &this->BaseTransform,&this->BaseItem,&local_278,this->bUseInitialTransforms,
                &this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a5312e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_TransformConstraintPerItem::GetExecuteContextStruct
          (FRigUnit_TransformConstraintPerItem *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// GetUpgradeInfo @ 14a531c50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_TransformConstraintPerItem::GetUpgradeInfo
          (FRigUnit_TransformConstraintPerItem *this,FRigVMStructUpgradeInfo *__return_storage_ptr__
          )

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RigVMExecute @ 14a559f60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TransformConstraintPerItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ETransformSpaceMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  ETransformSpaceMode *pEVar7;
  TTransform<double> *pTVar8;
  FRigVMMemoryHandle *pFVar9;
  FRigElementKey *pFVar10;
  uchar *puVar11;
  uchar *puVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_TransformConstraint_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  TArrayView<FConstraintTarget_const_,int> local_38;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar9[1].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  EVar1 = *pEVar7;
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TTransform<double> *)pFVar9[2].Ptr;
  }
  else {
    pTVar8 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar10 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar4 = (bool)*puVar12;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_TransformConstraint_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar13->Offset + pFVar13->Index);
  local_38.DataPtr = *(FConstraintTarget **)puVar11;
  local_38.ArrayNum = *(int *)(puVar11 + 8);
  if (local_38.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar6,EVar1,pTVar8,pFVar10,&local_38,bVar4,pFVar14);
  return;
}

// StaticExecute @ 14a59de60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TransformConstraintPerItem::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,ETransformSpaceMode param_3,
          TTransform<double> *param_4,FRigElementKey *param_5,
          TArrayView<FConstraintTarget_const_,int> *param_6,bool param_7,
          FRigUnit_TransformConstraint_WorkData *param_8)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar1;
  float fVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FRigUnit_TransformConstraint_WorkData *pFVar18;
  TArrayView<FConstraintTarget_const_,int> *this;
  FRigElementKey *pFVar19;
  URigHierarchy *this_00;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  FConstraintTarget *pFVar25;
  FRigElementKey *pFVar26;
  uint *puVar27;
  undefined1 *puVar28;
  FRigElementKey *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ETransformSpaceMode local_res18 [16];
  undefined1 auStackY_348 [32];
  TArrayView<FConstraintTarget_const_,int> *local_308;
  uint local_300;
  FRigElementKey *local_2f8;
  URigHierarchy *local_2f0;
  TTransform<double> *local_2e8;
  FRigElementKey *local_2e0;
  FRigElementKey local_2d8;
  FRigElementKey local_2c8;
  FRigElementKey local_2b8;
  FRigElementKey local_2a8;
  FRigUnit_TransformConstraint_WorkData *local_298;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_290;
  FControlRigExecuteContext *local_288;
  FRigElementKey *local_280;
  TArrayView<FConstraintTarget_const_,int> *local_278;
  bool *local_270;
  ETransformSpaceMode *local_268;
  FRigElementKey *local_260;
  TTransform<double> *local_258;
  FRigElementKey local_248;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  pFVar18 = param_8;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_270 = &param_7;
  local_2e0 = param_5;
  pTVar1 = &param_8->ConstraintDataToTargets;
  local_260 = param_5;
  local_2f0 = param_1->Hierarchy;
  local_268 = local_res18;
  local_308 = param_6;
  local_298 = param_8;
  local_278 = param_6;
  if (local_2f0 == (URigHierarchy *)0x0) {
    return;
  }
  local_res18[0] = param_3;
  local_2f8 = param_2;
  local_2e8 = param_4;
  local_290 = pTVar1;
  local_288 = param_1;
  local_280 = param_2;
  local_258 = param_4;
  if ((param_8->ConstraintData).ArrayNum != param_6->ArrayNum) {
    `FRigUnit_TransformConstraintPerItem::StaticExecute'::__l2::<lambda_1>::operator()(&local_298);
  }
  bVar20 = ::FName::IsWithinBounds((FNameEntryId)(param_2->Name).ComparisonIndex.Value);
  this = local_308;
  if (!bVar20) {
    return;
  }
  if (param_2->Name == (FName)0x0) {
    return;
  }
  if (param_2->Type == None) {
    return;
  }
  if (param_6->ArrayNum < 1) {
    return;
  }
  if ((pFVar18->ConstraintData).ArrayNum < 1) {
    return;
  }
  uVar31 = 0;
  uVar32 = uVar31;
  do {
    uVar30 = (uint)uVar31;
    if (*(int *)&(pFVar18->ConstraintDataToTargets).field_0x8 !=
        *(int *)&(pFVar18->ConstraintDataToTargets).field_0x34) {
      puVar3 = *(undefined1 **)&(pFVar18->ConstraintDataToTargets).field_0x40;
      puVar28 = &(pFVar18->ConstraintDataToTargets).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar28 = puVar3;
      }
      uVar21 = *(uint *)(puVar28 +
                        (*(int *)&(pFVar18->ConstraintDataToTargets).field_0x48 - 1 & uVar31) * 4);
      if (uVar21 != 0xffffffff) {
        do {
          puVar27 = (uint *)((longlong)(int)uVar21 * 0x10 + *(longlong *)pTVar1);
          if (*puVar27 == uVar30) {
            puVar24 = puVar27 + 1;
            if (puVar27 == (uint *)0x0) {
              puVar24 = (uint *)0x0;
            }
            if (puVar24 != (uint *)0x0) {
              uVar21 = *puVar24;
              pFVar25 = TArrayView<FConstraintTarget_const_,int>::operator[](this,uVar21);
              dVar6 = (pFVar25->Transform).Rotation.XY.m128d_f64[0];
              dVar7 = (pFVar25->Transform).Rotation.XY.m128d_f64[1];
              dVar8 = (pFVar25->Transform).Rotation.ZW.m128d_f64[0];
              dVar9 = (pFVar25->Transform).Rotation.ZW.m128d_f64[1];
              dVar10 = (pFVar25->Transform).Translation.XY.m128d_f64[0];
              dVar11 = (pFVar25->Transform).Translation.XY.m128d_f64[1];
              dVar12 = (pFVar25->Transform).Translation.ZW.m128d_f64[0];
              dVar13 = (pFVar25->Transform).Translation.ZW.m128d_f64[1];
              dVar14 = (pFVar25->Transform).Scale3D.XY.m128d_f64[0];
              dVar15 = (pFVar25->Transform).Scale3D.XY.m128d_f64[1];
              dVar16 = (pFVar25->Transform).Scale3D.ZW.m128d_f64[0];
              dVar17 = (pFVar25->Transform).Scale3D.ZW.m128d_f64[1];
              uVar22 = 0;
              if ((int)uVar30 < (pFVar18->ConstraintData).ArrayNum) {
                uVar22 = ~uVar30 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (pFVar18->ConstraintData).AllocatorInstance.Data;
              *(double *)(pFVar4 + uVar32 + 0x80) = dVar6;
              *(double *)(pFVar4 + uVar32 + 0x80 + 8) = dVar7;
              *(double *)(pFVar4 + uVar32 + 0x90) = dVar8;
              *(double *)(pFVar4 + uVar32 + 0x90 + 8) = dVar9;
              *(double *)(pFVar4 + uVar32 + 0xa0) = dVar10;
              *(double *)(pFVar4 + uVar32 + 0xa0 + 8) = dVar11;
              *(double *)(pFVar4 + uVar32 + 0xb0) = dVar12;
              *(double *)(pFVar4 + uVar32 + 0xb0 + 8) = dVar13;
              *(double *)(pFVar4 + uVar32 + 0xc0) = dVar14;
              *(double *)(pFVar4 + uVar32 + 0xc0 + 8) = dVar15;
              *(double *)(pFVar4 + uVar32 + 0xd0) = dVar16;
              *(double *)(pFVar4 + uVar32 + 0xd0 + 8) = dVar17;
              pFVar25 = TArrayView<FConstraintTarget_const_,int>::operator[](this,uVar21);
              fVar2 = pFVar25->Weight;
              uVar21 = 0;
              if ((int)uVar30 < (pFVar18->ConstraintData).ArrayNum) {
                uVar21 = ~uVar30 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(float *)((pFVar18->ConstraintData).AllocatorInstance.Data + uVar32 + 0x10) = fVar2;
            }
            break;
          }
          uVar21 = puVar27[2];
        } while (uVar21 != 0xffffffff);
      }
    }
    this_00 = local_2f0;
    pFVar19 = local_2f8;
    uVar31 = (ulonglong)(uVar30 + 1);
    uVar32 = uVar32 + 0xe0;
  } while ((int)(uVar30 + 1) < (pFVar18->ConstraintData).ArrayNum);
  local_308._0_1_ = local_2f8->Type;
  local_308._1_3_ = *(undefined3 *)&local_2f8->field_0x1;
  local_308._4_4_ = (local_2f8->Name).ComparisonIndex.Value;
  local_300 = (local_2f8->Name).Number;
  pFVar26 = URigHierarchy::GetFirstParent(local_2f0,&local_248,(FRigElementKey *)&local_308);
  if (local_res18[0] == LocalSpace) {
    local_2c8.Type = pFVar26->Type;
    local_2c8._1_3_ = *(undefined3 *)&pFVar26->field_0x1;
    local_2c8.Name.ComparisonIndex.Value = (pFVar26->Name).ComparisonIndex.Value;
    pFVar29 = &local_2c8;
    local_2c8.Name.Number = (pFVar26->Name).Number;
LAB_14a59e267:
    iVar23 = URigHierarchy::GetIndex(this_00,pFVar29,true);
    URigHierarchy::GetGlobalTransformByIndex(this_00,&local_1d8,iVar23,false);
  }
  else {
    if (local_res18[0] != GlobalSpace) {
      if (local_res18[0] == BaseSpace) {
        local_1d8.Rotation.XY.m128d_f64 = *&(local_2e8->Rotation).XY.m128d_f64;
        local_1d8.Rotation.ZW.m128d_f64 = *&(local_2e8->Rotation).ZW.m128d_f64;
        local_1d8.Translation.XY.m128d_f64 = *&(local_2e8->Translation).XY.m128d_f64;
        local_1d8.Translation.ZW.m128d_f64 = *&(local_2e8->Translation).ZW.m128d_f64;
        local_1d8.Scale3D.XY.m128d_f64 = *&(local_2e8->Scale3D).XY.m128d_f64;
        local_1d8.Scale3D.ZW.m128d_f64 = *&(local_2e8->Scale3D).ZW.m128d_f64;
        goto LAB_14a59e284;
      }
      if (local_res18[0] == BaseJoint) {
        pFVar29 = &local_2d8;
        local_2d8.Type = local_2e0->Type;
        local_2d8._1_3_ = *(undefined3 *)&local_2e0->field_0x1;
        local_2d8.Name.ComparisonIndex.Value = (local_2e0->Name).ComparisonIndex.Value;
        local_2d8.Name.Number = (local_2e0->Name).Number;
        goto LAB_14a59e267;
      }
    }
    local_1d8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_1d8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_1d8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_1d8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_1d8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1d8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
LAB_14a59e284:
  local_2b8.Type = pFVar19->Type;
  local_2b8._1_3_ = *(undefined3 *)&pFVar19->field_0x1;
  local_2b8.Name.ComparisonIndex.Value = (pFVar19->Name).ComparisonIndex.Value;
  local_2b8.Name.Number = (pFVar19->Name).Number;
  iVar23 = URigHierarchy::GetIndex(this_00,&local_2b8,true);
  URigHierarchy::GetGlobalTransformByIndex(this_00,&local_118,iVar23,false);
  AnimationCore::SolveConstraints(&local_178,&local_118,&local_1d8,&pFVar18->ConstraintData);
  local_2a8.Type = pFVar19->Type;
  local_2a8._1_3_ = *(undefined3 *)&pFVar19->field_0x1;
  local_2a8.Name.ComparisonIndex.Value = (pFVar19->Name).ComparisonIndex.Value;
  local_2a8.Name.Number = (pFVar19->Name).Number;
  iVar23 = URigHierarchy::GetIndex(this_00,&local_2a8,true);
  local_238.Rotation.XY.m128d_f64[0] = local_178.Rotation.XY.m128d_f64[0];
  local_238.Rotation.XY.m128d_f64[1] = local_178.Rotation.XY.m128d_f64[1];
  local_238.Rotation.ZW.m128d_f64[0] = local_178.Rotation.ZW.m128d_f64[0];
  local_238.Rotation.ZW.m128d_f64[1] = local_178.Rotation.ZW.m128d_f64[1];
  local_238.Translation.XY.m128d_f64[0] = local_178.Translation.XY.m128d_f64[0];
  local_238.Translation.XY.m128d_f64[1] = local_178.Translation.XY.m128d_f64[1];
  local_238.Translation.ZW.m128d_f64[0] = local_178.Translation.ZW.m128d_f64[0];
  local_238.Translation.ZW.m128d_f64[1] = local_178.Translation.ZW.m128d_f64[1];
  local_238.Scale3D.XY.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
  local_238.Scale3D.XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[1];
  local_238.Scale3D.ZW.m128d_f64[0] = local_178.Scale3D.ZW.m128d_f64[0];
  local_238.Scale3D.ZW.m128d_f64[1] = local_178.Scale3D.ZW.m128d_f64[1];
  URigHierarchy::SetGlobalTransformByIndex(this_00,iVar23,&local_238,false,true,false,false);
  return;
}

