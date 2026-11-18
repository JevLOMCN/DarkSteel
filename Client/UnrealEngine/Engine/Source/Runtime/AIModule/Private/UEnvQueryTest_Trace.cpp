// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 18

// StaticClass @ 146f13740

UClass * __cdecl UEnvQueryTest_Trace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Trace",
               &Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Trace,0x2e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Trace>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Trace>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton;
}

// UEnvQueryTest_Trace @ 146f2d820

UEnvQueryTest_Trace * __thiscall
UEnvQueryTest_Trace::UEnvQueryTest_Trace(UEnvQueryTest_Trace *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FFieldClass *pFVar3;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Trace__6B_;
  (this->TraceData).NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->TraceData).TraceChannel = '\0';
  (this->TraceData).SerializedChannel = '\0';
  (this->TraceData).VersionNum = 0;
  (this->TraceData).ProjectDown = 1024.0;
  (this->TraceData).ProjectUp = 1024.0;
  (this->TraceData).ExtentX = 10.0;
  (this->TraceData).ExtentY = 10.0;
  (this->TraceData).ExtentZ = 10.0;
  (this->TraceData).PostProjectionVerticalOffset = 0.0;
  (this->TraceData).TraceProfileName.ComparisonIndex = 0;
  (this->TraceData).TraceProfileName.Number = 0;
  (this->TraceData).TraceShape = '\0';
  (this->TraceData).TraceMode = '\0';
  puVar2 = &(this->TraceData).field_0x38;
  (this->TraceData).bTraceComplex = 0;
  (this->TraceData).bCanProjectDown = 0;
  (this->TraceData).bCanDisableTrace = 1;
  (this->TraceData).bCanTraceOnGeometry = 1;
  (this->TraceData).bCanTraceOnNavMesh = 1;
  (this->TraceData).bOnlyBlockingHits = 1;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext).DefaultValue = false;
  pFVar3 = FBoolProperty::StaticClass();
  (this->TraceFromContext)._padding_ = (longlong)pFVar3;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ItemHeightOffset).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->ItemHeightOffset)._padding_ = (longlong)pFVar3;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ContextHeightOffset).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->ContextHeightOffset)._padding_ = (longlong)pFVar3;
  (this->Context).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryTest_Trace @ 146f2d990

UEnvQueryTest_Trace * __thiscall
UEnvQueryTest_Trace::UEnvQueryTest_Trace(UEnvQueryTest_Trace *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  FFieldClass *pFVar4;
  UClass *pUVar5;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Trace__6B_;
  (this->TraceData).NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->TraceData).TraceChannel = '\0';
  (this->TraceData).SerializedChannel = '\0';
  (this->TraceData).VersionNum = 0;
  (this->TraceData).ProjectDown = 1024.0;
  (this->TraceData).ProjectUp = 1024.0;
  (this->TraceData).ExtentX = 10.0;
  (this->TraceData).ExtentY = 10.0;
  (this->TraceData).ExtentZ = 10.0;
  (this->TraceData).PostProjectionVerticalOffset = 0.0;
  (this->TraceData).TraceProfileName.ComparisonIndex = 0;
  (this->TraceData).TraceProfileName.Number = 0;
  (this->TraceData).TraceShape = '\0';
  (this->TraceData).TraceMode = '\0';
  puVar2 = &(this->TraceData).field_0x38;
  (this->TraceData).bTraceComplex = 0;
  (this->TraceData).bCanProjectDown = 0;
  (this->TraceData).bCanDisableTrace = 1;
  (this->TraceData).bCanTraceOnGeometry = 1;
  (this->TraceData).bCanTraceOnNavMesh = 1;
  (this->TraceData).bOnlyBlockingHits = 1;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext)._padding_ = 0;
  (this->TraceFromContext).DefaultValue = false;
  pFVar4 = FBoolProperty::StaticClass();
  (this->TraceFromContext)._padding_ = (longlong)pFVar4;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = 0;
  (this->ItemHeightOffset)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ItemHeightOffset).DefaultValue = 0.0;
  pFVar4 = FFloatProperty::StaticClass();
  (this->ItemHeightOffset)._padding_ = (longlong)pFVar4;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = 0;
  (this->ContextHeightOffset)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ContextHeightOffset).DefaultValue = 0.0;
  pFVar4 = FFloatProperty::StaticClass();
  (this->ContextHeightOffset)._padding_ = (longlong)pFVar4;
  (this->Context).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined1 *)&this->_padding_ = 2;
  pUVar5 = UEnvQueryItemType_VectorBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  if (*(char *)((longlong)&this->_padding_ + 2) != '\x03') {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  pUVar5 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Context).Class.field0_0x0.DebugPtr = pUVar5;
  (this->TraceData).TraceMode.Value = '\x02';
  puVar2 = &(this->TraceData).field_0x38;
  (this->TraceData).bCanTraceOnNavMesh = 0;
  (this->TraceData).bCanDisableTrace = 0;
  (this->TraceData).bCanTraceOnGeometry = 1;
  return this;
}

