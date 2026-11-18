// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 136

// TMeshUnboundedAttributeArraySet<int> @ 143656570

TMeshUnboundedAttributeArraySet<int> * __thiscall
TMeshUnboundedAttributeArraySet<int>::TMeshUnboundedAttributeArraySet<int>
          (TMeshUnboundedAttributeArraySet<int> *this,TMeshUnboundedAttributeArraySet<int> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<int>_> FVar3;
  ForElementType<TAttributeArrayContainer<int>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet_H__6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TAttributeArrayContainer<int>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<int>_>)&param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
      FVar3 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
    }
    ConstructItems<TAttributeArrayContainer<int>,TAttributeArrayContainer<int>,int>
              ((void *)FVar3,(TAttributeArrayContainer<int> *)FVar4,iVar2);
  }
  this->DefaultValue = param_1->DefaultValue;
  return this;
}

// TMeshUnboundedAttributeArraySet<float> @ 143656650

TMeshUnboundedAttributeArraySet<float> * __thiscall
TMeshUnboundedAttributeArraySet<float>::TMeshUnboundedAttributeArraySet<float>
          (TMeshUnboundedAttributeArraySet<float> *this,
          TMeshUnboundedAttributeArraySet<float> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<float>_> FVar3;
  ForElementType<TAttributeArrayContainer<float>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet_M__6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TAttributeArrayContainer<float>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<float>_>)&param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
      FVar3 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
    }
    ConstructItems<TAttributeArrayContainer<float>,TAttributeArrayContainer<float>,int>
              ((void *)FVar3,(TAttributeArrayContainer<float> *)FVar4,iVar2);
  }
  this->DefaultValue = param_1->DefaultValue;
  return this;
}

// TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> @ 143656730

TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> * __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,
          TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar4;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar5;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet_U__TTransform_N_Math_UE____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0;
  FVar5 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar5 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar5 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
              (0x80,0x10,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
      FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
    }
    ConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
              ((void *)FVar4,(TAttributeArrayContainer<UE::Math::TTransform<double>_> *)FVar5,iVar2)
    ;
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

// TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> @ 143656870

TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> * __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,
          TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet_U__TVector2_M_Math_UE____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
              (0x20,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
      FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
    }
    ConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
              ((void *)FVar3,(TAttributeArrayContainer<UE::Math::TVector2<float>_> *)FVar4,iVar2);
  }
  (this->DefaultValue).field0_0x0 = (param_1->DefaultValue).field0_0x0;
  return this;
}

// TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> @ 143656960

TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> * __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,
          TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar4;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar5;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet_U__TVector4_M_Math_UE____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0;
  FVar5 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar5 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar5 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
              (0x30,0x10,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
      FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
    }
    ConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
              ((void *)FVar4,(TAttributeArrayContainer<UE::Math::TVector4<float>_> *)FVar5,iVar2);
  }
  uVar3 = *(undefined8 *)((longlong)&(param_1->DefaultValue).field0_0x0 + 8);
  *(undefined8 *)&(this->DefaultValue).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultValue).field0_0x0;
  *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8) = uVar3;
  return this;
}

// TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> @ 143656a50

TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> * __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,
          TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet_U__TVector_M_Math_UE____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
              (0x20,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
      FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
    }
    ConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
              ((void *)FVar3,(TAttributeArrayContainer<UE::Math::TVector<float>_> *)FVar4,iVar2);
  }
  *(undefined8 *)&(this->DefaultValue).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultValue).field0_0x0;
  (this->DefaultValue).field0_0x0._s_0.Z = (param_1->DefaultValue).field0_0x0._s_0.Z;
  return this;
}

// TMeshUnboundedAttributeArraySet<FName> @ 143656b40

TMeshUnboundedAttributeArraySet<FName> * __thiscall
TMeshUnboundedAttributeArraySet<FName>::TMeshUnboundedAttributeArraySet<FName>
          (TMeshUnboundedAttributeArraySet<FName> *this,
          TMeshUnboundedAttributeArraySet<FName> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<FName>_> FVar3;
  ForElementType<TAttributeArrayContainer<FName>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet_VFName____6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TAttributeArrayContainer<FName>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<FName>_>)&param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
              (0x20,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
      FVar3 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
    }
    ConstructItems<TAttributeArrayContainer<FName>,TAttributeArrayContainer<FName>,int>
              ((void *)FVar3,(TAttributeArrayContainer<FName> *)FVar4,iVar2);
  }
  this->DefaultValue = param_1->DefaultValue;
  return this;
}

// TMeshUnboundedAttributeArraySet<bool> @ 143656c30

TMeshUnboundedAttributeArraySet<bool> * __thiscall
TMeshUnboundedAttributeArraySet<bool>::TMeshUnboundedAttributeArraySet<bool>
          (TMeshUnboundedAttributeArraySet<bool> *this,
          TMeshUnboundedAttributeArraySet<bool> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<bool>_> FVar3;
  ForElementType<TAttributeArrayContainer<bool>_> FVar4;
  
  this->_padding_ = (longlong)&___7FMeshAttributeArraySetBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet__N__6B_;
  (this->ArrayForChannels).AllocatorInstance.SecondaryData =
       (ForElementType<TAttributeArrayContainer<bool>_>)0x0;
  FVar4 = (param_1->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ArrayForChannels).ArrayNum;
  (this->ArrayForChannels).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<bool>_>)&param_1->ArrayForChannels;
  }
  piVar1 = &(this->ArrayForChannels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
              (0x18,8,iVar2,0,&(this->ArrayForChannels).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
      FVar3 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
    }
    ConstructItems<TAttributeArrayContainer<bool>,TAttributeArrayContainer<bool>,int>
              ((void *)FVar3,(TAttributeArrayContainer<bool> *)FVar4,iVar2);
  }
  this->DefaultValue = param_1->DefaultValue;
  return this;
}

// Clone @ 143663a70

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshUnboundedAttributeArraySet<int>::Clone(TMeshUnboundedAttributeArraySet<int> *this)

