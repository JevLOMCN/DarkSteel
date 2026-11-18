// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 422

// CurveGroupName'' @ 14140e6d0

void __cdecl `dynamic_initializer_for_'FDataflowCurveSelection::CurveGroupName__(void)

{
  ::FName::FName(&FDataflowCurveSelection::CurveGroupName,"Curves");
  return;
}

// FacesGroupName'' @ 14140e6f0

void __cdecl `dynamic_initializer_for_'FDataflowFaceSelection::FacesGroupName__(void)

{
  ::FName::FName(&FDataflowFaceSelection::FacesGroupName,"Faces");
  return;
}

// GeometryGroupName'' @ 14140e710

void __cdecl `dynamic_initializer_for_'FDataflowGeometrySelection::GeometryGroupName__(void)

{
  ::FName::FName(&FDataflowGeometrySelection::GeometryGroupName,"Geometry");
  return;
}

// MaterialGroupName'' @ 14140e730

void __cdecl `dynamic_initializer_for_'FDataflowMaterialSelection::MaterialGroupName__(void)

{
  ::FName::FName(&FDataflowMaterialSelection::MaterialGroupName,"Material");
  return;
}

// ShaderTypeRegistration'' @ 14140e750

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FClearPressureGridCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FClearPressureGridCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FClearPressureGridCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FClearPressureGridCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14140e7a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FClearVelocityGridCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FClearVelocityGridCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FClearVelocityGridCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FClearVelocityGridCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14140e7f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FCopyVelocityGridCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FCopyVelocityGridCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FCopyVelocityGridCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FCopyVelocityGridCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 14140e840

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FInterpolateGroomGuidesCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FInterpolateGroomGuidesCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FInterpolateGroomGuidesCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FInterpolateGroomGuidesCS::ShaderTypeRegistration__);
  return;
}

// TransformGroupName'' @ 14140e890

void __cdecl `dynamic_initializer_for_'FDataflowTransformSelection::TransformGroupName__(void)

{
  ::FName::FName(&FDataflowTransformSelection::TransformGroupName,"Transform");
  return;
}

// TypeName'' @ 14140e8b0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<signed_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<signed_char>::TypeName,L"int8");
  return;
}

// TypeName'' @ 14140e8d0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_char>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_char>::TypeName,L"uint8");
  return;
}

// TypeName'' @ 14140e8f0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<short>::TypeName,L"int16");
  return;
}

// TypeName'' @ 14140e910

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_short>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_short>::TypeName,L"uint16");
  return;
}

// TypeName'' @ 14140e930

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<int>::TypeName,L"int32");
  return;
}

// TypeName'' @ 14140e950

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned_int>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned_int>::TypeName,L"uint32");
  return;
}

// TypeName'' @ 14140e970

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<float>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<float>::TypeName,L"float");
  return;
}

// TypeName'' @ 14140e990

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<double>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<double>::TypeName,L"double");
  return;
}

// TypeName'' @ 14140e9b0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntPoint<int>_>::TypeName,L"FIntPoint");
  return;
}

// TypeName'' @ 14140e9d0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector3<int>_>::TypeName,L"FIntVector3");
  return;
}

// TypeName'' @ 14140e9f0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TIntVector4<int>_>::TypeName,L"FIntVector4");
  return;
}

// TypeName'' @ 14140ea10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TObjectPtr<UObject>_>::TypeName,L"TObjectPtr<UObject>");
  return;
}

// TypeName'' @ 14140ea30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<float>_>::TypeName,L"FQuat4f");
  return;
}

// TypeName'' @ 14140ea50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TQuat<double>_>::TypeName,L"FQuat");
  return;
}

// TypeName'' @ 14140ea70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TRotator<double>_>::TypeName,L"FRotator");
  return;
}

// TypeName'' @ 14140ea90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName,L"FTransform");
  return;
}

// TypeName'' @ 14140eab0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<float>_>::TypeName,L"FVector2f");
  return;
}

// TypeName'' @ 14140ead0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector2<double>_>::TypeName,L"FVector2D");
  return;
}

// TypeName'' @ 14140eaf0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<float>_>::TypeName,L"FVector4f");
  return;
}

// TypeName'' @ 14140eb10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector4<double>_>::TypeName,L"FVector4");
  return;
}

// TypeName'' @ 14140eb30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<float>_>::TypeName,L"FVector3f");
  return;
}

// TypeName'' @ 14140eb50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<UE::Math::TVector<double>_>::TypeName,L"FVector");
  return;
}

// TypeName'' @ 14140eb70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowCurveSelection>::TypeName,
                 L"FDataflowCurveSelection");
  return;
}

// TypeName'' @ 14140eb90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowFaceSelection>::TypeName,
                 L"FDataflowFaceSelection");
  return;
}

// TypeName'' @ 14140ebb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowGeometrySelection>::TypeName,
                 L"FDataflowGeometrySelection");
  return;
}

// TypeName'' @ 14140ebd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowMaterialSelection>::TypeName,
                 L"FDataflowMaterialSelection");
  return;
}

// TypeName'' @ 14140ebf0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowTransformSelection>::TypeName,
                 L"FDataflowTransformSelection");
  return;
}

// TypeName'' @ 14140ec10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FDataflowVertexSelection>::TypeName,
                 L"FDataflowVertexSelection");
  return;
}

// TypeName'' @ 14140ec30

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FLinearColor>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FLinearColor>::TypeName,L"FLinearColor");
  return;
}

// TypeName'' @ 14140ec50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<int8>");
  return;
}

// TypeName'' @ 14140ec70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint8>");
  return;
}

// TypeName'' @ 14140ec90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int16>");
  return;
}

// TypeName'' @ 14140ecb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint16>");
  return;
}

// TypeName'' @ 14140ecd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int32>");
  return;
}

// TypeName'' @ 14140ecf0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint32>");
  return;
}

// TypeName'' @ 14140ed10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<float>");
  return;
}

// TypeName'' @ 14140ed30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<double>");
  return;
}

// TypeName'' @ 14140ed50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntPoint>");
  return;
}

// TypeName'' @ 14140ed70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector3>");
  return;
}

// TypeName'' @ 14140ed90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FIntVector4>");
  return;
}

// TypeName'' @ 14140edb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat4f>");
  return;
}

// TypeName'' @ 14140edd0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FQuat>");
  return;
}

// TypeName'' @ 14140edf0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FRotator>");
  return;
}

// TypeName'' @ 14140ee10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2f>");
  return;
}

// TypeName'' @ 14140ee30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector2D>");
  return;
}

// TypeName'' @ 14140ee50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4f>");
  return;
}

// TypeName'' @ 14140ee70

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector4>");
  return;
}

// TypeName'' @ 14140ee90

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector3f>");
  return;
}

// TypeName'' @ 14140eeb0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                  ::TypeName,L"TArray<FVector>");
  return;
}

// TypeName'' @ 14140eed0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<FLinearColor>");
  return;
}

// TypeName'' @ 14140eef0

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FName>");
  return;
}

// TypeName'' @ 14140ef10

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<FString>");
  return;
}

// TypeName'' @ 14140ef30

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::
TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>::TypeName,
                 L"TArray<int64>");
  return;
}

// TypeName'' @ 14140ef50

void __cdecl
`dynamic_initializer_for_'TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::
                  TypeName,L"TArray<uint64>");
  return;
}

// TypeName'' @ 14140ef70

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FName>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FName>::TypeName,L"FName");
  return;
}

// TypeName'' @ 14140ef90

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FString>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FString>::TypeName,L"FString");
  return;
}

// TypeName'' @ 14140efb0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<FText>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<FText>::TypeName,L"FText");
  return;
}

// TypeName'' @ 14140efd0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<__int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<__int64>::TypeName,L"int64");
  return;
}

// TypeName'' @ 14140eff0

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<unsigned___int64>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<unsigned___int64>::TypeName,L"uint64");
  return;
}

// TypeName'' @ 14140f010

void __cdecl `dynamic_initializer_for_'TDataflowSingleTypePolicy<bool>::TypeName__(void)

{
  ::FName::FName(&TDataflowSingleTypePolicy<bool>::TypeName,L"bool");
  return;
}

// VerticesGroupName'' @ 14140f030

void __cdecl `dynamic_initializer_for_'FDataflowVertexSelection::VerticesGroupName__(void)

{
  ::FName::FName(&FDataflowVertexSelection::VerticesGroupName,"Vertices");
  return;
}

// `dynamic_initializer_for_'AdvectNodeOrientationName'' @ 14140f050

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__AdvectNodeOrientationName__(void)

{
  ::FName::FName(&AdvectNodeOrientationName,L"AdvectNodeOrientation");
  return;
}

// `dynamic_initializer_for_'AdvectNodePositionName'' @ 14140f070

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__AdvectNodePositionName__(void)

{
  ::FName::FName(&AdvectNodePositionName,L"AdvectNodePosition");
  return;
}

// `dynamic_initializer_for_'AttachNodeOrientationName'' @ 14140f090

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__AttachNodeOrientationName__(void)

{
  ::FName::FName(&AttachNodeOrientationName,L"AttachNodeOrientation");
  return;
}

// `dynamic_initializer_for_'AttachNodePositionName'' @ 14140f0b0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__AttachNodePositionName__(void)

{
  ::FName::FName(&AttachNodePositionName,L"AttachNodePosition");
  return;
}

// `dynamic_initializer_for_'AttachNodeStateName'' @ 14140f0d0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__AttachNodeStateName__(void)

{
  ::FName::FName(&AttachNodeStateName,L"AttachNodeState");
  return;
}

// `dynamic_initializer_for_'BuildBoundingBoxName'' @ 14140f0f0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__BuildBoundingBoxName__(void)

{
  ::FName::FName(&BuildBoundingBoxName,L"BuildBoundingBox");
  return;
}

// `dynamic_initializer_for_'BuildDensityFieldName'' @ 14140f110

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__BuildDensityFieldName__(void)

{
  ::FName::FName(&BuildDensityFieldName,L"BuildDensityField");
  return;
}

// `dynamic_initializer_for_'BuildDistanceFieldName'' @ 14140f130

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__BuildDistanceFieldName__(void)

{
  ::FName::FName(&BuildDistanceFieldName,L"BuildDistanceField");
  return;
}

// `dynamic_initializer_for_'BuildVelocityFieldName'' @ 14140f150

void __cdecl NDIVelocityGridLocal::_dynamic_initializer_for__BuildVelocityFieldName__(void)

{
  ::FName::FName(&BuildVelocityFieldName,L"BuildVelocityField");
  return;
}

// `dynamic_initializer_for_'CVarEnableProxyInstanceTransform'' @ 14140f170

void __cdecl _dynamic_initializer_for__CVarEnableProxyInstanceTransform__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableProxyInstanceTransform,L"r.HairStrands.Debug.EnableProxyInstanceTransform",
             &GEnableProxyInstanceTransform,
             L"Enable the use of the niagara proxy instance to compute the bone/world transform. For debug only"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableProxyInstanceTransform__);
  return;
}

// `dynamic_initializer_for_'CVarHairSimulationMaxDelay'' @ 14140f1c0

void __cdecl _dynamic_initializer_for__CVarHairSimulationMaxDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairSimulationMaxDelay,L"r.HairStrands.SimulationMaxDelay",
             &GHairSimulationMaxDelay,L"Maximum tick Delay before starting the simulation",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairSimulationMaxDelay__);
  return;
}

// `dynamic_initializer_for_'CVarHairSimulationRestUpdate'' @ 14140f210

void __cdecl _dynamic_initializer_for__CVarHairSimulationRestUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHairSimulationRestUpdate,L"r.HairStrands.SimulationRestUpdate",
             &GHairSimulationRestUpdate,L"Update the simulation rest pose",0);
  atexit(_dynamic_atexit_destructor_for__CVarHairSimulationRestUpdate__);
  return;
}

// `dynamic_initializer_for_'ComputeAirDragForceName'' @ 14140f260

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeAirDragForceName__(void)

{
  ::FName::FName(&ComputeAirDragForceName,L"ComputeAirDragForce");
  return;
}

// `dynamic_initializer_for_'ComputeBoundaryWeightsName'' @ 14140f280

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__ComputeBoundaryWeightsName__(void)

{
  ::FName::FName(&ComputeBoundaryWeightsName,L"ComputeBoundaryWeights");
  return;
}

// `dynamic_initializer_for_'ComputeEdgeDirectionName'' @ 14140f2a0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeEdgeDirectionName__(void)

{
  ::FName::FName(&ComputeEdgeDirectionName,L"ComputeEdgeDirection");
  return;
}

// `dynamic_initializer_for_'ComputeEdgeLengthName'' @ 14140f2c0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeEdgeLengthName__(void)

{
  ::FName::FName(&ComputeEdgeLengthName,L"ComputeEdgeLength");
  return;
}

// `dynamic_initializer_for_'ComputeEdgeRotationName'' @ 14140f2e0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeEdgeRotationName__(void)

{
  ::FName::FName(&ComputeEdgeRotationName,L"ComputeEdgeRotation");
  return;
}

// `dynamic_initializer_for_'ComputeGridSizeName'' @ 14140f300

void __cdecl NDIVelocityGridLocal::_dynamic_initializer_for__ComputeGridSizeName__(void)

{
  ::FName::FName(&ComputeGridSizeName,L"ComputeGridSize");
  return;
}

// `dynamic_initializer_for_'ComputeLocalStateName'' @ 14140f320

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeLocalStateName__(void)

{
  ::FName::FName(&ComputeLocalStateName,L"ComputeLocalState");
  return;
}

// `dynamic_initializer_for_'ComputeMaterialFrameName'' @ 14140f340

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeMaterialFrameName__(void)

{
  ::FName::FName(&ComputeMaterialFrameName,L"ComputeMaterialFrame");
  return;
}

// `dynamic_initializer_for_'ComputeNodeInertiaName'' @ 14140f360

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeNodeInertiaName__(void)

{
  ::FName::FName(&ComputeNodeInertiaName,L"ComputeNodeInertia");
  return;
}

// `dynamic_initializer_for_'ComputeNodeMassName'' @ 14140f380

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeNodeMassName__(void)

{
  ::FName::FName(&ComputeNodeMassName,L"ComputeNodeMass");
  return;
}

// `dynamic_initializer_for_'ComputeNodeOrientationName'' @ 14140f3a0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeNodeOrientationName__(void)

{
  ::FName::FName(&ComputeNodeOrientationName,L"ComputeNodeOrientation");
  return;
}

// `dynamic_initializer_for_'ComputeNodePositionName'' @ 14140f3c0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeNodePositionName__(void)

{
  ::FName::FName(&ComputeNodePositionName,L"ComputeNodePosition");
  return;
}

// `dynamic_initializer_for_'ComputeRestOrientationName'' @ 14140f3e0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeRestOrientationName__(void)

{
  ::FName::FName(&ComputeRestOrientationName,L"ComputeRestOrientation");
  return;
}

// `dynamic_initializer_for_'ComputeRestPositionName'' @ 14140f400

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ComputeRestPositionName__(void)

{
  ::FName::FName(&ComputeRestPositionName,L"ComputeRestPosition");
  return;
}

// `dynamic_initializer_for_'GetAirDragName'' @ 14140f420

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetAirDragName__(void)

{
  ::FName::FName(&GetAirDragName,"GetAirDrag");
  return;
}

// `dynamic_initializer_for_'GetAirVelocityName'' @ 14140f440

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetAirVelocityName__(void)

{
  ::FName::FName(&GetAirVelocityName,"GetAirVelocity");
  return;
}

// `dynamic_initializer_for_'GetBendDampingName'' @ 14140f460

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetBendDampingName__(void)

{
  ::FName::FName(&GetBendDampingName,"GetBendDamping");
  return;
}

// `dynamic_initializer_for_'GetBendScaleName'' @ 14140f480

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetBendScaleName__(void)

{
  ::FName::FName(&GetBendScaleName,"GetBendScale");
  return;
}

// `dynamic_initializer_for_'GetBendStiffnessName'' @ 14140f4a0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetBendStiffnessName__(void)

{
  ::FName::FName(&GetBendStiffnessName,"GetBendStiffness");
  return;
}

// `dynamic_initializer_for_'GetBoundingBoxName'' @ 14140f4c0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetBoundingBoxName__(void)

{
  ::FName::FName(&GetBoundingBoxName,L"GetBoundingBox");
  return;
}

// `dynamic_initializer_for_'GetCollisionRadiusName'' @ 14140f4e0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetCollisionRadiusName__(void)

{
  ::FName::FName(&GetCollisionRadiusName,"GetCollisionRadius");
  return;
}

// `dynamic_initializer_for_'GetDensityFieldName'' @ 14140f500

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__GetDensityFieldName__(void)

{
  ::FName::FName(&GetDensityFieldName,L"GetDensityField");
  return;
}

// `dynamic_initializer_for_'GetGravityPreloadingName'' @ 14140f520

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetGravityPreloadingName__(void)

{
  ::FName::FName(&GetGravityPreloadingName,"GetGravityPreloading");
  return;
}

// `dynamic_initializer_for_'GetGravityVectorName'' @ 14140f540

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetGravityVectorName__(void)

{
  ::FName::FName(&GetGravityVectorName,"GetGravityVector");
  return;
}

// `dynamic_initializer_for_'GetGridDimensionName'' @ 14140f560

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetGridDimensionName__(void)

{
  ::FName::FName(&GetGridDimensionName,"GetGridDimension");
  return;
}