// ~UEnvQueryTest_Trace @ 146f2f2b0

void __thiscall UEnvQueryTest_Trace::~UEnvQueryTest_Trace(UEnvQueryTest_Trace *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Trace__6B_;
  (this->ContextHeightOffset)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ItemHeightOffset)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->TraceFromContext)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GetDescriptionDetails @ 146f53670

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryTest_Trace::GetDescriptionDetails(UEnvQueryTest_Trace *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  ::FString::FString(&local_58,"hit");
  pFVar1 = UEnvQueryTest::DescribeBoolTestParams((UEnvQueryTest *)this,&local_38,&local_58);
  pFVar2 = FEnvTraceData::ToText(&this->TraceData,&local_28,Detailed);
  pFVar3 = FText::FromString(&local_48,"{0}\n{1}");
  pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
  FText::Format<FText,FText>(__return_storage_ptr__,pFVar4,pFVar2,pFVar1);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f553d0

FText * __thiscall
UEnvQueryTest_Trace::GetDescriptionTitle(UEnvQueryTest_Trace *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UEnum *this_00;
  FText *this_01;
  FString *pFVar8;
  UClass *pUVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  UClass *pUVar12;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FText local_78;
  FText local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_00 = StaticEnum<enum_ETraceTypeQuery>();
  this_01 = UEnum::GetDisplayNameTextByValue
                      (this_00,&local_68,(ulonglong)(this->TraceData).TraceChannel.Value);
  pFVar8 = FText::ToString(this_01);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = (pFVar8->Data).ArrayNum;
  lVar11 = (longlong)local_80;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80,0,&local_88,local_80,&local_7c);
    memcpy(local_88.Data,pFVar2,lVar11 * 2);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if ((this->TraceFromContext)._padding_ == 0) {
    pUVar12 = (this->Context).Class.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar12 != (UClass *)0x0) goto LAB_146f55566;
LAB_146f55594:
      pUVar12 = (UClass *)0x0;
    }
    else {
      if (pUVar12 == (UClass *)0x0) goto LAB_146f55594;
      UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_146f55566:
      pUVar9 = UEnvQueryContext::StaticClass();
      if (pUVar9 == (UClass *)0x0) goto LAB_146f55594;
      iVar1 = (int)pUVar9->_padding_;
      if (((int)pUVar12->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_146f55594;
    }
    UEnvQueryTypes::GetShortTypeName(&local_78,(UObject *)pUVar12);
    FText::ToString(&local_78);
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
    pFVar8 = &local_58;
    pwVar10 = L"%s %s";
    goto LAB_146f555ea;
  }
  FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->TraceFromContext,&local_38);
  pUVar12 = (this->Context).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar12 != (UClass *)0x0) goto LAB_146f554d9;
LAB_146f55507:
    pUVar12 = (UClass *)0x0;
  }
  else {
    if (pUVar12 == (UClass *)0x0) goto LAB_146f55507;
    UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_146f554d9:
    pUVar9 = UEnvQueryContext::StaticClass();
    if (pUVar9 == (UClass *)0x0) goto LAB_146f55507;
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar12->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146f55507;
  }
  UEnvQueryTypes::GetShortTypeName(&local_68,(UObject *)pUVar12);
  FText::ToString(&local_68);
  pFVar8 = &local_48;
  bVar7 = true;
  bVar6 = true;
  bVar5 = true;
  bVar4 = false;
  bVar3 = false;
  pwVar10 = L"%s, direction: %s";
