// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 145

// TMeshAttributeArraySet<int> @ 143655de0

TMeshAttributeArraySet<int> * __thiscall
TMeshAttributeArraySet<int>::TMeshAttributeArraySet<int>
          (TMeshAttributeArraySet<int> *this,TMeshAttributeArraySet<int> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar3;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<int>_>)&param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
      FVar3 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
    }
    ConstructItems<TMeshAttributeArrayBase<int>,TMeshAttributeArrayBase<int>,int>
              ((void *)FVar3,(TMeshAttributeArrayBase<int> *)FVar4,iVar2);
  }
  this->DefaultValue = param_1->DefaultValue;
  return this;
}

// TMeshAttributeArraySet<float> @ 143655ec0

TMeshAttributeArraySet<float> * __thiscall
TMeshAttributeArraySet<float>::TMeshAttributeArraySet<float>
          (TMeshAttributeArraySet<float> *this,TMeshAttributeArraySet<float> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar3;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshAttributeArraySet_M__6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TMeshAttributeArrayBase<float>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<float>_>)&param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
      FVar3 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
    }
    ConstructItems<TMeshAttributeArrayBase<float>,TMeshAttributeArrayBase<float>,int>
              ((void *)FVar3,(TMeshAttributeArrayBase<float> *)FVar4,iVar2);
  }
  this->DefaultValue = param_1->DefaultValue;
  return this;
}

// TMeshAttributeArraySet<UE::Math::TTransform<double>_> @ 143655fa0

TMeshAttributeArraySet<UE::Math::TTransform<double>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::
TMeshAttributeArraySet<UE::Math::TTransform<double>_>
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,
          TMeshAttributeArraySet<UE::Math::TTransform<double>_> *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar5;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TTransform_N_Math_UE____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0;
  FVar5 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            &param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
      FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
    }
    ConstructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
              ((void *)FVar4,(TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)FVar5,iVar2);
  }
  dVar3 = (param_1->DefaultValue).Rotation.XY.m128d_f64[1];
  (this->DefaultValue).Rotation.XY.m128d_f64[0] = (param_1->DefaultValue).Rotation.XY.m128d_f64[0];
  (this->DefaultValue).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->DefaultValue).Rotation.ZW.m128d_f64[1];
  (this->DefaultValue).Rotation.ZW.m128d_f64[0] = (param_1->DefaultValue).Rotation.ZW.m128d_f64[0];
  (this->DefaultValue).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->DefaultValue).Translation.XY.m128d_f64[1];
  (this->DefaultValue).Translation.XY.m128d_f64[0] =
       (param_1->DefaultValue).Translation.XY.m128d_f64[0];
  (this->DefaultValue).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->DefaultValue).Translation.ZW.m128d_f64[1];
  (this->DefaultValue).Translation.ZW.m128d_f64[0] =
       (param_1->DefaultValue).Translation.ZW.m128d_f64[0];
  (this->DefaultValue).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->DefaultValue).Scale3D.XY.m128d_f64[1];
  (this->DefaultValue).Scale3D.XY.m128d_f64[0] = (param_1->DefaultValue).Scale3D.XY.m128d_f64[0];
  (this->DefaultValue).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->DefaultValue).Scale3D.ZW.m128d_f64[1];
  (this->DefaultValue).Scale3D.ZW.m128d_f64[0] = (param_1->DefaultValue).Scale3D.ZW.m128d_f64[0];
  (this->DefaultValue).Scale3D.ZW.m128d_f64[1] = dVar3;
  return this;
}

// TMeshAttributeArraySet<UE::Math::TVector2<float>_> @ 1436560c0

TMeshAttributeArraySet<UE::Math::TVector2<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::
TMeshAttributeArraySet<UE::Math::TVector2<float>_>
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,
          TMeshAttributeArraySet<UE::Math::TVector2<float>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
      FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
    }
    ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
              ((void *)FVar3,(TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)FVar4,iVar2);
  }
  (this->DefaultValue).field0_0x0 = (param_1->DefaultValue).field0_0x0;
  return this;
}

// TMeshAttributeArraySet<UE::Math::TVector4<float>_> @ 1436561b0

TMeshAttributeArraySet<UE::Math::TVector4<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::
TMeshAttributeArraySet<UE::Math::TVector4<float>_>
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,
          TMeshAttributeArraySet<UE::Math::TVector4<float>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar5;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector4_M_Math_UE____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0;
  FVar5 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
      FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
    }
    ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
              ((void *)FVar4,(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar5,iVar2);
  }
  uVar3 = *(undefined8 *)((longlong)&(param_1->DefaultValue).field0_0x0 + 8);
  *(undefined8 *)&(this->DefaultValue).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultValue).field0_0x0;
  *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8) = uVar3;
  return this;
}

// TMeshAttributeArraySet<UE::Math::TVector<float>_> @ 1436562a0

TMeshAttributeArraySet<UE::Math::TVector<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::TMeshAttributeArraySet<UE::Math::TVector<float>_>
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,
          TMeshAttributeArraySet<UE::Math::TVector<float>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector_M_Math_UE____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
      FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
    }
    ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
              ((void *)FVar3,(TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)FVar4,iVar2);
  }
  *(undefined8 *)&(this->DefaultValue).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultValue).field0_0x0;
  (this->DefaultValue).field0_0x0._s_0.Z = (param_1->DefaultValue).field0_0x0._s_0.Z;
  return this;
}

// TMeshAttributeArraySet<FName> @ 143656390

TMeshAttributeArraySet<FName> * __thiscall
TMeshAttributeArraySet<FName>::TMeshAttributeArraySet<FName>
          (TMeshAttributeArraySet<FName> *this,TMeshAttributeArraySet<FName> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar3;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshAttributeArraySet_VFName____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
      FVar3 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
    }
    ConstructItems<TMeshAttributeArrayBase<FName>,TMeshAttributeArrayBase<FName>,int>
              ((void *)FVar3,(TMeshAttributeArrayBase<FName> *)FVar4,iVar2);
  }
  this->DefaultValue = param_1->DefaultValue;
  return this;
}

// TMeshAttributeArraySet<bool> @ 143656480

TMeshAttributeArraySet<bool> * __thiscall
TMeshAttributeArraySet<bool>::TMeshAttributeArraySet<bool>
          (TMeshAttributeArraySet<bool> *this,TMeshAttributeArraySet<bool> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar3;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshAttributeArraySet__N__6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
      FVar3 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
    }
    ConstructItems<TMeshAttributeArrayBase<bool>,TMeshAttributeArrayBase<bool>,int>
              ((void *)FVar3,(TMeshAttributeArrayBase<bool> *)FVar4,iVar2);
  }
  this->DefaultValue = param_1->DefaultValue;
  return this;
}

// Clone @ 143663770

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshAttributeArraySet<int>::Clone(TMeshAttributeArraySet<int> *this)

