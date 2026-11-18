// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 24

// ~FRigControlElement @ 14a225eb0

void __thiscall FRigControlElement::~FRigControlElement(FRigControlElement *this)

{
  *(undefined ***)this = &___7FRigControlElement__6B_;
  FRigControlSettings::~FRigControlSettings(&this->Settings);
  FRigMultiParentElement::~FRigMultiParentElement((FRigMultiParentElement *)this);
  return;
}

// operator= @ 14a229670

FRigControlElement * __thiscall
FRigControlElement::operator=(FRigControlElement *this,FRigControlElement *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  double dVar3;
  undefined7 uVar4;
  FRigCurrentAndInitialTransform *pFVar5;
  FRigCurrentAndInitialTransform *pFVar6;
  void *_Dst;
  void *_Src;
  
  FRigTransformElement::operator=((FRigTransformElement *)this,(FRigTransformElement *)param_1);
  if (this != param_1) {
    iVar2 = *(int *)&param_1->field_0x1d0;
    puVar1 = &this->field_0x1d4;
    _Src = *(void **)&param_1->field_0x1c0;
    *(int *)&this->field_0x1d0 = iVar2;
    if (_Src == (void *)0x0) {
      _Src = &param_1->field_0x120;
    }
    if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementParentConstraint>_>
                (0xa0,0x10,iVar2,*(int *)puVar1,
                 (ForElementType<FRigElementParentConstraint> *)&this->field_0x120,iVar2,
                 (int *)puVar1);
      if (iVar2 != 0) {
        _Dst = *(void **)&this->field_0x1c0;
        if (*(void **)&this->field_0x1c0 == (void *)0x0) {
          _Dst = &this->field_0x120;
        }
        memcpy(_Dst,_Src,(longlong)iVar2 * 0xa0);
      }
    }
  }
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&this->field_0x1e0,
              (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&param_1->field_0x1e0);
  FRigControlSettings::operator=(&this->Settings,&param_1->Settings);
  pFVar5 = GetOffsetTransform(param_1);
  pFVar6 = GetOffsetTransform(this);
  FRigCurrentAndInitialTransform::operator=(pFVar6,pFVar5);
  pFVar5 = GetShapeTransform(param_1);
  pFVar6 = GetShapeTransform(this);
  FRigCurrentAndInitialTransform::operator=(pFVar6,pFVar5);
  uVar4 = *(undefined7 *)&(param_1->PreferredEulerAngles).field_0x1;
  dVar3 = (param_1->PreferredEulerAngles).Current.field0_0x0._s_0.X;
  (this->PreferredEulerAngles).RotationOrder = (param_1->PreferredEulerAngles).RotationOrder;
  *(undefined7 *)&(this->PreferredEulerAngles).field_0x1 = uVar4;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->PreferredEulerAngles).Current.field0_0x0._s_0.Z;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.Y =
       (param_1->PreferredEulerAngles).Current.field0_0x0._s_0.Y;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.Z = dVar3;
  dVar3 = (param_1->PreferredEulerAngles).Initial.field0_0x0._s_0.Y;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.X =
       (param_1->PreferredEulerAngles).Initial.field0_0x0._s_0.X;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Y = dVar3;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Z =
       (param_1->PreferredEulerAngles).Initial.field0_0x0._s_0.Z;
  return this;
}

// GetDisplayName @ 14a262260

FName * __thiscall FRigControlElement::GetDisplayName(FRigControlElement *this)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = &(this->Settings).DisplayName;
  pFVar2 = (FName *)&this->field_0x14;
  if (*pFVar1 != (FName)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetElementTypeIndex @ 14a263470

int __thiscall FRigControlElement::GetElementTypeIndex(FRigControlElement *this)

{
  return ElementTypeIndex;
}

// GetNumTransforms @ 14a2663b0

int __thiscall FRigControlElement::GetNumTransforms(FRigControlElement *this)

{
  return 0xc;
}

// GetScriptStruct @ 14a26a850

UScriptStruct * __thiscall FRigControlElement::GetScriptStruct(FRigControlElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlElement,(UObject *)pUVar1,
                         L"RigControlElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton;
}

// StaticStruct @ 14a2c1640

UScriptStruct * __cdecl FRigControlElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlElement,(UObject *)pUVar1,
                         L"RigControlElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigControlElement.OuterSingleton;
}