LAB_146f555ea:
  ::FString::PrintfImpl(pFVar8,pwVar10);
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_78.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_68.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if ((bVar7) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  UEnvQueryTypes::GetShortTypeName(&local_78,(UObject *)this);
  FText::ToString(&local_78);
  ::FString::PrintfImpl((FString *)&local_68,L"%s: %s on %s");
  FText::FromString(__return_storage_ptr__,(FString *)&local_68);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_68.TextData.Reference);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f59610

UClass * __cdecl UEnvQueryTest_Trace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Trace",
               &Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Trace,0x2e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Trace>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Trace>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Trace.InnerSingleton;
}

// PostLoad @ 146f60020

void __thiscall UEnvQueryTest_Trace::PostLoad(UEnvQueryTest_Trace *this)

{
  TEnumAsByte<ETraceTypeQuery> *pTVar1;
  TEnumAsByte<ECollisionChannel> *pTVar2;
  ECollisionChannel EVar3;
  ETraceTypeQuery EVar4;
  
  UEnvQueryTest::PostLoad((UEnvQueryTest *)this);
  pTVar1 = &(this->TraceData).TraceChannel;
  pTVar2 = &(this->TraceData).SerializedChannel;
  if ((this->TraceData).VersionNum == 0) {
    EVar3 = UEngineTypes::ConvertToCollisionChannel((uint)pTVar1->Value);
    pTVar2->Value = (uchar)EVar3;
  }
  EVar4 = UEngineTypes::ConvertToTraceType((uint)pTVar2->Value);
  pTVar1->Value = (uchar)EVar4;
  (this->TraceData).VersionNum = 1;
  return;
}

// RunBoxTraceFrom @ 146f675f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEnvQueryTest_Trace::RunBoxTraceFrom
          (UEnvQueryTest_Trace *this,TVector<double> *param_1,TVector<double> *param_2,
          AActor *param_3,UWorld *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          TVector<double> *param_7)

{
  bool bVar1;
  TQuat<double> *pTVar2;
  undefined1 auStackY_188 [32];
  FCollisionShape local_148;
  TVector<double>_u_0 local_138;
  TQuat<double> local_118;
  TRotator<double> local_f8;
  TQuat<double> local_d8;
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FCollisionQueryParams::FCollisionQueryParams(&local_b8,param_6);
  FCollisionQueryParams::AddIgnoredActor(&local_b8,param_3);
  local_148.ShapeType = Box;
  local_148.field1_0x4.Box.HalfExtentX = (float)(param_7->field0_0x0)._s_0.X;
  local_148.field1_0x4.Box.HalfExtentY = (float)(param_7->field0_0x0)._s_0.Y;
  local_138._s_0.X = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  local_148.field1_0x4.Box.HalfExtentZ = (float)(param_7->field0_0x0)._s_0.Z;
  local_138._s_0.Z = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  local_138._s_0.Y = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_138._s_0,&local_f8);
  pTVar2 = UE::Math::TRotator<double>::Quaternion(&local_f8,&local_d8);
  local_118.X = pTVar2->X;
  local_118.Y = pTVar2->Y;
  local_118.Z = pTVar2->Z;
  local_118.W = pTVar2->W;
  bVar1 = UWorld::SweepTestByChannel
                    (param_4,param_1,param_2,&local_118,param_5,&local_148,&local_b8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar1;
}

// RunBoxTraceTo @ 146f67790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEnvQueryTest_Trace::RunBoxTraceTo
          (UEnvQueryTest_Trace *this,TVector<double> *param_1,TVector<double> *param_2,
          AActor *param_3,UWorld *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          TVector<double> *param_7)

