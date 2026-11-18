// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 461

// EdgesName'' @ 140f4fc90

void __cdecl `dynamic_initializer_for_'FMeshDescription::EdgesName__(void)

{
  ::FName::FName(&FMeshDescription::EdgesName,"Edges");
  return;
}

// PolygonGroupsName'' @ 140f4fcb0

void __cdecl `dynamic_initializer_for_'FMeshDescription::PolygonGroupsName__(void)

{
  ::FName::FName(&FMeshDescription::PolygonGroupsName,"PolygonGroups");
  return;
}

// PolygonsName'' @ 140f4fcd0

void __cdecl `dynamic_initializer_for_'FMeshDescription::PolygonsName__(void)

{
  ::FName::FName(&FMeshDescription::PolygonsName,"Polygons");
  return;
}

// TrianglesName'' @ 140f4fcf0

void __cdecl `dynamic_initializer_for_'FMeshDescription::TrianglesName__(void)

{
  ::FName::FName(&FMeshDescription::TrianglesName,"Triangles");
  return;
}

// UVsName'' @ 140f4fd10

void __cdecl `dynamic_initializer_for_'FMeshDescription::UVsName__(void)

{
  ::FName::FName(&FMeshDescription::UVsName,"UVs");
  return;
}

// VertexInstancesName'' @ 140f4fd30

void __cdecl `dynamic_initializer_for_'FMeshDescription::VertexInstancesName__(void)

{
  ::FName::FName(&FMeshDescription::VertexInstancesName,"VertexInstances");
  return;
}

// VerticesName'' @ 140f4fd50

void __cdecl `dynamic_initializer_for_'FMeshDescription::VerticesName__(void)

{
  ::FName::FName(&FMeshDescription::VerticesName,"Vertices");
  return;
}

// `dynamic_initializer_for_'Binormal'' @ 140f4fd70

void __cdecl MeshAttribute_::Polygon::_dynamic_initializer_for__Binormal__(void)

{
  ::FName::FName(&Binormal,"Binormal");
  return;
}

// `dynamic_initializer_for_'BinormalSign'' @ 140f4fd90

void __cdecl MeshAttribute_::VertexInstance::_dynamic_initializer_for__BinormalSign__(void)

{
  ::FName::FName(&BinormalSign,"BinormalSign");
  return;
}

// `dynamic_initializer_for_'CastShadow'' @ 140f4fdb0

void __cdecl MeshAttribute_::PolygonGroup::_dynamic_initializer_for__CastShadow__(void)

{
  ::FName::FName(&CastShadow,"CastShadow");
  return;
}

// `dynamic_initializer_for_'Center'' @ 140f4fdd0

void __cdecl MeshAttribute_::Polygon::_dynamic_initializer_for__Center__(void)

{
  ::FName::FName(&Center,"Center");
  return;
}

// `dynamic_initializer_for_'Color'' @ 140f4fdf0

void __cdecl MeshAttribute_::VertexInstance::_dynamic_initializer_for__Color__(void)

{
  ::FName::FName(&Color,"Color");
  return;
}

// `dynamic_initializer_for_'CornerSharpness'' @ 140f4fe10

void __cdecl MeshAttribute_::Vertex::_dynamic_initializer_for__CornerSharpness__(void)

{
  ::FName::FName(&CornerSharpness,"CornerSharpness");
  return;
}

// `dynamic_initializer_for_'CreaseSharpness'' @ 140f4fe30

void __cdecl MeshAttribute_::Edge::_dynamic_initializer_for__CreaseSharpness__(void)

{
  ::FName::FName(&CreaseSharpness,"CreaseSharpness");
  return;
}

// `dynamic_initializer_for_'EdgeIndex'' @ 140f4fe50

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__EdgeIndex__(void)

{
  ::FName::FName(&EdgeIndex,"EdgeIndex");
  return;
}

// `dynamic_initializer_for_'EnableCollision'' @ 140f4fe70

void __cdecl MeshAttribute_::PolygonGroup::_dynamic_initializer_for__EnableCollision__(void)

{
  ::FName::FName(&EnableCollision,"EnableCollision");
  return;
}

// `dynamic_initializer_for_'FMeshElementArrayTestSerializationAutomationTestInstance'' @ 140f4fe90

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FMeshElementArrayTestSerializationAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMeshElementArrayTestSerialization");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FMeshElementArrayTestSerializationAutomationTestInstance,
             &local_18,false);
  FMeshElementArrayTestSerializationAutomationTestInstance._0_8_ =
       &___7FMeshElementArrayTestSerialization__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMeshElementArrayTestSerializationAutomationTestInstance__)
  ;
  return;
}

// `dynamic_initializer_for_'ImportedMaterialSlotName'' @ 140f4fef0

void __cdecl
MeshAttribute_::PolygonGroup::_dynamic_initializer_for__ImportedMaterialSlotName__(void)

{
  ::FName::FName(&ImportedMaterialSlotName,"ImportedMaterialSlotName");
  return;
}

// `dynamic_initializer_for_'IsHard'' @ 140f4ff10

void __cdecl MeshAttribute_::Edge::_dynamic_initializer_for__IsHard__(void)

{
  ::FName::FName(&IsHard,"IsHard");
  return;
}

// `dynamic_initializer_for_'IsUVSeam'' @ 140f4ff30

void __cdecl MeshAttribute_::Edge::_dynamic_initializer_for__IsUVSeam__(void)

{
  ::FName::FName(&IsUVSeam,"IsUVSeam");
  return;
}

// `dynamic_initializer_for_'LogMeshDescription'' @ 140f4ff50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMeshDescription__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMeshDescription,L"LogMeshDescription",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMeshDescription__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMeshDescription'' @ 140f4ff90

void __cdecl _dynamic_initializer_for__ModuleRegistrantMeshDescription__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MeshDescription";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MeshDescription",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMeshDescriptionModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Normal'' @ 140f4ffe0

void __cdecl MeshAttribute_::Polygon::_dynamic_initializer_for__Normal__(void)

{
  ::FName::FName(&Normal,"Normal");
  return;
}

// `dynamic_initializer_for_'Normal'' @ 140f50000

void __cdecl MeshAttribute_::VertexInstance::_dynamic_initializer_for__Normal__(void)

{
  ::FName::FName(&Normal,"Normal");
  return;
}

// `dynamic_initializer_for_'PolygonGroupIndex'' @ 140f50020

void __cdecl MeshAttribute::Polygon::_dynamic_initializer_for__PolygonGroupIndex__(void)

{
  ::FName::FName(&PolygonGroupIndex,"PolygonGroupIndex");
  return;
}

// `dynamic_initializer_for_'PolygonGroupIndex'' @ 140f50040

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__PolygonGroupIndex__(void)

{
  ::FName::FName(&PolygonGroupIndex,"PolygonGroupIndex");
  return;
}

// `dynamic_initializer_for_'PolygonIndex'' @ 140f50060

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__PolygonIndex__(void)

{
  ::FName::FName(&PolygonIndex,"PolygonIndex");
  return;
}

// `dynamic_initializer_for_'Position'' @ 140f50080

void __cdecl MeshAttribute::Vertex::_dynamic_initializer_for__Position__(void)

{
  ::FName::FName(&Position,"Position ");
  return;
}

// `dynamic_initializer_for_'Tangent'' @ 140f500a0

void __cdecl MeshAttribute_::Polygon::_dynamic_initializer_for__Tangent__(void)

{
  ::FName::FName(&Tangent,"Tangent");
  return;
}

// `dynamic_initializer_for_'Tangent'' @ 140f500c0

void __cdecl MeshAttribute_::VertexInstance::_dynamic_initializer_for__Tangent__(void)

{
  ::FName::FName(&Tangent,"Tangent");
  return;
}

// `dynamic_initializer_for_'TextureCoordinate'' @ 140f500e0

void __cdecl MeshAttribute_::VertexInstance::_dynamic_initializer_for__TextureCoordinate__(void)

{
  ::FName::FName(&TextureCoordinate,"TextureCoordinate");
  return;
}

// `dynamic_initializer_for_'UVCoordinate'' @ 140f50100

void __cdecl MeshAttribute::UV::_dynamic_initializer_for__UVCoordinate__(void)

{
  ::FName::FName(&UVCoordinate,"UVCoordinate");
  return;
}

// `dynamic_initializer_for_'UVIndex'' @ 140f50120

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__UVIndex__(void)

{
  ::FName::FName(&UVIndex,"UVIndex");
  return;
}

// `dynamic_initializer_for_'VertexIndex'' @ 140f50140

void __cdecl MeshAttribute::Edge::_dynamic_initializer_for__VertexIndex__(void)

{
  ::FName::FName(&VertexIndex,"VertexIndex");
  return;
}

// `dynamic_initializer_for_'VertexIndex'' @ 140f50160

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__VertexIndex__(void)

{
  ::FName::FName(&VertexIndex,"VertexIndex");
  return;
}

// `dynamic_initializer_for_'VertexIndex'' @ 140f50180

void __cdecl MeshAttribute::VertexInstance::_dynamic_initializer_for__VertexIndex__(void)

{
  ::FName::FName(&VertexIndex,"VertexIndex");
  return;
}

// `dynamic_initializer_for_'VertexInstanceIndex'' @ 140f501a0

void __cdecl MeshAttribute::Triangle::_dynamic_initializer_for__VertexInstanceIndex__(void)

{
  ::FName::FName(&VertexInstanceIndex,"VertexInstanceIndex");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h__Script_MeshDescription_2728862410'' @ 140f501c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h__Script_MeshDescription_2728862410__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshDescription",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h__Script_MeshDescription_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h__Script_MeshDescription_768990106'' @ 140f50200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h__Script_MeshDescription_768990106__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshDescription",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBase_h__Script_MeshDescription_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h__Script_MeshDescription_724389602'' @ 140f50240

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h__Script_MeshDescription_724389602__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshDescription",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h__Script_MeshDescription_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshTypes_h__Script_MeshDescription_3514269436'' @ 140f50290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshTypes_h__Script_MeshDescription_3514269436__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MeshDescription",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshTypes_h__Script_MeshDescription_Statics
             ::ScriptStructInfo,8,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MeshDescription'' @ 140f502d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MeshDescription__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x6a02665b;
  local_res8[0].DeclarationsHash = 0x7f36cfd6;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MeshDescription,L"/Script/MeshDescription",
             &Z_Registration_Info_UPackage__Script_MeshDescription,local_res8);
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup @ 143631360

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonPolygonGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances @ 1436313d0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_SetPolygonVertexInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition @ 143631440

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_SetVertexPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMeshDescriptionBase @ 143631530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshDescriptionBase(void)

{
  if (Z_Registration_Info_UClass_UMeshDescriptionBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshDescriptionBase.OuterSingleton,
               &Z_Construct_UClass_UMeshDescriptionBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FEdgeID @ 143631570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEdgeID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEdgeID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEdgeID.InnerSingleton,
               &Z_Construct_UScriptStruct_FEdgeID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEdgeID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEdgeID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPolygonGroupID @ 1436315f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPolygonGroupID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPolygonGroupID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPolygonGroupID.InnerSingleton,
               &Z_Construct_UScriptStruct_FPolygonGroupID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPolygonGroupID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPolygonGroupID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPolygonID @ 143631670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPolygonID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPolygonID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPolygonID.InnerSingleton,
               &Z_Construct_UScriptStruct_FPolygonID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPolygonID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPolygonID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTriangleID @ 1436316f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTriangleID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTriangleID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTriangleID.InnerSingleton,
               &Z_Construct_UScriptStruct_FTriangleID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTriangleID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTriangleID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVertexID @ 143631770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVertexID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVertexID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVertexID.InnerSingleton,
               &Z_Construct_UScriptStruct_FVertexID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVertexID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVertexID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVertexInstanceID @ 1436317f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVertexInstanceID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVertexInstanceID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVertexInstanceID.InnerSingleton,
               &Z_Construct_UScriptStruct_FVertexInstanceID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVertexInstanceID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVertexInstanceID.InnerSingleton;
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

// Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation @ 143631870

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_ComputePolygonTriangulation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge @ 1436318b0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreateEdge_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID @ 1436318f0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreateEdgeWithID_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon @ 143631930

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygon_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup @ 143631970

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroup_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EComputeNTBsOptions_StaticEnum @ 1436319b0

UEnum * __cdecl EComputeNTBsOptions_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshDescription();
    Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions,(UObject *)pUVar1,
                       L"EComputeNTBsOptions");
  }
  return Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID @ 1436319f0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonGroupWithID_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID @ 143631a30

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreatePolygonWithID_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle @ 143631a70

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID @ 143631ab0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreateTriangleWithID_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex @ 143631af0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance @ 143631b30

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstance_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID @ 143631b70

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexInstanceWithID_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID @ 143631bb0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_CreateVertexWithID_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge @ 143631bf0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_DeleteEdge_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon @ 143631c30

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygon_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup @ 143631c70

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_DeletePolygonGroup_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle @ 143631cb0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_DeleteTriangle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex @ 143631cf0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance @ 143631d30

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_DeleteVertexInstance_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_Empty @ 143631d70

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_Empty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMeshDescriptionBase_Empty_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons @ 143631db0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedPolygons_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles @ 143631df0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeConnectedTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount @ 143631e30

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex @ 143631e70

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices @ 143631f60

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetEdgeVertices_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons @ 143631fa0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMeshDescriptionBaseBulkData @ 143631fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshDescriptionBaseBulkData(void)

