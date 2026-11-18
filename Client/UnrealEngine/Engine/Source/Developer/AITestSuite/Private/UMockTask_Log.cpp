// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 12

// StaticClass @ 146ff6030

UClass * __cdecl UMockTask_Log::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockTask_Log.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockTask_Log",
               &Z_Registration_Info_UClass_UMockTask_Log.InnerSingleton,
               StaticRegisterNativesUMockTask_Log,0x88,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Game",InternalConstructor<UMockTask_Log>,
               InternalVTableHelperCtorCaller<UMockTask_Log>,local_res8,UGameplayTask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockTask_Log.InnerSingleton;
}

// UMockTask_Log @ 14704a4f0

UMockTask_Log * __thiscall UMockTask_Log::UMockTask_Log(UMockTask_Log *this,FVTableHelper *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UMockTask_Log @ 14704a530

UMockTask_Log * __thiscall
UMockTask_Log::UMockTask_Log(UMockTask_Log *this,FObjectInitializer *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->Logger = (FTestLogger<int> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bShoudEndAsPartOfActivation = false;
  return this;
}

// ~UMockTask_Log @ 14704b980

void __thiscall UMockTask_Log::~UMockTask_Log(UMockTask_Log *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  return;
}

// Activate @ 14704f410

void __thiscall UMockTask_Log::Activate(UMockTask_Log *this)

{
  int local_res8 [8];
  
  if (this->Logger != (FTestLogger<int> *)0x0) {
    local_res8[0] = 0;
    FTestLogger<int>::Log(this->Logger,local_res8);
  }
  UGameplayTask::Activate((UGameplayTask *)this);
  if (this->bShoudEndAsPartOfActivation != false) {
    UGameplayTask::EndTask((UGameplayTask *)this);
    return;
  }
  return;
}

// CreateTask @ 147051530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMockTask_Log * __cdecl
UMockTask_Log::CreateTask
          (IGameplayTaskOwnerInterface *param_1,FTestLogger<int> *param_2,
          FGameplayResourceSet *param_3,uchar param_4)

{
  uchar uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UMockTask_Log *this;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar2;
  this = (UMockTask_Log *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(FNameEntryId *)&this->_padding_ = 0;
  *(uint *)((longlong)&this->_padding_ + 4) = 0;
  uVar1 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
  UGameplayTask::InitTask((UGameplayTask *)this,param_1,uVar1);
  this->Logger = param_2;
  ((FGameplayResourceSet *)&this->_padding_)->Flags = param_3->Flags;
  ((FGameplayResourceSet *)&this->_padding_)[1].Flags = param_3->Flags;
  *(uchar *)&this->_padding_ = param_4;
  return this;
}

// ExternalCancel @ 1470521f0

void __thiscall UMockTask_Log::ExternalCancel(UMockTask_Log *this)

{
  int local_res8 [8];
  
  if (this->Logger != (FTestLogger<int> *)0x0) {
    local_res8[0] = 3;
    FTestLogger<int>::Log(this->Logger,local_res8);
  }
  UGameplayTask::ExternalCancel((UGameplayTask *)this);
  return;
}

// ExternalConfirm @ 147052230

void __thiscall UMockTask_Log::ExternalConfirm(UMockTask_Log *this,bool param_1)

{
  int local_res8 [2];
  
  if (this->Logger != (FTestLogger<int> *)0x0) {
    local_res8[0] = 2;
    FTestLogger<int>::Log(this->Logger,local_res8);
  }
  UGameplayTask::ExternalConfirm((UGameplayTask *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 147052630

UClass * __cdecl UMockTask_Log::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockTask_Log.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockTask_Log",
               &Z_Registration_Info_UClass_UMockTask_Log.InnerSingleton,
               StaticRegisterNativesUMockTask_Log,0x88,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Game",InternalConstructor<UMockTask_Log>,
               InternalVTableHelperCtorCaller<UMockTask_Log>,local_res8,UGameplayTask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockTask_Log.InnerSingleton;
}

// OnDestroy @ 1470580a0

void __thiscall UMockTask_Log::OnDestroy(UMockTask_Log *this,bool param_1)

{
  int local_res8 [2];
  
  if (this->Logger != (FTestLogger<int> *)0x0) {
    local_res8[0] = 4;
    FTestLogger<int>::Log(this->Logger,local_res8);
  }
  UGameplayTask::OnDestroy((UGameplayTask *)this,param_1);
  return;
}

// StaticRegisterNativesUMockTask_Log @ 147059940

void __cdecl UMockTask_Log::StaticRegisterNativesUMockTask_Log(void)

{
  return;
}

// TickTask @ 14705a030

void __thiscall UMockTask_Log::TickTask(UMockTask_Log *this,float param_1)

{
  int local_res8 [8];
  
  if (this->Logger != (FTestLogger<int> *)0x0) {
    local_res8[0] = 1;
    FTestLogger<int>::Log(this->Logger,local_res8);
  }
  return;
}

