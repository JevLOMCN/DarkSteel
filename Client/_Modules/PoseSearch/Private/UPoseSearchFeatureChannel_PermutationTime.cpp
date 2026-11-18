// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 10

// StaticClass @ 14a8d6c80

UClass * __cdecl UPoseSearchFeatureChannel_PermutationTime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_PermutationTime",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_PermutationTime,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_PermutationTime>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_PermutationTime>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton;
}

// UPoseSearchFeatureChannel_PermutationTime @ 14a8e1db0

UPoseSearchFeatureChannel_PermutationTime * __thiscall
UPoseSearchFeatureChannel_PermutationTime::UPoseSearchFeatureChannel_PermutationTime
          (UPoseSearchFeatureChannel_PermutationTime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x38 = 0xffffffffffffffff;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IPoseSearchFilter__;
  return this;
}

// UPoseSearchFeatureChannel_PermutationTime @ 14a8e1e00

UPoseSearchFeatureChannel_PermutationTime * __thiscall
UPoseSearchFeatureChannel_PermutationTime::UPoseSearchFeatureChannel_PermutationTime
          (UPoseSearchFeatureChannel_PermutationTime *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x38 = 0xffffffffffffffff;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IBoneReferenceSkeletonProvider__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IPoseSearchFilter__;
  return this;
}

// ~UPoseSearchFeatureChannel_PermutationTime @ 14a8e2ea0

void __thiscall
UPoseSearchFeatureChannel_PermutationTime::~UPoseSearchFeatureChannel_PermutationTime
          (UPoseSearchFeatureChannel_PermutationTime *this)

{
  *(undefined ***)this = &UPoseSearchFeatureChannel::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &___7IPoseSearchFilter__6B_;
  *(undefined ***)&this->field_0x28 = &___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildQuery @ 14a8e96e0

void __thiscall
UPoseSearchFeatureChannel_PermutationTime::BuildQuery
          (UPoseSearchFeatureChannel_PermutationTime *this,FSearchContext *param_1)

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
  
  uVar2 = *(uint *)&this->field_0x38;
  fVar1 = param_1->DesiredPermutationTimeOffset;
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

// Finalize @ 14a8f6a90

bool __thiscall
UPoseSearchFeatureChannel_PermutationTime::Finalize
          (UPoseSearchFeatureChannel_PermutationTime *this,UPoseSearchSchema *param_1)

{
  *(int *)&this->field_0x38 = param_1->SchemaCardinality;
  *(undefined4 *)&this->field_0x3c = 1;
  param_1->SchemaCardinality = param_1->SchemaCardinality + 1;
  return true;
}

// FindOrAddToSchema @ 14a8f8010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPoseSearchFeatureChannel_PermutationTime::FindOrAddToSchema(UPoseSearchSchema *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UPoseSearchFeatureChannel *pUVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_b8 = (param_1->FinalizedChannels).AllocatorInstance.Data;
  iVar1 = (param_1->FinalizedChannels).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_a8._12_4_ = uStack_ac;
  local_a8.ArrayNum = iVar1;
  local_a8.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)local_b8;
  iStack_b0 = iVar1;
  local_98._16_8_ =
       UPoseSearchSchema::
       FindChannelRecursive<_UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime>_::__l2::<lambda_1>_>
                 (&local_a8,(<lambda_1>)param_1);
  if ((FName)local_98._16_8_ == (FName)0x0) {
    local_d8 = (FName)local_98._16_8_;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = param_1;
    pUVar5 = (UPoseSearchFeatureChannel *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    UPoseSearchSchema::AddTemporaryChannel(param_1,pUVar5);
    if (2 < (byte)LogPoseSearch._0_1_) {
      local_d0 = (FName)param_1->_padding_;
      ::FName::ToString(&local_d0,&local_c8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetPermutationTime @ 14a8fb1d0

float __thiscall
UPoseSearchFeatureChannel_PermutationTime::GetPermutationTime
          (UPoseSearchFeatureChannel_PermutationTime *this,TArrayView<float_const_,int> *param_1)

{
  uint uVar1;
  code *pcVar2;
  float *pfVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  pfVar3 = param_1->DataPtr;
  uVar1 = *(uint *)&this->field_0x38;
  iVar6 = (int)*(undefined8 *)&param_1->ArrayNum;
  if (iVar6 < (int)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() >= DataOffset + 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x84,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  uVar5 = 0;
  if ((int)uVar1 < iVar6) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  return pfVar3[(int)uVar1];
}

// GetPrivateStaticClass @ 14a8fc6f0

UClass * __cdecl UPoseSearchFeatureChannel_PermutationTime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_PermutationTime",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_PermutationTime,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_PermutationTime>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_PermutationTime>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_PermutationTime @ 14a908dd0

void __cdecl
UPoseSearchFeatureChannel_PermutationTime::
StaticRegisterNativesUPoseSearchFeatureChannel_PermutationTime(void)

{
  return;
}

