// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149f89940

UClass * __cdecl UPCGDeterminismTestBlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDeterminismTestBlueprintBase",
               &Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton,
               StaticRegisterNativesUPCGDeterminismTestBlueprintBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDeterminismTestBlueprintBase>,
               InternalVTableHelperCtorCaller<UPCGDeterminismTestBlueprintBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton;
}

// UPCGDeterminismTestBlueprintBase @ 149f951b0

UPCGDeterminismTestBlueprintBase * __thiscall
UPCGDeterminismTestBlueprintBase::UPCGDeterminismTestBlueprintBase
          (UPCGDeterminismTestBlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGDeterminismTestBlueprintBase__6B_;
  return this;
}

// UPCGDeterminismTestBlueprintBase @ 149f951e0

UPCGDeterminismTestBlueprintBase * __thiscall
UPCGDeterminismTestBlueprintBase::UPCGDeterminismTestBlueprintBase
          (UPCGDeterminismTestBlueprintBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGDeterminismTestBlueprintBase__6B_;
  return this;
}

// ~UPCGDeterminismTestBlueprintBase @ 149f953a0

void __thiscall
UPCGDeterminismTestBlueprintBase::~UPCGDeterminismTestBlueprintBase
          (UPCGDeterminismTestBlueprintBase *this)

{
  *(undefined ***)this = &___7UPCGDeterminismTestBlueprintBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ExecuteTest @ 149f99fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGDeterminismTestBlueprintBase::ExecuteTest
          (UPCGDeterminismTestBlueprintBase *this,UPCGNode *param_1,FDeterminismTestResult *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_f8 [32];
  UPCGNode *local_d8;
  FDeterminismTestResult local_d0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FDeterminismTestResult::FDeterminismTestResult(&local_d0);
  local_d8 = param_1;
  FDeterminismTestResult::operator=(&local_d0,param_2);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPCGDeterminismTestBlueprintBase_ExecuteTest);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_d8);
  FDeterminismTestResult::operator=(param_2,&local_d0);
  FDeterminismTestResult::~FDeterminismTestResult(&local_d0);
  return;
}

// ExecuteTest_Implementation @ 149f9a060

void __thiscall
UPCGDeterminismTestBlueprintBase::ExecuteTest_Implementation
          (UPCGDeterminismTestBlueprintBase *this,UPCGNode *param_1,FDeterminismTestResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *this_00;
  FString *pFVar3;
  FName *pFVar4;
  UPCGSettings *this_01;
  wchar_t *pwVar5;
  FName local_res10;
  FString local_28;
  FText local_18;
  
  this_00 = UPCGNode::GetNodeTitle(param_1,&local_18,ListView);
  pFVar3 = FText::ToString(this_00);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName(&local_res10,pwVar5);
  param_2->TestResultTitle = *pFVar4;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_res10 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res10,&local_28);
  pFVar3 = &param_2->TestResultName;
  if (pFVar3 != &local_28) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (param_2->TestResultName).Data.ArrayNum = local_28.Data.ArrayNum;
    (param_2->TestResultName).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this_01 = UPCGNode::GetSettings(param_1);
  iVar2 = UPCGSettings::GetSeed(this_01,(IPCGGraphExecutionSource *)0x0);
  param_2->Seed = iVar2;
  PCGDeterminismTests::RunDeterminismTest
            (param_1,param_2,&PCGDeterminismTests::Defaults::DeterminismBasicTestInfo);
  return;
}

// GetPrivateStaticClass @ 149f9cbb0

UClass * __cdecl UPCGDeterminismTestBlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDeterminismTestBlueprintBase",
               &Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton,
               StaticRegisterNativesUPCGDeterminismTestBlueprintBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDeterminismTestBlueprintBase>,
               InternalVTableHelperCtorCaller<UPCGDeterminismTestBlueprintBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton;
}

// StaticRegisterNativesUPCGDeterminismTestBlueprintBase @ 149fa1460

void __cdecl
UPCGDeterminismTestBlueprintBase::StaticRegisterNativesUPCGDeterminismTestBlueprintBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execExecuteTest @ 149fa1ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
UPCGDeterminismTestBlueprintBase::execExecuteTest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_118 [32];
  undefined8 local_e8 [2];
  undefined8 local_d8;
  FName local_d0;
  FString local_c8;
  undefined4 local_b8;
  FPCGDataTypeIdentifier local_b0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  FString *local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_e8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_d8 = 0xffffffffffffffff;
  ::FName::FName(&local_d0,L"Untitled");
  ::FString::FString(&local_c8,L"Unnamed");
  local_b8 = 0xffffffff;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_b0,None);
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (FString *)0x0;
  local_40 = 0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_e8[0]);
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar2 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_b0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Ids.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

