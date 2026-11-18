// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 9

// StaticClass @ 14a8d68e0

UClass * __cdecl UPoseSearchFeatureChannel_Padding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Padding",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Padding,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Padding>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Padding>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton;
}

// UPoseSearchFeatureChannel_Padding @ 14a8e1d10

UPoseSearchFeatureChannel_Padding * __thiscall
UPoseSearchFeatureChannel_Padding::UPoseSearchFeatureChannel_Padding
          (UPoseSearchFeatureChannel_Padding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->PaddingSize = 1;
  return this;
}

// UPoseSearchFeatureChannel_Padding @ 14a8e1d60

UPoseSearchFeatureChannel_Padding * __thiscall
UPoseSearchFeatureChannel_Padding::UPoseSearchFeatureChannel_Padding
          (UPoseSearchFeatureChannel_Padding *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->PaddingSize = 1;
  return this;
}

// ~UPoseSearchFeatureChannel_Padding @ 14a8e2e70

void __thiscall
UPoseSearchFeatureChannel_Padding::~UPoseSearchFeatureChannel_Padding
          (UPoseSearchFeatureChannel_Padding *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddToSchema @ 14a8e74b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UPoseSearchFeatureChannel_Padding::AddToSchema(UPoseSearchSchema *param_1,int param_2)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = param_1;
  pUVar2 = (UPoseSearchFeatureChannel *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(int *)&pUVar2[1]._padding_ = param_2;
  UPoseSearchSchema::AddTemporaryChannel(param_1,pUVar2);
  return;
}

// BuildQuery @ 14a8e96d0

void __thiscall
UPoseSearchFeatureChannel_Padding::BuildQuery
          (UPoseSearchFeatureChannel_Padding *this,FSearchContext *param_1)

{
  return;
}

// Finalize @ 14a8f6a70

bool __thiscall
UPoseSearchFeatureChannel_Padding::Finalize
          (UPoseSearchFeatureChannel_Padding *this,UPoseSearchSchema *param_1)

{
  int iVar1;
  
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  iVar1 = this->PaddingSize;
  *(int *)((longlong)&this->_padding_ + 4) = iVar1;
  param_1->SchemaCardinality = param_1->SchemaCardinality + iVar1;
  return true;
}

// GetPrivateStaticClass @ 14a8fc630

UClass * __cdecl UPoseSearchFeatureChannel_Padding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Padding",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Padding,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Padding>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Padding>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Padding.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Padding @ 14a908dc0

void __cdecl
UPoseSearchFeatureChannel_Padding::StaticRegisterNativesUPoseSearchFeatureChannel_Padding(void)

{
  return;
}