// FRigControlElement @ 14a2d9c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlElement * __thiscall
FRigControlElement::FRigControlElement(FRigControlElement *this,URigHierarchy *param_1)

{
  undefined8 uVar1;
  
  FRigMultiParentElement::FRigMultiParentElement((FRigMultiParentElement *)this,param_1,Control);
  *(undefined ***)this = &___7FRigControlElement__6B_;
  FRigControlSettings::FRigControlSettings(&this->Settings);
  (this->PreferredEulerAngles).RotationOrder = YZX;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.Y = (double)uVar1;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Y = (double)uVar1;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->OffsetStorage).Current.Local.Storage = (TTransform<double> *)0x0;
  (this->OffsetStorage).Current.Global.Storage = (TTransform<double> *)0x0;
  (this->OffsetStorage).Initial.Local.Storage = (TTransform<double> *)0x0;
  (this->OffsetStorage).Initial.Global.Storage = (TTransform<double> *)0x0;
  (this->OffsetDirtyState).Current.Global.Storage = (bool *)0x0;
  (this->OffsetDirtyState).Current.Local.Storage = (bool *)0x0;
  (this->OffsetDirtyState).Initial.Global.Storage = (bool *)0x0;
  (this->OffsetDirtyState).Initial.Local.Storage = (bool *)0x0;
  (this->ShapeStorage).Current.Local.Storage = (TTransform<double> *)0x0;
  (this->ShapeStorage).Current.Global.Storage = (TTransform<double> *)0x0;
  (this->ShapeStorage).Initial.Local.Storage = (TTransform<double> *)0x0;
  (this->ShapeStorage).Initial.Global.Storage = (TTransform<double> *)0x0;
  (this->ShapeDirtyState).Current.Global.Storage = (bool *)0x0;
  (this->ShapeDirtyState).Current.Local.Storage = (bool *)0x0;
  (this->ShapeDirtyState).Initial.Global.Storage = (bool *)0x0;
  (this->ShapeDirtyState).Initial.Local.Storage = (bool *)0x0;
  (this->OffsetStorage).Current.Local.StorageIndex = -1;
  (this->OffsetStorage).Current.Global.StorageIndex = -1;
  (this->OffsetStorage).Initial.Local.StorageIndex = -1;
  (this->OffsetStorage).Initial.Global.StorageIndex = -1;
  (this->OffsetDirtyState).Current.Global.StorageIndex = -1;
  (this->OffsetDirtyState).Current.Local.StorageIndex = -1;
  (this->OffsetDirtyState).Initial.Global.StorageIndex = -1;
  (this->OffsetDirtyState).Initial.Local.StorageIndex = -1;
  (this->ShapeStorage).Current.Local.StorageIndex = -1;
  (this->ShapeStorage).Current.Global.StorageIndex = -1;
  (this->ShapeStorage).Initial.Local.StorageIndex = -1;
  (this->ShapeStorage).Initial.Global.StorageIndex = -1;
  (this->ShapeDirtyState).Current.Global.StorageIndex = -1;
  (this->ShapeDirtyState).Current.Local.StorageIndex = -1;
  (this->ShapeDirtyState).Initial.Global.StorageIndex = -1;
  (this->ShapeDirtyState).Initial.Local.StorageIndex = -1;
  return this;
}

