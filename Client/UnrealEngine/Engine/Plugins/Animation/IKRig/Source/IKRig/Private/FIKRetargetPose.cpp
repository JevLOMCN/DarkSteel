// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticStruct @ 14def9230

UScriptStruct * __cdecl FIKRetargetPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPose.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPose,(UObject *)pUVar1,
                         L"IKRetargetPose");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPose.OuterSingleton;
}

// FIKRetargetPose @ 14df16d30

FIKRetargetPose * __thiscall
FIKRetargetPose::FIKRetargetPose(FIKRetargetPose *this,FIKRetargetPose *param_1)

{
  TMap<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
  *pTVar1;
  TMap<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  double dVar4;
  
  dVar4 = (param_1->RootTranslationOffset).field0_0x0._s_0.Y;
  pTVar1 = &this->BoneRotationOffsets;
  pTVar2 = &param_1->BoneRotationOffsets;
  (this->RootTranslationOffset).field0_0x0._s_0.X =
       (param_1->RootTranslationOffset).field0_0x0._s_0.X;
  (this->RootTranslationOffset).field0_0x0._s_0.Y = dVar4;
  (this->RootTranslationOffset).field0_0x0._s_0.Z =
       (param_1->RootTranslationOffset).field0_0x0._s_0.Z;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->BoneRotationOffsets).field_0x8 = 0;
  *(undefined8 *)&(this->BoneRotationOffsets).field_0x20 = 0;
  *(undefined4 *)&(this->BoneRotationOffsets).field_0x28 = 0;
  *(undefined4 *)&(this->BoneRotationOffsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneRotationOffsets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneRotationOffsets).field_0x34 = 0;
  *(undefined8 *)&(this->BoneRotationOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->BoneRotationOffsets).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->BoneRotationOffsets).field_0x10;
    *(undefined4 *)&(this->BoneRotationOffsets).field_0x8 =
         *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x8;
    _Src = &(param_1->BoneRotationOffsets).field_0x10;
    *(undefined4 *)&(this->BoneRotationOffsets).field_0xc =
         *(undefined4 *)&(param_1->BoneRotationOffsets).field_0xc;
    *(undefined8 *)&(param_1->BoneRotationOffsets).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->BoneRotationOffsets).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->BoneRotationOffsets).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->BoneRotationOffsets).field_0x20 =
           *(undefined8 *)&(param_1->BoneRotationOffsets).field_0x20;
      *(undefined8 *)&(param_1->BoneRotationOffsets).field_0x20 = 0;
      *(undefined4 *)&(this->BoneRotationOffsets).field_0x28 =
           *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x28;
      *(undefined4 *)&(this->BoneRotationOffsets).field_0x2c =
           *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x2c;
      *(undefined8 *)&(param_1->BoneRotationOffsets).field_0x28 = 0;
    }
    *(undefined4 *)&(this->BoneRotationOffsets).field_0x30 =
         *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x30;
    *(undefined4 *)&(this->BoneRotationOffsets).field_0x34 =
         *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x34;
    *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->BoneRotationOffsets).field_0x40 == 0) {
    *(undefined4 *)&(this->BoneRotationOffsets).field_0x38 =
         *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x38;
  }
  pvVar3 = *(void **)&(this->BoneRotationOffsets).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->BoneRotationOffsets).field_0x40 =
       *(undefined8 *)&(param_1->BoneRotationOffsets).field_0x40;
  *(undefined8 *)&(param_1->BoneRotationOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->BoneRotationOffsets).field_0x48 =
       *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x48;
  *(undefined4 *)&(param_1->BoneRotationOffsets).field_0x48 = 0;
  this->Version = param_1->Version;
  return this;
}

// AddToRootTranslationDelta @ 14df23b60

void __thiscall
FIKRetargetPose::AddToRootTranslationDelta(FIKRetargetPose *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  this->Version = this->Version + 1;
  (this->RootTranslationOffset).field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->RootTranslationOffset).field0_0x0._s_0.X;
  (this->RootTranslationOffset).field0_0x0._s_0.Y =
       (param_1->field0_0x0)._s_0.Y + (this->RootTranslationOffset).field0_0x0._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (this->RootTranslationOffset).field0_0x0._s_0.Z;
  (this->RootTranslationOffset).field0_0x0._s_0.X = 0.0;
  (this->RootTranslationOffset).field0_0x0._s_0.Y = 0.0;
  (this->RootTranslationOffset).field0_0x0._s_0.Z = dVar1 + dVar2;
  return;
}

