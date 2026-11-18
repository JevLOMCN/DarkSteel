// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 149671c90

UClass * __cdecl UGizmoAxisIntervalParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisIntervalParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisIntervalParameterSource,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisIntervalParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisIntervalParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton;
}

// UGizmoAxisIntervalParameterSource @ 1496837b0

UGizmoAxisIntervalParameterSource * __thiscall
UGizmoAxisIntervalParameterSource::UGizmoAxisIntervalParameterSource
          (UGizmoAxisIntervalParameterSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->FloatParameterSource = 0;
  *(undefined8 *)&(this->FloatParameterSource).field_0x8 = 0;
  return this;
}

// UGizmoAxisIntervalParameterSource @ 149683800

UGizmoAxisIntervalParameterSource * __thiscall
UGizmoAxisIntervalParameterSource::UGizmoAxisIntervalParameterSource
          (UGizmoAxisIntervalParameterSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->FloatParameterSource = 0;
  *(undefined8 *)&(this->FloatParameterSource).field_0x8 = 0;
  return this;
}

// ~UGizmoAxisIntervalParameterSource @ 149689640

void __thiscall
UGizmoAxisIntervalParameterSource::~UGizmoAxisIntervalParameterSource
          (UGizmoAxisIntervalParameterSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  return;
}

// BeginModify @ 149692c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGizmoAxisIntervalParameterSource::BeginModify(UGizmoAxisIntervalParameterSource *this)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149692c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149692c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))();
  return;
}

// Construct @ 149699950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoAxisIntervalParameterSource * __cdecl
UGizmoAxisIntervalParameterSource::Construct
          (IGizmoFloatParameterSource *param_1,float param_2,float param_3,UObject *param_4)

{
  UClass *pUVar1;
  UGizmoAxisIntervalParameterSource *pUVar2;
  UObject *this;
  UObject *pUVar3;
  longlong *plVar4;
  UObject *pUVar5;
  TScriptInterface<IGizmoFloatParameterSource> *pTVar6;
  UObject *pUVar7;
  float fVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_108;
  FObjectInitializer::AssertIfInConstructor
            (param_4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e8,pUVar1);
  local_e8._8_8_ = param_4;
  pUVar2 = (UGizmoAxisIntervalParameterSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
  if (local_e8._64_8_ != 0) {
    plVar4 = (longlong *)(local_e8 + 0x50);
    if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_e8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pUVar7 = (UObject *)0x0;
  pUVar5 = pUVar7;
  pUVar3 = pUVar7;
  if ((param_1 != (IGizmoFloatParameterSource *)0x0) &&
     (this = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1), this != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this);
    }
    pUVar1 = Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
    pUVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar1);
    pUVar5 = this;
  }
  pTVar6 = &pUVar2->FloatParameterSource;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)pTVar6 = pUVar5;
  *(UObject **)&(pUVar2->FloatParameterSource).field_0x8 = pUVar3;
  if (*(longlong *)pTVar6 == 0) {
    pUVar3 = pUVar7;
  }
  fVar8 = (float)(**(code **)(*(longlong *)pUVar3 + 0x10))(pUVar3);
  if (param_3 <= fVar8) {
    fVar8 = param_3;
  }
  if (fVar8 <= param_2) {
    fVar8 = param_2;
  }
  if (*(longlong *)pTVar6 != 0) {
    pUVar7 = *(UObject **)&(pUVar2->FloatParameterSource).field_0x8;
  }
  (**(code **)(*(longlong *)pUVar7 + 0x20))(pUVar7,fVar8);
  pUVar2->MinParameter = param_2;
  pUVar2->MaxParameter = param_3;
  return pUVar2;
}

// EndModify @ 14969dc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGizmoAxisIntervalParameterSource::EndModify(UGizmoAxisIntervalParameterSource *this)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014969dc1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x28))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014969dc27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x28))();
  return;
}

// GetParameter @ 1496a3ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UGizmoAxisIntervalParameterSource::GetParameter(UGizmoAxisIntervalParameterSource *this)

{
  float fVar1;
  
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001496a3abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x10))();
    return fVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496a3ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(_DAT_00000000 + 0x10))();
  return fVar1;
}

// GetPrivateStaticClass @ 1496a4570

UClass * __cdecl UGizmoAxisIntervalParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisIntervalParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisIntervalParameterSource,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisIntervalParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisIntervalParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.InnerSingleton;
}

// SetParameter @ 1496bdd50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGizmoAxisIntervalParameterSource::SetParameter
          (UGizmoAxisIntervalParameterSource *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= *(float *)&this->_padding_) {
    fVar1 = *(float *)&this->_padding_;
  }
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001496bdd6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,fVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496bdd7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x20))(0,fVar1);
  return;
}

// StaticRegisterNativesUGizmoAxisIntervalParameterSource @ 1496c27c0

void __cdecl
UGizmoAxisIntervalParameterSource::StaticRegisterNativesUGizmoAxisIntervalParameterSource(void)

{
  return;
}

