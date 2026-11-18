// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 404

// NoPin'' @ 1411b4640

void __cdecl `dynamic_initializer_for_'FPCGGraphTaskInput::NoPin__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__);
  return;
}

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 1411b4660

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'AlphaAttributeName'' @ 1411b4680

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__AlphaAttributeName__(void)

{
  ::FName::FName(&AlphaAttributeName,L"Alpha");
  return;
}

// `dynamic_initializer_for_'ArriveTangentAttributeName'' @ 1411b46a0

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__ArriveTangentAttributeName__(void)

{
  ::FName::FName(&ArriveTangentAttributeName,L"ArriveTangent");
  return;
}

// `dynamic_initializer_for_'AttributeName'' @ 1411b46c0

void __cdecl SortCommonTestData::_dynamic_initializer_for__AttributeName__(void)

{
  ::FName::FName(&AttributeName,L"Attr");
  return;
}

// `dynamic_initializer_for_'BoundingShapeLabel'' @ 1411b46e0

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__BoundingShapeLabel__(void)

{
  ::FName::FName(&BoundingShapeLabel,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'BoundingShapeLabel'' @ 1411b4700

void __cdecl PCGSurfaceSamplerConstants::_dynamic_initializer_for__BoundingShapeLabel__(void)

{
  ::FName::FName(&BoundingShapeLabel,L"Bounding Shape");
  return;
}

// `dynamic_initializer_for_'CVarGraphExecutionCullingLoggingEnable'' @ 1411b4720

void __cdecl
PCGGraphExecutionLogging::_dynamic_initializer_for__CVarGraphExecutionCullingLoggingEnable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarGraphExecutionCullingLoggingEnable,L"pcg.GraphExecution.EnableCullingLogging",
             local_res8,L"Enables fine grained log of dynamic task culling during graph execution",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarGraphExecutionCullingLoggingEnable__);
  return;
}

// `dynamic_initializer_for_'CVarGraphExecutionLoggingEnable'' @ 1411b4770

void __cdecl
PCGGraphExecutionLogging::_dynamic_initializer_for__CVarGraphExecutionLoggingEnable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarGraphExecutionLoggingEnable,L"pcg.GraphExecution.EnableLogging",local_res8,
             L"Enables fine grained log of graph execution",0);
  atexit(_dynamic_atexit_destructor_for__CVarGraphExecutionLoggingEnable__);
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 1411b47c0

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 1411b47e0

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'ComponentAttachmentFailed'' @ 1411b4800

void __cdecl PCGLog::Component::Format::_dynamic_initializer_for__ComponentAttachmentFailed__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&ComponentAttachmentFailed,L"PCGLog",L"ComponentAttachmentFailed",
             L"Failed to attach the component, check the logs.");
  atexit(_dynamic_atexit_destructor_for__ComponentAttachmentFailed__);
  return;
}

// `dynamic_initializer_for_'CreateAccessorFailure'' @ 1411b4840

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_initializer_for__CreateAccessorFailure__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"CreateAccessorFailure",
                      L"Could not create accessor. Attribute \'{0}\' was not found.");
  FTextFormat::FTextFormat(&CreateAccessorFailure,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__CreateAccessorFailure__);
  return;
}

// `dynamic_initializer_for_'CreateAttributeFailure'' @ 1411b48a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_initializer_for__CreateAttributeFailure__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"CreateAttributeFailure",
                      L"Could not create attribute \'{0}\' of type \'{1}\'.");
  FTextFormat::FTextFormat(&CreateAttributeFailure,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__CreateAttributeFailure__);
  return;
}

// `dynamic_initializer_for_'CurvatureAttributeName'' @ 1411b4900

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__CurvatureAttributeName__(void)

{
  ::FName::FName(&CurvatureAttributeName,L"Curvature");
  return;
}

// `dynamic_initializer_for_'Data'' @ 1411b4920

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

// `dynamic_initializer_for_'DataDomainName'' @ 1411b4960

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'Default'' @ 1411b4980

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

// `dynamic_initializer_for_'DefaultActorLabel'' @ 1411b49c0

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultActorLabel__(void)

{
  ::FName::FName(&DefaultActorLabel,L"Actor");
  return;
}

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 1411b49e0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 1411b4a00

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 1411b4a20

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 1411b4a40

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411b4a60

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"Input");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411b4a80

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultLandscapeHeightLabel'' @ 1411b4aa0

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultLandscapeHeightLabel__(void)

{
  ::FName::FName(&DefaultLandscapeHeightLabel,L"Landscape Height");
  return;
}

// `dynamic_initializer_for_'DefaultLandscapeLabel'' @ 1411b4ac0

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultLandscapeLabel__(void)

{
  ::FName::FName(&DefaultLandscapeLabel,L"Landscape");
  return;
}

// `dynamic_initializer_for_'DefaultNewCustomPinName'' @ 1411b4ae0

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultNewCustomPinName__(void)

{
  ::FName::FName(&DefaultNewCustomPinName,L"NewPin");
  return;
}

// `dynamic_initializer_for_'DefaultOriginalActorLabel'' @ 1411b4b00

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultOriginalActorLabel__(void)

{
  ::FName::FName(&DefaultOriginalActorLabel,L"OriginalActor");
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 1411b4b20

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 1411b4b40

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 1411b4b60

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 1411b4b80

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 1411b4ba0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 1411b4bc0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'DefaultPathPinLabel'' @ 1411b4be0

void __cdecl PCGControlFlowConstants::_dynamic_initializer_for__DefaultPathPinLabel__(void)

{
  ::FName::FName(&DefaultPathPinLabel,L"Default");
  return;
}

// `dynamic_initializer_for_'DirectoryNotFound'' @ 1411b4c00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_initializer_for__DirectoryNotFound__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"DirectoryNotFound",
                      L"Directory was not found at given path: \'{0}\'");
  FTextFormat::FTextFormat(&DirectoryNotFound,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__DirectoryNotFound__);
  return;
}

// `dynamic_initializer_for_'DistanceAttributeName'' @ 1411b4c60

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__DistanceAttributeName__(void)

{
  ::FName::FName(&DistanceAttributeName,L"Distance");
  return;
}

// `dynamic_initializer_for_'Elements'' @ 1411b4c80

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

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411b4cc0

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411b4ce0

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'EmptyExpression'' @ 1411b4d00

void __cdecl PCGLog::Parsing::Format::_dynamic_initializer_for__EmptyExpression__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&EmptyExpression,L"PCGLog",L"EmptyExpression",L"Empty expression in parsed string.");
  atexit(_dynamic_atexit_destructor_for__EmptyExpression__);
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 1411b4d40

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FPCGCollapseSubgraphCombinationOfCollapsesAutomationTestInstance'' @ 1411b4d60

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGCollapseSubgraphCombinationOfCollapsesAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGCollapseSubgraphCombinationOfCollapses");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGCollapseSubgraphCombinationOfCollapsesAutomationTestInstance,&local_18,false);
  FPCGCollapseSubgraphCombinationOfCollapsesAutomationTestInstance._0_8_ =
       &___7FPCGCollapseSubgraphCombinationOfCollapses__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGCollapseSubgraphCombinationOfCollapsesAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGCollapseSubgraphSimpleAutomationTestInstance'' @ 1411b4dc0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGCollapseSubgraphSimpleAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGCollapseSubgraphSimple");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGCollapseSubgraphSimpleAutomationTestInstance,&local_18,
             false);
  FPCGCollapseSubgraphSimpleAutomationTestInstance._0_8_ = &___7FPCGCollapseSubgraphSimple__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGCollapseSubgraphSimpleAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGCollapseSubgraphWithParamsAutomationTestInstance'' @ 1411b4e20

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGCollapseSubgraphWithParamsAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGCollapseSubgraphWithParams");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGCollapseSubgraphWithParamsAutomationTestInstance,&local_18,
             false);
  FPCGCollapseSubgraphWithParamsAutomationTestInstance._0_8_ =
       &___7FPCGCollapseSubgraphWithParams__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGCollapseSubgraphWithParamsAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGParsingTest_BasicAutomationTestInstance'' @ 1411b4e80

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGParsingTest_BasicAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGParsingTest_Basic");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGParsingTest_BasicAutomationTestInstance,&local_18,false);
  FPCGParsingTest_BasicAutomationTestInstance._0_8_ = &___7FPCGParsingTest_Basic__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGParsingTest_BasicAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGParsingTest_RangesAutomationTestInstance'' @ 1411b4ee0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGParsingTest_RangesAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGParsingTest_Ranges");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGParsingTest_RangesAutomationTestInstance,&local_18,false);
  FPCGParsingTest_RangesAutomationTestInstance._0_8_ = &___7FPCGParsingTest_Ranges__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGParsingTest_RangesAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGParsingTest_RobustnessAutomationTestInstance'' @ 1411b4f40

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGParsingTest_RobustnessAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGParsingTest_Robustness");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGParsingTest_RobustnessAutomationTestInstance,&local_18,
             false);
  FPCGParsingTest_RobustnessAutomationTestInstance._0_8_ = &___7FPCGParsingTest_Robustness__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGParsingTest_RobustnessAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSanityCheckPointData_MaxPointCountAutomationTestInstance'' @ 1411b4fa0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSanityCheckPointData_MaxPointCountAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSanityCheckPointData_MaxPointCount");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSanityCheckPointData_MaxPointCountAutomationTestInstance,
             &local_18,false);
  FPCGSanityCheckPointData_MaxPointCountAutomationTestInstance._0_8_ =
       &___7FPCGSanityCheckPointData_MaxPointCount__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGSanityCheckPointData_MaxPointCountAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGSanityCheckPointData_MinPointCountAutomationTestInstance'' @ 1411b5000

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSanityCheckPointData_MinPointCountAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSanityCheckPointData_MinPointCount");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSanityCheckPointData_MinPointCountAutomationTestInstance,
             &local_18,false);
  FPCGSanityCheckPointData_MinPointCountAutomationTestInstance._0_8_ =
       &___7FPCGSanityCheckPointData_MinPointCount__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGSanityCheckPointData_MinPointCountAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGSanityCheckPointData_SuccessAutomationTestInstance'' @ 1411b5060

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSanityCheckPointData_SuccessAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSanityCheckPointData_Success");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSanityCheckPointData_SuccessAutomationTestInstance,
             &local_18,false);
  FPCGSanityCheckPointData_SuccessAutomationTestInstance._0_8_ =
       &___7FPCGSanityCheckPointData_Success__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSanityCheckPointData_SuccessAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSortAttributesTest_AscendingAutomationTestInstance'' @ 1411b50c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSortAttributesTest_AscendingAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSortAttributesTest_Ascending");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortAttributesTest_AscendingAutomationTestInstance,
             &local_18,false);
  FPCGSortAttributesTest_AscendingAutomationTestInstance._0_8_ =
       &___7FPCGSortAttributesTest_Ascending__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSortAttributesTest_AscendingAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSortAttributesTest_DescendingAutomationTestInstance'' @ 1411b5120

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSortAttributesTest_DescendingAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSortAttributesTest_Descending");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortAttributesTest_DescendingAutomationTestInstance,
             &local_18,false);
  FPCGSortAttributesTest_DescendingAutomationTestInstance._0_8_ =
       &___7FPCGSortAttributesTest_Descending__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSortAttributesTest_DescendingAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSortAttributesTest_SameValuesAutomationTestInstance'' @ 1411b5180

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSortAttributesTest_SameValuesAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSortAttributesTest_SameValues");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortAttributesTest_SameValuesAutomationTestInstance,
             &local_18,false);
  FPCGSortAttributesTest_SameValuesAutomationTestInstance._0_8_ =
       &___7FPCGSortAttributesTest_SameValues__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSortAttributesTest_SameValuesAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSortPointsTest_AscendingAutomationTestInstance'' @ 1411b51e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSortPointsTest_AscendingAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSortPointsTest_Ascending");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortPointsTest_AscendingAutomationTestInstance,&local_18,
             false);
  FPCGSortPointsTest_AscendingAutomationTestInstance._0_8_ = &___7FPCGSortPointsTest_Ascending__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSortPointsTest_AscendingAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSortPointsTest_DescendingAutomationTestInstance'' @ 1411b5240

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSortPointsTest_DescendingAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSortPointsTest_Descending");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortPointsTest_DescendingAutomationTestInstance,&local_18,
             false);
  FPCGSortPointsTest_DescendingAutomationTestInstance._0_8_ =
       &___7FPCGSortPointsTest_Descending__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSortPointsTest_DescendingAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSortPointsTest_SameValuesAutomationTestInstance'' @ 1411b52a0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSortPointsTest_SameValuesAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSortPointsTest_SameValues");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortPointsTest_SameValuesAutomationTestInstance,&local_18,
             false);
  FPCGSortPointsTest_SameValuesAutomationTestInstance._0_8_ =
       &___7FPCGSortPointsTest_SameValues__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSortPointsTest_SameValuesAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSpatialNoise_CalcLocalCoordinates2DAutomationTestInstance'' @ 1411b5300

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSpatialNoise_CalcLocalCoordinates2DAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSpatialNoise_CalcLocalCoordinates2D");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_CalcLocalCoordinates2DAutomationTestInstance,
             &local_18,false);
  FPCGSpatialNoise_CalcLocalCoordinates2DAutomationTestInstance._0_8_ =
       &___7FPCGSpatialNoise_CalcLocalCoordinates2D__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGSpatialNoise_CalcLocalCoordinates2DAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGSpatialNoise_Caustic2DAutomationTestInstance'' @ 1411b5360

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSpatialNoise_Caustic2DAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSpatialNoise_Caustic2D");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_Caustic2DAutomationTestInstance,&local_18,
             false);
  FPCGSpatialNoise_Caustic2DAutomationTestInstance._0_8_ = &___7FPCGSpatialNoise_Caustic2D__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSpatialNoise_Caustic2DAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSpatialNoise_EdgeMask2DAutomationTestInstance'' @ 1411b53c0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSpatialNoise_EdgeMask2DAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSpatialNoise_EdgeMask2D");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_EdgeMask2DAutomationTestInstance,&local_18,
             false);
  FPCGSpatialNoise_EdgeMask2DAutomationTestInstance._0_8_ = &___7FPCGSpatialNoise_EdgeMask2D__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSpatialNoise_EdgeMask2DAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSpatialNoise_FractionalBrownian2DAutomationTestInstance'' @ 1411b5420

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSpatialNoise_FractionalBrownian2DAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSpatialNoise_FractionalBrownian2D");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_FractionalBrownian2DAutomationTestInstance,
             &local_18,false);
  FPCGSpatialNoise_FractionalBrownian2DAutomationTestInstance._0_8_ =
       &___7FPCGSpatialNoise_FractionalBrownian2D__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGSpatialNoise_FractionalBrownian2DAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGSpatialNoise_Perlin2DAutomationTestInstance'' @ 1411b5480

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSpatialNoise_Perlin2DAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSpatialNoise_Perlin2D");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_Perlin2DAutomationTestInstance,&local_18,false
            );
  FPCGSpatialNoise_Perlin2DAutomationTestInstance._0_8_ = &___7FPCGSpatialNoise_Perlin2D__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSpatialNoise_Perlin2DAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSpatialNoise_TilingPerlin2DAutomationTestInstance'' @ 1411b54e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSpatialNoise_TilingPerlin2DAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSpatialNoise_TilingPerlin2D");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_TilingPerlin2DAutomationTestInstance,&local_18
             ,false);
  FPCGSpatialNoise_TilingPerlin2DAutomationTestInstance._0_8_ =
       &___7FPCGSpatialNoise_TilingPerlin2D__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSpatialNoise_TilingPerlin2DAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSpatialNoise_TilingVoronoi2DAutomationTestInstance'' @ 1411b5540

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSpatialNoise_TilingVoronoi2DAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSpatialNoise_TilingVoronoi2D");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_TilingVoronoi2DAutomationTestInstance,
             &local_18,false);
  FPCGSpatialNoise_TilingVoronoi2DAutomationTestInstance._0_8_ =
       &___7FPCGSpatialNoise_TilingVoronoi2D__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSpatialNoise_TilingVoronoi2DAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSpatialNoise_Voronoi2DAutomationTestInstance'' @ 1411b55a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSpatialNoise_Voronoi2DAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSpatialNoise_Voronoi2D");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_Voronoi2DAutomationTestInstance,&local_18,
             false);
  FPCGSpatialNoise_Voronoi2DAutomationTestInstance._0_8_ = &___7FPCGSpatialNoise_Voronoi2D__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSpatialNoise_Voronoi2DAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_DefaultXAutomationTestInstance'' @ 1411b5600

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSplitPointsTest_DefaultXAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_DefaultX");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_DefaultXAutomationTestInstance,&local_18,
             false);
  FPCGSplitPointsTest_DefaultXAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_DefaultX__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_DefaultXAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_DefaultYAutomationTestInstance'' @ 1411b5660

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSplitPointsTest_DefaultYAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_DefaultY");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_DefaultYAutomationTestInstance,&local_18,
             false);
  FPCGSplitPointsTest_DefaultYAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_DefaultY__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_DefaultYAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_DefaultZAutomationTestInstance'' @ 1411b56c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGSplitPointsTest_DefaultZAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_DefaultZ");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_DefaultZAutomationTestInstance,&local_18,
             false);
  FPCGSplitPointsTest_DefaultZAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_DefaultZ__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_DefaultZAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_OneXAutomationTestInstance'' @ 1411b5720

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSplitPointsTest_OneXAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_OneX");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_OneXAutomationTestInstance,&local_18,false)
  ;
  FPCGSplitPointsTest_OneXAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_OneX__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_OneXAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_OneYAutomationTestInstance'' @ 1411b5780

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSplitPointsTest_OneYAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_OneY");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_OneYAutomationTestInstance,&local_18,false)
  ;
  FPCGSplitPointsTest_OneYAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_OneY__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_OneYAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_OneZAutomationTestInstance'' @ 1411b57e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSplitPointsTest_OneZAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_OneZ");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_OneZAutomationTestInstance,&local_18,false)
  ;
  FPCGSplitPointsTest_OneZAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_OneZ__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_OneZAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_ZeroXAutomationTestInstance'' @ 1411b5840

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSplitPointsTest_ZeroXAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_ZeroX");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_ZeroXAutomationTestInstance,&local_18,false
            );
  FPCGSplitPointsTest_ZeroXAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_ZeroX__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_ZeroXAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_ZeroYAutomationTestInstance'' @ 1411b58a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSplitPointsTest_ZeroYAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_ZeroY");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_ZeroYAutomationTestInstance,&local_18,false
            );
  FPCGSplitPointsTest_ZeroYAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_ZeroY__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_ZeroYAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGSplitPointsTest_ZeroZAutomationTestInstance'' @ 1411b5900

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPCGSplitPointsTest_ZeroZAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGSplitPointsTest_ZeroZ");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_ZeroZAutomationTestInstance,&local_18,false
            );
  FPCGSplitPointsTest_ZeroZAutomationTestInstance._0_8_ = &___7FPCGSplitPointsTest_ZeroZ__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGSplitPointsTest_ZeroZAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPCGStaticMeshSpawnerByAttributeTestAutomationTestInstance'' @ 1411b5960

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGStaticMeshSpawnerByAttributeTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGStaticMeshSpawnerByAttributeTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGStaticMeshSpawnerByAttributeTestAutomationTestInstance,
             &local_18,false);
  FPCGStaticMeshSpawnerByAttributeTestAutomationTestInstance._0_8_ =
       &___7FPCGStaticMeshSpawnerByAttributeTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGStaticMeshSpawnerByAttributeTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGStaticMeshSpawnerWeightedByCategoryTestAutomationTestInstance'' @ 1411b59c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGStaticMeshSpawnerWeightedByCategoryTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGStaticMeshSpawnerWeightedByCategoryTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGStaticMeshSpawnerWeightedByCategoryTestAutomationTestInstance,&local_18,false);
  FPCGStaticMeshSpawnerWeightedByCategoryTestAutomationTestInstance._0_8_ =
       &___7FPCGStaticMeshSpawnerWeightedByCategoryTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPCGStaticMeshSpawnerWeightedByCategoryTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FPCGStaticMeshSpawnerWeightedTestAutomationTestInstance'' @ 1411b5a20

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPCGStaticMeshSpawnerWeightedTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPCGStaticMeshSpawnerWeightedTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPCGStaticMeshSpawnerWeightedTestAutomationTestInstance,
             &local_18,false);
  FPCGStaticMeshSpawnerWeightedTestAutomationTestInstance._0_8_ =
       &___7FPCGStaticMeshSpawnerWeightedTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPCGStaticMeshSpawnerWeightedTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 1411b5a80

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'FileNotFound'' @ 1411b5aa0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_initializer_for__FileNotFound__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"FileNotFound",
                      L"File was not found at given path: \'{0}\'");
  FTextFormat::FTextFormat(&FileNotFound,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__FileNotFound__);
  return;
}

// `dynamic_initializer_for_'FirstInputOnly'' @ 1411b5b00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_initializer_for__FirstInputOnly__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"FirstInputOnly",
                      L"Multiple inputs found on single-input pin \'{0}\'. Only the first will be selected."
                     );
  FTextFormat::FTextFormat(&FirstInputOnly,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__FirstInputOnly__);
  return;
}

// `dynamic_initializer_for_'GetAttributeFailure'' @ 1411b5b60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_initializer_for__GetAttributeFailure__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"GetAttributeFailure",
                      L"Could not retrieve attribute \'{0}\' value.");
  FTextFormat::FTextFormat(&GetAttributeFailure,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__GetAttributeFailure__);
  return;
}

// `dynamic_initializer_for_'GetTypedAttributeFailure'' @ 1411b5bc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_initializer_for__GetTypedAttributeFailure__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"GetTypedAttributeFailure",
                      L"Could not retrieve attribute \'{0}\' value. Expected type: {1}, Actual Type: {2}."
                     );
  FTextFormat::FTextFormat(&GetTypedAttributeFailure,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__GetTypedAttributeFailure__);
  return;
}

// `dynamic_initializer_for_'GetTypedAttributeFailureNoAccessor'' @ 1411b5c20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::Format::_dynamic_initializer_for__GetTypedAttributeFailureNoAccessor__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"GetTypedAttributeFailureNoAccessor",
                      L"Could not retrieve attribute \'{0}\' value of type: \'{1}.");
  FTextFormat::FTextFormat(&GetTypedAttributeFailureNoAccessor,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__GetTypedAttributeFailureNoAccessor__);
  return;
}

// `dynamic_initializer_for_'IncomparableTypesFailure'' @ 1411b5c80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_initializer_for__IncomparableTypesFailure__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"IncomparableTypesFailure",
                      L"Attributes \'{0}\' and \'{1}\' are incomparable. Ensure they are either of the same or compatible types."
                     );
  FTextFormat::FTextFormat(&IncomparableTypesFailure,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__IncomparableTypesFailure__);
  return;
}

// `dynamic_initializer_for_'InputKeyAttributeName'' @ 1411b5ce0

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__InputKeyAttributeName__(void)

{
  ::FName::FName(&InputKeyAttributeName,L"InputKey");
  return;
}

// `dynamic_initializer_for_'InputPointLabel'' @ 1411b5d00

void __cdecl PCGSampleTextureConstants::_dynamic_initializer_for__InputPointLabel__(void)

{
  ::FName::FName(&InputPointLabel,L"Point");
  return;
}

// `dynamic_initializer_for_'InputTextureLabel'' @ 1411b5d20

void __cdecl PCGSampleTextureConstants::_dynamic_initializer_for__InputTextureLabel__(void)

{
  ::FName::FName(&InputTextureLabel,L"BaseTexture");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 1411b5d40

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

// `dynamic_initializer_for_'InvalidCardinality'' @ 1411b5d80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_initializer_for__InvalidCardinality__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"InvalidCardinality",
                      L"Invalid cardinality among pins \'{0}\' and \'{1}\'. They must match 1:1, N:1, or N:N."
                     );
  FTextFormat::FTextFormat(&InvalidCardinality,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__InvalidCardinality__);
  return;
}

// `dynamic_initializer_for_'InvalidCharacter'' @ 1411b5de0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Parsing::Format::_dynamic_initializer_for__InvalidCharacter__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"InvalidCharacter",
                      L"Invalid character in parsed string: \'{0}\'.");
  FTextFormat::FTextFormat(&InvalidCharacter,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__InvalidCharacter__);
  return;
}

// `dynamic_initializer_for_'InvalidConversion'' @ 1411b5e40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Settings::Format::_dynamic_initializer_for__InvalidConversion__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"InvalidConversion",
                      L"Invalid conversion for preconfiguration index \'{0}\' for node settings \'{1}\'. Reason: {2}"
                     );
  FTextFormat::FTextFormat(&InvalidConversion,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__InvalidConversion__);
  return;
}

// `dynamic_initializer_for_'InvalidExpression'' @ 1411b5ea0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Parsing::Format::_dynamic_initializer_for__InvalidExpression__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"InvalidExpression",
                      L"Invalid expression in parsed string: \'{0}\'.");
  FTextFormat::FTextFormat(&InvalidExpression,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__InvalidExpression__);
  return;
}

// `dynamic_initializer_for_'InvalidFileType'' @ 1411b5f00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_initializer_for__InvalidFileType__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"InvalidFileType",
                      L"File was of the wrong type: \'{0}\' Expected type: {1}");
  FTextFormat::FTextFormat(&InvalidFileType,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__InvalidFileType__);
  return;
}

// `dynamic_initializer_for_'InvalidInputData'' @ 1411b5f60

void __cdecl PCGLog::InputOutput::Format::_dynamic_initializer_for__InvalidInputData__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&InvalidInputData,L"PCGLog",L"InvalidInputData",L"Invalid input data.");
  atexit(_dynamic_atexit_destructor_for__InvalidInputData__);
  return;
}

// `dynamic_initializer_for_'InvalidMetadata'' @ 1411b5fa0

void __cdecl PCGLog::Metadata::Format::_dynamic_initializer_for__InvalidMetadata__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&InvalidMetadata,L"PCGLog",L"InvalidMetadata",
             L"Metadata is unsupported or invalid for this data.");
  atexit(_dynamic_atexit_destructor_for__InvalidMetadata__);
  return;
}

// `dynamic_initializer_for_'InvalidMetadataDomain'' @ 1411b5fe0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_initializer_for__InvalidMetadataDomain__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"InvalidMetadataDomain",
                      L"Metadata domain {0} is invalid for this data.");
  FTextFormat::FTextFormat(&InvalidMetadataDomain,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__InvalidMetadataDomain__);
  return;
}

// `dynamic_initializer_for_'InvalidPreconfiguration'' @ 1411b6040

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Settings::Format::_dynamic_initializer_for__InvalidPreconfiguration__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"InvalidPreconfiguration",
                      L"Invalid preconfiguration index \'{0}\' for node settings \'{1}\'. Default settings will be used."
                     );
  FTextFormat::FTextFormat(&InvalidPreconfiguration,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__InvalidPreconfiguration__);
  return;
}

// `dynamic_initializer_for_'LandscapeCacheNotAvailable'' @ 1411b60a0

void __cdecl PCGLog::Landscape::Format::_dynamic_initializer_for__LandscapeCacheNotAvailable__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&LandscapeCacheNotAvailable,L"PCGLog",L"LandscapeCacheNotAvailableInPIEOrCookedBuilds",
             L"PCG Landscape cache (on the PCG World Actor) is not set to be serialized and will not work in non-editor modes."
            );
  atexit(_dynamic_atexit_destructor_for__LandscapeCacheNotAvailable__);
  return;
}

// `dynamic_initializer_for_'LastAttributeName'' @ 1411b60e0

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 1411b6100

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LeaveTangentAttributeName'' @ 1411b6120

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__LeaveTangentAttributeName__(void)

{
  ::FName::FName(&LeaveTangentAttributeName,L"LeaveTangent");
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 1411b6140

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 1411b6160

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 1411b6180

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 1411b61a0

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'NextDirectionDeltaAttributeName'' @ 1411b61c0

void __cdecl
PCGSplineSamplerConstants::_dynamic_initializer_for__NextDirectionDeltaAttributeName__(void)

{
  ::FName::FName(&NextDirectionDeltaAttributeName,L"NextDirectionDelta");
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 1411b61e0

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 1411b6200

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 1411b6220

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 1411b6240

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 1411b6260

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 1411b6280

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 1411b62a0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 1411b62c0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 1411b62e0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 1411b6300

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 1411b6320

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SegmentIndexAttributeName'' @ 1411b6340

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__SegmentIndexAttributeName__(void)

{
  ::FName::FName(&SegmentIndexAttributeName,L"SegmentIndex");
  return;
}

// `dynamic_initializer_for_'SetTypedAttributeFailure'' @ 1411b6360

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_initializer_for__SetTypedAttributeFailure__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"SetTypedAttributeFailure",
                      L"Could not set value in attribute \'{0}\'. Attribute type: {1}, Value Type: {2}."
                     );
  FTextFormat::FTextFormat(&SetTypedAttributeFailure,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__SetTypedAttributeFailure__);
  return;
}

// `dynamic_initializer_for_'SetTypedAttributeFailureNoAccessor'' @ 1411b63c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::Format::_dynamic_initializer_for__SetTypedAttributeFailureNoAccessor__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"SetTypedAttributeFailureNoAccessor",
                      L"Could not set value in attribute \'{0}\' value of type: \'{1}.");
  FTextFormat::FTextFormat(&SetTypedAttributeFailureNoAccessor,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__SetTypedAttributeFailureNoAccessor__);
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 1411b6420

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 1411b6440

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'SplineLabel'' @ 1411b6460

void __cdecl PCGSplineSamplerConstants::_dynamic_initializer_for__SplineLabel__(void)

{
  ::FName::FName(&SplineLabel,L"Spline");
  return;
}

// `dynamic_initializer_for_'SubsegmentIndexAttributeName'' @ 1411b6480

void __cdecl
PCGSplineSamplerConstants::_dynamic_initializer_for__SubsegmentIndexAttributeName__(void)

{
  ::FName::FName(&SubsegmentIndexAttributeName,L"SubsegmentIndex");
  return;
}

// `dynamic_initializer_for_'SubtitleEnum'' @ 1411b64a0

void __cdecl PCGControlFlowConstants::_dynamic_initializer_for__SubtitleEnum__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SubtitleEnum,L"FPCGControlFlow",L"SubtitleEnum",L"Enum Selection");
  atexit(_dynamic_atexit_destructor_for__SubtitleEnum__);
  return;
}

// `dynamic_initializer_for_'SubtitleInt'' @ 1411b64e0

void __cdecl PCGControlFlowConstants::_dynamic_initializer_for__SubtitleInt__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SubtitleInt,L"FPCGControlFlow",L"SubtitleInt",L"Integer Selection");
  atexit(_dynamic_atexit_destructor_for__SubtitleInt__);
  return;
}

// `dynamic_initializer_for_'SubtitleString'' @ 1411b6520

void __cdecl PCGControlFlowConstants::_dynamic_initializer_for__SubtitleString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&SubtitleString,L"FPCGControlFlow",L"SubtitleString",L"String Selection");
  atexit(_dynamic_atexit_destructor_for__SubtitleString__);
  return;
}

// `dynamic_initializer_for_'SurfaceLabel'' @ 1411b6560

void __cdecl PCGSurfaceSamplerConstants::_dynamic_initializer_for__SurfaceLabel__(void)

{
  ::FName::FName(&SurfaceLabel,L"Surface");
  return;
}

// `dynamic_initializer_for_'TypedInputNotFound'' @ 1411b6580

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_initializer_for__TypedInputNotFound__(void)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGLog",L"TypedInputNotFound",
                      L"Data of type {0} not found on pin \'{1}\'.");
  FTextFormat::FTextFormat(&TypedInputNotFound,pFVar1,Default);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  atexit(_dynamic_atexit_destructor_for__TypedInputNotFound__);
  return;
}

// `dynamic_initializer_for_'UserParameterTagData'' @ 1411b65e0

void __cdecl PCGBaseSubgraphConstants::_dynamic_initializer_for__UserParameterTagData__(void)

