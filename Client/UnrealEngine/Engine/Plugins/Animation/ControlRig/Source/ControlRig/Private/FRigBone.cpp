// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a2c7820

UScriptStruct * __cdecl FRigBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBone,(UObject *)pUVar1,L"RigBone");
  }
  return Z_Registration_Info_UScriptStruct_FRigBone.OuterSingleton;
}

// FRigBone @ 14a2d9010

FRigBone * __thiscall FRigBone::FRigBone(FRigBone *this,FRigBone *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  *(undefined ***)this = &___7FRigElement__6B_;
  pTVar2 = &this->Dependents;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined ***)this = &___7FRigBone__6B_;
  this->ParentName = param_1->ParentName;
  this->ParentIndex = param_1->ParentIndex;
  piVar1 = &(this->Dependents).ArrayMax;
  dVar4 = (param_1->InitialTransform).Rotation.XY.m128d_f64[1];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (param_1->InitialTransform).Rotation.XY.m128d_f64[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InitialTransform).Rotation.ZW.m128d_f64[1];
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->InitialTransform).Rotation.ZW.m128d_f64[0];
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InitialTransform).Translation.XY.m128d_f64[1];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (param_1->InitialTransform).Translation.XY.m128d_f64[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InitialTransform).Translation.ZW.m128d_f64[1];
  (this->InitialTransform).Translation.ZW.m128d_f64[0] =
       (param_1->InitialTransform).Translation.ZW.m128d_f64[0];
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InitialTransform).Scale3D.XY.m128d_f64[1];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->InitialTransform).Scale3D.XY.m128d_f64[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->InitialTransform).Scale3D.ZW.m128d_f64[1];
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->InitialTransform).Scale3D.ZW.m128d_f64[0];
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalTransform).Rotation.XY.m128d_f64[1];
  (this->GlobalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->GlobalTransform).Rotation.XY.m128d_f64[0];
  (this->GlobalTransform).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalTransform).Rotation.ZW.m128d_f64[1];
  (this->GlobalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->GlobalTransform).Rotation.ZW.m128d_f64[0];
  (this->GlobalTransform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalTransform).Translation.XY.m128d_f64[1];
  (this->GlobalTransform).Translation.XY.m128d_f64[0] =
       (param_1->GlobalTransform).Translation.XY.m128d_f64[0];
  (this->GlobalTransform).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalTransform).Translation.ZW.m128d_f64[1];
  (this->GlobalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->GlobalTransform).Translation.ZW.m128d_f64[0];
  (this->GlobalTransform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalTransform).Scale3D.XY.m128d_f64[1];
  (this->GlobalTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->GlobalTransform).Scale3D.XY.m128d_f64[0];
  (this->GlobalTransform).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalTransform).Scale3D.ZW.m128d_f64[1];
  (this->GlobalTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->GlobalTransform).Scale3D.ZW.m128d_f64[0];
  (this->GlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  (this->LocalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Dependents).ArrayNum;
  _Src = (param_1->Dependents).AllocatorInstance.Data;
  (this->Dependents).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  this->Type = param_1->Type;
  return this;
}

// FRigBone @ 14a2d91d0

FRigBone * __thiscall FRigBone::FRigBone(FRigBone *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FRigBone__6B_;
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  (this->ParentName).ComparisonIndex = 0;
  (this->ParentName).Number = 0;
  this->ParentIndex = -1;
  *&(this->InitialTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->InitialTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->InitialTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->InitialTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->InitialTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->InitialTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->GlobalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->GlobalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->GlobalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->GlobalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->GlobalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->GlobalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Dependents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dependents).ArrayNum = 0;
  (this->Dependents).ArrayMax = 0;
  this->Type = Imported;
  return this;
}

// ~FRigBone @ 14a2de890

void __thiscall FRigBone::~FRigBone(FRigBone *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FRigBone__6B_;
  pFVar1 = (this->Dependents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FRigElement__6B_;
  return;
}

// GetElementType @ 14a30ece0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ERigElementType __thiscall FRigBone::GetElementType(FRigBone *this)

{
  return Bone;
}

// GetParentElementKey @ 14a3122b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FRigBone::GetParentElementKey(FRigBone *this,FRigElementKey *__return_storage_ptr__,bool param_1)

{
  ERigElementType EVar1;
  
  EVar1 = (**(code **)(*(longlong *)this + 8))();
  __return_storage_ptr__->Type = EVar1;
  __return_storage_ptr__->Name = this->ParentName;
  return __return_storage_ptr__;
}

