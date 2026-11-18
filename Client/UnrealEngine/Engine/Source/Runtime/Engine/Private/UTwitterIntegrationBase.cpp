// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// StaticClass @ 147335980

UClass * __cdecl UTwitterIntegrationBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TwitterIntegrationBase",
               &Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton,
               StaticRegisterNativesUTwitterIntegrationBase,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UTwitterIntegrationBase>,
               InternalVTableHelperCtorCaller<UTwitterIntegrationBase>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton;
}

// UTwitterIntegrationBase @ 147340d70

UTwitterIntegrationBase * __thiscall
UTwitterIntegrationBase::UTwitterIntegrationBase
          (UTwitterIntegrationBase *this,FVTableHelper *param_1)

{
  UPlatformInterfaceBase::UPlatformInterfaceBase((UPlatformInterfaceBase *)this,param_1);
  *(undefined ***)this = &___7UTwitterIntegrationBase__6B_;
  return this;
}

// ~UTwitterIntegrationBase @ 1473422c0

void __thiscall UTwitterIntegrationBase::~UTwitterIntegrationBase(UTwitterIntegrationBase *this)

{
  *(undefined ***)this = &___7UTwitterIntegrationBase__6B_;
  UPlatformInterfaceBase::~UPlatformInterfaceBase((UPlatformInterfaceBase *)this);
  return;
}

// GetPrivateStaticClass @ 1473500e0

UClass * __cdecl UTwitterIntegrationBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TwitterIntegrationBase",
               &Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton,
               StaticRegisterNativesUTwitterIntegrationBase,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UTwitterIntegrationBase>,
               InternalVTableHelperCtorCaller<UTwitterIntegrationBase>,local_res8,
               UPlatformInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTwitterIntegrationBase.InnerSingleton;
}

// StaticRegisterNativesUTwitterIntegrationBase @ 1473588f0

void __cdecl UTwitterIntegrationBase::StaticRegisterNativesUTwitterIntegrationBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UTwitterIntegrationBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAuthorizeAccounts @ 147361150

void __cdecl
UTwitterIntegrationBase::execAuthorizeAccounts(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execCanShowTweetUI @ 147361190

void __cdecl
UTwitterIntegrationBase::execCanShowTweetUI(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetAccountName @ 1473611d0

void __cdecl
UTwitterIntegrationBase::execGetAccountName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined4 local_res8 [2];
  void *local_18 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_18,local_res8[0])
  ;
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetNumAccounts @ 1473612f0

void __cdecl
UTwitterIntegrationBase::execGetNumAccounts(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execInit @ 147361430

void __cdecl UTwitterIntegrationBase::execInit(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147361448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c0))();
  return;
}

// execShowTweetUI @ 147362380

void __cdecl
UTwitterIntegrationBase::execShowTweetUI(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,&local_18,&local_28,&local_38);
  *(undefined1 *)param_3 = uVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execTwitterRequest @ 147362510

void __cdecl
UTwitterIntegrationBase::execTwitterRequest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FString **ppFVar3;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  FString *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (FString *)0x0;
  local_40 = 0;
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
  local_res8[0] = 0;
  ppFVar3 = &local_48;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar3 = (FString **)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2f0))
                    (param_1,&local_38,ppFVar3,local_res8[0],local_res10[0]);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// UTwitterIntegrationBase @ 1485100a0

UTwitterIntegrationBase * __thiscall
UTwitterIntegrationBase::UTwitterIntegrationBase
          (UTwitterIntegrationBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UTwitterIntegrationBase__6B_;
  return this;
}

// AuthorizeAccounts @ 148518270

bool __thiscall UTwitterIntegrationBase::AuthorizeAccounts(UTwitterIntegrationBase *this)

{
  return false;
}

// CanShowTweetUI @ 14851a570

bool __thiscall UTwitterIntegrationBase::CanShowTweetUI(UTwitterIntegrationBase *this)

{
  return false;
}

// GetAccountName @ 1485288c0

FString * __thiscall
UTwitterIntegrationBase::GetAccountName
          (UTwitterIntegrationBase *this,FString *__return_storage_ptr__,int param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetNumAccounts @ 14852baa0

int __thiscall UTwitterIntegrationBase::GetNumAccounts(UTwitterIntegrationBase *this)

{
  return 0;
}

// Init @ 1485311c0

void __thiscall UTwitterIntegrationBase::Init(UTwitterIntegrationBase *this)

{
  return;
}

// ShowTweetUI @ 148546560

bool __thiscall
UTwitterIntegrationBase::ShowTweetUI
          (UTwitterIntegrationBase *this,FString *param_1,FString *param_2,FString *param_3)

{
  return false;
}

// TwitterRequest @ 14854b0d0

bool __thiscall
UTwitterIntegrationBase::TwitterRequest
          (UTwitterIntegrationBase *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,ETwitterRequestMethod param_3,
          int param_4)

{
  return false;
}