// CopyFrom @ 14a2f89c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigControlElement::CopyFrom(FRigControlElement *this,FRigBaseElement *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  FRigMultiParentElement::CopyFrom((FRigMultiParentElement *)this,param_1);
  if (param_1 != (FRigBaseElement *)0x0) {
    bVar3 = FRigBaseElement::IsA<FRigControlElement>(param_1);
    if (bVar3) goto LAB_14a2f8a18;
  }
  param_1 = (FRigBaseElement *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Element",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                     ,0x3f1,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14a2f8a18:
  FRigControlSettings::operator=
            (&this->Settings,(FRigControlSettings *)&param_1[5].CachedNameString);
  FRigLocalAndGlobalTransform::operator=
            (&(this->OffsetStorage).Current,(FRigLocalAndGlobalTransform *)&param_1[0xc].Owner);
  FRigLocalAndGlobalTransform::operator=
            (&(this->OffsetStorage).Initial,(FRigLocalAndGlobalTransform *)&param_1[0xc].SpawnIndex)
  ;
  FRigLocalAndGlobalDirtyState::operator=
            (&(this->OffsetDirtyState).Current,
             (FRigLocalAndGlobalDirtyState *)&param_1[0xc].ComponentIndices.ArrayNum);
  FRigLocalAndGlobalDirtyState::operator=
            (&(this->OffsetDirtyState).Initial,(FRigLocalAndGlobalDirtyState *)&param_1[0xd].Owner);
  FRigLocalAndGlobalTransform::operator=
            (&(this->ShapeStorage).Current,(FRigLocalAndGlobalTransform *)&param_1[0xd].SpawnIndex);
  FRigLocalAndGlobalTransform::operator=
            (&(this->ShapeStorage).Initial,
             (FRigLocalAndGlobalTransform *)&param_1[0xd].ComponentIndices.ArrayNum);
  FRigLocalAndGlobalDirtyState::operator=
            (&(this->ShapeDirtyState).Current,(FRigLocalAndGlobalDirtyState *)&param_1[0xe].Owner);
  FRigLocalAndGlobalDirtyState::operator=
            (&(this->ShapeDirtyState).Initial,
             (FRigLocalAndGlobalDirtyState *)&param_1[0xe].SpawnIndex);
  dVar2 = *(double *)&param_1[0xb].MetadataStorageIndex;
  *(undefined8 *)&this->PreferredEulerAngles = *(undefined8 *)&param_1[0xb].OwnedInstances;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.X = dVar2;
  dVar2 = *(double *)&param_1[0xb].ComponentIndices.ArrayNum;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.Y =
       (double)param_1[0xb].ComponentIndices.AllocatorInstance.Data;
  (this->PreferredEulerAngles).Current.field0_0x0._s_0.Z = dVar2;
  dVar2 = *(double *)&param_1[0xb].CachedNameString.Data.ArrayNum;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.X =
       (double)param_1[0xb].CachedNameString.Data.AllocatorInstance.Data;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Y = dVar2;
  (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Z = (double)param_1[0xc]._padding_;
  return;
}

// CopyPose @ 14a2fcb00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigControlElement::CopyPose
          (FRigControlElement *this,FRigBaseElement *param_1,bool param_2,bool param_3,bool param_4)

{
  EEulerRotationOrder EVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  undefined8 uVar4;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  FRigMultiParentElement::CopyPose((FRigMultiParentElement *)this,param_1,param_2,param_3,param_4);
  if (param_1 != (FRigBaseElement *)0x0) {
    bVar2 = FRigBaseElement::IsA<FRigControlElement>(param_1);
    if (bVar2) {
      if (param_2) {
        FRigLocalAndGlobalTransform::operator=
                  (&(this->OffsetStorage).Current,(FRigLocalAndGlobalTransform *)&param_1[0xc].Owner
                  );
        FRigLocalAndGlobalDirtyState::operator=
                  (&(this->OffsetDirtyState).Current,
                   (FRigLocalAndGlobalDirtyState *)&param_1[0xc].ComponentIndices.ArrayNum);
        FRigLocalAndGlobalTransform::operator=
                  (&(this->ShapeStorage).Current,
                   (FRigLocalAndGlobalTransform *)&param_1[0xd].SpawnIndex);
        FRigLocalAndGlobalDirtyState::operator=
                  (&(this->ShapeDirtyState).Current,
                   (FRigLocalAndGlobalDirtyState *)&param_1[0xe].Owner);
        EVar1 = (EEulerRotationOrder)param_1[0xb].OwnedInstances;
        if (EVar1 == YZX) {
          local_58._0_4_ = param_1[0xb].MetadataStorageIndex;
          local_58._4_4_ = *(undefined4 *)&param_1[0xb].field_0x3c;
          local_58._8_4_ = *(undefined4 *)&param_1[0xb].ComponentIndices.AllocatorInstance.Data;
          local_58._12_4_ =
               *(int *)((longlong)&param_1[0xb].ComponentIndices.AllocatorInstance.Data + 4);
          local_58._s_0.Z = (double)*(undefined8 *)&param_1[0xb].ComponentIndices.ArrayNum;
        }
        else {
          AnimationCore::ChangeEulerRotationOrder
                    ((TVector<double> *)&local_58._s_0,
                     (TVector<double> *)&param_1[0xb].MetadataStorageIndex,EVar1,YZX,false);
        }
        EVar1 = (this->PreferredEulerAngles).RotationOrder;
        local_40._0_4_ = local_58._0_4_;
        local_40._4_4_ = local_58._4_4_;
        local_40._8_4_ = local_58._8_4_;
        local_40._12_4_ = local_58._12_4_;
        uVar4 = local_58._s_0.Z;
        local_40._s_0.Z = local_58._s_0.Z;
        if (EVar1 != YZX) {
          pTVar3 = AnimationCore::ChangeEulerRotationOrder
                             (&local_28,(TVector<double> *)&local_40._s_0,YZX,EVar1,false);
          local_40._0_4_ = *(undefined4 *)&pTVar3->field0_0x0;
          local_40._4_4_ = *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 4);
          local_40._8_4_ = *(int *)((longlong)&pTVar3->field0_0x0 + 8);
          local_40._12_4_ = *(int *)((longlong)&pTVar3->field0_0x0 + 0xc);
          uVar4 = (pTVar3->field0_0x0)._s_0.Z;
        }
        *(undefined4 *)&(this->PreferredEulerAngles).Current.field0_0x0 = local_40._0_4_;
        *(undefined4 *)((longlong)&(this->PreferredEulerAngles).Current.field0_0x0 + 4) =
             local_40._4_4_;
        *(undefined4 *)((longlong)&(this->PreferredEulerAngles).Current.field0_0x0 + 8) =
             local_40._8_4_;
        *(undefined4 *)((longlong)&(this->PreferredEulerAngles).Current.field0_0x0 + 0xc) =
             local_40._12_4_;
        (this->PreferredEulerAngles).Current.field0_0x0._s_0.Z = (double)uVar4;
      }
      if (param_3) {
        FRigLocalAndGlobalTransform::operator=
                  (&(this->OffsetStorage).Initial,
                   (FRigLocalAndGlobalTransform *)&param_1[0xc].SpawnIndex);
        FRigLocalAndGlobalDirtyState::operator=
                  (&(this->OffsetDirtyState).Initial,
                   (FRigLocalAndGlobalDirtyState *)&param_1[0xd].Owner);
        FRigLocalAndGlobalTransform::operator=
                  (&(this->ShapeStorage).Initial,
                   (FRigLocalAndGlobalTransform *)&param_1[0xd].ComponentIndices.ArrayNum);
        FRigLocalAndGlobalDirtyState::operator=
                  (&(this->ShapeDirtyState).Initial,
                   (FRigLocalAndGlobalDirtyState *)&param_1[0xe].SpawnIndex);
        EVar1 = (EEulerRotationOrder)param_1[0xb].OwnedInstances;
        if (EVar1 == YZX) {
          local_58._0_4_ = *(undefined4 *)&param_1[0xb].CachedNameString.Data.AllocatorInstance.Data
          ;
          local_58._4_4_ =
               *(undefined4 *)
                ((longlong)&param_1[0xb].CachedNameString.Data.AllocatorInstance.Data + 4);
          local_58._8_4_ = param_1[0xb].CachedNameString.Data.ArrayNum;
          local_58._12_4_ = param_1[0xb].CachedNameString.Data.ArrayMax;
          local_58._s_0.Z = (double)param_1[0xc]._padding_;
        }
        else {
          AnimationCore::ChangeEulerRotationOrder
                    ((TVector<double> *)&local_58._s_0,
                     (TVector<double> *)&param_1[0xb].CachedNameString,EVar1,YZX,false);
        }
        EVar1 = (this->PreferredEulerAngles).RotationOrder;
        if (EVar1 != YZX) {
          local_40._0_4_ = local_58._0_4_;
          local_40._4_4_ = local_58._4_4_;
          local_40._8_4_ = local_58._8_4_;
          local_40._12_4_ = local_58._12_4_;
          local_40._s_0.Z = local_58._s_0.Z;
          pTVar3 = AnimationCore::ChangeEulerRotationOrder
                             (&local_28,(TVector<double> *)&local_40._s_0,YZX,EVar1,false);
          local_58._0_4_ = *(undefined4 *)&pTVar3->field0_0x0;
          local_58._4_4_ = *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 4);
          local_58._8_4_ = *(int *)((longlong)&pTVar3->field0_0x0 + 8);
          local_58._12_4_ = *(int *)((longlong)&pTVar3->field0_0x0 + 0xc);
          local_58._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
        }
        *(undefined4 *)&(this->PreferredEulerAngles).Initial.field0_0x0 = local_58._0_4_;
        *(undefined4 *)((longlong)&(this->PreferredEulerAngles).Initial.field0_0x0 + 4) =
             local_58._4_4_;
        *(undefined4 *)((longlong)&(this->PreferredEulerAngles).Initial.field0_0x0 + 8) =
             local_58._8_4_;
        *(undefined4 *)((longlong)&(this->PreferredEulerAngles).Initial.field0_0x0 + 0xc) =
             local_58._12_4_;
        (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Z = local_58._s_0.Z;
      }
    }
  }
  return;
}

