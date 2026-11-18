// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// StaticClass @ 14a8d5510

UClass * __cdecl UPoseSearchFeatureChannel_SamplingTime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_SamplingTime",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_SamplingTime,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_SamplingTime>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_SamplingTime>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton;
}

// UPoseSearchFeatureChannel_SamplingTime @ 14a8e23e0

UPoseSearchFeatureChannel_SamplingTime * __thiscall
UPoseSearchFeatureChannel_SamplingTime::UPoseSearchFeatureChannel_SamplingTime
          (UPoseSearchFeatureChannel_SamplingTime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->Weight = 0.0;
  this->TimeToMatch = 0.0;
  return this;
}

// UPoseSearchFeatureChannel_SamplingTime @ 14a8e2430

UPoseSearchFeatureChannel_SamplingTime * __thiscall
UPoseSearchFeatureChannel_SamplingTime::UPoseSearchFeatureChannel_SamplingTime
          (UPoseSearchFeatureChannel_SamplingTime *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->Weight = 0.0;
  this->TimeToMatch = 0.0;
  return this;
}

// ~UPoseSearchFeatureChannel_SamplingTime @ 14a8e2fc0

void __thiscall
UPoseSearchFeatureChannel_SamplingTime::~UPoseSearchFeatureChannel_SamplingTime
          (UPoseSearchFeatureChannel_SamplingTime *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildQuery @ 14a8ea230

void __thiscall
UPoseSearchFeatureChannel_SamplingTime::BuildQuery
          (UPoseSearchFeatureChannel_SamplingTime *this,FSearchContext *param_1)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  float *pfVar4;
  bool bVar5;
  uint uVar6;
  TArrayView<float,int> *pTVar7;
  int iVar8;
  TArrayView<float,int> local_28 [2];
  
  uVar2 = (uint)this->_padding_;
  fVar1 = this->TimeToMatch;
  pTVar7 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,local_28);
  pfVar4 = pTVar7->DataPtr;
  iVar8 = (int)*(undefined8 *)&pTVar7->ArrayNum;
  if (iVar8 < (int)uVar2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() >= DataOffset + 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x7e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = 0;
  if ((int)uVar2 < iVar8) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar4[(int)uVar2] = fVar1;
  return;
}

// Finalize @ 14a8f74a0

bool __thiscall
UPoseSearchFeatureChannel_SamplingTime::Finalize
          (UPoseSearchFeatureChannel_SamplingTime *this,UPoseSearchSchema *param_1)

{
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  param_1->SchemaCardinality = param_1->SchemaCardinality + 1;
  return true;
}

// GetPrivateStaticClass @ 14a8fc9f0

UClass * __cdecl UPoseSearchFeatureChannel_SamplingTime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_SamplingTime",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_SamplingTime,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_SamplingTime>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_SamplingTime>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_SamplingTime @ 14a908e10

void __cdecl
UPoseSearchFeatureChannel_SamplingTime::StaticRegisterNativesUPoseSearchFeatureChannel_SamplingTime
          (void)

{
  return;
}