{
  TMeshUnboundedAttributeArraySet<int> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x48);
  if (pTVar1 != (TMeshUnboundedAttributeArraySet<int> *)0x0) {
    pTVar1 = TMeshUnboundedAttributeArraySet<int>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663ad0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshUnboundedAttributeArraySet<float>::Clone(TMeshUnboundedAttributeArraySet<float> *this)

{
  TMeshUnboundedAttributeArraySet<float> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x48);
  if (pTVar1 != (TMeshUnboundedAttributeArraySet<float> *)0x0) {
    pTVar1 = TMeshUnboundedAttributeArraySet<float>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663b30

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::Clone
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this)

{
  TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x120);
  if (pTVar1 != (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *)0x0) {
    pTVar1 = TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663b90

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::Clone
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this)

{
  TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x50);
  if (pTVar1 != (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    pTVar1 = TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663bf0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::Clone
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this)

{
  TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x80);
  if (pTVar1 != (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
    pTVar1 = TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663c50

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::Clone
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this)

{
  TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x58);
  if (pTVar1 != (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    pTVar1 = TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663cb0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshUnboundedAttributeArraySet<FName>::Clone(TMeshUnboundedAttributeArraySet<FName> *this)

{
  TMeshUnboundedAttributeArraySet<FName> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x50);
  if (pTVar1 != (TMeshUnboundedAttributeArraySet<FName> *)0x0) {
    pTVar1 = TMeshUnboundedAttributeArraySet<FName>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// Clone @ 143663d10

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __thiscall
TMeshUnboundedAttributeArraySet<bool>::Clone(TMeshUnboundedAttributeArraySet<bool> *this)

{
  TMeshUnboundedAttributeArraySet<bool> *pTVar1;
  FMeshAttributeArraySetBase *in_RDX;
  
  pTVar1 = ::operator_new(0x48);
  if (pTVar1 != (TMeshUnboundedAttributeArraySet<bool> *)0x0) {
    pTVar1 = TMeshUnboundedAttributeArraySet<bool>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)in_RDX;
}

// GetHash @ 143672a50

uint __thiscall
TMeshUnboundedAttributeArraySet<int>::GetHash(TMeshUnboundedAttributeArraySet<int> *this)

{
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ForElementType<TAttributeArrayContainer<int>_> FVar7;
  undefined1 local_res8 [8];
  
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar4 = 0;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<int>_>)((longlong)FVar7 + (longlong)iVar2 * 0x18)
  ;
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    iVar3 = *(int *)((longlong)FVar7 + 8);
    puVar5 = *(undefined8 **)FVar7;
    puVar6 = puVar5 + (longlong)iVar3 * 0x183;
    while( true ) {
      if (*(int *)((longlong)FVar7 + 8) != iVar3) {
        `TCheckedPointerIterator<TAttributeArrayContainer<int>::FChunk_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar5 == puVar6) break;
      uVar4 = (*FCrc::MemCrc32Func)((void *)*puVar5,*(int *)(puVar5 + 1) << 2,uVar4);
      puVar5 = puVar5 + 0x183;
    }
    FVar7 = (ForElementType<TAttributeArrayContainer<int>_>)((longlong)FVar7 + 0x18);
  }
  return uVar4;
}

// GetHash @ 143672b20

uint __thiscall
TMeshUnboundedAttributeArraySet<float>::GetHash(TMeshUnboundedAttributeArraySet<float> *this)

{
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ForElementType<TAttributeArrayContainer<float>_> FVar7;
  undefined1 local_res8 [8];
  
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar4 = 0;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<float>_>)
          ((longlong)FVar7 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    iVar3 = *(int *)((longlong)FVar7 + 8);
    puVar5 = *(undefined8 **)FVar7;
    puVar6 = puVar5 + (longlong)iVar3 * 0x183;
    while( true ) {
      if (*(int *)((longlong)FVar7 + 8) != iVar3) {
        `TCheckedPointerIterator<TAttributeArrayContainer<float>::FChunk_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar5 == puVar6) break;
      uVar4 = (*FCrc::MemCrc32Func)((void *)*puVar5,*(int *)(puVar5 + 1) << 2,uVar4);
      puVar5 = puVar5 + 0x183;
    }
    FVar7 = (ForElementType<TAttributeArrayContainer<float>_>)((longlong)FVar7 + 0x18);
  }
  return uVar4;
}

// GetHash @ 143672bf0

uint __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::GetHash
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar7;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
          ((longlong)iVar1 * 0x80 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TTransform<double>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    iVar2 = *(int *)((longlong)FVar6 + 8);
    puVar4 = *(undefined8 **)FVar6;
    puVar5 = puVar4 + (longlong)iVar2 * 0x183;
    while( true ) {
      if (*(int *)((longlong)FVar6 + 8) != iVar2) {
        `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar5) break;
      uVar3 = (*FCrc::MemCrc32Func)((void *)*puVar4,*(int *)(puVar4 + 1) * 0x60,uVar3);
      puVar4 = puVar4 + 0x183;
    }
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            ((longlong)FVar6 + 0x80);
  }
  return uVar3;
}

// GetHash @ 143672cd0

uint __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::GetHash
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar7;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
          ((longlong)iVar1 * 0x20 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector2<float>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    iVar2 = *(int *)((longlong)FVar6 + 8);
    puVar4 = *(undefined8 **)FVar6;
    puVar5 = puVar4 + (longlong)iVar2 * 0x183;
    while( true ) {
      if (*(int *)((longlong)FVar6 + 8) != iVar2) {
        `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar5) break;
      uVar3 = (*FCrc::MemCrc32Func)((void *)*puVar4,*(int *)(puVar4 + 1) << 3,uVar3);
      puVar4 = puVar4 + 0x183;
    }
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            ((longlong)FVar6 + 0x20);
  }
  return uVar3;
}

// GetHash @ 143672da0

uint __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::GetHash
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar7;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
          ((longlong)iVar1 * 0x30 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector4<float>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    iVar2 = *(int *)((longlong)FVar6 + 8);
    puVar4 = *(undefined8 **)FVar6;
    puVar5 = puVar4 + (longlong)iVar2 * 0x183;
    while( true ) {
      if (*(int *)((longlong)FVar6 + 8) != iVar2) {
        `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar5) break;
      uVar3 = (*FCrc::MemCrc32Func)((void *)*puVar4,*(int *)(puVar4 + 1) << 4,uVar3);
      puVar4 = puVar4 + 0x183;
    }
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            ((longlong)FVar6 + 0x30);
  }
  return uVar3;
}

// GetHash @ 143672e70

uint __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::GetHash
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar7;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
          ((longlong)iVar1 * 0x20 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector<float>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    iVar2 = *(int *)((longlong)FVar6 + 8);
    puVar4 = *(undefined8 **)FVar6;
    puVar5 = puVar4 + (longlong)iVar2 * 0x183;
    while( true ) {
      if (*(int *)((longlong)FVar6 + 8) != iVar2) {
        `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar5) break;
      uVar3 = (*FCrc::MemCrc32Func)((void *)*puVar4,*(int *)(puVar4 + 1) * 0xc,uVar3);
      puVar4 = puVar4 + 0x183;
    }
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            ((longlong)FVar6 + 0x20);
  }
  return uVar3;
}

// GetHash @ 143672f40

uint __thiscall
TMeshUnboundedAttributeArraySet<FName>::GetHash(TMeshUnboundedAttributeArraySet<FName> *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ForElementType<TAttributeArrayContainer<FName>_> FVar6;
  ForElementType<TAttributeArrayContainer<FName>_> FVar7;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  uVar3 = 0;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<FName>_>)
          ((longlong)iVar1 * 0x20 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<FName>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    iVar2 = *(int *)((longlong)FVar6 + 8);
    puVar4 = *(undefined8 **)FVar6;
    puVar5 = puVar4 + (longlong)iVar2 * 0x183;
    while( true ) {
      if (*(int *)((longlong)FVar6 + 8) != iVar2) {
        `TCheckedPointerIterator<TAttributeArrayContainer<FName>::FChunk_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar5) break;
      uVar3 = (*FCrc::MemCrc32Func)((void *)*puVar4,*(int *)(puVar4 + 1) << 3,uVar3);
      puVar4 = puVar4 + 0x183;
    }
    FVar6 = (ForElementType<TAttributeArrayContainer<FName>_>)((longlong)FVar6 + 0x20);
  }
  return uVar3;
}

// GetHash @ 143673010

uint __thiscall
TMeshUnboundedAttributeArraySet<bool>::GetHash(TMeshUnboundedAttributeArraySet<bool> *this)

{
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ForElementType<TAttributeArrayContainer<bool>_> FVar7;
  undefined1 local_res8 [8];
  
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  uVar4 = 0;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<bool>_>)
          ((longlong)FVar7 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<bool>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    iVar3 = *(int *)((longlong)FVar7 + 8);
    puVar5 = *(undefined8 **)FVar7;
    puVar6 = puVar5 + (longlong)iVar3 * 0x183;
    while( true ) {
      if (*(int *)((longlong)FVar7 + 8) != iVar3) {
        `TCheckedPointerIterator<TAttributeArrayContainer<bool>::FChunk_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar5 == puVar6) break;
      uVar4 = (*FCrc::MemCrc32Func)((void *)*puVar5,*(int *)(puVar5 + 1),uVar4);
      puVar5 = puVar5 + 0x183;
    }
    FVar7 = (ForElementType<TAttributeArrayContainer<bool>_>)((longlong)FVar7 + 0x18);
  }
  return uVar4;
}

// GetNumChannels @ 143673160

int __thiscall
TMeshUnboundedAttributeArraySet<int>::GetNumChannels(TMeshUnboundedAttributeArraySet<int> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673170

int __thiscall
TMeshUnboundedAttributeArraySet<float>::GetNumChannels(TMeshUnboundedAttributeArraySet<float> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673180

int __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::GetNumChannels
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 143673190

int __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::GetNumChannels
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 1436731a0

int __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::GetNumChannels
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 1436731b0

int __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::GetNumChannels
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 1436731c0

int __thiscall
TMeshUnboundedAttributeArraySet<FName>::GetNumChannels(TMeshUnboundedAttributeArraySet<FName> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumChannels @ 1436731d0

int __thiscall
TMeshUnboundedAttributeArraySet<bool>::GetNumChannels(TMeshUnboundedAttributeArraySet<bool> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 1436733c0

int __thiscall
TMeshUnboundedAttributeArraySet<int>::GetNumIndices(TMeshUnboundedAttributeArraySet<int> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 1436733d0

int __thiscall
TMeshUnboundedAttributeArraySet<float>::GetNumIndices(TMeshUnboundedAttributeArraySet<float> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 1436733e0

int __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::GetNumIndices
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 1436733f0

int __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::GetNumIndices
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673400

int __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::GetNumIndices
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673410

int __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::GetNumIndices
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673420

int __thiscall
TMeshUnboundedAttributeArraySet<FName>::GetNumIndices(TMeshUnboundedAttributeArraySet<FName> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// GetNumIndices @ 143673430

int __thiscall
TMeshUnboundedAttributeArraySet<bool>::GetNumIndices(TMeshUnboundedAttributeArraySet<bool> *this)

{
  return (this->ArrayForChannels).ArrayNum;
}

// Initialize @ 1436780f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<int>::Initialize
          (TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<int>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  ForElementType<TAttributeArrayContainer<int>_> FVar7;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  puVar6 = (uchar *)((longlong)FVar7 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<int>_> *)(puVar6 + -8);
    if (this_00 ==
        (ForElementType<TAttributeArrayContainer<int>_> *)((longlong)FVar7 + (longlong)iVar1 * 0x18)
       ) {
      return;
    }
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = (int)(param_1 + 0xffU) >> 8;
    if ((int)uVar5 < 0) break;
    DestructItems<TAttributeArrayContainer<int>::FChunk,int>
              ((FChunk *)((ForAnyElementType *)this_00->InlineData)->Data,*(int *)puVar6);
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    if (*(uint *)(puVar6 + 4) != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar5,(ForAnyElementType *)this_00,0,(int *)(puVar6 + 4));
    }
    TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *)this_00,
               uVar5,Default);
    if (0 < (int)uVar5) {
      uVar4 = *(int *)puVar6 - 1;
      uVar5 = 0;
      if ((int)uVar4 < *(int *)puVar6) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)(((ForAnyElementType *)this_00->InlineData)->Data +
               (longlong)*(int *)puVar6 * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    *(int *)(puVar6 + 8) = param_1;
    puVar6 = puVar6 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// Initialize @ 143678280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<float>::Initialize
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<float>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  ForElementType<TAttributeArrayContainer<float>_> FVar7;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  puVar6 = (uchar *)((longlong)FVar7 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<float>_> *)(puVar6 + -8);
    if (this_00 ==
        (ForElementType<TAttributeArrayContainer<float>_> *)
        ((longlong)FVar7 + (longlong)iVar1 * 0x18)) {
      return;
    }
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = (int)(param_1 + 0xffU) >> 8;
    if ((int)uVar5 < 0) break;
    DestructItems<TAttributeArrayContainer<float>::FChunk,int>
              ((FChunk *)((ForAnyElementType *)this_00->InlineData)->Data,*(int *)puVar6);
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    if (*(uint *)(puVar6 + 4) != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar5,(ForAnyElementType *)this_00,0,(int *)(puVar6 + 4));
    }
    TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *)
               this_00,uVar5,Default);
    if (0 < (int)uVar5) {
      uVar4 = *(int *)puVar6 - 1;
      uVar5 = 0;
      if ((int)uVar4 < *(int *)puVar6) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)(((ForAnyElementType *)this_00->InlineData)->Data +
               (longlong)*(int *)puVar6 * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    *(int *)(puVar6 + 8) = param_1;
    puVar6 = puVar6 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// Initialize @ 143678410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::Initialize
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  puVar7 = (uchar *)((longlong)FVar4 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> *)
              (puVar7 + -8);
    if (this_00 ==
        (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> *)
        ((longlong)iVar1 * 0x80 + (longlong)FVar4)) {
      return;
    }
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (int)(param_1 + 0xffU) >> 8;
    if ((int)uVar6 < 0) break;
    DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
              ((FChunk *)((ForAnyElementType *)this_00->InlineData)->Data,*(int *)puVar7);
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    if (*(uint *)(puVar7 + 4) != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this_00,0,(int *)(puVar7 + 4));
    }
    TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::SetNum((TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)this_00,uVar6,Default);
    if (0 < (int)uVar6) {
      uVar5 = *(int *)puVar7 - 1;
      uVar6 = 0;
      if ((int)uVar5 < *(int *)puVar7) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)(((ForAnyElementType *)this_00->InlineData)->Data +
               (longlong)*(int *)puVar7 * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    *(int *)(puVar7 + 8) = param_1;
    puVar7 = puVar7 + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 1436785b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::Initialize
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  puVar7 = (uchar *)((longlong)FVar4 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> *)(puVar7 + -8)
    ;
    if (this_00 ==
        (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> *)
        ((longlong)iVar1 * 0x20 + (longlong)FVar4)) {
      return;
    }
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (int)(param_1 + 0xffU) >> 8;
    if ((int)uVar6 < 0) break;
    DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
              ((FChunk *)((ForAnyElementType *)this_00->InlineData)->Data,*(int *)puVar7);
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    if (*(uint *)(puVar7 + 4) != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this_00,0,(int *)(puVar7 + 4));
    }
    TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::SetNum((TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)this_00,uVar6,Default);
    if (0 < (int)uVar6) {
      uVar5 = *(int *)puVar7 - 1;
      uVar6 = 0;
      if ((int)uVar5 < *(int *)puVar7) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)(((ForAnyElementType *)this_00->InlineData)->Data +
               (longlong)*(int *)puVar7 * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    *(int *)(puVar7 + 8) = param_1;
    puVar7 = puVar7 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143678740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::Initialize
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar7;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  puVar6 = (uchar *)((longlong)FVar7 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> *)(puVar6 + -8)
    ;
    if (this_00 ==
        (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> *)
        ((longlong)iVar1 * 0x30 + (longlong)FVar7)) {
      return;
    }
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = (int)(param_1 + 0xffU) >> 8;
    if ((int)uVar5 < 0) break;
    DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
              ((FChunk *)((ForAnyElementType *)this_00->InlineData)->Data,*(int *)puVar6);
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    if (*(uint *)(puVar6 + 4) != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar5,(ForAnyElementType *)this_00,0,(int *)(puVar6 + 4));
    }
    TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::SetNum((TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)this_00,uVar5,Default);
    if (0 < (int)uVar5) {
      uVar4 = *(int *)puVar6 - 1;
      uVar5 = 0;
      if ((int)uVar4 < *(int *)puVar6) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)(((ForAnyElementType *)this_00->InlineData)->Data +
               (longlong)*(int *)puVar6 * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    *(int *)(puVar6 + 8) = param_1;
    puVar6 = puVar6 + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// Initialize @ 1436788d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::Initialize
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  puVar7 = (uchar *)((longlong)FVar4 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> *)(puVar7 + -8);
    if (this_00 ==
        (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> *)
        ((longlong)iVar1 * 0x20 + (longlong)FVar4)) {
      return;
    }
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (int)(param_1 + 0xffU) >> 8;
    if ((int)uVar6 < 0) break;
    DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
              ((FChunk *)((ForAnyElementType *)this_00->InlineData)->Data,*(int *)puVar7);
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    if (*(uint *)(puVar7 + 4) != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this_00,0,(int *)(puVar7 + 4));
    }
    TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::SetNum((TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)this_00,uVar6,Default);
    if (0 < (int)uVar6) {
      uVar5 = *(int *)puVar7 - 1;
      uVar6 = 0;
      if ((int)uVar5 < *(int *)puVar7) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)(((ForAnyElementType *)this_00->InlineData)->Data +
               (longlong)*(int *)puVar7 * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    *(int *)(puVar7 + 8) = param_1;
    puVar7 = puVar7 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143678a60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::Initialize
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<FName>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<FName>_> FVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar4 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar4 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar4 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  puVar7 = (uchar *)((longlong)FVar4 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<FName>_> *)(puVar7 + -8);
    if (this_00 ==
        (ForElementType<TAttributeArrayContainer<FName>_> *)
        ((longlong)iVar1 * 0x20 + (longlong)FVar4)) {
      return;
    }
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (int)(param_1 + 0xffU) >> 8;
    if ((int)uVar6 < 0) break;
    DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
              ((FChunk *)((ForAnyElementType *)this_00->InlineData)->Data,*(int *)puVar7);
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    if (*(uint *)(puVar7 + 4) != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar6,(ForAnyElementType *)this_00,0,(int *)(puVar7 + 4));
    }
    TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *)
               this_00,uVar6,Default);
    if (0 < (int)uVar6) {
      uVar5 = *(int *)puVar7 - 1;
      uVar6 = 0;
      if ((int)uVar5 < *(int *)puVar7) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)(((ForAnyElementType *)this_00->InlineData)->Data +
               (longlong)*(int *)puVar7 * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    *(int *)(puVar7 + 8) = param_1;
    puVar7 = puVar7 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Initialize @ 143678bf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::Initialize
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<bool>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  ForElementType<TAttributeArrayContainer<bool>_> FVar7;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  puVar6 = (uchar *)((longlong)FVar7 + 8);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<bool>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<bool>_> *)(puVar6 + -8);
    if (this_00 ==
        (ForElementType<TAttributeArrayContainer<bool>_> *)
        ((longlong)FVar7 + (longlong)iVar1 * 0x18)) {
      return;
    }
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = (int)(param_1 + 0xffU) >> 8;
    if ((int)uVar5 < 0) break;
    DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
              ((FChunk *)((ForAnyElementType *)this_00->InlineData)->Data,*(int *)puVar6);
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    if (*(uint *)(puVar6 + 4) != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,uVar5,(ForAnyElementType *)this_00,0,(int *)(puVar6 + 4));
    }
    TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *)this_00
               ,uVar5,Default);
    if (0 < (int)uVar5) {
      uVar4 = *(int *)puVar6 - 1;
      uVar5 = 0;
      if ((int)uVar4 < *(int *)puVar6) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)(((ForAnyElementType *)this_00->InlineData)->Data +
               (longlong)*(int *)puVar6 * 0xc18 + -8) = (param_1 + 0xffU & 0xff) + 1;
    }
    *(int *)(puVar6 + 8) = param_1;
    puVar6 = puVar6 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// Insert @ 14367a490