// GetOffsetDirtyState @ 14a312030

FRigCurrentAndInitialDirtyState * __thiscall
FRigControlElement::GetOffsetDirtyState(FRigControlElement *this)

{
  return &this->OffsetDirtyState;
}

// GetOffsetDirtyState @ 14a312040

FRigCurrentAndInitialDirtyState * __thiscall
FRigControlElement::GetOffsetDirtyState(FRigControlElement *this)

{
  return &this->OffsetDirtyState;
}

// GetOffsetTransform @ 14a312050

FRigCurrentAndInitialTransform * __thiscall
FRigControlElement::GetOffsetTransform(FRigControlElement *this)

{
  return &this->OffsetStorage;
}

// GetOffsetTransform @ 14a312060

FRigCurrentAndInitialTransform * __thiscall
FRigControlElement::GetOffsetTransform(FRigControlElement *this)

{
  return &this->OffsetStorage;
}

// GetShapeDirtyState @ 14a318ca0

FRigCurrentAndInitialDirtyState * __thiscall
FRigControlElement::GetShapeDirtyState(FRigControlElement *this)

{
  return &this->ShapeDirtyState;
}

// GetShapeDirtyState @ 14a318cb0

FRigCurrentAndInitialDirtyState * __thiscall
FRigControlElement::GetShapeDirtyState(FRigControlElement *this)