{
  if (Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.OuterSingleton,
               &Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.OuterSingleton;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles @ 143632020

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons @ 143632060

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonGroupPolygons_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges @ 1436320a0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonInternalEdges_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1436320e0

void * __thiscall
IMeshDescriptionModule::_scalar_deleting_destructor_(IMeshDescriptionModule *this,uint param_1)

{
  *this = (IMeshDescriptionModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143632140

void * __thiscall
FMeshDescriptionModule::_scalar_deleting_destructor_(FMeshDescriptionModule *this,uint param_1)

{
  *this = (FMeshDescriptionModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles @ 143632180

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices @ 1436321c0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumPolygonVertices_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges @ 143632200

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedEdges_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons @ 143632240

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedPolygons_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_MeshDescription @ 1436322b0

UPackage * __cdecl Z_Construct_UPackage__Script_MeshDescription(void)

{
  if (Z_Registration_Info_UPackage__Script_MeshDescription.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MeshDescription.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MeshDescription.OuterSingleton;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles @ 143632320

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexConnectedTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons @ 143632370

UFunction * __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles @ 1436323b0

UFunction * __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances @ 1436323f0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetNumVertexVertexInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons @ 143632430

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonAdjacentPolygons_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount @ 143632470

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount @ 1436324b0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupCount_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons @ 1436324f0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonGroupPolygons_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges @ 143632530

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonInternalEdges_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges @ 143632570

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPerimeterEdges_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup @ 1436325b0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonPolygonGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles @ 1436325f0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonTriangles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances @ 143632630

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertexInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices @ 143632670

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetPolygonVertices_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles @ 1436326b0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleAdjacentTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount @ 143632760

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges @ 143632810

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleEdges_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon @ 1436328a0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygon_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup @ 1436329a0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetTrianglePolygonGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance @ 143632a60

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FElementID @ 143632aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FElementID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FElementID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FElementID.InnerSingleton,
               &Z_Construct_UScriptStruct_FElementID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FElementID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FElementID.InnerSingleton;
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

// Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances @ 143632b20

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertexInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 143632b60

void * __cdecl Z_Construct_UScriptStruct_FElementID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FElementID,&UE::CoreUObject::Private::Construct<FElementID>,&UE::CoreUObject::Private::ConstructForTests<FElementID>,&UE::CoreUObject::Private::Destruct<FElementID>,&UE::CoreUObject::Private::Copy<FElementID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices @ 143632bd0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetTriangleVertices_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices @ 143632c40

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexAdjacentVertices_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 143632c90

void * __cdecl Z_Construct_UScriptStruct_FVertexID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVertexID,&UE::CoreUObject::Private::Construct<FVertexID>,&UE::CoreUObject::Private::ConstructForTests<FVertexID>,&UE::CoreUObject::Private::Destruct<FVertexID>,&UE::CoreUObject::Private::Copy<FVertexID>,&UE::CoreUObject::Private::GetStructTypeHash<FVertexID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges @ 143632cd0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedEdges_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons @ 143632d10

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedPolygons_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 143632d50

void * __cdecl Z_Construct_UScriptStruct_FVertexInstanceID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVertexInstanceID,&UE::CoreUObject::Private::Construct<FVertexInstanceID>,&UE::CoreUObject::Private::ConstructForTests<FVertexInstanceID>,&UE::CoreUObject::Private::Destruct<FVertexInstanceID>,&UE::CoreUObject::Private::Copy<FVertexInstanceID>,&UE::CoreUObject::Private::GetStructTypeHash<FVertexInstanceID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles @ 143632d90

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexConnectedTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount @ 143632dd0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 143632e10

void * __cdecl Z_Construct_UScriptStruct_FEdgeID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEdgeID,&UE::CoreUObject::Private::Construct<FEdgeID>,&UE::CoreUObject::Private::ConstructForTests<FEdgeID>,&UE::CoreUObject::Private::Destruct<FEdgeID>,&UE::CoreUObject::Private::Copy<FEdgeID>,&UE::CoreUObject::Private::GetStructTypeHash<FEdgeID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons @ 143632e50

UFunction * __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles @ 143632eb0

UFunction * __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 143632f00

void * __cdecl Z_Construct_UScriptStruct_FUVID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUVID,&UE::CoreUObject::Private::Construct<FUVID>,&UE::CoreUObject::Private::ConstructForTests<FUVID>,&UE::CoreUObject::Private::Destruct<FUVID>,&UE::CoreUObject::Private::Copy<FUVID>,&UE::CoreUObject::Private::GetStructTypeHash<FUVID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount @ 143632f70

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceCount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex @ 143632fc0

UFunction * __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 143633000

void * __cdecl Z_Construct_UScriptStruct_FTriangleID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTriangleID,&UE::CoreUObject::Private::Construct<FTriangleID>,&UE::CoreUObject::Private::ConstructForTests<FTriangleID>,&UE::CoreUObject::Private::Destruct<FTriangleID>,&UE::CoreUObject::Private::Copy<FTriangleID>,&UE::CoreUObject::Private::GetStructTypeHash<FTriangleID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex @ 143633040

UFunction * __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge @ 143633080

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstancePairEdge_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1436330c0

void * __cdecl Z_Construct_UScriptStruct_FPolygonGroupID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPolygonGroupID,&UE::CoreUObject::Private::Construct<FPolygonGroupID>,&UE::CoreUObject::Private::ConstructForTests<FPolygonGroupID>,&UE::CoreUObject::Private::Destruct<FPolygonGroupID>,&UE::CoreUObject::Private::Copy<FPolygonGroupID>,&UE::CoreUObject::Private::GetStructTypeHash<FPolygonGroupID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex @ 143633100

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexInstanceVertex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge @ 143633140

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPairEdge_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 143633180

void * __cdecl Z_Construct_UScriptStruct_FPolygonID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPolygonID,&UE::CoreUObject::Private::Construct<FPolygonID>,&UE::CoreUObject::Private::ConstructForTests<FPolygonID>,&UE::CoreUObject::Private::Destruct<FPolygonID>,&UE::CoreUObject::Private::Copy<FPolygonID>,&UE::CoreUObject::Private::GetStructTypeHash<FPolygonID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition @ 1436331c0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexPosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances @ 143633230

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_GetVertexVertexInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1436332a0

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal @ 1436332b0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternal_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 143633300

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon @ 143633310

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeInternalToPolygon_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1436335a0

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// `scalar_deleting_destructor' @ 143633e50

void * __thiscall
FMeshElementArrayTestSerialization::_scalar_deleting_destructor_
          (FMeshElementArrayTestSerialization *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid @ 143633e90

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsEdgeValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 143633ed0

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty @ 143633ee0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsEmpty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 143633f20

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid @ 143633f30

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonGroupValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 143633f70

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid @ 143633fb0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsPolygonValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 143634020

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon @ 143634030

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsTrianglePartOfNgon_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 143634080

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid @ 143634090

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsTriangleValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1436340d0

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid @ 1436340e0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexInstanceValid_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 143634120

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned @ 143634130

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexOrphaned_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 143634170

void __cdecl
Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid @ 143634180

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_IsVertexValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges @ 1436341d0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewEdges_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups @ 143634260

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygonGroups_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons @ 1436342a0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewPolygons_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles @ 1436342f0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewTriangles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances @ 143634330

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertexInstances_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices @ 143634370

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_ReserveNewVertices_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing @ 1436343b0

UFunction * __cdecl Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMeshDescriptionBase_ReversePolygonFacing_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,`TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>'::__l1::<lambda_5_>_> @ 1436344a0

TStaticArray<int,256,4294967295> * __thiscall
TStaticArray<int,256,4294967295>::
TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
          (TStaticArray<int,256,4294967295> *this,EInPlace param_1,
          TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
          param_2,<lambda_5_> param_3)

{
  this->Elements[0] = *param_3.<Args_0>;
  this->Elements[1] = *param_3.<Args_0>;
  this->Elements[2] = *param_3.<Args_0>;
  this->Elements[3] = *param_3.<Args_0>;
  this->Elements[4] = *param_3.<Args_0>;
  this->Elements[5] = *param_3.<Args_0>;
  this->Elements[6] = *param_3.<Args_0>;
  this->Elements[7] = *param_3.<Args_0>;
  this->Elements[8] = *param_3.<Args_0>;
  this->Elements[9] = *param_3.<Args_0>;
  this->Elements[10] = *param_3.<Args_0>;
  this->Elements[0xb] = *param_3.<Args_0>;
  this->Elements[0xc] = *param_3.<Args_0>;
  this->Elements[0xd] = *param_3.<Args_0>;
  this->Elements[0xe] = *param_3.<Args_0>;
  this->Elements[0xf] = *param_3.<Args_0>;
  this->Elements[0x10] = *param_3.<Args_0>;
  this->Elements[0x11] = *param_3.<Args_0>;
  this->Elements[0x12] = *param_3.<Args_0>;
  this->Elements[0x13] = *param_3.<Args_0>;
  this->Elements[0x14] = *param_3.<Args_0>;
  this->Elements[0x15] = *param_3.<Args_0>;
  this->Elements[0x16] = *param_3.<Args_0>;
  this->Elements[0x17] = *param_3.<Args_0>;
  this->Elements[0x18] = *param_3.<Args_0>;
  this->Elements[0x19] = *param_3.<Args_0>;
  this->Elements[0x1a] = *param_3.<Args_0>;
  this->Elements[0x1b] = *param_3.<Args_0>;
  this->Elements[0x1c] = *param_3.<Args_0>;
  this->Elements[0x1d] = *param_3.<Args_0>;
  this->Elements[0x1e] = *param_3.<Args_0>;
  this->Elements[0x1f] = *param_3.<Args_0>;
  this->Elements[0x20] = *param_3.<Args_0>;
  this->Elements[0x21] = *param_3.<Args_0>;
  this->Elements[0x22] = *param_3.<Args_0>;
  this->Elements[0x23] = *param_3.<Args_0>;
  this->Elements[0x24] = *param_3.<Args_0>;
  this->Elements[0x25] = *param_3.<Args_0>;
  this->Elements[0x26] = *param_3.<Args_0>;
  this->Elements[0x27] = *param_3.<Args_0>;
  this->Elements[0x28] = *param_3.<Args_0>;
  this->Elements[0x29] = *param_3.<Args_0>;
  this->Elements[0x2a] = *param_3.<Args_0>;
  this->Elements[0x2b] = *param_3.<Args_0>;
  this->Elements[0x2c] = *param_3.<Args_0>;
  this->Elements[0x2d] = *param_3.<Args_0>;
  this->Elements[0x2e] = *param_3.<Args_0>;
  this->Elements[0x2f] = *param_3.<Args_0>;
  this->Elements[0x30] = *param_3.<Args_0>;
  this->Elements[0x31] = *param_3.<Args_0>;
  this->Elements[0x32] = *param_3.<Args_0>;
  this->Elements[0x33] = *param_3.<Args_0>;
  this->Elements[0x34] = *param_3.<Args_0>;
  this->Elements[0x35] = *param_3.<Args_0>;
  this->Elements[0x36] = *param_3.<Args_0>;
  this->Elements[0x37] = *param_3.<Args_0>;
  this->Elements[0x38] = *param_3.<Args_0>;
  this->Elements[0x39] = *param_3.<Args_0>;
  this->Elements[0x3a] = *param_3.<Args_0>;
  this->Elements[0x3b] = *param_3.<Args_0>;
  this->Elements[0x3c] = *param_3.<Args_0>;
  this->Elements[0x3d] = *param_3.<Args_0>;
  this->Elements[0x3e] = *param_3.<Args_0>;
  this->Elements[0x3f] = *param_3.<Args_0>;
  this->Elements[0x40] = *param_3.<Args_0>;
  this->Elements[0x41] = *param_3.<Args_0>;
  this->Elements[0x42] = *param_3.<Args_0>;
  this->Elements[0x43] = *param_3.<Args_0>;
  this->Elements[0x44] = *param_3.<Args_0>;
  this->Elements[0x45] = *param_3.<Args_0>;
  this->Elements[0x46] = *param_3.<Args_0>;
  this->Elements[0x47] = *param_3.<Args_0>;
  this->Elements[0x48] = *param_3.<Args_0>;
  this->Elements[0x49] = *param_3.<Args_0>;
  this->Elements[0x4a] = *param_3.<Args_0>;
  this->Elements[0x4b] = *param_3.<Args_0>;
  this->Elements[0x4c] = *param_3.<Args_0>;
  this->Elements[0x4d] = *param_3.<Args_0>;
  this->Elements[0x4e] = *param_3.<Args_0>;
  this->Elements[0x4f] = *param_3.<Args_0>;
  this->Elements[0x50] = *param_3.<Args_0>;
  this->Elements[0x51] = *param_3.<Args_0>;
  this->Elements[0x52] = *param_3.<Args_0>;
  this->Elements[0x53] = *param_3.<Args_0>;
  this->Elements[0x54] = *param_3.<Args_0>;
  this->Elements[0x55] = *param_3.<Args_0>;
  this->Elements[0x56] = *param_3.<Args_0>;
  this->Elements[0x57] = *param_3.<Args_0>;
  this->Elements[0x58] = *param_3.<Args_0>;
  this->Elements[0x59] = *param_3.<Args_0>;
  this->Elements[0x5a] = *param_3.<Args_0>;
  this->Elements[0x5b] = *param_3.<Args_0>;
  this->Elements[0x5c] = *param_3.<Args_0>;
  this->Elements[0x5d] = *param_3.<Args_0>;
  this->Elements[0x5e] = *param_3.<Args_0>;
  this->Elements[0x5f] = *param_3.<Args_0>;
  this->Elements[0x60] = *param_3.<Args_0>;
  this->Elements[0x61] = *param_3.<Args_0>;
  this->Elements[0x62] = *param_3.<Args_0>;
  this->Elements[99] = *param_3.<Args_0>;
  this->Elements[100] = *param_3.<Args_0>;
  this->Elements[0x65] = *param_3.<Args_0>;
  this->Elements[0x66] = *param_3.<Args_0>;
  this->Elements[0x67] = *param_3.<Args_0>;
  this->Elements[0x68] = *param_3.<Args_0>;
  this->Elements[0x69] = *param_3.<Args_0>;
  this->Elements[0x6a] = *param_3.<Args_0>;
  this->Elements[0x6b] = *param_3.<Args_0>;
  this->Elements[0x6c] = *param_3.<Args_0>;
  this->Elements[0x6d] = *param_3.<Args_0>;
  this->Elements[0x6e] = *param_3.<Args_0>;
  this->Elements[0x6f] = *param_3.<Args_0>;
  this->Elements[0x70] = *param_3.<Args_0>;
  this->Elements[0x71] = *param_3.<Args_0>;
  this->Elements[0x72] = *param_3.<Args_0>;
  this->Elements[0x73] = *param_3.<Args_0>;
  this->Elements[0x74] = *param_3.<Args_0>;
  this->Elements[0x75] = *param_3.<Args_0>;
  this->Elements[0x76] = *param_3.<Args_0>;
  this->Elements[0x77] = *param_3.<Args_0>;
  this->Elements[0x78] = *param_3.<Args_0>;
  this->Elements[0x79] = *param_3.<Args_0>;
  this->Elements[0x7a] = *param_3.<Args_0>;
  this->Elements[0x7b] = *param_3.<Args_0>;
  this->Elements[0x7c] = *param_3.<Args_0>;
  this->Elements[0x7d] = *param_3.<Args_0>;
  this->Elements[0x7e] = *param_3.<Args_0>;
  this->Elements[0x7f] = *param_3.<Args_0>;
  this->Elements[0x80] = *param_3.<Args_0>;
  this->Elements[0x81] = *param_3.<Args_0>;
  this->Elements[0x82] = *param_3.<Args_0>;
  this->Elements[0x83] = *param_3.<Args_0>;
  this->Elements[0x84] = *param_3.<Args_0>;
  this->Elements[0x85] = *param_3.<Args_0>;
  this->Elements[0x86] = *param_3.<Args_0>;
  this->Elements[0x87] = *param_3.<Args_0>;
  this->Elements[0x88] = *param_3.<Args_0>;
  this->Elements[0x89] = *param_3.<Args_0>;
  this->Elements[0x8a] = *param_3.<Args_0>;
  this->Elements[0x8b] = *param_3.<Args_0>;
  this->Elements[0x8c] = *param_3.<Args_0>;
  this->Elements[0x8d] = *param_3.<Args_0>;
  this->Elements[0x8e] = *param_3.<Args_0>;
  this->Elements[0x8f] = *param_3.<Args_0>;
  this->Elements[0x90] = *param_3.<Args_0>;
  this->Elements[0x91] = *param_3.<Args_0>;
  this->Elements[0x92] = *param_3.<Args_0>;
  this->Elements[0x93] = *param_3.<Args_0>;
  this->Elements[0x94] = *param_3.<Args_0>;
  this->Elements[0x95] = *param_3.<Args_0>;
  this->Elements[0x96] = *param_3.<Args_0>;
  this->Elements[0x97] = *param_3.<Args_0>;
  this->Elements[0x98] = *param_3.<Args_0>;
  this->Elements[0x99] = *param_3.<Args_0>;
  this->Elements[0x9a] = *param_3.<Args_0>;
  this->Elements[0x9b] = *param_3.<Args_0>;
  this->Elements[0x9c] = *param_3.<Args_0>;
  this->Elements[0x9d] = *param_3.<Args_0>;
  this->Elements[0x9e] = *param_3.<Args_0>;
  this->Elements[0x9f] = *param_3.<Args_0>;
  this->Elements[0xa0] = *param_3.<Args_0>;
  this->Elements[0xa1] = *param_3.<Args_0>;
  this->Elements[0xa2] = *param_3.<Args_0>;
  this->Elements[0xa3] = *param_3.<Args_0>;
  this->Elements[0xa4] = *param_3.<Args_0>;
  this->Elements[0xa5] = *param_3.<Args_0>;
  this->Elements[0xa6] = *param_3.<Args_0>;
  this->Elements[0xa7] = *param_3.<Args_0>;
  this->Elements[0xa8] = *param_3.<Args_0>;
  this->Elements[0xa9] = *param_3.<Args_0>;
  this->Elements[0xaa] = *param_3.<Args_0>;
  this->Elements[0xab] = *param_3.<Args_0>;
  this->Elements[0xac] = *param_3.<Args_0>;
  this->Elements[0xad] = *param_3.<Args_0>;
  this->Elements[0xae] = *param_3.<Args_0>;
  this->Elements[0xaf] = *param_3.<Args_0>;
  this->Elements[0xb0] = *param_3.<Args_0>;
  this->Elements[0xb1] = *param_3.<Args_0>;
  this->Elements[0xb2] = *param_3.<Args_0>;
  this->Elements[0xb3] = *param_3.<Args_0>;
  this->Elements[0xb4] = *param_3.<Args_0>;
  this->Elements[0xb5] = *param_3.<Args_0>;
  this->Elements[0xb6] = *param_3.<Args_0>;
  this->Elements[0xb7] = *param_3.<Args_0>;
  this->Elements[0xb8] = *param_3.<Args_0>;
  this->Elements[0xb9] = *param_3.<Args_0>;
  this->Elements[0xba] = *param_3.<Args_0>;
  this->Elements[0xbb] = *param_3.<Args_0>;
  this->Elements[0xbc] = *param_3.<Args_0>;
  this->Elements[0xbd] = *param_3.<Args_0>;
  this->Elements[0xbe] = *param_3.<Args_0>;
  this->Elements[0xbf] = *param_3.<Args_0>;
  this->Elements[0xc0] = *param_3.<Args_0>;
  this->Elements[0xc1] = *param_3.<Args_0>;
  this->Elements[0xc2] = *param_3.<Args_0>;
  this->Elements[0xc3] = *param_3.<Args_0>;
  this->Elements[0xc4] = *param_3.<Args_0>;
  this->Elements[0xc5] = *param_3.<Args_0>;
  this->Elements[0xc6] = *param_3.<Args_0>;
  this->Elements[199] = *param_3.<Args_0>;
  this->Elements[200] = *param_3.<Args_0>;
  this->Elements[0xc9] = *param_3.<Args_0>;
  this->Elements[0xca] = *param_3.<Args_0>;
  this->Elements[0xcb] = *param_3.<Args_0>;
  this->Elements[0xcc] = *param_3.<Args_0>;
  this->Elements[0xcd] = *param_3.<Args_0>;
  this->Elements[0xce] = *param_3.<Args_0>;
  this->Elements[0xcf] = *param_3.<Args_0>;
  this->Elements[0xd0] = *param_3.<Args_0>;
  this->Elements[0xd1] = *param_3.<Args_0>;
  this->Elements[0xd2] = *param_3.<Args_0>;
  this->Elements[0xd3] = *param_3.<Args_0>;
  this->Elements[0xd4] = *param_3.<Args_0>;
  this->Elements[0xd5] = *param_3.<Args_0>;
  this->Elements[0xd6] = *param_3.<Args_0>;
  this->Elements[0xd7] = *param_3.<Args_0>;
  this->Elements[0xd8] = *param_3.<Args_0>;
  this->Elements[0xd9] = *param_3.<Args_0>;
  this->Elements[0xda] = *param_3.<Args_0>;
  this->Elements[0xdb] = *param_3.<Args_0>;
  this->Elements[0xdc] = *param_3.<Args_0>;
  this->Elements[0xdd] = *param_3.<Args_0>;
  this->Elements[0xde] = *param_3.<Args_0>;
  this->Elements[0xdf] = *param_3.<Args_0>;
  this->Elements[0xe0] = *param_3.<Args_0>;
  this->Elements[0xe1] = *param_3.<Args_0>;
  this->Elements[0xe2] = *param_3.<Args_0>;
  this->Elements[0xe3] = *param_3.<Args_0>;
  this->Elements[0xe4] = *param_3.<Args_0>;
  this->Elements[0xe5] = *param_3.<Args_0>;
  this->Elements[0xe6] = *param_3.<Args_0>;
  this->Elements[0xe7] = *param_3.<Args_0>;
  this->Elements[0xe8] = *param_3.<Args_0>;
  this->Elements[0xe9] = *param_3.<Args_0>;
  this->Elements[0xea] = *param_3.<Args_0>;
  this->Elements[0xeb] = *param_3.<Args_0>;
  this->Elements[0xec] = *param_3.<Args_0>;
  this->Elements[0xed] = *param_3.<Args_0>;
  this->Elements[0xee] = *param_3.<Args_0>;
  this->Elements[0xef] = *param_3.<Args_0>;
  this->Elements[0xf0] = *param_3.<Args_0>;
  this->Elements[0xf1] = *param_3.<Args_0>;
  this->Elements[0xf2] = *param_3.<Args_0>;
  this->Elements[0xf3] = *param_3.<Args_0>;
  this->Elements[0xf4] = *param_3.<Args_0>;
  this->Elements[0xf5] = *param_3.<Args_0>;
  this->Elements[0xf6] = *param_3.<Args_0>;
  this->Elements[0xf7] = *param_3.<Args_0>;
  this->Elements[0xf8] = *param_3.<Args_0>;
  this->Elements[0xf9] = *param_3.<Args_0>;
  this->Elements[0xfa] = *param_3.<Args_0>;
  this->Elements[0xfb] = *param_3.<Args_0>;
  this->Elements[0xfc] = *param_3.<Args_0>;
  this->Elements[0xfd] = *param_3.<Args_0>;
  this->Elements[0xfe] = *param_3.<Args_0>;
  this->Elements[0xff] = *param_3.<Args_0>;
  return this;
}

// operator<<<int> @ 143635360

FArchive * __cdecl operator<<<int>(FArchive *param_1,TMeshAttributeArrayBase<int> *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 != 0x1f) {
      iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar2 < 4) {
        param_2->Extent = 1;
        goto LAB_1436353e7;
      }
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Extent);
    }
  }
  else {
    param_2->Extent = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
LAB_1436353e7:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 < 0x11) {
      TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_2->Container);
      return param_1;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::BulkSerialize(&param_2->Container,param_1,false);
  return param_1;
}

// operator<<<float> @ 143635440

FArchive * __cdecl operator<<<float>(FArchive *param_1,TMeshAttributeArrayBase<float> *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 != 0x1f) {
      iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar2 < 4) {
        param_2->Extent = 1;
        goto LAB_1436354c7;
      }
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Extent);
    }
  }
  else {
    param_2->Extent = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
LAB_1436354c7:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 < 0x11) {
      TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&param_2->Container)
      ;
      return param_1;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize(&param_2->Container,param_1,false);
  return param_1;
}

// operator<<<float,TSizedDefaultAllocator<32>_> @ 143635520

FArchive * __cdecl
operator<<<float,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TTransform<double>_> @ 143635530

FArchive * __cdecl
operator<<<UE::Math::TTransform<double>_>
          (FArchive *param_1,TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *param_2)

{
  uint *puVar1;
  int iVar2;
  FCustomVersionContainer *this;
  FCustomVersion *pFVar3;
  FGuid local_18;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 != 0x1f) {
      iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar2 < 4) {
        param_2->Extent = 1;
        goto LAB_1436355b7;
      }
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Extent);
    }
  }
  else {
    param_2->Extent = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
LAB_1436355b7:
  if ((param_1->field_0x28 & 1) != 0) {
    this = (FCustomVersionContainer *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    local_18 = FFortniteMainBranchObjectVersion::GUID;
    pFVar3 = FCustomVersionContainer::GetVersion(this,&local_18);
    if ((pFVar3 != (FCustomVersion *)0x0) && (pFVar3->Version < 0x85)) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::BulkSerialize
                (&param_2->Container,param_1,false);
      return param_1;
    }
  }
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Container);
  return param_1;
}

// operator<<<TTuple<FName,TMeshAttributeArraySet<int>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<int>,0>,FDefaultSetAllocator> @ 143635630

FArchive * __cdecl
operator<<<TTuple<FName,TMeshAttributeArraySet<int>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<int>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,TMeshAttributeArraySet<int>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<int>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364d23e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14364d23e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364d31b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14364d31b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x58 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x54) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 10) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,TMeshAttributeArraySet<float>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<float>,0>,FDefaultSetAllocator> @ 143635640

FArchive * __cdecl
operator<<<TTuple<FName,TMeshAttributeArraySet<float>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<float>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,TMeshAttributeArraySet<float>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<float>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364d4ee;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14364d4ee:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364d5cb;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14364d5cb:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x58 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x54) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 10) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// TVector2<float>_>,0>,FDefaultSetAllocator> @ 143635650

FArchive * __cdecl
operator<<<TTuple<FName,TMeshAttributeArraySet<UE::Math::
TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::
TVector2<float>_>_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::
  TVector2<float>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364d79e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14364d79e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364d87b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14364d87b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x58 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x54) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 10) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// TVector4<float>_>,0>,FDefaultSetAllocator> @ 143635660

FArchive * __cdecl
operator<<<TTuple<FName,TMeshAttributeArraySet<UE::Math::
TVector4<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::
TVector4<float>_>_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::
  TVector4<float>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364da4e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14364da4e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364db2b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14364db2b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x70 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 100) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// TVector<float>_>,0>,FDefaultSetAllocator> @ 143635670

FArchive * __cdecl
operator<<<TTuple<FName,TMeshAttributeArraySet<UE::Math::
TVector<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::
TVector<float>_>_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::
  TVector<float>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364dcfe;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14364dcfe:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364dddb;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14364dddb:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x60 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x5c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 0xb) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,TMeshAttributeArraySet<FName>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<FName>,0>,FDefaultSetAllocator> @ 143635680

FArchive * __cdecl
operator<<<TTuple<FName,TMeshAttributeArraySet<FName>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<FName>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,TMeshAttributeArraySet<FName>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<FName>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364dfae;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14364dfae:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364e08b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14364e08b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x58 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x54) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 10) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,TMeshAttributeArraySet<bool>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<bool>,0>,FDefaultSetAllocator> @ 143635690

FArchive * __cdecl
operator<<<TTuple<FName,TMeshAttributeArraySet<bool>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<bool>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,TMeshAttributeArraySet<bool>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<bool>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364e25e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14364e25e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364e33b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14364e33b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x58 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x54) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 10) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator> @ 1436356a0

FArchive * __cdecl
operator<<<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364e50e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14364e50e:
  uVar12 = (ulonglong)uVar11;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar13;
      uVar9 = uVar7;
      while (uVar11 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364e5eb;
        uVar11 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_14364e5eb:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar8 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator> @ 1436356b0

FArchive * __cdecl
operator<<<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14364e7ce;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14364e7ce:
  uVar12 = (ulonglong)uVar11;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar13;
      uVar9 = uVar7;
      while (uVar11 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14364e8ab;
        uVar11 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_14364e8ab:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar8 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// TVector2<float>_> @ 1436356c0

FArchive * __cdecl
operator<<<UE::Math::TVector2<float>_>
          (FArchive *param_1,TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 != 0x1f) {
      iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar2 < 4) {
        param_2->Extent = 1;
        goto LAB_143635747;
      }
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Extent);
    }
  }
  else {
    param_2->Extent = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
LAB_143635747:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 < 0x11) {
      TArrayPrivateFriend::Serialize<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->Container);
      return param_1;
    }
  }
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
            (&param_2->Container,param_1,false);
  return param_1;
}

// TVector2<float>,TSizedDefaultAllocator<32>_> @ 1436357a0

FArchive * __cdecl
operator<<<UE::Math::TVector2<float>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 3,(longlong)param_2->ArrayMax << 3);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 3);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector4<float>_> @ 1436357b0

FArchive * __cdecl
operator<<<UE::Math::TVector4<float>_>
          (FArchive *param_1,TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 != 0x1f) {
      iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar2 < 4) {
        param_2->Extent = 1;
        goto LAB_143635837;
      }
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Extent);
    }
  }
  else {
    param_2->Extent = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
LAB_143635837:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 < 0x11) {
      TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->Container);
      return param_1;
    }
  }
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
            (&param_2->Container,param_1,false);
  return param_1;
}

// TVector<float>_> @ 143635890

FArchive * __cdecl
operator<<<UE::Math::TVector<float>_>
          (FArchive *param_1,TMeshAttributeArrayBase<UE::Math::TVector<float>_> *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 != 0x1f) {
      iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar2 < 4) {
        param_2->Extent = 1;
        goto LAB_143635917;
      }
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Extent);
    }
  }
  else {
    param_2->Extent = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
LAB_143635917:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 < 0x11) {
      TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->Container);
      return param_1;
    }
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
            (&param_2->Container,param_1,false);
  return param_1;
}

// TVector<float>,TSizedDefaultAllocator<32>_> @ 143635970

FArchive * __cdecl
operator<<<UE::Math::TVector<float>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 0xc,(longlong)param_2->ArrayMax * 0xc);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum * 0xc);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FChunk,TSizedDefaultAllocator<32>_> @ 143635980

FArchive * __cdecl
operator<<<TAttributeArrayContainer<int>::FChunk_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<int>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<int>::FChunk,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FChunk,TSizedDefaultAllocator<32>_> @ 143635990

FArchive * __cdecl
operator<<<TAttributeArrayContainer<float>::FChunk_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<float>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<float>::FChunk,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FChunk,TSizedDefaultAllocator<32>_> @ 1436359a0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<UE::Math::TTransform<double>_>::
FChunk_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
                        (pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FChunk,TSizedDefaultAllocator<32>_> @ 1436359b0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
                        (pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FChunk,TSizedDefaultAllocator<32>_> @ 1436359c0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
                        (pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FChunk,TSizedDefaultAllocator<32>_> @ 1436359d0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
                        (pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FChunk,TSizedDefaultAllocator<32>_> @ 1436359e0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<FName>::FChunk_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<FName>::FChunk,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FChunk,TSizedDefaultAllocator<32>_> @ 1436359f0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<bool>::FChunk_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<bool>::FChunk,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FEdgeID,TSizedDefaultAllocator<32>_> @ 143635a00

FArchive * __cdecl
operator<<<FEdgeID,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar14 = uVar12;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar13 = (uint)uVar12;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(undefined4 *)pFVar10 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              uVar14 = uVar14 + 4;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FEdgeID,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
              DefaultConstructItems<FEdgeID,int>(pFVar10,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(uint *)pFVar10 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_> @ 143635a10

FArchive * __cdecl
operator<<<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FMeshTriangle_Legacy *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FMeshTriangle_Legacy *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FMeshTriangle_Legacy *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FMeshTriangle_Legacy,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FPolygonID,TSizedDefaultAllocator<32>_> @ 143635a20

FArchive * __cdecl
operator<<<FPolygonID,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar14 = uVar12;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar13 = (uint)uVar12;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(undefined4 *)pFVar10 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              uVar14 = uVar14 + 4;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FPolygonID,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
              DefaultConstructItems<FPolygonID,int>(pFVar10,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(uint *)pFVar10 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FVertexInstanceID,TSizedDefaultAllocator<32>_> @ 143635a30

FArchive * __cdecl
operator<<<FVertexInstanceID,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar14 = uVar12;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar13 = (uint)uVar12;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(undefined4 *)pFVar10 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              uVar14 = uVar14 + 4;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
              DefaultConstructItems<FVertexInstanceID,int>(pFVar10,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(uint *)pFVar10 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 143635a40

FArchive * __cdecl
operator<<<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            TArrayPrivateFriend::Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar9 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>
                    (param_1,pTVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635a50

FArchive * __cdecl
operator<<<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TAttributeArrayContainer<int> *pTVar2;
  longlong *plVar3;
  ForElementType<TAttributeArrayContainer<int>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TAttributeArrayContainer<int>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TAttributeArrayContainer<int>_>)param_2;
      if (FVar4 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TAttributeArrayContainer<int>,int>
                ((TAttributeArrayContainer<int> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<int>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<(param_1,(TAttributeArrayContainer<int> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<int>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TAttributeArrayContainer<int> *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TAttributeArrayContainer<int>,int>(pTVar2,1);
              operator<<(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635a60

FArchive * __cdecl
operator<<<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TAttributeArrayContainer<float> *pTVar2;
  longlong *plVar3;
  ForElementType<TAttributeArrayContainer<float>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TAttributeArrayContainer<float>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TAttributeArrayContainer<float>_>)param_2;
      if (FVar4 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TAttributeArrayContainer<float>,int>
                ((TAttributeArrayContainer<float> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<float>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<(param_1,(TAttributeArrayContainer<float> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<float>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TAttributeArrayContainer<float> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TAttributeArrayContainer<float>,int>(pTVar2,1);
              operator<<(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635a70

FArchive * __cdecl
operator<<<TAttributeArrayContainer<UE::Math::
TTransform<double>_>_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<UE::Math::TTransform<double>_> *pTVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
                ((TAttributeArrayContainer<UE::Math::TTransform<double>_> *)FVar9,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                  (0x80,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
                      param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>
                           )0x0) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<UE::Math::TTransform<double>_> *)
                                   ((longlong)(int)uVar11 * 0x80 + (longlong)FVar9));
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                                  (0x1080,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
                      param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>
                           )0x0) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<UE::Math::TTransform<double>_> *)
                        ((longlong)iVar6 * 0x80 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
                        (pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635a80

FArchive * __cdecl
operator<<<TAttributeArrayContainer<UE::Math::
TVector2<float>_>_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<UE::Math::TVector2<float>_> *pTVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
                ((TAttributeArrayContainer<UE::Math::TVector2<float>_> *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)param_2
              ;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
                           0x0) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<UE::Math::TVector2<float>_> *)
                                   ((longlong)(int)uVar11 * 0x20 + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)param_2
              ;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
                           0x0) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<UE::Math::TVector2<float>_> *)
                        ((longlong)iVar6 * 0x20 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
                        (pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635a90

FArchive * __cdecl
operator<<<TAttributeArrayContainer<UE::Math::
TVector4<float>_>_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<UE::Math::TVector4<float>_> *pTVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
                ((TAttributeArrayContainer<UE::Math::TVector4<float>_> *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                  (0x30,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)param_2
              ;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
                           0x0) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<UE::Math::TVector4<float>_> *)
                                   ((longlong)(int)uVar11 * 0x30 + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                                  (0x1030,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)param_2
              ;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
                           0x0) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<UE::Math::TVector4<float>_> *)
                        ((longlong)iVar6 * 0x30 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
                        (pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635aa0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<UE::Math::
TVector<float>_>_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<UE::Math::TVector<float>_> *pTVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
                ((TAttributeArrayContainer<UE::Math::TVector<float>_> *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0
                 ) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<UE::Math::TVector<float>_> *)
                                   ((longlong)(int)uVar11 * 0x20 + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0
                 ) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<UE::Math::TVector<float>_> *)
                        ((longlong)iVar6 * 0x20 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
                        (pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635ab0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<FName>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<FName>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<FName> *pTVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<FName>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<FName>,int>
                ((TAttributeArrayContainer<FName> *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<FName>_>)param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
                FVar9 = FVar3;
              }
              operator<<(param_1,(TAttributeArrayContainer<FName> *)
                                 ((longlong)(int)uVar11 * 0x20 + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<FName>_>)param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<FName> *)
                        ((longlong)iVar6 * 0x20 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<FName>,int>(pTVar12,1);
              operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635ac0

FArchive * __cdecl
operator<<<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TAttributeArrayContainer<bool> *pTVar2;
  longlong *plVar3;
  ForElementType<TAttributeArrayContainer<bool>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TAttributeArrayContainer<bool>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TAttributeArrayContainer<bool>_>)param_2;
      if (FVar4 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TAttributeArrayContainer<bool>,int>
                ((TAttributeArrayContainer<bool> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<bool>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<(param_1,(TAttributeArrayContainer<bool> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<bool>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TAttributeArrayContainer<bool> *)((longlong)FVar10 + (longlong)iVar7 * 0x18)
              ;
              DefaultConstructItems<TAttributeArrayContainer<bool>,int>(pTVar2,1);
              operator<<(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635ad0

FArchive * __cdecl
operator<<<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<int> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<int>,int>
                ((TMeshAttributeArrayBase<int> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<<int>(param_1,(TMeshAttributeArrayBase<int> *)
                                      ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<int> *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<int>,int>(pTVar2,1);
              operator<<<int>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635ae0

FArchive * __cdecl
operator<<<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<float> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<float>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<float>,int>
                ((TMeshAttributeArrayBase<float> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<float>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<<float>(param_1,(TMeshAttributeArrayBase<float> *)
                                        ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<float>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<float> *)((longlong)FVar10 + (longlong)iVar7 * 0x18)
              ;
              DefaultConstructItems<TMeshAttributeArrayBase<float>,int>(pTVar2,1);
              operator<<<float>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635af0

FArchive * __cdecl
operator<<<TMeshAttributeArrayBase<UE::Math::
TTransform<double>_>_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)FVar10,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                       param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                           0x0) {
                FVar10 = FVar4;
              }
              operator<<<UE::Math::TTransform<double>_>
                        (param_1,(TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                       param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                           0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
                        (pTVar2,1);
              operator<<<UE::Math::TTransform<double>_>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635b00

FArchive * __cdecl
operator<<<TMeshAttributeArrayBase<UE::Math::
TVector2<float>_>_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)param_2
              ;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0
                 ) {
                FVar10 = FVar4;
              }
              operator<<<UE::Math::TVector2<float>_>
                        (param_1,(TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)param_2
              ;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0
                 ) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
                        (pTVar2,1);
              operator<<<UE::Math::TVector2<float>_>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635b10

FArchive * __cdecl
operator<<<TMeshAttributeArrayBase<UE::Math::
TVector4<float>_>_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)param_2
              ;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0
                 ) {
                FVar10 = FVar4;
              }
              operator<<<UE::Math::TVector4<float>_>
                        (param_1,(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)param_2
              ;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0
                 ) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
                        (pTVar2,1);
              operator<<<UE::Math::TVector4<float>_>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635b20

FArchive * __cdecl
operator<<<TMeshAttributeArrayBase<UE::Math::
TVector<float>_>_TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0)
              {
                FVar10 = FVar4;
              }
              operator<<<UE::Math::TVector<float>_>
                        (param_1,(TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0)
              {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
                        (pTVar2,1);
              operator<<<UE::Math::TVector<float>_>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635b30

FArchive * __cdecl
operator<<<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<FName> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<FName>,int>
                ((TMeshAttributeArrayBase<FName> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<<FName>(param_1,(TMeshAttributeArrayBase<FName> *)
                                        ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<FName> *)((longlong)FVar10 + (longlong)iVar7 * 0x18)
              ;
              DefaultConstructItems<TMeshAttributeArrayBase<FName>,int>(pTVar2,1);
              operator<<<FName>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143635b40

FArchive * __cdecl
operator<<<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<bool> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<bool>,int>
                ((TMeshAttributeArrayBase<bool> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<<bool>(param_1,(TMeshAttributeArrayBase<bool> *)
                                       ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<bool> *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<bool>,int>(pTVar2,1);
              operator<<<bool>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143635b50

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x58,(longlong)*(int *)&param_2->field_0xc * 0x58);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_143635e7c;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_143635e7c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x58 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        operator<<(param_1,(TMeshAttributeArraySet<int> *)(lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x58,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x58 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x58 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined ***)((longlong)local_78.Pointer + 8) = &___7__TMeshAttributeArraySet_H__6B_;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 4;
          *(undefined8 *)((longlong)local_78.Pointer + 0x14) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x1c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x44) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        operator<<(param_1,(TMeshAttributeArraySet<int> *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143635f00

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x58,(longlong)*(int *)&param_2->field_0xc * 0x58);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14363622c;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_14363622c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x58 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        operator<<(param_1,(TMeshAttributeArraySet<float> *)(lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x58,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x58 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x58 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined ***)((longlong)local_78.Pointer + 8) = &___7__TMeshAttributeArraySet_M__6B_;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 3;
          *(undefined8 *)((longlong)local_78.Pointer + 0x14) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x1c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x44) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        operator<<(param_1,(TMeshAttributeArraySet<float> *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1436362b0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::
TVector2<float>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x58,(longlong)*(int *)&param_2->field_0xc * 0x58);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1436365dc;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_1436365dc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x58 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        ::operator<<(param_1,(TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x58,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x58 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x58 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined ***)((longlong)local_78.Pointer + 8) =
               &___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 2;
          *(undefined8 *)((longlong)local_78.Pointer + 0x14) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x1c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x44) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        ::operator<<(param_1,(TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// TVector4<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143636660

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::
TVector4<float>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x70,(longlong)*(int *)&param_2->field_0xc * 0x70);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14363698c;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_14363698c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x70 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        ::operator<<(param_1,(TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)(lVar7 + 0x10));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x70,0x10,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x70 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x70 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<112,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<112,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined ***)((longlong)local_78.Pointer + 0x10) =
               &___7__TMeshAttributeArraySet_U__TVector4_M_Math_UE____6B_;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x1c) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x24) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x48) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x4c) = 1;
          *(undefined8 *)((longlong)local_78.Pointer + 0x54) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x5c) = 0x3f800000;
          *(undefined4 *)((longlong)local_78.Pointer + 0x60) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        ::operator<<(param_1,(TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)(puVar10 + 2));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143636a10

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::
TVector<float>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x60,(longlong)*(int *)&param_2->field_0xc * 0x60);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_143636d4c;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_143636d4c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x60 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        ::operator<<(param_1,(TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x60,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x60 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x60 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined ***)((longlong)local_78.Pointer + 8) =
               &___7__TMeshAttributeArraySet_U__TVector_M_Math_UE____6B_;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 1;
          *(undefined8 *)((longlong)local_78.Pointer + 0x14) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x1c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x44) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x58) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        ::operator<<(param_1,(TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143636dd0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x58,(longlong)*(int *)&param_2->field_0xc * 0x58);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1436370fc;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_1436370fc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x58 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        operator<<(param_1,(TMeshAttributeArraySet<FName> *)(lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x58,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x58 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x58 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined ***)((longlong)local_78.Pointer + 8) =
               &___7__TMeshAttributeArraySet_VFName____6B_;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 6;
          *(undefined8 *)((longlong)local_78.Pointer + 0x14) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x1c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x44) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x4c) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        operator<<(param_1,(TMeshAttributeArraySet<FName> *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143637180

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x58,(longlong)*(int *)&param_2->field_0xc * 0x58);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1436374ac;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_1436374ac:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x58 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        operator<<(param_1,(TMeshAttributeArraySet<bool> *)(lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x58,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x58 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x58 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined ***)((longlong)local_78.Pointer + 8) = &___7__TMeshAttributeArraySet__N__6B_;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 5;
          *(undefined8 *)((longlong)local_78.Pointer + 0x14) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x1c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x44) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        operator<<(param_1,(TMeshAttributeArraySet<bool> *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143637530

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x18,(longlong)*(int *)&param_2->field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14363783c;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_14363783c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = *(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x18;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        operator<<(param_1,(FAttributesSetEntry *)(lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x18);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        operator<<(param_1,(FAttributesSetEntry *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1436378c0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x18,(longlong)*(int *)&param_2->field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar7 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_143637bdc;
        uVar9 = puVar12[lVar8 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar7 < iStack_64) {
LAB_143637bdc:
        iStack_64 = iVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar7) {
      do {
        lVar8 = *(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x18;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar8);
        TArrayPrivateFriend::
        Serialize<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                  (param_1,*(TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                             **)(lVar8 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar6 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar13 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar7 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar7 * 0x18);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar7);
        pvVar5 = local_78.Pointer;
        puVar11 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          FMeshElementTypeWrapper::FMeshElementTypeWrapper
                    ((FMeshElementTypeWrapper *)((longlong)local_78.Pointer + 8),1);
          *(undefined4 *)((longlong)pvVar5 + 0x10) = 0xffffffff;
          puVar11 = pvVar5;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar11);
        TArrayPrivateFriend::
        Serialize<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                  (param_1,(TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                            *)puVar11[1]);
        uVar9 = (int)puVar13 + 1;
        puVar13 = (undefined8 *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143637c60

FArchive * __cdecl
operator<<<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<FMeshElementContainer> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<FMeshElementContainer> FVar9;
  uint uVar10;
  uint uVar11;
  FMeshElementContainer *pFVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<FMeshElementContainer>)param_2;
      if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<FMeshElementContainer,int>((FMeshElementContainer *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshElementContainer>_>
                  (0x80,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<FMeshElementContainer>)param_2;
              if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
                FVar9 = FVar3;
              }
              operator<<(param_1,(FMeshElementContainer *)
                                 ((longlong)(int)uVar11 * 0x80 + (longlong)FVar9));
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
          Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshElementContainer>_>
                                  (0x880,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<FMeshElementContainer>)param_2;
              if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
                FVar9 = FVar3;
              }
              pFVar12 = (FMeshElementContainer *)((longlong)iVar6 * 0x80 + (longlong)FVar9);
              DefaultConstructItems<FMeshElementContainer,int>(pFVar12,1);
              operator<<(param_1,pFVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FName> @ 143637c70

FArchive * __cdecl operator<<<FName>(FArchive *param_1,TMeshAttributeArrayBase<FName> *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar3 != 0x1f) {
      iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar3 < 4) {
        param_2->Extent = 1;
        goto LAB_143637cf7;
      }
    }
  }
  puVar1 = &param_2->Extent;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
LAB_143637cf7:
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&param_2->Container);
  return param_1;
}

// operator<<<bool> @ 143637d20

FArchive * __cdecl operator<<<bool>(FArchive *param_1,TMeshAttributeArrayBase<bool> *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 != 0x1f) {
      iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
      if (iVar2 < 4) {
        param_2->Extent = 1;
        goto LAB_143637da7;
      }
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Extent);
    }
  }
  else {
    param_2->Extent = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
LAB_143637da7:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
    if (iVar2 < 0x11) {
      TArrayPrivateFriend::Serialize<bool,TSizedDefaultAllocator<32>_>(param_1,&param_2->Container);
      return param_1;
    }
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::BulkSerialize(&param_2->Container,param_1,false);
  return param_1;
}

// operator<<<bool,TSizedDefaultAllocator<32>_> @ 143637e00

FArchive * __cdecl
operator<<<bool,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum,(longlong)*piVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1000001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ConstructItems<TAttributeArrayContainer<int>::FChunk,TAttributeArrayContainer<int>::FChunk,int> @ 143638640

void __cdecl
ConstructItems<TAttributeArrayContainer<int>::FChunk,TAttributeArrayContainer<int>::FChunk,int>
          (void *param_1,FChunk *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  TStaticArray<int,256,4294967295> *pTVar5;
  longlong lVar6;
  int *piVar7;
  TStaticArray<int,256,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    lVar9 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    pTVar8 = &param_2->StartIndex;
    do {
      *(undefined8 *)((longlong)pTVar8 + lVar9) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pTVar8 + lVar9);
      iVar2 = *(int *)((longlong)(pTVar8 + -1) + 0x3f8);
      _Src = *(void **)((longlong)(pTVar8 + -1) + 0x3f0);
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar7);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      lVar6 = 8;
      piVar4 = piVar7 + 1;
      pTVar5 = pTVar8;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      piVar4 = piVar7 + 0x101;
      pTVar5 = pTVar8 + 1;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      pTVar5 = pTVar8 + 2;
      piVar4 = piVar7 + 0x201;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
        piVar4 = piVar4 + 0x20;
      } while (lVar6 != 0);
      piVar4 = pTVar8[3].Elements;
      pTVar8 = (TStaticArray<int,256,4294967295> *)((longlong)(pTVar8 + 3) + 0x18);
      piVar7[0x301] = *piVar4;
      piVar7 = piVar7 + 0x306;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<float>::FChunk,TAttributeArrayContainer<float>::FChunk,int> @ 143638870

void __cdecl
ConstructItems<TAttributeArrayContainer<float>::FChunk,TAttributeArrayContainer<float>::FChunk,int>
          (void *param_1,FChunk *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  TStaticArray<int,256,4294967295> *pTVar5;
  longlong lVar6;
  int *piVar7;
  TStaticArray<int,256,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    lVar9 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    pTVar8 = &param_2->StartIndex;
    do {
      *(undefined8 *)((longlong)pTVar8 + lVar9) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pTVar8 + lVar9);
      iVar2 = *(int *)((longlong)(pTVar8 + -1) + 0x3f8);
      _Src = *(void **)((longlong)(pTVar8 + -1) + 0x3f0);
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar7);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      lVar6 = 8;
      piVar4 = piVar7 + 1;
      pTVar5 = pTVar8;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      piVar4 = piVar7 + 0x101;
      pTVar5 = pTVar8 + 1;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      pTVar5 = pTVar8 + 2;
      piVar4 = piVar7 + 0x201;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
        piVar4 = piVar4 + 0x20;
      } while (lVar6 != 0);
      piVar4 = pTVar8[3].Elements;
      pTVar8 = (TStaticArray<int,256,4294967295> *)((longlong)(pTVar8 + 3) + 0x18);
      piVar7[0x301] = *piVar4;
      piVar7 = piVar7 + 0x306;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int> @ 143638aa0

void __cdecl
ConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
          (void *param_1,FChunk *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  TStaticArray<int,256,4294967295> *pTVar5;
  longlong lVar6;
  int *piVar7;
  TStaticArray<int,256,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    lVar9 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    pTVar8 = &param_2->StartIndex;
    do {
      *(undefined8 *)((longlong)pTVar8 + lVar9) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pTVar8 + lVar9);
      iVar2 = *(int *)((longlong)(pTVar8 + -1) + 0x3f8);
      _Src = *(void **)((longlong)(pTVar8 + -1) + 0x3f0);
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar2,0,pFVar1,iVar2,piVar7);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x60);
      }
      lVar6 = 8;
      piVar4 = piVar7 + 1;
      pTVar5 = pTVar8;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      piVar4 = piVar7 + 0x101;
      pTVar5 = pTVar8 + 1;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      pTVar5 = pTVar8 + 2;
      piVar4 = piVar7 + 0x201;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
        piVar4 = piVar4 + 0x20;
      } while (lVar6 != 0);
      piVar4 = pTVar8[3].Elements;
      pTVar8 = (TStaticArray<int,256,4294967295> *)((longlong)(pTVar8 + 3) + 0x18);
      piVar7[0x301] = *piVar4;
      piVar7 = piVar7 + 0x306;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int> @ 143638cd0

void __cdecl
ConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
          (void *param_1,FChunk *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  TStaticArray<int,256,4294967295> *pTVar5;
  longlong lVar6;
  int *piVar7;
  TStaticArray<int,256,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    lVar9 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    pTVar8 = &param_2->StartIndex;
    do {
      *(undefined8 *)((longlong)pTVar8 + lVar9) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pTVar8 + lVar9);
      iVar2 = *(int *)((longlong)(pTVar8 + -1) + 0x3f8);
      _Src = *(void **)((longlong)(pTVar8 + -1) + 0x3f0);
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar1,iVar2,piVar7);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
      lVar6 = 8;
      piVar4 = piVar7 + 1;
      pTVar5 = pTVar8;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      piVar4 = piVar7 + 0x101;
      pTVar5 = pTVar8 + 1;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      pTVar5 = pTVar8 + 2;
      piVar4 = piVar7 + 0x201;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
        piVar4 = piVar4 + 0x20;
      } while (lVar6 != 0);
      piVar4 = pTVar8[3].Elements;
      pTVar8 = (TStaticArray<int,256,4294967295> *)((longlong)(pTVar8 + 3) + 0x18);
      piVar7[0x301] = *piVar4;
      piVar7 = piVar7 + 0x306;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int> @ 143638f00

void __cdecl
ConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
          (void *param_1,FChunk *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  TStaticArray<int,256,4294967295> *pTVar5;
  longlong lVar6;
  int *piVar7;
  TStaticArray<int,256,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    lVar9 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    pTVar8 = &param_2->StartIndex;
    do {
      *(undefined8 *)((longlong)pTVar8 + lVar9) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pTVar8 + lVar9);
      iVar2 = *(int *)((longlong)(pTVar8 + -1) + 0x3f8);
      _Src = *(void **)((longlong)(pTVar8 + -1) + 0x3f0);
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,iVar2,0,pFVar1,iVar2,piVar7);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 4);
      }
      lVar6 = 8;
      piVar4 = piVar7 + 1;
      pTVar5 = pTVar8;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      piVar4 = piVar7 + 0x101;
      pTVar5 = pTVar8 + 1;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      pTVar5 = pTVar8 + 2;
      piVar4 = piVar7 + 0x201;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
        piVar4 = piVar4 + 0x20;
      } while (lVar6 != 0);
      piVar4 = pTVar8[3].Elements;
      pTVar8 = (TStaticArray<int,256,4294967295> *)((longlong)(pTVar8 + 3) + 0x18);
      piVar7[0x301] = *piVar4;
      piVar7 = piVar7 + 0x306;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int> @ 143639130

void __cdecl
ConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
          (void *param_1,FChunk *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  TStaticArray<int,256,4294967295> *pTVar5;
  longlong lVar6;
  int *piVar7;
  TStaticArray<int,256,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    lVar9 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    pTVar8 = &param_2->StartIndex;
    do {
      *(undefined8 *)((longlong)pTVar8 + lVar9) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pTVar8 + lVar9);
      iVar2 = *(int *)((longlong)(pTVar8 + -1) + 0x3f8);
      _Src = *(void **)((longlong)(pTVar8 + -1) + 0x3f0);
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,pFVar1,iVar2,piVar7);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0xc);
      }
      lVar6 = 8;
      piVar4 = piVar7 + 1;
      pTVar5 = pTVar8;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      piVar4 = piVar7 + 0x101;
      pTVar5 = pTVar8 + 1;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      pTVar5 = pTVar8 + 2;
      piVar4 = piVar7 + 0x201;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
        piVar4 = piVar4 + 0x20;
      } while (lVar6 != 0);
      piVar4 = pTVar8[3].Elements;
      pTVar8 = (TStaticArray<int,256,4294967295> *)((longlong)(pTVar8 + 3) + 0x18);
      piVar7[0x301] = *piVar4;
      piVar7 = piVar7 + 0x306;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<FName>::FChunk,TAttributeArrayContainer<FName>::FChunk,int> @ 143639360

void __cdecl
ConstructItems<TAttributeArrayContainer<FName>::FChunk,TAttributeArrayContainer<FName>::FChunk,int>
          (void *param_1,FChunk *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  TStaticArray<int,256,4294967295> *pTVar5;
  longlong lVar6;
  int *piVar7;
  TStaticArray<int,256,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    lVar9 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    pTVar8 = &param_2->StartIndex;
    do {
      *(undefined8 *)((longlong)pTVar8 + lVar9) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pTVar8 + lVar9);
      iVar2 = *(int *)((longlong)(pTVar8 + -1) + 0x3f8);
      _Src = *(void **)((longlong)(pTVar8 + -1) + 0x3f0);
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar1,iVar2,piVar7);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
      lVar6 = 8;
      piVar4 = piVar7 + 1;
      pTVar5 = pTVar8;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      piVar4 = piVar7 + 0x101;
      pTVar5 = pTVar8 + 1;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      pTVar5 = pTVar8 + 2;
      piVar4 = piVar7 + 0x201;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
        piVar4 = piVar4 + 0x20;
      } while (lVar6 != 0);
      piVar4 = pTVar8[3].Elements;
      pTVar8 = (TStaticArray<int,256,4294967295> *)((longlong)(pTVar8 + 3) + 0x18);
      piVar7[0x301] = *piVar4;
      piVar7 = piVar7 + 0x306;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<bool>::FChunk,TAttributeArrayContainer<bool>::FChunk,int> @ 143639590

void __cdecl
ConstructItems<TAttributeArrayContainer<bool>::FChunk,TAttributeArrayContainer<bool>::FChunk,int>
          (void *param_1,FChunk *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  TStaticArray<int,256,4294967295> *pTVar5;
  longlong lVar6;
  int *piVar7;
  TStaticArray<int,256,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0xc);
    lVar9 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    pTVar8 = &param_2->StartIndex;
    do {
      *(undefined8 *)((longlong)pTVar8 + lVar9) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pTVar8 + lVar9);
      iVar2 = *(int *)((longlong)(pTVar8 + -1) + 0x3f8);
      _Src = *(void **)((longlong)(pTVar8 + -1) + 0x3f0);
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,pFVar1,iVar2,piVar7);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2);
      }
      lVar6 = 8;
      piVar4 = piVar7 + 1;
      pTVar5 = pTVar8;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      piVar4 = piVar7 + 0x101;
      pTVar5 = pTVar8 + 1;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 0x20;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
      } while (lVar6 != 0);
      lVar6 = 8;
      pTVar5 = pTVar8 + 2;
      piVar4 = piVar7 + 0x201;
      do {
        uVar3 = *(undefined8 *)(pTVar5->Elements + 2);
        *(undefined8 *)piVar4 = *(undefined8 *)pTVar5->Elements;
        *(undefined8 *)(piVar4 + 2) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 6);
        *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(pTVar5->Elements + 4);
        *(undefined8 *)(piVar4 + 6) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 10);
        *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(pTVar5->Elements + 8);
        *(undefined8 *)(piVar4 + 10) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0xe);
        *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(pTVar5->Elements + 0xc);
        *(undefined8 *)(piVar4 + 0xe) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x12);
        *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(pTVar5->Elements + 0x10);
        *(undefined8 *)(piVar4 + 0x12) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x16);
        *(undefined8 *)(piVar4 + 0x14) = *(undefined8 *)(pTVar5->Elements + 0x14);
        *(undefined8 *)(piVar4 + 0x16) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1a);
        *(undefined8 *)(piVar4 + 0x18) = *(undefined8 *)(pTVar5->Elements + 0x18);
        *(undefined8 *)(piVar4 + 0x1a) = uVar3;
        uVar3 = *(undefined8 *)(pTVar5->Elements + 0x1e);
        *(undefined8 *)(piVar4 + 0x1c) = *(undefined8 *)(pTVar5->Elements + 0x1c);
        *(undefined8 *)(piVar4 + 0x1e) = uVar3;
        lVar6 = lVar6 + -1;
        pTVar5 = (TStaticArray<int,256,4294967295> *)(pTVar5->Elements + 0x20);
        piVar4 = piVar4 + 0x20;
      } while (lVar6 != 0);
      piVar4 = pTVar8[3].Elements;
      pTVar8 = (TStaticArray<int,256,4294967295> *)((longlong)(pTVar8 + 3) + 0x18);
      piVar7[0x301] = *piVar4;
      piVar7 = piVar7 + 0x306;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<int>,TAttributeArrayContainer<int>,int> @ 1436397b0

void __cdecl
ConstructItems<TAttributeArrayContainer<int>,TAttributeArrayContainer<int>,int>
          (void *param_1,TAttributeArrayContainer<int> *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChunk *pFVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    piVar6 = &param_2->NumElements;
    lVar7 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar6 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar6 + lVar7);
      iVar3 = piVar6[-2];
      pFVar4 = (FChunk *)
               (((TAttributeArrayContainer<int> *)(piVar6 + -4))->Chunks).AllocatorInstance.Data;
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,iVar3,0,pFVar2,iVar3,piVar5);
        ConstructItems<TAttributeArrayContainer<int>::FChunk,TAttributeArrayContainer<int>::FChunk,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar5[1] = *piVar6;
      piVar1 = piVar6 + 1;
      piVar6 = piVar6 + 6;
      piVar5[2] = *piVar1;
      piVar5 = piVar5 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<float>,TAttributeArrayContainer<float>,int> @ 1436398a0

void __cdecl
ConstructItems<TAttributeArrayContainer<float>,TAttributeArrayContainer<float>,int>
          (void *param_1,TAttributeArrayContainer<float> *param_2,int param_3)

{
  float *pfVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChunk *pFVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    piVar6 = &param_2->NumElements;
    lVar7 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar6 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar6 + lVar7);
      iVar3 = piVar6[-2];
      pFVar4 = (FChunk *)
               (((TAttributeArrayContainer<float> *)(piVar6 + -4))->Chunks).AllocatorInstance.Data;
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,iVar3,0,pFVar2,iVar3,piVar5);
        ConstructItems<TAttributeArrayContainer<float>::FChunk,TAttributeArrayContainer<float>::FChunk,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar5[1] = *piVar6;
      pfVar1 = (float *)(piVar6 + 1);
      piVar6 = piVar6 + 6;
      piVar5[2] = (int)*pfVar1;
      piVar5 = piVar5 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TAttributeArrayContainer<UE::Math::TTransform<double>_>,int> @ 143639990

void __cdecl
ConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
          (void *param_1,TAttributeArrayContainer<UE::Math::TTransform<double>_> *param_2,
          int param_3)

{
  __m128d *p_Var1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChunk *pFVar4;
  double dVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0xc);
    piVar8 = &param_2->NumElements;
    lVar7 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar8 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar8 + lVar7);
      iVar3 = piVar8[-2];
      pFVar4 = (FChunk *)
               (((TAttributeArrayContainer<UE::Math::TTransform<double>_> *)(piVar8 + -4))->Chunks).
               AllocatorInstance.Data;
      piVar6[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,iVar3,0,pFVar2,iVar3,piVar6);
        ConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar6[1] = *piVar8;
      dVar5 = *(double *)(piVar8 + 6);
      *(double *)(piVar6 + 5) = (((TTransform<double> *)(piVar8 + 4))->Rotation).XY.m128d_f64[0];
      *(double *)(piVar6 + 7) = dVar5;
      dVar5 = *(double *)(piVar8 + 10);
      *(double *)(piVar6 + 9) = ((__m128d *)(piVar8 + 8))->m128d_f64[0];
      *(double *)(piVar6 + 0xb) = dVar5;
      dVar5 = *(double *)(piVar8 + 0xe);
      *(double *)(piVar6 + 0xd) = (((VectorRegister4Double *)(piVar8 + 0xc))->XY).m128d_f64[0];
      *(double *)(piVar6 + 0xf) = dVar5;
      dVar5 = *(double *)(piVar8 + 0x12);
      *(double *)(piVar6 + 0x11) = ((__m128d *)(piVar8 + 0x10))->m128d_f64[0];
      *(double *)(piVar6 + 0x13) = dVar5;
      dVar5 = *(double *)(piVar8 + 0x16);
      *(double *)(piVar6 + 0x15) = (((VectorRegister4Double *)(piVar8 + 0x14))->XY).m128d_f64[0];
      *(double *)(piVar6 + 0x17) = dVar5;
      p_Var1 = (__m128d *)(piVar8 + 0x18);
      dVar5 = *(double *)(piVar8 + 0x1a);
      piVar8 = piVar8 + 0x20;
      *(double *)(piVar6 + 0x19) = p_Var1->m128d_f64[0];
      *(double *)(piVar6 + 0x1b) = dVar5;
      piVar6 = piVar6 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TAttributeArrayContainer<UE::Math::TVector2<float>_>,int> @ 143639ab0

void __cdecl
ConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
          (void *param_1,TAttributeArrayContainer<UE::Math::TVector2<float>_> *param_2,int param_3)

{
  TVector2<float>_u_0 *pTVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChunk *pFVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    piVar6 = &param_2->NumElements;
    lVar7 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar6 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar6 + lVar7);
      iVar3 = piVar6[-2];
      pFVar4 = (FChunk *)
               (((TAttributeArrayContainer<UE::Math::TVector2<float>_> *)(piVar6 + -4))->Chunks).
               AllocatorInstance.Data;
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,iVar3,0,pFVar2,iVar3,piVar5);
        ConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar5[1] = *piVar6;
      pTVar1 = (TVector2<float>_u_0 *)(piVar6 + 1);
      piVar6 = piVar6 + 8;
      *(TVector2<float>_u_0 *)(piVar5 + 2) = *pTVar1;
      piVar5 = piVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TAttributeArrayContainer<UE::Math::TVector4<float>_>,int> @ 143639ba0

void __cdecl
ConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
          (void *param_1,TAttributeArrayContainer<UE::Math::TVector4<float>_> *param_2,int param_3)

{
  TVector4<float> *pTVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChunk *pFVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0xc);
    piVar8 = &param_2->NumElements;
    lVar7 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar8 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar8 + lVar7);
      iVar3 = piVar8[-2];
      pFVar4 = (FChunk *)
               (((TAttributeArrayContainer<UE::Math::TVector4<float>_> *)(piVar8 + -4))->Chunks).
               AllocatorInstance.Data;
      piVar6[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,iVar3,0,pFVar2,iVar3,piVar6);
        ConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar6[1] = *piVar8;
      pTVar1 = (TVector4<float> *)(piVar8 + 4);
      uVar5 = *(undefined8 *)(piVar8 + 6);
      piVar8 = piVar8 + 0xc;
      *(undefined8 *)(piVar6 + 5) = *(undefined8 *)&pTVar1->field0_0x0;
      *(undefined8 *)(piVar6 + 7) = uVar5;
      piVar6 = piVar6 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,TAttributeArrayContainer<UE::Math::TVector<float>_>,int> @ 143639c90

void __cdecl
ConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
          (void *param_1,TAttributeArrayContainer<UE::Math::TVector<float>_> *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChunk *pFVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    piVar7 = &param_2->NumElements;
    lVar6 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar7 + lVar6) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar7 + lVar6);
      iVar3 = piVar7[-2];
      pFVar4 = (FChunk *)
               (((TAttributeArrayContainer<UE::Math::TVector<float>_> *)(piVar7 + -4))->Chunks).
               AllocatorInstance.Data;
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,iVar3,0,pFVar2,iVar3,piVar5);
        ConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar5[1] = *piVar7;
      *(undefined8 *)(piVar5 + 2) = *(undefined8 *)&((TVector<float> *)(piVar7 + 1))->field0_0x0;
      piVar1 = piVar7 + 3;
      piVar7 = piVar7 + 8;
      piVar5[4] = *piVar1;
      piVar5 = piVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<FName>,TAttributeArrayContainer<FName>,int> @ 143639d80

void __cdecl
ConstructItems<TAttributeArrayContainer<FName>,TAttributeArrayContainer<FName>,int>
          (void *param_1,TAttributeArrayContainer<FName> *param_2,int param_3)

{
  FName *pFVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChunk *pFVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    piVar6 = &param_2->NumElements;
    lVar7 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar6 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar6 + lVar7);
      iVar3 = piVar6[-2];
      pFVar4 = (FChunk *)
               (((TAttributeArrayContainer<FName> *)(piVar6 + -4))->Chunks).AllocatorInstance.Data;
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,iVar3,0,pFVar2,iVar3,piVar5);
        ConstructItems<TAttributeArrayContainer<FName>::FChunk,TAttributeArrayContainer<FName>::FChunk,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar5[1] = *piVar6;
      pFVar1 = (FName *)(piVar6 + 1);
      piVar6 = piVar6 + 8;
      *(FName *)(piVar5 + 2) = *pFVar1;
      piVar5 = piVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttributeArrayContainer<bool>,TAttributeArrayContainer<bool>,int> @ 143639e70

void __cdecl
ConstructItems<TAttributeArrayContainer<bool>,TAttributeArrayContainer<bool>,int>
          (void *param_1,TAttributeArrayContainer<bool> *param_2,int param_3)

{
  bool *pbVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FChunk *pFVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0xc);
    piVar6 = &param_2->NumElements;
    lVar7 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar6 + lVar7) = 0;
      pFVar2 = (ForAnyElementType *)((longlong)piVar6 + lVar7);
      iVar3 = piVar6[-2];
      pFVar4 = (FChunk *)
               (((TAttributeArrayContainer<bool> *)(piVar6 + -4))->Chunks).AllocatorInstance.Data;
      piVar5[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,iVar3,0,pFVar2,iVar3,piVar5);
        ConstructItems<TAttributeArrayContainer<bool>::FChunk,TAttributeArrayContainer<bool>::FChunk,int>
                  (pFVar2->Data,pFVar4,iVar3);
      }
      piVar5[1] = *piVar6;
      pbVar1 = (bool *)(piVar6 + 1);
      piVar6 = piVar6 + 6;
      *(bool *)(piVar5 + 2) = *pbVar1;
      piVar5 = piVar5 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMeshAttributeArrayBase<int>,TMeshAttributeArrayBase<int>,int> @ 143639f60

void __cdecl
ConstructItems<TMeshAttributeArrayBase<int>,TMeshAttributeArrayBase<int>,int>
          (void *param_1,TMeshAttributeArrayBase<int> *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Extent;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((TMeshAttributeArrayBase<int> *)(puVar4 + -4))->Container).AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1 << 2);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMeshAttributeArrayBase<float>,TMeshAttributeArrayBase<float>,int> @ 14363a030

void __cdecl
ConstructItems<TMeshAttributeArrayBase<float>,TMeshAttributeArrayBase<float>,int>
          (void *param_1,TMeshAttributeArrayBase<float> *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Extent;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((TMeshAttributeArrayBase<float> *)(puVar4 + -4))->Container).AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1 << 2);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int> @ 14363a100

void __cdecl
ConstructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
          (void *param_1,TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *param_2,int param_3
          )

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Extent;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)(puVar4 + -4))->Container).
             AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1 * 0x60);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int> @ 14363a1d0

void __cdecl
ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
          (void *param_1,TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Extent;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)(puVar4 + -4))->Container).
             AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1 << 3);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int> @ 14363a2a0

void __cdecl
ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
          (void *param_1,TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Extent;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)(puVar4 + -4))->Container).
             AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1 << 4);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int> @ 14363a370

void __cdecl
ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
          (void *param_1,TMeshAttributeArrayBase<UE::Math::TVector<float>_> *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Extent;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)(puVar4 + -4))->Container).
             AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1 * 0xc);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMeshAttributeArrayBase<FName>,TMeshAttributeArrayBase<FName>,int> @ 14363a440

void __cdecl
ConstructItems<TMeshAttributeArrayBase<FName>,TMeshAttributeArrayBase<FName>,int>
          (void *param_1,TMeshAttributeArrayBase<FName> *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Extent;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((TMeshAttributeArrayBase<FName> *)(puVar4 + -4))->Container).AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1 << 3);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TMeshAttributeArrayBase<bool>,TMeshAttributeArrayBase<bool>,int> @ 14363a510

void __cdecl
ConstructItems<TMeshAttributeArrayBase<bool>,TMeshAttributeArrayBase<bool>,int>
          (void *param_1,TMeshAttributeArrayBase<bool> *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Extent;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((TMeshAttributeArrayBase<bool> *)(puVar4 + -4))->Container).AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMeshElementContainer,FMeshElementContainer,int> @ 14363a5e0

void __cdecl
ConstructItems<FMeshElementContainer,FMeshElementContainer,int>
          (void *param_1,FMeshElementContainer *param_2,int param_3)

{
  ForElementType<FSetElementId> *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  ForElementType<FSetElementId> _Src;
  int *piVar5;
  ForElementType<FSetElementId> *pFVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x18);
    lVar7 = (longlong)param_1 + (-0x58 - (longlong)param_2);
    pFVar6 = (ForElementType<FSetElementId> *)&(param_2->Attributes).Map.field_0x38;
    do {
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      piVar5[0] = 0;
      piVar5[1] = 0;
      uVar4 = *(int *)pFVar6[-4].InlineData + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar4) {
        uVar3 = 0x80;
        if (0x80 < (int)uVar4) {
          uVar3 = uVar4;
        }
        piVar5[1] = uVar3;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(lVar7 + (longlong)pFVar6),0);
      }
      iVar2 = *(int *)pFVar6[-4].InlineData;
      *piVar5 = iVar2;
      if (iVar2 != 0) {
        _Src = pFVar6[-5].SecondaryData;
        if (_Src == (ForElementType<FSetElementId>)0x0) {
          _Src = (ForElementType<FSetElementId>)&pFVar6[-6].SecondaryData;
        }
        _Dst = *(void **)(piVar5 + -2);
        if (_Dst == (void *)0x0) {
          _Dst = (void *)(lVar7 + (longlong)pFVar6);
        }
        memcpy(_Dst,(void *)_Src,(ulonglong)(iVar2 + 0x1fU >> 5) << 2);
      }
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      piVar5[5] = 0;
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      piVar5[0xc] = 0;
      piVar5[0xd] = 0x80;
      piVar5[0xe] = -1;
      piVar5[0xf] = 0;
      piVar5[0x12] = 0;
      piVar5[0x13] = 0;
      piVar5[0x14] = 0;
      if ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(piVar5 + 2) !=
          (TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)&pFVar6[-4].SecondaryData) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(piVar5 + 0x10),piVar5 + 0x14,pFVar6,
                   *(int *)pFVar6[1].InlineData);
        TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(piVar5 + 2),
                    (TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&pFVar6[-4].SecondaryData);
      }
      piVar5[0x16] = *(int *)&pFVar6[1].SecondaryData;
      pFVar1 = pFVar6 + 2;
      pFVar6 = pFVar6 + 8;
      piVar5[0x18] = *(int *)pFVar1->InlineData;
      piVar5 = piVar5 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// Copy<TArrayView<FVertexID_const_,int>,TArray<FVertexID,TSizedDefaultAllocator<32>_>_> @ 14363a730

void __cdecl
Algo::Copy<TArrayView<FVertexID_const_,int>,TArray<FVertexID,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FVertexID_const_,int> *param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  FVertexID *pFVar1;
  FVertexID FVar2;
  FVertexID *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVertexID *pFVar7;
  
  pFVar7 = param_1->DataPtr;
  pFVar1 = pFVar7 + param_1->ArrayNum;
  while( true ) {
    if (pFVar7 == pFVar1) {
      return;
    }
    pFVar3 = (FVertexID *)(param_2->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar7) && (pFVar7 < pFVar3 + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar2 = *pFVar7;
    pFVar7 = pFVar7 + 1;
    *(FVertexID *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = FVar2;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Copy<TArrayView<FVertexInstanceID_const_,int>,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_> @ 14363a810

void __cdecl
Algo::
Copy<TArrayView<FVertexInstanceID_const_,int>,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FVertexInstanceID_const_,int> *param_1,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2)

{
  FVertexInstanceID *pFVar1;
  FVertexInstanceID FVar2;
  FVertexInstanceID *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVertexInstanceID *pFVar7;
  
  pFVar7 = param_1->DataPtr;
  pFVar1 = pFVar7 + param_1->ArrayNum;
  while( true ) {
    if (pFVar7 == pFVar1) {
      return;
    }
    pFVar3 = (FVertexInstanceID *)(param_2->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar7) && (pFVar7 < pFVar3 + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar2 = *pFVar7;
    pFVar7 = pFVar7 + 1;
    *(FVertexInstanceID *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = FVar2;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Copy<TArrayView<FEdgeID,int>,TArray<FEdgeID,TSizedDefaultAllocator<32>_>_> @ 14363a8f0

void __cdecl
Algo::Copy<TArrayView<FEdgeID,int>,TArray<FEdgeID,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FEdgeID,int> *param_1,TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  FEdgeID *pFVar1;
  FEdgeID FVar2;
  FEdgeID *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEdgeID *pFVar7;
  
  pFVar7 = param_1->DataPtr;
  pFVar1 = pFVar7 + param_1->ArrayNum;
  while( true ) {
    if (pFVar7 == pFVar1) {
      return;
    }
    pFVar3 = (FEdgeID *)(param_2->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar7) && (pFVar7 < pFVar3 + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar2 = *pFVar7;
    pFVar7 = pFVar7 + 1;
    *(FEdgeID *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = FVar2;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// DefaultConstructItems<UE::Math::TVector4<float>,int> @ 14363a9d0

void __cdecl DefaultConstructItems<UE::Math::TVector4<float>,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<int>::FChunk,int> @ 14363aa00

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<int>::FChunk,int>(void *param_1,int param_2)

{
  int *piVar1;
  int *this;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  if (param_2 != 0) {
    this = (int *)((longlong)param_1 + 0x410);
    local_res10[0] = 0;
    local_res8[0] = 0;
    local_res18[0] = 0;
    do {
      piVar1 = this + -0x101;
      this[-0x104] = 0;
      this[-0x103] = 0;
      *piVar1 = 0;
      this[-0x102] = 0;
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + -0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res10);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)this,InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res8);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + 0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res18);
      ((TStaticArray<int,256,4294967295> *)(this + 0x200))->Elements[0] = 0x100;
      if (*piVar1 < 0x100) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0x100,(ForAnyElementType *)(this + -0x104),this[-0x102],piVar1);
      }
      this = this + 0x306;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<float>::FChunk,int> @ 14363ab40

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<float>::FChunk,int>(void *param_1,int param_2)

{
  int *piVar1;
  int *this;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  if (param_2 != 0) {
    this = (int *)((longlong)param_1 + 0x410);
    local_res10[0] = 0;
    local_res8[0] = 0;
    local_res18[0] = 0;
    do {
      piVar1 = this + -0x101;
      this[-0x104] = 0;
      this[-0x103] = 0;
      *piVar1 = 0;
      this[-0x102] = 0;
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + -0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res10);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)this,InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res8);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + 0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res18);
      ((TStaticArray<int,256,4294967295> *)(this + 0x200))->Elements[0] = 0x100;
      if (*piVar1 < 0x100) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0x100,(ForAnyElementType *)(this + -0x104),this[-0x102],piVar1);
      }
      this = this + 0x306;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int> @ 14363ac80

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
          (void *param_1,int param_2)

{
  int *piVar1;
  int *this;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  if (param_2 != 0) {
    this = (int *)((longlong)param_1 + 0x410);
    local_res10[0] = 0;
    local_res8[0] = 0;
    local_res18[0] = 0;
    do {
      piVar1 = this + -0x101;
      this[-0x104] = 0;
      this[-0x103] = 0;
      *piVar1 = 0;
      this[-0x102] = 0;
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + -0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res10);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)this,InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res8);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + 0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res18);
      ((TStaticArray<int,256,4294967295> *)(this + 0x200))->Elements[0] = 0x100;
      if (*piVar1 < 0x100) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0x100,(ForAnyElementType *)(this + -0x104),this[-0x102],piVar1);
      }
      this = this + 0x306;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int> @ 14363adc0

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
          (void *param_1,int param_2)

{
  int *piVar1;
  int *this;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  if (param_2 != 0) {
    this = (int *)((longlong)param_1 + 0x410);
    local_res10[0] = 0;
    local_res8[0] = 0;
    local_res18[0] = 0;
    do {
      piVar1 = this + -0x101;
      this[-0x104] = 0;
      this[-0x103] = 0;
      *piVar1 = 0;
      this[-0x102] = 0;
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + -0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res10);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)this,InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res8);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + 0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res18);
      ((TStaticArray<int,256,4294967295> *)(this + 0x200))->Elements[0] = 0x100;
      if (*piVar1 < 0x100) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0x100,(ForAnyElementType *)(this + -0x104),this[-0x102],piVar1);
      }
      this = this + 0x306;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int> @ 14363af00

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
          (void *param_1,int param_2)

{
  int *piVar1;
  int *this;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  if (param_2 != 0) {
    this = (int *)((longlong)param_1 + 0x410);
    local_res10[0] = 0;
    local_res8[0] = 0;
    local_res18[0] = 0;
    do {
      piVar1 = this + -0x101;
      this[-0x104] = 0;
      this[-0x103] = 0;
      *piVar1 = 0;
      this[-0x102] = 0;
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + -0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res10);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)this,InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res8);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + 0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res18);
      ((TStaticArray<int,256,4294967295> *)(this + 0x200))->Elements[0] = 0x100;
      if (*piVar1 < 0x100) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,0x100,(ForAnyElementType *)(this + -0x104),this[-0x102],piVar1);
      }
      this = this + 0x306;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int> @ 14363b040

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
          (void *param_1,int param_2)

{
  int *piVar1;
  int *this;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  if (param_2 != 0) {
    this = (int *)((longlong)param_1 + 0x410);
    local_res10[0] = 0;
    local_res8[0] = 0;
    local_res18[0] = 0;
    do {
      piVar1 = this + -0x101;
      this[-0x104] = 0;
      this[-0x103] = 0;
      *piVar1 = 0;
      this[-0x102] = 0;
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + -0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res10);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)this,InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res8);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + 0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res18);
      ((TStaticArray<int,256,4294967295> *)(this + 0x200))->Elements[0] = 0x100;
      if (*piVar1 < 0x100) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0x100,(ForAnyElementType *)(this + -0x104),this[-0x102],piVar1);
      }
      this = this + 0x306;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<FName>::FChunk,int> @ 14363b180

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<FName>::FChunk,int>(void *param_1,int param_2)

{
  int *piVar1;
  int *this;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  if (param_2 != 0) {
    this = (int *)((longlong)param_1 + 0x410);
    local_res10[0] = 0;
    local_res8[0] = 0;
    local_res18[0] = 0;
    do {
      piVar1 = this + -0x101;
      this[-0x104] = 0;
      this[-0x103] = 0;
      *piVar1 = 0;
      this[-0x102] = 0;
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + -0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res10);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)this,InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res8);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + 0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res18);
      ((TStaticArray<int,256,4294967295> *)(this + 0x200))->Elements[0] = 0x100;
      if (*piVar1 < 0x100) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0x100,(ForAnyElementType *)(this + -0x104),this[-0x102],piVar1);
      }
      this = this + 0x306;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<bool>::FChunk,int> @ 14363b2c0

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<bool>::FChunk,int>(void *param_1,int param_2)

{
  int *piVar1;
  int *this;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  if (param_2 != 0) {
    this = (int *)((longlong)param_1 + 0x410);
    local_res10[0] = 0;
    local_res8[0] = 0;
    local_res18[0] = 0;
    do {
      piVar1 = this + -0x101;
      this[-0x104] = 0;
      this[-0x103] = 0;
      *piVar1 = 0;
      this[-0x102] = 0;
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + -0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res10);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)this,InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res8);
      TStaticArray<int,256,4294967295>::
      TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_5_>_>
                ((TStaticArray<int,256,4294967295> *)(this + 0x100),InPlace,
                 (TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
                  )0x0,(<lambda_5_>)local_res18);
      ((TStaticArray<int,256,4294967295> *)(this + 0x200))->Elements[0] = 0x100;
      if (*piVar1 < 0x100) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0x100,(ForAnyElementType *)(this + -0x104),this[-0x102],piVar1);
      }
      this = this + 0x306;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FEdgeID,int> @ 14363b400

void __cdecl DefaultConstructItems<FEdgeID,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<FMeshElementIndexer::FIndexPerChannel,int> @ 14363b420

void __cdecl
DefaultConstructItems<FMeshElementIndexer::FIndexPerChannel,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined4 *)(lVar1 + 0x2c) = 0;
      *(undefined4 *)(lVar1 + 0x30) = 0x80;
      *(undefined4 *)(lVar1 + 0x34) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined4 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 0x74) = 0;
      *(undefined4 *)(lVar1 + 0x7c) = 0;
      *(undefined4 *)(lVar1 + 0x80) = 0x80;
      *(undefined4 *)(lVar1 + 0x84) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x88) = 0;
      *(undefined8 *)(lVar1 + 0x94) = 0;
      *(undefined4 *)(lVar1 + 0x9c) = 0;
      lVar1 = lVar1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMeshTriangle_Legacy,int> @ 14363b4b0

void __cdecl DefaultConstructItems<FMeshTriangle_Legacy,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPolygonID,int> @ 14363b4e0

void __cdecl DefaultConstructItems<FPolygonID,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<FVertexInstanceID,int> @ 14363b500

void __cdecl DefaultConstructItems<FVertexInstanceID,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<int>,int> @ 14363b520

void __cdecl DefaultConstructItems<TAttributeArrayContainer<int>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<float>,int> @ 14363b550

void __cdecl DefaultConstructItems<TAttributeArrayContainer<float>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int> @ 14363b580

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
          (void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar4 + -0xc) = 0;
      *(undefined8 *)(lVar4 + -4) = 0;
      *(undefined4 *)(lVar4 + 4) = 0;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
      *(double *)(lVar4 + 0x14) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      *(double *)(lVar4 + 0x1c) = (double)fVar1;
      *(double *)(lVar4 + 0x24) = (double)fVar2;
      *(double *)(lVar4 + 0x2c) = (double)fVar3;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      *(double *)(lVar4 + 0x34) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      *(double *)(lVar4 + 0x3c) = (double)fVar1;
      *(double *)(lVar4 + 0x44) = (double)fVar2;
      *(double *)(lVar4 + 0x4c) = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      *(double *)(lVar4 + 0x54) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      *(double *)(lVar4 + 0x5c) = (double)fVar1;
      *(double *)(lVar4 + 100) = (double)fVar2;
      *(double *)(lVar4 + 0x6c) = (double)fVar3;
      param_2 = param_2 + -1;
      lVar4 = lVar4 + 0x80;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int> @ 14363b600

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 8) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int> @ 14363b640

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x3f800000;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int> @ 14363b680

void __cdecl
DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<FName>,int> @ 14363b6c0

void __cdecl DefaultConstructItems<TAttributeArrayContainer<FName>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAttributeArrayContainer<bool>,int> @ 14363b6f0

void __cdecl DefaultConstructItems<TAttributeArrayContainer<bool>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined1 *)(lVar1 + 8) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributeArrayBase<int>,int> @ 14363b720

void __cdecl DefaultConstructItems<TMeshAttributeArrayBase<int>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributeArrayBase<float>,int> @ 14363b750

void __cdecl DefaultConstructItems<TMeshAttributeArrayBase<float>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int> @ 14363b780

void __cdecl
DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int> @ 14363b7b0

void __cdecl
DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int> @ 14363b7e0

void __cdecl
DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int> @ 14363b810

void __cdecl
DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributeArrayBase<FName>,int> @ 14363b840

void __cdecl DefaultConstructItems<TMeshAttributeArrayBase<FName>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributeArrayBase<bool>,int> @ 14363b870

void __cdecl DefaultConstructItems<TMeshAttributeArrayBase<bool>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 1;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMeshElementContainer,int> @ 14363b8a0

void __cdecl DefaultConstructItems<FMeshElementContainer,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x18);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x80;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0x80;
      puVar1[0xe] = 0xffffffff;
      puVar1[0xf] = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1[0x14] = 0;
      puVar1[0x16] = 0;
      puVar1[0x18] = 0;
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FName,FAttributesSetEntry>,int> @ 14363e8a0

void __cdecl
DestructItems<TTuple<FName,FAttributesSetEntry>,int>
          (TTuple<FName,FAttributesSetEntry> *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x8;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TAttributeArrayContainer<int>::FChunk,int> @ 14363e8e0

void __cdecl DestructItems<TAttributeArrayContainer<int>::FChunk,int>(FChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<float>::FChunk,int> @ 14363e920

void __cdecl DestructItems<TAttributeArrayContainer<float>::FChunk,int>(FChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int> @ 14363e960

void __cdecl
DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
          (FChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int> @ 14363e9a0

void __cdecl
DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
          (FChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int> @ 14363e9e0

void __cdecl
DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
          (FChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int> @ 14363ea20

void __cdecl
DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
          (FChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<FName>::FChunk,int> @ 14363ea60

void __cdecl DestructItems<TAttributeArrayContainer<FName>::FChunk,int>(FChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<bool>::FChunk,int> @ 14363eaa0

void __cdecl DestructItems<TAttributeArrayContainer<bool>::FChunk,int>(FChunk *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMeshElementIndexer::FChunk,int> @ 14363eae0

void __cdecl DestructItems<FMeshElementIndexer::FChunk,int>(FChunk *param_1,int param_2)

{
  ForElementType<int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Count).AllocatorInstance.SecondaryData;
    do {
      if (pFVar1[3] != (ForElementType<int>)0x0) {
        FMemory::Free((void *)pFVar1[3]);
      }
      if (*pFVar1 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      if (pFVar1[-3] != (ForElementType<int>)0x0) {
        FMemory::Free((void *)pFVar1[-3]);
      }
      if (pFVar1[-6] != (ForElementType<int>)0x0) {
        FMemory::Free((void *)pFVar1[-6]);
      }
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMeshElementIndexer::FIndexPerChannel,int> @ 14363eb50

void __cdecl
DestructItems<FMeshElementIndexer::FIndexPerChannel,int>(FIndexPerChannel *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->StaleReferencerIndices).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      DestructItems<FMeshElementIndexer::FChunk,int>
                ((FChunk *)pFVar1[-0x14],*(int *)(pFVar1 + -0x13));
      if (pFVar1[-0x14] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-0x14]);
      }
      pFVar1 = pFVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,int> @ 14363ebf0

void __cdecl
DestructItems<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,int>
          (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<int>,int> @ 14363ec30

void __cdecl
DestructItems<TAttributeArrayContainer<int>,int>(TAttributeArrayContainer<int> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TAttributeArrayContainer<int>::FChunk,int>
              ((FChunk *)(param_1->Chunks).AllocatorInstance.Data,(param_1->Chunks).ArrayNum);
    pFVar1 = (param_1->Chunks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<float>,int> @ 14363ec80

void __cdecl
DestructItems<TAttributeArrayContainer<float>,int>
          (TAttributeArrayContainer<float> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TAttributeArrayContainer<float>::FChunk,int>
              ((FChunk *)(param_1->Chunks).AllocatorInstance.Data,(param_1->Chunks).ArrayNum);
    pFVar1 = (param_1->Chunks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int> @ 14363ecd0

void __cdecl
DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
          (TAttributeArrayContainer<UE::Math::TTransform<double>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
              ((FChunk *)(param_1->Chunks).AllocatorInstance.Data,(param_1->Chunks).ArrayNum);
    pFVar1 = (param_1->Chunks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int> @ 14363ed20

void __cdecl
DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
          (TAttributeArrayContainer<UE::Math::TVector2<float>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
              ((FChunk *)(param_1->Chunks).AllocatorInstance.Data,(param_1->Chunks).ArrayNum);
    pFVar1 = (param_1->Chunks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int> @ 14363ed70

void __cdecl
DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
          (TAttributeArrayContainer<UE::Math::TVector4<float>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
              ((FChunk *)(param_1->Chunks).AllocatorInstance.Data,(param_1->Chunks).ArrayNum);
    pFVar1 = (param_1->Chunks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int> @ 14363edc0

void __cdecl
DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
          (TAttributeArrayContainer<UE::Math::TVector<float>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
              ((FChunk *)(param_1->Chunks).AllocatorInstance.Data,(param_1->Chunks).ArrayNum);
    pFVar1 = (param_1->Chunks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<FName>,int> @ 14363ee10

void __cdecl
DestructItems<TAttributeArrayContainer<FName>,int>
          (TAttributeArrayContainer<FName> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
              ((FChunk *)(param_1->Chunks).AllocatorInstance.Data,(param_1->Chunks).ArrayNum);
    pFVar1 = (param_1->Chunks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAttributeArrayContainer<bool>,int> @ 14363ee60

void __cdecl
DestructItems<TAttributeArrayContainer<bool>,int>
          (TAttributeArrayContainer<bool> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
              ((FChunk *)(param_1->Chunks).AllocatorInstance.Data,(param_1->Chunks).ArrayNum);
    pFVar1 = (param_1->Chunks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMeshAttributeArrayBase<int>,int> @ 14363eeb0

void __cdecl
DestructItems<TMeshAttributeArrayBase<int>,int>(TMeshAttributeArrayBase<int> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Container).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMeshAttributeArrayBase<float>,int> @ 14363eef0

void __cdecl
DestructItems<TMeshAttributeArrayBase<float>,int>
          (TMeshAttributeArrayBase<float> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Container).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int> @ 14363ef30

void __cdecl
DestructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
          (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Container).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int> @ 14363ef70

void __cdecl
DestructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
          (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Container).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int> @ 14363efb0

void __cdecl
DestructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
          (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Container).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int> @ 14363eff0

void __cdecl
DestructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
          (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Container).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMeshAttributeArrayBase<FName>,int> @ 14363f030

void __cdecl
DestructItems<TMeshAttributeArrayBase<FName>,int>
          (TMeshAttributeArrayBase<FName> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Container).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TMeshAttributeArrayBase<bool>,int> @ 14363f070

void __cdecl
DestructItems<TMeshAttributeArrayBase<bool>,int>(TMeshAttributeArrayBase<bool> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Container).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMeshElementContainer,int> @ 14363f0b0

void __cdecl DestructItems<FMeshElementContainer,int>(FMeshElementContainer *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Attributes).Map.field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Dispatch<1> @ 14363f120

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __cdecl
CreateTypeImpl::Dispatch<1>(uint param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000000c;
  FMeshAttributeArraySetBase *pFVar2;
  int in_EDX;
  
  pFVar2 = (FMeshAttributeArraySetBase *)CONCAT44(in_register_0000000c,param_1);
  if (in_EDX == 0) {
    puVar1 = ::operator_new(0x58);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 1;
      *puVar1 = &___7__TMeshUnboundedAttributeArraySet_U__TVector_M_Math_UE____6B_;
      puVar1[2] = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 1;
      pFVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
  }
  else {
    puVar1 = ::operator_new(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 1;
      *puVar1 = &___7__TMeshAttributeArraySet_U__TVector_M_Math_UE____6B_;
      *(int *)((longlong)puVar1 + 0xc) = in_EDX;
      puVar1[2] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 1;
      pFVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
  }
  pFVar2->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pFVar2;
}

// Dispatch<2> @ 14363f1e0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __cdecl
CreateTypeImpl::Dispatch<2>(uint param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000000c;
  FMeshAttributeArraySetBase *pFVar2;
  int in_EDX;
  
  pFVar2 = (FMeshAttributeArraySetBase *)CONCAT44(in_register_0000000c,param_1);
  if (in_EDX == 0) {
    puVar1 = ::operator_new(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 2;
      *puVar1 = &___7__TMeshUnboundedAttributeArraySet_U__TVector2_M_Math_UE____6B_;
      puVar1[2] = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 1;
      pFVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
  }
  else {
    puVar1 = ::operator_new(0x48);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 2;
      *puVar1 = &___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
      *(int *)((longlong)puVar1 + 0xc) = in_EDX;
      puVar1[2] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 1;
      pFVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
  }
  pFVar2->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pFVar2;
}

// Dispatch<3> @ 14363f2a0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __cdecl
CreateTypeImpl::Dispatch<3>(uint param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000000c;
  FMeshAttributeArraySetBase *pFVar2;
  int in_EDX;
  undefined **ppuVar3;
  
  pFVar2 = (FMeshAttributeArraySetBase *)CONCAT44(in_register_0000000c,param_1);
  if (in_EDX == 0) {
    puVar1 = ::operator_new(0x48);
    if (puVar1 == (undefined8 *)0x0) goto LAB_14363f318;
    puVar1[1] = 3;
    ppuVar3 = &___7__TMeshUnboundedAttributeArraySet_M__6B_;
  }
  else {
    puVar1 = ::operator_new(0x48);
    if (puVar1 == (undefined8 *)0x0) {
LAB_14363f318:
      pFVar2->_padding_ = 0;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
    *(undefined4 *)(puVar1 + 1) = 3;
    ppuVar3 = &___7__TMeshAttributeArraySet_M__6B_;
    *(int *)((longlong)puVar1 + 0xc) = in_EDX;
  }
  puVar1[2] = 0;
  *puVar1 = ppuVar3;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 1;
  pFVar2->_padding_ = (longlong)puVar1;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pFVar2;
}

// Dispatch<4> @ 14363f340

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __cdecl
CreateTypeImpl::Dispatch<4>(uint param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000000c;
  FMeshAttributeArraySetBase *pFVar2;
  int in_EDX;
  undefined **ppuVar3;
  
  pFVar2 = (FMeshAttributeArraySetBase *)CONCAT44(in_register_0000000c,param_1);
  if (in_EDX == 0) {
    puVar1 = ::operator_new(0x48);
    if (puVar1 == (undefined8 *)0x0) goto LAB_14363f3b8;
    puVar1[1] = 4;
    ppuVar3 = &___7__TMeshUnboundedAttributeArraySet_H__6B_;
  }
  else {
    puVar1 = ::operator_new(0x48);
    if (puVar1 == (undefined8 *)0x0) {
LAB_14363f3b8:
      pFVar2->_padding_ = 0;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
    *(undefined4 *)(puVar1 + 1) = 4;
    ppuVar3 = &___7__TMeshAttributeArraySet_H__6B_;
    *(int *)((longlong)puVar1 + 0xc) = in_EDX;
  }
  puVar1[2] = 0;
  *puVar1 = ppuVar3;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 1;
  pFVar2->_padding_ = (longlong)puVar1;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pFVar2;
}

// Dispatch<5> @ 14363f3e0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __cdecl
CreateTypeImpl::Dispatch<5>(uint param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000000c;
  FMeshAttributeArraySetBase *pFVar2;
  int in_EDX;
  undefined **ppuVar3;
  
  pFVar2 = (FMeshAttributeArraySetBase *)CONCAT44(in_register_0000000c,param_1);
  if (in_EDX == 0) {
    puVar1 = ::operator_new(0x48);
    if (puVar1 == (undefined8 *)0x0) goto LAB_14363f458;
    puVar1[1] = 5;
    ppuVar3 = &___7__TMeshUnboundedAttributeArraySet__N__6B_;
  }
  else {
    puVar1 = ::operator_new(0x48);
    if (puVar1 == (undefined8 *)0x0) {
LAB_14363f458:
      pFVar2->_padding_ = 0;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
    *(undefined4 *)(puVar1 + 1) = 5;
    ppuVar3 = &___7__TMeshAttributeArraySet__N__6B_;
    *(int *)((longlong)puVar1 + 0xc) = in_EDX;
  }
  puVar1[2] = 0;
  *puVar1 = ppuVar3;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 1;
  pFVar2->_padding_ = (longlong)puVar1;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pFVar2;
}

// Dispatch<6> @ 14363f480

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __cdecl
CreateTypeImpl::Dispatch<6>(uint param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000000c;
  FMeshAttributeArraySetBase *pFVar2;
  int in_EDX;
  
  pFVar2 = (FMeshAttributeArraySetBase *)CONCAT44(in_register_0000000c,param_1);
  if (in_EDX == 0) {
    puVar1 = ::operator_new(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 6;
      *puVar1 = &___7__TMeshUnboundedAttributeArraySet_VFName____6B_;
      puVar1[2] = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x44) = 1;
      *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
      pFVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
  }
  else {
    puVar1 = ::operator_new(0x48);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 6;
      *puVar1 = &___7__TMeshAttributeArraySet_VFName____6B_;
      *(int *)((longlong)puVar1 + 0xc) = in_EDX;
      puVar1[2] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x3c) = 1;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
      pFVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
  }
  pFVar2->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pFVar2;
}

// Dispatch<7> @ 14363f550

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __cdecl
CreateTypeImpl::Dispatch<7>(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined4 in_register_0000000c;
  FMeshAttributeArraySetBase *pFVar6;
  int in_EDX;
  
  pFVar6 = (FMeshAttributeArraySetBase *)CONCAT44(in_register_0000000c,param_1);
  if (in_EDX == 0) {
    puVar5 = ::operator_new(0x120);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 7;
      *puVar5 = &___7__TMeshUnboundedAttributeArraySet_U__TTransform_N_Math_UE____6B_;
      puVar5[2] = 0;
      puVar5[0x14] = 0;
      *(undefined4 *)(puVar5 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xb4) = 1;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
      pFVar6->_padding_ = (longlong)puVar5;
      puVar5[0x18] = (double)fVar1;
      puVar5[0x19] = (double)fVar2;
      puVar5[0x1a] = (double)fVar3;
      puVar5[0x1b] = (double)fVar4;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      puVar5[0x1c] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      puVar5[0x1d] = (double)fVar1;
      puVar5[0x1e] = (double)fVar2;
      puVar5[0x1f] = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      puVar5[0x20] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      puVar5[0x21] = (double)fVar1;
      puVar5[0x22] = (double)fVar2;
      puVar5[0x23] = (double)fVar3;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar6;
    }
  }
  else {
    puVar5 = ::operator_new(0xa0);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 7;
      *puVar5 = &___7__TMeshAttributeArraySet_U__TTransform_N_Math_UE____6B_;
      *(int *)((longlong)puVar5 + 0xc) = in_EDX;
      puVar5[2] = 0;
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 7) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = 1;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
      pFVar6->_padding_ = (longlong)puVar5;
      puVar5[8] = (double)fVar1;
      puVar5[9] = (double)fVar2;
      puVar5[10] = (double)fVar3;
      puVar5[0xb] = (double)fVar4;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      puVar5[0xc] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      puVar5[0xd] = (double)fVar1;
      puVar5[0xe] = (double)fVar2;
      puVar5[0xf] = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      puVar5[0x10] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      puVar5[0x11] = (double)fVar1;
      puVar5[0x12] = (double)fVar2;
      puVar5[0x13] = (double)fVar3;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar6;
    }
  }
  pFVar6->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pFVar6;
}

// Dispatch<0> @ 14363f6d0

TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> __cdecl
CreateTypeImpl::Dispatch<0>(uint param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000000c;
  FMeshAttributeArraySetBase *pFVar2;
  int in_EDX;
  
  pFVar2 = (FMeshAttributeArraySetBase *)CONCAT44(in_register_0000000c,param_1);
  if (in_EDX == 0) {
    puVar1 = ::operator_new(0x80);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &___7__TMeshUnboundedAttributeArraySet_U__TVector4_M_Math_UE____6B_;
      puVar1[2] = 0;
      puVar1[10] = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + 100) = 1;
      puVar1[0xe] = 0;
      *(undefined4 *)(puVar1 + 0xf) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f800000;
      pFVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
  }
  else {
    puVar1 = ::operator_new(0x50);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &___7__TMeshAttributeArraySet_U__TVector4_M_Math_UE____6B_;
      *(int *)((longlong)puVar1 + 0xc) = in_EDX;
      puVar1[2] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x3c) = 1;
      *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
      pFVar2->_padding_ = (longlong)puVar1;
      return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pFVar2;
    }
  }
  pFVar2->_padding_ = 0;
  return (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pFVar2;
}

// Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,1> @ 14363f7b0

void __cdecl
ForEachImpl::Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,1>
          (FName param_1,FFixAttributesSizeHelper<FEdgeID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float fStack_24;
  float fStack_18;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x00014363f8be:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3,iVar6);
            pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                               (this,(int)uVar8);
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            if ((float)*(undefined8 *)&pTVar5->field0_0x0 != (float)uVar1) {
              return;
            }
            fStack_24 = (float)((ulonglong)*(undefined8 *)&pTVar5->field0_0x0 >> 0x20);
            if (fStack_24 != (float)uVar2) {
              return;
            }
            if ((pTVar5->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x00014363f8be;
  }
  return;
}

// Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,2> @ 14363f8d0

void __cdecl
ForEachImpl::Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,2>
          (FName param_1,FFixAttributesSizeHelper<FEdgeID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  TVector2<float>_u_0 *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x00014363f9d3:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3,iVar6);
            pTVar5 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                (this,(int)uVar8)->field0_0x0;
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            local_res18 = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).X;
            if (local_res18 != (float)uVar1) {
              return;
            }
            fStackX_1c = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).Y;
            if (fStackX_1c != (float)uVar2) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x00014363f9d3;
  }
  return;
}

// Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,3> @ 14363f9f0

void __cdecl
ForEachImpl::Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,3>
          (FName param_1,FFixAttributesSizeHelper<FEdgeID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<float> *this;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014363fad6:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<float>::GetArrayForChannel
                             ((TMeshAttributeArraySet<float> *)param_3,iVar4);
            pfVar3 = TMeshAttributeArrayBase<float>::GetElementBase(this,(int)uVar6);
            if ((float)param_3[2].NumElements != *pfVar3) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x00014363fad6;
  }
  return;
}

// Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,4> @ 14363faf0

void __cdecl
ForEachImpl::Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,4>
          (FName param_1,FFixAttributesSizeHelper<FEdgeID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<int> *this;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014363fbd3:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<int>::GetArrayForChannel
                             ((TMeshAttributeArraySet<int> *)param_3,iVar4);
            piVar3 = TMeshAttributeArrayBase<int>::GetElementBase(this,(int)uVar6);
            if (*piVar3 != param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x00014363fbd3;
  }
  return;
}

// Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,5> @ 14363fbf0

void __cdecl
ForEachImpl::Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,5>
          (FName param_1,FFixAttributesSizeHelper<FEdgeID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<bool> *this;
  bool *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014363fcd4:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<bool>::GetArrayForChannel
                             ((TMeshAttributeArraySet<bool> *)param_3,iVar4);
            pbVar3 = TMeshAttributeArrayBase<bool>::GetElementBase(this,(int)uVar6);
            if (*pbVar3 != (bool)(char)param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x00014363fcd4;
  }
  return;
}

// Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,6> @ 14363fcf0

void __cdecl
ForEachImpl::Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,6>
          (FName param_1,FFixAttributesSizeHelper<FEdgeID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<FName> *this;
  FName *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar3) {
      return;
    }
code_r0x00014363fdd9:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar7 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            FVar1.ComparisonIndex.Value = param_3[2].NumElements;
            FVar1.Number = param_3[2].Flags;
            this = TMeshAttributeArraySet<FName>::GetArrayForChannel
                             ((TMeshAttributeArraySet<FName> *)param_3,iVar7);
            pFVar4 = TMeshAttributeArrayBase<FName>::GetElementBase(this,(int)uVar6);
            if (*pFVar4 != FVar1) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3[2].Type);
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar3) goto code_r0x00014363fdd9;
  }
  return;
}

// Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,7> @ 14363fdf0

void __cdecl
ForEachImpl::Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,7>
          (FName param_1,FFixAttributesSizeHelper<FEdgeID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
  }
  else if (param_3->Extent == 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x180,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,0> @ 14363fe60

void __cdecl
ForEachImpl::Dispatch<FEdgeID,FFixAttributesSizeHelper<FEdgeID>,0>
          (FName param_1,FFixAttributesSizeHelper<FEdgeID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this;
  TVector4<float> *pTVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014363ff8b:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)param_3,iVar4);
            pTVar3 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                               (this,(int)uVar6);
            if ((pTVar3->field0_0x0)._s_0.X != (float)param_3[2].NumElements) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Y != (float)param_3[2].Flags) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.W != *(float *)((longlong)&param_3[3]._padding_ + 4)) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x00014363ff8b;
  }
  return;
}

// Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,1> @ 14363ffa0

void __cdecl
ForEachImpl::Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,1>
          (FName param_1,FFixAttributesSizeHelper<FPolygonGroupID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float fStack_24;
  float fStack_18;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x0001436400ae:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3,iVar6);
            pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                               (this,(int)uVar8);
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            if ((float)*(undefined8 *)&pTVar5->field0_0x0 != (float)uVar1) {
              return;
            }
            fStack_24 = (float)((ulonglong)*(undefined8 *)&pTVar5->field0_0x0 >> 0x20);
            if (fStack_24 != (float)uVar2) {
              return;
            }
            if ((pTVar5->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x0001436400ae;
  }
  return;
}

// Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,2> @ 1436400c0

void __cdecl
ForEachImpl::Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,2>
          (FName param_1,FFixAttributesSizeHelper<FPolygonGroupID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  TVector2<float>_u_0 *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x0001436401c3:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3,iVar6);
            pTVar5 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                (this,(int)uVar8)->field0_0x0;
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            local_res18 = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).X;
            if (local_res18 != (float)uVar1) {
              return;
            }
            fStackX_1c = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).Y;
            if (fStackX_1c != (float)uVar2) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x0001436401c3;
  }
  return;
}

// Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,3> @ 1436401e0

void __cdecl
ForEachImpl::Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,3>
          (FName param_1,FFixAttributesSizeHelper<FPolygonGroupID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<float> *this;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x0001436402c6:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<float>::GetArrayForChannel
                             ((TMeshAttributeArraySet<float> *)param_3,iVar4);
            pfVar3 = TMeshAttributeArrayBase<float>::GetElementBase(this,(int)uVar6);
            if ((float)param_3[2].NumElements != *pfVar3) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x0001436402c6;
  }
  return;
}

// Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,4> @ 1436402e0

void __cdecl
ForEachImpl::Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,4>
          (FName param_1,FFixAttributesSizeHelper<FPolygonGroupID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<int> *this;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x0001436403c3:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<int>::GetArrayForChannel
                             ((TMeshAttributeArraySet<int> *)param_3,iVar4);
            piVar3 = TMeshAttributeArrayBase<int>::GetElementBase(this,(int)uVar6);
            if (*piVar3 != param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x0001436403c3;
  }
  return;
}

// Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,5> @ 1436403e0

void __cdecl
ForEachImpl::Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,5>
          (FName param_1,FFixAttributesSizeHelper<FPolygonGroupID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<bool> *this;
  bool *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x0001436404c4:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<bool>::GetArrayForChannel
                             ((TMeshAttributeArraySet<bool> *)param_3,iVar4);
            pbVar3 = TMeshAttributeArrayBase<bool>::GetElementBase(this,(int)uVar6);
            if (*pbVar3 != (bool)(char)param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x0001436404c4;
  }
  return;
}

// Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,6> @ 1436404e0

void __cdecl
ForEachImpl::Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,6>
          (FName param_1,FFixAttributesSizeHelper<FPolygonGroupID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<FName> *this;
  FName *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar3) {
      return;
    }
code_r0x0001436405c9:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar7 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            FVar1.ComparisonIndex.Value = param_3[2].NumElements;
            FVar1.Number = param_3[2].Flags;
            this = TMeshAttributeArraySet<FName>::GetArrayForChannel
                             ((TMeshAttributeArraySet<FName> *)param_3,iVar7);
            pFVar4 = TMeshAttributeArrayBase<FName>::GetElementBase(this,(int)uVar6);
            if (*pFVar4 != FVar1) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3[2].Type);
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar3) goto code_r0x0001436405c9;
  }
  return;
}

// Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,7> @ 1436405e0

void __cdecl
ForEachImpl::Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,7>
          (FName param_1,FFixAttributesSizeHelper<FPolygonGroupID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
  }
  else if (param_3->Extent == 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x180,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,0> @ 143640650

void __cdecl
ForEachImpl::Dispatch<FPolygonGroupID,FFixAttributesSizeHelper<FPolygonGroupID>,0>
          (FName param_1,FFixAttributesSizeHelper<FPolygonGroupID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this;
  TVector4<float> *pTVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014364077b:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)param_3,iVar4);
            pTVar3 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                               (this,(int)uVar6);
            if ((pTVar3->field0_0x0)._s_0.X != (float)param_3[2].NumElements) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Y != (float)param_3[2].Flags) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.W != *(float *)((longlong)&param_3[3]._padding_ + 4)) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x00014364077b;
  }
  return;
}

// Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,1> @ 143640790

void __cdecl
ForEachImpl::Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,1>
          (FName param_1,FFixAttributesSizeHelper<FPolygonID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float fStack_24;
  float fStack_18;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x00014364089e:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3,iVar6);
            pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                               (this,(int)uVar8);
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            if ((float)*(undefined8 *)&pTVar5->field0_0x0 != (float)uVar1) {
              return;
            }
            fStack_24 = (float)((ulonglong)*(undefined8 *)&pTVar5->field0_0x0 >> 0x20);
            if (fStack_24 != (float)uVar2) {
              return;
            }
            if ((pTVar5->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x00014364089e;
  }
  return;
}

// Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,2> @ 1436408b0

void __cdecl
ForEachImpl::Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,2>
          (FName param_1,FFixAttributesSizeHelper<FPolygonID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  TVector2<float>_u_0 *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x0001436409b3:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3,iVar6);
            pTVar5 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                (this,(int)uVar8)->field0_0x0;
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            local_res18 = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).X;
            if (local_res18 != (float)uVar1) {
              return;
            }
            fStackX_1c = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).Y;
            if (fStackX_1c != (float)uVar2) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x0001436409b3;
  }
  return;
}

// Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,3> @ 1436409d0

void __cdecl
ForEachImpl::Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,3>
          (FName param_1,FFixAttributesSizeHelper<FPolygonID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<float> *this;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143640ab6:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<float>::GetArrayForChannel
                             ((TMeshAttributeArraySet<float> *)param_3,iVar4);
            pfVar3 = TMeshAttributeArrayBase<float>::GetElementBase(this,(int)uVar6);
            if ((float)param_3[2].NumElements != *pfVar3) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143640ab6;
  }
  return;
}

// Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,4> @ 143640ad0

void __cdecl
ForEachImpl::Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,4>
          (FName param_1,FFixAttributesSizeHelper<FPolygonID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<int> *this;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143640bb3:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<int>::GetArrayForChannel
                             ((TMeshAttributeArraySet<int> *)param_3,iVar4);
            piVar3 = TMeshAttributeArrayBase<int>::GetElementBase(this,(int)uVar6);
            if (*piVar3 != param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143640bb3;
  }
  return;
}

// Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,5> @ 143640bd0

void __cdecl
ForEachImpl::Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,5>
          (FName param_1,FFixAttributesSizeHelper<FPolygonID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<bool> *this;
  bool *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143640cb4:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<bool>::GetArrayForChannel
                             ((TMeshAttributeArraySet<bool> *)param_3,iVar4);
            pbVar3 = TMeshAttributeArrayBase<bool>::GetElementBase(this,(int)uVar6);
            if (*pbVar3 != (bool)(char)param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143640cb4;
  }
  return;
}

// Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,6> @ 143640cd0

void __cdecl
ForEachImpl::Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,6>
          (FName param_1,FFixAttributesSizeHelper<FPolygonID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<FName> *this;
  FName *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar3) {
      return;
    }
code_r0x000143640db9:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar7 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            FVar1.ComparisonIndex.Value = param_3[2].NumElements;
            FVar1.Number = param_3[2].Flags;
            this = TMeshAttributeArraySet<FName>::GetArrayForChannel
                             ((TMeshAttributeArraySet<FName> *)param_3,iVar7);
            pFVar4 = TMeshAttributeArrayBase<FName>::GetElementBase(this,(int)uVar6);
            if (*pFVar4 != FVar1) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3[2].Type);
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar3) goto code_r0x000143640db9;
  }
  return;
}

// Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,7> @ 143640dd0

void __cdecl
ForEachImpl::Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,7>
          (FName param_1,FFixAttributesSizeHelper<FPolygonID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
  }
  else if (param_3->Extent == 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x180,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,0> @ 143640e40

void __cdecl
ForEachImpl::Dispatch<FPolygonID,FFixAttributesSizeHelper<FPolygonID>,0>
          (FName param_1,FFixAttributesSizeHelper<FPolygonID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this;
  TVector4<float> *pTVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143640f6b:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)param_3,iVar4);
            pTVar3 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                               (this,(int)uVar6);
            if ((pTVar3->field0_0x0)._s_0.X != (float)param_3[2].NumElements) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Y != (float)param_3[2].Flags) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.W != *(float *)((longlong)&param_3[3]._padding_ + 4)) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143640f6b;
  }
  return;
}

// Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,1> @ 143640f80

void __cdecl
ForEachImpl::Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,1>
          (FName param_1,FFixAttributesSizeHelper<FTriangleID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float fStack_24;
  float fStack_18;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x00014364108e:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3,iVar6);
            pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                               (this,(int)uVar8);
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            if ((float)*(undefined8 *)&pTVar5->field0_0x0 != (float)uVar1) {
              return;
            }
            fStack_24 = (float)((ulonglong)*(undefined8 *)&pTVar5->field0_0x0 >> 0x20);
            if (fStack_24 != (float)uVar2) {
              return;
            }
            if ((pTVar5->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x00014364108e;
  }
  return;
}

// Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,2> @ 1436410a0

void __cdecl
ForEachImpl::Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,2>
          (FName param_1,FFixAttributesSizeHelper<FTriangleID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  TVector2<float>_u_0 *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x0001436411a3:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3,iVar6);
            pTVar5 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                (this,(int)uVar8)->field0_0x0;
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            local_res18 = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).X;
            if (local_res18 != (float)uVar1) {
              return;
            }
            fStackX_1c = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).Y;
            if (fStackX_1c != (float)uVar2) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x0001436411a3;
  }
  return;
}

// Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,3> @ 1436411c0

void __cdecl
ForEachImpl::Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,3>
          (FName param_1,FFixAttributesSizeHelper<FTriangleID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<float> *this;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x0001436412a6:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<float>::GetArrayForChannel
                             ((TMeshAttributeArraySet<float> *)param_3,iVar4);
            pfVar3 = TMeshAttributeArrayBase<float>::GetElementBase(this,(int)uVar6);
            if ((float)param_3[2].NumElements != *pfVar3) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x0001436412a6;
  }
  return;
}

// Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,4> @ 1436412c0

void __cdecl
ForEachImpl::Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,4>
          (FName param_1,FFixAttributesSizeHelper<FTriangleID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<int> *this;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x0001436413a3:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<int>::GetArrayForChannel
                             ((TMeshAttributeArraySet<int> *)param_3,iVar4);
            piVar3 = TMeshAttributeArrayBase<int>::GetElementBase(this,(int)uVar6);
            if (*piVar3 != param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x0001436413a3;
  }
  return;
}

// Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,5> @ 1436413c0

void __cdecl
ForEachImpl::Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,5>
          (FName param_1,FFixAttributesSizeHelper<FTriangleID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<bool> *this;
  bool *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x0001436414a4:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<bool>::GetArrayForChannel
                             ((TMeshAttributeArraySet<bool> *)param_3,iVar4);
            pbVar3 = TMeshAttributeArrayBase<bool>::GetElementBase(this,(int)uVar6);
            if (*pbVar3 != (bool)(char)param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x0001436414a4;
  }
  return;
}

// Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,6> @ 1436414c0

void __cdecl
ForEachImpl::Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,6>
          (FName param_1,FFixAttributesSizeHelper<FTriangleID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<FName> *this;
  FName *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar3) {
      return;
    }
code_r0x0001436415a9:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar7 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            FVar1.ComparisonIndex.Value = param_3[2].NumElements;
            FVar1.Number = param_3[2].Flags;
            this = TMeshAttributeArraySet<FName>::GetArrayForChannel
                             ((TMeshAttributeArraySet<FName> *)param_3,iVar7);
            pFVar4 = TMeshAttributeArrayBase<FName>::GetElementBase(this,(int)uVar6);
            if (*pFVar4 != FVar1) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3[2].Type);
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar3) goto code_r0x0001436415a9;
  }
  return;
}

// Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,7> @ 1436415c0

void __cdecl
ForEachImpl::Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,7>
          (FName param_1,FFixAttributesSizeHelper<FTriangleID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
  }
  else if (param_3->Extent == 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x180,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,0> @ 143641630

void __cdecl
ForEachImpl::Dispatch<FTriangleID,FFixAttributesSizeHelper<FTriangleID>,0>
          (FName param_1,FFixAttributesSizeHelper<FTriangleID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this;
  TVector4<float> *pTVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014364175b:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)param_3,iVar4);
            pTVar3 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                               (this,(int)uVar6);
            if ((pTVar3->field0_0x0)._s_0.X != (float)param_3[2].NumElements) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Y != (float)param_3[2].Flags) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.W != *(float *)((longlong)&param_3[3]._padding_ + 4)) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x00014364175b;
  }
  return;
}

// Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,1> @ 143641770

void __cdecl
ForEachImpl::Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,1>
          (FName param_1,FFixAttributesSizeHelper<FVertexID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float fStack_24;
  float fStack_18;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x00014364187e:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3,iVar6);
            pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                               (this,(int)uVar8);
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            if ((float)*(undefined8 *)&pTVar5->field0_0x0 != (float)uVar1) {
              return;
            }
            fStack_24 = (float)((ulonglong)*(undefined8 *)&pTVar5->field0_0x0 >> 0x20);
            if (fStack_24 != (float)uVar2) {
              return;
            }
            if ((pTVar5->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x00014364187e;
  }
  return;
}

// Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,2> @ 143641890

void __cdecl
ForEachImpl::Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,2>
          (FName param_1,FFixAttributesSizeHelper<FVertexID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  TVector2<float>_u_0 *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x000143641993:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3,iVar6);
            pTVar5 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                (this,(int)uVar8)->field0_0x0;
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            local_res18 = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).X;
            if (local_res18 != (float)uVar1) {
              return;
            }
            fStackX_1c = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).Y;
            if (fStackX_1c != (float)uVar2) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x000143641993;
  }
  return;
}

// Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,3> @ 1436419b0

void __cdecl
ForEachImpl::Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,3>
          (FName param_1,FFixAttributesSizeHelper<FVertexID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<float> *this;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143641a96:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<float>::GetArrayForChannel
                             ((TMeshAttributeArraySet<float> *)param_3,iVar4);
            pfVar3 = TMeshAttributeArrayBase<float>::GetElementBase(this,(int)uVar6);
            if ((float)param_3[2].NumElements != *pfVar3) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143641a96;
  }
  return;
}

// Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,4> @ 143641ab0

void __cdecl
ForEachImpl::Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,4>
          (FName param_1,FFixAttributesSizeHelper<FVertexID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<int> *this;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143641b93:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<int>::GetArrayForChannel
                             ((TMeshAttributeArraySet<int> *)param_3,iVar4);
            piVar3 = TMeshAttributeArrayBase<int>::GetElementBase(this,(int)uVar6);
            if (*piVar3 != param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143641b93;
  }
  return;
}

// Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,5> @ 143641bb0

void __cdecl
ForEachImpl::Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,5>
          (FName param_1,FFixAttributesSizeHelper<FVertexID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<bool> *this;
  bool *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143641c94:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<bool>::GetArrayForChannel
                             ((TMeshAttributeArraySet<bool> *)param_3,iVar4);
            pbVar3 = TMeshAttributeArrayBase<bool>::GetElementBase(this,(int)uVar6);
            if (*pbVar3 != (bool)(char)param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143641c94;
  }
  return;
}

// Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,6> @ 143641cb0

void __cdecl
ForEachImpl::Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,6>
          (FName param_1,FFixAttributesSizeHelper<FVertexID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<FName> *this;
  FName *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar3) {
      return;
    }
code_r0x000143641d99:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar7 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            FVar1.ComparisonIndex.Value = param_3[2].NumElements;
            FVar1.Number = param_3[2].Flags;
            this = TMeshAttributeArraySet<FName>::GetArrayForChannel
                             ((TMeshAttributeArraySet<FName> *)param_3,iVar7);
            pFVar4 = TMeshAttributeArrayBase<FName>::GetElementBase(this,(int)uVar6);
            if (*pFVar4 != FVar1) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3[2].Type);
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar3) goto code_r0x000143641d99;
  }
  return;
}

// Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,7> @ 143641db0

void __cdecl
ForEachImpl::Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,7>
          (FName param_1,FFixAttributesSizeHelper<FVertexID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
  }
  else if (param_3->Extent == 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x180,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,0> @ 143641e20

void __cdecl
ForEachImpl::Dispatch<FVertexID,FFixAttributesSizeHelper<FVertexID>,0>
          (FName param_1,FFixAttributesSizeHelper<FVertexID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this;
  TVector4<float> *pTVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143641f4b:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)param_3,iVar4);
            pTVar3 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                               (this,(int)uVar6);
            if ((pTVar3->field0_0x0)._s_0.X != (float)param_3[2].NumElements) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Y != (float)param_3[2].Flags) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.W != *(float *)((longlong)&param_3[3]._padding_ + 4)) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143641f4b;
  }
  return;
}

// Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,1> @ 143641f60

void __cdecl
ForEachImpl::Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,1>
          (FName param_1,FFixAttributesSizeHelper<FVertexInstanceID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float fStack_24;
  float fStack_18;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x00014364206e:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3,iVar6);
            pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                               (this,(int)uVar8);
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            if ((float)*(undefined8 *)&pTVar5->field0_0x0 != (float)uVar1) {
              return;
            }
            fStack_24 = (float)((ulonglong)*(undefined8 *)&pTVar5->field0_0x0 >> 0x20);
            if (fStack_24 != (float)uVar2) {
              return;
            }
            if ((pTVar5->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x00014364206e;
  }
  return;
}

// Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,2> @ 143642080

void __cdecl
ForEachImpl::Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,2>
          (FName param_1,FFixAttributesSizeHelper<FVertexInstanceID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  TVector2<float>_u_0 *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  
  if (param_3->Extent == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar4) {
      return;
    }
code_r0x000143642183:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar6 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar8 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3,iVar6);
            pTVar5 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                (this,(int)uVar8)->field0_0x0;
            uVar1 = param_3[2].NumElements;
            uVar2 = param_3[2].Flags;
            local_res18 = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).X;
            if (local_res18 != (float)uVar1) {
              return;
            }
            fStackX_1c = (*(TVector2<float>_u_0 *)&pTVar5->_s_0).Y;
            if (fStackX_1c != (float)uVar2) {
              return;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3->NumElements);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3[2].Type);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar4) goto code_r0x000143642183;
  }
  return;
}

// Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,3> @ 1436421a0

void __cdecl
ForEachImpl::Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,3>
          (FName param_1,FFixAttributesSizeHelper<FVertexInstanceID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<float> *this;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143642286:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<float>::GetArrayForChannel
                             ((TMeshAttributeArraySet<float> *)param_3,iVar4);
            pfVar3 = TMeshAttributeArrayBase<float>::GetElementBase(this,(int)uVar6);
            if ((float)param_3[2].NumElements != *pfVar3) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143642286;
  }
  return;
}

// Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,4> @ 1436422a0

void __cdecl
ForEachImpl::Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,4>
          (FName param_1,FFixAttributesSizeHelper<FVertexInstanceID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<int> *this;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143642383:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<int>::GetArrayForChannel
                             ((TMeshAttributeArraySet<int> *)param_3,iVar4);
            piVar3 = TMeshAttributeArrayBase<int>::GetElementBase(this,(int)uVar6);
            if (*piVar3 != param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143642383;
  }
  return;
}

// Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,5> @ 1436423a0

void __cdecl
ForEachImpl::Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,5>
          (FName param_1,FFixAttributesSizeHelper<FVertexInstanceID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<bool> *this;
  bool *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143642484:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<bool>::GetArrayForChannel
                             ((TMeshAttributeArraySet<bool> *)param_3,iVar4);
            pbVar3 = TMeshAttributeArrayBase<bool>::GetElementBase(this,(int)uVar6);
            if (*pbVar3 != (bool)(char)param_3[2].NumElements) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x000143642484;
  }
  return;
}

// Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,6> @ 1436424a0

void __cdecl
ForEachImpl::Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,6>
          (FName param_1,FFixAttributesSizeHelper<FVertexInstanceID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<FName> *this;
  FName *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar3) {
      return;
    }
code_r0x000143642589:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar7 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            FVar1.ComparisonIndex.Value = param_3[2].NumElements;
            FVar1.Number = param_3[2].Flags;
            this = TMeshAttributeArraySet<FName>::GetArrayForChannel
                             ((TMeshAttributeArraySet<FName> *)param_3,iVar7);
            pFVar4 = TMeshAttributeArrayBase<FName>::GetElementBase(this,(int)uVar6);
            if (*pFVar4 != FVar1) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3[2].Type);
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar3) goto code_r0x000143642589;
  }
  return;
}

// Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,7> @ 1436425a0

void __cdecl
ForEachImpl::Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,7>
          (FName param_1,FFixAttributesSizeHelper<FVertexInstanceID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
  }
  else if (param_3->Extent == 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x180,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,0> @ 143642610

void __cdecl
ForEachImpl::Dispatch<FVertexInstanceID,FFixAttributesSizeHelper<FVertexInstanceID>,0>
          (FName param_1,FFixAttributesSizeHelper<FVertexInstanceID> param_2,
          FMeshAttributeArraySetBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this;
  TVector4<float> *pTVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bStackX_14;
  
  if (param_3->Extent == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x17a,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014364273b:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3->Extent == 1) {
    bStackX_14 = param_2.bAllDefault;
    if ((bStackX_14 != false) && (iVar4 = 0, 0 < (int)param_3[2].Type)) {
      do {
        uVar6 = (ulonglong)param_2 & 0xffffffff;
        if (param_2.ExpectedNum < param_3->NumElements) {
          do {
            this = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                             ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)param_3,iVar4);
            pTVar3 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                               (this,(int)uVar6);
            if ((pTVar3->field0_0x0)._s_0.X != (float)param_3[2].NumElements) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Y != (float)param_3[2].Flags) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.Z != *(float *)&param_3[3]._padding_) {
              return;
            }
            if ((pTVar3->field0_0x0)._s_0.W != *(float *)((longlong)&param_3[3]._padding_ + 4)) {
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < param_3->NumElements);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[2].Type);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x173,L"");
    if (bVar2) goto code_r0x00014364273b;
  }
  return;
}

// FixAttributesSize<FEdgeID> @ 1436440e0

void __cdecl FixAttributesSize<FEdgeID>(int param_1,TAttributesSet<FEdgeID> *param_2)

{
  FFixAttributesSizeHelper<FEdgeID> FVar1;
  undefined4 uStackX_1c;
  
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
  FVar1._4_4_ = uStackX_1c;
  FVar1.ExpectedNum = param_1;
  TAttributesSet<FEdgeID>::ForEach<FFixAttributesSizeHelper<FEdgeID>_>(param_2,FVar1);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)param_2,param_1);
  return;
}

// FixAttributesSize<FPolygonGroupID> @ 143644120

void __cdecl
FixAttributesSize<FPolygonGroupID>(int param_1,TAttributesSet<FPolygonGroupID> *param_2)

{
  FFixAttributesSizeHelper<FPolygonGroupID> FVar1;
  undefined4 uStackX_1c;
  
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
  FVar1._4_4_ = uStackX_1c;
  FVar1.ExpectedNum = param_1;
  TAttributesSet<FPolygonGroupID>::ForEach<FFixAttributesSizeHelper<FPolygonGroupID>_>
            (param_2,FVar1);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)param_2,param_1);
  return;
}

// FixAttributesSize<FPolygonID> @ 143644160

void __cdecl FixAttributesSize<FPolygonID>(int param_1,TAttributesSet<FPolygonID> *param_2)

{
  FFixAttributesSizeHelper<FPolygonID> FVar1;
  undefined4 uStackX_1c;
  
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
  FVar1._4_4_ = uStackX_1c;
  FVar1.ExpectedNum = param_1;
  TAttributesSet<FPolygonID>::ForEach<FFixAttributesSizeHelper<FPolygonID>_>(param_2,FVar1);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)param_2,param_1);
  return;
}

// FixAttributesSize<FTriangleID> @ 1436441a0

void __cdecl FixAttributesSize<FTriangleID>(int param_1,TAttributesSet<FTriangleID> *param_2)

{
  FFixAttributesSizeHelper<FTriangleID> FVar1;
  undefined4 uStackX_1c;
  
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
  FVar1._4_4_ = uStackX_1c;
  FVar1.ExpectedNum = param_1;
  TAttributesSet<FTriangleID>::ForEach<FFixAttributesSizeHelper<FTriangleID>_>(param_2,FVar1);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)param_2,param_1);
  return;
}

// FixAttributesSize<FVertexID> @ 1436441e0

void __cdecl FixAttributesSize<FVertexID>(int param_1,TAttributesSet<FVertexID> *param_2)

{
  FFixAttributesSizeHelper<FVertexID> FVar1;
  undefined4 uStackX_1c;
  
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
  FVar1._4_4_ = uStackX_1c;
  FVar1.ExpectedNum = param_1;
  TAttributesSet<FVertexID>::ForEach<FFixAttributesSizeHelper<FVertexID>_>(param_2,FVar1);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)param_2,param_1);
  return;
}

// FixAttributesSize<FVertexInstanceID> @ 143644220

void __cdecl
FixAttributesSize<FVertexInstanceID>(int param_1,TAttributesSet<FVertexInstanceID> *param_2)

{
  FFixAttributesSizeHelper<FVertexInstanceID> FVar1;
  undefined4 uStackX_1c;
  
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
  FVar1._4_4_ = uStackX_1c;
  FVar1.ExpectedNum = param_1;
  TAttributesSet<FVertexInstanceID>::ForEach<FFixAttributesSizeHelper<FVertexInstanceID>_>
            (param_2,FVar1);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)param_2,param_1);
  return;
}

// InternalConstructor<UMeshDescriptionBase> @ 1436479a0

void __cdecl InternalConstructor<UMeshDescriptionBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMeshDescriptionBase__6B_;
    FMeshDescription::FMeshDescription((FMeshDescription *)(this + 1));
    *(undefined8 *)&this[0x12].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UMeshDescriptionBaseBulkData> @ 1436479f0

void __cdecl InternalConstructor<UMeshDescriptionBaseBulkData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMeshDescriptionBaseBulkData__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMeshDescriptionBase> @ 143647a20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeshDescriptionBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshDescriptionBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMeshDescriptionBase__6B_;
    FMeshDescription::FMeshDescription((FMeshDescription *)(pUVar1 + 1));
    *(undefined8 *)&pUVar1[0x12].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshDescriptionBaseBulkData> @ 143647ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMeshDescriptionBaseBulkData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshDescriptionBaseBulkData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMeshDescriptionBaseBulkData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// LowerBoundInternal<int,int,int,FIdentityFunctor,TLess<void>_> @ 143647b90

int __cdecl
AlgoImpl::LowerBoundInternal<int,int,int,FIdentityFunctor,TLess<void>_>
          (int *param_1,int param_2,int *param_3,FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MaxElementBy<TSparseArray<int,FDefaultSparseArrayAllocator>_const_,FIdentityFunctor,TLess<void>_> @ 143647be0

int * __cdecl
AlgoImpl::
MaxElementBy<TSparseArray<int,FDefaultSparseArrayAllocator>_const_,FIdentityFunctor,TLess<void>_>
          (TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,FIdentityFunctor param_2,
          TLess<void> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  undefined1 local_res20 [8];
  uint local_90;
  uint uStack_8c;
  int iStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  int local_48;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  piVar7 = (int *)0x0;
  uStack_8c = 1;
  local_90 = 0;
  iStack_7c = 0;
  uStack_78 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    piVar11 = piVar7;
    piVar12 = piVar7;
    while (uVar10 == 0) {
      uStack_78 = (int)piVar12 + 0x20;
      piVar12 = (int *)(ulonglong)uStack_78;
      iVar14 = (int)piVar11;
      local_90 = iVar14 + 1;
      piVar11 = (int *)(ulonglong)local_90;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < (int)local_90) goto LAB_143647c9a;
      uVar10 = puVar13[(longlong)iVar14 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_7c = (int)lVar8 + -1 + uStack_78;
    if (iVar3 < iStack_7c) {
LAB_143647c9a:
      iStack_7c = iVar3;
    }
  }
  uVar10 = *(uint *)&param_1->field_0x28;
  local_48 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  local_68._padding_ = CONCAT44(uStack_8c,local_90);
  local_68.CurrentBitIndex = iStack_7c;
  local_68.UnvisitedBitMask = 0xffffffff;
  local_68._28_4_ = uStack_74;
  local_68.BaseBitIndex = uStack_78;
  iVar14 = (int)uVar10 >> 5;
  uVar15 = uVar10 & 0xffffffe0;
  local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    piVar7 = (int *)(*pcVar5)();
    return piVar7;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar4) {
    puVar9 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar14 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar10 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar14) goto LAB_143647d80;
      uVar10 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_143647d80:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != local_48) {
      `TSparseArray<int,FDefaultSparseArrayAllocator>::TRangedForConstIterator::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if ((local_68.CurrentBitIndex == uVar10) &&
       (local_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    piVar11 = (int *)(*(longlong *)param_1 + (longlong)local_68.CurrentBitIndex * 8);
    if ((piVar7 == (int *)0x0) || (*piVar7 < *piVar11)) {
      piVar7 = piVar11;
    }
    local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
  }
  return piVar7;
}

// SerializeLegacy<int> @ 1436537a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeLegacy<int>(FArchive *param_1,FAttributesSetBase *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  FAttributesSetEntry FVar7;
  bool bVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  FAttributesSetEntry this;
  byte bVar10;
  longlong lVar11;
  FName FVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  FName FVar16;
  FName *pFVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  FAttributesSetEntry local_110;
  FName local_108;
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar18 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSetPrivateFriend::
  Serialize<TTuple<FName,TMeshAttributeArraySet<int>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<int>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TMeshAttributeArraySet<int>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<int>,0>,FDefaultSetAllocator>
                      *)local_98);
  uVar20 = local_70;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_70 != 0) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar15 = *puVar19;
    local_e0 = 0;
    uVar18 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)(int)uVar18;
      local_e0 = local_e0 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_e4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_1436538d0;
      uVar15 = (puVar19 + 1)[lVar11];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    uStack_e4 = local_d0 + -1 + local_e0;
    if ((int)local_70 < (int)uStack_e4) {
      uStack_e4 = local_70;
    }
  }
LAB_1436538d0:
  local_100 = (longlong *)local_98;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar15 = local_70 & 0xffffffe0;
  iStack_d8 = local_98._8_4_ - local_64;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,uVar18);
  iVar13 = (int)local_70 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar10 = (byte)local_70;
  uStack_f8 = uVar18;
  uStack_dc = uStack_e4;
  local_c8 = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_70 < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar20 != local_70) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar18 = -1 << (bVar10 & 0x1f) & puVar19[iVar13];
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar20 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1436539e0;
      uVar18 = (puVar19 + 1)[lVar11];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar20 = local_cc + -1 + uVar15;
    if ((int)local_70 < (int)uVar20) {
      uVar20 = local_70;
    }
  }
LAB_1436539e0:
  do {
    plVar14 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c0.CurrentBitIndex == uVar20) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar14 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar13 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (uint *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return;
    }
    pFVar17 = (FName *)((longlong)TStack_c0.CurrentBitIndex * 0x58 + *plVar14);
    local_108 = *pFVar17;
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,local_108);
    plVar14 = (longlong *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    if (plVar14 == (longlong *)0x0) {
LAB_143653a8b:
      iVar13 = param_2->NumElements;
      local_110.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (FMeshAttributeArraySetBase *)0x0;
      this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                      )operator_new(0x48);
      if (this.Ptr.Ptr == (FMeshAttributeArraySetBase *)0x0) {
        this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                        )(FMeshAttributeArraySetBase *)0x0;
      }
      else {
        *(undefined4 *)&((TMeshAttributeArraySet<int> *)this.Ptr.Ptr)->_padding_ = 4;
        *(undefined4 *)((longlong)&((TMeshAttributeArraySet<int> *)this.Ptr.Ptr)->_padding_ + 4) = 1
        ;
        *(int *)&((TMeshAttributeArraySet<int> *)this.Ptr.Ptr)->_padding_ = iVar13;
        *(undefined4 *)((longlong)&((TMeshAttributeArraySet<int> *)this.Ptr.Ptr)->_padding_ + 4) = 0
        ;
        ((TMeshAttributeArraySet<int> *)this.Ptr.Ptr)->_padding_ =
             (longlong)&___7__TMeshAttributeArraySet_H__6B_;
        (((TMeshAttributeArraySet<int> *)this.Ptr.Ptr)->ArrayForChannels).AllocatorInstance.
        SecondaryData = (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
        (((TMeshAttributeArraySet<int> *)this.Ptr.Ptr)->ArrayForChannels).ArrayNum = 0;
        *(undefined8 *)&(((TMeshAttributeArraySet<int> *)this.Ptr.Ptr)->ArrayForChannels).ArrayMax =
             1;
        TMeshAttributeArraySet<int>::SetNumChannels((TMeshAttributeArraySet<int> *)this.Ptr.Ptr,0);
      }
      FVar7.Ptr.Ptr = local_110.Ptr.Ptr;
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        puVar5 = *(undefined8 **)local_110.Ptr.Ptr;
        local_110.Ptr.Ptr = this.Ptr.Ptr;
        (*(code *)*puVar5)(FVar7.Ptr.Ptr,1);
        this.Ptr.Ptr = local_110.Ptr.Ptr;
      }
      local_110.Ptr.Ptr = this.Ptr.Ptr;
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Emplace<FName_const_&,FAttributesSetEntry>
                ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,&local_108,&local_110);
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        (*(code *)**(undefined8 **)local_110.Ptr.Ptr)(local_110.Ptr.Ptr,1);
      }
    }
    else {
      plVar4 = (longlong *)*plVar14;
      if (((int)plVar4[1] != 4) || (*(int *)((longlong)plVar4 + 0xc) != 1)) {
        TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
        ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,local_108);
        goto LAB_143653a8b;
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,0);
      *(undefined4 *)(*plVar14 + 0x14) = 0;
    }
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,*pFVar17);
    if ((pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar11 = *(longlong *)&pTVar9->field_0x8;
    *(uint *)(lVar11 + 8) = pFVar17[2].ComparisonIndex.Value;
    FVar16 = (FName)(lVar11 + 0x18);
    *(uint *)(lVar11 + 0xc) = pFVar17[2].Number;
    *(uint *)(lVar11 + 0x10) = pFVar17[3].ComparisonIndex.Value;
    *(uint *)(lVar11 + 0x14) = pFVar17[3].Number;
    if (FVar16 != (FName)(pFVar17 + 4)) {
      FVar12 = FVar16;
      if (*(FName *)(lVar11 + 0x30) != (FName)0x0) {
        FVar12 = *(FName *)(lVar11 + 0x30);
      }
      DestructItems<TMeshAttributeArrayBase<int>,int>
                ((TMeshAttributeArrayBase<int> *)FVar12,*(int *)(lVar11 + 0x38));
      piVar1 = (int *)(lVar11 + 0x3c);
      uVar18 = pFVar17[8].ComparisonIndex.Value;
      FVar12 = (FName)(pFVar17 + 4);
      if (pFVar17[7] != (FName)0x0) {
        FVar12 = pFVar17[7];
      }
      *(uint *)(lVar11 + 0x38) = uVar18;
      if ((uVar18 == 0) && (*piVar1 == 0)) {
        *piVar1 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                  (0x18,8,uVar18,*piVar1,(ForElementType<TMeshAttributeArrayBase<int>_> *)FVar16,
                   uVar18,piVar1);
        if (*(FName *)(lVar11 + 0x30) != (FName)0x0) {
          FVar16 = *(FName *)(lVar11 + 0x30);
        }
        ConstructItems<TMeshAttributeArrayBase<int>,TMeshAttributeArrayBase<int>,int>
                  ((void *)FVar16,(TMeshAttributeArrayBase<int> *)FVar12,uVar18);
      }
    }
    *(uint *)(lVar11 + 0x40) = pFVar17[9].ComparisonIndex.Value;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// SerializeLegacy<float> @ 143653cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeLegacy<float>(FArchive *param_1,FAttributesSetBase *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  FAttributesSetEntry FVar8;
  bool bVar9;
  TTuple<FName,FAttributesSetEntry> *pTVar10;
  FAttributesSetEntry this;
  byte bVar11;
  longlong lVar12;
  ForElementType<TMeshAttributeArrayBase<float>_> *pFVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
  ForElementType<TMeshAttributeArrayBase<float>_> *pFVar20;
  uint uVar21;
  ForElementType<TMeshAttributeArrayBase<float>_> *pFVar22;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [4];
  uint local_114;
  FAttributesSetEntry local_110;
  FName local_108;
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar18 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSetPrivateFriend::
  Serialize<TTuple<FName,TMeshAttributeArraySet<float>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<float>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TMeshAttributeArraySet<float>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<float>,0>,FDefaultSetAllocator>
                      *)local_98);
  uVar21 = local_70;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_70 != 0) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar16 = *puVar19;
    local_e0 = 0;
    uVar18 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)(int)uVar18;
      local_e0 = local_e0 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_e4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_143653e20;
      uVar16 = (puVar19 + 1)[lVar12];
    }
    uStack_f4 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_d0 = (int)lVar12;
    uStack_e4 = local_d0 + -1 + local_e0;
    if ((int)local_70 < (int)uStack_e4) {
      uStack_e4 = local_70;
    }
  }