{
  bool bVar1;
  TQuat<double> *pTVar2;
  undefined1 auStackY_188 [32];
  FCollisionShape local_148;
  TVector<double>_u_0 local_138;
  TQuat<double> local_118;
  TRotator<double> local_f8;
  TQuat<double> local_d8;
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FCollisionQueryParams::FCollisionQueryParams(&local_b8,param_6);
  FCollisionQueryParams::AddIgnoredActor(&local_b8,param_3);
  local_148.ShapeType = Box;
  local_148.field1_0x4.Box.HalfExtentX = (float)(param_7->field0_0x0)._s_0.X;
  local_148.field1_0x4.Box.HalfExtentY = (float)(param_7->field0_0x0)._s_0.Y;
  local_138._s_0.X = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  local_148.field1_0x4.Box.HalfExtentZ = (float)(param_7->field0_0x0)._s_0.Z;
  local_138._s_0.Z = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  local_138._s_0.Y = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_138._s_0,&local_f8);
  pTVar2 = UE::Math::TRotator<double>::Quaternion(&local_f8,&local_d8);
  local_118.X = pTVar2->X;
  local_118.Y = pTVar2->Y;
  local_118.Z = pTVar2->Z;
  local_118.W = pTVar2->W;
  bVar1 = UWorld::SweepTestByChannel
                    (param_4,param_2,param_1,&local_118,param_5,&local_148,&local_b8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar1;
}