{
  return &this->ShapeDirtyState;
}

// GetShapeTransform @ 14a318cc0

FRigCurrentAndInitialTransform * __thiscall
FRigControlElement::GetShapeTransform(FRigControlElement *this)

{
  return &this->ShapeStorage;
}

// GetShapeTransform @ 14a318cd0

FRigCurrentAndInitialTransform * __thiscall
FRigControlElement::GetShapeTransform(FRigControlElement *this)

{
  return &this->ShapeStorage;
}

// IsElementDirty @ 14a3281c0

bool __thiscall FRigControlElement::IsElementDirty(FRigControlElement *this,Type param_1)

{
  bool bVar1;
  
  if (((this->Settings).AnimationType == AnimationChannel) &&
     ((param_1 == CurrentLocal || (bVar1 = param_1 == CurrentGlobal, param_1 = InitialGlobal, bVar1)
      ))) {
    param_1 = CurrentGlobal;
  }
  if ((param_1 != InitialGlobal) && (param_1 != CurrentGlobal)) {
    bVar1 = FRigCurrentAndInitialDirtyState::IsDirty
                      ((FRigCurrentAndInitialDirtyState *)&this->field_0xa0,param_1);
    return bVar1;
  }
  bVar1 = FRigCurrentAndInitialDirtyState::IsDirty(&this->OffsetDirtyState,param_1);
  if (bVar1) {
    bVar1 = FRigCurrentAndInitialDirtyState::IsDirty
                      ((FRigCurrentAndInitialDirtyState *)&this->field_0xa0,param_1);
    if (bVar1) {
      bVar1 = FRigCurrentAndInitialDirtyState::IsDirty(&this->ShapeDirtyState,param_1);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// LinkStorage @ 14a329d70

void __thiscall
FRigControlElement::LinkStorage
          (FRigControlElement *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArrayView<bool,int> *param_2,TArrayView<float,int> *param_3)

{
  int iVar1;
  
  FRigCurrentAndInitialTransform::LinkStorage
            ((FRigCurrentAndInitialTransform *)&this->field_0x60,param_1);
  iVar1 = *(int *)&this->field_0xb0;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    *(bool **)&this->field_0xb8 = param_2->DataPtr + iVar1;
  }
  iVar1 = *(int *)&this->field_0xa0;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    *(bool **)&this->field_0xa8 = param_2->DataPtr + iVar1;
  }
  iVar1 = *(int *)&this->field_0xd0;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    *(bool **)&this->field_0xd8 = param_2->DataPtr + iVar1;
  }
  iVar1 = *(int *)&this->field_0xc0;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    *(bool **)&this->field_0xc8 = param_2->DataPtr + iVar1;
  }
  FRigCurrentAndInitialTransform::LinkStorage(&this->OffsetStorage,param_1);
  FRigCurrentAndInitialTransform::LinkStorage(&this->ShapeStorage,param_1);
  iVar1 = (this->OffsetDirtyState).Current.Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->OffsetDirtyState).Current.Local.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->OffsetDirtyState).Current.Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->OffsetDirtyState).Current.Global.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->OffsetDirtyState).Initial.Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->OffsetDirtyState).Initial.Local.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->OffsetDirtyState).Initial.Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->OffsetDirtyState).Initial.Global.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->ShapeDirtyState).Current.Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->ShapeDirtyState).Current.Local.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->ShapeDirtyState).Current.Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->ShapeDirtyState).Current.Global.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->ShapeDirtyState).Initial.Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->ShapeDirtyState).Initial.Local.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->ShapeDirtyState).Initial.Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->ShapeDirtyState).Initial.Global.Storage = param_2->DataPtr + iVar1;
  }
  return;
}