// `dynamic_initializer_for_'GetIterationCountName'' @ 14140f580

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetIterationCountName__(void)

{
  ::FName::FName(&GetIterationCountName,"GetIterationCount");
  return;
}

// `dynamic_initializer_for_'GetKineticFrictionName'' @ 14140f5a0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetKineticFrictionName__(void)

{
  ::FName::FName(&GetKineticFrictionName,"GetKineticFriction");
  return;
}

// `dynamic_initializer_for_'GetLocalVectorName'' @ 14140f5c0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetLocalVectorName__(void)

{
  ::FName::FName(&GetLocalVectorName,L"GetLocalVector");
  return;
}

// `dynamic_initializer_for_'GetNodePositionName'' @ 14140f5e0

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__GetNodePositionName__(void)

{
  ::FName::FName(&GetNodePositionName,L"GetNodePosition");
  return;
}

// `dynamic_initializer_for_'GetNumStrandsName'' @ 14140f600

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetNumStrandsName__(void)

{
  ::FName::FName(&GetNumStrandsName,L"GetNumStrands");
  return;
}

// `dynamic_initializer_for_'GetPointPositionName'' @ 14140f620

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetPointPositionName__(void)

{
  ::FName::FName(&GetPointPositionName,L"GetPointPosition");
  return;
}

// `dynamic_initializer_for_'GetProjectBendName'' @ 14140f640

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetProjectBendName__(void)

{
  ::FName::FName(&GetProjectBendName,"GetProjectBend");
  return;
}

// `dynamic_initializer_for_'GetProjectCollisionName'' @ 14140f660

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetProjectCollisionName__(void)

{
  ::FName::FName(&GetProjectCollisionName,"GetProjectCollision");
  return;
}

// `dynamic_initializer_for_'GetProjectStretchName'' @ 14140f680

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetProjectStretchName__(void)

{
  ::FName::FName(&GetProjectStretchName,"GetProjectStretch");
  return;
}

// `dynamic_initializer_for_'GetRadiusScaleName'' @ 14140f6a0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetRadiusScaleName__(void)

{
  ::FName::FName(&GetRadiusScaleName,"GetRadiusScale");
  return;
}

// `dynamic_initializer_for_'GetSampleStateName'' @ 14140f6c0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetSampleStateName__(void)

{
  ::FName::FName(&GetSampleStateName,L"GetSampleState");
  return;
}

// `dynamic_initializer_for_'GetSolveBendName'' @ 14140f6e0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetSolveBendName__(void)

{
  ::FName::FName(&GetSolveBendName,"GetSolveBend");
  return;
}

// `dynamic_initializer_for_'GetSolveCollisionName'' @ 14140f700

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetSolveCollisionName__(void)

{
  ::FName::FName(&GetSolveCollisionName,"GetSolveCollision");
  return;
}

// `dynamic_initializer_for_'GetSolveStretchName'' @ 14140f720

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetSolveStretchName__(void)

{
  ::FName::FName(&GetSolveStretchName,"GetSolveStretch");
  return;
}

// `dynamic_initializer_for_'GetStaticFrictionName'' @ 14140f740

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStaticFrictionName__(void)

{
  ::FName::FName(&GetStaticFrictionName,"GetStaticFriction");
  return;
}

// `dynamic_initializer_for_'GetStrandSizeName'' @ 14140f760

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStrandSizeName__(void)

{
  ::FName::FName(&GetStrandSizeName,L"GetStrandSize");
  return;
}

// `dynamic_initializer_for_'GetStrandsDensityName'' @ 14140f780

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStrandsDensityName__(void)

{
  ::FName::FName(&GetStrandsDensityName,"GetStrandsDensity");
  return;
}

// `dynamic_initializer_for_'GetStrandsSmoothingName'' @ 14140f7a0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStrandsSmoothingName__(void)

{
  ::FName::FName(&GetStrandsSmoothingName,"GetStrandsSmoothing");
  return;
}

// `dynamic_initializer_for_'GetStrandsThicknessName'' @ 14140f7c0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStrandsThicknessName__(void)

{
  ::FName::FName(&GetStrandsThicknessName,"GetStrandsThickness");
  return;
}

// `dynamic_initializer_for_'GetStrandsViscosityName'' @ 14140f7e0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStrandsViscosityName__(void)

{
  ::FName::FName(&GetStrandsViscosityName,"GetStrandsViscosity");
  return;
}

// `dynamic_initializer_for_'GetStretchDampingName'' @ 14140f800

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStretchDampingName__(void)

{
  ::FName::FName(&GetStretchDampingName,"GetStretchDamping");
  return;
}

// `dynamic_initializer_for_'GetStretchScaleName'' @ 14140f820

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStretchScaleName__(void)

{
  ::FName::FName(&GetStretchScaleName,"GetStretchScale");
  return;
}

// `dynamic_initializer_for_'GetStretchStiffnessName'' @ 14140f840

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetStretchStiffnessName__(void)

{
  ::FName::FName(&GetStretchStiffnessName,"GetStretchStiffness");
  return;
}

// `dynamic_initializer_for_'GetSubStepsName'' @ 14140f860

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetSubStepsName__(void)

{
  ::FName::FName(&GetSubStepsName,"GetSubSteps");
  return;
}

// `dynamic_initializer_for_'GetThicknessScaleName'' @ 14140f880

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetThicknessScaleName__(void)

{
  ::FName::FName(&GetThicknessScaleName,"GetThicknessScale");
  return;
}

// `dynamic_initializer_for_'GetWorldInverseName'' @ 14140f8a0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetWorldInverseName__(void)

{
  ::FName::FName(&GetWorldInverseName,L"GetWorldInverse");
  return;
}

// `dynamic_initializer_for_'GetWorldTransformName'' @ 14140f8c0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetWorldTransformName__(void)

{
  ::FName::FName(&GetWorldTransformName,L"GetWorldTransform");
  return;
}

// `dynamic_initializer_for_'GetWorldVectorName'' @ 14140f8e0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__GetWorldVectorName__(void)

{
  ::FName::FName(&GetWorldVectorName,L"GetWorldVector");
  return;
}

// `dynamic_initializer_for_'HasGlobalInterpolationName'' @ 14140f900

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__HasGlobalInterpolationName__(void)

{
  ::FName::FName(&HasGlobalInterpolationName,L"HasGlobalInterpolation");
  return;
}

// `dynamic_initializer_for_'InitGridSamplesName'' @ 14140f920

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__InitGridSamplesName__(void)

{
  ::FName::FName(&InitGridSamplesName,L"InitGridSamples");
  return;
}

// `dynamic_initializer_for_'LogPressureGrid'' @ 14140f940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPressureGrid__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPressureGrid,L"LogPressureGrid",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPressureGrid__);
  return;
}

// `dynamic_initializer_for_'LogVelocityGrid'' @ 14140f980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVelocityGrid__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVelocityGrid,L"LogVelocityGrid",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVelocityGrid__);
  return;
}

// `dynamic_initializer_for_'NeedRestUpdateName'' @ 14140f9c0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__NeedRestUpdateName__(void)

{
  ::FName::FName(&NeedRestUpdateName,L"NeedRestUpdate");
  return;
}

// `dynamic_initializer_for_'NeedSimulationResetName'' @ 14140f9e0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__NeedSimulationResetName__(void)

{
  ::FName::FName(&NeedSimulationResetName,L"NeedSimulationReset");
  return;
}

// `dynamic_initializer_for_'ProjectAngularSpringMaterialName'' @ 14140fa00

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ProjectAngularSpringMaterialName__(void)

{
  ::FName::FName(&ProjectAngularSpringMaterialName,L"ProjectAngularSpringMaterial");
  return;
}

// `dynamic_initializer_for_'ProjectBendRodMaterialName'' @ 14140fa20

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ProjectBendRodMaterialName__(void)

{
  ::FName::FName(&ProjectBendRodMaterialName,L"ProjectBendRodMaterial");
  return;
}

// `dynamic_initializer_for_'ProjectDistanceSpringMaterialName'' @ 14140fa40

void __cdecl
NDIHairStrandsLocal::_dynamic_initializer_for__ProjectDistanceSpringMaterialName__(void)

{
  ::FName::FName(&ProjectDistanceSpringMaterialName,L"ProjectDistanceSpringMaterial");
  return;
}

// `dynamic_initializer_for_'ProjectHardCollisionConstraintName'' @ 14140fa60

void __cdecl
NDIHairStrandsLocal::_dynamic_initializer_for__ProjectHardCollisionConstraintName__(void)

{
  ::FName::FName(&ProjectHardCollisionConstraintName,L"ProjectHardCollisionConstraint");
  return;
}

// `dynamic_initializer_for_'ProjectSoftCollisionConstraintName'' @ 14140fa80

void __cdecl
NDIHairStrandsLocal::_dynamic_initializer_for__ProjectSoftCollisionConstraintName__(void)

{
  ::FName::FName(&ProjectSoftCollisionConstraintName,L"ProjectSoftCollisionConstraint");
  return;
}

// `dynamic_initializer_for_'ProjectStretchRodMaterialName'' @ 14140faa0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ProjectStretchRodMaterialName__(void)

{
  ::FName::FName(&ProjectStretchRodMaterialName,L"ProjectStretchRodMaterial");
  return;
}

// `dynamic_initializer_for_'ResetBoundingBoxName'' @ 14140fac0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ResetBoundingBoxName__(void)

{
  ::FName::FName(&ResetBoundingBoxName,L"ResetBoundingBox");
  return;
}

// `dynamic_initializer_for_'ResetPointPositionName'' @ 14140fae0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__ResetPointPositionName__(void)

{
  ::FName::FName(&ResetPointPositionName,L"ResetPointPosition");
  return;
}

// `dynamic_initializer_for_'SampleVelocityFieldName'' @ 14140fb00

void __cdecl NDIVelocityGridLocal::_dynamic_initializer_for__SampleVelocityFieldName__(void)

{
  ::FName::FName(&SampleVelocityFieldName,L"SampleVelocityField");
  return;
}

// `dynamic_initializer_for_'ScaleCellFieldsName'' @ 14140fb20

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__ScaleCellFieldsName__(void)

{
  ::FName::FName(&ScaleCellFieldsName,L"ScaleCellFields");
  return;
}

// `dynamic_initializer_for_'SetGridDimensionName'' @ 14140fb40

void __cdecl NDIVelocityGridLocal::_dynamic_initializer_for__SetGridDimensionName__(void)

{
  ::FName::FName(&SetGridDimensionName,L"SetGridDimension");
  return;
}

// `dynamic_initializer_for_'SetSolidBoundaryName'' @ 14140fb60

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__SetSolidBoundaryName__(void)

{
  ::FName::FName(&SetSolidBoundaryName,L"SetSolidBoundary");
  return;
}

// `dynamic_initializer_for_'SetupAngularSpringMaterialName'' @ 14140fb80

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SetupAngularSpringMaterialName__(void)

{
  ::FName::FName(&SetupAngularSpringMaterialName,L"SetupAngularSpringMaterial");
  return;
}

// `dynamic_initializer_for_'SetupBendRodMaterialName'' @ 14140fba0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SetupBendRodMaterialName__(void)

{
  ::FName::FName(&SetupBendRodMaterialName,L"SetupBendRodMaterial");
  return;
}

// `dynamic_initializer_for_'SetupDistanceSpringMaterialName'' @ 14140fbc0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SetupDistanceSpringMaterialName__(void)

{
  ::FName::FName(&SetupDistanceSpringMaterialName,L"SetupDistanceSpringMaterial");
  return;
}

// `dynamic_initializer_for_'SetupSoftCollisionConstraintName'' @ 14140fbe0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SetupSoftCollisionConstraintName__(void)

{
  ::FName::FName(&SetupSoftCollisionConstraintName,L"SetupSoftCollisionConstraint");
  return;
}

// `dynamic_initializer_for_'SetupStretchRodMaterialName'' @ 14140fc00

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SetupStretchRodMaterialName__(void)

{
  ::FName::FName(&SetupStretchRodMaterialName,L"SetupStretchRodMaterial");
  return;
}

// `dynamic_initializer_for_'SolveAngularSpringMaterialName'' @ 14140fc20

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SolveAngularSpringMaterialName__(void)

{
  ::FName::FName(&SolveAngularSpringMaterialName,L"SolveAngularSpringMaterial");
  return;
}

// `dynamic_initializer_for_'SolveBendRodMaterialName'' @ 14140fc40

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SolveBendRodMaterialName__(void)

{
  ::FName::FName(&SolveBendRodMaterialName,L"SolveBendRodMaterial");
  return;
}

// `dynamic_initializer_for_'SolveDistanceSpringMaterialName'' @ 14140fc60

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SolveDistanceSpringMaterialName__(void)

{
  ::FName::FName(&SolveDistanceSpringMaterialName,L"SolveDistanceSpringMaterial");
  return;
}

// `dynamic_initializer_for_'SolveGridPressureName'' @ 14140fc80

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__SolveGridPressureName__(void)

{
  ::FName::FName(&SolveGridPressureName,L"SolveGridPressure");
  return;
}

// `dynamic_initializer_for_'SolveHardCollisionConstraintName'' @ 14140fca0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SolveHardCollisionConstraintName__(void)

{
  ::FName::FName(&SolveHardCollisionConstraintName,L"SolveHardCollisionConstraint");
  return;
}

// `dynamic_initializer_for_'SolveSoftCollisionConstraintName'' @ 14140fcc0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SolveSoftCollisionConstraintName__(void)

{
  ::FName::FName(&SolveSoftCollisionConstraintName,L"SolveSoftCollisionConstraint");
  return;
}

// `dynamic_initializer_for_'SolveStretchRodMaterialName'' @ 14140fce0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__SolveStretchRodMaterialName__(void)

