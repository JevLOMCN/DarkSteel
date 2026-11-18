// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 3

// StaticStruct @ 143125070

UScriptStruct * __cdecl FTransformDynamicState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformDynamicState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateStream();
    Z_Registration_Info_UScriptStruct_FTransformDynamicState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformDynamicState,(UObject *)pUVar1,
                         L"TransformDynamicState");
  }
  return Z_Registration_Info_UScriptStruct_FTransformDynamicState.OuterSingleton;
}

// FTransformDynamicState @ 143125600

FTransformDynamicState * __thiscall
FTransformDynamicState::FTransformDynamicState
          (FTransformDynamicState *this,FTransformDynamicState *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  
  pTVar1 = &this->BoneTransforms;
  this->ModifiedFlags = param_1->ModifiedFlags;
  dVar8 = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  piVar2 = &(this->BoneTransforms).ArrayMax;
  (this->LocalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar8;
  dVar8 = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar8;
  uVar5 = *(undefined4 *)((longlong)(param_1->LocalTransform).Scale3D.XY.m128d_f64 + 4);
  uVar6 = *(undefined4 *)((param_1->LocalTransform).Scale3D.XY.m128d_f64 + 1);
  uVar7 = *(undefined4 *)((longlong)(param_1->LocalTransform).Scale3D.XY.m128d_f64 + 0xc);
  *(undefined4 *)(this->LocalTransform).Scale3D.XY.m128d_f64 =
       *(undefined4 *)(param_1->LocalTransform).Scale3D.XY.m128d_f64;
  *(undefined4 *)((longlong)(this->LocalTransform).Scale3D.XY.m128d_f64 + 4) = uVar5;
  *(undefined4 *)((this->LocalTransform).Scale3D.XY.m128d_f64 + 1) = uVar6;
  *(undefined4 *)((longlong)(this->LocalTransform).Scale3D.XY.m128d_f64 + 0xc) = uVar7;
  dVar8 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->BoneTransforms).ArrayNum;
  _Src = (param_1->BoneTransforms).AllocatorInstance.Data;
  (this->BoneTransforms).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x60);
  }
  puVar4 = *(undefined8 **)&param_1->Parent;
  *(undefined8 **)&this->Parent = puVar4;
  iVar3 = *(int *)&(param_1->Parent).field_0x8;
  *(int *)&(this->Parent).field_0x8 = iVar3;
  *(undefined4 *)&(this->Parent).field_0xc = *(undefined4 *)&(param_1->Parent).field_0xc;
  if ((puVar4 != (undefined8 *)0x0) && (iVar3 == 0)) {
    (**(code **)*puVar4)();
  }
  this->bVisible = param_1->bVisible;
  return this;
}

// Apply @ 143126780

void __thiscall
FTransformDynamicState::Apply
          (FTransformDynamicState *this,FStateStreamCopyContext *param_1,
          FTransformDynamicState *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  if ((param_2->ModifiedFlags & 1) != 0) {
    dVar2 = (param_2->LocalTransform).Rotation.XY.m128d_f64[1];
    (this->LocalTransform).Rotation.XY.m128d_f64[0] =
         (param_2->LocalTransform).Rotation.XY.m128d_f64[0];
    (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->LocalTransform).Rotation.ZW.m128d_f64[1];
    (this->LocalTransform).Rotation.ZW.m128d_f64[0] =
         (param_2->LocalTransform).Rotation.ZW.m128d_f64[0];
    (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->LocalTransform).Translation.XY.m128d_f64[1];
    (this->LocalTransform).Translation.XY.m128d_f64[0] =
         (param_2->LocalTransform).Translation.XY.m128d_f64[0];
    (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->LocalTransform).Translation.ZW.m128d_f64[1];
    (this->LocalTransform).Translation.ZW.m128d_f64[0] =
         (param_2->LocalTransform).Translation.ZW.m128d_f64[0];
    (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->LocalTransform).Scale3D.XY.m128d_f64[1];
    (this->LocalTransform).Scale3D.XY.m128d_f64[0] =
         (param_2->LocalTransform).Scale3D.XY.m128d_f64[0];
    (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->LocalTransform).Scale3D.ZW.m128d_f64[0];
    dVar3 = (param_2->LocalTransform).Scale3D.ZW.m128d_f64[1];
    this->ModifiedFlags = this->ModifiedFlags | 1;
    (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = dVar2;
    (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  }
  if ((param_2->ModifiedFlags & 2) != 0) {
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&this->BoneTransforms,&param_2->BoneTransforms);
    this->ModifiedFlags = this->ModifiedFlags | 2;
  }
  if ((param_2->ModifiedFlags & 4) != 0) {
    if ((*(int *)&(this->Parent).field_0xc != *(int *)&(param_2->Parent).field_0xc) ||
       (*(longlong *)&this->Parent != *(longlong *)&(param_2->Parent).field_0x0)) {
      FTransformHandle::Apply(&this->Parent,param_1,(FStateStreamHandle *)&param_2->Parent);
      this->ModifiedFlags = this->ModifiedFlags | 4;
    }
  }
  if (((param_2->ModifiedFlags & 8) != 0) && (bVar1 = param_2->bVisible, this->bVisible != bVar1)) {
    this->ModifiedFlags = this->ModifiedFlags | 8;
    this->bVisible = bVar1;
  }
  return;
}

