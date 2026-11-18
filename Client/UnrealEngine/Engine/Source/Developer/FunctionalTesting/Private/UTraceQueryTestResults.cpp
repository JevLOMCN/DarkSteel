// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 10

// StaticClass @ 148c72700

UClass * __cdecl UTraceQueryTestResults::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"TraceQueryTestResults",
               &Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton,
               StaticRegisterNativesUTraceQueryTestResults,0xf90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTraceQueryTestResults>,
               InternalVTableHelperCtorCaller<UTraceQueryTestResults>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton;
}

// UTraceQueryTestResults @ 148c806b0

UTraceQueryTestResults * __thiscall
UTraceQueryTestResults::UTraceQueryTestResults(UTraceQueryTestResults *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTraceQueryTestResults__6B_;
  FTraceQueryTestResultsInner::FTraceQueryTestResultsInner(&this->ChannelResults);
  FTraceQueryTestResultsInner::FTraceQueryTestResultsInner(&this->ObjectResults);
  FTraceQueryTestResultsInner::FTraceQueryTestResultsInner(&this->ProfileResults);
  (this->BatchOptions).bLineTrace = true;
  (this->BatchOptions).bSphereTrace = false;
  (this->BatchOptions).bCapsuleTrace = false;
  (this->BatchOptions).bBoxTrace = false;
  (this->BatchOptions).bChannelTrace = true;
  (this->BatchOptions).bObjectsTrace = false;
  (this->BatchOptions).bProfileTrace = false;
  return this;
}

// UTraceQueryTestResults @ 148c80720

UTraceQueryTestResults * __thiscall
UTraceQueryTestResults::UTraceQueryTestResults
          (UTraceQueryTestResults *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTraceQueryTestResults__6B_;
  FTraceQueryTestResultsInner::FTraceQueryTestResultsInner(&this->ChannelResults);
  FTraceQueryTestResultsInner::FTraceQueryTestResultsInner(&this->ObjectResults);
  FTraceQueryTestResultsInner::FTraceQueryTestResultsInner(&this->ProfileResults);
  (this->BatchOptions).bLineTrace = true;
  (this->BatchOptions).bSphereTrace = false;
  (this->BatchOptions).bCapsuleTrace = false;
  (this->BatchOptions).bBoxTrace = false;
  (this->BatchOptions).bChannelTrace = true;
  (this->BatchOptions).bObjectsTrace = false;
  (this->BatchOptions).bProfileTrace = false;
  return this;
}

// ~UTraceQueryTestResults @ 148c813b0

void __thiscall UTraceQueryTestResults::~UTraceQueryTestResults(UTraceQueryTestResults *this)

{
  this->_padding_ = (longlong)&___7UTraceQueryTestResults__6B_;
  FTraceQueryTestResultsInner::~FTraceQueryTestResultsInner(&this->ProfileResults);
  FTraceQueryTestResultsInner::~FTraceQueryTestResultsInner(&this->ObjectResults);
  FTraceQueryTestResultsInner::~FTraceQueryTestResultsInner(&this->ChannelResults);
  UObject::~UObject((UObject *)this);
  return;
}

// AssertEqual @ 148c84c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UTraceQueryTestResults::AssertEqual
          (UTraceQueryTestResults *this,UTraceQueryTestResults *param_1,FString *param_2,
          UObject *param_3,AFunctionalTest *param_4)