{
  TMeshAttributeArraySet<int> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x48);
  if (pTVar1 != (TMeshAttributeArraySet<int> *)0x0) {
    pTVar1 = TMeshAttributeArraySet<int>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 1436637d0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshAttributeArraySet<float>::Clone(TMeshAttributeArraySet<float> *this)

{
  TMeshAttributeArraySet<float> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x48);
  if (pTVar1 != (TMeshAttributeArraySet<float> *)0x0) {
    pTVar1 = TMeshAttributeArraySet<float>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663830

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::Clone
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this)

{
  TMeshAttributeArraySet<UE::Math::TTransform<double>_> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0xa0);
  if (pTVar1 != (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *)0x0) {
    pTVar1 = TMeshAttributeArraySet<UE::Math::TTransform<double>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663890

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::Clone
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this)

{
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x48);
  if (pTVar1 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    pTVar1 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 1436638f0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::Clone
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this)

{
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x50);
  if (pTVar1 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
    pTVar1 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663950

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::Clone
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this)

{
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x50);
  if (pTVar1 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    pTVar1 = TMeshAttributeArraySet<UE::Math::TVector<float>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 1436639b0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshAttributeArraySet<FName>::Clone(TMeshAttributeArraySet<FName> *this)

{
  TMeshAttributeArraySet<FName> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x48);
  if (pTVar1 != (TMeshAttributeArraySet<FName> *)0x0) {
    pTVar1 = TMeshAttributeArraySet<FName>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663a10

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshAttributeArraySet<bool>::Clone(TMeshAttributeArraySet<bool> *this)

{
  TMeshAttributeArraySet<bool> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x48);
  if (pTVar1 != (TMeshAttributeArraySet<bool> *)0x0) {
    pTVar1 = TMeshAttributeArraySet<bool>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// GetArrayForChannel @ 1436710f0

TMeshAttributeArrayBase<int> * __thiscall
TMeshAttributeArraySet<int>::GetArrayForChannel(TMeshAttributeArraySet<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<int> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<int> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 143671180

TMeshAttributeArrayBase<int> * __thiscall
TMeshAttributeArraySet<int>::GetArrayForChannel(TMeshAttributeArraySet<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<int> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<int> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 143671210

TMeshAttributeArrayBase<float> * __thiscall
TMeshAttributeArraySet<float>::GetArrayForChannel(TMeshAttributeArraySet<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<float> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<float> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 1436712a0

TMeshAttributeArrayBase<UE::Math::TVector2<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
         ((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 143671330

TMeshAttributeArrayBase<UE::Math::TVector4<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
         ((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 1436713c0

TMeshAttributeArrayBase<UE::Math::TVector<float>_> * __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
         ((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 143671450

TMeshAttributeArrayBase<FVertexID> * __thiscall
TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
          (TMeshAttributeArraySet<FVertexID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<FVertexID> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<FVertexID> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<FVertexID> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 1436714e0

TMeshAttributeArrayBase<FName> * __thiscall
TMeshAttributeArraySet<FName>::GetArrayForChannel(TMeshAttributeArraySet<FName> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<FName> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<FName> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<FName> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetArrayForChannel @ 143671570

TMeshAttributeArrayBase<bool> * __thiscall
TMeshAttributeArraySet<bool>::GetArrayForChannel(TMeshAttributeArraySet<bool> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMeshAttributeArrayBase<bool> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMeshAttributeArrayBase<bool> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FVar5 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar5 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  return (TMeshAttributeArrayBase<bool> *)((longlong)FVar5 + (longlong)param_1 * 0x18);
}

// GetHash @ 143672570

uint __thiscall TMeshAttributeArraySet<int>::GetHash(TMeshAttributeArraySet<int> *this)

{
  ForElementType<TMeshAttributeArrayBase<int>_> FVar1;
  int iVar2;
  uint uVar3;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar4;
  undefined1 local_res8 [8];
  
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<int>_>)((longlong)FVar4 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar1) break;
    uVar3 = (*FCrc::MemCrc32Func)(*(void **)FVar4,*(int *)((longlong)FVar4 + 8) << 2,uVar3);
    FVar4 = (ForElementType<TMeshAttributeArrayBase<int>_>)((longlong)FVar4 + 0x18);
  }
  return uVar3;
}

// GetHash @ 143672600

uint __thiscall TMeshAttributeArraySet<float>::GetHash(TMeshAttributeArraySet<float> *this)

{
  ForElementType<TMeshAttributeArrayBase<float>_> FVar1;
  int iVar2;
  uint uVar3;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar4;
  undefined1 local_res8 [8];
  
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<float>_>)
          ((longlong)FVar4 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar1) break;
    uVar3 = (*FCrc::MemCrc32Func)(*(void **)FVar4,*(int *)((longlong)FVar4 + 8) << 2,uVar3);
    FVar4 = (ForElementType<TMeshAttributeArrayBase<float>_>)((longlong)FVar4 + 0x18);
  }
  return uVar3;
}

// GetHash @ 143672690

uint __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::GetHash
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar1;
  int iVar2;
  uint uVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar4;
  undefined1 local_res8 [8];
  
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
          ((longlong)FVar4 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar1) break;
    uVar3 = (*FCrc::MemCrc32Func)(*(void **)FVar4,*(int *)((longlong)FVar4 + 8) * 0x60,uVar3);
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            ((longlong)FVar4 + 0x18);
  }
  return uVar3;
}

// GetHash @ 143672720

uint __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetHash
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar1;
  int iVar2;
  uint uVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar4;
  undefined1 local_res8 [8];
  
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
          ((longlong)FVar4 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar1) break;
    uVar3 = (*FCrc::MemCrc32Func)(*(void **)FVar4,*(int *)((longlong)FVar4 + 8) << 3,uVar3);
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            ((longlong)FVar4 + 0x18);
  }
  return uVar3;
}

// GetHash @ 1436727b0

uint __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetHash
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar1;
  int iVar2;
  uint uVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar4;
  undefined1 local_res8 [8];
  
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
          ((longlong)FVar4 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar1) break;
    uVar3 = (*FCrc::MemCrc32Func)(*(void **)FVar4,*(int *)((longlong)FVar4 + 8) << 4,uVar3);
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            ((longlong)FVar4 + 0x18);
  }
  return uVar3;
}

// GetHash @ 143672840

uint __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetHash
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar1;
  int iVar2;
  uint uVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar4;
  undefined1 local_res8 [8];
  
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
          ((longlong)FVar4 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar1) break;
    uVar3 = (*FCrc::MemCrc32Func)(*(void **)FVar4,*(int *)((longlong)FVar4 + 8) * 0xc,uVar3);
    FVar4 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            ((longlong)FVar4 + 0x18);
  }
  return uVar3;
}

// GetHash @ 1436728d0

uint __thiscall TMeshAttributeArraySet<FName>::GetHash(TMeshAttributeArraySet<FName> *this)

{
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar1;
  FName *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FName *this_00;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar9;
  undefined1 local_res8 [8];
  TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_res10;
  FString local_48;
  
  FVar9 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  local_res10 = &this->ArrayForChannels;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  uVar6 = 0;
  if (FVar9 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar9 = (ForElementType<TMeshAttributeArrayBase<FName>_>)local_res10;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<FName>_>)
          ((longlong)FVar9 + (longlong)iVar3 * 0x18);
  while( true ) {
    if (local_res10->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<FName>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar9 == FVar1) break;
    this_00 = *(FName **)FVar9;
    iVar4 = *(int *)((longlong)FVar9 + 8);
    pFVar2 = this_00 + iVar4;
    while( true ) {
      if (*(int *)((longlong)FVar9 + 8) != iVar4) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar2) break;
      ::FName::ToString(this_00,&local_48);
      iVar5 = local_48.Data.ArrayNum;
      FVar7.Data = (FScriptContainerElement *)L"";
      if (iVar5 != 0) {
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
      }
      iVar8 = iVar5 * 2 + -2;
      if (iVar5 == 0) {
        iVar8 = 0;
      }
      uVar6 = (*FCrc::MemCrc32Func)(FVar7.Data,iVar8,uVar6);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 1;
    }
    FVar9 = (ForElementType<TMeshAttributeArrayBase<FName>_>)((longlong)FVar9 + 0x18);
  }
  return uVar6;
}

// GetHash @ 1436729d0

uint __thiscall TMeshAttributeArraySet<bool>::GetHash(TMeshAttributeArraySet<bool> *this)

{
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar1;
  int iVar2;
  uint uVar3;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar4;
  undefined1 local_res8 [8];
  
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar4 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar4 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<bool>_>)((longlong)FVar4 + (longlong)iVar2 * 0x18)
  ;
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<bool>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar1) break;
    uVar3 = (*FCrc::MemCrc32Func)(*(void **)FVar4,*(int *)((longlong)FVar4 + 8),uVar3);
    FVar4 = (ForElementType<TMeshAttributeArrayBase<bool>_>)((longlong)FVar4 + 0x18);
  }
  return uVar3;
}

// GetNumChannels @ 1436730e0

int __thiscall TMeshAttributeArraySet<int>::GetNumChannels(TMeshAttributeArraySet<int> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 1436730f0

int __thiscall TMeshAttributeArraySet<float>::GetNumChannels(TMeshAttributeArraySet<float> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673100

int __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::GetNumChannels
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673110

int __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetNumChannels
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673120

int __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetNumChannels
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673130

int __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetNumChannels
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673140

int __thiscall TMeshAttributeArraySet<FName>::GetNumChannels(TMeshAttributeArraySet<FName> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673150

int __thiscall TMeshAttributeArraySet<bool>::GetNumChannels(TMeshAttributeArraySet<bool> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673340

int __thiscall TMeshAttributeArraySet<int>::GetNumIndices(TMeshAttributeArraySet<int> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673350

int __thiscall TMeshAttributeArraySet<float>::GetNumIndices(TMeshAttributeArraySet<float> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673360

int __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::GetNumIndices
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673370

int __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetNumIndices
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673380

int __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetNumIndices
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673390

int __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetNumIndices
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 1436733a0

int __thiscall TMeshAttributeArraySet<FName>::GetNumIndices(TMeshAttributeArraySet<FName> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 1436733b0

int __thiscall TMeshAttributeArraySet<bool>::GetNumIndices(TMeshAttributeArraySet<bool> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// Initialize @ 1436777d0

void __thiscall
TMeshAttributeArraySet<int>::Initialize(TMeshAttributeArraySet<int> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<int>_> *pFVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  uchar *puVar8;
  int iVar9;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar10;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar10 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (FVar10 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  puVar8 = (uchar *)((longlong)FVar10 + 0xc);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    pFVar1 = (ForElementType<TMeshAttributeArrayBase<int>_> *)(puVar8 + -0xc);
    if (pFVar1 == (ForElementType<TMeshAttributeArrayBase<int>_> *)
                  ((longlong)FVar10 + (longlong)iVar3 * 0x18)) break;
    uVar5 = param_1 * *(int *)(puVar8 + 4);
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar9 = *(int *)puVar8;
    puVar2 = puVar8 + -4;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    if (iVar9 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,(ForAnyElementType *)pFVar1,0,(int *)puVar8);
    }
    if (0 < param_1) {
      iVar9 = param_1 * *(int *)(puVar8 + 4);
      if (*(int *)puVar2 < iVar9) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar9 - *(int *)puVar2,(ForAnyElementType *)pFVar1,(int *)puVar2,
                           (int *)puVar8);
        pFVar6 = *(FScriptContainerElement **)pFVar1->InlineData + (longlong)iVar4 * 4;
        if (iVar4 < iVar9) {
          uVar7 = (ulonglong)(uint)(iVar9 - iVar4);
          do {
            *(int *)pFVar6 = this->DefaultValue;
            pFVar6 = pFVar6 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
    }
    puVar8 = puVar8 + 0x18;
  }
  return;
}

// Initialize @ 1436778f0

void __thiscall
TMeshAttributeArraySet<float>::Initialize(TMeshAttributeArraySet<float> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<float>_> *this_00;
  int iVar1;
  uint uVar2;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar3;
  uchar *puVar4;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar3 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar3 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  puVar4 = (uchar *)((longlong)FVar3 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    this_00 = (ForElementType<TMeshAttributeArrayBase<float>_> *)(puVar4 + -8);
    if (this_00 ==
        (ForElementType<TMeshAttributeArrayBase<float>_> *)
        ((longlong)FVar3 + (longlong)iVar1 * 0x18)) break;
    uVar2 = param_1 * *(int *)(puVar4 + 8);
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    if (*(int *)(puVar4 + 4) < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar2,(ForAnyElementType *)this_00,0,(int *)(puVar4 + 4));
    }
    if (0 < param_1) {
      TMeshAttributeArrayBase<float>::Insert
                ((TMeshAttributeArrayBase<float> *)this_00,param_1 + -1,&this->DefaultValue);
    }
    puVar4 = puVar4 + 0x18;
  }
  return;
}

// Initialize @ 1436779d0

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::Initialize
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> *this_00;
  int iVar1;
  uint uVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar3;
  uchar *puVar4;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar3 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  puVar4 = (uchar *)((longlong)FVar3 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> *)
              (puVar4 + -8);
    if (this_00 ==
        (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> *)
        ((longlong)FVar3 + (longlong)iVar1 * 0x18)) break;
    uVar2 = param_1 * *(int *)(puVar4 + 8);
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    if (*(int *)(puVar4 + 4) < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar2,(ForAnyElementType *)this_00,0,(int *)(puVar4 + 4));
    }
    if (0 < param_1) {
      TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Insert
                ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)this_00,param_1 + -1,
                 &this->DefaultValue);
    }
    puVar4 = puVar4 + 0x18;
  }
  return;
}

// Initialize @ 143677ab0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::Initialize
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> *pFVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  TVector2<float>_u_0 *pTVar6;
  ulonglong uVar7;
  uchar *puVar8;
  int iVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar10;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar10 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (FVar10 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
             &this->ArrayForChannels;
  }
  puVar8 = (uchar *)((longlong)FVar10 + 0xc);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pFVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> *)(puVar8 + -0xc)
    ;
    if (pFVar1 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> *)
                  ((longlong)FVar10 + (longlong)iVar3 * 0x18)) break;
    uVar5 = param_1 * *(int *)(puVar8 + 4);
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar9 = *(int *)puVar8;
    puVar2 = puVar8 + -4;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    if (iVar9 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,(ForAnyElementType *)pFVar1,0,(int *)puVar8);
    }
    if (0 < param_1) {
      iVar9 = param_1 * *(int *)(puVar8 + 4);
      if (*(int *)puVar2 < iVar9) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar9 - *(int *)puVar2,(ForAnyElementType *)pFVar1,(int *)puVar2,
                           (int *)puVar8);
        pTVar6 = (TVector2<float>_u_0 *)
                 (*(FScriptContainerElement **)pFVar1->InlineData + (longlong)iVar4 * 8);
        if (iVar4 < iVar9) {
          uVar7 = (ulonglong)(uint)(iVar9 - iVar4);
          do {
            *pTVar6 = (this->DefaultValue).field0_0x0;
            pTVar6 = pTVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
    }
    puVar8 = puVar8 + 0x18;
  }
  return;
}