LAB_143653e20:
  local_100 = (longlong *)local_98;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar16 = local_70 & 0xffffffe0;
  iStack_d8 = local_98._8_4_ - local_64;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,uVar18);
  iVar14 = (int)local_70 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar11 = (byte)local_70;
  local_114 = local_70;
  uStack_f8 = uVar18;
  uStack_dc = uStack_e4;
  local_c8 = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_70 < 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar21 != local_70) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar18 = -1 << (bVar11 & 0x1f) & puVar19[iVar14];
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) {
        local_114 = local_70;
        uVar21 = local_70;
        goto LAB_143653f40;
      }
      uVar18 = (puVar19 + 1)[lVar12];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_cc = (int)lVar12;
    uVar21 = local_cc + -1 + uVar16;
    local_114 = uVar21;
    if ((int)local_70 < (int)uVar21) {
      uVar21 = local_70;
      local_114 = local_70;
    }
  }
LAB_143653f40:
  do {
    plVar15 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c0.CurrentBitIndex == uVar21) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar15 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar14 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar14 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (uint *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return;
    }
    lVar12 = *plVar15;
    lVar17 = (longlong)TStack_c0.CurrentBitIndex * 0x58;
    local_108 = *(FName *)(lVar17 + lVar12);
    pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)param_2,local_108);
    plVar15 = (longlong *)&pTVar10->field_0x8;
    if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar15 = (longlong *)0x0;
    }
    if (plVar15 == (longlong *)0x0) {
LAB_143653ff1:
      iVar14 = param_2->NumElements;
      local_110.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (FMeshAttributeArraySetBase *)0x0;
      this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                      )operator_new(0x48);
      if (this.Ptr.Ptr == (FMeshAttributeArraySetBase *)0x0) {
        this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                        )(FMeshAttributeArraySetBase *)0x0;
      }
      else {
        *(undefined4 *)&((TMeshAttributeArraySet<float> *)this.Ptr.Ptr)->_padding_ = 3;
        *(undefined4 *)((longlong)&((TMeshAttributeArraySet<float> *)this.Ptr.Ptr)->_padding_ + 4) =
             1;
        *(int *)&((TMeshAttributeArraySet<float> *)this.Ptr.Ptr)->_padding_ = iVar14;
        *(undefined4 *)((longlong)&((TMeshAttributeArraySet<float> *)this.Ptr.Ptr)->_padding_ + 4) =
             0;
        ((TMeshAttributeArraySet<float> *)this.Ptr.Ptr)->_padding_ =
             (longlong)&___7__TMeshAttributeArraySet_M__6B_;
        (((TMeshAttributeArraySet<float> *)this.Ptr.Ptr)->ArrayForChannels).AllocatorInstance.
        SecondaryData = (ForElementType<TMeshAttributeArrayBase<float>_>)0x0;
        (((TMeshAttributeArraySet<float> *)this.Ptr.Ptr)->ArrayForChannels).ArrayNum = 0;
        *(undefined8 *)&(((TMeshAttributeArraySet<float> *)this.Ptr.Ptr)->ArrayForChannels).ArrayMax
             = 1;
        TMeshAttributeArraySet<float>::SetNumChannels
                  ((TMeshAttributeArraySet<float> *)this.Ptr.Ptr,0);
      }
      FVar8.Ptr.Ptr = local_110.Ptr.Ptr;
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        puVar5 = *(undefined8 **)local_110.Ptr.Ptr;
        local_110.Ptr.Ptr = this.Ptr.Ptr;
        (*(code *)*puVar5)(FVar8.Ptr.Ptr,1);
        this.Ptr.Ptr = local_110.Ptr.Ptr;
      }
      local_110.Ptr.Ptr = this.Ptr.Ptr;
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Emplace<FName_const_&,FAttributesSetEntry>
                ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,&local_108,&local_110);
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        (*(code *)**(undefined8 **)local_110.Ptr.Ptr)(local_110.Ptr.Ptr,1);
      }
    }
    else {
      plVar4 = (longlong *)*plVar15;
      if (((int)plVar4[1] != 3) || (*(int *)((longlong)plVar4 + 0xc) != 1)) {
        TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
        ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,local_108);
        goto LAB_143653ff1;
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,0);
      *(undefined4 *)(*plVar15 + 0x14) = 0;
    }
    pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)param_2,*(FName *)(lVar17 + lVar12));
    if ((pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar6 = *(longlong *)&pTVar10->field_0x8;
    pFVar22 = (ForElementType<TMeshAttributeArrayBase<float>_> *)(lVar12 + 0x20 + lVar17);
    *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(lVar17 + 0x10 + lVar12);
    pFVar20 = (ForElementType<TMeshAttributeArrayBase<float>_> *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(lVar17 + 0x14 + lVar12);
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar17 + 0x18 + lVar12);
    *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(lVar17 + 0x1c + lVar12);
    if (pFVar20 != pFVar22) {
      pFVar13 = pFVar20;
      if (*(ForElementType<TMeshAttributeArrayBase<float>_> **)(lVar6 + 0x30) !=
          (ForElementType<TMeshAttributeArrayBase<float>_> *)0x0) {
        pFVar13 = *(ForElementType<TMeshAttributeArrayBase<float>_> **)(lVar6 + 0x30);
      }
      DestructItems<TMeshAttributeArrayBase<float>,int>
                ((TMeshAttributeArrayBase<float> *)pFVar13,*(int *)(lVar6 + 0x38));
      pFVar13 = *(ForElementType<TMeshAttributeArrayBase<float>_> **)(lVar17 + 0x38 + lVar12);
      piVar1 = (int *)(lVar6 + 0x3c);
      iVar14 = *(int *)(lVar17 + 0x40 + lVar12);
      if (pFVar13 != (ForElementType<TMeshAttributeArrayBase<float>_> *)0x0) {
        pFVar22 = pFVar13;
      }
      *(int *)(lVar6 + 0x38) = iVar14;
      if ((iVar14 == 0) && (*piVar1 == 0)) {
        *piVar1 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                  (0x18,8,iVar14,*piVar1,pFVar20,iVar14,piVar1);
        if (*(ForElementType<TMeshAttributeArrayBase<float>_> **)(lVar6 + 0x30) !=
            (ForElementType<TMeshAttributeArrayBase<float>_> *)0x0) {
          pFVar20 = *(ForElementType<TMeshAttributeArrayBase<float>_> **)(lVar6 + 0x30);
        }
        ConstructItems<TMeshAttributeArrayBase<float>,TMeshAttributeArrayBase<float>,int>
                  (pFVar20,(TMeshAttributeArrayBase<float> *)pFVar22,iVar14);
      }
    }
    *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)(lVar17 + 0x48 + lVar12);
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    uVar21 = local_114;
  } while( true );
}