// GetDeltaRotationForBone @ 14df37fc0

TQuat<double> * __thiscall
FIKRetargetPose::GetDeltaRotationForBone
          (FIKRetargetPose *this,TQuat<double> *__return_storage_ptr__,FName param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> *pTVar5;
  
  pTVar4 = TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
           ::Find((TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
                   *)&this->BoneRotationOffsets,param_1);
  pTVar5 = &UE::Math::TQuat<double>::Identity;
  if (pTVar4 != (TQuat<double> *)0x0) {
    pTVar5 = pTVar4;
  }
  dVar1 = pTVar5->Y;
  dVar2 = pTVar5->Z;
  dVar3 = pTVar5->W;
  __return_storage_ptr__->X = pTVar5->X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetRootTranslationDelta @ 14df3f080

TVector<double> * __thiscall
FIKRetargetPose::GetRootTranslationDelta
          (FIKRetargetPose *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->RootTranslationOffset).field0_0x0._s_0.Y;
  dVar1 = (this->RootTranslationOffset).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->RootTranslationOffset).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SetDeltaRotationForBone @ 14df545b0

void __thiscall
FIKRetargetPose::SetDeltaRotationForBone(FIKRetargetPose *this,FName param_1,TQuat<double> *param_2)

{
  double dVar1;
  TQuat<double> *pTVar2;
  TPairInitializer<FName_&,UE::Math::TQuat<double>_const_&> local_res8;
  TQuat<double> **local_18;
  TQuat<double> *local_10;
  
  this->Version = this->Version + 1;
  local_res8.Value = (TQuat<double> *)param_1;
  pTVar2 = TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
           ::Find((TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
                   *)&this->BoneRotationOffsets,param_1);
  if (pTVar2 == (TQuat<double> *)0x0) {
    local_18 = &local_res8.Value;
    local_10 = param_2;
    TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&,UE::Math::TQuat<double>_const_&>_>
              ((TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>
                *)&this->BoneRotationOffsets,&local_res8,(bool *)&local_18);
    return;
  }
  dVar1 = param_2->Y;
  pTVar2->X = param_2->X;
  pTVar2->Y = dVar1;
  dVar1 = param_2->W;
  pTVar2->Z = param_2->Z;
  pTVar2->W = dVar1;
  return;
}

// SetRootTranslationDelta @ 14df55b90

void __thiscall
FIKRetargetPose::SetRootTranslationDelta(FIKRetargetPose *this,TVector<double> *param_1)

{
  double dVar1;
  
  this->Version = this->Version + 1;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->RootTranslationOffset).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RootTranslationOffset).field0_0x0._s_0.Y = dVar1;
  (this->RootTranslationOffset).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->RootTranslationOffset).field0_0x0._s_0.X = 0.0;
  (this->RootTranslationOffset).field0_0x0._s_0.Y = 0.0;
  return;
}

// SortHierarchically @ 14df583c0

void __thiscall FIKRetargetPose::SortHierarchically(FIKRetargetPose *this,FIKRigSkeleton *param_1)

{
  FKeyComparisonClass<_public:_void___cdecl_FIKRetargetPose::SortHierarchically(FIKRigSkeleton_const_&)_::_2_::<lambda_1>_>
  local_res8 [4];
  FIKRigSkeleton local_78;
  
  FIKRigSkeleton::FIKRigSkeleton(&local_78,param_1);
  local_res8[0].Predicate.Predicate =
       (TDereferenceWrapper<FName,_public:_void___cdecl_FIKRetargetPose::SortHierarchically(FIKRigSkeleton_const_&)_::_2_::<lambda_1>_>
        )&local_78;
  TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>::FKeyComparisonClass<_FIKRetargetPose::SortHierarchically_::__l2::<lambda_1>_>_>
            ((TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>
              *)&this->BoneRotationOffsets,local_res8);
  FIKRigSkeleton::~FIKRigSkeleton(&local_78);
  return;
}

