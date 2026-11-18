// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 24

// StaticClass @ 14aca6780

UClass * __cdecl UEasyParticleComponentRuntime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponentRuntime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponentRuntime",
               &Z_Registration_Info_UClass_UEasyParticleComponentRuntime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponentRuntime,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponentRuntime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponentRuntime>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponentRuntime.InnerSingleton;
}

// UEasyParticleComponentRuntime @ 14aca9580

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponentRuntime * __thiscall
UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
          (UEasyParticleComponentRuntime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  return this;
}

// ~UEasyParticleComponentRuntime @ 14acaa4a0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime(UEasyParticleComponentRuntime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac390

UClass * __cdecl UEasyParticleComponentRuntime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponentRuntime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponentRuntime",
               &Z_Registration_Info_UClass_UEasyParticleComponentRuntime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponentRuntime,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponentRuntime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponentRuntime>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponentRuntime.InnerSingleton;
}

// Init @ 14acadf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::Init(UEasyParticleComponentRuntime *this,FGeometry *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 auStack_68 [32];
  FGeometry local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UEasyParticleComponentRuntime_Init);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    FGeometry::FGeometry(&local_48);
    FGeometry::operator=(&local_48,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_48);
  }
  else {
    (**(code **)(this->_padding_ + 0x2c8))(this,param_1);
  }
  return;
}

// PostTick @ 14acae020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::PostTick
          (UEasyParticleComponentRuntime *this,FGeometry *param_1,float param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 auStack_98 [32];
  FGeometry local_78;
  float local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UEasyParticleComponentRuntime_PostTick);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    FGeometry::FGeometry(&local_78);
    FGeometry::operator=(&local_78,param_1);
    local_40 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_78);
  }
  else {
    (**(code **)(this->_padding_ + 0x2b8))(this,param_1,param_2);
  }
  return;
}

// Reset @ 14acae0d0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall UEasyParticleComponentRuntime::Reset(UEasyParticleComponentRuntime *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UEasyParticleComponentRuntime_Reset);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014acae113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014acae124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// StaticRegisterNativesUEasyParticleComponentRuntime @ 14acae1d0

void __cdecl UEasyParticleComponentRuntime::StaticRegisterNativesUEasyParticleComponentRuntime(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UEasyParticleComponentRuntime_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14acae440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::Tick
          (UEasyParticleComponentRuntime *this,FGeometry *param_1,float param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 auStack_98 [32];
  FGeometry local_78;
  float local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UEasyParticleComponentRuntime_Tick);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    FGeometry::FGeometry(&local_78);
    FGeometry::operator=(&local_78,param_1);
    local_40 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_78);
  }
  else {
    (**(code **)(this->_padding_ + 0x2c0))(this,param_1,param_2);
  }
  return;
}

// execInit @ 14acb0040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UEasyParticleComponentRuntime::execInit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometry *pFVar2;
  undefined1 auStack_68 [32];
  FGeometry local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  FGeometry::FGeometry(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar2 = &local_48;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar2 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,pFVar2);
  return;
}

// execPostTick @ 14acb0120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UEasyParticleComponentRuntime::execPostTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometry *pFVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68[0] = 0;
  pFVar2 = &local_60;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar2 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,pFVar2,local_68[0]);
  return;
}

// execReset @ 14acb0230

void __cdecl
UEasyParticleComponentRuntime::execReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014acb0248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b0))();
  return;
}

// execTick @ 14acb0330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UEasyParticleComponentRuntime::execTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometry *pFVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68[0] = 0;
  pFVar2 = &local_60;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar2 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,pFVar2,local_68[0]);
  return;
}

// UEasyParticleComponentRuntime @ 14acb5f60

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponentRuntime * __thiscall
UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
          (UEasyParticleComponentRuntime *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  this->ParentAsset = (UEasyParticleComponent *)0x0;
  this->Owner = (UEasyParticleState *)0x0;
  return this;
}

// GetOwner @ 14acb9aa0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleState * __thiscall
UEasyParticleComponentRuntime::GetOwner(UEasyParticleComponentRuntime *this)

{
  return this->Owner;
}

// Init_Implementation @ 14acbb690

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::Init_Implementation
          (UEasyParticleComponentRuntime *this,FGeometry *param_1)

{
  return;
}

// IsEnd @ 14acbbf50

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

bool __thiscall UEasyParticleComponentRuntime::IsEnd(UEasyParticleComponentRuntime *this)

{
  return true;
}

// OnPaint @ 14acbc220

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::OnPaint
          (UEasyParticleComponentRuntime *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  return;
}

// OnSubEmitterCreate @ 14acbc360

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::OnSubEmitterCreate
          (UEasyParticleComponentRuntime *this,
          FEasyParticleComponentRuntime_Child_SubEmitter *param_1)

{
  return;
}

// PostTick_Implementation @ 14acbc700

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::PostTick_Implementation
          (UEasyParticleComponentRuntime *this,FGeometry *param_1,float param_2)

{
  return;
}

// Reset_Implementation @ 14acbd200

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::Reset_Implementation(UEasyParticleComponentRuntime *this)

{
  return;
}

// SetOwner @ 14acbd560

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::SetOwner
          (UEasyParticleComponentRuntime *this,UEasyParticleState *param_1)

{
  this->Owner = param_1;
  return;
}

// SetParentComponent @ 14acbd570

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::SetParentComponent
          (UEasyParticleComponentRuntime *this,UEasyParticleComponent *param_1)

{
  this->ParentAsset = param_1;
  return;
}

// Tick_Implementation @ 14acbd890

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponentRuntime::Tick_Implementation
          (UEasyParticleComponentRuntime *this,FGeometry *param_1,float param_2)

{
  return;
}

