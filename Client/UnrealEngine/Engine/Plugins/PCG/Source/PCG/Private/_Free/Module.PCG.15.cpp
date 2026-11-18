// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 413

// NoPin'' @ 1411aecf0

void __cdecl `dynamic_initializer_for_'FPCGGraphTaskInput::NoPin__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__);
  return;
}

// PositionCurve'' @ 1411aed10

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 1411aed30

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 1411aed50

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 1411aed70

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'CVarDeterminismGraphTestCycleLimit'' @ 1411aed90

void __cdecl _dynamic_initializer_for__CVarDeterminismGraphTestCycleLimit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDeterminismGraphTestCycleLimit,L"pcg.DeterminismGraphTestCycleLimit",local_res8,
             L"How many execution attempts before discarding a graph test.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDeterminismGraphTestCycleLimit__);
  return;
}

// `dynamic_initializer_for_'CVarDeterminismPermutationLimit'' @ 1411aede0

void __cdecl _dynamic_initializer_for__CVarDeterminismPermutationLimit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDeterminismPermutationLimit,L"pcg.DeterminismPermutationLimit",local_res8,
             L"A limit for the maximum amount of input permutations before auto-failing a basic determinism test."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDeterminismPermutationLimit__);
  return;
}

// `dynamic_initializer_for_'CategoryMetadataName'' @ 1411aee30

void __cdecl PCGPropertyHelpers::Constants::_dynamic_initializer_for__CategoryMetadataName__(void)

{
  ::FName::FName(&CategoryMetadataName,"Category");
  return;
}

// `dynamic_initializer_for_'ClampMaxLabel'' @ 1411aee50

void __cdecl PCGMetadataSettingsBaseConstants::_dynamic_initializer_for__ClampMaxLabel__(void)

{
  ::FName::FName(&ClampMaxLabel,L"Max");
  return;
}

// `dynamic_initializer_for_'ClampMinLabel'' @ 1411aee70

void __cdecl PCGMetadataSettingsBaseConstants::_dynamic_initializer_for__ClampMinLabel__(void)

{
  ::FName::FName(&ClampMinLabel,L"Min");
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 1411aee90

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 1411aeeb0

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'ControlPointDomainName'' @ 1411aeed0

void __cdecl PCGSplineData::_dynamic_initializer_for__ControlPointDomainName__(void)

{
  ::FName::FName(&ControlPointDomainName,"ControlPoints");
  return;
}

// `dynamic_initializer_for_'Data'' @ 1411aeef0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Data__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Data");
  Data.DebugName = *pFVar1;
  Data.Flag = Data;
  Data.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DataDomainName'' @ 1411aef30

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'Default'' @ 1411aef50

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Default__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Default");
  Default.DebugName = *pFVar1;
  Default.Flag = Default;
  Default.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 1411aef90

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 1411aefb0

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 1411aefd0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 1411aeff0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411af010

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 1411af030

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputDataFromPinName'' @ 1411af050

void __cdecl
PCGMetadataSettingsBaseConstants::_dynamic_initializer_for__DefaultOutputDataFromPinName__(void)

{
  ::FName::FName(&DefaultOutputDataFromPinName,L"Default");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 1411af070

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 1411af090

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 1411af0b0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 1411af0d0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 1411af0f0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'DeterminismBasicTestInfo'' @ 1411af110

void __cdecl
PCGDeterminismTests::Defaults::_dynamic_initializer_for__DeterminismBasicTestInfo__(void)

{
  FText *pFVar1;
  FText local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_NPEBVUPCGNode__AEBVFName__AEAUFDeterminismTestResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = RunBasicTestSuite;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),bool,UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&>
                ::Call;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"PCGDeterminism",L"BasicTest",L"Basic Test");
  FNodeTestInfo::FNodeTestInfo
            (&DeterminismBasicTestInfo,pFVar1,
             (TFunction<bool___cdecl(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&)> *)
             local_38,__real_42b40000);
  atexit(_dynamic_atexit_destructor_for__DeterminismBasicTestInfo__);
  return;
}

// `dynamic_initializer_for_'DeterminismOrderIndependenceInfo'' @ 1411af1a0

void __cdecl
PCGDeterminismTests::Defaults::_dynamic_initializer_for__DeterminismOrderIndependenceInfo__(void)

{
  FText *pFVar1;
  FText local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_NPEBVUPCGNode__AEBVFName__AEAUFDeterminismTestResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = RunOrderIndependenceSuite;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),bool,UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&>
                ::Call;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"PCGDeterminism",L"OrderIndependenceTest",L"Order Independence");
  FNodeTestInfo::FNodeTestInfo
            (&DeterminismOrderIndependenceInfo,pFVar1,
             (TFunction<bool___cdecl(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&)> *)
             local_38,__real_430c0000);
  atexit(_dynamic_atexit_destructor_for__DeterminismOrderIndependenceInfo__);
  return;
}

// `dynamic_initializer_for_'DoubleAttributeName'' @ 1411af230

void __cdecl PCGPointFilterTest::_dynamic_initializer_for__DoubleAttributeName__(void)

{
  ::FName::FName(&DoubleAttributeName,L"Double");
  return;
}

// `dynamic_initializer_for_'DoubleInputFirstLabel'' @ 1411af250

void __cdecl
PCGMetadataSettingsBaseConstants::_dynamic_initializer_for__DoubleInputFirstLabel__(void)

{
  ::FName::FName(&DoubleInputFirstLabel,L"InA");
  return;
}

// `dynamic_initializer_for_'DoubleInputSecondLabel'' @ 1411af270

void __cdecl
PCGMetadataSettingsBaseConstants::_dynamic_initializer_for__DoubleInputSecondLabel__(void)

{
  ::FName::FName(&DoubleInputSecondLabel,L"InB");
  return;
}

// `dynamic_initializer_for_'DoubleInputThirdLabel'' @ 1411af290

void __cdecl
PCGMetadataSettingsBaseConstants::_dynamic_initializer_for__DoubleInputThirdLabel__(void)

{
  ::FName::FName(&DoubleInputThirdLabel,L"InC");
  return;
}

// `dynamic_initializer_for_'Elements'' @ 1411af2b0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Elements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Elements");
  Elements.DebugName = *pFVar1;
  Elements.Flag = Elements;
  Elements.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411af2f0

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411af310

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'EnableCategoriesMetadataName'' @ 1411af330

void __cdecl
PCGPropertyHelpers::Constants::_dynamic_initializer_for__EnableCategoriesMetadataName__(void)

{
  ::FName::FName(&EnableCategoriesMetadataName,"EnableCategories");
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 1411af350

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FPCGAddTagTest_MultipleTagsAutomationTestInstance'' @ 1411af370

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGAddTagTest_MultipleTagsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAddTagTest_MultipleTags");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAddTagTest_MultipleTagsAutomationTestInstance,&local_18,
             false);
  FPCGAddTagTest_MultipleTagsAutomationTestInstance._0_8_ = &___7FPCGAddTagTest_MultipleTags__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAddTagTest_MultipleTagsAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGAddTagTest_OneTagAutomationTestInstance'' @ 1411af3d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGAddTagTest_OneTagAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAddTagTest_OneTag");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAddTagTest_OneTagAutomationTestInstance,&local_18,false);
  FPCGAddTagTest_OneTagAutomationTestInstance._0_8_ = &___7FPCGAddTagTest_OneTag__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAddTagTest_OneTagAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGAddTagTest_ZeroTagsAutomationTestInstance'' @ 1411af430

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGAddTagTest_ZeroTagsAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAddTagTest_ZeroTags");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAddTagTest_ZeroTagsAutomationTestInstance,&local_18,false);
  FPCGAddTagTest_ZeroTagsAutomationTestInstance._0_8_ = &___7FPCGAddTagTest_ZeroTags__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAddTagTest_ZeroTagsAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGApplyScaleToBoundsTest_BasicAutomationTestInstance'' @ 1411af490

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGApplyScaleToBoundsTest_BasicAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGApplyScaleToBoundsTest_Basic");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGApplyScaleToBoundsTest_BasicAutomationTestInstance,
             &local_18,false);
  FPCGApplyScaleToBoundsTest_BasicAutomationTestInstance._0_8_ =
       &___7FPCGApplyScaleToBoundsTest_Basic__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGApplyScaleToBoundsTest_BasicAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGApplyScaleToBoundsTest_NegativeScaleAutomationTestInstance'' @ 1411af4f0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGApplyScaleToBoundsTest_NegativeScaleAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGApplyScaleToBoundsTest_NegativeScale");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGApplyScaleToBoundsTest_NegativeScaleAutomationTestInstance,
             &local_18,false);
  FPCGApplyScaleToBoundsTest_NegativeScaleAutomationTestInstance._0_8_ =
       &___7FPCGApplyScaleToBoundsTest_NegativeScale__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGApplyScaleToBoundsTest_NegativeScaleAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_AttributeSetBoolToDoubleAutomationTestInstance'' @ 1411af550

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_AttributeSetBoolToDoubleAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_AttributeSetBoolToDouble");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeCast_AttributeSetBoolToDoubleAutomationTestInstance,&local_18,false);
  FPCGAttributeCast_AttributeSetBoolToDoubleAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_AttributeSetBoolToDouble__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetBoolToDoubleAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_AttributeSetDoubleToBoolAutomationTestInstance'' @ 1411af5b0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_AttributeSetDoubleToBoolAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_AttributeSetDoubleToBool");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeCast_AttributeSetDoubleToBoolAutomationTestInstance,&local_18,false);
  FPCGAttributeCast_AttributeSetDoubleToBoolAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_AttributeSetDoubleToBool__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetDoubleToBoolAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_AttributeSetDoubleToIntAutomationTestInstance'' @ 1411af610

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_AttributeSetDoubleToIntAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_AttributeSetDoubleToInt");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_AttributeSetDoubleToIntAutomationTestInstance
             ,&local_18,false);
  FPCGAttributeCast_AttributeSetDoubleToIntAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_AttributeSetDoubleToInt__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetDoubleToIntAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_AttributeSetIntToDoubleAutomationTestInstance'' @ 1411af670

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_AttributeSetIntToDoubleAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_AttributeSetIntToDouble");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_AttributeSetIntToDoubleAutomationTestInstance
             ,&local_18,false);
  FPCGAttributeCast_AttributeSetIntToDoubleAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_AttributeSetIntToDouble__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetIntToDoubleAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_AttributeSetIntToStringAutomationTestInstance'' @ 1411af6d0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_AttributeSetIntToStringAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_AttributeSetIntToString");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_AttributeSetIntToStringAutomationTestInstance
             ,&local_18,false);
  FPCGAttributeCast_AttributeSetIntToStringAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_AttributeSetIntToString__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetIntToStringAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_AttributeSetQuatToRotatorAutomationTestInstance'' @ 1411af730

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_AttributeSetQuatToRotatorAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_AttributeSetQuatToRotator");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeCast_AttributeSetQuatToRotatorAutomationTestInstance,&local_18,false);
  FPCGAttributeCast_AttributeSetQuatToRotatorAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_AttributeSetQuatToRotator__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetQuatToRotatorAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_InvalidCastAutomationTestInstance'' @ 1411af790

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_InvalidCastAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_InvalidCast");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_InvalidCastAutomationTestInstance,&local_18,
             false);
  FPCGAttributeCast_InvalidCastAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_InvalidCast__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAttributeCast_InvalidCastAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_PointsIntToDoubleAutomationTestInstance'' @ 1411af7f0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_PointsIntToDoubleAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_PointsIntToDouble");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_PointsIntToDoubleAutomationTestInstance,
             &local_18,false);
  FPCGAttributeCast_PointsIntToDoubleAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_PointsIntToDouble__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAttributeCast_PointsIntToDoubleAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_PointsIntToDoubleToDensityAutomationTestInstance'' @ 1411af850

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeCast_PointsIntToDoubleToDensityAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_PointsIntToDoubleToDensity");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeCast_PointsIntToDoubleToDensityAutomationTestInstance,&local_18,false);
  FPCGAttributeCast_PointsIntToDoubleToDensityAutomationTestInstance._0_8_ =
       &___7FPCGAttributeCast_PointsIntToDoubleToDensity__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeCast_PointsIntToDoubleToDensityAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeCast_SameTypeAutomationTestInstance'' @ 1411af8b0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGAttributeCast_SameTypeAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeCast_SameType");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_SameTypeAutomationTestInstance,&local_18,
             false);
  FPCGAttributeCast_SameTypeAutomationTestInstance._0_8_ = &___7FPCGAttributeCast_SameType__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAttributeCast_SameTypeAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilterIntAutomationTestInstance'' @ 1411af910

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGAttributeFilterIntAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilterInt");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeFilterIntAutomationTestInstance,&local_18,false);
  FPCGAttributeFilterIntAutomationTestInstance._0_8_ = &___7FPCGAttributeFilterInt__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAttributeFilterIntAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilterIntRangeAutomationTestInstance'' @ 1411af970

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGAttributeFilterIntRangeAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilterIntRange");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeFilterIntRangeAutomationTestInstance,&local_18,
             false);
  FPCGAttributeFilterIntRangeAutomationTestInstance._0_8_ = &___7FPCGAttributeFilterIntRange__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAttributeFilterIntRangeAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilterSkipTestBugAutomationTestInstance'' @ 1411af9d0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilterSkipTestBugAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilterSkipTestBug");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeFilterSkipTestBugAutomationTestInstance,&local_18,
             false);
  FPCGAttributeFilterSkipTestBugAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilterSkipTestBug__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGAttributeFilterSkipTestBugAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilter_AttributesRange_GenerateEmptyOutputAutomationTestInstance'' @ 1411afa30

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilter_AttributesRange_GenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_AttributesRange_GenerateEmptyOutputAutomationTestInstance,
             &local_18,false);
  FPCGAttributeFilter_AttributesRange_GenerateEmptyOutputAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeFilter_AttributesRange_GenerateEmptyOutputAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutputAutomationTestInstance'' @ 1411afa90

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutput");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutputAutomationTestInstance,
             &local_18,false);
  FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutputAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutput__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutputAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilter_Attributes_GenerateEmptyOutputAutomationTestInstance'' @ 1411afaf0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilter_Attributes_GenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilter_Attributes_GenerateEmptyOutput");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_Attributes_GenerateEmptyOutputAutomationTestInstance,&local_18,
             false);
  FPCGAttributeFilter_Attributes_GenerateEmptyOutputAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilter_Attributes_GenerateEmptyOutput__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeFilter_Attributes_GenerateEmptyOutputAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilter_Attributes_NoGenerateEmptyOutputAutomationTestInstance'' @ 1411afb50

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilter_Attributes_NoGenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_Attributes_NoGenerateEmptyOutputAutomationTestInstance,&local_18,
             false);
  FPCGAttributeFilter_Attributes_NoGenerateEmptyOutputAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeFilter_Attributes_NoGenerateEmptyOutputAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilter_PointsRange_GenerateEmptyOutputAutomationTestInstance'' @ 1411afbb0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilter_PointsRange_GenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilter_PointsRange_GenerateEmptyOutput");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_PointsRange_GenerateEmptyOutputAutomationTestInstance,&local_18,
             false);
  FPCGAttributeFilter_PointsRange_GenerateEmptyOutputAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilter_PointsRange_GenerateEmptyOutput__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeFilter_PointsRange_GenerateEmptyOutputAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutputAutomationTestInstance'' @ 1411afc10

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutput");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutputAutomationTestInstance,&local_18,
             false);
  FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutputAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutput__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutputAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilter_Points_GenerateEmptyOutputAutomationTestInstance'' @ 1411afc70

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilter_Points_GenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilter_Points_GenerateEmptyOutput");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_Points_GenerateEmptyOutputAutomationTestInstance,&local_18,false);
  FPCGAttributeFilter_Points_GenerateEmptyOutputAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilter_Points_GenerateEmptyOutput__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeFilter_Points_GenerateEmptyOutputAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGAttributeFilter_Points_NoGenerateEmptyOutputAutomationTestInstance'' @ 1411afcd0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGAttributeFilter_Points_NoGenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGAttributeFilter_Points_NoGenerateEmptyOutput");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_Points_NoGenerateEmptyOutputAutomationTestInstance,&local_18,false
            );
  FPCGAttributeFilter_Points_NoGenerateEmptyOutputAutomationTestInstance._0_8_ =
       &___7FPCGAttributeFilter_Points_NoGenerateEmptyOutput__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGAttributeFilter_Points_NoGenerateEmptyOutputAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGDifferenceDataTestAutomationTestInstance'' @ 1411afd30

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGDifferenceDataTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGDifferenceDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGDifferenceDataTestAutomationTestInstance,&local_18,false);
  FPCGDifferenceDataTestAutomationTestInstance._0_8_ = &___7FPCGDifferenceDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGDifferenceDataTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGIntersectionDataTestAutomationTestInstance'' @ 1411afd90

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGIntersectionDataTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGIntersectionDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGIntersectionDataTestAutomationTestInstance,&local_18,false)
  ;
  FPCGIntersectionDataTestAutomationTestInstance._0_8_ = &___7FPCGIntersectionDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGIntersectionDataTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTestAutomationTestInstance'' @ 1411afdf0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,
                     L"FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &
             FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTestAutomationTestInstance
             ,&local_18,false);
  FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTestAutomationTestInstance'' @ 1411afe50

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTestAutomationTestInstance'' @ 1411afeb0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTestAutomationTestInstance'' @ 1411aff10

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataCopyPropertyOverInheritedPropertyTestAutomationTestInstance'' @ 1411aff70

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataCopyPropertyOverInheritedPropertyTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataCopyPropertyOverInheritedPropertyTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataCopyPropertyOverInheritedPropertyTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataCopyPropertyOverInheritedPropertyTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataCopyPropertyOverInheritedPropertyTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPropertyOverInheritedPropertyTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataDisabledParentingTestAutomationTestInstance'' @ 1411affd0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataDisabledParentingTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataDisabledParentingTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataDisabledParentingTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataDisabledParentingTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataDisabledParentingTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataDisabledParentingTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataDuplicateDataTestAutomationTestInstance'' @ 1411b0030

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataDuplicateDataTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataDuplicateDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataDuplicateDataTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataDuplicateDataTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataDuplicateDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGPointArrayDataDuplicateDataTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataFlattenTestAutomationTestInstance'' @ 1411b0090

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataFlattenTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataFlattenTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataFlattenTestAutomationTestInstance,&local_18,
             false);
  FPCGPointArrayDataFlattenTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataFlattenTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGPointArrayDataFlattenTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataInitializeFromDataTestAutomationTestInstance'' @ 1411b00f0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataInitializeFromDataTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataInitializeFromDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataInitializeFromDataTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataInitializeFromDataTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataInitializeFromDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataInitializeFromDataTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataMultiLevelInheritanceTestAutomationTestInstance'' @ 1411b0150

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataMultiLevelInheritanceTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataMultiLevelInheritanceTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataMultiLevelInheritanceTestAutomationTestInstance,&local_18,false);
  FPCGPointArrayDataMultiLevelInheritanceTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataMultiLevelInheritanceTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataMultiLevelInheritanceTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataToPointArrayDataTestAutomationTestInstance'' @ 1411b01b0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataToPointArrayDataTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataToPointArrayDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataToPointArrayDataTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataToPointArrayDataTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataToPointArrayDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGPointArrayDataToPointArrayDataTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGPointArrayDataToPointDataTestAutomationTestInstance'' @ 1411b0210

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGPointArrayDataToPointDataTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointArrayDataToPointDataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataToPointDataTestAutomationTestInstance,
             &local_18,false);
  FPCGPointArrayDataToPointDataTestAutomationTestInstance._0_8_ =
       &___7FPCGPointArrayDataToPointDataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGPointArrayDataToPointDataTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGPointFilterDensityAutomationTestInstance'' @ 1411b0270

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGPointFilterDensityAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointFilterDensity");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointFilterDensityAutomationTestInstance,&local_18,false);
  FPCGPointFilterDensityAutomationTestInstance._0_8_ = &___7FPCGPointFilterDensity__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGPointFilterDensityAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGPointFilterDensityRangeAutomationTestInstance'' @ 1411b02d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGPointFilterDensityRangeAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGPointFilterDensityRange");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointFilterDensityRangeAutomationTestInstance,&local_18,
             false);
  FPCGPointFilterDensityRangeAutomationTestInstance._0_8_ = &___7FPCGPointFilterDensityRange__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGPointFilterDensityRangeAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplineAccessorControlPointsMetadataTestAutomationTestInstance'' @ 1411b0330

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSplineAccessorControlPointsMetadataTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplineAccessorControlPointsMetadataTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGSplineAccessorControlPointsMetadataTestAutomationTestInstance,&local_18,false);
  FPCGSplineAccessorControlPointsMetadataTestAutomationTestInstance._0_8_ =
       &___7FPCGSplineAccessorControlPointsMetadataTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGSplineAccessorControlPointsMetadataTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGSplineAccessorControlPointsPropertyTestAutomationTestInstance'' @ 1411b0390

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSplineAccessorControlPointsPropertyTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplineAccessorControlPointsPropertyTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGSplineAccessorControlPointsPropertyTestAutomationTestInstance,&local_18,false);
  FPCGSplineAccessorControlPointsPropertyTestAutomationTestInstance._0_8_ =
       &___7FPCGSplineAccessorControlPointsPropertyTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGSplineAccessorControlPointsPropertyTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 1411b03f0

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'FilterLabel'' @ 1411b0410

void __cdecl PCGAttributeFilterConstants::_dynamic_initializer_for__FilterLabel__(void)

{
  ::FName::FName(&FilterLabel,L"Filter");
  return;
}

// `dynamic_initializer_for_'FilterLabel'' @ 1411b0430

void __cdecl PCGPointFilterTest::_dynamic_initializer_for__FilterLabel__(void)

{
  ::FName::FName(&FilterLabel,L"Filter");
  return;
}

// `dynamic_initializer_for_'FilterMaxLabel'' @ 1411b0450

void __cdecl PCGAttributeFilterConstants::_dynamic_initializer_for__FilterMaxLabel__(void)

{
  ::FName::FName(&FilterMaxLabel,L"FilterMax");
  return;
}

// `dynamic_initializer_for_'FilterMinLabel'' @ 1411b0470

void __cdecl PCGAttributeFilterConstants::_dynamic_initializer_for__FilterMinLabel__(void)

{
  ::FName::FName(&FilterMinLabel,L"FilterMin");
  return;
}

// `dynamic_initializer_for_'GraphResultName'' @ 1411b0490

void __cdecl PCGDeterminismTests::Defaults::_dynamic_initializer_for__GraphResultName__(void)

{
  ::FName::FName(&GraphResultName,L"Graph Result");
  return;
}

// `dynamic_initializer_for_'InsideFilterLabel'' @ 1411b04b0

void __cdecl PCGPointFilterTest::_dynamic_initializer_for__InsideFilterLabel__(void)

{
  ::FName::FName(&InsideFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'IntAttributeName'' @ 1411b04d0

void __cdecl PCGPointFilterTest::_dynamic_initializer_for__IntAttributeName__(void)

{
  ::FName::FName(&IntAttributeName,L"Int");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 1411b04f0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Invalid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Invalid");
  Invalid.DebugName = *pFVar1;
  Invalid.Flag = Invalid;
  Invalid.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'LargeVector'' @ 1411b0530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl PCGDeterminismTests::Defaults::_dynamic_initializer_for__LargeVector__(void)

{
  LargeVector.field0_0x0._8_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e8e8,0);
  LargeVector.field0_0x0._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_407f400000000000407f400000000000;
  LargeVector.field0_0x0._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e8e8) >>
            0x20);
  LargeVector.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       ___xmm_407f400000000000407f400000000000;
  return;
}

// `dynamic_initializer_for_'LastAttributeName'' @ 1411b0570

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 1411b0590

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LerpRatioLabel'' @ 1411b05b0

void __cdecl PCGMetadataSettingsBaseConstants::_dynamic_initializer_for__LerpRatioLabel__(void)

{
  ::FName::FName(&LerpRatioLabel,L"Ratio");
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 1411b05d0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 1411b05f0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1411b0610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 1411b0650

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 1411b0670

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'MediumVector'' @ 1411b0690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl PCGDeterminismTests::Defaults::_dynamic_initializer_for__MediumVector__(void)

{
  MediumVector.field0_0x0._8_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e8d8,0);
  MediumVector.field0_0x0._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_40690000000000004069000000000000;
  MediumVector.field0_0x0._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_15201e8d8) >>
            0x20);
  MediumVector.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       ___xmm_40690000000000004069000000000000;
  return;
}

// `dynamic_initializer_for_'NAME_UPCGDeterminismTestBlueprintBase_ExecuteTest'' @ 1411b06d0

void __cdecl _dynamic_initializer_for__NAME_UPCGDeterminismTestBlueprintBase_ExecuteTest__(void)

{
  FName::FName(&NAME_UPCGDeterminismTestBlueprintBase_ExecuteTest,L"ExecuteTest");
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 1411b06f0

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'OutsideFilterLabel'' @ 1411b0710

void __cdecl PCGPointFilterTest::_dynamic_initializer_for__OutsideFilterLabel__(void)

{
  ::FName::FName(&OutsideFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 1411b0730

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 1411b0750

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 1411b0770

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 1411b0790

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 1411b07b0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 1411b07d0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 1411b07f0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'Rotation'' @ 1411b0810

void __cdecl PCGMetadataTransformConstants::_dynamic_initializer_for__Rotation__(void)

{
  ::FName::FName(&Rotation,L"Rotation");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 1411b0830

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'RotatorEulerAngles'' @ 1411b0850

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__RotatorEulerAngles__(void)

{
  ::FName::FName(&RotatorEulerAngles,L"EulerAngles");
  return;
}

// `dynamic_initializer_for_'RotatorExtractorNames'' @ 1411b0870

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__RotatorExtractorNames__(void)

{
  RotatorExtractorNames[0] = RotatorPitch;
  RotatorExtractorNames[1] = RotatorYaw;
  RotatorExtractorNames[2] = RotatorRoll;
  RotatorExtractorNames[3] = RotatorForward;
  RotatorExtractorNames[4] = RotatorRight;
  RotatorExtractorNames[5] = RotatorUp;
  RotatorExtractorNames[6] = RotatorEulerAngles;
  return;
}

// `dynamic_initializer_for_'RotatorForward'' @ 1411b08e0

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__RotatorForward__(void)

{
  ::FName::FName(&RotatorForward,L"Forward");
  return;
}

// `dynamic_initializer_for_'RotatorPitch'' @ 1411b0900

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__RotatorPitch__(void)

{
  ::FName::FName(&RotatorPitch,L"Pitch");
  return;
}

// `dynamic_initializer_for_'RotatorRight'' @ 1411b0920

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__RotatorRight__(void)

{
  ::FName::FName(&RotatorRight,L"Right");
  return;
}

// `dynamic_initializer_for_'RotatorRoll'' @ 1411b0940

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__RotatorRoll__(void)

{
  ::FName::FName(&RotatorRoll,L"Roll");
  return;
}

// `dynamic_initializer_for_'RotatorUp'' @ 1411b0960

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__RotatorUp__(void)

{
  ::FName::FName(&RotatorUp,L"Up");
  return;
}

// `dynamic_initializer_for_'RotatorYaw'' @ 1411b0980

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__RotatorYaw__(void)

{
  ::FName::FName(&RotatorYaw,L"Yaw");
  return;
}

// `dynamic_initializer_for_'Scale'' @ 1411b09a0

void __cdecl PCGMetadataTransformConstants::_dynamic_initializer_for__Scale__(void)

{
  ::FName::FName(&Scale,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 1411b09c0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 1411b09e0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SmallVector'' @ 1411b0a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl PCGDeterminismTests::Defaults::_dynamic_initializer_for__SmallVector__(void)

{
  SmallVector.field0_0x0._8_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_150b2d2e8,0);
  SmallVector.field0_0x0._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_40490000000000004049000000000000;
  SmallVector.field0_0x0._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_150b2d2e8) >>
            0x20);
  SmallVector.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       ___xmm_40490000000000004049000000000000;
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 1411b0a40

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 1411b0a60

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'StringLength'' @ 1411b0a80

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__StringLength__(void)

{
  ::FName::FName(&StringLength,L"Length");
  return;
}

// `dynamic_initializer_for_'TestPinName'' @ 1411b0aa0

void __cdecl PCGDeterminismTests::Defaults::_dynamic_initializer_for__TestPinName__(void)

{
  ::FName::FName(&TestPinName,L"Test");
  return;
}

// `dynamic_initializer_for_'TransformExtractorNames'' @ 1411b0ac0

void __cdecl
PCGAttributeExtractorConstants::_dynamic_initializer_for__TransformExtractorNames__(void)

{
  TransformExtractorNames[0] = TransformLocation;
  TransformExtractorNames[1] = TransformRotation;
  TransformExtractorNames[2] = TransformScale;
  return;
}

// `dynamic_initializer_for_'TransformLabel'' @ 1411b0b00

void __cdecl PCGMetadataSettingsBaseConstants::_dynamic_initializer_for__TransformLabel__(void)

{
  ::FName::FName(&TransformLabel,L"Transform");
  return;
}

// `dynamic_initializer_for_'TransformLocation'' @ 1411b0b20

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__TransformLocation__(void)

{
  ::FName::FName(&TransformLocation,L"Location");
  return;
}

// `dynamic_initializer_for_'TransformRotation'' @ 1411b0b40

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__TransformRotation__(void)

{
  ::FName::FName(&TransformRotation,L"Rotation");
  return;
}

// `dynamic_initializer_for_'TransformScale'' @ 1411b0b60

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__TransformScale__(void)

{
  ::FName::FName(&TransformScale,L"Scale");
  return;
}

// `dynamic_initializer_for_'Translation'' @ 1411b0b80

void __cdecl PCGMetadataTransformConstants::_dynamic_initializer_for__Translation__(void)

{
  ::FName::FName(&Translation,L"Translation");
  return;
}

// `dynamic_initializer_for_'VectorA'' @ 1411b0ba0

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorA__(void)

{
  ::FName::FName(&VectorA,L"A");
  return;
}

// `dynamic_initializer_for_'VectorB'' @ 1411b0bc0

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorB__(void)

{
  ::FName::FName(&VectorB,L"B");
  return;
}

// `dynamic_initializer_for_'VectorExtractorNames'' @ 1411b0be0

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorExtractorNames__(void)

{
  VectorExtractorNames[0] = VectorX;
  VectorExtractorNames[1] = VectorY;
  VectorExtractorNames[2] = VectorZ;
  VectorExtractorNames[3] = VectorW;
  VectorExtractorNames[4] = VectorR;
  VectorExtractorNames[5] = VectorG;
  VectorExtractorNames[6] = VectorB;
  VectorExtractorNames[7] = VectorA;
  VectorExtractorNames[8] = VectorLength;
  VectorExtractorNames[9] = VectorSize;
  VectorExtractorNames[10] = VectorSquaredLength;
  VectorExtractorNames[0xb] = VectorNormalized;
  return;
}

// `dynamic_initializer_for_'VectorG'' @ 1411b0c90

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorG__(void)

{
  ::FName::FName(&VectorG,L"G");
  return;
}

// `dynamic_initializer_for_'VectorLength'' @ 1411b0cb0

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorLength__(void)

{
  ::FName::FName(&VectorLength,L"Length");
  return;
}

// `dynamic_initializer_for_'VectorNormalized'' @ 1411b0cd0

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorNormalized__(void)

{
  ::FName::FName(&VectorNormalized,L"Normalized");
  return;
}

// `dynamic_initializer_for_'VectorR'' @ 1411b0cf0

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorR__(void)

{
  ::FName::FName(&VectorR,L"R");
  return;
}

// `dynamic_initializer_for_'VectorSize'' @ 1411b0d10

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorSize__(void)

{
  ::FName::FName(&VectorSize,L"Size");
  return;
}

// `dynamic_initializer_for_'VectorSquaredLength'' @ 1411b0d30

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorSquaredLength__(void)

{
  ::FName::FName(&VectorSquaredLength,L"SquaredLength");
  return;
}

// `dynamic_initializer_for_'VectorW'' @ 1411b0d50

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorW__(void)

{
  ::FName::FName(&VectorW,L"W");
  return;
}

// `dynamic_initializer_for_'VectorX'' @ 1411b0d70

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorX__(void)

{
  ::FName::FName(&VectorX,L"X");
  return;
}

// `dynamic_initializer_for_'VectorY'' @ 1411b0d90

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorY__(void)

{
  ::FName::FName(&VectorY,L"Y");
  return;
}

// `dynamic_initializer_for_'VectorZ'' @ 1411b0db0

void __cdecl PCGAttributeExtractorConstants::_dynamic_initializer_for__VectorZ__(void)

{
  ::FName::FName(&VectorZ,L"Z");
  return;
}

// `dynamic_initializer_for_'WLabel'' @ 1411b0dd0

void __cdecl PCGMetadataBreakVectorConstants::_dynamic_initializer_for__WLabel__(void)

{
  ::FName::FName(&WLabel,L"W");
  return;
}

// `dynamic_initializer_for_'XLabel'' @ 1411b0df0

void __cdecl PCGMetadataBreakVectorConstants::_dynamic_initializer_for__XLabel__(void)

{
  ::FName::FName(&XLabel,L"X");
  return;
}

// `dynamic_initializer_for_'YLabel'' @ 1411b0e10

void __cdecl PCGMetadataBreakVectorConstants::_dynamic_initializer_for__YLabel__(void)

{
  ::FName::FName(&YLabel,L"Y");
  return;
}

// `dynamic_initializer_for_'ZLabel'' @ 1411b0e30

void __cdecl PCGMetadataBreakVectorConstants::_dynamic_initializer_for__ZLabel__(void)

{
  ::FName::FName(&ZLabel,L"Z");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h__Script_PCG_3545394507'' @ 1411b0e50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h__Script_PCG_3545394507__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h__Script_PCG_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h__Script_PCG_1252359908'' @ 1411b0ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h__Script_PCG_1252359908__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestBlueprintBase_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h__Script_PCG_2550043955'' @ 1411b0ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h__Script_PCG_2550043955__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UClass_UPCGAttributeExtractorTestObject_NoRegister @ 149f72c60

UClass * __cdecl Z_Construct_UClass_UPCGAttributeExtractorTestObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeExtractorTestObject",
               &Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton,
               UPCGAttributeExtractorTestObject::
               StaticRegisterNativesUPCGAttributeExtractorTestObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeExtractorTestObject>,
               InternalVTableHelperCtorCaller<UPCGAttributeExtractorTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton;
}

// `scalar_deleting_destructor' @ 149f73500

void * __thiscall
FPCGAddTagTest_ZeroTags::_scalar_deleting_destructor_(FPCGAddTagTest_ZeroTags *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f73c70

void * __thiscall
FPCGAddTagTest_OneTag::_scalar_deleting_destructor_(FPCGAddTagTest_OneTag *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UPCGAttributeExtractorTestObject @ 149f73cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGAttributeExtractorTestObject(void)

{
  if (Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.OuterSingleton,
               &Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1 @ 149f73cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth1.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth1.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth1.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth1.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2 @ 149f73d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth2.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth2.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `scalar_deleting_destructor' @ 149f746a0

void * __thiscall
FPCGAddTagTest_MultipleTags::_scalar_deleting_destructor_
          (FPCGAddTagTest_MultipleTags *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 149f746e0

void * __cdecl
Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGAttributeExtractorTestStructDepth2,&UE::CoreUObject::Private::Construct<FPCGAttributeExtractorTestStructDepth2>,&UE::CoreUObject::Private::ConstructForTests<FPCGAttributeExtractorTestStructDepth2>,&UE::CoreUObject::Private::Destruct<FPCGAttributeExtractorTestStructDepth2>,&UE::CoreUObject::Private::Copy<FPCGAttributeExtractorTestStructDepth2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149f74820

void * __cdecl
Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGAttributeExtractorTestStructDepth1,&UE::CoreUObject::Private::Construct<FPCGAttributeExtractorTestStructDepth1>,&UE::CoreUObject::Private::ConstructForTests<FPCGAttributeExtractorTestStructDepth1>,&UE::CoreUObject::Private::Destruct<FPCGAttributeExtractorTestStructDepth1>,&UE::CoreUObject::Private::Copy<FPCGAttributeExtractorTestStructDepth1>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149f74860

void * __cdecl
Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGAttributeExtractorTestStruct,&UE::CoreUObject::Private::Construct<FPCGAttributeExtractorTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FPCGAttributeExtractorTestStruct>,&UE::CoreUObject::Private::Destruct<FPCGAttributeExtractorTestStruct>,&UE::CoreUObject::Private::Copy<FPCGAttributeExtractorTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149f74970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NPEBVUPCGNode__AEBVFName__AEAUFDeterminismTestResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f749e0

void * __thiscall
FPCGTestBaseClass::_scalar_deleting_destructor_(FPCGTestBaseClass *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f753a0

void * __thiscall
FPCGApplyScaleToBoundsTest_Basic::_scalar_deleting_destructor_
          (FPCGApplyScaleToBoundsTest_Basic *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UEnum_PCG_EDeterminismLevel @ 149f753e0

UEnum * __cdecl Z_Construct_UEnum_PCG_EDeterminismLevel(void)

{
  if (Z_Registration_Info_UEnum_EDeterminismLevel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDeterminismLevel.InnerSingleton,
               &Z_Construct_UEnum_PCG_EDeterminismLevel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDeterminismLevel.InnerSingleton;
}

// EDeterminismLevel_StaticEnum @ 149f75420

UEnum * __cdecl EDeterminismLevel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EDeterminismLevel,(UObject *)pUVar1,
                       L"EDeterminismLevel");
  }
  return Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton;
}

// NewProp_bFlagRaised_SetBit @ 149f75460

void __cdecl
Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewProp_bFlagRaised_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewStructOps @ 149f75470

void * __cdecl Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDeterminismTestResult,&UE::CoreUObject::Private::Construct<FDeterminismTestResult>,&UE::CoreUObject::Private::ConstructForTests<FDeterminismTestResult>,&UE::CoreUObject::Private::Destruct<FDeterminismTestResult>,&UE::CoreUObject::Private::Copy<FDeterminismTestResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149f75fa0

void * __thiscall
FPCGApplyScaleToBoundsTest_NegativeScale::_scalar_deleting_destructor_
          (FPCGApplyScaleToBoundsTest_NegativeScale *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f75fe0

void * __thiscall
FPCGAttributeCastTestBase::_scalar_deleting_destructor_
          (FPCGAttributeCastTestBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f76350

void * __thiscall
FPCGAttributeCast_AttributeSetIntToDouble::_scalar_deleting_destructor_
          (FPCGAttributeCast_AttributeSetIntToDouble *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f766c0

void * __thiscall
FPCGAttributeCast_AttributeSetDoubleToInt::_scalar_deleting_destructor_
          (FPCGAttributeCast_AttributeSetDoubleToInt *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f76a30

void * __thiscall
FPCGAttributeCast_AttributeSetDoubleToBool::_scalar_deleting_destructor_
          (FPCGAttributeCast_AttributeSetDoubleToBool *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f76da0

void * __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::_scalar_deleting_destructor_
          (FPCGAttributeCast_AttributeSetBoolToDouble *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f771a0

void * __thiscall
FPCGAttributeCast_AttributeSetIntToString::_scalar_deleting_destructor_
          (FPCGAttributeCast_AttributeSetIntToString *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f77800

void * __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::_scalar_deleting_destructor_
          (FPCGAttributeCast_AttributeSetQuatToRotator *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f77bd0

void * __thiscall
FPCGAttributeCast_PointsIntToDouble::_scalar_deleting_destructor_
          (FPCGAttributeCast_PointsIntToDouble *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f786a0

void * __thiscall
FPCGAttributeCast_PointsIntToDoubleToDensity::_scalar_deleting_destructor_
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f78dc0

void * __thiscall
FPCGAttributeCast_SameType::_scalar_deleting_destructor_
          (FPCGAttributeCast_SameType *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f79560

void * __thiscall
FPCGAttributeCast_InvalidCast::_scalar_deleting_destructor_
          (FPCGAttributeCast_InvalidCast *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UPCGDeterminismTestBlueprintBase @ 149f795a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGDeterminismTestBlueprintBase(void)

{
  if (Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.OuterSingleton,
               &Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDeterminismTestResult @ 149f795e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDeterminismTestResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDeterminismTestResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDeterminismTestResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FDeterminismTestResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDeterminismTestResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDeterminismTestResult.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest @ 149f79660

UFunction * __cdecl Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGDeterminismTestBlueprintBase_ExecuteTest_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149f79db0

void * __thiscall
FPCGDifferenceDataTest::_scalar_deleting_destructor_(FPCGDifferenceDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7a580

void * __thiscall
FPCGIntersectionDataTest::_scalar_deleting_destructor_(FPCGIntersectionDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7a5c0

void * __thiscall
FPCGPointArrayDataTestBaseClass::_scalar_deleting_destructor_
          (FPCGPointArrayDataTestBaseClass *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7ac20

void * __thiscall
FPCGPointArrayDataInitializeFromDataTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataInitializeFromDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7b1e0

void * __thiscall
FPCGPointArrayDataDuplicateDataTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataDuplicateDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7b890

void * __thiscall
FPCGPointArrayDataFlattenTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataFlattenTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7c070

void * __thiscall
FPCGPointArrayDataMultiLevelInheritanceTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataMultiLevelInheritanceTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7c3d0

void * __thiscall
FPCGPointArrayDataToPointDataTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataToPointDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7c730

void * __thiscall
FPCGPointArrayDataToPointArrayDataTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataToPointArrayDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7cdf0

void * __thiscall
FPCGPointArrayDataDisabledParentingTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataDisabledParentingTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7d160

void * __thiscall
FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7d4d0

void * __thiscall
FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7d840

void * __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7dbb0

void * __thiscall
FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7e380

void * __thiscall
FPCGPointArrayDataCopyPropertyOverInheritedPropertyTest::_scalar_deleting_destructor_
          (FPCGPointArrayDataCopyPropertyOverInheritedPropertyTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7ed00

void * __thiscall
FPCGPointFilterDensity::_scalar_deleting_destructor_(FPCGPointFilterDensity *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f7f6d0

void * __thiscall
FPCGPointFilterDensityRange::_scalar_deleting_destructor_
          (FPCGPointFilterDensityRange *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f80150

void * __thiscall
FPCGAttributeFilterInt::_scalar_deleting_destructor_(FPCGAttributeFilterInt *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f80bf0

void * __thiscall
FPCGAttributeFilterIntRange::_scalar_deleting_destructor_
          (FPCGAttributeFilterIntRange *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f81860

void * __thiscall
FPCGAttributeFilterSkipTestBug::_scalar_deleting_destructor_
          (FPCGAttributeFilterSkipTestBug *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f822c0

void * __thiscall
FPCGAttributeFilter_Points_GenerateEmptyOutput::_scalar_deleting_destructor_
          (FPCGAttributeFilter_Points_GenerateEmptyOutput *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f82d40

void * __thiscall
FPCGAttributeFilter_PointsRange_GenerateEmptyOutput::_scalar_deleting_destructor_
          (FPCGAttributeFilter_PointsRange_GenerateEmptyOutput *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f837b0

void * __thiscall
FPCGAttributeFilter_Attributes_GenerateEmptyOutput::_scalar_deleting_destructor_
          (FPCGAttributeFilter_Attributes_GenerateEmptyOutput *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f84240

void * __thiscall
FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput::_scalar_deleting_destructor_
          (FPCGAttributeFilter_AttributesRange_GenerateEmptyOutput *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f84e70

void * __thiscall
FPCGAttributeFilter_Points_NoGenerateEmptyOutput::_scalar_deleting_destructor_
          (FPCGAttributeFilter_Points_NoGenerateEmptyOutput *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f85ce0

void * __thiscall
FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutput::_scalar_deleting_destructor_
          (FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutput *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f86920

void * __thiscall
FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput::_scalar_deleting_destructor_
          (FPCGAttributeFilter_Attributes_NoGenerateEmptyOutput *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f88c50

void * __thiscall
FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutput::_scalar_deleting_destructor_
          (FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutput *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f88cc0

void * __thiscall
FPCGSplineAccessorControlPointsPropertyTest::_scalar_deleting_destructor_
          (FPCGSplineAccessorControlPointsPropertyTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f89900

void * __thiscall
FPCGSplineAccessorControlPointsMetadataTest::_scalar_deleting_destructor_
          (FPCGSplineAccessorControlPointsMetadataTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// BothDataCastsToDataType<UPCGBasePointData_const_> @ 149f8a750

bool __cdecl
PCGDeterminismTests::BothDataCastsToDataType<UPCGBasePointData_const_>
          (UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 == (UPCGData *)0x0) {
      return false;
    }
  }
  pUVar5 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) && (param_2 != (UPCGData *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return true;
    }
  }
  return false;
}

// BothDataCastsToDataType<UPCGPointData_const_> @ 149f8a800

bool __cdecl
PCGDeterminismTests::BothDataCastsToDataType<UPCGPointData_const_>
          (UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 == (UPCGData *)0x0) {
      return false;
    }
  }
  pUVar5 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) && (param_2 != (UPCGData *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return true;
    }
  }
  return false;
}

// BothDataCastsToDataType<UPCGPolyLineData_const_> @ 149f8a8b0

bool __cdecl
PCGDeterminismTests::BothDataCastsToDataType<UPCGPolyLineData_const_>
          (UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 == (UPCGData *)0x0) {
      return false;
    }
  }
  pUVar5 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) && (param_2 != (UPCGData *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return true;
    }
  }
  return false;
}

// BothDataCastsToDataType<UPCGPrimitiveData_const_> @ 149f8a960

bool __cdecl
PCGDeterminismTests::BothDataCastsToDataType<UPCGPrimitiveData_const_>
          (UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 == (UPCGData *)0x0) {
      return false;
    }
  }
  pUVar5 = Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) && (param_2 != (UPCGData *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return true;
    }
  }
  return false;
}

// BothDataCastsToDataType<UPCGSpatialData_const_> @ 149f8aa10

bool __cdecl
PCGDeterminismTests::BothDataCastsToDataType<UPCGSpatialData_const_>
          (UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 == (UPCGData *)0x0) {
      return false;
    }
  }
  pUVar5 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) && (param_2 != (UPCGData *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return true;
    }
  }
  return false;
}

// BothDataCastsToDataType<UPCGSurfaceData_const_> @ 149f8aac0

bool __cdecl
PCGDeterminismTests::BothDataCastsToDataType<UPCGSurfaceData_const_>
          (UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 == (UPCGData *)0x0) {
      return false;
    }
  }
  pUVar5 = Z_Construct_UClass_UPCGSurfaceData_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) && (param_2 != (UPCGData *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPCGSurfaceData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return true;
    }
  }
  return false;
}

// BothDataCastsToDataType<UPCGVolumeData_const_> @ 149f8ab70

bool __cdecl
PCGDeterminismTests::BothDataCastsToDataType<UPCGVolumeData_const_>
          (UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_1 == (UPCGData *)0x0) {
      return false;
    }
  }
  pUVar5 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) && (param_2 != (UPCGData *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return true;
    }
  }
  return false;
}

// CastChecked<UPCGPointData_const_,UPCGData_const_> @ 149f8ac20

UPCGPointData * __cdecl CastChecked<UPCGPointData_const_,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
    pFVar3 = GetTypeName<UPCGPointData_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPointData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPointData_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPolyLineData_const_,UPCGData_const_> @ 149f8ace0

UPCGPolyLineData * __cdecl CastChecked<UPCGPolyLineData_const_,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
    pFVar3 = GetTypeName<UPCGPolyLineData_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPolyLineData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPolyLineData_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPrimitiveData_const_,UPCGData_const_> @ 149f8ada0

UPCGPrimitiveData * __cdecl CastChecked<UPCGPrimitiveData_const_,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
    pFVar3 = GetTypeName<UPCGPrimitiveData_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPrimitiveData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPrimitiveData_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGSpatialData_const_,UPCGData_const_> @ 149f8ae60

UPCGSpatialData * __cdecl CastChecked<UPCGSpatialData_const_,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
    pFVar3 = GetTypeName<UPCGSpatialData_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGSpatialData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGSpatialData_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGSurfaceData_const_,UPCGData_const_> @ 149f8af20

UPCGSurfaceData * __cdecl CastChecked<UPCGSurfaceData_const_,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
    pFVar3 = GetTypeName<UPCGSurfaceData_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGSurfaceData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGSurfaceData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGSurfaceData_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGVolumeData_const_,UPCGData_const_> @ 149f8afe0

UPCGVolumeData * __cdecl CastChecked<UPCGVolumeData_const_,UPCGData_const_>(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGData *)0x0) {
    pFVar3 = GetTypeName<UPCGVolumeData_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGVolumeData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGVolumeData_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGAddTagSettings,UPCGSettings> @ 149f8b0a0

UPCGAddTagSettings * __cdecl CastChecked<UPCGAddTagSettings,UPCGSettings>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGAddTagSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGAddTagSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGAddTagSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGAddTagSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSettings>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPCGPointArrayData,UPCGSpatialData> @ 149f8b160

UPCGPointArrayData * __cdecl
CastChecked<UPCGPointArrayData,UPCGSpatialData>(UPCGSpatialData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSpatialData *)0x0) {
    pFVar3 = GetTypeName<UPCGPointArrayData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGPointArrayData_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGPointArrayData *)param_1;
  }
  pFVar3 = GetTypeName<UPCGPointArrayData>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPCGSpatialData>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareProperty<1> @ 149f8b220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
PCGDeterminismTests::CompareProperty<1>(UPCGBasePointData *param_1,UPCGBasePointData *param_2)

{
  double *pdVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  double *pdVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  double local_158;
  double local_150;
  double local_148;
  longlong local_138;
  int local_130;
  int local_12c;
  int local_128;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  (**(code **)(param_1->_padding_ + 0x500))(param_1,&local_138);
  (**(code **)(param_2->_padding_ + 0x500))(param_2,&local_b8);
  if ((local_128 != local_a8) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("FirstRange.Num() == SecondRange.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                          ,0x3de,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    uVar17 = (*pcVar2)();
    return (bool)uVar17;
  }
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar11 = __real_3e45798ee2308c3a;
  uVar22 = 0;
  if (0 < local_128) {
    do {
      uVar19 = 0;
      if ((int)uVar22 < local_a8) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_160 = (longlong)local_a8;
        local_168 = (longlong)(int)uVar22;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar2 = (code *)swi(3);
          uVar17 = (*pcVar2)();
          return (bool)uVar17;
        }
      }
      pdVar23 = (double *)((longlong)((int)uVar22 % local_ac) * (longlong)local_b0 + local_b8);
      uVar19 = 0;
      if ((int)uVar22 < local_128) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      iVar18 = local_128;
      if (uVar19 == 0) {
        local_160 = (longlong)local_128;
        local_168 = (longlong)(int)uVar22;
        iVar18 = 0x50743f48;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar2 = (code *)swi(3);
          uVar17 = (*pcVar2)();
          return (bool)uVar17;
        }
      }
      lVar24 = (longlong)((int)uVar22 % local_12c) * (longlong)local_130;
      pdVar1 = (double *)(lVar24 + 0x30 + local_138);
      dVar26 = *pdVar1 - pdVar23[6];
      dVar28 = pdVar1[1] - pdVar23[7];
      pdVar1 = (double *)(lVar24 + 0x20 + local_138);
      dVar30 = *pdVar1 - pdVar23[4];
      dVar32 = pdVar1[1] - pdVar23[5];
      lVar25 = -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                           SUB84(dVar28,0) & uVar14));
      auVar3._8_4_ = (int)lVar25;
      auVar3._0_8_ = -(ulonglong)
                      (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                 SUB84(dVar26,0) & uVar12));
      auVar3._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      uVar19 = movmskpd(iVar18,auVar3);
      lVar25 = -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                           SUB84(dVar32,0) & uVar14));
      auVar8._8_4_ = (int)lVar25;
      auVar8._0_8_ = -(ulonglong)
                      (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                                 SUB84(dVar30,0) & uVar12));
      auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar18 = movmskpd(local_130,auVar8);
      if ((uVar19 & 0x3fffffff) != 0 || iVar18 != 0) {
        return false;
      }
      pdVar1 = (double *)(lVar24 + 0x10 + local_138);
      dVar26 = *pdVar1;
      dVar28 = pdVar1[1];
      dVar30 = *(double *)(lVar24 + local_138);
      dVar32 = ((double *)(lVar24 + local_138))[1];
      dVar27 = dVar26 - pdVar23[2];
      dVar29 = dVar28 - pdVar23[3];
      dVar26 = dVar26 + pdVar23[2];
      dVar28 = dVar28 + pdVar23[3];
      dVar31 = dVar30 - *pdVar23;
      dVar33 = dVar32 - pdVar23[1];
      dVar30 = dVar30 + *pdVar23;
      dVar32 = dVar32 + pdVar23[1];
      lVar25 = -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar15,
                                           SUB84(dVar29,0) & uVar14));
      auVar4._8_4_ = (int)lVar25;
      auVar4._0_8_ = -(ulonglong)
                      (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar13,
                                                 SUB84(dVar27,0) & uVar12));
      auVar4._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar20 = movmskpd(0,auVar4);
      lVar25 = -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar15,
                                           SUB84(dVar33,0) & uVar14));
      auVar5._8_4_ = (int)lVar25;
      auVar5._0_8_ = -(ulonglong)
                      (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar13,
                                                 SUB84(dVar31,0) & uVar12));
      auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      uVar19 = movmskpd(iVar18,auVar5);
      uVar21 = iVar20 << 2 | uVar19;
      if (uVar21 != 0) {
        lVar25 = -(ulonglong)
                  (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                             SUB84(dVar28,0) & uVar14));
        auVar6._8_4_ = (int)lVar25;
        auVar6._0_8_ = -(ulonglong)
                        (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                   SUB84(dVar26,0) & uVar12));
        auVar6._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar21 = movmskpd(uVar21,auVar6);
        lVar25 = -(ulonglong)
                  (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                             SUB84(dVar32,0) & uVar14));
        auVar9._8_4_ = (int)lVar25;
        auVar9._0_8_ = -(ulonglong)
                        (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                                   SUB84(dVar30,0) & uVar12));
        auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar19 = movmskpd(uVar19,auVar9);
        if ((uVar21 & 0x3fffffff) != 0 || uVar19 != 0) {
          return false;
        }
      }
      pdVar1 = (double *)(lVar24 + 0x50 + local_138);
      dVar26 = *pdVar1 - pdVar23[10];
      dVar28 = pdVar1[1] - pdVar23[0xb];
      pdVar1 = (double *)(lVar24 + 0x40 + local_138);
      dVar30 = *pdVar1 - pdVar23[8];
      dVar32 = pdVar1[1] - pdVar23[9];
      lVar24 = -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                           SUB84(dVar28,0) & uVar14));
      auVar7._8_4_ = (int)lVar24;
      auVar7._0_8_ = -(ulonglong)
                      (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                 SUB84(dVar26,0) & uVar12));
      auVar7._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      uVar21 = movmskpd(0,auVar7);
      lVar24 = -(ulonglong)
                (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                           SUB84(dVar32,0) & uVar14));
      auVar10._8_4_ = (int)lVar24;
      auVar10._0_8_ =
           -(ulonglong)
            (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                       SUB84(dVar30,0) & uVar12));
      auVar10._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar18 = movmskpd(uVar19,auVar10);
      if ((uVar21 & 0x3fffffff) != 0 || iVar18 != 0) {
        return false;
      }
      uVar22 = uVar22 + 1;
      local_158 = dVar11;
      local_150 = dVar11;
      local_148 = dVar11;
    } while ((int)uVar22 < local_128);
  }
  return true;
}

// CompareProperty<2> @ 149f8b500

bool __cdecl
PCGDeterminismTests::CompareProperty<2>(UPCGBasePointData *param_1,UPCGBasePointData *param_2)

{
  code *pcVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  
  (**(code **)(param_1->_padding_ + 0x508))(param_1,&local_58);
  (**(code **)(param_2->_padding_ + 0x508))(param_2,&local_40);
  if ((local_48 != local_30) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstRange.Num() == SecondRange.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x3de,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_322bcc77;
  uVar7 = 0;
  if (0 < local_48) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < local_30) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      pfVar8 = (float *)((longlong)((int)uVar7 % local_34) * (longlong)local_38 + local_40);
      uVar6 = 0;
      if ((int)uVar7 < local_48) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if (fVar2 < (float)((uint)(*(float *)((longlong)((int)uVar7 % local_4c) * (longlong)local_50 +
                                           local_58) - *pfVar8) & uVar3)) {
        return false;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_48);
  }
  return true;
}

// CompareProperty<4> @ 149f8b6a0

bool __cdecl
PCGDeterminismTests::CompareProperty<4>(UPCGBasePointData *param_1,UPCGBasePointData *param_2)

{
  code *pcVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double *pdVar10;
  double dVar11;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  
  (**(code **)(param_1->_padding_ + 0x510))(param_1,&local_88);
  (**(code **)(param_2->_padding_ + 0x510))(param_2,&local_58);
  if ((local_78 != local_48) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstRange.Num() == SecondRange.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x3de,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  uVar9 = 0;
  if (0 < local_78) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < local_48) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      pdVar10 = (double *)((longlong)((int)uVar9 % local_4c) * (longlong)local_50 + local_58);
      uVar7 = 0;
      if ((int)uVar9 < local_78) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      lVar8 = (longlong)((int)uVar9 % local_7c) * (longlong)local_80;
      dVar11 = *(double *)(lVar8 + local_88) - *pdVar10;
      if (((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,
                                     SUB84(dVar11,0) & uVar3)) ||
          (dVar11 = *(double *)(lVar8 + 8 + local_88) - pdVar10[1],
          dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,SUB84(dVar11,0) & uVar3
                                  ))) ||
         (dVar11 = *(double *)(lVar8 + 0x10 + local_88) - pdVar10[2],
         dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,SUB84(dVar11,0) & uVar3)
         )) {
        return false;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < local_78);
  }
  return true;
}

// CompareProperty<8> @ 149f8b880

bool __cdecl
PCGDeterminismTests::CompareProperty<8>(UPCGBasePointData *param_1,UPCGBasePointData *param_2)

{
  code *pcVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double *pdVar10;
  double dVar11;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  
  (**(code **)(param_1->_padding_ + 0x518))(param_1,&local_88);
  (**(code **)(param_2->_padding_ + 0x518))(param_2,&local_58);
  if ((local_78 != local_48) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstRange.Num() == SecondRange.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x3de,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  uVar9 = 0;
  if (0 < local_78) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < local_48) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      pdVar10 = (double *)((longlong)((int)uVar9 % local_4c) * (longlong)local_50 + local_58);
      uVar7 = 0;
      if ((int)uVar9 < local_78) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      lVar8 = (longlong)((int)uVar9 % local_7c) * (longlong)local_80;
      dVar11 = *(double *)(lVar8 + local_88) - *pdVar10;
      if (((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,
                                     SUB84(dVar11,0) & uVar3)) ||
          (dVar11 = *(double *)(lVar8 + 8 + local_88) - pdVar10[1],
          dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,SUB84(dVar11,0) & uVar3
                                  ))) ||
         (dVar11 = *(double *)(lVar8 + 0x10 + local_88) - pdVar10[2],
         dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,SUB84(dVar11,0) & uVar3)
         )) {
        return false;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < local_78);
  }
  return true;
}

// CompareProperty<16> @ 149f8ba60

bool __cdecl
PCGDeterminismTests::CompareProperty<16>(UPCGBasePointData *param_1,UPCGBasePointData *param_2)

{
  code *pcVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double *pdVar10;
  double dVar11;
  longlong local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  
  (**(code **)(param_1->_padding_ + 0x520))(param_1,&local_a8);
  (**(code **)(param_2->_padding_ + 0x520))(param_2,&local_68);
  if ((local_98 != local_58) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstRange.Num() == SecondRange.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x3de,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  uVar9 = 0;
  if (0 < local_98) {
    do {
      uVar7 = 0;
      if ((int)uVar9 < local_58) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      pdVar10 = (double *)((longlong)((int)uVar9 % local_5c) * (longlong)local_60 + local_68);
      uVar7 = 0;
      if ((int)uVar9 < local_98) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      lVar8 = (longlong)((int)uVar9 % local_9c) * (longlong)local_a0;
      dVar11 = *(double *)(lVar8 + local_a8) - *pdVar10;
      if ((((dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,
                                      SUB84(dVar11,0) & uVar3)) ||
           (dVar11 = *(double *)(lVar8 + 8 + local_a8) - pdVar10[1],
           dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,
                                    SUB84(dVar11,0) & uVar3))) ||
          (dVar11 = *(double *)(lVar8 + 0x10 + local_a8) - pdVar10[2],
          dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,SUB84(dVar11,0) & uVar3
                                  ))) ||
         (dVar11 = *(double *)(lVar8 + 0x18 + local_a8) - pdVar10[3],
         dVar2 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar4,SUB84(dVar11,0) & uVar3)
         )) {
        return false;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < local_98);
  }
  return true;
}

// CompareProperty<32> @ 149f8bc60

bool __cdecl
PCGDeterminismTests::CompareProperty<32>(UPCGBasePointData *param_1,UPCGBasePointData *param_2)

{
  code *pcVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  
  (**(code **)(param_1->_padding_ + 0x528))(param_1,&local_58);
  (**(code **)(param_2->_padding_ + 0x528))(param_2,&local_40);
  if ((local_48 != local_30) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstRange.Num() == SecondRange.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x3de,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_322bcc77;
  uVar7 = 0;
  if (0 < local_48) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < local_30) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      pfVar8 = (float *)((longlong)((int)uVar7 % local_34) * (longlong)local_38 + local_40);
      uVar6 = 0;
      if ((int)uVar7 < local_48) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if (fVar2 < (float)((uint)(*(float *)((longlong)((int)uVar7 % local_4c) * (longlong)local_50 +
                                           local_58) - *pfVar8) & uVar3)) {
        return false;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_48);
  }
  return true;
}

// CreateEmptyPointData<UPCGPointArrayData,0> @ 149f8be00

UPCGPointArrayData * __cdecl PCGTestsCommon::CreateEmptyPointData<UPCGPointArrayData,0>(void)

{
  UObject *pUVar1;
  UPCGPointArrayData *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UPCGPointArrayData>(pUVar1);
  return pUVar2;
}

// CreateEmptyPointData<UPCGPointData,0> @ 149f8be20

UPCGPointData * __cdecl PCGTestsCommon::CreateEmptyPointData<UPCGPointData,0>(void)

{
  UObject *pUVar1;
  UPCGPointData *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UPCGPointData>(pUVar1);
  return pUVar2;
}

// CreateRandomPointData<UPCGPointArrayData,0> @ 149f8be40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UPCGPointArrayData * __cdecl
PCGTestsCommon::CreateRandomPointData<UPCGPointArrayData,0>(int param_1,int param_2,bool param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  UObject *pUVar19;
  UPCGPointArrayData *pUVar20;
  double *pdVar21;
  uint *puVar22;
  float *pfVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  FRandomStream local_248;
  longlong local_240;
  int local_238;
  int local_234;
  int local_230;
  uint local_22c;
  longlong local_228;
  int local_220;
  int local_21c;
  int local_218;
  float local_214;
  TRotator<double> local_210;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TQuat<double> local_1a8;
  longlong local_188;
  int local_180;
  int local_17c;
  int local_178;
  double local_168 [4];
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  double local_128 [12];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_278;
  pUVar19 = GetTransientPackageAsObject();
  pUVar20 = NewObject<UPCGPointArrayData>(pUVar19);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UPCGPointArrayData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (**(code **)(pUVar20->_padding_ + 0x490))(pUVar20,param_1,1);
  (**(code **)(pUVar20->_padding_ + 0x4c0))(pUVar20,&local_148,1);
  (**(code **)(pUVar20->_padding_ + 0x4f0))(pUVar20,&local_240,1);
  (**(code **)(pUVar20->_padding_ + 0x4c8))(pUVar20,&local_228,1);
  (**(code **)(pUVar20->_padding_ + 0x4e0))(pUVar20,&local_188,1);
  dVar4 = __real_4076800000000000;
  fVar3 = __real_3f800000;
  uVar24 = 0;
  if (0 < param_1) {
    lVar26 = 0;
    local_248.InitialSeed = param_2;
    do {
      local_248.Seed = param_2 * 0xbb38435 + 0x3619636b;
      local_210.Pitch = (double)((float)(local_248.Seed >> 9 | 0x3f800000) - fVar3) * dVar4;
      local_210.Yaw = local_210.Pitch;
      local_210.Roll = local_210.Pitch;
      UE::Math::TRotator<double>::Quaternion(&local_210,&local_1a8);
      FRandomStream::GetUnitVector(&local_248,(TVector<double> *)&local_1e0._s_0);
      FRandomStream::GetUnitVector(&local_248,(TVector<double> *)&local_1f8._s_0);
      dVar16 = local_1a8.W;
      dVar15 = local_1a8.Z;
      dVar14 = local_1a8.Y;
      dVar13 = local_1a8.X;
      uVar12 = local_1e0._s_0.Z;
      uVar11 = local_1e0._12_4_;
      uVar10 = local_1e0._8_4_;
      uVar9 = local_1e0._4_4_;
      uVar8 = local_1e0._0_4_;
      uVar7 = local_1f8._s_0.Z;
      uVar6 = local_1f8._s_0.Y;
      uVar5 = local_1f8._s_0.X;
      uVar25 = ~uVar24 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar24 < local_138) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (local_258 = lVar26, local_250 = (longlong)local_138,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        pUVar20 = (UPCGPointArrayData *)(*pcVar1)();
        return pUVar20;
      }
      if (uVar24 == (int)uVar24 % local_13c) {
        pdVar21 = (double *)((longlong)local_140 * (longlong)((int)uVar24 % local_13c) + local_148);
      }
      else {
        pdVar21 = local_128;
      }
      *pdVar21 = dVar13;
      pdVar21[1] = dVar14;
      pdVar21[2] = dVar15;
      pdVar21[3] = dVar16;
      pdVar21[4] = (double)uVar5;
      pdVar21[5] = (double)uVar6;
      pdVar21[6] = (double)uVar7;
      pdVar21[7] = 0.0;
      *(undefined4 *)(pdVar21 + 8) = uVar8;
      *(undefined4 *)((longlong)pdVar21 + 0x44) = uVar9;
      *(undefined4 *)(pdVar21 + 9) = uVar10;
      *(undefined4 *)((longlong)pdVar21 + 0x4c) = uVar11;
      pdVar21[10] = (double)uVar12;
      pdVar21[0xb] = 0.0;
      uVar18 = 0;
      if ((int)uVar24 < local_230) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (local_258 = lVar26, local_250 = (longlong)local_230,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        pUVar20 = (UPCGPointArrayData *)(*pcVar1)();
        return pUVar20;
      }
      if (uVar24 == (int)uVar24 % local_234) {
        puVar22 = (uint *)((longlong)local_238 * (longlong)((int)uVar24 % local_234) + local_240);
      }
      else {
        puVar22 = &local_22c;
      }
      *puVar22 = uVar24;
      fVar2 = fVar3;
      if (param_3) {
        local_248.Seed = local_248.Seed * 0xbb38435 + 0x3619636b;
        fVar2 = (float)(local_248.Seed >> 9 | 0x3f800000) - fVar3;
      }
      uVar18 = 0;
      if ((int)uVar24 < local_218) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (local_258 = lVar26, local_250 = (longlong)local_218,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        pUVar20 = (UPCGPointArrayData *)(*pcVar1)();
        return pUVar20;
      }
      if (uVar24 == (int)uVar24 % local_21c) {
        pfVar23 = (float *)((longlong)local_220 * (longlong)((int)uVar24 % local_21c) + local_228);
      }
      else {
        pfVar23 = &local_214;
      }
      *pfVar23 = fVar2;
      FRandomStream::GetUnitVector(&local_248,(TVector<double> *)&local_1c8._s_0);
      uVar7 = local_1c8._s_0.Z;
      uVar6 = local_1c8._s_0.Y;
      uVar5 = local_1c8._s_0.X;
      uVar18 = 0;
      if ((int)uVar24 < local_178) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (local_258 = lVar26, local_250 = (longlong)local_178,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        pUVar20 = (UPCGPointArrayData *)(*pcVar1)();
        return pUVar20;
      }
      if (uVar24 == (int)uVar24 % local_17c) {
        pdVar21 = (double *)((longlong)local_180 * (longlong)((int)uVar24 % local_17c) + local_188);
      }
      else {
        pdVar21 = local_168;
      }
      *pdVar21 = (double)uVar5;
      uVar24 = uVar24 + 1;
      pdVar21[1] = (double)uVar6;
      lVar26 = lVar26 + 1;
      pdVar21[2] = (double)uVar7;
      pdVar21[3] = 1.0;
      param_2 = local_248.Seed;
    } while ((int)uVar24 < param_1);
  }
  return pUVar20;
}

// CreateRandomPointData<UPCGPointData,0> @ 149f8c2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UPCGPointData * __cdecl
PCGTestsCommon::CreateRandomPointData<UPCGPointData,0>(int param_1,int param_2,bool param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  UObject *pUVar19;
  UPCGPointData *pUVar20;
  double *pdVar21;
  uint *puVar22;
  float *pfVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  FRandomStream local_248;
  longlong local_240;
  int local_238;
  int local_234;
  int local_230;
  uint local_22c;
  longlong local_228;
  int local_220;
  int local_21c;
  int local_218;
  float local_214;
  TRotator<double> local_210;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TQuat<double> local_1a8;
  longlong local_188;
  int local_180;
  int local_17c;
  int local_178;
  double local_168 [4];
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  double local_128 [12];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_278;
  pUVar19 = GetTransientPackageAsObject();
  pUVar20 = NewObject<UPCGPointData>(pUVar19);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UPCGPointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (**(code **)(pUVar20->_padding_ + 0x490))(pUVar20,param_1,1);
  (**(code **)(pUVar20->_padding_ + 0x4c0))(pUVar20,&local_148,1);
  (**(code **)(pUVar20->_padding_ + 0x4f0))(pUVar20,&local_240,1);
  (**(code **)(pUVar20->_padding_ + 0x4c8))(pUVar20,&local_228,1);
  (**(code **)(pUVar20->_padding_ + 0x4e0))(pUVar20,&local_188,1);
  dVar4 = __real_4076800000000000;
  fVar3 = __real_3f800000;
  uVar24 = 0;
  if (0 < param_1) {
    lVar26 = 0;
    local_248.InitialSeed = param_2;
    do {
      local_248.Seed = param_2 * 0xbb38435 + 0x3619636b;
      local_210.Pitch = (double)((float)(local_248.Seed >> 9 | 0x3f800000) - fVar3) * dVar4;
      local_210.Yaw = local_210.Pitch;
      local_210.Roll = local_210.Pitch;
      UE::Math::TRotator<double>::Quaternion(&local_210,&local_1a8);
      FRandomStream::GetUnitVector(&local_248,(TVector<double> *)&local_1e0._s_0);
      FRandomStream::GetUnitVector(&local_248,(TVector<double> *)&local_1f8._s_0);
      dVar16 = local_1a8.W;
      dVar15 = local_1a8.Z;
      dVar14 = local_1a8.Y;
      dVar13 = local_1a8.X;
      uVar12 = local_1e0._s_0.Z;
      uVar11 = local_1e0._12_4_;
      uVar10 = local_1e0._8_4_;
      uVar9 = local_1e0._4_4_;
      uVar8 = local_1e0._0_4_;
      uVar7 = local_1f8._s_0.Z;
      uVar6 = local_1f8._s_0.Y;
      uVar5 = local_1f8._s_0.X;
      uVar25 = ~uVar24 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar24 < local_138) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (local_258 = lVar26, local_250 = (longlong)local_138,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        pUVar20 = (UPCGPointData *)(*pcVar1)();
        return pUVar20;
      }
      if (uVar24 == (int)uVar24 % local_13c) {
        pdVar21 = (double *)((longlong)local_140 * (longlong)((int)uVar24 % local_13c) + local_148);
      }
      else {
        pdVar21 = local_128;
      }
      *pdVar21 = dVar13;
      pdVar21[1] = dVar14;
      pdVar21[2] = dVar15;
      pdVar21[3] = dVar16;
      pdVar21[4] = (double)uVar5;
      pdVar21[5] = (double)uVar6;
      pdVar21[6] = (double)uVar7;
      pdVar21[7] = 0.0;
      *(undefined4 *)(pdVar21 + 8) = uVar8;
      *(undefined4 *)((longlong)pdVar21 + 0x44) = uVar9;
      *(undefined4 *)(pdVar21 + 9) = uVar10;
      *(undefined4 *)((longlong)pdVar21 + 0x4c) = uVar11;
      pdVar21[10] = (double)uVar12;
      pdVar21[0xb] = 0.0;
      uVar18 = 0;
      if ((int)uVar24 < local_230) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (local_258 = lVar26, local_250 = (longlong)local_230,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        pUVar20 = (UPCGPointData *)(*pcVar1)();
        return pUVar20;
      }
      if (uVar24 == (int)uVar24 % local_234) {
        puVar22 = (uint *)((longlong)local_238 * (longlong)((int)uVar24 % local_234) + local_240);
      }
      else {
        puVar22 = &local_22c;
      }
      *puVar22 = uVar24;
      fVar2 = fVar3;
      if (param_3) {
        local_248.Seed = local_248.Seed * 0xbb38435 + 0x3619636b;
        fVar2 = (float)(local_248.Seed >> 9 | 0x3f800000) - fVar3;
      }
      uVar18 = 0;
      if ((int)uVar24 < local_218) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (local_258 = lVar26, local_250 = (longlong)local_218,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        pUVar20 = (UPCGPointData *)(*pcVar1)();
        return pUVar20;
      }
      if (uVar24 == (int)uVar24 % local_21c) {
        pfVar23 = (float *)((longlong)local_220 * (longlong)((int)uVar24 % local_21c) + local_228);
      }
      else {
        pfVar23 = &local_214;
      }
      *pfVar23 = fVar2;
      FRandomStream::GetUnitVector(&local_248,(TVector<double> *)&local_1c8._s_0);
      uVar7 = local_1c8._s_0.Z;
      uVar6 = local_1c8._s_0.Y;
      uVar5 = local_1c8._s_0.X;
      uVar18 = 0;
      if ((int)uVar24 < local_178) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (local_258 = lVar26, local_250 = (longlong)local_178,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        pUVar20 = (UPCGPointData *)(*pcVar1)();
        return pUVar20;
      }
      if (uVar24 == (int)uVar24 % local_17c) {
        pdVar21 = (double *)((longlong)local_180 * (longlong)((int)uVar24 % local_17c) + local_188);
      }
      else {
        pdVar21 = local_168;
      }
      *pdVar21 = (double)uVar5;
      uVar24 = uVar24 + 1;
      pdVar21[1] = (double)uVar6;
      lVar26 = lVar26 + 1;
      pdVar21[2] = (double)uVar7;
      pdVar21[3] = 1.0;
      param_2 = local_248.Seed;
    } while ((int)uVar24 < param_1);
  }
  return pUVar20;
}

// DestructItems<TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>,int> @ 149f8c780

void __cdecl
DestructItems<TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>,int>
          (TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FPCGDataTypeIdentifier,int>
              ((FPCGDataTypeIdentifier *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GenerateSettings<UPCGAddTagSettings> @ 149f8cc80

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGAddTagSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGAddTagSettings>
          (FTestData *param_1,TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> *param_2)

{
  int *piVar1;
  UPCGSettings *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UPCGAddTagSettings *pUVar9;
  FName *pFVar10;
  undefined8 uVar11;
  uint uVar12;
  FPCGDataPtrWrapper *this;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UPCGAddTagSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGAddTagSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGAddTagSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGAddTagSettings *)(*pcVar4)();
      return pUVar9;
    }
  }
  piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
  param_1->Settings = (UPCGSettings *)pUVar9;
  *(int *)&pUVar9->_padding_ = param_1->Seed;
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  pUVar2 = param_1->Settings;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->InputData,piVar1);
  }
  (param_1->InputData).TaggedData.ArrayNum = iVar6 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar2);
  pFVar10 = ::FName::FName(local_c8,L"Settings");
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  FVar3 = *pFVar10;
  uVar12 = iVar6 - 1;
  uVar14 = 0;
  if ((int)uVar12 < iVar6) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if (uVar14 == 0) {
    local_d8 = (longlong)(int)uVar12;
    local_d0 = (longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGAddTagSettings *)(*pcVar4)();
      return pUVar9;
    }
  }
  *(FName *)((param_1->InputData).TaggedData.AllocatorInstance.Data +
            (longlong)(param_1->InputData).TaggedData.ArrayNum * 0x78 + -0x18) = FVar3;
  if (*(void **)param_2 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar4 = *(code **)param_2;
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar4)(uVar11,param_1);
  }
  if (*(longlong *)param_2 != 0) {
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return pUVar9;
}

// GenerateSettings<UPCGApplyScaleToBoundsSettings> @ 149f8cec0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGApplyScaleToBoundsSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGApplyScaleToBoundsSettings>
          (FTestData *param_1,TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> *param_2)

{
  int *piVar1;
  UPCGSettings *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  UPCGApplyScaleToBoundsSettings *pUVar10;
  FName *pFVar11;
  undefined8 uVar12;
  uint uVar13;
  FPCGDataPtrWrapper *this;
  longlong *plVar14;
  uint uVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UPCGApplyScaleToBoundsSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar9 == (UPCGSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UPCGApplyScaleToBoundsSettings *)(*pcVar4)();
      return pUVar10;
    }
  }
  piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
  param_1->Settings = pUVar9;
  pUVar9->Seed = param_1->Seed;
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  pUVar2 = param_1->Settings;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->InputData,piVar1);
  }
  (param_1->InputData).TaggedData.ArrayNum = iVar6 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar2);
  pFVar11 = ::FName::FName(local_c8,L"Settings");
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  FVar3 = *pFVar11;
  uVar13 = iVar6 - 1;
  uVar15 = 0;
  if ((int)uVar13 < iVar6) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if (uVar15 == 0) {
    local_d8 = (longlong)(int)uVar13;
    local_d0 = (longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UPCGApplyScaleToBoundsSettings *)(*pcVar4)();
      return pUVar10;
    }
  }
  *(FName *)((param_1->InputData).TaggedData.AllocatorInstance.Data +
            (longlong)(param_1->InputData).TaggedData.ArrayNum * 0x78 + -0x18) = FVar3;
  if (*(void **)param_2 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar4 = *(code **)param_2;
    plVar14 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_2->field_0x28;
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    (*pcVar4)(uVar12,param_1);
  }
  if (*(longlong *)param_2 != 0) {
    plVar14 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return (UPCGApplyScaleToBoundsSettings *)pUVar9;
}

// GenerateSettings<UPCGAttributeCastSettings> @ 149f8d100

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGAttributeCastSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>
          (FTestData *param_1,TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> *param_2)

{
  int *piVar1;
  UPCGSettings *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UPCGAttributeCastSettings *pUVar9;
  FName *pFVar10;
  undefined8 uVar11;
  uint uVar12;
  FPCGDataPtrWrapper *this;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UPCGAttributeCastSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGAttributeCastSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGAttributeCastSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGAttributeCastSettings *)(*pcVar4)();
      return pUVar9;
    }
  }
  piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
  param_1->Settings = (UPCGSettings *)pUVar9;
  *(int *)&pUVar9->_padding_ = param_1->Seed;
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  pUVar2 = param_1->Settings;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->InputData,piVar1);
  }
  (param_1->InputData).TaggedData.ArrayNum = iVar6 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar2);
  pFVar10 = ::FName::FName(local_c8,L"Settings");
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  FVar3 = *pFVar10;
  uVar12 = iVar6 - 1;
  uVar14 = 0;
  if ((int)uVar12 < iVar6) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if (uVar14 == 0) {
    local_d8 = (longlong)(int)uVar12;
    local_d0 = (longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGAttributeCastSettings *)(*pcVar4)();
      return pUVar9;
    }
  }
  *(FName *)((param_1->InputData).TaggedData.AllocatorInstance.Data +
            (longlong)(param_1->InputData).TaggedData.ArrayNum * 0x78 + -0x18) = FVar3;
  if (*(void **)param_2 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar4 = *(code **)param_2;
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar4)(uVar11,param_1);
  }
  if (*(longlong *)param_2 != 0) {
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return pUVar9;
}

// GenerateSettings<UPCGAttributeFilteringRangeSettings> @ 149f8d340

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGAttributeFilteringRangeSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGAttributeFilteringRangeSettings>
          (FTestData *param_1,TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> *param_2)

{
  int *piVar1;
  UPCGSettings *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UPCGAttributeFilteringRangeSettings *pUVar9;
  FName *pFVar10;
  undefined8 uVar11;
  uint uVar12;
  FPCGDataPtrWrapper *this;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UPCGAttributeFilteringRangeSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGAttributeFilteringRangeSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGAttributeFilteringRangeSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGAttributeFilteringRangeSettings *)(*pcVar4)();
      return pUVar9;
    }
  }
  piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
  param_1->Settings = (UPCGSettings *)pUVar9;
  *(int *)&pUVar9->field_0x50 = param_1->Seed;
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  pUVar2 = param_1->Settings;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->InputData,piVar1);
  }
  (param_1->InputData).TaggedData.ArrayNum = iVar6 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar2);
  pFVar10 = ::FName::FName(local_c8,L"Settings");
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  FVar3 = *pFVar10;
  uVar12 = iVar6 - 1;
  uVar14 = 0;
  if ((int)uVar12 < iVar6) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if (uVar14 == 0) {
    local_d8 = (longlong)(int)uVar12;
    local_d0 = (longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGAttributeFilteringRangeSettings *)(*pcVar4)();
      return pUVar9;
    }
  }
  *(FName *)((param_1->InputData).TaggedData.AllocatorInstance.Data +
            (longlong)(param_1->InputData).TaggedData.ArrayNum * 0x78 + -0x18) = FVar3;
  if (*(void **)param_2 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar4 = *(code **)param_2;
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar4)(uVar11,param_1);
  }
  if (*(longlong *)param_2 != 0) {
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return pUVar9;
}

// GenerateSettings<UPCGAttributeFilteringSettings> @ 149f8d580

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGAttributeFilteringSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGAttributeFilteringSettings>
          (FTestData *param_1,TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> *param_2)

{
  int *piVar1;
  UPCGSettings *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UPCGAttributeFilteringSettings *pUVar9;
  FName *pFVar10;
  undefined8 uVar11;
  uint uVar12;
  FPCGDataPtrWrapper *this;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UPCGAttributeFilteringSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGAttributeFilteringSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGAttributeFilteringSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGAttributeFilteringSettings *)(*pcVar4)();
      return pUVar9;
    }
  }
  piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
  param_1->Settings = (UPCGSettings *)pUVar9;
  *(int *)&pUVar9->field_0x50 = param_1->Seed;
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  pUVar2 = param_1->Settings;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->InputData,piVar1);
  }
  (param_1->InputData).TaggedData.ArrayNum = iVar6 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar2);
  pFVar10 = ::FName::FName(local_c8,L"Settings");
  iVar6 = (param_1->InputData).TaggedData.ArrayNum;
  FVar3 = *pFVar10;
  uVar12 = iVar6 - 1;
  uVar14 = 0;
  if ((int)uVar12 < iVar6) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if (uVar14 == 0) {
    local_d8 = (longlong)(int)uVar12;
    local_d0 = (longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGAttributeFilteringSettings *)(*pcVar4)();
      return pUVar9;
    }
  }
  *(FName *)((param_1->InputData).TaggedData.AllocatorInstance.Data +
            (longlong)(param_1->InputData).TaggedData.ArrayNum * 0x78 + -0x18) = FVar3;
  if (*(void **)param_2 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar4 = *(code **)param_2;
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar4)(uVar11,param_1);
  }
  if (*(longlong *)param_2 != 0) {
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return pUVar9;
}

// GetTypeName<UPCGPointData_const_> @ 149f8d7c0

FString * __cdecl GetTypeName<UPCGPointData_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGPointData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGPolyLineData_const_> @ 149f8d800

FString * __cdecl GetTypeName<UPCGPolyLineData_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGPrimitiveData_const_> @ 149f8d840

FString * __cdecl GetTypeName<UPCGPrimitiveData_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGSurfaceData_const_> @ 149f8d880

FString * __cdecl GetTypeName<UPCGSurfaceData_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGSurfaceData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGVolumeData_const_> @ 149f8d8c0

FString * __cdecl GetTypeName<UPCGVolumeData_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGAddTagSettings> @ 149f8d900

FString * __cdecl GetTypeName<UPCGAddTagSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGAddTagSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGSpatialData> @ 149f8d940

FString * __cdecl GetTypeName<UPCGSpatialData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UPCGAttributeExtractorTestObject> @ 149f8d980

void __cdecl InternalConstructor<UPCGAttributeExtractorTestObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UPCGAttributeExtractorTestObject__6B_;
  }
  return;
}

// InternalConstructor<UPCGDeterminismTestBlueprintBase> @ 149f8d9c0

void __cdecl InternalConstructor<UPCGDeterminismTestBlueprintBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPCGDeterminismTestBlueprintBase__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPCGAttributeExtractorTestObject> @ 149f8d9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGAttributeExtractorTestObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGAttributeExtractorTestObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPCGAttributeExtractorTestObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGDeterminismTestBlueprintBase> @ 149f8daa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGDeterminismTestBlueprintBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGDeterminismTestBlueprintBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGDeterminismTestBlueprintBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MetadataAttributesAreEqual<int> @ 149f8db50

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<int>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar4 = FPCGMetadataAttribute<int>::GetValue((FPCGMetadataAttribute<int> *)param_1,param_3);
  iVar5 = FPCGMetadataAttribute<int>::GetValue((FPCGMetadataAttribute<int> *)param_2,param_3);
  return iVar4 == iVar5;
}

// MetadataAttributesAreEqual<float> @ 149f8dbd0

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<float>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (((param_1 == (FPCGMetadataAttributeBase *)0x0) ||
      (param_2 == (FPCGMetadataAttributeBase *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstAttributeBase && SecondAttributeBase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                         ,0x137,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  fVar3 = FPCGMetadataAttribute<float>::GetValue((FPCGMetadataAttribute<float> *)param_1,param_3);
  fVar4 = FPCGMetadataAttribute<float>::GetValue((FPCGMetadataAttribute<float> *)param_2,param_3);
  return fVar3 == fVar4;
}

// MetadataAttributesAreEqual<double> @ 149f8dc60

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<double>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  if (((param_1 == (FPCGMetadataAttributeBase *)0x0) ||
      (param_2 == (FPCGMetadataAttributeBase *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstAttributeBase && SecondAttributeBase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                         ,0x137,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  dVar3 = FPCGMetadataAttribute<double>::GetValue((FPCGMetadataAttribute<double> *)param_1,param_3);
  dVar4 = FPCGMetadataAttribute<double>::GetValue((FPCGMetadataAttribute<double> *)param_2,param_3);
  return dVar3 == dVar4;
}

// MetadataAttributesAreEqual<UE::Math::TQuat<double>_> @ 149f8dcf0

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<UE::Math::TQuat<double>_>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TQuat<double> *pTVar7;
  int iVar8;
  TQuat<double> local_48;
  TQuat<double> local_28;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue
            ((FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)param_1,&local_48,param_3);
  pTVar7 = FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue
                     ((FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)param_2,&local_28,param_3);
  auVar3._8_4_ = (int)-(ulonglong)(local_48.Y == local_28.Y);
  auVar3._0_8_ = -(ulonglong)(local_48.X == local_28.X);
  auVar3._12_4_ = (int)(-(ulonglong)(local_48.Y == local_28.Y) >> 0x20);
  uVar6 = movmskpd((int)pTVar7,auVar3);
  auVar2._8_4_ = (int)-(ulonglong)(local_28.W == local_48.W);
  auVar2._0_8_ = -(ulonglong)(local_28.Z == local_48.Z);
  auVar2._12_4_ = (int)(-(ulonglong)(local_28.W == local_48.W) >> 0x20);
  iVar8 = movmskpd((int)param_2,auVar2);
  return (iVar8 << 2 | uVar6) == 0xf;
}

// MetadataAttributesAreEqual<UE::Math::TRotator<double>_> @ 149f8dda0

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<UE::Math::TRotator<double>_>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TRotator<double> local_38;
  TRotator<double> local_20;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
            ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)param_1,&local_38,param_3);
  FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
            ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)param_2,&local_20,param_3);
  if (((local_38.Pitch == local_20.Pitch) && (local_38.Yaw == local_20.Yaw)) &&
     (local_38.Roll == local_20.Roll)) {
    return true;
  }
  return false;
}

// MetadataAttributesAreEqual<UE::Math::TTransform<double>_> @ 149f8de60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<UE::Math::TTransform<double>_>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  TTransform<double> *pTVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_158 [64];
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (((param_1 == (FPCGMetadataAttributeBase *)0x0) ||
      (param_2 == (FPCGMetadataAttributeBase *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("FirstAttributeBase && SecondAttributeBase",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                          ,0x137,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    uVar11 = (*pcVar1)();
    return (bool)uVar11;
  }
  FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue
            ((FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)param_1,&local_118,param_3);
  pTVar13 = FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue
                      ((FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)param_2,&local_b8,
                       param_3);
  lVar17 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)
                                    (local_118.Translation.ZW.m128d_f64[1] -
                                    local_b8.Translation.ZW.m128d_f64[1]) >> 0x20) & _UNK_15061cc8c,
                             SUB84(local_118.Translation.ZW.m128d_f64[1] -
                                   local_b8.Translation.ZW.m128d_f64[1],0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar17;
  auVar2._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)
                                          (local_118.Translation.ZW.m128d_f64[0] -
                                          local_b8.Translation.ZW.m128d_f64[0]) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_118.Translation.ZW.m128d_f64[0] -
                                         local_b8.Translation.ZW.m128d_f64[0],0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  uVar14 = movmskpd((int)param_2,auVar2);
  lVar17 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)
                                    (local_118.Translation.XY.m128d_f64[1] -
                                    local_b8.Translation.XY.m128d_f64[1]) >> 0x20) & _UNK_15061cc8c,
                             SUB84(local_118.Translation.XY.m128d_f64[1] -
                                   local_b8.Translation.XY.m128d_f64[1],0) & _UNK_15061cc88));
  auVar7._8_4_ = (int)lVar17;
  auVar7._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)
                                          (local_118.Translation.XY.m128d_f64[0] -
                                          local_b8.Translation.XY.m128d_f64[0]) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_118.Translation.XY.m128d_f64[0] -
                                         local_b8.Translation.XY.m128d_f64[0],0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  iVar12 = movmskpd((int)pTVar13,auVar7);
  if ((uVar14 & 0x3fffffff) == 0 && iVar12 == 0) {
    lVar17 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)
                                      (local_118.Rotation.ZW.m128d_f64[1] -
                                      local_b8.Rotation.ZW.m128d_f64[1]) >> 0x20) & _UNK_15061cc8c,
                               SUB84(local_118.Rotation.ZW.m128d_f64[1] -
                                     local_b8.Rotation.ZW.m128d_f64[1],0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar17;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_118.Rotation.ZW.m128d_f64[0] -
                                            local_b8.Rotation.ZW.m128d_f64[0]) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_118.Rotation.ZW.m128d_f64[0] -
                                           local_b8.Rotation.ZW.m128d_f64[0],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar3._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar15 = movmskpd(0,auVar3);
    lVar17 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)
                                      (local_118.Rotation.XY.m128d_f64[1] -
                                      local_b8.Rotation.XY.m128d_f64[1]) >> 0x20) & _UNK_15061cc8c,
                               SUB84(local_118.Rotation.XY.m128d_f64[1] -
                                     local_b8.Rotation.XY.m128d_f64[1],0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar17;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_118.Rotation.XY.m128d_f64[0] -
                                            local_b8.Rotation.XY.m128d_f64[0]) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_118.Rotation.XY.m128d_f64[0] -
                                           local_b8.Rotation.XY.m128d_f64[0],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar4._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar14 = movmskpd(iVar12,auVar4);
    uVar16 = iVar15 << 2 | uVar14;
    if (uVar16 != 0) {
      lVar17 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)
                                        (local_118.Rotation.ZW.m128d_f64[1] +
                                        local_b8.Rotation.ZW.m128d_f64[1]) >> 0x20) & _UNK_15061cc8c
                                 ,SUB84(local_118.Rotation.ZW.m128d_f64[1] +
                                        local_b8.Rotation.ZW.m128d_f64[1],0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar17;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)
                                              (local_118.Rotation.ZW.m128d_f64[0] +
                                              local_b8.Rotation.ZW.m128d_f64[0]) >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_118.Rotation.ZW.m128d_f64[0] +
                                             local_b8.Rotation.ZW.m128d_f64[0],0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar16 = movmskpd(uVar16,auVar5);
      lVar17 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)
                                        (local_118.Rotation.XY.m128d_f64[1] +
                                        local_b8.Rotation.XY.m128d_f64[1]) >> 0x20) & _UNK_15061cc8c
                                 ,SUB84(local_118.Rotation.XY.m128d_f64[1] +
                                        local_b8.Rotation.XY.m128d_f64[1],0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar17;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)
                                              (local_118.Rotation.XY.m128d_f64[0] +
                                              local_b8.Rotation.XY.m128d_f64[0]) >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_118.Rotation.XY.m128d_f64[0] +
                                             local_b8.Rotation.XY.m128d_f64[0],0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar14 = movmskpd(uVar14,auVar9);
      if ((uVar16 & 0x3fffffff) != 0 || uVar14 != 0) {
        return false;
      }
    }
    lVar17 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)
                                      (local_118.Scale3D.ZW.m128d_f64[1] -
                                      local_b8.Scale3D.ZW.m128d_f64[1]) >> 0x20) & _UNK_15061cc8c,
                               SUB84(local_118.Scale3D.ZW.m128d_f64[1] -
                                     local_b8.Scale3D.ZW.m128d_f64[1],0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar17;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_118.Scale3D.ZW.m128d_f64[0] -
                                            local_b8.Scale3D.ZW.m128d_f64[0]) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_118.Scale3D.ZW.m128d_f64[0] -
                                           local_b8.Scale3D.ZW.m128d_f64[0],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar6._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar16 = movmskpd(0,auVar6);
    lVar17 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)
                                      (local_118.Scale3D.XY.m128d_f64[1] -
                                      local_b8.Scale3D.XY.m128d_f64[1]) >> 0x20) & _UNK_15061cc8c,
                               SUB84(local_118.Scale3D.XY.m128d_f64[1] -
                                     local_b8.Scale3D.XY.m128d_f64[1],0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar17;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)
                                            (local_118.Scale3D.XY.m128d_f64[0] -
                                            local_b8.Scale3D.XY.m128d_f64[0]) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_118.Scale3D.XY.m128d_f64[0] -
                                           local_b8.Scale3D.XY.m128d_f64[0],0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar8._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar12 = movmskpd(uVar14,auVar8);
    if ((uVar16 & 0x3fffffff) == 0 && iVar12 == 0) {
      return true;
    }
  }
  return false;
}

// MetadataAttributesAreEqual<UE::Math::TVector4<double>_> @ 149f8e080

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<UE::Math::TVector4<double>_>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TVector4<double>_u_0 local_48;
  TVector4<double>_u_0 local_28;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
            ((FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)param_1,
             (TVector4<double> *)&local_48._s_0,param_3);
  FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
            ((FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)param_2,
             (TVector4<double> *)&local_28._s_0,param_3);
  if ((((local_48._s_0.X == local_28._s_0.X) && (local_48._s_0.Y == local_28._s_0.Y)) &&
      (local_48._s_0.Z == local_28._s_0.Z)) && (local_48._s_0.W == local_28._s_0.W)) {
    return true;
  }
  return false;
}

// MetadataAttributesAreEqual<UE::Math::TVector<double>_> @ 149f8e150

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<UE::Math::TVector<double>_>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
            ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)param_1,
             (TVector<double> *)&local_38._s_0,param_3);
  FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
            ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)param_2,
             (TVector<double> *)&local_20._s_0,param_3);
  if (((local_38._s_0.X == local_20._s_0.X) && (local_38._s_0.Y == local_20._s_0.Y)) &&
     (local_38._s_0.Z == local_20._s_0.Z)) {
    return true;
  }
  return false;
}

// MetadataAttributesAreEqual<FName> @ 149f8e210

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<FName>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong local_res8;
  longlong local_res20;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FPCGMetadataAttribute<FName>::GetValue((FPCGMetadataAttribute<FName> *)param_1,(int)&local_res20);
  FPCGMetadataAttribute<FName>::GetValue((FPCGMetadataAttribute<FName> *)param_2,(int)&local_res8);
  return local_res20 == local_res8;
}

// MetadataAttributesAreEqual<FString> @ 149f8e2a0

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<FString>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FPCGMetadataAttribute<FString>::GetValue
            ((FPCGMetadataAttribute<FString> *)param_1,&local_18,param_3);
  FPCGMetadataAttribute<FString>::GetValue
            ((FPCGMetadataAttribute<FString> *)param_2,&local_28,param_3);
  if (local_18.Data.ArrayNum == local_28.Data.ArrayNum) {
    if (local_18.Data.ArrayNum < 2) {
      bVar2 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_18.Data.AllocatorInstance.Data,
                         (wchar_t *)local_28.Data.AllocatorInstance.Data);
      bVar2 = iVar4 == 0;
    }
  }
  else {
    bVar2 = local_18.Data.ArrayNum + local_28.Data.ArrayNum == 1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// MetadataAttributesAreEqual<__int64> @ 149f8e380

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<__int64>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  long64 lVar4;
  long64 lVar5;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lVar4 = FPCGMetadataAttribute<__int64>::GetValue
                    ((FPCGMetadataAttribute<__int64> *)param_1,param_3);
  lVar5 = FPCGMetadataAttribute<__int64>::GetValue
                    ((FPCGMetadataAttribute<__int64> *)param_2,param_3);
  return lVar4 == lVar5;
}

// MetadataAttributesAreEqual<bool> @ 149f8e400

bool __cdecl
PCGDeterminismTests::MetadataAttributesAreEqual<bool>
          (FPCGMetadataAttributeBase *param_1,FPCGMetadataAttributeBase *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) || (param_2 == (FPCGMetadataAttributeBase *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstAttributeBase && SecondAttributeBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FPCGMetadataAttribute<bool>::GetValue((FPCGMetadataAttribute<bool> *)param_1,param_3);
  bVar3 = FPCGMetadataAttribute<bool>::GetValue((FPCGMetadataAttribute<bool> *)param_2,param_3);
  return bVar3 == bVar2;
}

// NewObject<UPCGAddTagSettings> @ 149f8e480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGAddTagSettings * __cdecl NewObject<UPCGAddTagSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGAddTagSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGAddTagSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGAddTagSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGApplyScaleToBoundsSettings> @ 149f8e520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGApplyScaleToBoundsSettings * __cdecl NewObject<UPCGApplyScaleToBoundsSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGApplyScaleToBoundsSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGApplyScaleToBoundsSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGApplyScaleToBoundsSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGAttributeCastSettings> @ 149f8e5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGAttributeCastSettings * __cdecl NewObject<UPCGAttributeCastSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGAttributeCastSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGAttributeCastSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGAttributeCastSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGAttributeFilteringRangeSettings> @ 149f8e660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGAttributeFilteringRangeSettings * __cdecl
NewObject<UPCGAttributeFilteringRangeSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGAttributeFilteringRangeSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGAttributeFilteringRangeSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGAttributeFilteringRangeSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGAttributeFilteringSettings> @ 149f8e700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGAttributeFilteringSettings * __cdecl NewObject<UPCGAttributeFilteringSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGAttributeFilteringSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGAttributeFilteringSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGAttributeFilteringSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USplineComponent> @ 149f8e7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USplineComponent * __cdecl
NewObject<USplineComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  USplineComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_USplineComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (USplineComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ShiftArrayElements<FPCGTaggedData> @ 149f93090

void __cdecl
PCGHelpers::ShiftArrayElements<FPCGTaggedData>(TArrayView<FPCGTaggedData,int> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  FPCGDataPtrWrapper *pFVar12;
  FPCGDataPtrWrapper *pFVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ForAnyElementType local_48;
  int local_40 [2];
  
  iVar7 = param_1->ArrayNum;
  uVar8 = (ulonglong)iVar7;
  if ((1 < iVar7) && (param_2 != 0)) {
    iVar3 = (int)((longlong)param_2 % (longlong)iVar7);
    uVar15 = (ulonglong)(uint)(iVar3 + iVar7);
    if (-1 < iVar3) {
      uVar15 = (longlong)param_2 % (longlong)iVar7 & 0xffffffff;
    }
    uVar11 = 0;
    iVar14 = (int)uVar15;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar7,&local_48,local_40,local_40 + 1);
    DefaultConstructItems<FPCGTaggedData,int>(local_48.Data + (longlong)iVar3 * 0x78,iVar7);
    lVar5 = (longlong)iVar14;
    lVar16 = uVar8 - lVar5;
    uVar9 = uVar8;
    if (0 < iVar14) {
      uVar15 = uVar11;
      do {
        uVar10 = (uint)uVar11;
        uVar6 = (iVar7 - iVar14) + uVar10;
        iVar3 = (int)uVar9;
        uVar9 = uVar9 & 0xffffffff;
        uVar4 = 0;
        if ((int)uVar6 < iVar3) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar13 = (FPCGDataPtrWrapper *)
                  (param_1->DataPtr[lVar16].Tags.Hash.InlineData + (uVar15 - 0x48));
        uVar4 = 0;
        if ((int)uVar10 < local_40[0]) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar12 = (FPCGDataPtrWrapper *)(local_48.Data + uVar15);
        FPCGDataPtrWrapper::operator=(pFVar12,pFVar13);
        if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar12 + 1) !=
            (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar13 + 1)) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar12 + 1),
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar13 + 1))
          ;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        pFVar12[6].Data.field0_0x0 = pFVar13[6].Data.field0_0x0;
        uVar15 = uVar15 + 0x78;
        *(char *)&pFVar12[6].WeakData.WeakPtr.ObjectIndex =
             (char)pFVar13[6].WeakData.WeakPtr.ObjectIndex;
        *(undefined1 *)((longlong)&pFVar12[6].WeakData.WeakPtr.ObjectIndex + 1) =
             *(undefined1 *)((longlong)&pFVar13[6].WeakData.WeakPtr.ObjectIndex + 1);
        *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber =
             *(undefined8 *)&pFVar13[6].WeakData.WeakPtr.ObjectSerialNumber;
        *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) =
             *(undefined4 *)((longlong)&pFVar13[7].Data.field0_0x0 + 4);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar15 = (ulonglong)iVar14;
    }
    lVar5 = (longlong)iVar14;
    uVar10 = 0;
    if (lVar5 < (longlong)uVar8) {
      lVar17 = lVar5 * 0x78;
      do {
        iVar7 = (int)uVar9;
        uVar9 = uVar9 & 0xffffffff;
        uVar4 = 0;
        if ((int)uVar10 < iVar7) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar13 = (FPCGDataPtrWrapper *)
                  (param_1->DataPtr[-lVar5].Tags.Hash.InlineData + lVar17 + -0x48);
        uVar6 = (uint)uVar15;
        uVar4 = 0;
        if ((int)uVar6 < local_40[0]) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar12 = (FPCGDataPtrWrapper *)(local_48.Data + lVar17);
        FPCGDataPtrWrapper::operator=(pFVar12,pFVar13);
        if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar12 + 1) !=
            (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar13 + 1)) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar12 + 1),
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar13 + 1))
          ;
        }
        uVar15 = (ulonglong)(uVar6 + 1);
        pFVar12[6].Data.field0_0x0 = pFVar13[6].Data.field0_0x0;
        uVar10 = uVar10 + 1;
        lVar17 = lVar17 + 0x78;
        *(char *)&pFVar12[6].WeakData.WeakPtr.ObjectIndex =
             (char)pFVar13[6].WeakData.WeakPtr.ObjectIndex;
        *(undefined1 *)((longlong)&pFVar12[6].WeakData.WeakPtr.ObjectIndex + 1) =
             *(undefined1 *)((longlong)&pFVar13[6].WeakData.WeakPtr.ObjectIndex + 1);
        *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber =
             *(undefined8 *)&pFVar13[6].WeakData.WeakPtr.ObjectSerialNumber;
        *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) =
             *(undefined4 *)((longlong)&pFVar13[7].Data.field0_0x0 + 4);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    uVar10 = 0;
    if (0 < (longlong)uVar8) {
      lVar5 = 0;
      lVar16 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar10 < local_40[0]) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar13 = (FPCGDataPtrWrapper *)(local_48.Data + lVar16);
        uVar4 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar12 = (FPCGDataPtrWrapper *)((param_1->DataPtr->Tags).Hash.InlineData + lVar16 + -0x48);
        FPCGDataPtrWrapper::operator=(pFVar12,pFVar13);
        if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar12 + 1) !=
            (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar13 + 1)) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar12 + 1),
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar13 + 1))
          ;
        }
        uVar10 = uVar10 + 1;
        pFVar12[6].Data.field0_0x0 = pFVar13[6].Data.field0_0x0;
        lVar5 = lVar5 + 1;
        lVar16 = lVar16 + 0x78;
        *(char *)&pFVar12[6].WeakData.WeakPtr.ObjectIndex =
             (char)pFVar13[6].WeakData.WeakPtr.ObjectIndex;
        *(undefined1 *)((longlong)&pFVar12[6].WeakData.WeakPtr.ObjectIndex + 1) =
             *(undefined1 *)((longlong)&pFVar13[6].WeakData.WeakPtr.ObjectIndex + 1);
        *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber =
             *(undefined8 *)&pFVar13[6].WeakData.WeakPtr.ObjectSerialNumber;
        *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) =
             *(undefined4 *)((longlong)&pFVar13[7].Data.field0_0x0 + 4);
      } while (lVar5 < (longlong)uVar8);
    }
    DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_48.Data,local_40[0]);
    if ((FPCGTaggedData *)local_48.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// ShuffleArray<FPCGPoint> @ 149f93510

void __cdecl
PCGHelpers::ShuffleArray<FPCGPoint>
          (FRandomStream *param_1,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  bool bVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  int iVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  
  fVar30 = __real_3f800000;
  iVar36 = param_2->ArrayNum;
  iVar34 = 0;
  iVar1 = iVar36 + -1;
  if (0 < iVar1) {
    lVar35 = 0;
    lVar38 = 0;
    do {
      if (iVar36 < 1) {
        iVar33 = 0;
      }
      else {
        uVar32 = param_1->Seed * 0xbb38435 + 0x3619636b;
        param_1->Seed = uVar32;
        iVar33 = (int)(((float)(uVar32 >> 9 | 0x3f800000) - fVar30) * (float)iVar36);
      }
      iVar33 = iVar33 + iVar34;
      if (iVar34 != iVar33) {
        if ((iVar33 < 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0xce6,L""), bVar31)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((param_2->ArrayNum <= iVar34) || (param_2->ArrayNum <= iVar33)) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0xce7,L""), bVar31)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar37 = (param_2->AllocatorInstance).Data;
        uVar4 = *(undefined8 *)(pFVar37 + lVar38);
        uVar5 = *(undefined8 *)(pFVar37 + lVar38 + 8);
        pFVar2 = pFVar37 + lVar38;
        uVar6 = *(undefined8 *)(pFVar2 + 0x10);
        uVar7 = *(undefined8 *)(pFVar2 + 0x18);
        pFVar37 = pFVar37 + (longlong)iVar33 * 0xd0;
        uVar8 = *(undefined8 *)(pFVar2 + 0x20);
        uVar9 = *(undefined8 *)(pFVar2 + 0x28);
        uVar10 = *(undefined8 *)(pFVar2 + 0x30);
        uVar11 = *(undefined8 *)(pFVar2 + 0x38);
        uVar12 = *(undefined8 *)(pFVar2 + 0x40);
        uVar13 = *(undefined8 *)(pFVar2 + 0x48);
        uVar14 = *(undefined8 *)(pFVar2 + 0x50);
        uVar15 = *(undefined8 *)(pFVar2 + 0x58);
        uVar16 = *(undefined8 *)(pFVar2 + 0x60);
        uVar17 = *(undefined8 *)(pFVar2 + 0x68);
        uVar18 = *(undefined8 *)(pFVar2 + 0x70);
        uVar19 = *(undefined8 *)(pFVar2 + 0x78);
        uVar20 = *(undefined8 *)(pFVar2 + 0x80);
        uVar21 = *(undefined8 *)(pFVar2 + 0x88);
        uVar22 = *(undefined8 *)(pFVar2 + 0x90);
        uVar23 = *(undefined8 *)(pFVar2 + 0x98);
        uVar24 = *(undefined8 *)(pFVar2 + 0xa0);
        uVar25 = *(undefined8 *)(pFVar2 + 0xa8);
        uVar26 = *(undefined8 *)(pFVar2 + 0xb0);
        uVar27 = *(undefined8 *)(pFVar2 + 0xb8);
        auVar29 = *(undefined1 (*) [16])(pFVar2 + 0xc0);
        uVar28 = *(undefined8 *)(pFVar37 + 8);
        *(undefined8 *)pFVar2 = *(undefined8 *)pFVar37;
        *(undefined8 *)(pFVar2 + 8) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x18);
        *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)(pFVar37 + 0x10);
        *(undefined8 *)(pFVar2 + 0x18) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x28);
        *(undefined8 *)(pFVar2 + 0x20) = *(undefined8 *)(pFVar37 + 0x20);
        *(undefined8 *)(pFVar2 + 0x28) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x38);
        *(undefined8 *)(pFVar2 + 0x30) = *(undefined8 *)(pFVar37 + 0x30);
        *(undefined8 *)(pFVar2 + 0x38) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x48);
        *(undefined8 *)(pFVar2 + 0x40) = *(undefined8 *)(pFVar37 + 0x40);
        *(undefined8 *)(pFVar2 + 0x48) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x58);
        *(undefined8 *)(pFVar2 + 0x50) = *(undefined8 *)(pFVar37 + 0x50);
        *(undefined8 *)(pFVar2 + 0x58) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x68);
        *(undefined8 *)(pFVar2 + 0x60) = *(undefined8 *)(pFVar37 + 0x60);
        *(undefined8 *)(pFVar2 + 0x68) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x78);
        *(undefined8 *)(pFVar2 + 0x70) = *(undefined8 *)(pFVar37 + 0x70);
        *(undefined8 *)(pFVar2 + 0x78) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x88);
        *(undefined8 *)(pFVar2 + 0x80) = *(undefined8 *)(pFVar37 + 0x80);
        *(undefined8 *)(pFVar2 + 0x88) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0x98);
        *(undefined8 *)(pFVar2 + 0x90) = *(undefined8 *)(pFVar37 + 0x90);
        *(undefined8 *)(pFVar2 + 0x98) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0xa8);
        *(undefined8 *)(pFVar2 + 0xa0) = *(undefined8 *)(pFVar37 + 0xa0);
        *(undefined8 *)(pFVar2 + 0xa8) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 0xb8);
        *(undefined8 *)(pFVar2 + 0xb0) = *(undefined8 *)(pFVar37 + 0xb0);
        *(undefined8 *)(pFVar2 + 0xb8) = uVar28;
        uVar28 = *(undefined8 *)(pFVar37 + 200);
        *(undefined8 *)(pFVar2 + 0xc0) = *(undefined8 *)(pFVar37 + 0xc0);
        *(undefined8 *)(pFVar2 + 200) = uVar28;
        *(undefined8 *)pFVar37 = uVar4;
        *(undefined8 *)(pFVar37 + 8) = uVar5;
        *(undefined8 *)(pFVar37 + 0x10) = uVar6;
        *(undefined8 *)(pFVar37 + 0x18) = uVar7;
        *(undefined8 *)(pFVar37 + 0x20) = uVar8;
        *(undefined8 *)(pFVar37 + 0x28) = uVar9;
        *(undefined8 *)(pFVar37 + 0x30) = uVar10;
        *(undefined8 *)(pFVar37 + 0x38) = uVar11;
        *(undefined8 *)(pFVar37 + 0x40) = uVar12;
        *(undefined8 *)(pFVar37 + 0x48) = uVar13;
        *(undefined8 *)(pFVar37 + 0x50) = uVar14;
        *(undefined8 *)(pFVar37 + 0x58) = uVar15;
        *(undefined8 *)(pFVar37 + 0x60) = uVar16;
        *(undefined8 *)(pFVar37 + 0x68) = uVar17;
        *(undefined8 *)(pFVar37 + 0x70) = uVar18;
        *(undefined8 *)(pFVar37 + 0x78) = uVar19;
        *(undefined8 *)(pFVar37 + 0x80) = uVar20;
        *(undefined8 *)(pFVar37 + 0x88) = uVar21;
        *(undefined8 *)(pFVar37 + 0x90) = uVar22;
        *(undefined8 *)(pFVar37 + 0x98) = uVar23;
        *(undefined8 *)(pFVar37 + 0xa0) = uVar24;
        *(undefined8 *)(pFVar37 + 0xa8) = uVar25;
        *(undefined8 *)(pFVar37 + 0xb0) = uVar26;
        *(undefined8 *)(pFVar37 + 0xb8) = uVar27;
        *(undefined1 (*) [16])(pFVar37 + 0xc0) = auVar29;
      }
      iVar34 = iVar34 + 1;
      iVar36 = iVar36 + -1;
      lVar35 = lVar35 + 1;
      lVar38 = lVar38 + 0xd0;
    } while (lVar35 < iVar1);
  }
  return;
}

// ShuffleArray<FPCGTaggedData> @ 149f937f0

void __cdecl
PCGHelpers::ShuffleArray<FPCGTaggedData>
          (FRandomStream *param_1,TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  
  fVar20 = __real_3f800000;
  iVar27 = param_2->ArrayNum;
  iVar25 = 0;
  iVar1 = iVar27 + -1;
  if (0 < iVar1) {
    lVar28 = 0;
    lVar26 = 0;
    do {
      if (iVar27 < 1) {
        iVar23 = 0;
      }
      else {
        uVar22 = param_1->Seed * 0xbb38435 + 0x3619636b;
        param_1->Seed = uVar22;
        iVar23 = (int)(((float)(uVar22 >> 9 | 0x3f800000) - fVar20) * (float)iVar27);
      }
      iVar23 = iVar23 + iVar25;
      if (iVar25 != iVar23) {
        if ((iVar23 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0xce6,L""), bVar21)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((param_2->ArrayNum <= iVar25) || (param_2->ArrayNum <= iVar23)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0xce7,L""), bVar21)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar5 = *(undefined8 *)(pFVar3 + lVar26);
        uVar6 = *(undefined8 *)(pFVar3 + lVar26 + 8);
        uVar7 = *(undefined8 *)(pFVar3 + lVar26 + 0x10);
        uVar8 = *(undefined8 *)(pFVar3 + lVar26 + 0x10 + 8);
        uVar9 = *(undefined8 *)(pFVar3 + lVar26 + 0x20);
        uVar10 = *(undefined8 *)(pFVar3 + lVar26 + 0x20 + 8);
        pFVar24 = pFVar3 + (longlong)iVar23 * 0x78;
        uVar11 = *(undefined8 *)(pFVar3 + lVar26 + 0x30);
        uVar12 = *(undefined8 *)(pFVar3 + lVar26 + 0x30 + 8);
        uVar13 = *(undefined8 *)(pFVar3 + lVar26 + 0x40);
        uVar14 = *(undefined8 *)(pFVar3 + lVar26 + 0x40 + 8);
        uVar15 = *(undefined8 *)(pFVar24 + 8);
        uVar16 = *(undefined8 *)(pFVar3 + lVar26 + 0x50);
        uVar17 = *(undefined8 *)(pFVar3 + lVar26 + 0x50 + 8);
        uVar18 = *(undefined8 *)(pFVar3 + lVar26 + 0x60);
        uVar19 = *(undefined8 *)(pFVar3 + lVar26 + 0x60 + 8);
        uVar2 = *(undefined8 *)(pFVar3 + lVar26 + 0x70);
        *(undefined8 *)(pFVar3 + lVar26) = *(undefined8 *)pFVar24;
        *(undefined8 *)(pFVar3 + lVar26 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar24 + 0x18);
        *(undefined8 *)(pFVar3 + lVar26 + 0x10) = *(undefined8 *)(pFVar24 + 0x10);
        *(undefined8 *)(pFVar3 + lVar26 + 0x10 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar24 + 0x28);
        *(undefined8 *)(pFVar3 + lVar26 + 0x20) = *(undefined8 *)(pFVar24 + 0x20);
        *(undefined8 *)(pFVar3 + lVar26 + 0x20 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar24 + 0x38);
        *(undefined8 *)(pFVar3 + lVar26 + 0x30) = *(undefined8 *)(pFVar24 + 0x30);
        *(undefined8 *)(pFVar3 + lVar26 + 0x30 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar24 + 0x48);
        *(undefined8 *)(pFVar3 + lVar26 + 0x40) = *(undefined8 *)(pFVar24 + 0x40);
        *(undefined8 *)(pFVar3 + lVar26 + 0x40 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar24 + 0x58);
        *(undefined8 *)(pFVar3 + lVar26 + 0x50) = *(undefined8 *)(pFVar24 + 0x50);
        *(undefined8 *)(pFVar3 + lVar26 + 0x50 + 8) = uVar15;
        *(undefined1 (*) [16])(pFVar3 + lVar26 + 0x60) = *(undefined1 (*) [16])(pFVar24 + 0x60);
        *(undefined8 *)(pFVar3 + lVar26 + 0x70) = *(undefined8 *)(pFVar24 + 0x70);
        *(undefined8 *)pFVar24 = uVar5;
        *(undefined8 *)(pFVar24 + 8) = uVar6;
        *(undefined8 *)(pFVar24 + 0x10) = uVar7;
        *(undefined8 *)(pFVar24 + 0x18) = uVar8;
        *(undefined8 *)(pFVar24 + 0x20) = uVar9;
        *(undefined8 *)(pFVar24 + 0x28) = uVar10;
        *(undefined8 *)(pFVar24 + 0x30) = uVar11;
        *(undefined8 *)(pFVar24 + 0x38) = uVar12;
        *(undefined8 *)(pFVar24 + 0x40) = uVar13;
        *(undefined8 *)(pFVar24 + 0x48) = uVar14;
        *(undefined8 *)(pFVar24 + 0x50) = uVar16;
        *(undefined8 *)(pFVar24 + 0x58) = uVar17;
        *(undefined8 *)(pFVar24 + 0x60) = uVar18;
        *(undefined8 *)(pFVar24 + 0x68) = uVar19;
        *(undefined8 *)(pFVar24 + 0x70) = uVar2;
      }
      iVar25 = iVar25 + 1;
      iVar27 = iVar27 + -1;
      lVar28 = lVar28 + 1;
      lVar26 = lVar26 + 0x78;
    } while (lVar28 < iVar1);
  }
  return;
}

// StaticEnum<enum_EDeterminismLevel> @ 149f939f0

UEnum * __cdecl StaticEnum<enum_EDeterminismLevel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EDeterminismLevel,(UObject *)pUVar1,
                       L"EDeterminismLevel");
  }
  return Z_Registration_Info_UEnum_EDeterminismLevel.OuterSingleton;
}

// operator() @ 149f955d0

bool __thiscall
`PCGPointFilterTest::GetNumEmptyData'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  code *pcVar1;
  FObjectPtr_u_0 FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  long64 lVar7;
  FObjectPtr_u_0 local_res10;
  FObjectPtr_u_0 local_res18 [2];
  
  local_res10 = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGData *)local_res10.Handle == (UPCGData *)0x0) goto LAB_149f95635;
    UE::GC::MarkAsReachable(local_res10.Handle);
  }
  if ((UPCGData *)local_res10.Handle != (UPCGData *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar6);
    if ((bVar3) && ((UPCGData *)local_res10.Handle != (UPCGData *)0x0)) {
      iVar5 = (**(code **)(*(longlong *)local_res10.Handle + 0x488))();
      return iVar5 == 0;
    }
  }
LAB_149f95635:
  local_res18[0] = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UPCGData *)local_res18[0].Handle == (UPCGData *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable(local_res18[0].Handle);
  }
  if ((UPCGData *)local_res18[0].Handle != (UPCGData *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGParamData_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)local_res18,pUVar6);
    FVar2 = local_res18[0];
    if ((bVar3) && ((UPCGData *)local_res18[0].Handle != (UPCGData *)0x0)) {
      if ((*(longlong *)&local_res18[0].Handle[1].field_0x10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParamData->Metadata",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                             ,0x74,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      iVar5 = UPCGMetadata::GetAttributeCount(*(UPCGMetadata **)&FVar2.Handle[1].field_0x10);
      if ((iVar5 != 0) &&
         (lVar7 = UPCGMetadata::GetItemCountForChild(*(UPCGMetadata **)&FVar2.Handle[1].field_0x10),
         lVar7 != 0)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// `scalar_deleting_destructor' @ 149f96870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUPCGData__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f968b0

void * __thiscall
UPCGAttributeExtractorTestObject::_scalar_deleting_destructor_
          (UPCGAttributeExtractorTestObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGAttributeExtractorTestObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f96910

void * __thiscall
UPCGDeterminismTestBlueprintBase::_scalar_deleting_destructor_
          (UPCGDeterminismTestBlueprintBase *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGDeterminismTestBlueprintBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// AddLandscapeInputData @ 149f96970

void __cdecl PCGDeterminismTests::AddLandscapeInputData(FPCGDataCollection *param_1)

{
  return;
}

// AddMultiplePointsInputData @ 149f96980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
PCGDeterminismTests::AddMultiplePointsInputData
          (FPCGDataCollection *param_1,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_2,
          FName *param_3)

{
  float fVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  long64 lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  UPCGBasePointData *pUVar20;
  TTransform<double> *pTVar21;
  float *pfVar22;
  TVector<double> *pTVar23;
  TVector4<double> *pTVar24;
  int *piVar25;
  long64 *plVar26;
  FPCGDataPtrWrapper *this;
  ulonglong uVar27;
  uint uVar28;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  FPCGPointValueRanges local_238;
  ulonglong local_a8;
  ulonglong uVar29;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_268;
  pUVar20 = PCGTestsCommon::CreateEmptyBasePointData();
  (**(code **)(pUVar20->_padding_ + 0x490))(pUVar20,param_2->ArrayNum,1);
  (**(code **)(pUVar20->_padding_ + 0x498))(pUVar20,0xff);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_238,pUVar20,false);
  iVar19 = param_2->ArrayNum;
  uVar27 = 0;
  uVar29 = uVar27;
  if (0 < iVar19) {
    do {
      uVar28 = (uint)uVar29;
      uVar18 = 0;
      if ((int)uVar28 < iVar19) {
        uVar18 = ~uVar28 >> 0x1f;
      }
      if (uVar18 == 0) {
        local_240 = (longlong)iVar19;
        local_248 = (longlong)(int)uVar28;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (local_238.TransformRange.NumElements != 0) {
        dVar2 = *(double *)(pFVar3 + uVar27);
        dVar6 = *(double *)(pFVar3 + uVar27 + 8);
        dVar7 = *(double *)(pFVar3 + uVar27 + 0x10);
        dVar8 = *(double *)(pFVar3 + uVar27 + 0x10 + 8);
        dVar9 = *(double *)(pFVar3 + uVar27 + 0x20);
        dVar10 = *(double *)(pFVar3 + uVar27 + 0x20 + 8);
        dVar11 = *(double *)(pFVar3 + uVar27 + 0x30);
        dVar12 = *(double *)(pFVar3 + uVar27 + 0x30 + 8);
        dVar13 = *(double *)(pFVar3 + uVar27 + 0x40);
        dVar14 = *(double *)(pFVar3 + uVar27 + 0x40 + 8);
        dVar15 = *(double *)(pFVar3 + uVar27 + 0x50);
        dVar16 = *(double *)(pFVar3 + uVar27 + 0x50 + 8);
        pTVar21 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_238.TransformRange,uVar28);
        (pTVar21->Rotation).XY.m128d_f64[0] = dVar2;
        (pTVar21->Rotation).XY.m128d_f64[1] = dVar6;
        (pTVar21->Rotation).ZW.m128d_f64[0] = dVar7;
        (pTVar21->Rotation).ZW.m128d_f64[1] = dVar8;
        (pTVar21->Translation).XY.m128d_f64[0] = dVar9;
        (pTVar21->Translation).XY.m128d_f64[1] = dVar10;
        (pTVar21->Translation).ZW.m128d_f64[0] = dVar11;
        (pTVar21->Translation).ZW.m128d_f64[1] = dVar12;
        (pTVar21->Scale3D).XY.m128d_f64[0] = dVar13;
        (pTVar21->Scale3D).XY.m128d_f64[1] = dVar14;
        (pTVar21->Scale3D).ZW.m128d_f64[0] = dVar15;
        (pTVar21->Scale3D).ZW.m128d_f64[1] = dVar16;
      }
      if (local_238.DensityRange.NumElements != 0) {
        fVar1 = *(float *)(pFVar3 + uVar27 + 0x60);
        pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_238.DensityRange,uVar28);
        *pfVar22 = fVar1;
      }
      if (local_238.SteepnessRange.NumElements != 0) {
        fVar1 = *(float *)(pFVar3 + uVar27 + 0xc0);
        pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_238.SteepnessRange,uVar28);
        *pfVar22 = fVar1;
      }
      if (local_238.BoundsMinRange.NumElements != 0) {
        dVar6 = *(double *)(pFVar3 + uVar27 + 0x68);
        dVar7 = *(double *)(pFVar3 + uVar27 + 0x68 + 8);
        dVar2 = *(double *)(pFVar3 + uVar27 + 0x78);
        pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_238.BoundsMinRange,uVar28);
        (pTVar23->field0_0x0)._s_0.X = dVar6;
        (pTVar23->field0_0x0)._s_0.Y = dVar7;
        (pTVar23->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_238.BoundsMaxRange.NumElements != 0) {
        dVar6 = *(double *)(pFVar3 + uVar27 + 0x80);
        dVar7 = *(double *)(pFVar3 + uVar27 + 0x80 + 8);
        dVar2 = *(double *)(pFVar3 + uVar27 + 0x90);
        pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_238.BoundsMaxRange,uVar28);
        (pTVar23->field0_0x0)._s_0.X = dVar6;
        (pTVar23->field0_0x0)._s_0.Y = dVar7;
        (pTVar23->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_238.ColorRange.NumElements != 0) {
        dVar2 = *(double *)(pFVar3 + uVar27 + 0xa0);
        dVar6 = *(double *)(pFVar3 + uVar27 + 0xa0 + 8);
        dVar7 = *(double *)(pFVar3 + uVar27 + 0xb0);
        dVar8 = *(double *)(pFVar3 + uVar27 + 0xb0 + 8);
        pTVar24 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_238.ColorRange,uVar28);
        (pTVar24->field0_0x0)._s_0.X = dVar2;
        (pTVar24->field0_0x0)._s_0.Y = dVar6;
        (pTVar24->field0_0x0)._s_0.Z = dVar7;
        (pTVar24->field0_0x0)._s_0.W = dVar8;
      }
      if (local_238.SeedRange.NumElements != 0) {
        iVar19 = *(int *)(pFVar3 + uVar27 + 0xc4);
        piVar25 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_238.SeedRange,uVar28);
        *piVar25 = iVar19;
      }
      if (local_238.MetadataEntryRange.NumElements != 0) {
        lVar4 = *(long64 *)(pFVar3 + uVar27 + 200);
        plVar26 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_238.MetadataEntryRange,uVar28);
        *plVar26 = lVar4;
      }
      iVar19 = param_2->ArrayNum;
      uVar27 = uVar27 + 0xd0;
      uVar29 = (ulonglong)(uVar28 + 1);
    } while ((int)(uVar28 + 1) < iVar19);
  }
  iVar19 = (param_1->TaggedData).ArrayNum;
  piVar25 = &(param_1->TaggedData).ArrayMax;
  if (iVar19 == *piVar25) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)param_1,piVar25);
  }
  (param_1->TaggedData).ArrayNum = iVar19 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->TaggedData).AllocatorInstance.Data + (longlong)iVar19 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar20);
  this[6].Data.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_3;
  return;
}

// AddPolyLineInputData @ 149f96d30

void __cdecl
PCGDeterminismTests::AddPolyLineInputData
          (FPCGDataCollection *param_1,USplineComponent *param_2,FName *param_3)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  UPCGSplineData *this;
  FPCGDataPtrWrapper *this_00;
  
  pUVar3 = GetTransientPackageAsObject();
  this = NewObject<UPCGSplineData>(pUVar3);
  UPCGSplineData::Initialize(this,param_2);
  iVar2 = (param_1->TaggedData).ArrayNum;
  piVar1 = &(param_1->TaggedData).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->TaggedData).ArrayNum = iVar2 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((param_1->TaggedData).AllocatorInstance.Data + (longlong)iVar2 * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)this);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_3;
  return;
}

// AddPrimitiveInputData @ 149f96e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
PCGDeterminismTests::AddPrimitiveInputData
          (FPCGDataCollection *param_1,UPrimitiveComponent *param_2,TVector<double> *param_3,
          FName *param_4)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPCGPrimitiveData *this;
  longlong *plVar6;
  FPCGDataPtrWrapper *this_00;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._8_8_ = pUVar4;
  this = (UPCGPrimitiveData *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  UPCGPrimitiveData::Initialize(this,param_2);
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  piVar1 = &(param_1->TaggedData).ArrayMax;
  (this->VoxelSize).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->VoxelSize).field0_0x0._s_0.Y = dVar2;
  (this->VoxelSize).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  iVar3 = (param_1->TaggedData).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->TaggedData).ArrayNum = iVar3 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((param_1->TaggedData).AllocatorInstance.Data + (longlong)iVar3 * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)this);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_4;
  return;
}

// AddRandomizedInputData @ 149f96f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
PCGDeterminismTests::AddRandomizedInputData
          (FTestData *param_1,FPCGDataTypeIdentifier *param_2,FName *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  bVar2 = FPCGDataTypeIdentifier::IsSameType(param_2,pFVar3);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  if (bVar2) {
    AddRandomizedMultiplePointInputData(param_1,100,param_3);
  }
  else {
    pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Volume);
    bVar2 = FPCGDataTypeIdentifier::IsSameType(param_2,pFVar3);
    if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Ids.AllocatorInstance.Data);
    }
    if (bVar2) {
      AddRandomizedVolumeInputData(param_1,param_3);
    }
    else {
      pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PolyLine);
      bVar2 = FPCGDataTypeIdentifier::IsSameType(param_2,pFVar3);
      if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Ids.AllocatorInstance.Data);
      }
      if (bVar2) {
        AddRandomizedPolyLineInputData(param_1,6,param_3);
      }
      else {
        pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Primitive);
        bVar2 = FPCGDataTypeIdentifier::IsSameType(param_2,pFVar3);
        if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Ids.AllocatorInstance.Data);
        }
        if (bVar2) {
          AddRandomizedPrimitiveInputData(param_1,param_3);
        }
        else {
          bVar2 = FPCGDataTypeIdentifier::operator==(param_2,Surface);
          if (!bVar2) {
            bVar2 = FPCGDataTypeIdentifier::operator==(param_2,Landscape);
            if (!bVar2) {
              bVar2 = FPCGDataTypeIdentifier::IsValid(param_2);
              if ((bVar2) && (1 < (byte)LogPCG._0_1_)) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              }
            }
          }
        }
      }
    }
  }
  pFVar1 = (param_2->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddRandomizedLandscapeInputData @ 149f97130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl PCGDeterminismTests::AddRandomizedLandscapeInputData(FTestData *param_1,FName *param_2)

{
  return;
}

// AddRandomizedMultiplePointInputData @ 149f97140

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

void __cdecl
PCGDeterminismTests::AddRandomizedMultiplePointInputData
          (FTestData *param_1,int param_2,FName *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TQuat<double> *pTVar11;
  FPCGPoint *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  undefined1 auStackY_358 [32];
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> local_328;
  TVector<double>_u_0 local_318;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  TQuat<double> local_2d8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  TTransform<double> local_1e8;
  FPCGPoint local_188;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  lVar16 = (longlong)param_2;
  if ((param_2 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PointNum > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x2a3,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar15 = 0;
  local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.ArrayNum = 0;
  local_328.ArrayMax = 0;
  if (param_2 < 1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,param_2,&local_328.AllocatorInstance,&local_328.ArrayNum,
               &local_328.ArrayMax);
  }
  dVar7 = __real_407f400000000000;
  dVar6 = __real_3fe0000000000000;
  fVar5 = __real_3f800000;
  uVar17 = uVar15;
  if (0 < param_2) {
    do {
      FRandomStream::GetUnitVector(&param_1->RandomStream,(TVector<double> *)&local_318._s_0);
      uVar9 = (param_1->RandomStream).Seed * 0xbb38435 + 0x3619636b;
      (param_1->RandomStream).Seed = uVar9;
      dVar4 = (double)((float)(uVar9 >> 9 | 0x3f800000) - fVar5) + dVar6;
      dVar3 = dVar4 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dVar2 = dVar4 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      dVar4 = dVar4 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      pTVar11 = UE::Math::TRotator<double>::Quaternion
                          (&UE::Math::TRotator<double>::ZeroRotator,&local_2d8);
      local_2f8 = pTVar11->X;
      dStack_2f0 = pTVar11->Y;
      local_2e8 = pTVar11->Z;
      dStack_2e0 = pTVar11->W;
      dVar18 = local_318._s_0.Y * dVar7;
      local_1e8.Translation.ZW.m128d_f64[0] = local_318._s_0.Z * dVar7;
      local_1e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
      local_1e8.Translation.XY.m128d_f64[0] = local_318._s_0.X * dVar7;
      local_1e8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
      local_1e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_1e8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
      local_1e8.Scale3D.XY.m128d_f64[0] = dVar3;
      local_1e8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_1e8.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_1e8.Rotation.XY.m128d_f64[0] = local_2f8;
      local_1e8.Rotation.XY.m128d_f64[1] = dStack_2f0;
      local_1e8.Rotation.ZW.m128d_f64[0] = local_2e8;
      local_1e8.Rotation.ZW.m128d_f64[1] = dStack_2e0;
      local_1e8.Scale3D.ZW.m128d_f64[0] = dVar4;
      iVar10 = PCGHelpers::ComputeSeed
                         ((int)(local_318._s_0.X * dVar7),(int)dVar18,
                          (int)local_1e8.Translation.ZW.m128d_f64[0]);
      iVar10 = PCGHelpers::ComputeSeed(iVar10,param_1->Seed);
      pFVar12 = FPCGPoint::FPCGPoint(&local_188,&local_1e8,fVar5,iVar10);
      local_2b8 = (pFVar12->Transform).Rotation.XY.m128d_f64[0];
      dStack_2b0 = (pFVar12->Transform).Rotation.XY.m128d_f64[1];
      local_2a8 = (pFVar12->Transform).Rotation.ZW.m128d_f64[0];
      dStack_2a0 = (pFVar12->Transform).Rotation.ZW.m128d_f64[1];
      local_298 = (pFVar12->Transform).Translation.XY.m128d_f64[0];
      dStack_290 = (pFVar12->Transform).Translation.XY.m128d_f64[1];
      local_288 = (pFVar12->Transform).Translation.ZW.m128d_f64[0];
      dStack_280 = (pFVar12->Transform).Translation.ZW.m128d_f64[1];
      local_278 = (pFVar12->Transform).Scale3D.XY.m128d_f64[0];
      dStack_270 = (pFVar12->Transform).Scale3D.XY.m128d_f64[1];
      local_268 = (pFVar12->Transform).Scale3D.ZW.m128d_f64[0];
      dStack_260 = (pFVar12->Transform).Scale3D.ZW.m128d_f64[1];
      local_258 = *(double *)&pFVar12->Density;
      dStack_250 = (pFVar12->BoundsMin).field0_0x0._s_0.X;
      local_248 = (pFVar12->BoundsMin).field0_0x0._s_0.Y;
      dStack_240 = (pFVar12->BoundsMin).field0_0x0._s_0.Z;
      local_238 = (pFVar12->BoundsMax).field0_0x0._s_0.X;
      dStack_230 = (pFVar12->BoundsMax).field0_0x0._s_0.Y;
      local_228 = (pFVar12->BoundsMax).field0_0x0._s_0.Z;
      dStack_220 = (double)pFVar12->_padding_;
      local_218 = (pFVar12->Color).field0_0x0._s_0.X;
      dStack_210 = (pFVar12->Color).field0_0x0._s_0.Y;
      local_208 = (pFVar12->Color).field0_0x0._s_0.Z;
      dStack_200 = (pFVar12->Color).field0_0x0._s_0.W;
      local_1f8 = *(double *)&pFVar12->Steepness;
      dStack_1f0 = (double)pFVar12->MetadataEntry;
      uVar14 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar14 < local_328.ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar13 = local_328.AllocatorInstance.Data + uVar17;
      uVar15 = (ulonglong)(uVar14 + 1);
      *(double *)pFVar13 = local_2b8;
      *(double *)(pFVar13 + 8) = dStack_2b0;
      *(double *)(pFVar13 + 0x10) = local_2a8;
      *(double *)(pFVar13 + 0x18) = dStack_2a0;
      *(double *)(pFVar13 + 0x20) = local_298;
      *(double *)(pFVar13 + 0x28) = dStack_290;
      *(double *)(pFVar13 + 0x30) = local_288;
      *(double *)(pFVar13 + 0x38) = dStack_280;
      *(double *)(pFVar13 + 0x40) = local_278;
      *(double *)(pFVar13 + 0x48) = dStack_270;
      *(double *)(pFVar13 + 0x50) = local_268;
      *(double *)(pFVar13 + 0x58) = dStack_260;
      *(double *)(pFVar13 + 0x60) = local_258;
      *(double *)(pFVar13 + 0x68) = dStack_250;
      *(double *)(pFVar13 + 0x70) = local_248;
      *(double *)(pFVar13 + 0x78) = dStack_240;
      *(double *)(pFVar13 + 0x80) = local_238;
      *(double *)(pFVar13 + 0x88) = dStack_230;
      *(double *)(pFVar13 + 0x90) = local_228;
      *(double *)(pFVar13 + 0x98) = dStack_220;
      *(double *)(pFVar13 + 0xa0) = local_218;
      *(double *)(pFVar13 + 0xa8) = dStack_210;
      *(double *)(pFVar13 + 0xb0) = local_208;
      *(double *)(pFVar13 + 0xb8) = dStack_200;
      *(double *)(pFVar13 + 0xc0) = local_1f8;
      *(double *)(pFVar13 + 200) = dStack_1f0;
      lVar16 = lVar16 + -1;
      uVar17 = uVar17 + 0xd0;
    } while (lVar16 != 0);
  }
  AddMultiplePointsInputData(&param_1->InputData,&local_328,param_3);
  if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.AllocatorInstance.Data);
  }
  return;
}

// AddRandomizedPolyLineInputData @ 149f975a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
PCGDeterminismTests::AddRandomizedPolyLineInputData(FTestData *param_1,int param_2,FName *param_3)

{
  int *piVar1;
  AActor *pAVar2;
  FName FVar3;
  code *pcVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  USplineComponent *this;
  UClass *pUVar15;
  FName *pFVar16;
  UObject *pUVar17;
  UPCGSplineData *this_00;
  longlong *plVar18;
  FPCGDataPtrWrapper *this_01;
  ulonglong uVar19;
  undefined1 auStack_1b8 [32];
  UClass *local_180;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  FName local_148 [2];
  TRotator<double> local_138 [2];
  undefined1 local_f8 [128];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar19 = (ulonglong)(uint)param_2;
  if ((param_1->TestActor == (AActor *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TestData.TestActor",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                          ,0x2c2,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pAVar2 = param_1->TestActor;
  local_180 = Z_Construct_UClass_USplineComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_180 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_180);
  }
  this = (USplineComponent *)
         AActor::GetComponentByClass(pAVar2,(TSubclassOf<UActorComponent>)&local_180);
  if (this != (USplineComponent *)0x0) {
    pUVar15 = Z_Construct_UClass_USplineComponent_NoRegister();
    iVar14 = (int)pUVar15->_padding_;
    if ((iVar14 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar14 * 8)
        == &pUVar15->_padding_)) goto LAB_149f976f2;
  }
  pFVar16 = ::FName::FName(local_148,L"Test Spline Component");
  pAVar2 = param_1->TestActor;
  FVar3 = *pFVar16;
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pAVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar15 = Z_Construct_UClass_USplineComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar15);
  local_f8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_f8._56_8_ = (UPackage *)0x0;
  local_f8._24_4_ = RF_Transient;
  local_f8._40_8_ = (UObject *)0x0;
  local_f8[0x20] = false;
  local_f8._8_8_ = pAVar2;
  local_f8._16_8_ = FVar3;
  this = (USplineComponent *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    plVar18 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_149f976f2:
  if ((param_2 < 2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PointNum > 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                          ,0x2ca,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar9 = _UNK_15201e8e8;
  dVar8 = ___xmm_407f400000000000407f400000000000;
  dVar7 = __real_4066800000000000;
  dVar6 = __real_4056800000000000;
  fVar5 = __real_3f800000;
  if (0 < param_2) {
    do {
      FRandomStream::GetUnitVector(&param_1->RandomStream,(TVector<double> *)&local_178._s_0);
      local_160._s_0.X = local_178._s_0.X * dVar8;
      local_160._s_0.Y = local_178._s_0.Y * dVar9;
      local_160._s_0.Z = local_178._s_0.Z * dVar8;
      USplineComponent::AddSplinePoint(this,(TVector<double> *)&local_160._s_0,World,false);
      uVar11 = (param_1->RandomStream).Seed * 0xbb38435 + 0x3619636b;
      uVar12 = uVar11 * 0xbb38435 + 0x3619636b;
      uVar13 = uVar12 * 0xbb38435 + 0x3619636b;
      (param_1->RandomStream).Seed = uVar13;
      local_138[0].Pitch =
           ((double)((float)(uVar13 >> 9 | 0x3f800000) - fVar5) * dVar7 - dVar6) +
           (double)this->_padding_;
      local_138[0].Yaw =
           ((double)((float)(uVar12 >> 9 | 0x3f800000) - fVar5) * dVar7 - dVar6) +
           (double)this->_padding_;
      local_138[0].Roll =
           ((double)((float)(uVar11 >> 9 | 0x3f800000) - fVar5) * dVar7 - dVar6) +
           (double)this->_padding_;
      USceneComponent::SetRelativeRotation
                ((USceneComponent *)this,local_138,false,(FHitResult *)0x0,None);
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  (**(code **)(this->_padding_ + 0xad0))(this);
  pUVar17 = GetTransientPackageAsObject();
  this_00 = NewObject<UPCGSplineData>(pUVar17);
  UPCGSplineData::Initialize(this_00,this);
  iVar14 = (param_1->InputData).TaggedData.ArrayNum;
  piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&param_1->InputData,piVar1);
  }
  (param_1->InputData).TaggedData.ArrayNum = iVar14 + 1;
  this_01 = (FPCGDataPtrWrapper *)
            ((param_1->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar14 * 0x78);
  this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
  this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)this_00);
  this_01[6].Data.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_3;
  return;
}

// AddRandomizedPrimitiveInputData @ 149f979a0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl PCGDeterminismTests::AddRandomizedPrimitiveInputData(FTestData *param_1,FName *param_2)

{
  int iVar1;
  AActor *pAVar2;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  UPrimitiveComponent *this;
  UClass *pUVar14;
  FName *pFVar15;
  TQuat<double> *pTVar16;
  longlong *plVar17;
  undefined1 auStack_228 [32];
  UClass *local_1f0;
  TRotator<double> local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  FName local_188 [2];
  TQuat<double> local_178;
  undefined1 local_158 [128];
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_228;
  if (param_1->TestActor == (AActor *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("TestData.TestActor",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                        ,0x2da,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pAVar2 = param_1->TestActor;
  local_1f0 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1f0);
  }
  this = (UPrimitiveComponent *)
         AActor::GetComponentByClass(pAVar2,(TSubclassOf<UActorComponent>)&local_1f0);
  if (this != (UPrimitiveComponent *)0x0) {
    pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar14->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        == &pUVar14->_padding_)) goto LAB_149f97b07;
  }
  pFVar15 = ::FName::FName(local_188,L"Test Primitive Component");
  pAVar2 = param_1->TestActor;
  FVar3 = *pFVar15;
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pAVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_158,pUVar14);
  local_158._48_8_ = (FObjectInstancingGraph *)0x0;
  local_158._56_8_ = (UPackage *)0x0;
  local_158._24_4_ = RF_Transient;
  local_158._40_8_ = (UObject *)0x0;
  local_158[0x20] = false;
  local_158._8_8_ = pAVar2;
  local_158._16_8_ = FVar3;
  this = (UPrimitiveComponent *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
  if (local_158._64_8_ != 0) {
    plVar17 = (longlong *)(local_158 + 0x50);
    if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_158._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_149f97b07:
  dVar9 = __real_3fe0000000000000;
  fVar8 = __real_3f800000;
  uVar11 = (param_1->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (param_1->RandomStream).Seed = uVar11;
  dVar7 = (double)((float)(uVar11 >> 9 | 0x3f800000) - fVar8) + dVar9;
  dVar6 = dVar7 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dVar5 = dVar7 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  dVar7 = dVar7 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  FRandomStream::GetUnitVector(&param_1->RandomStream,(TVector<double> *)&local_1d0._s_0);
  local_1e8.Roll = __real_4056800000000000;
  uVar11 = (param_1->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  uVar12 = uVar11 * 0xbb38435 + 0x3619636b;
  uVar13 = uVar12 * 0xbb38435 + 0x3619636b;
  (param_1->RandomStream).Seed = uVar13;
  local_1e8.Pitch = (double)((float)(uVar13 >> 9 | 0x3f800000) - fVar8) * local_1e8.Roll;
  local_1e8.Yaw = (double)((float)(uVar12 >> 9 | 0x3f800000) - fVar8) * local_1e8.Roll;
  local_1e8.Roll = (double)((float)(uVar11 >> 9 | 0x3f800000) - fVar8) * local_1e8.Roll;
  pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_1e8,&local_178);
  local_d8.Rotation.ZW.m128d_f64[0] = pTVar16->Z;
  local_d8.Rotation.ZW.m128d_f64[1] = pTVar16->W;
  local_d8.Rotation.XY.m128d_f64[0] = pTVar16->X;
  local_d8.Rotation.XY.m128d_f64[1] = pTVar16->Y;
  local_d8.Translation.ZW.m128d_f64[0] = local_1d0._s_0.Z * __real_407f400000000000;
  local_d8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(local_1d0._s_0.Y * __real_407f400000000000,0);
  local_d8.Translation.XY.m128d_f64[0] = local_1d0._s_0.X * __real_407f400000000000;
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(local_1d0._s_0.Y * __real_407f400000000000) >> 0x20);
  local_d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
  local_d8.Scale3D.XY.m128d_f64[0] = dVar6;
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[0] = dVar7;
  USceneComponent::SetWorldTransform((USceneComponent *)this,&local_d8,false,(FHitResult *)0x0,None)
  ;
  FRandomStream::GetUnitVector(&param_1->RandomStream,(TVector<double> *)&local_1b8._s_0);
  local_1a0._s_0.X =
       local_1b8._s_0.X * dVar9 * __real_4069000000000000 + Defaults::MediumVector.field0_0x0._s_0.X
  ;
  local_1a0._s_0.Z =
       local_1b8._s_0.Z * dVar9 * __real_4069000000000000 + Defaults::MediumVector.field0_0x0._s_0.Z
  ;
  local_1a0._s_0.Y =
       local_1b8._s_0.Y * dVar9 * __real_4069000000000000 + Defaults::MediumVector.field0_0x0._s_0.Y
  ;
  AddPrimitiveInputData(&param_1->InputData,this,(TVector<double> *)&local_1a0._s_0,param_2);
  return;
}

// AddRandomizedSinglePointInputData @ 149f97d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
PCGDeterminismTests::AddRandomizedSinglePointInputData
          (FTestData *param_1,int param_2,FName *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  UPCGBasePointData *pUVar6;
  FPCGDataPtrWrapper *this;
  ulonglong uVar7;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  
  uVar7 = (ulonglong)(uint)param_2;
  if ((param_2 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PointNum > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x29a,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  dVar3 = _UNK_15201e8e8;
  dVar2 = ___xmm_407f400000000000407f400000000000;
  if (0 < param_2) {
    do {
      FRandomStream::GetUnitVector(&param_1->RandomStream,(TVector<double> *)&local_68._s_0);
      local_50._8_4_ = SUB84(local_68._s_0.Y * dVar3,0);
      local_50._0_8_ = local_68._s_0.X * dVar2;
      local_50._12_4_ = (int)((ulonglong)(local_68._s_0.Y * dVar3) >> 0x20);
      local_50._s_0.Z = local_68._s_0.Z * dVar2;
      pUVar6 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_50._s_0);
      iVar5 = (param_1->InputData).TaggedData.ArrayNum;
      if (iVar5 == (param_1->InputData).TaggedData.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)&param_1->InputData,
                           &(param_1->InputData).TaggedData.ArrayMax);
      }
      (param_1->InputData).TaggedData.ArrayNum = iVar5 + 1;
      this = (FPCGDataPtrWrapper *)
             ((param_1->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar5 * 0x78);
      this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this[3].WeakData.WeakPtr.ObjectIndex = 0;
      this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
      this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar6);
      this[6].Data.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// AddRandomizedSurfaceInputData @ 149f97ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl PCGDeterminismTests::AddRandomizedSurfaceInputData(FTestData *param_1,FName *param_2)

{
  return;
}

// AddRandomizedVolumeInputData @ 149f97f00

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

void __cdecl PCGDeterminismTests::AddRandomizedVolumeInputData(FTestData *param_1,FName *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  UPCGVolumeData *pUVar10;
  FPCGDataPtrWrapper *this;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_108;
  FRandomStream::GetUnitVector(&param_1->RandomStream,(TVector<double> *)&local_e8._s_0);
  dVar2 = __real_3fe0000000000000;
  dVar7 = local_e8._s_0.X * __real_3fe0000000000000 * __real_4049000000000000 +
          Defaults::SmallVector.field0_0x0._s_0.X;
  dVar6 = local_e8._s_0.Y * __real_3fe0000000000000 * __real_4049000000000000 +
          Defaults::SmallVector.field0_0x0._s_0.Y;
  dVar5 = local_e8._s_0.Z * __real_3fe0000000000000 * __real_4049000000000000 +
          Defaults::SmallVector.field0_0x0._s_0.Z;
  FRandomStream::GetUnitVector(&param_1->RandomStream,(TVector<double> *)&local_e8._s_0);
  dVar8 = __real_4069000000000000;
  dVar4 = local_e8._s_0.X * dVar2 * __real_4069000000000000 +
          Defaults::MediumVector.field0_0x0._s_0.X;
  dVar3 = local_e8._s_0.Y * dVar2 * __real_4069000000000000 +
          Defaults::MediumVector.field0_0x0._s_0.Y;
  dVar2 = local_e8._s_0.Z * dVar2 * __real_4069000000000000 +
          Defaults::MediumVector.field0_0x0._s_0.Z;
  FRandomStream::GetUnitVector(&param_1->RandomStream,(TVector<double> *)&local_e8._s_0);
  local_a0 = 1;
  local_b8 = local_e8._s_0.X * dVar8 + dVar4;
  local_d0._s_0.X = local_e8._s_0.X * dVar8 - dVar4;
  local_d0._s_0.Y = local_e8._s_0.Y * dVar8 - dVar3;
  local_b0 = local_e8._s_0.Y * dVar8 + dVar3;
  local_d0._s_0.Z = local_e8._s_0.Z * dVar8 - dVar2;
  local_a8 = local_e8._s_0.Z * dVar8 + dVar2;
  pUVar10 = PCGTestsCommon::CreateVolumeData((TBox<double> *)&local_d0._s_0);
  piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
  (pUVar10->VoxelSize).field0_0x0._s_0.X = dVar7;
  (pUVar10->VoxelSize).field0_0x0._s_0.Y = dVar6;
  (pUVar10->VoxelSize).field0_0x0._s_0.Z = dVar5;
  iVar9 = (param_1->InputData).TaggedData.ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&param_1->InputData,piVar1);
  }
  (param_1->InputData).TaggedData.ArrayNum = iVar9 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar9 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar10);
  this[6].Data.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_2;
  return;
}

// AddSinglePointInputData @ 149f981b0

void __cdecl
PCGDeterminismTests::AddSinglePointInputData
          (FPCGDataCollection *param_1,TVector<double> *param_2,FName *param_3)

{
  int *piVar1;
  int iVar2;
  UPCGBasePointData *pUVar3;
  FPCGDataPtrWrapper *this;
  
  pUVar3 = PCGTestsCommon::CreateBasePointData(param_2);
  piVar1 = &(param_1->TaggedData).ArrayMax;
  iVar2 = (param_1->TaggedData).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->TaggedData).ArrayNum = iVar2 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->TaggedData).AllocatorInstance.Data + (longlong)iVar2 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar3);
  this[6].Data.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_3;
  return;
}

// AddVolumeInputData @ 149f98370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
PCGDeterminismTests::AddVolumeInputData
          (FPCGDataCollection *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FName *param_5)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  UPCGVolumeData *pUVar4;
  FPCGDataPtrWrapper *this;
  undefined1 auStack_78 [32];
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_40 = (param_2->field0_0x0)._s_0.X;
  local_38 = (param_2->field0_0x0)._s_0.Y;
  local_30 = (param_2->field0_0x0)._s_0.Z;
  local_58._s_0.X = local_40 - (param_3->field0_0x0)._s_0.X;
  local_40 = local_40 + (param_3->field0_0x0)._s_0.X;
  local_28 = 1;
  local_58._s_0.Y = local_38 - (param_3->field0_0x0)._s_0.Y;
  local_38 = local_38 + (param_3->field0_0x0)._s_0.Y;
  local_58._s_0.Z = local_30 - (param_3->field0_0x0)._s_0.Z;
  local_30 = local_30 + (param_3->field0_0x0)._s_0.Z;
  pUVar4 = PCGTestsCommon::CreateVolumeData((TBox<double> *)&local_58._s_0);
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  piVar1 = &(param_1->TaggedData).ArrayMax;
  (pUVar4->VoxelSize).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (pUVar4->VoxelSize).field0_0x0._s_0.Y = dVar2;
  (pUVar4->VoxelSize).field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  iVar3 = (param_1->TaggedData).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->TaggedData).ArrayNum = iVar3 + 1;
  this = (FPCGDataPtrWrapper *)
         ((param_1->TaggedData).AllocatorInstance.Data + (longlong)iVar3 * 0x78);
  this[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[3].WeakData.WeakPtr.ObjectIndex = 0;
  this[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this[4].Data.field0_0x0 + 4) = 0;
  this[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)pUVar4);
  this[6].Data.field0_0x0.ObjectPtr.field0_0x0 = *(FObjectPtr_u_0 *)param_5;
  return;
}

// ComparisonIsUnimplemented @ 149f98540

bool __cdecl PCGDeterminismTests::ComparisonIsUnimplemented(UPCGData *param_1,UPCGData *param_2)

{
  return false;
}

// ConsistencyComparisonIsUnimplemented @ 149f98550

bool __cdecl
PCGDeterminismTests::ConsistencyComparisonIsUnimplemented
          (UPCGData *param_1,UPCGData *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  return false;
}

// DataCanBeShuffled @ 149f98560

bool __cdecl PCGDeterminismTests::DataCanBeShuffled(UPCGData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPCGData *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// DataCollectionsAreConsistent @ 149f985b0

bool __cdecl
PCGDeterminismTests::DataCollectionsAreConsistent
          (FPCGDataCollection *param_1,FPCGDataCollection *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId791,"PCGDeterminismTests::DataCollectionsAreConsistent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x317);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId791);
  }
  iVar9 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  bVar4 = DataCollectionsMatch(param_1,param_2,&local_38);
  if (bVar4) {
    uVar7 = (ulonglong)local_38.ArrayNum;
    if (local_38.ArrayNum == 0) {
      bVar4 = true;
      goto LAB_149f986e2;
    }
    if (local_38.ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar7 = local_38._8_8_ & 0xffffffff;
    }
    iVar6 = (int)uVar7;
    iVar2 = *(int *)local_38.AllocatorInstance.Data;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar6 * 4;
    FVar10.Data = local_38.AllocatorInstance.Data;
    iVar8 = iVar9;
    while( true ) {
      if ((int)uVar7 != iVar6) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
        uVar7 = local_38._8_8_ & 0xffffffff;
      }
      if (FVar10.Data == pFVar1) {
        bVar4 = iVar9 == 0;
        goto LAB_149f986e2;
      }
      if ((*(int *)FVar10.Data != iVar2) && (iVar8 = iVar8 + 1, param_3 <= iVar8)) break;
      iVar9 = iVar9 + *(int *)FVar10.Data;
      FVar10.Data = FVar10.Data + 4;
    }
  }
  bVar4 = false;
LAB_149f986e2:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// DataCollectionsAreIdentical @ 149f98730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */

bool __cdecl
PCGDeterminismTests::DataCollectionsAreIdentical
          (FPCGDataCollection *param_1,FPCGDataCollection *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  FPCGDataTypeBaseId *pFVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStackY_138 [32];
  FPCGDataTypeIdentifier local_f8;
  FPCGDataTypeIdentifier local_e0;
  FPCGDataTypeIdentifier local_c8;
  FScriptContainerElement *local_b0;
  FPCGDataCollection *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FPCGDataTypeIdentifier local_90;
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar15 = -1 < CpuChannel->Enabled;
  local_a8 = param_2;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId755,"PCGDeterminismTests::DataCollectionsAreIdentical",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x2f3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId755);
  }
  iVar13 = (param_1->TaggedData).ArrayNum;
  if (iVar13 == (param_2->TaggedData).ArrayNum) {
    uVar11 = 0;
    if (0 < iVar13) {
      lVar14 = 0;
      do {
        uVar12 = ~uVar11 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar11 < iVar13) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar8 = (FPCGDataTypeBaseId *)
                 (**(code **)(**(longlong **)((param_1->TaggedData).AllocatorInstance.Data + lVar14)
                             + 0x2b8))();
        FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_f8,pFVar8);
        uVar7 = 0;
        if ((int)uVar11 < (param_2->TaggedData).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar8 = (FPCGDataTypeBaseId *)
                 (**(code **)(**(longlong **)((param_2->TaggedData).AllocatorInstance.Data + lVar14)
                             + 0x2b8))();
        FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_90,pFVar8);
        local_b0 = local_f8.Ids.AllocatorInstance.Data;
        local_e0.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = local_f8.Ids.ArrayNum;
        local_e0.Ids.ArrayNum = iVar13;
        if (iVar13 == 0) {
          local_e0.Ids.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar13,0,(ForAnyElementType *)&local_e0,iVar13,&local_e0.Ids.ArrayMax);
          ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                    (local_e0.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)local_b0,iVar13);
        }
        local_e0.CustomSubtype = local_f8.CustomSubtype;
        bVar4 = DataTypeIsComparable(&local_e0);
        if (bVar4) {
          bVar4 = FPCGDataTypeIdentifier::IsIdentical(&local_f8,&local_90);
          if (bVar4) {
            uVar7 = 0;
            if ((int)uVar11 < (param_2->TaggedData).ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            pFVar1 = (param_2->TaggedData).AllocatorInstance.Data;
            uVar7 = 0;
            if ((int)uVar11 < (param_1->TaggedData).ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            FVar3.Data = local_f8.Ids.AllocatorInstance.Data;
            if (*(longlong *)((param_1->TaggedData).AllocatorInstance.Data + lVar14 + 0x60) ==
                *(longlong *)(pFVar1 + lVar14 + 0x60)) {
              local_c8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar13 = local_f8.Ids.ArrayNum;
              local_c8.Ids.ArrayNum = iVar13;
              if (iVar13 == 0) {
                local_c8.Ids.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar13,0,(ForAnyElementType *)&local_c8,iVar13,&local_c8.Ids.ArrayMax
                          );
                ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                          (local_c8.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar3.Data,
                           iVar13);
              }
              local_c8.CustomSubtype = local_f8.CustomSubtype;
              GetDataCompareFunction
                        ((TFunction<bool___cdecl(UPCGData_const_*,UPCGData_const_*)> *)local_78,
                         &local_c8,Deterministic);
              param_2 = local_a8;
              uVar7 = 0;
              if ((int)uVar11 < (local_a8->TaggedData).ArrayNum) {
                uVar7 = uVar12;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              uVar9 = *(undefined8 *)((param_2->TaggedData).AllocatorInstance.Data + lVar14);
              uVar7 = 0;
              if ((int)uVar11 < (param_1->TaggedData).ArrayNum) {
                uVar7 = uVar12;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              local_98 = *(undefined8 *)((param_1->TaggedData).AllocatorInstance.Data + lVar14);
              local_a0 = uVar9;
              UE::Core::Private::Function::CheckCallable(local_78[0]);
              pcVar2 = local_78[0];
              plVar10 = local_68;
              if (local_50 != (longlong *)0x0) {
                plVar10 = local_50;
              }
              uVar9 = (**(code **)(*plVar10 + 8))();
              cVar6 = (*pcVar2)(uVar9,&local_98,&local_a0);
              if (cVar6 != '\0') {
                if (local_78[0] != (code *)0x0) {
                  plVar10 = local_68;
                  if (local_50 != (longlong *)0x0) {
                    plVar10 = local_50;
                  }
                  (**(code **)(*plVar10 + 0x10))();
                }
                goto LAB_149f98b5e;
              }
              if (local_78[0] != (code *)0x0) {
                plVar10 = local_68;
                if (local_50 != (longlong *)0x0) {
                  plVar10 = local_50;
                }
                (**(code **)(*plVar10 + 0x10))();
              }
            }
          }
          if (local_90.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Ids.AllocatorInstance.Data);
          }
          if (local_f8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Ids.AllocatorInstance.Data);
          }
          bVar4 = false;
          goto LAB_149f98ba8;
        }
LAB_149f98b5e:
        if (local_90.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Ids.AllocatorInstance.Data);
        }
        if (local_f8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Ids.AllocatorInstance.Data);
        }
        iVar13 = (param_1->TaggedData).ArrayNum;
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 0x78;
      } while ((int)uVar11 < iVar13);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
LAB_149f98ba8:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// DataCollectionsContainSameData @ 149f98c40

bool __cdecl
PCGDeterminismTests::DataCollectionsContainSameData
          (FPCGDataCollection *param_1,FPCGDataCollection *param_2)

{
  bool bVar1;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar1 = DataCollectionsMatch(param_1,param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// DataCollectionsMatch @ 149f98c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
PCGDeterminismTests::DataCollectionsMatch
          (FPCGDataCollection *param_1,FPCGDataCollection *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FPCGDataTypeBaseId *pFVar10;
  FPCGDataTypeIdentifier *pFVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ForAnyElementType FVar14;
  undefined ***pppuVar15;
  bool bVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auStackY_2d8 [32];
  uint local_290;
  ForAnyElementType local_280;
  undefined8 local_278;
  ForAnyElementType local_270;
  undefined8 local_268;
  FPCGDataCollection *local_260;
  ulonglong local_258;
  uint local_250;
  uint local_24c;
  int local_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_240;
  undefined4 local_238;
  int iStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  int local_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_220;
  undefined4 local_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  FPCGDataTypeIdentifier local_208;
  longlong local_1f0;
  longlong local_1e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1e0;
  FPCGDataTypeIdentifier local_1d8;
  undefined4 local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  FSparseArrayAllocationInfo local_150;
  FPCGDataTypeIdentifier local_140;
  FPCGDataTypeIdentifier local_128;
  FPCGDataTypeIdentifier local_110;
  FPCGDataTypeIdentifier local_f8;
  FPCGDataTypeIdentifier local_e0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c8;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  code *local_78;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar18 = 0;
  bVar16 = false;
  bVar25 = -1 < CpuChannel->Enabled;
  local_260 = param_1;
  local_1e0 = param_3;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId840,"PCGDeterminismTests::DataCollectionsMatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x348);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId840);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  iVar8 = (param_1->TaggedData).ArrayNum;
  if (iVar8 != (param_2->TaggedData).ArrayNum) goto LAB_149f99ca5;
  if (iVar8 == 0) {
    uVar18 = 1;
    goto LAB_149f99ca5;
  }
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = 0;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268 = 0;
  if (0 < iVar8) {
    lVar17 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar18 < iVar8) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      plVar1 = *(longlong **)((param_1->TaggedData).AllocatorInstance.Data + lVar17);
      if (plVar1 != (longlong *)0x0) {
        pFVar10 = (FPCGDataTypeBaseId *)(**(code **)(*plVar1 + 0x2b8))();
        pFVar11 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_e0,pFVar10);
        bVar4 = DataTypeIsComparable(pFVar11);
        if (bVar4) {
          iVar8 = (uint)local_278;
          if ((uint)local_278 == local_278._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_280,(int *)((longlong)&local_278 + 4));
          }
          local_278 = CONCAT44(local_278._4_4_,iVar8 + 1);
          *(uint *)(local_280.Data + (longlong)iVar8 * 4) = uVar18;
        }
      }
      iVar8 = (param_1->TaggedData).ArrayNum;
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x78;
    } while ((int)uVar18 < iVar8);
  }
  iVar8 = (param_2->TaggedData).ArrayNum;
  uVar18 = 0;
  if (0 < iVar8) {
    lVar17 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar18 < iVar8) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      plVar1 = *(longlong **)((param_2->TaggedData).AllocatorInstance.Data + lVar17);
      if (plVar1 != (longlong *)0x0) {
        pFVar10 = (FPCGDataTypeBaseId *)(**(code **)(*plVar1 + 0x2b8))();
        pFVar11 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_110,pFVar10);
        bVar4 = DataTypeIsComparable(pFVar11);
        if (bVar4) {
          iVar8 = (uint)local_268;
          if ((uint)local_268 == local_268._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_270,(int *)((longlong)&local_268 + 4));
          }
          local_268 = CONCAT44(local_268._4_4_,iVar8 + 1);
          *(uint *)(local_270.Data + (longlong)iVar8 * 4) = uVar18;
        }
      }
      iVar8 = (param_2->TaggedData).ArrayNum;
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x78;
    } while ((int)uVar18 < iVar8);
  }
  uVar18 = (uint)local_278;
  if ((uint)local_278 == (uint)local_268) {
    if ((uint)local_278 == 0) {
      uVar18 = 1;
    }
    else {
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_c8.AllocationFlags.NumBits = 0;
      local_c8.AllocationFlags.MaxBits = 0x80;
      local_c8.FirstFreeIndex = -1;
      local_c8.NumFreeIndices = 0;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = 0;
      if ((int)(uint)local_278 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)(uint)local_278);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve(&local_c8,(uint)local_278);
      if (uVar18 < 4) {
        uVar18 = 1;
      }
      else {
        uVar20 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_1c0 = (undefined4)lVar17;
        uVar18 = 1 << ((byte)lVar17 & 0x1f);
      }
      if ((local_80 == 0) || ((int)local_80 < (int)uVar18)) {
        local_80 = uVar18;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
        }
        if (uVar18 != 0) {
          uVar7 = uVar18;
          if (uVar18 < 2) {
            if (local_88.Data != (FScriptContainerElement *)0x0) {
              uVar7 = 0;
              goto LAB_149f99010;
            }
          }
          else {
LAB_149f99010:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_88,0,uVar7,4);
          }
          if (0 < (int)uVar18) {
            uVar21 = (ulonglong)uVar18;
            uVar20 = 0;
            do {
              FVar14.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_88.Data;
              }
              uVar12 = uVar20 & (longlong)(int)uVar18 - 1U;
              uVar20 = uVar20 + 1;
              *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
        }
        if (local_80 != 0) {
          pTStack_240 = &local_c8.AllocationFlags;
          uStack_244 = 1;
          local_248 = 0;
          iStack_234 = 0;
          iStack_230 = 0;
          if (local_c8.AllocationFlags.NumBits != 0) {
            FVar22 = (ForElementType<unsigned_int>)&local_c8.AllocationFlags;
            if (local_c8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar22 = local_c8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar18 = *(uint *)FVar22;
            iStack_230 = 0;
            local_248 = 0;
            while (uVar18 == 0) {
              iStack_230 = iStack_230 + 0x20;
              lVar17 = (longlong)local_248;
              local_248 = local_248 + 1;
              if ((int)(local_c8.AllocationFlags.NumBits + -1 +
                       (local_c8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_248)
              goto LAB_149f9912d;
              uVar18 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar17 * 4);
            }
            uStack_244 = -uVar18 & uVar18;
            uVar20 = (ulonglong)uStack_244 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_1bc = (int)lVar17;
            iStack_234 = local_1bc + -1 + iStack_230;
            if (local_c8.AllocationFlags.NumBits < iStack_234) {
LAB_149f9912d:
              iStack_234 = local_c8.AllocationFlags.NumBits;
            }
          }
          local_238 = 0xffffffff;
          local_1a0 = &local_c8;
          local_198._padding_ = CONCAT44(uStack_244,local_248);
          local_198.CurrentBitIndex = iStack_234;
          local_198.UnvisitedBitMask = 0xffffffff;
          local_198._28_4_ = uStack_22c;
          local_198.BaseBitIndex = iStack_230;
          iVar8 = iStack_234;
          local_198.Array = pTStack_240;
          if (iStack_234 < local_c8.AllocationFlags.NumBits) {
            do {
              lVar17 = (longlong)iVar8;
              pFVar2 = (local_1a0->Data).AllocatorInstance.Data;
              uVar18 = local_80 - 1 & *(uint *)(pFVar2 + lVar17 * 0xc);
              *(uint *)(pFVar2 + lVar17 * 0xc + 8) = uVar18;
              FVar14.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_88.Data;
              }
              uVar20 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar18;
              *(undefined4 *)(pFVar2 + lVar17 * 0xc + 4) = *(undefined4 *)(FVar14.Data + uVar20 * 4)
              ;
              *(int *)(FVar14.Data + uVar20 * 4) = iVar8;
              local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
              iVar8 = local_198.CurrentBitIndex;
            } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
          }
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_3,(uint)local_278,Default);
      local_250 = 0;
      if (0 < (int)(uint)local_278) {
        local_1e8 = 0;
LAB_149f99200:
        lVar17 = local_1e8;
        local_24c = ~local_250 >> 0x1f;
        uVar18 = 0;
        if ((int)local_250 < (int)(uint)local_278) {
          uVar18 = local_24c;
        }
        if ((uVar18 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar18 = *(uint *)(local_280.Data + lVar17 * 4);
        uVar20 = (ulonglong)(int)uVar18;
        local_290 = 0;
        if (0 < (int)(uint)local_268) {
          local_1f0 = 0;
          uVar21 = uVar20;
          local_258 = uVar20;
          do {
            lVar17 = local_1f0;
            uVar7 = 0;
            if ((int)local_290 < (int)(uint)local_268) {
              uVar7 = ~local_290 >> 0x1f;
            }
            uVar19 = (uint)uVar21;
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               uVar19 = uVar18, bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            uVar7 = *(uint *)(local_270.Data + lVar17);
            if (local_c8.Data.ArrayNum != local_c8.NumFreeIndices) {
              FVar14.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_88.Data;
              }
              for (iVar8 = *(int *)(FVar14.Data + (ulonglong)(local_80 - 1 & uVar7) * 4);
                  iVar8 != -1;
                  iVar8 = *(int *)(local_c8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 4)
                  ) {
                if (*(uint *)(local_c8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc) == uVar7
                   ) goto LAB_149f9976c;
              }
            }
            uVar23 = ~uVar19 >> 0x1f;
            uVar24 = 0;
            if ((int)uVar19 < (param_1->TaggedData).ArrayNum) {
              uVar24 = uVar23;
            }
            if ((uVar24 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar10 = (FPCGDataTypeBaseId *)
                      (**(code **)(**(longlong **)
                                     ((param_1->TaggedData).AllocatorInstance.Data + uVar20 * 0x78)
                                  + 0x2b8))();
            FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_1d8,pFVar10);
            uVar24 = ~uVar7 >> 0x1f;
            uVar19 = 0;
            if ((int)uVar7 < (param_2->TaggedData).ArrayNum) {
              uVar19 = uVar24;
            }
            if ((uVar19 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            lVar17 = (longlong)(int)uVar7 * 0x78;
            pFVar10 = (FPCGDataTypeBaseId *)
                      (**(code **)(**(longlong **)
                                     ((param_2->TaggedData).AllocatorInstance.Data + lVar17) + 0x2b8
                                  ))();
            FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_140,pFVar10);
            bVar4 = FPCGDataTypeIdentifier::IsIdentical(&local_1d8,&local_140);
            param_1 = local_260;
            if (bVar4) {
              uVar19 = 0;
              if ((int)uVar7 < (param_2->TaggedData).ArrayNum) {
                uVar19 = uVar24;
              }
              if ((uVar19 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pFVar2 = (param_2->TaggedData).AllocatorInstance.Data;
              uVar19 = 0;
              if ((int)uVar18 < (local_260->TaggedData).ArrayNum) {
                uVar19 = uVar23;
              }
              if ((uVar19 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              FVar14.Data = local_1d8.Ids.AllocatorInstance.Data;
              param_1 = local_260;
              if (*(longlong *)
                   ((local_260->TaggedData).AllocatorInstance.Data + local_258 * 0x78 + 0x60) ==
                  *(longlong *)(pFVar2 + lVar17 + 0x60)) {
                local_208.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar8 = local_1d8.Ids.ArrayNum;
                local_208.Ids.ArrayNum = iVar8;
                if (iVar8 == 0) {
                  local_208.Ids.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar8,0,(ForAnyElementType *)&local_208,iVar8,
                             &local_208.Ids.ArrayMax);
                  ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                            (local_208.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar14.Data,
                             iVar8);
                }
                local_208.CustomSubtype = local_1d8.CustomSubtype;
                pFVar11 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_f8,&local_208);
                bVar4 = DataTypeIsComparable(pFVar11);
                if (bVar4) {
                  bVar16 = true;
                  pFVar11 = FPCGDataTypeIdentifier::operator&(&local_208,&local_128,Spatial);
                  bVar4 = FPCGDataTypeIdentifier::operator!(pFVar11);
                  if (bVar4) goto LAB_149f99583;
                  bVar4 = false;
                }
                else {
LAB_149f99583:
                  bVar4 = true;
                }
                if ((bVar16) &&
                   (bVar16 = false,
                   local_128.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_128.Ids.AllocatorInstance.Data);
                }
                if (bVar4) {
                  if (2 < (byte)LogPCG._0_1_) {
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  }
                  local_60 = ComparisonIsUnimplemented;
                }
                else {
                  local_60 = SpatialBasicsAreIdentical;
                }
                local_68 = &
                           ___7__TFunction_OwnedObject_P6A_NPEBVUPCGData__0_Z_0A__0A__Function_Private_Core_UE__6B_
                ;
                local_78 = UE::Core::Private::Function::
                           TFunctionRefCaller<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),bool,UPCGData_const_*,UPCGData_const_*>
                           ::Call;
                local_50 = (undefined ***)0x0;
                if (local_208.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_208.Ids.AllocatorInstance.Data);
                }
                uVar19 = 0;
                if ((int)uVar7 < (param_2->TaggedData).ArrayNum) {
                  uVar19 = uVar24;
                }
                if ((uVar19 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                param_1 = local_260;
                uVar13 = *(undefined8 *)
                          ((param_2->TaggedData).AllocatorInstance.Data +
                          (longlong)(int)uVar7 * 0x78);
                uVar19 = 0;
                if ((int)uVar18 < (local_260->TaggedData).ArrayNum) {
                  uVar19 = uVar23;
                }
                if ((uVar19 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                local_1a8 = *(undefined8 *)
                             ((param_1->TaggedData).AllocatorInstance.Data + local_258 * 0x78);
                local_1b0 = uVar13;
                UE::Core::Private::Function::CheckCallable(local_78);
                pcVar3 = local_78;
                pppuVar15 = &local_68;
                if (local_50 != (undefined ***)0x0) {
                  pppuVar15 = local_50;
                }
                uVar13 = (*(code *)(*pppuVar15)[1])();
                cVar6 = (*pcVar3)(uVar13,&local_1a8);
                if (cVar6 != '\0') goto LAB_149f99792;
                if (local_78 != (code *)0x0) {
                  pppuVar15 = &local_68;
                  if (local_50 != (undefined ***)0x0) {
                    pppuVar15 = local_50;
                  }
                  (*(code *)(*pppuVar15)[2])();
                }
              }
            }
            if (local_140.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Ids.AllocatorInstance.Data);
            }
            uVar20 = local_258;
            if (local_1d8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Ids.AllocatorInstance.Data);
              uVar20 = local_258;
            }
LAB_149f9976c:
            local_290 = local_290 + 1;
            local_1f0 = local_1f0 + 4;
            param_3 = local_1e0;
            if ((int)(uint)local_268 <= (int)local_290) break;
            uVar21 = (ulonglong)uVar18;
          } while( true );
        }
        param_3->ArrayNum = 0;
        if (param_3->ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
        }
        uVar18 = 0;
        goto LAB_149f99c60;
      }
LAB_149f99c5d:
      uVar18 = 1;
LAB_149f99c60:
      local_80 = 0;
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_c8);
    }
  }
  else {
    uVar18 = 0;
  }
  if (local_270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data);
  }
  if (local_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data);
  }
LAB_149f99ca5:
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return SUB41(uVar18,0);
LAB_149f99792:
  if (local_c8.NumFreeIndices == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)&local_c8,&local_c8.Data.ArrayNum,
                       &local_c8.Data.ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(&local_c8.AllocationFlags,false);
    iVar8 = local_c8.FirstFreeIndex;
  }
  else {
    local_c8.NumFreeIndices = local_c8.NumFreeIndices + -1;
    iVar8 = *(int *)(local_c8.Data.AllocatorInstance.Data +
                    (longlong)local_c8.FirstFreeIndex * 0xc + 4);
    iVar9 = local_c8.FirstFreeIndex;
    if (local_c8.NumFreeIndices != 0) {
      *(undefined4 *)(local_c8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc) = 0xffffffff;
    }
  }
  local_c8.FirstFreeIndex = iVar8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_c8,&local_150,iVar9);
  if (local_150.Pointer != (uint *)0x0) {
    *(uint *)local_150.Pointer = uVar7;
    *(uint *)((longlong)local_150.Pointer + 4) = 0xffffffff;
  }
  uVar19 = *(uint *)local_150.Pointer;
  if ((local_c8.Data.ArrayNum - local_c8.NumFreeIndices != 1) &&
     (local_c8.Data.ArrayNum != local_c8.NumFreeIndices)) {
    FVar14.Data = local_90;
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FVar14.Data = local_88.Data;
    }
    for (iVar8 = *(int *)(FVar14.Data + (ulonglong)(local_80 - 1 & uVar19) * 4); iVar8 != -1;
        iVar8 = *(int *)(local_c8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc + 4)) {
      if (*(uint *)(local_c8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc) == uVar19) {
        if (iVar8 != -1) {
          *(uint *)(local_c8.Data.AllocatorInstance.Data + (longlong)iVar8 * 0xc) = uVar19;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(&local_c8,local_150.Index,1);
          goto LAB_149f99b9f;
        }
        break;
      }
    }
  }
  uVar23 = local_c8.Data.ArrayNum - local_c8.NumFreeIndices;
  uVar24 = 1;
  if (3 < uVar23) {
    uVar20 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1b8 = (undefined4)lVar17;
    uVar24 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar23 < 1) || ((int)uVar24 <= (int)local_80)) {
    uVar19 = local_80 - 1 & uVar19;
    *(uint *)((longlong)local_150.Pointer + 8) = uVar19;
    FVar14.Data = local_90;
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FVar14.Data = local_88.Data;
    }
    uVar20 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar19;
    *(uint *)((longlong)local_150.Pointer + 4) = *(uint *)(FVar14.Data + uVar20 * 4);
    *(int *)(FVar14.Data + uVar20 * 4) = local_150.Index;
    goto LAB_149f99b9f;
  }
  local_80 = uVar24;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
  }
  if (uVar24 != 0) {
    uVar19 = uVar24;
    if (uVar24 < 2) {
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_149f999a1;
      }
    }
    else {
LAB_149f999a1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar19,4);
    }
    if (0 < (int)uVar24) {
      uVar21 = (ulonglong)uVar24;
      uVar20 = 0;
      do {
        FVar14.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_88.Data;
        }
        uVar12 = uVar20 & (longlong)(int)uVar24 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar14.Data + uVar12 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_80 != 0) {
    pTStack_220 = &local_c8.AllocationFlags;
    uStack_224 = 1;
    local_228 = 0;
    iStack_214 = 0;
    iStack_210 = 0;
    if (local_c8.AllocationFlags.NumBits != 0) {
      FVar22 = (ForElementType<unsigned_int>)&local_c8.AllocationFlags;
      if (local_c8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_c8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar19 = *(uint *)FVar22;
      iStack_210 = 0;
      local_228 = 0;
      while (uVar19 == 0) {
        iStack_210 = iStack_210 + 0x20;
        lVar17 = (longlong)local_228;
        local_228 = local_228 + 1;
        if ((int)(local_c8.AllocationFlags.NumBits + -1 +
                 (local_c8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_228)
        goto LAB_149f99abd;
        uVar19 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar17 * 4);
      }
      uStack_224 = -uVar19 & uVar19;
      uVar20 = (ulonglong)uStack_224 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_1b4 = (int)lVar17;
      iStack_214 = iStack_210 + -1 + local_1b4;
      if (local_c8.AllocationFlags.NumBits < iStack_214) {
LAB_149f99abd:
        iStack_214 = local_c8.AllocationFlags.NumBits;
      }
    }
    local_218 = 0xffffffff;
    local_178 = &local_c8;
    local_170._padding_ = CONCAT44(uStack_224,local_228);
    local_170.CurrentBitIndex = iStack_214;
    local_170.UnvisitedBitMask = 0xffffffff;
    local_170._28_4_ = uStack_20c;
    local_170.BaseBitIndex = iStack_210;
    iVar8 = iStack_214;
    local_170.Array = pTStack_220;
    if (iStack_214 < local_c8.AllocationFlags.NumBits) {
      do {
        lVar17 = (longlong)iVar8;
        pFVar2 = (local_178->Data).AllocatorInstance.Data;
        uVar19 = local_80 - 1 & *(uint *)(pFVar2 + lVar17 * 0xc);
        *(uint *)(pFVar2 + lVar17 * 0xc + 8) = uVar19;
        FVar14.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_88.Data;
        }
        uVar20 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(pFVar2 + lVar17 * 0xc + 4) = *(undefined4 *)(FVar14.Data + uVar20 * 4);
        *(int *)(FVar14.Data + uVar20 * 4) = iVar8;
        local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
        iVar8 = local_170.CurrentBitIndex;
      } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
    }
  }
LAB_149f99b9f:
  param_3 = local_1e0;
  uVar19 = local_250;
  uVar24 = 0;
  if ((int)local_250 < local_1e0->ArrayNum) {
    uVar24 = local_24c;
  }
  if ((uVar24 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar17 = local_1e8;
  *(uint *)((param_3->AllocatorInstance).Data + local_1e8 * 4) = uVar7 - uVar18;
  if (local_78 != (code *)0x0) {
    pppuVar15 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar15 = local_50;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  if (local_140.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Ids.AllocatorInstance.Data);
  }
  if (local_1d8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Ids.AllocatorInstance.Data);
  }
  local_250 = uVar19 + 1;
  local_1e8 = lVar17 + 1;
  param_1 = local_260;
  if ((int)(uint)local_278 <= (int)local_250) goto LAB_149f99c5d;
  goto LAB_149f99200;
}

// DataIsComparable @ 149f99d30

bool __cdecl PCGDeterminismTests::DataIsComparable(UPCGData *param_1)

{
  bool bVar1;
  FPCGDataTypeBaseId *pFVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  if (param_1 != (UPCGData *)0x0) {
    pFVar2 = (FPCGDataTypeBaseId *)(**(code **)(param_1->_padding_ + 0x2b8))();
    pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,pFVar2);
    bVar1 = DataTypeIsComparable(pFVar3);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// DataTypeIsComparable @ 149f99d70

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl PCGDeterminismTests::DataTypeIsComparable(FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,None);
  bVar2 = FPCGDataTypeIdentifier::IsSameType(param_1,pFVar3);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  if (!bVar2) {
    pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Other);
    bVar2 = FPCGDataTypeIdentifier::IsSameType(param_1,pFVar3);
    if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Ids.AllocatorInstance.Data);
    }
    if (!bVar2) {
      pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Settings);
      bVar2 = FPCGDataTypeIdentifier::IsSameType(param_1,pFVar3);
      if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Ids.AllocatorInstance.Data);
      }
      if (!bVar2) {
        pFVar3 = FPCGDataTypeIdentifier::operator&(param_1,&local_28,Param|Spatial);
        bVar2 = FPCGDataTypeIdentifier::operator!(pFVar3);
        if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Ids.AllocatorInstance.Data);
        }
        if (!bVar2) {
          pFVar1 = (param_1->Ids).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          return true;
        }
        if (2 < (byte)LogPCG._0_1_) {
          FPCGDataTypeIdentifier::ToString(param_1,(FString *)&local_28);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Ids.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  pFVar1 = (param_1->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// EmptyLinkFunctionForGeneratedCodePCGAttributeExtractorTest @ 149f99f80

void __cdecl EmptyLinkFunctionForGeneratedCodePCGAttributeExtractorTest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDeterminismTestBlueprintBase @ 149f99f90

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDeterminismTestBlueprintBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGDeterminismTestsCommon @ 149f99fa0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGDeterminismTestsCommon(void)

{
  return;
}

// ExecuteWithSameTestData @ 149f9a170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
PCGDeterminismTests::ExecuteWithSameTestData
          (FTestData *param_1,UPCGNode *param_2,FPCGDataCollection *param_3,
          FPCGDataCollection *param_4)

{
  code *pcVar1;
  IPCGElement IVar2;
  bool bVar3;
  IPCGElement local_res8;
  IPCGElement local_48;
  TSharedPtr<IPCGElement,1> local_40;
  TSharedPtr<IPCGElement,1> local_30;
  
  UPCGSettings::GetElement(param_1->Settings,&local_30);
  UPCGSettings::GetElement(param_1->Settings,&local_40);
  PCGTestsCommon::InitializeTestContext
            (&local_48,(FPCGDataCollection *)local_30.Object,(UPCGComponent *)&param_1->InputData,
             (UPCGNode *)param_1->TestPCGComponent);
  PCGTestsCommon::InitializeTestContext
            (&local_res8,(FPCGDataCollection *)local_40.Object,(UPCGComponent *)&param_1->InputData,
             (UPCGNode *)param_1->TestPCGComponent);
  do {
    if ((FPCGDataCollection *)local_30.Object == (FPCGDataCollection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar3 = IPCGElement::Execute(local_30.Object,(FPCGContext *)local_48);
  } while (!bVar3);
  do {
    if ((FPCGDataCollection *)local_40.Object == (FPCGDataCollection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar3 = IPCGElement::Execute(local_40.Object,(FPCGContext *)local_res8);
  } while (!bVar3);
  FPCGDataCollection::operator=(param_3,(FPCGDataCollection *)((longlong)local_48 + 0x38));
  FPCGDataCollection::operator=(param_4,(FPCGDataCollection *)((longlong)local_res8 + 0x38));
  IVar2 = local_48;
  local_48 = (IPCGElement)0x0;
  FPCGContext::Release((FPCGContext *)IVar2);
  IVar2 = local_res8;
  local_res8 = (IPCGElement)0x0;
  FPCGContext::Release((FPCGContext *)IVar2);
  if (local_res8 != (IPCGElement)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  if (local_48 != (IPCGElement)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  return;
}

// ExecuteWithSameTestDataSameElement @ 149f9a310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
PCGDeterminismTests::ExecuteWithSameTestDataSameElement
          (FTestData *param_1,UPCGNode *param_2,FPCGDataCollection *param_3,
          FPCGDataCollection *param_4)

{
  code *pcVar1;
  FPCGContext *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  FPCGContext *local_res8;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  
  UPCGSettings::GetElement(param_1->Settings,(TSharedPtr<IPCGElement,1> *)(local_28 + 8));
  PCGTestsCommon::FTestData::InitializeTestContext(param_1,(UPCGNode *)local_28);
  PCGTestsCommon::FTestData::InitializeTestContext(param_1,(UPCGNode *)&local_res8);
  do {
    if ((IPCGElement *)local_28._8_8_ == (IPCGElement *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar4 = IPCGElement::Execute((IPCGElement *)local_28._8_8_,(FPCGContext *)local_28._0_8_);
  } while (!bVar4);
  do {
    if ((IPCGElement *)local_28._8_8_ == (IPCGElement *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar4 = IPCGElement::Execute((IPCGElement *)local_28._8_8_,local_res8);
  } while (!bVar4);
  FPCGDataCollection::operator=(param_3,(FPCGDataCollection *)(local_28._0_8_ + 0x38));
  FPCGDataCollection::operator=(param_4,&local_res8->OutputData);
  uVar3 = local_28._0_8_;
  local_28._0_8_ = (undefined8 *)0x0;
  FPCGContext::Release((FPCGContext *)uVar3);
  pFVar2 = local_res8;
  local_res8 = (FPCGContext *)0x0;
  FPCGContext::Release(pFVar2);
  if (local_res8 != (FPCGContext *)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  if ((undefined8 *)local_28._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_28._0_8_)(local_28._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// ExecuteWithTestData @ 149f9a480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl PCGDeterminismTests::ExecuteWithTestData(FTestData *param_1,UPCGNode *param_2)

{
  FPCGDataCollection *pFVar1;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FPCGContext *pFVar6;
  FPCGContext *pFVar7;
  bool bVar8;
  FPCGDataCollection *pFVar9;
  FPCGContext *local_res8;
  TSharedPtr<IPCGElement,1> local_28;
  
  UPCGSettings::GetElement(param_1->Settings,&local_28);
  PCGTestsCommon::FTestData::InitializeTestContext(param_1,(UPCGNode *)&local_res8);
  do {
    if (local_28.Object == (IPCGElement *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    bVar8 = IPCGElement::Execute(local_28.Object,local_res8);
    pFVar6 = local_res8;
  } while (!bVar8);
  pFVar1 = &param_1->OutputData;
  pFVar9 = &local_res8->OutputData;
  if (pFVar1 != pFVar9) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data,
               (param_1->OutputData).TaggedData.ArrayNum);
    pFVar4 = (pFVar1->TaggedData).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->TaggedData).AllocatorInstance.Data = (pFVar9->TaggedData).AllocatorInstance.Data;
    (pFVar9->TaggedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->OutputData).TaggedData.ArrayNum = (pFVar6->OutputData).TaggedData.ArrayNum;
    (param_1->OutputData).TaggedData.ArrayMax = (pFVar6->OutputData).TaggedData.ArrayMax;
    (pFVar6->OutputData).TaggedData.ArrayNum = 0;
    (pFVar6->OutputData).TaggedData.ArrayMax = 0;
  }
  pTVar2 = &(pFVar6->OutputData).DataCrcs;
  (param_1->OutputData).bCancelExecutionOnEmpty = (pFVar6->OutputData).bCancelExecutionOnEmpty;
  pTVar3 = &(param_1->OutputData).DataCrcs;
  (param_1->OutputData).bCancelExecution = (pFVar6->OutputData).bCancelExecution;
  if (pTVar3 != pTVar2) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->OutputData).DataCrcs.ArrayNum = (pFVar6->OutputData).DataCrcs.ArrayNum;
    (param_1->OutputData).DataCrcs.ArrayMax = (pFVar6->OutputData).DataCrcs.ArrayMax;
    (pFVar6->OutputData).DataCrcs.ArrayNum = 0;
    (pFVar6->OutputData).DataCrcs.ArrayMax = 0;
  }
  pFVar7 = local_res8;
  (param_1->OutputData).InactiveOutputPinBitmask = (pFVar6->OutputData).InactiveOutputPinBitmask;
  local_res8 = (FPCGContext *)0x0;
  FPCGContext::Release(pFVar7);
  if (local_res8 != (FPCGContext *)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// ExecutionIsConcretelyDeterministic @ 149f9a5d0

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

bool __cdecl
PCGDeterminismTests::ExecutionIsConcretelyDeterministic
          (FTestData *param_1,FTestData *param_2,UPCGNode *param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UPCGData *pUVar4;
  FString *pFVar5;
  FObjectPtr_u_0 *pFVar6;
  wchar_t *pwVar7;
  FObjectPtr_u_0 *pFVar8;
  wchar_t *pwVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  FObjectPtr_u_0 local_a0;
  undefined8 local_98;
  FString local_90;
  FString local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  ExecuteWithTestData(param_1,param_3);
  ExecuteWithTestData(param_2,param_3);
  iVar1 = (param_1->OutputData).TaggedData.ArrayNum;
  pFVar6 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar1 * 0xf;
  while( true ) {
    if ((param_1->OutputData).TaggedData.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar6 == pFVar8) break;
    local_a0 = (FObjectPtr_u_0)pFVar6->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGData *)local_a0.Handle == (UPCGData *)0x0) goto LAB_149f9a852;
      UE::GC::MarkAsReachable(local_a0.Handle);
    }
    if ((UPCGData *)local_a0.Handle == (UPCGData *)0x0) {
LAB_149f9a852:
      pFVar5 = GetTypeName<UPCGSpatialData>(&local_90);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar3 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_a0,pUVar3);
    if ((!bVar2) || ((UPCGData *)local_a0.Handle == (UPCGData *)0x0)) {
      pFVar5 = GetTypeName<UPCGSpatialData>(&local_80);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPCGData_const_>(&local_90,(UPCGData *)local_a0.Handle);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar9);
    }
    local_40 = 0;
    local_3f = 0;
    local_3b = 0;
    local_39 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    pUVar4 = (UPCGData *)
             (**(code **)(*(longlong *)local_a0.Handle + 0x3b0))(local_a0.Handle,0,&local_70);
    FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)pFVar6,pUVar4);
    pFVar6 = pFVar6 + 0xf;
  }
  pFVar6 = (FObjectPtr_u_0 *)(param_2->OutputData).TaggedData.AllocatorInstance.Data;
  iVar1 = (param_2->OutputData).TaggedData.ArrayNum;
  pFVar8 = pFVar6 + (longlong)iVar1 * 0xf;
  while( true ) {
    if ((param_2->OutputData).TaggedData.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar6 == pFVar8) {
      local_a0.Handle = (UObject *)0x0;
      local_98 = 0;
      bVar2 = DataCollectionsMatch
                        (&param_1->OutputData,&param_2->OutputData,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)&local_a0);
      if (local_a0.Handle != (UObject *)0x0) {
        FMemory::Free(local_a0.Handle);
      }
      return bVar2;
    }
    local_a0 = (FObjectPtr_u_0)pFVar6->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGData *)local_a0.Handle == (UPCGData *)0x0) break;
      UE::GC::MarkAsReachable(local_a0.Handle);
    }
    if ((UPCGData *)local_a0.Handle == (UPCGData *)0x0) break;
    pUVar3 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_a0,pUVar3);
    if ((!bVar2) || ((UPCGData *)local_a0.Handle == (UPCGData *)0x0)) {
      pFVar5 = GetTypeName<UPCGSpatialData>(&local_90);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPCGData_const_>(&local_80,(UPCGData *)local_a0.Handle);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar9);
    }
    local_40 = 0;
    local_3f = 0;
    local_3b = 0;
    local_39 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    pUVar4 = (UPCGData *)
             (**(code **)(*(longlong *)local_a0.Handle + 0x3b0))(local_a0.Handle,0,&local_70);
    FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)pFVar6,pUVar4);
    pFVar6 = pFVar6 + 0xf;
  }
  pFVar5 = GetTypeName<UPCGSpatialData>(&local_90);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// ExecutionIsDeterministic @ 149f9a8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
PCGDeterminismTests::ExecutionIsDeterministic
          (FTestData *param_1,FTestData *param_2,UPCGNode *param_3)

{
  bool bVar1;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  ExecuteWithTestData(param_1,param_3);
  ExecuteWithTestData(param_2,param_3);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar1 = DataCollectionsMatch(&param_1->OutputData,&param_2->OutputData,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// ExecutionIsDeterministicSameData @ 149f9a950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
PCGDeterminismTests::ExecutionIsDeterministicSameData(FTestData *param_1,UPCGNode *param_2)

{
  code *pcVar1;
  IPCGElement IVar2;
  FPCGContext *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  IPCGElement local_res8 [2];
  IPCGElement local_res18;
  FPCGContext *local_res20;
  undefined1 local_128 [16];
  TReferenceControllerBase<1> *local_118;
  TSharedPtr<IPCGElement,1> local_110;
  TSharedPtr<IPCGElement,1> local_100;
  undefined1 local_f0 [40];
  ulong64 local_c8;
  FPCGDataCollection local_c0;
  FPCGDataCollection local_90;
  FPCGDataCollection local_60;
  
  local_60.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.TaggedData.ArrayNum = 0;
  local_60.TaggedData.ArrayMax = 0;
  local_60.bCancelExecutionOnEmpty = false;
  local_60.bCancelExecution = false;
  local_60.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.DataCrcs.ArrayNum = 0;
  local_60.DataCrcs.ArrayMax = 0;
  local_60.InactiveOutputPinBitmask = 0;
  local_90.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.TaggedData.ArrayNum = 0;
  local_90.TaggedData.ArrayMax = 0;
  local_90.bCancelExecutionOnEmpty = false;
  local_90.bCancelExecution = false;
  local_90.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.DataCrcs.ArrayNum = 0;
  local_90.DataCrcs.ArrayMax = 0;
  local_90.InactiveOutputPinBitmask = 0;
  UPCGSettings::GetElement(param_1->Settings,&local_100);
  UPCGSettings::GetElement(param_1->Settings,&local_110);
  PCGTestsCommon::InitializeTestContext
            (&local_res18,(FPCGDataCollection *)local_100.Object,
             (UPCGComponent *)&param_1->InputData,(UPCGNode *)param_1->TestPCGComponent);
  PCGTestsCommon::InitializeTestContext
            (local_res8,(FPCGDataCollection *)local_110.Object,(UPCGComponent *)&param_1->InputData,
             (UPCGNode *)param_1->TestPCGComponent);
  do {
    if ((FName)local_100.Object == (FName)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    bVar5 = IPCGElement::Execute(local_100.Object,(FPCGContext *)local_res18);
  } while (!bVar5);
  do {
    if ((FPCGDataCollection *)local_110.Object == (FPCGDataCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    bVar5 = IPCGElement::Execute(local_110.Object,(FPCGContext *)local_res8[0]);
  } while (!bVar5);
  FPCGDataCollection::operator=(&local_60,(FPCGDataCollection *)((longlong)local_res18 + 0x38));
  FPCGDataCollection::operator=(&local_90,(FPCGDataCollection *)((longlong)local_res8[0] + 0x38));
  IVar2 = local_res18;
  local_res18 = (IPCGElement)0x0;
  FPCGContext::Release((FPCGContext *)IVar2);
  IVar2 = local_res8[0];
  local_res8[0] = (IPCGElement)0x0;
  FPCGContext::Release((FPCGContext *)IVar2);
  if (local_res8[0] != (IPCGElement)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  if (local_res18 != (IPCGElement)0x0) {
    (*(code *)**(undefined8 **)local_res18)(local_res18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  local_c0.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.TaggedData.ArrayNum = 0;
  local_c0.TaggedData.ArrayMax = 0;
  local_c0.bCancelExecutionOnEmpty = false;
  local_c0.bCancelExecution = false;
  local_c0.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.DataCrcs.ArrayNum = 0;
  local_c0.DataCrcs.ArrayMax = 0;
  local_c0.InactiveOutputPinBitmask = 0;
  local_f0._0_8_ = (FPCGTaggedData *)0x0;
  local_f0._8_4_ = 0;
  local_f0._12_4_ = 0;
  local_f0[0x10] = false;
  local_f0[0x11] = false;
  local_f0._24_8_ = (FScriptContainerElement *)0x0;
  local_f0._32_8_ = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  UPCGSettings::GetElement(param_1->Settings,(TSharedPtr<IPCGElement,1> *)(local_128 + 8));
  PCGTestsCommon::FTestData::InitializeTestContext(param_1,(UPCGNode *)local_128);
  PCGTestsCommon::FTestData::InitializeTestContext(param_1,(UPCGNode *)&local_res20);
  do {
    if ((IPCGElement *)local_128._8_8_ == (IPCGElement *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    bVar5 = IPCGElement::Execute((IPCGElement *)local_128._8_8_,(FPCGContext *)local_128._0_8_);
  } while (!bVar5);
  do {
    if ((IPCGElement *)local_128._8_8_ == (IPCGElement *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    bVar5 = IPCGElement::Execute((IPCGElement *)local_128._8_8_,local_res20);
  } while (!bVar5);
  FPCGDataCollection::operator=(&local_c0,(FPCGDataCollection *)(local_128._0_8_ + 0x38));
  FPCGDataCollection::operator=((FPCGDataCollection *)local_f0,&local_res20->OutputData);
  uVar4 = local_128._0_8_;
  local_128._0_8_ = (undefined8 *)0x0;
  FPCGContext::Release((FPCGContext *)uVar4);
  pFVar3 = local_res20;
  local_res20 = (FPCGContext *)0x0;
  FPCGContext::Release(pFVar3);
  if (local_res20 != (FPCGContext *)0x0) {
    (*(code *)**(undefined8 **)local_res20)(local_res20,1);
  }
  if ((undefined8 *)local_128._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_128._0_8_)(local_128._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  bVar5 = DataCollectionsAreIdentical(&local_60,&local_90);
  if (bVar5) {
    bVar5 = DataCollectionsAreIdentical(&local_c0,(FPCGDataCollection *)local_f0);
    if (bVar5) {
      bVar5 = true;
      goto LAB_149f9ac60;
    }
  }
  bVar5 = false;
LAB_149f9ac60:
  if ((FScriptContainerElement *)local_f0._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f0._24_8_);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_f0._0_8_,local_f0._8_4_);
  if ((FPCGTaggedData *)local_f0._0_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_f0._0_8_);
  }
  if (local_c0.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_c0.TaggedData.AllocatorInstance.Data,
             local_c0.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_c0.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_c0.TaggedData.AllocatorInstance.Data);
  }
  if (local_90.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_90.TaggedData.AllocatorInstance.Data,
             local_90.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_90.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_90.TaggedData.AllocatorInstance.Data);
  }
  if (local_60.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_60.TaggedData.AllocatorInstance.Data,
             local_60.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_60.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_60.TaggedData.AllocatorInstance.Data);
  }
  return bVar5;
}

// FilterTestableDataTypes @ 149f9ad20

/* WARNING: Removing unreachable block (ram,0x000149f9aee3) */
/* WARNING: Removing unreachable block (ram,0x000149f9aef6) */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> * __cdecl
PCGDeterminismTests::FilterTestableDataTypes
          (TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FPCGDataTypeIdentifier *pFVar5;
  ForAnyElementType this;
  ulonglong uVar6;
  EPCGDataType *pEVar7;
  undefined4 local_res8 [2];
  FPCGDataTypeIdentifier *local_res10;
  FPCGDataTypeIdentifier local_68;
  FPCGDataTypeIdentifier local_50;
  
  bVar2 = false;
  local_res8[0] = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar5 = FPCGDataTypeIdentifier::operator&(param_1,&local_68,Spatial);
  bVar3 = FPCGDataTypeIdentifier::operator!(pFVar5);
  if (local_68.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Ids.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    pEVar7 = TestableDataTypes;
    do {
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_68,*pEVar7);
      iVar4 = local_68.Ids.ArrayNum;
      if (iVar4 != 0) {
        pFVar1 = local_68.Ids.AllocatorInstance.Data + (longlong)iVar4 * 8;
        this.Data = local_68.Ids.AllocatorInstance.Data;
        while( true ) {
          if (local_68.Ids.ArrayNum != iVar4) {
            `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res8);
          }
          param_1 = local_res10;
          if (this.Data == pFVar1) break;
          bVar3 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)this.Data);
          param_1 = local_res10;
          if (!bVar3) goto LAB_149f9ae46;
          this.Data = this.Data + 8;
        }
        bVar2 = true;
        pFVar5 = FPCGDataTypeIdentifier::operator&(local_res10,&local_50,&local_68);
        bVar3 = FPCGDataTypeIdentifier::operator!(pFVar5);
        if (bVar3) {
          bVar3 = false;
          goto LAB_149f9ae48;
        }
      }
LAB_149f9ae46:
      bVar3 = true;
LAB_149f9ae48:
      if ((bVar2) &&
         (bVar2 = false, local_50.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Ids.AllocatorInstance.Data);
      }
      if ((bVar3) && (uVar6 = (ulonglong)(uint)param_2, 0 < param_2)) {
        do {
          iVar4 = __return_storage_ptr__->ArrayNum;
          if (iVar4 == __return_storage_ptr__->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar4 + 1;
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                    ((FPCGDataTypeIdentifier *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x18),
                     &local_68);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_68.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Ids.AllocatorInstance.Data);
      }
      pEVar7 = pEVar7 + 1;
    } while (pEVar7 != (EPCGDataType *)&DAT_152017a48);
  }
  pFVar1 = (param_1->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GenerateAttributeSetWithRandomInt @ 149f9af20

UPCGParamData * __cdecl
PCGPointFilterTest::GenerateAttributeSetWithRandomInt(int param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UPCGParamData *pUVar7;
  FPCGMetadataDomain *this;
  FPCGMetadataAttribute<int> *this_00;
  long64 lVar8;
  ulonglong uVar9;
  int local_res8 [2];
  int local_res10 [4];
  FPCGMetadataDomainID local_40;
  
  uVar9 = (ulonglong)(uint)param_1;
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UPCGParamData>(pUVar6);
  plVar1 = &pUVar7->_padding_;
  if (((pUVar7 == (UPCGParamData *)0x0) || (*plVar1 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParamData && ParamData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                         ,0x4c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UPCGParamData *)(*pcVar2)();
    return pUVar7;
  }
  FVar3 = IntAttributeName;
  this_00 = (FPCGMetadataAttribute<int> *)0x0;
  local_40.Flag = PCGMetadataDomainID::Default.Flag;
  local_40._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_40.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_40.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res8[0] = 0;
  this = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)*plVar1,&local_40);
  if (((this == (FPCGMetadataDomain *)0x0) ||
      (this_00 = FPCGMetadataDomain::CreateAttribute<int>(this,FVar3,local_res8,true,false),
      this_00 == (FPCGMetadataAttribute<int> *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attribute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                         ,0x4e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UPCGParamData *)(*pcVar2)();
    return pUVar7;
  }
  if (0 < param_1) {
    do {
      lVar8 = UPCGMetadata::AddEntry((UPCGMetadata *)*plVar1,-1);
      param_2 = param_2 * 0xbb38435 + 0x3619636b;
      if ((lVar8 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x25c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pUVar7 = (UPCGParamData *)(*pcVar2)();
        return pUVar7;
      }
      local_res10[0] = param_2;
      iVar5 = FPCGMetadataAttribute<int>::AddValue(this_00,local_res10);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_00,lVar8,iVar5,false);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return pUVar7;
}

// GenerateAttributeSetWithSingleValue @ 149f9b0c0

UPCGParamData * __cdecl PCGPointFilterTest::GenerateAttributeSetWithSingleValue(double param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *pUVar5;
  UPCGParamData *pUVar6;
  FPCGMetadataDomain *this;
  FPCGMetadataAttribute<double> *this_00;
  long64 lVar7;
  double local_res8;
  double local_res10;
  FPCGMetadataDomainID local_20;
  
  local_res8 = param_1;
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UPCGParamData>(pUVar5);
  plVar1 = &pUVar6->_padding_;
  if (((pUVar6 == (UPCGParamData *)0x0) || (*plVar1 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParamData && ParamData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                         ,0x60,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UPCGParamData *)(*pcVar2)();
    return pUVar6;
  }
  FVar3 = DoubleAttributeName;
  local_20.Flag = PCGMetadataDomainID::Default.Flag;
  local_20._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_20.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res10 = 0.0;
  this = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)*plVar1,&local_20);
  if (this == (FPCGMetadataDomain *)0x0) {
    this_00 = (FPCGMetadataAttribute<double> *)0x0;
  }
  else {
    this_00 = FPCGMetadataDomain::CreateAttribute<double>(this,FVar3,&local_res10,true,false);
    if (this_00 != (FPCGMetadataAttribute<double> *)0x0) goto LAB_149f9b1a5;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Attribute",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                     ,0x62,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UPCGParamData *)(*pcVar2)();
    return pUVar6;
  }
LAB_149f9b1a5:
  lVar7 = UPCGMetadata::AddEntry((UPCGMetadata *)*plVar1,-1);
  FPCGMetadataAttribute<double>::SetValue(this_00,lVar7,&local_res8);
  return pUVar6;
}

// GeneratePointDataWithRandomDensity @ 149f9b1e0

UPCGBasePointData * __cdecl
PCGPointFilterTest::GeneratePointDataWithRandomDensity(int param_1,int param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  bool bVar20;
  uint uVar21;
  UPCGBasePointData *pUVar22;
  TTransform<double> *pTVar23;
  float *pfVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  FPCGPointValueRanges local_218;
  
  pUVar22 = PCGTestsCommon::CreateEmptyBasePointData();
  (**(code **)(pUVar22->_padding_ + 0x490))
            (pUVar22,param_1,CONCAT71((int7)((ulonglong)pUVar22->_padding_ >> 8),1));
  (**(code **)(pUVar22->_padding_ + 0x498))(pUVar22,0x43);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_218,pUVar22,false);
  fVar19 = __real_3f800000;
  uVar26 = 0;
  if (0 < param_1) {
    do {
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
      fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
      uVar27 = ~uVar26 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar26 < local_218.TransformRange.NumElements) {
        uVar21 = uVar27;
      }
      fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar1 = (code *)swi(3);
        pUVar22 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar22;
      }
      if (uVar26 == (int)uVar26 % local_218.TransformRange.ElementView.NumElements) {
        pTVar23 = (TTransform<double> *)
                  ((longlong)
                   ((local_218.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
                  (longlong)local_218.TransformRange.ElementView.BytesBetweenElements *
                  (longlong)((int)uVar26 % local_218.TransformRange.ElementView.NumElements));
      }
      else {
        pTVar23 = &local_218.TransformRange.StubValue;
      }
      (pTVar23->Rotation).XY.m128d_f64[0] = (double)fVar2;
      (pTVar23->Rotation).XY.m128d_f64[1] = (double)fVar5;
      auVar14._8_4_ = SUB84((double)fVar11,0);
      auVar14._0_8_ = (double)fVar8;
      auVar14._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
      *(undefined1 (*) [16])(pTVar23->Rotation).ZW.m128d_f64 = auVar14;
      auVar15._8_4_ = SUB84((double)fVar6,0);
      auVar15._0_8_ = (double)fVar3;
      auVar15._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
      *(undefined1 (*) [16])(pTVar23->Translation).XY.m128d_f64 = auVar15;
      auVar16._8_4_ = SUB84((double)fVar12,0);
      auVar16._0_8_ = (double)fVar9;
      auVar16._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
      *(undefined1 (*) [16])(pTVar23->Translation).ZW.m128d_f64 = auVar16;
      auVar17._8_4_ = SUB84((double)fVar7,0);
      auVar17._0_8_ = (double)fVar4;
      auVar17._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
      *(undefined1 (*) [16])(pTVar23->Scale3D).XY.m128d_f64 = auVar17;
      auVar18._8_4_ = SUB84((double)fVar13,0);
      auVar18._0_8_ = (double)fVar10;
      auVar18._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
      *(undefined1 (*) [16])(pTVar23->Scale3D).ZW.m128d_f64 = auVar18;
      param_2 = param_2 * 0xbb38435 + 0x3619636b;
      uVar21 = 0;
      if ((int)uVar26 < local_218.DensityRange.NumElements) {
        uVar21 = uVar27;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar1 = (code *)swi(3);
        pUVar22 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar22;
      }
      if (uVar26 == (int)uVar26 % local_218.DensityRange.ElementView.NumElements) {
        pfVar24 = (float *)((longlong)local_218.DensityRange.ElementView.BytesBetweenElements *
                            (longlong)((int)uVar26 % local_218.DensityRange.ElementView.NumElements)
                           + (longlong)local_218.DensityRange.ElementView.FirstElementPtr);
      }
      else {
        pfVar24 = &local_218.DensityRange.StubValue;
      }
      *pfVar24 = (float)((uint)param_2 >> 9 | 0x3f800000) - fVar19;
      uVar21 = 0;
      if ((int)uVar26 < local_218.SeedRange.NumElements) {
        uVar21 = uVar27;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar1 = (code *)swi(3);
        pUVar22 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar22;
      }
      if (uVar26 == (int)uVar26 % local_218.SeedRange.ElementView.NumElements) {
        piVar25 = (int *)((longlong)local_218.SeedRange.ElementView.BytesBetweenElements *
                          (longlong)((int)uVar26 % local_218.SeedRange.ElementView.NumElements) +
                         (longlong)local_218.SeedRange.ElementView.FirstElementPtr);
      }
      else {
        piVar25 = &local_218.SeedRange.StubValue;
      }
      *piVar25 = uVar26;
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < param_1);
  }
  return pUVar22;
}

// GeneratePointDataWithSingleDensity @ 149f9b4e0

UPCGBasePointData * __cdecl PCGPointFilterTest::GeneratePointDataWithSingleDensity(float param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGBasePointData *pUVar3;
  FPCGPointValueRanges local_1a8;
  
  pUVar3 = PCGTestsCommon::CreateEmptyBasePointData();
  (**(code **)(pUVar3->_padding_ + 0x490))(pUVar3,1,1);
  (**(code **)(pUVar3->_padding_ + 0x498))(pUVar3,2);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_1a8,pUVar3,false);
  if (local_1a8.DensityRange.NumElements < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGBasePointData *)(*pcVar1)();
      return pUVar3;
    }
  }
  *local_1a8.DensityRange.ElementView.FirstElementPtr = param_1;
  return pUVar3;
}

// GetDataCollectionCompareFunction @ 149f9b5b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TFunction<bool___cdecl(UPCGData_const_*,UPCGData_const_*)> * __cdecl
PCGDeterminismTests::GetDataCollectionCompareFunction
          (TFunction<bool___cdecl(UPCGData_const_*,UPCGData_const_*)> *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  code *pcVar4;
  bool bVar5;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeIdentifier local_30;
  
  bVar5 = false;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_30,param_1);
  bVar2 = DataTypeIsComparable(pFVar3);
  if (bVar2) {
    bVar5 = true;
    pFVar3 = FPCGDataTypeIdentifier::operator&(param_1,&local_48,Spatial);
    bVar2 = FPCGDataTypeIdentifier::operator!(pFVar3);
    if (!bVar2) {
      bVar2 = false;
      goto LAB_149f9b615;
    }
  }
  bVar2 = true;
LAB_149f9b615:
  if ((bVar5) && (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Ids.AllocatorInstance.Data);
  }
  if (bVar2) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pcVar4 = ComparisonIsUnimplemented;
  }
  else {
    pcVar4 = SpatialBasicsAreIdentical;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NPEBVUPCGData__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)&__return_storage_ptr__->field_0x18 = pcVar4;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),bool,UPCGData_const_*,UPCGData_const_*>
         ::Call;
  }
  pFVar1 = (param_1->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetDataCompareFunction @ 149f9b6b0

/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TFunction<bool___cdecl(UPCGData_const_*,UPCGData_const_*)> * __cdecl
PCGDeterminismTests::GetDataCompareFunction
          (TFunction<bool___cdecl(UPCGData_const_*,UPCGData_const_*)> *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1,EDeterminismLevel param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  code *pcVar4;
  FPCGDataTypeIdentifier local_28;
  
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,param_1);
  bVar2 = DataTypeIsComparable(pFVar3);
  if (bVar2) {
    pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    bVar2 = FPCGDataTypeIdentifier::IsSameType(param_1,pFVar3);
    if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Ids.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar4 = ParamDataIsIdentical;
      goto LAB_149f9b79a;
    }
    if (param_2 == OrderOrthogonal) {
      pcVar4 = SpatialDataIsOrthogonal;
      goto LAB_149f9b79a;
    }
    if (param_2 == OrderConsistent) {
      pcVar4 = SpatialDataIsConsistent;
      goto LAB_149f9b79a;
    }
    if (param_2 == Deterministic) {
      pcVar4 = SpatialDataIsIdentical;
      goto LAB_149f9b79a;
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      pcVar4 = ComparisonIsUnimplemented;
      goto LAB_149f9b79a;
    }
  }
  else if (2 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  pcVar4 = ComparisonIsUnimplemented;
LAB_149f9b79a:
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NPEBVUPCGData__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)&__return_storage_ptr__->field_0x18 = pcVar4;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),bool,UPCGData_const_*,UPCGData_const_*>
         ::Call;
  }
  pFVar1 = (param_1->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetHighestDeterminismLevel @ 149f9b7f0

/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EDeterminismLevel __cdecl
PCGDeterminismTests::GetHighestDeterminismLevel
          (FNodeAndOptions *param_1,int param_2,EDeterminismLevel param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  EDeterminismLevel EVar4;
  int iVar5;
  int iVar6;
  UPCGSettings *pUVar7;
  FPCGDataTypeIdentifier *pFVar8;
  UPCGNode *pUVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  EDeterminismLevel local_res18;
  FPCGDataTypeIdentifier local_2d8;
  FPCGDataTypeIdentifier local_2c0;
  int local_2a8;
  int local_2a4;
  UPCGNode *local_2a0;
  FPCGDataTypeIdentifier local_298;
  TArray<int,TSizedDefaultAllocator<32>_> local_280;
  TArray<int,TSizedDefaultAllocator<32>_> local_270;
  UClass *local_260;
  UClass *local_258 [2];
  FPCGTaggedData *local_248;
  int iStack_240;
  TArrayView<FPCGTaggedData,int> local_238;
  FTestData local_228;
  FTestData local_198;
  FPCGDataTypeIdentifier local_108;
  FPCGDataTypeIdentifier local_f0;
  FPCGDataTypeIdentifier local_d8;
  FPCGDataTypeIdentifier local_c0;
  FPCGDataTypeIdentifier local_a8;
  FPCGDataTypeIdentifier local_90;
  FPCGDataTypeIdentifier local_78;
  FPCGDataTypeIdentifier local_60;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId417,"PCGDeterminismTests::GetHighestDeterminismLevel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x1a1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId417);
  }
  pUVar9 = param_1->PCGNode;
  local_2a0 = pUVar9;
  local_260 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_260 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_260);
  }
  pUVar7 = UPCGNode::GetSettings(pUVar9);
  PCGTestsCommon::FTestData::FTestData
            (&local_198,param_1->Seed,pUVar7,(TSubclassOf<AActor>)&local_260);
  local_258[0] = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_258[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_258[0]);
  }
  pUVar7 = UPCGNode::GetSettings(pUVar9);
  PCGTestsCommon::FTestData::FTestData
            (&local_228,param_1->Seed,pUVar7,(TSubclassOf<AActor>)local_258);
  uVar10 = 1;
  if (param_1->bMultipleOptionsPerPin != false) {
    uVar10 = param_2;
  }
  iVar5 = GetNumPermutations(&param_1->BaseOptionsByPin);
  iVar6 = 0;
  local_res18 = param_3;
  local_2a4 = iVar5;
  if (0 < (param_1->BaseOptionsByPin).ArrayNum) {
    do {
      iVar12 = 0;
      local_2a8 = iVar6 + 1;
      pUVar9 = local_2a0;
      if (0 < iVar5) {
        do {
          pUVar7 = UPCGNode::GetSettings(pUVar9);
          PCGTestsCommon::FTestData::Reset(&local_198,pUVar7);
          pUVar7 = UPCGNode::GetSettings(pUVar9);
          PCGTestsCommon::FTestData::Reset(&local_228,pUVar7);
          iVar5 = 0;
          if (0 < (param_1->BaseOptionsByPin).ArrayNum) {
            iVar6 = iVar12;
            do {
              uVar11 = (ulonglong)uVar10;
              iVar12 = iVar6;
              if (0 < (int)uVar10) {
                do {
                  iVar12 = iVar6 + 1;
                  GetPermutation(&local_298,iVar6,iVar5,&param_1->BaseOptionsByPin);
                  FVar2.Data = local_298.Ids.AllocatorInstance.Data;
                  local_2d8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar6 = local_298.Ids.ArrayNum;
                  local_2d8.Ids.ArrayNum = iVar6;
                  if (iVar6 == 0) {
                    local_2d8.Ids.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar6,0,(ForAnyElementType *)&local_2d8,iVar6,
                               &local_2d8.Ids.ArrayMax);
                    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                              (local_2d8.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar2.Data
                               ,iVar6);
                  }
                  local_2d8.CustomSubtype = local_298.CustomSubtype;
                  pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_108,Point);
                  bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_2d8,pFVar8);
                  if (local_108.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.Ids.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    AddRandomizedMultiplePointInputData(&local_198,100,&Defaults::TestPinName);
                  }
                  else {
                    pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_f0,Volume);
                    bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_2d8,pFVar8);
                    if (local_f0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_f0.Ids.AllocatorInstance.Data);
                    }
                    if (bVar3) {
                      AddRandomizedVolumeInputData(&local_198,&Defaults::TestPinName);
                    }
                    else {
                      pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_d8,PolyLine);
                      bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_2d8,pFVar8);
                      if (local_d8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_d8.Ids.AllocatorInstance.Data);
                      }
                      if (bVar3) {
                        AddRandomizedPolyLineInputData(&local_198,6,&Defaults::TestPinName);
                      }
                      else {
                        pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_c0,Primitive)
                        ;
                        bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_2d8,pFVar8);
                        if (local_c0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_c0.Ids.AllocatorInstance.Data);
                        }
                        if (bVar3) {
                          AddRandomizedPrimitiveInputData(&local_198,&Defaults::TestPinName);
                        }
                        else {
                          bVar3 = FPCGDataTypeIdentifier::operator==(&local_2d8,Surface);
                          if ((((!bVar3) &&
                               (bVar3 = FPCGDataTypeIdentifier::operator==(&local_2d8,Landscape),
                               !bVar3)) &&
                              (bVar3 = FPCGDataTypeIdentifier::IsValid(&local_2d8), bVar3)) &&
                             (1 < (byte)LogPCG._0_1_)) {
                            UE::Logging::Private::BasicLog<2>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                          }
                        }
                      }
                    }
                  }
                  if (local_2d8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2d8.Ids.AllocatorInstance.Data);
                  }
                  FVar2.Data = local_298.Ids.AllocatorInstance.Data;
                  local_2c0.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar6 = local_298.Ids.ArrayNum;
                  local_2c0.Ids.ArrayNum = iVar6;
                  if (iVar6 == 0) {
                    local_2c0.Ids.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar6,0,(ForAnyElementType *)&local_2c0,iVar6,
                               &local_2c0.Ids.ArrayMax);
                    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                              (local_2c0.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar2.Data
                               ,iVar6);
                  }
                  local_2c0.CustomSubtype = local_298.CustomSubtype;
                  pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_a8,Point);
                  bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_2c0,pFVar8);
                  if (local_a8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Ids.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    AddRandomizedMultiplePointInputData(&local_228,100,&Defaults::TestPinName);
                  }
                  else {
                    pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_90,Volume);
                    bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_2c0,pFVar8);
                    if (local_90.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_90.Ids.AllocatorInstance.Data);
                    }
                    if (bVar3) {
                      AddRandomizedVolumeInputData(&local_228,&Defaults::TestPinName);
                    }
                    else {
                      pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_78,PolyLine);
                      bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_2c0,pFVar8);
                      if (local_78.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_78.Ids.AllocatorInstance.Data);
                      }
                      if (bVar3) {
                        AddRandomizedPolyLineInputData(&local_228,6,&Defaults::TestPinName);
                      }
                      else {
                        pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_60,Primitive)
                        ;
                        bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_2c0,pFVar8);
                        if (local_60.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_60.Ids.AllocatorInstance.Data);
                        }
                        if (bVar3) {
                          AddRandomizedPrimitiveInputData(&local_228,&Defaults::TestPinName);
                        }
                        else {
                          bVar3 = FPCGDataTypeIdentifier::operator==(&local_2c0,Surface);
                          if (((!bVar3) &&
                              (bVar3 = FPCGDataTypeIdentifier::operator==(&local_2c0,Landscape),
                              !bVar3)) &&
                             ((bVar3 = FPCGDataTypeIdentifier::IsValid(&local_2c0), bVar3 &&
                              (1 < (byte)LogPCG._0_1_)))) {
                            UE::Logging::Private::BasicLog<2>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                          }
                        }
                      }
                    }
                  }
                  if (local_2c0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2c0.Ids.AllocatorInstance.Data);
                  }
                  if (local_298.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_298.Ids.AllocatorInstance.Data);
                  }
                  uVar11 = uVar11 - 1;
                  iVar6 = iVar12;
                } while (uVar11 != 0);
              }
              iVar5 = iVar5 + 1;
              pUVar9 = local_2a0;
              iVar6 = iVar12;
            } while (iVar5 < (param_1->BaseOptionsByPin).ArrayNum);
          }
          iVar5 = local_228.InputData.TaggedData.ArrayNum;
          local_248 = (FPCGTaggedData *)local_228.InputData.TaggedData.AllocatorInstance.Data;
          if ((local_228.InputData.TaggedData.ArrayNum < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            EVar4 = (*pcVar1)();
            return EVar4;
          }
          iStack_240 = iVar5;
          local_238.DataPtr = local_248;
          PCGHelpers::ShiftArrayElements<FPCGTaggedData>(&local_238,local_2a8);
          ExecuteWithTestData(&local_198,pUVar9);
          ExecuteWithTestData(&local_228,pUVar9);
          if (local_res18 == OrderOrthogonal) {
LAB_149f9beea:
            local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_270.ArrayNum = 0;
            local_270.ArrayMax = 0;
            bVar3 = DataCollectionsMatch(&local_198.OutputData,&local_228.OutputData,&local_270);
            if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.AllocatorInstance.Data);
            }
            if (!bVar3) {
LAB_149f9bf3d:
              param_3 = NoDeterminism;
              goto LAB_149f9bf48;
            }
          }
          else if (local_res18 == OrderConsistent) {
LAB_149f9be8b:
            bVar3 = DataCollectionsAreConsistent(&local_198.OutputData,&local_228.OutputData,uVar10)
            ;
            if (!bVar3) {
              iVar12 = 0;
              local_res18 = OrderOrthogonal;
              goto LAB_149f9beea;
            }
            if ((param_1->BaseOptionsByPin).ArrayNum < 2) {
              local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_280.ArrayNum = 0;
              local_280.ArrayMax = 0;
              DataCollectionsMatch(&local_198.OutputData,&local_228.OutputData,&local_280);
              if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.AllocatorInstance.Data);
              }
            }
          }
          else {
            if (local_res18 != Deterministic) goto LAB_149f9bf3d;
            bVar3 = DataCollectionsAreIdentical(&local_198.OutputData,&local_228.OutputData);
            if (!bVar3) {
              iVar12 = 0;
              local_res18 = OrderConsistent;
              goto LAB_149f9be8b;
            }
          }
          iVar5 = local_2a4;
          param_3 = local_res18;
        } while (iVar12 < local_2a4);
      }
      iVar6 = local_2a8;
    } while (local_2a8 < (param_1->BaseOptionsByPin).ArrayNum);
  }
LAB_149f9bf48:
  PCGTestsCommon::FTestData::~FTestData(&local_228);
  PCGTestsCommon::FTestData::~FTestData(&local_198);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return param_3;
}

// GetHighestDeterminismLevelSimpleShuffleInput @ 149f9bfb0

/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EDeterminismLevel __cdecl
PCGDeterminismTests::GetHighestDeterminismLevelSimpleShuffleInput
          (FNodeAndOptions *param_1,int param_2,EDeterminismLevel param_3)

{
  int iVar1;
  FPCGDataTypeBaseId *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  EDeterminismLevel EVar6;
  uint uVar7;
  UPCGSettings *pUVar8;
  longlong lVar9;
  FPCGDataTypeIdentifier *pFVar10;
  FScriptContainerElement *pFVar11;
  UPCGNode *this;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint local_res10;
  FPCGDataTypeIdentifier local_2c8;
  FPCGDataTypeIdentifier local_2b0;
  ForAnyElementType local_298;
  int local_290;
  int local_28c;
  int local_288;
  longlong local_280;
  longlong local_278;
  TArray<int,TSizedDefaultAllocator<32>_> local_270;
  TArray<int,TSizedDefaultAllocator<32>_> local_260;
  UClass *local_250;
  UClass *local_248;
  longlong local_240;
  longlong local_238;
  UPCGNode *local_230;
  FTestData local_228;
  FPCGDataTypeIdentifier local_198;
  FPCGDataTypeIdentifier local_180;
  FPCGDataTypeIdentifier local_168;
  FPCGDataTypeIdentifier local_150;
  FPCGDataTypeIdentifier local_138;
  FPCGDataTypeIdentifier local_120;
  FPCGDataTypeIdentifier local_108;
  FPCGDataTypeIdentifier local_f0;
  FTestData local_d8;
  
  this = param_1->PCGNode;
  local_230 = this;
  local_250 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_250 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_250);
  }
  pUVar8 = UPCGNode::GetSettings(this);
  PCGTestsCommon::FTestData::FTestData
            (&local_d8,param_1->Seed,pUVar8,(TSubclassOf<AActor>)&local_250);
  local_248 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_248 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_248);
  }
  pUVar8 = UPCGNode::GetSettings(this);
  PCGTestsCommon::FTestData::FTestData
            (&local_228,param_1->Seed,pUVar8,(TSubclassOf<AActor>)&local_248);
  iVar13 = 1;
  if (param_1->bMultipleOptionsPerPin != false) {
    iVar13 = param_2;
  }
  lVar9 = (longlong)iVar13;
  local_res10 = 0;
  local_238 = lVar9;
  if (0 < (param_1->BaseOptionsByPin).ArrayNum) {
    local_280 = 0;
    do {
      uVar12 = 0;
      if (0 < lVar9) {
        local_240 = local_280 << 4;
        uVar15 = uVar12;
        local_278 = lVar9;
        do {
          lVar9 = local_240;
          uVar7 = 0;
          if ((int)local_res10 < (param_1->BaseOptionsByPin).ArrayNum) {
            uVar7 = ~local_res10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            EVar6 = (*pcVar3)();
            return EVar6;
          }
          pFVar11 = (param_1->BaseOptionsByPin).AllocatorInstance.Data + lVar9;
          uVar14 = (uint)uVar15;
          uVar7 = 0;
          if ((int)uVar14 < *(int *)(pFVar11 + 8)) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            EVar6 = (*pcVar3)();
            return EVar6;
          }
          lVar9 = *(longlong *)pFVar11;
          local_298.Data = (FScriptContainerElement *)0x0;
          iVar1 = *(int *)(lVar9 + 8 + uVar12);
          pFVar2 = *(FPCGDataTypeBaseId **)(lVar9 + uVar12);
          local_290 = iVar1;
          if (iVar1 == 0) {
            local_28c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,0,&local_298,iVar1,&local_28c);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>(local_298.Data,pFVar2,iVar1);
          }
          iVar1 = local_290;
          FVar4.Data = local_298.Data;
          local_288 = *(int *)(lVar9 + 0x10 + uVar12);
          local_2c8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c8.Ids.ArrayNum = local_290;
          if (local_290 == 0) {
            local_2c8.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_290,0,(ForAnyElementType *)&local_2c8,local_290,
                       &local_2c8.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_2c8.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar4.Data,iVar1);
          }
          local_2c8.CustomSubtype = local_288;
          pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_198,Point);
          bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_2c8,pFVar10);
          if (local_198.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Ids.AllocatorInstance.Data);
          }
          if (bVar5) {
            AddRandomizedMultiplePointInputData(&local_d8,100,&Defaults::TestPinName);
          }
          else {
            pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_180,Volume);
            bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_2c8,pFVar10);
            if (local_180.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Ids.AllocatorInstance.Data);
            }
            if (bVar5) {
              AddRandomizedVolumeInputData(&local_d8,&Defaults::TestPinName);
            }
            else {
              pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_168,PolyLine);
              bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_2c8,pFVar10);
              if (local_168.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Ids.AllocatorInstance.Data);
              }
              if (bVar5) {
                AddRandomizedPolyLineInputData(&local_d8,6,&Defaults::TestPinName);
              }
              else {
                pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_150,Primitive);
                bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_2c8,pFVar10);
                if (local_150.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_150.Ids.AllocatorInstance.Data);
                }
                if (bVar5) {
                  AddRandomizedPrimitiveInputData(&local_d8,&Defaults::TestPinName);
                }
                else {
                  bVar5 = FPCGDataTypeIdentifier::operator==(&local_2c8,Surface);
                  if ((((!bVar5) &&
                       (bVar5 = FPCGDataTypeIdentifier::operator==(&local_2c8,Landscape), !bVar5))
                      && (bVar5 = FPCGDataTypeIdentifier::IsValid(&local_2c8), bVar5)) &&
                     (1 < (byte)LogPCG._0_1_)) {
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  }
                }
              }
            }
          }
          if (local_2c8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Ids.AllocatorInstance.Data);
          }
          iVar1 = local_290;
          FVar4.Data = local_298.Data;
          local_2b0.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b0.Ids.ArrayNum = local_290;
          if (local_290 == 0) {
            local_2b0.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_290,0,(ForAnyElementType *)&local_2b0,local_290,
                       &local_2b0.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_2b0.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar4.Data,iVar1);
          }
          local_2b0.CustomSubtype = local_288;
          pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_138,Point);
          bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_2b0,pFVar10);
          if (local_138.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Ids.AllocatorInstance.Data);
          }
          if (bVar5) {
            AddRandomizedMultiplePointInputData(&local_228,100,&Defaults::TestPinName);
          }
          else {
            pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_120,Volume);
            bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_2b0,pFVar10);
            if (local_120.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Ids.AllocatorInstance.Data);
            }
            if (bVar5) {
              AddRandomizedVolumeInputData(&local_228,&Defaults::TestPinName);
            }
            else {
              pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_108,PolyLine);
              bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_2b0,pFVar10);
              if (local_108.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Ids.AllocatorInstance.Data);
              }
              if (bVar5) {
                AddRandomizedPolyLineInputData(&local_228,6,&Defaults::TestPinName);
              }
              else {
                pFVar10 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_f0,Primitive);
                bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_2b0,pFVar10);
                if (local_f0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Ids.AllocatorInstance.Data);
                }
                if (bVar5) {
                  AddRandomizedPrimitiveInputData(&local_228,&Defaults::TestPinName);
                }
                else {
                  bVar5 = FPCGDataTypeIdentifier::operator==(&local_2b0,Surface);
                  if (((!bVar5) &&
                      (bVar5 = FPCGDataTypeIdentifier::operator==(&local_2b0,Landscape), !bVar5)) &&
                     ((bVar5 = FPCGDataTypeIdentifier::IsValid(&local_2b0), bVar5 &&
                      (1 < (byte)LogPCG._0_1_)))) {
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  }
                }
              }
            }
          }
          if (local_2b0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Ids.AllocatorInstance.Data);
          }
          if (local_298.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data);
          }
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar12 = uVar12 + 0x18;
          local_278 = local_278 + -1;
        } while (local_278 != 0);
        local_278 = 0;
        lVar9 = local_238;
      }
      local_res10 = local_res10 + 1;
      local_280 = local_280 + 1;
      this = local_230;
    } while ((int)local_res10 < (param_1->BaseOptionsByPin).ArrayNum);
  }
  PCGHelpers::ShuffleArray<FPCGTaggedData>(&local_228.RandomStream,&local_228.InputData.TaggedData);
  ExecuteWithTestData(&local_d8,this);
  ExecuteWithTestData(&local_228,this);
  if (param_3 == OrderOrthogonal) {
LAB_149f9c6ec:
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    bVar5 = DataCollectionsMatch(&local_d8.OutputData,&local_228.OutputData,&local_260);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    if (bVar5) goto LAB_149f9c724;
  }
  else {
    if (param_3 == OrderConsistent) {
LAB_149f9c69b:
      bVar5 = DataCollectionsAreConsistent(&local_d8.OutputData,&local_228.OutputData,iVar13);
      if (bVar5) {
        if ((param_1->BaseOptionsByPin).ArrayNum < 2) {
          local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_270.ArrayNum = 0;
          local_270.ArrayMax = 0;
          DataCollectionsMatch(&local_d8.OutputData,&local_228.OutputData,&local_270);
          if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.AllocatorInstance.Data);
          }
        }
        goto LAB_149f9c724;
      }
      param_3 = OrderOrthogonal;
      goto LAB_149f9c6ec;
    }
    if (param_3 == Deterministic) {
      bVar5 = DataCollectionsAreIdentical(&local_d8.OutputData,&local_228.OutputData);
      if (bVar5) goto LAB_149f9c724;
      param_3 = OrderConsistent;
      goto LAB_149f9c69b;
    }
  }
  param_3 = NoDeterminism;
LAB_149f9c724:
  PCGTestsCommon::FTestData::~FTestData(&local_228);
  PCGTestsCommon::FTestData::~FTestData(&local_d8);
  return param_3;
}

// GetNumEmptyData @ 149f9c760

int __cdecl
PCGPointFilterTest::GetNumEmptyData(TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FPCGTaggedData *pFVar4;
  FPCGTaggedData *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  iVar6 = 0;
  pFVar4 = (FPCGTaggedData *)(param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    bVar3 = `PCGPointFilterTest::GetNumEmptyData'::__l2::<lambda_1>::operator()(local_res8,pFVar4);
    iVar2 = iVar6 + 1;
    if (!bVar3) {
      iVar2 = iVar6;
    }
    iVar6 = iVar2;
    pFVar4 = pFVar4 + 1;
  }
  return iVar6;
}

// GetNumPermutations @ 149f9c7e0

int __cdecl
PCGDeterminismTests::GetNumPermutations
          (TArray<TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar4 = param_1->ArrayNum;
  uVar6 = 0;
  iVar8 = 1;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar4) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = *(int *)((param_1->AllocatorInstance).Data + lVar7 + 8);
      iVar5 = 1;
      if (1 < iVar4) {
        iVar5 = iVar4;
      }
      iVar4 = param_1->ArrayNum;
      iVar8 = iVar8 * iVar5;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < iVar4);
  }
  return iVar8;
}

// GetPermutation @ 149f9c8a0

FPCGDataTypeIdentifier * __cdecl
PCGDeterminismTests::GetPermutation
          (FPCGDataTypeIdentifier *__return_storage_ptr__,int param_1,int param_2,
          TArray<TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPCGDataTypeIdentifier *pFVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationIteration >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x611,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeIdentifier *)(*pcVar2)();
    return pFVar4;
  }
  if (((param_2 < 0) || (param_3->ArrayNum <= param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseOptionsPerPin.IsValidIndex(PinIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x612,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeIdentifier *)(*pcVar2)();
    return pFVar4;
  }
  iVar8 = 1;
  uVar6 = 0;
  if (0 < param_2) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_3->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGDataTypeIdentifier *)(*pcVar2)();
        return pFVar4;
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 * *(int *)((param_3->AllocatorInstance).Data + lVar7 + 8);
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < param_2);
    if ((iVar8 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CardinalityProduct > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                           ,0x619,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGDataTypeIdentifier *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar6 = 0;
  if (param_2 < param_3->ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeIdentifier *)(*pcVar2)();
    return pFVar4;
  }
  lVar7 = (longlong)param_2 * 0x10;
  uVar5 = (uint)((longlong)
                 ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar8) >> 0x1f) << 0x20 |
                 (longlong)param_1 / (longlong)iVar8 & 0xffffffffU) %
                (longlong)*(int *)((param_3->AllocatorInstance).Data + lVar7 + 8));
  uVar6 = 0;
  if (param_2 < param_3->ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeIdentifier *)(*pcVar2)();
    return pFVar4;
  }
  pFVar1 = (param_3->AllocatorInstance).Data;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(pFVar1 + lVar7 + 8)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeIdentifier *)(*pcVar2)();
    return pFVar4;
  }
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            (__return_storage_ptr__,
             (FPCGDataTypeIdentifier *)(*(longlong *)(pFVar1 + lVar7) + (longlong)(int)uVar5 * 0x18)
            );
  return __return_storage_ptr__;
}

// InternalDataMatches @ 149f9cc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */

bool __cdecl
PCGDeterminismTests::InternalDataMatches
          (UPCGData *param_1,UPCGData *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  FPCGDataTypeBaseId *pFVar6;
  FPCGDataTypeIdentifier *pFVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  UPCGData *local_88;
  UPCGData *local_80;
  FPCGDataTypeIdentifier local_78;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId936,"PCGDeterminismTests::InternalDataMatches",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x3a8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId936);
  }
  plVar4 = (longlong *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
  plVar5 = (longlong *)(**(code **)(param_2->_padding_ + 0x2b8))(param_2);
  if ((*plVar4 != *plVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstData->GetDataTypeId() == SecondData->GetDataTypeId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x3aa,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar6 = (FPCGDataTypeBaseId *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
  pFVar7 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_78,pFVar6);
  GetDataCompareFunction
            ((TFunction<bool___cdecl(UPCGData_const_*,UPCGData_const_*)> *)local_58,pFVar7,
             OrderConsistent);
  local_88 = param_2;
  local_80 = param_1;
  UE::Core::Private::Function::CheckCallable(local_58[0]);
  pcVar1 = local_58[0];
  plVar4 = local_48;
  if (local_30 != (longlong *)0x0) {
    plVar4 = local_30;
  }
  uVar8 = (**(code **)(*plVar4 + 8))();
  uVar3 = (*pcVar1)(uVar8,&local_80,&local_88);
  if (local_58[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar3;
}

// LogInvalidTest @ 149f9cde0

/* WARNING: Removing unreachable block (ram,0x000149f9cee6) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl PCGDeterminismTests::LogInvalidTest(UPCGNode *param_1,FDeterminismTestResult *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  FString local_18;
  
  if (2 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  pTVar7 = &param_2->AdditionalDetails;
  ::FString::FString(&local_18,L"Invalid test");
  pFVar6 = (pTVar7->AllocatorInstance).Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar6 + (longlong)(param_2->AdditionalDetails).ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (param_2->AdditionalDetails).ArrayNum;
  piVar1 = &(param_2->AdditionalDetails).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar7->AllocatorInstance,piVar1);
  }
  (param_2->AdditionalDetails).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(FScriptContainerElement **)pFVar6 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar6 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar6 + 0xc) = local_18.Data.ArrayMax;
  return false;
}

// MetadataIsIdentical @ 149f9cf00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl PCGDeterminismTests::MetadataIsIdentical(UPCGMetadata *param_1,UPCGMetadata *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  FName *pFVar6;
  FPCGMetadataDomainID FVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  long64 lVar16;
  long64 lVar17;
  TQuat<double> *pTVar18;
  ulonglong uVar19;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_230;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_220;
  TArray<FName,TSizedDefaultAllocator<32>_> local_210;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_200;
  longlong local_1f0;
  longlong local_1e8;
  FName *local_1e0;
  FString local_1d8;
  FString local_1c8;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TRotator<double> local_188;
  TRotator<double> local_170;
  TVector4<double>_u_0 local_158;
  TVector4<double>_u_0 local_138;
  FName local_118;
  FPCGMetadataDomainID FStack_110;
  FPCGAttributeIdentifier local_f8;
  FName local_d8;
  FPCGMetadataDomainID FStack_d0;
  FPCGAttributeIdentifier local_b8;
  TQuat<double> local_98;
  TQuat<double> local_78;
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1313,"PCGDeterminismTests::MetadataIsIdentical",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x521);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1313);
  }
  if (((param_1 == (UPCGMetadata *)0x0) || (param_2 == (UPCGMetadata *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstMetadata && SecondMetadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x523,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  iVar11 = UPCGMetadata::GetAttributeCount(param_1);
  iVar12 = UPCGMetadata::GetAttributeCount(param_2);
  if (iVar11 == iVar12) {
    local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.ArrayNum = 0;
    local_230.ArrayMax = 0;
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 0;
    UPCGMetadata::GetAttributes(param_1,&local_230,&local_200);
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 0;
    UPCGMetadata::GetAttributes(param_2,&local_210,&local_220);
    uVar19 = (ulonglong)local_230.ArrayNum;
    local_res20 = local_230.ArrayNum;
    local_1e0 = (FName *)(local_230.AllocatorInstance.Data + uVar19 * 8);
    uVar21 = uVar19;
    FVar23.Data = local_230.AllocatorInstance.Data;
    while( true ) {
      pFVar6 = local_1e0;
      lVar22 = 0;
      if ((int)uVar19 != (int)uVar21) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if ((FName *)FVar23.Data == pFVar6) {
        bVar8 = true;
        goto LAB_149f9d4c8;
      }
      local_118 = *(FName *)FVar23.Data;
      FStack_110 = PCGMetadataDomainID::Default;
      FVar7 = FStack_110;
      FStack_110._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_f8.MetadataDomain.Flag = FStack_110.Flag;
      local_f8.MetadataDomain._1_3_ = FStack_110._1_3_;
      local_f8.MetadataDomain.CustomFlag = FStack_110.CustomFlag;
      local_f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_110 = FVar7;
      local_f8.Name = local_118;
      this = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
             UPCGMetadata::GetConstAttribute(param_1,&local_f8);
      local_d8 = *(FName *)FVar23.Data;
      FStack_d0 = PCGMetadataDomainID::Default;
      FVar7 = FStack_d0;
      FStack_d0._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_b8.MetadataDomain.Flag = FStack_d0.Flag;
      local_b8.MetadataDomain._1_3_ = FStack_d0._1_3_;
      local_b8.MetadataDomain.CustomFlag = FStack_d0.CustomFlag;
      local_b8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_d0 = FVar7;
      local_b8.Name = local_d8;
      this_00 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
                UPCGMetadata::GetConstAttribute(param_2,&local_b8);
      if ((this == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) ||
         (this_00 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0)) break;
      lVar16 = UPCGMetadata::GetItemCountForChild(param_1);
      if (0 < lVar16) {
        do {
          iVar11 = FPCGMetadataAttributeBase::GetValueKey
                             ((FPCGMetadataAttributeBase *)this_00,lVar22);
          iVar12 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,lVar22);
          if (iVar12 != iVar11) goto LAB_149f9d4c0;
          lVar22 = lVar22 + 1;
        } while (lVar22 < lVar16);
      }
      iVar11 = (**(code **)(*(longlong *)this + 0x48))(this);
      iVar12 = (**(code **)(*(longlong *)this_00 + 0x48))(this_00);
      if (iVar11 != iVar12) break;
      bVar8 = false;
      iVar12 = 0;
      if (0 < iVar11) {
        do {
          switch(*(undefined2 *)&this->field_0x70) {
          case 0:
            fVar25 = FPCGMetadataAttribute<float>::GetValue
                               ((FPCGMetadataAttribute<float> *)this,iVar12);
            fVar26 = FPCGMetadataAttribute<float>::GetValue
                               ((FPCGMetadataAttribute<float> *)this_00,iVar12);
            if (fVar25 == fVar26) {
              bVar8 = true;
            }
            else {
LAB_149f9d1a8:
              bVar8 = false;
            }
            break;
          case 1:
            dVar3 = FPCGMetadataAttribute<double>::GetValue
                              ((FPCGMetadataAttribute<double> *)this,iVar12);
            dVar4 = FPCGMetadataAttribute<double>::GetValue
                              ((FPCGMetadataAttribute<double> *)this_00,iVar12);
            if (dVar3 != dVar4) goto LAB_149f9d1a8;
            bVar8 = true;
            break;
          case 2:
            iVar14 = FPCGMetadataAttribute<int>::GetValue((FPCGMetadataAttribute<int> *)this,iVar12)
            ;
            iVar13 = FPCGMetadataAttribute<int>::GetValue
                               ((FPCGMetadataAttribute<int> *)this_00,iVar12);
            bVar8 = iVar14 == iVar13;
            break;
          case 3:
            lVar16 = FPCGMetadataAttribute<__int64>::GetValue
                               ((FPCGMetadataAttribute<__int64> *)this,iVar12);
            lVar17 = FPCGMetadataAttribute<__int64>::GetValue
                               ((FPCGMetadataAttribute<__int64> *)this_00,iVar12);
            bVar8 = lVar16 == lVar17;
            break;
          default:
            if (2 < (byte)LogPCG._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            }
            break;
          case 5:
            FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                      ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)this,
                       (TVector<double> *)&local_1b8._s_0,iVar12);
            FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                      ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)this_00,
                       (TVector<double> *)&local_1a0._s_0,iVar12);
            if (((local_1b8._s_0.X != local_1a0._s_0.X) || (local_1b8._s_0.Y != local_1a0._s_0.Y))
               || (local_1b8._s_0.Z != local_1a0._s_0.Z)) goto LAB_149f9d1a8;
            bVar8 = true;
            break;
          case 6:
            FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                      ((FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)this,
                       (TVector4<double> *)&local_158._s_0,iVar12);
            FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                      ((FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)this_00,
                       (TVector4<double> *)&local_138._s_0,iVar12);
            if ((((local_158._s_0.X != local_138._s_0.X) || (local_158._s_0.Y != local_138._s_0.Y))
                || (local_158._s_0.Z != local_138._s_0.Z)) || (local_158._s_0.W != local_138._s_0.W)
               ) goto LAB_149f9d1a8;
            bVar8 = true;
            break;
          case 7:
            FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue(this,&local_78,iVar12);
            pFVar20 = this_00;
            pTVar18 = FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue
                                (this_00,&local_98,iVar12);
            auVar2._8_4_ = (int)-(ulonglong)(local_98.W == local_78.W);
            auVar2._0_8_ = -(ulonglong)(local_98.Z == local_78.Z);
            auVar2._12_4_ = (int)(-(ulonglong)(local_98.W == local_78.W) >> 0x20);
            iVar14 = movmskpd((int)pFVar20,auVar2);
            auVar5._8_4_ = (int)-(ulonglong)(local_98.Y == local_78.Y);
            auVar5._0_8_ = -(ulonglong)(local_98.X == local_78.X);
            auVar5._12_4_ = (int)(-(ulonglong)(local_98.Y == local_78.Y) >> 0x20);
            uVar15 = movmskpd((int)pTVar18,auVar5);
            bVar8 = (iVar14 << 2 | uVar15) == 0xf;
            break;
          case 8:
            bVar8 = MetadataAttributesAreEqual<UE::Math::TTransform<double>_>
                              ((FPCGMetadataAttributeBase *)this,
                               (FPCGMetadataAttributeBase *)this_00,iVar12);
            break;
          case 9:
            FPCGMetadataAttribute<FString>::GetValue
                      ((FPCGMetadataAttribute<FString> *)this,&local_1c8,iVar12);
            FPCGMetadataAttribute<FString>::GetValue
                      ((FPCGMetadataAttribute<FString> *)this_00,&local_1d8,iVar12);
            iVar14 = local_1c8.Data.ArrayNum;
            if (iVar14 == local_1d8.Data.ArrayNum) {
              if (iVar14 < 2) {
                bVar8 = true;
              }
              else {
                iVar14 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)local_1c8.Data.AllocatorInstance.Data,
                                    (wchar_t *)local_1d8.Data.AllocatorInstance.Data);
                bVar8 = iVar14 == 0;
              }
            }
            else {
              bVar8 = iVar14 + local_1d8.Data.ArrayNum == 1;
            }
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            break;
          case 10:
            bVar8 = FPCGMetadataAttribute<bool>::GetValue
                              ((FPCGMetadataAttribute<bool> *)this,iVar12);
            bVar10 = FPCGMetadataAttribute<bool>::GetValue
                               ((FPCGMetadataAttribute<bool> *)this_00,iVar12);
            bVar8 = bVar10 == bVar8;
            break;
          case 0xb:
            FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                      ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)this,&local_188,iVar12)
            ;
            FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                      ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)this_00,&local_170,
                       iVar12);
            if (((local_188.Pitch != local_170.Pitch) || (local_188.Yaw != local_170.Yaw)) ||
               (local_188.Roll != local_170.Roll)) goto LAB_149f9d1a8;
            bVar8 = true;
            break;
          case 0xc:
            FPCGMetadataAttribute<FName>::GetValue
                      ((FPCGMetadataAttribute<FName> *)this,(int)&local_1e8);
            FPCGMetadataAttribute<FName>::GetValue
                      ((FPCGMetadataAttribute<FName> *)this_00,(int)&local_1f0);
            bVar8 = local_1e8 == local_1f0;
          }
          if (bVar8 == false) goto LAB_149f9d4c0;
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar11);
      }
      uVar19 = local_230._8_8_ & 0xffffffff;
      FVar23.Data = FVar23.Data + 8;
      uVar21 = (ulonglong)local_res20;
    }
LAB_149f9d4c0:
    bVar8 = false;
LAB_149f9d4c8:
    if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
    }
    if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.AllocatorInstance.Data);
    }
  }
  else {
    bVar8 = false;
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// ParamDataIsIdentical @ 149f9d590

bool __cdecl PCGDeterminismTests::ParamDataIsIdentical(UPCGData *param_1,UPCGData *param_2)

{
  bool bVar1;
  UPCGParamData *pUVar2;
  UPCGParamData *pUVar3;
  
  pUVar2 = CastChecked<UPCGParamData_const_,UPCGData_const_>(param_1);
  pUVar3 = CastChecked<UPCGParamData_const_,UPCGData_const_>(param_2);
  bVar1 = MetadataIsIdentical((UPCGMetadata *)pUVar2->_padding_,(UPCGMetadata *)pUVar3->_padding_);
  return bVar1;
}

// PointDataIsConsistent @ 149f9d5d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl PCGDeterminismTests::PointDataIsConsistent(UPCGData *param_1,UPCGData *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UPCGPointData *pUVar6;
  UPCGPointData *pUVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar6 = CastChecked<UPCGPointData_const_,UPCGData_const_>(param_1);
  pUVar7 = CastChecked<UPCGPointData_const_,UPCGData_const_>(param_2);
  iVar9 = (pUVar6->Points).ArrayNum;
  if (iVar9 != (pUVar7->Points).ArrayNum) {
    return false;
  }
  if (iVar9 == 0) {
    return true;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_38,(pUVar6->Points).ArrayNum,Default);
  uVar10 = 0;
  if (0 < (pUVar6->Points).ArrayNum) {
    local_res18 = 0;
    do {
      iVar9 = (pUVar7->Points).ArrayNum;
      uVar8 = 0;
      if (iVar9 < 1) {
LAB_149f9d74f:
        bVar3 = false;
        goto LAB_149f9d7c0;
      }
      while( true ) {
        uVar5 = 0;
        if ((int)uVar8 < iVar9) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar1 = (pUVar7->Points).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar10 < (pUVar6->Points).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        bVar3 = PCGTestsCommon::PointsAreIdentical
                          ((FPCGPoint *)
                           ((pUVar6->Points).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xd0),
                           (FPCGPoint *)(pFVar1 + (longlong)(int)uVar8 * 0xd0));
        if (bVar3) break;
        iVar9 = (pUVar7->Points).ArrayNum;
        uVar8 = uVar8 + 1;
        if (iVar9 <= (int)uVar8) goto LAB_149f9d74f;
      }
      uVar5 = 0;
      if ((int)uVar10 < local_38.ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      iVar9 = uVar8 - uVar10;
      uVar10 = uVar10 + 1;
      *(int *)(local_38.AllocatorInstance.Data + local_res18) = iVar9;
      local_res18 = local_res18 + 4;
    } while ((int)uVar10 < (pUVar6->Points).ArrayNum);
  }
  bVar3 = true;
LAB_149f9d7c0:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar3;
}

// PointDataIsIdentical @ 149f9d800

bool __cdecl PCGDeterminismTests::PointDataIsIdentical(UPCGData *param_1,UPCGData *param_2)

{
  code *pcVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  UPCGBasePointData *pUVar10;
  UPCGBasePointData *pUVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  double *pdVar16;
  bool bVar17;
  double dVar18;
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  longlong local_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  longlong local_190;
  int local_188;
  int local_184;
  int local_180;
  longlong local_178;
  int local_170;
  int local_16c;
  int local_168;
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  longlong local_118;
  int local_110;
  int local_10c;
  int local_108;
  longlong local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1005,"PCGDeterminismTests::PointDataIsIdentical",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x3ed);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1005);
  }
  pUVar10 = CastChecked<UPCGBasePointData_const_,UPCGData_const_>(param_1);
  pUVar11 = CastChecked<UPCGBasePointData_const_,UPCGData_const_>(param_2);
  bVar5 = SpatialBasicsAreIdentical((UPCGData *)pUVar10,(UPCGData *)pUVar11);
  if (bVar5) {
    pcVar1 = *(code **)(pUVar10->_padding_ + 0x488);
    iVar7 = (**(code **)(pUVar11->_padding_ + 0x488))(pUVar11);
    iVar8 = (*pcVar1)(pUVar10);
    if (iVar8 == iVar7) {
      (**(code **)(pUVar10->_padding_ + 0x528))(pUVar10,&local_1d8);
      (**(code **)(pUVar11->_padding_ + 0x528))(pUVar11,&local_1a8);
      if ((local_1c8 != local_198) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FirstRange.Num() == SecondRange.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                             ,0x3de,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar2 = __real_322bcc77;
      uVar13 = 0;
      if (0 < local_1c8) {
        do {
          uVar14 = 0;
          if ((int)uVar13 < local_198) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          pfVar15 = (float *)((longlong)((int)uVar13 % local_19c) * (longlong)local_1a0 + local_1a8)
          ;
          uVar14 = 0;
          if ((int)uVar13 < local_1c8) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          if (fVar2 < (float)((uint)(*(float *)((longlong)((int)uVar13 % local_1cc) *
                                                (longlong)local_1d0 + local_1d8) - *pfVar15) & uVar4
                             )) goto LAB_149f9dff9;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < local_1c8);
      }
      (**(code **)(pUVar10->_padding_ + 0x508))(pUVar10,&local_1c0);
      (**(code **)(pUVar11->_padding_ + 0x508))(pUVar11,&local_190);
      if ((local_1b0 != local_180) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FirstRange.Num() == SecondRange.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                             ,0x3de,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      uVar13 = 0;
      if (0 < local_1b0) {
        do {
          uVar14 = 0;
          if ((int)uVar13 < local_180) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          pfVar15 = (float *)((longlong)((int)uVar13 % local_184) * (longlong)local_188 + local_190)
          ;
          uVar14 = 0;
          if ((int)uVar13 < local_1b0) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          if (fVar2 < (float)((uint)(*(float *)((longlong)((int)uVar13 % local_1b4) *
                                                (longlong)local_1b8 + local_1c0) - *pfVar15) & uVar4
                             )) goto LAB_149f9dff9;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < local_1b0);
      }
      (**(code **)(pUVar10->_padding_ + 0x510))(pUVar10,&local_178);
      (**(code **)(pUVar11->_padding_ + 0x510))(pUVar11,&local_118);
      if ((local_168 != local_108) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FirstRange.Num() == SecondRange.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                             ,0x3de,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar3 = __real_3e45798ee2308c3a;
      uVar14 = 0;
      if (0 < local_168) {
        do {
          uVar9 = 0;
          if ((int)uVar14 < local_108) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          pdVar16 = (double *)
                    ((longlong)((int)uVar14 % local_10c) * (longlong)local_110 + local_118);
          uVar9 = 0;
          if ((int)uVar14 < local_168) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          lVar12 = (longlong)((int)uVar14 % local_16c) * (longlong)local_170;
          dVar18 = *(double *)(lVar12 + local_178) - *pdVar16;
          if (((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                         SUB84(dVar18,0) & uVar4)) ||
              (dVar18 = *(double *)(lVar12 + 8 + local_178) - pdVar16[1],
              dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                       SUB84(dVar18,0) & uVar4))) ||
             (dVar18 = *(double *)(lVar12 + 0x10 + local_178) - pdVar16[2],
             dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                      SUB84(dVar18,0) & uVar4))) goto LAB_149f9dff9;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < local_168);
      }
      (**(code **)(pUVar10->_padding_ + 0x518))(pUVar10,&local_148);
      (**(code **)(pUVar11->_padding_ + 0x518))(pUVar11,&local_e8);
      if ((local_138 != local_d8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FirstRange.Num() == SecondRange.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                             ,0x3de,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      uVar14 = 0;
      if (0 < local_138) {
        do {
          uVar9 = 0;
          if ((int)uVar14 < local_d8) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          pdVar16 = (double *)((longlong)((int)uVar14 % local_dc) * (longlong)local_e0 + local_e8);
          uVar9 = 0;
          if ((int)uVar14 < local_138) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          lVar12 = (longlong)((int)uVar14 % local_13c) * (longlong)local_140;
          dVar18 = *(double *)(lVar12 + local_148) - *pdVar16;
          if (((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                         SUB84(dVar18,0) & uVar4)) ||
              (dVar18 = *(double *)(lVar12 + 8 + local_148) - pdVar16[1],
              dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                       SUB84(dVar18,0) & uVar4))) ||
             (dVar18 = *(double *)(lVar12 + 0x10 + local_148) - pdVar16[2],
             dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                      SUB84(dVar18,0) & uVar4))) goto LAB_149f9dff9;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < local_138);
      }
      (**(code **)(pUVar10->_padding_ + 0x520))(pUVar10,&local_b8);
      (**(code **)(pUVar11->_padding_ + 0x520))(pUVar11,&local_78);
      if ((local_a8 != local_68) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FirstRange.Num() == SecondRange.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                             ,0x3de,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      uVar14 = 0;
      if (0 < local_a8) {
        do {
          uVar9 = 0;
          if ((int)uVar14 < local_68) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          pdVar16 = (double *)((longlong)((int)uVar14 % local_6c) * (longlong)local_70 + local_78);
          uVar9 = 0;
          if ((int)uVar14 < local_a8) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          lVar12 = (longlong)((int)uVar14 % local_ac) * (longlong)local_b0;
          dVar18 = *(double *)(lVar12 + local_b8) - *pdVar16;
          if ((((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                          SUB84(dVar18,0) & uVar4)) ||
               (dVar18 = *(double *)(lVar12 + 8 + local_b8) - pdVar16[1],
               dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                        SUB84(dVar18,0) & uVar4))) ||
              (dVar18 = *(double *)(lVar12 + 0x10 + local_b8) - pdVar16[2],
              dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                       SUB84(dVar18,0) & uVar4))) ||
             (dVar18 = *(double *)(lVar12 + 0x18 + local_b8) - pdVar16[3],
             dVar3 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar13,
                                      SUB84(dVar18,0) & uVar4))) goto LAB_149f9dff9;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < local_a8);
      }
      bVar5 = CompareProperty<1>(pUVar10,pUVar11);
      if (bVar5) {
        bVar5 = true;
        goto LAB_149f9dffc;
      }
    }
  }
LAB_149f9dff9:
  bVar5 = false;
LAB_149f9dffc:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// PointDataIsOrthogonal @ 149f9e060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl PCGDeterminismTests::PointDataIsOrthogonal(UPCGData *param_1,UPCGData *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  UPCGPointData *pUVar6;
  UPCGPointData *pUVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  undefined1 local_188 [4];
  uint local_184;
  uint local_180 [2];
  uint local_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_170;
  undefined4 local_168;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  longlong *local_118;
  uint uStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pUVar6 = CastChecked<UPCGPointData_const_,UPCGData_const_>(param_1);
  pUVar7 = CastChecked<UPCGPointData_const_,UPCGData_const_>(param_2);
  if ((pUVar6->Points).ArrayNum != (pUVar7->Points).ArrayNum) {
    return false;
  }
  uVar15 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = -1;
  uVar12 = (pUVar7->Points).ArrayNum;
  uVar11 = uVar15;
  if (uVar12 == 0) goto LAB_149f9e30e;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_158 = (undefined4)lVar10;
    uVar12 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 == 0) || ((int)local_50 < (int)uVar12)) {
    local_50 = uVar12;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar12 != 0) {
      uVar14 = uVar12;
      if (uVar12 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar14 = 0;
          goto LAB_149f9e170;
        }
      }
      else {
LAB_149f9e170:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar14,4);
      }
      if (0 < (int)uVar12) {
        uVar16 = (ulonglong)uVar12;
        uVar11 = uVar15;
        do {
          FVar9.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar9.Data = local_58.Data;
          }
          uVar8 = uVar11 & (longlong)(int)uVar12 - 1U;
          uVar11 = uVar11 + 1;
          *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    if (local_50 != 0) {
      uVar11 = (ulonglong)local_70;
      pTStack_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_178 = 0;
      uStack_174 = 1;
      uStack_164 = 0;
      uStack_160 = 0;
      uVar16 = uVar15;
      if (local_70 != 0) {
        FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar17 = local_78;
        }
        uVar12 = *(uint *)FVar17;
        uVar8 = uVar15;
        while (uVar12 == 0) {
          uStack_160 = (int)uVar8 + 0x20;
          uVar8 = (ulonglong)uStack_160;
          iVar13 = (int)uVar16;
          local_178 = iVar13 + 1;
          uVar16 = (ulonglong)local_178;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_178)
          goto LAB_149f9e273;
          uVar12 = ((uint *)((longlong)FVar17 + 4))[iVar13];
        }
        uStack_174 = -uVar12 & uVar12;
        uVar16 = (ulonglong)uStack_174 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_154 = (int)lVar10;
        uStack_164 = local_154 + -1 + uStack_160;
        uVar16 = (ulonglong)uStack_164;
        if ((int)local_70 < (int)uStack_164) {
LAB_149f9e273:
          uVar16 = (ulonglong)local_70;
          uStack_164 = local_70;
        }
      }
      local_168 = 0xffffffff;
      local_140 = (longlong *)local_98;
      local_138._padding_ = CONCAT44(uStack_174,local_178);
      local_138.CurrentBitIndex = uStack_164;
      local_138.UnvisitedBitMask = 0xffffffff;
      local_138._28_4_ = uStack_15c;
      local_138.BaseBitIndex = uStack_160;
      local_138.Array = pTStack_170;
      if ((int)local_70 <= (int)uVar16) goto LAB_149f9e30e;
      do {
        iVar13 = (int)uVar16;
        uVar12 = local_50 - 1 & *(uint *)(*local_140 + (longlong)iVar13 * 0xc);
        lVar10 = *local_140 + (longlong)iVar13 * 0xc;
        *(uint *)(lVar10 + 8) = uVar12;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar10 + 4) = *(undefined4 *)(FVar9.Data + uVar11 * 4);
        *(int *)(FVar9.Data + uVar11 * 4) = iVar13;
        local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
        uVar16 = (ulonglong)(uint)local_138.CurrentBitIndex;
      } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
    }
  }
  uVar11 = (ulonglong)local_70;
LAB_149f9e30e:
  local_184 = 0;
  uVar16 = uVar15;
  if (0 < (pUVar7->Points).ArrayNum) {
    do {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_150,
                 (bool *)&local_184);
      local_184 = (int)uVar16 + 1;
      uVar16 = (ulonglong)local_184;
    } while ((int)local_184 < (pUVar7->Points).ArrayNum);
    uVar11 = (ulonglong)local_70;
  }
  if ((pUVar6->Points).ArrayNum < 1) {
LAB_149f9e661:
    bVar4 = true;
LAB_149f9e663:
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    return bVar4;
  }
  do {
    uStack_110 = 0;
    uStack_10c = 1;
    uVar12 = (uint)uVar11;
    uStack_fc = uStack_110;
    local_f8 = uStack_110;
    if (uVar12 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar14 = *(uint *)FVar17;
      while (uVar14 == 0) {
        lVar10 = (longlong)(int)uStack_110;
        local_f8 = local_f8 + 0x20;
        uStack_110 = uStack_110 + 1;
        uStack_fc = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_110)
        goto LAB_149f9e3f1;
        uVar14 = ((uint *)((longlong)FVar17 + 4))[lVar10];
      }
      uStack_10c = -uVar14 & uVar14;
      uVar16 = (ulonglong)uStack_10c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_14c = (int)lVar10;
      uStack_fc = local_14c + -1 + local_f8;
      if ((int)uVar12 < (int)uStack_fc) {
        uStack_fc = uVar12;
      }
    }
LAB_149f9e3f1:
    local_118 = (longlong *)local_98;
    uStack_f4 = local_9c;
    local_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar14 = uVar12 & 0xffffffe0;
    iStack_f0 = local_98._8_4_ - local_64;
    TStack_e0._padding_ = CONCAT44(uStack_10c,uStack_110);
    uStack_100 = 0xffffffff;
    TStack_e0.CurrentBitIndex = uStack_fc;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_e0._28_4_ = local_9c;
    TStack_e0.BaseBitIndex = local_f8;
    uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
    uVar18 = uVar12;
    local_e8 = local_118;
    TStack_e0.Array = local_108;
    if (((int)uVar12 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), uVar18 = local_70, bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (uVar12 != uVar18) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar12 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_149f9e4f1;
        uVar12 = ((uint *)((longlong)FVar17 + 4))[lVar10];
      }
      uVar11 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_148 = (int)lVar10;
      uVar12 = local_148 + -1 + uVar14;
      if ((int)uVar18 < (int)uVar12) {
        uVar12 = uVar18;
      }
    }
LAB_149f9e4f1:
    while( true ) {
      plVar3 = local_e8;
      if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
        local_188[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
      }
      if (((TStack_e0.CurrentBitIndex == uVar12) &&
          (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar3 == (longlong *)local_98)) {
        bVar4 = false;
        goto LAB_149f9e663;
      }
      iVar13 = (pUVar7->Points).ArrayNum;
      uVar14 = *(uint *)(*plVar3 + (longlong)TStack_e0.CurrentBitIndex * 0xc);
      uVar18 = 0;
      if ((int)uVar14 < iVar13) {
        uVar18 = ~uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_198 = (longlong)(int)uVar14, local_190 = (longlong)iVar13,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar13 = (pUVar6->Points).ArrayNum;
      uVar19 = (uint)uVar15;
      pFVar1 = (pUVar7->Points).AllocatorInstance.Data;
      uVar18 = 0;
      if ((int)uVar19 < iVar13) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if (uVar18 == 0) {
        local_198 = (longlong)(int)uVar19;
        local_190 = (longlong)iVar13;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      bVar4 = PCGTestsCommon::PointsAreIdentical
                        ((FPCGPoint *)
                         ((pUVar6->Points).AllocatorInstance.Data + (longlong)(int)uVar19 * 0xd0),
                         (FPCGPoint *)(pFVar1 + (longlong)(int)uVar14 * 0xd0));
      if (bVar4) break;
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
    local_180[0] = uVar14;
    if (local_98._8_4_ != local_64) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,uVar14,
                 (int *)local_180);
    }
    uVar15 = (ulonglong)(uVar19 + 1);
    if ((pUVar6->Points).ArrayNum <= (int)(uVar19 + 1)) goto LAB_149f9e661;
    uVar11 = (ulonglong)local_70;
  } while( true );
}

// PolyLineDataIsIdentical @ 149f9e6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl PCGDeterminismTests::PolyLineDataIsIdentical(UPCGData *param_1,UPCGData *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  int iVar15;
  int iVar16;
  UPCGPolyLineData *pUVar17;
  UPCGPolyLineData *pUVar18;
  double *pdVar19;
  double *pdVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  UPCGPolyLineData *pUVar24;
  int iVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_128 [96];
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar17 = CastChecked<UPCGPolyLineData_const_,UPCGData_const_>(param_1);
  pUVar18 = CastChecked<UPCGPolyLineData_const_,UPCGData_const_>(param_2);
  iVar15 = (**(code **)(*(longlong *)pUVar17 + 0x4a0))(pUVar17);
  dVar14 = __real_3f1a36e2e0000000;
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar25 = 0;
  if (0 < iVar15) {
    do {
      pcVar1 = *(code **)(*(longlong *)pUVar18 + 0x4b0);
      dVar28 = (double)(**(code **)(*(longlong *)pUVar17 + 0x4b0))(pUVar17,iVar25);
      dVar27 = (double)(*pcVar1)(pUVar18,iVar25);
      if (dVar28 != dVar27) {
        return false;
      }
      local_140 = 0;
      local_148 = 1;
      pdVar19 = (double *)(**(code **)(*(longlong *)pUVar17 + 0x4d0))(pUVar17,local_128,iVar25,0);
      local_140 = 0;
      local_148 = 1;
      pUVar24 = pUVar18;
      pdVar20 = (double *)(**(code **)(*(longlong *)pUVar18 + 0x4d0))(pUVar18,local_c8,iVar25,0);
      lVar26 = -(ulonglong)
                (dVar14 < (double)CONCAT44((uint)((ulonglong)(pdVar19[7] - pdVar20[7]) >> 0x20) &
                                           uVar13,SUB84(pdVar19[7] - pdVar20[7],0) & uVar12));
      auVar2._8_4_ = (int)lVar26;
      auVar2._0_8_ = -(ulonglong)
                      (dVar14 < (double)CONCAT44((uint)((ulonglong)(pdVar19[6] - pdVar20[6]) >> 0x20
                                                       ) & uVar11,
                                                 SUB84(pdVar19[6] - pdVar20[6],0) & uVar10));
      auVar2._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar21 = movmskpd((int)pUVar24,auVar2);
      lVar26 = -(ulonglong)
                (dVar14 < (double)CONCAT44((uint)((ulonglong)(pdVar19[5] - pdVar20[5]) >> 0x20) &
                                           uVar13,SUB84(pdVar19[5] - pdVar20[5],0) & uVar12));
      auVar7._8_4_ = (int)lVar26;
      auVar7._0_8_ = -(ulonglong)
                      (dVar14 < (double)CONCAT44((uint)((ulonglong)(pdVar19[4] - pdVar20[4]) >> 0x20
                                                       ) & uVar11,
                                                 SUB84(pdVar19[4] - pdVar20[4],0) & uVar10));
      auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      iVar16 = movmskpd((int)pdVar20,auVar7);
      if ((uVar21 & 0x3fffffff) != 0 || iVar16 != 0) {
        return false;
      }
      dVar27 = pdVar19[2] - pdVar20[2];
      dVar28 = pdVar19[3] - pdVar20[3];
      dVar33 = pdVar19[2] + pdVar20[2];
      dVar34 = pdVar19[3] + pdVar20[3];
      dVar29 = *pdVar19 - *pdVar20;
      dVar30 = pdVar19[1] - pdVar20[1];
      dVar31 = *pdVar19 + *pdVar20;
      dVar32 = pdVar19[1] + pdVar20[1];
      lVar26 = -(ulonglong)
                (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar13,
                                           SUB84(dVar28,0) & uVar12));
      auVar3._8_4_ = (int)lVar26;
      auVar3._0_8_ = -(ulonglong)
                      (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar11,
                                                 SUB84(dVar27,0) & uVar10));
      auVar3._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      iVar22 = movmskpd(0,auVar3);
      lVar26 = -(ulonglong)
                (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                           SUB84(dVar30,0) & uVar12));
      auVar4._8_4_ = (int)lVar26;
      auVar4._0_8_ = -(ulonglong)
                      (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar11,
                                                 SUB84(dVar29,0) & uVar10));
      auVar4._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar21 = movmskpd(iVar16,auVar4);
      uVar23 = iVar22 << 2 | uVar21;
      if (uVar23 != 0) {
        lVar26 = -(ulonglong)
                  (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar13,
                                             SUB84(dVar34,0) & uVar12));
        auVar5._8_4_ = (int)lVar26;
        auVar5._0_8_ = -(ulonglong)
                        (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar11,
                                                   SUB84(dVar33,0) & uVar10));
        auVar5._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        uVar23 = movmskpd(uVar23,auVar5);
        lVar26 = -(ulonglong)
                  (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar13,
                                             SUB84(dVar32,0) & uVar12));
        auVar8._8_4_ = (int)lVar26;
        auVar8._0_8_ = -(ulonglong)
                        (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar11,
                                                   SUB84(dVar31,0) & uVar10));
        auVar8._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        uVar21 = movmskpd(uVar21,auVar8);
        if ((uVar23 & 0x3fffffff) != 0 || uVar21 != 0) {
          return false;
        }
      }
      lVar26 = -(ulonglong)
                (dVar14 < (double)CONCAT44((uint)((ulonglong)(pdVar19[0xb] - pdVar20[0xb]) >> 0x20)
                                           & uVar13,SUB84(pdVar19[0xb] - pdVar20[0xb],0) & uVar12));
      auVar6._8_4_ = (int)lVar26;
      auVar6._0_8_ = -(ulonglong)
                      (dVar14 < (double)CONCAT44((uint)((ulonglong)(pdVar19[10] - pdVar20[10]) >>
                                                       0x20) & uVar11,
                                                 SUB84(pdVar19[10] - pdVar20[10],0) & uVar10));
      auVar6._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar23 = movmskpd(0,auVar6);
      lVar26 = -(ulonglong)
                (dVar14 < (double)CONCAT44((uint)((ulonglong)(pdVar19[9] - pdVar20[9]) >> 0x20) &
                                           uVar13,SUB84(pdVar19[9] - pdVar20[9],0) & uVar12));
      auVar9._8_4_ = (int)lVar26;
      auVar9._0_8_ = -(ulonglong)
                      (dVar14 < (double)CONCAT44((uint)((ulonglong)(pdVar19[8] - pdVar20[8]) >> 0x20
                                                       ) & uVar11,
                                                 SUB84(pdVar19[8] - pdVar20[8],0) & uVar10));
      auVar9._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      iVar16 = movmskpd(uVar21,auVar9);
      if ((uVar23 & 0x3fffffff) != 0 || iVar16 != 0) {
        return false;
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar15);
  }
  return true;
}

// PrimitiveDataIsIdentical @ 149f9e910

bool __cdecl PCGDeterminismTests::PrimitiveDataIsIdentical(UPCGData *param_1,UPCGData *param_2)

{
  UPCGPrimitiveData *pUVar1;
  UPCGPrimitiveData *pUVar2;
  
  pUVar1 = CastChecked<UPCGPrimitiveData_const_,UPCGData_const_>(param_1);
  pUVar2 = CastChecked<UPCGPrimitiveData_const_,UPCGData_const_>(param_2);
  if ((((pUVar2->VoxelSize).field0_0x0._s_0.X == (pUVar1->VoxelSize).field0_0x0._s_0.X) &&
      ((pUVar2->VoxelSize).field0_0x0._s_0.Y == (pUVar1->VoxelSize).field0_0x0._s_0.Y)) &&
     ((pUVar2->VoxelSize).field0_0x0._s_0.Z == (pUVar1->VoxelSize).field0_0x0._s_0.Z)) {
    return true;
  }
  return false;
}

// RetrieveBaseOptionsPerPin @ 149f9eb40

void __cdecl
PCGDeterminismTests::RetrieveBaseOptionsPerPin
          (TArray<TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_> *param_2,
          FPCGDataTypeIdentifier *param_3,int param_4)

{
  longlong lVar1;
  FPCGDataTypeBaseId *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> local_98;
  FPCGDataTypeIdentifier local_88;
  FPCGDataTypeIdentifier local_70;
  FPCGDataTypeIdentifier local_58;
  ulonglong uVar11;
  
  DestructItems<TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *)
             (param_1->AllocatorInstance).Data,param_1->ArrayNum);
  uVar9 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  iVar7 = param_2->ArrayNum;
  uVar11 = uVar9;
  if (0 < iVar7) {
    do {
      uVar10 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((param_2->AllocatorInstance).Data + uVar9);
      local_88.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = *(int *)(lVar1 + 0x60);
      pFVar2 = *(FPCGDataTypeBaseId **)(lVar1 + 0x58);
      local_88.Ids.ArrayNum = iVar7;
      if (iVar7 == 0) {
        local_88.Ids.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar7,0,(ForAnyElementType *)&local_88,iVar7,&local_88.Ids.ArrayMax);
        ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                  (local_88.Ids.AllocatorInstance.Data,pFVar2,iVar7);
      }
      iVar7 = local_88.Ids.ArrayNum;
      FVar4.Data = local_88.Ids.AllocatorInstance.Data;
      local_88.CustomSubtype = *(int *)(lVar1 + 0x68);
      local_70.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Ids.ArrayNum = local_88.Ids.ArrayNum;
      if (local_88.Ids.ArrayNum == 0) {
        local_70.Ids.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_88.Ids.ArrayNum,0,(ForAnyElementType *)&local_70,local_88.Ids.ArrayNum,
                   &local_70.Ids.ArrayMax);
        ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                  (local_70.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar4.Data,iVar7);
      }
      local_70.CustomSubtype = local_88.CustomSubtype;
      bVar5 = DataTypeIsComparable(&local_70);
      iVar7 = local_88.Ids.ArrayNum;
      FVar4.Data = local_88.Ids.AllocatorInstance.Data;
      if (bVar5) {
        local_58.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Ids.ArrayNum = local_88.Ids.ArrayNum;
        if (local_88.Ids.ArrayNum == 0) {
          local_58.Ids.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_88.Ids.ArrayNum,0,(ForAnyElementType *)&local_58,
                     local_88.Ids.ArrayNum,&local_58.Ids.ArrayMax);
          ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                    (local_58.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar4.Data,iVar7);
        }
        local_58.CustomSubtype = local_88.CustomSubtype;
        FilterTestableDataTypes(&local_98,&local_58,param_4);
        iVar7 = 0;
        if (local_98.ArrayNum != 0) {
          iVar7 = param_1->ArrayNum;
          if (iVar7 == param_1->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          FVar4.Data = local_98.AllocatorInstance.Data;
          pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          param_1->ArrayNum = iVar7 + 1;
          *(undefined8 *)&pFVar8->field_0x0 = 0;
          iVar7 = local_98.ArrayNum;
          *(int *)&pFVar8[8].field_0x0 = iVar7;
          if (iVar7 == 0) {
            *(int *)(pFVar8 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar7,0,(ForAnyElementType *)pFVar8,iVar7,(int *)(pFVar8 + 0xc));
            ConstructItems<FPCGDataTypeIdentifier,FPCGDataTypeIdentifier,int>
                      (*(void **)&pFVar8->field_0x0,(FPCGDataTypeIdentifier *)FVar4.Data,iVar7);
          }
          FPCGDataTypeIdentifier::operator|=(param_3,&local_88);
          iVar7 = local_98.ArrayNum;
        }
        DestructItems<FPCGDataTypeIdentifier,int>
                  ((FPCGDataTypeIdentifier *)local_98.AllocatorInstance.Data,iVar7);
        if ((FPCGDataTypeIdentifier *)local_98.AllocatorInstance.Data !=
            (FPCGDataTypeIdentifier *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
      }
      if (local_88.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Ids.AllocatorInstance.Data);
      }
      uVar9 = uVar9 + 8;
      iVar7 = param_2->ArrayNum;
      uVar11 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < iVar7);
  }
  return;
}

// RunBasicCopiedSelfTest @ 149f9ee50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __cdecl PCGDeterminismTests::RunBasicCopiedSelfTest(FNodeAndOptions *param_1)

{
  UPCGNode *this;
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  UPCGSettings *pUVar4;
  FPCGDataTypeIdentifier *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UClass *local_res8;
  FPCGDataTypeIdentifier local_1a8;
  FPCGDataTypeIdentifier local_190;
  FPCGDataTypeIdentifier local_178;
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  FTestData local_148;
  FTestData local_b8;
  
  this = param_1->PCGNode;
  local_res8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar4 = UPCGNode::GetSettings(this);
  PCGTestsCommon::FTestData::FTestData
            (&local_b8,param_1->Seed,pUVar4,(TSubclassOf<AActor>)&local_res8);
  local_res8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar4 = UPCGNode::GetSettings(this);
  PCGTestsCommon::FTestData::FTestData
            (&local_148,param_1->Seed,pUVar4,(TSubclassOf<AActor>)&local_res8);
  iVar3 = GetNumPermutations(&param_1->BaseOptionsByPin);
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      iVar7 = 0;
      pUVar4 = UPCGNode::GetSettings(this);
      PCGTestsCommon::FTestData::Reset(&local_b8,pUVar4);
      pUVar4 = UPCGNode::GetSettings(this);
      PCGTestsCommon::FTestData::Reset(&local_148,pUVar4);
      if (0 < (param_1->BaseOptionsByPin).ArrayNum) {
        do {
          GetPermutation(&local_178,iVar8,iVar7,&param_1->BaseOptionsByPin);
          FVar1.Data = local_178.Ids.AllocatorInstance.Data;
          local_1a8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = local_178.Ids.ArrayNum;
          local_1a8.Ids.ArrayNum = iVar6;
          if (iVar6 == 0) {
            local_1a8.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,0,(ForAnyElementType *)&local_1a8,iVar6,&local_1a8.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_1a8.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar1.Data,iVar6);
          }
          local_1a8.CustomSubtype = local_178.CustomSubtype;
          pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,Point);
          bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_1a8,pFVar5);
          if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Ids.AllocatorInstance.Data);
          }
          if (bVar2) {
            AddRandomizedMultiplePointInputData(&local_b8,100,&Defaults::TestPinName);
          }
          else {
            pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,Volume);
            bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_1a8,pFVar5);
            if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Ids.AllocatorInstance.Data);
            }
            if (bVar2) {
              AddRandomizedVolumeInputData(&local_b8,&Defaults::TestPinName);
            }
            else {
              pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,PolyLine);
              bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_1a8,pFVar5);
              if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_190.Ids.AllocatorInstance.Data);
              }
              if (bVar2) {
                AddRandomizedPolyLineInputData(&local_b8,6,&Defaults::TestPinName);
              }
              else {
                pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,Primitive);
                bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_1a8,pFVar5);
                if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_190.Ids.AllocatorInstance.Data);
                }
                if (bVar2) {
                  AddRandomizedPrimitiveInputData(&local_b8,&Defaults::TestPinName);
                }
                else {
                  bVar2 = FPCGDataTypeIdentifier::operator==(&local_1a8,Surface);
                  if ((((!bVar2) &&
                       (bVar2 = FPCGDataTypeIdentifier::operator==(&local_1a8,Landscape), !bVar2))
                      && (bVar2 = FPCGDataTypeIdentifier::IsValid(&local_1a8), bVar2)) &&
                     (1 < (byte)LogPCG._0_1_)) {
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  }
                }
              }
            }
          }
          if (local_1a8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Ids.AllocatorInstance.Data);
          }
          FVar1.Data = local_178.Ids.AllocatorInstance.Data;
          local_1a8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = local_178.Ids.ArrayNum;
          local_1a8.Ids.ArrayNum = iVar6;
          if (iVar6 == 0) {
            local_1a8.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,0,(ForAnyElementType *)&local_1a8,iVar6,&local_1a8.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_1a8.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar1.Data,iVar6);
          }
          local_1a8.CustomSubtype = local_178.CustomSubtype;
          pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,Point);
          bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_1a8,pFVar5);
          if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Ids.AllocatorInstance.Data);
          }
          if (bVar2) {
            AddRandomizedMultiplePointInputData(&local_148,100,&Defaults::TestPinName);
          }
          else {
            pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,Volume);
            bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_1a8,pFVar5);
            if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Ids.AllocatorInstance.Data);
            }
            if (bVar2) {
              AddRandomizedVolumeInputData(&local_148,&Defaults::TestPinName);
            }
            else {
              pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,PolyLine);
              bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_1a8,pFVar5);
              if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_190.Ids.AllocatorInstance.Data);
              }
              if (bVar2) {
                AddRandomizedPolyLineInputData(&local_148,6,&Defaults::TestPinName);
              }
              else {
                pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_190,Primitive);
                bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_1a8,pFVar5);
                if (local_190.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_190.Ids.AllocatorInstance.Data);
                }
                if (bVar2) {
                  AddRandomizedPrimitiveInputData(&local_148,&Defaults::TestPinName);
                }
                else {
                  bVar2 = FPCGDataTypeIdentifier::operator==(&local_1a8,Surface);
                  if (((!bVar2) &&
                      (bVar2 = FPCGDataTypeIdentifier::operator==(&local_1a8,Landscape), !bVar2)) &&
                     ((bVar2 = FPCGDataTypeIdentifier::IsValid(&local_1a8), bVar2 &&
                      (1 < (byte)LogPCG._0_1_)))) {
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  }
                }
              }
            }
          }
          if (local_1a8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Ids.AllocatorInstance.Data);
          }
          if (local_178.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Ids.AllocatorInstance.Data);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (param_1->BaseOptionsByPin).ArrayNum);
      }
      ExecuteWithTestData(&local_b8,this);
      ExecuteWithTestData(&local_148,this);
      local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.ArrayNum = 0;
      local_160.ArrayMax = 0;
      bVar2 = DataCollectionsMatch(&local_b8.OutputData,&local_148.OutputData,&local_160);
      if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
      if (!bVar2) {
        bVar2 = false;
        goto LAB_149f9f3b2;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  bVar2 = true;
LAB_149f9f3b2:
  PCGTestsCommon::FTestData::~FTestData(&local_148);
  PCGTestsCommon::FTestData::~FTestData(&local_b8);
  return bVar2;
}

// RunBasicSelfTest @ 149f9f400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __cdecl PCGDeterminismTests::RunBasicSelfTest(FNodeAndOptions *param_1)

{
  UPCGNode *this;
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  UPCGSettings *pUVar4;
  FPCGDataTypeIdentifier *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UClass *local_res8;
  FPCGDataTypeIdentifier local_108;
  FPCGDataTypeIdentifier local_f0;
  FPCGDataTypeIdentifier local_d8;
  FTestData local_b8;
  
  this = param_1->PCGNode;
  local_res8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar4 = UPCGNode::GetSettings(this);
  PCGTestsCommon::FTestData::FTestData
            (&local_b8,param_1->Seed,pUVar4,(TSubclassOf<AActor>)&local_res8);
  iVar3 = GetNumPermutations(&param_1->BaseOptionsByPin);
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      pUVar4 = UPCGNode::GetSettings(this);
      PCGTestsCommon::FTestData::Reset(&local_b8,pUVar4);
      iVar7 = 0;
      if (0 < (param_1->BaseOptionsByPin).ArrayNum) {
        do {
          GetPermutation(&local_d8,iVar8,iVar7,&param_1->BaseOptionsByPin);
          FVar1.Data = local_d8.Ids.AllocatorInstance.Data;
          local_108.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = local_d8.Ids.ArrayNum;
          local_108.Ids.ArrayNum = iVar6;
          if (iVar6 == 0) {
            local_108.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,0,(ForAnyElementType *)&local_108,iVar6,&local_108.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_108.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar1.Data,iVar6);
          }
          local_108.CustomSubtype = local_d8.CustomSubtype;
          pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_f0,Point);
          bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_108,pFVar5);
          if (local_f0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Ids.AllocatorInstance.Data);
          }
          if (bVar2) {
            AddRandomizedMultiplePointInputData(&local_b8,100,&Defaults::TestPinName);
          }
          else {
            pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_f0,Volume);
            bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_108,pFVar5);
            if (local_f0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Ids.AllocatorInstance.Data);
            }
            if (bVar2) {
              AddRandomizedVolumeInputData(&local_b8,&Defaults::TestPinName);
            }
            else {
              pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_f0,PolyLine);
              bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_108,pFVar5);
              if (local_f0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Ids.AllocatorInstance.Data);
              }
              if (bVar2) {
                AddRandomizedPolyLineInputData(&local_b8,6,&Defaults::TestPinName);
              }
              else {
                pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_f0,Primitive);
                bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_108,pFVar5);
                if (local_f0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Ids.AllocatorInstance.Data);
                }
                if (bVar2) {
                  AddRandomizedPrimitiveInputData(&local_b8,&Defaults::TestPinName);
                }
                else {
                  bVar2 = FPCGDataTypeIdentifier::operator==(&local_108,Surface);
                  if ((((!bVar2) &&
                       (bVar2 = FPCGDataTypeIdentifier::operator==(&local_108,Landscape), !bVar2))
                      && (bVar2 = FPCGDataTypeIdentifier::IsValid(&local_108), bVar2)) &&
                     (1 < (byte)LogPCG._0_1_)) {
                    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  }
                }
              }
            }
          }
          if (local_108.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Ids.AllocatorInstance.Data);
          }
          if (local_d8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Ids.AllocatorInstance.Data);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (param_1->BaseOptionsByPin).ArrayNum);
      }
      bVar2 = ExecutionIsDeterministicSameData(&local_b8,this);
      if (!bVar2) {
        bVar2 = false;
        goto LAB_149f9f6e0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  bVar2 = true;
LAB_149f9f6e0:
  PCGTestsCommon::FTestData::~FTestData(&local_b8);
  return bVar2;
}

// RunBasicTestSuite @ 149f9f720

/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */

bool __cdecl
PCGDeterminismTests::RunBasicTestSuite
          (UPCGNode *param_1,FName *param_2,FDeterminismTestResult *param_3)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  EDeterminismLevel EVar7;
  uint uVar8;
  int iVar9;
  EDeterminismLevel *pEVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FName local_res8;
  FNodeAndOptions local_38;
  
  local_38.Seed = param_3->Seed;
  local_38.bMultipleOptionsPerPin = true;
  local_38.BaseOptionsByPin.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.BaseOptionsByPin.ArrayNum = 0;
  local_38.BaseOptionsByPin.ArrayMax = 0;
  local_38.PCGNode = param_1;
  RetrieveBaseOptionsPerPin
            (&local_38.BaseOptionsByPin,&param_1->InputPins,&param_3->DataTypesTested,2);
  uVar12 = 0;
  iVar13 = 1;
  if (0 < local_38.BaseOptionsByPin.ArrayNum) {
    lVar14 = 0;
    iVar11 = local_38.BaseOptionsByPin.ArrayNum;
    do {
      uVar8 = 0;
      if ((int)uVar12 < iVar11) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar11 = local_38.BaseOptionsByPin.ArrayNum;
      }
      iVar9 = 1;
      if (1 < *(int *)(local_38.BaseOptionsByPin.AllocatorInstance.Data + lVar14 + 8)) {
        iVar9 = *(int *)(local_38.BaseOptionsByPin.AllocatorInstance.Data + lVar14 + 8);
      }
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 * iVar9;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar12 < iVar11);
  }
  pTVar4 = CVarDeterminismPermutationLimit.Ref;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (pTVar4->ShadowedValue[0] < iVar13) {
    EVar7 = GetHighestDeterminismLevelSimpleShuffleInput(&local_38,2,Deterministic);
    FVar2 = *param_2;
    local_res8 = FVar2;
    uVar12 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    pEVar10 = TMapBase<FName,enum_EDeterminismLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EDeterminismLevel,0>_>
              ::FindOrAddImpl<FName_const_&>
                        (&param_3->TestResults,FVar2.Number + uVar12,&local_res8);
    piVar1 = &(param_3->AdditionalDetails).ArrayMax;
    *pEVar10 = EVar7 != NoDeterminism;
    iVar13 = (param_3->AdditionalDetails).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(param_3->AdditionalDetails).AllocatorInstance,piVar1);
    }
    (param_3->AdditionalDetails).ArrayNum = iVar13 + 1;
    ::FString::FString((FString *)
                       ((param_3->AdditionalDetails).AllocatorInstance.Data +
                       (longlong)iVar13 * 0x10),
                       L"A full test was not conducted, due to a high number of permutations. Adjust \'pcg.DeterminismPermutationLimit\' to alter this limit."
                      );
  }
  else {
    bVar5 = RunBasicSelfTest(&local_38);
    if ((bVar5) && (bVar5 = RunBasicCopiedSelfTest(&local_38), bVar5)) {
      bVar5 = true;
      goto LAB_149f9f8dc;
    }
  }
  bVar5 = false;
LAB_149f9f8dc:
  DestructItems<TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *)
             local_38.BaseOptionsByPin.AllocatorInstance.Data,local_38.BaseOptionsByPin.ArrayNum);
  if ((TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *)
      local_38.BaseOptionsByPin.AllocatorInstance.Data !=
      (TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_38.BaseOptionsByPin.AllocatorInstance.Data);
  }
  return bVar5;
}

// RunDeterminismTest @ 149f9f940

/* WARNING: Removing unreachable block (ram,0x000149f9fbe6) */
/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
PCGDeterminismTests::RunDeterminismTest
          (UPCGNode *param_1,FDeterminismTestResult *param_2,FNodeTestInfo *param_3)

{
  FPCGDataTypeIdentifier *pFVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  FName FVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UPCGSettings *pUVar12;
  undefined8 uVar13;
  longlong lVar14;
  FPCGDataTypeIdentifier *pFVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  UPCGNode *local_res8;
  FString local_48;
  FPCGDataTypeIdentifier local_38;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId49,"PCGDeterminismTests::RunDeterminismTest::Node",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x31);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId49);
  }
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar12 = UPCGNode::GetSettings(param_1), pUVar12 == (UPCGSettings *)0x0)) {
    pFVar1 = &param_2->DataTypesTested;
    pFVar15 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,None);
    if (pFVar1 != pFVar15) {
      pFVar18 = (pFVar1->Ids).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar1->Ids).AllocatorInstance.Data = (pFVar15->Ids).AllocatorInstance.Data;
      (pFVar15->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->DataTypesTested).Ids.ArrayNum = (pFVar15->Ids).ArrayNum;
      (param_2->DataTypesTested).Ids.ArrayMax = (pFVar15->Ids).ArrayMax;
      (pFVar15->Ids).ArrayNum = 0;
      (pFVar15->Ids).ArrayMax = 0;
    }
    (param_2->DataTypesTested).CustomSubtype = pFVar15->CustomSubtype;
    if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Ids.AllocatorInstance.Data);
    }
    param_2->bFlagRaised = true;
    pTVar3 = &param_2->AdditionalDetails;
    ::FString::FString(&local_48,L"Invalid Node or Settings");
    pFVar18 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar18 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar18 + (longlong)(param_2->AdditionalDetails).ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (param_2->AdditionalDetails).ArrayNum;
    piVar2 = &(param_2->AdditionalDetails).ArrayMax;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (param_2->AdditionalDetails).ArrayNum = iVar11 + 1;
    pFVar18 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar18 = 0;
    *(FScriptContainerElement **)pFVar18 = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar18 + 8) = local_48.Data.ArrayNum;
    *(int *)(pFVar18 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  else {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&param_3->TestDelegate);
    plVar5 = *(longlong **)&(param_3->TestDelegate).field_0x28;
    pcVar6 = *(code **)&param_3->TestDelegate;
    plVar16 = (longlong *)&(param_3->TestDelegate).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar16 = plVar5;
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    cVar8 = (*pcVar6)(uVar13,&local_res8,&param_3->TestName,param_2);
    param_2->bFlagRaised = (bool)(param_2->bFlagRaised | cVar8 == '\0');
    FVar7 = param_3->TestName;
    uVar10 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    if (*(int *)&(param_2->TestResults).field_0x8 != *(int *)&(param_2->TestResults).field_0x34) {
      puVar17 = *(undefined1 **)&(param_2->TestResults).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(param_2->TestResults).field_0x38;
      }
      iVar11 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(param_2->TestResults).field_0x48 - 1U & FVar7.Number + uVar10) * 4
                       );
      if (iVar11 != -1) {
        do {
          lVar4 = *(longlong *)&param_2->TestResults + (longlong)iVar11 * 0x14;
          if (*(FName *)(*(longlong *)&param_2->TestResults + (longlong)iVar11 * 0x14) == FVar7) {
            lVar14 = lVar4 + 8;
            if (lVar4 == 0) {
              lVar14 = 0;
            }
            if (lVar14 != 0) goto LAB_149f9fbeb;
            break;
          }
          iVar11 = *(int *)(lVar4 + 0xc);
        } while (iVar11 != -1);
      }
    }
    UpdateTestResults(param_3->TestName,param_2,cVar8 != '\0');
  }
LAB_149f9fbeb:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RunOrderIndependenceSuite @ 149f9fc30

/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */

bool __cdecl
PCGDeterminismTests::RunOrderIndependenceSuite
          (UPCGNode *param_1,FName *param_2,FDeterminismTestResult *param_3)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  EDeterminismLevel EVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  EDeterminismLevel *pEVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FNodeAndOptions local_58;
  
  FVar2 = *param_2;
  local_res8 = FVar2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  pEVar11 = TMapBase<FName,enum_EDeterminismLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EDeterminismLevel,0>_>
            ::FindOrAddImpl<FName_const_&>(&param_3->TestResults,FVar2.Number + uVar8,&local_res8);
  *pEVar11 = NoDeterminism;
  local_58.Seed = param_3->Seed;
  local_58.bMultipleOptionsPerPin = true;
  local_58.BaseOptionsByPin.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.BaseOptionsByPin.ArrayNum = 0;
  local_58.BaseOptionsByPin.ArrayMax = 0;
  local_58.PCGNode = param_1;
  RetrieveBaseOptionsPerPin
            (&local_58.BaseOptionsByPin,&param_1->InputPins,&param_3->DataTypesTested,2);
  uVar8 = 0;
  iVar13 = 1;
  if (0 < local_58.BaseOptionsByPin.ArrayNum) {
    lVar14 = 0;
    iVar12 = local_58.BaseOptionsByPin.ArrayNum;
    do {
      uVar9 = 0;
      if ((int)uVar8 < iVar12) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar12 = local_58.BaseOptionsByPin.ArrayNum;
      }
      iVar10 = 1;
      if (1 < *(int *)(local_58.BaseOptionsByPin.AllocatorInstance.Data + lVar14 + 8)) {
        iVar10 = *(int *)(local_58.BaseOptionsByPin.AllocatorInstance.Data + lVar14 + 8);
      }
      uVar8 = uVar8 + 1;
      iVar13 = iVar13 * iVar10;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar8 < iVar12);
  }
  pTVar4 = CVarDeterminismPermutationLimit.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
  }
  if (pTVar4->ShadowedValue[0] < iVar13) {
    EVar7 = GetHighestDeterminismLevelSimpleShuffleInput(&local_58,2,Deterministic);
    FVar2 = *param_2;
    local_res10 = FVar2;
    uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    pEVar11 = TMapBase<FName,enum_EDeterminismLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EDeterminismLevel,0>_>
              ::FindOrAddImpl<FName_const_&>
                        (&param_3->TestResults,FVar2.Number + uVar8,&local_res10);
    piVar1 = &(param_3->AdditionalDetails).ArrayMax;
    *pEVar11 = EVar7;
    iVar13 = (param_3->AdditionalDetails).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(param_3->AdditionalDetails).AllocatorInstance,piVar1);
    }
    (param_3->AdditionalDetails).ArrayNum = iVar13 + 1;
    ::FString::FString((FString *)
                       ((param_3->AdditionalDetails).AllocatorInstance.Data +
                       (longlong)iVar13 * 0x10),
                       L"A full test was not conducted, due to a high number of permutations. Adjust \'pcg.DeterminismPermutationLimit\' to alter this limit."
                      );
    bVar5 = false;
  }
  else {
    if ((param_1->InputPins).ArrayNum == 0) {
      bVar5 = RunBasicCopiedSelfTest(&local_58);
      if (bVar5) {
        UpdateTestResults(*param_2,param_3,Deterministic);
        bVar5 = true;
        goto LAB_149f9fe7c;
      }
    }
    EVar7 = GetHighestDeterminismLevel(&local_58,2,Deterministic);
    FVar2 = *param_2;
    local_res18[0] = FVar2;
    uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    pEVar11 = TMapBase<FName,enum_EDeterminismLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EDeterminismLevel,0>_>
              ::FindOrAddImpl<FName_const_&>(&param_3->TestResults,FVar2.Number + uVar8,local_res18)
    ;
    bVar5 = EVar7 != NoDeterminism;
    *pEVar11 = EVar7;
  }
LAB_149f9fe7c:
  DestructItems<TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *)
             local_58.BaseOptionsByPin.AllocatorInstance.Data,local_58.BaseOptionsByPin.ArrayNum);
  if ((TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *)
      local_58.BaseOptionsByPin.AllocatorInstance.Data !=
      (TArray<FPCGDataTypeIdentifier,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_58.BaseOptionsByPin.AllocatorInstance.Data);
  }
  return bVar5;
}

// SampledSpatialDataIsIdentical @ 149f9fec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
PCGDeterminismTests::SampledSpatialDataIsIdentical
          (UPCGSpatialData *param_1,UPCGSpatialData *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  double *pdVar13;
  double *pdVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  ulong64 uVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  undefined8 uStack_438;
  __m128 local_428;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  FPCGPoint local_3b8;
  FPCGPoint local_2e8;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [56];
  undefined1 local_180 [56];
  undefined1 local_148 [56];
  undefined1 local_110 [56];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1115,"PCGDeterminismTests::SampledSpatialDataIsIdentical",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x45b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1115);
  }
  if (((param_1 == (UPCGSpatialData *)0x0) || (param_2 == (UPCGSpatialData *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstSpatialData && SecondSpatialData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                         ,0x45d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  pdVar13 = (double *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_1b8);
  pdVar14 = (double *)(**(code **)(param_2->_padding_ + 0x388))(param_2,local_180);
  if (*(char *)(pdVar13 + 6) == '\0') {
    bVar9 = *(char *)(pdVar14 + 6) == '\0';
LAB_149fa002a:
    if (!bVar9) goto LAB_149fa002c;
  }
  else {
    if ((((*(char *)(pdVar14 + 6) != '\0') && (*pdVar14 == *pdVar13)) &&
        ((pdVar14[1] == pdVar13[1] && ((pdVar14[2] == pdVar13[2] && (pdVar14[3] == pdVar13[3]))))))
       && (pdVar14[4] == pdVar13[4])) {
      bVar9 = pdVar14[5] == pdVar13[5];
      goto LAB_149fa002a;
    }
LAB_149fa002c:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstSpatialData->GetBounds() == SecondSpatialData->GetBounds()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                       ,0x460,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
  }
  pdVar13 = (double *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_148);
  pdVar14 = (double *)(**(code **)(param_2->_padding_ + 0x388))(param_2,local_110);
  local_488 = *pdVar13;
  dStack_480 = pdVar13[1];
  local_478 = pdVar13[2];
  dStack_470 = pdVar13[3];
  local_468 = pdVar13[4];
  dStack_460 = pdVar13[5];
  local_458 = pdVar13[6];
  uVar30 = (undefined4)((ulonglong)local_488 >> 0x20);
  uVar34 = (undefined4)((ulonglong)dStack_480 >> 0x20);
  uVar35 = (undefined4)((ulonglong)local_478 >> 0x20);
  uVar39 = (undefined4)((ulonglong)dStack_470 >> 0x20);
  uVar38 = (undefined4)((ulonglong)dStack_460 >> 0x20);
  if (local_458._0_1_ == '\0') {
    if (*(char *)(pdVar14 + 6) != '\0') {
      uVar24 = *(undefined4 *)pdVar14;
      uVar25 = *(undefined4 *)((longlong)pdVar14 + 4);
      uVar30 = *(undefined4 *)(pdVar14 + 1);
      uVar31 = *(undefined4 *)((longlong)pdVar14 + 0xc);
      uVar26 = *(undefined4 *)(pdVar14 + 2);
      uVar27 = *(undefined4 *)((longlong)pdVar14 + 0x14);
      uVar28 = *(undefined4 *)(pdVar14 + 3);
      uVar29 = *(undefined4 *)((longlong)pdVar14 + 0x1c);
      auVar4 = *(undefined1 (*) [16])(pdVar14 + 4);
      dVar22 = auVar4._0_8_;
      local_458 = pdVar14[6];
      uVar32 = uVar30;
      uVar33 = uVar31;
      uVar35 = auVar4._8_4_;
      uVar34 = auVar4._12_4_;
      uVar36 = uVar28;
      uVar37 = uVar29;
      goto LAB_149fa0155;
    }
  }
  else if (*(char *)(pdVar14 + 6) != '\0') {
    dVar22 = *pdVar14;
    dVar1 = pdVar14[1];
    uVar32 = 0;
    uVar33 = 0;
    dVar2 = pdVar14[2];
    uVar28 = 0;
    uVar29 = 0;
    dVar19 = pdVar14[3];
    dVar3 = pdVar14[5];
    uVar24 = SUB84(dVar22,0);
    uVar25 = (int)((ulonglong)dVar22 >> 0x20);
    if (local_488 <= dVar22) {
      uVar24 = SUB84(local_488,0);
      uVar25 = uVar30;
    }
    uVar30 = SUB84(dVar1,0);
    uVar31 = (int)((ulonglong)dVar1 >> 0x20);
    if (dStack_480 <= dVar1) {
      uVar30 = SUB84(dStack_480,0);
      uVar31 = uVar34;
    }
    uVar26 = SUB84(dVar2,0);
    uVar27 = (int)((ulonglong)dVar2 >> 0x20);
    if (local_478 <= dVar2) {
      uVar26 = SUB84(local_478,0);
      uVar27 = uVar35;
    }
    uVar36 = SUB84(dVar19,0);
    uVar37 = (int)((ulonglong)dVar19 >> 0x20);
    if (dVar19 <= dStack_470) {
      uVar36 = SUB84(dStack_470,0);
      uVar37 = uVar39;
    }
    dVar22 = pdVar14[4];
    if (pdVar14[4] <= local_468) {
      dVar22 = local_468;
    }
    uVar35 = SUB84(dVar3,0);
    uVar34 = (int)((ulonglong)dVar3 >> 0x20);
    if (dVar3 <= dStack_460) {
      uVar35 = SUB84(dStack_460,0);
      uVar34 = uVar38;
    }
    goto LAB_149fa0155;
  }
  uVar28 = 0;
  uVar29 = 0;
  dVar22 = local_468;
  uVar24 = SUB84(local_488,0);
  uVar25 = uVar30;
  uVar26 = SUB84(local_478,0);
  uVar27 = uVar35;
  uVar30 = SUB84(dStack_480,0);
  uVar31 = uVar34;
  uVar32 = 0;
  uVar33 = 0;
  uVar35 = SUB84(dStack_460,0);
  uVar34 = uVar38;
  uVar36 = SUB84(dStack_470,0);
  uVar37 = uVar39;
LAB_149fa0155:
  fVar40 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar41 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar42 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar43 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_458 = (double)CONCAT71(local_458._1_7_,1);
  local_2e8.Density = 1.0;
  local_2e8.Steepness = 0.5;
  local_2e8.Seed = 0;
  local_2e8.MetadataEntry = -1;
  dStack_3e0 = ((double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar25,uVar24)) *
               __real_3fc0000000000000;
  dVar19 = (dVar22 - (double)CONCAT44(uVar31,uVar30)) * __real_3fc0000000000000;
  local_448 = ((double)CONCAT44(uVar34,uVar35) - (double)CONCAT44(uVar27,uVar26)) *
              __real_3fc0000000000000;
  dVar1 = (double)CONCAT44(uVar25,uVar24) - dStack_3e0;
  dStack_3e0 = dStack_3e0 + (double)CONCAT44(uVar37,uVar36);
  dVar2 = (double)CONCAT44(uVar31,uVar30) - dVar19;
  dVar19 = dVar19 + dVar22;
  local_3e8 = (double)CONCAT44(uVar27,uVar26) - local_448;
  local_448 = local_448 + (double)CONCAT44(uVar34,uVar35);
  uVar36 = SUB84((double)fVar41,0);
  uVar37 = (undefined4)((ulonglong)(double)fVar41 >> 0x20);
  local_3f8._8_4_ = SUB84(dVar2,0);
  local_3f8._0_8_ = dVar1;
  local_3f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_3d8._8_4_ = SUB84(local_448,0);
  local_3d8._0_8_ = dVar19;
  local_3d8._12_4_ = (int)((ulonglong)local_448 >> 0x20);
  local_3c8 = local_458;
  uVar26 = SUB84((double)fVar43,0);
  uVar27 = (undefined4)((ulonglong)(double)fVar43 >> 0x20);
  uVar25 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  uVar39 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_428 = GlobalVectorConstants::Float1110;
  uVar30 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar35 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  auVar4._8_4_ = uVar32;
  auVar4._0_8_ = dVar1;
  auVar4._12_4_ = uVar33;
  local_418._8_4_ = uVar32;
  local_418._0_8_ = dVar2;
  local_418._12_4_ = uVar33;
  uVar34 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar38 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_3b8.BoundsMax.field0_0x0._8_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  local_3b8.BoundsMax.field0_0x0._12_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_408._8_4_ = uVar28;
  local_408._0_8_ = local_3e8;
  local_408._12_4_ = uVar29;
  local_2e8.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar30;
  local_2e8.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_2e8.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar35;
  local_3b8.BoundsMin.field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar17,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar16);
  local_2e8.BoundsMin.field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar17,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar16);
  local_2e8.BoundsMin.field0_0x0._s_0.Y =
       (double)CONCAT44(local_3b8.BoundsMax.field0_0x0._12_4_ ^ uVar17,
                        local_3b8.BoundsMax.field0_0x0._8_4_ ^ uVar16);
  local_2e8.Transform.Rotation.XY.m128d_f64[1]._0_4_ = uVar36;
  local_2e8.Transform.Rotation.XY.m128d_f64[0] = (double)fVar40;
  local_2e8.Transform.Rotation.XY.m128d_f64[1]._4_4_ = uVar37;
  local_2e8.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar26;
  local_2e8.Transform.Rotation.ZW.m128d_f64[0] = (double)fVar42;
  local_2e8.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar27;
  local_2e8.Transform.Translation.XY.m128d_f64[1]._0_4_ = uVar25;
  local_2e8.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2e8.Transform.Translation.XY.m128d_f64[1]._4_4_ = uVar31;
  local_2e8.Transform.Translation.ZW.m128d_f64[1]._0_4_ = uVar39;
  local_2e8.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2e8.Transform.Translation.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_2e8.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar34;
  local_2e8.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_2e8.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar38;
  local_2e8.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  local_2e8.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_2e8.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_2e8.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_2e8.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_2e8.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_2e8.Color.field0_0x0._s_0.W = _UNK_150689688;
  local_3b8.Transform.Rotation.XY.m128d_f64[1]._0_4_ = uVar36;
  local_3b8.Transform.Rotation.XY.m128d_f64[0] = (double)fVar40;
  local_3b8.Transform.Rotation.XY.m128d_f64[1]._4_4_ = uVar37;
  local_3b8.Density = 1.0;
  local_3b8.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar26;
  local_3b8.Transform.Rotation.ZW.m128d_f64[0] = (double)fVar42;
  local_3b8.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar27;
  local_3b8.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar34;
  local_3b8.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_3b8.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar38;
  local_3b8.Transform.Translation.XY.m128d_f64[1]._0_4_ = uVar25;
  local_3b8.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_3b8.Transform.Translation.XY.m128d_f64[1]._4_4_ = uVar31;
  local_3b8.Transform.Translation.ZW.m128d_f64[1]._0_4_ = uVar39;
  local_3b8.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_3b8.Transform.Translation.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_3b8.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_3b8.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_3b8.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_3b8.Color.field0_0x0._s_0.W = _UNK_150689688;
  local_3b8.Steepness = 0.5;
  local_3b8.Seed = 0;
  dVar22 = (local_448 - local_3e8) * __real_3fb1111111111111;
  local_3b8.MetadataEntry = -1;
  local_3b8.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  local_3b8.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_3b8.BoundsMin.field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar17,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar16);
  local_3b8.BoundsMin.field0_0x0._s_0.Y =
       (double)CONCAT44(local_3b8.BoundsMax.field0_0x0._12_4_ ^ uVar17,
                        local_3b8.BoundsMax.field0_0x0._8_4_ ^ uVar16);
  local_3b8.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar30;
  local_3b8.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_3b8.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar35;
  dVar23 = (dStack_3e0 - dVar1) * __real_3fb1111111111111;
  dVar8 = (dVar19 - dVar2) * __real_3fb1111111111111;
  uStack_438 = auVar4._8_8_;
  local_440 = dVar23;
  dVar3 = dVar22 * __real_3fe0000000000000 + local_3e8;
  dVar1 = dVar23 * __real_3fe0000000000000 + dVar1;
  local_3b8.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dVar2 = dVar8 * __real_3fe0000000000000 + dVar2;
  local_450 = dVar19;
  local_2e8.BoundsMin.field0_0x0._s_0.Z = local_3b8.BoundsMin.field0_0x0._s_0.Z;
  local_2e8.BoundsMax.field0_0x0._8_4_ = local_3b8.BoundsMax.field0_0x0._8_4_;
  local_2e8.BoundsMax.field0_0x0._12_4_ = local_3b8.BoundsMax.field0_0x0._12_4_;
  dVar6 = local_448;
  if (dVar1 < dStack_3e0) {
    do {
      dVar7 = dVar2;
      if (dVar2 < dVar19) {
        do {
          if (dVar3 < dVar6) {
            fVar18 = local_428.m128_f32[0];
            fVar20 = local_428.m128_f32[1];
            uVar21 = local_428.m128_u64[1];
            dVar19 = dVar3;
            while( true ) {
              local_498 = 0;
              local_218._8_4_ = SUB84((double)fVar41,0);
              local_218._0_8_ = (double)fVar40;
              local_218._12_4_ = (int)((ulonglong)(double)fVar41 >> 0x20);
              local_1f8._8_4_ = SUB84(dVar7,0);
              local_1f8._0_8_ = dVar1;
              local_1f8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              local_208._8_4_ = SUB84((double)fVar43,0);
              local_208._0_8_ = (double)fVar42;
              local_208._12_4_ = (int)((ulonglong)(double)fVar43 >> 0x20);
              local_1d8._8_4_ = SUB84((double)fVar20,0);
              local_1d8._0_8_ = (double)fVar18;
              local_1d8._12_4_ = (int)((ulonglong)(double)fVar20 >> 0x20);
              dVar6 = (double)(float)(uVar21 >> 0x20);
              uStack_1e0 = 0;
              local_1c8._8_4_ = SUB84(dVar6,0);
              local_1c8._0_8_ = (double)(float)uVar21;
              local_1c8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
              local_1e8 = dVar19;
              cVar11 = (**(code **)(param_1->_padding_ + 0x3c0))
                                 (param_1,local_218,local_3f8,&local_2e8);
              local_498 = 0;
              cVar12 = (**(code **)(param_2->_padding_ + 0x3c0))
                                 (param_2,local_218,local_3f8,&local_3b8);
              if ((cVar11 != cVar12) ||
                 (((cVar11 != '\0' && (cVar12 != '\0')) &&
                  (bVar9 = PCGTestsCommon::PointsAreIdentical(&local_2e8,&local_3b8), !bVar9)))) {
                bVar9 = false;
                goto LAB_149fa054b;
              }
              dVar19 = dVar19 + dVar22;
              fVar40 = GlobalVectorConstants::Float0001.m128_f32[0];
              fVar41 = GlobalVectorConstants::Float0001.m128_f32[1];
              fVar42 = GlobalVectorConstants::Float0001.m128_f32[2];
              fVar43 = GlobalVectorConstants::Float0001.m128_f32[3];
              if ((double)local_3d8._8_8_ <= dVar19) break;
              fVar18 = GlobalVectorConstants::Float1110.m128_f32[0];
              fVar20 = GlobalVectorConstants::Float1110.m128_f32[1];
              uVar21 = GlobalVectorConstants::Float1110.m128_u64[1];
            }
            local_428 = GlobalVectorConstants::Float1110;
            dVar19 = (double)local_3d8._0_8_;
            dVar6 = (double)local_3d8._8_8_;
          }
          dVar7 = dVar7 + dVar8;
        } while (dVar7 < dVar19);
        dVar23 = local_440;
      }
      dVar1 = dVar1 + dVar23;
    } while (dVar1 < dStack_3e0);
  }
  bVar9 = true;
LAB_149fa054b:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

// ShiftInputOrder @ 149fa05d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl PCGDeterminismTests::ShiftInputOrder(FTestData *param_1,int param_2)

{
  int iVar1;
  FPCGTaggedData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FPCGTaggedData,int> local_18;
  
  pFVar2 = (FPCGTaggedData *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
  iVar1 = (param_1->InputData).TaggedData.ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  PCGHelpers::ShiftArrayElements<FPCGTaggedData>(&local_18,param_2);
  return;
}

// ShuffleAllInternalData @ 149fa0640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl PCGDeterminismTests::ShuffleAllInternalData(FTestData *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  ulonglong uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  undefined1 local_res8 [8];
  uint local_res10;
  FObjectPtr_u_0 local_res18;
  FScriptContainerElement *local_res20;
  FString local_158;
  FString local_148;
  FString local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  fVar5 = __real_3f800000;
  pFVar18 = (param_1->InputData).TaggedData.AllocatorInstance.Data;
  pwVar21 = L"";
  local_res10 = (param_1->InputData).TaggedData.ArrayNum;
  uVar12 = (ulonglong)(int)local_res10;
  pFVar14 = pFVar18 + uVar12 * 0x78;
  do {
    local_res20 = pFVar18;
    if ((param_1->InputData).TaggedData.ArrayNum != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar18 == pFVar14) {
      return;
    }
    lVar16 = *(longlong *)pFVar18;
    if (lVar16 != 0) {
      pUVar9 = Z_Construct_UClass_UPCGPointData_NoRegister();
      lVar16 = *(longlong *)(lVar16 + 0x10);
      iVar1 = (int)pUVar9->_padding_;
      if ((iVar1 <= *(int *)(lVar16 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar9->_padding_)) {
        local_res18.Handle = *(UObject **)pFVar18;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGPointData *)local_res18.Handle == (UPCGPointData *)0x0) goto LAB_149fa09ff;
          UE::GC::MarkAsReachable(local_res18.Handle);
        }
        if ((UPCGPointData *)local_res18.Handle == (UPCGPointData *)0x0) {
LAB_149fa09ff:
          pFVar11 = GetTypeName<UPCGPointData>(&local_138);
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar21);
        }
        pUVar9 = Z_Construct_UClass_UPCGPointData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar9);
        if ((!bVar6) || ((UPCGPointData *)local_res18.Handle == (UPCGPointData *)0x0)) {
          pFVar11 = GetTypeName<UPCGPointData>(&local_158);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          pFVar11 = GetFullNameForCastLogError<UPCGData_const_>
                              (&local_148,(UPCGData *)local_res18.Handle);
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar21,pwVar15);
        }
        pTVar10 = UPCGPointData::GetMutablePoints((UPCGPointData *)local_res18.Handle);
        iVar13 = 0;
        lVar16 = 0;
        iVar17 = pTVar10->ArrayNum;
        iVar1 = iVar17 + -1;
        if (0 < iVar1) {
          lVar20 = 0;
          do {
            if (iVar17 < 1) {
              iVar8 = 0;
            }
            else {
              uVar7 = (param_1->RandomStream).Seed * 0xbb38435 + 0x3619636b;
              (param_1->RandomStream).Seed = uVar7;
              iVar8 = (int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar5) * (float)iVar17);
            }
            iVar8 = iVar8 + iVar13;
            if (iVar13 != iVar8) {
              if ((iVar8 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0xce6,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (((pTVar10->ArrayNum <= iVar13) || (pTVar10->ArrayNum <= iVar8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0xce7,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar19 = (pTVar10->AllocatorInstance).Data;
              local_128 = *(undefined8 *)(pFVar19 + lVar20);
              uStack_120 = *(undefined8 *)(pFVar19 + lVar20 + 8);
              pFVar18 = pFVar19 + lVar20;
              local_118 = *(undefined8 *)(pFVar18 + 0x10);
              uStack_110 = *(undefined8 *)(pFVar18 + 0x18);
              pFVar19 = pFVar19 + (longlong)iVar8 * 0xd0;
              local_108 = *(undefined8 *)(pFVar18 + 0x20);
              uStack_100 = *(undefined8 *)(pFVar18 + 0x28);
              local_f8 = *(undefined8 *)(pFVar18 + 0x30);
              uStack_f0 = *(undefined8 *)(pFVar18 + 0x38);
              local_e8 = *(undefined8 *)(pFVar18 + 0x40);
              uStack_e0 = *(undefined8 *)(pFVar18 + 0x48);
              local_d8 = *(undefined8 *)(pFVar18 + 0x50);
              uStack_d0 = *(undefined8 *)(pFVar18 + 0x58);
              local_c8 = *(undefined8 *)(pFVar18 + 0x60);
              uStack_c0 = *(undefined8 *)(pFVar18 + 0x68);
              local_b8 = *(undefined8 *)(pFVar18 + 0x70);
              uStack_b0 = *(undefined8 *)(pFVar18 + 0x78);
              local_a8 = *(undefined8 *)(pFVar18 + 0x80);
              uStack_a0 = *(undefined8 *)(pFVar18 + 0x88);
              local_98 = *(undefined8 *)(pFVar18 + 0x90);
              uStack_90 = *(undefined8 *)(pFVar18 + 0x98);
              local_88 = *(undefined8 *)(pFVar18 + 0xa0);
              uStack_80 = *(undefined8 *)(pFVar18 + 0xa8);
              local_78 = *(undefined8 *)(pFVar18 + 0xb0);
              uStack_70 = *(undefined8 *)(pFVar18 + 0xb8);
              local_68 = *(undefined8 *)&pFVar18[0xc0].field_0x0;
              uStack_60 = *(undefined8 *)(pFVar18 + 200);
              auVar4 = *(undefined1 (*) [16])(pFVar18 + 0xc0);
              uVar3 = *(undefined8 *)(pFVar19 + 8);
              *(undefined8 *)pFVar18 = *(undefined8 *)pFVar19;
              *(undefined8 *)(pFVar18 + 8) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x18);
              *(undefined8 *)(pFVar18 + 0x10) = *(undefined8 *)(pFVar19 + 0x10);
              *(undefined8 *)(pFVar18 + 0x18) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x28);
              *(undefined8 *)(pFVar18 + 0x20) = *(undefined8 *)(pFVar19 + 0x20);
              *(undefined8 *)(pFVar18 + 0x28) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x38);
              *(undefined8 *)(pFVar18 + 0x30) = *(undefined8 *)(pFVar19 + 0x30);
              *(undefined8 *)(pFVar18 + 0x38) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x48);
              *(undefined8 *)(pFVar18 + 0x40) = *(undefined8 *)(pFVar19 + 0x40);
              *(undefined8 *)(pFVar18 + 0x48) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x58);
              *(undefined8 *)(pFVar18 + 0x50) = *(undefined8 *)(pFVar19 + 0x50);
              *(undefined8 *)(pFVar18 + 0x58) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x68);
              *(undefined8 *)(pFVar18 + 0x60) = *(undefined8 *)(pFVar19 + 0x60);
              *(undefined8 *)(pFVar18 + 0x68) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x78);
              *(undefined8 *)(pFVar18 + 0x70) = *(undefined8 *)(pFVar19 + 0x70);
              *(undefined8 *)(pFVar18 + 0x78) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x88);
              *(undefined8 *)(pFVar18 + 0x80) = *(undefined8 *)(pFVar19 + 0x80);
              *(undefined8 *)(pFVar18 + 0x88) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0x98);
              *(undefined8 *)(pFVar18 + 0x90) = *(undefined8 *)(pFVar19 + 0x90);
              *(undefined8 *)(pFVar18 + 0x98) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0xa8);
              *(undefined8 *)(pFVar18 + 0xa0) = *(undefined8 *)(pFVar19 + 0xa0);
              *(undefined8 *)(pFVar18 + 0xa8) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 0xb8);
              *(undefined8 *)(pFVar18 + 0xb0) = *(undefined8 *)(pFVar19 + 0xb0);
              *(undefined8 *)(pFVar18 + 0xb8) = uVar3;
              uVar3 = *(undefined8 *)(pFVar19 + 200);
              *(undefined8 *)(pFVar18 + 0xc0) = *(undefined8 *)(pFVar19 + 0xc0);
              *(undefined8 *)(pFVar18 + 200) = uVar3;
              *(undefined8 *)pFVar19 = local_128;
              *(undefined8 *)(pFVar19 + 8) = uStack_120;
              *(undefined8 *)(pFVar19 + 0x10) = local_118;
              *(undefined8 *)(pFVar19 + 0x18) = uStack_110;
              *(undefined8 *)(pFVar19 + 0x20) = local_108;
              *(undefined8 *)(pFVar19 + 0x28) = uStack_100;
              *(undefined8 *)(pFVar19 + 0x30) = local_f8;
              *(undefined8 *)(pFVar19 + 0x38) = uStack_f0;
              *(undefined8 *)(pFVar19 + 0x40) = local_e8;
              *(undefined8 *)(pFVar19 + 0x48) = uStack_e0;
              *(undefined8 *)(pFVar19 + 0x50) = local_d8;
              *(undefined8 *)(pFVar19 + 0x58) = uStack_d0;
              *(undefined8 *)(pFVar19 + 0x60) = local_c8;
              *(undefined8 *)(pFVar19 + 0x68) = uStack_c0;
              *(undefined8 *)(pFVar19 + 0x70) = local_b8;
              *(undefined8 *)(pFVar19 + 0x78) = uStack_b0;
              *(undefined8 *)(pFVar19 + 0x80) = local_a8;
              *(undefined8 *)(pFVar19 + 0x88) = uStack_a0;
              *(undefined8 *)(pFVar19 + 0x90) = local_98;
              *(undefined8 *)(pFVar19 + 0x98) = uStack_90;
              *(undefined8 *)(pFVar19 + 0xa0) = local_88;
              *(undefined8 *)(pFVar19 + 0xa8) = uStack_80;
              *(undefined8 *)(pFVar19 + 0xb0) = local_78;
              *(undefined8 *)(pFVar19 + 0xb8) = uStack_70;
              *(undefined1 (*) [16])(pFVar19 + 0xc0) = auVar4;
            }
            iVar13 = iVar13 + 1;
            iVar17 = iVar17 + -1;
            lVar16 = lVar16 + 1;
            lVar20 = lVar20 + 0xd0;
            pFVar18 = local_res20;
          } while (lVar16 < iVar1);
        }
      }
    }
    pFVar18 = pFVar18 + 0x78;
    uVar12 = (ulonglong)local_res10;
  } while( true );
}

// ShuffleInputOrder @ 149fa0a70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl PCGDeterminismTests::ShuffleInputOrder(FTestData *param_1)

{
  PCGHelpers::ShuffleArray<FPCGTaggedData>(&param_1->RandomStream,&(param_1->InputData).TaggedData);
  return;
}

// ShuffleOutputOrder @ 149fa0a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl PCGDeterminismTests::ShuffleOutputOrder(FTestData *param_1)

{
  PCGHelpers::ShuffleArray<FPCGTaggedData>(&param_1->RandomStream,&(param_1->OutputData).TaggedData)
  ;
  return;
}

// SpatialBasicsAreIdentical @ 149fa0ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl PCGDeterminismTests::SpatialBasicsAreIdentical(UPCGData *param_1,UPCGData *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  UPCGSpatialData *pUVar4;
  UPCGSpatialData *pUVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108 [56];
  undefined1 local_d0 [56];
  undefined1 local_98 [56];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar4 = CastChecked<UPCGSpatialData_const_,UPCGData_const_>(param_1);
  pUVar5 = CastChecked<UPCGSpatialData_const_,UPCGData_const_>(param_2);
  pcVar1 = *(code **)(pUVar4->_padding_ + 0x2b0);
  iVar2 = (**(code **)(pUVar5->_padding_ + 0x2b0))(pUVar5);
  iVar3 = (*pcVar1)(pUVar4);
  if (iVar3 == iVar2) {
    pcVar1 = *(code **)(pUVar4->_padding_ + 0x380);
    iVar2 = (**(code **)(pUVar5->_padding_ + 0x380))(pUVar5);
    iVar3 = (*pcVar1)(pUVar4);
    if (iVar3 == iVar2) {
      pdVar6 = (double *)(**(code **)(pUVar4->_padding_ + 0x388))(pUVar4,local_108);
      pdVar7 = (double *)(**(code **)(pUVar5->_padding_ + 0x388))(pUVar5,local_d0);
      if (*(char *)(pdVar6 + 6) == '\0') {
        if (*(char *)(pdVar7 + 6) != '\0') {
          return false;
        }
      }
      else {
        if (*(char *)(pdVar7 + 6) == '\0') {
          return false;
        }
        if (*pdVar7 != *pdVar6) {
          return false;
        }
        if (pdVar7[1] != pdVar6[1]) {
          return false;
        }
        if (pdVar7[2] != pdVar6[2]) {
          return false;
        }
        if (pdVar7[3] != pdVar6[3]) {
          return false;
        }
        if (pdVar7[4] != pdVar6[4]) {
          return false;
        }
        if (pdVar7[5] != pdVar6[5]) {
          return false;
        }
      }
      pdVar6 = (double *)(**(code **)(pUVar4->_padding_ + 0x398))(pUVar4,local_98);
      pdVar7 = (double *)(**(code **)(pUVar5->_padding_ + 0x398))(pUVar5,local_60);
      if (*(char *)(pdVar6 + 6) == '\0') {
        if (*(char *)(pdVar7 + 6) == '\0') {
          return true;
        }
      }
      else if ((((*(char *)(pdVar7 + 6) != '\0') && (*pdVar7 == *pdVar6)) &&
               (pdVar7[1] == pdVar6[1])) &&
              (((pdVar7[2] == pdVar6[2] && (pdVar7[3] == pdVar6[3])) &&
               ((pdVar7[4] == pdVar6[4] && (pdVar7[5] == pdVar6[5])))))) {
        return true;
      }
    }
  }
  return false;
}

// SpatialDataIsConsistent @ 149fa0c90

bool __cdecl PCGDeterminismTests::SpatialDataIsConsistent(UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGSpatialData *pUVar5;
  UPCGSpatialData *pUVar6;
  UClass *pUVar7;
  
  pUVar5 = CastChecked<UPCGSpatialData_const_,UPCGData_const_>(param_1);
  pUVar6 = CastChecked<UPCGSpatialData_const_,UPCGData_const_>(param_2);
  bVar3 = SpatialBasicsAreIdentical((UPCGData *)pUVar5,(UPCGData *)pUVar6);
  if (!bVar3) {
    return bVar3;
  }
  if ((pUVar5 == (UPCGSpatialData *)0x0) || (pUVar6 == (UPCGSpatialData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (pUVar5 == (UPCGSpatialData *)0x0) goto LAB_149fa0d5d;
  }
  pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if (((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar7->_padding_)) && (pUVar6 != (UPCGSpatialData *)0x0)) {
    pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      bVar3 = PointDataIsConsistent((UPCGData *)pUVar5,(UPCGData *)pUVar6);
      return bVar3;
    }
  }
LAB_149fa0d5d:
  bVar3 = SpatialDataIsIdentical(param_1,param_2);
  return bVar3;
}

// SpatialDataIsIdentical @ 149fa0d90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl PCGDeterminismTests::SpatialDataIsIdentical(UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGSpatialData *pUVar5;
  UPCGSpatialData *pUVar6;
  UClass *pUVar7;
  UPCGVolumeData *pUVar8;
  UPCGVolumeData *pUVar9;
  UPCGSurfaceData *pUVar10;
  UPCGSurfaceData *pUVar11;
  UPCGPrimitiveData *pUVar12;
  UPCGPrimitiveData *pUVar13;
  bool bVar14;
  bool bVar15;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId947,"PCGDeterminismTests::SpatialDataIsIdentical",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x3b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId947);
  }
  pUVar5 = CastChecked<UPCGSpatialData_const_,UPCGData_const_>(param_1);
  pUVar6 = CastChecked<UPCGSpatialData_const_,UPCGData_const_>(param_2);
  bVar3 = SpatialBasicsAreIdentical((UPCGData *)pUVar5,(UPCGData *)pUVar6);
  if (bVar3) {
    if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstData && SecondData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (param_1 != (UPCGData *)0x0) goto LAB_149fa0e46;
LAB_149fa0eae:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstData && SecondData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (param_1 != (UPCGData *)0x0) goto LAB_149fa0edd;
LAB_149fa0fe8:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstData && SecondData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (param_1 != (UPCGData *)0x0) goto LAB_149fa1017;
LAB_149fa10d7:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstData && SecondData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (param_1 != (UPCGData *)0x0) goto LAB_149fa1102;
LAB_149fa116a:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstData && SecondData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (param_1 != (UPCGData *)0x0) goto LAB_149fa1199;
LAB_149fa1257:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstData && SecondData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (param_1 == (UPCGData *)0x0) goto LAB_149fa10a7;
    }
    else {
LAB_149fa0e46:
      pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar7->_padding_)) && (param_2 != (UPCGData *)0x0)) {
        pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          bVar3 = PointDataIsIdentical(param_1,param_2);
          goto LAB_149fa10aa;
        }
      }
      if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) goto LAB_149fa0eae;
LAB_149fa0edd:
      pUVar7 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar7->_padding_)) && (param_2 != (UPCGData *)0x0)) {
        pUVar7 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          bVar15 = -1 < CpuChannel->Enabled;
          if (bVar15) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1055,"PCGDeterminismTests::VolumeDataIsIdentical",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
                       ,0x41f);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1055);
          }
          pUVar8 = CastChecked<UPCGVolumeData_const_,UPCGData_const_>(param_1);
          pUVar9 = CastChecked<UPCGVolumeData_const_,UPCGData_const_>(param_2);
          if ((((pUVar9->VoxelSize).field0_0x0._s_0.X == (pUVar8->VoxelSize).field0_0x0._s_0.X) &&
              ((pUVar9->VoxelSize).field0_0x0._s_0.Y == (pUVar8->VoxelSize).field0_0x0._s_0.Y)) &&
             ((pUVar9->VoxelSize).field0_0x0._s_0.Z == (pUVar8->VoxelSize).field0_0x0._s_0.Z)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar15) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          goto LAB_149fa10aa;
        }
      }
      if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) goto LAB_149fa0fe8;
LAB_149fa1017:
      pUVar7 = Z_Construct_UClass_UPCGSurfaceData_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar7->_padding_)) && (param_2 != (UPCGData *)0x0)) {
        pUVar7 = Z_Construct_UClass_UPCGSurfaceData_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          pUVar10 = CastChecked<UPCGSurfaceData_const_,UPCGData_const_>(param_1);
          pUVar11 = CastChecked<UPCGSurfaceData_const_,UPCGData_const_>(param_2);
          if (pUVar10 == pUVar11) {
            bVar3 = true;
            goto LAB_149fa10aa;
          }
          if (2 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
          goto LAB_149fa10a7;
        }
      }
      if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) goto LAB_149fa10d7;
LAB_149fa1102:
      pUVar7 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar7->_padding_)) && (param_2 != (UPCGData *)0x0)) {
        pUVar7 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          bVar3 = PolyLineDataIsIdentical(param_1,param_2);
          goto LAB_149fa10aa;
        }
      }
      if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) goto LAB_149fa116a;
LAB_149fa1199:
      pUVar7 = Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar7->_padding_)) && (param_2 != (UPCGData *)0x0)) {
        pUVar7 = Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          pUVar12 = CastChecked<UPCGPrimitiveData_const_,UPCGData_const_>(param_1);
          pUVar13 = CastChecked<UPCGPrimitiveData_const_,UPCGData_const_>(param_2);
          if (((pUVar13->VoxelSize).field0_0x0._s_0.X == (pUVar12->VoxelSize).field0_0x0._s_0.X) &&
             (((pUVar13->VoxelSize).field0_0x0._s_0.Y == (pUVar12->VoxelSize).field0_0x0._s_0.Y &&
              ((pUVar13->VoxelSize).field0_0x0._s_0.Z == (pUVar12->VoxelSize).field0_0x0._s_0.Z))))
          {
            bVar3 = true;
            goto LAB_149fa10aa;
          }
          goto LAB_149fa10a7;
        }
      }
      if ((param_1 == (UPCGData *)0x0) || (param_2 == (UPCGData *)0x0)) goto LAB_149fa1257;
    }
    pUVar7 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar7->_padding_)) && (param_2 != (UPCGData *)0x0)) {
      pUVar7 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        pUVar7 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(param_2->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          param_2 = (UPCGData *)0x0;
        }
        pUVar7 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          param_1 = (UPCGData *)0x0;
        }
        bVar3 = SampledSpatialDataIsIdentical((UPCGSpatialData *)param_1,(UPCGSpatialData *)param_2)
        ;
        goto LAB_149fa10aa;
      }
    }
  }
LAB_149fa10a7:
  bVar3 = false;
LAB_149fa10aa:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// SpatialDataIsOrthogonal @ 149fa1350

bool __cdecl PCGDeterminismTests::SpatialDataIsOrthogonal(UPCGData *param_1,UPCGData *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGSpatialData *pUVar5;
  UPCGSpatialData *pUVar6;
  UClass *pUVar7;
  
  pUVar5 = CastChecked<UPCGSpatialData_const_,UPCGData_const_>(param_1);
  pUVar6 = CastChecked<UPCGSpatialData_const_,UPCGData_const_>(param_2);
  bVar3 = SpatialBasicsAreIdentical((UPCGData *)pUVar5,(UPCGData *)pUVar6);
  if (!bVar3) {
    return bVar3;
  }
  if ((pUVar5 == (UPCGSpatialData *)0x0) || (pUVar6 == (UPCGSpatialData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstData && SecondData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\Determinism\\PCGDeterminismTestsCommon.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (pUVar5 == (UPCGSpatialData *)0x0) goto LAB_149fa141d;
  }
  pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if (((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar7->_padding_)) && (pUVar6 != (UPCGSpatialData *)0x0)) {
    pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      bVar3 = PointDataIsOrthogonal((UPCGData *)pUVar5,(UPCGData *)pUVar6);
      return bVar3;
    }
  }
LAB_149fa141d:
  bVar3 = SpatialDataIsIdentical(param_1,param_2);
  return bVar3;
}

// SurfaceDataIsIdentical @ 149fa14a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl PCGDeterminismTests::SurfaceDataIsIdentical(UPCGData *param_1,UPCGData *param_2)

{
  UPCGSurfaceData *pUVar1;
  UPCGSurfaceData *pUVar2;
  
  pUVar1 = CastChecked<UPCGSurfaceData_const_,UPCGData_const_>(param_1);
  pUVar2 = CastChecked<UPCGSurfaceData_const_,UPCGData_const_>(param_2);
  if (pUVar1 == pUVar2) {
    return true;
  }
  if (2 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return false;
}

// UpdateTestResultForOverPermutationLimitError @ 149fa1a30

void __cdecl
PCGDeterminismTests::UpdateTestResultForOverPermutationLimitError(FDeterminismTestResult *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (param_1->AdditionalDetails).ArrayNum;
  piVar1 = &(param_1->AdditionalDetails).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->AdditionalDetails).AllocatorInstance,piVar1);
  }
  (param_1->AdditionalDetails).ArrayNum = iVar2 + 1;
  ::FString::FString((FString *)
                     ((param_1->AdditionalDetails).AllocatorInstance.Data + (longlong)iVar2 * 0x10),
                     L"A full test was not conducted, due to a high number of permutations. Adjust \'pcg.DeterminismPermutationLimit\' to alter this limit."
                    );
  return;
}

// UpdateTestResults @ 149fa1a80

/* WARNING: Enum "EDeterminismLevel": Some values do not have unique names */

void __cdecl
PCGDeterminismTests::UpdateTestResults
          (FName param_1,FDeterminismTestResult *param_2,EDeterminismLevel param_3)

{
  uint uVar1;
  EDeterminismLevel *pEVar2;
  FName local_res8;
  
  local_res8 = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pEVar2 = TMapBase<FName,enum_EDeterminismLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EDeterminismLevel,0>_>
           ::FindOrAddImpl<FName_const_&>(&param_2->TestResults,uVar1 + param_1.Number,&local_res8);
  *pEVar2 = param_3;
  return;
}

// VolumeDataIsIdentical @ 149fa1ae0

bool __cdecl PCGDeterminismTests::VolumeDataIsIdentical(UPCGData *param_1,UPCGData *param_2)

{
  UPCGVolumeData *pUVar1;
  UPCGVolumeData *pUVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1055,"PCGDeterminismTests::VolumeDataIsIdentical",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Determinism\\PCGDeterminismTestsCommon.cpp"
               ,0x41f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1055);
  }
  pUVar1 = CastChecked<UPCGVolumeData_const_,UPCGData_const_>(param_1);
  pUVar2 = CastChecked<UPCGVolumeData_const_,UPCGData_const_>(param_2);
  if ((((pUVar2->VoxelSize).field0_0x0._s_0.X == (pUVar1->VoxelSize).field0_0x0._s_0.X) &&
      ((pUVar2->VoxelSize).field0_0x0._s_0.Y == (pUVar1->VoxelSize).field0_0x0._s_0.Y)) &&
     ((pUVar2->VoxelSize).field0_0x0._s_0.Z == (pUVar1->VoxelSize).field0_0x0._s_0.Z)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister @ 149fa1bb0

UClass * __cdecl Z_Construct_UClass_UPCGDeterminismTestBlueprintBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDeterminismTestBlueprintBase",
               &Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton,
               UPCGDeterminismTestBlueprintBase::
               StaticRegisterNativesUPCGDeterminismTestBlueprintBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDeterminismTestBlueprintBase>,
               InternalVTableHelperCtorCaller<UPCGDeterminismTestBlueprintBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDeterminismTestBlueprintBase.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct @ 149fa1c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStruct.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NoPin'' @ 150419490

void __cdecl `dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data;
  if ((FPCGGraphTaskInput::NoPin.bIsSet) &&
     (FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    if (FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
    }
    return;
  }
  return;
}

// PositionCurve'' @ 1504194b0

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// RotationCurve'' @ 1504194d0

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// ScaleCurve'' @ 1504194f0

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeterminismGraphTestCycleLimit'' @ 150419510

void __cdecl _dynamic_atexit_destructor_for__CVarDeterminismGraphTestCycleLimit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeterminismGraphTestCycleLimit)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeterminismPermutationLimit'' @ 150419530

void __cdecl _dynamic_atexit_destructor_for__CVarDeterminismPermutationLimit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeterminismPermutationLimit);
  return;
}

// `dynamic_atexit_destructor_for_'DeterminismBasicTestInfo'' @ 150419550

void __cdecl
PCGDeterminismTests::Defaults::_dynamic_atexit_destructor_for__DeterminismBasicTestInfo__(void)

{
  longlong *plVar1;
  
  if (DeterminismBasicTestInfo.TestDelegate._0_8_ != 0) {
    plVar1 = (longlong *)&DeterminismBasicTestInfo.TestDelegate.field_0x10;
    if (DeterminismBasicTestInfo.TestDelegate._40_8_ != 0) {
      plVar1 = (longlong *)DeterminismBasicTestInfo.TestDelegate._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DeterminismBasicTestInfo.TestLabel.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeterminismBasicTestInfo.TestLabel.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeterminismOrderIndependenceInfo'' @ 1504195a0

void __cdecl
PCGDeterminismTests::Defaults::_dynamic_atexit_destructor_for__DeterminismOrderIndependenceInfo__
          (void)

{
  longlong *plVar1;
  
  if (DeterminismOrderIndependenceInfo.TestDelegate._0_8_ != 0) {
    plVar1 = (longlong *)&DeterminismOrderIndependenceInfo.TestDelegate.field_0x10;
    if (DeterminismOrderIndependenceInfo.TestDelegate._40_8_ != 0) {
      plVar1 = (longlong *)DeterminismOrderIndependenceInfo.TestDelegate._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DeterminismOrderIndependenceInfo.TestLabel.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504195dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeterminismOrderIndependenceInfo.TestLabel.TextData.Reference + 0x10))()
    ;
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAddTagTest_MultipleTagsAutomationTestInstance'' @ 1504195f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAddTagTest_MultipleTagsAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAddTagTest_MultipleTagsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAddTagTest_OneTagAutomationTestInstance'' @ 150419610

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPCGAddTagTest_OneTagAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAddTagTest_OneTagAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAddTagTest_ZeroTagsAutomationTestInstance'' @ 150419630

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAddTagTest_ZeroTagsAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAddTagTest_ZeroTagsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGApplyScaleToBoundsTest_BasicAutomationTestInstance'' @ 150419650

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGApplyScaleToBoundsTest_BasicAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGApplyScaleToBoundsTest_BasicAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGApplyScaleToBoundsTest_NegativeScaleAutomationTestInstance'' @ 150419670

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGApplyScaleToBoundsTest_NegativeScaleAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGApplyScaleToBoundsTest_NegativeScaleAutomationTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_AttributeSetBoolToDoubleAutomationTestInstance'' @ 150419690

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetBoolToDoubleAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeCast_AttributeSetBoolToDoubleAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_AttributeSetDoubleToBoolAutomationTestInstance'' @ 1504196b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetDoubleToBoolAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeCast_AttributeSetDoubleToBoolAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_AttributeSetDoubleToIntAutomationTestInstance'' @ 1504196d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetDoubleToIntAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_AttributeSetDoubleToIntAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_AttributeSetIntToDoubleAutomationTestInstance'' @ 1504196f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetIntToDoubleAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_AttributeSetIntToDoubleAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_AttributeSetIntToStringAutomationTestInstance'' @ 150419710

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetIntToStringAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_AttributeSetIntToStringAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_AttributeSetQuatToRotatorAutomationTestInstance'' @ 150419730

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_AttributeSetQuatToRotatorAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeCast_AttributeSetQuatToRotatorAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_InvalidCastAutomationTestInstance'' @ 150419750

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_InvalidCastAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_InvalidCastAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_PointsIntToDoubleAutomationTestInstance'' @ 150419770

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_PointsIntToDoubleAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_PointsIntToDoubleAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_PointsIntToDoubleToDensityAutomationTestInstance'' @ 150419790

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_PointsIntToDoubleToDensityAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeCast_PointsIntToDoubleToDensityAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeCast_SameTypeAutomationTestInstance'' @ 1504197b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeCast_SameTypeAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeCast_SameTypeAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilterIntAutomationTestInstance'' @ 1504197d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilterIntAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeFilterIntAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilterIntRangeAutomationTestInstance'' @ 1504197f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilterIntRangeAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeFilterIntRangeAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilterSkipTestBugAutomationTestInstance'' @ 150419810

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilterSkipTestBugAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGAttributeFilterSkipTestBugAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilter_AttributesRange_GenerateEmptyOutputAutomationTestInstance'' @ 150419830

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilter_AttributesRange_GenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_AttributesRange_GenerateEmptyOutputAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutputAutomationTestInstance'' @ 150419850

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_AttributesRange_NoGenerateEmptyOutputAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilter_Attributes_GenerateEmptyOutputAutomationTestInstance'' @ 150419870

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilter_Attributes_GenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_Attributes_GenerateEmptyOutputAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilter_Attributes_NoGenerateEmptyOutputAutomationTestInstance'' @ 150419890

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilter_Attributes_NoGenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_Attributes_NoGenerateEmptyOutputAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilter_PointsRange_GenerateEmptyOutputAutomationTestInstance'' @ 1504198b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilter_PointsRange_GenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_PointsRange_GenerateEmptyOutputAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutputAutomationTestInstance'' @ 1504198d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_PointsRange_NoGenerateEmptyOutputAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilter_Points_GenerateEmptyOutputAutomationTestInstance'' @ 1504198f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilter_Points_GenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_Points_GenerateEmptyOutputAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGAttributeFilter_Points_NoGenerateEmptyOutputAutomationTestInstance'' @ 150419910

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGAttributeFilter_Points_NoGenerateEmptyOutputAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGAttributeFilter_Points_NoGenerateEmptyOutputAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGDifferenceDataTestAutomationTestInstance'' @ 150419930

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGDifferenceDataTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGDifferenceDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGIntersectionDataTestAutomationTestInstance'' @ 150419950

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGIntersectionDataTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGIntersectionDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTestAutomationTestInstance'' @ 150419970

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &
             FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointArrayDataTestAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTestAutomationTestInstance'' @ 150419990

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataCopyPointsToFromPointArrayDataToPointDataTestAutomationTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTestAutomationTestInstance'' @ 1504199b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataCopyPointsToFromPointDataToPointArrayDataTestAutomationTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTestAutomationTestInstance'' @ 1504199d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataCopyPointsToFromPointDataToPointDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataCopyPropertyOverInheritedPropertyTestAutomationTestInstance'' @ 1504199f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataCopyPropertyOverInheritedPropertyTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataCopyPropertyOverInheritedPropertyTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataDisabledParentingTestAutomationTestInstance'' @ 150419a10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataDisabledParentingTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataDisabledParentingTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataDuplicateDataTestAutomationTestInstance'' @ 150419a30

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataDuplicateDataTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataDuplicateDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataFlattenTestAutomationTestInstance'' @ 150419a50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataFlattenTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataFlattenTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataInitializeFromDataTestAutomationTestInstance'' @ 150419a70

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataInitializeFromDataTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataInitializeFromDataTestAutomationTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataMultiLevelInheritanceTestAutomationTestInstance'' @ 150419a90

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataMultiLevelInheritanceTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGPointArrayDataMultiLevelInheritanceTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataToPointArrayDataTestAutomationTestInstance'' @ 150419ab0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataToPointArrayDataTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataToPointArrayDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointArrayDataToPointDataTestAutomationTestInstance'' @ 150419ad0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointArrayDataToPointDataTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointArrayDataToPointDataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointFilterDensityAutomationTestInstance'' @ 150419af0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointFilterDensityAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointFilterDensityAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGPointFilterDensityRangeAutomationTestInstance'' @ 150419b10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGPointFilterDensityRangeAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGPointFilterDensityRangeAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplineAccessorControlPointsMetadataTestAutomationTestInstance'' @ 150419b30

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplineAccessorControlPointsMetadataTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGSplineAccessorControlPointsMetadataTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplineAccessorControlPointsPropertyTestAutomationTestInstance'' @ 150419b50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplineAccessorControlPointsPropertyTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGSplineAccessorControlPointsPropertyTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150419b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

