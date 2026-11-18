// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FDynamicSkelMeshObjectDataCPUSkin @ 14861fd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDynamicSkelMeshObjectDataCPUSkin * __thiscall
FDynamicSkelMeshObjectDataCPUSkin::FDynamicSkelMeshObjectDataCPUSkin
          (FDynamicSkelMeshObjectDataCPUSkin *this,FSkinnedMeshSceneProxyDynamicData *param_1,
          USkinnedAsset *param_2,FSkeletalMeshRenderData *param_3,int param_4,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_5,TArrayView<float_const_,int> *param_6)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
  *this_00;
  int iVar5;
  float *_Src;
  IClothSimulationDataProvider *pIVar6;
  double dVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  TMatrix<double> *pTVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStackY_1d8 [32];
  TArrayView<unsigned_char_const_,int> local_188;
  FSkeletalMeshRenderData *local_178;
  USkinnedAsset *local_170;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_168;
  TMatrix<double> local_158;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar11 = &this->MeshComponentSpaceTransforms;
  (this->ReferenceToLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FDynamicSkelMeshObjectDataCPUSkin__6B_;
  piVar1 = &(this->MeshComponentSpaceTransforms).ArrayMax;
  (this->ReferenceToLocal).ArrayNum = 0;
  (this->ReferenceToLocal).ArrayMax = 0;
  *piVar1 = 0;
  (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MeshComponentSpaceTransforms).ArrayNum = 0;
  this->LODIndex = param_4;
  *(undefined8 *)&(this->ActiveMorphTargets).field_0x0 = 0;
  *(undefined8 *)&(this->ActiveMorphTargets).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveMorphTargets).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveMorphTargets).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveMorphTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveMorphTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveMorphTargets).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveMorphTargets).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveMorphTargets).field_0x48 = 0;
  local_178 = param_3;
  local_170 = param_2;
  TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
               *)&this->ActiveMorphTargets,
              (TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
               *)param_5);
  pTVar4 = &this->MorphTargetWeights;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MorphTargetWeights).ArrayMax;
  iVar5 = param_6->ArrayNum;
  _Src = param_6->DataPtr;
  (this->MorphTargetWeights).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar5 << 2);
  }
  this_00 = &this->ClothSimulUpdateData;
  *(undefined4 *)&(this->ClothSimulUpdateData).field_0xc = 0;
  puVar3 = &(this->ClothSimulUpdateData).field_0xc;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined4 *)&(this->ClothSimulUpdateData).field_0x8 = 0;
  *(undefined8 *)&(this->ClothSimulUpdateData).field_0x20 = 0;
  *(undefined4 *)&(this->ClothSimulUpdateData).field_0x28 = 0;
  *(undefined4 *)&(this->ClothSimulUpdateData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothSimulUpdateData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClothSimulUpdateData).field_0x34 = 0;
  *(undefined8 *)&(this->ClothSimulUpdateData).field_0x40 = 0;
  *(undefined4 *)&(this->ClothSimulUpdateData).field_0x48 = 0;
  this->ClothBlendWeight = 0.0;
  iVar5 = (param_1->ComponentSpaceTransforms).ArrayNum;
  local_188.DataPtr = (uchar *)(param_1->ComponentSpaceTransforms).DataPtr;
  (this->MeshComponentSpaceTransforms).ArrayNum = iVar5;
  if ((iVar5 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,*piVar1,&pTVar11->AllocatorInstance,iVar5,piVar1);
    if (iVar5 != 0) {
      memcpy((pTVar11->AllocatorInstance).Data,local_188.DataPtr,(longlong)iVar5 * 0x60);
    }
  }
  local_188.DataPtr = (param_1->BoneVisibilityStates).DataPtr;
  local_188.ArrayNum = (param_1->BoneVisibilityStates).ArrayNum;
  local_188._12_4_ = *(undefined4 *)&(param_1->BoneVisibilityStates).field_0xc;
  if ((this->MeshComponentSpaceTransforms).ArrayNum != 0) {
    pTVar11 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  local_168.DataPtr = (param_1->ComponentSpaceTransforms).DataPtr;
  local_168.ArrayNum = (param_1->ComponentSpaceTransforms).ArrayNum;
  local_168._12_4_ = *(undefined4 *)&(param_1->ComponentSpaceTransforms).field_0xc;
  UpdateRefToLocalMatricesInner
            (&local_168,&local_188,&this->ReferenceToLocal,param_1,local_170,local_178,
             this->LODIndex,(TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0,pTVar11);
  pIVar6 = param_1->ClothSimulDataProvider;
  if (pIVar6 == (IClothSimulationDataProvider *)0x0) {
    if (*(int *)&(this->ClothSimulUpdateData).field_0x8 !=
        *(int *)&(this->ClothSimulUpdateData).field_0x34) {
      TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
                        *)this_00);
      TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->ClothSimulUpdateData).field_0x8);
      *(undefined4 *)&(this->ClothSimulUpdateData).field_0x8 = 0;
      if (*(int *)puVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x110,0x10,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
      }
      *(undefined4 *)&(this->ClothSimulUpdateData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ClothSimulUpdateData).field_0x34 = 0;
      *(undefined4 *)&(this->ClothSimulUpdateData).field_0x28 = 0;
    }
    local_158.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_158.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_158.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_158.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_158.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_158.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_158.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_158.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_158.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_158.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_158.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_158.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_158.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_158.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_158.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_158.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
    this->ClothBlendWeight = 0.0;
  }
  else {
    (**(code **)*pIVar6)(pIVar6,this_00,&local_158,&this->ClothBlendWeight);
  }
  pTVar10 = UE::Math::TMatrix<double>::InverseFast(&local_158,&local_d8);
  dVar7 = pTVar10->M[0][1];
  (this->WorldToLocal).M[0][0] = pTVar10->M[0][0];
  (this->WorldToLocal).M[0][1] = dVar7;
  dVar7 = pTVar10->M[0][3];
  (this->WorldToLocal).M[0][2] = pTVar10->M[0][2];
  (this->WorldToLocal).M[0][3] = dVar7;
  dVar7 = pTVar10->M[1][1];
  (this->WorldToLocal).M[1][0] = pTVar10->M[1][0];
  (this->WorldToLocal).M[1][1] = dVar7;
  dVar7 = pTVar10->M[1][3];
  (this->WorldToLocal).M[1][2] = pTVar10->M[1][2];
  (this->WorldToLocal).M[1][3] = dVar7;
  dVar7 = pTVar10->M[2][1];
  (this->WorldToLocal).M[2][0] = pTVar10->M[2][0];
  (this->WorldToLocal).M[2][1] = dVar7;
  dVar7 = pTVar10->M[2][3];
  (this->WorldToLocal).M[2][2] = pTVar10->M[2][2];
  (this->WorldToLocal).M[2][3] = dVar7;
  dVar7 = pTVar10->M[3][1];
  (this->WorldToLocal).M[3][0] = pTVar10->M[3][0];
  (this->WorldToLocal).M[3][1] = dVar7;
  dVar7 = pTVar10->M[3][3];
  (this->WorldToLocal).M[3][2] = pTVar10->M[3][2];
  (this->WorldToLocal).M[3][3] = dVar7;
  pTVar8 = CVarSkeletalMeshClothBlendEnabled.Ref;
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    pTVar11 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)&DAT_00000001;
    if (!bVar9) goto LAB_148620077;
  }
  pTVar11 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