{
  bool bVar1;
  bool bVar2;
  FName local_res10;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (param_1 == (UTraceQueryTestResults *)0x0) {
    if (param_3 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
      local_res10.Number = *(uint *)&param_3->field_0x1c;
      ::FName::ToString(&local_res10,&local_70);
    }
    ::FString::PrintfImpl(&local_50,L"Expected \'%s\' \'Expected != nullptr\' for context \'%s\'");
    AFunctionalTest::LogStep(param_4,Error,&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  else if ((((((param_1->BatchOptions).bLineTrace == (this->BatchOptions).bLineTrace) &&
             ((param_1->BatchOptions).bSphereTrace == (this->BatchOptions).bSphereTrace)) &&
            ((param_1->BatchOptions).bCapsuleTrace == (this->BatchOptions).bCapsuleTrace)) &&
           (((param_1->BatchOptions).bBoxTrace == (this->BatchOptions).bBoxTrace &&
            ((param_1->BatchOptions).bChannelTrace == (this->BatchOptions).bChannelTrace)))) &&
          (((param_1->BatchOptions).bObjectsTrace == (this->BatchOptions).bObjectsTrace &&
           ((param_1->BatchOptions).bProfileTrace == (this->BatchOptions).bProfileTrace)))) {
    ::FString::PrintfImpl(&local_50,L"%s_Channel");
    bVar1 = FTraceQueryTestResultsInner::AssertEqual
                      (&this->ChannelResults,&param_1->ChannelResults,&local_50,param_3,param_4);
    local_res10.ComparisonIndex.Value._0_1_ = bVar1;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_50,L"%s_Object");
    bVar1 = FTraceQueryTestResultsInner::AssertEqual
                      (&this->ObjectResults,&param_1->ObjectResults,&local_50,param_3,param_4);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_50,L"%s_Profile");
    bVar2 = FTraceQueryTestResultsInner::AssertEqual
                      (&this->ProfileResults,&param_1->ProfileResults,&local_50,param_3,param_4);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if ((((char)local_res10.ComparisonIndex.Value != '\0') && (bVar1)) && (bVar2)) {
      ::FString::PrintfImpl(&local_50,L"TraceQueryTestResults assertion passed (%s)");
      AFunctionalTest::LogStep(param_4,Log,&local_50);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (param_3 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
      local_res10.Number = *(uint *)&param_3->field_0x1c;
      ::FName::ToString(&local_res10,&local_70);
    }
    ::FString::PrintfImpl(&local_50,L"\'%s\' comparison failed for context \'%s\'");
    AFunctionalTest::LogStep(param_4,Error,&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (param_3 != (UObject *)0x0) {
      local_res10.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
      local_res10.Number = *(uint *)&param_3->field_0x1c;
      ::FName::ToString(&local_res10,&local_50);
    }
    ::FString::PrintfImpl
              (&local_60,
               L"bLineTrace:%d, bSphereTrace:%d, bCapsuleTrace:%d, bBoxTrace:%d, bChannelTrace:%d, bObjectsTrace:%d, bProfileTrace:%d"
              );
    ::FString::PrintfImpl
              (&local_70,
               L"bLineTrace:%d, bSphereTrace:%d, bCapsuleTrace:%d, bBoxTrace:%d, bChannelTrace:%d, bObjectsTrace:%d, bProfileTrace:%d"
              );
    ::FString::PrintfImpl
              (&local_40,L"Expected \'%s\' to be {%s} but it was {%s} for context \'%s\'");
    AFunctionalTest::LogStep(param_4,Error,&local_40);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    local_70.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
      local_70.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
    }
  }
  if ((param_3 != (UObject *)0x0) &&
     (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return false;
}

// CaptureNames @ 148c8aa20

void __thiscall UTraceQueryTestResults::CaptureNames(UTraceQueryTestResults *this)

{
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ChannelResults).LineResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ChannelResults).SphereResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ChannelResults).CapsuleResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ChannelResults).BoxResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ObjectResults).LineResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ObjectResults).SphereResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ObjectResults).CapsuleResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ObjectResults).BoxResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ProfileResults).LineResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ProfileResults).SphereResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ProfileResults).CapsuleResults);
  FTraceQueryTestResultsInnerMost::CaptureNames(&(this->ProfileResults).BoxResults);
  return;
}

// GetPrivateStaticClass @ 148c91dd0

UClass * __cdecl UTraceQueryTestResults::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"TraceQueryTestResults",
               &Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton,
               StaticRegisterNativesUTraceQueryTestResults,0xf90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTraceQueryTestResults>,
               InternalVTableHelperCtorCaller<UTraceQueryTestResults>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTraceQueryTestResults.InnerSingleton;
}

// StaticRegisterNativesUTraceQueryTestResults @ 148c9d5c0

void __cdecl UTraceQueryTestResults::StaticRegisterNativesUTraceQueryTestResults(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UTraceQueryTestResults_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToString @ 148c9f2e0

FString * __thiscall
UTraceQueryTestResults::ToString(UTraceQueryTestResults *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  
  CaptureNames(this);
  if ((this->BatchOptions).bChannelTrace == false) {
    pFVar3 = ::FString::FString(&local_48,"");
    FVar5.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    FTraceQueryTestResultsInner::ToString(&this->ChannelResults,&local_58,&this->BatchOptions);
    ::FString::PrintfImpl(&local_68,L"ChannelResults:\n%s\n\n");
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if ((this->BatchOptions).bObjectsTrace == false) {
    pFVar3 = ::FString::FString(&local_48,"");
    bVar7 = 0x20;
  }
  else {
    FTraceQueryTestResultsInner::ToString(&this->ObjectResults,&local_58,&this->BatchOptions);
    ::FString::PrintfImpl(&local_68,L"ObjectResults:\n%s\n\n");
    pFVar3 = &local_68;
    bVar7 = 0x18;
  }
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if (((bVar7 & 0x20) != 0) &&
     (bVar7 = bVar7 & 0xdf, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (((bVar7 & 0x10) != 0) &&
     (bVar7 = bVar7 & 0xef, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (((bVar7 & 8) != 0) &&
     (bVar7 = bVar7 & 0xf7, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar8 = (this->BatchOptions).bProfileTrace == false;
  if (bVar8) {
    pFVar3 = ::FString::FString(&local_48,"");
    bVar6 = 0;
  }
  else {
    FTraceQueryTestResultsInner::ToString(&this->ProfileResults,&local_58,&this->BatchOptions);
    ::FString::PrintfImpl(&local_68,L"ProfileResults:\n%s\n\n");
    pFVar3 = &local_68;
    bVar6 = 0xc0;
  }
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if ((bVar8) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  bVar7 = bVar6 | bVar7;
  if (((char)bVar7 < '\0') &&
     (bVar7 = bVar6 & 0x7f, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
  {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (((bVar7 & 0x40) != 0) &&
     (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s%s");
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return __return_storage_ptr__;
}

// execToString @ 148cabaf0

void __cdecl UTraceQueryTestResults::execToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ToString((UTraceQueryTestResults *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