void __thiscall
TMeshUnboundedAttributeArraySet<int>::Insert(TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<TAttributeArrayContainer<int>_> this_00;
  int iVar5;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  iVar5 = param_1 + 1;
  if (this_00 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<int>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    if (param_1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x6e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((longlong)this_00 + 0x10) < iVar5) {
      TAttributeArrayContainer<int>::SetNum
                ((TAttributeArrayContainer<int> *)this_00,iVar5,&this->DefaultValue);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<int>_>)((longlong)this_00 + 0x18);
  }
  if (iVar5 < (int)this->_padding_) {
    iVar5 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar5;
  return;
}

// Insert @ 14367a560

void __thiscall
TMeshUnboundedAttributeArraySet<float>::Insert
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<TAttributeArrayContainer<float>_> this_00;
  int iVar5;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  iVar5 = param_1 + 1;
  if (this_00 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<float>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    if (param_1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x6e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((longlong)this_00 + 0x10) < iVar5) {
      TAttributeArrayContainer<float>::SetNum
                ((TAttributeArrayContainer<float> *)this_00,iVar5,&this->DefaultValue);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<float>_>)((longlong)this_00 + 0x18);
  }
  if (iVar5 < (int)this->_padding_) {
    iVar5 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar5;
  return;
}

// Insert @ 14367a630

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::Insert
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar4;
  int iVar5;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  iVar5 = param_1 + 1;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
  }
  FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
          ((longlong)iVar1 * 0x80 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar4) break;
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x6e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((longlong)this_00 + 0x10) < iVar5) {
      TAttributeArrayContainer<UE::Math::TTransform<double>_>::SetNum
                ((TAttributeArrayContainer<UE::Math::TTransform<double>_> *)this_00,iVar5,
                 &this->DefaultValue);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              ((longlong)this_00 + 0x80);
  }
  if (iVar5 < (int)this->_padding_) {
    iVar5 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar5;
  return;
}

// Insert @ 14367a700

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::Insert
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar4;
  int iVar5;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  iVar5 = param_1 + 1;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
          ((longlong)iVar1 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar4) break;
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x6e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((longlong)this_00 + 0x10) < iVar5) {
      TAttributeArrayContainer<UE::Math::TVector2<float>_>::SetNum
                ((TAttributeArrayContainer<UE::Math::TVector2<float>_> *)this_00,iVar5,
                 &this->DefaultValue);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              ((longlong)this_00 + 0x20);
  }
  if (iVar5 < (int)this->_padding_) {
    iVar5 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar5;
  return;
}