// Load @ 14a32b030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigControlElement::Load
          (FRigControlElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  FRigPreferredEulerAngles *this_00;
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  long64 lVar5;
  FName local_res18 [2];
  
  FRigMultiParentElement::Load((FRigMultiParentElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    FRigControlSettings::Load(&this->Settings,param_1);
    FRigCurrentAndInitialTransform::Load
              (&this->OffsetStorage,param_1,param_2,&this->OffsetDirtyState);
    FRigCurrentAndInitialTransform::Load(&this->ShapeStorage,param_1,param_2,&this->ShapeDirtyState)
    ;
    this_00 = &this->PreferredEulerAngles;
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
    if (iVar4 < 0x13) {
      this_00->RotationOrder = YZX;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (this->PreferredEulerAngles).Current.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->PreferredEulerAngles).Current.field0_0x0._s_0.Y = (double)uVar3;
      (this->PreferredEulerAngles).Current.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar2 = (this->PreferredEulerAngles).Current.field0_0x0._s_0.Y;
      dVar1 = (this->PreferredEulerAngles).Current.field0_0x0._s_0.Z;
      (this->PreferredEulerAngles).Initial.field0_0x0._s_0.X =
           (this->PreferredEulerAngles).Current.field0_0x0._s_0.X;
      (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Y = dVar2;
      (this->PreferredEulerAngles).Initial.field0_0x0._s_0.Z = dVar1;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          RotationOrderEnum = StaticEnum<enum_EEulerRotationOrder>();
          _Init_thread_footer(&::_TSS0);
        }
      }
      local_res18[0].ComparisonIndex.Value = 0;
      local_res18[0].Number = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res18);
      lVar5 = UEnum::GetValueByName(RotationOrderEnum,local_res18[0],None);
      this_00->RotationOrder = (EEulerRotationOrder)lVar5;
      UE::Math::operator<<(param_1,&(this->PreferredEulerAngles).Current);
      UE::Math::operator<<(param_1,&(this->PreferredEulerAngles).Initial);
    }
    FRigPreferredEulerAngles::SetRotationOrder(this_00,(this->Settings).PreferredRotationOrder);
  }
  return;
}

// MarkElementDirty @ 14a331870

void __thiscall FRigControlElement::MarkElementDirty(FRigControlElement *this,Type param_1)

{
  Type TVar1;
  
  if ((param_1 == CurrentLocal) || (TVar1 = InitialGlobal, param_1 == CurrentGlobal)) {
    TVar1 = CurrentGlobal;
  }
  if ((this->Settings).AnimationType == AnimationChannel) {
    param_1 = TVar1;
  }
  FRigCurrentAndInitialDirtyState::MarkDirty
            ((FRigCurrentAndInitialDirtyState *)&this->field_0xa0,param_1);
  FRigCurrentAndInitialDirtyState::MarkDirty(&this->OffsetDirtyState,TVar1);
  FRigCurrentAndInitialDirtyState::MarkDirty(&this->ShapeDirtyState,TVar1);
  return;
}