LAB_148620077:
  if (pTVar8->ShadowedValue[(longlong)&(pTVar11->AllocatorInstance).Data] == false) {
    this->ClothBlendWeight = 0.0;
  }
  return this;
}

// ~FDynamicSkelMeshObjectDataCPUSkin @ 148624e90

void __thiscall
FDynamicSkelMeshObjectDataCPUSkin::~FDynamicSkelMeshObjectDataCPUSkin
          (FDynamicSkelMeshObjectDataCPUSkin *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ClothSimulUpdateData).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FDynamicSkelMeshObjectDataCPUSkin__6B_;
  pvVar1 = *(void **)&(this->ClothSimulUpdateData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothSimulUpdateData);
  pFVar2 = (this->MorphTargetWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ActiveMorphTargets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveMorphTargets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveMorphTargets);
  pFVar2 = (this->MeshComponentSpaceTransforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ReferenceToLocal).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetResourceSizeEx @ 14864d350

void __thiscall
FDynamicSkelMeshObjectDataCPUSkin::GetResourceSizeEx
          (FDynamicSkelMeshObjectDataCPUSkin *this,FResourceSizeEx *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x170);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->ReferenceToLocal).ArrayMax << 6);
  uVar1 = *(uint *)&(this->ActiveMorphTargets).field_0x48;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,lVar2 + (ulonglong)
                             ((*(int *)&(this->ActiveMorphTargets).field_0x2c + 0x1fU >> 5) << 2) +
                     (longlong)*(int *)&(this->ActiveMorphTargets).field_0xc * 0x18);
  return;
}