// Insert @ 14367a7d0

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::Insert
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar4;
  int iVar5;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  iVar5 = param_1 + 1;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
          ((longlong)iVar1 * 0x30 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar4) break;
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x6e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((longlong)this_00 + 0x10) < iVar5) {
      TAttributeArrayContainer<UE::Math::TVector4<float>_>::SetNum
                ((TAttributeArrayContainer<UE::Math::TVector4<float>_> *)this_00,iVar5,
                 &this->DefaultValue);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              ((longlong)this_00 + 0x30);
  }
  if (iVar5 < (int)this->_padding_) {
    iVar5 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar5;
  return;
}

// Insert @ 14367a8a0

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::Insert
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar4;
  int iVar5;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  iVar5 = param_1 + 1;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar4 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
          ((longlong)iVar1 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar4) break;
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x6e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((longlong)this_00 + 0x10) < iVar5) {
      TAttributeArrayContainer<UE::Math::TVector<float>_>::SetNum
                ((TAttributeArrayContainer<UE::Math::TVector<float>_> *)this_00,iVar5,
                 &this->DefaultValue);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              ((longlong)this_00 + 0x20);
  }
  if (iVar5 < (int)this->_padding_) {
    iVar5 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar5;
  return;
}

// Insert @ 14367a970

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::Insert
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TAttributeArrayContainer<FName>_> this_00;
  ForElementType<TAttributeArrayContainer<FName>_> FVar4;
  int iVar5;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  iVar5 = param_1 + 1;
  if (this_00 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  FVar4 = (ForElementType<TAttributeArrayContainer<FName>_>)
          ((longlong)iVar1 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar4) break;
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x6e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((longlong)this_00 + 0x10) < iVar5) {
      TAttributeArrayContainer<FName>::SetNum
                ((TAttributeArrayContainer<FName> *)this_00,iVar5,&this->DefaultValue);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<FName>_>)((longlong)this_00 + 0x20);
  }
  if (iVar5 < (int)this->_padding_) {
    iVar5 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar5;
  return;
}

// Insert @ 14367aa40

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::Insert
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<TAttributeArrayContainer<bool>_> this_00;
  int iVar5;
  undefined1 local_res10 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  iVar5 = param_1 + 1;
  if (this_00 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<bool>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<bool>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    if (param_1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                         ,0x6e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((longlong)this_00 + 0x10) < iVar5) {
      TAttributeArrayContainer<bool>::SetNum
                ((TAttributeArrayContainer<bool> *)this_00,iVar5,&this->DefaultValue);
    }
    this_00 = (ForElementType<TAttributeArrayContainer<bool>_>)((longlong)this_00 + 0x18);
  }
  if (iVar5 < (int)this->_padding_) {
    iVar5 = (int)this->_padding_;
  }
  *(int *)&this->_padding_ = iVar5;
  return;
}

// InsertChannel @ 14367b570

void __thiscall
TMeshUnboundedAttributeArraySet<int>::InsertChannel
          (TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  TAttributeArrayContainer<int> *this_00;
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  
  TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<int> *)((longlong)FVar1 + (longlong)param_1 * 0x18);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  this_00->DefaultValue = this->DefaultValue;
  TAttributeArrayContainer<int>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b5e0

void __thiscall
TMeshUnboundedAttributeArraySet<float>::InsertChannel
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  TAttributeArrayContainer<float> *this_00;
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  
  TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<float> *)((longlong)FVar1 + (longlong)param_1 * 0x18);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  this_00->DefaultValue = this->DefaultValue;
  TAttributeArrayContainer<float>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b650

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::InsertChannel
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  double dVar1;
  TAttributeArrayContainer<UE::Math::TTransform<double>_> *this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar2;
  
  TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<UE::Math::TTransform<double>_> *)
            ((longlong)param_1 * 0x80 + (longlong)FVar2);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  dVar1 = (this->DefaultValue).Rotation.XY.m128d_f64[1];
  (this_00->DefaultValue).Rotation.XY.m128d_f64[0] = (this->DefaultValue).Rotation.XY.m128d_f64[0];
  (this_00->DefaultValue).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Rotation.ZW.m128d_f64[1];
  (this_00->DefaultValue).Rotation.ZW.m128d_f64[0] = (this->DefaultValue).Rotation.ZW.m128d_f64[0];
  (this_00->DefaultValue).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Translation.XY.m128d_f64[1];
  (this_00->DefaultValue).Translation.XY.m128d_f64[0] =
       (this->DefaultValue).Translation.XY.m128d_f64[0];
  (this_00->DefaultValue).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Translation.ZW.m128d_f64[1];
  (this_00->DefaultValue).Translation.ZW.m128d_f64[0] =
       (this->DefaultValue).Translation.ZW.m128d_f64[0];
  (this_00->DefaultValue).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Scale3D.XY.m128d_f64[1];
  (this_00->DefaultValue).Scale3D.XY.m128d_f64[0] = (this->DefaultValue).Scale3D.XY.m128d_f64[0];
  (this_00->DefaultValue).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Scale3D.ZW.m128d_f64[1];
  (this_00->DefaultValue).Scale3D.ZW.m128d_f64[0] = (this->DefaultValue).Scale3D.ZW.m128d_f64[0];
  (this_00->DefaultValue).Scale3D.ZW.m128d_f64[1] = dVar1;
  TAttributeArrayContainer<UE::Math::TTransform<double>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b700

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::InsertChannel
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  TAttributeArrayContainer<UE::Math::TVector2<float>_> *this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar1;
  
  TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<UE::Math::TVector2<float>_> *)
            ((longlong)param_1 * 0x20 + (longlong)FVar1);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  (this_00->DefaultValue).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)(this->DefaultValue).field0_0x0
  ;
  TAttributeArrayContainer<UE::Math::TVector2<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b780

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::InsertChannel
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  undefined8 uVar1;
  TAttributeArrayContainer<UE::Math::TVector4<float>_> *this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar2;
  
  TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<UE::Math::TVector4<float>_> *)
            ((longlong)param_1 * 0x30 + (longlong)FVar2);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  uVar1 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
  *(undefined8 *)&(this_00->DefaultValue).field0_0x0 =
       *(undefined8 *)&(this->DefaultValue).field0_0x0;
  *(undefined8 *)((longlong)&(this_00->DefaultValue).field0_0x0 + 8) = uVar1;
  TAttributeArrayContainer<UE::Math::TVector4<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b800

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::InsertChannel
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  TAttributeArrayContainer<UE::Math::TVector<float>_> *this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar1;
  
  TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<UE::Math::TVector<float>_> *)
            ((longlong)param_1 * 0x20 + (longlong)FVar1);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  *(undefined8 *)&(this_00->DefaultValue).field0_0x0 =
       *(undefined8 *)&(this->DefaultValue).field0_0x0;
  (this_00->DefaultValue).field0_0x0._s_0.Z = (this->DefaultValue).field0_0x0._s_0.Z;
  TAttributeArrayContainer<UE::Math::TVector<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b880

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::InsertChannel
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  TAttributeArrayContainer<FName> *this_00;
  ForElementType<TAttributeArrayContainer<FName>_> FVar1;
  
  TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<FName> *)((longlong)param_1 * 0x20 + (longlong)FVar1);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  this_00->DefaultValue = this->DefaultValue;
  TAttributeArrayContainer<FName>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertChannel @ 14367b900

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::InsertChannel
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  TAttributeArrayContainer<bool> *this_00;
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  
  TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<bool> *)((longlong)FVar1 + (longlong)param_1 * 0x18);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  this_00->DefaultValue = this->DefaultValue;
  TAttributeArrayContainer<bool>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bcf0

void __thiscall
TMeshUnboundedAttributeArraySet<int>::InsertIndex
          (TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  TAttributeArrayContainer<int> *this_00;
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  
  TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<int> *)((longlong)FVar1 + (longlong)param_1 * 0x18);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  this_00->DefaultValue = this->DefaultValue;
  TAttributeArrayContainer<int>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bd60