// SerializeLegacy<UE::Math::TVector2<float>_> @ 143654260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SerializeLegacy<UE::Math::TVector2<float>_>(FArchive *param_1,FAttributesSetBase *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  FAttributesSetEntry FVar7;
  bool bVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  FAttributesSetEntry this;
  byte bVar10;
  longlong lVar11;
  FName FVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  FName FVar16;
  FName *pFVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  FAttributesSetEntry local_110;
  FName local_108;
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar18 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSetPrivateFriend::
  Serialize<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
                      *)local_98);
  uVar20 = local_70;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_70 != 0) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar15 = *puVar19;
    local_e0 = 0;
    uVar18 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)(int)uVar18;
      local_e0 = local_e0 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_e4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_143654390;
      uVar15 = (puVar19 + 1)[lVar11];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    uStack_e4 = local_d0 + -1 + local_e0;
    if ((int)local_70 < (int)uStack_e4) {
      uStack_e4 = local_70;
    }
  }
LAB_143654390:
  local_100 = (longlong *)local_98;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar15 = local_70 & 0xffffffe0;
  iStack_d8 = local_98._8_4_ - local_64;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,uVar18);
  iVar13 = (int)local_70 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar10 = (byte)local_70;
  uStack_f8 = uVar18;
  uStack_dc = uStack_e4;
  local_c8 = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_70 < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar20 != local_70) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar18 = -1 << (bVar10 & 0x1f) & puVar19[iVar13];
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar20 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1436544a0;
      uVar18 = (puVar19 + 1)[lVar11];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar20 = local_cc + -1 + uVar15;
    if ((int)local_70 < (int)uVar20) {
      uVar20 = local_70;
    }
  }