// Initialize @ 143677bf0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::Initialize
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *pFVar1;
  uchar *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uchar *puVar9;
  int iVar10;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar11;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar11 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (FVar11 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar11 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
             &this->ArrayForChannels;
  }
  puVar9 = (uchar *)((longlong)FVar11 + 0xc);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pFVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *)(puVar9 + -0xc)
    ;
    if (pFVar1 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *)
                  ((longlong)FVar11 + (longlong)iVar3 * 0x18)) break;
    uVar7 = param_1 * *(int *)(puVar9 + 4);
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    iVar10 = *(int *)puVar9;
    puVar2 = puVar9 + -4;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    if (iVar10 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar7,(ForAnyElementType *)pFVar1,0,(int *)puVar9);
    }
    if (0 < param_1) {
      iVar10 = param_1 * *(int *)(puVar9 + 4);
      if (*(int *)puVar2 < iVar10) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,0x10,iVar10 - *(int *)puVar2,(ForAnyElementType *)pFVar1,
                           (int *)puVar2,(int *)puVar9);
        pFVar8 = *(FScriptContainerElement **)pFVar1->InlineData + (longlong)iVar5 * 0x10;
        if (iVar5 < iVar10) {
          uVar6 = (ulonglong)(uint)(iVar10 - iVar5);
          do {
            uVar4 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
            *(undefined8 *)pFVar8 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
            *(undefined8 *)(pFVar8 + 8) = uVar4;
            pFVar8 = pFVar8 + 0x10;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
    }
    puVar9 = puVar9 + 0x18;
  }
  return;
}

// Initialize @ 143677d30

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::Initialize
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> *pFVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  uchar *puVar8;
  int iVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar10;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar10 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (FVar10 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
             &this->ArrayForChannels;
  }
  puVar8 = (uchar *)((longlong)FVar10 + 0xc);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pFVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> *)(puVar8 + -0xc);
    if (pFVar1 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> *)
                  ((longlong)FVar10 + (longlong)iVar3 * 0x18)) break;
    uVar5 = param_1 * *(int *)(puVar8 + 4);
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar9 = *(int *)puVar8;
    puVar2 = puVar8 + -4;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    if (iVar9 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar5,(ForAnyElementType *)pFVar1,0,(int *)puVar8);
    }
    if (0 < param_1) {
      iVar9 = param_1 * *(int *)(puVar8 + 4);
      if (*(int *)puVar2 < iVar9) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,iVar9 - *(int *)puVar2,(ForAnyElementType *)pFVar1,(int *)puVar2,
                           (int *)puVar8);
        if (iVar4 < iVar9) {
          uVar7 = (ulonglong)(uint)(iVar9 - iVar4);
          pFVar6 = *(FScriptContainerElement **)pFVar1->InlineData + (longlong)iVar4 * 0xc;
          do {
            *(undefined8 *)pFVar6 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
            *(float *)(pFVar6 + 8) = (this->DefaultValue).field0_0x0._s_0.Z;
            uVar7 = uVar7 - 1;
            pFVar6 = pFVar6 + 0xc;
          } while (uVar7 != 0);
        }
      }
    }
    puVar8 = puVar8 + 0x18;
  }
  return;
}

// Initialize @ 143677e70

void __thiscall
TMeshAttributeArraySet<FName>::Initialize(TMeshAttributeArraySet<FName> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<FName>_> *pFVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  ulonglong uVar7;
  uchar *puVar8;
  int iVar9;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar10;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar10 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (FVar10 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  puVar8 = (uchar *)((longlong)FVar10 + 0xc);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    pFVar1 = (ForElementType<TMeshAttributeArrayBase<FName>_> *)(puVar8 + -0xc);
    if (pFVar1 == (ForElementType<TMeshAttributeArrayBase<FName>_> *)
                  ((longlong)FVar10 + (longlong)iVar3 * 0x18)) break;
    uVar5 = param_1 * *(int *)(puVar8 + 4);
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar9 = *(int *)puVar8;
    puVar2 = puVar8 + -4;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    if (iVar9 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,(ForAnyElementType *)pFVar1,0,(int *)puVar8);
    }
    if (0 < param_1) {
      iVar9 = param_1 * *(int *)(puVar8 + 4);
      if (*(int *)puVar2 < iVar9) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar9 - *(int *)puVar2,(ForAnyElementType *)pFVar1,(int *)puVar2,
                           (int *)puVar8);
        pFVar6 = (FName *)(*(FScriptContainerElement **)pFVar1->InlineData + (longlong)iVar4 * 8);
        if (iVar4 < iVar9) {
          uVar7 = (ulonglong)(uint)(iVar9 - iVar4);
          do {
            *pFVar6 = this->DefaultValue;
            pFVar6 = pFVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
    }
    puVar8 = puVar8 + 0x18;
  }
  return;
}

// Initialize @ 143677fb0

void __thiscall
TMeshAttributeArraySet<bool>::Initialize(TMeshAttributeArraySet<bool> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<bool>_> *pFVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  uchar *puVar8;
  int iVar9;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar10;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar10 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (FVar10 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  puVar8 = (uchar *)((longlong)FVar10 + 0xc);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<bool>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    pFVar1 = (ForElementType<TMeshAttributeArrayBase<bool>_> *)(puVar8 + -0xc);
    if (pFVar1 == (ForElementType<TMeshAttributeArrayBase<bool>_> *)
                  ((longlong)FVar10 + (longlong)iVar3 * 0x18)) break;
    uVar5 = param_1 * *(int *)(puVar8 + 4);
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar9 = *(int *)puVar8;
    puVar2 = puVar8 + -4;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    if (iVar9 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar5,(ForAnyElementType *)pFVar1,0,(int *)puVar8);
    }
    if (0 < param_1) {
      iVar9 = param_1 * *(int *)(puVar8 + 4);
      if (*(int *)puVar2 < iVar9) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar9 - *(int *)puVar2,(ForAnyElementType *)pFVar1,(int *)puVar2,
                           (int *)puVar8);
        pFVar6 = *(FScriptContainerElement **)pFVar1->InlineData + iVar4;
        if (iVar4 < iVar9) {
          uVar7 = (ulonglong)(uint)(iVar9 - iVar4);
          do {
            *pFVar6 = (FScriptContainerElement)this->DefaultValue;
            pFVar6 = pFVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
    }
    puVar8 = puVar8 + 0x18;
  }
  return;
}

// Insert @ 143679e00