{
  ::FName::FName(&SolveStretchRodMaterialName,L"SolveStretchRodMaterial");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_GroomCache_Evaluate'' @ 14140fd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_GroomCache_Evaluate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_GroomCache_Evaluate ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GroomCache_Evaluate>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_GroomCache_Evaluate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GroomCache_Evaluate,*pFVar1,
               L"Groom Cache Evaluate","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_GroomCache_TokenExecute'' @ 14140fd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_GroomCache_TokenExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_GroomCache_TokenExecute ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GroomCache_TokenExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_GroomCache_TokenExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GroomCache_TokenExecute,*pFVar1,
               L"Groom Cache Token Execute","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 14140fe20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 14140feb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 14140ff40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 14140ffd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 141410060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1414100f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 141410180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 141410210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1414102a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 141410330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1414103c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UpdateAngularVelocityName'' @ 141410450

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__UpdateAngularVelocityName__(void)

{
  ::FName::FName(&UpdateAngularVelocityName,L"UpdateAngularVelocity");
  return;
}

// `dynamic_initializer_for_'UpdateDeformationGradientName'' @ 141410470

void __cdecl NDIPressureGridLocal::_dynamic_initializer_for__UpdateDeformationGradientName__(void)

{
  ::FName::FName(&UpdateDeformationGradientName,L"UpdateDeformationGradient");
  return;
}

// `dynamic_initializer_for_'UpdateGridTransformName'' @ 141410490

void __cdecl NDIVelocityGridLocal::_dynamic_initializer_for__UpdateGridTransformName__(void)

{
  ::FName::FName(&UpdateGridTransformName,L"UpdateGridTransform");
  return;
}

// `dynamic_initializer_for_'UpdateLinearVelocityName'' @ 1414104b0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__UpdateLinearVelocityName__(void)

{
  ::FName::FName(&UpdateLinearVelocityName,L"UpdateLinearVelocity");
  return;
}

// `dynamic_initializer_for_'UpdateMaterialFrameName'' @ 1414104d0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__UpdateMaterialFrameName__(void)

{
  ::FName::FName(&UpdateMaterialFrameName,L"UpdateMaterialFrame");
  return;
}

// `dynamic_initializer_for_'UpdateNodeStateName'' @ 1414104f0

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__UpdateNodeStateName__(void)

{
  ::FName::FName(&UpdateNodeStateName,L"UpdateNodeState");
  return;
}

// `dynamic_initializer_for_'UpdatePointPositionName'' @ 141410510

void __cdecl NDIHairStrandsLocal::_dynamic_initializer_for__UpdatePointPositionName__(void)

{
  ::FName::FName(&UpdatePointPositionName,L"UpdatePointPosition");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_MovieSceneGroomCacheTemplate_h__Script_HairStrandsCore_3422050271'' @ 141410530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_MovieSceneGroomCacheTemplate_h__Script_HairStrandsCore_3422050271__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_MovieSceneGroomCacheTemplate_h__Script_HairStrandsCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h__Script_HairStrandsCore_1486029010'' @ 141410570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h__Script_HairStrandsCore_1486029010__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h__Script_HairStrandsCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h__Script_HairStrandsCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h__Script_HairStrandsCore_251135532'' @ 1414105c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h__Script_HairStrandsCore_251135532__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h__Script_HairStrandsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h__Script_HairStrandsCore_4019835060'' @ 141410600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h__Script_HairStrandsCore_4019835060__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceHairStrands_h__Script_HairStrandsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfacePressureGrid_h__Script_HairStrandsCore_667863738'' @ 141410640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfacePressureGrid_h__Script_HairStrandsCore_667863738__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfacePressureGrid_h__Script_HairStrandsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceVelocityGrid_h__Script_HairStrandsCore_2158993316'' @ 141410680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceVelocityGrid_h__Script_HairStrandsCore_2158993316__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HairStrandsCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_Niagara_NiagaraDataInterfaceVelocityGrid_h__Script_HairStrandsCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfacePressureGrid @ 14e0cadc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfacePressureGrid(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid @ 14e0cae00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneGroomCacheTrack @ 14e0cae40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneGroomCacheTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceHairStrands @ 14e0cb0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceHairStrands(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e0cb230

void * __thiscall
FMovieSceneGroomCacheSectionTemplate::_scalar_deleting_destructor_
          (FMovieSceneGroomCacheSectionTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneGroomCacheSection @ 14e0cb270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneGroomCacheSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams @ 14e0cb2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheParams.InnerSingleton;
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

// NewProp_bReverse_SetBit @ 14e0cb330

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 1;
  return;
}

// NewStructOps @ 14e0cb340

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneGroomCacheParams,&UE::CoreUObject::Private::Construct<FMovieSceneGroomCacheParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneGroomCacheParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneGroomCacheParams>,&UE::CoreUObject::Private::Copy<FMovieSceneGroomCacheParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters @ 14e0cb600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters.
           InnerSingleton;
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

// NewStructOps @ 14e0cb680

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneGroomCacheSectionTemplateParameters,&UE::CoreUObject::Private::Construct<FMovieSceneGroomCacheSectionTemplateParameters>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneGroomCacheSectionTemplateParameters>,&UE::CoreUObject::Private::Destruct<FMovieSceneGroomCacheSectionTemplateParameters>,&UE::CoreUObject::Private::Copy<FMovieSceneGroomCacheSectionTemplateParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e0cb6c0

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneGroomCacheSectionTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneGroomCacheSectionTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneGroomCacheSectionTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneGroomCacheSectionTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneGroomCacheSectionTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// AddPass<`FComputeShaderUtils::AddPass<FClearPressureGridCS>'::__l2::<lambda_1>_> @ 14e0cbbb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FClearPressureGridCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearPressureGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearPressureGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearPressureGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FCompositeCoreDilateShader **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPass<`FComputeShaderUtils::AddPass<FClearVelocityGridCS>'::__l2::<lambda_1>_> @ 14e0cbd40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FClearVelocityGridCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearVelocityGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearVelocityGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearVelocityGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FAutoExposureDownsampleCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPass<`FComputeShaderUtils::AddPass<FCopyVelocityGridCS>'::__l2::<lambda_1>_> @ 14e0cbed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FCopyVelocityGridCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFCopyVelocityGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFCopyVelocityGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FCopyVelocityGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FAutoExposureReduceCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPass<`FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>'::__l2::<lambda_1>_> @ 14e0cc060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::AddPass<_FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFInterpolateGroomGuidesCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFInterpolateGroomGuidesCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FInterpolateGroomGuidesCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FTextureMultiplyCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FClearPressureGridCS>'::__l2::<lambda_1>_> @ 14e0ccb70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FClearPressureGridCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearPressureGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearPressureGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearPressureGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FCompositeCoreDilateShader **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FClearVelocityGridCS>'::__l2::<lambda_1>_> @ 14e0ccd00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FClearVelocityGridCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFClearVelocityGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFClearVelocityGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FClearVelocityGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FAutoExposureDownsampleCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FCopyVelocityGridCS>'::__l2::<lambda_1>_> @ 14e0cce90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FCopyVelocityGridCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFCopyVelocityGridCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFCopyVelocityGridCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FCopyVelocityGridCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FAutoExposureReduceCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>'::__l2::<lambda_1>_> @ 14e0cd020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFInterpolateGroomGuidesCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFInterpolateGroomGuidesCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FInterpolateGroomGuidesCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FTextureMultiplyCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// BindForLegacyShaderParameters<FClearPressureGridCS::FParameters> @ 14e0cd680

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FClearPressureGridCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FClearPressureGridCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FClearVelocityGridCS::FParameters> @ 14e0cd6e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FClearVelocityGridCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FClearVelocityGridCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FCopyVelocityGridCS::FParameters> @ 14e0cd740

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FCopyVelocityGridCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FCopyVelocityGridCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FInterpolateGroomGuidesCS::FParameters> @ 14e0cd7a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FInterpolateGroomGuidesCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FInterpolateGroomGuidesCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// CastChecked<UNiagaraDataInterfaceHairStrands_const_,UNiagaraDataInterface_const_> @ 14e0cd800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraDataInterfaceHairStrands * __cdecl
CastChecked<UNiagaraDataInterfaceHairStrands_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceHairStrands_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceHairStrands::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceHairStrands *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceHairStrands_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVelocityGrid_const_,UNiagaraDataInterface_const_> @ 14e0cd8c0

UNiagaraDataInterfaceVelocityGrid * __cdecl
CastChecked<UNiagaraDataInterfaceVelocityGrid_const_,UNiagaraDataInterface_const_>
          (UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVelocityGrid_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVelocityGrid::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVelocityGrid *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVelocityGrid_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UGroomComponent,UObject> @ 14e0cd980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UGroomComponent * __cdecl CastChecked<UGroomComponent,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UGroomComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UGroomComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UGroomComponent *)param_1;
  }
  pFVar3 = GetTypeName<UGroomComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UMovieSceneGroomCacheSection,UMovieSceneSection_const_> @ 14e0cda40

UMovieSceneGroomCacheSection * __cdecl
CastChecked<UMovieSceneGroomCacheSection,UMovieSceneSection_const_>(UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneGroomCacheSection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneGroomCacheSection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneGroomCacheSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneGroomCacheSection>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceHairStrands,UNiagaraDataInterface> @ 14e0cdb00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraDataInterfaceHairStrands * __cdecl
CastChecked<UNiagaraDataInterfaceHairStrands,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceHairStrands>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceHairStrands::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceHairStrands *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceHairStrands>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraDataInterfaceVelocityGrid,UNiagaraDataInterface> @ 14e0cdbc0

UNiagaraDataInterfaceVelocityGrid * __cdecl
CastChecked<UNiagaraDataInterfaceVelocityGrid,UNiagaraDataInterface>(UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceVelocityGrid>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDataInterfaceVelocityGrid::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceVelocityGrid *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceVelocityGrid>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ClearUnusedGraphResources<FClearPressureGridCS> @ 14e0cdc80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FClearPressureGridCS>
          (TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FClearVelocityGridCS> @ 14e0cdd00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FClearVelocityGridCS>
          (TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FCopyVelocityGridCS> @ 14e0cdd80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FCopyVelocityGridCS>
          (TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FInterpolateGroomGuidesCS> @ 14e0cde00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FInterpolateGroomGuidesCS>
          (TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// Enqueue<TRenderCommandTag<`FNDIHairStrandsData::Release'::__l5::TSTR_DeleteResource498>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e0ce430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNDIHairStrandsData::Release_::__l5::TSTR_DeleteResource498>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNDIHairStrandsData::Release'::__l5::TSTR_DeleteResource498>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14e0ce581;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14e0ce775;
  }
LAB_14e0ce581:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14e0ce65f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e0ce65f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14e0ce775:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNDIVelocityGridData::Release'::__l5::TSTR_DeleteResourceA89>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e0ce7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNDIVelocityGridData::Release_::__l5::TSTR_DeleteResourceA89>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNDIVelocityGridData::Release'::__l5::TSTR_DeleteResourceA89>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14e0ce901;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14e0ceaf5;
  }
LAB_14e0ce901:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14e0ce9df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e0ce9df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14e0ceaf5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNDIVelocityGridData::Release'::__l8::TSTR_DeleteResourceB100>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e0ceb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNDIVelocityGridData::Release_::__l8::TSTR_DeleteResourceB100>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNDIVelocityGridData::Release'::__l8::TSTR_DeleteResourceB100>::Get()
  ;
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14e0cec81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14e0cee75;
  }
LAB_14e0cec81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14e0ced5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e0ced5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14e0cee75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData185>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e0ceeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData185>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData185>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14e0cf001;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14e0cf1f5;
  }
LAB_14e0cf001:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14e0cf0df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e0cf0df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14e0cf1f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData887>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e0cf230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData887>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData887>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14e0cf381;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14e0cf575;
  }
LAB_14e0cf381:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14e0cf45f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e0cf45f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14e0cf575:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::__l8::TSTR_FNiagaraDIDestroyInstanceData908>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e0cf5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceHairStrands::PerInstanceTick_::__l8::TSTR_FNiagaraDIDestroyInstanceData908>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::__l8::TSTR_FNiagaraDIDestroyInstanceData908>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14e0cf701;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14e0cf8f5;
  }
LAB_14e0cf701:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14e0cf7df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e0cf7df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14e0cf8f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::TSTR_NiagaraInterpolateGroomSimCache1116>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e0cf930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame_::__l6::TSTR_NiagaraInterpolateGroomSimCache1116>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::TSTR_NiagaraInterpolateGroomSimCache1116>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14e0cfa81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14e0cfc75;
  }
LAB_14e0cfa81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14e0cfb5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e0cfb5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14e0cfc75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetFirstLoopStartOffsetAtTrimTime<FMovieSceneGroomCacheParams> @ 14e0cfe10

FFrameNumber __cdecl
GetFirstLoopStartOffsetAtTrimTime<FMovieSceneGroomCacheParams>
          (FQualifiedFrameTime *param_1,FMovieSceneGroomCacheParams *param_2,FFrameNumber param_3,
          FFrameRate param_4)

{
  int iVar1;
  undefined4 uVar2;
  TObjectPtr<UGroomCache>_u_0 TVar3;
  undefined4 uVar5;
  longlong lVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  int iVar9;
  undefined4 in_register_00000084;
  longlong *plVar10;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  float fVar17;
  double dVar18;
  double dVar19;
  float fStackX_c;
  undefined8 in_stack_00000028;
  
  plVar10 = (longlong *)CONCAT44(in_register_00000084,param_3.Value);
  fVar11 = *(float *)((longlong)plVar10 + 0x14);
  if ((float)((uint)*(float *)((longlong)plVar10 + 0x14) & __xmm_7fffffff7fffffff7fffffff7fffffff)
      <= __real_322bcc77) {
    fVar11 = __real_3f800000;
  }
  TVar3 = (param_2->GroomCache).field0_0x0;
  auVar16 = ZEXT816(0);
  uVar2 = param_2->FirstLoopStartFrameOffset;
  uVar5 = param_2->StartFrameOffset;
  fStackX_c = TVar3._4_4_;
  auVar13 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - 0.0)),1);
  fVar14 = (fStackX_c - 0.0) - auVar13._0_4_;
  if (FFrameTime::MaxSubframe <= fVar14) {
    fVar14 = FFrameTime::MaxSubframe;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  lVar8 = plVar10[2];
  iVar1 = *(int *)((longlong)plVar10 + 0xc);
  iVar9 = (int)((ulonglong)in_stack_00000028 >> 0x20);
  dVar18 = (double)iVar9;
  lVar4 = *plVar10;
  dVar19 = (double)(int)in_stack_00000028;
  if (lVar4 != 0) {
    auVar16._0_8_ = (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x10))(lVar4 + 0x30);
    auVar16._8_4_ = extraout_XMM0_Dc;
    auVar16._12_4_ = extraout_XMM0_Dd;
  }
  dVar15 = __real_3ff0000000000000 / dVar18;
  fVar17 = (float)((double)auVar16._0_4_ -
                  ((double)((longlong)iVar9 * (longlong)((int)lVar8 + iVar1)) + dVar18 * 0.0) /
                  (dVar19 * (double)fVar11));
  auVar12 = ZEXT416((uint)fVar17);
  fVar11 = FGenericPlatformMath::Fmod
                     ((float)((((double)(int)uVar5 * (double)fVar14 +
                               (double)((longlong)
                                        ((TVar3._0_4_ - param_4.Numerator) + (int)auVar13._0_4_) *
                                       (longlong)(int)uVar5)) / (double)(int)uVar2) * (double)fVar11
                             ),fVar17);
  dVar18 = (double)fVar11 * dVar19 * dVar15;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar18;
  auVar13 = roundpd(auVar12,auVar13,1);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (double)(int)(dVar18 - auVar13._0_8_) + dVar18;
  auVar16 = roundpd(auVar16,auVar12,1);
  dVar18 = auVar16._0_8_;
  if (__real_41dfffffffc00000 <= auVar16._0_8_) {
    dVar18 = __real_41dfffffffc00000;
  }
  if (dVar18 <= __real_c1e0000000000000) {
    dVar18 = __real_c1e0000000000000;
  }
  dVar15 = (double)fVar17 * dVar19 * dVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar15;
  auVar13 = roundpd(auVar13,auVar6,1);
  dVar19 = dVar15 - auVar13._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (double)(int)dVar19 + dVar15;
  auVar13 = roundpd(ZEXT416((uint)(float)dVar19),auVar7,1);
  dVar19 = auVar13._0_8_;
  if (__real_41dfffffffc00000 <= auVar13._0_8_) {
    dVar19 = __real_41dfffffffc00000;
  }
  if (dVar19 <= __real_c1e0000000000000) {
    dVar19 = __real_c1e0000000000000;
  }
  (param_1->Time).FrameNumber.Value = ((int)dVar18 + (int)plVar10[1]) % (int)dVar19;
  return (FFrameNumber)(int)param_1;
}

// GetTypeName<UNiagaraDataInterfaceHairStrands_const_> @ 14e0d00d0

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceHairStrands_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceHairStrands::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVelocityGrid_const_> @ 14e0d0110

FString * __cdecl
GetTypeName<UNiagaraDataInterfaceVelocityGrid_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVelocityGrid::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UGroomComponent> @ 14e0d0150

FString * __cdecl GetTypeName<UGroomComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UGroomComponent_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneGroomCacheSection> @ 14e0d0190

FString * __cdecl GetTypeName<UMovieSceneGroomCacheSection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneGroomCacheSection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceHairStrands> @ 14e0d01d0

FString * __cdecl GetTypeName<UNiagaraDataInterfaceHairStrands>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceHairStrands::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDataInterfaceVelocityGrid> @ 14e0d0210

FString * __cdecl GetTypeName<UNiagaraDataInterfaceVelocityGrid>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDataInterfaceVelocityGrid::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UMovieSceneGroomCacheSection> @ 14e0d0250

void __cdecl InternalConstructor<UMovieSceneGroomCacheSection>(FObjectInitializer *param_1)

{
  UMovieSceneSection *this;
  
  this = (UMovieSceneSection *)param_1->Obj;
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneGroomCacheSection__6B_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    (this->BlendType).BlendType = Absolute;
    (this->BlendType).bIsValid = true;
    (this->EvalOptions).bCanEditCompletionMode = true;
    (this->EvalOptions).CompletionMode = ProjectDefault;
  }
  return;
}

// InternalConstructor<UMovieSceneGroomCacheTrack> @ 14e0d02c0

void __cdecl InternalConstructor<UMovieSceneGroomCacheTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneGroomCacheTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneGroomCacheTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneGroomCacheTrack__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 5;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceHairStrands> @ 14e0d0330

