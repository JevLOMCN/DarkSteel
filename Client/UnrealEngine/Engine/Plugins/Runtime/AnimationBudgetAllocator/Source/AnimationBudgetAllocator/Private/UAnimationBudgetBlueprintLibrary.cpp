// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 10

// StaticClass @ 14a68c210

UClass * __cdecl UAnimationBudgetBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationBudgetAllocator",L"AnimationBudgetBlueprintLibrary",
               &Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAnimationBudgetBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationBudgetBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAnimationBudgetBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton;
}

// UAnimationBudgetBlueprintLibrary @ 14a6924a0

UAnimationBudgetBlueprintLibrary * __thiscall
UAnimationBudgetBlueprintLibrary::UAnimationBudgetBlueprintLibrary
          (UAnimationBudgetBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationBudgetBlueprintLibrary__6B_;
  return this;
}

// UAnimationBudgetBlueprintLibrary @ 14a6924d0

UAnimationBudgetBlueprintLibrary * __thiscall
UAnimationBudgetBlueprintLibrary::UAnimationBudgetBlueprintLibrary
          (UAnimationBudgetBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationBudgetBlueprintLibrary__6B_;
  return this;
}

// ~UAnimationBudgetBlueprintLibrary @ 14a692960

void __thiscall
UAnimationBudgetBlueprintLibrary::~UAnimationBudgetBlueprintLibrary
          (UAnimationBudgetBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UAnimationBudgetBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// EnableAnimationBudget @ 14a695d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(UObject *param_1,bool param_2)

{
  FName FVar1;
  UWorld *pUVar2;
  FName *pFVar3;
  FModuleManager *this;
  IModuleInterface *pIVar4;
  longlong *plVar5;
  FName local_res18 [2];
  
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar2 != (UWorld *)0x0) {
    pFVar3 = ::FName::FName(local_res18,"AnimationBudgetAllocator");
    FVar1 = *pFVar3;
    this = FModuleManager::Get();
    pIVar4 = FModuleManager::LoadModuleChecked(this,FVar1);
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4,pUVar2);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x58))(plVar5,param_2);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14a696810

UClass * __cdecl UAnimationBudgetBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationBudgetAllocator",L"AnimationBudgetBlueprintLibrary",
               &Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAnimationBudgetBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationBudgetBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAnimationBudgetBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.InnerSingleton;
}

// SetAnimationBudgetParameters @ 14a698b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters
          (UObject *param_1,FAnimationBudgetAllocatorParameters *param_2)

{
  FName FVar1;
  UWorld *pUVar2;
  FName *pFVar3;
  FModuleManager *this;
  IModuleInterface *pIVar4;
  longlong *plVar5;
  FName local_res18 [2];
  
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar2 != (UWorld *)0x0) {
    pFVar3 = ::FName::FName(local_res18,"AnimationBudgetAllocator");
    FVar1 = *pFVar3;
    this = FModuleManager::Get();
    pIVar4 = FModuleManager::LoadModuleChecked(this,FVar1);
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4,pUVar2);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x68))(plVar5,param_2);
    }
  }
  return;
}

// StaticRegisterNativesUAnimationBudgetBlueprintLibrary @ 14a699150

void __cdecl
UAnimationBudgetBlueprintLibrary::StaticRegisterNativesUAnimationBudgetBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnableAnimationBudget @ 14a69ab10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAnimationBudgetBlueprintLibrary::execEnableAnimationBudget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UWorld *pUVar3;
  FName *pFVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  longlong *plVar6;
  bool bVar7;
  int local_res10 [2];
  UObject *local_res20;
  FName local_18 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar7 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
  if (pUVar3 != (UWorld *)0x0) {
    pFVar4 = ::FName::FName(local_18,"AnimationBudgetAllocator");
    FVar2 = *pFVar4;
    this = FModuleManager::Get();
    pIVar5 = FModuleManager::LoadModuleChecked(this,FVar2);
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,pUVar3);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x58))(plVar6,bVar7);
    }
  }
  return;
}

// execSetAnimationBudgetParameters @ 14a69ac40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAnimationBudgetBlueprintLibrary::execSetAnimationBudgetParameters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UWorld *pUVar3;
  FName *pFVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  longlong *plVar6;
  uchar *puVar7;
  UObject *local_res10 [2];
  FName local_res20;
  uchar local_78 [96];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = 0x80;
  local_78[3] = '?';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\n';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = 0xa0;
  local_78[0xf] = '@';
  local_78[0x10] = 0xcd;
  local_78[0x11] = 0xcc;
  local_78[0x12] = 'L';
  local_78[0x13] = '?';
  local_78[0x14] = 0xcd;
  local_78[0x15] = 0xcc;
  local_78[0x16] = 0xcc;
  local_78[0x17] = '>';
  local_78[0x18] = '\x06';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\x10';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '@';
  local_78[0x23] = '?';
  local_78[0x24] = '\n';
  local_78[0x25] = 0xd7;
  local_78[0x26] = 0xa3;
  local_78[0x27] = '=';
  local_78[0x28] = '\x04';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\x1e';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = 0xc0;
  local_78[0x33] = '?';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = 0x80;
  local_78[0x37] = '>';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '@';
  local_78[0x3b] = '@';
  local_78[0x3c] = '\x02';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\x14';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '@';
  local_78[0x48] = '\x04';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = ' ';
  local_78[0x4f] = '@';
  local_78[0x50] = '\0';
  local_78[0x51] = '`';
  local_78[0x52] = 0xea;
  local_78[0x53] = 'F';
  local_78[0x54] = 0xa4;
  local_78[0x55] = 0x93;
  local_78[0x56] = 'V';
  local_78[0x57] = 'N';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar7 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UEngine::GetWorldFromContextObject(GEngine,local_res10[0],LogAndReturnNull);
  if (pUVar3 != (UWorld *)0x0) {
    pFVar4 = ::FName::FName(&local_res20,"AnimationBudgetAllocator");
    FVar2 = *pFVar4;
    this = FModuleManager::Get();
    pIVar5 = FModuleManager::LoadModuleChecked(this,FVar2);
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,pUVar3);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x68))(plVar6,puVar7);
    }
  }
  return;
}