// Save @ 14a344c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigControlElement::Save
          (FRigControlElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  undefined1 local_res18 [16];
  
  FRigMultiParentElement::Save((FRigMultiParentElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    FRigControlSettings::Save(&this->Settings,param_1);
    if (param_2->bSerializeCurrentTransform != false) {
      FRigLocalAndGlobalTransform::Save
                (&(this->OffsetStorage).Current,param_1,param_2,&(this->OffsetDirtyState).Current);
    }
    if (param_2->bSerializeInitialTransform != false) {
      FRigLocalAndGlobalTransform::Save
                (&(this->OffsetStorage).Initial,param_1,param_2,&(this->OffsetDirtyState).Initial);
    }
    if (param_2->bSerializeCurrentTransform != false) {
      FRigLocalAndGlobalTransform::Save
                (&(this->ShapeStorage).Current,param_1,param_2,&(this->ShapeDirtyState).Current);
    }
    if (param_2->bSerializeInitialTransform != false) {
      FRigLocalAndGlobalTransform::Save
                (&(this->ShapeStorage).Initial,param_1,param_2,&(this->ShapeDirtyState).Initial);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        RotationOrderEnum = StaticEnum<enum_EEulerRotationOrder>();
        _Init_thread_footer(&::_TSS0);
      }
    }
    UEnum::GetNameByValue(RotationOrderEnum,(long64)local_res18);
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res18);
    UE::Math::operator<<(param_1,&(this->PreferredEulerAngles).Current);
    UE::Math::operator<<(param_1,&(this->PreferredEulerAngles).Initial);
  }
  return;
}

// UnlinkStorage @ 14a35bc80

void __thiscall
FRigControlElement::UnlinkStorage
          (FRigControlElement *this,
          FRigReusableElementStorage<UE::Math::TTransform<double>_> *param_1,
          FRigReusableElementStorage<bool> *param_2,FRigReusableElementStorage<float> *param_3)

{
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&this->field_0x60,(TTransform<double> **)&this->field_0x68);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&this->field_0x70,(TTransform<double> **)&this->field_0x78);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&this->field_0x80,(TTransform<double> **)&this->field_0x88);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&this->field_0x90,(TTransform<double> **)&this->field_0x98);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&this->field_0xb0,(bool **)&this->field_0xb8);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&this->field_0xa0,(bool **)&this->field_0xa8);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&this->field_0xd0,(bool **)&this->field_0xd8);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&this->field_0xc0,(bool **)&this->field_0xc8);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&this->OffsetStorage,&(this->OffsetStorage).Current.Local.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->OffsetStorage).Current.Global.StorageIndex,
             &(this->OffsetStorage).Current.Global.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&(this->OffsetStorage).Initial,
             &(this->OffsetStorage).Initial.Local.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->OffsetStorage).Initial.Global.StorageIndex,
             &(this->OffsetStorage).Initial.Global.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&this->ShapeStorage,&(this->ShapeStorage).Current.Local.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->ShapeStorage).Current.Global.StorageIndex,
             &(this->ShapeStorage).Current.Global.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&(this->ShapeStorage).Initial,
             &(this->ShapeStorage).Initial.Local.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->ShapeStorage).Initial.Global.StorageIndex,
             &(this->ShapeStorage).Initial.Global.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,&(this->OffsetDirtyState).Current.Local.StorageIndex,
             &(this->OffsetDirtyState).Current.Local.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&this->OffsetDirtyState,&(this->OffsetDirtyState).Current.Global.Storage
            );
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,&(this->OffsetDirtyState).Initial.Local.StorageIndex,
             &(this->OffsetDirtyState).Initial.Local.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&(this->OffsetDirtyState).Initial,
             &(this->OffsetDirtyState).Initial.Global.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,&(this->ShapeDirtyState).Current.Local.StorageIndex,
             &(this->ShapeDirtyState).Current.Local.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&this->ShapeDirtyState,&(this->ShapeDirtyState).Current.Global.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,&(this->ShapeDirtyState).Initial.Local.StorageIndex,
             &(this->ShapeDirtyState).Initial.Local.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&(this->ShapeDirtyState).Initial,
             &(this->ShapeDirtyState).Initial.Global.Storage);
  return;
}