void __thiscall TMeshAttributeArraySet<int>::Insert(TMeshAttributeArraySet<int> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar9;
  undefined1 local_res10 [8];
  
  FVar9 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  iVar7 = param_1 + 1;
  if (FVar9 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar9 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  piVar8 = (int *)((longlong)FVar9 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    pFVar1 = (ForAnyElementType *)(piVar8 + -2);
    if (pFVar1 == (ForAnyElementType *)((longlong)FVar9 + (longlong)iVar2 * 0x18)) break;
    iVar6 = iVar7 * piVar8[2];
    if (*piVar8 < iVar6) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar6 - *piVar8,pFVar1,piVar8,piVar8 + 1);
      pFVar4 = pFVar1->Data + (longlong)iVar3 * 4;
      if (iVar3 < iVar6) {
        uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
        do {
          *(int *)pFVar4 = this->DefaultValue;
          pFVar4 = pFVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    piVar8 = piVar8 + 6;
  }
  if (iVar7 < (int)this->_padding_) {
    iVar7 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar7;
  return;
}

// Insert @ 143679ef0

void __thiscall
TMeshAttributeArraySet<float>::Insert(TMeshAttributeArraySet<float> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<float>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<float>_> this_00;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<float>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    TMeshAttributeArrayBase<float>::Insert
              ((TMeshAttributeArrayBase<float> *)this_00,param_1,&this->DefaultValue);
    this_00 = (ForElementType<TMeshAttributeArrayBase<float>_>)((longlong)this_00 + 0x18);
  }
  iVar2 = param_1 + 1;
  if (param_1 + 1 < (int)this->_padding_) {
    iVar2 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar2;
  return;
}

// Insert @ 143679f90

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::Insert
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> this_00;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Insert
              ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)this_00,param_1,
               &this->DefaultValue);
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
              ((longlong)this_00 + 0x18);
  }
  iVar2 = param_1 + 1;
  if (param_1 + 1 < (int)this->_padding_) {
    iVar2 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar2;
  return;
}