void __thiscall
TMeshUnboundedAttributeArraySet<float>::InsertIndex
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  TAttributeArrayContainer<float> *this_00;
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  
  TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<float> *)((longlong)FVar1 + (longlong)param_1 * 0x18);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  this_00->DefaultValue = this->DefaultValue;
  TAttributeArrayContainer<float>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bdd0

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::InsertIndex
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  double dVar1;
  TAttributeArrayContainer<UE::Math::TTransform<double>_> *this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar2;
  
  TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<UE::Math::TTransform<double>_> *)
            ((longlong)param_1 * 0x80 + (longlong)FVar2);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  dVar1 = (this->DefaultValue).Rotation.XY.m128d_f64[1];
  (this_00->DefaultValue).Rotation.XY.m128d_f64[0] = (this->DefaultValue).Rotation.XY.m128d_f64[0];
  (this_00->DefaultValue).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Rotation.ZW.m128d_f64[1];
  (this_00->DefaultValue).Rotation.ZW.m128d_f64[0] = (this->DefaultValue).Rotation.ZW.m128d_f64[0];
  (this_00->DefaultValue).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Translation.XY.m128d_f64[1];
  (this_00->DefaultValue).Translation.XY.m128d_f64[0] =
       (this->DefaultValue).Translation.XY.m128d_f64[0];
  (this_00->DefaultValue).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Translation.ZW.m128d_f64[1];
  (this_00->DefaultValue).Translation.ZW.m128d_f64[0] =
       (this->DefaultValue).Translation.ZW.m128d_f64[0];
  (this_00->DefaultValue).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Scale3D.XY.m128d_f64[1];
  (this_00->DefaultValue).Scale3D.XY.m128d_f64[0] = (this->DefaultValue).Scale3D.XY.m128d_f64[0];
  (this_00->DefaultValue).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->DefaultValue).Scale3D.ZW.m128d_f64[1];
  (this_00->DefaultValue).Scale3D.ZW.m128d_f64[0] = (this->DefaultValue).Scale3D.ZW.m128d_f64[0];
  (this_00->DefaultValue).Scale3D.ZW.m128d_f64[1] = dVar1;
  TAttributeArrayContainer<UE::Math::TTransform<double>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367be80

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::InsertIndex
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  TAttributeArrayContainer<UE::Math::TVector2<float>_> *this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar1;
  
  TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<UE::Math::TVector2<float>_> *)
            ((longlong)param_1 * 0x20 + (longlong)FVar1);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  (this_00->DefaultValue).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)(this->DefaultValue).field0_0x0
  ;
  TAttributeArrayContainer<UE::Math::TVector2<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bf00

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::InsertIndex
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  undefined8 uVar1;
  TAttributeArrayContainer<UE::Math::TVector4<float>_> *this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar2;
  
  TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar2 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<UE::Math::TVector4<float>_> *)
            ((longlong)param_1 * 0x30 + (longlong)FVar2);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  uVar1 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
  *(undefined8 *)&(this_00->DefaultValue).field0_0x0 =
       *(undefined8 *)&(this->DefaultValue).field0_0x0;
  *(undefined8 *)((longlong)&(this_00->DefaultValue).field0_0x0 + 8) = uVar1;
  TAttributeArrayContainer<UE::Math::TVector4<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367bf80

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::InsertIndex
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  TAttributeArrayContainer<UE::Math::TVector<float>_> *this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar1;
  
  TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<UE::Math::TVector<float>_> *)
            ((longlong)param_1 * 0x20 + (longlong)FVar1);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  *(undefined8 *)&(this_00->DefaultValue).field0_0x0 =
       *(undefined8 *)&(this->DefaultValue).field0_0x0;
  (this_00->DefaultValue).field0_0x0._s_0.Z = (this->DefaultValue).field0_0x0._s_0.Z;
  TAttributeArrayContainer<UE::Math::TVector<float>_>::Initialize
            (this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367c000

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::InsertIndex
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  TAttributeArrayContainer<FName> *this_00;
  ForElementType<TAttributeArrayContainer<FName>_> FVar1;
  
  TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<FName> *)((longlong)param_1 * 0x20 + (longlong)FVar1);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  this_00->DefaultValue = this->DefaultValue;
  TAttributeArrayContainer<FName>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// InsertIndex @ 14367c080

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::InsertIndex
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  TAttributeArrayContainer<bool> *this_00;
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  
  TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  InsertUninitializedImpl(&this->ArrayForChannels,param_1,1);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  this_00 = (TAttributeArrayContainer<bool> *)((longlong)FVar1 + (longlong)param_1 * 0x18);
  (this_00->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Chunks).ArrayNum = 0;
  (this_00->Chunks).ArrayMax = 0;
  this_00->NumElements = 0;
  this_00->DefaultValue = this->DefaultValue;
  TAttributeArrayContainer<bool>::Initialize(this_00,(int)this->_padding_,&this->DefaultValue);
  return;
}

// Remap @ 143682fa0

void __thiscall
TMeshUnboundedAttributeArraySet<int>::Remap
          (TMeshUnboundedAttributeArraySet<int> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined4 *puVar1;
  ForElementType<TAttributeArrayContainer<int>_> FVar2;
  int iVar3;
  ForElementType<TAttributeArrayContainer<int>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  FVar2 = (ForElementType<TAttributeArrayContainer<int>_>)
          ((longlong)this_00 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TAttributeArrayContainer<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == FVar2) break;
    TAttributeArrayContainer<int>::Remap
              ((TAttributeArrayContainer<int> *)this_00,param_1,&this->DefaultValue);
    puVar1 = (undefined4 *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TAttributeArrayContainer<int>_>)((longlong)this_00 + 0x18);
    *(undefined4 *)&this->_padding_ = *puVar1;
  }
  return;
}

// Remap @ 143683030

void __thiscall
TMeshUnboundedAttributeArraySet<float>::Remap
          (TMeshUnboundedAttributeArraySet<float> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined4 *puVar1;
  ForElementType<TAttributeArrayContainer<float>_> FVar2;
  int iVar3;
  ForElementType<TAttributeArrayContainer<float>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  FVar2 = (ForElementType<TAttributeArrayContainer<float>_>)
          ((longlong)this_00 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TAttributeArrayContainer<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == FVar2) break;
    TAttributeArrayContainer<float>::Remap
              ((TAttributeArrayContainer<float> *)this_00,param_1,&this->DefaultValue);
    puVar1 = (undefined4 *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TAttributeArrayContainer<float>_>)((longlong)this_00 + 0x18);
    *(undefined4 *)&this->_padding_ = *puVar1;
  }
  return;
}

// Remap @ 1436830c0

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::Remap
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar3;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
          ((longlong)iVar2 * 0x80 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TAttributeArrayContainer<UE::Math::TTransform<double>_>::Remap
              ((TAttributeArrayContainer<UE::Math::TTransform<double>_> *)this_00,param_1,
               &this->DefaultValue);
    puVar1 = (undefined4 *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              ((longlong)this_00 + 0x80);
    *(undefined4 *)&this->_padding_ = *puVar1;
  }
  return;
}

// Remap @ 143683160

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::Remap
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar3;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
          ((longlong)iVar2 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TAttributeArrayContainer<UE::Math::TVector2<float>_>::Remap
              ((TAttributeArrayContainer<UE::Math::TVector2<float>_> *)this_00,param_1,
               &this->DefaultValue);
    puVar1 = (undefined4 *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              ((longlong)this_00 + 0x20);
    *(undefined4 *)&this->_padding_ = *puVar1;
  }
  return;
}

// Remap @ 1436831f0

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::Remap
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar3;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
          ((longlong)iVar2 * 0x30 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TAttributeArrayContainer<UE::Math::TVector4<float>_>::Remap
              ((TAttributeArrayContainer<UE::Math::TVector4<float>_> *)this_00,param_1,
               &this->DefaultValue);
    puVar1 = (undefined4 *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              ((longlong)this_00 + 0x30);
    *(undefined4 *)&this->_padding_ = *puVar1;
  }
  return;
}

// Remap @ 143683280

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::Remap
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar3;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
          ((longlong)iVar2 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TAttributeArrayContainer<UE::Math::TVector<float>_>::Remap
              ((TAttributeArrayContainer<UE::Math::TVector<float>_> *)this_00,param_1,
               &this->DefaultValue);
    puVar1 = (undefined4 *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              ((longlong)this_00 + 0x20);
    *(undefined4 *)&this->_padding_ = *puVar1;
  }
  return;
}

// Remap @ 143683310

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::Remap
          (TMeshUnboundedAttributeArraySet<FName> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<FName>_> this_00;
  ForElementType<TAttributeArrayContainer<FName>_> FVar3;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  FVar3 = (ForElementType<TAttributeArrayContainer<FName>_>)
          ((longlong)iVar2 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == FVar3) break;
    TAttributeArrayContainer<FName>::Remap
              ((TAttributeArrayContainer<FName> *)this_00,param_1,&this->DefaultValue);
    puVar1 = (undefined4 *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TAttributeArrayContainer<FName>_>)((longlong)this_00 + 0x20);
    *(undefined4 *)&this->_padding_ = *puVar1;
  }
  return;
}

// Remap @ 1436833a0

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::Remap
          (TMeshUnboundedAttributeArraySet<bool> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined4 *puVar1;
  ForElementType<TAttributeArrayContainer<bool>_> FVar2;
  int iVar3;
  ForElementType<TAttributeArrayContainer<bool>_> this_00;
  undefined1 local_res8 [8];
  
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar3 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  FVar2 = (ForElementType<TAttributeArrayContainer<bool>_>)
          ((longlong)this_00 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TAttributeArrayContainer<bool>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == FVar2) break;
    TAttributeArrayContainer<bool>::Remap
              ((TAttributeArrayContainer<bool> *)this_00,param_1,&this->DefaultValue);
    puVar1 = (undefined4 *)((longlong)this_00 + 0x10);
    this_00 = (ForElementType<TAttributeArrayContainer<bool>_>)((longlong)this_00 + 0x18);
    *(undefined4 *)&this->_padding_ = *puVar1;
  }
  return;
}

// Remove @ 143685320

void __thiscall
TMeshUnboundedAttributeArraySet<int>::Remove(TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<TAttributeArrayContainer<int>_> FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<int>_>)((longlong)FVar7 + (longlong)iVar2 * 0x18)
  ;
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    uVar8 = param_1 >> 8;
    uVar6 = 0;
    if ((int)uVar8 < *(int *)((longlong)FVar7 + 8)) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)FVar7;
    FVar7 = (ForElementType<TAttributeArrayContainer<int>_>)((longlong)FVar7 + 0x18);
    *(undefined4 *)
     (lVar3 + 0x410 + ((longlong)(int)uVar8 * 0x306 + (ulonglong)(param_1 & 0xff)) * 4) = 0;
  }
  return;
}

// Remove @ 143685420

void __thiscall
TMeshUnboundedAttributeArraySet<float>::Remove
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<TAttributeArrayContainer<float>_> FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<float>_>)
          ((longlong)FVar7 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    uVar8 = param_1 >> 8;
    uVar6 = 0;
    if ((int)uVar8 < *(int *)((longlong)FVar7 + 8)) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)FVar7;
    FVar7 = (ForElementType<TAttributeArrayContainer<float>_>)((longlong)FVar7 + 0x18);
    *(undefined4 *)
     (lVar3 + 0x410 + ((longlong)(int)uVar8 * 0x306 + (ulonglong)(param_1 & 0xff)) * 4) = 0;
  }
  return;
}