void __cdecl InternalConstructor<UNiagaraDataInterfaceHairStrands>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  undefined8 local_res8;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    pFVar2 = (FNiagaraDataInterfaceProxy *)0x0;
    this->_padding_ =
         (longlong)&UNiagaraDataInterfaceHairStrands::_vftable__for__UNiagaraDataInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)
         &UNiagaraDataInterfaceHairStrands::_vftable__for__INiagaraSimCacheCustomStorageInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res8);
    pFVar1 = operator_new(0x60);
    if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar1[2]._padding_ = 0;
      pFVar1[2].SourceDIName.ComparisonIndex = 0;
      pFVar1[2].SourceDIName.Number = 0;
      pFVar1[4].SourceDIName.ComparisonIndex = 0;
      pFVar1[4].SourceDIName.Number = 0;
      pFVar1[5].SourceDIName.ComparisonIndex = 0;
      pFVar1[5].SourceDIName.Number = 0;
      pFVar1->_padding_ = (longlong)&___7FNDIHairStrandsProxy__6B_;
      (pFVar1->SourceDIName).ComparisonIndex = 0;
      (pFVar1->SourceDIName).Number = 0;
      pFVar1[1]._padding_ = 0;
      pFVar1[1].SourceDIName.ComparisonIndex = 0;
      pFVar1[1].SourceDIName.Number = 0;
      pFVar1[3]._padding_ = 0;
      pFVar1[3].SourceDIName.ComparisonIndex.Value = 0;
      pFVar1[3].SourceDIName.Number = 0x80;
      *(undefined4 *)&pFVar1[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar1[4]._padding_ + 4) = 0;
      pFVar1[5]._padding_ = 0;
      pFVar2 = pFVar1;
    }
    pFVar1 = (this->Proxy).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->Proxy).Ptr = pFVar2, pFVar1 != (FNiagaraDataInterfaceProxy *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014e0d0402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfacePressureGrid> @ 14e0d0420

void __cdecl InternalConstructor<UNiagaraDataInterfacePressureGrid>(FObjectInitializer *param_1)

{
  UNiagaraDataInterfaceVelocityGrid *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this = (UNiagaraDataInterfaceVelocityGrid *)param_1->Obj;
  if (this != (UNiagaraDataInterfaceVelocityGrid *)0x0) {
    UNiagaraDataInterfaceVelocityGrid::UNiagaraDataInterfaceVelocityGrid(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraDataInterfacePressureGrid__6B_;
    puVar1 = operator_new(0x60);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[9] = 0;
      puVar1[0xb] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
      *(undefined4 *)(puVar1 + 8) = 0xffffffff;
      puVar1[10] = 0;
      *puVar1 = &___7FNDIPressureGridProxy__6B_;
      puVar2 = puVar1;
    }
    puVar1 = (undefined8 *)this->_padding_;
    if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    this->NumAttributes = 0x12;
  }
  return;
}

// InternalConstructor<UNiagaraDataInterfaceVelocityGrid> @ 14e0d04d0

void __cdecl InternalConstructor<UNiagaraDataInterfaceVelocityGrid>(FObjectInitializer *param_1)

{
  if ((UNiagaraDataInterfaceVelocityGrid *)param_1->Obj != (UNiagaraDataInterfaceVelocityGrid *)0x0)
  {
    UNiagaraDataInterfaceVelocityGrid::UNiagaraDataInterfaceVelocityGrid
              ((UNiagaraDataInterfaceVelocityGrid *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneGroomCacheSection> @ 14e0d04f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneGroomCacheSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneGroomCacheSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneGroomCacheSection__6B_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneGroomCacheTrack> @ 14e0d05c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneGroomCacheTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneGroomCacheTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this =
         &UMovieSceneGroomCacheTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneGroomCacheTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneGroomCacheTrack__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceHairStrands> @ 14e0d06a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceHairStrands>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceHairStrands::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNiagaraDataInterfaceHairStrands::_vftable__for__UNiagaraDataInterface__;
    this[1]._padding_ =
         (longlong)
         &UNiagaraDataInterfaceHairStrands::_vftable__for__INiagaraSimCacheCustomStorageInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfacePressureGrid> @ 14e0d0770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfacePressureGrid>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfacePressureGrid::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfacePressureGrid__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVelocityGrid> @ 14e0d0820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVelocityGrid>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterfaceRWBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceVelocityGrid::GetPrivateStaticClass();
  this = (UNiagaraDataInterfaceRWBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterfaceRWBase *)0x0) {
    UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase(this,param_1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceVelocityGrid__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UMovieSceneGroomCacheSection> @ 14e0d08d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneGroomCacheSection * __cdecl
NewObject<UMovieSceneGroomCacheSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneGroomCacheSection *pUVar2;
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
  pUVar1 = UMovieSceneGroomCacheSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneGroomCacheSection *)
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

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 14e0d13b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::__l2::<lambda_1>,1,0> @ 14e0d13d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNDIHairStrandsData::Release'::__l5::<lambda_1>,1,0> @ 14e0d13f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIHairStrandsData::Release'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNDIHairStrandsData::Release_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIHairStrandsData::Release'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNDIVelocityGridData::Release'::__l5::<lambda_1>,1,0> @ 14e0d1410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIVelocityGridData::Release'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNDIVelocityGridData::Release_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIVelocityGridData::Release'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::<lambda_1>,1,1> @ 14e0d1430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame_::__l6::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::`6'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::__l8::<lambda_1>,1,0> @ 14e0d1450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UNiagaraDataInterfaceHairStrands::PerInstanceTick_::__l8::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNDIVelocityGridData::Release'::__l8::<lambda_2>,1,0> @ 14e0d1470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIVelocityGridData::Release'::__l8::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FNDIVelocityGridData::Release_::__l8::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIVelocityGridData::Release'::`8'::<lambda_2>,1,0>::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{280}' @ 14e0d30e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneGroomCacheTrack::`vector deleting
   destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneGroomCacheTrack::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneGroomCacheTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneGroomCacheTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14e0d30f8

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraDataInterfaceHairStrands::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraDataInterfaceHairStrands::_vector_deleting_destructor__adjustor_56__
          (UNiagaraDataInterfaceHairStrands *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraDataInterfaceHairStrands *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14e0d3110

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3140

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3170

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d31a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d31d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3200

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3230

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3260

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3290

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d32c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d32f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3350

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3380

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d33b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d33e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3410

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3440

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3470

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirDragBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d34a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d34d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3500

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3530

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3560

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3590

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d35c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d35f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3620

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3650

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3680

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d36b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d36e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3710

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3740

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3770

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d37a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d37d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3800

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3830

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3860

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3890

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d38c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d38f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3920

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3950

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3980

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d39b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d39e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3a10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3a40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3a70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3aa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3ad0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3b00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3b30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3b60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3b90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3bc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3bf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3c20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3c50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3c80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3cb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3ce0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3d10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3d40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3d70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3da0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3dd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3e00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3e30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3e60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3e90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3ec0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3ef0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3f20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3f50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3f80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3fb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d3fe0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4010

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4040

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4070

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d40a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d40d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4100

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4130

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4160

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4190

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d41c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d41f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4280

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d42b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder::Bind'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d42e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIHairStrandsData::Release'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIHairStrandsData::Release'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d43a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIVelocityGridData::Release'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIVelocityGridData::Release'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d43e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::`6'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIVelocityGridData::Release'::__l8::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNDIVelocityGridData::Release'::`8'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d44a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FClearPressureGridCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FClearPressureGridCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d44d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FClearVelocityGridCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FClearVelocityGridCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4500

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FCopyVelocityGridCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FCopyVelocityGridCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FInterpolateGroomGuidesCS::FParameters>::_scalar_deleting_destructor_
          (TObject<FInterpolateGroomGuidesCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4560

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FClearPressureGridCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d45c0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FClearVelocityGridCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4620

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FCopyVelocityGridCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4680

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d46e0

void * __thiscall
FGroomCacheExecutionToken::_scalar_deleting_destructor_
          (FGroomCacheExecutionToken *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FNDIHairStrandsBuffer::_scalar_deleting_destructor_(FNDIHairStrandsBuffer *this,uint param_1)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  FNiagaraPooledRWBuffer::Release(&this->ParamsScaleBuffer);
  pFVar2 = (this->ParamsScaleBuffer).Buffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FNiagaraPooledRWBuffer::Release(&this->BoundingBoxBuffer);
  pFVar2 = (this->BoundingBoxBuffer).Buffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d47e0

void * __thiscall
FNDIHairStrandsProxy::_scalar_deleting_destructor_(FNDIHairStrandsProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIHairStrandsData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIHairStrandsData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIHairStrandsData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4850

void * __thiscall
FNDIPressureGridProxy::_scalar_deleting_destructor_(FNDIPressureGridProxy *this,uint param_1)

{
  *(undefined4 *)&this->field_0x58 = 0;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVelocityGridData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVelocityGridData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVelocityGridData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x10);
  *(undefined ***)this = &___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d48c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FNDIVelocityGridBuffer::_scalar_deleting_destructor_(FNDIVelocityGridBuffer *this,uint param_1)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  FNiagaraPooledRWBuffer::Release(&this->GridDataBuffer);
  pFVar2 = (this->GridDataBuffer).Buffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4940

void * __thiscall
FNDIVelocityGridProxy::_scalar_deleting_destructor_(FNDIVelocityGridProxy *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SystemInstancesToProxyData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVelocityGridData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVelocityGridData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDIVelocityGridData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d49b0

void * __thiscall
FPreAnimatedGroomCacheTokenProducer::_scalar_deleting_destructor_
          (FPreAnimatedGroomCacheTokenProducer *this,uint param_1)

{
  *this = (FPreAnimatedGroomCacheTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d49f0

void * __thiscall
`FPreAnimatedGroomCacheTokenProducer::CacheExistingState'::__l2::FToken::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IMovieScenePreAnimatedToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4a30

void * __thiscall
UMovieSceneGroomCacheSection::_scalar_deleting_destructor_
          (UMovieSceneGroomCacheSection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneGroomCacheSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4a90

void * __thiscall
UMovieSceneGroomCacheTrack::_scalar_deleting_destructor_
          (UMovieSceneGroomCacheTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneGroomCacheTrack__6B_;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UNiagaraDataInterfaceHairStrands::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceHairStrands *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4ba0

void * __thiscall
UNiagaraDataInterfacePressureGrid::_scalar_deleting_destructor_
          (UNiagaraDataInterfacePressureGrid *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceVelocityGrid__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e0d4c00

void * __thiscall
UNiagaraDataInterfaceVelocityGrid::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceVelocityGrid *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVelocityGrid__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// ClearBuffer @ 14e0d9480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearBuffer(FRDGBuilder *param_1,Type param_2,FNDIVelocityGridBuffer *param_3,
           FNDIVelocityGridBuffer *param_4,TIntVector3<int> *param_5,bool param_6)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this;
  FShaderType *pFVar8;
  FName this_00;
  undefined8 *puVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferUAV *pFVar11;
  FRDGEventName *pFVar12;
  FShaderParametersMetadata *pFVar13;
  int iVar14;
  undefined8 *local_b8;
  uint local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined8 local_98;
  int local_90;
  TIntVector3<int>_u_0 local_88;
  TShaderRefBase<FClearPressureGridCS,FShaderMapPointerTable> local_78;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  undefined1 local_58 [8];
  FString local_50;
  FRDGEventName local_40;
  
  if (((param_3->GridDataBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0) &&
     ((param_4->GridDataBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0)) {
    local_90 = (param_5->field0_0x0)._s_0.Z;
    uVar4 = *(undefined8 *)&param_5->field0_0x0;
    local_98._0_4_ = (int)uVar4;
    local_98._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
    local_a8 = (int)local_98 + 1;
    uStack_a4 = local_98._4_4_ + 1;
    iVar14 = local_90 + 1;
    uVar1 = (int)local_98 + 4;
    uVar2 = local_98._4_4_ + 4;
    local_b0 = local_90 + 4U >> 2;
    local_98 = uVar4;
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
    pFVar8 = (FShaderType *)FClearPressureGridCS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_68,pFVar8,0);
    if (local_68.ShaderContent == (FShader *)0x0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_58);
      FName::ToString((FName *)this_00,&local_50);
      FClearPressureGridCS::GetStaticType();
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FClearPressureGridCS::GetStaticType();
    local_78.ShaderContent = (FClearPressureGridCS *)local_68.ShaderContent;
    local_78.ShaderMap = local_68.ShaderMap;
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar9[4] = 0;
      *puVar9 = &___7__TObject_VFParameters_FClearPressureGridCS___FRDGAllocator__6B_;
      puVar9[5] = 0;
    }
    local_b8 = puVar9;
    if ((((undefined8 **)param_1->_padding_ <= &local_b8) &&
        (&local_b8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar6 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    piVar3 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar7 == *piVar3) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar3);
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_b8;
    *(ulonglong *)&(((FParameters *)(puVar9 + 2))->GridSize).field0_0x0 =
         CONCAT44(uStack_a4,local_a8);
    *(int *)(puVar9 + 3) = iVar14;
    *(uint *)((longlong)puVar9 + 0x1c) = (uint)param_6;
    pFVar10 = FNiagaraPooledRWBuffer::GetOrCreateSRV(&param_3->GridDataBuffer,param_1);
    puVar9[4] = pFVar10;
    pFVar11 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&param_4->GridDataBuffer,param_1);
    puVar9[5] = pFVar11;
    local_a8 = uVar1 >> 2;
    uStack_a4 = uVar2 >> 2;
    pFVar12 = FRDGEventName::FRDGEventName(&local_40,1,L"VelocityGrid::ClearTexture");
    pFVar13 = FClearPressureGridCS::FParameters::FTypeInfo::GetStructMetadata();
    local_88._0_8_ = CONCAT44(uStack_a4,local_a8);
    local_88._s_0.Z = local_b0;
    FComputeShaderUtils::AddPass<FClearPressureGridCS>
              (param_1,pFVar12,Compute,&local_78,pFVar13,(FParameters *)(puVar9 + 2),
               (TIntVector3<int> *)&local_88._s_0);
    if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ClearTexture @ 14e0d97a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
ClearTexture(FRDGBuilder *param_1,FNDIVelocityGridBuffer *param_2,TIntVector3<int> *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGlobalShaderMap *this;
  FShaderType *pFVar7;
  FName this_00;
  undefined8 *puVar8;
  FRDGBufferUAV *pFVar9;
  FRDGEventName *pFVar10;
  FShaderParametersMetadata *pFVar11;
  uint uVar12;
  undefined1 local_res20 [8];
  undefined8 *local_b8;
  uint local_b0;
  uint uStack_ac;
  TIntVector3<int>_u_0 local_98;
  TShaderRefBase<FClearVelocityGridCS,FShaderMapPointerTable> local_88;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  FString local_68;
  FRDGEventName local_58;
  
  if ((param_2->GridDataBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0) {
    iVar2 = (param_3->field0_0x0)._s_0.Y;
    uStack_ac = iVar2 + 1;
    local_b0 = ((param_3->field0_0x0)._s_0.X + 1) * param_2->NumAttributes;
    iVar3 = (param_3->field0_0x0)._s_0.Z;
    uVar12 = local_b0 + 3;
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
    pFVar7 = (FShaderType *)FClearVelocityGridCS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_78,pFVar7,0);
    if (local_78.ShaderContent == (FShader *)0x0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
      FName::ToString((FName *)this_00,&local_68);
      FClearVelocityGridCS::GetStaticType();
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FClearVelocityGridCS::GetStaticType();
    local_88.ShaderContent = (FClearVelocityGridCS *)local_78.ShaderContent;
    local_88.ShaderMap = local_78.ShaderMap;
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      puVar8[4] = 0;
      *puVar8 = &___7__TObject_VFParameters_FClearVelocityGridCS___FRDGAllocator__6B_;
    }
    local_b8 = puVar8;
    if ((((undefined8 **)param_1->_padding_ <= &local_b8) &&
        (&local_b8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar6 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_b8;
    *(ulonglong *)&(((FParameters *)(puVar8 + 2))->GridSize).field0_0x0 =
         CONCAT44(uStack_ac,local_b0);
    *(int *)(puVar8 + 3) = iVar3 + 1;
    pFVar9 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&param_2->GridDataBuffer,param_1);
    puVar8[4] = pFVar9;
    local_b0 = uVar12 >> 2;
    uStack_ac = iVar2 + 4U >> 2;
    pFVar10 = FRDGEventName::FRDGEventName(&local_58,1,L"VelocityGrid::ClearTexture");
    pFVar11 = FClearVelocityGridCS::FParameters::FTypeInfo::GetStructMetadata();
    local_98._0_8_ = CONCAT44(uStack_ac,local_b0);
    local_98._s_0.Z = iVar3 + 4U >> 2;
    FComputeShaderUtils::AddPass<FClearVelocityGridCS>
              (param_1,pFVar10,Compute,&local_88,pFVar11,(FParameters *)(puVar8 + 2),
               (TIntVector3<int> *)&local_98._s_0);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ComputeBoneTransform @ 14e0d9c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TMatrix<float> * __cdecl
ComputeBoneTransform
          (TMatrix<float> *__return_storage_ptr__,FNDIHairStrandsData *param_1,
          TRefCountPtr<FHairGroupInstance> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  bool bVar21;
  int iVar22;
  FNDIHairStrandsData *pFVar23;
  TMatrix<double> *pTVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar32;
  double dVar28;
  double dVar29;
  uint uVar33;
  uint uVar36;
  double dVar34;
  undefined1 auVar30 [16];
  double dVar35;
  undefined1 auVar31 [16];
  undefined1 auStack_1b8 [32];
  TMatrix<double> local_198;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (param_1 != (FNDIHairStrandsData *)0x0) {
    pFVar23 = param_1;
    if (param_2->Reference != (FHairGroupInstance *)0x0) {
      pFVar23 = (FNDIHairStrandsData *)&(param_2->Reference->Debug).RigidCurrentLocalToWorld;
    }
    local_b8.Rotation.XY.m128d_f64 = *&(pFVar23->WorldTransform).Rotation.XY.m128d_f64;
    uVar27 = (uint)__xmm_7ff00000000000007ff0000000000000;
    uVar32 = __xmm_7ff00000000000007ff0000000000000._4_4_;
    uVar33 = __xmm_7ff00000000000007ff0000000000000._8_4_;
    uVar36 = __xmm_7ff00000000000007ff0000000000000._12_4_;
    local_b8.Rotation.ZW.m128d_f64 = *&(pFVar23->WorldTransform).Rotation.ZW.m128d_f64;
    local_b8.Translation.XY.m128d_f64[0]._0_4_ =
         *(uint *)(pFVar23->WorldTransform).Translation.XY.m128d_f64;
    local_b8.Translation.XY.m128d_f64[0]._4_4_ =
         *(uint *)((longlong)(pFVar23->WorldTransform).Translation.XY.m128d_f64 + 4);
    local_b8.Translation.XY.m128d_f64[1]._0_4_ =
         *(uint *)((pFVar23->WorldTransform).Translation.XY.m128d_f64 + 1);
    local_b8.Translation.XY.m128d_f64[1]._4_4_ =
         *(uint *)((longlong)(pFVar23->WorldTransform).Translation.XY.m128d_f64 + 0xc);
    local_b8.Translation.ZW.m128d_f64[0]._0_4_ =
         *(uint *)(pFVar23->WorldTransform).Translation.ZW.m128d_f64;
    local_b8.Translation.ZW.m128d_f64[0]._4_4_ =
         *(uint *)((longlong)(pFVar23->WorldTransform).Translation.ZW.m128d_f64 + 4);
    local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
         *(uint *)((pFVar23->WorldTransform).Translation.ZW.m128d_f64 + 1);
    local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
         *(uint *)((longlong)(pFVar23->WorldTransform).Translation.ZW.m128d_f64 + 0xc);
    local_b8.Scale3D.XY.m128d_f64[0]._0_4_ = *(uint *)(pFVar23->WorldTransform).Scale3D.XY.m128d_f64
    ;
    local_b8.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(uint *)((longlong)(pFVar23->WorldTransform).Scale3D.XY.m128d_f64 + 4);
    local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
         *(uint *)((pFVar23->WorldTransform).Scale3D.XY.m128d_f64 + 1);
    local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(uint *)((longlong)(pFVar23->WorldTransform).Scale3D.XY.m128d_f64 + 0xc);
    dVar35 = (double)__xmm_7ff00000000000007ff0000000000000;
    dVar28 = __xmm_7ff00000000000007ff0000000000000._8_8_;
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar36 & local_b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                uVar33 & local_b8.Rotation.ZW.m128d_f64[1]._0_4_) == dVar28);
    local_b8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(uint *)(pFVar23->WorldTransform).Scale3D.ZW.m128d_f64
    ;
    local_b8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(uint *)((longlong)(pFVar23->WorldTransform).Scale3D.ZW.m128d_f64 + 4);
    local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         *(uint *)((pFVar23->WorldTransform).Scale3D.ZW.m128d_f64 + 1);
    local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(uint *)((longlong)(pFVar23->WorldTransform).Scale3D.ZW.m128d_f64 + 0xc);
    auVar1._8_4_ = (int)lVar26;
    auVar1._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar32 & local_b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                      uVar27 & local_b8.Rotation.ZW.m128d_f64[0]._0_4_) == dVar35);
    auVar1._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar25 = movmskpd((int)__return_storage_ptr__,auVar1);
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar36 & local_b8.Rotation.XY.m128d_f64[1]._4_4_,
                                uVar33 & local_b8.Rotation.XY.m128d_f64[1]._0_4_) == dVar28);
    auVar5._8_4_ = (int)lVar26;
    auVar5._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar32 & local_b8.Rotation.XY.m128d_f64[0]._4_4_,
                                      uVar27 & local_b8.Rotation.XY.m128d_f64[0]._0_4_) == dVar35);
    auVar5._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar22 = movmskpd((int)pFVar23,auVar5);
    if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
      lVar26 = -(ulonglong)
                ((double)CONCAT44(uVar36 & local_b8.Translation.ZW.m128d_f64[1]._4_4_,
                                  uVar33 & local_b8.Translation.ZW.m128d_f64[1]._0_4_) == dVar28);
      auVar2._8_4_ = (int)lVar26;
      auVar2._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar32 & local_b8.Translation.ZW.m128d_f64[0]._4_4_,
                                        uVar27 & local_b8.Translation.ZW.m128d_f64[0]._0_4_) ==
                      dVar35);
      auVar2._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar25 = movmskpd(0,auVar2);
      lVar26 = -(ulonglong)
                ((double)CONCAT44(uVar36 & local_b8.Translation.XY.m128d_f64[1]._4_4_,
                                  uVar33 & local_b8.Translation.XY.m128d_f64[1]._0_4_) == dVar28);
      auVar6._8_4_ = (int)lVar26;
      auVar6._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar32 & local_b8.Translation.XY.m128d_f64[0]._4_4_,
                                        uVar27 & local_b8.Translation.XY.m128d_f64[0]._0_4_) ==
                      dVar35);
      auVar6._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      iVar22 = movmskpd(iVar22,auVar6);
      if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
        lVar26 = -(ulonglong)
                  ((double)CONCAT44(uVar36 & local_b8.Scale3D.ZW.m128d_f64[1]._4_4_,
                                    uVar33 & local_b8.Scale3D.ZW.m128d_f64[1]._0_4_) == dVar28);
        auVar3._8_4_ = (int)lVar26;
        auVar3._0_8_ = -(ulonglong)
                        ((double)CONCAT44(uVar32 & local_b8.Scale3D.ZW.m128d_f64[0]._4_4_,
                                          uVar27 & local_b8.Scale3D.ZW.m128d_f64[0]._0_4_) == dVar35
                        );
        auVar3._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        uVar25 = movmskpd(0,auVar3);
        lVar26 = -(ulonglong)
                  ((double)CONCAT44(uVar36 & local_b8.Scale3D.XY.m128d_f64[1]._4_4_,
                                    uVar33 & local_b8.Scale3D.XY.m128d_f64[1]._0_4_) == dVar28);
        auVar7._8_4_ = (int)lVar26;
        auVar7._0_8_ = -(ulonglong)
                        ((double)CONCAT44(uVar32 & local_b8.Scale3D.XY.m128d_f64[0]._4_4_,
                                          uVar27 & local_b8.Scale3D.XY.m128d_f64[0]._0_4_) == dVar35
                        );
        auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        iVar22 = movmskpd(iVar22,auVar7);
        if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
          dVar35 = local_b8.Rotation.ZW.m128d_f64[0] * local_b8.Rotation.ZW.m128d_f64[0] +
                   local_b8.Rotation.XY.m128d_f64[0] * local_b8.Rotation.XY.m128d_f64[0];
          dVar28 = local_b8.Rotation.ZW.m128d_f64[1] * local_b8.Rotation.ZW.m128d_f64[1] +
                   local_b8.Rotation.XY.m128d_f64[1] * local_b8.Rotation.XY.m128d_f64[1];
          dVar29 = dVar28 + dVar35;
          dVar35 = dVar35 + dVar28;
          dVar28 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar29;
          dVar34 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar35;
          auVar30._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar30._8_4_ = SUB84(dVar34,0) & _UNK_15061cc88;
          auVar30._12_4_ = (uint)((ulonglong)dVar34 >> 0x20) & _UNK_15061cc8c;
          lVar26 = -(ulonglong)
                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar30._8_8_
                    );
          auVar8._8_4_ = (int)lVar26;
          auVar8._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                          auVar30._0_8_);
          auVar8._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
          uVar25 = movmskpd(0,auVar8);
          dVar29 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar29;
          dVar35 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar35;
          auVar31._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar31._8_4_ = SUB84(dVar35,0) & _UNK_15061cc88;
          auVar31._12_4_ = (uint)((ulonglong)dVar35 >> 0x20) & _UNK_15061cc8c;
          lVar26 = -(ulonglong)
                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar31._8_8_
                    );
          auVar4._8_4_ = (int)lVar26;
          auVar4._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                          auVar31._0_8_);
          auVar4._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
          iVar22 = movmskpd(iVar22,auVar4);
          if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
            bVar21 = UE::Math::TTransform<double>::IsValid(&param_1->BoneTransform);
            if (bVar21) {
              local_118.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_118.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_118.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_118.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_118.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_118.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_118.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_118.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_118.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_118.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_118.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_118.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              UE::Math::TTransform<double>::Multiply(&local_118,&param_1->BoneTransform,&local_b8);
              pTVar24 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_118,&local_198);
              dVar35 = pTVar24->M[0][0];
              dVar28 = pTVar24->M[0][1];
              dVar29 = pTVar24->M[0][2];
              dVar34 = pTVar24->M[0][3];
              dVar9 = pTVar24->M[3][2];
              dVar10 = pTVar24->M[3][3];
              dVar11 = pTVar24->M[1][2];
              dVar12 = pTVar24->M[1][3];
              dVar13 = pTVar24->M[1][1];
              dVar14 = pTVar24->M[2][2];
              dVar15 = pTVar24->M[2][3];
              dVar16 = pTVar24->M[2][0];
              dVar17 = pTVar24->M[2][1];
              dVar18 = pTVar24->M[3][0];
              dVar19 = pTVar24->M[3][1];
              __return_storage_ptr__->M[1][0] = (float)pTVar24->M[1][0];
              __return_storage_ptr__->M[1][1] = (float)dVar13;
              __return_storage_ptr__->M[1][2] = (float)dVar11;
              __return_storage_ptr__->M[1][3] = (float)dVar12;
              __return_storage_ptr__->M[3][0] = (float)dVar18;
              __return_storage_ptr__->M[3][1] = (float)dVar19;
              __return_storage_ptr__->M[3][2] = (float)dVar9;
              __return_storage_ptr__->M[3][3] = (float)dVar10;
              __return_storage_ptr__->M[0][0] = (float)dVar35;
              __return_storage_ptr__->M[0][1] = (float)dVar28;
              __return_storage_ptr__->M[0][2] = (float)dVar29;
              __return_storage_ptr__->M[0][3] = (float)dVar34;
              *(ulonglong *)__return_storage_ptr__->M[2] = CONCAT44((float)dVar17,(float)dVar16);
              *(ulonglong *)(__return_storage_ptr__->M[2] + 2) =
                   CONCAT44((float)dVar15,(float)dVar14);
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  uVar20 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)__return_storage_ptr__->M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar20;
  uVar20 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)__return_storage_ptr__->M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar20;
  uVar20 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)__return_storage_ptr__->M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = uVar20;
  uVar20 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)__return_storage_ptr__->M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(__return_storage_ptr__->M[3] + 2) = uVar20;
  return __return_storage_ptr__;
}

// ComputeTickingGroup @ 14e0da030

ETickingGroup __cdecl ComputeTickingGroup(TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> param_1)

{
  UObject *pUVar1;
  byte bVar2;
  ETickingGroup EVar3;
  ETickingGroup EVar4;
  FWeakObjectPtr local_res8;
  
  local_res8 = param_1.WeakPtr;
  pUVar1 = FWeakObjectPtr::Get(&local_res8);
  EVar4 = TG_PrePhysics;
  if (pUVar1 != (UObject *)0x0) {
    pUVar1 = FWeakObjectPtr::Get(&local_res8);
    bVar2 = pUVar1[1].field_0x19;
    pUVar1 = FWeakObjectPtr::Get(&local_res8);
    if (bVar2 < (byte)pUVar1[1].field_0x18) {
      bVar2 = pUVar1[1].field_0x18;
    }
    EVar3 = TG_LastDemotable;
    if (bVar2 + TG_StartPhysics < TG_LastDemotable) {
      EVar3 = bVar2 + TG_StartPhysics;
    }
    if (EVar3 != TG_PrePhysics) {
      EVar4 = EVar3;
    }
  }
  return EVar4;
}

// ComputeWorldTransform @ 14e0da0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TMatrix<float> * __cdecl
ComputeWorldTransform
          (TMatrix<float> *__return_storage_ptr__,FNDIHairStrandsData *param_1,
          TRefCountPtr<FHairGroupInstance> *param_2)

{
  FHairGroupInstance *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  FNDIHairStrandsData *pFVar14;
  TMatrix<double> *pTVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar33;
  double dVar29;
  double dVar30;
  uint uVar34;
  uint uVar37;
  double dVar35;
  undefined1 auVar31 [16];
  double dVar36;
  undefined1 auVar32 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [8];
  float fStack_2e0;
  float fStack_2dc;
  undefined1 local_2d8 [8];
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  uint local_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  undefined1 local_288 [8];
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [32];
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (param_1 == (FNDIHairStrandsData *)0x0) {
    uVar10 = CONCAT44(UE::Math::TMatrix<float>::Identity.M[0][3],
                      UE::Math::TMatrix<float>::Identity.M[0][2]);
    *(ulonglong *)__return_storage_ptr__->M[0] =
         CONCAT44(UE::Math::TMatrix<float>::Identity.M[0][1],
                  UE::Math::TMatrix<float>::Identity.M[0][0]);
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar10;
    uVar10 = CONCAT44(UE::Math::TMatrix<float>::Identity.M[1][3],
                      UE::Math::TMatrix<float>::Identity.M[1][2]);
    *(ulonglong *)__return_storage_ptr__->M[1] =
         CONCAT44(UE::Math::TMatrix<float>::Identity.M[1][1],
                  UE::Math::TMatrix<float>::Identity.M[1][0]);
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar10;
    uVar10 = CONCAT44(UE::Math::TMatrix<float>::Identity.M[2][3],
                      UE::Math::TMatrix<float>::Identity.M[2][2]);
    *(ulonglong *)__return_storage_ptr__->M[2] =
         CONCAT44(UE::Math::TMatrix<float>::Identity.M[2][1],
                  UE::Math::TMatrix<float>::Identity.M[2][0]);
    *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = uVar10;
    uVar10 = CONCAT44(UE::Math::TMatrix<float>::Identity.M[3][3],
                      UE::Math::TMatrix<float>::Identity.M[3][2]);
    *(ulonglong *)__return_storage_ptr__->M[3] =
         CONCAT44(UE::Math::TMatrix<float>::Identity.M[3][1],
                  UE::Math::TMatrix<float>::Identity.M[3][0]);
    *(undefined8 *)(__return_storage_ptr__->M[3] + 2) = uVar10;
  }
  else {
    ComputeBoneTransform((TMatrix<float> *)local_288,param_1,param_2);
    pFVar1 = param_2->Reference;
    pFVar14 = param_1;
    if (pFVar1 != (FHairGroupInstance *)0x0) {
      lVar13 = 0x2c0;
      if (pFVar1->BindingType != Skinning) {
        lVar13 = 0x200;
      }
      pFVar14 = (FNDIHairStrandsData *)(&pFVar1->field_0x0 + lVar13);
    }
    _local_2d8 = *&(pFVar14->WorldTransform).Rotation.ZW.m128d_f64;
    _local_2e8 = *&(pFVar14->WorldTransform).Rotation.XY.m128d_f64;
    local_2c8 = *(float *)(pFVar14->WorldTransform).Translation.XY.m128d_f64;
    fStack_2c4 = *(float *)((longlong)(pFVar14->WorldTransform).Translation.XY.m128d_f64 + 4);
    fStack_2c0 = *(float *)((pFVar14->WorldTransform).Translation.XY.m128d_f64 + 1);
    fStack_2bc = *(float *)((longlong)(pFVar14->WorldTransform).Translation.XY.m128d_f64 + 0xc);
    uVar28 = (uint)__xmm_7ff00000000000007ff0000000000000;
    uVar33 = __xmm_7ff00000000000007ff0000000000000._4_4_;
    uVar34 = __xmm_7ff00000000000007ff0000000000000._8_4_;
    uVar37 = __xmm_7ff00000000000007ff0000000000000._12_4_;
    local_2b8 = *(float *)(pFVar14->WorldTransform).Translation.ZW.m128d_f64;
    fStack_2b4 = *(float *)((longlong)(pFVar14->WorldTransform).Translation.ZW.m128d_f64 + 4);
    fStack_2b0 = *(float *)((pFVar14->WorldTransform).Translation.ZW.m128d_f64 + 1);
    fStack_2ac = *(float *)((longlong)(pFVar14->WorldTransform).Translation.ZW.m128d_f64 + 0xc);
    local_2a8 = *(uint *)(pFVar14->WorldTransform).Scale3D.XY.m128d_f64;
    uStack_2a4 = *(uint *)((longlong)(pFVar14->WorldTransform).Scale3D.XY.m128d_f64 + 4);
    uStack_2a0 = *(uint *)((pFVar14->WorldTransform).Scale3D.XY.m128d_f64 + 1);
    uStack_29c = *(uint *)((longlong)(pFVar14->WorldTransform).Scale3D.XY.m128d_f64 + 0xc);
    local_298 = *(uint *)(pFVar14->WorldTransform).Scale3D.ZW.m128d_f64;
    uStack_294 = *(uint *)((longlong)(pFVar14->WorldTransform).Scale3D.ZW.m128d_f64 + 4);
    uStack_290 = *(uint *)((pFVar14->WorldTransform).Scale3D.ZW.m128d_f64 + 1);
    uStack_28c = *(uint *)((longlong)(pFVar14->WorldTransform).Scale3D.ZW.m128d_f64 + 0xc);
    dVar36 = (double)__xmm_7ff00000000000007ff0000000000000;
    dVar29 = __xmm_7ff00000000000007ff0000000000000._8_8_;
    lVar13 = -(ulonglong)
              ((double)CONCAT44(local_2d8._12_4_ & uVar37,local_2d8._8_4_ & uVar34) == dVar29);
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    ((double)CONCAT44(local_2d8._4_4_ & uVar33,local_2d8._0_4_ & uVar28) == dVar36);
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar16 = movmskpd((int)pFVar1,auVar2);
    lVar13 = -(ulonglong)
              ((double)CONCAT44(local_2e8._12_4_ & uVar37,local_2e8._8_4_ & uVar34) == dVar29);
    auVar4._8_4_ = (int)lVar13;
    auVar4._0_8_ = -(ulonglong)
                    ((double)CONCAT44(local_2e8._4_4_ & uVar33,local_2e8._0_4_ & uVar28) == dVar36);
    auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar12 = movmskpd((int)pFVar14,auVar4);
    fVar38 = UE::Math::TMatrix<float>::Identity.M[0][0];
    fVar39 = UE::Math::TMatrix<float>::Identity.M[0][1];
    fVar20 = UE::Math::TMatrix<float>::Identity.M[0][2];
    fVar24 = UE::Math::TMatrix<float>::Identity.M[0][3];
    fVar40 = UE::Math::TMatrix<float>::Identity.M[1][0];
    fVar41 = UE::Math::TMatrix<float>::Identity.M[1][1];
    fVar21 = UE::Math::TMatrix<float>::Identity.M[1][2];
    fVar25 = UE::Math::TMatrix<float>::Identity.M[1][3];
    fVar42 = UE::Math::TMatrix<float>::Identity.M[2][0];
    fVar43 = UE::Math::TMatrix<float>::Identity.M[2][1];
    fVar22 = UE::Math::TMatrix<float>::Identity.M[2][2];
    fVar26 = UE::Math::TMatrix<float>::Identity.M[2][3];
    fVar44 = UE::Math::TMatrix<float>::Identity.M[3][0];
    fVar45 = UE::Math::TMatrix<float>::Identity.M[3][1];
    fVar23 = UE::Math::TMatrix<float>::Identity.M[3][2];
    fVar27 = UE::Math::TMatrix<float>::Identity.M[3][3];
    if ((uVar16 & 0x3fffffff) == 0 && iVar12 == 0) {
      lVar13 = -(ulonglong)
                ((double)CONCAT44((uint)fStack_2ac & uVar37,(uint)fStack_2b0 & uVar34) == dVar29);
      auVar9._8_4_ = (int)lVar13;
      auVar9._0_8_ = -(ulonglong)
                      ((double)CONCAT44((uint)fStack_2b4 & uVar33,(uint)local_2b8 & uVar28) ==
                      dVar36);
      auVar9._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar16 = movmskpd(0,auVar9);
      lVar13 = -(ulonglong)
                ((double)CONCAT44((uint)fStack_2bc & uVar37,(uint)fStack_2c0 & uVar34) == dVar29);
      auVar8._8_4_ = (int)lVar13;
      auVar8._0_8_ = -(ulonglong)
                      ((double)CONCAT44((uint)fStack_2c4 & uVar33,(uint)local_2c8 & uVar28) ==
                      dVar36);
      auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      iVar12 = movmskpd(iVar12,auVar8);
      if ((uVar16 & 0x3fffffff) == 0 && iVar12 == 0) {
        lVar13 = -(ulonglong)((double)CONCAT44(uStack_28c & uVar37,uStack_290 & uVar34) == dVar29);
        auVar7._8_4_ = (int)lVar13;
        auVar7._0_8_ = -(ulonglong)
                        ((double)CONCAT44(uStack_294 & uVar33,local_298 & uVar28) == dVar36);
        auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
        uVar16 = movmskpd(0,auVar7);
        lVar13 = -(ulonglong)((double)CONCAT44(uStack_29c & uVar37,uStack_2a0 & uVar34) == dVar29);
        auVar6._8_4_ = (int)lVar13;
        auVar6._0_8_ = -(ulonglong)
                        ((double)CONCAT44(uStack_2a4 & uVar33,local_2a8 & uVar28) == dVar36);
        auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
        iVar12 = movmskpd(iVar12,auVar6);
        if ((uVar16 & 0x3fffffff) == 0 && iVar12 == 0) {
          dVar36 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
          dVar29 = local_2d8._8_8_ * local_2d8._8_8_ + local_2e8._8_8_ * local_2e8._8_8_;
          dVar30 = dVar29 + dVar36;
          dVar36 = dVar36 + dVar29;
          dVar29 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar30;
          dVar35 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar36;
          auVar31._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar31._8_4_ = SUB84(dVar35,0) & _UNK_15061cc88;
          auVar31._12_4_ = (uint)((ulonglong)dVar35 >> 0x20) & _UNK_15061cc8c;
          lVar13 = -(ulonglong)
                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar31._8_8_
                    );
          auVar5._8_4_ = (int)lVar13;
          auVar5._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                          auVar31._0_8_);
          auVar5._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
          uVar16 = movmskpd(0,auVar5);
          dVar30 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar30;
          dVar36 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar36;
          auVar32._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar32._8_4_ = SUB84(dVar36,0) & _UNK_15061cc88;
          auVar32._12_4_ = (uint)((ulonglong)dVar36 >> 0x20) & _UNK_15061cc8c;
          lVar13 = -(ulonglong)
                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar32._8_8_
                    );
          auVar3._8_4_ = (int)lVar13;
          auVar3._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                          auVar32._0_8_);
          auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
          iVar12 = movmskpd(iVar12,auVar3);
          if ((uVar16 & 0x3fffffff) == 0 && iVar12 == 0) {
            pTVar15 = UE::Math::TTransform<double>::ToMatrixWithScale
                                ((TTransform<double> *)local_2e8,(TMatrix<double> *)local_208);
            fVar38 = (float)pTVar15->M[0][0];
            fVar39 = (float)pTVar15->M[0][1];
            fVar20 = (float)pTVar15->M[0][2];
            fVar24 = (float)pTVar15->M[0][3];
            fVar40 = (float)pTVar15->M[1][0];
            fVar41 = (float)pTVar15->M[1][1];
            fVar21 = (float)pTVar15->M[1][2];
            fVar25 = (float)pTVar15->M[1][3];
            fVar42 = (float)pTVar15->M[2][0];
            fVar43 = (float)pTVar15->M[2][1];
            fVar22 = (float)pTVar15->M[2][2];
            fVar26 = (float)pTVar15->M[2][3];
            fVar44 = (float)pTVar15->M[3][0];
            fVar45 = (float)pTVar15->M[3][1];
            fVar23 = (float)pTVar15->M[3][2];
            fVar27 = (float)pTVar15->M[3][3];
          }
        }
      }
    }
    local_2e8._4_4_ = fVar39;
    local_2e8._0_4_ = fVar38;
    fStack_2e0 = fVar20;
    fStack_2dc = fVar24;
    local_2d8._4_4_ = fVar41;
    local_2d8._0_4_ = fVar40;
    fStack_2d0 = fVar21;
    fStack_2cc = fVar25;
    local_2c8 = fVar42;
    fStack_2c4 = fVar43;
    fStack_2c0 = fVar22;
    fStack_2bc = fVar26;
    local_2b8 = fVar44;
    fStack_2b4 = fVar45;
    fStack_2b0 = fVar23;
    fStack_2ac = fVar27;
    if (param_1->LocalSimulation != false) {
      local_1e8 = (double)fVar40;
      dStack_1e0 = (double)fVar41;
      local_208._8_4_ = SUB84((double)fVar39,0);
      local_208._0_8_ = (double)fVar38;
      local_208._12_4_ = (int)((ulonglong)(double)fVar39 >> 0x20);
      local_1a8 = (double)fVar44;
      dStack_1a0 = (double)fVar45;
      local_1c8._8_4_ = SUB84((double)fVar43,0);
      local_1c8._0_8_ = (double)fVar42;
      local_1c8._12_4_ = (int)((ulonglong)(double)fVar43 >> 0x20);
      local_188._0_8_ = (undefined8)(float)local_288._0_4_;
      local_188._8_8_ = (undefined8)(float)local_288._4_4_;
      local_1f8._8_4_ = SUB84((double)fVar24,0);
      local_1f8._0_8_ = (double)fVar20;
      local_1f8._12_4_ = (int)((ulonglong)(double)fVar24 >> 0x20);
      local_1d8._8_4_ = SUB84((double)fVar25,0);
      local_1d8._0_8_ = (double)fVar21;
      local_1d8._12_4_ = (int)((ulonglong)(double)fVar25 >> 0x20);
      local_1b8._8_4_ = SUB84((double)fVar26,0);
      local_1b8._0_8_ = (double)fVar22;
      local_1b8._12_4_ = (int)((ulonglong)(double)fVar26 >> 0x20);
      local_198._8_4_ = SUB84((double)fVar27,0);
      local_198._0_8_ = (double)fVar23;
      local_198._12_4_ = (int)((ulonglong)(double)fVar27 >> 0x20);
      local_168 = (double)local_278;
      dStack_160 = (double)fStack_274;
      local_188._24_4_ = SUB84((double)fStack_27c,0);
      local_188._16_8_ = (double)fStack_280;
      local_188._28_4_ = (int)((ulonglong)(double)fStack_27c >> 0x20);
      local_148 = (double)local_268;
      dStack_140 = (double)fStack_264;
      local_158._8_4_ = SUB84((double)fStack_26c,0);
      local_158._0_8_ = (double)fStack_270;
      local_158._12_4_ = (int)((ulonglong)(double)fStack_26c >> 0x20);
      local_128._0_8_ = (double)local_258;
      local_128._8_8_ = (double)fStack_254;
      local_138._8_4_ = SUB84((double)fStack_25c,0);
      local_138._0_8_ = (double)fStack_260;
      local_138._12_4_ = (int)((ulonglong)(double)fStack_25c >> 0x20);
      local_118._8_4_ = SUB84((double)fStack_24c,0);
      local_118._0_8_ = (double)fStack_250;
      local_118._12_4_ = (int)((ulonglong)(double)fStack_24c >> 0x20);
      pTVar15 = UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)local_188,&local_108);
      VectorMatrixMultiply((TMatrix<double> *)local_288,(TMatrix<double> *)local_208,pTVar15);
      fVar20 = (float)(double)CONCAT44(fStack_274,local_278);
      fVar24 = (float)(double)CONCAT44(fStack_26c,fStack_270);
      fVar38 = (float)(double)CONCAT44(local_288._4_4_,local_288._0_4_);
      fVar39 = (float)(double)CONCAT44(fStack_27c,fStack_280);
      fVar40 = (float)(double)CONCAT44(fStack_264,local_268);
      fVar41 = (float)(double)CONCAT44(fStack_25c,fStack_260);
      fVar42 = (float)local_248;
      fVar43 = (float)dStack_240;
      fVar44 = (float)local_228;
      fVar45 = (float)dStack_220;
      fVar21 = (float)(double)CONCAT44(fStack_254,local_258);
      fVar25 = (float)(double)CONCAT44(fStack_24c,fStack_250);
      local_2e8._4_4_ = fVar39;
      local_2e8._0_4_ = fVar38;
      fStack_2e0 = fVar20;
      fStack_2dc = fVar24;
      fVar22 = (float)local_238;
      fVar26 = (float)dStack_230;
      local_2d8._4_4_ = fVar41;
      local_2d8._0_4_ = fVar40;
      fStack_2d0 = fVar21;
      fStack_2cc = fVar25;
      fVar23 = (float)local_218;
      fVar27 = (float)dStack_210;
      local_2c8 = fVar42;
      fStack_2c4 = fVar43;
      fStack_2c0 = fVar22;
      fStack_2bc = fVar26;
      local_2b8 = fVar44;
      fStack_2b4 = fVar45;
      fStack_2b0 = fVar23;
      fStack_2ac = fVar27;
    }
    lVar13 = 0;
    pfVar19 = (float *)local_2e8;
    local_2c8 = fVar42;
    fStack_2c4 = fVar43;
    fStack_2c0 = fVar22;
    fStack_2bc = fVar26;
    local_2b8 = fVar44;
    fStack_2b4 = fVar45;
    fStack_2b0 = fVar23;
    fStack_2ac = fVar27;
    do {
      lVar17 = 0;
      pfVar18 = pfVar19;
      do {
        iVar12 = _finite((double)*pfVar18);
        if (iVar12 == 0) {
          bVar11 = UE::Math::TTransform<double>::IsValid(&param_1->WorldTransform);
          if (bVar11) {
            pTVar15 = UE::Math::TTransform<double>::ToMatrixWithScale
                                (&param_1->WorldTransform,&local_108);
            fVar20 = (float)pTVar15->M[0][2];
            fVar24 = (float)pTVar15->M[0][3];
            fVar38 = (float)pTVar15->M[0][0];
            fVar39 = (float)pTVar15->M[0][1];
            fVar21 = (float)pTVar15->M[1][2];
            fVar25 = (float)pTVar15->M[1][3];
            fVar40 = (float)pTVar15->M[1][0];
            fVar41 = (float)pTVar15->M[1][1];
            fVar22 = (float)pTVar15->M[2][2];
            fVar26 = (float)pTVar15->M[2][3];
            fVar42 = (float)pTVar15->M[2][0];
            fVar43 = (float)pTVar15->M[2][1];
            fVar23 = (float)pTVar15->M[3][2];
            fVar27 = (float)pTVar15->M[3][3];
            fVar44 = (float)pTVar15->M[3][0];
            fVar45 = (float)pTVar15->M[3][1];
          }
          goto LAB_14e0da4c7;
        }
        lVar17 = lVar17 + 1;
        pfVar18 = pfVar18 + 1;
      } while (lVar17 < 4);
      lVar13 = lVar13 + 1;
      pfVar19 = pfVar19 + 4;
    } while (lVar13 < 4);
LAB_14e0da4c7:
    __return_storage_ptr__->M[0][0] = fVar38;
    __return_storage_ptr__->M[0][1] = fVar39;
    __return_storage_ptr__->M[0][2] = fVar20;
    __return_storage_ptr__->M[0][3] = fVar24;
    __return_storage_ptr__->M[1][0] = fVar40;
    __return_storage_ptr__->M[1][1] = fVar41;
    __return_storage_ptr__->M[1][2] = fVar21;
    __return_storage_ptr__->M[1][3] = fVar25;
    __return_storage_ptr__->M[2][0] = fVar42;
    __return_storage_ptr__->M[2][1] = fVar43;
    __return_storage_ptr__->M[2][2] = fVar22;
    __return_storage_ptr__->M[2][3] = fVar26;
    __return_storage_ptr__->M[3][0] = fVar44;
    __return_storage_ptr__->M[3][1] = fVar45;
    __return_storage_ptr__->M[3][2] = fVar23;
    __return_storage_ptr__->M[3][3] = fVar27;
  }
  return __return_storage_ptr__;
}

// Convert @ 14e0dab40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FHairGroupInstanceRDG * __cdecl
Convert(FHairGroupInstanceRDG *__return_storage_ptr__,FRDGBuilder *param_1,
       TRefCountPtr<FHairGroupInstance> *param_2)

{
  int *piVar1;
  FRDGUserValidation *this;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FHairGroupInstance *pFVar8;
  FHairStrandsRestResource *pFVar9;
  FHairStrandsBulkData *pFVar10;
  FHairStrandsDeformedResource *pFVar11;
  FHairStrandsDeformedRootResource *pFVar12;
  FHairStrandsRestRootResource *pFVar13;
  code *pcVar14;
  float fVar15;
  FRDGBuffer *pFVar16;
  FRDGBuffer *pFVar17;
  double dVar18;
  undefined4 uVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  FRDGBufferSRV *pFVar23;
  FRDGImportedBuffer *pFVar24;
  FHairGroupInstanceRDG *pFVar25;
  FRDGBufferSRV *pFVar26;
  FRDGBufferSRV *pFVar27;
  FRDGBufferSRV *pFVar28;
  FRDGBuffer *pFVar29;
  FRDGBufferUAV *pFVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  FRDGBufferUAVDesc local_1b8;
  TIntVector4<unsigned_int>_u_0 local_1a8;
  undefined8 local_198;
  FRDGBufferDesc local_190;
  FRDGBufferSRVDesc local_178;
  FRDGBufferSRVDesc local_158;
  FRDGBufferSRVDesc local_138;
  FRDGBufferSRVDesc local_118;
  FRDGBufferUAV *local_e8;
  FRDGImportedBuffer local_e0;
  FRDGImportedBuffer local_c8;
  undefined4 local_a4;
  FRDGBufferUAV *local_a0;
  FRDGImportedBuffer local_98;
  FRDGImportedBuffer local_80 [3];
  
  uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->RestPositionOffsetValue).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  __return_storage_ptr__->NumPoints = 0;
  __return_storage_ptr__->NumCurves = 0;
  __return_storage_ptr__->SampleCount = 0;
  __return_storage_ptr__->RestPositionBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->DeformedPositionBufferUAV = (FRDGBufferUAV *)0x0;
  __return_storage_ptr__->DeformedPositionOffsetSRV = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->CurvesOffsetsBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->PointToCurveIndexBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->DeformedPositionBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->DeformedPositionOffset = (FRDGBuffer *)0x0;
  __return_storage_ptr__->PreviousDeformedPositionBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->PreviousDeformedPositionOffset = (FRDGBuffer *)0x0;
  __return_storage_ptr__->RestTrianglePositionBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->DeformedTrianglePositionBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->RootBarycentricCoordinatesBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->RootToUniqueTriangleIndexBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->RestSamplePositionsBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->MeshSampleWeightsBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->DeformedSamplePositionsBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bIsRootValid = false;
  __return_storage_ptr__->bIsDeformedValid = false;
  __return_storage_ptr__->MeshLODIndex = -1;
  __return_storage_ptr__->GeometryType = NoneGeometry;
  __return_storage_ptr__->BindingType = NoneBinding;
  (__return_storage_ptr__->RestPositionOffsetValue).field0_0x0._s_0.Z = (float)uVar19;
  dVar18 = __real_3fe0000000000000;
  pFVar8 = param_2->Reference;
  if ((pFVar8 != (FHairGroupInstance *)0x0) &&
     (pFVar9 = (pFVar8->Guides).RestResource, pFVar9 != (FHairStrandsRestResource *)0x0)) {
    fVar15 = __real_bf800000;
    if (pFVar8->HairGroupPublicData != (FHairGroupPublicData *)0x0) {
      fVar15 = pFVar8->HairGroupPublicData->MeshLODIndex;
    }
    uVar32 = (uint)fVar15;
    __return_storage_ptr__->GeometryType = pFVar8->GeometryType;
    pFVar10 = pFVar9->BulkData;
    __return_storage_ptr__->BindingType = pFVar8->BindingType;
    dVar2 = (pFVar10->Header).BoundingBox.Max.field0_0x0._s_0.Y;
    dVar3 = (pFVar10->Header).BoundingBox.Min.field0_0x0._s_0.Y;
    dVar4 = (pFVar10->Header).BoundingBox.Max.field0_0x0._s_0.X;
    dVar5 = (pFVar10->Header).BoundingBox.Min.field0_0x0._s_0.X;
    __return_storage_ptr__->NumPoints = (pFVar10->Header).PointCount;
    uVar21 = (pFVar10->Header).CurveCount;
    __return_storage_ptr__->MeshLODIndex = uVar32;
    __return_storage_ptr__->NumCurves = uVar21;
    dVar6 = (pFVar10->Header).BoundingBox.Max.field0_0x0._s_0.Z;
    dVar7 = (pFVar10->Header).BoundingBox.Min.field0_0x0._s_0.Z;
    (__return_storage_ptr__->RestPositionOffsetValue).field0_0x0._s_0.X =
         (float)((dVar4 + dVar5) * dVar18);
    (__return_storage_ptr__->RestPositionOffsetValue).field0_0x0._s_0.Y =
         (float)((dVar2 + dVar3) * dVar18);
    (__return_storage_ptr__->RestPositionOffsetValue).field0_0x0._s_0.Z =
         (float)((dVar6 + dVar7) * dVar18);
    pFVar23 = RegisterAsSRV(param_1,&pFVar9->PositionBuffer);
    __return_storage_ptr__->RestPositionBuffer = pFVar23;
    pFVar23 = RegisterAsSRV(param_1,&pFVar9->CurveBuffer);
    __return_storage_ptr__->CurvesOffsetsBuffer = pFVar23;
    pFVar23 = RegisterAsSRV(param_1,&pFVar9->PointToCurveBuffer);
    __return_storage_ptr__->PointToCurveIndexBuffer = pFVar23;
    pFVar11 = (param_2->Reference->Guides).DeformedResource;
    if (pFVar11 != (FHairStrandsDeformedResource *)0x0) {
      pFVar24 = Register(&local_98,param_1,pFVar11->DeformedPositionBuffer + pFVar11->CurrentIndex,
                         CreateUAV,None);
      local_e8 = pFVar24->UAV;
      pFVar29 = pFVar24->Buffer;
      pFVar24 = Register(local_80,param_1,
                         pFVar11->DeformedPositionBuffer + (1 - pFVar11->CurrentIndex),None,None);
      local_e0.UAV = pFVar24->UAV;
      pFVar16 = pFVar24->Buffer;
      pFVar24 = Register(&local_e0,param_1,pFVar11->DeformedOffsetBuffer + pFVar11->CurrentIndex,
                         CreateSRV,None);
      local_c8.UAV = pFVar24->UAV;
      pFVar17 = pFVar24->Buffer;
      pFVar23 = pFVar24->SRV;
      pFVar24 = Register(&local_c8,param_1,
                         pFVar11->DeformedOffsetBuffer + (1 - pFVar11->CurrentIndex),None,None);
      __return_storage_ptr__->DeformedPositionBuffer = pFVar29;
      __return_storage_ptr__->DeformedPositionOffset = pFVar17;
      local_a0 = pFVar24->UAV;
      pFVar29 = pFVar24->Buffer;
      __return_storage_ptr__->PreviousDeformedPositionBuffer = pFVar16;
      __return_storage_ptr__->DeformedPositionOffsetSRV = pFVar23;
      __return_storage_ptr__->DeformedPositionBufferUAV = local_e8;
      __return_storage_ptr__->PreviousDeformedPositionOffset = pFVar29;
    }
    pFVar12 = (param_2->Reference->Guides).DeformedRootResource;
    if (((pFVar12 != (FHairStrandsDeformedRootResource *)0x0) && (-1 < (int)uVar32)) &&
       ((int)uVar32 < (pFVar12->LODs).ArrayNum)) {
      if (((int)uVar32 < 0) &&
         (bVar20 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar14 = (code *)swi(3);
        pFVar25 = (FHairGroupInstanceRDG *)(*pcVar14)();
        return pFVar25;
      }
      lVar33 = (longlong)(int)uVar32;
      iVar22 = *(int *)(*(longlong *)((pFVar12->LODs).AllocatorInstance.Data + lVar33 * 8) + 0x60);
      if ((iVar22 == 1) || (iVar22 == 2)) {
        pFVar13 = (param_2->Reference->Guides).RestRootResource;
        if (((pFVar13->LODs).ArrayNum <= (int)uVar32) &&
           (bVar20 = FDebug::CheckVerifyFailedImpl2
                               ("LODs.IsValidIndex(InMeshLODIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                                ,0x1fb,L""), bVar20)) {
          pcVar14 = (code *)swi(3);
          pFVar25 = (FHairGroupInstanceRDG *)(*pcVar14)();
          return pFVar25;
        }
        uVar21 = 0;
        if ((int)uVar32 < (pFVar13->LODs).ArrayNum) {
          uVar21 = ~uVar32 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar14 = (code *)swi(3);
          pFVar25 = (FHairGroupInstanceRDG *)(*pcVar14)();
          return pFVar25;
        }
        lVar31 = *(longlong *)((pFVar13->LODs).AllocatorInstance.Data + lVar33 * 8);
        if (lVar31 != 0) {
          pFVar23 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar31 + 200));
          __return_storage_ptr__->RestTrianglePositionBuffer = pFVar23;
          pFVar23 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar31 + 0xa8));
          __return_storage_ptr__->RootBarycentricCoordinatesBuffer = pFVar23;
          pFVar23 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar31 + 0x88));
          __return_storage_ptr__->RootToUniqueTriangleIndexBuffer = pFVar23;
          pFVar23 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar31 + 0x130));
          __return_storage_ptr__->RestSamplePositionsBuffer = pFVar23;
          __return_storage_ptr__->SampleCount = *(uint *)(lVar31 + 0xe8);
        }
        pFVar12 = (param_2->Reference->Guides).DeformedRootResource;
        if (((pFVar12->LODs).ArrayNum <= (int)uVar32) &&
           (bVar20 = FDebug::CheckVerifyFailedImpl2
                               ("LODs.IsValidIndex(InMeshLODIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                                ,0x280,L""), bVar20)) {
          pcVar14 = (code *)swi(3);
          pFVar25 = (FHairGroupInstanceRDG *)(*pcVar14)();
          return pFVar25;
        }
        uVar21 = 0;
        if ((int)uVar32 < (pFVar12->LODs).ArrayNum) {
          uVar21 = ~uVar32 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar14 = (code *)swi(3);
          pFVar25 = (FHairGroupInstanceRDG *)(*pcVar14)();
          return pFVar25;
        }
        lVar33 = *(longlong *)((pFVar12->LODs).AllocatorInstance.Data + lVar33 * 8);
        if (lVar33 != 0) {
          bVar20 = IsHairStrandContinuousDecimationReorderingEnabled();
          lVar31 = lVar33;
          if (bVar20) {
            lVar31 = (ulonglong)*(uint *)(lVar33 + 0x130) * 0x20 + lVar33;
          }
          pFVar23 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar31 + 0x68));
          __return_storage_ptr__->DeformedTrianglePositionBuffer = pFVar23;
          bVar20 = IsHairStrandContinuousDecimationReorderingEnabled();
          lVar31 = lVar33;
          if (bVar20) {
            lVar31 = (ulonglong)*(uint *)(lVar33 + 0x130) * 0x20 + lVar33;
          }
          pFVar23 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar31 + 0xf0));
          __return_storage_ptr__->MeshSampleWeightsBuffer = pFVar23;
          bVar20 = IsHairStrandContinuousDecimationReorderingEnabled();
          if (bVar20) {
            lVar33 = (ulonglong)*(uint *)(lVar33 + 0x130) * 0x20 + lVar33;
          }
          pFVar23 = RegisterAsSRV(param_1,(FRDGExternalBuffer *)(lVar33 + 0xb0));
          __return_storage_ptr__->DeformedSamplePositionsBuffer = pFVar23;
          __return_storage_ptr__->bIsRootValid = __return_storage_ptr__->BindingType == Skinning;
        }
      }
    }
  }
  local_1a8._0_8_ = 0;
  local_1a8._8_8_ = 0;
  local_178.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer
                 ((FSystemTextures *)&GSystemTextures,param_1,0x10,
                  (TIntVector4<unsigned_int> *)&local_1a8._s_0);
  local_178._padding_._4_4_ = 0;
  local_178._padding_._0_4_ = 0xffffffff;
  local_178._padding_ = 0;
  local_178._padding_._0_1_ = 0;
  if ((((local_178.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_178._padding_._0_1_ = 0x1c;
  }
  pFVar23 = FRDGBuilder::CreateSRV(param_1,&local_178);
  local_158.Buffer =
       FSystemTextures::GetDefaultByteAddressBuffer
                 ((FSystemTextures *)&GSystemTextures,param_1,0x10);
  local_158._padding_._0_1_ = 0;
  local_158._padding_._4_4_ = 0;
  local_158._padding_._0_4_ = 0xffffffff;
  local_158._padding_ = 0;
  if ((((local_158.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_158._padding_._0_1_ = 0x1c;
  }
  pFVar26 = FRDGBuilder::CreateSRV(param_1,&local_158);
  local_138._padding_._0_1_ = 1;
  local_138._padding_._4_4_ = 0;
  local_138._padding_._0_4_ = 0xffffffff;
  local_138._padding_ = 0;
  local_138.Buffer =
       FSystemTextures::GetDefaultBuffer((FSystemTextures *)&GSystemTextures,param_1,0x10);
  pFVar27 = FRDGBuilder::CreateSRV(param_1,&local_138);
  local_118._padding_._0_1_ = 0x1c;
  local_118._padding_._4_4_ = 0;
  local_118._padding_._0_4_ = 0xffffffff;
  local_118._padding_ = 0;
  local_118.Buffer =
       FSystemTextures::GetDefaultBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  pFVar28 = FRDGBuilder::CreateSRV(param_1,&local_118);
  if ((__return_storage_ptr__->RestPositionBuffer == (FRDGBufferSRV *)0x0) ||
     ((int)((param_2->Reference->Guides).RestResource)->_padding_ == -1)) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  __return_storage_ptr__->bIsValid = bVar20;
  if ((__return_storage_ptr__->DeformedPositionBufferUAV == (FRDGBufferUAV *)0x0) ||
     ((int)((param_2->Reference->Guides).DeformedResource)->_padding_ == -1)) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  __return_storage_ptr__->bIsDeformedValid = bVar20;
  if (__return_storage_ptr__->RestPositionBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->RestPositionBuffer = pFVar26;
  }
  if (__return_storage_ptr__->DeformedPositionBufferUAV == (FRDGBufferUAV *)0x0) {
    local_198 = 0;
    this = &param_1->UserValidation;
    local_1a8._0_8_ = 0x400000004;
    local_1a8._s_0.W = local_a4;
    local_1a8._s_0.Z = 0x10119;
    local_190.Metadata = (FShaderParametersMetadata *)0x0;
    local_190.BytesPerElement = 4;
    local_190.NumElements = 4;
    local_190._8_8_ = local_1a8._8_8_;
    FRDGUserValidation::ValidateCreateBuffer(this,&local_190,L"Niagara.Hair.DummyUAV",None);
    uVar21 = local_190.BytesPerElement;
    if (local_190.BytesPerElement == 0) {
      uVar21 = 1;
    }
    if (local_190.NumElements == 0) {
      local_190.NumElements = 1;
    }
    local_190.BytesPerElement = uVar21;
    pFVar29 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
    pFVar29 = FRDGBuffer::FRDGBuffer(pFVar29,L"Niagara.Hair.DummyUAV",&local_190,None);
    piVar1 = &(param_1->Buffers).Array.ArrayMax;
    iVar22 = (param_1->Buffers).Array.ArrayNum;
    if (iVar22 == *piVar1) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                         (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,piVar1);
    }
    (param_1->Buffers).Array.ArrayNum = iVar22 + 1;
    (param_1->Buffers).Array.AllocatorInstance.Data[iVar22] = pFVar29;
    (pFVar29->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
    FRDGUserValidation::ValidateCreateBuffer(this,pFVar29);
    FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar29);
    local_1b8._padding_._1_1_ = 0;
    local_1b8._padding_._2_1_ = 0;
    local_1b8._padding_._0_1_ = 0;
    if (((pFVar29->Desc).Usage & DrawIndirect) != None) {
      local_1b8._padding_._0_1_ = 0x1c;
    }
    local_1b8.Buffer = pFVar29;
    FRDGUserValidation::ValidateCreateUAV(this,&local_1b8);
    pFVar29 = local_1b8.Buffer;
    pFVar30 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
    lVar33 = pFVar29->_padding_;
    piVar1 = &(param_1->Views).Array.ArrayMax;
    *(byte *)&pFVar30->_padding_ = (byte)pFVar30->_padding_ & 0xfe;
    *(undefined8 *)((longlong)&pFVar30->_padding_ + 4) = 0xffffffffffffffff;
    pFVar30->_padding_ = lVar33;
    pFVar30->_padding_ = 0;
    *(undefined1 *)&pFVar30->_padding_ = 2;
    *(undefined1 *)&pFVar30->_padding_ = 1;
    pFVar30->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
    (pFVar30->Desc)._padding_ =
         CONCAT53(local_1b8._padding_._3_5_,
                  CONCAT12(local_1b8._padding_._2_1_,
                           CONCAT11(local_1b8._padding_._1_1_,(undefined1)local_1b8._padding_)));
    (pFVar30->Desc).Buffer = local_1b8.Buffer;
    iVar22 = (param_1->Views).Array.ArrayNum;
    if (iVar22 == *piVar1) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                         (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
    }
    (param_1->Views).Array.ArrayNum = iVar22 + 1;
    (param_1->Views).Array.AllocatorInstance.Data[iVar22] = (FRDGView *)pFVar30;
    *(int *)((longlong)&pFVar30->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateUAV(this,pFVar30);
    __return_storage_ptr__->DeformedPositionBufferUAV = pFVar30;
  }
  if (__return_storage_ptr__->DeformedPositionOffsetSRV == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->DeformedPositionOffsetSRV = pFVar23;
  }
  if (__return_storage_ptr__->CurvesOffsetsBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->CurvesOffsetsBuffer = pFVar26;
  }
  if (__return_storage_ptr__->RestTrianglePositionBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->RestTrianglePositionBuffer = pFVar27;
  }
  if (__return_storage_ptr__->DeformedTrianglePositionBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->DeformedTrianglePositionBuffer = pFVar27;
  }
  if (__return_storage_ptr__->RootBarycentricCoordinatesBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->RootBarycentricCoordinatesBuffer = pFVar28;
  }
  if (__return_storage_ptr__->RootToUniqueTriangleIndexBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->RootToUniqueTriangleIndexBuffer = pFVar28;
  }
  if (__return_storage_ptr__->RestSamplePositionsBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->RestSamplePositionsBuffer = pFVar23;
  }
  if (__return_storage_ptr__->MeshSampleWeightsBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->MeshSampleWeightsBuffer = pFVar23;
  }
  if (__return_storage_ptr__->DeformedSamplePositionsBuffer == (FRDGBufferSRV *)0x0) {
    __return_storage_ptr__->DeformedSamplePositionsBuffer = pFVar23;
  }
  return __return_storage_ptr__;
}

// CopyTexture @ 14e0db940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
CopyTexture(FRDGBuilder *param_1,Type param_2,FNDIVelocityGridBuffer *param_3,
           FNDIVelocityGridBuffer *param_4,TIntVector3<int> *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this;
  FShaderType *pFVar8;
  FName this_00;
  undefined8 *puVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferUAV *pFVar11;
  FRDGEventName *pFVar12;
  FShaderParametersMetadata *pFVar13;
  undefined8 *local_c8;
  uint local_c0;
  uint uStack_bc;
  TIntVector3<int>_u_0 local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [8];
  FString local_80;
  TShaderRefBase<FCopyVelocityGridCS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  
  if (((param_4->GridDataBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0) &&
     ((param_3->GridDataBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0)) {
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2]);
    pFVar8 = (FShaderType *)FCopyVelocityGridCS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_98,pFVar8,0);
    if (local_98.ShaderContent == (FShader *)0x0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
      FName::ToString((FName *)this_00,&local_80);
      FCopyVelocityGridCS::GetStaticType();
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FCopyVelocityGridCS::GetStaticType();
    local_68.ShaderContent = (FCopyVelocityGridCS *)local_98.ShaderContent;
    local_68.ShaderMap = local_98.ShaderMap;
    iVar3 = (param_5->field0_0x0)._s_0.Y;
    local_c0 = ((param_5->field0_0x0)._s_0.X + 1) * param_4->NumAttributes;
    uStack_bc = iVar3 + 1;
    iVar4 = (param_5->field0_0x0)._s_0.Z;
    uVar1 = local_c0 + 3;
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar9[4] = 0;
      *puVar9 = &___7__TObject_VFParameters_FCopyVelocityGridCS___FRDGAllocator__6B_;
      puVar9[5] = 0;
    }
    local_c8 = puVar9;
    if ((((undefined8 **)param_1->_padding_ <= &local_c8) &&
        (&local_c8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar6 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar2);
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_c8;
    *(ulonglong *)&(((FParameters *)(puVar9 + 2))->GridSize).field0_0x0 =
         CONCAT44(uStack_bc,local_c0);
    *(int *)(puVar9 + 3) = iVar4 + 1;
    pFVar10 = FNiagaraPooledRWBuffer::GetOrCreateSRV(&param_3->GridDataBuffer,param_1);
    puVar9[4] = pFVar10;
    pFVar11 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&param_4->GridDataBuffer,param_1);
    puVar9[5] = pFVar11;
    local_c0 = uVar1 >> 2;
    uStack_bc = iVar3 + 4U >> 2;
    pFVar12 = FRDGEventName::FRDGEventName(&local_58,1,L"VelocityGrid::CopyTexture");
    pFVar13 = FCopyVelocityGridCS::FParameters::FTypeInfo::GetStructMetadata();
    local_a8._0_8_ = CONCAT44(uStack_bc,local_c0);
    local_a8._s_0.Z = iVar4 + 4U >> 2;
    FComputeShaderUtils::AddPass<FCopyVelocityGridCS>
              (param_1,pFVar12,Compute,&local_68,pFVar13,(FParameters *)(puVar9 + 2),
               (TIntVector3<int> *)&local_a8._s_0);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheSection @ 14e0e50b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheTemplate @ 14e0e50c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheTrack @ 14e0e50d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceHairStrands @ 14e0e50e0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceHairStrands(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePressureGrid @ 14e0e50f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePressureGrid(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVelocityGrid @ 14e0e5100

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVelocityGrid(void)

{
  return;
}

// InterpolateGroomGuides @ 14e0f2e70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
InterpolateGroomGuides
          (FRDGBuilder *param_1,FNiagaraDataBuffer *param_2,uint param_3,uint param_4,
          FNDIHairStrandsBuffer *param_5,TRefCountPtr<FHairGroupInstance> *param_6,uint param_7,
          TMatrix<float> *param_8)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FHairGroupInstanceRDG *pFVar10;
  FGlobalShaderMap *this;
  FShaderType *pFVar11;
  FName this_00;
  undefined8 *puVar12;
  FRDGEventName *pFVar13;
  FShaderParametersMetadata *pFVar14;
  undefined8 *local_1e8 [2];
  TIntVector3<int>_u_0 local_1d8;
  TShaderRefBase<FInterpolateGroomGuidesCS,FShaderMapPointerTable> local_1c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  FString local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  FRDGBufferSRV *pFStack_170;
  FRDGBufferUAV *local_168;
  FRDGBufferSRV *pFStack_160;
  FRDGBufferSRV *local_158;
  FRDGBufferSRV *pFStack_150;
  FRDGBuffer *local_148;
  FRDGBuffer *pFStack_140;
  FRDGBuffer *local_138;
  FRDGBuffer *pFStack_130;
  FRDGBufferSRV *local_128;
  FRDGBufferSRV *pFStack_120;
  FRDGBufferSRV *local_118;
  FRDGBufferSRV *pFStack_110;
  FRDGBufferSRV *local_108;
  FRDGBufferSRV *pFStack_100;
  FRDGBufferSRV *local_f8;
  FRDGEventName local_e8;
  FHairGroupInstanceRDG local_d0;
  
  pFVar10 = Convert(&local_d0,param_1,param_6);
  local_198._0_1_ = pFVar10->bIsValid;
  local_198._1_1_ = pFVar10->bIsRootValid;
  local_198._2_1_ = pFVar10->bIsDeformedValid;
  local_198._3_1_ = pFVar10->field_0x3;
  local_198._4_4_ = pFVar10->MeshLODIndex;
  uStack_190._0_4_ = pFVar10->GeometryType;
  uStack_190._4_4_ = pFVar10->BindingType;
  local_188._0_4_ = pFVar10->NumPoints;
  local_188._4_4_ = pFVar10->NumCurves;
  uVar3 = *(undefined8 *)((longlong)&(pFVar10->RestPositionOffsetValue).field0_0x0 + 4);
  pFStack_170 = pFVar10->RestPositionBuffer;
  uStack_180 = (undefined4)*(undefined8 *)&pFVar10->SampleCount;
  uStack_17c = (undefined4)((ulonglong)*(undefined8 *)&pFVar10->SampleCount >> 0x20);
  local_168 = pFVar10->DeformedPositionBufferUAV;
  pFStack_160 = pFVar10->DeformedPositionOffsetSRV;
  uStack_178 = (undefined4)uVar3;
  uStack_174 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_158 = pFVar10->CurvesOffsetsBuffer;
  pFStack_150 = pFVar10->PointToCurveIndexBuffer;
  local_148 = pFVar10->DeformedPositionBuffer;
  pFStack_140 = pFVar10->DeformedPositionOffset;
  local_138 = pFVar10->PreviousDeformedPositionBuffer;
  pFStack_130 = pFVar10->PreviousDeformedPositionOffset;
  local_118 = pFVar10->RootBarycentricCoordinatesBuffer;
  pFStack_110 = pFVar10->RootToUniqueTriangleIndexBuffer;
  local_128 = pFVar10->RestTrianglePositionBuffer;
  pFStack_120 = pFVar10->DeformedTrianglePositionBuffer;
  local_108 = pFVar10->RestSamplePositionsBuffer;
  pFStack_100 = pFVar10->MeshSampleWeightsBuffer;
  local_f8 = pFVar10->DeformedSamplePositionsBuffer;
  if ((param_5 == (FNDIHairStrandsBuffer *)0x0) || ((int)param_5->_padding_ == -1)) {
    bVar8 = false;
    bVar7 = false;
  }
  else {
    bVar5 = true;
    if (((undefined1)local_198 == '\0') || (bVar8 = bVar5, (undefined4)uStack_190 == 3)) {
      bVar8 = false;
    }
    bVar7 = true;
    if ((local_198._2_1_ != '\0') && ((undefined4)uStack_190 != 3)) {
      bVar7 = true;
      goto LAB_14e0f2f6c;
    }
  }
  bVar5 = bVar7;
  bVar7 = false;
LAB_14e0f2f6c:
  if ((((bVar5) && (local_198._1_1_ != '\0')) && ((undefined1)local_198 != '\0')) &&
     ((undefined4)uStack_190 != 3)) {
    iVar9 = 0;
  }
  else {
    iVar9 = 1;
  }
  if ((bVar8) && (bVar7)) {
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
    pFVar11 = (FShaderType *)FInterpolateGroomGuidesCS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_1b8,pFVar11,iVar9);
    if (local_1b8.ShaderContent == (FShader *)0x0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&param_5);
      FName::ToString((FName *)this_00,&local_1a8);
      FInterpolateGroomGuidesCS::GetStaticType();
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FInterpolateGroomGuidesCS::GetStaticType();
    local_1c8.ShaderContent = (FInterpolateGroomGuidesCS *)local_1b8.ShaderContent;
    local_1c8.ShaderMap = local_1b8.ShaderMap;
    puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xd0,0x10);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      *puVar12 = &___7__TObject_VFParameters_FInterpolateGroomGuidesCS___FRDGAllocator__6B_;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0x17] = 0;
    }
    local_1e8[0] = puVar12;
    if ((((undefined8 **)param_1->_padding_ <= local_1e8) &&
        (local_1e8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar8 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar9 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    iVar6 = (int)local_188;
    *(int *)&param_1->_padding_ = iVar9 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar9 * 8) = local_1e8[0];
    *(uint *)(puVar12 + 0x16) = param_7;
    *(int *)((longlong)puVar12 + 0xb4) = (int)local_188;
    puVar12[0x17] = (param_2->GPUBufferFloat).SRV.Reference;
    *(uint *)(puVar12 + 0x18) = param_2->FloatStride >> 2;
    *(uint *)((longlong)puVar12 + 0xc4) = param_3;
    *(uint *)(puVar12 + 0x19) = param_4;
    uVar3 = *(undefined8 *)(param_8->M[0] + 2);
    puVar12[0xe] = *(undefined8 *)param_8->M[0];
    puVar12[0xf] = uVar3;
    uVar3 = *(undefined8 *)(param_8->M[1] + 2);
    puVar12[0x10] = *(undefined8 *)param_8->M[1];
    puVar12[0x11] = uVar3;
    uVar3 = *(undefined8 *)(param_8->M[2] + 2);
    puVar12[0x12] = *(undefined8 *)param_8->M[2];
    puVar12[0x13] = uVar3;
    uVar3 = *(undefined8 *)param_8->M[3];
    uVar4 = *(undefined8 *)(param_8->M[3] + 2);
    puVar12[10] = pFStack_160;
    puVar12[0xc] = CONCAT44(uStack_178,uStack_17c);
    *(undefined4 *)(puVar12 + 0xd) = uStack_174;
    puVar12[7] = local_168;
    puVar12[8] = pFStack_170;
    puVar12[6] = pFStack_150;
    puVar12[9] = local_158;
    ((FParameters *)(puVar12 + 2))->RestTrianglePositionBuffer = local_128;
    puVar12[3] = pFStack_120;
    puVar12[4] = local_118;
    puVar12[5] = pFStack_110;
    puVar12[0x14] = uVar3;
    puVar12[0x15] = uVar4;
    pFVar13 = FRDGEventName::FRDGEventName(&local_e8,1,L"InterpolateGroomGuidesCS");
    pFVar14 = FInterpolateGroomGuidesCS::FParameters::FTypeInfo::GetStructMetadata();
    local_1d8._s_0.Y = 1;
    local_1d8._s_0.X = iVar6 + 0x1fU >> 5;
    local_1d8._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FInterpolateGroomGuidesCS>
              (param_1,pFVar13,Compute,&local_1c8,pFVar14,(FParameters *)(puVar12 + 2),
               (TIntVector3<int> *)&local_1d8._s_0);
    if (local_e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if ((local_148 != (FRDGBuffer *)0x0) && (local_138 != (FRDGBuffer *)0x0)) {
      AddCopyBufferPass(param_1,local_138,local_148);
      AddCopyBufferPass(param_1,pFStack_130,pFStack_140);
    }
  }
  return;
}

// WriteTransform @ 14e0fa510

void __cdecl WriteTransform(TMatrix<double> *param_1,FVectorVMExternalFunctionContext *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *local_res18;
  float *local_res20;
  float *local_1c8;
  float *local_1c0;
  int local_1b0 [4];
  int local_1a0 [4];
  int local_190 [4];
  int local_180 [4];
  int local_170 [4];
  int local_160 [4];
  int local_150 [4];
  int local_140 [4];
  int local_130 [2];
  float *local_128;
  float *local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  int local_50 [4];
  
  iVar6 = 0;
  local_140[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_140);
  local_150[0] = 0;
  pfVar1 = pfVar1 + local_140[0] * param_2->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_150);
  local_160[0] = 0;
  pfVar2 = pfVar2 + local_150[0] * param_2->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_160);
  local_170[0] = 0;
  pfVar3 = pfVar3 + local_160[0] * param_2->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_170);
  local_180[0] = 0;
  pfVar4 = pfVar4 + local_170[0] * param_2->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_180);
  local_190[0] = 0;
  pfVar5 = pfVar5 + local_180[0] * param_2->PerInstanceFnInstanceIdx;
  local_128 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_190);
  local_1a0[0] = 0;
  local_128 = local_128 + local_190[0] * param_2->PerInstanceFnInstanceIdx;
  local_120 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_1a0);
  local_1b0[0] = 0;
  local_120 = local_120 + local_1a0[0] * param_2->PerInstanceFnInstanceIdx;
  local_118 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_1b0);
  local_b0[0] = 0;
  local_118 = local_118 + local_1b0[0] * param_2->PerInstanceFnInstanceIdx;
  local_110 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_b0);
  local_110 = local_110 + local_b0[0] * param_2->PerInstanceFnInstanceIdx;
  local_a0[0] = 0;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_a0);
  local_90[0] = 0;
  local_108 = local_108 + local_a0[0] * param_2->PerInstanceFnInstanceIdx;
  local_100 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_90);
  local_80[0] = 0;
  local_100 = local_100 + local_90[0] * param_2->PerInstanceFnInstanceIdx;
  local_f8 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_80);
  local_70[0] = 0;
  local_f8 = local_f8 + local_80[0] * param_2->PerInstanceFnInstanceIdx;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_70);
  local_60[0] = 0;
  local_res18 = local_res18 + local_70[0] * param_2->PerInstanceFnInstanceIdx;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_60);
  local_50[0] = 0;
  local_res20 = local_res20 + local_60[0] * param_2->PerInstanceFnInstanceIdx;
  local_1c8 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_50);
  local_130[0] = 0;
  local_1c8 = local_1c8 + local_50[0] * param_2->PerInstanceFnInstanceIdx;
  local_1c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_130);
  local_1c0 = local_1c0 + local_130[0] * param_2->PerInstanceFnInstanceIdx;
  if (0 < param_2->NumInstances) {
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)param_1->M[0][0];
      pfVar1 = pfVar1 + local_140[0];
      *pfVar2 = (float)param_1->M[0][1];
      pfVar2 = pfVar2 + local_150[0];
      *pfVar3 = (float)param_1->M[0][2];
      pfVar3 = pfVar3 + local_160[0];
      *pfVar4 = (float)param_1->M[0][3];
      pfVar4 = pfVar4 + local_170[0];
      *pfVar5 = (float)param_1->M[1][0];
      pfVar5 = pfVar5 + local_180[0];
      *local_128 = (float)param_1->M[1][1];
      local_128 = local_128 + local_190[0];
      *local_120 = (float)param_1->M[1][2];
      local_120 = local_120 + local_1a0[0];
      *local_118 = (float)param_1->M[1][3];
      local_118 = local_118 + local_1b0[0];
      *local_110 = (float)param_1->M[2][0];
      local_110 = local_110 + local_b0[0];
      *local_108 = (float)param_1->M[2][1];
      local_108 = local_108 + local_a0[0];
      *local_100 = (float)param_1->M[2][2];
      local_100 = local_100 + local_90[0];
      *local_f8 = (float)param_1->M[2][3];
      local_f8 = local_f8 + local_80[0];
      *local_res18 = (float)param_1->M[3][0];
      local_res18 = local_res18 + local_70[0];
      *local_res20 = (float)param_1->M[3][1];
      local_res20 = local_res20 + local_60[0];
      *local_1c8 = (float)param_1->M[3][2];
      local_1c8 = local_1c8 + local_50[0];
      *local_1c0 = (float)param_1->M[3][3];
      local_1c0 = local_1c0 + local_130[0];
    } while (iVar6 < param_2->NumInstances);
  }
  return;
}

// Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister @ 14e0faa60

UClass * __cdecl Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"MovieSceneGroomCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton,
               UMovieSceneGroomCacheSection::StaticRegisterNativesUMovieSceneGroomCacheSection,0x130
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneGroomCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneGroomCacheSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister @ 14e0fab20

UClass * __cdecl Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"MovieSceneGroomCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton,
               UMovieSceneGroomCacheTrack::StaticRegisterNativesUMovieSceneGroomCacheTrack,0x130,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneGroomCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneGroomCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_NoRegister @ 14e0fabe0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceHairStrands_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfaceHairStrands",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton,
               UNiagaraDataInterfaceHairStrands::
               StaticRegisterNativesUNiagaraDataInterfaceHairStrands,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceHairStrands>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceHairStrands>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_NoRegister @ 14e0faca0

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfacePressureGrid_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfacePressureGrid",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton,
               UNiagaraDataInterfacePressureGrid::
               StaticRegisterNativesUNiagaraDataInterfacePressureGrid,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePressureGrid>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePressureGrid>,local_res8,
               UNiagaraDataInterfaceVelocityGrid::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_NoRegister @ 14e0fad60

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceVelocityGrid_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfaceVelocityGrid",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton,
               UNiagaraDataInterfaceVelocityGrid::
               StaticRegisterNativesUNiagaraDataInterfaceVelocityGrid,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVelocityGrid>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVelocityGrid>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate @ 14e0fae20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneGroomCacheSectionTemplate.InnerSingleton;
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

// ShaderTypeRegistration'' @ 150462ac0

void __cdecl `dynamic_atexit_destructor_for_'FClearPressureGridCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150462ad0

void __cdecl `dynamic_atexit_destructor_for_'FClearVelocityGridCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150462ae0

void __cdecl `dynamic_atexit_destructor_for_'FCopyVelocityGridCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150462af0

void __cdecl
`dynamic_atexit_destructor_for_'FInterpolateGroomGuidesCS::ShaderTypeRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableProxyInstanceTransform'' @ 150462b00

void __cdecl _dynamic_atexit_destructor_for__CVarEnableProxyInstanceTransform__(void)

{
  CVarEnableProxyInstanceTransform._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableProxyInstanceTransform);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairSimulationMaxDelay'' @ 150462b20

void __cdecl _dynamic_atexit_destructor_for__CVarHairSimulationMaxDelay__(void)

{
  CVarHairSimulationMaxDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairSimulationMaxDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHairSimulationRestUpdate'' @ 150462b40

void __cdecl _dynamic_atexit_destructor_for__CVarHairSimulationRestUpdate__(void)

{
  CVarHairSimulationRestUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHairSimulationRestUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'LogPressureGrid'' @ 150462b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPressureGrid__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPressureGrid);
  return;
}

// `dynamic_atexit_destructor_for_'LogVelocityGrid'' @ 150462b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVelocityGrid__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVelocityGrid);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150462ba0

void __cdecl
`FClearPressureGridCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FClearPressureGridCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150462bc0

void __cdecl
`FClearVelocityGridCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FClearVelocityGridCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150462be0

void __cdecl
`FCopyVelocityGridCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCopyVelocityGridCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150462c00

void __cdecl
`FInterpolateGroomGuidesCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FInterpolateGroomGuidesCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150462c20

void __cdecl
`NDIHairStrandsLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIHairStrandsLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150462c40

void __cdecl
`NDIVelocityGridLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIVelocityGridLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150462c60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FClearPressureGridCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150462c80

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FClearVelocityGridCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150462ca0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FCopyVelocityGridCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150462cc0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FInterpolateGroomGuidesCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