LAB_1436544a0:
  do {
    plVar14 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c0.CurrentBitIndex == uVar20) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar14 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector2<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar13 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (uint *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return;
    }
    pFVar17 = (FName *)((longlong)TStack_c0.CurrentBitIndex * 0x58 + *plVar14);
    local_108 = *pFVar17;
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,local_108);
    plVar14 = (longlong *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    if (plVar14 == (longlong *)0x0) {
LAB_14365454b:
      iVar13 = param_2->NumElements;
      local_110.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (FMeshAttributeArraySetBase *)0x0;
      this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                      )operator_new(0x48);
      if (this.Ptr.Ptr == (FMeshAttributeArraySetBase *)0x0) {
        this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                        )(FMeshAttributeArraySetBase *)0x0;
      }
      else {
        *(undefined4 *)
         &((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->_padding_ = 2;
        *(undefined4 *)
         ((longlong)&((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->_padding_
         + 4) = 1;
        *(int *)&((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->_padding_ =
             iVar13;
        *(undefined4 *)
         ((longlong)&((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->_padding_
         + 4) = 0;
        (((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
        AllocatorInstance.SecondaryData =
             (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
        ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->_padding_ =
             (longlong)&___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
        (((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
        ArrayNum = 0;
        (((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
        ArrayMax = 1;
        (((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr)->DefaultValue).
        field0_0x0 = (TVector2<float>_u_0)0x0;
        TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels
                  ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this.Ptr.Ptr,0);
      }
      FVar7.Ptr.Ptr = local_110.Ptr.Ptr;
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        puVar5 = *(undefined8 **)local_110.Ptr.Ptr;
        local_110.Ptr.Ptr = this.Ptr.Ptr;
        (*(code *)*puVar5)(FVar7.Ptr.Ptr,1);
        this.Ptr.Ptr = local_110.Ptr.Ptr;
      }
      local_110.Ptr.Ptr = this.Ptr.Ptr;
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Emplace<FName_const_&,FAttributesSetEntry>
                ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,&local_108,&local_110);
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        (*(code *)**(undefined8 **)local_110.Ptr.Ptr)(local_110.Ptr.Ptr,1);
      }
    }
    else {
      plVar4 = (longlong *)*plVar14;
      if (((int)plVar4[1] != 2) || (*(int *)((longlong)plVar4 + 0xc) != 1)) {
        TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
        ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,local_108);
        goto LAB_14365454b;
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,0);
      *(undefined4 *)(*plVar14 + 0x14) = 0;
    }
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,*pFVar17);
    if ((pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar11 = *(longlong *)&pTVar9->field_0x8;
    *(uint *)(lVar11 + 8) = pFVar17[2].ComparisonIndex.Value;
    FVar16 = (FName)(lVar11 + 0x18);
    *(uint *)(lVar11 + 0xc) = pFVar17[2].Number;
    *(uint *)(lVar11 + 0x10) = pFVar17[3].ComparisonIndex.Value;
    *(uint *)(lVar11 + 0x14) = pFVar17[3].Number;
    if (FVar16 != (FName)(pFVar17 + 4)) {
      FVar12 = FVar16;
      if (*(FName *)(lVar11 + 0x30) != (FName)0x0) {
        FVar12 = *(FName *)(lVar11 + 0x30);
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)FVar12,
                 *(int *)(lVar11 + 0x38));
      piVar1 = (int *)(lVar11 + 0x3c);
      uVar18 = pFVar17[8].ComparisonIndex.Value;
      FVar12 = (FName)(pFVar17 + 4);
      if (pFVar17[7] != (FName)0x0) {
        FVar12 = pFVar17[7];
      }
      *(uint *)(lVar11 + 0x38) = uVar18;
      if ((uVar18 == 0) && (*piVar1 == 0)) {
        *piVar1 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                  (0x18,8,uVar18,*piVar1,
                   (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> *)FVar16,
                   uVar18,piVar1);
        if (*(FName *)(lVar11 + 0x30) != (FName)0x0) {
          FVar16 = *(FName *)(lVar11 + 0x30);
        }
        ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
                  ((void *)FVar16,(TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)FVar12,
                   uVar18);
      }
    }
    *(FName *)(lVar11 + 0x40) = pFVar17[9];
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// SerializeLegacy<UE::Math::TVector4<float>_> @ 1436547b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SerializeLegacy<UE::Math::TVector4<float>_>(FArchive *param_1,FAttributesSetBase *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  FAttributesSetEntry FVar9;
  bool bVar10;
  TTuple<FName,FAttributesSetEntry> *pTVar11;
  FAttributesSetEntry this;
  byte bVar12;
  longlong lVar13;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *pFVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *pFVar21;
  uint uVar22;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *pFVar23;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [4];
  uint local_114;
  FAttributesSetEntry local_110;
  FName local_108;
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  piVar1 = &param_2->NumElements;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSetPrivateFriend::
  Serialize<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>,0>,FDefaultSetAllocator>
                      *)local_98);
  uVar22 = local_70;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_70 != 0) {
    puVar20 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar20 = local_78;
    }
    uVar17 = *puVar20;
    local_e0 = 0;
    uVar19 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)(int)uVar19;
      local_e0 = local_e0 + 0x20;
      uVar19 = uVar19 + 1;
      uStack_e4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_1436548e0;
      uVar17 = (puVar20 + 1)[lVar13];
    }
    uStack_f4 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_d0 = (int)lVar13;
    uStack_e4 = local_d0 + -1 + local_e0;
    if ((int)local_70 < (int)uStack_e4) {
      uStack_e4 = local_70;
    }
  }
LAB_1436548e0:
  local_100 = (longlong *)local_98;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar17 = local_70 & 0xffffffe0;
  iStack_d8 = local_98._8_4_ - local_64;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,uVar19);
  iVar15 = (int)local_70 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar12 = (byte)local_70;
  local_114 = local_70;
  uStack_f8 = uVar19;
  uStack_dc = uStack_e4;
  local_c8 = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_70 < 0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar22 != local_70) {
    puVar20 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar20 = local_78;
    }
    uVar19 = -1 << (bVar12 & 0x1f) & puVar20[iVar15];
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
        local_114 = local_70;
        uVar22 = local_70;
        goto LAB_143654a00;
      }
      uVar19 = (puVar20 + 1)[lVar13];
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_cc = (int)lVar13;
    uVar22 = local_cc + -1 + uVar17;
    local_114 = uVar22;
    if ((int)local_70 < (int)uVar22) {
      uVar22 = local_70;
      local_114 = local_70;
    }
  }
LAB_143654a00:
  do {
    plVar16 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c0.CurrentBitIndex == uVar22) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar16 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector4<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar15 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar15 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (uint *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return;
    }
    lVar13 = *plVar16;
    lVar18 = (longlong)TStack_c0.CurrentBitIndex * 0x70;
    local_108 = *(FName *)(lVar18 + lVar13);
    pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)param_2,local_108);
    plVar16 = (longlong *)&pTVar11->field_0x8;
    if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar16 = (longlong *)0x0;
    }
    if (plVar16 == (longlong *)0x0) {
LAB_143654ab1:
      iVar15 = param_2->NumElements;
      local_110.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (FMeshAttributeArraySetBase *)0x0;
      this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                      )operator_new(0x50);
      if (this.Ptr.Ptr == (FMeshAttributeArraySetBase *)0x0) {
        this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                        )(FMeshAttributeArraySetBase *)0x0;
      }
      else {
        *(undefined4 *)
         &((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->_padding_ = 0;
        *(undefined4 *)
         ((longlong)&((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->_padding_
         + 4) = 1;
        *(int *)&((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->_padding_ =
             iVar15;
        *(undefined4 *)
         ((longlong)&((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->_padding_
         + 4) = 0;
        ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->_padding_ =
             (longlong)&___7__TMeshAttributeArraySet_U__TVector4_M_Math_UE____6B_;
        (((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
        AllocatorInstance.SecondaryData =
             (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0;
        (((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
        ArrayNum = 0;
        *(undefined8 *)
         &(((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
          ArrayMax = 1;
        *(undefined8 *)
         ((longlong)
          &(((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->DefaultValue).
           field0_0x0 + 4) = 0;
        (((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr)->DefaultValue).
        field0_0x0._s_0.W = 1.0;
        TMeshAttributeArraySet<UE::Math::TVector4<float>_>::SetNumChannels
                  ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)this.Ptr.Ptr,0);
      }
      FVar9.Ptr.Ptr = local_110.Ptr.Ptr;
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        puVar3 = *(undefined8 **)local_110.Ptr.Ptr;
        local_110.Ptr.Ptr = this.Ptr.Ptr;
        (*(code *)*puVar3)(FVar9.Ptr.Ptr,1);
        this.Ptr.Ptr = local_110.Ptr.Ptr;
      }
      local_110.Ptr.Ptr = this.Ptr.Ptr;
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Emplace<FName_const_&,FAttributesSetEntry>
                ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,&local_108,&local_110);
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        (*(code *)**(undefined8 **)local_110.Ptr.Ptr)(local_110.Ptr.Ptr,1);
      }
    }
    else {
      plVar5 = (longlong *)*plVar16;
      if (((int)plVar5[1] != 0) || (*(int *)((longlong)plVar5 + 0xc) != 1)) {
        TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
        ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,local_108);
        goto LAB_143654ab1;
      }
      (**(code **)(*plVar5 + 0x70))(plVar5,0);
      *(undefined4 *)(*plVar16 + 0x14) = 0;
    }
    pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)param_2,*(FName *)(lVar18 + lVar13));
    if ((pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar6 = *(longlong *)&pTVar11->field_0x8;
    pFVar23 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *)
              (lVar13 + 0x28 + lVar18);
    *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(lVar18 + 0x18 + lVar13);
    pFVar21 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *)(lVar6 + 0x18)
    ;
    *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(lVar18 + 0x1c + lVar13);
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar18 + 0x20 + lVar13);
    *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(lVar18 + 0x24 + lVar13);
    if (pFVar21 != pFVar23) {
      pFVar14 = pFVar21;
      if (*(ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> **)(lVar6 + 0x30)
          != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *)0x0) {
        pFVar14 = *(ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> **)
                   (lVar6 + 0x30);
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)pFVar14,
                 *(int *)(lVar6 + 0x38));
      pFVar14 = *(ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> **)
                 (lVar18 + 0x40 + lVar13);
      piVar1 = (int *)(lVar6 + 0x3c);
      iVar15 = *(int *)(lVar18 + 0x48 + lVar13);
      if (pFVar14 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *)0x0) {
        pFVar23 = pFVar14;
      }
      *(int *)(lVar6 + 0x38) = iVar15;
      if ((iVar15 == 0) && (*piVar1 == 0)) {
        *piVar1 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                  (0x18,8,iVar15,*piVar1,pFVar21,iVar15,piVar1);
        if (*(ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> **)(lVar6 + 0x30)
            != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> *)0x0) {
          pFVar21 = *(ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> **)
                     (lVar6 + 0x30);
        }
        ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
                  (pFVar21,(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)pFVar23,iVar15);
      }
    }
    puVar3 = (undefined8 *)(lVar18 + 0x50 + lVar13);
    uVar8 = puVar3[1];
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    *(undefined8 *)(lVar6 + 0x40) = *puVar3;
    *(undefined8 *)(lVar6 + 0x48) = uVar8;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    uVar22 = local_114;
  } while( true );
}

// SerializeLegacy<UE::Math::TVector<float>_> @ 143654d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SerializeLegacy<UE::Math::TVector<float>_>(FArchive *param_1,FAttributesSetBase *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  FAttributesSetEntry FVar7;
  bool bVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  FAttributesSetEntry this;
  byte bVar10;
  longlong lVar11;
  FName FVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  FName FVar16;
  FName *pFVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [8];
  FAttributesSetEntry local_120;
  FName local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar18 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSetPrivateFriend::
  Serialize<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
                      *)local_98);
  uVar20 = local_70;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_70 != 0) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar15 = *puVar19;
    local_e0 = 0;
    uVar18 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)(int)uVar18;
      local_e0 = local_e0 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_e4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_143654e60;
      uVar15 = (puVar19 + 1)[lVar11];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    uStack_e4 = local_d0 + -1 + local_e0;
    if ((int)local_70 < (int)uStack_e4) {
      uStack_e4 = local_70;
    }
  }
LAB_143654e60:
  local_100 = (longlong *)local_98;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar15 = local_70 & 0xffffffe0;
  iStack_d8 = local_98._8_4_ - local_64;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,uVar18);
  iVar13 = (int)local_70 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar10 = (byte)local_70;
  uStack_f8 = uVar18;
  uStack_dc = uStack_e4;
  local_c8 = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_70 < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar20 != local_70) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar18 = -1 << (bVar10 & 0x1f) & puVar19[iVar13];
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar20 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_143654f60;
      uVar18 = (puVar19 + 1)[lVar11];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar20 = local_cc + -1 + uVar15;
    if ((int)local_70 < (int)uVar20) {
      uVar20 = local_70;
    }
  }
LAB_143654f60:
  do {
    plVar14 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_128[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_c0.CurrentBitIndex == uVar20) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar14 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar13 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (uint *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return;
    }
    pFVar17 = (FName *)((longlong)TStack_c0.CurrentBitIndex * 0x60 + *plVar14);
    local_110 = 0;
    local_108 = 0;
    local_118 = *pFVar17;
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,local_118);
    plVar14 = (longlong *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    if (plVar14 == (longlong *)0x0) {
LAB_14365501a:
      iVar13 = param_2->NumElements;
      local_120.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (FMeshAttributeArraySetBase *)0x0;
      this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                      )operator_new(0x50);
      if (this.Ptr.Ptr == (FMeshAttributeArraySetBase *)0x0) {
        this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                        )(FMeshAttributeArraySetBase *)0x0;
      }
      else {
        *(undefined4 *)
         &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->_padding_ = 1;
        *(undefined4 *)
         ((longlong)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->_padding_
         + 4) = 1;
        *(int *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->_padding_ =
             iVar13;
        *(undefined4 *)
         ((longlong)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->_padding_
         + 4) = 0;
        (((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
        AllocatorInstance.SecondaryData =
             (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0;
        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->_padding_ =
             (longlong)&___7__TMeshAttributeArraySet_U__TVector_M_Math_UE____6B_;
        (((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
        ArrayNum = 0;
        (((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->ArrayForChannels).
        ArrayMax = 1;
        *(undefined8 *)
         &(((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->DefaultValue).
          field0_0x0 = local_110;
        (((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr)->DefaultValue).
        field0_0x0._s_0.Z = (float)local_110;
        TMeshAttributeArraySet<UE::Math::TVector<float>_>::SetNumChannels
                  ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.Ptr.Ptr,0);
      }
      FVar7.Ptr.Ptr = local_120.Ptr.Ptr;
      if (local_120.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        puVar5 = *(undefined8 **)local_120.Ptr.Ptr;
        local_120.Ptr.Ptr = this.Ptr.Ptr;
        (*(code *)*puVar5)(FVar7.Ptr.Ptr,1);
        this.Ptr.Ptr = local_120.Ptr.Ptr;
      }
      local_120.Ptr.Ptr = this.Ptr.Ptr;
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Emplace<FName_const_&,FAttributesSetEntry>
                ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,&local_118,&local_120);
      if (local_120.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        (*(code *)**(undefined8 **)local_120.Ptr.Ptr)(local_120.Ptr.Ptr,1);
      }
    }
    else {
      plVar4 = (longlong *)*plVar14;
      if (((int)plVar4[1] != 1) || (*(int *)((longlong)plVar4 + 0xc) != 1)) {
        TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
        ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,local_118);
        goto LAB_14365501a;
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,0);
      *(undefined4 *)(*plVar14 + 0x14) = 0;
    }
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,*pFVar17);
    if ((pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar11 = *(longlong *)&pTVar9->field_0x8;
    *(uint *)(lVar11 + 8) = pFVar17[2].ComparisonIndex.Value;
    FVar16 = (FName)(lVar11 + 0x18);
    *(uint *)(lVar11 + 0xc) = pFVar17[2].Number;
    *(uint *)(lVar11 + 0x10) = pFVar17[3].ComparisonIndex.Value;
    *(uint *)(lVar11 + 0x14) = pFVar17[3].Number;
    if (FVar16 != (FName)(pFVar17 + 4)) {
      FVar12 = FVar16;
      if (*(FName *)(lVar11 + 0x30) != (FName)0x0) {
        FVar12 = *(FName *)(lVar11 + 0x30);
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)FVar12,
                 *(int *)(lVar11 + 0x38));
      piVar1 = (int *)(lVar11 + 0x3c);
      uVar18 = pFVar17[8].ComparisonIndex.Value;
      FVar12 = (FName)(pFVar17 + 4);
      if (pFVar17[7] != (FName)0x0) {
        FVar12 = pFVar17[7];
      }
      *(uint *)(lVar11 + 0x38) = uVar18;
      if ((uVar18 == 0) && (*piVar1 == 0)) {
        *piVar1 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                  (0x18,8,uVar18,*piVar1,
                   (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> *)FVar16,
                   uVar18,piVar1);
        if (*(FName *)(lVar11 + 0x30) != (FName)0x0) {
          FVar16 = *(FName *)(lVar11 + 0x30);
        }
        ConstructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
                  ((void *)FVar16,(TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)FVar12,
                   uVar18);
      }
    }
    *(FName *)(lVar11 + 0x40) = pFVar17[9];
    *(uint *)(lVar11 + 0x48) = pFVar17[10].ComparisonIndex.Value;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// SerializeLegacy<FName> @ 143655290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeLegacy<FName>(FArchive *param_1,FAttributesSetBase *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  FAttributesSetEntry FVar7;
  bool bVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  TMeshAttributeArraySet<FName> *pTVar10;
  byte bVar11;
  longlong lVar12;
  FName FVar13;
  int iVar14;
  FAttributesSetEntry FVar15;
  uint uVar16;
  FName FVar17;
  FName *pFVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [8];
  FAttributesSetEntry local_120;
  FName local_118;
  FName local_110;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  int local_d4;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSetPrivateFriend::
  Serialize<TTuple<FName,TMeshAttributeArraySet<FName>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<FName>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TMeshAttributeArraySet<FName>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<FName>,0>,FDefaultSetAllocator>
                      *)local_98);
  uVar21 = local_70;
  uStack_fc = 1;
  local_e8 = 0;
  uStack_ec = local_e8;
  if (local_70 != 0) {
    puVar20 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar20 = local_78;
    }
    uVar16 = *puVar20;
    local_e8 = 0;
    uVar19 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)(int)uVar19;
      local_e8 = local_e8 + 0x20;
      uVar19 = uVar19 + 1;
      uStack_ec = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_1436553c0;
      uVar16 = (puVar20 + 1)[lVar12];
    }
    uStack_fc = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_fc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_d8 = (int)lVar12;
    uStack_ec = local_d8 + -1 + local_e8;
    if ((int)local_70 < (int)uStack_ec) {
      uStack_ec = local_70;
    }
  }
LAB_1436553c0:
  local_108 = (longlong *)local_98;
  local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar16 = local_70 & 0xffffffe0;
  iStack_e0 = local_98._8_4_ - local_64;
  uStack_f0 = 0xffffffff;
  TStack_c8.CurrentBitIndex = uStack_ec;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_fc,uVar19);
  iVar14 = (int)local_70 >> 5;
  TStack_c8._28_4_ = uStack_ec;
  TStack_c8.BaseBitIndex = local_e8;
  uStack_a8 = CONCAT44(uStack_dc,iStack_e0);
  bVar11 = (byte)local_70;
  uStack_100 = uVar19;
  uStack_e4 = uStack_ec;
  local_d0 = local_108;
  TStack_c8.Array = local_f8;
  if (((int)local_70 < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar21 != local_70) {
    puVar20 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar20 = local_78;
    }
    uVar19 = -1 << (bVar11 & 0x1f) & puVar20[iVar14];
    while (uVar19 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar21 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_1436554d0;
      uVar19 = (puVar20 + 1)[lVar12];
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_d4 = (int)lVar12;
    uVar21 = local_d4 + -1 + uVar16;
    if ((int)local_70 < (int)uVar21) {
      uVar21 = local_70;
    }
  }
LAB_1436554d0:
  do {
    plVar4 = local_d0;
    if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
      local_128[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_c8.CurrentBitIndex == uVar21) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar4 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<FName>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar14 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar14 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (uint *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return;
    }
    FVar15.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (FMeshAttributeArraySetBase *)0x0;
    pFVar18 = (FName *)((longlong)TStack_c8.CurrentBitIndex * 0x58 + *plVar4);
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    local_110 = *pFVar18;
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,local_110);
    pTVar10 = (TMeshAttributeArraySet<FName> *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pTVar10 = (TMeshAttributeArraySet<FName> *)FVar15.Ptr.Ptr;
    }
    if (pTVar10 == (TMeshAttributeArraySet<FName> *)0x0) {
LAB_14365557d:
      iVar14 = param_2->NumElements;
      local_120.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (FMeshAttributeArraySetBase *)0x0;
      pTVar10 = operator_new(0x48);
      if (pTVar10 != (TMeshAttributeArraySet<FName> *)0x0) {
        *(undefined4 *)&pTVar10->_padding_ = 6;
        *(undefined4 *)((longlong)&pTVar10->_padding_ + 4) = 1;
        *(int *)&pTVar10->_padding_ = iVar14;
        *(undefined4 *)((longlong)&pTVar10->_padding_ + 4) = 0;
        pTVar10->_padding_ = (longlong)&___7__TMeshAttributeArraySet_VFName____6B_;
        (pTVar10->ArrayForChannels).AllocatorInstance.SecondaryData =
             (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0;
        (pTVar10->ArrayForChannels).ArrayNum = 0;
        (pTVar10->ArrayForChannels).ArrayMax = 1;
        pTVar10->DefaultValue = local_118;
        TMeshAttributeArraySet<FName>::SetNumChannels(pTVar10,0);
        FVar15.Ptr.Ptr =
             (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             pTVar10;
      }
      FVar7.Ptr.Ptr = local_120.Ptr.Ptr;
      if (local_120.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        puVar5 = *(undefined8 **)local_120.Ptr.Ptr;
        local_120.Ptr.Ptr = FVar15.Ptr.Ptr;
        (*(code *)*puVar5)(FVar7.Ptr.Ptr,1);
        FVar15.Ptr.Ptr = local_120.Ptr.Ptr;
      }
      local_120.Ptr.Ptr = FVar15.Ptr.Ptr;
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Emplace<FName_const_&,FAttributesSetEntry>
                ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,&local_110,&local_120);
      if (local_120.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        (*(code *)**(undefined8 **)local_120.Ptr.Ptr)(local_120.Ptr.Ptr,1);
      }
    }
    else {
      plVar4 = (longlong *)pTVar10->_padding_;
      if (((int)plVar4[1] != 6) || (*(int *)((longlong)plVar4 + 0xc) != 1)) {
        TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
        ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,local_110);
        goto LAB_14365557d;
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,0);
      *(undefined4 *)(pTVar10->_padding_ + 0x14) = 0;
    }
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,*pFVar18);
    if ((pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar12 = *(longlong *)&pTVar9->field_0x8;
    *(uint *)(lVar12 + 8) = pFVar18[2].ComparisonIndex.Value;
    FVar17 = (FName)(lVar12 + 0x18);
    *(uint *)(lVar12 + 0xc) = pFVar18[2].Number;
    *(uint *)(lVar12 + 0x10) = pFVar18[3].ComparisonIndex.Value;
    *(uint *)(lVar12 + 0x14) = pFVar18[3].Number;
    if (FVar17 != (FName)(pFVar18 + 4)) {
      FVar13 = FVar17;
      if (*(FName *)(lVar12 + 0x30) != (FName)0x0) {
        FVar13 = *(FName *)(lVar12 + 0x30);
      }
      DestructItems<TMeshAttributeArrayBase<FName>,int>
                ((TMeshAttributeArrayBase<FName> *)FVar13,*(int *)(lVar12 + 0x38));
      piVar1 = (int *)(lVar12 + 0x3c);
      uVar19 = pFVar18[8].ComparisonIndex.Value;
      FVar13 = (FName)(pFVar18 + 4);
      if (pFVar18[7] != (FName)0x0) {
        FVar13 = pFVar18[7];
      }
      *(uint *)(lVar12 + 0x38) = uVar19;
      if ((uVar19 == 0) && (*piVar1 == 0)) {
        *piVar1 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                  (0x18,8,uVar19,*piVar1,(ForElementType<TMeshAttributeArrayBase<FName>_> *)FVar17,
                   uVar19,piVar1);
        if (*(FName *)(lVar12 + 0x30) != (FName)0x0) {
          FVar17 = *(FName *)(lVar12 + 0x30);
        }
        ConstructItems<TMeshAttributeArrayBase<FName>,TMeshAttributeArrayBase<FName>,int>
                  ((void *)FVar17,(TMeshAttributeArrayBase<FName> *)FVar13,uVar19);
      }
    }
    *(FName *)(lVar12 + 0x40) = pFVar18[9];
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// SerializeLegacy<bool> @ 1436557e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeLegacy<bool>(FArchive *param_1,FAttributesSetBase *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  FAttributesSetEntry FVar7;
  bool bVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  FAttributesSetEntry this;
  byte bVar10;
  longlong lVar11;
  FName FVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  FName FVar16;
  FName *pFVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  FAttributesSetEntry local_110;
  FName local_108;
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar18 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSetPrivateFriend::
  Serialize<TTuple<FName,TMeshAttributeArraySet<bool>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<bool>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TMeshAttributeArraySet<bool>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<bool>,0>,FDefaultSetAllocator>
                      *)local_98);
  uVar20 = local_70;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_70 != 0) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar15 = *puVar19;
    local_e0 = 0;
    uVar18 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)(int)uVar18;
      local_e0 = local_e0 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_e4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_143655910;
      uVar15 = (puVar19 + 1)[lVar11];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    uStack_e4 = local_d0 + -1 + local_e0;
    if ((int)local_70 < (int)uStack_e4) {
      uStack_e4 = local_70;
    }
  }