// RunCapsuleTraceFrom @ 146f67b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UEnvQueryTest_Trace::RunCapsuleTraceFrom
          (UEnvQueryTest_Trace *this,TVector<double> *param_1,TVector<double> *param_2,
          AActor *param_3,UWorld *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          TVector<double> *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined1 auStackY_138 [32];
  FCollisionShape local_f8;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FCollisionQueryParams::FCollisionQueryParams(&local_e8,param_6);
  FCollisionQueryParams::AddIgnoredActor(&local_e8,param_3);
  dVar2 = __real_3fb0000000000000;
  dVar5 = (param_7->field0_0x0)._s_0.Z;
  fVar7 = (float)dVar5;
  dVar5 = (double)fVar7 - dVar5;
  if ((__real_3fb0000000000000 <
       (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  dVar5 = (param_7->field0_0x0)._s_0.X;
  fVar6 = (float)dVar5;
  dVar5 = (double)fVar6 - dVar5;
  if ((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_f8.ShapeType = Capsule;
  local_f8.field1_0x4.Box.HalfExtentX = fVar6;
  local_f8.field1_0x4.Box.HalfExtentY = fVar7;
  bVar3 = UWorld::SweepTestByChannel
                    (param_4,param_1,param_2,&UE::Math::TQuat<double>::Identity,param_5,&local_f8,
                     &local_e8,&FCollisionResponseParams::DefaultResponseParam);
  if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// RunCapsuleTraceTo @ 146f67cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEnvQueryTest_Trace::RunCapsuleTraceTo
          (UEnvQueryTest_Trace *this,TVector<double> *param_1,TVector<double> *param_2,
          AActor *param_3,UWorld *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          TVector<double> *param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined1 auStackY_138 [32];
  FCollisionShape local_f8;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FCollisionQueryParams::FCollisionQueryParams(&local_e8,param_6);
  FCollisionQueryParams::AddIgnoredActor(&local_e8,param_3);
  dVar2 = __real_3fb0000000000000;
  dVar5 = (param_7->field0_0x0)._s_0.Z;
  fVar7 = (float)dVar5;
  dVar5 = (double)fVar7 - dVar5;
  if ((__real_3fb0000000000000 <
       (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  dVar5 = (param_7->field0_0x0)._s_0.X;
  fVar6 = (float)dVar5;
  dVar5 = (double)fVar6 - dVar5;
  if ((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_f8.ShapeType = Capsule;
  local_f8.field1_0x4.Box.HalfExtentX = fVar6;
  local_f8.field1_0x4.Box.HalfExtentY = fVar7;
  bVar3 = UWorld::SweepTestByChannel
                    (param_4,param_2,param_1,&UE::Math::TQuat<double>::Identity,param_5,&local_f8,
                     &local_e8,&FCollisionResponseParams::DefaultResponseParam);
  if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// RunLineTraceFrom @ 146f68830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEnvQueryTest_Trace::RunLineTraceFrom
          (UEnvQueryTest_Trace *this,TVector<double> *param_1,TVector<double> *param_2,
          AActor *param_3,UWorld *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          TVector<double> *param_7)

{
  bool bVar1;
  undefined1 auStackY_e8 [32];
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FCollisionQueryParams::FCollisionQueryParams(&local_b8,param_6);
  FCollisionQueryParams::AddIgnoredActor(&local_b8,param_3);
  bVar1 = UWorld::LineTraceTestByChannel
                    (param_4,param_1,param_2,param_5,&local_b8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar1;
}

// RunLineTraceTo @ 146f68900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UEnvQueryTest_Trace::RunLineTraceTo
          (UEnvQueryTest_Trace *this,TVector<double> *param_1,TVector<double> *param_2,
          AActor *param_3,UWorld *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          TVector<double> *param_7)

{
  bool bVar1;
  undefined1 auStackY_e8 [32];
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FCollisionQueryParams::FCollisionQueryParams(&local_b8,param_6);
  FCollisionQueryParams::AddIgnoredActor(&local_b8,param_3);
  bVar1 = UWorld::LineTraceTestByChannel
                    (param_4,param_2,param_1,param_5,&local_b8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar1;
}

// RunSphereTraceFrom @ 146f6b820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UEnvQueryTest_Trace::RunSphereTraceFrom
          (UEnvQueryTest_Trace *this,TVector<double> *param_1,TVector<double> *param_2,
          AActor *param_3,UWorld *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          TVector<double> *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  double dVar4;
  undefined1 auStackY_118 [32];
  FCollisionShape local_d8;
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FCollisionQueryParams::FCollisionQueryParams(&local_c8,param_6);
  FCollisionQueryParams::AddIgnoredActor(&local_c8,param_3);
  dVar4 = (param_7->field0_0x0)._s_0.X;
  local_d8.field1_0x4.Box.HalfExtentX = (float)dVar4;
  dVar4 = (double)local_d8.field1_0x4.Box.HalfExtentX - dVar4;
  if (__real_3fb0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FloatFitsIn<OutType>(In, Precision)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xc0,L"Loss of data caused by narrowing conversion");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_d8.ShapeType = Sphere;
  bVar2 = UWorld::SweepTestByChannel
                    (param_4,param_1,param_2,&UE::Math::TQuat<double>::Identity,param_5,&local_d8,
                     &local_c8,&FCollisionResponseParams::DefaultResponseParam);
  if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar2;
}

// RunSphereTraceTo @ 146f6b970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEnvQueryTest_Trace::RunSphereTraceTo
          (UEnvQueryTest_Trace *this,TVector<double> *param_1,TVector<double> *param_2,
          AActor *param_3,UWorld *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          TVector<double> *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  double dVar4;
  undefined1 auStackY_118 [32];
  FCollisionShape local_d8;
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FCollisionQueryParams::FCollisionQueryParams(&local_c8,param_6);
  FCollisionQueryParams::AddIgnoredActor(&local_c8,param_3);
  dVar4 = (param_7->field0_0x0)._s_0.X;
  local_d8.field1_0x4.Box.HalfExtentX = (float)dVar4;
  dVar4 = (double)local_d8.field1_0x4.Box.HalfExtentX - dVar4;
  if (__real_3fb0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FloatFitsIn<OutType>(In, Precision)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xc0,L"Loss of data caused by narrowing conversion");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_d8.ShapeType = Sphere;
  bVar2 = UWorld::SweepTestByChannel
                    (param_4,param_2,param_1,&UE::Math::TQuat<double>::Identity,param_5,&local_d8,
                     &local_c8,&FCollisionResponseParams::DefaultResponseParam);
  if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar2;
}

// RunTest @ 146f71a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnvQueryTest_Trace::RunTest(UEnvQueryTest_Trace *this,FEnvQueryInstance *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  uchar uVar4;
  int iVar5;
  FName FVar6;
  UClass *pUVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  UObject *pUVar14;
  FProperty *pFVar15;
  longlong *plVar16;
  bool *pbVar17;
  float *pfVar18;
  UClass *pUVar19;
  FName *pFVar20;
  UClass *pUVar21;
  UClass *pUVar22;
  Type TVar23;
  Type TVar24;
  undefined1 auStackY_218 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5 [5];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_1a0;
  TStatId local_190;
  TArrayView<UE::Math::TVector<double>,int> local_188;
  TArrayView<UE::Math::TVector<double>,int> local_178;
  TArrayView<UE::Math::TVector<double>,int> local_168;
  TArrayView<UE::Math::TVector<double>,int> local_158;
  TArrayView<UE::Math::TVector<double>,int> local_148;
  TArrayView<UE::Math::TVector<double>,int> local_138;
  TArrayView<UE::Math::TVector<double>,int> local_128;
  TArrayView<UE::Math::TVector<double>,int> local_118;
  FName local_108;
  FName local_100;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  plVar16 = (longlong *)this->_padding_;
  lVar9 = param_1->_padding_;
  pUVar22 = (UClass *)0x0;
  if (plVar16 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*plVar16 + 0x2b0))(plVar16,pUVar14,(int)lVar9);
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar11 = (**(code **)(this->_padding_ + 8))(&this->_padding_), cVar11 == '\0')) {
          local_1b8 = 0;
          bVar10 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_1b8);
          if (!bVar10) goto LAB_146f71afd;
        }
        this->_padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f71afd:
  lVar9 = param_1->_padding_;
  plVar16 = (longlong *)(this->TraceFromContext)._padding_;
  if (plVar16 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      (this->TraceFromContext)._padding_ = 0;
      (**(code **)(*plVar16 + 0x2b0))(plVar16,pUVar14,(int)lVar9);
      FVar6 = (FName)(this->TraceFromContext)._padding_;
      if (FVar6 != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->TraceFromContext)._padding_ + 0x10),FVar6);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar11 = (**(code **)((this->TraceFromContext)._padding_ + 8))(&this->TraceFromContext),
           cVar11 == '\0')) {
          local_1b7 = 0;
          bVar10 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_1b7);
          if (!bVar10) goto LAB_146f71b9b;
        }
        (this->TraceFromContext)._padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f71b9b:
  lVar9 = param_1->_padding_;
  plVar16 = (longlong *)(this->ItemHeightOffset)._padding_;
  if (plVar16 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      (this->ItemHeightOffset)._padding_ = 0;
      (**(code **)(*plVar16 + 0x2b0))(plVar16,pUVar14,(int)lVar9);
      FVar6 = (FName)(this->ItemHeightOffset)._padding_;
      if (FVar6 != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->ItemHeightOffset)._padding_ + 0x10),FVar6);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar11 = (**(code **)((this->ItemHeightOffset)._padding_ + 8))(&this->ItemHeightOffset),
           cVar11 == '\0')) {
          local_1b6 = 0;
          bVar10 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_1b6);
          if (!bVar10) goto LAB_146f71c39;
        }
        (this->ItemHeightOffset)._padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f71c39:
  plVar16 = (longlong *)(this->ContextHeightOffset)._padding_;
  if (plVar16 != (longlong *)0x0) {
    if (pUVar14 == (UObject *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      (this->ContextHeightOffset)._padding_ = 0;
      (**(code **)(*plVar16 + 0x2b0))(plVar16,pUVar14);
      FVar6 = (FName)(this->ContextHeightOffset)._padding_;
      if (FVar6 != (FName)0x0) {
        pFVar15 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->ContextHeightOffset)._padding_ + 0x10),FVar6);
        if ((pFVar15 == (FProperty *)0x0) ||
           (cVar11 = (**(code **)((this->ContextHeightOffset)._padding_ + 8))
                               (&this->ContextHeightOffset,pFVar15), cVar11 == '\0')) {
          local_1b5[0] = 0;
          bVar10 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_1b5);
          if (!bVar10) goto LAB_146f71cd7;
        }
        (this->ContextHeightOffset)._padding_ = (longlong)pFVar15;
      }
    }
  }