// Insert @ 14367a030

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::Insert
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  int iVar3;
  TVector2<float>_u_0 *pTVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar9;
  undefined1 local_res10 [8];
  
  FVar9 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  iVar7 = param_1 + 1;
  if (FVar9 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar9 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  piVar8 = (int *)((longlong)FVar9 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pFVar1 = (ForAnyElementType *)(piVar8 + -2);
    if (pFVar1 == (ForAnyElementType *)((longlong)FVar9 + (longlong)iVar2 * 0x18)) break;
    iVar6 = iVar7 * piVar8[2];
    if (*piVar8 < iVar6) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar6 - *piVar8,pFVar1,piVar8,piVar8 + 1);
      pTVar4 = (TVector2<float>_u_0 *)(pFVar1->Data + (longlong)iVar3 * 8);
      if (iVar3 < iVar6) {
        uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
        do {
          *pTVar4 = (this->DefaultValue).field0_0x0;
          pTVar4 = pTVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    piVar8 = piVar8 + 6;
  }
  if (iVar7 < (int)this->_padding_) {
    iVar7 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar7;
  return;
}

// Insert @ 14367a120

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::Insert
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int *piVar8;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar9;
  int iVar10;
  undefined1 local_res10 [8];
  
  FVar9 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  iVar10 = param_1 + 1;
  if (FVar9 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar9 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  piVar8 = (int *)((longlong)FVar9 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pFVar1 = (ForAnyElementType *)(piVar8 + -2);
    if (pFVar1 == (ForAnyElementType *)((longlong)FVar9 + (longlong)iVar2 * 0x18)) break;
    iVar7 = iVar10 * piVar8[2];
    if (*piVar8 < iVar7) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,0x10,iVar7 - *piVar8,pFVar1,piVar8,piVar8 + 1);
      pFVar6 = pFVar1->Data + (longlong)iVar4 * 0x10;
      if (iVar4 < iVar7) {
        uVar5 = (ulonglong)(uint)(iVar7 - iVar4);
        do {
          uVar3 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
          *(undefined8 *)pFVar6 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
          *(undefined8 *)(pFVar6 + 8) = uVar3;
          pFVar6 = pFVar6 + 0x10;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    piVar8 = piVar8 + 6;
  }
  if (iVar10 < (int)this->_padding_) {
    iVar10 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar10;
  return;
}

// Insert @ 14367a210

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::Insert
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> this_00;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    TMeshAttributeArrayBase<UE::Math::TVector<float>_>::Insert
              ((TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)this_00,param_1,
               &this->DefaultValue);
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
              ((longlong)this_00 + 0x18);
  }
  iVar2 = param_1 + 1;
  if (param_1 + 1 < (int)this->_padding_) {
    iVar2 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar2;
  return;
}

// Insert @ 14367a2b0

void __thiscall
TMeshAttributeArraySet<FName>::Insert(TMeshAttributeArraySet<FName> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  int iVar3;
  FName *pFVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar9;
  undefined1 local_res10 [8];
  
  FVar9 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  iVar7 = param_1 + 1;
  if (FVar9 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar9 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  piVar8 = (int *)((longlong)FVar9 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    pFVar1 = (ForAnyElementType *)(piVar8 + -2);
    if (pFVar1 == (ForAnyElementType *)((longlong)FVar9 + (longlong)iVar2 * 0x18)) break;
    iVar6 = iVar7 * piVar8[2];
    if (*piVar8 < iVar6) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar6 - *piVar8,pFVar1,piVar8,piVar8 + 1);
      pFVar4 = (FName *)(pFVar1->Data + (longlong)iVar3 * 8);
      if (iVar3 < iVar6) {
        uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
        do {
          *pFVar4 = this->DefaultValue;
          pFVar4 = pFVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    piVar8 = piVar8 + 6;
  }
  if (iVar7 < (int)this->_padding_) {
    iVar7 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar7;
  return;
}

// Insert @ 14367a3a0

void __thiscall TMeshAttributeArraySet<bool>::Insert(TMeshAttributeArraySet<bool> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar8;
  int iVar9;
  undefined1 local_res10 [8];
  
  FVar8 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  iVar9 = param_1 + 1;
  if (FVar8 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar8 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  piVar7 = (int *)((longlong)FVar8 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<bool>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    pFVar1 = (ForAnyElementType *)(piVar7 + -2);
    if (pFVar1 == (ForAnyElementType *)((longlong)FVar8 + (longlong)iVar2 * 0x18)) break;
    iVar6 = iVar9 * piVar7[2];
    if (*piVar7 < iVar6) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar6 - *piVar7,pFVar1,piVar7,piVar7 + 1);
      pFVar4 = pFVar1->Data + iVar3;
      if (iVar3 < iVar6) {
        uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
        do {
          *pFVar4 = (FScriptContainerElement)this->DefaultValue;
          pFVar4 = pFVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    piVar7 = piVar7 + 6;
  }
  if (iVar9 < (int)this->_padding_) {
    iVar9 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar9;
  return;
}

// InsertChannel @ 14367b1f0

void __thiscall
TMeshAttributeArraySet<int>::InsertChannel(TMeshAttributeArraySet<int> *this,int param_1)

{
  TMeshAttributeArrayBase<int> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<int> *)((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<int>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b260

void __thiscall
TMeshAttributeArraySet<float>::InsertChannel(TMeshAttributeArraySet<float> *this,int param_1)

{
  TMeshAttributeArrayBase<float> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<float> *)((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<float>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b2d0

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::InsertChannel
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
            ((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b340

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::InsertChannel
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
            ((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b3b0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::InsertChannel
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
            ((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b420

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::InsertChannel
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
            ((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b490

void __thiscall
TMeshAttributeArraySet<FName>::InsertChannel(TMeshAttributeArraySet<FName> *this,int param_1)

{
  TMeshAttributeArrayBase<FName> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<FName> *)((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<FName>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b500

void __thiscall
TMeshAttributeArraySet<bool>::InsertChannel(TMeshAttributeArraySet<bool> *this,int param_1)

{
  TMeshAttributeArrayBase<bool> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<bool> *)((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<bool>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367b970

void __thiscall
TMeshAttributeArraySet<int>::InsertIndex(TMeshAttributeArraySet<int> *this,int param_1)

{
  TMeshAttributeArrayBase<int> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<int> *)((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<int>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367b9e0

void __thiscall
TMeshAttributeArraySet<float>::InsertIndex(TMeshAttributeArraySet<float> *this,int param_1)

{
  TMeshAttributeArrayBase<float> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<float> *)((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<float>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367ba50

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::InsertIndex
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
            ((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bac0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::InsertIndex
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
            ((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bb30

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::InsertIndex
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
            ((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bba0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::InsertIndex
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
            ((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bc10

void __thiscall
TMeshAttributeArraySet<FName>::InsertIndex(TMeshAttributeArraySet<FName> *this,int param_1)

{
  TMeshAttributeArrayBase<FName> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<FName> *)((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<FName>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bc80

void __thiscall
TMeshAttributeArraySet<bool>::InsertIndex(TMeshAttributeArraySet<bool> *this,int param_1)

{
  TMeshAttributeArrayBase<bool> *this_00;
  uint uVar1;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar2;
  
  TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  if (FVar2 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar2 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  this_00 = (TMeshAttributeArrayBase<bool> *)((longlong)FVar2 + (longlong)param_1 * 0x18);
  (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Container).ArrayNum = 0;
  (this_00->Container).ArrayMax = 0;
  this_00->Extent = uVar1;
  TMeshAttributeArrayBase<bool>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// Remap @ 143682aa0

void __thiscall
TMeshAttributeArraySet<int>::Remap
          (TMeshAttributeArraySet<int> *this,TSparseArray<int,FDefaultSparseArrayAllocator> *param_1
          )

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar3;
  int iVar4;
  ForElementType<TMeshAttributeArrayBase<int>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TMeshAttributeArrayBase<int>_>)
          ((longlong)this_00 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TMeshAttributeArrayBase<int>::Remap
              ((TMeshAttributeArrayBase<int> *)this_00,param_1,&this->DefaultValue);
    puVar1 = (uint *)((longlong)this_00 + 8);
    puVar2 = (uint *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TMeshAttributeArrayBase<int>_>)((longlong)this_00 + 0x18);
    *(uint *)&this->_padding_ = *puVar1 / *puVar2;
  }
  return;
}

// Remap @ 143682b40

void __thiscall
TMeshAttributeArraySet<float>::Remap
          (TMeshAttributeArraySet<float> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar3;
  int iVar4;
  ForElementType<TMeshAttributeArrayBase<float>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TMeshAttributeArrayBase<float>_>)
          ((longlong)this_00 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TMeshAttributeArrayBase<float>::Remap
              ((TMeshAttributeArrayBase<float> *)this_00,param_1,&this->DefaultValue);
    puVar1 = (uint *)((longlong)this_00 + 8);
    puVar2 = (uint *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TMeshAttributeArrayBase<float>_>)((longlong)this_00 + 0x18);
    *(uint *)&this->_padding_ = *puVar1 / *puVar2;
  }
  return;
}

// Remap @ 143682be0

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::Remap
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar3;
  int iVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
          ((longlong)this_00 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Remap
              ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)this_00,param_1,
               &this->DefaultValue);
    puVar1 = (uint *)((longlong)this_00 + 8);
    puVar2 = (uint *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
              ((longlong)this_00 + 0x18);
    *(uint *)&this->_padding_ = *puVar1 / *puVar2;
  }
  return;
}

// Remap @ 143682c80

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::Remap
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar3;
  int iVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
          ((longlong)this_00 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::Remap
              ((TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)this_00,param_1,
               &this->DefaultValue);
    puVar1 = (uint *)((longlong)this_00 + 8);
    puVar2 = (uint *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
              ((longlong)this_00 + 0x18);
    *(uint *)&this->_padding_ = *puVar1 / *puVar2;
  }
  return;
}

// Remap @ 143682d20

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::Remap
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar3;
  int iVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
          ((longlong)this_00 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::Remap
              ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)this_00,param_1,
               &this->DefaultValue);
    puVar1 = (uint *)((longlong)this_00 + 8);
    puVar2 = (uint *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
              ((longlong)this_00 + 0x18);
    *(uint *)&this->_padding_ = *puVar1 / *puVar2;
  }
  return;
}

// Remap @ 143682dc0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::Remap
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar3;
  int iVar4;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
          ((longlong)this_00 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TMeshAttributeArrayBase<UE::Math::TVector<float>_>::Remap
              ((TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)this_00,param_1,
               &this->DefaultValue);
    puVar1 = (uint *)((longlong)this_00 + 8);
    puVar2 = (uint *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
              ((longlong)this_00 + 0x18);
    *(uint *)&this->_padding_ = *puVar1 / *puVar2;
  }
  return;
}

// Remap @ 143682e60

void __thiscall
TMeshAttributeArraySet<FName>::Remap
          (TMeshAttributeArraySet<FName> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar3;
  int iVar4;
  ForElementType<TMeshAttributeArrayBase<FName>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TMeshAttributeArrayBase<FName>_>)
          ((longlong)this_00 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TMeshAttributeArrayBase<FName>::Remap
              ((TMeshAttributeArrayBase<FName> *)this_00,param_1,&this->DefaultValue);
    puVar1 = (uint *)((longlong)this_00 + 8);
    puVar2 = (uint *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TMeshAttributeArrayBase<FName>_>)((longlong)this_00 + 0x18);
    *(uint *)&this->_padding_ = *puVar1 / *puVar2;
  }
  return;
}

// Remap @ 143682f00

void __thiscall
TMeshAttributeArraySet<bool>::Remap
          (TMeshAttributeArraySet<bool> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar3;
  int iVar4;
  ForElementType<TMeshAttributeArrayBase<bool>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TMeshAttributeArrayBase<bool>_>)
          ((longlong)this_00 + (longlong)iVar4 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<bool>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TMeshAttributeArrayBase<bool>::Remap
              ((TMeshAttributeArrayBase<bool> *)this_00,param_1,&this->DefaultValue);
    puVar1 = (uint *)((longlong)this_00 + 8);
    puVar2 = (uint *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TMeshAttributeArrayBase<bool>_>)((longlong)this_00 + 0x18);
    *(uint *)&this->_padding_ = *puVar1 / *puVar2;
  }
  return;
}

// Remove @ 143684980

void __thiscall TMeshAttributeArraySet<int>::Remove(TMeshAttributeArraySet<int> *this,int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar11;
  undefined1 local_res8 [8];
  
  FVar11 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar2 = (this->ArrayForChannels).ArrayNum;
  uVar8 = (ulonglong)(int)uVar2;
  if (FVar11 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar11 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  lVar1 = uVar8 * 0x18;
  puVar10 = (uint *)((longlong)FVar11 + 0x10);
  do {
    if ((this->ArrayForChannels).ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMeshAttributeArrayBase<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar10 + -4 == (uint *)((longlong)FVar11 + lVar1)) {
      return;
    }
    uVar6 = *puVar10;
    uVar9 = 0;
    if (uVar6 != 0) {
      do {
        iVar3 = this->DefaultValue;
        uVar6 = uVar6 * param_1 + uVar9;
        uVar7 = 0;
        if ((int)uVar6 < (int)puVar10[-2]) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = uVar9 + 1;
        *(int *)(*(longlong *)(puVar10 + -4) + (longlong)(int)uVar6 * 4) = iVar3;
        uVar6 = *puVar10;
      } while (uVar9 < uVar6);
    }
    uVar8 = (ulonglong)uVar2;
    puVar10 = puVar10 + 6;
  } while( true );
}

// Remove @ 143684aa0

void __thiscall
TMeshAttributeArraySet<float>::Remove(TMeshAttributeArraySet<float> *this,int param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar9;
  undefined1 local_res8 [8];
  
  FVar9 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (FVar9 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar9 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  puVar8 = (uint *)((longlong)FVar9 + 0x10);
  do {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMeshAttributeArrayBase<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar8 + -4 == (uint *)((longlong)FVar9 + (longlong)iVar2 * 0x18)) {
      return;
    }
    uVar5 = *puVar8;
    uVar7 = 0;
    if (uVar5 != 0) {
      do {
        fVar1 = this->DefaultValue;
        uVar5 = uVar5 * param_1 + uVar7;
        uVar6 = 0;
        if ((int)uVar5 < (int)puVar8[-2]) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = uVar7 + 1;
        *(float *)(*(longlong *)(puVar8 + -4) + (longlong)(int)uVar5 * 4) = fVar1;
        uVar5 = *puVar8;
      } while (uVar7 < uVar5);
    }
    puVar8 = puVar8 + 6;
  } while( true );
}

// Remove @ 143684bc0

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::Remove
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  uint uVar25;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar26;
  undefined1 local_res8 [8];
  
  FVar26 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (FVar26 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar26 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
             &this->ArrayForChannels;
  }
  puVar24 = (uint *)((longlong)FVar26 + 0x10);
  do {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar24 + -4 == (uint *)((longlong)FVar26 + (longlong)iVar3 * 0x18)) {
      return;
    }
    uVar22 = *puVar24;
    uVar25 = 0;
    if (uVar22 != 0) {
      do {
        dVar11 = (this->DefaultValue).Rotation.ZW.m128d_f64[0];
        dVar12 = (this->DefaultValue).Rotation.ZW.m128d_f64[1];
        dVar13 = (this->DefaultValue).Translation.XY.m128d_f64[0];
        dVar14 = (this->DefaultValue).Translation.XY.m128d_f64[1];
        uVar7 = *(undefined4 *)(this->DefaultValue).Rotation.XY.m128d_f64;
        uVar8 = *(undefined4 *)((longlong)(this->DefaultValue).Rotation.XY.m128d_f64 + 4);
        uVar9 = *(undefined4 *)((this->DefaultValue).Rotation.XY.m128d_f64 + 1);
        uVar10 = *(undefined4 *)((longlong)(this->DefaultValue).Rotation.XY.m128d_f64 + 0xc);
        dVar15 = (this->DefaultValue).Translation.ZW.m128d_f64[0];
        dVar16 = (this->DefaultValue).Translation.ZW.m128d_f64[1];
        dVar17 = (this->DefaultValue).Scale3D.XY.m128d_f64[0];
        dVar18 = (this->DefaultValue).Scale3D.XY.m128d_f64[1];
        uVar22 = uVar22 * param_1 + uVar25;
        dVar19 = (this->DefaultValue).Scale3D.ZW.m128d_f64[0];
        dVar20 = (this->DefaultValue).Scale3D.ZW.m128d_f64[1];
        uVar6 = 0;
        if ((int)uVar22 < (int)puVar24[-2]) {
          uVar6 = ~uVar22 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar25 = uVar25 + 1;
        lVar4 = *(longlong *)(puVar24 + -4);
        lVar23 = (longlong)(int)uVar22 * 0x60;
        puVar1 = (undefined4 *)(lVar23 + lVar4);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        pdVar2 = (double *)(lVar23 + 0x10 + lVar4);
        *pdVar2 = dVar11;
        pdVar2[1] = dVar12;
        pdVar2 = (double *)(lVar23 + 0x20 + lVar4);
        *pdVar2 = dVar13;
        pdVar2[1] = dVar14;
        pdVar2 = (double *)(lVar23 + 0x30 + lVar4);
        *pdVar2 = dVar15;
        pdVar2[1] = dVar16;
        pdVar2 = (double *)(lVar23 + 0x40 + lVar4);
        *pdVar2 = dVar17;
        pdVar2[1] = dVar18;
        pdVar2 = (double *)(lVar23 + 0x50 + lVar4);
        *pdVar2 = dVar19;
        pdVar2[1] = dVar20;
        uVar22 = *puVar24;
      } while (uVar25 < uVar22);
    }
    puVar24 = puVar24 + 6;
  } while( true );
}

// Remove @ 143684d60

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::Remove
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  longlong lVar1;
  uint uVar2;
  TVector2<float>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar11;
  undefined1 local_res8 [8];
  
  FVar11 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar2 = (this->ArrayForChannels).ArrayNum;
  uVar7 = (ulonglong)(int)uVar2;
  if (FVar11 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar11 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
             &this->ArrayForChannels;
  }
  lVar1 = uVar7 * 0x18;
  puVar9 = (uint *)((longlong)FVar11 + 0x10);
  do {
    if ((this->ArrayForChannels).ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar9 + -4 == (uint *)((longlong)FVar11 + lVar1)) {
      return;
    }
    uVar6 = *puVar9;
    uVar10 = 0;
    if (uVar6 != 0) {
      do {
        TVar3 = (this->DefaultValue).field0_0x0;
        uVar8 = uVar6 * param_1 + uVar10;
        uVar6 = 0;
        if ((int)uVar8 < (int)puVar9[-2]) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(TVector2<float>_u_0 *)(*(longlong *)(puVar9 + -4) + (longlong)(int)uVar8 * 8) = TVar3;
        uVar6 = *puVar9;
      } while (uVar10 < uVar6);
    }
    uVar7 = (ulonglong)uVar2;
    puVar9 = puVar9 + 6;
  } while( true );
}

// Remove @ 143684e80

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::Remove
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  float *pfVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar13;
  undefined1 local_res8 [8];
  
  FVar13 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (FVar13 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar13 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
             &this->ArrayForChannels;
  }
  puVar12 = (uint *)((longlong)FVar13 + 0x10);
  do {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar12 + -4 == (uint *)((longlong)FVar13 + (longlong)iVar2 * 0x18)) {
      return;
    }
    uVar9 = *puVar12;
    uVar11 = 0;
    if (uVar9 != 0) {
      do {
        fVar4 = (this->DefaultValue).field0_0x0._s_0.X;
        fVar5 = (this->DefaultValue).field0_0x0._s_0.Y;
        fVar6 = (this->DefaultValue).field0_0x0._s_0.Z;
        fVar7 = (this->DefaultValue).field0_0x0._s_0.W;
        uVar9 = uVar9 * param_1 + uVar11;
        uVar10 = 0;
        if ((int)uVar9 < (int)puVar12[-2]) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = uVar11 + 1;
        pfVar1 = (float *)(*(longlong *)(puVar12 + -4) + (longlong)(int)uVar9 * 0x10);
        *pfVar1 = fVar4;
        pfVar1[1] = fVar5;
        pfVar1[2] = fVar6;
        pfVar1[3] = fVar7;
        uVar9 = *puVar12;
      } while (uVar11 < uVar9);
    }
    puVar12 = puVar12 + 6;
  } while( true );
}

// Remove @ 143684fa0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::Remove
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar13;
  undefined1 local_res8 [8];
  
  FVar13 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar3 = (this->ArrayForChannels).ArrayNum;
  uVar10 = (ulonglong)(int)uVar3;
  if (FVar13 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar13 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
             &this->ArrayForChannels;
  }
  lVar1 = uVar10 * 0x18;
  puVar12 = (uint *)((longlong)FVar13 + 0x10);
  do {
    if ((this->ArrayForChannels).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar12 + -4 == (uint *)((longlong)FVar13 + lVar1)) {
      return;
    }
    uVar8 = *puVar12;
    uVar11 = 0;
    if (uVar8 != 0) {
      do {
        uVar2 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
        fVar4 = (this->DefaultValue).field0_0x0._s_0.Z;
        uVar8 = uVar8 * param_1 + uVar11;
        uVar9 = 0;
        if ((int)uVar8 < (int)puVar12[-2]) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = uVar11 + 1;
        lVar5 = *(longlong *)(puVar12 + -4);
        *(undefined8 *)(lVar5 + (longlong)(int)uVar8 * 0xc) = uVar2;
        *(float *)(lVar5 + 8 + (longlong)(int)uVar8 * 0xc) = fVar4;
        uVar8 = *puVar12;
      } while (uVar11 < uVar8);
    }
    uVar10 = (ulonglong)uVar3;
    puVar12 = puVar12 + 6;
  } while( true );
}

// Remove @ 1436850e0

void __thiscall
TMeshAttributeArraySet<FName>::Remove(TMeshAttributeArraySet<FName> *this,int param_1)

{
  longlong lVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar11;
  undefined1 local_res8 [8];
  
  FVar11 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar2 = (this->ArrayForChannels).ArrayNum;
  uVar7 = (ulonglong)(int)uVar2;
  if (FVar11 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar11 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  lVar1 = uVar7 * 0x18;
  puVar9 = (uint *)((longlong)FVar11 + 0x10);
  do {
    if ((this->ArrayForChannels).ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMeshAttributeArrayBase<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar9 + -4 == (uint *)((longlong)FVar11 + lVar1)) {
      return;
    }
    uVar6 = *puVar9;
    uVar10 = 0;
    if (uVar6 != 0) {
      do {
        FVar3 = this->DefaultValue;
        uVar8 = uVar6 * param_1 + uVar10;
        uVar6 = 0;
        if ((int)uVar8 < (int)puVar9[-2]) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(FName *)(*(longlong *)(puVar9 + -4) + (longlong)(int)uVar8 * 8) = FVar3;
        uVar6 = *puVar9;
      } while (uVar10 < uVar6);
    }
    uVar7 = (ulonglong)uVar2;
    puVar9 = puVar9 + 6;
  } while( true );
}

// Remove @ 143685200

void __thiscall TMeshAttributeArraySet<bool>::Remove(TMeshAttributeArraySet<bool> *this,int param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar11;
  undefined1 local_res8 [8];
  
  FVar11 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  uVar3 = (this->ArrayForChannels).ArrayNum;
  uVar8 = (ulonglong)(int)uVar3;
  if (FVar11 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar11 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  lVar1 = uVar8 * 0x18;
  puVar10 = (uint *)((longlong)FVar11 + 0x10);
  do {
    if ((this->ArrayForChannels).ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMeshAttributeArrayBase<bool>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar10 + -4 == (uint *)((longlong)FVar11 + lVar1)) {
      return;
    }
    uVar6 = *puVar10;
    uVar9 = 0;
    if (uVar6 != 0) {
      do {
        bVar2 = this->DefaultValue;
        uVar6 = uVar6 * param_1 + uVar9;
        uVar7 = 0;
        if ((int)uVar6 < (int)puVar10[-2]) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = uVar9 + 1;
        *(bool *)((longlong)(int)uVar6 + *(longlong *)(puVar10 + -4)) = bVar2;
        uVar6 = *puVar10;
      } while (uVar9 < uVar6);
    }
    uVar8 = (ulonglong)uVar3;
    puVar10 = puVar10 + 6;
  } while( true );
}

// RemoveChannel @ 143686f60

void __thiscall
TMeshAttributeArraySet<int>::RemoveChannel(TMeshAttributeArraySet<int> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687040

void __thiscall
TMeshAttributeArraySet<float>::RemoveChannel(TMeshAttributeArraySet<float> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687120

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::RemoveChannel
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687200

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::RemoveChannel
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 1436872e0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::RemoveChannel
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 1436873c0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::RemoveChannel
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 1436874a0

void __thiscall
TMeshAttributeArraySet<FName>::RemoveChannel(TMeshAttributeArraySet<FName> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687580

void __thiscall
TMeshAttributeArraySet<bool>::RemoveChannel(TMeshAttributeArraySet<bool> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143687d80

void __thiscall
TMeshAttributeArraySet<int>::RemoveIndex(TMeshAttributeArraySet<int> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143687e60

void __thiscall
TMeshAttributeArraySet<float>::RemoveIndex(TMeshAttributeArraySet<float> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143687f40

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::RemoveIndex
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688020

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::RemoveIndex
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688100

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::RemoveIndex
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 1436881e0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::RemoveIndex
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 1436882c0

void __thiscall
TMeshAttributeArraySet<FName>::RemoveIndex(TMeshAttributeArraySet<FName> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 1436883a0

void __thiscall
TMeshAttributeArraySet<bool>::RemoveIndex(TMeshAttributeArraySet<bool> *this,int param_1)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar7 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
  pvVar2 = *(void **)((longlong)FVar7 + (longlong)param_1 * 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// Serialize @ 14368b060

void __thiscall
TMeshAttributeArraySet<int>::Serialize(TMeshAttributeArraySet<int> *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return;
}

// Serialize @ 14368b080

void __thiscall
TMeshAttributeArraySet<float>::Serialize(TMeshAttributeArraySet<float> *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return;
}

// Serialize @ 14368b0a0

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::Serialize
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,FArchive *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  plVar1 = &this->_padding_;
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
    }
  }
  else {
    *(undefined4 *)plVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->ArrayForChannels);
  UE::Math::operator<<(param_1,&this->DefaultValue);
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar4 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014368b16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return;
}

// Serialize @ 14368b190

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::Serialize
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return;
}

// Serialize @ 14368b1b0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::Serialize
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return;
}

// Serialize @ 14368b1d0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::Serialize
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return;
}

// Serialize @ 14368b1f0

void __thiscall
TMeshAttributeArraySet<FName>::Serialize(TMeshAttributeArraySet<FName> *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return;
}

// Serialize @ 14368b210

void __thiscall
TMeshAttributeArraySet<bool>::Serialize(TMeshAttributeArraySet<bool> *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return;
}

// SetNumChannels @ 1436920b0

void __thiscall
TMeshAttributeArraySet<int>::SetNumChannels(TMeshAttributeArraySet<int> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pFVar9 = pFVar3->Data + (longlong)iVar8 * 4;
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            do {
              *(int *)pFVar9 = this->DefaultValue;
              pFVar9 = pFVar9 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 1436922b0

void __thiscall
TMeshAttributeArraySet<float>::SetNumChannels(TMeshAttributeArraySet<float> *this,int param_1)

{
  int *piVar1;
  TMeshAttributeArrayBase<float> *this_00;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar6;
  uint uVar7;
  
  iVar5 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar7 = iVar5 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar7);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar5 < param_1) {
      iVar5 = (this->ArrayForChannels).ArrayNum;
      if (iVar5 == (this->ArrayForChannels).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar5 + 1;
      FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
      FVar6 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
      if (FVar2 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
        FVar6 = FVar2;
      }
      this_00 = (TMeshAttributeArrayBase<float> *)((longlong)FVar6 + (longlong)iVar5 * 0x18);
      (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &(this_00->Container).ArrayMax;
      *piVar1 = 0;
      (this_00->Container).ArrayNum = 0;
      this_00->Extent = uVar7;
      iVar5 = (int)this->_padding_;
      uVar7 = iVar5 * uVar7;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (0 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar7,(ForAnyElementType *)this_00,0,piVar1);
      }
      if (0 < iVar5) {
        TMeshAttributeArrayBase<float>::Insert(this_00,iVar5 + -1,&this->DefaultValue);
      }
      iVar5 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 143692440

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::SetNumChannels
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *this_00;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar6;
  uint uVar7;
  
  iVar5 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar7 = iVar5 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar7);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar5 < param_1) {
      iVar5 = (this->ArrayForChannels).ArrayNum;
      if (iVar5 == (this->ArrayForChannels).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar5 + 1;
      FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
      FVar6 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
      if (FVar2 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
        FVar6 = FVar2;
      }
      this_00 = (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
                ((longlong)FVar6 + (longlong)iVar5 * 0x18);
      (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &(this_00->Container).ArrayMax;
      *piVar1 = 0;
      (this_00->Container).ArrayNum = 0;
      this_00->Extent = uVar7;
      iVar5 = (int)this->_padding_;
      uVar7 = iVar5 * uVar7;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (0 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar7,(ForAnyElementType *)this_00,0,piVar1);
      }
      if (0 < iVar5) {
        TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Insert
                  (this_00,iVar5 + -1,&this->DefaultValue);
      }
      iVar5 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 1436925e0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TVector2<float>_u_0 *pTVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
               &this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pTVar9 = (TVector2<float>_u_0 *)(pFVar3->Data + (longlong)iVar8 * 8);
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            do {
              *pTVar9 = (this->DefaultValue).field0_0x0;
              pTVar9 = pTVar9 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 1436927e0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::SetNumChannels
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar12;
  uint uVar13;
  
  iVar8 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar8) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar13 = iVar8 - param_1;
    if (((int)(uVar13 | param_1) < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar13 != 0) {
      TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar13);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar8 < param_1) {
      iVar8 = (this->ArrayForChannels).ArrayNum;
      if (iVar8 == (this->ArrayForChannels).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar8 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar9 = *(int *)((longlong)&this->_padding_ + 4);
      FVar12 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
               &this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
        FVar12 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar12 + (longlong)iVar8 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar9;
      iVar8 = (int)this->_padding_;
      uVar13 = iVar8 * iVar9;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,uVar13,pFVar3,0,piVar2);
      }
      if (0 < iVar8) {
        iVar8 = iVar8 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar8) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,0x10,iVar8 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pFVar11 = pFVar3->Data + (longlong)iVar9 * 0x10;
          if (iVar9 < iVar8) {
            uVar10 = (ulonglong)(uint)(iVar8 - iVar9);
            do {
              uVar6 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
              *(undefined8 *)pFVar11 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
              *(undefined8 *)(pFVar11 + 8) = uVar6;
              pFVar11 = pFVar11 + 0x10;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
      }
      iVar8 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 1436929e0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::SetNumChannels
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
               &this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            pFVar9 = pFVar3->Data + (longlong)iVar8 * 0xc;
            do {
              *(undefined8 *)pFVar9 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
              *(float *)(pFVar9 + 8) = (this->DefaultValue).field0_0x0._s_0.Z;
              uVar11 = uVar11 - 1;
              pFVar9 = pFVar9 + 0xc;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 143692bf0

void __thiscall
TMeshAttributeArraySet<FName>::SetNumChannels(TMeshAttributeArraySet<FName> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pFVar9 = (FName *)(pFVar3->Data + (longlong)iVar8 * 8);
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            do {
              *pFVar9 = this->DefaultValue;
              pFVar9 = pFVar9 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 143692df0

void __thiscall
TMeshAttributeArraySet<bool>::SetNumChannels(TMeshAttributeArraySet<bool> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pFVar9 = pFVar3->Data + iVar8;
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            do {
              *pFVar9 = (FScriptContainerElement)this->DefaultValue;
              pFVar9 = pFVar9 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumElements @ 143694370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshAttributeArraySet<int>::SetNumElements(TMeshAttributeArraySet<int> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<int>_> FVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<int>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<int>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    iVar3 = *(int *)((longlong)this_00 + 8);
    iVar6 = param_1 * *(int *)((longlong)this_00 + 0x10);
    if (iVar6 < iVar3) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<int,TSizedDefaultAllocator<32>_> *)this_00,iVar6,Default);
      this_00 = (ForElementType<TMeshAttributeArrayBase<int>_>)((longlong)this_00 + 0x18);
    }
    else {
      if (iVar3 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar6 - iVar3,(ForAnyElementType *)this_00,
                           (int *)((longlong)this_00 + 8),(int *)((longlong)this_00 + 0xc));
        piVar4 = (int *)(*(longlong *)this_00 + (longlong)iVar3 * 4);
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          do {
            *piVar4 = this->DefaultValue;
            piVar4 = piVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      this_00 = (ForElementType<TMeshAttributeArrayBase<int>_>)((longlong)this_00 + 0x18);
    }
  }
  return;
}

// SetNumElements @ 143694460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshAttributeArraySet<float>::SetNumElements(TMeshAttributeArraySet<float> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<float>_> FVar1;
  int iVar2;
  int iVar3;
  ForElementType<TMeshAttributeArrayBase<float>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<float>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    iVar3 = param_1 * *(int *)((longlong)this_00 + 0x10);
    if (iVar3 < *(int *)((longlong)this_00 + 8)) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<float,TSizedDefaultAllocator<32>_> *)this_00,iVar3,Default);
      this_00 = (ForElementType<TMeshAttributeArrayBase<float>_>)((longlong)this_00 + 0x18);
    }
    else {
      TMeshAttributeArrayBase<float>::Insert
                ((TMeshAttributeArrayBase<float> *)this_00,param_1 + -1,&this->DefaultValue);
      this_00 = (ForElementType<TMeshAttributeArrayBase<float>_>)((longlong)this_00 + 0x18);
    }
  }
  return;
}

// SetNumElements @ 143694510

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::SetNumElements
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar1;
  int iVar2;
  int iVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    iVar3 = param_1 * *(int *)((longlong)this_00 + 0x10);
    if (iVar3 < *(int *)((longlong)this_00 + 8)) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this_00,iVar3,
                 Default);
      this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                ((longlong)this_00 + 0x18);
    }
    else {
      TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Insert
                ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)this_00,param_1 + -1,
                 &this->DefaultValue);
      this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                ((longlong)this_00 + 0x18);
    }
  }
  return;
}

// SetNumElements @ 1436945c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumElements
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar1;
  int iVar2;
  int iVar3;
  TVector2<float>_u_0 *pTVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    iVar3 = *(int *)((longlong)this_00 + 8);
    iVar6 = param_1 * *(int *)((longlong)this_00 + 0x10);
    if (iVar6 < iVar3) {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)this_00,iVar6,
                 Default);
      this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
                ((longlong)this_00 + 0x18);
    }
    else {
      if (iVar3 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar6 - iVar3,(ForAnyElementType *)this_00,
                           (int *)((longlong)this_00 + 8),(int *)((longlong)this_00 + 0xc));
        pTVar4 = (TVector2<float>_u_0 *)(*(longlong *)this_00 + (longlong)iVar3 * 8);
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          do {
            *pTVar4 = (this->DefaultValue).field0_0x0;
            pTVar4 = pTVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
                ((longlong)this_00 + 0x18);
    }
  }
  return;
}

// SetNumElements @ 1436946c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::SetNumElements
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    iVar4 = *(int *)((longlong)this_00 + 8);
    iVar7 = param_1 * *(int *)((longlong)this_00 + 0x10);
    if (iVar7 < iVar4) {
      TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)this_00,iVar7,
                 Default);
      this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
                ((longlong)this_00 + 0x18);
    }
    else {
      if (iVar4 < iVar7) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,0x10,iVar7 - iVar4,(ForAnyElementType *)this_00,
                           (int *)((longlong)this_00 + 8),(int *)((longlong)this_00 + 0xc));
        puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)this_00);
        if (iVar4 < iVar7) {
          uVar5 = (ulonglong)(uint)(iVar7 - iVar4);
          do {
            uVar3 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
            *puVar6 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
            puVar6[1] = uVar3;
            puVar6 = puVar6 + 2;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
                ((longlong)this_00 + 0x18);
    }
  }
  return;
}

// SetNumElements @ 1436947c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::SetNumElements
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    iVar3 = *(int *)((longlong)this_00 + 8);
    iVar6 = param_1 * *(int *)((longlong)this_00 + 0x10);
    if (iVar6 < iVar3) {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)this_00,iVar6,
                 Default);
      this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
                ((longlong)this_00 + 0x18);
    }
    else {
      if (iVar3 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,iVar6 - iVar3,(ForAnyElementType *)this_00,
                           (int *)((longlong)this_00 + 8),(int *)((longlong)this_00 + 0xc));
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          puVar4 = (undefined8 *)(*(longlong *)this_00 + (longlong)iVar3 * 0xc);
          do {
            *puVar4 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
            *(float *)(puVar4 + 1) = (this->DefaultValue).field0_0x0._s_0.Z;
            uVar5 = uVar5 - 1;
            puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
          } while (uVar5 != 0);
        }
      }
      this_00 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
                ((longlong)this_00 + 0x18);
    }
  }
  return;
}

// SetNumElements @ 1436948c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshAttributeArraySet<FName>::SetNumElements(TMeshAttributeArraySet<FName> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar1;
  int iVar2;
  int iVar3;
  FName *pFVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<FName>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<FName>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    iVar3 = *(int *)((longlong)this_00 + 8);
    iVar6 = param_1 * *(int *)((longlong)this_00 + 0x10);
    if (iVar6 < iVar3) {
      TArray<FName,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,iVar6,Default);
      this_00 = (ForElementType<TMeshAttributeArrayBase<FName>_>)((longlong)this_00 + 0x18);
    }
    else {
      if (iVar3 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar6 - iVar3,(ForAnyElementType *)this_00,
                           (int *)((longlong)this_00 + 8),(int *)((longlong)this_00 + 0xc));
        pFVar4 = (FName *)(*(longlong *)this_00 + (longlong)iVar3 * 8);
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          do {
            *pFVar4 = this->DefaultValue;
            pFVar4 = pFVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      this_00 = (ForElementType<TMeshAttributeArrayBase<FName>_>)((longlong)this_00 + 0x18);
    }
  }
  return;
}

// SetNumElements @ 1436949c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshAttributeArraySet<bool>::SetNumElements(TMeshAttributeArraySet<bool> *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<TMeshAttributeArrayBase<bool>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    this_00 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TMeshAttributeArrayBase<bool>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMeshAttributeArrayBase<bool>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    iVar3 = *(int *)((longlong)this_00 + 8);
    iVar6 = param_1 * *(int *)((longlong)this_00 + 0x10);
    if (iVar6 < iVar3) {
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<bool,TSizedDefaultAllocator<32>_> *)this_00,iVar6,Default);
      this_00 = (ForElementType<TMeshAttributeArrayBase<bool>_>)((longlong)this_00 + 0x18);
    }
    else {
      if (iVar3 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar6 - iVar3,(ForAnyElementType *)this_00,
                           (int *)((longlong)this_00 + 8),(int *)((longlong)this_00 + 0xc));
        puVar4 = (undefined1 *)((longlong)iVar3 + *(longlong *)this_00);
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          do {
            *puVar4 = this->DefaultValue;
            puVar4 = puVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      this_00 = (ForElementType<TMeshAttributeArrayBase<bool>_>)((longlong)this_00 + 0x18);
    }
  }
  return;
}

// SetNumIndices @ 143695160

void __thiscall
TMeshAttributeArraySet<int>::SetNumIndices(TMeshAttributeArraySet<int> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pFVar9 = pFVar3->Data + (longlong)iVar8 * 4;
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            do {
              *(int *)pFVar9 = this->DefaultValue;
              pFVar9 = pFVar9 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695170

void __thiscall
TMeshAttributeArraySet<float>::SetNumIndices(TMeshAttributeArraySet<float> *this,int param_1)

{
  int *piVar1;
  TMeshAttributeArrayBase<float> *this_00;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar6;
  uint uVar7;
  
  iVar5 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar7 = iVar5 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar7);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar5 < param_1) {
      iVar5 = (this->ArrayForChannels).ArrayNum;
      if (iVar5 == (this->ArrayForChannels).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar5 + 1;
      FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
      FVar6 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
      if (FVar2 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
        FVar6 = FVar2;
      }
      this_00 = (TMeshAttributeArrayBase<float> *)((longlong)FVar6 + (longlong)iVar5 * 0x18);
      (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &(this_00->Container).ArrayMax;
      *piVar1 = 0;
      (this_00->Container).ArrayNum = 0;
      this_00->Extent = uVar7;
      iVar5 = (int)this->_padding_;
      uVar7 = iVar5 * uVar7;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (0 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar7,(ForAnyElementType *)this_00,0,piVar1);
      }
      if (0 < iVar5) {
        TMeshAttributeArrayBase<float>::Insert(this_00,iVar5 + -1,&this->DefaultValue);
      }
      iVar5 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695180

void __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::SetNumIndices
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *this_00;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar6;
  uint uVar7;
  
  iVar5 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar7 = iVar5 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar7);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar5 < param_1) {
      iVar5 = (this->ArrayForChannels).ArrayNum;
      if (iVar5 == (this->ArrayForChannels).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar5 + 1;
      FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
      FVar6 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
      if (FVar2 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
        FVar6 = FVar2;
      }
      this_00 = (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
                ((longlong)FVar6 + (longlong)iVar5 * 0x18);
      (this_00->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &(this_00->Container).ArrayMax;
      *piVar1 = 0;
      (this_00->Container).ArrayNum = 0;
      this_00->Extent = uVar7;
      iVar5 = (int)this->_padding_;
      uVar7 = iVar5 * uVar7;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (0 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar7,(ForAnyElementType *)this_00,0,piVar1);
      }
      if (0 < iVar5) {
        TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Insert
                  (this_00,iVar5 + -1,&this->DefaultValue);
      }
      iVar5 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695190

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumIndices
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TVector2<float>_u_0 *pTVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
               &this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pTVar9 = (TVector2<float>_u_0 *)(pFVar3->Data + (longlong)iVar8 * 8);
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            do {
              *pTVar9 = (this->DefaultValue).field0_0x0;
              pTVar9 = pTVar9 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 1436951a0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::SetNumIndices
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar12;
  uint uVar13;
  
  iVar8 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar8) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar13 = iVar8 - param_1;
    if (((int)(uVar13 | param_1) < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar13 != 0) {
      TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar13);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar8 < param_1) {
      iVar8 = (this->ArrayForChannels).ArrayNum;
      if (iVar8 == (this->ArrayForChannels).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar8 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar9 = *(int *)((longlong)&this->_padding_ + 4);
      FVar12 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
               &this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
        FVar12 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar12 + (longlong)iVar8 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar9;
      iVar8 = (int)this->_padding_;
      uVar13 = iVar8 * iVar9;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,uVar13,pFVar3,0,piVar2);
      }
      if (0 < iVar8) {
        iVar8 = iVar8 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar8) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,0x10,iVar8 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pFVar11 = pFVar3->Data + (longlong)iVar9 * 0x10;
          if (iVar9 < iVar8) {
            uVar10 = (ulonglong)(uint)(iVar8 - iVar9);
            do {
              uVar6 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
              *(undefined8 *)pFVar11 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
              *(undefined8 *)(pFVar11 + 8) = uVar6;
              pFVar11 = pFVar11 + 0x10;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
      }
      iVar8 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 1436951b0

void __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::SetNumIndices
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
               &this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            pFVar9 = pFVar3->Data + (longlong)iVar8 * 0xc;
            do {
              *(undefined8 *)pFVar9 = *(undefined8 *)&(this->DefaultValue).field0_0x0;
              *(float *)(pFVar9 + 8) = (this->DefaultValue).field0_0x0._s_0.Z;
              uVar11 = uVar11 - 1;
              pFVar9 = pFVar9 + 0xc;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 1436951c0

void __thiscall
TMeshAttributeArraySet<FName>::SetNumIndices(TMeshAttributeArraySet<FName> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pFVar9 = (FName *)(pFVar3->Data + (longlong)iVar8 * 8);
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            do {
              *pFVar9 = this->DefaultValue;
              pFVar9 = pFVar9 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 1436951d0

void __thiscall
TMeshAttributeArraySet<bool>::SetNumIndices(TMeshAttributeArraySet<bool> *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar10;
  ulonglong uVar11;
  uint uVar12;
  
  iVar7 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar7) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar12 = iVar7 - param_1;
    if (((int)(uVar12 | param_1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != 0) {
      TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar12);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar7 < param_1) {
      iVar7 = (this->ArrayForChannels).ArrayNum;
      if (iVar7 == (this->ArrayForChannels).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,
                           &(this->ArrayForChannels).ArrayMax);
      }
      (this->ArrayForChannels).ArrayNum = iVar7 + 1;
      FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
        FVar10 = FVar4;
      }
      pFVar3 = (ForAnyElementType *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      pFVar1 = pFVar3 + 1;
      *(int *)&pFVar1->Data = 0;
      piVar2 = (int *)((longlong)&pFVar3[1].Data + 4);
      *piVar2 = 0;
      *(int *)&pFVar3[2].Data = iVar8;
      iVar7 = (int)this->_padding_;
      uVar12 = iVar7 * iVar8;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar12,pFVar3,0,piVar2);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 * *(int *)&pFVar3[2].Data;
        if (*(int *)&pFVar1->Data < iVar7) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,iVar7 - *(int *)&pFVar1->Data,pFVar3,(int *)pFVar1,piVar2);
          pFVar9 = pFVar3->Data + iVar8;
          if (iVar8 < iVar7) {
            uVar11 = (ulonglong)(uint)(iVar7 - iVar8);
            do {
              *pFVar9 = (FScriptContainerElement)this->DefaultValue;
              pFVar9 = pFVar9 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar7 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