// Remove @ 143685520

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::Remove
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
          ((longlong)iVar1 * 0x80 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    uVar8 = param_1 >> 8;
    uVar5 = 0;
    if ((int)uVar8 < *(int *)((longlong)FVar6 + 8)) {
      uVar5 = ~uVar8 >> 0x1f;
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
    lVar2 = *(longlong *)FVar6;
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            ((longlong)FVar6 + 0x80);
    *(undefined4 *)
     (lVar2 + 0x410 + ((longlong)(int)uVar8 * 0x306 + (ulonglong)(param_1 & 0xff)) * 4) = 0;
  }
  return;
}

// Remove @ 143685620

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::Remove
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
          ((longlong)iVar1 * 0x20 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    uVar8 = param_1 >> 8;
    uVar5 = 0;
    if ((int)uVar8 < *(int *)((longlong)FVar6 + 8)) {
      uVar5 = ~uVar8 >> 0x1f;
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
    lVar2 = *(longlong *)FVar6;
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            ((longlong)FVar6 + 0x20);
    *(undefined4 *)
     (lVar2 + 0x410 + ((longlong)(int)uVar8 * 0x306 + (ulonglong)(param_1 & 0xff)) * 4) = 0;
  }
  return;
}

// Remove @ 143685720

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::Remove
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
          ((longlong)iVar1 * 0x30 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    uVar8 = param_1 >> 8;
    uVar5 = 0;
    if ((int)uVar8 < *(int *)((longlong)FVar6 + 8)) {
      uVar5 = ~uVar8 >> 0x1f;
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
    lVar2 = *(longlong *)FVar6;
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            ((longlong)FVar6 + 0x30);
    *(undefined4 *)
     (lVar2 + 0x410 + ((longlong)(int)uVar8 * 0x306 + (ulonglong)(param_1 & 0xff)) * 4) = 0;
  }
  return;
}

// Remove @ 143685820

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::Remove
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
          ((longlong)iVar1 * 0x20 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    uVar8 = param_1 >> 8;
    uVar5 = 0;
    if ((int)uVar8 < *(int *)((longlong)FVar6 + 8)) {
      uVar5 = ~uVar8 >> 0x1f;
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
    lVar2 = *(longlong *)FVar6;
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            ((longlong)FVar6 + 0x20);
    *(undefined4 *)
     (lVar2 + 0x410 + ((longlong)(int)uVar8 * 0x306 + (ulonglong)(param_1 & 0xff)) * 4) = 0;
  }
  return;
}

// Remove @ 143685920

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::Remove
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<TAttributeArrayContainer<FName>_> FVar6;
  ForElementType<TAttributeArrayContainer<FName>_> FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  FVar7 = (ForElementType<TAttributeArrayContainer<FName>_>)
          ((longlong)iVar1 * 0x20 + (longlong)FVar6);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar6 == FVar7) break;
    uVar8 = param_1 >> 8;
    uVar5 = 0;
    if ((int)uVar8 < *(int *)((longlong)FVar6 + 8)) {
      uVar5 = ~uVar8 >> 0x1f;
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
    lVar2 = *(longlong *)FVar6;
    FVar6 = (ForElementType<TAttributeArrayContainer<FName>_>)((longlong)FVar6 + 0x20);
    *(undefined4 *)
     (lVar2 + 0x410 + ((longlong)(int)uVar8 * 0x306 + (ulonglong)(param_1 & 0xff)) * 4) = 0;
  }
  return;
}

// Remove @ 143685a20

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::Remove
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<TAttributeArrayContainer<bool>_> FVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  FVar7 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (FVar7 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar7 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<bool>_>)
          ((longlong)FVar7 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TAttributeArrayContainer<bool>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    uVar8 = param_1 >> 8;
    uVar6 = 0;
    if ((int)uVar8 < *(int *)((longlong)FVar7 + 8)) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)FVar7;
    FVar7 = (ForElementType<TAttributeArrayContainer<bool>_>)((longlong)FVar7 + 0x18);
    *(undefined4 *)
     (lVar3 + 0x410 + ((longlong)(int)uVar8 * 0x306 + (ulonglong)(param_1 & 0xff)) * 4) = 0;
  }
  return;
}

// RemoveChannel @ 143687660

void __thiscall
TMeshUnboundedAttributeArraySet<int>::RemoveChannel
          (TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  int *piVar1;
  undefined8 *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<int>_> FVar6;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)FVar6 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<int>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)((uchar *)((longlong)FVar6 + 8) + (longlong)param_1 * 0x18));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 3,(longlong)iVar5 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687740

void __thiscall
TMeshUnboundedAttributeArraySet<float>::RemoveChannel
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  int *piVar1;
  undefined8 *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<float>_> FVar6;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)FVar6 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<float>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)((uchar *)((longlong)FVar6 + 8) + (longlong)param_1 * 0x18));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 3,(longlong)iVar5 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687820

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::RemoveChannel
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x80 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 7);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
            (0x80,0x10,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum
             ,&(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687910

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::RemoveChannel
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x20 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar5 << 5);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
            (0x20,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 1436879f0

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::RemoveChannel
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x30 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 6,(longlong)iVar5 * 0x30);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
            (0x30,0x10,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum
             ,&(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687ae0

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::RemoveChannel
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x20 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar5 << 5);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
            (0x20,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687bc0

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::RemoveChannel
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<FName>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x20 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<FName>::FChunk,int>((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar5 << 5);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
            (0x20,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveChannel @ 143687ca0

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::RemoveChannel
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  int *piVar1;
  undefined8 *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<bool>_> FVar6;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)FVar6 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)((uchar *)((longlong)FVar6 + 8) + (longlong)param_1 * 0x18));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 3,(longlong)iVar5 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688480

void __thiscall
TMeshUnboundedAttributeArraySet<int>::RemoveIndex
          (TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  int *piVar1;
  undefined8 *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<int>_> FVar6;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)FVar6 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<int>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)((uchar *)((longlong)FVar6 + 8) + (longlong)param_1 * 0x18));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 3,(longlong)iVar5 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688560

void __thiscall
TMeshUnboundedAttributeArraySet<float>::RemoveIndex
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  int *piVar1;
  undefined8 *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<float>_> FVar6;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)FVar6 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<float>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)((uchar *)((longlong)FVar6 + 8) + (longlong)param_1 * 0x18));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 3,(longlong)iVar5 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688640

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::RemoveIndex
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x80 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 7);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
            (0x80,0x10,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum
             ,&(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688730

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::RemoveIndex
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x20 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar5 << 5);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
            (0x20,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688810

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::RemoveIndex
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x30 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 6,(longlong)iVar5 * 0x30);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
            (0x30,0x10,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum
             ,&(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688900

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::RemoveIndex
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x20 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar5 << 5);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
            (0x20,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 1436889e0

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::RemoveIndex
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<FName>_> FVar6;
  undefined8 *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)param_1 * 0x20 + (longlong)FVar6);
  DestructItems<TAttributeArrayContainer<FName>::FChunk,int>((FChunk *)*_Dst,*(int *)(_Dst + 1));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar5 << 5);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
            (0x20,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// RemoveIndex @ 143688ac0

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::RemoveIndex
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  int *piVar1;
  undefined8 *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<TAttributeArrayContainer<bool>_> FVar6;
  
  uVar4 = 0;
  if (param_1 < (this->ArrayForChannels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar6 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  _Dst = (undefined8 *)((longlong)FVar6 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
            ((FChunk *)*_Dst,*(int *)((uchar *)((longlong)FVar6 + 8) + (longlong)param_1 * 0x18));
  if ((void *)*_Dst != (void *)0x0) {
    FMemory::Free((void *)*_Dst);
  }
  iVar5 = (this->ArrayForChannels).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 3,(longlong)iVar5 * 0x18);
  }
  piVar1 = &(this->ArrayForChannels).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
            (0x18,8,&(this->ArrayForChannels).AllocatorInstance,(this->ArrayForChannels).ArrayNum,
             &(this->ArrayForChannels).ArrayMax);
  return;
}

// Serialize @ 14368b230

void __thiscall
TMeshUnboundedAttributeArraySet<int>::Serialize
          (TMeshUnboundedAttributeArraySet<int> *this,FArchive *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  
  plVar1 = &this->_padding_;
  puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
    }
  }
  else {
    *(undefined4 *)plVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->ArrayForChannels);
  piVar2 = &this->DefaultValue;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)((longlong)&this->_padding_ + 4);
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar6 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar3 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014368b330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar3);
  return;
}

// Serialize @ 14368b360

void __thiscall
TMeshUnboundedAttributeArraySet<float>::Serialize
          (TMeshUnboundedAttributeArraySet<float> *this,FArchive *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  uint *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  uint *puVar6;
  
  plVar1 = &this->_padding_;
  puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
    }
  }
  else {
    *(undefined4 *)plVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->ArrayForChannels);
  pfVar2 = &this->DefaultValue;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uint *)((longlong)&this->_padding_ + 4);
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar6 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar3 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014368b460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar3);
  return;
}