LAB_146f71cd7:
  if (((FProperty *)this->_padding_ == (FProperty *)0x0) ||
     (plVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this->_padding_,(UObject *)this->_padding_,0),
     plVar16 == (longlong *)0x0)) {
    plVar16 = &this->_padding_;
  }
  pFVar15 = (FProperty *)(this->TraceFromContext)._padding_;
  bVar10 = SUB81(*plVar16,0);
  if ((pFVar15 == (FProperty *)0x0) ||
     (pbVar17 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar15,(UObject *)(this->TraceFromContext)._padding_,0),
     pbVar17 == (bool *)0x0)) {
    pbVar17 = &(this->TraceFromContext).DefaultValue;
  }
  pFVar15 = (FProperty *)(this->ItemHeightOffset)._padding_;
  bVar13 = *pbVar17;
  if ((pFVar15 == (FProperty *)0x0) ||
     (pfVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar15,(UObject *)(this->ItemHeightOffset)._padding_,0),
     pfVar18 == (float *)0x0)) {
    pfVar18 = &(this->ItemHeightOffset).DefaultValue;
  }
  pFVar15 = (FProperty *)(this->ContextHeightOffset)._padding_;
  fVar1 = *pfVar18;
  if ((pFVar15 == (FProperty *)0x0) ||
     (pfVar18 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar15,(UObject *)(this->ContextHeightOffset)._padding_,0),
     pfVar18 == (float *)0x0)) {
    pfVar18 = &(this->ContextHeightOffset).DefaultValue;
  }
  fVar2 = *pfVar18;
  pUVar7 = (this->Context).Class.field0_0x0.DebugPtr;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  pUVar21 = pUVar22;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar19 = UEnvQueryContext::StaticClass(), pUVar19 != (UClass *)0x0)) {
    iVar5 = (int)pUVar19->_padding_;
    if (((int)pUVar7->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar5 * 8) != &pUVar19->_padding_
       )) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      pUVar21 = (this->Context).Class.field0_0x0.DebugPtr;
    }
  }
  bVar12 = FEnvQueryInstance::PrepareContext(param_1,pUVar21,&local_1b0);
  if (bVar12) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar9 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_EnvQueryTrace =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UEnvQueryTest_Trace::RunTest(FEnvQueryInstance_&)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
            )0x0;
      pFVar20 = ::FName::FName(&local_108,"EnvQueryTrace");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar20,L"EnvQueryTrace",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_190.StatIdPtr = (TStatIdData *)StatPtr_EnvQueryTrace;
    if (StatPtr_EnvQueryTrace ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UEnvQueryTest_Trace::RunTest(FEnvQueryInstance_&)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_EnvQueryTrace>
         )0x0) {
      pFVar20 = ::FName::FName(&local_100,"EnvQueryTrace");
      local_190.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_EnvQueryTrace,*pFVar20,L"EnvQueryTrace",
                      "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                      ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar9 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"EnvQueryTrace");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_f8,::StaticName,&local_190,(this->TraceData).bTraceComplex,(AActor *)0x0);
    pUVar7 = (this->Context).Class.field0_0x0.DebugPtr;
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    if ((pUVar7 != (UClass *)0x0) &&
       (pUVar21 = UEnvQueryContext::StaticClass(), pUVar21 != (UClass *)0x0)) {
      iVar5 = (int)pUVar21->_padding_;
      if (((int)pUVar7->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar21->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        pUVar22 = (this->Context).Class.field0_0x0.DebugPtr;
      }
    }
    bVar12 = FEnvQueryInstance::PrepareContext(param_1,pUVar22,&local_1a0);
    if (bVar12) {
      FCollisionQueryParams::AddIgnoredActors(&local_f8,&local_1a0);
    }
    uVar4 = (this->TraceData).TraceShape.Value;
    iVar5 = local_1b0.ArrayNum;
    if (uVar4 == '\0') {
      TVar24 = (Type)*(byte *)((longlong)&this->_padding_ + 2);
      TVar23 = (Type)*(byte *)((longlong)&this->_padding_ + 4);
      if (bVar13 == false) {
        local_118.DataPtr = (TVector<double> *)local_1b0.AllocatorInstance.Data;
        if ((local_1b0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_118.ArrayNum = iVar5;
        EnvQueryTest_Trace_Helpers::RunTraces<0,0>
                  (this,&local_118,param_1,fVar2,fVar1,&this->TraceData,TVar23,TVar24,bVar10,
                   &local_f8);
      }
      else {
        local_128.DataPtr = (TVector<double> *)local_1b0.AllocatorInstance.Data;
        if ((local_1b0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_128.ArrayNum = iVar5;
        EnvQueryTest_Trace_Helpers::RunTraces<1,0>
                  (this,&local_128,param_1,fVar2,fVar1,&this->TraceData,TVar23,TVar24,bVar10,
                   &local_f8);
      }
    }
    else if (uVar4 == '\x01') {
      TVar24 = (Type)*(byte *)((longlong)&this->_padding_ + 2);
      TVar23 = (Type)*(byte *)((longlong)&this->_padding_ + 4);
      if (bVar13 == false) {
        local_138.DataPtr = (TVector<double> *)local_1b0.AllocatorInstance.Data;
        if ((local_1b0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_138.ArrayNum = iVar5;
        EnvQueryTest_Trace_Helpers::RunTraces<0,1>
                  (this,&local_138,param_1,fVar2,fVar1,&this->TraceData,TVar23,TVar24,bVar10,
                   &local_f8);
      }
      else {
        local_148.DataPtr = (TVector<double> *)local_1b0.AllocatorInstance.Data;
        if ((local_1b0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_148.ArrayNum = iVar5;
        EnvQueryTest_Trace_Helpers::RunTraces<1,1>
                  (this,&local_148,param_1,fVar2,fVar1,&this->TraceData,TVar23,TVar24,bVar10,
                   &local_f8);
      }
    }
    else if (uVar4 == '\x02') {
      TVar24 = (Type)*(byte *)((longlong)&this->_padding_ + 2);
      TVar23 = (Type)*(byte *)((longlong)&this->_padding_ + 4);
      if (bVar13 == false) {
        local_158.DataPtr = (TVector<double> *)local_1b0.AllocatorInstance.Data;
        if ((local_1b0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_158.ArrayNum = iVar5;
        EnvQueryTest_Trace_Helpers::RunTraces<0,2>
                  (this,&local_158,param_1,fVar2,fVar1,&this->TraceData,TVar23,TVar24,bVar10,
                   &local_f8);
      }
      else {
        local_168.DataPtr = (TVector<double> *)local_1b0.AllocatorInstance.Data;
        if ((local_1b0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_168.ArrayNum = iVar5;
        EnvQueryTest_Trace_Helpers::RunTraces<1,2>
                  (this,&local_168,param_1,fVar2,fVar1,&this->TraceData,TVar23,TVar24,bVar10,
                   &local_f8);
      }
    }
    else if (uVar4 == '\x03') {
      TVar24 = (Type)*(byte *)((longlong)&this->_padding_ + 2);
      TVar23 = (Type)*(byte *)((longlong)&this->_padding_ + 4);
      if (bVar13 == false) {
        local_178.DataPtr = (TVector<double> *)local_1b0.AllocatorInstance.Data;
        if ((local_1b0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_178.ArrayNum = iVar5;
        EnvQueryTest_Trace_Helpers::RunTraces<0,3>
                  (this,&local_178,param_1,fVar2,fVar1,&this->TraceData,TVar23,TVar24,bVar10,
                   &local_f8);
      }
      else {
        local_188.DataPtr = (TVector<double> *)local_1b0.AllocatorInstance.Data;
        if ((local_1b0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_188.ArrayNum = iVar5;
        EnvQueryTest_Trace_Helpers::RunTraces<1,3>
                  (this,&local_188,param_1,fVar2,fVar1,&this->TraceData,TVar23,TVar24,bVar10,
                   &local_f8);
      }
    }
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUEnvQueryTest_Trace @ 146f76f20

void __cdecl UEnvQueryTest_Trace::StaticRegisterNativesUEnvQueryTest_Trace(void)

{
  return;
}

