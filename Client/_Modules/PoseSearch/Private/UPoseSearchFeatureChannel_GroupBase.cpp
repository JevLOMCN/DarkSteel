// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 12

// StaticClass @ 14a8d5fb0

UClass * __cdecl UPoseSearchFeatureChannel_GroupBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_GroupBase",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_GroupBase,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_GroupBase>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_GroupBase>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton;
}

// UPoseSearchFeatureChannel_GroupBase @ 14a8e1ab0

UPoseSearchFeatureChannel_GroupBase * __thiscall
UPoseSearchFeatureChannel_GroupBase::UPoseSearchFeatureChannel_GroupBase
          (UPoseSearchFeatureChannel_GroupBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->SampleRole = UE::PoseSearch::DefaultRole;
  this->DebugWeightGroupID = -1;
  return this;
}

// UPoseSearchFeatureChannel_GroupBase @ 14a8e1b10

UPoseSearchFeatureChannel_GroupBase * __thiscall
UPoseSearchFeatureChannel_GroupBase::UPoseSearchFeatureChannel_GroupBase
          (UPoseSearchFeatureChannel_GroupBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->SampleRole = UE::PoseSearch::DefaultRole;
  this->DebugWeightGroupID = -1;
  return this;
}

// ~UPoseSearchFeatureChannel_GroupBase @ 14a8e2e10

void __thiscall
UPoseSearchFeatureChannel_GroupBase::~UPoseSearchFeatureChannel_GroupBase
          (UPoseSearchFeatureChannel_GroupBase *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddDependentChannels @ 14a8e6370

void __thiscall
UPoseSearchFeatureChannel_GroupBase::AddDependentChannels
          (UPoseSearchFeatureChannel_GroupBase *this,UPoseSearchSchema *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_18);
  for (plVar2 = local_18; plVar2 != local_18 + local_10; plVar2 = plVar2 + 1) {
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1);
    }
  }
  return;
}

// BuildQuery @ 14a8e8e60

void __thiscall
UPoseSearchFeatureChannel_GroupBase::BuildQuery
          (UPoseSearchFeatureChannel_GroupBase *this,FSearchContext *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_18);
  for (plVar2 = local_18; plVar2 != local_18 + local_10; plVar2 = plVar2 + 1) {
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b8))(plVar1,param_1);
    }
  }
  return;
}

// DebugDraw @ 14a8f0f40

void __thiscall
UPoseSearchFeatureChannel_GroupBase::DebugDraw
          (UPoseSearchFeatureChannel_GroupBase *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_28);
  for (plVar2 = local_28; plVar2 != local_28 + local_20; plVar2 = plVar2 + 1) {
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      local_18 = *(undefined4 *)&param_2->DataPtr;
      uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
      iStack_10 = param_2->ArrayNum;
      uStack_c = *(undefined4 *)&param_2->field_0xc;
      (**(code **)(*plVar1 + 0x2e0))(plVar1,param_1,&local_18);
    }
  }
  return;
}

// Finalize @ 14a8f6950

bool __thiscall
UPoseSearchFeatureChannel_GroupBase::Finalize
          (UPoseSearchFeatureChannel_GroupBase *this,UPoseSearchSchema *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *local_18;
  int local_10;
  
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  (**(code **)(this->_padding_ + 0x2c8))(this,&local_18);
  plVar3 = local_18;
  while( true ) {
    if (plVar3 == local_18 + local_10) {
      *(int *)((longlong)&this->_padding_ + 4) = param_1->SchemaCardinality - (int)this->_padding_;
      return true;
    }
    plVar1 = (longlong *)*plVar3;
    if ((plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1), cVar2 == '\0')) break;
    plVar3 = plVar3 + 1;
  }
  return false;
}

// GetPrivateStaticClass @ 14a8fc4b0

UClass * __cdecl UPoseSearchFeatureChannel_GroupBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_GroupBase",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_GroupBase,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_GroupBase>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_GroupBase>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_GroupBase.InnerSingleton;
}

// IsFilterActive @ 14a901c10

bool __thiscall
UPoseSearchFeatureChannel_GroupBase::IsFilterActive(UPoseSearchFeatureChannel_GroupBase *this)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *local_18;
  int local_10;
  
  (**(code **)(this[-1]._padding_ + 0x2c0))(&this[-1]._padding_,&local_18);
  plVar3 = local_18;
  while( true ) {
    if (plVar3 == local_18 + local_10) {
      return false;
    }
    lVar1 = *plVar3;
    if ((lVar1 != 0) &&
       (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 8))(lVar1 + 0x30), cVar2 != '\0')) break;
    plVar3 = plVar3 + 1;
  }
  return true;
}

// IsFilterValid @ 14a901fe0

bool __thiscall
UPoseSearchFeatureChannel_GroupBase::IsFilterValid
          (UPoseSearchFeatureChannel_GroupBase *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,FPoseMetadata *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  (**(code **)(this[-1]._padding_ + 0x2c0))(&this[-1]._padding_,&local_48);
  plVar3 = local_48;
  do {
    if (plVar3 == local_48 + local_40) {
      return true;
    }
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      local_38 = *(undefined4 *)&param_2->DataPtr;
      uStack_34 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
      iStack_30 = param_2->ArrayNum;
      uStack_2c = *(undefined4 *)&param_2->field_0xc;
      local_28 = *(undefined4 *)&param_1->DataPtr;
      uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
      iStack_20 = param_1->ArrayNum;
      uStack_1c = *(undefined4 *)&param_1->field_0xc;
      cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x10))
                        (lVar1 + 0x30,&local_28,&local_38,param_3,param_4);
      if (cVar2 == '\0') {
        return false;
      }
    }
    plVar3 = plVar3 + 1;
  } while( true );
}

// StaticRegisterNativesUPoseSearchFeatureChannel_GroupBase @ 14a908da0

void __cdecl
UPoseSearchFeatureChannel_GroupBase::StaticRegisterNativesUPoseSearchFeatureChannel_GroupBase(void)

{
  return;
}