// Serialize @ 14368b490

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::Serialize
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,FArchive *param_1)

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
  Serialize<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
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
                    /* WARNING: Could not recover jumptable at 0x00014368b55e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return;
}

// Serialize @ 14368b580

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::Serialize
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,FArchive *param_1)

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
  Serialize<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
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
                    /* WARNING: Could not recover jumptable at 0x00014368b64b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return;
}

// Serialize @ 14368b670

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::Serialize
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,FArchive *param_1)

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
  Serialize<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
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
                    /* WARNING: Could not recover jumptable at 0x00014368b73b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return;
}

// Serialize @ 14368b760

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::Serialize
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,FArchive *param_1)

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
  Serialize<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
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
                    /* WARNING: Could not recover jumptable at 0x00014368b82b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return;
}

// Serialize @ 14368b850

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::Serialize
          (TMeshUnboundedAttributeArraySet<FName> *this,FArchive *param_1)

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
  Serialize<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->ArrayForChannels);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->DefaultValue);
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar4 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014368b91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return;
}

// Serialize @ 14368b940

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::Serialize
          (TMeshUnboundedAttributeArraySet<bool> *this,FArchive *param_1)

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
  Serialize<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->ArrayForChannels);
  ::operator<<(param_1,&this->DefaultValue);
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar4 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014368ba0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return;
}

// SetNumChannels @ 143692ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<int>::SetNumChannels
          (TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<int>_> FVar7;
  uint uVar8;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
        FVar7 = FVar1;
      }
      *(undefined8 *)((longlong)FVar7 + (longlong)iVar4 * 0x18) = 0;
      this_00 = (TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar7 + (longlong)iVar4 * 0x18);
      this_00->ArrayMax = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(int *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = this->DefaultValue;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<int>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,&this_00->ArrayMax);
      }
      TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 143693250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<float>::SetNumChannels
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<float>_> FVar7;
  uint uVar8;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
        FVar7 = FVar1;
      }
      *(undefined8 *)((longlong)FVar7 + (longlong)iVar4 * 0x18) = 0;
      this_00 = (TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar7 + (longlong)iVar4 * 0x18);
      this_00->ArrayMax = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(float *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = this->DefaultValue;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<float>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,&this_00->ArrayMax);
      }
      TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 1436934b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::SetNumChannels
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar8;
  uint uVar9;
  TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
  *this_00;
  
  iVar5 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar9 = iVar5 - param_1;
    if (((int)(uVar9 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar9);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                (0x80,0x10,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar5 < param_1) {
      piVar7 = &(this->ArrayForChannels).ArrayMax;
      iVar5 = (this->ArrayForChannels).ArrayNum;
      if (iVar5 == *piVar7) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                          (0x1080,&(this->ArrayForChannels).AllocatorInstance,piVar7);
      }
      (this->ArrayForChannels).ArrayNum = iVar5 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
        FVar8 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
                 *)((longlong)iVar5 * 0x80 + (longlong)FVar8);
      piVar7 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar7 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      dVar3 = (this->DefaultValue).Rotation.XY.m128d_f64[1];
      this_00[2].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Rotation.XY.m128d_f64[0];
      *(double *)&this_00[2].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Rotation.ZW.m128d_f64[1];
      this_00[3].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Rotation.ZW.m128d_f64[0];
      *(double *)&this_00[3].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Translation.XY.m128d_f64[1];
      this_00[4].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Translation.XY.m128d_f64[0];
      *(double *)&this_00[4].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Translation.ZW.m128d_f64[1];
      this_00[5].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Translation.ZW.m128d_f64[0];
      *(double *)&this_00[5].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Scale3D.XY.m128d_f64[1];
      this_00[6].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Scale3D.XY.m128d_f64[0];
      *(double *)&this_00[6].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Scale3D.ZW.m128d_f64[1];
      this_00[7].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Scale3D.ZW.m128d_f64[0];
      *(double *)&this_00[7].ArrayNum = dVar3;
      iVar5 = (int)this->_padding_;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = (int)(iVar5 + 0xffU) >> 8;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar7 != uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar9,(ForAnyElementType *)this_00,0,piVar7);
      }
      TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::SetNum(this_00,uVar9,Default);
      if (0 < (int)uVar9) {
        uVar6 = this_00->ArrayNum - 1;
        uVar9 = 0;
        if ((int)uVar6 < this_00->ArrayNum) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar5 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar5;
      iVar5 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 143693770

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar7;
  uint uVar8;
  TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
  *this_00;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                (0x20,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                          (0x820,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
        FVar7 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
                 *)((longlong)iVar4 * 0x20 + (longlong)FVar7);
      piVar6 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar6 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(TVector2<float>_u_0 *)((longlong)&this_00[1].AllocatorInstance.Data + 4) =
           (this->DefaultValue).field0_0x0;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar6 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,piVar6);
      }
      TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::SetNum(this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 1436939d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::SetNumChannels
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar8;
  uint uVar9;
  TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
  *this_00;
  
  iVar5 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar9 = iVar5 - param_1;
    if (((int)(uVar9 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar9);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                (0x30,0x10,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar5 < param_1) {
      piVar7 = &(this->ArrayForChannels).ArrayMax;
      iVar5 = (this->ArrayForChannels).ArrayNum;
      if (iVar5 == *piVar7) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                          (0x1030,&(this->ArrayForChannels).AllocatorInstance,piVar7);
      }
      (this->ArrayForChannels).ArrayNum = iVar5 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
        FVar8 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
                 *)((longlong)iVar5 * 0x30 + (longlong)FVar8);
      piVar7 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar7 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      uVar3 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
      this_00[2].AllocatorInstance.Data =
           *(FScriptContainerElement **)&(this->DefaultValue).field0_0x0;
      this_00[2].ArrayNum = (int)uVar3;
      this_00[2].ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      iVar5 = (int)this->_padding_;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = (int)(iVar5 + 0xffU) >> 8;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar7 != uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar9,(ForAnyElementType *)this_00,0,piVar7);
      }
      TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::SetNum(this_00,uVar9,Default);
      if (0 < (int)uVar9) {
        uVar6 = this_00->ArrayNum - 1;
        uVar9 = 0;
        if ((int)uVar6 < this_00->ArrayNum) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar5 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar5;
      iVar5 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 143693c40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::SetNumChannels
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar7;
  uint uVar8;
  TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
  *this_00;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                (0x20,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                          (0x820,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
        FVar7 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
                 *)((longlong)iVar4 * 0x20 + (longlong)FVar7);
      piVar6 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar6 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(undefined8 *)((longlong)&this_00[1].AllocatorInstance.Data + 4) =
           *(undefined8 *)&(this->DefaultValue).field0_0x0;
      this_00[1].ArrayMax = (int)(this->DefaultValue).field0_0x0._s_0.Z;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar6 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,piVar6);
      }
      TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::SetNum(this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 143693eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::SetNumChannels
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<FName>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<FName>_> FVar7;
  uint uVar8;
  TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                (0x20,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                          (0x820,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
        FVar7 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *)
                ((longlong)iVar4 * 0x20 + (longlong)FVar7);
      piVar6 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar6 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(FName *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = this->DefaultValue;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar6 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,piVar6);
      }
      TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumChannels @ 143694110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::SetNumChannels
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<bool>_> FVar7;
  uint uVar8;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
        FVar7 = FVar1;
      }
      *(undefined8 *)((longlong)FVar7 + (longlong)iVar4 * 0x18) = 0;
      this_00 = (TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar7 + (longlong)iVar4 * 0x18);
      this_00->ArrayMax = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(bool *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = this->DefaultValue;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,&this_00->ArrayMax);
      }
      TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumElements @ 143694ab0

void __thiscall
TMeshUnboundedAttributeArraySet<int>::SetNumElements
          (TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<int>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<int>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    TAttributeArrayContainer<int>::SetNum
              ((TAttributeArrayContainer<int> *)this_00,param_1,&this->DefaultValue);
    this_00 = (ForElementType<TAttributeArrayContainer<int>_>)((longlong)this_00 + 0x18);
  }
  return;
}

// SetNumElements @ 143694b40

void __thiscall
TMeshUnboundedAttributeArraySet<float>::SetNumElements
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<float>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<float>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<float>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    TAttributeArrayContainer<float>::SetNum
              ((TAttributeArrayContainer<float> *)this_00,param_1,&this->DefaultValue);
    this_00 = (ForElementType<TAttributeArrayContainer<float>_>)((longlong)this_00 + 0x18);
  }
  return;
}

// SetNumElements @ 143694bd0

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::SetNumElements
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  int iVar1;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar2;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
  }
  FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
          ((longlong)iVar1 * 0x80 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar2) break;
    TAttributeArrayContainer<UE::Math::TTransform<double>_>::SetNum
              ((TAttributeArrayContainer<UE::Math::TTransform<double>_> *)this_00,param_1,
               &this->DefaultValue);
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              ((longlong)this_00 + 0x80);
  }
  return;
}

// SetNumElements @ 143694c70

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::SetNumElements
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  int iVar1;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar2;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
          ((longlong)iVar1 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar2) break;
    TAttributeArrayContainer<UE::Math::TVector2<float>_>::SetNum
              ((TAttributeArrayContainer<UE::Math::TVector2<float>_> *)this_00,param_1,
               &this->DefaultValue);
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              ((longlong)this_00 + 0x20);
  }
  return;
}

// SetNumElements @ 143694d00

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::SetNumElements
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  int iVar1;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar2;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
          ((longlong)iVar1 * 0x30 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar2) break;
    TAttributeArrayContainer<UE::Math::TVector4<float>_>::SetNum
              ((TAttributeArrayContainer<UE::Math::TVector4<float>_> *)this_00,param_1,
               &this->DefaultValue);
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              ((longlong)this_00 + 0x30);
  }
  return;
}

// SetNumElements @ 143694d90

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::SetNumElements
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  int iVar1;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> this_00;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar2;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
  }
  FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
          ((longlong)iVar1 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<UE::Math::TVector<float>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == FVar2) break;
    TAttributeArrayContainer<UE::Math::TVector<float>_>::SetNum
              ((TAttributeArrayContainer<UE::Math::TVector<float>_> *)this_00,param_1,
               &this->DefaultValue);
    this_00 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              ((longlong)this_00 + 0x20);
  }
  return;
}

// SetNumElements @ 143694e20

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::SetNumElements
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  int iVar1;
  ForElementType<TAttributeArrayContainer<FName>_> this_00;
  ForElementType<TAttributeArrayContainer<FName>_> FVar2;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar1 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  FVar2 = (ForElementType<TAttributeArrayContainer<FName>_>)
          ((longlong)iVar1 * 0x20 + (longlong)this_00);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TAttributeArrayContainer<FName>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar2) break;
    TAttributeArrayContainer<FName>::SetNum
              ((TAttributeArrayContainer<FName> *)this_00,param_1,&this->DefaultValue);
    this_00 = (ForElementType<TAttributeArrayContainer<FName>_>)((longlong)this_00 + 0x20);
  }
  return;
}

// SetNumElements @ 143694eb0

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::SetNumElements
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<bool>_> this_00;
  undefined1 local_res10 [8];
  
  *(int *)&this->_padding_ = param_1;
  this_00 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  iVar2 = (this->ArrayForChannels).ArrayNum;
  if (this_00 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    this_00 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  FVar1 = (ForElementType<TAttributeArrayContainer<bool>_>)
          ((longlong)this_00 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->ArrayForChannels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TAttributeArrayContainer<bool>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == FVar1) break;
    TAttributeArrayContainer<bool>::SetNum
              ((TAttributeArrayContainer<bool> *)this_00,param_1,&this->DefaultValue);
    this_00 = (ForElementType<TAttributeArrayContainer<bool>_>)((longlong)this_00 + 0x18);
  }
  return;
}

// SetNumIndices @ 1436951e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<int>::SetNumIndices
          (TMeshUnboundedAttributeArraySet<int> *this,int param_1)

{
  TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<int>_> FVar7;
  uint uVar8;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
        FVar7 = FVar1;
      }
      *(undefined8 *)((longlong)FVar7 + (longlong)iVar4 * 0x18) = 0;
      this_00 = (TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar7 + (longlong)iVar4 * 0x18);
      this_00->ArrayMax = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(int *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = this->DefaultValue;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<int>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,&this_00->ArrayMax);
      }
      TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 1436951f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<float>::SetNumIndices
          (TMeshUnboundedAttributeArraySet<float> *this,int param_1)

{
  TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<float>_> FVar7;
  uint uVar8;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
        FVar7 = FVar1;
      }
      *(undefined8 *)((longlong)FVar7 + (longlong)iVar4 * 0x18) = 0;
      this_00 = (TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar7 + (longlong)iVar4 * 0x18);
      this_00->ArrayMax = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(float *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = this->DefaultValue;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<float>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,&this_00->ArrayMax);
      }
      TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::SetNumIndices
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar8;
  uint uVar9;
  TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
  *this_00;
  
  iVar5 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar9 = iVar5 - param_1;
    if (((int)(uVar9 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar9);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                (0x80,0x10,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar5 < param_1) {
      piVar7 = &(this->ArrayForChannels).ArrayMax;
      iVar5 = (this->ArrayForChannels).ArrayNum;
      if (iVar5 == *piVar7) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                          (0x1080,&(this->ArrayForChannels).AllocatorInstance,piVar7);
      }
      (this->ArrayForChannels).ArrayNum = iVar5 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
              &this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
        FVar8 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
                 *)((longlong)iVar5 * 0x80 + (longlong)FVar8);
      piVar7 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar7 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      dVar3 = (this->DefaultValue).Rotation.XY.m128d_f64[1];
      this_00[2].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Rotation.XY.m128d_f64[0];
      *(double *)&this_00[2].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Rotation.ZW.m128d_f64[1];
      this_00[3].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Rotation.ZW.m128d_f64[0];
      *(double *)&this_00[3].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Translation.XY.m128d_f64[1];
      this_00[4].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Translation.XY.m128d_f64[0];
      *(double *)&this_00[4].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Translation.ZW.m128d_f64[1];
      this_00[5].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Translation.ZW.m128d_f64[0];
      *(double *)&this_00[5].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Scale3D.XY.m128d_f64[1];
      this_00[6].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Scale3D.XY.m128d_f64[0];
      *(double *)&this_00[6].ArrayNum = dVar3;
      dVar3 = (this->DefaultValue).Scale3D.ZW.m128d_f64[1];
      this_00[7].AllocatorInstance.Data =
           (FScriptContainerElement *)(this->DefaultValue).Scale3D.ZW.m128d_f64[0];
      *(double *)&this_00[7].ArrayNum = dVar3;
      iVar5 = (int)this->_padding_;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = (int)(iVar5 + 0xffU) >> 8;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar7 != uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar9,(ForAnyElementType *)this_00,0,piVar7);
      }
      TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::SetNum(this_00,uVar9,Default);
      if (0 < (int)uVar9) {
        uVar6 = this_00->ArrayNum - 1;
        uVar9 = 0;
        if ((int)uVar6 < this_00->ArrayNum) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar5 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar5;
      iVar5 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::SetNumIndices
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar7;
  uint uVar8;
  TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
  *this_00;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                (0x20,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                          (0x820,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
              &this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
        FVar7 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
                 *)((longlong)iVar4 * 0x20 + (longlong)FVar7);
      piVar6 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar6 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(TVector2<float>_u_0 *)((longlong)&this_00[1].AllocatorInstance.Data + 4) =
           (this->DefaultValue).field0_0x0;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar6 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,piVar6);
      }
      TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::SetNum(this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::SetNumIndices
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar8;
  uint uVar9;
  TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
  *this_00;
  
  iVar5 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar5) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar9 = iVar5 - param_1;
    if (((int)(uVar9 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar9);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                (0x30,0x10,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar5 < param_1) {
      piVar7 = &(this->ArrayForChannels).ArrayMax;
      iVar5 = (this->ArrayForChannels).ArrayNum;
      if (iVar5 == *piVar7) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                          (0x1030,&(this->ArrayForChannels).AllocatorInstance,piVar7);
      }
      (this->ArrayForChannels).ArrayNum = iVar5 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
              &this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
        FVar8 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
                 *)((longlong)iVar5 * 0x30 + (longlong)FVar8);
      piVar7 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar7 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      uVar3 = *(undefined8 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
      this_00[2].AllocatorInstance.Data =
           *(FScriptContainerElement **)&(this->DefaultValue).field0_0x0;
      this_00[2].ArrayNum = (int)uVar3;
      this_00[2].ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      iVar5 = (int)this->_padding_;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = (int)(iVar5 + 0xffU) >> 8;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar7 != uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar9,(ForAnyElementType *)this_00,0,piVar7);
      }
      TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::SetNum(this_00,uVar9,Default);
      if (0 < (int)uVar9) {
        uVar6 = this_00->ArrayNum - 1;
        uVar9 = 0;
        if ((int)uVar6 < this_00->ArrayNum) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar5 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar5;
      iVar5 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::SetNumIndices
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar7;
  uint uVar8;
  TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
  *this_00;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                (0x20,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                          (0x820,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
              &this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
        FVar7 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
                 *)((longlong)iVar4 * 0x20 + (longlong)FVar7);
      piVar6 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar6 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(undefined8 *)((longlong)&this_00[1].AllocatorInstance.Data + 4) =
           *(undefined8 *)&(this->DefaultValue).field0_0x0;
      this_00[1].ArrayMax = (int)(this->DefaultValue).field0_0x0._s_0.Z;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar6 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,piVar6);
      }
      TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::SetNum(this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<FName>::SetNumIndices
          (TMeshUnboundedAttributeArraySet<FName> *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<FName>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<FName>_> FVar7;
  uint uVar8;
  TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                (0x20,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                          (0x820,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
        FVar7 = FVar1;
      }
      this_00 = (TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *)
                ((longlong)iVar4 * 0x20 + (longlong)FVar7);
      piVar6 = &this_00->ArrayMax;
      (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar6 = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(FName *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = this->DefaultValue;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (*piVar6 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,piVar6);
      }
      TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

// SetNumIndices @ 143695250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMeshUnboundedAttributeArraySet<bool>::SetNumIndices
          (TMeshUnboundedAttributeArraySet<bool> *this,int param_1)

{
  TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ForElementType<TAttributeArrayContainer<bool>_> FVar7;
  uint uVar8;
  
  iVar4 = (this->ArrayForChannels).ArrayNum;
  if (param_1 < iVar4) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    uVar8 = iVar4 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 != 0) {
      TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->ArrayForChannels,param_1,uVar8);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                (0x18,8,&(this->ArrayForChannels).AllocatorInstance,
                 (this->ArrayForChannels).ArrayNum,&(this->ArrayForChannels).ArrayMax);
      return;
    }
  }
  else {
    while (iVar4 < param_1) {
      piVar6 = &(this->ArrayForChannels).ArrayMax;
      iVar4 = (this->ArrayForChannels).ArrayNum;
      if (iVar4 == *piVar6) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                          (0x818,&(this->ArrayForChannels).AllocatorInstance,piVar6);
      }
      (this->ArrayForChannels).ArrayNum = iVar4 + 1;
      FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
      if (FVar1 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
        FVar7 = FVar1;
      }
      *(undefined8 *)((longlong)FVar7 + (longlong)iVar4 * 0x18) = 0;
      this_00 = (TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar7 + (longlong)iVar4 * 0x18);
      this_00->ArrayMax = 0;
      this_00->ArrayNum = 0;
      *(undefined4 *)&this_00[1].AllocatorInstance.Data = 0;
      *(bool *)((longlong)&this_00[1].AllocatorInstance.Data + 4) = this->DefaultValue;
      iVar4 = (int)this->_padding_;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\AttributeArrayContainer.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (int)(iVar4 + 0xffU) >> 8;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
                ((FChunk *)(this_00->AllocatorInstance).Data,this_00->ArrayNum);
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,uVar8,(ForAnyElementType *)this_00,0,&this_00->ArrayMax);
      }
      TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,uVar8,Default);
      if (0 < (int)uVar8) {
        uVar5 = this_00->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 0xc18 + -8) =
             (iVar4 + 0xffU & 0xff) + 1;
      }
      *(int *)&this_00[1].AllocatorInstance.Data = iVar4;
      iVar4 = (this->ArrayForChannels).ArrayNum;
    }
  }
  return;
}