LAB_143655910:
  local_100 = (longlong *)local_98;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar15 = local_70 & 0xffffffe0;
  iStack_d8 = local_98._8_4_ - local_64;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,uVar18);
  iVar13 = (int)local_70 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar10 = (byte)local_70;
  uStack_f8 = uVar18;
  uStack_dc = uStack_e4;
  local_c8 = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_70 < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar20 != local_70) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar18 = -1 << (bVar10 & 0x1f) & puVar19[iVar13];
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar20 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_143655a20;
      uVar18 = (puVar19 + 1)[lVar11];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar20 = local_cc + -1 + uVar15;
    if ((int)local_70 < (int)uVar20) {
      uVar20 = local_70;
    }
  }
LAB_143655a20:
  do {
    plVar14 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c0.CurrentBitIndex == uVar20) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar14 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributeArraySet<bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar13 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (uint *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return;
    }
    pFVar17 = (FName *)((longlong)TStack_c0.CurrentBitIndex * 0x58 + *plVar14);
    local_108 = *pFVar17;
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,local_108);
    plVar14 = (longlong *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    if (plVar14 == (longlong *)0x0) {
LAB_143655acb:
      iVar13 = param_2->NumElements;
      local_110.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (FMeshAttributeArraySetBase *)0x0;
      this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                      )operator_new(0x48);
      if (this.Ptr.Ptr == (FMeshAttributeArraySetBase *)0x0) {
        this.Ptr.Ptr = (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>
                        )(FMeshAttributeArraySetBase *)0x0;
      }
      else {
        *(undefined4 *)&((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->_padding_ = 5;
        *(undefined4 *)((longlong)&((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->_padding_ + 4) =
             1;
        *(int *)&((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->_padding_ = iVar13;
        *(undefined4 *)((longlong)&((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->_padding_ + 4) =
             0;
        (((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->ArrayForChannels).AllocatorInstance.
        SecondaryData = (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0;
        ((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->_padding_ =
             (longlong)&___7__TMeshAttributeArraySet__N__6B_;
        (((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->ArrayForChannels).ArrayNum = 0;
        (((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->ArrayForChannels).ArrayMax = 1;
        ((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr)->DefaultValue = false;
        TMeshAttributeArraySet<bool>::SetNumChannels((TMeshAttributeArraySet<bool> *)this.Ptr.Ptr,0)
        ;
      }
      FVar7.Ptr.Ptr = local_110.Ptr.Ptr;
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        puVar5 = *(undefined8 **)local_110.Ptr.Ptr;
        local_110.Ptr.Ptr = this.Ptr.Ptr;
        (*(code *)*puVar5)(FVar7.Ptr.Ptr,1);
        this.Ptr.Ptr = local_110.Ptr.Ptr;
      }
      local_110.Ptr.Ptr = this.Ptr.Ptr;
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Emplace<FName_const_&,FAttributesSetEntry>
                ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,&local_108,&local_110);
      if (local_110.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
        (*(code *)**(undefined8 **)local_110.Ptr.Ptr)(local_110.Ptr.Ptr,1);
      }
    }
    else {
      plVar4 = (longlong *)*plVar14;
      if (((int)plVar4[1] != 5) || (*(int *)((longlong)plVar4 + 0xc) != 1)) {
        TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
        ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)param_2,local_108);
        goto LAB_143655acb;
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,0);
      *(undefined4 *)(*plVar14 + 0x14) = 0;
    }
    pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)param_2,*pFVar17);
    if ((pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar11 = *(longlong *)&pTVar9->field_0x8;
    *(uint *)(lVar11 + 8) = pFVar17[2].ComparisonIndex.Value;
    FVar16 = (FName)(lVar11 + 0x18);
    *(uint *)(lVar11 + 0xc) = pFVar17[2].Number;
    *(uint *)(lVar11 + 0x10) = pFVar17[3].ComparisonIndex.Value;
    *(uint *)(lVar11 + 0x14) = pFVar17[3].Number;
    if (FVar16 != (FName)(pFVar17 + 4)) {
      FVar12 = FVar16;
      if (*(FName *)(lVar11 + 0x30) != (FName)0x0) {
        FVar12 = *(FName *)(lVar11 + 0x30);
      }
      DestructItems<TMeshAttributeArrayBase<bool>,int>
                ((TMeshAttributeArrayBase<bool> *)FVar12,*(int *)(lVar11 + 0x38));
      piVar1 = (int *)(lVar11 + 0x3c);
      uVar18 = pFVar17[8].ComparisonIndex.Value;
      FVar12 = (FName)(pFVar17 + 4);
      if (pFVar17[7] != (FName)0x0) {
        FVar12 = pFVar17[7];
      }
      *(uint *)(lVar11 + 0x38) = uVar18;
      if ((uVar18 == 0) && (*piVar1 == 0)) {
        *piVar1 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                  (0x18,8,uVar18,*piVar1,(ForElementType<TMeshAttributeArrayBase<bool>_> *)FVar16,
                   uVar18,piVar1);
        if (*(FName *)(lVar11 + 0x30) != (FName)0x0) {
          FVar16 = *(FName *)(lVar11 + 0x30);
        }
        ConstructItems<TMeshAttributeArrayBase<bool>,TMeshAttributeArrayBase<bool>,int>
                  ((void *)FVar16,(TMeshAttributeArrayBase<bool> *)FVar12,uVar18);
      }
    }
    *(char *)(lVar11 + 0x40) = (char)pFVar17[9].ComparisonIndex.Value;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// StaticEnum<enum_EComputeNTBsOptions> @ 143655d30

UEnum * __cdecl StaticEnum<enum_EComputeNTBsOptions>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshDescription();
    Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions,(UObject *)pUVar1,
                       L"EComputeNTBsOptions");
  }
  return Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton;
}

// TransformAccumulate<int,TArrayView<FVertexInstanceID_const_,int>,`FMeshDescription::GetNumVertexConnectedTriangles'::__l2::<lambda_1>,TPlus<void>_> @ 143655d70

int __cdecl
Algo::
TransformAccumulate<int,TArrayView<FVertexInstanceID_const_,int>,_FMeshDescription::GetNumVertexConnectedTriangles_::__l2::<lambda_1>,TPlus<void>_>
          (undefined8 *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  TArrayView<int_const_,int> *pTVar2;
  int *piVar3;
  TArrayView<int_const_,int> local_18;
  
  piVar3 = (int *)*param_1;
  piVar1 = piVar3 + *(int *)(param_1 + 1);
  if (piVar3 != piVar1) {
    do {
      pTVar2 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)(param_2 + 0x170),&local_18,*piVar3,0);
      piVar3 = piVar3 + 1;
      param_3 = param_3 + pTVar2->ArrayNum;
    } while (piVar3 != piVar1);
  }
  return param_3;
}

// ~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,`FMeshDescription::RemapPolygonGroups'::__l2::FOldPolygonGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 143657ea0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,`FMeshDescription::RemapPolygonGroups'::__l2::FOldPolygonGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,_FMeshDescription::RemapPolygonGroups_::__l2::FOldPolygonGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,this,0,(int *)((longlong)this + 0xc));
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

// operator<< @ 143658c90

FArchive * __cdecl operator<<(FArchive *param_1,FChunk *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_2->Data);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar2 = &param_1->field_0x2a;
  iVar5 = *piVar1;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->StartIndex).Elements + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      iVar5 = *piVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->Count).Elements + uVar8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *piVar1);
    if (0 < *piVar1) {
      do {
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        piVar3 = (param_2->MaxCount).Elements + uVar6;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
          }
        }
        else {
          *piVar3 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *piVar1);
    }
  }
  return param_1;
}

// operator<< @ 143658e60

FArchive * __cdecl operator<<(FArchive *param_1,FChunk *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&param_2->Data);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar2 = &param_1->field_0x2a;
  iVar5 = *piVar1;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->StartIndex).Elements + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      iVar5 = *piVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->Count).Elements + uVar8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *piVar1);
    if (0 < *piVar1) {
      do {
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        piVar3 = (param_2->MaxCount).Elements + uVar6;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
          }
        }
        else {
          *piVar3 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *piVar1);
    }
  }
  return param_1;
}

// operator<< @ 143659030

FArchive * __cdecl operator<<(FArchive *param_1,FChunk *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Data);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar2 = &param_1->field_0x2a;
  iVar5 = *piVar1;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->StartIndex).Elements + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      iVar5 = *piVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->Count).Elements + uVar8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *piVar1);
    if (0 < *piVar1) {
      do {
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        piVar3 = (param_2->MaxCount).Elements + uVar6;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
          }
        }
        else {
          *piVar3 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *piVar1);
    }
  }
  return param_1;
}

// operator<< @ 143659200

FArchive * __cdecl operator<<(FArchive *param_1,FChunk *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  TArrayPrivateFriend::Serialize<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Data);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar2 = &param_1->field_0x2a;
  iVar5 = *piVar1;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->StartIndex).Elements + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      iVar5 = *piVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->Count).Elements + uVar8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *piVar1);
    if (0 < *piVar1) {
      do {
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        piVar3 = (param_2->MaxCount).Elements + uVar6;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
          }
        }
        else {
          *piVar3 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *piVar1);
    }
  }
  return param_1;
}

// operator<< @ 1436593d0

FArchive * __cdecl operator<<(FArchive *param_1,FChunk *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Data);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar2 = &param_1->field_0x2a;
  iVar5 = *piVar1;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->StartIndex).Elements + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      iVar5 = *piVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->Count).Elements + uVar8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *piVar1);
    if (0 < *piVar1) {
      do {
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        piVar3 = (param_2->MaxCount).Elements + uVar6;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
          }
        }
        else {
          *piVar3 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *piVar1);
    }
  }
  return param_1;
}

// operator<< @ 1436595a0

FArchive * __cdecl operator<<(FArchive *param_1,FChunk *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Data);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar2 = &param_1->field_0x2a;
  iVar5 = *piVar1;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->StartIndex).Elements + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      iVar5 = *piVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->Count).Elements + uVar8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *piVar1);
    if (0 < *piVar1) {
      do {
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        piVar3 = (param_2->MaxCount).Elements + uVar6;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
          }
        }
        else {
          *piVar3 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *piVar1);
    }
  }
  return param_1;
}

// operator<< @ 143659770

FArchive * __cdecl operator<<(FArchive *param_1,FChunk *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&param_2->Data);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar2 = &param_1->field_0x2a;
  iVar5 = *piVar1;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->StartIndex).Elements + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      iVar5 = *piVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->Count).Elements + uVar8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *piVar1);
    if (0 < *piVar1) {
      do {
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        piVar3 = (param_2->MaxCount).Elements + uVar6;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
          }
        }
        else {
          *piVar3 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *piVar1);
    }
  }
  return param_1;
}

// operator<< @ 143659940

FArchive * __cdecl operator<<(FArchive *param_1,FChunk *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  TArrayPrivateFriend::Serialize<bool,TSizedDefaultAllocator<32>_>(param_1,&param_2->Data);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  uVar6 = 0;
  uVar7 = 0;
  puVar2 = &param_1->field_0x2a;
  iVar5 = *piVar1;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->StartIndex).Elements + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      iVar5 = *piVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar3 = (param_2->Count).Elements + uVar8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
        }
      }
      else {
        *piVar3 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *piVar1);
    if (0 < *piVar1) {
      do {
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        piVar3 = (param_2->MaxCount).Elements + uVar6;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
          }
        }
        else {
          *piVar3 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *piVar1);
    }
  }
  return param_1;
}

// operator<< @ 143659b10

FArchive * __cdecl operator<<(FArchive *param_1,FMeshTriangle_Legacy *param_2)

{
  FPolygonID *pFVar1;
  undefined1 *puVar2;
  FVertexInstanceID *pFVar3;
  FVertexInstanceID *pFVar4;
  FPolygonID *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FArchive *pFVar9;
  
  if ((param_1->field_0x28 & 1) == 0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x129,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FArchive *)(*pcVar6)();
      return pFVar9;
    }
  }
  pFVar3 = (FVertexInstanceID *)**(undefined8 **)&param_1->field_0x8;
  if ((FVertexInstanceID *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->VertexInstanceIDs[0] = *pFVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar3 = param_2->VertexInstanceIDs + 1;
  puVar2 = &param_1->field_0x2a;
  pFVar4 = (FVertexInstanceID *)**(undefined8 **)&param_1->field_0x8;
  if ((FVertexInstanceID *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar3);
    }
  }
  else {
    *pFVar3 = *pFVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar3 = param_2->VertexInstanceIDs + 2;
  pFVar4 = (FVertexInstanceID *)**(undefined8 **)&param_1->field_0x8;
  if ((FVertexInstanceID *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar3);
    }
  }
  else {
    *pFVar3 = *pFVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
  if (0x22 < iVar8) {
    pFVar1 = &param_2->PolygonID;
    pFVar5 = (FPolygonID *)**(undefined8 **)&param_1->field_0x8;
    if (pFVar5 + 1 <= (FPolygonID *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *pFVar1 = *pFVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return param_1;
    }
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
      return param_1;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
  }
  return param_1;
}

// operator<< @ 143659cc0

FArchive * __cdecl operator<<(FArchive *param_1,TAttributeArrayContainer<int> *param_2)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::Serialize<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Chunks);
  piVar1 = &param_2->NumElements;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->DefaultValue;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 143659da0

FArchive * __cdecl operator<<(FArchive *param_1,TAttributeArrayContainer<float> *param_2)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  
  TArrayPrivateFriend::
  Serialize<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Chunks);
  piVar1 = &param_2->NumElements;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->DefaultValue;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar4 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar2 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
  return param_1;
}

// operator<< @ 143659e80

FArchive * __cdecl
operator<<(FArchive *param_1,TAttributeArrayContainer<UE::Math::TTransform<double>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::
  Serialize<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Chunks);
  piVar1 = &param_2->NumElements;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->DefaultValue);
  return param_1;
}

// operator<< @ 143659f00

FArchive * __cdecl
operator<<(FArchive *param_1,TAttributeArrayContainer<UE::Math::TVector2<float>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::
  Serialize<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Chunks);
  piVar1 = &param_2->NumElements;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->DefaultValue);
  return param_1;
}

// operator<< @ 143659f80

FArchive * __cdecl
operator<<(FArchive *param_1,TAttributeArrayContainer<UE::Math::TVector4<float>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::
  Serialize<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Chunks);
  piVar1 = &param_2->NumElements;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->DefaultValue);
  return param_1;
}

// operator<< @ 14365a000

FArchive * __cdecl
operator<<(FArchive *param_1,TAttributeArrayContainer<UE::Math::TVector<float>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::
  Serialize<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Chunks);
  piVar1 = &param_2->NumElements;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->DefaultValue);
  return param_1;
}

// operator<< @ 14365a080

FArchive * __cdecl operator<<(FArchive *param_1,TAttributeArrayContainer<FName> *param_2)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::
  Serialize<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Chunks);
  piVar1 = &param_2->NumElements;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->DefaultValue);
  return param_1;
}

// operator<< @ 14365a100

FArchive * __cdecl operator<<(FArchive *param_1,TAttributeArrayContainer<bool> *param_2)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::Serialize<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Chunks);
  piVar1 = &param_2->NumElements;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->DefaultValue);
  return param_1;
}

// operator<< @ 14365a180

FArchive * __cdecl operator<<(FArchive *param_1,TMeshAttributeArraySet<int> *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  longlong *plVar6;
  
  plVar6 = &param_2->_padding_;
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar6);
    }
  }
  else {
    *(undefined4 *)plVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->ArrayForChannels);
  piVar1 = &param_2->DefaultValue;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar5 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 14365a2b0

FArchive * __cdecl operator<<(FArchive *param_1,TMeshAttributeArraySet<float> *param_2)

{
  float *pfVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint *puVar5;
  longlong *plVar6;
  
  plVar6 = &param_2->_padding_;
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar6);
    }
  }
  else {
    *(undefined4 *)plVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->ArrayForChannels);
  pfVar1 = &param_2->DefaultValue;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar5 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 14365a3e0

FArchive * __cdecl
operator<<(FArchive *param_1,TMeshAttributeArraySet<UE::Math::TVector2<float>_> *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong *plVar4;
  
  plVar4 = &param_2->_padding_;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar4);
    }
  }
  else {
    *(undefined4 *)plVar4 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->ArrayForChannels);
  UE::Math::operator<<(param_1,&param_2->DefaultValue);
  puVar1 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 14365a4e0

FArchive * __cdecl
operator<<(FArchive *param_1,TMeshAttributeArraySet<UE::Math::TVector4<float>_> *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong *plVar4;
  
  plVar4 = &param_2->_padding_;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar4);
    }
  }
  else {
    *(undefined4 *)plVar4 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->ArrayForChannels);
  UE::Math::operator<<(param_1,&param_2->DefaultValue);
  puVar1 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 14365a5e0

FArchive * __cdecl
operator<<(FArchive *param_1,TMeshAttributeArraySet<UE::Math::TVector<float>_> *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong *plVar4;
  
  plVar4 = &param_2->_padding_;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar4);
    }
  }
  else {
    *(undefined4 *)plVar4 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->ArrayForChannels);
  UE::Math::operator<<(param_1,&param_2->DefaultValue);
  puVar1 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 14365a6e0

FArchive * __cdecl operator<<(FArchive *param_1,TMeshAttributeArraySet<FName> *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong *plVar4;
  
  plVar4 = &param_2->_padding_;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar4);
    }
  }
  else {
    *(undefined4 *)plVar4 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->ArrayForChannels);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->DefaultValue);
  puVar1 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 14365a7e0

FArchive * __cdecl operator<<(FArchive *param_1,TMeshAttributeArraySet<bool> *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong *plVar4;
  
  plVar4 = &param_2->_padding_;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar4);
    }
  }
  else {
    *(undefined4 *)plVar4 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->ArrayForChannels);
  operator<<(param_1,&param_2->DefaultValue);
  puVar1 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 14365a8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,TMeshElementArrayBase<int> *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FSparseArrayAllocationInfo *pFVar6;
  FArchive *pFVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_118 [32];
  int local_f8;
  ulonglong local_f0;
  uint local_e8;
  uint local_e0;
  uint uStack_dc;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  TMeshElementArrayBase<int> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FSparseArrayAllocationInfo local_98;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  ulonglong uVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(param_2->Container).field_0x8 << 3,
             (longlong)*(int *)&(param_2->Container).field_0xc << 3);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(param_2->Container).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(param_2->Container).field_0x2c + 0x1fU >> 5) << 2);
  uVar13 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    uVar12 = *(uint *)&(param_2->Container).field_0x8;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.MaxBits = 0x80;
    local_88.NumBits = uVar12;
    uVar9 = uVar12 + 0x1f >> 5;
    local_e8 = uVar12;
    if (uVar12 + 0x1f >> 5 != 0) {
      if (4 < uVar9) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_88.AllocatorInstance,0,uVar9,4);
        local_88.MaxBits = uVar9 << 5;
      }
      FVar8 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar8 = local_88.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar8,0,(ulonglong)uVar9 << 2);
      uVar9 = local_88.NumBits & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      if (uVar9 != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
        puVar15 = (uint *)((longlong)FVar8 +
                          (longlong)
                          ((int)(local_88.NumBits + (local_88.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar15 = *puVar15 & 0xffffffffU >> (0x20U - (char)uVar9 & 0x1f);
      }
    }
    local_f8 = 0;
    local_f0 = 1;
    if (0 < (int)uVar12) {
      uVar12 = 1;
      uVar14 = uVar13;
      do {
        iVar11 = (int)uVar14;
        if ((*(int *)&(param_2->Container).field_0x28 <= iVar11) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar4)();
          return pFVar7;
        }
        puVar2 = *(undefined1 **)&(param_2->Container).field_0x20;
        puVar10 = &(param_2->Container).field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar10 = puVar2;
        }
        lVar3 = (uVar14 >> 5) * 4;
        if ((*(uint *)(puVar10 + lVar3) & uVar12) != 0) {
          if ((local_88.NumBits <= iVar11) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar4)();
            return pFVar7;
          }
          FVar8 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar8 = local_88.AllocatorInstance.SecondaryData;
          }
          puVar15 = (uint *)(lVar3 + (longlong)FVar8);
          *puVar15 = *puVar15 | uVar12;
          local_f8 = iVar11;
        }
        uVar14 = (ulonglong)(iVar11 + 1U);
        uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      } while ((int)(iVar11 + 1U) < (int)local_e8);
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&local_88,local_f8 + 1);
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_88);
    uVar12 = *(uint *)&(param_2->Container).field_0x28;
    puStack_d8 = &(param_2->Container).field_0x10;
    local_e0 = 0;
    uStack_dc = (uint)local_f0;
    uStack_cc = 0;
    uStack_c8 = 0;
    if (uVar12 != 0) {
      puVar15 = *(uint **)&(param_2->Container).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puStack_d8;
      }
      uVar9 = *puVar15;
      uVar14 = uVar13;
      while (uVar9 == 0) {
        iVar11 = (int)uVar14;
        uStack_c8 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_c8;
        local_e0 = iVar11 + 1;
        uVar14 = (ulonglong)local_e0;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_e0)
        goto LAB_14365ad3f;
        uVar9 = puVar15[(longlong)iVar11 + 1];
      }
      uStack_dc = -uVar9 & uVar9;
      uVar13 = (ulonglong)uStack_dc * 2 + 1;
      lVar3 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_cc = (int)lVar3 + -1 + uStack_c8;
      uVar13 = (ulonglong)uStack_cc;
      if ((int)uVar12 < (int)uStack_cc) {
LAB_14365ad3f:
        uVar13 = (ulonglong)uVar12;
        uStack_cc = uVar12;
      }
    }
    local_d0 = 0xffffffff;
    local_b8.CurrentBitIndex = uStack_cc;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_c4;
    local_b8.BaseBitIndex = uStack_c8;
    local_b8._padding_._0_4_ = local_e0;
    local_b8._padding_._4_4_ = uStack_dc;
    local_c0 = param_2;
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_d8;
    FVar8 = local_88.AllocatorInstance.SecondaryData;
    if ((int)uVar13 < (int)uVar12) {
      do {
        puVar15 = (uint *)(*(longlong *)&local_c0->Container + (longlong)(int)uVar13 * 8);
        puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar15,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar15);
          }
        }
        else {
          *puVar15 = *puVar1;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar13 = (ulonglong)(uint)local_b8.CurrentBitIndex;
        FVar8 = local_88.AllocatorInstance.SecondaryData;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
  else {
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_68);
    TSparseArray<int,FDefaultSparseArrayAllocator>::Empty(&param_2->Container,local_68.NumBits);
    local_f0 = CONCAT44(local_f0._4_4_,1);
    uVar14 = uVar13;
    uVar16 = uVar13;
    if (local_68.NumBits != 0) {
      FVar8 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar8 = local_68.AllocatorInstance.SecondaryData;
      }
      uVar12 = *(uint *)FVar8;
      while (uVar12 == 0) {
        iVar11 = (int)uVar13;
        uVar14 = (ulonglong)((int)uVar14 + 0x20);
        uVar12 = iVar11 + 1;
        uVar13 = (ulonglong)uVar12;
        if ((int)(((int)(local_68.NumBits - 1U) >> 0x1f & 0x1fU) + (local_68.NumBits - 1U)) >> 5 <
            (int)uVar12) {
          uVar16 = (ulonglong)(uint)local_68.NumBits;
          goto LAB_14365aa00;
        }
        uVar12 = *(uint *)((uchar *)((longlong)FVar8 + 4) + (longlong)iVar11 * 4);
      }
      local_f0 = (ulonglong)(-uVar12 & uVar12);
      uVar16 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar12 = (int)uVar14 + -1 + (int)lVar3;
      uVar16 = (ulonglong)uVar12;
      if (local_68.NumBits < (int)uVar12) {
        uVar16 = (ulonglong)(uint)local_68.NumBits;
      }
    }
LAB_14365aa00:
    if ((int)uVar16 < local_68.NumBits) {
      uVar12 = 0xffffffff;
      do {
        pFVar6 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)param_2,&local_98,
                            (int)uVar16);
        if (pFVar6->Pointer != (undefined4 *)0x0) {
          *(undefined4 *)pFVar6->Pointer = 0;
        }
        puVar15 = (uint *)(*(longlong *)&param_2->Container + (longlong)(int)uVar16 * 8);
        puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar15,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar15);
          }
        }
        else {
          *puVar15 = *puVar1;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar12 = uVar12 & ~(uint)local_f0;
        FVar8 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_68.AllocatorInstance.SecondaryData;
        }
        uVar9 = uVar12 & *(uint *)((longlong)FVar8 + (longlong)(int)uVar13 * 4);
        while (uVar9 == 0) {
          iVar11 = (int)uVar13;
          uVar14 = (ulonglong)((int)uVar14 + 0x20);
          uVar9 = iVar11 + 1;
          uVar13 = (ulonglong)uVar9;
          if ((int)(((int)(local_68.NumBits - 1U) >> 0x1f & 0x1fU) + (local_68.NumBits - 1U)) >> 5 <
              (int)uVar9) {
            uVar16 = (ulonglong)(uint)local_68.NumBits;
            goto LAB_14365aaef;
          }
          uVar12 = 0xffffffff;
          uVar9 = *(uint *)((uchar *)((longlong)FVar8 + 4) + (longlong)iVar11 * 4);
        }
        local_f0 = CONCAT44(local_f0._4_4_,-uVar9 & uVar9);
        uVar16 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar9 = (int)uVar14 + -1 + (int)lVar3;
        uVar16 = (ulonglong)uVar9;
        if (local_68.NumBits < (int)uVar9) {
          uVar16 = (ulonglong)(uint)local_68.NumBits;
        }
LAB_14365aaef:
      } while ((int)uVar16 < local_68.NumBits);
    }
    FVar8 = local_68.AllocatorInstance.SecondaryData;
  }
  if (FVar8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  return param_1;
}

// operator<< @ 14365ae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,TMeshElementArrayBase<FMeshEdge_Legacy> *param_2)

{
  ForAnyElementType *pFVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FSparseArrayAllocationInfo *pFVar9;
  FArchive *pFVar10;
  ForElementType<unsigned_int> FVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStackY_188 [32];
  uint local_148;
  uint local_130;
  uint uStack_12c;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_110;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_100;
  int local_f0;
  int local_ec;
  int local_e8;
  void *local_e0;
  TMeshElementArrayBase<FMeshEdge_Legacy> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FSparseArrayAllocationInfo local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a0;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(param_2->Container).field_0x8 * 0x18,
             (longlong)*(int *)&(param_2->Container).field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(param_2->Container).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(param_2->Container).field_0x2c + 0x1fU >> 5) << 2);
  uVar13 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    uVar7 = *(uint *)&(param_2->Container).field_0x8;
    local_a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_a0.MaxBits = 0x80;
    local_a0.NumBits = uVar7;
    uVar14 = uVar7 + 0x1f >> 5;
    if (uVar7 + 0x1f >> 5 != 0) {
      if (4 < uVar14) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_a0.AllocatorInstance,0,uVar14,4);
        local_a0.MaxBits = uVar14 << 5;
      }
      FVar11 = (ForElementType<unsigned_int>)&local_a0;
      if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_a0.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar11,0,(ulonglong)uVar14 << 2);
      uVar14 = local_a0.NumBits & 0x8000001f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffe0) + 1;
      }
      if (uVar14 != 0) {
        FVar11 = (ForElementType<unsigned_int>)&local_a0;
        if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_a0.AllocatorInstance.SecondaryData;
        }
        puVar16 = (uint *)((longlong)FVar11 +
                          (longlong)
                          ((int)(local_a0.NumBits + (local_a0.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar16 = *puVar16 & 0xffffffffU >> (0x20U - (char)uVar14 & 0x1f);
      }
    }
    local_148 = 0;
    uVar14 = 0;
    if (0 < (int)uVar7) {
      uVar18 = 1;
      uVar15 = uVar13;
      do {
        iVar8 = (int)uVar15;
        if ((*(int *)&(param_2->Container).field_0x28 <= iVar8) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FArchive *)(*pcVar5)();
          return pFVar10;
        }
        puVar4 = *(undefined1 **)&(param_2->Container).field_0x20;
        puVar12 = &(param_2->Container).field_0x10;
        if (puVar4 != (undefined1 *)0x0) {
          puVar12 = puVar4;
        }
        if ((*(uint *)(puVar12 + (uVar15 >> 5) * 4) & uVar18) != 0) {
          if ((local_a0.NumBits <= iVar8) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FArchive *)(*pcVar5)();
            return pFVar10;
          }
          FVar11 = (ForElementType<unsigned_int>)&local_a0;
          if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_a0.AllocatorInstance.SecondaryData;
          }
          puVar16 = (uint *)((longlong)FVar11 + (uVar15 >> 5) * 4);
          *puVar16 = *puVar16 | uVar18;
          local_148 = iVar8;
        }
        uVar15 = (ulonglong)(iVar8 + 1U);
        uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
        uVar14 = local_148;
      } while ((int)(iVar8 + 1U) < (int)uVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&local_a0,uVar14 + 1);
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_a0);
    uVar7 = *(uint *)&(param_2->Container).field_0x28;
    local_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Container).field_0x10;
    local_130 = 0;
    uStack_12c = 1;
    uStack_11c = 0;
    uStack_118 = 0;
    if (uVar7 != 0) {
      puVar16 = *(uint **)&(param_2->Container).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)local_d0.Array;
      }
      uVar14 = *puVar16;
      uVar15 = uVar13;
      while (uVar14 == 0) {
        uStack_118 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_118;
        iVar8 = (int)uVar13;
        local_130 = iVar8 + 1;
        uVar13 = (ulonglong)local_130;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_130)
        goto LAB_14365b402;
        uVar14 = puVar16[(longlong)iVar8 + 1];
      }
      uStack_12c = -uVar14 & uVar14;
      uVar13 = (ulonglong)uStack_12c * 2 + 1;
      lVar17 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_e8 = (int)lVar17;
      uStack_11c = local_e8 + -1 + uStack_118;
      uVar13 = (ulonglong)uStack_11c;
      if ((int)uVar7 < (int)uStack_11c) {
LAB_14365b402:
        uVar13 = (ulonglong)uVar7;
        uStack_11c = uVar7;
      }
    }
    local_d0._padding_ = CONCAT44(uStack_12c,local_130);
    local_d0.CurrentBitIndex = uStack_11c;
    local_d0.UnvisitedBitMask = 0xffffffff;
    local_d0._28_4_ = uStack_114;
    local_d0.BaseBitIndex = uStack_118;
    local_d8 = param_2;
    FVar11 = local_a0.AllocatorInstance.SecondaryData;
    if ((int)uVar13 < (int)uVar7) {
      do {
        puVar16 = (uint *)(*(longlong *)&local_d8->Container + (longlong)(int)uVar13 * 0x18);
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x114,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FArchive *)(*pcVar5)();
          return pFVar10;
        }
        puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar16,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar16);
          }
        }
        else {
          *puVar16 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        puVar16 = puVar16 + 1;
        puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar16,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar16);
          }
        }
        else {
          *puVar16 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar8 < 0x11) {
          local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.ArrayNum = 0;
          local_100.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FPolygonID,TSizedDefaultAllocator<32>_>(param_1,&local_100)
          ;
          if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.AllocatorInstance.Data);
          }
        }
        local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
        uVar13 = (ulonglong)(uint)local_d0.CurrentBitIndex;
        FVar11 = local_a0.AllocatorInstance.SecondaryData;
      } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
    }
  }
  else {
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_68);
    TSparseArray<FMeshEdge_Legacy,FDefaultSparseArrayAllocator>::Empty
              (&param_2->Container,local_68.NumBits);
    uVar7 = 1;
    uVar19 = uVar13;
    uVar15 = uVar13;
    if (local_68.NumBits != 0) {
      FVar11 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_68.AllocatorInstance.SecondaryData;
      }
      uVar14 = *(uint *)FVar11;
      while (uVar14 == 0) {
        iVar8 = (int)uVar13;
        uVar15 = (ulonglong)((int)uVar15 + 0x20);
        uVar14 = iVar8 + 1;
        uVar13 = (ulonglong)uVar14;
        if ((int)(((int)(local_68.NumBits - 1U) >> 0x1f & 0x1fU) + (local_68.NumBits - 1U)) >> 5 <
            (int)uVar14) {
          uVar19 = (ulonglong)(uint)local_68.NumBits;
          goto LAB_14365af44;
        }
        uVar14 = *(uint *)((uchar *)((longlong)FVar11 + 4) + (longlong)iVar8 * 4);
      }
      uVar7 = -uVar14 & uVar14;
      uVar19 = (ulonglong)uVar7 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_f0 = (int)lVar17;
      uVar14 = (int)uVar15 + -1 + local_f0;
      uVar19 = (ulonglong)uVar14;
      if (local_68.NumBits < (int)uVar14) {
        uVar19 = (ulonglong)(uint)local_68.NumBits;
      }
    }