{
  ::FString::FString(&UserParameterTagData,L"PCGUserParametersTagData");
  atexit(_dynamic_atexit_destructor_for__UserParameterTagData__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_GraphAuthoring_PCGGraphAuthoringTestHelperSettings_h__Script_PCG_605614357'' @ 1411b6610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_GraphAuthoring_PCGGraphAuthoringTestHelperSettings_h__Script_PCG_605614357__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Tests_GraphAuthoring_PCGGraphAuthoringTestHelperSettings_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `scalar_deleting_destructor' @ 149ffb160

void * __thiscall
FPCGSanityCheckPointData_MinPointCount::_scalar_deleting_destructor_
          (FPCGSanityCheckPointData_MinPointCount *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ffb700

void * __thiscall
FPCGSanityCheckPointData_MaxPointCount::_scalar_deleting_destructor_
          (FPCGSanityCheckPointData_MaxPointCount *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ffbd80

void * __thiscall
FPCGSanityCheckPointData_Success::_scalar_deleting_destructor_
          (FPCGSanityCheckPointData_Success *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ffd360

void * __thiscall
FPCGStaticMeshSpawnerByAttributeTest::_scalar_deleting_destructor_
          (FPCGStaticMeshSpawnerByAttributeTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ffe560

void * __thiscall
FPCGStaticMeshSpawnerWeightedTest::_scalar_deleting_destructor_
          (FPCGStaticMeshSpawnerWeightedTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0022a0

void * __thiscall
FPCGStaticMeshSpawnerWeightedByCategoryTest::_scalar_deleting_destructor_
          (FPCGStaticMeshSpawnerWeightedByCategoryTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a002b20

void * __thiscall
FPCGSortPointsTest_Ascending::_scalar_deleting_destructor_
          (FPCGSortPointsTest_Ascending *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a003760

void * __thiscall
FPCGCollapseSubgraphSimple::_scalar_deleting_destructor_
          (FPCGCollapseSubgraphSimple *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0044d0

void * __thiscall
FPCGCollapseSubgraphWithParams::_scalar_deleting_destructor_
          (FPCGCollapseSubgraphWithParams *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a005790

void * __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::_scalar_deleting_destructor_
          (FPCGCollapseSubgraphCombinationOfCollapses *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings @ 14a005890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a006070

void * __thiscall
FPCGSortAttributesTest_Ascending::_scalar_deleting_destructor_
          (FPCGSortAttributesTest_Ascending *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0068f0

void * __thiscall
FPCGSortPointsTest_Descending::_scalar_deleting_destructor_
          (FPCGSortPointsTest_Descending *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0070d0

void * __thiscall
FPCGSortAttributesTest_Descending::_scalar_deleting_destructor_
          (FPCGSortAttributesTest_Descending *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a007ee0

void * __thiscall
FPCGSortPointsTest_SameValues::_scalar_deleting_destructor_
          (FPCGSortPointsTest_SameValues *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a008770

void * __thiscall
FPCGSortAttributesTest_SameValues::_scalar_deleting_destructor_
          (FPCGSortAttributesTest_SameValues *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0099b0

void * __thiscall
FPCGParsingTest_Basic::_scalar_deleting_destructor_(FPCGParsingTest_Basic *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a00b960

void * __thiscall
FPCGParsingTest_Ranges::_scalar_deleting_destructor_(FPCGParsingTest_Ranges *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a00c360

void * __thiscall
FPCGSpatialNoise_CalcLocalCoordinates2D::_scalar_deleting_destructor_
          (FPCGSpatialNoise_CalcLocalCoordinates2D *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a00cb30

void * __thiscall
FPCGSpatialNoise_Perlin2D::_scalar_deleting_destructor_
          (FPCGSpatialNoise_Perlin2D *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a00f0f0

void * __thiscall
FPCGSpatialNoise_Caustic2D::_scalar_deleting_destructor_
          (FPCGSpatialNoise_Caustic2D *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a00f130

void * __thiscall
FPCGParsingTest_Robustness::_scalar_deleting_destructor_
          (FPCGParsingTest_Robustness *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a00fa00

void * __thiscall
FPCGSpatialNoise_Voronoi2D::_scalar_deleting_destructor_
          (FPCGSpatialNoise_Voronoi2D *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0101d0

void * __thiscall
FPCGSpatialNoise_FractionalBrownian2D::_scalar_deleting_destructor_
          (FPCGSpatialNoise_FractionalBrownian2D *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0109a0

void * __thiscall
FPCGSpatialNoise_EdgeMask2D::_scalar_deleting_destructor_
          (FPCGSpatialNoise_EdgeMask2D *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a011180

void * __thiscall
FPCGSpatialNoise_TilingPerlin2D::_scalar_deleting_destructor_
          (FPCGSpatialNoise_TilingPerlin2D *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a011a60

void * __thiscall
FPCGSpatialNoise_TilingVoronoi2D::_scalar_deleting_destructor_
          (FPCGSpatialNoise_TilingVoronoi2D *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a011aa0

void * __thiscall
FPCGSplitPointTestBase::_scalar_deleting_destructor_(FPCGSplitPointTestBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a011df0

void * __thiscall
FPCGSplitPointsTest_DefaultX::_scalar_deleting_destructor_
          (FPCGSplitPointsTest_DefaultX *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a012140

void * __thiscall
FPCGSplitPointsTest_DefaultY::_scalar_deleting_destructor_
          (FPCGSplitPointsTest_DefaultY *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a012490

void * __thiscall
FPCGSplitPointsTest_DefaultZ::_scalar_deleting_destructor_
          (FPCGSplitPointsTest_DefaultZ *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0127e0

void * __thiscall
FPCGSplitPointsTest_ZeroX::_scalar_deleting_destructor_
          (FPCGSplitPointsTest_ZeroX *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a012b30

void * __thiscall
FPCGSplitPointsTest_ZeroY::_scalar_deleting_destructor_
          (FPCGSplitPointsTest_ZeroY *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a012e80

void * __thiscall
FPCGSplitPointsTest_ZeroZ::_scalar_deleting_destructor_
          (FPCGSplitPointsTest_ZeroZ *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a0131c0

void * __thiscall
FPCGSplitPointsTest_OneX::_scalar_deleting_destructor_(FPCGSplitPointsTest_OneX *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a013500

void * __thiscall
FPCGSplitPointsTest_OneY::_scalar_deleting_destructor_(FPCGSplitPointsTest_OneY *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a013850

void * __thiscall
FPCGSplitPointsTest_OneZ::_scalar_deleting_destructor_(FPCGSplitPointsTest_OneZ *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 14a013890

UPCGPointData * __cdecl
`PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  code *pcVar1;
  bool bVar2;
  UPCGPointData *pUVar3;
  
  pUVar3 = PCGTestsCommon::CreateEmptyPointData<UPCGPointData,0>();
  if (pUVar3 == (UPCGPointData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SinglePointData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGPointData *)(*pcVar1)();
      return pUVar3;
    }
  }
  (**(code **)(pUVar3->_padding_ + 0x490))(pUVar3,1,1);
  return pUVar3;
}

// <lambda_invoker_cdecl> @ 14a0138f0

UPCGPolyLineData * __cdecl
`PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return (UPCGPolyLineData *)0x0;
}

// <lambda_invoker_cdecl> @ 14a013900

UPCGSurfaceData * __cdecl
`PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_3>::<lambda_invoker_cdecl>(void)

{
  return (UPCGSurfaceData *)0x0;
}

// <lambda_invoker_cdecl> @ 14a013910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGVolumeData * __cdecl
`PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_4>::<lambda_invoker_cdecl>(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGVolumeData *this;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [128];
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_38 = 1;
  local_68._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4059000000000000;
  local_48 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4059000000000000 +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4059000000000000;
  local_50 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4059000000000000 +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_68._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4059000000000000;
  local_40 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4059000000000000 +
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e8,pUVar2);
  local_e8._8_8_ = pUVar1;
  this = (UPCGVolumeData *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
  if (local_e8._64_8_ != 0) {
    plVar3 = (longlong *)(local_e8 + 0x50);
    if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_e8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UPCGVolumeData::Initialize(this,(TBox<double> *)&local_68._s_0);
  return this;
}

// <lambda_invoker_cdecl> @ 14a013a70

UPCGPrimitiveData * __cdecl
`PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_5>::<lambda_invoker_cdecl>(void)

{
  return (UPCGPrimitiveData *)0x0;
}

// <lambda_invoker_cdecl> @ 14a013a80

UPCGParamData * __cdecl
`PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_6>::<lambda_invoker_cdecl>(void)

{
  UObject *pUVar1;
  UPCGParamData *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UPCGParamData>(pUVar1);
  return pUVar2;
}

// Cast<UStaticMesh,UObject> @ 14a013ce0

UStaticMesh * __cdecl Cast<UStaticMesh,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UStaticMesh *)param_1;
    }
  }
  return (UStaticMesh *)0x0;
}

// CastChecked<UPCGSanityCheckPointDataSettings,UPCGSettings> @ 14a013d30

UPCGSanityCheckPointDataSettings * __cdecl
CastChecked<UPCGSanityCheckPointDataSettings,UPCGSettings>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGSanityCheckPointDataSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGSanityCheckPointDataSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGSanityCheckPointDataSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGSanityCheckPointDataSettings>(&local_28);
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

// CastChecked<UPCGSpatialNoiseSettings,UPCGSettings> @ 14a013df0

UPCGSpatialNoiseSettings * __cdecl
CastChecked<UPCGSpatialNoiseSettings,UPCGSettings>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGSpatialNoiseSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGSpatialNoiseSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGSpatialNoiseSettings>(&local_28);
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

// CastChecked<UPCGSplitPointsSettings,UPCGSettings> @ 14a013eb0

UPCGSplitPointsSettings * __cdecl
CastChecked<UPCGSplitPointsSettings,UPCGSettings>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGSplitPointsSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGSplitPointsSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGSplitPointsSettings>(&local_28);
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

// CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings> @ 14a013f70

UPCGStaticMeshSpawnerSettings * __cdecl
CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings>(UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pFVar3 = GetTypeName<UPCGStaticMeshSpawnerSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPCGStaticMeshSpawnerSettings *)param_1;
  }
  pFVar3 = GetTypeName<UPCGStaticMeshSpawnerSettings>(&local_28);
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

// ConstructItems<FPCGWeightedByCategoryEntryList,FPCGWeightedByCategoryEntryList,int> @ 14a014030

void __cdecl
ConstructItems<FPCGWeightedByCategoryEntryList,FPCGWeightedByCategoryEntryList,int>
          (void *param_1,FPCGWeightedByCategoryEntryList *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FPCGMeshSelectorWeightedEntry *pFVar3;
  int *piVar4;
  bool *pbVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x24);
    pbVar5 = &param_2->IsDefault;
    do {
      FString::FString((FString *)(pbVar5 + (longlong)param_1 + (-0x10 - (longlong)param_2)),
                       (FString *)(pbVar5 + -0x10));
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      *(bool *)(piVar4 + -5) = *pbVar5;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(pbVar5 + 0x10);
      pFVar3 = (FPCGMeshSelectorWeightedEntry *)
               (((TArray<FPCGMeshSelectorWeightedEntry,TSizedDefaultAllocator<32>_> *)(pbVar5 + 8))
               ->AllocatorInstance).Data;
      piVar4[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x288,8,iVar2,0,pFVar1,iVar2,piVar4);
        ConstructItems<FPCGMeshSelectorWeightedEntry,FPCGMeshSelectorWeightedEntry,int>
                  (pFVar1->Data,pFVar3,iVar2);
      }
      pbVar5 = pbVar5 + 0x28;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreatePointData<UPCGPointArrayData,0> @ 14a014190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UPCGPointArrayData * __cdecl
PCGTestsCommon::CreatePointData<UPCGPointArrayData,0>(TVector<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  UPCGPointArrayData *pUVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  int local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar6 = CreateEmptyPointData<UPCGPointArrayData,0>();
  if (pUVar6 == (UPCGPointArrayData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SinglePointData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPCGPointArrayData *)(*pcVar2)();
      return pUVar6;
    }
  }
  (**(code **)(pUVar6->_padding_ + 0x490))(pUVar6,1,1);
  iVar5 = (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
  if (iVar5 != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SinglePointData->GetNumPoints() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x5d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPCGPointArrayData *)(*pcVar2)();
      return pUVar6;
    }
  }
  (**(code **)(pUVar6->_padding_ + 0x4c0))(pUVar6,local_98,1);
  local_a0 = (longlong)local_88;
  if (local_88 < 1) {
    local_a8 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPCGPointArrayData *)(*pcVar2)();
      return pUVar6;
    }
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  *(double *)(local_98[0] + 0x20) = (param_1->field0_0x0)._s_0.X;
  *(double *)(local_98[0] + 0x28) = dVar3;
  *(double *)(local_98[0] + 0x30) = dVar1;
  *(undefined8 *)(local_98[0] + 0x38) = 0;
  return pUVar6;
}

// CreatePointData<UPCGPointArrayData,0> @ 14a0142c0

UPCGPointArrayData * __cdecl PCGTestsCommon::CreatePointData<UPCGPointArrayData,0>(void)

{
  code *pcVar1;
  bool bVar2;
  UPCGPointArrayData *pUVar3;
  
  pUVar3 = CreateEmptyPointData<UPCGPointArrayData,0>();
  if (pUVar3 == (UPCGPointArrayData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SinglePointData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGPointArrayData *)(*pcVar1)();
      return pUVar3;
    }
  }
  (**(code **)(pUVar3->_padding_ + 0x490))(pUVar3,1,1);
  return pUVar3;
}

// CreatePointData<UPCGPointData,0> @ 14a014320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UPCGPointData * __cdecl PCGTestsCommon::CreatePointData<UPCGPointData,0>(TVector<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  UPCGPointData *pUVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  int local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar6 = CreateEmptyPointData<UPCGPointData,0>();
  if (pUVar6 == (UPCGPointData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SinglePointData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPCGPointData *)(*pcVar2)();
      return pUVar6;
    }
  }
  (**(code **)(pUVar6->_padding_ + 0x490))(pUVar6,1,1);
  iVar5 = (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
  if (iVar5 != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SinglePointData->GetNumPoints() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x5d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPCGPointData *)(*pcVar2)();
      return pUVar6;
    }
  }
  (**(code **)(pUVar6->_padding_ + 0x4c0))(pUVar6,local_98,1);
  local_a0 = (longlong)local_88;
  if (local_88 < 1) {
    local_a8 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPCGPointData *)(*pcVar2)();
      return pUVar6;
    }
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  *(double *)(local_98[0] + 0x20) = (param_1->field0_0x0)._s_0.X;
  *(double *)(local_98[0] + 0x28) = dVar3;
  *(double *)(local_98[0] + 0x30) = dVar1;
  *(undefined8 *)(local_98[0] + 0x38) = 0;
  return pUVar6;
}

// CreatePointData<UPCGPointData,0> @ 14a014450

UPCGPointData * __cdecl PCGTestsCommon::CreatePointData<UPCGPointData,0>(void)

{
  code *pcVar1;
  bool bVar2;
  UPCGPointData *pUVar3;
  
  pUVar3 = CreateEmptyPointData<UPCGPointData,0>();
  if (pUVar3 == (UPCGPointData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SinglePointData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGPointData *)(*pcVar1)();
      return pUVar3;
    }
  }
  (**(code **)(pUVar3->_padding_ + 0x490))(pUVar3,1,1);
  return pUVar3;
}

// DestructItems<`anonymous_namespace'::FPCGByAttributeValidationData,int> @ 14a0144b0

void __cdecl
DestructItems<_anonymous_namespace_::FPCGByAttributeValidationData,int>
          (FPCGByAttributeValidationData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Mesh).SoftObjectPtr.field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_>,int> @ 14a0144f0

void __cdecl
DestructItems<TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_>,int>
          (TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FPCGDataCollection,int>
              ((FPCGDataCollection *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DuplicateObject<UPCGGraph> @ 14a014540

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __cdecl DuplicateObject<UPCGGraph>(UPCGGraph *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UPCGGraph *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UPCGGraph_NoRegister();
  pUVar2 = (UPCGGraph *)DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// Emplace<TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList_&&>_> @ 14a014740

FSetElementId __thiscall
TSet<TTuple<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,_TestMeshSelectorByAttribute_::__l2::FPCGByAttributeValidIndexList_&&>_>
          (void *this,
          TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,_void___cdecl_TestMeshSelectorByAttribute(FPCGStaticMeshSpawnerByAttributeTest_*,PCGTestsCommon::FTestData_const_&,FName_const_&,TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FPCGByAttributeValidIndexList_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,_void___cdecl_TestMeshSelectorByAttribute(FPCGStaticMeshSpawnerByAttributeTest_*,PCGTestsCommon::FTestData_const_&,FName_const_&,TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FPCGByAttributeValidIndexList>_>
  *pTVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_68;
  undefined8 local_58;
  FSoftObjectPath local_50;
  
  iVar11 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x48);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_68,iVar6);
  if (local_68.Pointer ==
      (TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,_void___cdecl_TestMeshSelectorByAttribute(FPCGStaticMeshSpawnerByAttributeTest_*,PCGTestsCommon::FTestData_const_&,FName_const_&,TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FPCGByAttributeValidIndexList>_>
       *)0x0) {
    pTVar12 = (TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,_void___cdecl_TestMeshSelectorByAttribute(FPCGStaticMeshSpawnerByAttributeTest_*,PCGTestsCommon::FTestData_const_&,FName_const_&,TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FPCGByAttributeValidIndexList>_>
               *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_68.Pointer = *puVar3;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)((longlong)local_68.Pointer + 8),(FSoftObjectPath *)(puVar3 + 1));
    *(undefined8 *)((longlong)local_68.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x28) = *puVar4;
    *puVar4 = 0;
    *(undefined4 *)((longlong)local_68.Pointer + 0x30) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)((longlong)local_68.Pointer + 0x34) = *(undefined4 *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    *(undefined4 *)((longlong)local_68.Pointer + 0x38) = *(undefined4 *)(puVar4 + 2);
    *(undefined4 *)((longlong)local_68.Pointer + 0x40) = 0xffffffff;
    pTVar12 = local_68.Pointer;
  }
  local_res8[0] = local_68.Index;
  local_58 = *(undefined8 *)pTVar12;
  FSoftObjectPath::FSoftObjectPath(&local_50,(FSoftObjectPath *)&pTVar12->field_0x8);
  uVar7 = ::GetTypeHash(&local_50);
  if (local_50.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.SubPathString.Data.AllocatorInstance.Data);
  }
  bVar5 = TryReplaceExisting(this,uVar7,pTVar12,local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)((longlong)this + 0x48))) {
      uVar7 = *(int *)((longlong)this + 0x48) - 1U & uVar7;
      *(uint *)&pTVar12->field_0x44 = uVar7;
      lVar10 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar10 = (longlong)this + 0x38;
      }
      uVar8 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&pTVar12->field_0x40 = *(undefined4 *)(lVar10 + uVar8 * 4);
      *(int *)(lVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// FindByPredicate<`FPCGCollapseSubgraphWithParams::RunTest'::__l18::<lambda_1>_> @ 14a014b10

TObjectPtr<UPCGEdge> * __thiscall
TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGCollapseSubgraphWithParams::RunTest_::__l18::<lambda_1>_>
          (TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  TObjectPtr<UPCGEdge>_u_0 *pTVar1;
  TObjectPtr<UPCGEdge> TVar2;
  UPCGNode *pUVar3;
  UPCGSettings *pUVar4;
  TObjectPtr<UPCGEdge>_u_0 *pTVar5;
  bool bVar6;
  
  pTVar5 = (TObjectPtr<UPCGEdge>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar5 + this->ArrayNum;
  do {
    if (pTVar5 == pTVar1) {
      return (TObjectPtr<UPCGEdge> *)0x0;
    }
    TVar2.field0_0x0 = (TObjectPtr<UPCGEdge>_u_0)pTVar5->DebugPtr;
    if (((TVar2.field0_0x0 != (UPCGEdge *)0x0) &&
        (*(longlong *)((longlong)TVar2.field0_0x0 + 0x48) != 0)) &&
       (*(longlong *)((longlong)TVar2.field0_0x0 + 0x50) != 0)) {
      pUVar3 = *(UPCGNode **)(*(longlong *)((longlong)TVar2.field0_0x0 + 0x48) + 0x28);
      if (pUVar3 == (UPCGNode *)0x0) {
        bVar6 = param_1.GetParameter1Node == (UPCGNode *)0x0;
      }
      else {
        bVar6 = pUVar3 == param_1.GetParameter1Node;
      }
      if (((bVar6) &&
          (pUVar3 = *(UPCGNode **)(*(longlong *)((longlong)TVar2.field0_0x0 + 0x50) + 0x28),
          pUVar3 != (UPCGNode *)0x0)) &&
         (pUVar4 = UPCGNode::GetSettings(pUVar3), pUVar4 != (UPCGSettings *)0x0)) {
        pUVar4 = UPCGNode::GetSettings
                           (*(UPCGNode **)(*(longlong *)((longlong)TVar2.field0_0x0 + 0x50) + 0x28))
        ;
        bVar6 = UObjectBaseUtility::IsA<UPCGSubgraphSettings>((UObjectBaseUtility *)pUVar4);
        if (bVar6) {
          return (TObjectPtr<UPCGEdge> *)pTVar5;
        }
      }
    }
    pTVar5 = pTVar5 + 1;
  } while( true );
}

// FindByPredicate<`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings>'::__l13::<lambda_1>_> @ 14a014bc0

UPCGNode ** __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings>_::__l13::<lambda_1>_>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UPCGNode **)0x0;
    }
    this_00 = *(UPCGNode **)pFVar5;
    if ((this_00 != (UPCGNode *)0x0) &&
       (pUVar3 = UPCGNode::GetSettings(this_00), pUVar3 != (UPCGSettings *)0x0)) {
      pUVar3 = UPCGNode::GetSettings(this_00);
      pUVar4 = Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGNode **)pFVar5;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// FindByPredicate<`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSubgraphSettings,UPCGGraphInputOutputSettings>'::__l13::<lambda_1>_> @ 14a014c60

UPCGNode ** __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSubgraphSettings,UPCGGraphInputOutputSettings>_::__l13::<lambda_1>_>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UPCGNode **)0x0;
    }
    this_00 = *(UPCGNode **)pFVar5;
    if ((this_00 != (UPCGNode *)0x0) &&
       (pUVar3 = UPCGNode::GetSettings(this_00), pUVar3 != (UPCGSettings *)0x0)) {
      pUVar3 = UPCGNode::GetSettings(this_00);
      pUVar4 = Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGNode **)pFVar5;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// FindByPredicate<`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>'::__l13::<lambda_1>_> @ 14a014d00

UPCGNode ** __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>_::__l13::<lambda_1>_>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UPCGNode **)0x0;
    }
    this_00 = *(UPCGNode **)pFVar5;
    if ((this_00 != (UPCGNode *)0x0) &&
       (pUVar3 = UPCGNode::GetSettings(this_00), pUVar3 != (UPCGSettings *)0x0)) {
      pUVar3 = UPCGNode::GetSettings(this_00);
      pUVar4 = Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGNode **)pFVar5;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// FindByPredicate<`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>'::__l13::<lambda_1>_> @ 14a014da0

UPCGNode ** __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>_::__l13::<lambda_1>_>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UPCGNode **)0x0;
    }
    this_00 = *(UPCGNode **)pFVar5;
    if ((this_00 != (UPCGNode *)0x0) &&
       (pUVar3 = UPCGNode::GetSettings(this_00), pUVar3 != (UPCGSettings *)0x0)) {
      pUVar3 = UPCGNode::GetSettings(this_00);
      pUVar4 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGNode **)pFVar5;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// FindByPredicate<`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSubgraphSettings>'::__l14::<lambda_1>_> @ 14a014e40

UPCGNode ** __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSubgraphSettings>_::__l14::<lambda_1>_>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UPCGNode **)0x0;
    }
    this_00 = *(UPCGNode **)pFVar5;
    if ((this_00 != (UPCGNode *)0x0) &&
       (pUVar3 = UPCGNode::GetSettings(this_00), pUVar3 != (UPCGSettings *)0x0)) {
      pUVar3 = UPCGNode::GetSettings(this_00);
      pUVar4 = Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGNode **)pFVar5;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// FindByPredicate<`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings>'::__l14::<lambda_1>_> @ 14a014ee0

UPCGNode ** __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings>_::__l14::<lambda_1>_>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UPCGNode **)0x0;
    }
    this_00 = *(UPCGNode **)pFVar5;
    if ((this_00 != (UPCGNode *)0x0) &&
       (pUVar3 = UPCGNode::GetSettings(this_00), pUVar3 != (UPCGSettings *)0x0)) {
      pUVar3 = UPCGNode::GetSettings(this_00);
      pUVar4 = Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGNode **)pFVar5;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// FindByPredicate<`FPCGCollapseSubgraphWithParams::RunTest'::__l21::<lambda_2>_> @ 14a014f80

TObjectPtr<UPCGEdge> * __thiscall
TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGCollapseSubgraphWithParams::RunTest_::__l21::<lambda_2>_>
          (TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  TObjectPtr<UPCGEdge>_u_0 *pTVar1;
  TObjectPtr<UPCGEdge> TVar2;
  UPCGNode *pUVar3;
  UPCGSettings *pUVar4;
  TObjectPtr<UPCGEdge>_u_0 *pTVar5;
  bool bVar6;
  
  pTVar5 = (TObjectPtr<UPCGEdge>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar5 + this->ArrayNum;
  do {
    if (pTVar5 == pTVar1) {
      return (TObjectPtr<UPCGEdge> *)0x0;
    }
    TVar2.field0_0x0 = (TObjectPtr<UPCGEdge>_u_0)pTVar5->DebugPtr;
    if (((TVar2.field0_0x0 != (UPCGEdge *)0x0) &&
        (*(longlong *)((longlong)TVar2.field0_0x0 + 0x48) != 0)) &&
       (*(longlong *)((longlong)TVar2.field0_0x0 + 0x50) != 0)) {
      pUVar3 = *(UPCGNode **)(*(longlong *)((longlong)TVar2.field0_0x0 + 0x48) + 0x28);
      if (pUVar3 == (UPCGNode *)0x0) {
        bVar6 = param_1.GetParameter2Node == (UPCGNode *)0x0;
      }
      else {
        bVar6 = pUVar3 == param_1.GetParameter2Node;
      }
      if (((bVar6) &&
          (pUVar3 = *(UPCGNode **)(*(longlong *)((longlong)TVar2.field0_0x0 + 0x50) + 0x28),
          pUVar3 != (UPCGNode *)0x0)) &&
         (pUVar4 = UPCGNode::GetSettings(pUVar3), pUVar4 != (UPCGSettings *)0x0)) {
        pUVar4 = UPCGNode::GetSettings
                           (*(UPCGNode **)(*(longlong *)((longlong)TVar2.field0_0x0 + 0x50) + 0x28))
        ;
        bVar6 = UObjectBaseUtility::IsA<UPCGSubgraphSettings>((UObjectBaseUtility *)pUVar4);
        if (bVar6) {
          return (TObjectPtr<UPCGEdge> *)pTVar5;
        }
      }
    }
    pTVar5 = pTVar5 + 1;
  } while( true );
}

// FindByPredicate<`TestMeshSelectorByAttribute'::__l32::<lambda_2>_> @ 14a015030

FPCGByAttributeValidationData * __thiscall
TArray<`anonymous_namespace'::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_TestMeshSelectorByAttribute_::__l32::<lambda_2>_>
          (TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>
           *this,<lambda_2> *param_1)

{
  void *pvVar1;
  bool bVar2;
  FPCGByAttributeValidationData *pFVar3;
  FPCGByAttributeValidationData *pFVar4;
  
  pFVar3 = (FPCGByAttributeValidationData *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + this->ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar4) {
      pvVar1 = *(void **)&(param_1->StaticMesh).SoftObjectPtr.field_0x18;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      return (FPCGByAttributeValidationData *)0x0;
    }
    bVar2 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(pFVar3->Mesh).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8);
    if (bVar2) break;
    pFVar3 = pFVar3 + 1;
  }
  pvVar1 = *(void **)&(param_1->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar1 == (void *)0x0) {
    return pFVar3;
  }
  FMemory::Free(pvVar1);
  return pFVar3;
}

// FindByPredicate<`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>'::__l14::<lambda_2>_> @ 14a0150c0

UPCGNode ** __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>_::__l14::<lambda_2>_>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UPCGNode **)0x0;
    }
    this_00 = *(UPCGNode **)pFVar5;
    if ((this_00 != (UPCGNode *)0x0) &&
       (pUVar3 = UPCGNode::GetSettings(this_00), pUVar3 != (UPCGSettings *)0x0)) {
      pUVar3 = UPCGNode::GetSettings(this_00);
      pUVar4 = Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGNode **)pFVar5;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// FindByPredicate<`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>'::__l14::<lambda_2>_> @ 14a015160

UPCGNode ** __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>_::__l14::<lambda_2>_>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar5 == pFVar1) {
      return (UPCGNode **)0x0;
    }
    this_00 = *(UPCGNode **)pFVar5;
    if ((this_00 != (UPCGNode *)0x0) &&
       (pUVar3 = UPCGNode::GetSettings(this_00), pUVar3 != (UPCGSettings *)0x0)) {
      pUVar3 = UPCGNode::GetSettings(this_00);
      pUVar4 = Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGNode **)pFVar5;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// GenerateSettings<UPCGSanityCheckPointDataSettings> @ 14a015300

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

UPCGSanityCheckPointDataSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGSanityCheckPointDataSettings>
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
  UPCGSanityCheckPointDataSettings *pUVar9;
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
  pUVar8 = Z_Construct_UClass_UPCGSanityCheckPointDataSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGSanityCheckPointDataSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGSanityCheckPointDataSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGSanityCheckPointDataSettings *)(*pcVar4)();
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
      pUVar9 = (UPCGSanityCheckPointDataSettings *)(*pcVar4)();
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

// GenerateSettings<UPCGSortAttributesSettings> @ 14a015540

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

UPCGSortAttributesSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGSortAttributesSettings>
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
  UPCGSortAttributesSettings *pUVar9;
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
  pUVar8 = Z_Construct_UClass_UPCGSortAttributesSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGSortAttributesSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGSortAttributesSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGSortAttributesSettings *)(*pcVar4)();
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
      pUVar9 = (UPCGSortAttributesSettings *)(*pcVar4)();
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

// GenerateSettings<UPCGSpatialNoiseSettings> @ 14a015780

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

UPCGSpatialNoiseSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGSpatialNoiseSettings>
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
  UPCGSpatialNoiseSettings *pUVar9;
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
  pUVar8 = Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGSpatialNoiseSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGSpatialNoiseSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGSpatialNoiseSettings *)(*pcVar4)();
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
      pUVar9 = (UPCGSpatialNoiseSettings *)(*pcVar4)();
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

// GenerateSettings<UPCGSplitPointsSettings> @ 14a0159c0

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

UPCGSplitPointsSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGSplitPointsSettings>
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
  UPCGSplitPointsSettings *pUVar9;
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
  pUVar8 = Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGSplitPointsSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGSplitPointsSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGSplitPointsSettings *)(*pcVar4)();
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
      pUVar9 = (UPCGSplitPointsSettings *)(*pcVar4)();
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

// GenerateSettings<UPCGStaticMeshSpawnerSettings> @ 14a015c00

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