LAB_14365af44:
    FVar11 = local_68.AllocatorInstance.SecondaryData;
    if ((int)uVar19 < local_68.NumBits) {
      local_148 = 0xffffffff;
      do {
        local_80 = 0xffffffffffffffff;
        local_78 = (void *)0x0;
        local_70 = 0;
        pFVar9 = TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)param_2,&local_b0
                            ,(int)uVar19);
        puVar2 = pFVar9->Pointer;
        if (puVar2 != (undefined8 *)0x0) {
          pFVar1 = (ForAnyElementType *)(puVar2 + 1);
          *puVar2 = local_80;
          pFVar1->Data = (FScriptContainerElement *)0x0;
          lVar17 = (longlong)(int)local_70;
          local_e0 = local_78;
          *(int *)(puVar2 + 2) = (int)local_70;
          if ((int)local_70 == 0) {
            *(int *)((longlong)puVar2 + 0x14) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(int)local_70,0,pFVar1,(int)local_70,(int *)((longlong)puVar2 + 0x14));
            memcpy(pFVar1->Data,local_e0,lVar17 << 2);
          }
        }
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        puVar16 = (uint *)(*(longlong *)&param_2->Container + (longlong)(int)uVar19 * 0x18);
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x114,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FArchive *)(*pcVar5)();
          return pFVar10;
        }
        puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar16,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar16);
          }
        }
        else {
          *puVar16 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        puVar16 = puVar16 + 1;
        puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar16,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar16);
          }
        }
        else {
          *puVar16 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar8 < 0x11) {
          local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_110.ArrayNum = 0;
          local_110.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FPolygonID,TSizedDefaultAllocator<32>_>(param_1,&local_110)
          ;
          if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.AllocatorInstance.Data);
          }
        }
        local_148 = local_148 & ~uVar7;
        FVar11 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_68.AllocatorInstance.SecondaryData;
        }
        uVar14 = local_148 & *(uint *)((longlong)FVar11 + (longlong)(int)uVar13 * 4);
        while (uVar14 == 0) {
          iVar8 = (int)uVar13;
          uVar15 = (ulonglong)((int)uVar15 + 0x20);
          uVar14 = iVar8 + 1;
          uVar13 = (ulonglong)uVar14;
          uVar19 = (ulonglong)(uint)local_68.NumBits;
          if ((int)(((int)(local_68.NumBits - 1U) >> 0x1f & 0x1fU) + (local_68.NumBits - 1U)) >> 5 <
              (int)uVar14) goto LAB_14365b198;
          uVar14 = *(uint *)((uchar *)((longlong)FVar11 + 4) + (longlong)iVar8 * 4);
          local_148 = 0xffffffff;
        }
        uVar7 = -uVar14 & uVar14;
        uVar19 = (ulonglong)uVar7 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_ec = (int)lVar17;
        uVar14 = (int)uVar15 + -1 + local_ec;
        uVar19 = (ulonglong)uVar14;
        if (local_68.NumBits < (int)uVar14) {
          uVar19 = (ulonglong)(uint)local_68.NumBits;
        }
LAB_14365b198:
        FVar11 = local_68.AllocatorInstance.SecondaryData;
      } while ((int)uVar19 < local_68.NumBits);
    }
  }
  if (FVar11 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  return param_1;
}

// operator<< @ 14365b590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl
operator<<(FArchive *param_1,TMeshElementArrayBase<FMeshPolygonGroup_Legacy> *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  FArchive *pFVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_128 [32];
  int local_108;
  ulonglong local_100;
  longlong local_f8;
  uint local_f0;
  uint uStack_ec;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  TMeshElementArrayBase<FMeshPolygonGroup_Legacy> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FSparseArrayAllocationInfo local_98;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  ulonglong uVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(param_2->Container).field_0x8 << 4,
             (longlong)*(int *)&(param_2->Container).field_0xc << 4);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(param_2->Container).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(param_2->Container).field_0x2c + 0x1fU >> 5) << 2);
  uVar13 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    uVar12 = *(uint *)&(param_2->Container).field_0x8;
    local_f8 = CONCAT44(local_f8._4_4_,uVar12);
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.MaxBits = 0x80;
    local_88.NumBits = uVar12;
    uVar10 = uVar12 + 0x1f >> 5;
    if (uVar12 + 0x1f >> 5 != 0) {
      if (4 < uVar10) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_88.AllocatorInstance,0,uVar10,4);
        local_88.MaxBits = uVar10 << 5;
      }
      FVar9 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_88.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar9,0,(ulonglong)uVar10 << 2);
      uVar10 = local_88.NumBits & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      if (uVar10 != 0) {
        FVar9 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_88.AllocatorInstance.SecondaryData;
        }
        puVar15 = (uint *)((longlong)FVar9 +
                          (longlong)
                          ((int)(local_88.NumBits + (local_88.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar15 = *puVar15 & 0xffffffffU >> (0x20U - (char)uVar10 & 0x1f);
      }
    }
    local_108 = 0;
    local_100 = 1;
    if (0 < (int)uVar12) {
      uVar12 = 1;
      uVar14 = uVar13;
      do {
        iVar6 = (int)uVar14;
        if ((*(int *)&(param_2->Container).field_0x28 <= iVar6) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        puVar2 = *(undefined1 **)&(param_2->Container).field_0x20;
        puVar11 = &(param_2->Container).field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        if ((*(uint *)(puVar11 + (uVar14 >> 5) * 4) & uVar12) != 0) {
          if ((local_88.NumBits <= iVar6) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FArchive *)(*pcVar4)();
            return pFVar8;
          }
          FVar9 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar9 = local_88.AllocatorInstance.SecondaryData;
          }
          puVar15 = (uint *)((longlong)FVar9 + (uVar14 >> 5) * 4);
          *puVar15 = *puVar15 | uVar12;
          local_108 = iVar6;
        }
        uVar14 = (ulonglong)(iVar6 + 1U);
        uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      } while ((int)(iVar6 + 1U) < (int)local_f8);
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&local_88,local_108 + 1);
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_88);
    uVar12 = *(uint *)&(param_2->Container).field_0x28;
    puStack_e8 = &(param_2->Container).field_0x10;
    local_f0 = 0;
    uStack_ec = (uint)local_100;
    uStack_dc = 0;
    uStack_d8 = 0;
    if (uVar12 != 0) {
      puVar15 = *(uint **)&(param_2->Container).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puStack_e8;
      }
      uVar10 = *puVar15;
      uVar14 = uVar13;
      while (uVar10 == 0) {
        iVar6 = (int)uVar13;
        uStack_d8 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_d8;
        local_f0 = iVar6 + 1;
        uVar13 = (ulonglong)local_f0;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f0)
        goto LAB_14365ba32;
        uVar10 = puVar15[(longlong)iVar6 + 1];
      }
      uStack_ec = -uVar10 & uVar10;
      uVar13 = (ulonglong)uStack_ec * 2 + 1;
      lVar3 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_c8 = (int)lVar3;
      uStack_dc = local_c8 + -1 + uStack_d8;
      uVar13 = (ulonglong)uStack_dc;
      if ((int)uVar12 < (int)uStack_dc) {
LAB_14365ba32:
        uVar13 = (ulonglong)uVar12;
        uStack_dc = uVar12;
      }
    }
    local_e0 = 0xffffffff;
    local_b8._padding_ = CONCAT44(uStack_ec,local_f0);
    local_b8.CurrentBitIndex = uStack_dc;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_d4;
    local_b8.BaseBitIndex = uStack_d8;
    local_c0 = param_2;
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_e8;
    FVar9 = local_88.AllocatorInstance.SecondaryData;
    if ((int)uVar13 < (int)uVar12) {
      do {
        lVar3 = *(longlong *)&local_c0->Container;
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x15c,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar6 < 0x11) {
          TArrayPrivateFriend::Serialize<FPolygonID,TSizedDefaultAllocator<32>_>
                    (param_1,(TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)
                             ((longlong)(int)uVar13 * 0x10 + lVar3));
        }
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar13 = (ulonglong)(uint)local_b8.CurrentBitIndex;
        FVar9 = local_88.AllocatorInstance.SecondaryData;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
  else {
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_68);
    TSparseArray<FMeshPolygonGroup_Legacy,FDefaultSparseArrayAllocator>::Empty
              (&param_2->Container,local_68.NumBits);
    local_100 = CONCAT44(local_100._4_4_,1);
    uVar14 = uVar13;
    uVar16 = uVar13;
    if (local_68.NumBits != 0) {
      FVar9 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_68.AllocatorInstance.SecondaryData;
      }
      uVar12 = *(uint *)FVar9;
      while (uVar12 == 0) {
        iVar6 = (int)uVar13;
        uVar14 = (ulonglong)((int)uVar14 + 0x20);
        uVar12 = iVar6 + 1;
        uVar13 = (ulonglong)uVar12;
        if ((int)(((int)(local_68.NumBits - 1U) >> 0x1f & 0x1fU) + (local_68.NumBits - 1U)) >> 5 <
            (int)uVar12) {
          uVar16 = (ulonglong)(uint)local_68.NumBits;
          goto LAB_14365b6b3;
        }
        uVar12 = *(uint *)((uchar *)((longlong)FVar9 + 4) + (longlong)iVar6 * 4);
      }
      local_100 = (ulonglong)(-uVar12 & uVar12);
      uVar16 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_d0 = (int)lVar3;
      uVar12 = (int)uVar14 + -1 + local_d0;
      uVar16 = (ulonglong)uVar12;
      if (local_68.NumBits < (int)uVar12) {
        uVar16 = (ulonglong)(uint)local_68.NumBits;
      }
    }
LAB_14365b6b3:
    FVar9 = local_68.AllocatorInstance.SecondaryData;
    if ((int)uVar16 < local_68.NumBits) {
      uVar12 = 0xffffffff;
      do {
        pFVar7 = TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)param_2,&local_98
                            ,(int)uVar16);
        puVar1 = pFVar7->Pointer;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        local_f8 = *(longlong *)&param_2->Container;
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x15c,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar6 < 0x11) {
          TArrayPrivateFriend::Serialize<FPolygonID,TSizedDefaultAllocator<32>_>
                    (param_1,(TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)
                             ((longlong)(int)uVar16 * 0x10 + local_f8));
        }
        uVar12 = uVar12 & ~(uint)local_100;
        FVar9 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_68.AllocatorInstance.SecondaryData;
        }
        uVar10 = uVar12 & *(uint *)((longlong)FVar9 + (longlong)(int)uVar13 * 4);
        while (uVar10 == 0) {
          iVar6 = (int)uVar13;
          uVar14 = (ulonglong)((int)uVar14 + 0x20);
          uVar10 = iVar6 + 1;
          uVar13 = (ulonglong)uVar10;
          if ((int)(((int)(local_68.NumBits - 1U) >> 0x1f & 0x1fU) + (local_68.NumBits - 1U)) >> 5 <
              (int)uVar10) {
            uVar16 = (ulonglong)(uint)local_68.NumBits;
            goto LAB_14365b7c4;
          }
          uVar12 = 0xffffffff;
          uVar10 = *(uint *)((uchar *)((longlong)FVar9 + 4) + (longlong)iVar6 * 4);
        }
        local_100 = CONCAT44(local_100._4_4_,-uVar10 & uVar10);
        uVar16 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_cc = (int)lVar3;
        uVar10 = (int)uVar14 + -1 + local_cc;
        uVar16 = (ulonglong)uVar10;
        if (local_68.NumBits < (int)uVar10) {
          uVar16 = (ulonglong)(uint)local_68.NumBits;
        }
LAB_14365b7c4:
        FVar9 = local_68.AllocatorInstance.SecondaryData;
      } while ((int)uVar16 < local_68.NumBits);
    }
  }
  if (FVar9 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  return param_1;
}

// operator<< @ 14365bb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,TMeshElementArrayBase<FMeshPolygon_Legacy> *param_2)

{
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  FArchive *pFVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  TMeshElementArrayBase<FMeshPolygon_Legacy> *pTVar17;
  ulonglong uVar18;
  undefined1 auStack_188 [32];
  int local_168;
  ulonglong local_160;
  uint local_158;
  uint uStack_154;
  undefined1 *puStack_150;
  undefined4 local_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  TArray<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_138;
  TArray<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_128;
  TArray<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_> local_118;
  TArray<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_> local_108;
  int local_f8;
  int local_f4;
  int local_f0;
  TMeshElementArrayBase<FMeshPolygon_Legacy> *local_e8;
  TMeshElementArrayBase<FMeshPolygon_Legacy> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  FSparseArrayAllocationInfo local_90;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_e8 = param_2;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(param_2->Container).field_0x8 * 0x28,
             (longlong)*(int *)&(param_2->Container).field_0xc * 0x28);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(param_2->Container).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(param_2->Container).field_0x2c + 0x1fU >> 5) << 2);
  uVar13 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    uVar14 = *(uint *)&(param_2->Container).field_0x8;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_80.MaxBits = 0x80;
    local_80.NumBits = uVar14;
    uVar11 = uVar14 + 0x1f >> 5;
    if (uVar14 + 0x1f >> 5 != 0) {
      if (4 < uVar11) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_80.AllocatorInstance,0,uVar11,4);
        local_80.MaxBits = uVar11 << 5;
      }
      FVar10 = (ForElementType<unsigned_int>)&local_80;
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_80.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar10,0,(ulonglong)uVar11 << 2);
      uVar11 = local_80.NumBits & 0x8000001f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
      }
      if (uVar11 != 0) {
        FVar10 = (ForElementType<unsigned_int>)&local_80;
        if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_80.AllocatorInstance.SecondaryData;
        }
        puVar16 = (uint *)((longlong)FVar10 +
                          (longlong)
                          ((int)(local_80.NumBits + (local_80.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar16 = *puVar16 & 0xffffffffU >> (0x20U - (char)uVar11 & 0x1f);
      }
    }
    local_168 = 0;
    local_160 = 1;
    pTVar17 = param_2;
    if (0 < (int)uVar14) {
      uVar11 = 1;
      uVar15 = uVar13;
      do {
        iVar7 = (int)uVar15;
        if ((*(int *)&(param_2->Container).field_0x28 <= iVar7) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FArchive *)(*pcVar5)();
          return pFVar9;
        }
        puVar3 = *(undefined1 **)&(param_2->Container).field_0x20;
        puVar12 = &(param_2->Container).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar12 = puVar3;
        }
        if ((*(uint *)(puVar12 + (uVar15 >> 5) * 4) & uVar11) != 0) {
          if ((local_80.NumBits <= iVar7) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FArchive *)(*pcVar5)();
            return pFVar9;
          }
          FVar10 = (ForElementType<unsigned_int>)&local_80;
          if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar10 = local_80.AllocatorInstance.SecondaryData;
          }
          puVar16 = (uint *)((uVar15 >> 5) * 4 + (longlong)FVar10);
          *puVar16 = *puVar16 | uVar11;
          local_168 = iVar7;
        }
        uVar15 = (ulonglong)(iVar7 + 1U);
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        pTVar17 = local_e8;
      } while ((int)(iVar7 + 1U) < (int)uVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&local_80,local_168 + 1);
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_80);
    uVar14 = *(uint *)&(pTVar17->Container).field_0x28;
    puStack_150 = &(pTVar17->Container).field_0x10;
    local_158 = 0;
    uStack_154 = (uint)local_160;
    uStack_144 = 0;
    uStack_140 = 0;
    if (uVar14 != 0) {
      puVar16 = *(uint **)&(pTVar17->Container).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puStack_150;
      }
      uVar11 = *puVar16;
      uVar15 = uVar13;
      while (uVar11 == 0) {
        uStack_140 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_140;
        iVar7 = (int)uVar13;
        local_158 = iVar7 + 1;
        uVar13 = (ulonglong)local_158;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_158)
        goto LAB_14365c0a2;
        uVar11 = puVar16[(longlong)iVar7 + 1];
      }
      uStack_154 = -uVar11 & uVar11;
      uVar13 = (ulonglong)uStack_154 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_f0 = (int)lVar4;
      uStack_144 = local_f0 + -1 + uStack_140;
      uVar13 = (ulonglong)uStack_144;
      if ((int)uVar14 < (int)uStack_144) {
LAB_14365c0a2:
        uVar13 = (ulonglong)uVar14;
        uStack_144 = uVar14;
      }
    }
    local_148 = 0xffffffff;
    local_d8._padding_ = CONCAT44(uStack_154,local_158);
    local_d8.CurrentBitIndex = uStack_144;
    local_d8.UnvisitedBitMask = 0xffffffff;
    local_d8._28_4_ = uStack_13c;
    local_d8.BaseBitIndex = uStack_140;
    local_e0 = pTVar17;
    local_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_150;
    FVar10 = local_80.AllocatorInstance.SecondaryData;
    if ((int)uVar13 < (int)uVar14) {
      do {
        pTVar1 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&local_e0->Container + (longlong)(int)uVar13 * 0x28);
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x140,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FArchive *)(*pcVar5)();
          return pFVar9;
        }
        TArrayPrivateFriend::Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>
                  (param_1,pTVar1);
        iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
        if (iVar7 < 0x1e) {
          local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.ArrayNum = 0;
          local_128.ArrayMax = 0;
          TArrayPrivateFriend::
          Serialize<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    (param_1,&local_128);
          DestructItems<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                     local_128.AllocatorInstance.Data,local_128.ArrayNum);
          if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
              local_128.AllocatorInstance.Data !=
              (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
        }
        iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar7 < 0x11) {
          local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.ArrayNum = 0;
          local_108.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_>
                    (param_1,&local_108);
          if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.AllocatorInstance.Data);
          }
        }
        pTVar1 = pTVar1 + 2;
        puVar16 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar16 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
          }
        }
        else {
          *(uint *)&(pTVar1->AllocatorInstance).Data = *puVar16;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
        uVar13 = (ulonglong)(uint)local_d8.CurrentBitIndex;
        FVar10 = local_80.AllocatorInstance.SecondaryData;
      } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
    }
  }
  else {
    local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_60);
    TSparseArray<FMeshPolygon_Legacy,FDefaultSparseArrayAllocator>::Empty
              (&param_2->Container,local_60.NumBits);
    local_160 = CONCAT44(local_160._4_4_,1);
    uVar18 = uVar13;
    uVar15 = uVar13;
    if (local_60.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_60.AllocatorInstance.SecondaryData;
      }
      uVar14 = *(uint *)FVar10;
      while (uVar14 == 0) {
        iVar7 = (int)uVar13;
        uVar15 = (ulonglong)((int)uVar15 + 0x20);
        uVar14 = iVar7 + 1;
        uVar13 = (ulonglong)uVar14;
        if ((int)(((int)(local_60.NumBits - 1U) >> 0x1f & 0x1fU) + (local_60.NumBits - 1U)) >> 5 <
            (int)uVar14) {
          uVar18 = (ulonglong)(uint)local_60.NumBits;
          goto LAB_14365bc44;
        }
        uVar14 = *(uint *)((uchar *)((longlong)FVar10 + 4) + (longlong)iVar7 * 4);
      }
      local_160 = (ulonglong)(-uVar14 & uVar14);
      uVar18 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_f8 = (int)lVar4;
      uVar14 = (int)uVar15 + -1 + local_f8;
      uVar18 = (ulonglong)uVar14;
      if (local_60.NumBits < (int)uVar14) {
        uVar18 = (ulonglong)(uint)local_60.NumBits;
      }
    }
LAB_14365bc44:
    FVar10 = local_60.AllocatorInstance.SecondaryData;
    if ((int)uVar18 < local_60.NumBits) {
      uVar14 = 0xffffffff;
      do {
        local_94 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0xffffffff;
        pFVar8 = TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)param_2,&local_90
                            ,(int)uVar18);
        puVar2 = pFVar8->Pointer;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *(undefined4 *)(puVar2 + 4) = 0xffffffff;
        }
        pTVar1 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&param_2->Container + (longlong)(int)uVar18 * 0x28);
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x140,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FArchive *)(*pcVar5)();
          return pFVar9;
        }
        TArrayPrivateFriend::Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>
                  (param_1,pTVar1);
        iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
        if (iVar7 < 0x1e) {
          local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.ArrayNum = 0;
          local_138.ArrayMax = 0;
          TArrayPrivateFriend::
          Serialize<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    (param_1,&local_138);
          DestructItems<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                     local_138.AllocatorInstance.Data,local_138.ArrayNum);
          if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
              local_138.AllocatorInstance.Data !=
              (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_138.AllocatorInstance.Data);
          }
        }
        iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar7 < 0x11) {
          local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.ArrayNum = 0;
          local_118.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_>
                    (param_1,&local_118);
          if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.AllocatorInstance.Data);
          }
        }
        pTVar1 = pTVar1 + 2;
        puVar16 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar16 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
          }
        }
        else {
          *(uint *)&(pTVar1->AllocatorInstance).Data = *puVar16;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar14 = uVar14 & ~(uint)local_160;
        FVar10 = (ForElementType<unsigned_int>)&local_60;
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_60.AllocatorInstance.SecondaryData;
        }
        uVar11 = uVar14 & *(uint *)((longlong)FVar10 + (longlong)(int)uVar13 * 4);
        while (uVar11 == 0) {
          iVar7 = (int)uVar13;
          uVar15 = (ulonglong)((int)uVar15 + 0x20);
          uVar11 = iVar7 + 1;
          uVar13 = (ulonglong)uVar11;
          if ((int)(((int)(local_60.NumBits - 1U) >> 0x1f & 0x1fU) + (local_60.NumBits - 1U)) >> 5 <
              (int)uVar11) {
            uVar18 = (ulonglong)(uint)local_60.NumBits;
            goto LAB_14365be33;
          }
          uVar14 = 0xffffffff;
          uVar11 = *(uint *)((uchar *)((longlong)FVar10 + 4) + (longlong)iVar7 * 4);
        }
        local_160 = CONCAT44(local_160._4_4_,-uVar11 & uVar11);
        uVar18 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_f4 = (int)lVar4;
        uVar11 = (int)uVar15 + -1 + local_f4;
        uVar18 = (ulonglong)uVar11;
        if (local_60.NumBits < (int)uVar11) {
          uVar18 = (ulonglong)(uint)local_60.NumBits;
        }
LAB_14365be33:
        FVar10 = local_60.AllocatorInstance.SecondaryData;
      } while ((int)uVar18 < local_60.NumBits);
    }
  }
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  return param_1;
}

// operator<< @ 14365c240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArchive * __cdecl
operator<<(FArchive *param_1,TMeshElementArrayBase<FMeshTriangle_Legacy> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FSparseArrayAllocationInfo *pFVar13;
  FArchive *pFVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *pTVar24;
  undefined1 auStack_148 [32];
  int local_128;
  uint local_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined8 local_e8;
  TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FSparseArrayAllocationInfo local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_100 = (TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)param_2;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(param_2->Container).field_0x8 << 4,
             (longlong)*(int *)&(param_2->Container).field_0xc << 4);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(param_2->Container).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(param_2->Container).field_0x2c + 0x1fU >> 5) << 2);
  uVar18 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    uVar11 = *(uint *)&(param_2->Container).field_0x8;
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_a8.MaxBits = 0x80;
    local_a8.NumBits = uVar11;
    uVar21 = uVar11 + 0x1f >> 5;
    if (uVar11 + 0x1f >> 5 != 0) {
      if (4 < uVar21) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_a8.AllocatorInstance,0,uVar21,4);
        local_a8.MaxBits = uVar21 << 5;
      }
      FVar15 = (ForElementType<unsigned_int>)&local_a8;
      if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_a8.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar15,0,(ulonglong)uVar21 << 2);
      uVar21 = local_a8.NumBits & 0x8000001f;
      if ((int)uVar21 < 0) {
        uVar21 = (uVar21 - 1 | 0xffffffe0) + 1;
      }
      if (uVar21 != 0) {
        FVar15 = (ForElementType<unsigned_int>)&local_a8;
        if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_a8.AllocatorInstance.SecondaryData;
        }
        puVar22 = (uint *)((longlong)FVar15 +
                          (longlong)
                          ((int)(local_a8.NumBits + (local_a8.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar22 = *puVar22 & 0xffffffffU >> (0x20U - (char)uVar21 & 0x1f);
      }
    }
    local_128 = 0;
    local_e8 = 1;
    pTVar24 = (TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)param_2;
    if (0 < (int)uVar11) {
      uVar21 = 1;
      uVar20 = uVar18;
      do {
        iVar12 = (int)uVar20;
        if ((*(int *)&(param_2->Container).field_0x28 <= iVar12) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar14 = (FArchive *)(*pcVar7)();
          return pFVar14;
        }
        puVar3 = *(undefined1 **)&(param_2->Container).field_0x20;
        puVar17 = &(param_2->Container).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar17 = puVar3;
        }
        lVar6 = (uVar20 >> 5) * 4;
        if ((*(uint *)(puVar17 + lVar6) & uVar21) != 0) {
          if ((local_a8.NumBits <= iVar12) &&
             (bVar10 = FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            pFVar14 = (FArchive *)(*pcVar7)();
            return pFVar14;
          }
          FVar15 = (ForElementType<unsigned_int>)&local_a8;
          if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_a8.AllocatorInstance.SecondaryData;
          }
          puVar22 = (uint *)((longlong)FVar15 + lVar6);
          *puVar22 = *puVar22 | uVar21;
          local_128 = iVar12;
        }
        uVar20 = (ulonglong)(iVar12 + 1U);
        uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
        pTVar24 = local_100;
      } while ((int)(iVar12 + 1U) < (int)uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&local_a8,local_128 + 1);
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_a8);
    uVar11 = (pTVar24->AllocationFlags).NumBits;
    pTStack_118 = &pTVar24->AllocationFlags;
    local_120 = 0;
    uStack_11c = (uint)local_e8;
    uStack_10c = 0;
    uStack_108 = 0;
    if (uVar11 != 0) {
      FVar15 = (pTVar24->AllocationFlags).AllocatorInstance.SecondaryData;
      if (FVar15 == (ForElementType<unsigned_int>)0x0) {
        FVar15 = (ForElementType<unsigned_int>)pTStack_118;
      }
      uVar21 = *(uint *)FVar15;
      uVar20 = uVar18;
      while (uVar21 == 0) {
        iVar12 = (int)uVar18;
        uStack_108 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_108;
        local_120 = iVar12 + 1;
        uVar18 = (ulonglong)local_120;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_120)
        goto LAB_14365c7f5;
        uVar21 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar12 * 4);
      }
      uStack_11c = -uVar21 & uVar21;
      uVar18 = (ulonglong)uStack_11c * 2 + 1;
      lVar6 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_f0 = (int)lVar6;
      uStack_10c = local_f0 + -1 + uStack_108;
      uVar18 = (ulonglong)uStack_10c;
      if ((int)uVar11 < (int)uStack_10c) {
LAB_14365c7f5:
        uVar18 = (ulonglong)uVar11;
        uStack_10c = uVar11;
      }
    }
    local_110 = 0xffffffff;
    local_d8._padding_ = CONCAT44(uStack_11c,local_120);
    local_d8.CurrentBitIndex = uStack_10c;
    local_d8.UnvisitedBitMask = 0xffffffff;
    local_d8._28_4_ = uStack_104;
    local_d8.BaseBitIndex = uStack_108;
    local_e0 = pTVar24;
    local_d8.Array = pTStack_118;
    FVar15 = local_a8.AllocatorInstance.SecondaryData;
    if ((int)uVar18 < (int)uVar11) {
      do {
        puVar22 = (uint *)((longlong)(int)uVar18 * 0x10 + *(longlong *)&local_e0->Data);
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Ar.IsLoading()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                                ,0x129,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar14 = (FArchive *)(*pcVar7)();
          return pFVar14;
        }
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar22,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar22);
          }
        }
        else {
          *puVar22 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        puVar4 = puVar22 + 1;
        puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        puVar4 = puVar22 + 2;
        puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
        if (0x22 < iVar12) {
          puVar22 = puVar22 + 3;
          puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
          if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar22,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,puVar22);
            }
          }
          else {
            *puVar22 = *puVar4;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
        }
        local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
        uVar18 = (ulonglong)(uint)local_d8.CurrentBitIndex;
        FVar15 = local_a8.AllocatorInstance.SecondaryData;
      } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
    }
  }
  else {
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.NumBits = 0;
    local_88.MaxBits = 0x80;
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_88);
    TSparseArray<FMeshTriangle_Legacy,FDefaultSparseArrayAllocator>::Empty
              (&param_2->Container,local_88.NumBits);
    uVar9 = _UNK_15060db28;
    uVar8 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar11 = 1;
    uVar20 = uVar18;
    uVar23 = uVar18;
    if (local_88.NumBits != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_88.AllocatorInstance.SecondaryData;
      }
      uVar21 = *(uint *)FVar15;
      while (uVar21 == 0) {
        iVar12 = (int)uVar20;
        uVar23 = (ulonglong)((int)uVar23 + 0x20);
        uVar21 = iVar12 + 1;
        uVar20 = (ulonglong)uVar21;
        if ((int)(((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU) + (local_88.NumBits - 1U)) >> 5 <
            (int)uVar21) {
          uVar18 = (ulonglong)(uint)local_88.NumBits;
          goto LAB_14365c360;
        }
        uVar21 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar12 * 4);
      }
      uVar11 = -uVar21 & uVar21;
      uVar18 = (ulonglong)uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_f8 = (int)lVar6;
      uVar21 = (int)uVar23 + -1 + local_f8;
      uVar18 = (ulonglong)uVar21;
      if (local_88.NumBits < (int)uVar21) {
        uVar18 = (ulonglong)(uint)local_88.NumBits;
      }
    }
LAB_14365c360:
    FVar15 = local_88.AllocatorInstance.SecondaryData;
    if ((int)uVar18 < local_88.NumBits) {
      uVar21 = 0xffffffff;
      do {
        local_68 = uVar8;
        uStack_60 = uVar9;
        pFVar13 = TSparseArrayBase<16,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                            ((TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)param_2,
                             &local_b8,(int)uVar18);
        puVar2 = pFVar13->Pointer;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = local_68;
          puVar2[1] = uStack_60;
        }
        pFVar19 = (((TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)param_2)->Data).
                  AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("Ar.IsLoading()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                                ,0x129,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pFVar14 = (FArchive *)(*pcVar7)();
          return pFVar14;
        }
        puVar22 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar22 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar19,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar19);
          }
        }
        else {
          *(uint *)pFVar19 = *puVar22;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        pFVar1 = pFVar19 + 4;
        puVar3 = &param_1->field_0x2a;
        puVar22 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar22 + 1) {
          if ((*puVar3 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
          }
        }
        else {
          *(uint *)pFVar1 = *puVar22;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        pFVar1 = pFVar19 + 8;
        puVar22 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar22 + 1) {
          if ((*puVar3 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
          }
        }
        else {
          *(uint *)pFVar1 = *puVar22;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
        if (0x22 < iVar12) {
          pFVar19 = pFVar19 + 0xc;
          puVar22 = (uint *)**(undefined8 **)&param_1->field_0x8;
          if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar22 + 1) {
            if ((*puVar3 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar19,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar19);
            }
          }
          else {
            *(uint *)pFVar19 = *puVar22;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
        }
        uVar21 = uVar21 & ~uVar11;
        FVar15 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_88.AllocatorInstance.SecondaryData;
        }
        uVar16 = uVar21 & *(uint *)((longlong)FVar15 + (longlong)(int)uVar20 * 4);
        while (uVar16 == 0) {
          iVar12 = (int)uVar20;
          uVar23 = (ulonglong)((int)uVar23 + 0x20);
          uVar16 = iVar12 + 1;
          uVar20 = (ulonglong)uVar16;
          if ((int)(((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU) + (local_88.NumBits - 1U)) >> 5 <
              (int)uVar16) {
            uVar18 = (ulonglong)(uint)local_88.NumBits;
            goto LAB_14365c582;
          }
          uVar21 = 0xffffffff;
          uVar16 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar12 * 4);
        }
        uVar11 = -uVar16 & uVar16;
        uVar18 = (ulonglong)uVar11 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_f4 = (int)lVar6;
        uVar16 = (int)uVar23 + -1 + local_f4;
        uVar18 = (ulonglong)uVar16;
        if (local_88.NumBits < (int)uVar16) {
          uVar18 = (ulonglong)(uint)local_88.NumBits;
        }
LAB_14365c582:
        param_2 = (TMeshElementArrayBase<FMeshTriangle_Legacy> *)local_100;
        FVar15 = local_88.AllocatorInstance.SecondaryData;
      } while ((int)uVar18 < local_88.NumBits);
    }
  }
  if (FVar15 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar15);
  }
  return param_1;
}

// operator<< @ 14365c9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl
operator<<(FArchive *param_1,TMeshElementArrayBase<FMeshVertexInstance_Legacy> *param_2)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FSparseArrayAllocationInfo *pFVar10;
  FArchive *pFVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *pTVar18;
  ulonglong uVar19;
  undefined1 auStack_158 [32];
  int local_138;
  ulonglong local_130;
  uint local_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined4 local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *local_108;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_100;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_f0;
  int local_e0;
  int local_dc;
  int local_d8;
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  FSparseArrayAllocationInfo local_90;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_108 = (TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)param_2;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(param_2->Container).field_0x8 * 0x18,
             (longlong)*(int *)&(param_2->Container).field_0xc * 0x18);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(param_2->Container).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(param_2->Container).field_0x2c + 0x1fU >> 5) << 2);
  uVar15 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    uVar16 = *(uint *)&(param_2->Container).field_0x8;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_80.MaxBits = 0x80;
    local_80.NumBits = uVar16;
    uVar13 = uVar16 + 0x1f >> 5;
    if (uVar16 + 0x1f >> 5 != 0) {
      if (4 < uVar13) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_80.AllocatorInstance,0,uVar13,4);
        local_80.MaxBits = uVar13 << 5;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_80;
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_80.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar12,0,(ulonglong)uVar13 << 2);
      uVar13 = local_80.NumBits & 0x8000001f;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
      }
      if (uVar13 != 0) {
        FVar12 = (ForElementType<unsigned_int>)&local_80;
        if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_80.AllocatorInstance.SecondaryData;
        }
        puVar3 = (uint *)((longlong)FVar12 +
                         (longlong)
                         ((int)(local_80.NumBits + (local_80.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)uVar13 & 0x1f);
      }
    }
    local_138 = 0;
    local_130 = 1;
    pTVar18 = (TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)param_2;
    if (0 < (int)uVar16) {
      uVar13 = 1;
      uVar17 = uVar15;
      do {
        iVar9 = (int)uVar17;
        if ((*(int *)&(param_2->Container).field_0x28 <= iVar9) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FArchive *)(*pcVar7)();
          return pFVar11;
        }
        puVar4 = *(undefined1 **)&(param_2->Container).field_0x20;
        puVar14 = &(param_2->Container).field_0x10;
        if (puVar4 != (undefined1 *)0x0) {
          puVar14 = puVar4;
        }
        if ((*(uint *)(puVar14 + (uVar17 >> 5) * 4) & uVar13) != 0) {
          if ((local_80.NumBits <= iVar9) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            pFVar11 = (FArchive *)(*pcVar7)();
            return pFVar11;
          }
          FVar12 = (ForElementType<unsigned_int>)&local_80;
          if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_80.AllocatorInstance.SecondaryData;
          }
          puVar3 = (uint *)((uVar17 >> 5) * 4 + (longlong)FVar12);
          *puVar3 = *puVar3 | uVar13;
          local_138 = iVar9;
        }
        uVar17 = (ulonglong)(iVar9 + 1U);
        uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
        pTVar18 = local_108;
      } while ((int)(iVar9 + 1U) < (int)uVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&local_80,local_138 + 1);
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_80);
    uVar16 = (pTVar18->AllocationFlags).NumBits;
    pTStack_120 = &pTVar18->AllocationFlags;
    local_128 = 0;
    uStack_124 = (uint)local_130;
    uStack_114 = 0;
    uStack_110 = 0;
    if (uVar16 != 0) {
      FVar12 = (pTVar18->AllocationFlags).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<unsigned_int>)0x0) {
        FVar12 = (ForElementType<unsigned_int>)pTStack_120;
      }
      uVar13 = *(uint *)FVar12;
      uVar17 = uVar15;
      while (uVar13 == 0) {
        uStack_110 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_110;
        iVar9 = (int)uVar15;
        local_128 = iVar9 + 1;
        uVar15 = (ulonglong)local_128;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_128)
        goto LAB_14365cf00;
        uVar13 = *(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)iVar9 * 4);
      }
      uStack_124 = -uVar13 & uVar13;
      uVar15 = (ulonglong)uStack_124 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_d8 = (int)lVar6;
      uStack_114 = local_d8 + -1 + uStack_110;
      uVar15 = (ulonglong)uStack_114;
      if ((int)uVar16 < (int)uStack_114) {
LAB_14365cf00:
        uVar15 = (ulonglong)uVar16;
        uStack_114 = uVar16;
      }
    }
    local_118 = 0xffffffff;
    local_c8._padding_ = CONCAT44(uStack_124,local_128);
    local_c8.CurrentBitIndex = uStack_114;
    local_c8.UnvisitedBitMask = 0xffffffff;
    local_c8._28_4_ = uStack_10c;
    local_c8.BaseBitIndex = uStack_110;
    local_d0 = pTVar18;
    local_c8.Array = pTStack_120;
    FVar12 = local_80.AllocatorInstance.SecondaryData;
    if ((int)uVar15 < (int)uVar16) {
      do {
        lVar6 = *(longlong *)&local_d0->Data;
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x100,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FArchive *)(*pcVar7)();
          return pFVar11;
        }
        puVar3 = (uint *)(lVar6 + (longlong)(int)uVar15 * 0x18);
        puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar3);
          }
        }
        else {
          *puVar3 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar9 < 0x11) {
          local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f0.ArrayNum = 0;
          local_f0.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FPolygonID,TSizedDefaultAllocator<32>_>(param_1,&local_f0);
          if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.AllocatorInstance.Data);
          }
        }
        local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
        uVar15 = (ulonglong)(uint)local_c8.CurrentBitIndex;
        FVar12 = local_80.AllocatorInstance.SecondaryData;
      } while (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits);
    }
  }
  else {
    local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_60);
    TSparseArray<FMeshVertexInstance_Legacy,FDefaultSparseArrayAllocator>::Empty
              (&param_2->Container,local_60.NumBits);
    local_130 = CONCAT44(local_130._4_4_,1);
    uVar17 = uVar15;
    uVar19 = uVar15;
    if (local_60.NumBits != 0) {
      FVar12 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_60.AllocatorInstance.SecondaryData;
      }
      uVar16 = *(uint *)FVar12;
      while (uVar16 == 0) {
        iVar9 = (int)uVar15;
        uVar17 = (ulonglong)((int)uVar17 + 0x20);
        uVar16 = iVar9 + 1;
        uVar15 = (ulonglong)uVar16;
        if ((int)(((int)(local_60.NumBits - 1U) >> 0x1f & 0x1fU) + (local_60.NumBits - 1U)) >> 5 <
            (int)uVar16) {
          uVar19 = (ulonglong)(uint)local_60.NumBits;
          goto LAB_14365cb15;
        }
        uVar16 = *(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)iVar9 * 4);
      }
      local_130 = (ulonglong)(-uVar16 & uVar16);
      uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_e0 = (int)lVar6;
      uVar16 = (int)uVar17 + -1 + local_e0;
      uVar19 = (ulonglong)uVar16;
      if (local_60.NumBits < (int)uVar16) {
        uVar19 = (ulonglong)(uint)local_60.NumBits;
      }
    }
LAB_14365cb15:
    FVar12 = local_60.AllocatorInstance.SecondaryData;
    if ((int)uVar19 < local_60.NumBits) {
      uVar16 = 0xffffffff;
      do {
        local_a4 = 0;
        local_a8 = 0xffffffff;
        local_a0 = 0;
        local_98 = 0;
        pFVar10 = TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                            ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)param_2,
                             &local_90,(int)uVar19);
        puVar1 = pFVar10->Pointer;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0xffffffff;
          *(undefined8 *)(puVar1 + 2) = 0;
          *(undefined8 *)(puVar1 + 4) = 0;
        }
        pFVar2 = (((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)param_2)->Data).
                 AllocatorInstance.Data;
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x100,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FArchive *)(*pcVar7)();
          return pFVar11;
        }
        pFVar2 = pFVar2 + (longlong)(int)uVar19 * 0x18;
        puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar2);
          }
        }
        else {
          *(uint *)pFVar2 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar9 < 0x11) {
          local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.ArrayNum = 0;
          local_100.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FPolygonID,TSizedDefaultAllocator<32>_>(param_1,&local_100)
          ;
          if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.AllocatorInstance.Data);
          }
        }
        uVar16 = uVar16 & ~(uint)local_130;
        FVar12 = (ForElementType<unsigned_int>)&local_60;
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_60.AllocatorInstance.SecondaryData;
        }
        uVar13 = uVar16 & *(uint *)((longlong)FVar12 + (longlong)(int)uVar15 * 4);
        while (uVar13 == 0) {
          iVar9 = (int)uVar15;
          uVar17 = (ulonglong)((int)uVar17 + 0x20);
          uVar13 = iVar9 + 1;
          uVar15 = (ulonglong)uVar13;
          if ((int)(((int)(local_60.NumBits - 1U) >> 0x1f & 0x1fU) + (local_60.NumBits - 1U)) >> 5 <
              (int)uVar13) {
            uVar19 = (ulonglong)(uint)local_60.NumBits;
            goto LAB_14365cc94;
          }
          uVar16 = 0xffffffff;
          uVar13 = *(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)iVar9 * 4);
        }
        local_130 = CONCAT44(local_130._4_4_,-uVar13 & uVar13);
        uVar19 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_dc = (int)lVar6;
        uVar13 = (int)uVar17 + -1 + local_dc;
        uVar19 = (ulonglong)uVar13;
        if (local_60.NumBits < (int)uVar13) {
          uVar19 = (ulonglong)(uint)local_60.NumBits;
        }
LAB_14365cc94:
        param_2 = (TMeshElementArrayBase<FMeshVertexInstance_Legacy> *)local_108;
        FVar12 = local_60.AllocatorInstance.SecondaryData;
      } while ((int)uVar19 < local_60.NumBits);
    }
  }
  if (FVar12 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  return param_1;
}

// operator<< @ 14365d050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,TMeshElementArrayBase<FMeshVertex_Legacy> *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  FArchive *pFVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined1 auStack_128 [32];
  int local_108;
  ulonglong local_100;
  uint local_f8;
  uint local_f0;
  uint uStack_ec;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  TMeshElementArrayBase<FMeshVertex_Legacy> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FSparseArrayAllocationInfo local_98;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  ulonglong uVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(param_2->Container).field_0x8 << 5,
             (longlong)*(int *)&(param_2->Container).field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(param_2->Container).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(param_2->Container).field_0x2c + 0x1fU >> 5) << 2);
  uVar13 = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    uVar12 = *(uint *)&(param_2->Container).field_0x8;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.MaxBits = 0x80;
    local_88.NumBits = uVar12;
    uVar10 = uVar12 + 0x1f >> 5;
    local_f8 = uVar12;
    if (uVar12 + 0x1f >> 5 != 0) {
      if (4 < uVar10) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_88.AllocatorInstance,0,uVar10,4);
        local_88.MaxBits = uVar10 << 5;
      }
      FVar9 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_88.AllocatorInstance.SecondaryData;
      }
      memset((void *)FVar9,0,(ulonglong)uVar10 << 2);
      uVar10 = local_88.NumBits & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      if (uVar10 != 0) {
        FVar9 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_88.AllocatorInstance.SecondaryData;
        }
        puVar15 = (uint *)((longlong)FVar9 +
                          (longlong)
                          ((int)(local_88.NumBits + (local_88.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar15 = *puVar15 & 0xffffffffU >> (0x20U - (char)uVar10 & 0x1f);
      }
    }
    local_108 = 0;
    local_100 = 1;
    if (0 < (int)uVar12) {
      uVar12 = 1;
      uVar14 = uVar13;
      do {
        iVar6 = (int)uVar14;
        if ((*(int *)&(param_2->Container).field_0x28 <= iVar6) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        puVar2 = *(undefined1 **)&(param_2->Container).field_0x20;
        puVar11 = &(param_2->Container).field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        lVar3 = (uVar14 >> 5) * 4;
        if ((*(uint *)(puVar11 + lVar3) & uVar12) != 0) {
          if ((local_88.NumBits <= iVar6) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FArchive *)(*pcVar4)();
            return pFVar8;
          }
          FVar9 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar9 = local_88.AllocatorInstance.SecondaryData;
          }
          puVar15 = (uint *)(lVar3 + (longlong)FVar9);
          *puVar15 = *puVar15 | uVar12;
          local_108 = iVar6;
        }
        uVar14 = (ulonglong)(iVar6 + 1U);
        uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      } while ((int)(iVar6 + 1U) < (int)local_f8);
    }
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&local_88,local_108 + 1);
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_88);
    uVar12 = *(uint *)&(param_2->Container).field_0x28;
    puStack_e8 = &(param_2->Container).field_0x10;
    local_f0 = 0;
    uStack_ec = (uint)local_100;
    uStack_dc = 0;
    uStack_d8 = 0;
    if (uVar12 != 0) {
      puVar15 = *(uint **)&(param_2->Container).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puStack_e8;
      }
      uVar10 = *puVar15;
      uVar14 = uVar13;
      while (uVar10 == 0) {
        iVar6 = (int)uVar13;
        uStack_d8 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_d8;
        local_f0 = iVar6 + 1;
        uVar13 = (ulonglong)local_f0;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f0)
        goto LAB_14365d4f2;
        uVar10 = puVar15[(longlong)iVar6 + 1];
      }
      uStack_ec = -uVar10 & uVar10;
      uVar13 = (ulonglong)uStack_ec * 2 + 1;
      lVar3 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_c8 = (int)lVar3;
      uStack_dc = local_c8 + -1 + uStack_d8;
      uVar13 = (ulonglong)uStack_dc;
      if ((int)uVar12 < (int)uStack_dc) {
LAB_14365d4f2:
        uVar13 = (ulonglong)uVar12;
        uStack_dc = uVar12;
      }
    }
    local_e0 = 0xffffffff;
    local_b8._padding_ = CONCAT44(uStack_ec,local_f0);
    local_b8.CurrentBitIndex = uStack_dc;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_d4;
    local_b8.BaseBitIndex = uStack_d8;
    local_c0 = param_2;
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_e8;
    FVar9 = local_88.AllocatorInstance.SecondaryData;
    if ((int)uVar13 < (int)uVar12) {
      do {
        pTVar17 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                  ((longlong)(int)uVar13 * 0x20 + *(longlong *)&local_c0->Container);
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0xed,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar6 < 0x11) {
          TArrayPrivateFriend::Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>
                    (param_1,pTVar17);
          TArrayPrivateFriend::Serialize<FEdgeID,TSizedDefaultAllocator<32>_>
                    (param_1,(TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)(pTVar17 + 1));
        }
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar13 = (ulonglong)(uint)local_b8.CurrentBitIndex;
        FVar9 = local_88.AllocatorInstance.SecondaryData;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
  else {
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    operator<<<FDefaultBitArrayAllocator>(param_1,&local_68);
    TSparseArray<FMeshVertex_Legacy,FDefaultSparseArrayAllocator>::Empty
              (&param_2->Container,local_68.NumBits);
    local_100 = CONCAT44(local_100._4_4_,1);
    uVar14 = uVar13;
    uVar16 = uVar13;
    if (local_68.NumBits != 0) {
      FVar9 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_68.AllocatorInstance.SecondaryData;
      }
      uVar12 = *(uint *)FVar9;
      while (uVar12 == 0) {
        iVar6 = (int)uVar13;
        uVar14 = (ulonglong)((int)uVar14 + 0x20);
        uVar12 = iVar6 + 1;
        uVar13 = (ulonglong)uVar12;
        if ((int)(((int)(local_68.NumBits - 1U) >> 0x1f & 0x1fU) + (local_68.NumBits - 1U)) >> 5 <
            (int)uVar12) {
          uVar16 = (ulonglong)(uint)local_68.NumBits;
          goto LAB_14365d173;
        }
        uVar12 = *(uint *)((uchar *)((longlong)FVar9 + 4) + (longlong)iVar6 * 4);
      }
      local_100 = (ulonglong)(-uVar12 & uVar12);
      uVar16 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_d0 = (int)lVar3;
      uVar12 = (int)uVar14 + -1 + local_d0;
      uVar16 = (ulonglong)uVar12;
      if (local_68.NumBits < (int)uVar12) {
        uVar16 = (ulonglong)(uint)local_68.NumBits;
      }
    }
LAB_14365d173:
    FVar9 = local_68.AllocatorInstance.SecondaryData;
    if ((int)uVar16 < local_68.NumBits) {
      uVar12 = 0xffffffff;
      do {
        pFVar7 = TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)param_2,&local_98
                            ,(int)uVar16);
        puVar1 = pFVar7->Pointer;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
        }
        pTVar17 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                  ((longlong)(int)uVar16 * 0x20 + *(longlong *)&param_2->Container);
        if (((param_1->field_0x28 & 1) == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0xed,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
        if (iVar6 < 0x11) {
          TArrayPrivateFriend::Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>
                    (param_1,pTVar17);
          TArrayPrivateFriend::Serialize<FEdgeID,TSizedDefaultAllocator<32>_>
                    (param_1,(TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)(pTVar17 + 1));
        }
        uVar12 = uVar12 & ~(uint)local_100;
        FVar9 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_68.AllocatorInstance.SecondaryData;
        }
        uVar10 = uVar12 & *(uint *)((longlong)FVar9 + (longlong)(int)uVar13 * 4);
        while (uVar10 == 0) {
          iVar6 = (int)uVar13;
          uVar14 = (ulonglong)((int)uVar14 + 0x20);
          uVar10 = iVar6 + 1;
          uVar13 = (ulonglong)uVar10;
          if ((int)(((int)(local_68.NumBits - 1U) >> 0x1f & 0x1fU) + (local_68.NumBits - 1U)) >> 5 <
              (int)uVar10) {
            uVar16 = (ulonglong)(uint)local_68.NumBits;
            goto LAB_14365d292;
          }
          uVar12 = 0xffffffff;
          uVar10 = *(uint *)((uchar *)((longlong)FVar9 + 4) + (longlong)iVar6 * 4);
        }
        local_100 = CONCAT44(local_100._4_4_,-uVar10 & uVar10);
        uVar16 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_cc = (int)lVar3;
        uVar10 = (int)uVar14 + -1 + local_cc;
        uVar16 = (ulonglong)uVar10;
        if (local_68.NumBits < (int)uVar10) {
          uVar16 = (ulonglong)(uint)local_68.NumBits;
        }
LAB_14365d292:
        FVar9 = local_68.AllocatorInstance.SecondaryData;
      } while ((int)uVar16 < local_68.NumBits);
    }
  }
  if (FVar9 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  return param_1;
}

// operator<< @ 14365d5f0

FArchive * __cdecl operator<<(FArchive *param_1,FAttributesSetBase *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FArchive *pFVar14;
  ulonglong uVar15;
  TSparseSetElement<TTuple<FName,FAttributesSetEntry>_> *pTVar16;
  uint uVar17;
  TTuple<FName,FAttributesSetEntry> *pTVar18;
  ForAnyElementType FVar19;
  FArchive *local_res8;
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  *pTStack_90;
  FAttributesSetBase *local_88;
  undefined2 local_80;
  FSparseArrayAllocationInfo local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  local_res8 = param_1;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID),
     0x19 < iVar12)) {
    piVar2 = &param_2->NumElements;
    piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    if ((param_1->field_0x28 & 4) != 0) {
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_68,
                 (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)param_2);
      local_80 = 0;
      stack0xffffffffffffff58 = local_68._16_16_;
      local_b8 = (longlong *)local_68._0_8_;
      auStack_b0._0_8_ = local_68._8_8_;
      local_98 = local_48;
      pTStack_90 = pTStack_40;
      uVar15 = local_68._24_8_ >> 0x20;
      uVar17 = local_68._28_4_;
      local_88 = param_2;
      if ((int)uVar17 < *(int *)(local_68._16_8_ + 0x18)) {
        do {
          lVar7 = *local_b8;
          lVar8 = *(longlong *)(lVar7 + 8 + (longlong)(int)uVar15 * 0x18);
          if ((*(byte *)(lVar8 + 0x14) & 8) != 0) {
            uVar9 = *(undefined8 *)(lVar7 + (longlong)(int)uVar17 * 0x18);
            *(undefined8 *)(lVar7 + 8 + (longlong)(int)uVar17 * 0x18) = 0;
            iVar12 = (int)local_c0;
            if ((int)local_c0 == local_c0._4_4_) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
            }
            local_c0 = CONCAT44(local_c0._4_4_,iVar12 + 1);
            *(undefined8 *)(local_c8.Data + (longlong)iVar12 * 0x10) = uVar9;
            *(longlong *)(local_c8.Data + (longlong)iVar12 * 0x10 + 8) = lVar8;
            TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_90,uVar17);
            local_80 = CONCAT11(local_80._1_1_,1);
          }
          uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
          uVar15 = (ulonglong)uStack_9c;
          uVar17 = uStack_9c;
        } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          uVar17 = *(int *)&(local_88->Map).field_0x8 - *(int *)&(local_88->Map).field_0x34;
          if (uVar17 < 4) {
            iVar12 = 1;
          }
          else {
            uVar15 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
            lVar7 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar12 = 1 << ((byte)lVar7 & 0x1f);
          }
          if (((0 < (int)uVar17) && (*(int *)&(local_88->Map).field_0x48 < iVar12)) ||
             (iVar12 < *(int *)&(local_88->Map).field_0x48)) {
            *(int *)&(local_88->Map).field_0x48 = iVar12;
            TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)local_88);
          }
        }
      }
    }
    TSetPrivateFriend::
    Serialize<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                        *)param_2);
    if ((param_1->field_0x28 & 4) != 0) {
      iVar12 = (int)local_c0;
      pTVar18 = (TTuple<FName,FAttributesSetEntry> *)
                (local_c8.Data + (longlong)(int)local_c0 * 0x10);
      FVar19.Data = local_c8.Data;
      while( true ) {
        if ((int)local_c0 != iVar12) {
          `TCheckedPointerIterator<TTuple<FName,FAttributesSetEntry>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        param_1 = local_res8;
        if ((TTuple<FName,FAttributesSetEntry> *)FVar19.Data == pTVar18) break;
        iVar3 = *(int *)&(param_2->Map).field_0x34;
        if (iVar3 == 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,1,(ForAnyElementType *)param_2,(int *)&(param_2->Map).field_0x8
                              ,(int *)&(param_2->Map).field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Map).field_0x10,false);
        }
        else {
          iVar13 = *(int *)&(param_2->Map).field_0x30;
          iVar3 = iVar3 + -1;
          lVar7 = *(longlong *)&param_2->Map;
          iVar4 = *(int *)(lVar7 + 4 + (longlong)iVar13 * 0x18);
          *(int *)&(param_2->Map).field_0x30 = iVar4;
          *(int *)&(param_2->Map).field_0x34 = iVar3;
          if (iVar3 != 0) {
            *(undefined4 *)(lVar7 + (longlong)iVar4 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar13);
        pTVar16 = (TSparseSetElement<TTuple<FName,FAttributesSetEntry>_> *)0x0;
        if (local_78.Pointer != (TSparseSetElement<TTuple<FName,FAttributesSetEntry>_> *)0x0) {
          *(undefined8 *)local_78.Pointer = *(undefined8 *)FVar19.Data;
          *(undefined8 *)((longlong)local_78.Pointer + 8) =
               *(undefined8 *)&((TTuple<FName,FAttributesSetEntry> *)FVar19.Data)->field_0x8;
          *(undefined8 *)&((TTuple<FName,FAttributesSetEntry> *)FVar19.Data)->field_0x8 = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          pTVar16 = local_78.Pointer;
        }
        uVar9 = *(undefined8 *)pTVar16;
        local_res20[0] = local_78.Index;
        uVar17 = GetTypeHash((FNameEntryId)(uint)uVar9);
        uVar17 = (int)((ulonglong)uVar9 >> 0x20) + uVar17;
        bVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                 ::TryReplaceExisting
                           ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)param_2,uVar17,pTVar16,local_res20,(bool *)0x0);
        if (!bVar11) {
          TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
          ::RehashOrLink((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                          *)param_2,uVar17,pTVar16,local_res20[0]);
        }
        FVar19.Data = FVar19.Data + 0x10;
      }
    }
    DestructItems<TTuple<FName,FAttributesSetEntry>,int>
              ((TTuple<FName,FAttributesSetEntry> *)local_c8.Data,(int)local_c0);
    if ((TTuple<FName,FAttributesSetEntry> *)local_c8.Data !=
        (TTuple<FName,FAttributesSetEntry> *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  else {
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_res8);
      }
    }
    else {
      local_res8 = (FArchive *)CONCAT44(local_res8._4_4_,*(undefined4 *)*plVar5);
      *plVar5 = *plVar5 + 4;
    }
    if (((int)local_res8 != 7) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("NumAttributeTypes == 7",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshAttributeArray.cpp"
                            ,0x42,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FArchive *)(*pcVar10)();
      return pFVar14;
    }
    bVar11 = 1 < *(int *)&(param_2->Map).field_0x48;
    if (!bVar11) {
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                        *)param_2);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)param_2,0,*(int *)&(param_2->Map).field_0x8);
    puVar1 = &(param_2->Map).field_0xc;
    *(undefined4 *)&(param_2->Map).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)param_2,0,(int *)puVar1);
    }
    *(undefined4 *)&(param_2->Map).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Map).field_0x34 = 0;
    iVar12 = *(int *)&(param_2->Map).field_0x2c;
    *(undefined4 *)&(param_2->Map).field_0x28 = 0;
    if ((iVar12 < 0) || (0x80 < iVar12)) {
      *(undefined4 *)&(param_2->Map).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Map).field_0x10,0);
    }
    if (bVar11) {
      *(undefined4 *)&(param_2->Map).field_0x48 = 1;
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                *)param_2);
    }
    SerializeLegacy<UE::Math::TVector4<float>_>(param_1,param_2);
    SerializeLegacy<UE::Math::TVector<float>_>(param_1,param_2);
    SerializeLegacy<UE::Math::TVector2<float>_>(param_1,param_2);
    SerializeLegacy<float>(param_1,param_2);
    SerializeLegacy<int>(param_1,param_2);
    SerializeLegacy<bool>(param_1,param_2);
    SerializeLegacy<FName>(param_1,param_2);
  }
  return param_1;
}

// operator<< @ 14365dad0

FArchive * __cdecl operator<<(FArchive *param_1,FAttributesSetEntry *param_2)

{
  longlong *plVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAttributesSetEntry *pFVar6;
  FArchive *pFVar7;
  uint local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_28 [2];
  undefined8 *local_20;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_2->Ptr).Ptr == (FMeshAttributeArraySetBase *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Entry.Ptr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshAttributeArray.cpp"
                         ,0x1c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    local_res20[0] = ((param_2->Ptr).Ptr)->Type;
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_28[0] = ((param_2->Ptr).Ptr)->Extent;
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_28,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_28);
      }
    }
    else {
      local_28[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    goto LAB_14365dcd5;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res8[0] = 1;
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (iVar5 == 0x1f) {
LAB_14365db66:
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  else {
    iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (3 < iVar5) goto LAB_14365db66;
  }
  pFVar6 = (FAttributesSetEntry *)
           (*(code *)(&`public:_void___cdecl_FAttributesSetEntry::CreateArrayOfType(unsigned_int,unsigned_int)___ptr64'
                       ::__l2::JumpTable)[local_res18[0]])(&local_20,local_res8[0]);
  if (param_2 != pFVar6) {
    pFVar2 = (param_2->Ptr).Ptr;
    (param_2->Ptr).Ptr = (pFVar6->Ptr).Ptr;
    (pFVar6->Ptr).Ptr = (FMeshAttributeArraySetBase *)0x0;
    if (pFVar2 != (FMeshAttributeArraySetBase *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  if (local_20 != (undefined8 *)0x0) {
    (**(code **)*local_20)(local_20,1);
  }
LAB_14365dcd5:
  pFVar2 = (param_2->Ptr).Ptr;
  (**(code **)(pFVar2->_padding_ + 0x38))(pFVar2,param_1);
  return param_1;
}

// operator<< @ 14365dd00

FArchive * __cdecl operator<<(FArchive *param_1,FMeshElementContainer *param_2)

{
  int *piVar1;
  int *piVar2;
  
  operator<<<FDefaultBitArrayAllocator>(param_1,&param_2->BitArray);
  piVar1 = &param_2->NumHoles;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Attributes);
  return param_1;
}

// `scalar_deleting_destructor' @ 14365e820

void * __thiscall
TMeshAttributeArraySet<int>::_scalar_deleting_destructor_
          (TMeshAttributeArraySet<int> *this,uint param_1)

{
  ForElementType<TMeshAttributeArrayBase<int>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar1 = (ForElementType<TMeshAttributeArrayBase<int>_>)&this->ArrayForChannels;
  }
  DestructItems<TMeshAttributeArrayBase<int>,int>
            ((TMeshAttributeArrayBase<int> *)FVar1,(this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365e890

void * __thiscall
TMeshAttributeArraySet<float>::_scalar_deleting_destructor_
          (TMeshAttributeArraySet<float> *this,uint param_1)

{
  ForElementType<TMeshAttributeArrayBase<float>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar1 = (ForElementType<TMeshAttributeArrayBase<float>_>)&this->ArrayForChannels;
  }
  DestructItems<TMeshAttributeArrayBase<float>,int>
            ((TMeshAttributeArrayBase<float> *)FVar1,(this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365e900

void * __thiscall
TMeshAttributeArraySet<UE::Math::TTransform<double>_>::_scalar_deleting_destructor_
          (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *this,uint param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  DestructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
            ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)FVar1,
             (this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365e970

void * __thiscall
TMeshAttributeArraySet<UE::Math::TVector2<float>_>::_scalar_deleting_destructor_
          (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this,uint param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  DestructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
            ((TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)FVar1,
             (this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365e9e0

void * __thiscall
TMeshAttributeArraySet<UE::Math::TVector4<float>_>::_scalar_deleting_destructor_
          (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this,uint param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  DestructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
            ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar1,
             (this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ea50

void * __thiscall
TMeshAttributeArraySet<UE::Math::TVector<float>_>::_scalar_deleting_destructor_
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *this,uint param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar1 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  DestructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
            ((TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)FVar1,
             (this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365eac0

void * __thiscall
TMeshAttributeArraySet<FName>::_scalar_deleting_destructor_
          (TMeshAttributeArraySet<FName> *this,uint param_1)

{
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar1 = (ForElementType<TMeshAttributeArrayBase<FName>_>)&this->ArrayForChannels;
  }
  DestructItems<TMeshAttributeArrayBase<FName>,int>
            ((TMeshAttributeArrayBase<FName> *)FVar1,(this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365eb30

void * __thiscall
TMeshAttributeArraySet<bool>::_scalar_deleting_destructor_
          (TMeshAttributeArraySet<bool> *this,uint param_1)

{
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar1 = (ForElementType<TMeshAttributeArrayBase<bool>_>)&this->ArrayForChannels;
  }
  DestructItems<TMeshAttributeArrayBase<bool>,int>
            ((TMeshAttributeArrayBase<bool> *)FVar1,(this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365eba0

void * __thiscall
TMeshUnboundedAttributeArraySet<int>::_scalar_deleting_destructor_
          (TMeshUnboundedAttributeArraySet<int> *this,uint param_1)

{
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<int>_>)&this->ArrayForChannels;
  }
  DestructItems<TAttributeArrayContainer<int>,int>
            ((TAttributeArrayContainer<int> *)FVar1,(this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ec10

void * __thiscall
TMeshUnboundedAttributeArraySet<float>::_scalar_deleting_destructor_
          (TMeshUnboundedAttributeArraySet<float> *this,uint param_1)

{
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<float>_>)&this->ArrayForChannels;
  }
  DestructItems<TAttributeArrayContainer<float>,int>
            ((TAttributeArrayContainer<float> *)FVar1,(this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ec80

void * __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_>::_scalar_deleting_destructor_
          (TMeshUnboundedAttributeArraySet<UE::Math::TTransform<double>_> *this,uint param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
            &this->ArrayForChannels;
  }
  DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
            ((TAttributeArrayContainer<UE::Math::TTransform<double>_> *)FVar1,
             (this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ecf0

void * __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_>::_scalar_deleting_destructor_
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector2<float>_> *this,uint param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
            &this->ArrayForChannels;
  }
  DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
            ((TAttributeArrayContainer<UE::Math::TVector2<float>_> *)FVar1,
             (this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ed60

void * __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_>::_scalar_deleting_destructor_
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector4<float>_> *this,uint param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
            &this->ArrayForChannels;
  }
  DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
            ((TAttributeArrayContainer<UE::Math::TVector4<float>_> *)FVar1,
             (this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365edd0

void * __thiscall
TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_>::_scalar_deleting_destructor_
          (TMeshUnboundedAttributeArraySet<UE::Math::TVector<float>_> *this,uint param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)
            &this->ArrayForChannels;
  }
  DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
            ((TAttributeArrayContainer<UE::Math::TVector<float>_> *)FVar1,
             (this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ee40

void * __thiscall
TMeshUnboundedAttributeArraySet<FName>::_scalar_deleting_destructor_
          (TMeshUnboundedAttributeArraySet<FName> *this,uint param_1)

{
  ForElementType<TAttributeArrayContainer<FName>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<FName>_>)&this->ArrayForChannels;
  }
  DestructItems<TAttributeArrayContainer<FName>,int>
            ((TAttributeArrayContainer<FName> *)FVar1,(this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365eeb0

void * __thiscall
TMeshUnboundedAttributeArraySet<bool>::_scalar_deleting_destructor_
          (TMeshUnboundedAttributeArraySet<bool> *this,uint param_1)

{
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar1 = (ForElementType<TAttributeArrayContainer<bool>_>)&this->ArrayForChannels;
  }
  DestructItems<TAttributeArrayContainer<bool>,int>
            ((TAttributeArrayContainer<bool> *)FVar1,(this->ArrayForChannels).ArrayNum);
  FVar1 = (this->ArrayForChannels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ef20

void * __thiscall
FMeshAttributeArraySetBase::_scalar_deleting_destructor_
          (FMeshAttributeArraySetBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ef50

void * __thiscall FMeshAttributes::_scalar_deleting_destructor_(FMeshAttributes *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365ef80

void * __thiscall
UMeshDescriptionBase::_scalar_deleting_destructor_(UMeshDescriptionBase *this,uint param_1)

{
  FMeshAttributes *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshDescriptionBase__6B_;
  pFVar1 = (this->RequiredAttributes).Ptr;
  if (pFVar1 != (FMeshAttributes *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FMeshDescription::~FMeshDescription(&this->OwnedMeshDescription);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14365f000

void * __thiscall
UMeshDescriptionBaseBulkData::_scalar_deleting_destructor_
          (UMeshDescriptionBaseBulkData *this,uint param_1)

{
  *(undefined ***)this = &___7UMeshDescriptionBaseBulkData__6B_;
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

// EmptyLinkFunctionForGeneratedCodeMeshDescription @ 14366c2c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshDescription(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshDescriptionBase @ 14366c2d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshDescriptionBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshDescriptionBaseBulkData @ 14366c2e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshDescriptionBaseBulkData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshDescription_init @ 14366c2f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshDescription_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshTypes @ 14366c300

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshTypes(void)

{
  return;
}

// PointInTriangle @ 14367e320

bool __cdecl
PointInTriangle(TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
               TVector<double> *param_4,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8 [8];
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.X;
  dVar8 = (param_3->field0_0x0)._s_0.Y;
  local_f8._s_0.X = dVar7 - dVar4;
  dVar9 = (param_3->field0_0x0)._s_0.Z;
  dVar10 = (param_4->field0_0x0)._s_0.X;
  local_f8._s_0.Y = dVar8 - dVar5;
  local_f8._s_0.Z = dVar9 - dVar6;
  local_e0._s_0.X = dVar10 - dVar4;
  local_e0._s_0.Y = (param_4->field0_0x0)._s_0.Y - dVar5;
  local_e0._s_0.Z = (param_4->field0_0x0)._s_0.Z - dVar6;
  local_c8[0]._0_8_ = dVar1 - dVar4;
  local_c8[0]._8_8_ = dVar2 - dVar5;
  local_c8[0]._16_8_ = dVar3 - dVar6;
  bVar11 = VectorsOnSameSide((TVector<double> *)&local_c8[0]._s_0,(TVector<double> *)&local_e0._s_0,
                             (TVector<double> *)&local_f8._s_0,param_5);
  if (bVar11) {
    local_c8[0]._0_8_ = dVar4 - dVar1;
    local_c8[0]._8_8_ = dVar5 - dVar2;
    local_c8[0]._16_8_ = dVar6 - dVar3;
    local_e0._s_0.X = dVar10 - dVar1;
    local_e0._s_0.Y = (param_4->field0_0x0)._s_0.Y - dVar2;
    local_e0._s_0.Z = (param_4->field0_0x0)._s_0.Z - dVar3;
    local_f8._s_0.X = dVar7 - dVar1;
    local_f8._s_0.Y = dVar8 - dVar2;
    local_f8._s_0.Z = dVar9 - dVar3;
    bVar11 = VectorsOnSameSide((TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_e0._s_0,
                               (TVector<double> *)&local_c8[0]._s_0,param_5);
    if (bVar11) {
      local_c8[0]._0_8_ = dVar1 - dVar7;
      local_e0._s_0.Y = (param_4->field0_0x0)._s_0.Y - dVar8;
      local_c8[0]._8_8_ = dVar2 - dVar8;
      local_c8[0]._16_8_ = dVar3 - dVar9;
      local_e0._s_0.X = dVar10 - dVar7;
      local_f8._s_0.X = dVar4 - dVar7;
      local_f8._s_0.Y = dVar5 - dVar8;
      local_f8._s_0.Z = dVar6 - dVar9;
      local_e0._s_0.Z = (param_4->field0_0x0)._s_0.Z - dVar9;
      bVar11 = VectorsOnSameSide((TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_e0._s_0
                                 ,(TVector<double> *)&local_c8[0]._s_0,param_5);
      if (bVar11) {
        return true;
      }
    }
  }
  return false;
}

// VectorsOnSameSide @ 143697860

bool __cdecl
VectorsOnSameSide(TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
                 float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  return 0.0 <= (float)((dVar3 * dVar1 - dVar2 * dVar6) *
                        (dVar5 * dVar1 - dVar6 * (param_2->field0_0x0)._s_0.Z) +
                        (dVar2 * dVar4 - dVar7 * dVar1) *
                        (dVar4 * (param_2->field0_0x0)._s_0.Z - dVar1 * (param_2->field0_0x0)._s_0.Y
                        ) + (dVar7 * dVar6 - dVar3 * dVar4) *
                            (dVar6 * (param_2->field0_0x0)._s_0.Y - dVar5 * dVar4) + (double)param_4
                       );
}

// Z_Construct_UClass_UMeshDescriptionBaseBulkData_NoRegister @ 143697980

UClass * __cdecl Z_Construct_UClass_UMeshDescriptionBaseBulkData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshDescription",L"MeshDescriptionBaseBulkData",
               &Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton,
               UMeshDescriptionBaseBulkData::StaticRegisterNativesUMeshDescriptionBaseBulkData,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDescriptionBaseBulkData>,
               InternalVTableHelperCtorCaller<UMeshDescriptionBaseBulkData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton;
}

// Z_Construct_UClass_UMeshDescriptionBase_NoRegister @ 143697a30

UClass * __cdecl Z_Construct_UClass_UMeshDescriptionBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshDescription",L"MeshDescriptionBase",
               &Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton,
               UMeshDescriptionBase::StaticRegisterNativesUMeshDescriptionBase,0x2f0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMeshDescriptionBase>,
               InternalVTableHelperCtorCaller<UMeshDescriptionBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton;
}

// Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions @ 143697ae0

UEnum * __cdecl Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions(void)

{
  if (Z_Registration_Info_UEnum_EComputeNTBsOptions.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EComputeNTBsOptions.InnerSingleton,
               &Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EComputeNTBsOptions.InnerSingleton;
}

// Z_Construct_UScriptStruct_FUVID @ 143697b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUVID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUVID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUVID.InnerSingleton,
               &Z_Construct_UScriptStruct_FUVID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUVID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUVID.InnerSingleton;
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

// IMPLEMENT_MODULE_MeshDescription @ 14369ffe0

void __cdecl IMPLEMENT_MODULE_MeshDescription(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FMeshElementArrayTestSerializationAutomationTestInstance'' @ 150361c50

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMeshElementArrayTestSerializationAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FMeshElementArrayTestSerializationAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogMeshDescription'' @ 150361c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMeshDescription__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMeshDescription);
  return;
}