UPCGStaticMeshSpawnerSettings * __cdecl
PCGTestsCommon::GenerateSettings<UPCGStaticMeshSpawnerSettings>
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
  UPCGStaticMeshSpawnerSettings *pUVar9;
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
  pUVar8 = Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = (UPCGStaticMeshSpawnerSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar13 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pUVar9 == (UPCGStaticMeshSpawnerSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UPCGStaticMeshSpawnerSettings *)(*pcVar4)();
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
      pUVar9 = (UPCGStaticMeshSpawnerSettings *)(*pcVar4)();
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

// GetFullNameForCastLogError<UPCGMeshSelectorBase> @ 14a015e40

FString * __cdecl
GetFullNameForCastLogError<UPCGMeshSelectorBase>
          (FString *__return_storage_ptr__,UPCGMeshSelectorBase *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGMeshSelectorByAttribute> @ 14a015e70

FString * __cdecl GetTypeName<UPCGMeshSelectorByAttribute>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGMeshSelectorWeighted> @ 14a015eb0

FString * __cdecl GetTypeName<UPCGMeshSelectorWeighted>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGMeshSelectorWeightedByCategory> @ 14a015ef0

FString * __cdecl GetTypeName<UPCGMeshSelectorWeightedByCategory>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGSanityCheckPointDataSettings> @ 14a015f30

FString * __cdecl GetTypeName<UPCGSanityCheckPointDataSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGSanityCheckPointDataSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGSpatialNoiseSettings> @ 14a015f70

FString * __cdecl GetTypeName<UPCGSpatialNoiseSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGSplitPointsSettings> @ 14a015fb0

FString * __cdecl GetTypeName<UPCGSplitPointsSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UPCGGraphAuthoringTestHelperSettings> @ 14a015ff0

void __cdecl InternalConstructor<UPCGGraphAuthoringTestHelperSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGGraphAuthoringTestHelperSettings__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPCGGraphAuthoringTestHelperSettings> @ 14a016030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGGraphAuthoringTestHelperSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGraphAuthoringTestHelperSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGGraphAuthoringTestHelperSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<AActor> @ 14a016220

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

AActor * __cdecl NewObject<AActor>(UObject *param_1)

{
  UClass *pUVar1;
  AActor *pAVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pAVar2 = (AActor *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pAVar2;
}

// NewObject<UPCGSanityCheckPointDataSettings> @ 14a0162c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSanityCheckPointDataSettings * __cdecl
NewObject<UPCGSanityCheckPointDataSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSanityCheckPointDataSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGSanityCheckPointDataSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSanityCheckPointDataSettings *)
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

// NewObject<UPCGSortAttributesSettings> @ 14a016360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSortAttributesSettings * __cdecl NewObject<UPCGSortAttributesSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSortAttributesSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGSortAttributesSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSortAttributesSettings *)
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

// NewObject<UPCGSpatialNoiseSettings> @ 14a016400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSpatialNoiseSettings * __cdecl NewObject<UPCGSpatialNoiseSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSpatialNoiseSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGSpatialNoiseSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSpatialNoiseSettings *)
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

// NewObject<UPCGSplitPointsSettings> @ 14a0164a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSplitPointsSettings * __cdecl NewObject<UPCGSplitPointsSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSplitPointsSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSplitPointsSettings *)
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

// NewObject<UPCGStaticMeshSpawnerSettings> @ 14a016540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGStaticMeshSpawnerSettings * __cdecl NewObject<UPCGStaticMeshSpawnerSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGStaticMeshSpawnerSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGStaticMeshSpawnerSettings *)
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

// ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings> @ 14a016730

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl
PCGCollapseSubgraphTests::
ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings>
          (FPCGTestBaseClass *param_1,UPCGGraph *param_2,FName param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGNode **ppUVar5;
  UClass *pUVar6;
  UPCGPin *pUVar7;
  UPCGPin *pUVar8;
  FText *pFVar9;
  UPCGPin *pUVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  UPCGNode *this_00;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  UPCGPin *local_d8;
  UPCGPin *local_d0;
  FString local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 == (UPCGGraph *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_res18 == (FName)0x0) && (local_res20 == (FName)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ::FString::FString(&local_180,"Test is not illed formed");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar11.Data = local_180.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3)
  ;
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    ppUVar5 = TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings>_::__l13::<lambda_1>_>
                        ((TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *)&param_2->Nodes,
                         local_res18.ComparisonIndex.Value._0_1_);
    if (ppUVar5 == (UPCGNode **)0x0) {
      this_00 = (UPCGNode *)0x0;
    }
    else {
      this_00 = *ppUVar5;
    }
    this = (param_2->OutputNode).field0_0x0.DebugPtr;
    pUVar6 = Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_160);
    ::FString::PrintfImpl(&local_170,L"Input Node of class %s is valid");
    if (this_00 == (UPCGNode *)0x0) {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
      ::FString::PrintfImpl(&local_100,L"Expected \'%s\' to be not null.");
      (*pcVar2)(param_1,&local_100,0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      pUVar6 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
      local_188 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_188,&local_140);
      ::FString::PrintfImpl(&local_150,L"Output Node of class %s is valid");
      if (this == (UPCGNode *)0x0) {
        pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
        ::FString::PrintfImpl(&local_f0,L"Expected \'%s\' to be not null.");
        (*pcVar2)(param_1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        if (((this_00 == (UPCGNode *)0x0) || (this == (UPCGNode *)0x0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNode && OutNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                               ,0x41,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pUVar7 = UPCGNode::GetOutputPin(this_00,&local_res18);
        pUVar8 = UPCGNode::GetInputPin(this,&local_res20);
        if ((local_res18 == (FName)0x0) || (pUVar7 != (UPCGPin *)0x0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_b8,ListView);
        FText::ToString(pFVar9);
        ::FName::ToString(&local_res18,&local_c8);
        ::FString::PrintfImpl(&local_130,L"InLabel (%s) exists on node %s");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar11.Data = local_130.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (bVar3) {
          if ((local_res20 == (FName)0x0) || (pUVar8 != (UPCGPin *)0x0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          pFVar9 = UPCGNode::GetNodeTitle(this,&local_98,ListView);
          FText::ToString(pFVar9);
          ::FName::ToString(&local_res20,&local_a8);
          ::FString::PrintfImpl(&local_120,L"OutLabel (%s) exists on node %s");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_120.Data.ArrayNum != 0) {
            FVar11.Data = local_120.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
          }
          if (bVar3) {
            pUVar10 = pUVar7;
            if (((pUVar7 == (UPCGPin *)0x0) && (pUVar10 = pUVar8, pUVar8 == (UPCGPin *)0x0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InPin || OutPin",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                                   ,0x53,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar12 = (pUVar10->Edges).AllocatorInstance.Data;
            pFVar1 = pFVar12 + (longlong)(pUVar10->Edges).ArrayNum * 8;
            local_d8 = pUVar7;
            local_d0 = pUVar8;
            for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
              bVar3 = `PCGCollapseSubgraphTests::
                      ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings>'
                      ::__l2::<lambda_2>::operator()(&local_d8,(TObjectPtr<UPCGEdge> *)pFVar12);
              if (bVar3) goto LAB_14a016bbb;
            }
            pFVar12 = (FScriptContainerElement *)0x0;
LAB_14a016bbb:
            ::FName::ToString(&local_res20,&local_58);
            pFVar9 = UPCGNode::GetNodeTitle(this,&local_68,ListView);
            FText::ToString(pFVar9);
            ::FName::ToString(&local_res18,&local_78);
            pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_88,ListView);
            FText::ToString(pFVar9);
            ::FString::PrintfImpl(&local_110,L"Edge between %s(%s) and %s(%s) exists");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_110.Data.ArrayNum != 0) {
              FVar11.Data = local_110.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,
                               pFVar12 != (FScriptContainerElement *)0x0);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
            }
            if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return bVar3;
            }
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}

// ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSubgraphSettings> @ 14a016d00

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl
PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSubgraphSettings>
          (FPCGTestBaseClass *param_1,UPCGGraph *param_2,FName param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGNode **ppUVar5;
  UClass *pUVar6;
  UPCGPin *pUVar7;
  UPCGPin *pUVar8;
  FText *pFVar9;
  UPCGPin *pUVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  UPCGNode *this_00;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  UPCGPin *local_d8;
  UPCGPin *local_d0;
  FString local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 == (UPCGGraph *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_res18 == (FName)0x0) && (local_res20 == (FName)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ::FString::FString(&local_180,"Test is not illed formed");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar11.Data = local_180.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3)
  ;
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    this = (param_2->InputNode).field0_0x0.DebugPtr;
    ppUVar5 = TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSubgraphSettings>_::__l14::<lambda_1>_>
                        ((TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *)&param_2->Nodes,
                         local_res18.ComparisonIndex.Value._0_1_);
    if (ppUVar5 == (UPCGNode **)0x0) {
      this_00 = (UPCGNode *)0x0;
    }
    else {
      this_00 = *ppUVar5;
    }
    pUVar6 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_160);
    ::FString::PrintfImpl(&local_170,L"Input Node of class %s is valid");
    if (this == (UPCGNode *)0x0) {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
      ::FString::PrintfImpl(&local_100,L"Expected \'%s\' to be not null.");
      (*pcVar2)(param_1,&local_100,0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      pUVar6 = Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
      local_188 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_188,&local_140);
      ::FString::PrintfImpl(&local_150,L"Output Node of class %s is valid");
      if (this_00 == (UPCGNode *)0x0) {
        pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
        ::FString::PrintfImpl(&local_f0,L"Expected \'%s\' to be not null.");
        (*pcVar2)(param_1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        if (((this == (UPCGNode *)0x0) || (this_00 == (UPCGNode *)0x0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNode && OutNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                               ,0x41,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pUVar7 = UPCGNode::GetOutputPin(this,&local_res18);
        pUVar8 = UPCGNode::GetInputPin(this_00,&local_res20);
        if ((local_res18 == (FName)0x0) || (pUVar7 != (UPCGPin *)0x0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        pFVar9 = UPCGNode::GetNodeTitle(this,&local_b8,ListView);
        FText::ToString(pFVar9);
        ::FName::ToString(&local_res18,&local_c8);
        ::FString::PrintfImpl(&local_130,L"InLabel (%s) exists on node %s");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar11.Data = local_130.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (bVar3) {
          if ((local_res20 == (FName)0x0) || (pUVar8 != (UPCGPin *)0x0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_98,ListView);
          FText::ToString(pFVar9);
          ::FName::ToString(&local_res20,&local_a8);
          ::FString::PrintfImpl(&local_120,L"OutLabel (%s) exists on node %s");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_120.Data.ArrayNum != 0) {
            FVar11.Data = local_120.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
          }
          if (bVar3) {
            pUVar10 = pUVar7;
            if (((pUVar7 == (UPCGPin *)0x0) && (pUVar10 = pUVar8, pUVar8 == (UPCGPin *)0x0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InPin || OutPin",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                                   ,0x53,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar12 = (pUVar10->Edges).AllocatorInstance.Data;
            pFVar1 = pFVar12 + (longlong)(pUVar10->Edges).ArrayNum * 8;
            local_d8 = pUVar7;
            local_d0 = pUVar8;
            for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
              bVar3 = `PCGCollapseSubgraphTests::
                      ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSubgraphSettings>'::__l2
                      ::<lambda_2>::operator()(&local_d8,(TObjectPtr<UPCGEdge> *)pFVar12);
              if (bVar3) goto LAB_14a01718e;
            }
            pFVar12 = (FScriptContainerElement *)0x0;
LAB_14a01718e:
            ::FName::ToString(&local_res20,&local_58);
            pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_68,ListView);
            FText::ToString(pFVar9);
            ::FName::ToString(&local_res18,&local_78);
            pFVar9 = UPCGNode::GetNodeTitle(this,&local_88,ListView);
            FText::ToString(pFVar9);
            ::FString::PrintfImpl(&local_110,L"Edge between %s(%s) and %s(%s) exists");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_110.Data.ArrayNum != 0) {
              FVar11.Data = local_110.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,
                               pFVar12 != (FScriptContainerElement *)0x0);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
            }
            if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return bVar3;
            }
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}

// ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings> @ 14a0172e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl
PCGCollapseSubgraphTests::
ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings>
          (FPCGTestBaseClass *param_1,UPCGGraph *param_2,FName param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGNode **ppUVar5;
  UClass *pUVar6;
  UPCGPin *pUVar7;
  UPCGPin *pUVar8;
  FText *pFVar9;
  UPCGPin *pUVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  UPCGNode *this_00;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  UPCGPin *local_d8;
  UPCGPin *local_d0;
  FString local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 == (UPCGGraph *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_res18 == (FName)0x0) && (local_res20 == (FName)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ::FString::FString(&local_180,"Test is not illed formed");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar11.Data = local_180.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3)
  ;
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    this = (param_2->InputNode).field0_0x0.DebugPtr;
    ppUVar5 = TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings>_::__l14::<lambda_1>_>
                        ((TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *)&param_2->Nodes,
                         local_res18.ComparisonIndex.Value._0_1_);
    if (ppUVar5 == (UPCGNode **)0x0) {
      this_00 = (UPCGNode *)0x0;
    }
    else {
      this_00 = *ppUVar5;
    }
    pUVar6 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_160);
    ::FString::PrintfImpl(&local_170,L"Input Node of class %s is valid");
    if (this == (UPCGNode *)0x0) {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
      ::FString::PrintfImpl(&local_100,L"Expected \'%s\' to be not null.");
      (*pcVar2)(param_1,&local_100,0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      pUVar6 = Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
      local_188 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_188,&local_140);
      ::FString::PrintfImpl(&local_150,L"Output Node of class %s is valid");
      if (this_00 == (UPCGNode *)0x0) {
        pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
        ::FString::PrintfImpl(&local_f0,L"Expected \'%s\' to be not null.");
        (*pcVar2)(param_1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        if (((this == (UPCGNode *)0x0) || (this_00 == (UPCGNode *)0x0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNode && OutNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                               ,0x41,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pUVar7 = UPCGNode::GetOutputPin(this,&local_res18);
        pUVar8 = UPCGNode::GetInputPin(this_00,&local_res20);
        if ((local_res18 == (FName)0x0) || (pUVar7 != (UPCGPin *)0x0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        pFVar9 = UPCGNode::GetNodeTitle(this,&local_b8,ListView);
        FText::ToString(pFVar9);
        ::FName::ToString(&local_res18,&local_c8);
        ::FString::PrintfImpl(&local_130,L"InLabel (%s) exists on node %s");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar11.Data = local_130.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (bVar3) {
          if ((local_res20 == (FName)0x0) || (pUVar8 != (UPCGPin *)0x0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_98,ListView);
          FText::ToString(pFVar9);
          ::FName::ToString(&local_res20,&local_a8);
          ::FString::PrintfImpl(&local_120,L"OutLabel (%s) exists on node %s");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_120.Data.ArrayNum != 0) {
            FVar11.Data = local_120.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
          }
          if (bVar3) {
            pUVar10 = pUVar7;
            if (((pUVar7 == (UPCGPin *)0x0) && (pUVar10 = pUVar8, pUVar8 == (UPCGPin *)0x0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InPin || OutPin",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                                   ,0x53,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar12 = (pUVar10->Edges).AllocatorInstance.Data;
            pFVar1 = pFVar12 + (longlong)(pUVar10->Edges).ArrayNum * 8;
            local_d8 = pUVar7;
            local_d0 = pUVar8;
            for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
              bVar3 = `PCGCollapseSubgraphTests::
                      ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings>'
                      ::__l2::<lambda_2>::operator()(&local_d8,(TObjectPtr<UPCGEdge> *)pFVar12);
              if (bVar3) goto LAB_14a01776e;
            }
            pFVar12 = (FScriptContainerElement *)0x0;
LAB_14a01776e:
            ::FName::ToString(&local_res20,&local_58);
            pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_68,ListView);
            FText::ToString(pFVar9);
            ::FName::ToString(&local_res18,&local_78);
            pFVar9 = UPCGNode::GetNodeTitle(this,&local_88,ListView);
            FText::ToString(pFVar9);
            ::FString::PrintfImpl(&local_110,L"Edge between %s(%s) and %s(%s) exists");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_110.Data.ArrayNum != 0) {
              FVar11.Data = local_110.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,
                               pFVar12 != (FScriptContainerElement *)0x0);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
            }
            if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return bVar3;
            }
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}

// ValidateNodeAndEdge<UPCGSubgraphSettings,UPCGGraphInputOutputSettings> @ 14a0178c0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl
PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSubgraphSettings,UPCGGraphInputOutputSettings>
          (FPCGTestBaseClass *param_1,UPCGGraph *param_2,FName param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGNode **ppUVar5;
  UClass *pUVar6;
  UPCGPin *pUVar7;
  UPCGPin *pUVar8;
  FText *pFVar9;
  UPCGPin *pUVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  UPCGNode *this_00;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  UPCGPin *local_d8;
  UPCGPin *local_d0;
  FString local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 == (UPCGGraph *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_res18 == (FName)0x0) && (local_res20 == (FName)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ::FString::FString(&local_180,"Test is not illed formed");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar11.Data = local_180.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3)
  ;
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    ppUVar5 = TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSubgraphSettings,UPCGGraphInputOutputSettings>_::__l13::<lambda_1>_>
                        ((TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *)&param_2->Nodes,
                         local_res18.ComparisonIndex.Value._0_1_);
    if (ppUVar5 == (UPCGNode **)0x0) {
      this_00 = (UPCGNode *)0x0;
    }
    else {
      this_00 = *ppUVar5;
    }
    this = (param_2->OutputNode).field0_0x0.DebugPtr;
    pUVar6 = Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_160);
    ::FString::PrintfImpl(&local_170,L"Input Node of class %s is valid");
    if (this_00 == (UPCGNode *)0x0) {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
      ::FString::PrintfImpl(&local_100,L"Expected \'%s\' to be not null.");
      (*pcVar2)(param_1,&local_100,0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      pUVar6 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
      local_188 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_188,&local_140);
      ::FString::PrintfImpl(&local_150,L"Output Node of class %s is valid");
      if (this == (UPCGNode *)0x0) {
        pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
        ::FString::PrintfImpl(&local_f0,L"Expected \'%s\' to be not null.");
        (*pcVar2)(param_1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        if (((this_00 == (UPCGNode *)0x0) || (this == (UPCGNode *)0x0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNode && OutNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                               ,0x41,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pUVar7 = UPCGNode::GetOutputPin(this_00,&local_res18);
        pUVar8 = UPCGNode::GetInputPin(this,&local_res20);
        if ((local_res18 == (FName)0x0) || (pUVar7 != (UPCGPin *)0x0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_b8,ListView);
        FText::ToString(pFVar9);
        ::FName::ToString(&local_res18,&local_c8);
        ::FString::PrintfImpl(&local_130,L"InLabel (%s) exists on node %s");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar11.Data = local_130.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (bVar3) {
          if ((local_res20 == (FName)0x0) || (pUVar8 != (UPCGPin *)0x0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          pFVar9 = UPCGNode::GetNodeTitle(this,&local_98,ListView);
          FText::ToString(pFVar9);
          ::FName::ToString(&local_res20,&local_a8);
          ::FString::PrintfImpl(&local_120,L"OutLabel (%s) exists on node %s");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_120.Data.ArrayNum != 0) {
            FVar11.Data = local_120.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
          }
          if (bVar3) {
            pUVar10 = pUVar7;
            if (((pUVar7 == (UPCGPin *)0x0) && (pUVar10 = pUVar8, pUVar8 == (UPCGPin *)0x0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InPin || OutPin",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                                   ,0x53,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar12 = (pUVar10->Edges).AllocatorInstance.Data;
            pFVar1 = pFVar12 + (longlong)(pUVar10->Edges).ArrayNum * 8;
            local_d8 = pUVar7;
            local_d0 = pUVar8;
            for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
              bVar3 = `PCGCollapseSubgraphTests::
                      ValidateNodeAndEdge<UPCGSubgraphSettings,UPCGGraphInputOutputSettings>'::__l2
                      ::<lambda_2>::operator()(&local_d8,(TObjectPtr<UPCGEdge> *)pFVar12);
              if (bVar3) goto LAB_14a017d4b;
            }
            pFVar12 = (FScriptContainerElement *)0x0;
LAB_14a017d4b:
            ::FName::ToString(&local_res20,&local_58);
            pFVar9 = UPCGNode::GetNodeTitle(this,&local_68,ListView);
            FText::ToString(pFVar9);
            ::FName::ToString(&local_res18,&local_78);
            pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_88,ListView);
            FText::ToString(pFVar9);
            ::FString::PrintfImpl(&local_110,L"Edge between %s(%s) and %s(%s) exists");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_110.Data.ArrayNum != 0) {
              FVar11.Data = local_110.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,
                               pFVar12 != (FScriptContainerElement *)0x0);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
            }
            if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return bVar3;
            }
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}

// ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings> @ 14a017e90

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl
PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>
          (FPCGTestBaseClass *param_1,UPCGGraph *param_2,FName param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGNode **ppUVar5;
  UClass *pUVar6;
  UPCGPin *pUVar7;
  UPCGPin *pUVar8;
  FText *pFVar9;
  UPCGPin *pUVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  UPCGNode *this;
  UPCGNode *this_00;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  UPCGPin *local_d8;
  UPCGPin *local_d0;
  FString local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 == (UPCGGraph *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_res18 == (FName)0x0) && (local_res20 == (FName)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ::FString::FString(&local_180,"Test is not illed formed");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar11.Data = local_180.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3)
  ;
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    ppUVar5 = TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>_::__l13::<lambda_1>_>
                        ((TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *)&param_2->Nodes,
                         local_res18.ComparisonIndex.Value._0_1_);
    if (ppUVar5 == (UPCGNode **)0x0) {
      this_00 = (UPCGNode *)0x0;
    }
    else {
      this_00 = *ppUVar5;
    }
    ppUVar5 = TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>_::__l14::<lambda_2>_>
                        ((TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *)&param_2->Nodes,
                         (<lambda_2>)local_res18.ComparisonIndex.Value._0_1_);
    if (ppUVar5 == (UPCGNode **)0x0) {
      this = (UPCGNode *)0x0;
    }
    else {
      this = *ppUVar5;
    }
    pUVar6 = Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_160);
    ::FString::PrintfImpl(&local_170,L"Input Node of class %s is valid");
    if (this_00 == (UPCGNode *)0x0) {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
      ::FString::PrintfImpl(&local_100,L"Expected \'%s\' to be not null.");
      (*pcVar2)(param_1,&local_100,0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      pUVar6 = Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
      local_188 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_188,&local_140);
      ::FString::PrintfImpl(&local_150,L"Output Node of class %s is valid");
      if (this == (UPCGNode *)0x0) {
        pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
        ::FString::PrintfImpl(&local_f0,L"Expected \'%s\' to be not null.");
        (*pcVar2)(param_1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        if (((this_00 == (UPCGNode *)0x0) || (this == (UPCGNode *)0x0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNode && OutNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                               ,0x41,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pUVar7 = UPCGNode::GetOutputPin(this_00,&local_res18);
        pUVar8 = UPCGNode::GetInputPin(this,&local_res20);
        if ((local_res18 == (FName)0x0) || (pUVar7 != (UPCGPin *)0x0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_b8,ListView);
        FText::ToString(pFVar9);
        ::FName::ToString(&local_res18,&local_c8);
        ::FString::PrintfImpl(&local_130,L"InLabel (%s) exists on node %s");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar11.Data = local_130.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (bVar3) {
          if ((local_res20 == (FName)0x0) || (pUVar8 != (UPCGPin *)0x0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          pFVar9 = UPCGNode::GetNodeTitle(this,&local_98,ListView);
          FText::ToString(pFVar9);
          ::FName::ToString(&local_res20,&local_a8);
          ::FString::PrintfImpl(&local_120,L"OutLabel (%s) exists on node %s");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_120.Data.ArrayNum != 0) {
            FVar11.Data = local_120.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
          }
          if (bVar3) {
            pUVar10 = pUVar7;
            if (((pUVar7 == (UPCGPin *)0x0) && (pUVar10 = pUVar8, pUVar8 == (UPCGPin *)0x0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InPin || OutPin",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                                   ,0x53,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar12 = (pUVar10->Edges).AllocatorInstance.Data;
            pFVar1 = pFVar12 + (longlong)(pUVar10->Edges).ArrayNum * 8;
            local_d8 = pUVar7;
            local_d0 = pUVar8;
            for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
              bVar3 = `PCGCollapseSubgraphTests::
                      ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>'::
                      __l2::<lambda_3>::operator()(&local_d8,(TObjectPtr<UPCGEdge> *)pFVar12);
              if (bVar3) goto LAB_14a01833b;
            }
            pFVar12 = (FScriptContainerElement *)0x0;
LAB_14a01833b:
            ::FName::ToString(&local_res20,&local_58);
            pFVar9 = UPCGNode::GetNodeTitle(this,&local_68,ListView);
            FText::ToString(pFVar9);
            ::FName::ToString(&local_res18,&local_78);
            pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_88,ListView);
            FText::ToString(pFVar9);
            ::FString::PrintfImpl(&local_110,L"Edge between %s(%s) and %s(%s) exists");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_110.Data.ArrayNum != 0) {
              FVar11.Data = local_110.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,
                               pFVar12 != (FScriptContainerElement *)0x0);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
            }
            if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return bVar3;
            }
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}

// ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings> @ 14a018480

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __cdecl
PCGCollapseSubgraphTests::
ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>
          (FPCGTestBaseClass *param_1,UPCGGraph *param_2,FName param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGNode **ppUVar5;
  UClass *pUVar6;
  UPCGPin *pUVar7;
  UPCGPin *pUVar8;
  FText *pFVar9;
  UPCGPin *pUVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  UPCGNode *this;
  UPCGNode *this_00;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  UPCGPin *local_d8;
  UPCGPin *local_d0;
  FString local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 == (UPCGGraph *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_res18 == (FName)0x0) && (local_res20 == (FName)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ::FString::FString(&local_180,"Test is not illed formed");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar11.Data = local_180.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3)
  ;
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    ppUVar5 = TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>_::__l13::<lambda_1>_>
                        ((TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *)&param_2->Nodes,
                         local_res18.ComparisonIndex.Value._0_1_);
    if (ppUVar5 == (UPCGNode **)0x0) {
      this_00 = (UPCGNode *)0x0;
    }
    else {
      this_00 = *ppUVar5;
    }
    ppUVar5 = TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>_::__l14::<lambda_2>_>
                        ((TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *)&param_2->Nodes,
                         (<lambda_2>)local_res18.ComparisonIndex.Value._0_1_);
    if (ppUVar5 == (UPCGNode **)0x0) {
      this = (UPCGNode *)0x0;
    }
    else {
      this = *ppUVar5;
    }
    pUVar6 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_160);
    ::FString::PrintfImpl(&local_170,L"Input Node of class %s is valid");
    if (this_00 == (UPCGNode *)0x0) {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
      ::FString::PrintfImpl(&local_100,L"Expected \'%s\' to be not null.");
      (*pcVar2)(param_1,&local_100,0);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      pUVar6 = Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
      local_188 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_188,&local_140);
      ::FString::PrintfImpl(&local_150,L"Output Node of class %s is valid");
      if (this == (UPCGNode *)0x0) {
        pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
        ::FString::PrintfImpl(&local_f0,L"Expected \'%s\' to be not null.");
        (*pcVar2)(param_1,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        if (((this_00 == (UPCGNode *)0x0) || (this == (UPCGNode *)0x0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNode && OutNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                               ,0x41,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pUVar7 = UPCGNode::GetOutputPin(this_00,&local_res18);
        pUVar8 = UPCGNode::GetInputPin(this,&local_res20);
        if ((local_res18 == (FName)0x0) || (pUVar7 != (UPCGPin *)0x0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_b8,ListView);
        FText::ToString(pFVar9);
        ::FName::ToString(&local_res18,&local_c8);
        ::FString::PrintfImpl(&local_130,L"InLabel (%s) exists on node %s");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar11.Data = local_130.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (bVar3) {
          if ((local_res20 == (FName)0x0) || (pUVar8 != (UPCGPin *)0x0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          pFVar9 = UPCGNode::GetNodeTitle(this,&local_98,ListView);
          FText::ToString(pFVar9);
          ::FName::ToString(&local_res20,&local_a8);
          ::FString::PrintfImpl(&local_120,L"OutLabel (%s) exists on node %s");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_120.Data.ArrayNum != 0) {
            FVar11.Data = local_120.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,bVar3);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
          }
          if (bVar3) {
            pUVar10 = pUVar7;
            if (((pUVar7 == (UPCGPin *)0x0) && (pUVar10 = pUVar8, pUVar8 == (UPCGPin *)0x0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InPin || OutPin",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                                   ,0x53,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar12 = (pUVar10->Edges).AllocatorInstance.Data;
            pFVar1 = pFVar12 + (longlong)(pUVar10->Edges).ArrayNum * 8;
            local_d8 = pUVar7;
            local_d0 = pUVar8;
            for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
              bVar3 = `PCGCollapseSubgraphTests::
                      ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>'
                      ::__l2::<lambda_3>::operator()(&local_d8,(TObjectPtr<UPCGEdge> *)pFVar12);
              if (bVar3) goto LAB_14a01892b;
            }
            pFVar12 = (FScriptContainerElement *)0x0;
LAB_14a01892b:
            ::FName::ToString(&local_res20,&local_58);
            pFVar9 = UPCGNode::GetNodeTitle(this,&local_68,ListView);
            FText::ToString(pFVar9);
            ::FName::ToString(&local_res18,&local_78);
            pFVar9 = UPCGNode::GetNodeTitle(this_00,&local_88,ListView);
            FText::ToString(pFVar9);
            ::FString::PrintfImpl(&local_110,L"Edge between %s(%s) and %s(%s) exists");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_110.Data.ArrayNum != 0) {
              FVar11.Data = local_110.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,
                               pFVar12 != (FScriptContainerElement *)0x0);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
            }
            if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return bVar3;
            }
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}

// ~TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1> @ 14a018f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__FPCGCollapseSubgraphCombinationOfCollapses::RunTest_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a018fa0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,_TestMeshSelectorByAttribute_::__l2::FPCGByAttributeValidIndexList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator() @ 14a019300

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
``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  FObjectPtr_u_0 local_res8;
  void *local_48 [2];
  FPCGDataCollection local_38;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  local_38.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TaggedData.ArrayNum = 0;
  local_38.TaggedData.ArrayMax = 0;
  local_38.bCancelExecutionOnEmpty = false;
  local_38.bCancelExecution = false;
  local_38.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DataCrcs.ArrayNum = 0;
  local_38.DataCrcs.ArrayMax = 0;
  local_38.InactiveOutputPinBitmask = 0;
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FPCGGraphExecutor::GetOutputData
            ((FPCGGraphExecutor *)*plVar1,*(ulong64 *)((longlong)this + 0x10),&local_38);
  if (local_38.TaggedData.ArrayNum == 1) {
    local_res8 = *(FObjectPtr_u_0 *)local_38.TaggedData.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_res8.Handle == (UObject *)0x0) goto LAB_14a01942a;
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if (local_res8.Handle != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
      if ((bVar4) && (local_res8.Handle != (UObject *)0x0)) {
        puVar7 = (undefined8 *)
                 (**(code **)(*(longlong *)local_res8.Handle + 0x4b8))(local_res8.Handle,local_48);
        puVar2 = *(undefined8 **)this;
        if (puVar2 != puVar7) {
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
          *puVar2 = *puVar7;
          *puVar7 = 0;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
          *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar7 + 0xc);
          puVar7[1] = 0;
        }
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
      }
    }
  }
LAB_14a01942a:
  **(undefined1 **)((longlong)this + 0x18) = 1;
  if (local_38.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data,
             local_38.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_38.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_38.TaggedData.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 14a019860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`TestMeshSelectorByAttribute'::__l2::<lambda_1>::operator()(void *this,UPCGManagedResource *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UInstancedStaticMeshComponent *pUVar7;
  UInstancedStaticMeshComponent *local_18 [2];
  
  if (param_1 != (UPCGManagedResource *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) &&
       (pUVar7 = UPCGManagedISMComponent::GetComponent((UPCGManagedISMComponent *)param_1),
       pUVar7 != (UInstancedStaticMeshComponent *)0x0)) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = UPCGManagedISMComponent::GetComponent((UPCGManagedISMComponent *)param_1);
      if (((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UInstancedStaticMeshComponent **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
    }
  }
  return;
}

// operator() @ 14a019970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`TestMeshSelectorWeighted'::__l2::<lambda_1>::operator()(void *this,UPCGManagedResource *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UInstancedStaticMeshComponent *pUVar7;
  UInstancedStaticMeshComponent *local_18 [2];
  
  if (param_1 != (UPCGManagedResource *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) &&
       (pUVar7 = UPCGManagedISMComponent::GetComponent((UPCGManagedISMComponent *)param_1),
       pUVar7 != (UInstancedStaticMeshComponent *)0x0)) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = UPCGManagedISMComponent::GetComponent((UPCGManagedISMComponent *)param_1);
      if (((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UInstancedStaticMeshComponent **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
    }
  }
  return;
}

// operator() @ 14a019a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`TestMeshSelectorWeightedByCategory'::__l2::<lambda_1>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UInstancedStaticMeshComponent *pUVar7;
  UInstancedStaticMeshComponent *local_18 [2];
  
  if (param_1 != (UPCGManagedResource *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) &&
       (pUVar7 = UPCGManagedISMComponent::GetComponent((UPCGManagedISMComponent *)param_1),
       pUVar7 != (UInstancedStaticMeshComponent *)0x0)) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = UPCGManagedISMComponent::GetComponent((UPCGManagedISMComponent *)param_1);
      if (((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UInstancedStaticMeshComponent **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
    }
  }
  return;
}

// operator() @ 14a019b90

bool __thiscall
`PCGCollapseSubgraphTests::
ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings>'::__l2::<lambda_2>::
operator()(void *this,TObjectPtr<UPCGEdge> *param_1)

{
  UPCGPin *pUVar1;
  UPCGPin *pUVar2;
  UPCGEdge *pUVar3;
  UPCGNode *pUVar4;
  UPCGSettings *pUVar5;
  bool bVar6;
  
  pUVar1 = *(UPCGPin **)this;
  if ((pUVar1 == (UPCGPin *)0x0) || (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0)) {
    pUVar3 = (param_1->field0_0x0).DebugPtr;
    if (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0) {
      pUVar2 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar2 == (UPCGPin *)0x0) {
        bVar6 = pUVar1 == (UPCGPin *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar1;
      }
      if (!bVar6) {
        return false;
      }
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr)->Node
                          ).field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGGraphInputOutputSettings>((UObjectBaseUtility *)pUVar5);
    }
    else {
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      if (pUVar1 != *(UPCGPin **)((longlong)this + 8)) {
        return false;
      }
      pUVar1 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr)->Node)
                          .field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGAttributeNoiseSettings>((UObjectBaseUtility *)pUVar5);
    }
  }
  else {
    pUVar2 = (((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGPin *)0x0) {
      return false;
    }
    if (pUVar2 != pUVar1) {
      return false;
    }
    pUVar1 = (((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr;
    if (pUVar1 == (UPCGPin *)0x0) {
      return false;
    }
    bVar6 = pUVar1 == *(UPCGPin **)((longlong)this + 8);
  }
  if (bVar6 == false) {
    return false;
  }
  return true;
}

// operator() @ 14a019cb0

bool __thiscall
`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSubgraphSettings>'::
__l2::<lambda_2>::operator()(void *this,TObjectPtr<UPCGEdge> *param_1)

{
  UPCGPin *pUVar1;
  UPCGPin *pUVar2;
  UPCGEdge *pUVar3;
  UPCGNode *pUVar4;
  UPCGSettings *pUVar5;
  bool bVar6;
  
  pUVar1 = *(UPCGPin **)this;
  if ((pUVar1 == (UPCGPin *)0x0) || (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0)) {
    pUVar3 = (param_1->field0_0x0).DebugPtr;
    if (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0) {
      pUVar2 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar2 == (UPCGPin *)0x0) {
        bVar6 = pUVar1 == (UPCGPin *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar1;
      }
      if (!bVar6) {
        return false;
      }
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr)->Node
                          ).field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGSubgraphSettings>((UObjectBaseUtility *)pUVar5);
    }
    else {
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      if (pUVar1 != *(UPCGPin **)((longlong)this + 8)) {
        return false;
      }
      pUVar1 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr)->Node)
                          .field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGGraphInputOutputSettings>((UObjectBaseUtility *)pUVar5);
    }
  }
  else {
    pUVar2 = (((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGPin *)0x0) {
      return false;
    }
    if (pUVar2 != pUVar1) {
      return false;
    }
    pUVar1 = (((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr;
    if (pUVar1 == (UPCGPin *)0x0) {
      return false;
    }
    bVar6 = pUVar1 == *(UPCGPin **)((longlong)this + 8);
  }
  if (bVar6 == false) {
    return false;
  }
  return true;
}

// operator() @ 14a019dd0

bool __thiscall
`PCGCollapseSubgraphTests::
ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings>'::__l2::<lambda_2>::
operator()(void *this,TObjectPtr<UPCGEdge> *param_1)

{
  UPCGPin *pUVar1;
  UPCGPin *pUVar2;
  UPCGEdge *pUVar3;
  UPCGNode *pUVar4;
  UPCGSettings *pUVar5;
  bool bVar6;
  
  pUVar1 = *(UPCGPin **)this;
  if ((pUVar1 == (UPCGPin *)0x0) || (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0)) {
    pUVar3 = (param_1->field0_0x0).DebugPtr;
    if (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0) {
      pUVar2 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar2 == (UPCGPin *)0x0) {
        bVar6 = pUVar1 == (UPCGPin *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar1;
      }
      if (!bVar6) {
        return false;
      }
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr)->Node
                          ).field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGSurfaceSamplerSettings>((UObjectBaseUtility *)pUVar5);
    }
    else {
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      if (pUVar1 != *(UPCGPin **)((longlong)this + 8)) {
        return false;
      }
      pUVar1 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr)->Node)
                          .field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGGraphInputOutputSettings>((UObjectBaseUtility *)pUVar5);
    }
  }
  else {
    pUVar2 = (((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGPin *)0x0) {
      return false;
    }
    if (pUVar2 != pUVar1) {
      return false;
    }
    pUVar1 = (((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr;
    if (pUVar1 == (UPCGPin *)0x0) {
      return false;
    }
    bVar6 = pUVar1 == *(UPCGPin **)((longlong)this + 8);
  }
  if (bVar6 == false) {
    return false;
  }
  return true;
}

// operator() @ 14a019ef0

bool __thiscall
`PCGCollapseSubgraphTests::ValidateNodeAndEdge<UPCGSubgraphSettings,UPCGGraphInputOutputSettings>'::
__l2::<lambda_2>::operator()(void *this,TObjectPtr<UPCGEdge> *param_1)

{
  UPCGPin *pUVar1;
  UPCGPin *pUVar2;
  UPCGEdge *pUVar3;
  UPCGNode *pUVar4;
  UPCGSettings *pUVar5;
  bool bVar6;
  
  pUVar1 = *(UPCGPin **)this;
  if ((pUVar1 == (UPCGPin *)0x0) || (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0)) {
    pUVar3 = (param_1->field0_0x0).DebugPtr;
    if (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0) {
      pUVar2 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar2 == (UPCGPin *)0x0) {
        bVar6 = pUVar1 == (UPCGPin *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar1;
      }
      if (!bVar6) {
        return false;
      }
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr)->Node
                          ).field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGGraphInputOutputSettings>((UObjectBaseUtility *)pUVar5);
    }
    else {
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      if (pUVar1 != *(UPCGPin **)((longlong)this + 8)) {
        return false;
      }
      pUVar1 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr)->Node)
                          .field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGSubgraphSettings>((UObjectBaseUtility *)pUVar5);
    }
  }
  else {
    pUVar2 = (((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGPin *)0x0) {
      return false;
    }
    if (pUVar2 != pUVar1) {
      return false;
    }
    pUVar1 = (((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr;
    if (pUVar1 == (UPCGPin *)0x0) {
      return false;
    }
    bVar6 = pUVar1 == *(UPCGPin **)((longlong)this + 8);
  }
  if (bVar6 == false) {
    return false;
  }
  return true;
}

// operator() @ 14a01a2c0

bool __thiscall
`TestMeshSelectorWeighted'::__l29::<lambda_2>::operator()
          (void *this,FPCGMeshSelectorWeightedEntry *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  UObject *local_res8;
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  pUVar1 = *(UObject **)this;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res8);
  bVar2 = FSoftObjectPath::operator==((FSoftObjectPath *)&(param_1->Descriptor)._padding_,&local_30)
  ;
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator() @ 14a01a370

bool __thiscall
`PCGCollapseSubgraphTests::
ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>'::__l2::<lambda_3>::
operator()(void *this,TObjectPtr<UPCGEdge> *param_1)

{
  UPCGPin *pUVar1;
  UPCGPin *pUVar2;
  UPCGEdge *pUVar3;
  UPCGNode *pUVar4;
  UPCGSettings *pUVar5;
  bool bVar6;
  
  pUVar1 = *(UPCGPin **)this;
  if ((pUVar1 == (UPCGPin *)0x0) || (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0)) {
    pUVar3 = (param_1->field0_0x0).DebugPtr;
    if (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0) {
      pUVar2 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar2 == (UPCGPin *)0x0) {
        bVar6 = pUVar1 == (UPCGPin *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar1;
      }
      if (!bVar6) {
        return false;
      }
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr)->Node
                          ).field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGAttributeNoiseSettings>((UObjectBaseUtility *)pUVar5);
    }
    else {
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      if (pUVar1 != *(UPCGPin **)((longlong)this + 8)) {
        return false;
      }
      pUVar1 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr)->Node)
                          .field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGSurfaceSamplerSettings>((UObjectBaseUtility *)pUVar5);
    }
  }
  else {
    pUVar2 = (((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGPin *)0x0) {
      return false;
    }
    if (pUVar2 != pUVar1) {
      return false;
    }
    pUVar1 = (((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr;
    if (pUVar1 == (UPCGPin *)0x0) {
      return false;
    }
    bVar6 = pUVar1 == *(UPCGPin **)((longlong)this + 8);
  }
  if (bVar6 == false) {
    return false;
  }
  return true;
}

// operator() @ 14a01a490

bool __thiscall
`PCGCollapseSubgraphTests::
ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>'::__l2::<lambda_3>::
operator()(void *this,TObjectPtr<UPCGEdge> *param_1)

{
  UPCGPin *pUVar1;
  UPCGPin *pUVar2;
  UPCGEdge *pUVar3;
  UPCGNode *pUVar4;
  UPCGSettings *pUVar5;
  bool bVar6;
  
  pUVar1 = *(UPCGPin **)this;
  if ((pUVar1 == (UPCGPin *)0x0) || (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0)) {
    pUVar3 = (param_1->field0_0x0).DebugPtr;
    if (*(UPCGPin **)((longlong)this + 8) == (UPCGPin *)0x0) {
      pUVar2 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar2 == (UPCGPin *)0x0) {
        bVar6 = pUVar1 == (UPCGPin *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar1;
      }
      if (!bVar6) {
        return false;
      }
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr)->Node
                          ).field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGSurfaceSamplerSettings>((UObjectBaseUtility *)pUVar5);
    }
    else {
      pUVar1 = (pUVar3->OutputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      if (pUVar1 != *(UPCGPin **)((longlong)this + 8)) {
        return false;
      }
      pUVar1 = (pUVar3->InputPin).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGPin *)0x0) {
        return false;
      }
      pUVar4 = (pUVar1->Node).field0_0x0.DebugPtr;
      if (pUVar4 == (UPCGNode *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings(pUVar4);
      if (pUVar5 == (UPCGSettings *)0x0) {
        return false;
      }
      pUVar5 = UPCGNode::GetSettings
                         ((((((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr)->Node)
                          .field0_0x0.DebugPtr);
      bVar6 = UObjectBaseUtility::IsA<UPCGUserParameterGetSettings>((UObjectBaseUtility *)pUVar5);
    }
  }
  else {
    pUVar2 = (((param_1->field0_0x0).DebugPtr)->InputPin).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGPin *)0x0) {
      return false;
    }
    if (pUVar2 != pUVar1) {
      return false;
    }
    pUVar1 = (((param_1->field0_0x0).DebugPtr)->OutputPin).field0_0x0.DebugPtr;
    if (pUVar1 == (UPCGPin *)0x0) {
      return false;
    }
    bVar6 = pUVar1 == *(UPCGPin **)((longlong)this + 8);
  }
  if (bVar6 == false) {
    return false;
  }
  return true;
}

// `scalar_deleting_destructor' @ 14a01a5b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUPCGParamData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a01a5f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUPCGPointData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a01a630

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVUPCGPolyLineData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a01a670

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVUPCGPrimitiveData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a01a6b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUPCGSurfaceData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a01a6f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUPCGVolumeData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a01a730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a01a770

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void * __thiscall
UPCGGraphAuthoringTestHelperSettings::_scalar_deleting_destructor_
          (UPCGGraphAuthoringTestHelperSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGGraphAuthoringTestHelperSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// AddGetGraphParameterNode @ 14a01a7d0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __cdecl
PCGCollapseSubgraphTests::AddGetGraphParameterNode(UPCGGraph *param_1,FName param_2)

{
  int iVar1;
  longlong lVar2;
  FInstancedPropertyBag *this;
  FPropertyBagPropertyDesc *pFVar3;
  UPCGNode *this_00;
  UClass *pUVar4;
  UPCGSettings *pUVar5;
  UPCGSettings *local_res8;
  UClass *local_res18 [2];
  
  this = (FInstancedPropertyBag *)(**(code **)(param_1->_padding_ + 0x2c0))();
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(this,param_2);
  if (pFVar3 == (FPropertyBagPropertyDesc *)0x0) {
    return (UPCGNode *)0x0;
  }
  local_res8 = (UPCGSettings *)0x0;
  local_res18[0] = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  this_00 = UPCGGraph::AddNodeOfType(param_1,(TSubclassOf<UPCGSettings>)local_res18,&local_res8);
  pUVar5 = local_res8;
  if (local_res8 != (UPCGSettings *)0x0) {
    pUVar4 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14a01a874;
  }
  pUVar5 = (UPCGSettings *)0x0;
LAB_14a01a874:
  pUVar5[1]._padding_ = (longlong)param_2;
  lVar2 = *(longlong *)&(pFVar3->ID).C;
  pUVar5[1]._padding_ = *(longlong *)&pFVar3->ID;
  pUVar5[1]._padding_ = lVar2;
  UPCGNode::UpdateAfterSettingsChangeDuringCreation(this_00);
  return this_00;
}

// CreateBasePointData @ 14a01aa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UPCGBasePointData * __cdecl PCGTestsCommon::CreateBasePointData(TVector<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  UPCGPointArrayData *pUVar8;
  UPCGBasePointData *pUVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  longlong local_118 [2];
  int local_108;
  longlong local_98 [2];
  int local_88;
  ulonglong local_18;
  
  pTVar4 = CVarPCGEnablePointArrayData.Ref;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 1;
  }
  if (pTVar4->ShadowedValue[lVar7] == false) {
    pUVar8 = (UPCGPointArrayData *)CreateEmptyPointData<UPCGPointData,0>();
    if ((pUVar8 == (UPCGPointArrayData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SinglePointData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                           ,0x4e,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pUVar9 = (UPCGBasePointData *)(*pcVar2)();
      return pUVar9;
    }
    (**(code **)(pUVar8->_padding_ + 0x490))(pUVar8,1,1);
    iVar6 = (**(code **)(pUVar8->_padding_ + 0x488))(pUVar8);
    if ((iVar6 != 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SinglePointData->GetNumPoints() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                           ,0x5d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pUVar9 = (UPCGBasePointData *)(*pcVar2)();
      return pUVar9;
    }
    (**(code **)(pUVar8->_padding_ + 0x4c0))(pUVar8,local_98,1);
    local_120 = (longlong)local_88;
    if (local_88 < 1) {
      local_128 = 0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UPCGBasePointData *)(*pcVar2)();
        return pUVar9;
      }
    }
  }
  else {
    pUVar8 = CreateEmptyPointData<UPCGPointArrayData,0>();
    if ((pUVar8 == (UPCGPointArrayData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SinglePointData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                           ,0x4e,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pUVar9 = (UPCGBasePointData *)(*pcVar2)();
      return pUVar9;
    }
    (**(code **)(pUVar8->_padding_ + 0x490))(pUVar8,1,1);
    iVar6 = (**(code **)(pUVar8->_padding_ + 0x488))(pUVar8);
    if ((iVar6 != 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SinglePointData->GetNumPoints() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                           ,0x5d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pUVar9 = (UPCGBasePointData *)(*pcVar2)();
      return pUVar9;
    }
    (**(code **)(pUVar8->_padding_ + 0x4c0))(pUVar8,local_118,1);
    local_120 = (longlong)local_108;
    local_98[0] = local_118[0];
    if (local_108 < 1) {
      local_128 = 0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      local_98[0] = local_118[0];
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UPCGBasePointData *)(*pcVar2)();
        return pUVar9;
      }
    }
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  *(double *)(local_98[0] + 0x20) = (param_1->field0_0x0)._s_0.X;
  *(double *)(local_98[0] + 0x28) = dVar3;
  *(double *)(local_98[0] + 0x30) = dVar1;
  *(undefined8 *)(local_98[0] + 0x38) = 0;
  return (UPCGBasePointData *)pUVar8;
}

// CreateBasePointData @ 14a01acb0

UPCGBasePointData * __cdecl PCGTestsCommon::CreateBasePointData(void)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  UPCGPointArrayData *pUVar5;
  UPCGBasePointData *pUVar6;
  
  pTVar2 = CVarPCGEnablePointArrayData.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 1;
      goto LAB_14a01acd8;
    }
  }
  lVar4 = 0;
LAB_14a01acd8:
  if (pTVar2->ShadowedValue[lVar4] == false) {
    pUVar5 = (UPCGPointArrayData *)CreateEmptyPointData<UPCGPointData,0>();
  }
  else {
    pUVar5 = CreateEmptyPointData<UPCGPointArrayData,0>();
  }
  if (pUVar5 == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SinglePointData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                       ,0x4e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UPCGBasePointData *)(*pcVar1)();
      return pUVar6;
    }
  }
  (**(code **)(pUVar5->_padding_ + 0x490))(pUVar5,1,1);
  return (UPCGBasePointData *)pUVar5;
}

// CreateEmptyBasePointData @ 14a01ad60

UPCGBasePointData * __cdecl PCGTestsCommon::CreateEmptyBasePointData(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  UPCGPointArrayData *pUVar4;
  UPCGPointData *pUVar5;
  
  pTVar1 = CVarPCGEnablePointArrayData.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_14a01ad88;
    }
  }
  lVar3 = 0;
LAB_14a01ad88:
  if (pTVar1->ShadowedValue[lVar3] != false) {
    pUVar4 = CreateEmptyPointData<UPCGPointArrayData,0>();
    return (UPCGBasePointData *)pUVar4;
  }
  pUVar5 = CreateEmptyPointData<UPCGPointData,0>();
  return (UPCGBasePointData *)pUVar5;
}

// CreateEmptyParamData @ 14a01adb0

UPCGParamData * __cdecl PCGTestsCommon::CreateEmptyParamData(void)

{
  UObject *pUVar1;
  UPCGParamData *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UPCGParamData>(pUVar1);
  return pUVar2;
}

// CreatePolyLineData @ 14a01add0

UPCGPolyLineData * __cdecl PCGTestsCommon::CreatePolyLineData(void)

{
  return (UPCGPolyLineData *)0x0;
}

// CreatePrimitiveData @ 14a01ade0

UPCGPrimitiveData * __cdecl PCGTestsCommon::CreatePrimitiveData(void)

{
  return (UPCGPrimitiveData *)0x0;
}

// CreateRandomBasePointData @ 14a01adf0

UPCGBasePointData * __cdecl
PCGTestsCommon::CreateRandomBasePointData(int param_1,int param_2,bool param_3)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  UPCGPointArrayData *pUVar4;
  
  pTVar1 = CVarPCGEnablePointArrayData.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_14a01ae2e;
    }
  }
  lVar3 = 0;
LAB_14a01ae2e:
  if (pTVar1->ShadowedValue[lVar3] == false) {
    pUVar4 = (UPCGPointArrayData *)CreateRandomPointData<UPCGPointData,0>(param_1,param_2,param_3);
  }
  else {
    pUVar4 = CreateRandomPointData<UPCGPointArrayData,0>(param_1,param_2,param_3);
  }
  return (UPCGBasePointData *)pUVar4;
}

// CreateSurfaceData @ 14a01ae70

UPCGSurfaceData * __cdecl PCGTestsCommon::CreateSurfaceData(void)

{
  return (UPCGSurfaceData *)0x0;
}

// CreateTemporaryActor @ 14a01ae80

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

AActor * __cdecl PCGTestsCommon::CreateTemporaryActor(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *pAVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_AActor_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pAVar3 = (AActor *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pAVar3;
}

// CreateVolumeData @ 14a01af20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGVolumeData * __cdecl PCGTestsCommon::CreateVolumeData(TBox<double> *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGVolumeData *this;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UPCGVolumeData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this = (UPCGVolumeData *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  UPCGVolumeData::Initialize(this,param_1);
  return this;
}

// CullingLogEnabled @ 14a01afe0

bool __cdecl PCGGraphExecutionLogging::CullingLogEnabled(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarGraphExecutionCullingLoggingEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// EmptyLinkFunctionForGeneratedCodePCGGraphAuthoringTestHelperSettings @ 14a01b2c0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGraphAuthoringTestHelperSettings(void)

{
  return;
}

// GenerateAllowedData @ 14a01b2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> * __cdecl
PCGTestsCommon::GenerateAllowedData
          (TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPinProperties *param_1)

{
  code *pcVar1;
  byte bVar2;
  void *pvVar3;
  TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
  *pTVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *pTVar8;
  FPCGDataTypeIdentifier *pFVar9;
  undefined8 uVar10;
  UPCGData *pUVar11;
  longlong lVar12;
  undefined ***pppuVar13;
  FScriptContainerElement *pFVar14;
  FPCGDataPtrWrapper *pFVar15;
  uint uVar16;
  uint uVar17;
  FPCGDataTypeIdentifier *pFVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  undefined1 local_397 [3];
  uint local_394;
  FPCGPinProperties *local_390;
  TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
  *local_388;
  uint uStack_380;
  uint uStack_37c;
  undefined8 local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  uint local_368;
  undefined4 uStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  FPCGDataTypeIdentifier *local_348;
  UPCGData *local_340;
  TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
  *local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_330;
  undefined8 uStack_310;
  TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
  *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_300;
  undefined8 uStack_2e0;
  initializer_list<TPairInitializer<FPCGDataTypeIdentifier_const_&,TFunction<UPCGData_*___cdecl(void)>_const_&>_>
  local_2d8;
  FPCGDataTypeIdentifier local_2c8;
  FPCGDataTypeIdentifier local_2b0;
  FPCGDataTypeIdentifier local_298;
  FPCGDataTypeIdentifier local_280;
  FPCGDataTypeIdentifier local_268;
  FPCGDataTypeIdentifier local_250;
  FPCGDataTypeIdentifier local_238;
  FPCGDataTypeIdentifier local_220 [2];
  undefined4 local_1ec;
  undefined4 local_1cc;
  code *local_1c8 [2];
  undefined **local_1b8;
  code *local_1b0;
  undefined ***local_1a0;
  code *local_198 [2];
  undefined **local_188;
  code *local_180;
  undefined ***local_170;
  code *local_168 [2];
  undefined **local_158;
  code *local_150;
  undefined ***local_140;
  code *local_138 [2];
  undefined **local_128;
  code *local_120;
  undefined ***local_110;
  code *local_108 [2];
  undefined **local_f8;
  code *local_f0;
  undefined ***local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  code *local_c0;
  undefined ***local_b0;
  TPairInitializer<FPCGDataTypeIdentifier_const_&,TFunction<UPCGData_*___cdecl(void)>_const_&>
  local_a8;
  FPCGDataTypeIdentifier *local_98;
  code **local_90;
  FPCGDataTypeIdentifier *local_88;
  code **local_80;
  FPCGDataTypeIdentifier *local_78;
  code **local_70;
  FPCGDataTypeIdentifier *local_68;
  code **local_60;
  FPCGDataTypeIdentifier *local_58;
  code **local_50;
  TPairInitializer<FPCGDataTypeIdentifier_const_&,TFunction<UPCGData_*___cdecl(void)>_const_&>
  local_48;
  
  pvVar3 = ThreadLocalStoragePointer;
  local_48.Key = (FPCGDataTypeIdentifier *)(__security_cookie.value ^ (ulonglong)auStack_3b8);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_390 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_a8.Key = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_250,Point);
    local_c8 = &
               ___7__TFunction_OwnedObject_P6APEAVUPCGPointData__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_a8.Value = (TFunction<UPCGData_*___cdecl(void)> *)local_d8;
    local_b0 = (undefined ***)0x0;
    local_c0 = `PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<UPCGPointData_*_(__cdecl*)(void),UPCGData_*>::Call;
    local_98 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_268,PolyLine);
    local_f8 = &
               ___7__TFunction_OwnedObject_P6APEAVUPCGPolyLineData__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_90 = local_108;
    local_e0 = (undefined ***)0x0;
    local_f0 = `PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
    local_108[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<UPCGPolyLineData_*_(__cdecl*)(void),UPCGData_*>::Call;
    local_88 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_280,Surface);
    local_128 = &
                ___7__TFunction_OwnedObject_P6APEAVUPCGSurfaceData__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_138;
    local_110 = (undefined ***)0x0;
    local_120 = `PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
    local_138[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<UPCGSurfaceData_*_(__cdecl*)(void),UPCGData_*>::Call;
    local_78 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_298,Volume);
    local_158 = &
                ___7__TFunction_OwnedObject_P6APEAVUPCGVolumeData__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_70 = local_168;
    local_140 = (undefined ***)0x0;
    local_150 = `PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<UPCGVolumeData_*_(__cdecl*)(void),UPCGData_*>::Call;
    local_68 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_2b0,Primitive);
    local_188 = &
                ___7__TFunction_OwnedObject_P6APEAVUPCGPrimitiveData__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_60 = local_198;
    local_170 = (undefined ***)0x0;
    local_180 = `PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_5>::<lambda_invoker_cdecl>;
    local_198[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<UPCGPrimitiveData_*_(__cdecl*)(void),UPCGData_*>::Call;
    local_58 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_2c8,Param);
    local_1b8 = &
                ___7__TFunction_OwnedObject_P6APEAVUPCGParamData__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_50 = local_1c8;
    local_2d8._First = &local_a8;
    local_1b0 = `PCGTestsCommon::GenerateAllowedData'::__l2::<lambda_6>::<lambda_invoker_cdecl>;
    local_1c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<UPCGParamData_*_(__cdecl*)(void),UPCGData_*>::Call;
    local_2d8._Last = &local_48;
    local_1a0 = (undefined ***)0x0;
    TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
    ::
    TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
              (&TypeToDataFn,&local_2d8);
    if (local_1c8[0] != (code *)0x0) {
      pppuVar13 = &local_1b8;
      if (local_1a0 != (undefined ***)0x0) {
        pppuVar13 = local_1a0;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_2c8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Ids.AllocatorInstance.Data);
    }
    if (local_198[0] != (code *)0x0) {
      pppuVar13 = &local_188;
      if (local_170 != (undefined ***)0x0) {
        pppuVar13 = local_170;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_2b0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Ids.AllocatorInstance.Data);
    }
    if (local_168[0] != (code *)0x0) {
      pppuVar13 = &local_158;
      if (local_140 != (undefined ***)0x0) {
        pppuVar13 = local_140;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_298.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Ids.AllocatorInstance.Data);
    }
    if (local_138[0] != (code *)0x0) {
      pppuVar13 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar13 = local_110;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_280.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Ids.AllocatorInstance.Data);
    }
    if (local_108[0] != (code *)0x0) {
      pppuVar13 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar13 = local_e0;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_268.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Ids.AllocatorInstance.Data);
    }
    if (local_d8[0] != (code *)0x0) {
      pppuVar13 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar13 = local_b0;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_250.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Ids.AllocatorInstance.Data);
    }
    atexit(`PCGTestsCommon::GenerateAllowedData'::__l2::
           _dynamic_atexit_destructor_for__TypeToDataFn__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  uStack_380 = 0;
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6;
  uStack_37c = 1;
  pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar14 + lVar7 * 0x30 + 0x12) = 0;
  *(undefined2 *)(pFVar14 + lVar7 * 0x30 + 0x16) = 0;
  *(undefined8 *)(pFVar14 + lVar7 * 0x30) = 0;
  *(undefined8 *)(pFVar14 + lVar7 * 0x30 + 8) = 0;
  *(undefined2 *)(pFVar14 + lVar7 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar14 + lVar7 * 0x30 + 0x18) = 0;
  *(undefined8 *)(pFVar14 + lVar7 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar14 + lVar7 * 0x30 + 0x28) = 0;
  uVar19 = TypeToDataFn._40_4_;
  uStack_36c = 0;
  local_368 = uStack_380;
  if (uVar19 != 0) {
    puVar21 = (uint *)&TypeToDataFn.field_0x10;
    if (TypeToDataFn._32_8_ != 0) {
      puVar21 = (uint *)TypeToDataFn._32_8_;
    }
    uVar16 = *puVar21;
    local_368 = 0;
    uStack_380 = 0;
    while (uVar16 == 0) {
      lVar7 = (longlong)(int)uStack_380;
      local_368 = local_368 + 0x20;
      uStack_380 = uStack_380 + 1;
      uStack_36c = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_380)
      goto LAB_14a01b424;
      uVar16 = puVar21[lVar7 + 1];
    }
    uStack_37c = -uVar16 & uVar16;
    uVar22 = (ulonglong)uStack_37c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_358 = (int)lVar7;
    uStack_36c = (local_368 - 1) + local_358;
    if ((int)uVar19 < (int)uStack_36c) {
      uStack_36c = uVar19;
    }
  }
LAB_14a01b424:
  bVar2 = TypeToDataFn._40_1_;
  uStack_364 = local_1ec;
  iStack_360 = TypeToDataFn._8_4_ - TypeToDataFn._52_4_;
  local_388 = &TypeToDataFn;
  uVar16 = uVar19 & 0xffffffe0;
  local_378 = 0x15529f100;
  TStack_300._padding_ = CONCAT44(uStack_37c,uStack_380);
  uStack_370 = 0xffffffff;
  TStack_300.CurrentBitIndex = uStack_36c;
  TStack_300.UnvisitedBitMask = 0xffffffff;
  local_308 = &TypeToDataFn;
  iVar6 = (int)uVar19 >> 5;
  TStack_300._28_4_ = local_1ec;
  TStack_300.BaseBitIndex = local_368;
  uStack_2e0 = CONCAT44(uStack_35c,iStack_360);
  TStack_300.Array = (TBitArray<FDefaultBitArrayAllocator> *)&TypeToDataFn.field_0x10;
  local_394 = uVar19;
  if ((int)uVar19 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar8;
    }
    uVar19 = TypeToDataFn._40_4_;
  }
  if (local_394 != uVar19) {
    lVar7 = 0x15529f100;
    if (TypeToDataFn._32_8_ != 0) {
      lVar7 = TypeToDataFn._32_8_;
    }
    uVar17 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar6 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar6;
      uVar16 = uVar16 + 0x20;
      iVar6 = iVar6 + 1;
      local_394 = uVar19;
      if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar6)
      goto LAB_14a01b570;
      uVar17 = *(uint *)(lVar7 + 4 + lVar12 * 4);
    }
    uVar22 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_354 = (int)lVar7;
    local_394 = (uVar16 - 1) + local_354;
    if ((int)uVar19 < (int)local_394) {
      local_394 = uVar19;
    }
  }
LAB_14a01b570:
  do {
    pTVar4 = local_308;
    uVar19 = local_394;
    if (*(int *)&local_308->field_0x8 - *(int *)&local_308->field_0x34 != (int)uStack_2e0) {
      local_398 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_398);
    }
    if (((TStack_300.CurrentBitIndex == uVar19) &&
        (TStack_300.Array == (TBitArray<FDefaultBitArrayAllocator> *)&TypeToDataFn.field_0x10)) &&
       (pTVar4 == &TypeToDataFn)) {
      return __return_storage_ptr__;
    }
    local_348 = &param_1->AllowedTypes;
    pFVar18 = (FPCGDataTypeIdentifier *)
              ((longlong)TStack_300.CurrentBitIndex * 0x60 + *(longlong *)pTVar4);
    pFVar9 = FPCGDataTypeIdentifier::operator&(pFVar18,&local_238,local_348);
    bVar5 = FPCGDataTypeIdentifier::operator!(pFVar9);
    if (local_238.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Ids.AllocatorInstance.Data);
    }
    if (!bVar5) {
      UE::Core::Private::Function::CheckCallable(*(void **)&pFVar18[1].Ids.ArrayNum);
      pFVar9 = (FPCGDataTypeIdentifier *)pFVar18[3].Ids.AllocatorInstance.Data;
      pcVar1 = *(code **)&pFVar18[1].Ids.ArrayNum;
      pFVar18 = pFVar18 + 2;
      if (pFVar9 != (FPCGDataTypeIdentifier *)0x0) {
        pFVar18 = pFVar9;
      }
      uVar10 = (**(code **)((pFVar18->Ids).AllocatorInstance.Data + 8))();
      pUVar11 = (UPCGData *)(*pcVar1)(uVar10);
      local_340 = pUVar11;
      if (pUVar11 != (UPCGData *)0x0) {
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
        uVar19 = 0;
        *(undefined4 *)(pFVar14 + 0x12) = 0;
        *(undefined2 *)(pFVar14 + 0x16) = 0;
        *(undefined8 *)&pFVar14->field_0x0 = 0;
        *(undefined4 *)&pFVar14[8].field_0x0 = 0;
        *(int *)(pFVar14 + 0xc) = 0;
        *(undefined2 *)&pFVar14[0x10].field_0x0 = 0;
        *(undefined8 *)&pFVar14[0x18].field_0x0 = 0;
        *(undefined8 *)&pFVar14[0x20].field_0x0 = 0;
        *(undefined8 *)&pFVar14[0x28].field_0x0 = 0;
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
        *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
        pFVar15 = (FPCGDataPtrWrapper *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 0x78);
        pFVar15[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar15[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar15[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar15[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar15[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (pFVar15->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (pFVar15->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar15[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar15[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar15[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar15[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar15[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar15[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar15[4].Data.field0_0x0 + 4) = 0;
        pFVar15[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar15[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&pFVar15[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&pFVar15[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(pFVar15,pUVar11);
        pFVar15[6].Data.field0_0x0 = *(TObjectPtr<UPCGData_const_>_u_0 *)&param_1->Label;
        if ((param_1->bAllowMultipleData != false) && (param_1->bAllowMultipleConnections != false))
        {
          uStack_37c = 1;
          local_368 = 0;
          uVar16 = TypeToDataFn._40_4_;
          uStack_36c = local_368;
          if (uVar16 != 0) {
            puVar21 = (uint *)&TypeToDataFn.field_0x10;
            if (TypeToDataFn._32_8_ != 0) {
              puVar21 = (uint *)TypeToDataFn._32_8_;
            }
            uVar17 = *puVar21;
            local_368 = 0;
            uVar19 = 0;
            while (uVar17 == 0) {
              lVar7 = (longlong)(int)uVar19;
              local_368 = local_368 + 0x20;
              uVar19 = uVar19 + 1;
              uStack_36c = uVar16;
              if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
              goto LAB_14a01b7b1;
              uVar17 = puVar21[lVar7 + 1];
            }
            uStack_37c = -uVar17 & uVar17;
            uVar22 = (ulonglong)uStack_37c * 2 + 1;
            lVar7 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            local_350 = (int)lVar7;
            uStack_36c = (local_368 - 1) + local_350;
            if ((int)uVar16 < (int)uStack_36c) {
              uStack_36c = uVar16;
            }
          }
LAB_14a01b7b1:
          uStack_364 = local_1cc;
          uVar17 = uVar16 & 0xffffffe0;
          iStack_360 = TypeToDataFn._8_4_ - TypeToDataFn._52_4_;
          local_388 = &TypeToDataFn;
          bVar2 = TypeToDataFn._40_1_;
          local_378 = 0x15529f100;
          uVar22 = TypeToDataFn._40_8_ & 0xffffffff;
          TStack_330._padding_ = CONCAT44(uStack_37c,uVar19);
          uStack_370 = 0xffffffff;
          TStack_330.CurrentBitIndex = uStack_36c;
          TStack_330.UnvisitedBitMask = 0xffffffff;
          local_338 = &TypeToDataFn;
          iVar6 = (int)uVar16 >> 5;
          TStack_330._28_4_ = local_1cc;
          TStack_330.BaseBitIndex = local_368;
          uStack_310 = CONCAT44(uStack_35c,iStack_360);
          TStack_330.Array = (TBitArray<FDefaultBitArrayAllocator> *)&TypeToDataFn.field_0x10;
          uVar20 = uVar16;
          uStack_380 = uVar19;
          if ((int)uVar16 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L"");
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              pTVar8 = (TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
              return pTVar8;
            }
            uVar20 = TypeToDataFn._40_4_;
          }
          if (uVar16 != uVar20) {
            lVar7 = 0x15529f100;
            if (TypeToDataFn._32_8_ != 0) {
              lVar7 = TypeToDataFn._32_8_;
            }
            uVar19 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar6 * 4);
            while (uVar19 == 0) {
              lVar12 = (longlong)iVar6;
              uVar17 = uVar17 + 0x20;
              iVar6 = iVar6 + 1;
              if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar6) {
                uVar22 = (ulonglong)uVar20;
                goto LAB_14a01b8d1;
              }
              uVar19 = *(uint *)(lVar7 + 4 + lVar12 * 4);
            }
            uVar22 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
            lVar7 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            local_34c = (int)lVar7;
            uVar17 = local_34c + -1 + uVar17;
            uVar22 = (ulonglong)uVar17;
            if ((int)uVar20 < (int)uVar17) {
              uVar22 = (ulonglong)uVar20;
            }
          }
LAB_14a01b8d1:
          while( true ) {
            pTVar4 = local_338;
            if (*(int *)&local_338->field_0x8 - *(int *)&local_338->field_0x34 != (int)uStack_310) {
              local_397[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_397);
            }
            if (((TStack_330.CurrentBitIndex == (int)uVar22) &&
                (TStack_330.Array ==
                 (TBitArray<FDefaultBitArrayAllocator> *)&TypeToDataFn.field_0x10)) &&
               (param_1 = local_390, pTVar4 == &TypeToDataFn)) break;
            pFVar18 = (FPCGDataTypeIdentifier *)
                      ((longlong)TStack_330.CurrentBitIndex * 0x60 + *(longlong *)pTVar4);
            pFVar9 = FPCGDataTypeIdentifier::operator&(pFVar18,local_220,local_348);
            bVar5 = FPCGDataTypeIdentifier::operator!(pFVar9);
            if (local_220[0].Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_220[0].Ids.AllocatorInstance.Data);
            }
            if (!bVar5) {
              UE::Core::Private::Function::CheckCallable(*(void **)&pFVar18[1].Ids.ArrayNum);
              pFVar9 = (FPCGDataTypeIdentifier *)pFVar18[3].Ids.AllocatorInstance.Data;
              pcVar1 = *(code **)&pFVar18[1].Ids.ArrayNum;
              pFVar18 = pFVar18 + 2;
              if (pFVar9 != (FPCGDataTypeIdentifier *)0x0) {
                pFVar18 = pFVar9;
              }
              uVar10 = (**(code **)((pFVar18->Ids).AllocatorInstance.Data + 8))();
              pUVar11 = (UPCGData *)(*pcVar1)(uVar10);
              if (pUVar11 != (UPCGData *)0x0) {
                iVar6 = __return_storage_ptr__->ArrayNum;
                if (iVar6 == __return_storage_ptr__->ArrayMax) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar6 + 1;
                pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
                *(undefined4 *)(pFVar14 + 0x12) = 0;
                *(undefined2 *)(pFVar14 + 0x16) = 0;
                *(undefined8 *)&pFVar14->field_0x0 = 0;
                *(undefined8 *)&pFVar14[8].field_0x0 = 0;
                *(undefined2 *)&pFVar14[0x10].field_0x0 = 0;
                *(undefined8 *)&pFVar14[0x18].field_0x0 = 0;
                *(undefined8 *)&pFVar14[0x20].field_0x0 = 0;
                *(undefined8 *)&pFVar14[0x28].field_0x0 = 0;
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x878,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
                pFVar15 = (FPCGDataPtrWrapper *)
                          (*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 0x78);
                *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
                pFVar15[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar15[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[6].WeakData.WeakPtr.ObjectIndex = 0x100;
                (pFVar15->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
                (pFVar15->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar15[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar15[3].WeakData.WeakPtr.ObjectIndex = 0;
                pFVar15[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
                *(undefined4 *)&pFVar15[4].Data.field0_0x0 = 0xffffffff;
                *(undefined4 *)((longlong)&pFVar15[4].Data.field0_0x0 + 4) = 0;
                pFVar15[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar15[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                *(undefined8 *)&pFVar15[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
                *(undefined4 *)((longlong)&pFVar15[7].Data.field0_0x0 + 4) = 0xffffffff;
                FPCGDataPtrWrapper::operator=(pFVar15,local_340);
                pFVar15[6].Data.field0_0x0 = *(TObjectPtr<UPCGData_const_>_u_0 *)&local_390->Label;
                iVar6 = *(int *)&pFVar14[8].field_0x0;
                if (iVar6 == *(int *)(pFVar14 + 0xc)) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x878,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
                }
                *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
                pFVar15 = (FPCGDataPtrWrapper *)
                          (*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 0x78);
                pFVar15[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar15[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[6].WeakData.WeakPtr.ObjectIndex = 0x100;
                (pFVar15->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
                (pFVar15->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar15[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                pFVar15[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar15[3].WeakData.WeakPtr.ObjectIndex = 0;
                pFVar15[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
                *(undefined4 *)&pFVar15[4].Data.field0_0x0 = 0xffffffff;
                *(undefined4 *)((longlong)&pFVar15[4].Data.field0_0x0 + 4) = 0;
                pFVar15[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                pFVar15[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                *(undefined8 *)&pFVar15[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
                *(undefined4 *)((longlong)&pFVar15[7].Data.field0_0x0 + 4) = 0xffffffff;
                FPCGDataPtrWrapper::operator=(pFVar15,pUVar11);
                pFVar15[6].Data.field0_0x0 = *(TObjectPtr<UPCGData_const_>_u_0 *)&local_390->Label;
              }
            }
            TStack_330.UnvisitedBitMask = TStack_330.UnvisitedBitMask & ~TStack_330._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_330);
          }
        }
      }
    }
    TStack_300.UnvisitedBitMask = TStack_300.UnvisitedBitMask & ~TStack_300._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_300);
  } while( true );
}

// GenerateParamData @ 14a01bf00

UPCGParamData * __cdecl SortCommonTestData::GenerateParamData(int param_1,int param_2,bool param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  FName FVar4;
  bool bVar5;
  UObject *pUVar6;
  UPCGParamData *pUVar7;
  FPCGMetadataDomain *this;
  FPCGMetadataAttribute<int> *this_00;
  long64 lVar8;
  ulonglong uVar9;
  int local_res8 [2];
  FPCGMetadataDomainID local_60 [3];
  
  uVar9 = (ulonglong)(uint)param_1;
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UPCGParamData>(pUVar6);
  if (((pUVar7 == (UPCGParamData *)0x0) || (pUVar7->_padding_ == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutData && OutData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                         ,0x14,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UPCGParamData *)(*pcVar1)();
    return pUVar7;
  }
  FVar4 = AttributeName;
  this_00 = (FPCGMetadataAttribute<int> *)0x0;
  local_60[0].Flag = PCGMetadataDomainID::Default.Flag;
  local_60[0]._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_60[0].CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_60[0].DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res8[0] = 0;
  this = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar7->_padding_,local_60);
  if (((this == (FPCGMetadataDomain *)0x0) ||
      (this_00 = FPCGMetadataDomain::CreateAttribute<int>(this,FVar4,local_res8,false,false),
      this_00 == (FPCGMetadataAttribute<int> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attribute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                         ,0x16,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UPCGParamData *)(*pcVar1)();
    return pUVar7;
  }
  fVar3 = __real_461c3c00;
  fVar2 = __real_3f800000;
  if (0 < param_1) {
    if (param_3) {
      do {
        param_2 = param_2 * 0xbb38435 + 0x3619636b;
        lVar8 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar7->_padding_,-1);
        FPCGMetadataAttributeBase::SetValueFromValueKey
                  ((FPCGMetadataAttributeBase *)this_00,lVar8,
                   (int)(((float)((uint)param_2 >> 9 | 0x3f800000) - fVar2) * fVar3) + 1,false);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else {
      do {
        lVar8 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar7->_padding_,-1);
        FPCGMetadataAttributeBase::SetValueFromValueKey
                  ((FPCGMetadataAttributeBase *)this_00,lVar8,1,false);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return pUVar7;
}

// GetOutputDataAndBuildPositionMap @ 14a01cb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
GetOutputDataAndBuildPositionMap
          (FPCGTestBaseClass *param_1,TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_2,
          TMap<UE::Math::TVector<double>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>_>
          *param_3,UPCGBasePointData **param_4)

{
  undefined8 *puVar1;
  UPCGBasePointData *pUVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  FObjectPtr_u_0 FVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  uint local_158 [2];
  FObjectPtr_u_0 local_150;
  FObjectPtr_u_0 local_148;
  undefined1 local_140 [16];
  int local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  undefined8 *local_f8;
  uint *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((param_1 == (FPCGTestBaseClass *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                         ,0x35,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  FString::FString((FString *)(local_140 + 8),"Valid number of data elements in output");
  pwVar11 = L"";
  if (local_130 != 0) {
    pwVar11 = (wchar_t *)local_140._8_8_;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,pwVar11,iVar6,2);
  if ((wchar_t *)local_140._8_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_140._8_8_);
  }
  if (!bVar5) goto LAB_14a01cd33;
  if (param_2->ArrayNum < 1) {
    local_168 = 0;
    local_160 = (longlong)param_2->ArrayNum;
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_150 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(param_2->AllocatorInstance).Data)->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a01cc2e:
    if (local_150.Handle == (UObject *)0x0) goto LAB_14a01cc50;
    pUVar8 = Z_Construct_UClass_UPCGSettings_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_150,pUVar8);
    FVar9 = local_150;
    if (!bVar5) goto LAB_14a01cc50;
  }
  else {
    if (local_150.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_150.Handle);
      goto LAB_14a01cc2e;
    }
LAB_14a01cc50:
    FVar9.Handle = (UObject *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar9.Handle != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(FVar9.Handle);
  }
  FString::FString(&local_128,"Valid output settings");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar12.Data = local_128.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)param_1,(wchar_t *)FVar12.Data,FVar9.Handle != (UObject *)0x0);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (param_2->ArrayNum < 2) {
    local_168 = 1;
    local_160 = (longlong)param_2->ArrayNum;
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_148 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)((param_2->AllocatorInstance).Data + 0x78))->Handle
  ;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a01cd0c:
    if ((UPCGBasePointData *)local_148.Handle == (UPCGBasePointData *)0x0) goto LAB_14a01cd2e;
    pUVar8 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_148,pUVar8);
    FVar9 = local_148;
    if (!bVar5) goto LAB_14a01cd2e;
  }
  else {
    if ((UPCGBasePointData *)local_148.Handle != (UPCGBasePointData *)0x0) {
      UE::GC::MarkAsReachable(local_148.Handle);
      goto LAB_14a01cd0c;
    }
LAB_14a01cd2e:
    FVar9.Handle = (UObject *)0x0;
  }
  *param_4 = (UPCGBasePointData *)FVar9;
LAB_14a01cd33:
  pUVar2 = *param_4;
  FString::FString(&local_118,"Valid output data");
  if (pUVar2 == (UPCGBasePointData *)0x0) {
    pcVar3 = *(code **)(*(longlong *)param_1 + 0x28);
    FString::PrintfImpl(&local_108,L"Expected \'%s\' to be not null.");
    (*pcVar3)(param_1,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    (**(code **)((*param_4)->_padding_ + 0x500))(*param_4,&local_c8);
    local_158[0] = 0;
    iVar6 = (**(code **)((*param_4)->_padding_ + 0x488))();
    if ((int)local_158[0] < iVar6) {
      do {
        uVar4 = local_158[0];
        uVar7 = 0;
        if ((int)local_158[0] < local_b8) {
          uVar7 = ~local_158[0] >> 0x1f;
        }
        if (uVar7 == 0) {
          local_168 = (longlong)(int)local_158[0];
          local_160 = (longlong)local_b8;
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar10 = (longlong)((int)uVar4 % local_bc) * (longlong)local_c0;
        puVar1 = (undefined8 *)(lVar10 + 0x20 + local_c8);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        local_d8 = *(undefined8 *)(lVar10 + 0x30 + local_c8);
        local_f8 = &local_e8;
        local_f0 = local_158;
        TSet<TTuple<UE::Math::TVector<double>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Math::TVector<double>_&&,int_&>_>
                  ((TSet<TTuple<UE::Math::TVector<double>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>,FDefaultSetAllocator>
                    *)param_3,(TPairInitializer<UE::Math::TVector<double>_&&,int_&> *)local_140,
                   (bool *)&local_f8);
        local_158[0] = local_158[0] + 1;
        iVar6 = (**(code **)((*param_4)->_padding_ + 0x488))();
      } while ((int)local_158[0] < iVar6);
    }
  }
  return;
}

// GetPinsToDeactivateString @ 14a01cec0

FString * __cdecl
PCGGraphExecutionLogging::GetPinsToDeactivateString
          (FString *__return_storage_ptr__,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined4 local_res8 [2];
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  local_res8[0] = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar3 = true;
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    PCGPinIdHelpers::GetNodeIdFromPinId(*(ulong64 *)pFVar8);
    PCGPinIdHelpers::GetPinIndexFromPinId(*(ulong64 *)pFVar8);
    if (bVar3) {
      bVar5 = true;
      ::FString::PrintfImpl(&local_38,L"%llu_%llu");
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
      iVar6 = local_38.Data.ArrayNum;
    }
    else {
      bVar4 = true;
      ::FString::PrintfImpl(&local_48,L",%llu_%llu");
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
      iVar6 = local_48.Data.ArrayNum;
    }
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar7.Data,iVar9);
    if (bVar4) {
      bVar4 = false;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (bVar5) {
      bVar5 = false;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = false;
    pFVar8 = pFVar8 + 8;
  }
  return __return_storage_ptr__;
}

// InitializeTestContext @ 14a01d240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> __cdecl
PCGTestsCommon::InitializeTestContext
          (IPCGElement *param_1,FPCGDataCollection *param_2,UPCGComponent *param_3,UPCGNode *param_4
          )

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> TVar3;
  UClass *pUVar4;
  IPCGElement this;
  UPCGNode *local_res8;
  FWeakObjectPtr local_48;
  void *pvStack_40;
  UPCGComponent *local_38;
  FWeakObjectPtr local_30;
  void *pvStack_28;
  
  if (param_2 == (FPCGDataCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElement",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\PCGTestsCommon.cpp"
                       ,0x71,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (FPCGContext *)(*pcVar1)();
      return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)TVar3.Ptr;
    }
  }
  pcVar1 = *(code **)((param_2->TaggedData).AllocatorInstance.Data + 0x10);
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  if (param_4 == (UPCGNode *)0x0) {
    pvStack_40 = (void *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UPCGGraphExecutionSource_NoRegister();
    pvStack_40 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_4,pUVar4);
    if (pvStack_40 != (void *)0x0) {
      local_res8 = param_4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_4);
      }
      FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res8);
    }
  }
  local_30 = local_48;
  pvStack_28 = pvStack_40;
  local_38 = param_3;
  if (param_3 == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGElement.h"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (FPCGContext *)(*pcVar1)();
      return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)TVar3.Ptr;
    }
  }
  this = (IPCGElement)(*pcVar1)(param_2);
  *param_1 = this;
  FPCGContext::InitializeSettings((FPCGContext *)this,false);
  *(undefined4 *)((longlong)*param_1 + 0x90) = 1;
  return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)(FPCGContext *)param_1;
}

// LogAddToManagedResources @ 14a01d410

void __cdecl
PCGGeneratedResourcesLogging::LogAddToManagedResources
          (UPCGComponent *param_1,UPCGManagedResource *param_2)

{
  return;
}

// LogChangeOriginIgnoredForComponent @ 14a01d420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogChangeOriginIgnoredForComponent
          (UObject *param_1,IPCGGraphExecutionSource *param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  FString *pFVar5;
  byte bVar6;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar1 = CVarGraphExecutionLoggingEnable.Ref;
  local_res18[0] = (FName)((ulonglong)local_res18[0] & 0xffffffff00000000);
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 1;
    if (!bVar2) goto LAB_14a01d45c;
  }
  lVar4 = 0;
LAB_14a01d45c:
  if ((pTVar1->ShadowedValue[lVar4] != false) && (4 < (byte)LogPCG._0_1_)) {
    bVar2 = param_1 != (UObject *)0x0;
    if (bVar2) {
      local_res18[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res18[0].Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(local_res18,&local_48);
    }
    bVar6 = bVar2;
    if (param_2 != (IPCGGraphExecutionSource *)0x0) {
      plVar3 = (longlong *)(**(code **)((longlong)*param_2 + 0x10))(param_2);
      lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
      if (lVar4 != 0) {
        plVar3 = (longlong *)(**(code **)((longlong)*param_2 + 0x10))(param_2);
        lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
        bVar6 = 2;
        local_res18[0] = *(FName *)(lVar4 + 0x18);
        ::FName::ToString(local_res18,&local_58);
      }
    }
    pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
    PCGLog::GetExecutionSourceName(&local_38,param_2,false,pFVar5);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((bVar6 & 2) != 0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogCleanupLocal @ 14a01d5d0

void __cdecl PCGGeneratedResourcesLogging::LogCleanupLocal(UPCGComponent *param_1,bool param_2)

{
  return;
}

// LogCleanupLocalImmediate @ 14a01d5e0

void __cdecl
PCGGeneratedResourcesLogging::LogCleanupLocalImmediate
          (UPCGComponent *param_1,bool param_2,
          TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// LogCleanupLocalImmediateFinished @ 14a01d5f0

void __cdecl
PCGGeneratedResourcesLogging::LogCleanupLocalImmediateFinished
          (UPCGComponent *param_1,TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *param_2
          )

{
  return;
}

// LogCleanupLocalImmediateResource @ 14a01d600

void __cdecl
PCGGeneratedResourcesLogging::LogCleanupLocalImmediateResource
          (UPCGComponent *param_1,UPCGManagedResource *param_2)

{
  return;
}

// LogCleanupUnusedManagedResources @ 14a01d610

void __cdecl
PCGGeneratedResourcesLogging::LogCleanupUnusedManagedResources
          (UPCGComponent *param_1,TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *param_2
          )

{
  return;
}

// LogCleanupUnusedManagedResourcesFinished @ 14a01d620

void __cdecl
PCGGeneratedResourcesLogging::LogCleanupUnusedManagedResourcesFinished
          (UPCGComponent *param_1,TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *param_2
          )

{
  return;
}

// LogCleanupUnusedManagedResourcesResource @ 14a01d630

void __cdecl
PCGGeneratedResourcesLogging::LogCleanupUnusedManagedResourcesResource
          (UPCGComponent *param_1,UPCGManagedResource *param_2)

{
  return;
}

// LogComponentAttachmentFailedWarning @ 14a01d640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::Component::LogComponentAttachmentFailedWarning(FPCGContext *param_1)

{
  LogWarningOnGraph(&Format::ComponentAttachmentFailed,param_1);
  return;
}

// LogCreateCleanupTask @ 14a01d660

void __cdecl PCGGeneratedResourcesLogging::LogCreateCleanupTask(UPCGComponent *param_1,bool param_2)

{
  return;
}

// LogCreateCleanupTaskFinished @ 14a01d670

void __cdecl
PCGGeneratedResourcesLogging::LogCreateCleanupTaskFinished
          (TArray<UPCGManagedResource_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// LogCreateCleanupTaskFinished @ 14a01d680

void __cdecl
PCGGeneratedResourcesLogging::LogCreateCleanupTaskFinished
          (UPCGComponent *param_1,
          TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// LogCreateCleanupTaskResource @ 14a01d690

void __cdecl
PCGGeneratedResourcesLogging::LogCreateCleanupTaskResource
          (UPCGComponent *param_1,UPCGManagedResource *param_2)

{
  return;
}

// LogDirectoryNotFound @ 14a01d6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::LogDirectoryNotFound(FString *param_1,FPCGContext *param_2)

{
  FText *pFVar1;
  FTextFormat local_38;
  FText local_28;
  FText local_18;
  
  pFVar1 = FText::FromString(&local_18,param_1);
  local_38.TextFormatData.Object = Format::DirectoryNotFound.TextFormatData.Object;
  local_38.TextFormatData.SharedReferenceCount.ReferenceController =
       Format::DirectoryNotFound.TextFormatData.SharedReferenceCount.ReferenceController;
  if (Format::DirectoryNotFound.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Format::DirectoryNotFound.TextFormatData.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(Format::DirectoryNotFound.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = FText::Format<FText>(&local_28,&local_38,pFVar1);
  LogErrorOnGraph(pFVar1,param_2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// LogEmptyExpressionWarning @ 14a01d710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::Parsing::LogEmptyExpressionWarning(FPCGContext *param_1)

{
  LogWarningOnGraph(&Format::EmptyExpression,param_1);
  return;
}

// LogEnabled @ 14a01d730

bool __cdecl PCGGeneratedResourcesLogging::LogEnabled(void)

{
  return false;
}

// LogEnabled @ 14a01d740

bool __cdecl PCGGraphExecutionLogging::LogEnabled(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarGraphExecutionLoggingEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// LogExecutionSourceCancellation @ 14a01d780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogExecutionSourceCancellation
          (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  IPCGGraphExecutionSource *pIVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  FString *pFVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint *puVar20;
  uint uVar21;
  undefined4 local_res10 [2];
  int local_res18;
  FName local_res20;
  undefined4 uStack_9c;
  FString local_98;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  FString local_48;
  ulonglong uVar19;
  
  pTVar5 = CVarGraphExecutionLoggingEnable.Ref;
  uVar15 = 0;
  local_res10[0] = 0;
  bVar7 = IsInParallelGameThread();
  uVar8 = 1;
  if (!bVar7) {
    bVar7 = IsInGameThread();
    uVar10 = 1;
    if (!bVar7) goto LAB_14a01d7be;
  }
  uVar10 = uVar15;
LAB_14a01d7be:
  if ((pTVar5->ShadowedValue[uVar10] != false) || (PRIVATE_GIsRunningCommandlet != false)) {
    iVar2 = *(int *)&(param_1->Elements).field_0x28;
    puVar1 = &(param_1->Elements).field_0x10;
    uVar18 = 0;
    uVar10 = uVar15;
    iVar9 = 0;
    if (iVar2 != 0) {
      puVar20 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar16 = *puVar20;
      uVar19 = uVar15;
      uVar18 = 0;
      while (uVar16 == 0) {
        iVar14 = (int)uVar10;
        uVar18 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uVar18;
        uVar16 = iVar14 + 1;
        uVar10 = (ulonglong)uVar16;
        iVar9 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar16) goto LAB_14a01d86d;
        uVar16 = puVar20[(longlong)iVar14 + 1];
      }
      uVar8 = -uVar16 & uVar16;
      uVar19 = (ulonglong)uVar8 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iVar9 = (uVar18 - 1) + local_res18;
      if (iVar2 < iVar9) {
        iVar9 = iVar2;
      }
    }
LAB_14a01d86d:
    uVar16 = *(uint *)&(param_1->Elements).field_0x28;
    uVar21 = uVar16 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uVar8,(int)uVar10);
    TStack_80.CurrentBitIndex = iVar9;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar16 >> 5;
    TStack_80._28_4_ = iVar9;
    TStack_80.BaseBitIndex = uVar18;
    uStack_60 = CONCAT44(uStack_9c,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_88 = param_1;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar16 != uVar8) {
      puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar14;
        uVar21 = uVar21 + 0x20;
        iVar14 = iVar14 + 1;
        uVar16 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14a01d980;
        uVar18 = *(uint *)(puVar17 + lVar13 * 4 + 4);
      }
      uVar10 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar16 = (int)lVar13 + -1 + uVar21;
      if ((int)uVar8 < (int)uVar16) {
        uVar16 = uVar8;
      }
    }
LAB_14a01d980:
    while( true ) {
      pTVar6 = local_88;
      if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
          (int)uStack_60) {
        `TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_80.CurrentBitIndex == uVar16) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == param_1)) break;
      pIVar3 = *(IPCGGraphExecutionSource **)
                (*(longlong *)&pTVar6->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
      if (3 < (byte)LogPCG._0_1_) {
        if (pIVar3 != (IPCGGraphExecutionSource *)0x0) {
          plVar11 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
          lVar13 = (**(code **)(*plVar11 + 0x60))(plVar11);
          if (lVar13 != 0) {
            plVar11 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
            lVar13 = (**(code **)(*plVar11 + 0x60))(plVar11);
            uVar15 = 1;
            local_res20 = *(FName *)(lVar13 + 0x18);
            ::FName::ToString(&local_res20,&local_98);
          }
        }
        pFVar12 = ::FString::FString(&local_48,L"MISSINGOWNER");
        PCGLog::GetExecutionSourceName(&local_58,pIVar3,false,pFVar12);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if ((uVar15 != 0) &&
           (uVar15 = 0, local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  return;
}

// LogFailToCreateAccessorError @ 14a01dae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::LogFailToCreateAccessorError
          (FPCGAttributePropertySelector *param_1,FPCGContext *param_2)

{
  atomic<int> *paVar1;
  FString *pFVar2;
  FText *pFVar3;
  TSharedRef<FTextFormatData,1> local_38;
  FText local_28;
  FText local_18;
  
  pFVar2 = FPCGAttributePropertySelector::ToString(param_1,(FString *)&local_38,false);
  FText::FromString(&local_28,pFVar2);
  if (local_38.Object != (FTextFormatData *)0x0) {
    FMemory::Free(local_38.Object);
  }
  local_38 = Format::CreateAccessorFailure.TextFormatData;
  if (Format::CreateAccessorFailure.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::CreateAccessorFailure.TextFormatData.SharedReferenceCount.ReferenceController
              .ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar3 = FText::Format<FText>(&local_18,(FTextFormat *)&local_38,&local_28);
  LogErrorOnGraph(pFVar3,param_2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// LogFailToGetAttributeError @ 14a01db70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::LogFailToGetAttributeError
          (FPCGAttributePropertySelector *param_1,FPCGContext *param_2)

{
  atomic<int> *paVar1;
  FString *pFVar2;
  FText *pFVar3;
  TSharedRef<FTextFormatData,1> local_38;
  FText local_28;
  FText local_18;
  
  pFVar2 = FPCGAttributePropertySelector::ToString(param_1,(FString *)&local_38,false);
  FText::FromString(&local_28,pFVar2);
  if (local_38.Object != (FTextFormatData *)0x0) {
    FMemory::Free(local_38.Object);
  }
  local_38 = Format::GetAttributeFailure.TextFormatData;
  if (Format::GetAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::GetAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar3 = FText::Format<FText>(&local_18,(FTextFormat *)&local_38,&local_28);
  LogErrorOnGraph(pFVar3,param_2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// LogFailToGetAttributeError @ 14a01dc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::LogFailToGetAttributeError(FText *param_1,FPCGContext *param_2)

{
  atomic<int> *paVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_38;
  TSharedRef<FTextFormatData,1> local_28;
  FText local_18;
  
  local_38.TextData.Reference = (param_1->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = param_1->Flags;
  local_28 = Format::GetAttributeFailure.TextFormatData;
  if (Format::GetAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::GetAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar2 = FText::Format<FText>(&local_18,(FTextFormat *)&local_28,&local_38);
  LogErrorOnGraph(pFVar2,param_2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// LogFailToGetAttributeError @ 14a01dc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::LogFailToGetAttributeError(FName param_1,FPCGContext *param_2)

{
  atomic<int> *paVar1;
  FText *pFVar2;
  FName local_res8;
  undefined1 local_res18 [16];
  FText local_48;
  TSharedRef<FTextFormatData,1> local_38;
  FText local_28;
  FText local_18;
  
  local_res8 = param_1;
  pFVar2 = FText::FromName(&local_18,&local_res8);
  local_48.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res18);
  }
  local_48.Flags = pFVar2->Flags;
  local_38 = Format::GetAttributeFailure.TextFormatData;
  if (Format::GetAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::GetAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar2 = FText::Format<FText>(&local_28,(FTextFormat *)&local_38,&local_48);
  LogErrorOnGraph(pFVar2,param_2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// LogFileNotFound @ 14a01dd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::LogFileNotFound(FString *param_1,FPCGContext *param_2)

{
  FText *pFVar1;
  FTextFormat local_38;
  FText local_28;
  FText local_18;
  
  pFVar1 = FText::FromString(&local_18,param_1);
  local_38.TextFormatData.Object = Format::FileNotFound.TextFormatData.Object;
  local_38.TextFormatData.SharedReferenceCount.ReferenceController =
       Format::FileNotFound.TextFormatData.SharedReferenceCount.ReferenceController;
  if (Format::FileNotFound.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Format::FileNotFound.TextFormatData.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(Format::FileNotFound.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = FText::Format<FText>(&local_28,&local_38,pFVar1);
  LogErrorOnGraph(pFVar1,param_2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// LogFirstInputOnlyWarning @ 14a01ddc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::LogFirstInputOnlyWarning(FName param_1,FPCGContext *param_2)

{
  FText *pFVar1;
  FName local_res8 [4];
  FTextFormat local_38;
  FText local_28;
  FText local_18;
  
  local_res8[0] = param_1;
  pFVar1 = FText::FromName(&local_18,local_res8);
  local_38.TextFormatData.Object = Format::FirstInputOnly.TextFormatData.Object;
  local_38.TextFormatData.SharedReferenceCount.ReferenceController =
       Format::FirstInputOnly.TextFormatData.SharedReferenceCount.ReferenceController;
  if (Format::FirstInputOnly.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Format::FirstInputOnly.TextFormatData.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(Format::FirstInputOnly.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = FText::Format<FText>(&local_28,&local_38,pFVar1);
  LogWarningOnGraph(pFVar1,param_2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// LogGraphExecuteFrameFinished @ 14a01de40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PCGGraphExecutionLogging::LogGraphExecuteFrameFinished(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarGraphExecutionLoggingEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_14a01de68;
    }
  }
  lVar3 = 0;
LAB_14a01de68:
  if ((pTVar1->ShadowedValue[lVar3] != false) && (4 < (byte)LogPCG._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    return;
  }
  return;
}

// LogGraphPostSchedule @ 14a01dea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogGraphPostSchedule
          (TMap<unsigned___int64,FPCGGraphTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>_>
           *param_1,
          TMap<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
          *param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarGraphExecutionCullingLoggingEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_14a01ded7;
    }
  }
  lVar3 = 0;
LAB_14a01ded7:
  if (pTVar1->ShadowedValue[lVar3] != false) {
    if (4 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    LogGraphTasks(param_1,param_2);
  }
  return;
}

// LogGraphSchedule @ 14a01df20

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogGraphSchedule(IPCGGraphExecutionSource *param_1,UPCGGraph *param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  FString *pFVar5;
  byte bVar6;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar1 = CVarGraphExecutionLoggingEnable.Ref;
  local_res18[0] = (FName)((ulonglong)local_res18[0] & 0xffffffff00000000);
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 1;
    if (!bVar2) goto LAB_14a01df5c;
  }
  lVar4 = 0;
LAB_14a01df5c:
  if (((pTVar1->ShadowedValue[lVar4] != false) || (PRIVATE_GIsRunningCommandlet != false)) &&
     (3 < (byte)LogPCG._0_1_)) {
    bVar2 = param_2 != (UPCGGraph *)0x0;
    if (bVar2) {
      local_res18[0] = (FName)param_2->_padding_;
      ::FName::ToString(local_res18,&local_48);
    }
    bVar6 = bVar2;
    if (param_1 != (IPCGGraphExecutionSource *)0x0) {
      plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
      lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
      if (lVar4 != 0) {
        plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
        lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
        bVar6 = 2;
        local_res18[0] = *(FName *)(lVar4 + 0x18);
        ::FName::ToString(local_res18,&local_58);
      }
    }
    pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
    PCGLog::GetExecutionSourceName(&local_38,param_1,false,pFVar5);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((bVar6 & 2) != 0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogGraphScheduleDependency @ 14a01e0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogGraphScheduleDependency
          (IPCGGraphExecutionSource *param_1,FPCGStack *param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  FString *pFVar6;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar1 = CVarGraphExecutionLoggingEnable.Ref;
  lVar5 = 0;
  local_res18[0] = (FName)((ulonglong)local_res18[0] & 0xffffffff00000000);
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 1;
    if (!bVar2) goto LAB_14a01e11c;
  }
  lVar4 = lVar5;
LAB_14a01e11c:
  if ((pTVar1->ShadowedValue[lVar4] != false) || (PRIVATE_GIsRunningCommandlet != false)) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    if (param_2 != (FPCGStack *)0x0) {
      FPCGStack::CreateStackFramePath(param_2,&local_58,(UPCGNode *)0x0,(UPCGPin *)0x0);
    }
    if (3 < (byte)LogPCG._0_1_) {
      if (param_1 != (IPCGGraphExecutionSource *)0x0) {
        plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
        lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
        if (lVar4 != 0) {
          plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
          lVar5 = (**(code **)(*plVar3 + 0x60))(plVar3);
          local_res18[0] = *(FName *)(lVar5 + 0x18);
          ::FName::ToString(local_res18,&local_48);
          lVar5 = 1;
        }
      }
      pFVar6 = ::FString::FString(&local_28,L"MISSINGOWNER");
      PCGLog::GetExecutionSourceName(&local_38,param_1,false,pFVar6);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((lVar5 != 0) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogGraphScheduleDependencyFailed @ 14a01e290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogGraphScheduleDependencyFailed
          (IPCGGraphExecutionSource *param_1,FPCGStack *param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  FString *pFVar6;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar1 = CVarGraphExecutionLoggingEnable.Ref;
  lVar5 = 0;
  local_res18[0] = (FName)((ulonglong)local_res18[0] & 0xffffffff00000000);
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 1;
    if (!bVar2) goto LAB_14a01e2cc;
  }
  lVar4 = lVar5;
LAB_14a01e2cc:
  if ((pTVar1->ShadowedValue[lVar4] != false) || (PRIVATE_GIsRunningCommandlet != false)) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    if (param_2 != (FPCGStack *)0x0) {
      FPCGStack::CreateStackFramePath(param_2,&local_58,(UPCGNode *)0x0,(UPCGPin *)0x0);
    }
    if (2 < (byte)LogPCG._0_1_) {
      if (param_1 != (IPCGGraphExecutionSource *)0x0) {
        plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
        lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
        if (lVar4 != 0) {
          plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
          lVar5 = (**(code **)(*plVar3 + 0x60))(plVar3);
          local_res18[0] = *(FName *)(lVar5 + 0x18);
          ::FName::ToString(local_res18,&local_48);
          lVar5 = 1;
        }
      }
      pFVar6 = ::FString::FString(&local_28,L"MISSINGOWNER");
      PCGLog::GetExecutionSourceName(&local_38,param_1,false,pFVar6);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((lVar5 != 0) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogGraphTask @ 14a01e440

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
PCGGraphExecutionLogging::LogGraphTask
          (ulong64 param_1,FPCGGraphTask *param_2,
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *param_3)

{
  undefined1 *puVar1;
  UPCGNode *this;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  FText *this_00;
  longlong lVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *local_res20;
  undefined1 local_138 [8];
  FString local_130;
  FString local_120;
  FScriptContainerElement *local_110;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FText local_58;
  
  pTVar3 = CVarGraphExecutionLoggingEnable.Ref;
  uVar11 = 0;
  uVar15 = 0;
  local_res20 = (FScriptContainerElement *)((ulonglong)local_res20 & 0xffffffff00000000);
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    uVar8 = 1;
    if (!bVar5) goto LAB_14a01e48f;
  }
  uVar8 = uVar11;
LAB_14a01e48f:
  if (pTVar3->ShadowedValue[uVar8] != false) {
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
    if (param_3 !=
        (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)0x0) {
      iVar7 = *(int *)&(param_3->Elements).field_0x28;
      puVar1 = &(param_3->Elements).field_0x10;
      bVar5 = true;
      uStack_fc = 1;
      local_e8 = 0;
      iStack_ec = 0;
      if (iVar7 != 0) {
        puVar17 = *(uint **)&(param_3->Elements).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar12 = *puVar17;
        uVar8 = uVar11;
        uVar15 = 0;
        while (uVar12 == 0) {
          iVar13 = (int)uVar8;
          local_e8 = local_e8 + 0x20;
          uVar15 = iVar13 + 1;
          uVar8 = (ulonglong)uVar15;
          iStack_ec = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_14a01e54f;
          uVar12 = puVar17[(longlong)iVar13 + 1];
        }
        uStack_fc = -uVar12 & uVar12;
        uVar8 = (ulonglong)uStack_fc * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iStack_ec = local_e8 + -1 + (int)lVar9;
        local_110 = (FScriptContainerElement *)CONCAT44(local_110._4_4_,(int)lVar9);
        if (iVar7 < iStack_ec) {
          iStack_ec = iVar7;
        }
      }
LAB_14a01e54f:
      uVar12 = *(uint *)&(param_3->Elements).field_0x28;
      iStack_e0 = *(int *)&(param_3->Elements).field_0x8 - *(int *)&(param_3->Elements).field_0x34;
      uVar18 = uVar12 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uStack_fc,uVar15);
      uStack_f0 = 0xffffffff;
      TStack_90.CurrentBitIndex = iStack_ec;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar12 >> 5;
      TStack_90._28_4_ = iStack_ec;
      TStack_90.BaseBitIndex = local_e8;
      uStack_70 = CONCAT44(uStack_dc,iStack_e0);
      local_108 = param_3;
      uStack_100 = uVar15;
      local_f8 = puVar1;
      iStack_e4 = iStack_ec;
      local_98 = param_3;
      TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar15 = *(uint *)&(param_3->Elements).field_0x28;
      if (uVar12 != uVar15) {
        puVar16 = *(undefined1 **)&(param_3->Elements).field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
        while (uVar12 == 0) {
          lVar9 = (longlong)iVar13;
          uVar18 = uVar18 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14a01e660;
          uVar12 = *(uint *)(puVar16 + lVar9 * 4 + 4);
        }
        uVar8 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar12 = (int)lVar9 + -1 + uVar18;
        if ((int)uVar15 < (int)uVar12) {
          uVar12 = uVar15;
        }
      }
LAB_14a01e660:
      while( true ) {
        pTVar4 = local_98;
        if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
            (int)uStack_70) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res20);
        }
        if (((TStack_90.CurrentBitIndex == uVar12) &&
            (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar4 == param_3)) break;
        if (bVar5) {
          uVar15 = (uint)uVar11 | 1;
          ::FString::PrintfImpl(&local_c8,L"%llu");
          FVar10.Data = local_c8.Data.AllocatorInstance.Data;
          iVar7 = local_c8.Data.ArrayNum;
        }
        else {
          uVar15 = (uint)uVar11 | 2;
          ::FString::PrintfImpl(&local_d8,L",%llu");
          FVar10.Data = local_d8.Data.AllocatorInstance.Data;
          iVar7 = local_d8.Data.ArrayNum;
        }
        uVar11 = (ulonglong)uVar15;
        iVar13 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(&local_120,(wchar_t *)FVar10.Data,iVar13);
        if (((uVar15 & 2) != 0) &&
           (uVar11 = (ulonglong)(uVar15 & 0xfffffffd),
           local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (((uVar11 & 1) != 0) &&
           (uVar11 = (ulonglong)((uint)uVar11 & 0xfffffffe),
           local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        bVar5 = false;
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
    }
    bVar5 = false;
    ::FString::FString(&local_a8,L"MISSINGPINDEPS");
    if (4 < (byte)LogPCG._0_1_) {
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res20 = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        local_res20 = local_120.Data.AllocatorInstance.Data;
      }
      bVar6 = true;
      local_110 = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        local_110 = local_a8.Data.AllocatorInstance.Data;
      }
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      iVar7 = (param_2->Inputs).ArrayNum;
      pFVar14 = (param_2->Inputs).AllocatorInstance.Data;
      pFVar19 = pFVar14 + (longlong)iVar7 * 0x80;
      while( true ) {
        if ((param_2->Inputs).ArrayNum != iVar7) {
          `TCheckedPointerIterator<FPCGGraphTaskInput_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_138);
        }
        if (pFVar14 == pFVar19) break;
        if (!bVar6) {
          ::FString::AppendChars(&local_130,L",",1);
        }
        bVar6 = false;
        if (pFVar14[0x70] != (FScriptContainerElement)0x0) {
          bVar5 = true;
          ::FName::ToString((FName *)(pFVar14 + 0x40),&local_68);
        }
        ::FString::PrintfImpl(&local_b8,L"%llu->\'%s\'");
        iVar13 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(&local_130,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar13);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((bVar5) &&
           (bVar5 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        pFVar14 = pFVar14 + 0x80;
      }
      this = param_2->Node;
      if (this != (UPCGNode *)0x0) {
        this_00 = UPCGNode::GetNodeTitle(this,&local_58,ListView);
        FText::ToString(this_00);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((this != (UPCGNode *)0x0) && (local_58.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogGraphTasks @ 14a01e970

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
PCGGraphExecutionLogging::LogGraphTasks(TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  FPCGGraphTask *pFVar5;
  FPCGGraphTask *pFVar6;
  undefined1 local_res10 [8];
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 1;
  }
  if (pTVar2->ShadowedValue[lVar4] != false) {
    pFVar5 = (FPCGGraphTask *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar6 = pFVar5 + iVar1;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPCGGraphTask_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar6) break;
      LogGraphTask(pFVar5->NodeId,pFVar5,
                   (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)0x0);
      pFVar5 = pFVar5 + 1;
    }
  }
  return;
}

// LogGraphTasks @ 14a01ea10

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
PCGGraphExecutionLogging::LogGraphTasks
          (TMap<unsigned___int64,FPCGGraphTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>_>
           *param_1,
          TMap<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar9;
  longlong lVar10;
  ulong64 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar5 = CVarGraphExecutionLoggingEnable.Ref;
  bVar6 = IsInParallelGameThread();
  uVar7 = 1;
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar10 = 0;
  }
  else {
    lVar10 = 1;
  }
  if (pTVar5->ShadowedValue[lVar10] != false) {
    iVar3 = *(int *)&param_1->field_0x28;
    iVar14 = 0;
    iVar16 = 0;
    puVar1 = &param_1->field_0x10;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a01eaed;
        uVar13 = puVar17[lVar10 + 1];
      }
      uVar7 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iVar8 = iVar16 + -1 + local_res20;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14a01eaed:
    uVar13 = *(uint *)&param_1->field_0x28;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar14);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar16;
    uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = *(uint *)&param_1->field_0x28;
    if (uVar13 != uVar7) {
      puVar15 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14a01ebf1;
        uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar12;
      if ((int)uVar7 < (int)uVar13) {
        uVar13 = uVar7;
      }
    }
LAB_14a01ebf1:
    while( true ) {
      if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_60.CurrentBitIndex == uVar13) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      puVar11 = (ulong64 *)(*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x158);
      if (param_2 ==
          (TMap<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
           *)0x0) {
        pTVar9 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 0x0;
      }
      else {
        pTVar9 = TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
                 ::Find((TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
                         *)param_2,puVar11[10]);
      }
      LogGraphTask(*puVar11,(FPCGGraphTask *)(puVar11 + 1),pTVar9);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// LogGridLinkageTaskExecuteRetrieve @ 14a01ec90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieve
          (FPCGContext *param_1,EPCGHiGenGrid param_2,int param_3,int param_4,FString *param_5)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  FString *pFVar5;
  IPCGGraphExecutionSource *pIVar6;
  FString local_48;
  FString local_38;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  pIVar6 = (IPCGGraphExecutionSource *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pIVar4 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (!bVar3) goto LAB_14a01eccd;
  }
  pIVar4 = pIVar6;
LAB_14a01eccd:
  if ((&pIVar4->field_0x0)[(longlong)pTVar2->ShadowedValue] != '\0') {
    if ((param_1 == (FPCGContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Utils\\PCGGraphExecutionLogging.cpp"
                           ,400,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogPCG._0_1_) {
      bVar3 = PCGHiGenGrid::IsValidGrid(param_2);
      if (bVar3) {
        PCGHiGenGrid::GridToGridSize(param_2);
      }
      else {
        PCGHiGenGrid::UnboundedGridSize();
      }
      pFVar5 = ::FString::FString(&local_38,L"MISSINGOWNER");
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
        pIVar6 = (param_1->ExecutionSource).InterfaceInstance;
      }
      PCGLog::GetExecutionSourceName(&local_48,pIVar6,true,pFVar5);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogGridLinkageTaskExecuteRetrieveNoData @ 14a01ee10

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
PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveNoData
          (FPCGContext *param_1,IPCGGraphExecutionSource *param_2,FString *param_3)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  FString *pFVar5;
  IPCGGraphExecutionSource *pIVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  pIVar6 = (IPCGGraphExecutionSource *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pIVar4 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (!bVar3) goto LAB_14a01ee4e;
  }
  pIVar4 = pIVar6;
LAB_14a01ee4e:
  if ((&pIVar4->field_0x0)[(longlong)pTVar2->ShadowedValue] != '\0') {
    if ((param_1 == (FPCGContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Utils\\PCGGraphExecutionLogging.cpp"
                           ,0x1f0,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogPCG._0_1_) {
      pFVar5 = ::FString::FString(&local_38,L"MISSINGOWNER");
      PCGLog::GetExecutionSourceName(&local_48,param_2,true,pFVar5);
      pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
        pIVar6 = (param_1->ExecutionSource).InterfaceInstance;
      }
      PCGLog::GetExecutionSourceName(&local_58,pIVar6,true,pFVar5);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogGridLinkageTaskExecuteRetrieveNoLocalSource @ 14a01ef90

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
PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveNoLocalSource
          (FPCGContext *param_1,FString *param_2)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  FString *pFVar5;
  IPCGGraphExecutionSource *pIVar6;
  FString local_28;
  FString local_18;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  pIVar6 = (IPCGGraphExecutionSource *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pIVar4 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (!bVar3) goto LAB_14a01efcd;
  }
  pIVar4 = pIVar6;
LAB_14a01efcd:
  if ((&pIVar4->field_0x0)[(longlong)pTVar2->ShadowedValue] != '\0') {
    if ((param_1 == (FPCGContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Utils\\PCGGraphExecutionLogging.cpp"
                           ,0x1e1,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogPCG._0_1_) {
      pFVar5 = ::FString::FString(&local_18,L"MISSINGOWNER");
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
        pIVar6 = (param_1->ExecutionSource).InterfaceInstance;
      }
      PCGLog::GetExecutionSourceName(&local_28,pIVar6,true,pFVar5);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogGridLinkageTaskExecuteRetrieveScheduleGraph @ 14a01f0c0

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
PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveScheduleGraph
          (FPCGContext *param_1,IPCGGraphExecutionSource *param_2,FString *param_3)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  FString *pFVar5;
  IPCGGraphExecutionSource *pIVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  pIVar6 = (IPCGGraphExecutionSource *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pIVar4 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (!bVar3) goto LAB_14a01f0fe;
  }
  pIVar4 = pIVar6;
LAB_14a01f0fe:
  if ((&pIVar4->field_0x0)[(longlong)pTVar2->ShadowedValue] != '\0') {
    if ((param_1 == (FPCGContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Utils\\PCGGraphExecutionLogging.cpp"
                           ,0x1b2,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogPCG._0_1_) {
      pFVar5 = ::FString::FString(&local_38,L"MISSINGOWNER");
      PCGLog::GetExecutionSourceName(&local_48,param_2,true,pFVar5);
      pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
        pIVar6 = (param_1->ExecutionSource).InterfaceInstance;
      }
      PCGLog::GetExecutionSourceName(&local_58,pIVar6,true,pFVar5);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogGridLinkageTaskExecuteRetrieveSuccess @ 14a01f240

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
PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveSuccess
          (FPCGContext *param_1,IPCGGraphExecutionSource *param_2,FString *param_3,int param_4)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  FString *pFVar5;
  IPCGGraphExecutionSource *pIVar6;
  FString local_38;
  FString local_28;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  pIVar6 = (IPCGGraphExecutionSource *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pIVar4 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (!bVar3) goto LAB_14a01f27e;
  }
  pIVar4 = pIVar6;
LAB_14a01f27e:
  if ((&pIVar4->field_0x0)[(longlong)pTVar2->ShadowedValue] != '\0') {
    if ((param_1 == (FPCGContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Utils\\PCGGraphExecutionLogging.cpp"
                           ,0x1a2,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogPCG._0_1_) {
      pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
        pIVar6 = (param_1->ExecutionSource).InterfaceInstance;
      }
      PCGLog::GetExecutionSourceName(&local_38,pIVar6,true,pFVar5);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogGridLinkageTaskExecuteRetrieveWaitOnScheduledGraph @ 14a01f370

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
PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveWaitOnScheduledGraph
          (FPCGContext *param_1,IPCGGraphExecutionSource *param_2,FString *param_3)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  FString *pFVar5;
  IPCGGraphExecutionSource *pIVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  pIVar6 = (IPCGGraphExecutionSource *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pIVar4 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (!bVar3) goto LAB_14a01f3ae;
  }
  pIVar4 = pIVar6;
LAB_14a01f3ae:
  if ((&pIVar4->field_0x0)[(longlong)pTVar2->ShadowedValue] != '\0') {
    if ((param_1 == (FPCGContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Utils\\PCGGraphExecutionLogging.cpp"
                           ,0x1c2,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogPCG._0_1_) {
      pFVar5 = ::FString::FString(&local_38,L"MISSINGOWNER");
      PCGLog::GetExecutionSourceName(&local_48,param_2,true,pFVar5);
      pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
        pIVar6 = (param_1->ExecutionSource).InterfaceInstance;
      }
      PCGLog::GetExecutionSourceName(&local_58,pIVar6,true,pFVar5);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogGridLinkageTaskExecuteRetrieveWakeUp @ 14a01f4f0

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
PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveWakeUp
          (FPCGContext *param_1,IPCGGraphExecutionSource *param_2)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  FString *pFVar5;
  IPCGGraphExecutionSource *pIVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  pIVar6 = (IPCGGraphExecutionSource *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pIVar4 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (!bVar3) goto LAB_14a01f52d;
  }
  pIVar4 = pIVar6;
LAB_14a01f52d:
  if ((&pIVar4->field_0x0)[(longlong)pTVar2->ShadowedValue] != '\0') {
    if ((param_1 == (FPCGContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Utils\\PCGGraphExecutionLogging.cpp"
                           ,0x1d2,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogPCG._0_1_) {
      pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
      PCGLog::GetExecutionSourceName(&local_38,param_2,true,pFVar5);
      pFVar5 = ::FString::FString(&local_18,L"MISSINGOWNER");
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
        pIVar6 = (param_1->ExecutionSource).InterfaceInstance;
      }
      PCGLog::GetExecutionSourceName(&local_48,pIVar6,true,pFVar5);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogGridLinkageTaskExecuteStore @ 14a01f650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogGridLinkageTaskExecuteStore
          (FPCGContext *param_1,EPCGHiGenGrid param_2,int param_3,int param_4,FString *param_5,
          int param_6)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  FString *pFVar5;
  IPCGGraphExecutionSource *pIVar6;
  FString local_48;
  FString local_38;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  pIVar6 = (IPCGGraphExecutionSource *)0x0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pIVar4 = (IPCGGraphExecutionSource *)&DAT_00000001;
    if (!bVar3) goto LAB_14a01f68d;
  }
  pIVar4 = pIVar6;
LAB_14a01f68d:
  if ((&pIVar4->field_0x0)[(longlong)pTVar2->ShadowedValue] != '\0') {
    if ((param_1 == (FPCGContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Utils\\PCGGraphExecutionLogging.cpp"
                           ,0x17d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogPCG._0_1_) {
      bVar3 = PCGHiGenGrid::IsValidGrid(param_2);
      if (bVar3) {
        PCGHiGenGrid::GridToGridSize(param_2);
      }
      else {
        PCGHiGenGrid::UnboundedGridSize();
      }
      pFVar5 = ::FString::FString(&local_38,L"MISSINGOWNER");
      if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
        pIVar6 = (param_1->ExecutionSource).InterfaceInstance;
      }
      PCGLog::GetExecutionSourceName(&local_48,pIVar6,true,pFVar5);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogIncomparableAttributesError @ 14a01f7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::LogIncomparableAttributesError
          (FPCGAttributePropertySelector *param_1,FPCGAttributePropertySelector *param_2,
          FPCGContext *param_3)

{
  atomic<int> *paVar1;
  FString *pFVar2;
  FText *pFVar3;
  TSharedRef<FTextFormatData,1> local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  pFVar2 = FPCGAttributePropertySelector::ToString(param_2,(FString *)&local_48,false);
  FText::FromString(&local_38,pFVar2);
  if (local_48.Object != (FTextFormatData *)0x0) {
    FMemory::Free(local_48.Object);
  }
  pFVar2 = FPCGAttributePropertySelector::ToString(param_1,(FString *)&local_48,false);
  FText::FromString(&local_28,pFVar2);
  if (local_48.Object != (FTextFormatData *)0x0) {
    FMemory::Free(local_48.Object);
  }
  local_48 = Format::IncomparableTypesFailure.TextFormatData;
  if (Format::IncomparableTypesFailure.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::IncomparableTypesFailure.TextFormatData.SharedReferenceCount.
               ReferenceController.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar3 = FText::Format<FText,FText>(&local_18,(FTextFormat *)&local_48,&local_28,&local_38);
  LogErrorOnGraph(pFVar3,param_3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// LogInvalidCardinalityError @ 14a01f8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::InputOutput::LogInvalidCardinalityError(FName param_1,FName param_2,FPCGContext *param_3)

{
  atomic<int> *paVar1;
  FText *pFVar2;
  FText *pFVar3;
  FName local_res8;
  FName local_res10;
  TSharedRef<FTextFormatData,1> local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  pFVar2 = FText::FromName(&local_28,&local_res10);
  pFVar3 = FText::FromName(&local_18,&local_res8);
  local_48 = Format::InvalidCardinality.TextFormatData;
  if (Format::InvalidCardinality.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::InvalidCardinality.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar2 = FText::Format<FText,FText>(&local_38,(FTextFormat *)&local_48,pFVar3,pFVar2);
  LogErrorOnGraph(pFVar2,param_3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// LogInvalidCharacterInParsedStringError @ 14a01f950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Parsing::LogInvalidCharacterInParsedStringError
          (TStringView<wchar_t> *param_1,FPCGContext *param_2)

{
  atomic<int> *paVar1;
  FText *pFVar2;
  TStringView<wchar_t> local_38;
  FText local_28;
  FText local_18;
  
  local_38 = *param_1;
  pFVar2 = FText::FromStringView(&local_18,&local_38);
  local_38 = (TStringView<wchar_t>)Format::InvalidCharacter.TextFormatData;
  if (Format::InvalidCharacter.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::InvalidCharacter.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar2 = FText::Format<FText>(&local_28,(FTextFormat *)&local_38,pFVar2);
  LogErrorOnGraph(pFVar2,param_2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// LogInvalidConversionError @ 14a01f9d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::Settings::LogInvalidConversionError(int param_1,FText *param_2,FText *param_3)

{
  atomic<int> *paVar1;
  FText *pFVar2;
  undefined1 local_res10 [8];
  FText local_68;
  FText local_58;
  TSharedPtr<FCulture,1> local_48;
  TSharedRef<FTextFormatData,1> local_38;
  FText local_28;
  FText local_18;
  
  local_68.TextData.Reference = (param_3->TextData).Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,local_res10);
  }
  local_58.TextData.Reference = (param_2->TextData).Reference;
  local_68.Flags = param_3->Flags;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res10);
  }
  local_58.Flags = param_2->Flags;
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = FText::AsNumber(&local_18,param_1,(FNumberFormattingOptions *)0x0,&local_48);
  local_38 = Format::InvalidConversion.TextFormatData;
  if (Format::InvalidConversion.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::InvalidConversion.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar2 = FText::Format<FText,FText,FText>
                     (&local_28,(FTextFormat *)&local_38,pFVar2,&local_58,&local_68);
  LogErrorOnGraph(pFVar2,(FPCGContext *)0x0);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// LogInvalidExpressionInParsedStringError @ 14a01fad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Parsing::LogInvalidExpressionInParsedStringError
          (TStringView<wchar_t> *param_1,FPCGContext *param_2)

{
  atomic<int> *paVar1;
  FText *pFVar2;
  TStringView<wchar_t> local_38;
  FText local_28;
  FText local_18;
  
  local_38 = *param_1;
  pFVar2 = FText::FromStringView(&local_18,&local_38);
  local_38 = (TStringView<wchar_t>)Format::InvalidExpression.TextFormatData;
  if (Format::InvalidExpression.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::InvalidExpression.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar2 = FText::Format<FText>(&local_28,(FTextFormat *)&local_38,pFVar2);
  LogErrorOnGraph(pFVar2,param_2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// LogInvalidFileType @ 14a01fb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::InputOutput::LogInvalidFileType(FString *param_1,FString *param_2,FPCGContext *param_3)

{
  atomic<int> *paVar1;
  FText *pFVar2;
  FText *pFVar3;
  TSharedRef<FTextFormatData,1> local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  pFVar2 = FText::FromString(&local_28,param_2);
  pFVar3 = FText::FromString(&local_18,param_1);
  local_48 = Format::InvalidFileType.TextFormatData;
  if (Format::InvalidFileType.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::InvalidFileType.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar2 = FText::Format<FText,FText>(&local_38,(FTextFormat *)&local_48,pFVar3,pFVar2);
  LogErrorOnGraph(pFVar2,param_3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// LogInvalidInputDataError @ 14a01fbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::LogInvalidInputDataError(FPCGContext *param_1)

{
  LogErrorOnGraph(&Format::InvalidInputData,param_1);
  return;
}

// LogInvalidMetadata @ 14a01fc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::Metadata::LogInvalidMetadata(FPCGContext *param_1)

{
  LogErrorOnGraph(&Format::InvalidMetadata,param_1);
  return;
}

// LogInvalidMetadataDomain @ 14a01fc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::LogInvalidMetadataDomain
          (FPCGAttributePropertySelector *param_1,FPCGContext *param_2)

{
  FText *pFVar1;
  FName local_res8 [4];
  FTextFormat local_38;
  FText local_28;
  FText local_18;
  
  local_res8[0] = param_1->DomainName;
  pFVar1 = FText::FromName(&local_18,local_res8);
  local_38.TextFormatData.Object = Format::InvalidMetadataDomain.TextFormatData.Object;
  local_38.TextFormatData.SharedReferenceCount.ReferenceController =
       Format::InvalidMetadataDomain.TextFormatData.SharedReferenceCount.ReferenceController;
  if (Format::InvalidMetadataDomain.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Format::InvalidMetadataDomain.TextFormatData.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(Format::InvalidMetadataDomain.TextFormatData.SharedReferenceCount.
               ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = FText::Format<FText>(&local_28,&local_38,pFVar1);
  LogErrorOnGraph(pFVar1,param_2);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// LogInvalidPreconfigurationWarning @ 14a01fcb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::Settings::LogInvalidPreconfigurationWarning(int param_1,FText *param_2)

{
  atomic<int> *paVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  FText local_58;
  TSharedPtr<FCulture,1> local_48;
  TSharedRef<FTextFormatData,1> local_38;
  FText local_28;
  FText local_18;
  
  local_58.TextData.Reference = (param_2->TextData).Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res10);
  }
  local_58.Flags = param_2->Flags;
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = FText::AsNumber(&local_18,param_1,(FNumberFormattingOptions *)0x0,&local_48);
  local_38 = Format::InvalidPreconfiguration.TextFormatData;
  if (Format::InvalidPreconfiguration.TextFormatData.SharedReferenceCount.ReferenceController.
      ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(Format::InvalidPreconfiguration.TextFormatData.SharedReferenceCount.
               ReferenceController.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar2 = FText::Format<FText,FText>(&local_28,(FTextFormat *)&local_38,pFVar2,&local_58);
  LogWarningOnGraph(pFVar2,(FPCGContext *)0x0);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// LogLandscapeCacheNotAvailableError @ 14a01fd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::Landscape::LogLandscapeCacheNotAvailableError(FPCGContext *param_1)

{
  LogErrorOnGraph(&Format::LandscapeCacheNotAvailable,param_1);
  return;
}

// LogManagedActorsRelease @ 14a01fd90

void __cdecl
PCGGeneratedResourcesLogging::LogManagedActorsRelease
          (UPCGManagedResource *param_1,
          TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4)

{
  return;
}

// LogManagedComponentDeleteNull @ 14a01fda0

void __cdecl
PCGGeneratedResourcesLogging::LogManagedComponentDeleteNull(UPCGManagedResource *param_1)

{
  return;
}

// LogManagedComponentHidden @ 14a01fdb0

void __cdecl PCGGeneratedResourcesLogging::LogManagedComponentHidden(UPCGManagedResource *param_1)

{
  return;
}

// LogManagedResourceHardRelease @ 14a01fdc0

void __cdecl
PCGGeneratedResourcesLogging::LogManagedResourceHardRelease(UPCGManagedResource *param_1)

{
  return;
}

// LogManagedResourceSoftRelease @ 14a01fdd0

void __cdecl
PCGGeneratedResourcesLogging::LogManagedResourceSoftRelease(UPCGManagedResource *param_1)

{
  return;
}

// LogPostProcessGraph @ 14a01fde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PCGGraphExecutionLogging::LogPostProcessGraph(IPCGGraphExecutionSource *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  FString *pFVar6;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pTVar1 = CVarGraphExecutionLoggingEnable.Ref;
  lVar5 = 0;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 1;
    if (!bVar2) goto LAB_14a01fe19;
  }
  lVar4 = lVar5;
LAB_14a01fe19:
  if (((pTVar1->ShadowedValue[lVar4] != false) || (PRIVATE_GIsRunningCommandlet != false)) &&
     (3 < (byte)LogPCG._0_1_)) {
    if (param_1 != (IPCGGraphExecutionSource *)0x0) {
      plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
      lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
      if (lVar4 != 0) {
        plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
        lVar5 = (**(code **)(*plVar3 + 0x60))(plVar3);
        local_res10 = *(FName *)(lVar5 + 0x18);
        ::FName::ToString(&local_res10,&local_38);
        lVar5 = 1;
      }
    }
    pFVar6 = ::FString::FString(&local_18,L"MISSINGOWNER");
    PCGLog::GetExecutionSourceName(&local_28,param_1,false,pFVar6);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((lVar5 != 0) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogTaskCullingBegin @ 14a01ff40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogTaskCullingBegin
          (ulong64 param_1,ulong64 param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  FString local_18;
  
  pTVar1 = CVarGraphExecutionCullingLoggingEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if ((pTVar1->ShadowedValue[lVar3] != false) && (4 < (byte)LogPCG._0_1_)) {
    GetPinsToDeactivateString(&local_18,param_3);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogTaskCullingBeginLoop @ 14a020000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogTaskCullingBeginLoop
          (ulong64 param_1,ulong64 param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  FString local_18;
  
  pTVar1 = CVarGraphExecutionCullingLoggingEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if ((pTVar1->ShadowedValue[lVar3] != false) && (4 < (byte)LogPCG._0_1_)) {
    GetPinsToDeactivateString(&local_18,param_3);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogTaskCullingUpdatedPinDeps @ 14a0200c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PCGGraphExecutionLogging::LogTaskCullingUpdatedPinDeps
          (ulong64 param_1,FPCGPinDependencyExpression *param_2,bool param_3)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  FString local_18;
  
  pTVar1 = CVarGraphExecutionCullingLoggingEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if (pTVar1->ShadowedValue[lVar3] != false) {
    ::FString::FString(&local_18,L"MISSINGPINDEPS");
    if (4 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    if ((param_3) && (4 < (byte)LogPCG._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogTaskExecute @ 14a020190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGGraphExecutionLogging::LogTaskExecute(FPCGGraphTask *param_1)

{
  IPCGGraphExecutionSource *pIVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  ulonglong uVar4;
  FText *this;
  FString *pFVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  FString local_28;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  uVar8 = 0;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    uVar4 = 1;
    if (!bVar3) goto LAB_14a0201c8;
  }
  uVar4 = uVar8;
LAB_14a0201c8:
  if ((((pTVar2->ShadowedValue[uVar4] != false) &&
       ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) &&
      (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) &&
     ((pIVar1 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar1 != (IPCGGraphExecutionSource *)0x0 && (4 < (byte)LogPCG._0_1_)))) {
    if (param_1->Node != (UPCGNode *)0x0) {
      this = UPCGNode::GetNodeTitle(param_1->Node,&local_38,ListView);
      pFVar5 = FText::ToString(this);
      if ((pFVar5->Data).ArrayNum == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = 1;
      }
    }
    ::FString::PrintfImpl(&local_58,L"%llu\'%s\'");
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    lVar7 = (**(code **)(*plVar6 + 0x60))(plVar6);
    if (lVar7 != 0) {
      plVar6 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
      lVar7 = (**(code **)(*plVar6 + 0x60))(plVar6);
      uVar8 = (ulonglong)((uint)uVar8 | 2);
      local_res10 = *(FName *)(lVar7 + 0x18);
      ::FName::ToString(&local_res10,&local_68);
    }
    pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
    PCGLog::GetExecutionSourceName(&local_48,pIVar1,false,pFVar5);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (((uVar8 & 2) != 0) &&
       (uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd),
       local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (((uVar8 & 1) != 0) && (local_38.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  return;
}

// LogTaskExecuteCachingDisabled @ 14a0203b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGGraphExecutionLogging::LogTaskExecuteCachingDisabled(FPCGGraphTask *param_1)

{
  IPCGGraphExecutionSource *pIVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  ulonglong uVar4;
  FText *this;
  FString *pFVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  FString local_28;
  
  pTVar2 = CVarGraphExecutionLoggingEnable.Ref;
  uVar8 = 0;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    uVar4 = 1;
    if (!bVar3) goto LAB_14a0203e8;
  }
  uVar4 = uVar8;
LAB_14a0203e8:
  if ((((pTVar2->ShadowedValue[uVar4] != false) &&
       ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) &&
      (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) &&
     ((pIVar1 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar1 != (IPCGGraphExecutionSource *)0x0 && (2 < (byte)LogPCG._0_1_)))) {
    if (param_1->Node != (UPCGNode *)0x0) {
      this = UPCGNode::GetNodeTitle(param_1->Node,&local_38,ListView);
      pFVar5 = FText::ToString(this);
      if ((pFVar5->Data).ArrayNum == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = 1;
      }
    }
    ::FString::PrintfImpl(&local_58,L"%llu\'%s\'");
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    lVar7 = (**(code **)(*plVar6 + 0x60))(plVar6);
    if (lVar7 != 0) {
      plVar6 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
      lVar7 = (**(code **)(*plVar6 + 0x60))(plVar6);
      uVar8 = (ulonglong)((uint)uVar8 | 2);
      local_res10 = *(FName *)(lVar7 + 0x18);
      ::FName::ToString(&local_res10,&local_68);
    }
    pFVar5 = ::FString::FString(&local_28,L"MISSINGOWNER");
    PCGLog::GetExecutionSourceName(&local_48,pIVar1,false,pFVar5);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (((uVar8 & 2) != 0) &&
       (uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd),
       local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (((uVar8 & 1) != 0) && (local_38.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  return;
}

// LogTypedDataNotFoundWarning @ 14a0205d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::InputOutput::LogTypedDataNotFoundWarning
          (EPCGDataType param_1,FName param_2,FPCGContext *param_3)

{
  UEnum *this;
  FText *pFVar1;
  FName local_res10 [2];
  undefined1 local_res20 [8];
  FText local_58;
  FText local_48;
  undefined1 local_38 [16];
  FText local_28;
  FText local_18;
  
  local_res10[0] = param_2;
  this = StaticEnum<enum_EPCGDataType>();
  if (this == (UEnum *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"PCGLog",L"UnknownDataType",L"Unknown");
    FText::FText(&local_58,pFVar1);
    local_38._0_8_ = local_48.TextData.Reference;
  }
  else {
    pFVar1 = UEnum::GetDisplayNameTextByValue(this,(FText *)local_38,(ulonglong)param_1);
    FText::FText(&local_58,pFVar1);
  }
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
  pFVar1 = FText::FromName(&local_18,local_res10);
  local_48.TextData.Reference = local_58.TextData.Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res20);
  }
  local_38._0_8_ = Format::TypedInputNotFound.TextFormatData.Object;
  local_48.Flags = local_58.Flags;
  local_38._8_8_ =
       Format::TypedInputNotFound.TextFormatData.SharedReferenceCount.ReferenceController;
  if (Format::TypedInputNotFound.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Format::TypedInputNotFound.TextFormatData.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(Format::TypedInputNotFound.TextFormatData.SharedReferenceCount.ReferenceController)
               ->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = FText::Format<FText,FText>(&local_28,(FTextFormat *)local_38,&local_48,pFVar1);
  LogWarningOnGraph(pFVar1,param_3);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// ParseAndRetrieveIndices @ 14a0207b0

FPCGIndexCollection * __cdecl
PCGParsingTestPrivate::ParseAndRetrieveIndices
          (FPCGIndexCollection *__return_storage_ptr__,FString *param_1,int param_2)

{
  int iVar1;
  TStringView<wchar_t> local_18;
  
  iVar1 = -1;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  (__return_storage_ptr__->IndexRanges).AllocatorInstance.SecondaryData =
       (ForElementType<PCGIndexing::FPCGIndexRange>)0x0;
  __return_storage_ptr__->ArraySize = iVar1;
  (__return_storage_ptr__->IndexRanges).ArrayNum = 0;
  (__return_storage_ptr__->IndexRanges).ArrayMax = 0x40;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  PCGParser::ParseIndexRanges(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// PointsAreIdentical @ 14a020820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl PCGTestsCommon::PointsAreIdentical(FPCGPoint *param_1,FPCGPoint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  if (((((param_2->Density != param_1->Density) || (param_2->Steepness != param_1->Steepness)) ||
       ((param_2->BoundsMin).field0_0x0._s_0.X != (param_1->BoundsMin).field0_0x0._s_0.X)) ||
      (((((param_2->BoundsMin).field0_0x0._s_0.Y != (param_1->BoundsMin).field0_0x0._s_0.Y ||
         ((param_2->BoundsMin).field0_0x0._s_0.Z != (param_1->BoundsMin).field0_0x0._s_0.Z)) ||
        (((param_2->BoundsMax).field0_0x0._s_0.X != (param_1->BoundsMax).field0_0x0._s_0.X ||
         (((param_2->BoundsMax).field0_0x0._s_0.Y != (param_1->BoundsMax).field0_0x0._s_0.Y ||
          ((param_2->BoundsMax).field0_0x0._s_0.Z != (param_1->BoundsMax).field0_0x0._s_0.Z)))))) ||
       ((param_2->Color).field0_0x0._s_0.X != (param_1->Color).field0_0x0._s_0.X)))) ||
     ((((param_2->Color).field0_0x0._s_0.Y != (param_1->Color).field0_0x0._s_0.Y ||
       ((param_2->Color).field0_0x0._s_0.Z != (param_1->Color).field0_0x0._s_0.Z)) ||
      ((param_2->Color).field0_0x0._s_0.W != (param_1->Color).field0_0x0._s_0.W)))) {
    return false;
  }
  dVar14 = (param_1->Transform).Translation.ZW.m128d_f64[0] -
           (param_2->Transform).Translation.ZW.m128d_f64[0];
  dVar16 = (param_1->Transform).Translation.ZW.m128d_f64[1] -
           (param_2->Transform).Translation.ZW.m128d_f64[1];
  dVar18 = (param_1->Transform).Translation.XY.m128d_f64[0] -
           (param_2->Transform).Translation.XY.m128d_f64[0];
  dVar20 = (param_1->Transform).Translation.XY.m128d_f64[1] -
           (param_2->Transform).Translation.XY.m128d_f64[1];
  lVar13 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar10 = movmskpd((int)param_1,auVar1);
  lVar13 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar20,0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar13;
  auVar6._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar6);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar18 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
    dVar20 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
    dVar14 = (param_1->Transform).Rotation.XY.m128d_f64[0];
    dVar16 = (param_1->Transform).Rotation.XY.m128d_f64[1];
    dVar15 = dVar18 - (param_2->Transform).Rotation.ZW.m128d_f64[0];
    dVar17 = dVar20 - (param_2->Transform).Rotation.ZW.m128d_f64[1];
    dVar18 = dVar18 + (param_2->Transform).Rotation.ZW.m128d_f64[0];
    dVar20 = dVar20 + (param_2->Transform).Rotation.ZW.m128d_f64[1];
    dVar19 = dVar14 - (param_2->Transform).Rotation.XY.m128d_f64[0];
    dVar21 = dVar16 - (param_2->Transform).Rotation.XY.m128d_f64[1];
    dVar14 = dVar14 + (param_2->Transform).Rotation.XY.m128d_f64[0];
    dVar16 = dVar16 + (param_2->Transform).Rotation.XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd(0,auVar2);
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar10 = movmskpd(iVar9,auVar3);
    uVar12 = iVar11 << 2 | uVar10;
    if (uVar12 != 0) {
      lVar13 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar20,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar13;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar18,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      lVar13 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar16,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar13;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar14,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar7);
      if ((uVar12 & 0x3fffffff) != 0 || uVar10 != 0) {
        return false;
      }
    }
    dVar14 = (param_1->Transform).Scale3D.ZW.m128d_f64[0] -
             (param_2->Transform).Scale3D.ZW.m128d_f64[0];
    dVar16 = (param_1->Transform).Scale3D.ZW.m128d_f64[1] -
             (param_2->Transform).Scale3D.ZW.m128d_f64[1];
    dVar18 = (param_1->Transform).Scale3D.XY.m128d_f64[0] -
             (param_2->Transform).Scale3D.XY.m128d_f64[0];
    dVar20 = (param_1->Transform).Scale3D.XY.m128d_f64[1] -
             (param_2->Transform).Scale3D.XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar16,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar13;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar12 = movmskpd(0,auVar5);
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar13;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar9 = movmskpd(uVar10,auVar8);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      return true;
    }
  }
  return false;
}

// RunSortElementOnData @ 14a021110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> __cdecl
SortCommonTestData::RunSortElementOnData
          (EPCGSortMethod param_1,UPCGData *param_2,FPCGAttributePropertyInputSelector *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FString *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UPCGSortAttributesSettings *pUVar8;
  TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> TVar9;
  undefined7 in_register_00000009;
  FPCGContext *pFVar10;
  FPCGDataPtrWrapper *this;
  longlong in_R9;
  FTestData local_f8;
  TSharedPtr<IPCGElement,1> local_68;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_58;
  
  pFVar10 = (FPCGContext *)CONCAT71(in_register_00000009,param_1);
  pUVar7 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_f8.Seed = 0x2a;
  local_f8.InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InputData.TaggedData.ArrayNum = 0;
  local_f8.InputData.TaggedData.ArrayMax = 0;
  local_f8.InputData.bCancelExecutionOnEmpty = false;
  local_f8.InputData.bCancelExecution = false;
  local_f8.InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InputData.DataCrcs.ArrayNum = 0;
  local_f8.InputData.DataCrcs.ArrayMax = 0;
  local_f8.InputData.InactiveOutputPinBitmask = 0;
  local_f8.OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.OutputData.TaggedData.ArrayNum = 0;
  local_f8.OutputData.TaggedData.ArrayMax = 0;
  local_f8.OutputData.bCancelExecutionOnEmpty = false;
  local_f8.OutputData.bCancelExecution = false;
  local_f8.OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.OutputData.DataCrcs.ArrayNum = 0;
  local_f8.OutputData.DataCrcs.ArrayMax = 0;
  local_f8.OutputData.InactiveOutputPinBitmask = 0;
  local_f8.TestActor = (AActor *)0x0;
  local_f8.TestPCGComponent = (UPCGComponent *)0x0;
  local_f8.Settings = (UPCGSettings *)0x0;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  local_f8.RandomStream.InitialSeed = 0x2a;
  local_f8.RandomStream.Seed = 0x2a;
  pUVar8 = PCGTestsCommon::GenerateSettings<UPCGSortAttributesSettings>(&local_f8,&local_58);
  if ((pUVar8 == (UPCGSortAttributesSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                         ,0x25,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar9.Ptr = (FPCGContext *)(*pcVar4)();
    return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)TVar9.Ptr;
  }
  *(undefined4 *)&(pUVar8->InputSource).field_0x8 = *(undefined4 *)(in_R9 + 8);
  puVar2 = &(pUVar8->InputSource).field_0x28;
  *(undefined8 *)&(pUVar8->InputSource).field_0xc = *(undefined8 *)(in_R9 + 0xc);
  *(undefined8 *)&(pUVar8->InputSource).field_0x14 = *(undefined8 *)(in_R9 + 0x14);
  *(undefined8 *)&(pUVar8->InputSource).field_0x1c = *(undefined8 *)(in_R9 + 0x1c);
  if ((undefined8 *)puVar2 != (undefined8 *)(in_R9 + 0x28)) {
    DestructItems<FString,int>(*(FString **)puVar2,*(int *)&(pUVar8->InputSource).field_0x30);
    iVar6 = *(int *)(in_R9 + 0x30);
    puVar1 = &(pUVar8->InputSource).field_0x34;
    pFVar3 = *(FString **)(in_R9 + 0x28);
    *(int *)&(pUVar8->InputSource).field_0x30 = iVar6;
    if ((iVar6 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,*(int *)puVar1,(ForAnyElementType *)puVar2,iVar6,(int *)puVar1);
      ConstructItems<FString,FString,int>(*(void **)puVar2,pFVar3,iVar6);
    }
  }
  (pUVar8->InputSource).field_0x38 = *(undefined1 *)(in_R9 + 0x38);
  pUVar8->SortMethod = (EPCGSortMethod)param_2;
  UPCGSettings::GetElement(local_f8.Settings,&local_68);
  iVar6 = local_f8.InputData.TaggedData.ArrayNum;
  if (local_f8.InputData.TaggedData.ArrayNum == local_f8.InputData.TaggedData.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&local_f8.InputData,
                       &local_f8.InputData.TaggedData.ArrayMax);
  }
  local_f8.InputData.TaggedData.ArrayNum = iVar6 + 1;
  this = (FPCGDataPtrWrapper *)
         (local_f8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78);
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
  this[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  FPCGDataPtrWrapper::operator=(this,(UPCGData *)param_3);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)pFVar10);
  while ((local_68.Object != (IPCGElement *)0x0 ||
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), !bVar5))) {
    bVar5 = IPCGElement::Execute(local_68.Object,(FPCGContext *)pFVar10->_padding_);
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if (local_f8.OutputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.OutputData.DataCrcs.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_f8.OutputData.TaggedData.AllocatorInstance.Data,
                 local_f8.OutputData.TaggedData.ArrayNum);
      if ((FPCGTaggedData *)local_f8.OutputData.TaggedData.AllocatorInstance.Data !=
          (FPCGTaggedData *)0x0) {
        FMemory::Free(local_f8.OutputData.TaggedData.AllocatorInstance.Data);
      }
      if (local_f8.InputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.InputData.DataCrcs.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_f8.InputData.TaggedData.AllocatorInstance.Data,
                 local_f8.InputData.TaggedData.ArrayNum);
      if ((FPCGTaggedData *)local_f8.InputData.TaggedData.AllocatorInstance.Data !=
          (FPCGTaggedData *)0x0) {
        FMemory::Free(local_f8.InputData.TaggedData.AllocatorInstance.Data);
      }
      return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)pFVar10;
    }
  }
  pcVar4 = (code *)swi(3);
  TVar9.Ptr = (FPCGContext *)(*pcVar4)();
  return (TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_>)TVar9.Ptr;
}

// TestMeshSelectorByAttribute @ 14a021eb0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TestMeshSelectorByAttribute
          (FPCGStaticMeshSpawnerByAttributeTest *param_1,FTestData *param_2,FName *param_3,
          TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>
          *param_4,bool param_5)

{
  UPCGMeshSelectorBase *pUVar1;
  UObject *pUVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  UPCGStaticMeshSpawnerSettings *this;
  UClass *pUVar12;
  FPCGByAttributeValidationData *pFVar13;
  FString *pFVar14;
  int iVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  size_t _Size;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  TObjectPtr<UPCGSettingsInterface>_u_0 this_00;
  FScriptContainerElement *pFVar24;
  longlong *plVar25;
  FName *pFVar26;
  FName FVar27;
  undefined1 auStackY_488 [32];
  undefined1 local_438;
  undefined1 local_437 [3];
  int local_434;
  int local_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined1 local_424 [20];
  undefined1 local_410 [72];
  ForAnyElementType local_3c8;
  FName local_3c0;
  FName FStack_3b8;
  undefined1 local_3b0 [16];
  void *local_3a0;
  ForAnyElementType local_398;
  FScriptContainerElement *local_390;
  FScriptContainerElement *local_388;
  FSoftObjectPath local_380;
  UObject *local_360;
  UPCGStaticMeshSpawnerSettings *local_358;
  FName *local_350;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  TSharedPtr<IPCGElement,1> local_308;
  UClass *local_2f8;
  undefined8 *local_2f0;
  FString local_2e8;
  FScriptContainerElement *local_2d8;
  void **local_2d0;
  code *local_2c8;
  undefined8 **local_2c0;
  undefined1 local_2b8 [24];
  void *local_2a0;
  undefined1 local_290 [24];
  void *local_278;
  undefined1 local_268 [24];
  void *local_250;
  undefined1 local_240 [24];
  void *local_228;
  double local_210;
  double dStack_208;
  double local_200;
  undefined1 local_1f8 [24];
  void *local_1e0;
  undefined1 local_1d0 [24];
  void *local_1b8;
  FScriptContainerElement *local_1a8;
  FSoftObjectPath local_1a0;
  FString local_180;
  FString local_170;
  FString local_160;
  longlong local_148 [4];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  void *local_108;
  undefined4 local_100;
  undefined1 local_f8 [64];
  void *local_b8;
  undefined4 local_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  pwVar23 = L"";
  local_410._32_8_ = param_4;
  local_410._48_8_ = param_1;
  local_410._64_8_ = param_2;
  if ((param_1 == (FPCGStaticMeshSpawnerByAttributeTest *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                         ,0x85,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings>(param_2->Settings);
  local_358 = this;
  local_2f8 = Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2f8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2f8);
  }
  UPCGStaticMeshSpawnerSettings::SetMeshSelectorType
            (this,(TSubclassOf<UPCGMeshSelectorBase>)&local_2f8);
  if ((this->MeshSelectorParameters).field0_0x0.DebugPtr == (UPCGMeshSelectorBase *)0x0) {
    pFVar14 = GetTypeName<UPCGMeshSelectorByAttribute>(&local_160);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar23 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar23);
  }
  pUVar12 = Z_Construct_UClass_UPCGMeshSelectorByAttribute_NoRegister();
  bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->MeshSelectorParameters,pUVar12);
  if ((!bVar7) ||
     (pUVar1 = (this->MeshSelectorParameters).field0_0x0.DebugPtr,
     pUVar1 == (UPCGMeshSelectorBase *)0x0)) {
    pFVar14 = GetTypeName<UPCGMeshSelectorByAttribute>(&local_180);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UPCGMeshSelectorBase>
                        (&local_170,(this->MeshSelectorParameters).field0_0x0.DebugPtr);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar23 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar23,pwVar22);
  }
  uVar8 = param_3->Number;
  *(uint *)&pUVar1[1].field_0x0 = (param_3->ComparisonIndex).Value;
  *(uint *)&pUVar1[1].field_0x4 = uVar8;
  UPCGSettings::GetElement((UPCGSettings *)this,&local_308);
  PCGTestsCommon::FTestData::InitializeTestContext(param_2,(UPCGNode *)local_410);
  uVar4 = local_410._0_8_;
  do {
    if ((local_308.Object == (IPCGElement *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = IPCGElement::Execute(local_308.Object,(FPCGContext *)uVar4);
  } while (!bVar7);
  local_f8._44_4_ = 0x80;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_f8._32_8_ = 0;
  local_f8._40_4_ = 0;
  local_f8._48_4_ = 0xffffffff;
  local_f8._52_4_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_410._56_8_ = (UPCGBasePointData *)0x0;
  if (param_5) {
    GetOutputDataAndBuildPositionMap
              ((FPCGTestBaseClass *)param_1,
               (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(uVar4 + 0x38),
               (TMap<UE::Math::TVector<double>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>_>
                *)local_f8,(UPCGBasePointData **)(local_410 + 0x38));
  }
  uVar4 = local_410._32_8_;
  local_148[0] = 0;
  local_148[1] = 0;
  local_128 = 0;
  iVar10 = *(int *)(local_410._32_8_ + 8);
  pFVar21 = ((ForAnyElementType *)local_410._32_8_)->Data;
  local_120 = 0;
  local_11c = 0x80;
  local_118 = 0xffffffff;
  pFVar24 = pFVar21 + (longlong)iVar10 * 0x30;
  local_114 = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_434 = 0;
  while( true ) {
    if (*(int *)(uVar4 + 8) != iVar10) {
      local_438 = 0;
      `TCheckedPointerIterator<`anonymous_namespace'::FPCGByAttributeValidationData_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_438);
    }
    uVar5 = local_410._64_8_;
    this_00 = (TObjectPtr<UPCGSettingsInterface>_u_0)local_410._48_8_;
    if (pFVar21 == pFVar24) break;
    local_240._0_8_ = *(undefined8 *)pFVar21;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_240 + 8),(FSoftObjectPath *)(pFVar21 + 8));
    local_2b8._0_8_ = local_240._0_8_;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_2b8 + 8),(FSoftObjectPath *)(local_240 + 8));
    local_1f8._0_8_ = local_2b8._0_8_;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_1f8 + 8),(FSoftObjectPath *)(local_2b8 + 8));
    uVar8 = GetTypeHash((FSoftObjectPath *)(local_1f8 + 8));
    if (local_1e0 != (void *)0x0) {
      FMemory::Free(local_1e0);
    }
    iVar9 = TSet<TTuple<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TSoftObjectPtr<UStaticMesh_const_>_>
                      (local_148,uVar8,(TSoftObjectPtr<UStaticMesh_const_> *)local_2b8);
    lVar20 = local_148[0];
    if (iVar9 == -1) {
      if (local_2a0 != (void *)0x0) {
        FMemory::Free(local_2a0);
      }
LAB_14a0221e2:
      pFVar19 = (FScriptContainerElement *)0x0;
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
    }
    else {
      if (local_2a0 != (void *)0x0) {
        FMemory::Free(local_2a0);
      }
      lVar20 = lVar20 + (longlong)iVar9 * 0x48;
      if (lVar20 == 0) goto LAB_14a0221e2;
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
      pFVar19 = (FScriptContainerElement *)(lVar20 + 0x28);
    }
    if (pFVar19 == (FScriptContainerElement *)0x0) {
      local_2d0 = &local_3a0;
      local_3a0 = (void *)0x0;
      local_398.Data = pFVar19;
      local_390 = pFVar19;
      local_2d8 = pFVar21;
      TSet<TTuple<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,_TestMeshSelectorByAttribute_::__l2::FPCGByAttributeValidIndexList_&&>_>
                (local_148,
                 (TPairInitializer<TSoftObjectPtr<UStaticMesh>_const_&,_void___cdecl_TestMeshSelectorByAttribute(FPCGStaticMeshSpawnerByAttributeTest_*,PCGTestsCommon::FTestData_const_&,FName_const_&,TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FPCGByAttributeValidIndexList_&&>
                  *)local_424,(bool *)&local_2d8);
      pFVar19 = (FScriptContainerElement *)
                (local_148[0] + ((longlong)(int)local_424._0_4_ * 9 + 5) * 8);
      if (local_3a0 != (void *)0x0) {
        FMemory::Free(local_3a0);
      }
    }
    local_42c = *(undefined4 *)(pFVar21 + 0x28);
                    /* WARNING: Load size is inaccurate */
    uStack_428 = *(undefined4 *)(pFVar21 + 0x2c);
    if (((*pFVar19 <= (FScriptContainerElement *)&local_42c) &&
        ((FScriptContainerElement *)&local_42c < *pFVar19 + (longlong)*(int *)(pFVar19 + 0xc) * 8))
       && (bVar7 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = *(int *)(pFVar19 + 8);
    if (iVar9 == *(int *)(pFVar19 + 0xc)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)pFVar19,(int *)(pFVar19 + 0xc));
    }
    *(int *)(pFVar19 + 8) = iVar9 + 1;
                    /* WARNING: Load size is inaccurate */
    *(ulonglong *)(*pFVar19 + (longlong)iVar9 * 8) = CONCAT44(uStack_428,local_42c);
    *(int *)(pFVar19 + 0x10) =
         *(int *)(pFVar19 + 0x10) + (*(int *)(pFVar21 + 0x2c) - *(int *)(pFVar21 + 0x28));
    local_434 = local_434 + (*(int *)(pFVar21 + 0x2c) - *(int *)(pFVar21 + 0x28));
    pFVar21 = pFVar21 + 0x30;
  }
  if ((*(UPCGComponent **)(local_410._64_8_ + 8) == (UPCGComponent *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TestData.TestPCGComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                         ,0xb4,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_2f0 = (undefined8 *)(local_410 + 8);
  local_2c0 = &local_2f0;
  local_2c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TestMeshSelectorByAttribute'::__l2::<lambda_1>,void,UPCGManagedResource_*>
              ::Call;
  local_410._8_8_ = (FName *)0x0;
  local_410._16_8_ = 0;
  UPCGComponent::ForEachManagedResource
            (*(UPCGComponent **)(uVar5 + 8),
             (TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_2c8);
  uVar16 = (ulonglong)(int)local_410._16_4_;
  local_424._8_4_ = local_410._16_4_;
  local_350 = (FName *)(local_410._8_8_ + uVar16 * 8);
  uVar18 = uVar16;
  pFVar26 = (FName *)local_410._8_8_;
  iVar10 = 0;
  do {
    pFVar6 = local_350;
    local_424._12_8_ = pFVar26;
    if ((int)uVar16 != (int)uVar18) {
      local_437[0] = 0;
      `TCheckedPointerIterator<UInstancedStaticMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_437);
    }
    if (pFVar26 == pFVar6) {
      (*(UPCGComponent **)(local_410._64_8_ + 8))->bGenerated = true;
      UPCGComponent::CleanupLocalImmediate(*(UPCGComponent **)(local_410._64_8_ + 8),true,false);
      FString::FString(&local_318,"Valid total instance count");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_318.Data.ArrayNum != 0) {
        FVar17.Data = local_318.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual
                ((FAutomationTestBase *)this_00.DebugPtr,(wchar_t *)FVar17.Data,iVar10,local_434);
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      if ((FName *)local_410._8_8_ != (FName *)0x0) {
        FMemory::Free((void *)local_410._8_8_);
      }
      local_100 = 0;
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,_TestMeshSelectorByAttribute_::__l2::FPCGByAttributeValidIndexList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_148);
      local_b0 = 0;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_f8);
      if ((FPCGContext *)local_410._0_8_ != (FPCGContext *)0x0) {
        (**(code **)*(longlong *)local_410._0_8_)(local_410._0_8_,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.SharedReferenceCount.ReferenceController);
      return;
    }
    FVar27 = *pFVar26;
    local_410._40_8_ = FVar27;
    iVar9 = UInstancedStaticMeshComponent::GetInstanceCount((UInstancedStaticMeshComponent *)FVar27)
    ;
    local_424._4_4_ = iVar10 + iVar9;
    pUVar2 = *(UObject **)((longlong)FVar27 + 0x5a0);
    local_430 = iVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    }
    local_3b0._0_8_ = (FScriptContainerElement *)0x0;
    FStack_3b8.ComparisonIndex.Value = 0;
    FStack_3b8.Number = 0;
    local_3c0.ComparisonIndex.Value = 0;
    local_3c0.Number = 0;
    local_3b0._8_8_ = (FScriptContainerElement *)0x0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    local_410._24_8_ = 0;
    FUtf8String::Reset((FUtf8String *)local_3b0,0);
    local_360 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_3c8,(FObjectPtr)&local_360);
    uVar4 = local_3b0._0_8_;
    _Size = (size_t)(int)local_3b0._8_4_;
    local_380.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388 = local_3c8.Data;
    local_380.SubPathString.Data.ArrayNum = local_3b0._8_4_;
    local_380.AssetPath.PackageName = local_3c0;
    local_380.AssetPath.AssetName = FStack_3b8;
    if (local_3b0._8_4_ == 0) {
      local_380.SubPathString.Data.ArrayMax = local_3b0._8_4_;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_3b0._8_4_,0,(ForAnyElementType *)&local_380.SubPathString,local_3b0._8_4_
                 ,&local_380.SubPathString.Data.ArrayMax);
      memcpy(local_380.SubPathString.Data.AllocatorInstance.Data,(void *)uVar4,_Size);
    }
    local_1a8 = local_388;
    FSoftObjectPath::FSoftObjectPath(&local_1a0,&local_380);
    pFVar13 = TArray<`anonymous_namespace'::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>
              ::FindByPredicate<_TestMeshSelectorByAttribute_::__l32::<lambda_2>_>
                        ((TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_>
                          *)local_410._32_8_,(<lambda_2> *)&local_1a8);
    if (local_380.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.SubPathString.Data.AllocatorInstance.Data);
    }
    FString::FString(&local_348,"Validate instanced mesh exists in MeshEntries");
    if (pFVar13 == (FPCGByAttributeValidationData *)0x0) {
      pcVar3 = *(code **)((this_00.DebugPtr)->_padding_ + 0x28);
      FString::PrintfImpl(&local_2e8,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this_00.DebugPtr,&local_2e8);
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      local_268._0_8_ = *(undefined8 *)&(pFVar13->Mesh).SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_268 + 8),
                 (FSoftObjectPath *)&(pFVar13->Mesh).SoftObjectPtr.field_0x8);
      local_290._0_8_ = local_268._0_8_;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_290 + 8),(FSoftObjectPath *)(local_268 + 8));
      local_1d0._0_8_ = local_290._0_8_;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_1d0 + 8),(FSoftObjectPath *)(local_290 + 8));
      uVar8 = GetTypeHash((FSoftObjectPath *)(local_1d0 + 8));
      if (local_1b8 != (void *)0x0) {
        FMemory::Free(local_1b8);
      }
      iVar10 = TSet<TTuple<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UStaticMesh>,`TestMeshSelectorByAttribute'::__l2::FPCGByAttributeValidIndexList,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSoftObjectPtr<UStaticMesh_const_>_>
                         (local_148,uVar8,(TSoftObjectPtr<UStaticMesh_const_> *)local_290);
      lVar20 = local_148[0];
      if (iVar10 == -1) {
        if (local_278 != (void *)0x0) {
          FMemory::Free(local_278);
        }
LAB_14a022661:
        if (local_250 != (void *)0x0) {
          FMemory::Free(local_250);
        }
        plVar25 = (longlong *)0x0;
LAB_14a022675:
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IndexList",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                           ,0xd1,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if (local_278 != (void *)0x0) {
          FMemory::Free(local_278);
        }
        lVar20 = lVar20 + (longlong)iVar10 * 0x48;
        if (lVar20 == 0) goto LAB_14a022661;
        if (local_250 != (void *)0x0) {
          FMemory::Free(local_250);
        }
        plVar25 = (longlong *)(lVar20 + 0x28);
        if (plVar25 == (longlong *)0x0) goto LAB_14a022675;
      }
      lVar20 = plVar25[2];
      FString::FString(&local_338,"Valid instance count per mesh");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_338.Data.ArrayNum != 0) {
        FVar17.Data = local_338.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual
                ((FAutomationTestBase *)this_00.DebugPtr,(wchar_t *)FVar17.Data,iVar9,(int)lVar20);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      iVar10 = 0;
      if (0 < iVar9) {
        do {
          local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_a8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UInstancedStaticMeshComponent::GetInstanceTransform
                    ((UInstancedStaticMeshComponent *)FVar27,iVar10,&local_a8,false);
          uVar8 = 0;
          iVar15 = (int)plVar25[1];
          local_200 = local_a8.Translation.ZW.m128d_f64[0];
          local_210 = local_a8.Translation.XY.m128d_f64[0];
          dStack_208 = local_a8.Translation.XY.m128d_f64[1];
          bVar7 = false;
          if (0 < iVar15) {
            lVar20 = 0;
            do {
              uVar11 = 0;
              if ((int)uVar8 < iVar15) {
                uVar11 = ~uVar8 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar7 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar15 = *(int *)(lVar20 + *plVar25);
              uVar11 = 0;
              if ((int)uVar8 < (int)plVar25[1]) {
                uVar11 = ~uVar8 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar7 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar27 = (FName)local_410._40_8_;
              iVar9 = local_430;
              if (((double)iVar15 <= local_210) &&
                 (local_210 < (double)*(int *)(lVar20 + 4 + *plVar25))) {
                bVar7 = true;
                break;
              }
              iVar15 = (int)plVar25[1];
              uVar8 = uVar8 + 1;
              lVar20 = lVar20 + 8;
              bVar7 = false;
            } while ((int)uVar8 < iVar15);
          }
          FString::FString(&local_328,"Valid transform locations");
          this_00 = (TObjectPtr<UPCGSettingsInterface>_u_0)local_410._48_8_;
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_328.Data.ArrayNum != 0) {
            FVar17.Data = local_328.Data.AllocatorInstance.Data;
          }
          FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)local_410._48_8_,(wchar_t *)FVar17.Data,bVar7);
          if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_328.Data.AllocatorInstance.Data);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar9);
      }
      pFVar26 = (FName *)local_424._12_8_;
      if (param_5) {
        ValidateOutPointData
                  ((FPCGTestBaseClass *)this_00.DebugPtr,(UInstancedStaticMeshComponent *)FVar27,
                   (TMap<UE::Math::TVector<double>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>_>
                    *)local_f8,&local_358->OutAttributeName,(UPCGBasePointData *)local_410._56_8_);
        pFVar26 = (FName *)local_424._12_8_;
      }
    }
    if ((FScriptContainerElement *)local_3b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3b0._0_8_);
    }
    uVar16 = local_410._16_8_ & 0xffffffff;
    pFVar26 = pFVar26 + 1;
    uVar18 = (ulonglong)(uint)local_424._8_4_;
    iVar10 = local_424._4_4_;
  } while( true );
}

// TestMeshSelectorWeighted @ 14a022a70

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TestMeshSelectorWeighted
          (FPCGStaticMeshSpawnerWeightedTest *param_1,FTestData *param_2,
          TArray<FPCGMeshSelectorWeightedEntry,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          bool param_5)

{
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar1;
  undefined1 *puVar2;
  UPCGMeshSelectorBase *pUVar3;
  UInstancedStaticMeshComponent *this;
  UObject *pUVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  FTestData *pFVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  UPCGStaticMeshSpawnerSettings *this_00;
  UClass *pUVar12;
  FString *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FPCGMeshSelectorWeightedEntry *pFVar19;
  FScriptContainerElement *pFVar20;
  FPCGMeshSelectorWeightedEntry *pFVar21;
  wchar_t *pwVar22;
  int iVar23;
  wchar_t *pwVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8;
  undefined1 local_1c7 [3];
  int local_1c4;
  FAutomationTestBase *local_1c0;
  int local_1b8;
  uint local_1b4;
  FTestData *local_1b0;
  undefined1 local_1a8 [72];
  ForAnyElementType local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  TSharedPtr<IPCGElement,1> local_128;
  code *local_118;
  undefined1 *local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [64];
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pwVar24 = L"";
  local_1c4 = param_4;
  local_1c0 = (FAutomationTestBase *)param_1;
  local_1b0 = param_2;
  if ((param_1 == (FPCGStaticMeshSpawnerWeightedTest *)0x0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("Test",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                          ,0x100,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings>(param_2->Settings);
  local_1a8._64_8_ = this_00;
  local_1a8._32_8_ = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1a8._32_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a8._32_8_);
  }
  UPCGStaticMeshSpawnerSettings::SetMeshSelectorType
            (this_00,(TSubclassOf<UPCGMeshSelectorBase>)((longlong)local_1a8 + 0x20));
  if ((this_00->MeshSelectorParameters).field0_0x0.DebugPtr == (UPCGMeshSelectorBase *)0x0) {
    pFVar13 = GetTypeName<UPCGMeshSelectorWeighted>(&local_d8);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar24 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar24);
  }
  pUVar12 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
  bVar10 = FObjectPtr::IsA((FObjectPtr *)&this_00->MeshSelectorParameters,pUVar12);
  if ((!bVar10) ||
     (pUVar3 = (this_00->MeshSelectorParameters).field0_0x0.DebugPtr,
     pUVar3 == (UPCGMeshSelectorBase *)0x0)) {
    pFVar13 = GetTypeName<UPCGMeshSelectorWeighted>(&local_f8);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pFVar13 = GetFullNameForCastLogError<UPCGMeshSelectorBase>
                        (&local_e8,(this_00->MeshSelectorParameters).field0_0x0.DebugPtr);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar24 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar24,pwVar22);
  }
  TVar1.DebugPtr = (UPCGSettingsInterface *)(pUVar3 + 1);
  local_1a8._48_8_ = TVar1.DebugPtr;
  if (TVar1.DebugPtr != (UPCGSettingsInterface *)param_3) {
    DestructItems<FPCGMeshSelectorWeightedEntry,int>
              ((FPCGMeshSelectorWeightedEntry *)(TVar1.DebugPtr)->_padding_,
               *(int *)&pUVar3[1].field_0x8);
    iVar23 = param_3->ArrayNum;
    puVar2 = &pUVar3[1].field_0xc;
    pFVar21 = (FPCGMeshSelectorWeightedEntry *)(param_3->AllocatorInstance).Data;
    *(int *)&pUVar3[1].field_0x8 = iVar23;
    if ((iVar23 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x288,8,iVar23,*(int *)puVar2,(ForAnyElementType *)TVar1.DebugPtr,iVar23,
                 (int *)puVar2);
      ConstructItems<FPCGMeshSelectorWeightedEntry,FPCGMeshSelectorWeightedEntry,int>
                ((FScriptContainerElement *)(TVar1.DebugPtr)->_padding_,pFVar21,iVar23);
    }
  }
  iVar23 = 0;
  UPCGSettings::GetElement((UPCGSettings *)this_00,&local_128);
  PCGTestsCommon::FTestData::InitializeTestContext(local_1b0,(UPCGNode *)local_1a8);
  uVar9 = local_1a8._0_8_;
  do {
    if ((local_128.Object == (IPCGElement *)0x0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar10 = IPCGElement::Execute(local_128.Object,(FPCGContext *)uVar9);
  } while (!bVar10);
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_c8._32_8_ = 0;
  local_c8._40_4_ = 0;
  local_c8._44_4_ = 0x80;
  local_c8._48_4_ = 0xffffffff;
  local_c8._52_4_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_1a8._24_8_ = (UPCGBasePointData *)0x0;
  if (param_5) {
    GetOutputDataAndBuildPositionMap
              ((FPCGTestBaseClass *)param_1,
               (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(uVar9 + 0x38),
               (TMap<UE::Math::TVector<double>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>_>
                *)local_c8,(UPCGBasePointData **)(local_1a8 + 0x18));
  }
  iVar17 = param_3->ArrayNum;
  pFVar18 = (param_3->AllocatorInstance).Data;
  pFVar20 = pFVar18 + (longlong)iVar17 * 0x288;
  while( true ) {
    if (param_3->ArrayNum != iVar17) {
      local_1c8 = 0;
      `TCheckedPointerIterator<FPCGMeshSelectorWeightedEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1c8);
    }
    pFVar8 = local_1b0;
    if (pFVar18 == pFVar20) break;
    iVar23 = iVar23 + *(int *)(pFVar18 + 0x280);
    pFVar18 = pFVar18 + 0x288;
  }
  if ((local_1b0->TestPCGComponent == (UPCGComponent *)0x0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("TestData.TestPCGComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                          ,0x11d,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1a8._40_8_ = (longlong)local_1a8 + 8;
  local_110 = local_1a8 + 0x28;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`TestMeshSelectorWeighted'::__l2::<lambda_1>,void,UPCGManagedResource_*>
              ::Call;
  local_1a8._8_8_ = (FScriptContainerElement *)0x0;
  local_1a8._16_8_ = 0;
  UPCGComponent::ForEachManagedResource
            (pFVar8->TestPCGComponent,
             (TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_118);
  fVar7 = __real_3dcccccd;
  fVar6 = __real_41200000;
  uVar14 = (ulonglong)(int)local_1a8._16_4_;
  local_1b4 = local_1a8._16_4_;
  local_160.Data = (FScriptContainerElement *)(local_1a8._8_8_ + uVar14 * 8);
  uVar16 = uVar14;
  pFVar18 = (FScriptContainerElement *)local_1a8._8_8_;
  iVar17 = 0;
  do {
    FVar15.Data = local_160.Data;
    if ((int)uVar14 != (int)uVar16) {
      local_1c7[0] = 0;
      `TCheckedPointerIterator<UInstancedStaticMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_1c7);
    }
    if (pFVar18 == FVar15.Data) {
      local_1b0->TestPCGComponent->bGenerated = true;
      UPCGComponent::CleanupLocalImmediate(local_1b0->TestPCGComponent,true,false);
      FString::FString(&local_138,"Valid total instance count");
      if (local_138.Data.ArrayNum != 0) {
        pwVar24 = (wchar_t *)local_138.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,pwVar24,iVar17,local_1c4);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_1a8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1a8._8_8_);
      }
      local_80 = 0;
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
      if ((FPCGContext *)local_1a8._0_8_ != (FPCGContext *)0x0) {
        (**(code **)*(longlong *)local_1a8._0_8_)(local_1a8._0_8_,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      return;
    }
    this = *(UInstancedStaticMeshComponent **)pFVar18;
    iVar11 = UInstancedStaticMeshComponent::GetInstanceCount(this);
    local_1b8 = iVar17 + iVar11;
    pUVar4 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_1a8._56_8_ = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pFVar21 = (FPCGMeshSelectorWeightedEntry *)*(FScriptContainerElement **)local_1a8._48_8_;
    pFVar19 = pFVar21 + (int)*(longlong *)(local_1a8._48_8_ + 8);
    for (; pFVar21 != pFVar19; pFVar21 = pFVar21 + 1) {
      bVar10 = `TestMeshSelectorWeighted'::__l29::<lambda_2>::operator()(local_1a8 + 0x38,pFVar21);
      if (bVar10) goto LAB_14a022e0e;
    }
    pFVar21 = (FPCGMeshSelectorWeightedEntry *)0x0;
LAB_14a022e0e:
    FString::FString(&local_158,"Validate instanced mesh exists in MeshEntries");
    if (pFVar21 == (FPCGMeshSelectorWeightedEntry *)0x0) {
      pcVar5 = *(code **)(local_1c0->_padding_ + 0x28);
      FString::PrintfImpl(&local_108,L"Expected \'%s\' to be not null.");
      (*pcVar5)(local_1c0,&local_108);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    param_1 = (FPCGStaticMeshSpawnerWeightedTest *)local_1c0;
    if (bVar10) {
      if ((iVar23 < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("TotalWeight > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                              ,0x139,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar25 = (float)((local_1c4 * pFVar21->Weight) / iVar23);
      fVar26 = fVar25 * fVar7;
      if (fVar25 * fVar7 <= fVar6) {
        fVar26 = fVar6;
      }
      if (((float)iVar11 < fVar25 - fVar26) || (fVar25 + fVar26 < (float)iVar11)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      FString::FString(&local_148,"Valid instance count per mesh");
      param_1 = (FPCGStaticMeshSpawnerWeightedTest *)local_1c0;
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_148.Data.ArrayNum != 0) {
        FVar15.Data = local_148.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue(local_1c0,(wchar_t *)FVar15.Data,bVar10);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (param_5) {
        ValidateOutPointData
                  ((FPCGTestBaseClass *)param_1,this,
                   (TMap<UE::Math::TVector<double>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>_>
                    *)local_c8,(FName *)(local_1a8._64_8_ + 0x100),
                   (UPCGBasePointData *)local_1a8._24_8_);
      }
    }
    uVar14 = local_1a8._16_8_ & 0xffffffff;
    pFVar18 = pFVar18 + 8;
    uVar16 = (ulonglong)local_1b4;
    iVar17 = local_1b8;
  } while( true );
}

// TestMeshSelectorWeightedByCategory @ 14a0230d0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TestMeshSelectorWeightedByCategory
          (FPCGStaticMeshSpawnerWeightedByCategoryTest *param_1,FTestData *param_2,FName *param_3,
          TArray<FPCGWeightedByCategoryEntryList,TSizedDefaultAllocator<32>_> *param_4,
          TArray<_anonymous_namespace_::FPCGWeightedByCategoryValidationData,TSizedDefaultAllocator<32>_>
          *param_5,int param_6,bool param_7)

{
  TArray<FPCGWeightedByCategoryEntryList,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TObjectPtr<UPCGMeshSelectorBase> TVar3;
  FPCGWeightedByCategoryEntryList *pFVar4;
  UInstancedStaticMeshComponent *this;
  UObject *pUVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  UPCGBasePointData *pUVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FName this_00;
  UClass *pUVar13;
  FString *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  int iVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198 [8];
  UPCGBasePointData *local_190;
  FAutomationTestBase *local_188;
  undefined1 local_180 [120];
  code *local_108;
  undefined1 *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [64];
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pwVar21 = L"";
  local_188 = (FAutomationTestBase *)param_1;
  local_180._48_8_ = param_2;
  if ((param_1 == (FPCGStaticMeshSpawnerWeightedByCategoryTest *)0x0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("Test",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                          ,0x156,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = (FName)CastChecked<UPCGStaticMeshSpawnerSettings,UPCGSettings>(param_2->Settings);
  local_180._40_8_ = this_00;
  local_180._8_8_ = Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_180._8_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_180._8_8_);
  }
  UPCGStaticMeshSpawnerSettings::SetMeshSelectorType
            ((UPCGStaticMeshSpawnerSettings *)this_00,
             (TSubclassOf<UPCGMeshSelectorBase>)((longlong)local_180 + 8));
  if (((TObjectPtr<UPCGMeshSelectorBase>_u_0 *)((longlong)this_00 + 0xd0))->DebugPtr ==
      (UPCGMeshSelectorBase *)0x0) {
    pFVar14 = GetTypeName<UPCGMeshSelectorWeightedByCategory>(&local_c8);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar21);
  }
  pUVar13 = Z_Construct_UClass_UPCGMeshSelectorWeightedByCategory_NoRegister();
  bVar11 = FObjectPtr::IsA((FObjectPtr *)((longlong)this_00 + 0xd0),pUVar13);
  if ((!bVar11) ||
     (TVar3.field0_0x0 =
           (TObjectPtr<UPCGMeshSelectorBase>_u_0)
           ((TObjectPtr<UPCGMeshSelectorBase>_u_0 *)((longlong)this_00 + 0xd0))->DebugPtr,
     TVar3.field0_0x0 == (UPCGMeshSelectorBase *)0x0)) {
    pFVar14 = GetTypeName<UPCGMeshSelectorWeightedByCategory>(&local_e8);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UPCGMeshSelectorBase>
                        (&local_d8,
                         ((TObjectPtr<UPCGMeshSelectorBase>_u_0 *)((longlong)this_00 + 0xd0))->
                         DebugPtr);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar21,pwVar20);
  }
  pTVar1 = (TArray<FPCGWeightedByCategoryEntryList,TSizedDefaultAllocator<32>_> *)
           ((longlong)TVar3.field0_0x0 + 0x30);
  *(FName *)((longlong)TVar3.field0_0x0 + 0x28) = *param_3;
  if (pTVar1 != param_4) {
    DestructItems<FPCGWeightedByCategoryEntryList,int>
              ((FPCGWeightedByCategoryEntryList *)(pTVar1->AllocatorInstance).Data,
               *(int *)((longlong)TVar3.field0_0x0 + 0x38));
    iVar19 = param_4->ArrayNum;
    piVar2 = (int *)((longlong)TVar3.field0_0x0 + 0x3c);
    pFVar4 = (FPCGWeightedByCategoryEntryList *)(param_4->AllocatorInstance).Data;
    *(int *)((longlong)TVar3.field0_0x0 + 0x38) = iVar19;
    if ((iVar19 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar19,*piVar2,(ForAnyElementType *)pTVar1,iVar19,piVar2);
      ConstructItems<FPCGWeightedByCategoryEntryList,FPCGWeightedByCategoryEntryList,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar19);
    }
  }
  UPCGSettings::GetElement((UPCGSettings *)this_00,(TSharedPtr<IPCGElement,1> *)(local_180 + 0x68));
  PCGTestsCommon::FTestData::InitializeTestContext(param_2,(UPCGNode *)local_180);
  uVar10 = local_180._0_8_;
  do {
    if (((IPCGElement *)local_180._104_8_ == (IPCGElement *)0x0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar11 = IPCGElement::Execute((IPCGElement *)local_180._104_8_,(FPCGContext *)uVar10);
  } while (!bVar11);
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_b8._32_8_ = 0;
  local_b8._40_4_ = 0;
  local_b8._44_4_ = 0x80;
  local_b8._48_4_ = 0xffffffff;
  local_b8._52_4_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_190 = (UPCGBasePointData *)0x0;
  if (param_7) {
    GetOutputDataAndBuildPositionMap
              ((FPCGTestBaseClass *)param_1,
               (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38),
               (TMap<UE::Math::TVector<double>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>_>
                *)local_b8,&local_190);
  }
  if ((param_2->TestPCGComponent == (UPCGComponent *)0x0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("TestData.TestPCGComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                          ,0x16f,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_180._16_8_ = local_180 + 0x18;
  local_100 = local_180 + 0x10;
  local_180._24_8_ = (undefined8 *)0x0;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`TestMeshSelectorWeightedByCategory'::__l2::<lambda_1>,void,UPCGManagedResource_*>
              ::Call;
  local_180._32_8_ = 0;
  UPCGComponent::ForEachManagedResource
            (param_2->TestPCGComponent,
             (TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_108);
  pUVar9 = local_190;
  fVar8 = __real_3dcccccd;
  fVar7 = __real_41200000;
  uVar15 = (ulonglong)(int)local_180._32_4_;
  local_180._16_8_ = local_180._24_8_ + uVar15 * 8;
  local_180._8_4_ = local_180._32_4_;
  uVar18 = uVar15;
  puVar22 = (undefined8 *)local_180._24_8_;
  iVar19 = 0;
  do {
    uVar10 = local_180._16_8_;
    if ((int)uVar15 != (int)uVar18) {
      `TCheckedPointerIterator<UInstancedStaticMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_198);
    }
    if (puVar22 == (undefined8 *)uVar10) {
      (*(UPCGComponent **)(local_180._48_8_ + 8))->bGenerated = true;
      UPCGComponent::CleanupLocalImmediate(*(UPCGComponent **)(local_180._48_8_ + 8),true,false);
      FString::FString((FString *)(local_180 + 0x58),"Valid total instance count");
      if (local_180._96_4_ != 0) {
        pwVar21 = (wchar_t *)local_180._88_8_;
      }
      FAutomationTestBase::TestEqual((FAutomationTestBase *)param_1,pwVar21,iVar19,param_6);
      if ((FScriptContainerElement *)local_180._88_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_180._88_8_);
      }
      if ((undefined8 *)local_180._24_8_ != (undefined8 *)0x0) {
        FMemory::Free((void *)local_180._24_8_);
      }
      local_70 = 0;
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector<double>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b8);
      if ((FPCGContext *)local_180._0_8_ != (FPCGContext *)0x0) {
        (**(code **)*(longlong *)local_180._0_8_)(local_180._0_8_,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_180._112_8_);
      return;
    }
    this = (UInstancedStaticMeshComponent *)*puVar22;
    iVar12 = UInstancedStaticMeshComponent::GetInstanceCount(this);
    local_190 = (UPCGBasePointData *)CONCAT44(local_190._4_4_,iVar19 + iVar12);
    pUVar5 = (UObject *)this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar5 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
      }
    }
    pFVar17 = (param_5->AllocatorInstance).Data;
    pFVar16 = pFVar17 + (longlong)param_5->ArrayNum * 0x10;
    for (; pFVar17 != pFVar16; pFVar17 = pFVar17 + 0x10) {
      if (pUVar5 == (UObject *)0x0) {
        bVar11 = *(UObject **)pFVar17 == (UObject *)0x0;
      }
      else {
        bVar11 = pUVar5 == *(UObject **)pFVar17;
      }
      if (bVar11) goto LAB_14a023426;
    }
    pFVar17 = (FScriptContainerElement *)0x0;
LAB_14a023426:
    FString::FString((FString *)(local_180 + 0x38),"Validate instanced mesh exists in entries");
    if (pFVar17 == (FScriptContainerElement *)0x0) {
      pcVar6 = *(code **)(local_188->_padding_ + 0x28);
      FString::PrintfImpl(&local_f8,L"Expected \'%s\' to be not null.");
      (*pcVar6)(local_188,&local_f8);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((FScriptContainerElement *)local_180._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_180._56_8_);
    }
    param_1 = (FPCGStaticMeshSpawnerWeightedByCategoryTest *)local_188;
    if (bVar11) {
      fVar24 = (float)*(int *)(pFVar17 + 8);
      fVar23 = fVar24 * fVar8;
      if (fVar24 * fVar8 <= fVar7) {
        fVar23 = fVar7;
      }
      if (((float)iVar12 < fVar24 - fVar23) || (fVar23 + fVar24 < (float)iVar12)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      FString::FString((FString *)(local_180 + 0x48),"Valid instance count per mesh");
      param_1 = (FPCGStaticMeshSpawnerWeightedByCategoryTest *)local_188;
      pFVar17 = (FScriptContainerElement *)L"";
      if (local_180._80_4_ != 0) {
        pFVar17 = (FScriptContainerElement *)local_180._72_8_;
      }
      FAutomationTestBase::TestTrue(local_188,(wchar_t *)pFVar17,bVar11);
      if ((FScriptContainerElement *)local_180._72_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_180._72_8_);
      }
      if (param_7) {
        ValidateOutPointData
                  ((FPCGTestBaseClass *)param_1,this,
                   (TMap<UE::Math::TVector<double>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>_>
                    *)local_b8,(FName *)(local_180._40_8_ + 0x100),pUVar9);
      }
    }
    uVar15 = local_180._32_8_ & 0xffffffff;
    puVar22 = puVar22 + 1;
    uVar18 = local_180._8_8_ & 0xffffffff;
    iVar19 = (int)local_190;
  } while( true );
}

// ValidateOutPointData @ 14a023d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ValidateOutPointData
          (FPCGTestBaseClass *param_1,UInstancedStaticMeshComponent *param_2,
          TMap<UE::Math::TVector<double>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>_>
          *param_3,FName *param_4,UPCGBasePointData *param_5)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FPCGMetadataDomainID FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FPCGMetadataAttribute<FString> *this;
  FString *pFVar9;
  uint *puVar10;
  ForAnyElementType FVar11;
  undefined1 *puVar12;
  uint *puVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  int local_1e8;
  FString local_1e0;
  FObjectPtr_u_0 local_1d0;
  FPCGMetadataAttribute<FString> *local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  double local_160;
  double dStack_158;
  double local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  longlong local_118;
  int local_110;
  int local_10c;
  int local_108;
  FString local_f8;
  FName local_e8;
  FPCGMetadataDomainID FStack_e0;
  FPCGAttributeIdentifier local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1e8 = 0;
  bVar2 = false;
  if ((param_1 == (FPCGTestBaseClass *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                         ,0x52,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == (UInstancedStaticMeshComponent *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ISMC",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                         ,0x53,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_5 == (UPCGBasePointData *)0x0) || (param_5->_padding_ == 0)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("OutPointData && OutPointData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                         ,0x54,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_e8 = *param_4;
  FStack_e0 = PCGMetadataDomainID::Default;
  FVar4 = FStack_e0;
  FStack_e0._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_c8.MetadataDomain.Flag = FStack_e0.Flag;
  local_c8.MetadataDomain._1_3_ = FStack_e0._1_3_;
  local_c8.MetadataDomain.CustomFlag = FStack_e0.CustomFlag;
  local_c8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  FStack_e0 = FVar4;
  local_c8.Name = local_e8;
  this = (FPCGMetadataAttribute<FString> *)
         UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_5->_padding_,&local_c8);
  local_1c8 = this;
  FString::FString(&local_1c0,"Metadata contains out attribute");
  if (this == (FPCGMetadataAttribute<FString> *)0x0) {
    pcVar1 = *(code **)(*(longlong *)param_1 + 0x28);
    FString::PrintfImpl(&local_148,L"Expected \'%s\' to be not null.");
    (*pcVar1)(param_1,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    return;
  }
  lVar3 = this->_padding_;
  FString::FString(&local_1b0,"Output attribute is a valid type");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1b0.Data.ArrayNum != 0) {
    FVar11.Data = local_1b0.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,(short)lVar3 == 9);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    return;
  }
  local_1d0 = (FObjectPtr_u_0)param_2->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0.Handle != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(local_1d0.Handle);
  }
  FObjectPtr::GetPath((FObjectPtr *)&local_1d0,&local_1e0);
  local_1e8 = FPCGMetadataAttribute<FString>::FindValue<FString,0>(this,&local_1e0);
  if (local_1e8 == -1) {
    pFVar9 = FPCGMetadataAttribute<FString>::GetValue(this,&local_f8,-1);
    FString::FString(&local_1a0,"Mesh value exists in output attribute");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar11.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_1e0.Data.ArrayNum != 0) {
      FVar14.Data = local_1e0.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,(wchar_t *)FVar14.Data,
                       pwVar15);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_14a024308;
  }
  (**(code **)(param_5->_padding_ + 0x538))(param_5,&local_118);
  iVar16 = 0;
  iVar6 = UInstancedStaticMeshComponent::GetInstanceCount(param_2);
  if (0 < iVar6) {
    do {
      local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UInstancedStaticMeshComponent::GetInstanceTransform(param_2,iVar16,&local_a8,true);
      local_150 = local_a8.Translation.ZW.m128d_f64[0];
      local_160 = local_a8.Translation.XY.m128d_f64[0];
      dStack_158 = local_a8.Translation.XY.m128d_f64[1];
      uVar7 = FCrc::MemCrc_DEPRECATED(&local_160,0x18,0);
      if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
        puVar12 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)&param_3->field_0x40;
        }
        uVar7 = *(uint *)(puVar12 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & uVar7) * 4);
        if (uVar7 != 0xffffffff) {
          do {
            puVar10 = (uint *)(*(longlong *)param_3 + (longlong)(int)uVar7 * 0x28);
            if (((local_160 == *(double *)(*(longlong *)param_3 + (longlong)(int)uVar7 * 0x28)) &&
                (dStack_158 == *(double *)(puVar10 + 2))) && (local_150 == *(double *)(puVar10 + 4))
               ) {
              if (uVar7 != 0xffffffff) goto LAB_14a024155;
              break;
            }
            uVar7 = puVar10[8];
          } while (uVar7 != 0xffffffff);
        }
      }
      puVar10 = (uint *)0x0;
LAB_14a024155:
      puVar13 = puVar10 + 6;
      if (puVar10 == (uint *)0x0) {
        puVar13 = (uint *)0x0;
      }
      FString::FString(&local_180,"Output point index exists");
      if (puVar13 == (uint *)0x0) {
        pcVar1 = *(code **)(*(longlong *)param_1 + 0x28);
        FString::PrintfImpl(&local_138,L"Expected \'%s\' to be not null.");
        (*pcVar1)(param_1,&local_138,0);
        FVar11.Data = local_138.Data.AllocatorInstance.Data;
LAB_14a024203:
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar11.Data);
        }
        bVar5 = false;
      }
      else {
        FString::FString(&local_190,"Ouput point index is valid");
        bVar2 = true;
        if (*puVar13 == 0xffffffff) {
          pcVar1 = *(code **)(*(longlong *)param_1 + 0x28);
          FString::PrintfImpl(&local_128,L"%s: The two values are equal.");
          (*pcVar1)(param_1,&local_128,0);
          FVar11.Data = local_128.Data.AllocatorInstance.Data;
          goto LAB_14a024203;
        }
        bVar5 = true;
      }
      if ((bVar2) &&
         (bVar2 = false, local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        uVar7 = *puVar13;
        uVar8 = 0;
        if ((int)uVar7 < local_108) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_1f8 = (longlong)(int)uVar7, local_1f0 = (longlong)local_108,
           bVar5 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)local_1c8,
                           *(long64 *)
                            ((longlong)((int)uVar7 % local_10c) * (longlong)local_110 + local_118));
        FString::FString(&local_170,"Valid mesh stored in output point metadata");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_170.Data.ArrayNum != 0) {
          FVar11.Data = local_170.Data.AllocatorInstance.Data;
        }
        FAutomationTestBase::TestEqual
                  ((FAutomationTestBase *)param_1,(wchar_t *)FVar11.Data,iVar6,local_1e8);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      iVar16 = iVar16 + 1;
      iVar6 = UInstancedStaticMeshComponent::GetInstanceCount(param_2);
    } while (iVar16 < iVar6);
  }
LAB_14a024308:
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  return;
}

// Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_NoRegister @ 14a024350

UClass * __cdecl Z_Construct_UClass_UPCGGraphAuthoringTestHelperSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphAuthoringTestHelperSettings",
               &Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton,
               UPCGGraphAuthoringTestHelperSettings::
               StaticRegisterNativesUPCGGraphAuthoringTestHelperSettings,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGraphAuthoringTestHelperSettings>,
               InternalVTableHelperCtorCaller<UPCGGraphAuthoringTestHelperSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphAuthoringTestHelperSettings.InnerSingleton;
}

// NoPin'' @ 15041abd0

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

// `dynamic_atexit_destructor_for_'CVarGraphExecutionCullingLoggingEnable'' @ 15041abf0

void __cdecl
PCGGraphExecutionLogging::_dynamic_atexit_destructor_for__CVarGraphExecutionCullingLoggingEnable__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGraphExecutionCullingLoggingEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGraphExecutionLoggingEnable'' @ 15041ac10

void __cdecl
PCGGraphExecutionLogging::_dynamic_atexit_destructor_for__CVarGraphExecutionLoggingEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGraphExecutionLoggingEnable);
  return;
}

// `dynamic_atexit_destructor_for_'ComponentAttachmentFailed'' @ 15041ac30

void __cdecl
PCGLog::Component::Format::_dynamic_atexit_destructor_for__ComponentAttachmentFailed__(void)

{
  if (ComponentAttachmentFailed.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041ac3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ComponentAttachmentFailed.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CreateAccessorFailure'' @ 15041ac50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__CreateAccessorFailure__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (CreateAccessorFailure.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'CreateAttributeFailure'' @ 15041ac70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__CreateAttributeFailure__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (CreateAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'DirectoryNotFound'' @ 15041ac90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_atexit_destructor_for__DirectoryNotFound__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (DirectoryNotFound.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyExpression'' @ 15041acb0

void __cdecl PCGLog::Parsing::Format::_dynamic_atexit_destructor_for__EmptyExpression__(void)

{
  if (EmptyExpression.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041acbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*EmptyExpression.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FPCGCollapseSubgraphCombinationOfCollapsesAutomationTestInstance'' @ 15041acd0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGCollapseSubgraphCombinationOfCollapsesAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGCollapseSubgraphCombinationOfCollapsesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGCollapseSubgraphSimpleAutomationTestInstance'' @ 15041acf0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGCollapseSubgraphSimpleAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGCollapseSubgraphSimpleAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGCollapseSubgraphWithParamsAutomationTestInstance'' @ 15041ad10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGCollapseSubgraphWithParamsAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGCollapseSubgraphWithParamsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGParsingTest_BasicAutomationTestInstance'' @ 15041ad30

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPCGParsingTest_BasicAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGParsingTest_BasicAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGParsingTest_RangesAutomationTestInstance'' @ 15041ad50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGParsingTest_RangesAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGParsingTest_RangesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGParsingTest_RobustnessAutomationTestInstance'' @ 15041ad70

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGParsingTest_RobustnessAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGParsingTest_RobustnessAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSanityCheckPointData_MaxPointCountAutomationTestInstance'' @ 15041ad90

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSanityCheckPointData_MaxPointCountAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSanityCheckPointData_MaxPointCountAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSanityCheckPointData_MinPointCountAutomationTestInstance'' @ 15041adb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSanityCheckPointData_MinPointCountAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSanityCheckPointData_MinPointCountAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSanityCheckPointData_SuccessAutomationTestInstance'' @ 15041add0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSanityCheckPointData_SuccessAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSanityCheckPointData_SuccessAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSortAttributesTest_AscendingAutomationTestInstance'' @ 15041adf0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSortAttributesTest_AscendingAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortAttributesTest_AscendingAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSortAttributesTest_DescendingAutomationTestInstance'' @ 15041ae10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSortAttributesTest_DescendingAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortAttributesTest_DescendingAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSortAttributesTest_SameValuesAutomationTestInstance'' @ 15041ae30

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSortAttributesTest_SameValuesAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortAttributesTest_SameValuesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSortPointsTest_AscendingAutomationTestInstance'' @ 15041ae50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSortPointsTest_AscendingAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortPointsTest_AscendingAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSortPointsTest_DescendingAutomationTestInstance'' @ 15041ae70

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSortPointsTest_DescendingAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortPointsTest_DescendingAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSortPointsTest_SameValuesAutomationTestInstance'' @ 15041ae90

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSortPointsTest_SameValuesAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSortPointsTest_SameValuesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSpatialNoise_CalcLocalCoordinates2DAutomationTestInstance'' @ 15041aeb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSpatialNoise_CalcLocalCoordinates2DAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_CalcLocalCoordinates2DAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSpatialNoise_Caustic2DAutomationTestInstance'' @ 15041aed0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSpatialNoise_Caustic2DAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_Caustic2DAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSpatialNoise_EdgeMask2DAutomationTestInstance'' @ 15041aef0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSpatialNoise_EdgeMask2DAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_EdgeMask2DAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSpatialNoise_FractionalBrownian2DAutomationTestInstance'' @ 15041af10

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSpatialNoise_FractionalBrownian2DAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_FractionalBrownian2DAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSpatialNoise_Perlin2DAutomationTestInstance'' @ 15041af30

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSpatialNoise_Perlin2DAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_Perlin2DAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSpatialNoise_TilingPerlin2DAutomationTestInstance'' @ 15041af50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSpatialNoise_TilingPerlin2DAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_TilingPerlin2DAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSpatialNoise_TilingVoronoi2DAutomationTestInstance'' @ 15041af70

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSpatialNoise_TilingVoronoi2DAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_TilingVoronoi2DAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSpatialNoise_Voronoi2DAutomationTestInstance'' @ 15041af90

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSpatialNoise_Voronoi2DAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSpatialNoise_Voronoi2DAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_DefaultXAutomationTestInstance'' @ 15041afb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_DefaultXAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_DefaultXAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_DefaultYAutomationTestInstance'' @ 15041afd0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_DefaultYAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_DefaultYAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_DefaultZAutomationTestInstance'' @ 15041aff0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_DefaultZAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_DefaultZAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_OneXAutomationTestInstance'' @ 15041b010

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_OneXAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_OneXAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_OneYAutomationTestInstance'' @ 15041b030

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_OneYAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_OneYAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_OneZAutomationTestInstance'' @ 15041b050

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_OneZAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_OneZAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_ZeroXAutomationTestInstance'' @ 15041b070

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_ZeroXAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_ZeroXAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_ZeroYAutomationTestInstance'' @ 15041b090

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_ZeroYAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_ZeroYAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGSplitPointsTest_ZeroZAutomationTestInstance'' @ 15041b0b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGSplitPointsTest_ZeroZAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGSplitPointsTest_ZeroZAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGStaticMeshSpawnerByAttributeTestAutomationTestInstance'' @ 15041b0d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGStaticMeshSpawnerByAttributeTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGStaticMeshSpawnerByAttributeTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGStaticMeshSpawnerWeightedByCategoryTestAutomationTestInstance'' @ 15041b0f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGStaticMeshSpawnerWeightedByCategoryTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPCGStaticMeshSpawnerWeightedByCategoryTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPCGStaticMeshSpawnerWeightedTestAutomationTestInstance'' @ 15041b110

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPCGStaticMeshSpawnerWeightedTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPCGStaticMeshSpawnerWeightedTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FileNotFound'' @ 15041b130

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_atexit_destructor_for__FileNotFound__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FileNotFound.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'FirstInputOnly'' @ 15041b150

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_atexit_destructor_for__FirstInputOnly__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FirstInputOnly.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'GetAttributeFailure'' @ 15041b170

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__GetAttributeFailure__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GetAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'GetTypedAttributeFailure'' @ 15041b190

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__GetTypedAttributeFailure__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GetTypedAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'GetTypedAttributeFailureNoAccessor'' @ 15041b1b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__GetTypedAttributeFailureNoAccessor__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GetTypedAttributeFailureNoAccessor.TextFormatData.SharedReferenceCount.
             ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'IncomparableTypesFailure'' @ 15041b1d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__IncomparableTypesFailure__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (IncomparableTypesFailure.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidCardinality'' @ 15041b1f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_atexit_destructor_for__InvalidCardinality__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InvalidCardinality.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidCharacter'' @ 15041b210

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Parsing::Format::_dynamic_atexit_destructor_for__InvalidCharacter__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InvalidCharacter.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidConversion'' @ 15041b230

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Settings::Format::_dynamic_atexit_destructor_for__InvalidConversion__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InvalidConversion.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidExpression'' @ 15041b250

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Parsing::Format::_dynamic_atexit_destructor_for__InvalidExpression__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InvalidExpression.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidFileType'' @ 15041b270

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_atexit_destructor_for__InvalidFileType__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InvalidFileType.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidInputData'' @ 15041b290

void __cdecl PCGLog::InputOutput::Format::_dynamic_atexit_destructor_for__InvalidInputData__(void)

{
  if (InvalidInputData.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041b29f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InvalidInputData.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidMetadata'' @ 15041b2b0

void __cdecl PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__InvalidMetadata__(void)

{
  if (InvalidMetadata.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041b2bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InvalidMetadata.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidMetadataDomain'' @ 15041b2d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__InvalidMetadataDomain__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InvalidMetadataDomain.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidPreconfiguration'' @ 15041b2f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Settings::Format::_dynamic_atexit_destructor_for__InvalidPreconfiguration__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (InvalidPreconfiguration.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'LandscapeCacheNotAvailable'' @ 15041b310

void __cdecl
PCGLog::Landscape::Format::_dynamic_atexit_destructor_for__LandscapeCacheNotAvailable__(void)

{
  if (LandscapeCacheNotAvailable.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041b31f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*LandscapeCacheNotAvailable.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SetTypedAttributeFailure'' @ 15041b330

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__SetTypedAttributeFailure__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (SetTypedAttributeFailure.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'SetTypedAttributeFailureNoAccessor'' @ 15041b350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
PCGLog::Metadata::Format::_dynamic_atexit_destructor_for__SetTypedAttributeFailureNoAccessor__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (SetTypedAttributeFailureNoAccessor.TextFormatData.SharedReferenceCount.
             ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'SubtitleEnum'' @ 15041b370

void __cdecl PCGControlFlowConstants::_dynamic_atexit_destructor_for__SubtitleEnum__(void)

{
  if (SubtitleEnum.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041b37f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SubtitleEnum.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SubtitleInt'' @ 15041b390

void __cdecl PCGControlFlowConstants::_dynamic_atexit_destructor_for__SubtitleInt__(void)

{
  if (SubtitleInt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041b39f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SubtitleInt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SubtitleString'' @ 15041b3b0

void __cdecl PCGControlFlowConstants::_dynamic_atexit_destructor_for__SubtitleString__(void)

{
  if (SubtitleString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015041b3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SubtitleString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TypeToDataFn'' @ 15041b3d0

void __cdecl
`PCGTestsCommon::GenerateAllowedData'::__l2::_dynamic_atexit_destructor_for__TypeToDataFn__(void)

{
  TypeToDataFn._72_4_ = 0;
  if (TypeToDataFn._64_8_ != 0) {
    FMemory::Free((void *)TypeToDataFn._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TypeToDataFn);
  return;
}

// `dynamic_atexit_destructor_for_'TypedInputNotFound'' @ 15041b410

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl PCGLog::InputOutput::Format::_dynamic_atexit_destructor_for__TypedInputNotFound__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TypedInputNotFound.TextFormatData.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'UserParameterTagData'' @ 15041b430

void __cdecl PCGBaseSubgraphConstants::_dynamic_atexit_destructor_for__UserParameterTagData__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UserParameterTagData.Data.AllocatorInstance.Data;
  if (UserParameterTagData.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UserParameterTagData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

